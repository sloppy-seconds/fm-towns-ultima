#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00010939(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010939  call 0x1082b
    X86_AT(c, 0x10939u);
    push32(c, 0x1093eu); f_0001082b(c); X86_RET(c, 0x1093eu);
    X86_TICK(c, 18);
    // 01093e  and word ptr [edi + 0x30], 0
    X86_AT(c, 0x1093eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0x0u, 2)); }
    // 010943  cmp dx, word ptr [edi + 0x56]
    X86_AT(c, 0x10943u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u))), 0, 2);
    // 010947  jne 0x1094f
    X86_AT(c, 0x10947u);
    if (x86_cc(c, 5)) { goto L_1094f; }
    X86_TICK(c, 11);
    // 010949  cmp bx, word ptr [edi + 0x58]
    X86_AT(c, 0x10949u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u))), 0, 2);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
L_1094f:
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10939u, "ran off the end of a function");
}
void f_0001093e(X86Cpu& c) {
    X86_TICK(c, 18);
    // 01093e  and word ptr [edi + 0x30], 0
    X86_AT(c, 0x1093eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0x0u, 2)); }
    // 010943  cmp dx, word ptr [edi + 0x56]
    X86_AT(c, 0x10943u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u))), 0, 2);
    // 010947  jne 0x1094f
    X86_AT(c, 0x10947u);
    if (x86_cc(c, 5)) { goto L_1094f; }
    X86_TICK(c, 11);
    // 010949  cmp bx, word ptr [edi + 0x58]
    X86_AT(c, 0x10949u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u))), 0, 2);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
L_1094f:
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1093eu, "ran off the end of a function");
}
void f_00010943(X86Cpu& c) {
    X86_TICK(c, 11);
    // 010943  cmp dx, word ptr [edi + 0x56]
    X86_AT(c, 0x10943u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u))), 0, 2);
    // 010947  jne 0x1094f
    X86_AT(c, 0x10947u);
    if (x86_cc(c, 5)) { goto L_1094f; }
    X86_TICK(c, 11);
    // 010949  cmp bx, word ptr [edi + 0x58]
    X86_AT(c, 0x10949u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u))), 0, 2);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
L_1094f:
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10943u, "ran off the end of a function");
}
void f_00010947(X86Cpu& c) {
    X86_TICK(c, 5);
    // 010947  jne 0x1094f
    X86_AT(c, 0x10947u);
    if (x86_cc(c, 5)) { goto L_1094f; }
    X86_TICK(c, 11);
    // 010949  cmp bx, word ptr [edi + 0x58]
    X86_AT(c, 0x10949u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u))), 0, 2);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
L_1094f:
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10947u, "ran off the end of a function");
}
void f_00010949(X86Cpu& c) {
    X86_TICK(c, 11);
    // 010949  cmp bx, word ptr [edi + 0x58]
    X86_AT(c, 0x10949u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u))), 0, 2);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10949u, "ran off the end of a function");
}
void f_0001094d(X86Cpu& c) {
    X86_TICK(c, 5);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1094du, "ran off the end of a function");
}
void f_0001094f(X86Cpu& c) {
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1094fu, "ran off the end of a function");
}
void f_00010954(X86Cpu& c) {
    X86_TICK(c, 12);
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10954u, "ran off the end of a function");
}
void f_00010958(X86Cpu& c) {
    X86_TICK(c, 5);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10958u, "ran off the end of a function");
}
void f_0001095a(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1095au, "ran off the end of a function");
}
void f_0001095f(X86Cpu& c) {
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1095fu, "ran off the end of a function");
}
void f_00010962(X86Cpu& c) {
    X86_TICK(c, 20);
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10962u, "ran off the end of a function");
}
void f_00010966(X86Cpu& c) {
    X86_TICK(c, 17);
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10966u, "ran off the end of a function");
}
void f_00010969(X86Cpu& c) {
    X86_TICK(c, 13);
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10969u, "ran off the end of a function");
}
void f_0001096b(X86Cpu& c) {
    X86_TICK(c, 11);
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1096bu, "ran off the end of a function");
}
void f_0001096e(X86Cpu& c) {
    X86_TICK(c, 5);
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1096eu, "ran off the end of a function");
}
void f_00010970(X86Cpu& c) {
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10970u, "ran off the end of a function");
}
void f_00010973(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10973u, "ran off the end of a function");
}
void f_00010976(X86Cpu& c) {
    X86_TICK(c, 5);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10976u, "ran off the end of a function");
}
void f_00010978(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10978u, "ran off the end of a function");
}
void f_0001097a(X86Cpu& c) {
    X86_TICK(c, 5);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1097au, "ran off the end of a function");
}
void f_0001097c(X86Cpu& c) {
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1097cu, "ran off the end of a function");
}
void f_00010981(X86Cpu& c) {
    X86_TICK(c, 17);
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10981u, "ran off the end of a function");
}
void f_00010985(X86Cpu& c) {
    X86_TICK(c, 11);
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10985u, "ran off the end of a function");
}
void f_00010989(X86Cpu& c) {
    X86_TICK(c, 9);
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10989u, "ran off the end of a function");
}
void f_0001098d(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1098du, "ran off the end of a function");
}
void f_0001098f(X86Cpu& c) {
    X86_TICK(c, 24);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1098fu, "ran off the end of a function");
}
void f_00010994(X86Cpu& c) {
    X86_TICK(c, 17);
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10994u, "ran off the end of a function");
}
void f_00010998(X86Cpu& c) {
    X86_TICK(c, 11);
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10998u, "ran off the end of a function");
}
void f_0001099c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1099cu, "ran off the end of a function");
}
void f_000109a0(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x109a0u, "ran off the end of a function");
}
void f_000109a3(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x109a3u, "ran off the end of a function");
}
void f_000109cd(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x109cdu, "ran off the end of a function");
}
void f_000109d1(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x109d1u, "ran off the end of a function");
}
void f_000109d5(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x109d5u, "ran off the end of a function");
}
void f_000109ea(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x109eau, "ran off the end of a function");
}
void f_00010a2d(X86Cpu& c) {
    X86_TICK(c, 19);
    // 010a2d  mov cx, word ptr [edi + 0xb]
    X86_AT(c, 0x10a2du);
    s16(c, 1, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu))));
    // 010a31  pushfd 
    X86_AT(c, 0x10a31u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010a32  cli 
    X86_AT(c, 0x10a32u);
    c.fl &= ~X86_IF;
    // 010a33  call 0x10af7
    X86_AT(c, 0x10a33u);
    push32(c, 0x10a38u); f_00010af7(c); X86_RET(c, 0x10a38u);
    X86_TICK(c, 7);
    // 010a38  call 0x10b12
    X86_AT(c, 0x10a38u);
    push32(c, 0x10a3du); f_00010b12(c); X86_RET(c, 0x10a3du);
    X86_TICK(c, 18);
    // 010a3d  shl cx, 4
    X86_AT(c, 0x10a3du);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 1, r); }
    // 010a41  mov ah, cl
    X86_AT(c, 0x10a41u);
    s8(c, 4, g8(c, 1));
    // 010a43  not ch
    X86_AT(c, 0x10a43u);
    { uint32_t v = g8(c, 5); s8(c, 5, ~v & 0xFFu); }
    // 010a45  and ch, 3
    X86_AT(c, 0x10a45u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v & 0x3u, 1)); }
    // 010a48  mov byte ptr [edi + 0x44], ch
    X86_AT(c, 0x10a48u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u)), g8(c, 5));
    // 010a4b  call 0x10b0a
    X86_AT(c, 0x10a4bu);
    push32(c, 0x10a50u); f_00010b0a(c); X86_RET(c, 0x10a50u);
    X86_TICK(c, 16);
    // 010a50  and cl, 0xf
    X86_AT(c, 0x10a50u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a53  or cl, ah
    X86_AT(c, 0x10a53u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a55  neg cl
    X86_AT(c, 0x10a55u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a57  movsx ax, cl
    X86_AT(c, 0x10a57u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a5b  call 0x10a93
    X86_AT(c, 0x10a5bu);
    push32(c, 0x10a60u); f_00010a93(c); X86_RET(c, 0x10a60u);
    X86_TICK(c, 20);
    // 010a60  mov bx, ax
    X86_AT(c, 0x10a60u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 010a63  add word ptr [edi + 0x13], bx
    X86_AT(c, 0x10a63u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 010a67  mov cl, byte ptr [edi + 0xc]
    X86_AT(c, 0x10a67u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))));
    // 010a6a  call 0x10b0d
    X86_AT(c, 0x10a6au);
    push32(c, 0x10a6fu); f_00010b0d(c); X86_RET(c, 0x10a6fu);
    X86_TICK(c, 12);
    // 010a6f  shl cl, 4
    X86_AT(c, 0x10a6fu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 010a72  mov ah, cl
    X86_AT(c, 0x10a72u);
    s8(c, 4, g8(c, 1));
    // 010a74  call 0x10b0a
    X86_AT(c, 0x10a74u);
    push32(c, 0x10a79u); f_00010b0a(c); X86_RET(c, 0x10a79u);
    X86_TICK(c, 22);
    // 010a79  popfd 
    X86_AT(c, 0x10a79u);
    x86_popfd(c, 4);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a2du, "ran off the end of a function");
}
void f_00010a31(X86Cpu& c) {
    X86_TICK(c, 15);
    // 010a31  pushfd 
    X86_AT(c, 0x10a31u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010a32  cli 
    X86_AT(c, 0x10a32u);
    c.fl &= ~X86_IF;
    // 010a33  call 0x10af7
    X86_AT(c, 0x10a33u);
    push32(c, 0x10a38u); f_00010af7(c); X86_RET(c, 0x10a38u);
    X86_TICK(c, 7);
    // 010a38  call 0x10b12
    X86_AT(c, 0x10a38u);
    push32(c, 0x10a3du); f_00010b12(c); X86_RET(c, 0x10a3du);
    X86_TICK(c, 18);
    // 010a3d  shl cx, 4
    X86_AT(c, 0x10a3du);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 1, r); }
    // 010a41  mov ah, cl
    X86_AT(c, 0x10a41u);
    s8(c, 4, g8(c, 1));
    // 010a43  not ch
    X86_AT(c, 0x10a43u);
    { uint32_t v = g8(c, 5); s8(c, 5, ~v & 0xFFu); }
    // 010a45  and ch, 3
    X86_AT(c, 0x10a45u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v & 0x3u, 1)); }
    // 010a48  mov byte ptr [edi + 0x44], ch
    X86_AT(c, 0x10a48u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u)), g8(c, 5));
    // 010a4b  call 0x10b0a
    X86_AT(c, 0x10a4bu);
    push32(c, 0x10a50u); f_00010b0a(c); X86_RET(c, 0x10a50u);
    X86_TICK(c, 16);
    // 010a50  and cl, 0xf
    X86_AT(c, 0x10a50u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a53  or cl, ah
    X86_AT(c, 0x10a53u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a55  neg cl
    X86_AT(c, 0x10a55u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a57  movsx ax, cl
    X86_AT(c, 0x10a57u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a5b  call 0x10a93
    X86_AT(c, 0x10a5bu);
    push32(c, 0x10a60u); f_00010a93(c); X86_RET(c, 0x10a60u);
    X86_TICK(c, 20);
    // 010a60  mov bx, ax
    X86_AT(c, 0x10a60u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 010a63  add word ptr [edi + 0x13], bx
    X86_AT(c, 0x10a63u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 010a67  mov cl, byte ptr [edi + 0xc]
    X86_AT(c, 0x10a67u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))));
    // 010a6a  call 0x10b0d
    X86_AT(c, 0x10a6au);
    push32(c, 0x10a6fu); f_00010b0d(c); X86_RET(c, 0x10a6fu);
    X86_TICK(c, 12);
    // 010a6f  shl cl, 4
    X86_AT(c, 0x10a6fu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 010a72  mov ah, cl
    X86_AT(c, 0x10a72u);
    s8(c, 4, g8(c, 1));
    // 010a74  call 0x10b0a
    X86_AT(c, 0x10a74u);
    push32(c, 0x10a79u); f_00010b0a(c); X86_RET(c, 0x10a79u);
    X86_TICK(c, 22);
    // 010a79  popfd 
    X86_AT(c, 0x10a79u);
    x86_popfd(c, 4);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a31u, "ran off the end of a function");
}
void f_00010a32(X86Cpu& c) {
    X86_TICK(c, 9);
    // 010a32  cli 
    X86_AT(c, 0x10a32u);
    c.fl &= ~X86_IF;
    // 010a33  call 0x10af7
    X86_AT(c, 0x10a33u);
    push32(c, 0x10a38u); f_00010af7(c); X86_RET(c, 0x10a38u);
    X86_TICK(c, 7);
    // 010a38  call 0x10b12
    X86_AT(c, 0x10a38u);
    push32(c, 0x10a3du); f_00010b12(c); X86_RET(c, 0x10a3du);
    X86_TICK(c, 18);
    // 010a3d  shl cx, 4
    X86_AT(c, 0x10a3du);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 1, r); }
    // 010a41  mov ah, cl
    X86_AT(c, 0x10a41u);
    s8(c, 4, g8(c, 1));
    // 010a43  not ch
    X86_AT(c, 0x10a43u);
    { uint32_t v = g8(c, 5); s8(c, 5, ~v & 0xFFu); }
    // 010a45  and ch, 3
    X86_AT(c, 0x10a45u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v & 0x3u, 1)); }
    // 010a48  mov byte ptr [edi + 0x44], ch
    X86_AT(c, 0x10a48u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u)), g8(c, 5));
    // 010a4b  call 0x10b0a
    X86_AT(c, 0x10a4bu);
    push32(c, 0x10a50u); f_00010b0a(c); X86_RET(c, 0x10a50u);
    X86_TICK(c, 16);
    // 010a50  and cl, 0xf
    X86_AT(c, 0x10a50u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a53  or cl, ah
    X86_AT(c, 0x10a53u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a55  neg cl
    X86_AT(c, 0x10a55u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a57  movsx ax, cl
    X86_AT(c, 0x10a57u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a5b  call 0x10a93
    X86_AT(c, 0x10a5bu);
    push32(c, 0x10a60u); f_00010a93(c); X86_RET(c, 0x10a60u);
    X86_TICK(c, 20);
    // 010a60  mov bx, ax
    X86_AT(c, 0x10a60u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 010a63  add word ptr [edi + 0x13], bx
    X86_AT(c, 0x10a63u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 010a67  mov cl, byte ptr [edi + 0xc]
    X86_AT(c, 0x10a67u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))));
    // 010a6a  call 0x10b0d
    X86_AT(c, 0x10a6au);
    push32(c, 0x10a6fu); f_00010b0d(c); X86_RET(c, 0x10a6fu);
    X86_TICK(c, 12);
    // 010a6f  shl cl, 4
    X86_AT(c, 0x10a6fu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 010a72  mov ah, cl
    X86_AT(c, 0x10a72u);
    s8(c, 4, g8(c, 1));
    // 010a74  call 0x10b0a
    X86_AT(c, 0x10a74u);
    push32(c, 0x10a79u); f_00010b0a(c); X86_RET(c, 0x10a79u);
    X86_TICK(c, 22);
    // 010a79  popfd 
    X86_AT(c, 0x10a79u);
    x86_popfd(c, 4);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a32u, "ran off the end of a function");
}
void f_00010a33(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010a33  call 0x10af7
    X86_AT(c, 0x10a33u);
    push32(c, 0x10a38u); f_00010af7(c); X86_RET(c, 0x10a38u);
    X86_TICK(c, 7);
    // 010a38  call 0x10b12
    X86_AT(c, 0x10a38u);
    push32(c, 0x10a3du); f_00010b12(c); X86_RET(c, 0x10a3du);
    X86_TICK(c, 18);
    // 010a3d  shl cx, 4
    X86_AT(c, 0x10a3du);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 1, r); }
    // 010a41  mov ah, cl
    X86_AT(c, 0x10a41u);
    s8(c, 4, g8(c, 1));
    // 010a43  not ch
    X86_AT(c, 0x10a43u);
    { uint32_t v = g8(c, 5); s8(c, 5, ~v & 0xFFu); }
    // 010a45  and ch, 3
    X86_AT(c, 0x10a45u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v & 0x3u, 1)); }
    // 010a48  mov byte ptr [edi + 0x44], ch
    X86_AT(c, 0x10a48u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u)), g8(c, 5));
    // 010a4b  call 0x10b0a
    X86_AT(c, 0x10a4bu);
    push32(c, 0x10a50u); f_00010b0a(c); X86_RET(c, 0x10a50u);
    X86_TICK(c, 16);
    // 010a50  and cl, 0xf
    X86_AT(c, 0x10a50u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a53  or cl, ah
    X86_AT(c, 0x10a53u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a55  neg cl
    X86_AT(c, 0x10a55u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a57  movsx ax, cl
    X86_AT(c, 0x10a57u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a5b  call 0x10a93
    X86_AT(c, 0x10a5bu);
    push32(c, 0x10a60u); f_00010a93(c); X86_RET(c, 0x10a60u);
    X86_TICK(c, 20);
    // 010a60  mov bx, ax
    X86_AT(c, 0x10a60u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 010a63  add word ptr [edi + 0x13], bx
    X86_AT(c, 0x10a63u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 010a67  mov cl, byte ptr [edi + 0xc]
    X86_AT(c, 0x10a67u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))));
    // 010a6a  call 0x10b0d
    X86_AT(c, 0x10a6au);
    push32(c, 0x10a6fu); f_00010b0d(c); X86_RET(c, 0x10a6fu);
    X86_TICK(c, 12);
    // 010a6f  shl cl, 4
    X86_AT(c, 0x10a6fu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 010a72  mov ah, cl
    X86_AT(c, 0x10a72u);
    s8(c, 4, g8(c, 1));
    // 010a74  call 0x10b0a
    X86_AT(c, 0x10a74u);
    push32(c, 0x10a79u); f_00010b0a(c); X86_RET(c, 0x10a79u);
    X86_TICK(c, 22);
    // 010a79  popfd 
    X86_AT(c, 0x10a79u);
    x86_popfd(c, 4);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a33u, "ran off the end of a function");
}
void f_00010a38(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010a38  call 0x10b12
    X86_AT(c, 0x10a38u);
    push32(c, 0x10a3du); f_00010b12(c); X86_RET(c, 0x10a3du);
    X86_TICK(c, 18);
    // 010a3d  shl cx, 4
    X86_AT(c, 0x10a3du);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 1, r); }
    // 010a41  mov ah, cl
    X86_AT(c, 0x10a41u);
    s8(c, 4, g8(c, 1));
    // 010a43  not ch
    X86_AT(c, 0x10a43u);
    { uint32_t v = g8(c, 5); s8(c, 5, ~v & 0xFFu); }
    // 010a45  and ch, 3
    X86_AT(c, 0x10a45u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v & 0x3u, 1)); }
    // 010a48  mov byte ptr [edi + 0x44], ch
    X86_AT(c, 0x10a48u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u)), g8(c, 5));
    // 010a4b  call 0x10b0a
    X86_AT(c, 0x10a4bu);
    push32(c, 0x10a50u); f_00010b0a(c); X86_RET(c, 0x10a50u);
    X86_TICK(c, 16);
    // 010a50  and cl, 0xf
    X86_AT(c, 0x10a50u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a53  or cl, ah
    X86_AT(c, 0x10a53u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a55  neg cl
    X86_AT(c, 0x10a55u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a57  movsx ax, cl
    X86_AT(c, 0x10a57u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a5b  call 0x10a93
    X86_AT(c, 0x10a5bu);
    push32(c, 0x10a60u); f_00010a93(c); X86_RET(c, 0x10a60u);
    X86_TICK(c, 20);
    // 010a60  mov bx, ax
    X86_AT(c, 0x10a60u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 010a63  add word ptr [edi + 0x13], bx
    X86_AT(c, 0x10a63u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 010a67  mov cl, byte ptr [edi + 0xc]
    X86_AT(c, 0x10a67u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))));
    // 010a6a  call 0x10b0d
    X86_AT(c, 0x10a6au);
    push32(c, 0x10a6fu); f_00010b0d(c); X86_RET(c, 0x10a6fu);
    X86_TICK(c, 12);
    // 010a6f  shl cl, 4
    X86_AT(c, 0x10a6fu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 010a72  mov ah, cl
    X86_AT(c, 0x10a72u);
    s8(c, 4, g8(c, 1));
    // 010a74  call 0x10b0a
    X86_AT(c, 0x10a74u);
    push32(c, 0x10a79u); f_00010b0a(c); X86_RET(c, 0x10a79u);
    X86_TICK(c, 22);
    // 010a79  popfd 
    X86_AT(c, 0x10a79u);
    x86_popfd(c, 4);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a38u, "ran off the end of a function");
}
void f_00010a3d(X86Cpu& c) {
    X86_TICK(c, 18);
    // 010a3d  shl cx, 4
    X86_AT(c, 0x10a3du);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 1, r); }
    // 010a41  mov ah, cl
    X86_AT(c, 0x10a41u);
    s8(c, 4, g8(c, 1));
    // 010a43  not ch
    X86_AT(c, 0x10a43u);
    { uint32_t v = g8(c, 5); s8(c, 5, ~v & 0xFFu); }
    // 010a45  and ch, 3
    X86_AT(c, 0x10a45u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v & 0x3u, 1)); }
    // 010a48  mov byte ptr [edi + 0x44], ch
    X86_AT(c, 0x10a48u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u)), g8(c, 5));
    // 010a4b  call 0x10b0a
    X86_AT(c, 0x10a4bu);
    push32(c, 0x10a50u); f_00010b0a(c); X86_RET(c, 0x10a50u);
    X86_TICK(c, 16);
    // 010a50  and cl, 0xf
    X86_AT(c, 0x10a50u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a53  or cl, ah
    X86_AT(c, 0x10a53u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a55  neg cl
    X86_AT(c, 0x10a55u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a57  movsx ax, cl
    X86_AT(c, 0x10a57u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a5b  call 0x10a93
    X86_AT(c, 0x10a5bu);
    push32(c, 0x10a60u); f_00010a93(c); X86_RET(c, 0x10a60u);
    X86_TICK(c, 20);
    // 010a60  mov bx, ax
    X86_AT(c, 0x10a60u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 010a63  add word ptr [edi + 0x13], bx
    X86_AT(c, 0x10a63u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 010a67  mov cl, byte ptr [edi + 0xc]
    X86_AT(c, 0x10a67u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))));
    // 010a6a  call 0x10b0d
    X86_AT(c, 0x10a6au);
    push32(c, 0x10a6fu); f_00010b0d(c); X86_RET(c, 0x10a6fu);
    X86_TICK(c, 12);
    // 010a6f  shl cl, 4
    X86_AT(c, 0x10a6fu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 010a72  mov ah, cl
    X86_AT(c, 0x10a72u);
    s8(c, 4, g8(c, 1));
    // 010a74  call 0x10b0a
    X86_AT(c, 0x10a74u);
    push32(c, 0x10a79u); f_00010b0a(c); X86_RET(c, 0x10a79u);
    X86_TICK(c, 22);
    // 010a79  popfd 
    X86_AT(c, 0x10a79u);
    x86_popfd(c, 4);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a3du, "ran off the end of a function");
}
void f_00010a41(X86Cpu& c) {
    X86_TICK(c, 15);
    // 010a41  mov ah, cl
    X86_AT(c, 0x10a41u);
    s8(c, 4, g8(c, 1));
    // 010a43  not ch
    X86_AT(c, 0x10a43u);
    { uint32_t v = g8(c, 5); s8(c, 5, ~v & 0xFFu); }
    // 010a45  and ch, 3
    X86_AT(c, 0x10a45u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v & 0x3u, 1)); }
    // 010a48  mov byte ptr [edi + 0x44], ch
    X86_AT(c, 0x10a48u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u)), g8(c, 5));
    // 010a4b  call 0x10b0a
    X86_AT(c, 0x10a4bu);
    push32(c, 0x10a50u); f_00010b0a(c); X86_RET(c, 0x10a50u);
    X86_TICK(c, 16);
    // 010a50  and cl, 0xf
    X86_AT(c, 0x10a50u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a53  or cl, ah
    X86_AT(c, 0x10a53u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a55  neg cl
    X86_AT(c, 0x10a55u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a57  movsx ax, cl
    X86_AT(c, 0x10a57u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a5b  call 0x10a93
    X86_AT(c, 0x10a5bu);
    push32(c, 0x10a60u); f_00010a93(c); X86_RET(c, 0x10a60u);
    X86_TICK(c, 20);
    // 010a60  mov bx, ax
    X86_AT(c, 0x10a60u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 010a63  add word ptr [edi + 0x13], bx
    X86_AT(c, 0x10a63u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 010a67  mov cl, byte ptr [edi + 0xc]
    X86_AT(c, 0x10a67u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))));
    // 010a6a  call 0x10b0d
    X86_AT(c, 0x10a6au);
    push32(c, 0x10a6fu); f_00010b0d(c); X86_RET(c, 0x10a6fu);
    X86_TICK(c, 12);
    // 010a6f  shl cl, 4
    X86_AT(c, 0x10a6fu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 010a72  mov ah, cl
    X86_AT(c, 0x10a72u);
    s8(c, 4, g8(c, 1));
    // 010a74  call 0x10b0a
    X86_AT(c, 0x10a74u);
    push32(c, 0x10a79u); f_00010b0a(c); X86_RET(c, 0x10a79u);
    X86_TICK(c, 22);
    // 010a79  popfd 
    X86_AT(c, 0x10a79u);
    x86_popfd(c, 4);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a41u, "ran off the end of a function");
}
void f_00010a43(X86Cpu& c) {
    X86_TICK(c, 13);
    // 010a43  not ch
    X86_AT(c, 0x10a43u);
    { uint32_t v = g8(c, 5); s8(c, 5, ~v & 0xFFu); }
    // 010a45  and ch, 3
    X86_AT(c, 0x10a45u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v & 0x3u, 1)); }
    // 010a48  mov byte ptr [edi + 0x44], ch
    X86_AT(c, 0x10a48u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u)), g8(c, 5));
    // 010a4b  call 0x10b0a
    X86_AT(c, 0x10a4bu);
    push32(c, 0x10a50u); f_00010b0a(c); X86_RET(c, 0x10a50u);
    X86_TICK(c, 16);
    // 010a50  and cl, 0xf
    X86_AT(c, 0x10a50u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a53  or cl, ah
    X86_AT(c, 0x10a53u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a55  neg cl
    X86_AT(c, 0x10a55u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a57  movsx ax, cl
    X86_AT(c, 0x10a57u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a5b  call 0x10a93
    X86_AT(c, 0x10a5bu);
    push32(c, 0x10a60u); f_00010a93(c); X86_RET(c, 0x10a60u);
    X86_TICK(c, 20);
    // 010a60  mov bx, ax
    X86_AT(c, 0x10a60u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 010a63  add word ptr [edi + 0x13], bx
    X86_AT(c, 0x10a63u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 010a67  mov cl, byte ptr [edi + 0xc]
    X86_AT(c, 0x10a67u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))));
    // 010a6a  call 0x10b0d
    X86_AT(c, 0x10a6au);
    push32(c, 0x10a6fu); f_00010b0d(c); X86_RET(c, 0x10a6fu);
    X86_TICK(c, 12);
    // 010a6f  shl cl, 4
    X86_AT(c, 0x10a6fu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 010a72  mov ah, cl
    X86_AT(c, 0x10a72u);
    s8(c, 4, g8(c, 1));
    // 010a74  call 0x10b0a
    X86_AT(c, 0x10a74u);
    push32(c, 0x10a79u); f_00010b0a(c); X86_RET(c, 0x10a79u);
    X86_TICK(c, 22);
    // 010a79  popfd 
    X86_AT(c, 0x10a79u);
    x86_popfd(c, 4);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a43u, "ran off the end of a function");
}
void f_00010a45(X86Cpu& c) {
    X86_TICK(c, 11);
    // 010a45  and ch, 3
    X86_AT(c, 0x10a45u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v & 0x3u, 1)); }
    // 010a48  mov byte ptr [edi + 0x44], ch
    X86_AT(c, 0x10a48u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u)), g8(c, 5));
    // 010a4b  call 0x10b0a
    X86_AT(c, 0x10a4bu);
    push32(c, 0x10a50u); f_00010b0a(c); X86_RET(c, 0x10a50u);
    X86_TICK(c, 16);
    // 010a50  and cl, 0xf
    X86_AT(c, 0x10a50u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a53  or cl, ah
    X86_AT(c, 0x10a53u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a55  neg cl
    X86_AT(c, 0x10a55u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a57  movsx ax, cl
    X86_AT(c, 0x10a57u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a5b  call 0x10a93
    X86_AT(c, 0x10a5bu);
    push32(c, 0x10a60u); f_00010a93(c); X86_RET(c, 0x10a60u);
    X86_TICK(c, 20);
    // 010a60  mov bx, ax
    X86_AT(c, 0x10a60u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 010a63  add word ptr [edi + 0x13], bx
    X86_AT(c, 0x10a63u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 010a67  mov cl, byte ptr [edi + 0xc]
    X86_AT(c, 0x10a67u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))));
    // 010a6a  call 0x10b0d
    X86_AT(c, 0x10a6au);
    push32(c, 0x10a6fu); f_00010b0d(c); X86_RET(c, 0x10a6fu);
    X86_TICK(c, 12);
    // 010a6f  shl cl, 4
    X86_AT(c, 0x10a6fu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 010a72  mov ah, cl
    X86_AT(c, 0x10a72u);
    s8(c, 4, g8(c, 1));
    // 010a74  call 0x10b0a
    X86_AT(c, 0x10a74u);
    push32(c, 0x10a79u); f_00010b0a(c); X86_RET(c, 0x10a79u);
    X86_TICK(c, 22);
    // 010a79  popfd 
    X86_AT(c, 0x10a79u);
    x86_popfd(c, 4);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a45u, "ran off the end of a function");
}
void f_00010a48(X86Cpu& c) {
    X86_TICK(c, 9);
    // 010a48  mov byte ptr [edi + 0x44], ch
    X86_AT(c, 0x10a48u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u)), g8(c, 5));
    // 010a4b  call 0x10b0a
    X86_AT(c, 0x10a4bu);
    push32(c, 0x10a50u); f_00010b0a(c); X86_RET(c, 0x10a50u);
    X86_TICK(c, 16);
    // 010a50  and cl, 0xf
    X86_AT(c, 0x10a50u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a53  or cl, ah
    X86_AT(c, 0x10a53u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a55  neg cl
    X86_AT(c, 0x10a55u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a57  movsx ax, cl
    X86_AT(c, 0x10a57u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a5b  call 0x10a93
    X86_AT(c, 0x10a5bu);
    push32(c, 0x10a60u); f_00010a93(c); X86_RET(c, 0x10a60u);
    X86_TICK(c, 20);
    // 010a60  mov bx, ax
    X86_AT(c, 0x10a60u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 010a63  add word ptr [edi + 0x13], bx
    X86_AT(c, 0x10a63u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 010a67  mov cl, byte ptr [edi + 0xc]
    X86_AT(c, 0x10a67u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))));
    // 010a6a  call 0x10b0d
    X86_AT(c, 0x10a6au);
    push32(c, 0x10a6fu); f_00010b0d(c); X86_RET(c, 0x10a6fu);
    X86_TICK(c, 12);
    // 010a6f  shl cl, 4
    X86_AT(c, 0x10a6fu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 010a72  mov ah, cl
    X86_AT(c, 0x10a72u);
    s8(c, 4, g8(c, 1));
    // 010a74  call 0x10b0a
    X86_AT(c, 0x10a74u);
    push32(c, 0x10a79u); f_00010b0a(c); X86_RET(c, 0x10a79u);
    X86_TICK(c, 22);
    // 010a79  popfd 
    X86_AT(c, 0x10a79u);
    x86_popfd(c, 4);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a48u, "ran off the end of a function");
}
void f_00010a4b(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010a4b  call 0x10b0a
    X86_AT(c, 0x10a4bu);
    push32(c, 0x10a50u); f_00010b0a(c); X86_RET(c, 0x10a50u);
    X86_TICK(c, 16);
    // 010a50  and cl, 0xf
    X86_AT(c, 0x10a50u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a53  or cl, ah
    X86_AT(c, 0x10a53u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a55  neg cl
    X86_AT(c, 0x10a55u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a57  movsx ax, cl
    X86_AT(c, 0x10a57u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a5b  call 0x10a93
    X86_AT(c, 0x10a5bu);
    push32(c, 0x10a60u); f_00010a93(c); X86_RET(c, 0x10a60u);
    X86_TICK(c, 20);
    // 010a60  mov bx, ax
    X86_AT(c, 0x10a60u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 010a63  add word ptr [edi + 0x13], bx
    X86_AT(c, 0x10a63u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 010a67  mov cl, byte ptr [edi + 0xc]
    X86_AT(c, 0x10a67u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))));
    // 010a6a  call 0x10b0d
    X86_AT(c, 0x10a6au);
    push32(c, 0x10a6fu); f_00010b0d(c); X86_RET(c, 0x10a6fu);
    X86_TICK(c, 12);
    // 010a6f  shl cl, 4
    X86_AT(c, 0x10a6fu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 010a72  mov ah, cl
    X86_AT(c, 0x10a72u);
    s8(c, 4, g8(c, 1));
    // 010a74  call 0x10b0a
    X86_AT(c, 0x10a74u);
    push32(c, 0x10a79u); f_00010b0a(c); X86_RET(c, 0x10a79u);
    X86_TICK(c, 22);
    // 010a79  popfd 
    X86_AT(c, 0x10a79u);
    x86_popfd(c, 4);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a4bu, "ran off the end of a function");
}
void f_00010a50(X86Cpu& c) {
    X86_TICK(c, 16);
    // 010a50  and cl, 0xf
    X86_AT(c, 0x10a50u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a53  or cl, ah
    X86_AT(c, 0x10a53u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a55  neg cl
    X86_AT(c, 0x10a55u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a57  movsx ax, cl
    X86_AT(c, 0x10a57u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a5b  call 0x10a93
    X86_AT(c, 0x10a5bu);
    push32(c, 0x10a60u); f_00010a93(c); X86_RET(c, 0x10a60u);
    X86_TICK(c, 20);
    // 010a60  mov bx, ax
    X86_AT(c, 0x10a60u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 010a63  add word ptr [edi + 0x13], bx
    X86_AT(c, 0x10a63u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 010a67  mov cl, byte ptr [edi + 0xc]
    X86_AT(c, 0x10a67u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))));
    // 010a6a  call 0x10b0d
    X86_AT(c, 0x10a6au);
    push32(c, 0x10a6fu); f_00010b0d(c); X86_RET(c, 0x10a6fu);
    X86_TICK(c, 12);
    // 010a6f  shl cl, 4
    X86_AT(c, 0x10a6fu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 010a72  mov ah, cl
    X86_AT(c, 0x10a72u);
    s8(c, 4, g8(c, 1));
    // 010a74  call 0x10b0a
    X86_AT(c, 0x10a74u);
    push32(c, 0x10a79u); f_00010b0a(c); X86_RET(c, 0x10a79u);
    X86_TICK(c, 22);
    // 010a79  popfd 
    X86_AT(c, 0x10a79u);
    x86_popfd(c, 4);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a50u, "ran off the end of a function");
}
void f_00010a53(X86Cpu& c) {
    X86_TICK(c, 14);
    // 010a53  or cl, ah
    X86_AT(c, 0x10a53u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a55  neg cl
    X86_AT(c, 0x10a55u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a57  movsx ax, cl
    X86_AT(c, 0x10a57u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a5b  call 0x10a93
    X86_AT(c, 0x10a5bu);
    push32(c, 0x10a60u); f_00010a93(c); X86_RET(c, 0x10a60u);
    X86_TICK(c, 20);
    // 010a60  mov bx, ax
    X86_AT(c, 0x10a60u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 010a63  add word ptr [edi + 0x13], bx
    X86_AT(c, 0x10a63u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 010a67  mov cl, byte ptr [edi + 0xc]
    X86_AT(c, 0x10a67u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))));
    // 010a6a  call 0x10b0d
    X86_AT(c, 0x10a6au);
    push32(c, 0x10a6fu); f_00010b0d(c); X86_RET(c, 0x10a6fu);
    X86_TICK(c, 12);
    // 010a6f  shl cl, 4
    X86_AT(c, 0x10a6fu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 010a72  mov ah, cl
    X86_AT(c, 0x10a72u);
    s8(c, 4, g8(c, 1));
    // 010a74  call 0x10b0a
    X86_AT(c, 0x10a74u);
    push32(c, 0x10a79u); f_00010b0a(c); X86_RET(c, 0x10a79u);
    X86_TICK(c, 22);
    // 010a79  popfd 
    X86_AT(c, 0x10a79u);
    x86_popfd(c, 4);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a53u, "ran off the end of a function");
}
void f_00010a55(X86Cpu& c) {
    X86_TICK(c, 12);
    // 010a55  neg cl
    X86_AT(c, 0x10a55u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a57  movsx ax, cl
    X86_AT(c, 0x10a57u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a5b  call 0x10a93
    X86_AT(c, 0x10a5bu);
    push32(c, 0x10a60u); f_00010a93(c); X86_RET(c, 0x10a60u);
    X86_TICK(c, 20);
    // 010a60  mov bx, ax
    X86_AT(c, 0x10a60u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 010a63  add word ptr [edi + 0x13], bx
    X86_AT(c, 0x10a63u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 010a67  mov cl, byte ptr [edi + 0xc]
    X86_AT(c, 0x10a67u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))));
    // 010a6a  call 0x10b0d
    X86_AT(c, 0x10a6au);
    push32(c, 0x10a6fu); f_00010b0d(c); X86_RET(c, 0x10a6fu);
    X86_TICK(c, 12);
    // 010a6f  shl cl, 4
    X86_AT(c, 0x10a6fu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 010a72  mov ah, cl
    X86_AT(c, 0x10a72u);
    s8(c, 4, g8(c, 1));
    // 010a74  call 0x10b0a
    X86_AT(c, 0x10a74u);
    push32(c, 0x10a79u); f_00010b0a(c); X86_RET(c, 0x10a79u);
    X86_TICK(c, 22);
    // 010a79  popfd 
    X86_AT(c, 0x10a79u);
    x86_popfd(c, 4);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a55u, "ran off the end of a function");
}
void f_00010a57(X86Cpu& c) {
    X86_TICK(c, 10);
    // 010a57  movsx ax, cl
    X86_AT(c, 0x10a57u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a5b  call 0x10a93
    X86_AT(c, 0x10a5bu);
    push32(c, 0x10a60u); f_00010a93(c); X86_RET(c, 0x10a60u);
    X86_TICK(c, 20);
    // 010a60  mov bx, ax
    X86_AT(c, 0x10a60u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 010a63  add word ptr [edi + 0x13], bx
    X86_AT(c, 0x10a63u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 010a67  mov cl, byte ptr [edi + 0xc]
    X86_AT(c, 0x10a67u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))));
    // 010a6a  call 0x10b0d
    X86_AT(c, 0x10a6au);
    push32(c, 0x10a6fu); f_00010b0d(c); X86_RET(c, 0x10a6fu);
    X86_TICK(c, 12);
    // 010a6f  shl cl, 4
    X86_AT(c, 0x10a6fu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 010a72  mov ah, cl
    X86_AT(c, 0x10a72u);
    s8(c, 4, g8(c, 1));
    // 010a74  call 0x10b0a
    X86_AT(c, 0x10a74u);
    push32(c, 0x10a79u); f_00010b0a(c); X86_RET(c, 0x10a79u);
    X86_TICK(c, 22);
    // 010a79  popfd 
    X86_AT(c, 0x10a79u);
    x86_popfd(c, 4);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a57u, "ran off the end of a function");
}
}
