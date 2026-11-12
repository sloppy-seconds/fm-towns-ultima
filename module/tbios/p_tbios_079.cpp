#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00006355(X86Cpu& c) {
    X86_TICK(c, 12);
    // 006355  cmp word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x6355u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00635a  jl 0x63c5
    X86_AT(c, 0x635au);
    if (x86_cc(c, 12)) { goto L_63c5; }
    X86_TICK(c, 12);
    // 00635c  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x635cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 006361  jg 0x63c5
    X86_AT(c, 0x6361u);
    if (x86_cc(c, 15)) { goto L_63c5; }
    X86_TICK(c, 12);
    // 006363  cmp word ptr gs:[ebp + 0x2e], dx
    X86_AT(c, 0x6363u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 006368  jl 0x63c5
    X86_AT(c, 0x6368u);
    if (x86_cc(c, 12)) { goto L_63c5; }
    X86_TICK(c, 55);
    // 00636a  movsx eax, dx
    X86_AT(c, 0x636au);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 00636d  mov edi, eax
    X86_AT(c, 0x636du);
    c.r[7] = c.r[0];
    // 00636f  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x636fu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 006374  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x6374u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 006378  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x6378u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00637f  mov eax, ebx
    X86_AT(c, 0x637fu);
    c.r[0] = c.r[3];
    // 006381  and eax, 0x1f
    X86_AT(c, 0x6381u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 006386  mov eax, dword ptr cs:[eax*4 + 0xbdb4]
    X86_AT(c, 0x6386u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBDB4u)));
    // 00638e  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x638eu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006393  je 0x63ba
    X86_AT(c, 0x6393u);
    if (x86_cc(c, 4)) { goto L_63ba; }
    X86_TICK(c, 48);
    // 006395  imul edi, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x6395u);
    c.r[7] = x86_imul2(c, c.r[7], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00639a  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x639au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 00639e  movsx esi, bx
    X86_AT(c, 0x639eu);
    c.r[6] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0063a1  sar esi, 3
    X86_AT(c, 0x63a1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 7);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_63ba:
    X86_TICK(c, 7);
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6355u, "ran off the end of a function");
}
void f_0000635a(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00635a  jl 0x63c5
    X86_AT(c, 0x635au);
    if (x86_cc(c, 12)) { goto L_63c5; }
    X86_TICK(c, 12);
    // 00635c  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x635cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 006361  jg 0x63c5
    X86_AT(c, 0x6361u);
    if (x86_cc(c, 15)) { goto L_63c5; }
    X86_TICK(c, 12);
    // 006363  cmp word ptr gs:[ebp + 0x2e], dx
    X86_AT(c, 0x6363u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 006368  jl 0x63c5
    X86_AT(c, 0x6368u);
    if (x86_cc(c, 12)) { goto L_63c5; }
    X86_TICK(c, 55);
    // 00636a  movsx eax, dx
    X86_AT(c, 0x636au);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 00636d  mov edi, eax
    X86_AT(c, 0x636du);
    c.r[7] = c.r[0];
    // 00636f  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x636fu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 006374  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x6374u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 006378  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x6378u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00637f  mov eax, ebx
    X86_AT(c, 0x637fu);
    c.r[0] = c.r[3];
    // 006381  and eax, 0x1f
    X86_AT(c, 0x6381u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 006386  mov eax, dword ptr cs:[eax*4 + 0xbdb4]
    X86_AT(c, 0x6386u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBDB4u)));
    // 00638e  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x638eu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006393  je 0x63ba
    X86_AT(c, 0x6393u);
    if (x86_cc(c, 4)) { goto L_63ba; }
    X86_TICK(c, 48);
    // 006395  imul edi, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x6395u);
    c.r[7] = x86_imul2(c, c.r[7], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00639a  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x639au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 00639e  movsx esi, bx
    X86_AT(c, 0x639eu);
    c.r[6] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0063a1  sar esi, 3
    X86_AT(c, 0x63a1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 7);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_63ba:
    X86_TICK(c, 7);
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x635au, "ran off the end of a function");
}
void f_0000635c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00635c  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x635cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 006361  jg 0x63c5
    X86_AT(c, 0x6361u);
    if (x86_cc(c, 15)) { goto L_63c5; }
    X86_TICK(c, 12);
    // 006363  cmp word ptr gs:[ebp + 0x2e], dx
    X86_AT(c, 0x6363u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 006368  jl 0x63c5
    X86_AT(c, 0x6368u);
    if (x86_cc(c, 12)) { goto L_63c5; }
    X86_TICK(c, 55);
    // 00636a  movsx eax, dx
    X86_AT(c, 0x636au);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 00636d  mov edi, eax
    X86_AT(c, 0x636du);
    c.r[7] = c.r[0];
    // 00636f  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x636fu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 006374  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x6374u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 006378  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x6378u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00637f  mov eax, ebx
    X86_AT(c, 0x637fu);
    c.r[0] = c.r[3];
    // 006381  and eax, 0x1f
    X86_AT(c, 0x6381u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 006386  mov eax, dword ptr cs:[eax*4 + 0xbdb4]
    X86_AT(c, 0x6386u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBDB4u)));
    // 00638e  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x638eu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006393  je 0x63ba
    X86_AT(c, 0x6393u);
    if (x86_cc(c, 4)) { goto L_63ba; }
    X86_TICK(c, 48);
    // 006395  imul edi, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x6395u);
    c.r[7] = x86_imul2(c, c.r[7], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00639a  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x639au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 00639e  movsx esi, bx
    X86_AT(c, 0x639eu);
    c.r[6] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0063a1  sar esi, 3
    X86_AT(c, 0x63a1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 7);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_63ba:
    X86_TICK(c, 7);
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x635cu, "ran off the end of a function");
}
void f_00006361(X86Cpu& c) {
    X86_TICK(c, 5);
    // 006361  jg 0x63c5
    X86_AT(c, 0x6361u);
    if (x86_cc(c, 15)) { goto L_63c5; }
    X86_TICK(c, 12);
    // 006363  cmp word ptr gs:[ebp + 0x2e], dx
    X86_AT(c, 0x6363u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 006368  jl 0x63c5
    X86_AT(c, 0x6368u);
    if (x86_cc(c, 12)) { goto L_63c5; }
    X86_TICK(c, 55);
    // 00636a  movsx eax, dx
    X86_AT(c, 0x636au);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 00636d  mov edi, eax
    X86_AT(c, 0x636du);
    c.r[7] = c.r[0];
    // 00636f  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x636fu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 006374  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x6374u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 006378  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x6378u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00637f  mov eax, ebx
    X86_AT(c, 0x637fu);
    c.r[0] = c.r[3];
    // 006381  and eax, 0x1f
    X86_AT(c, 0x6381u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 006386  mov eax, dword ptr cs:[eax*4 + 0xbdb4]
    X86_AT(c, 0x6386u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBDB4u)));
    // 00638e  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x638eu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006393  je 0x63ba
    X86_AT(c, 0x6393u);
    if (x86_cc(c, 4)) { goto L_63ba; }
    X86_TICK(c, 48);
    // 006395  imul edi, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x6395u);
    c.r[7] = x86_imul2(c, c.r[7], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00639a  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x639au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 00639e  movsx esi, bx
    X86_AT(c, 0x639eu);
    c.r[6] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0063a1  sar esi, 3
    X86_AT(c, 0x63a1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 7);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_63ba:
    X86_TICK(c, 7);
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6361u, "ran off the end of a function");
}
void f_00006363(X86Cpu& c) {
    X86_TICK(c, 12);
    // 006363  cmp word ptr gs:[ebp + 0x2e], dx
    X86_AT(c, 0x6363u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 006368  jl 0x63c5
    X86_AT(c, 0x6368u);
    if (x86_cc(c, 12)) { goto L_63c5; }
    X86_TICK(c, 55);
    // 00636a  movsx eax, dx
    X86_AT(c, 0x636au);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 00636d  mov edi, eax
    X86_AT(c, 0x636du);
    c.r[7] = c.r[0];
    // 00636f  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x636fu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 006374  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x6374u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 006378  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x6378u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00637f  mov eax, ebx
    X86_AT(c, 0x637fu);
    c.r[0] = c.r[3];
    // 006381  and eax, 0x1f
    X86_AT(c, 0x6381u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 006386  mov eax, dword ptr cs:[eax*4 + 0xbdb4]
    X86_AT(c, 0x6386u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBDB4u)));
    // 00638e  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x638eu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006393  je 0x63ba
    X86_AT(c, 0x6393u);
    if (x86_cc(c, 4)) { goto L_63ba; }
    X86_TICK(c, 48);
    // 006395  imul edi, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x6395u);
    c.r[7] = x86_imul2(c, c.r[7], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00639a  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x639au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 00639e  movsx esi, bx
    X86_AT(c, 0x639eu);
    c.r[6] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0063a1  sar esi, 3
    X86_AT(c, 0x63a1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 7);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_63ba:
    X86_TICK(c, 7);
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6363u, "ran off the end of a function");
}
void f_00006368(X86Cpu& c) {
    X86_TICK(c, 5);
    // 006368  jl 0x63c5
    X86_AT(c, 0x6368u);
    if (x86_cc(c, 12)) { goto L_63c5; }
    X86_TICK(c, 55);
    // 00636a  movsx eax, dx
    X86_AT(c, 0x636au);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 00636d  mov edi, eax
    X86_AT(c, 0x636du);
    c.r[7] = c.r[0];
    // 00636f  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x636fu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 006374  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x6374u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 006378  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x6378u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00637f  mov eax, ebx
    X86_AT(c, 0x637fu);
    c.r[0] = c.r[3];
    // 006381  and eax, 0x1f
    X86_AT(c, 0x6381u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 006386  mov eax, dword ptr cs:[eax*4 + 0xbdb4]
    X86_AT(c, 0x6386u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBDB4u)));
    // 00638e  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x638eu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006393  je 0x63ba
    X86_AT(c, 0x6393u);
    if (x86_cc(c, 4)) { goto L_63ba; }
    X86_TICK(c, 48);
    // 006395  imul edi, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x6395u);
    c.r[7] = x86_imul2(c, c.r[7], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00639a  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x639au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 00639e  movsx esi, bx
    X86_AT(c, 0x639eu);
    c.r[6] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0063a1  sar esi, 3
    X86_AT(c, 0x63a1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 7);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_63ba:
    X86_TICK(c, 7);
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6368u, "ran off the end of a function");
}
void f_0000636a(X86Cpu& c) {
    X86_TICK(c, 55);
    // 00636a  movsx eax, dx
    X86_AT(c, 0x636au);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 00636d  mov edi, eax
    X86_AT(c, 0x636du);
    c.r[7] = c.r[0];
    // 00636f  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x636fu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 006374  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x6374u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 006378  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x6378u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00637f  mov eax, ebx
    X86_AT(c, 0x637fu);
    c.r[0] = c.r[3];
    // 006381  and eax, 0x1f
    X86_AT(c, 0x6381u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 006386  mov eax, dword ptr cs:[eax*4 + 0xbdb4]
    X86_AT(c, 0x6386u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBDB4u)));
    // 00638e  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x638eu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006393  je 0x63ba
    X86_AT(c, 0x6393u);
    if (x86_cc(c, 4)) { goto L_63ba; }
    X86_TICK(c, 48);
    // 006395  imul edi, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x6395u);
    c.r[7] = x86_imul2(c, c.r[7], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00639a  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x639au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 00639e  movsx esi, bx
    X86_AT(c, 0x639eu);
    c.r[6] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0063a1  sar esi, 3
    X86_AT(c, 0x63a1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 7);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_63ba:
    X86_TICK(c, 7);
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x636au, "ran off the end of a function");
}
void f_0000636d(X86Cpu& c) {
    X86_TICK(c, 52);
    // 00636d  mov edi, eax
    X86_AT(c, 0x636du);
    c.r[7] = c.r[0];
    // 00636f  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x636fu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 006374  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x6374u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 006378  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x6378u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00637f  mov eax, ebx
    X86_AT(c, 0x637fu);
    c.r[0] = c.r[3];
    // 006381  and eax, 0x1f
    X86_AT(c, 0x6381u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 006386  mov eax, dword ptr cs:[eax*4 + 0xbdb4]
    X86_AT(c, 0x6386u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBDB4u)));
    // 00638e  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x638eu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006393  je 0x63ba
    X86_AT(c, 0x6393u);
    if (x86_cc(c, 4)) { goto L_63ba; }
    X86_TICK(c, 48);
    // 006395  imul edi, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x6395u);
    c.r[7] = x86_imul2(c, c.r[7], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00639a  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x639au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 00639e  movsx esi, bx
    X86_AT(c, 0x639eu);
    c.r[6] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0063a1  sar esi, 3
    X86_AT(c, 0x63a1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 7);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_63ba:
    X86_TICK(c, 7);
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x636du, "ran off the end of a function");
}
void f_0000636f(X86Cpu& c) {
    X86_TICK(c, 50);
    // 00636f  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x636fu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 006374  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x6374u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 006378  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x6378u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00637f  mov eax, ebx
    X86_AT(c, 0x637fu);
    c.r[0] = c.r[3];
    // 006381  and eax, 0x1f
    X86_AT(c, 0x6381u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 006386  mov eax, dword ptr cs:[eax*4 + 0xbdb4]
    X86_AT(c, 0x6386u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBDB4u)));
    // 00638e  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x638eu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006393  je 0x63ba
    X86_AT(c, 0x6393u);
    if (x86_cc(c, 4)) { goto L_63ba; }
    X86_TICK(c, 48);
    // 006395  imul edi, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x6395u);
    c.r[7] = x86_imul2(c, c.r[7], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00639a  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x639au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 00639e  movsx esi, bx
    X86_AT(c, 0x639eu);
    c.r[6] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0063a1  sar esi, 3
    X86_AT(c, 0x63a1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 7);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_63ba:
    X86_TICK(c, 7);
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x636fu, "ran off the end of a function");
}
void f_00006374(X86Cpu& c) {
    X86_TICK(c, 28);
    // 006374  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x6374u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 006378  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x6378u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00637f  mov eax, ebx
    X86_AT(c, 0x637fu);
    c.r[0] = c.r[3];
    // 006381  and eax, 0x1f
    X86_AT(c, 0x6381u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 006386  mov eax, dword ptr cs:[eax*4 + 0xbdb4]
    X86_AT(c, 0x6386u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBDB4u)));
    // 00638e  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x638eu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006393  je 0x63ba
    X86_AT(c, 0x6393u);
    if (x86_cc(c, 4)) { goto L_63ba; }
    X86_TICK(c, 48);
    // 006395  imul edi, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x6395u);
    c.r[7] = x86_imul2(c, c.r[7], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00639a  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x639au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 00639e  movsx esi, bx
    X86_AT(c, 0x639eu);
    c.r[6] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0063a1  sar esi, 3
    X86_AT(c, 0x63a1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 7);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_63ba:
    X86_TICK(c, 7);
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6374u, "ran off the end of a function");
}
void f_00006378(X86Cpu& c) {
    X86_TICK(c, 22);
    // 006378  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x6378u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00637f  mov eax, ebx
    X86_AT(c, 0x637fu);
    c.r[0] = c.r[3];
    // 006381  and eax, 0x1f
    X86_AT(c, 0x6381u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 006386  mov eax, dword ptr cs:[eax*4 + 0xbdb4]
    X86_AT(c, 0x6386u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBDB4u)));
    // 00638e  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x638eu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006393  je 0x63ba
    X86_AT(c, 0x6393u);
    if (x86_cc(c, 4)) { goto L_63ba; }
    X86_TICK(c, 48);
    // 006395  imul edi, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x6395u);
    c.r[7] = x86_imul2(c, c.r[7], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00639a  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x639au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 00639e  movsx esi, bx
    X86_AT(c, 0x639eu);
    c.r[6] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0063a1  sar esi, 3
    X86_AT(c, 0x63a1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 7);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_63ba:
    X86_TICK(c, 7);
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6378u, "ran off the end of a function");
}
void f_0000637f(X86Cpu& c) {
    X86_TICK(c, 20);
    // 00637f  mov eax, ebx
    X86_AT(c, 0x637fu);
    c.r[0] = c.r[3];
    // 006381  and eax, 0x1f
    X86_AT(c, 0x6381u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 006386  mov eax, dword ptr cs:[eax*4 + 0xbdb4]
    X86_AT(c, 0x6386u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBDB4u)));
    // 00638e  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x638eu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006393  je 0x63ba
    X86_AT(c, 0x6393u);
    if (x86_cc(c, 4)) { goto L_63ba; }
    X86_TICK(c, 48);
    // 006395  imul edi, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x6395u);
    c.r[7] = x86_imul2(c, c.r[7], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00639a  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x639au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 00639e  movsx esi, bx
    X86_AT(c, 0x639eu);
    c.r[6] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0063a1  sar esi, 3
    X86_AT(c, 0x63a1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 7);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_63ba:
    X86_TICK(c, 7);
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x637fu, "ran off the end of a function");
}
void f_00006381(X86Cpu& c) {
    X86_TICK(c, 18);
    // 006381  and eax, 0x1f
    X86_AT(c, 0x6381u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 006386  mov eax, dword ptr cs:[eax*4 + 0xbdb4]
    X86_AT(c, 0x6386u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBDB4u)));
    // 00638e  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x638eu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006393  je 0x63ba
    X86_AT(c, 0x6393u);
    if (x86_cc(c, 4)) { goto L_63ba; }
    X86_TICK(c, 48);
    // 006395  imul edi, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x6395u);
    c.r[7] = x86_imul2(c, c.r[7], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00639a  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x639au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 00639e  movsx esi, bx
    X86_AT(c, 0x639eu);
    c.r[6] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0063a1  sar esi, 3
    X86_AT(c, 0x63a1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 7);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_63ba:
    X86_TICK(c, 7);
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6381u, "ran off the end of a function");
}
void f_00006386(X86Cpu& c) {
    X86_TICK(c, 16);
    // 006386  mov eax, dword ptr cs:[eax*4 + 0xbdb4]
    X86_AT(c, 0x6386u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBDB4u)));
    // 00638e  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x638eu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006393  je 0x63ba
    X86_AT(c, 0x6393u);
    if (x86_cc(c, 4)) { goto L_63ba; }
    X86_TICK(c, 48);
    // 006395  imul edi, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x6395u);
    c.r[7] = x86_imul2(c, c.r[7], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00639a  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x639au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 00639e  movsx esi, bx
    X86_AT(c, 0x639eu);
    c.r[6] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0063a1  sar esi, 3
    X86_AT(c, 0x63a1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 7);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_63ba:
    X86_TICK(c, 7);
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6386u, "ran off the end of a function");
}
void f_0000638e(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00638e  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x638eu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006393  je 0x63ba
    X86_AT(c, 0x6393u);
    if (x86_cc(c, 4)) { goto L_63ba; }
    X86_TICK(c, 48);
    // 006395  imul edi, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x6395u);
    c.r[7] = x86_imul2(c, c.r[7], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00639a  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x639au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 00639e  movsx esi, bx
    X86_AT(c, 0x639eu);
    c.r[6] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0063a1  sar esi, 3
    X86_AT(c, 0x63a1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 7);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_63ba:
    X86_TICK(c, 7);
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x638eu, "ran off the end of a function");
}
void f_00006393(X86Cpu& c) {
    X86_TICK(c, 5);
    // 006393  je 0x63ba
    X86_AT(c, 0x6393u);
    if (x86_cc(c, 4)) { goto L_63ba; }
    X86_TICK(c, 48);
    // 006395  imul edi, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x6395u);
    c.r[7] = x86_imul2(c, c.r[7], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00639a  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x639au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 00639e  movsx esi, bx
    X86_AT(c, 0x639eu);
    c.r[6] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0063a1  sar esi, 3
    X86_AT(c, 0x63a1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 7);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_63ba:
    X86_TICK(c, 7);
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6393u, "ran off the end of a function");
}
void f_00006395(X86Cpu& c) {
    X86_TICK(c, 48);
    // 006395  imul edi, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x6395u);
    c.r[7] = x86_imul2(c, c.r[7], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00639a  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x639au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 00639e  movsx esi, bx
    X86_AT(c, 0x639eu);
    c.r[6] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0063a1  sar esi, 3
    X86_AT(c, 0x63a1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 14);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6395u, "ran off the end of a function");
}
void f_0000639a(X86Cpu& c) {
    X86_TICK(c, 26);
    // 00639a  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x639au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 00639e  movsx esi, bx
    X86_AT(c, 0x639eu);
    c.r[6] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0063a1  sar esi, 3
    X86_AT(c, 0x63a1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 14);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x639au, "ran off the end of a function");
}
void f_0000639e(X86Cpu& c) {
    X86_TICK(c, 20);
    // 00639e  movsx esi, bx
    X86_AT(c, 0x639eu);
    c.r[6] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0063a1  sar esi, 3
    X86_AT(c, 0x63a1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 14);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x639eu, "ran off the end of a function");
}
void f_000063a1(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0063a1  sar esi, 3
    X86_AT(c, 0x63a1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 14);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x63a1u, "ran off the end of a function");
}
void f_000063a4(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 14);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x63a4u, "ran off the end of a function");
}
void f_000063a7(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 14);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x63a7u, "ran off the end of a function");
}
void f_000063ac(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 14);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x63acu, "ran off the end of a function");
}
void f_000063ae(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x63aeu, "ran off the end of a function");
}
void f_000063b2(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x63b2u, "ran off the end of a function");
}
void f_000063b4(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x63b4u, "ran off the end of a function");
}
void f_000063b6(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x63b6u, "ran off the end of a function");
}
void f_000063ba(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x63bau, "ran off the end of a function");
}
void f_000063bc(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x63bcu, "ran off the end of a function");
}
void f_000063be(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
    x86_fault(c, 0x63beu, "ran off the end of a function");
}
void f_000063c5(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x63c5u, "ran off the end of a function");
}
void f_000063d3(X86Cpu& c) {
    goto L_63d3;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
L_63d3:
    X86_TICK(c, 19);
    // 0063d3  mov ebx, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x63d3u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 0063da  shld edx, ebx, 0x10
    X86_AT(c, 0x63dau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0063de  cmp word ptr gs:[ebp + 0x28], bx
    X86_AT(c, 0x63deu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0063e3  jg 0x63c5
    X86_AT(c, 0x63e3u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 12);
    // 0063e5  cmp word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x63e5u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0063ea  jl 0x63c5
    X86_AT(c, 0x63eau);
    if (x86_cc(c, 12)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 12);
    // 0063ec  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x63ecu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0063f1  jg 0x63c5
    X86_AT(c, 0x63f1u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 12);
    // 0063f3  cmp word ptr gs:[ebp + 0x2e], dx
    X86_AT(c, 0x63f3u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0063f8  jl 0x63c5
    X86_AT(c, 0x63f8u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 7);
    // 0063fa  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63fau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
    x86_fault(c, 0x63d3u, "ran off the end of a function");
}
void f_000063da(X86Cpu& c) {
    goto L_63da;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
L_63da:
    X86_TICK(c, 15);
    // 0063da  shld edx, ebx, 0x10
    X86_AT(c, 0x63dau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0063de  cmp word ptr gs:[ebp + 0x28], bx
    X86_AT(c, 0x63deu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0063e3  jg 0x63c5
    X86_AT(c, 0x63e3u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 12);
    // 0063e5  cmp word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x63e5u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0063ea  jl 0x63c5
    X86_AT(c, 0x63eau);
    if (x86_cc(c, 12)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 12);
    // 0063ec  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x63ecu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0063f1  jg 0x63c5
    X86_AT(c, 0x63f1u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 12);
    // 0063f3  cmp word ptr gs:[ebp + 0x2e], dx
    X86_AT(c, 0x63f3u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0063f8  jl 0x63c5
    X86_AT(c, 0x63f8u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 7);
    // 0063fa  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63fau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
    x86_fault(c, 0x63dau, "ran off the end of a function");
}
void f_000063de(X86Cpu& c) {
    goto L_63de;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
L_63de:
    X86_TICK(c, 12);
    // 0063de  cmp word ptr gs:[ebp + 0x28], bx
    X86_AT(c, 0x63deu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0063e3  jg 0x63c5
    X86_AT(c, 0x63e3u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 12);
    // 0063e5  cmp word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x63e5u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0063ea  jl 0x63c5
    X86_AT(c, 0x63eau);
    if (x86_cc(c, 12)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 12);
    // 0063ec  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x63ecu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0063f1  jg 0x63c5
    X86_AT(c, 0x63f1u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 12);
    // 0063f3  cmp word ptr gs:[ebp + 0x2e], dx
    X86_AT(c, 0x63f3u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0063f8  jl 0x63c5
    X86_AT(c, 0x63f8u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 7);
    // 0063fa  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63fau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
    x86_fault(c, 0x63deu, "ran off the end of a function");
}
void f_000063e3(X86Cpu& c) {
    goto L_63e3;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
L_63e3:
    X86_TICK(c, 5);
    // 0063e3  jg 0x63c5
    X86_AT(c, 0x63e3u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 12);
    // 0063e5  cmp word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x63e5u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0063ea  jl 0x63c5
    X86_AT(c, 0x63eau);
    if (x86_cc(c, 12)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 12);
    // 0063ec  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x63ecu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0063f1  jg 0x63c5
    X86_AT(c, 0x63f1u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 12);
    // 0063f3  cmp word ptr gs:[ebp + 0x2e], dx
    X86_AT(c, 0x63f3u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0063f8  jl 0x63c5
    X86_AT(c, 0x63f8u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 7);
    // 0063fa  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63fau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
    x86_fault(c, 0x63e3u, "ran off the end of a function");
}
void f_000063e5(X86Cpu& c) {
    goto L_63e5;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
L_63e5:
    X86_TICK(c, 12);
    // 0063e5  cmp word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x63e5u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0063ea  jl 0x63c5
    X86_AT(c, 0x63eau);
    if (x86_cc(c, 12)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 12);
    // 0063ec  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x63ecu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0063f1  jg 0x63c5
    X86_AT(c, 0x63f1u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 12);
    // 0063f3  cmp word ptr gs:[ebp + 0x2e], dx
    X86_AT(c, 0x63f3u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0063f8  jl 0x63c5
    X86_AT(c, 0x63f8u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 7);
    // 0063fa  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63fau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
    x86_fault(c, 0x63e5u, "ran off the end of a function");
}
void f_000063ea(X86Cpu& c) {
    goto L_63ea;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
L_63ea:
    X86_TICK(c, 5);
    // 0063ea  jl 0x63c5
    X86_AT(c, 0x63eau);
    if (x86_cc(c, 12)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 12);
    // 0063ec  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x63ecu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0063f1  jg 0x63c5
    X86_AT(c, 0x63f1u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 12);
    // 0063f3  cmp word ptr gs:[ebp + 0x2e], dx
    X86_AT(c, 0x63f3u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0063f8  jl 0x63c5
    X86_AT(c, 0x63f8u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 7);
    // 0063fa  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63fau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
    x86_fault(c, 0x63eau, "ran off the end of a function");
}
void f_000063ec(X86Cpu& c) {
    goto L_63ec;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
L_63ec:
    X86_TICK(c, 12);
    // 0063ec  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x63ecu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0063f1  jg 0x63c5
    X86_AT(c, 0x63f1u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 12);
    // 0063f3  cmp word ptr gs:[ebp + 0x2e], dx
    X86_AT(c, 0x63f3u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0063f8  jl 0x63c5
    X86_AT(c, 0x63f8u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 7);
    // 0063fa  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63fau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
    x86_fault(c, 0x63ecu, "ran off the end of a function");
}
void f_000063f1(X86Cpu& c) {
    goto L_63f1;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
L_63f1:
    X86_TICK(c, 5);
    // 0063f1  jg 0x63c5
    X86_AT(c, 0x63f1u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 12);
    // 0063f3  cmp word ptr gs:[ebp + 0x2e], dx
    X86_AT(c, 0x63f3u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0063f8  jl 0x63c5
    X86_AT(c, 0x63f8u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 7);
    // 0063fa  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63fau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
    x86_fault(c, 0x63f1u, "ran off the end of a function");
}
void f_000063f3(X86Cpu& c) {
    goto L_63f3;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
L_63f3:
    X86_TICK(c, 12);
    // 0063f3  cmp word ptr gs:[ebp + 0x2e], dx
    X86_AT(c, 0x63f3u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 0063f8  jl 0x63c5
    X86_AT(c, 0x63f8u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 7);
    // 0063fa  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63fau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
    x86_fault(c, 0x63f3u, "ran off the end of a function");
}
void f_000063f8(X86Cpu& c) {
    goto L_63f8;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
L_63f8:
    X86_TICK(c, 5);
    // 0063f8  jl 0x63c5
    X86_AT(c, 0x63f8u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0x63c5u); goto L_63c5; }
    X86_TICK(c, 7);
    // 0063fa  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63fau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
    x86_fault(c, 0x63f8u, "ran off the end of a function");
}
void f_000063fa(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0063fa  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63fau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
    x86_fault(c, 0x63fau, "ran off the end of a function");
}
void f_0000640e(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00640e  mov ebx, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x640eu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 006415  shld edx, ebx, 0x10
    X86_AT(c, 0x6415u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 006419  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x6419u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
    x86_fault(c, 0x640eu, "ran off the end of a function");
}
void f_00006415(X86Cpu& c) {
    X86_TICK(c, 10);
    // 006415  shld edx, ebx, 0x10
    X86_AT(c, 0x6415u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 006419  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x6419u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
    x86_fault(c, 0x6415u, "ran off the end of a function");
}
void f_00006419(X86Cpu& c) {
    X86_TICK(c, 7);
    // 006419  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x6419u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
    x86_fault(c, 0x6419u, "ran off the end of a function");
}
void f_0000652f(X86Cpu& c) {
    X86_TICK(c, 54);
    // 00652f  movsx edi, dx
    X86_AT(c, 0x652fu);
    c.r[7] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 006532  imul edi, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x6532u);
    c.r[7] = x86_imul2(c, c.r[7], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 006537  add edi, dword ptr gs:[ebp]
    X86_AT(c, 0x6537u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 00653b  mov al, bl
    X86_AT(c, 0x653bu);
    s8(c, 0, g8(c, 3));
    // 00653d  and eax, 7
    X86_AT(c, 0x653du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 006542  mov eax, dword ptr cs:[eax*4 + 0xc374]
    X86_AT(c, 0x6542u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC374u)));
    // 00654a  movsx ecx, bx
    X86_AT(c, 0x654au);
    c.r[1] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 00654d  sar ecx, 3
    X86_AT(c, 0x654du);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 006550  lea edi, [edi + ecx*4]
    X86_AT(c, 0x6550u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] * 4);
    // 006553  jmp dword ptr gs:[ebp + 0x318]
    X86_AT(c, 0x6553u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)))); return;
    x86_fault(c, 0x652fu, "ran off the end of a function");
}
void f_00006532(X86Cpu& c) {
    X86_TICK(c, 51);
    // 006532  imul edi, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x6532u);
    c.r[7] = x86_imul2(c, c.r[7], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 006537  add edi, dword ptr gs:[ebp]
    X86_AT(c, 0x6537u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 00653b  mov al, bl
    X86_AT(c, 0x653bu);
    s8(c, 0, g8(c, 3));
    // 00653d  and eax, 7
    X86_AT(c, 0x653du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 006542  mov eax, dword ptr cs:[eax*4 + 0xc374]
    X86_AT(c, 0x6542u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC374u)));
    // 00654a  movsx ecx, bx
    X86_AT(c, 0x654au);
    c.r[1] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 00654d  sar ecx, 3
    X86_AT(c, 0x654du);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 006550  lea edi, [edi + ecx*4]
    X86_AT(c, 0x6550u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] * 4);
    // 006553  jmp dword ptr gs:[ebp + 0x318]
    X86_AT(c, 0x6553u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)))); return;
    x86_fault(c, 0x6532u, "ran off the end of a function");
}
void f_00006537(X86Cpu& c) {
    X86_TICK(c, 29);
    // 006537  add edi, dword ptr gs:[ebp]
    X86_AT(c, 0x6537u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 00653b  mov al, bl
    X86_AT(c, 0x653bu);
    s8(c, 0, g8(c, 3));
    // 00653d  and eax, 7
    X86_AT(c, 0x653du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 006542  mov eax, dword ptr cs:[eax*4 + 0xc374]
    X86_AT(c, 0x6542u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC374u)));
    // 00654a  movsx ecx, bx
    X86_AT(c, 0x654au);
    c.r[1] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 00654d  sar ecx, 3
    X86_AT(c, 0x654du);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 006550  lea edi, [edi + ecx*4]
    X86_AT(c, 0x6550u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] * 4);
    // 006553  jmp dword ptr gs:[ebp + 0x318]
    X86_AT(c, 0x6553u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)))); return;
    x86_fault(c, 0x6537u, "ran off the end of a function");
}
void f_0000653b(X86Cpu& c) {
    X86_TICK(c, 23);
    // 00653b  mov al, bl
    X86_AT(c, 0x653bu);
    s8(c, 0, g8(c, 3));
    // 00653d  and eax, 7
    X86_AT(c, 0x653du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 006542  mov eax, dword ptr cs:[eax*4 + 0xc374]
    X86_AT(c, 0x6542u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC374u)));
    // 00654a  movsx ecx, bx
    X86_AT(c, 0x654au);
    c.r[1] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 00654d  sar ecx, 3
    X86_AT(c, 0x654du);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 006550  lea edi, [edi + ecx*4]
    X86_AT(c, 0x6550u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] * 4);
    // 006553  jmp dword ptr gs:[ebp + 0x318]
    X86_AT(c, 0x6553u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)))); return;
    x86_fault(c, 0x653bu, "ran off the end of a function");
}
void f_0000653d(X86Cpu& c) {
    X86_TICK(c, 21);
    // 00653d  and eax, 7
    X86_AT(c, 0x653du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 006542  mov eax, dword ptr cs:[eax*4 + 0xc374]
    X86_AT(c, 0x6542u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC374u)));
    // 00654a  movsx ecx, bx
    X86_AT(c, 0x654au);
    c.r[1] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 00654d  sar ecx, 3
    X86_AT(c, 0x654du);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 006550  lea edi, [edi + ecx*4]
    X86_AT(c, 0x6550u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] * 4);
    // 006553  jmp dword ptr gs:[ebp + 0x318]
    X86_AT(c, 0x6553u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)))); return;
    x86_fault(c, 0x653du, "ran off the end of a function");
}
void f_00006542(X86Cpu& c) {
    X86_TICK(c, 19);
    // 006542  mov eax, dword ptr cs:[eax*4 + 0xc374]
    X86_AT(c, 0x6542u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC374u)));
    // 00654a  movsx ecx, bx
    X86_AT(c, 0x654au);
    c.r[1] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 00654d  sar ecx, 3
    X86_AT(c, 0x654du);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 006550  lea edi, [edi + ecx*4]
    X86_AT(c, 0x6550u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] * 4);
    // 006553  jmp dword ptr gs:[ebp + 0x318]
    X86_AT(c, 0x6553u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)))); return;
    x86_fault(c, 0x6542u, "ran off the end of a function");
}
void f_0000654a(X86Cpu& c) {
    X86_TICK(c, 15);
    // 00654a  movsx ecx, bx
    X86_AT(c, 0x654au);
    c.r[1] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 00654d  sar ecx, 3
    X86_AT(c, 0x654du);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 006550  lea edi, [edi + ecx*4]
    X86_AT(c, 0x6550u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] * 4);
    // 006553  jmp dword ptr gs:[ebp + 0x318]
    X86_AT(c, 0x6553u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)))); return;
    x86_fault(c, 0x654au, "ran off the end of a function");
}
void f_0000654d(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00654d  sar ecx, 3
    X86_AT(c, 0x654du);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 006550  lea edi, [edi + ecx*4]
    X86_AT(c, 0x6550u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] * 4);
    // 006553  jmp dword ptr gs:[ebp + 0x318]
    X86_AT(c, 0x6553u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)))); return;
    x86_fault(c, 0x654du, "ran off the end of a function");
}
void f_00006550(X86Cpu& c) {
    X86_TICK(c, 9);
    // 006550  lea edi, [edi + ecx*4]
    X86_AT(c, 0x6550u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[1] * 4);
    // 006553  jmp dword ptr gs:[ebp + 0x318]
    X86_AT(c, 0x6553u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)))); return;
    x86_fault(c, 0x6550u, "ran off the end of a function");
}
void f_00006553(X86Cpu& c) {
    X86_TICK(c, 7);
    // 006553  jmp dword ptr gs:[ebp + 0x318]
    X86_AT(c, 0x6553u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)))); return;
    x86_fault(c, 0x6553u, "ran off the end of a function");
}
void f_00006560(X86Cpu& c) {
    X86_TICK(c, 30);
    // 006560  not eax
    X86_AT(c, 0x6560u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 006562  mov ecx, dword ptr es:[edi]
    X86_AT(c, 0x6562u);
    c.r[1] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006565  and ecx, eax
    X86_AT(c, 0x6565u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[0], 4); }
    // 006567  not eax
    X86_AT(c, 0x6567u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 006569  and eax, dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x6569u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu))), 4); }
    // 006570  or ecx, eax
    X86_AT(c, 0x6570u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v | c.r[0], 4); }
    // 006572  mov dword ptr es:[edi], ecx
    X86_AT(c, 0x6572u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[1]);
    // 006575  ret 
    X86_AT(c, 0x6575u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6560u, "ran off the end of a function");
}
void f_00006562(X86Cpu& c) {
    X86_TICK(c, 28);
    // 006562  mov ecx, dword ptr es:[edi]
    X86_AT(c, 0x6562u);
    c.r[1] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006565  and ecx, eax
    X86_AT(c, 0x6565u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[0], 4); }
    // 006567  not eax
    X86_AT(c, 0x6567u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 006569  and eax, dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x6569u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu))), 4); }
    // 006570  or ecx, eax
    X86_AT(c, 0x6570u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v | c.r[0], 4); }
    // 006572  mov dword ptr es:[edi], ecx
    X86_AT(c, 0x6572u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[1]);
    // 006575  ret 
    X86_AT(c, 0x6575u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6562u, "ran off the end of a function");
}
void f_00006565(X86Cpu& c) {
    X86_TICK(c, 24);
    // 006565  and ecx, eax
    X86_AT(c, 0x6565u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[0], 4); }
    // 006567  not eax
    X86_AT(c, 0x6567u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 006569  and eax, dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x6569u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu))), 4); }
    // 006570  or ecx, eax
    X86_AT(c, 0x6570u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v | c.r[0], 4); }
    // 006572  mov dword ptr es:[edi], ecx
    X86_AT(c, 0x6572u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[1]);
    // 006575  ret 
    X86_AT(c, 0x6575u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6565u, "ran off the end of a function");
}
void f_00006567(X86Cpu& c) {
    X86_TICK(c, 22);
    // 006567  not eax
    X86_AT(c, 0x6567u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 006569  and eax, dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x6569u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu))), 4); }
    // 006570  or ecx, eax
    X86_AT(c, 0x6570u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v | c.r[0], 4); }
    // 006572  mov dword ptr es:[edi], ecx
    X86_AT(c, 0x6572u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[1]);
    // 006575  ret 
    X86_AT(c, 0x6575u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6567u, "ran off the end of a function");
}
void f_00006569(X86Cpu& c) {
    X86_TICK(c, 20);
    // 006569  and eax, dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x6569u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu))), 4); }
    // 006570  or ecx, eax
    X86_AT(c, 0x6570u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v | c.r[0], 4); }
    // 006572  mov dword ptr es:[edi], ecx
    X86_AT(c, 0x6572u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[1]);
    // 006575  ret 
    X86_AT(c, 0x6575u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6569u, "ran off the end of a function");
}
void f_00006570(X86Cpu& c) {
    X86_TICK(c, 14);
    // 006570  or ecx, eax
    X86_AT(c, 0x6570u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v | c.r[0], 4); }
    // 006572  mov dword ptr es:[edi], ecx
    X86_AT(c, 0x6572u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[1]);
    // 006575  ret 
    X86_AT(c, 0x6575u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6570u, "ran off the end of a function");
}
void f_00006572(X86Cpu& c) {
    X86_TICK(c, 12);
    // 006572  mov dword ptr es:[edi], ecx
    X86_AT(c, 0x6572u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[1]);
    // 006575  ret 
    X86_AT(c, 0x6575u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6572u, "ran off the end of a function");
}
void f_00006575(X86Cpu& c) {
    X86_TICK(c, 10);
    // 006575  ret 
    X86_AT(c, 0x6575u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6575u, "ran off the end of a function");
}
void f_0000659c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 00659c  and eax, dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x659cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu))), 4); }
    // 0065a3  xor dword ptr es:[edi], eax
    X86_AT(c, 0x65a3u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 0065a6  ret 
    X86_AT(c, 0x65a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x659cu, "ran off the end of a function");
}
void f_000065a3(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0065a3  xor dword ptr es:[edi], eax
    X86_AT(c, 0x65a3u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 0065a6  ret 
    X86_AT(c, 0x65a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x65a3u, "ran off the end of a function");
}
void f_000065a6(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0065a6  ret 
    X86_AT(c, 0x65a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x65a6u, "ran off the end of a function");
}
void f_00006864(X86Cpu& c) {
    X86_TICK(c, 107);
    // 006864  mov ebx, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x6864u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 00686b  sub bx, 0xf
    X86_AT(c, 0x686bu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, 0xFu, 0, 2)); }
    // 00686f  shld edx, ebx, 0x10
    X86_AT(c, 0x686fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 006873  sub dx, 0xf
    X86_AT(c, 0x6873u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0xFu, 0, 2)); }
    // 006877  movsx ecx, dx
    X86_AT(c, 0x6877u);
    c.r[1] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 00687a  imul ecx, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x687au);
    c.r[1] = x86_imul2(c, c.r[1], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00687f  movsx edi, bx
    X86_AT(c, 0x687fu);
    c.r[7] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 006882  sar edi, 3
    X86_AT(c, 0x6882u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 006885  and edi, 0xfffffffc
    X86_AT(c, 0x6885u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 006888  add edi, ecx
    X86_AT(c, 0x6888u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[1], 0, 4); }
    // 00688a  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x688au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 00688e  mov dword ptr gs:[ebp + 0x1d0], edi
    X86_AT(c, 0x688eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)), c.r[7]);
    // 006895  mov cl, bl
    X86_AT(c, 0x6895u);
    s8(c, 1, g8(c, 3));
    // 006897  and cl, 0x1f
    X86_AT(c, 0x6897u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x1Fu, 1)); }
    // 00689a  mov byte ptr gs:[ebp + 0x22b], cl
    X86_AT(c, 0x689au);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu)), g8(c, 1));
    // 0068a1  movsx eax, dx
    X86_AT(c, 0x68a1u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 0068a4  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x68a4u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 0068a9  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x68a9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 0068ad  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x68adu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 0068b4  and bl, 0xe0
    X86_AT(c, 0x68b4u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xE0u, 1)); }
    // 0068b7  test byte ptr gs:[ebp + 0x22a], 0x80
    X86_AT(c, 0x68b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au))) & 0x80u, 1);
    // 0068bf  jne 0x6948
    X86_AT(c, 0x68bfu);
    if (x86_cc(c, 5)) { goto L_6948; }
    X86_TICK(c, 4);
    // 0068c5  mov esi, 0x234
    X86_AT(c, 0x68c5u);
    c.r[6] = 0x234u;
    // 0068ca  push 0x20
    X86_AT(c, 0x68cau);
    { uint32_t v = 0x20u; push32(c, v); }
L_68cf:
    X86_TICK(c, 20);
    // 0068cf  push dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x68cfu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u))); push32(c, v); }
    // 0068d6  push esi
    X86_AT(c, 0x68d6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0068d7  push ebx
    X86_AT(c, 0x68d7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0068d8  mov eax, dword ptr gs:[ebp + esi*1]
    X86_AT(c, 0x68d8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6])));
    // 0068dd  test eax, eax
    X86_AT(c, 0x68ddu);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0068df  je 0x6918
    X86_AT(c, 0x68dfu);
    if (x86_cc(c, 4)) { goto L_6918; }
    X86_TICK(c, 14);
    // 0068e1  push eax
    X86_AT(c, 0x68e1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0068e2  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x68e2u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 0068e9  shr eax, cl
    X86_AT(c, 0x68e9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 0068eb  je 0x68f6
    X86_AT(c, 0x68ebu);
    if (x86_cc(c, 4)) { goto L_68f6; }
    X86_TICK(c, 11);
    // 0068ed  push ebx
    X86_AT(c, 0x68edu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0068ee  push edx
    X86_AT(c, 0x68eeu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0068ef  call 0x6a41
    X86_AT(c, 0x68efu);
    push32(c, 0x68f4u); x86_call_known(c, 0x6a41u, f_00006a41); X86_RET(c, 0x68f4u);
    X86_TICK(c, 8);
    // 0068f4  pop edx
    X86_AT(c, 0x68f4u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0068f5  pop ebx
    X86_AT(c, 0x68f5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_68f6:
    X86_TICK(c, 27);
    // 0068f6  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x68f6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0068fe  add bx, 0x20
    X86_AT(c, 0x68feu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 006902  pop edi
    X86_AT(c, 0x6902u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 006903  sub eax, eax
    X86_AT(c, 0x6903u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 006905  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x6905u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 00690c  shrd eax, edi, cl
    X86_AT(c, 0x690cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00690f  je 0x6918
    X86_AT(c, 0x690fu);
    if (x86_cc(c, 4)) { goto L_6918; }
    X86_TICK(c, 9);
    // 006911  push edx
    X86_AT(c, 0x6911u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 006912  call 0x6a41
    X86_AT(c, 0x6912u);
    push32(c, 0x6917u); x86_call_known(c, 0x6a41u, f_00006a41); X86_RET(c, 0x6917u);
    X86_TICK(c, 4);
    // 006917  pop edx
    X86_AT(c, 0x6917u);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_6918:
    X86_TICK(c, 50);
    // 006918  pop ebx
    X86_AT(c, 0x6918u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 006919  inc dx
    X86_AT(c, 0x6919u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00691b  pop esi
    X86_AT(c, 0x691bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00691c  add esi, 4
    X86_AT(c, 0x691cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00691f  pop dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x691fu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)), v); }
    // 006926  mov eax, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x6926u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 00692a  add dword ptr gs:[ebp + 0x1d0], eax
    X86_AT(c, 0x692au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 006931  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x6931u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 006935  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x6935u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00693c  dec dword ptr [esp]
    X86_AT(c, 0x693cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00693f  jne 0x68cf
    X86_AT(c, 0x693fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x68cfu); goto L_68cf; }
    X86_TICK(c, 12);
    // 006941  add esp, 4
    X86_AT(c, 0x6941u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 006944  ret 
    X86_AT(c, 0x6944u);
    c.eip = pop32(c); return;
L_6948:
    X86_TICK(c, 10);
    // 006948  sub esi, esi
    X86_AT(c, 0x6948u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00694a  lds edi, fword ptr gs:[ebp + 0x22c]
    X86_AT(c, 0x694au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x22Cu)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[7] = o; }
    // 006951  push 0x20
    X86_AT(c, 0x6951u);
    { uint32_t v = 0x20u; push32(c, v); }
L_6956:
    X86_TICK(c, 35);
    // 006956  push dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6956u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u))); push32(c, v); }
    // 00695d  push esi
    X86_AT(c, 0x695du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00695e  push edi
    X86_AT(c, 0x695eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00695f  push ebx
    X86_AT(c, 0x695fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 006960  mov ecx, dword ptr [edi]
    X86_AT(c, 0x6960u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 006962  xchg cl, ch
    X86_AT(c, 0x6962u);
    { uint32_t t = g8(c, 1); s8(c, 1, g8(c, 5)); s8(c, 5, t); }
    // 006964  rol ecx, 0x10
    X86_AT(c, 0x6964u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 006967  xchg cl, ch
    X86_AT(c, 0x6967u);
    { uint32_t t = g8(c, 1); s8(c, 1, g8(c, 5)); s8(c, 5, t); }
    // 006969  mov eax, dword ptr gs:[ebp + esi*1 + 0x234]
    X86_AT(c, 0x6969u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x234u)));
    // 006971  and eax, ecx
    X86_AT(c, 0x6971u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 006973  je 0x69ac
    X86_AT(c, 0x6973u);
    if (x86_cc(c, 4)) { goto L_69ac; }
    X86_TICK(c, 14);
    // 006975  push eax
    X86_AT(c, 0x6975u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 006976  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x6976u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 00697d  shr eax, cl
    X86_AT(c, 0x697du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00697f  je 0x698a
    X86_AT(c, 0x697fu);
    if (x86_cc(c, 4)) { goto L_698a; }
    X86_TICK(c, 11);
    // 006981  push ebx
    X86_AT(c, 0x6981u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 006982  push edx
    X86_AT(c, 0x6982u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 006983  call 0x6a41
    X86_AT(c, 0x6983u);
    push32(c, 0x6988u); x86_call_known(c, 0x6a41u, f_00006a41); X86_RET(c, 0x6988u);
    X86_TICK(c, 8);
    // 006988  pop edx
    X86_AT(c, 0x6988u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 006989  pop ebx
    X86_AT(c, 0x6989u);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_698a:
    X86_TICK(c, 27);
    // 00698a  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x698au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 006992  add bx, 0x20
    X86_AT(c, 0x6992u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 006996  pop edi
    X86_AT(c, 0x6996u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 006997  sub eax, eax
    X86_AT(c, 0x6997u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 006999  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x6999u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 0069a0  shrd eax, edi, cl
    X86_AT(c, 0x69a0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[7], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 0069a3  je 0x69ac
    X86_AT(c, 0x69a3u);
    if (x86_cc(c, 4)) { goto L_69ac; }
    X86_TICK(c, 9);
    // 0069a5  push edx
    X86_AT(c, 0x69a5u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0069a6  call 0x6a41
    X86_AT(c, 0x69a6u);
    push32(c, 0x69abu); x86_call_known(c, 0x6a41u, f_00006a41); X86_RET(c, 0x69abu);
    X86_TICK(c, 4);
    // 0069ab  pop edx
    X86_AT(c, 0x69abu);
    { uint32_t v = pop32(c); c.r[2] = v; }
L_69ac:
    X86_TICK(c, 56);
    // 0069ac  pop ebx
    X86_AT(c, 0x69acu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0069ad  inc dx
    X86_AT(c, 0x69adu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 0069af  pop edi
    X86_AT(c, 0x69afu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0069b0  add edi, 4
    X86_AT(c, 0x69b0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 0069b3  pop esi
    X86_AT(c, 0x69b3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0069b4  add esi, 4
    X86_AT(c, 0x69b4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0069b7  pop dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x69b7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)), v); }
    // 0069be  mov eax, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x69beu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0069c2  add dword ptr gs:[ebp + 0x1d0], eax
    X86_AT(c, 0x69c2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0069c9  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x69c9u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0069cd  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x69cdu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0069d4  dec dword ptr [esp]
    X86_AT(c, 0x69d4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0069d7  jne 0x6956
    X86_AT(c, 0x69d7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x6956u); goto L_6956; }
    X86_TICK(c, 12);
    // 0069dd  add esp, 4
    X86_AT(c, 0x69ddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0069e0  ret 
    X86_AT(c, 0x69e0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6864u, "ran off the end of a function");
}
void f_00006a41(X86Cpu& c) {
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x6a41u, "ran off the end of a function");
}
void f_00006a46(X86Cpu& c) {
    X86_TICK(c, 5);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x6a46u, "ran off the end of a function");
}
void f_00006a48(X86Cpu& c) {
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 14);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x6a48u, "ran off the end of a function");
}
void f_00006a4f(X86Cpu& c) {
    X86_TICK(c, 12);
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 14);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x6a4fu, "ran off the end of a function");
}
void f_00006a54(X86Cpu& c) {
    X86_TICK(c, 5);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 14);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x6a54u, "ran off the end of a function");
}
void f_00006a56(X86Cpu& c) {
    X86_TICK(c, 22);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x6a56u, "ran off the end of a function");
}
void f_00006a59(X86Cpu& c) {
    X86_TICK(c, 18);
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x6a59u, "ran off the end of a function");
}
void f_00006a5b(X86Cpu& c) {
    X86_TICK(c, 16);
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x6a5bu, "ran off the end of a function");
}
void f_00006a5d(X86Cpu& c) {
    X86_TICK(c, 14);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x6a5du, "ran off the end of a function");
}
void f_00006a60(X86Cpu& c) {
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x6a60u, "ran off the end of a function");
}
void f_00006d73(X86Cpu& c) {
    X86_TICK(c, 20);
    // 006d73  mov edi, ebx
    X86_AT(c, 0x6d73u);
    c.r[7] = c.r[3];
    // 006d75  and edi, 0xffe0
    X86_AT(c, 0x6d75u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0xFFE0u, 4); }
    // 006d7b  shr edi, 1
    X86_AT(c, 0x6d7bu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[7] = r; }
    // 006d7d  add edi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x6d7du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 006d84  jmp dword ptr gs:[ebp + 0x320]
    X86_AT(c, 0x6d84u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)))); return;
    x86_fault(c, 0x6d73u, "ran off the end of a function");
}
void f_00006d75(X86Cpu& c) {
    X86_TICK(c, 18);
    // 006d75  and edi, 0xffe0
    X86_AT(c, 0x6d75u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0xFFE0u, 4); }
    // 006d7b  shr edi, 1
    X86_AT(c, 0x6d7bu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[7] = r; }
    // 006d7d  add edi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x6d7du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 006d84  jmp dword ptr gs:[ebp + 0x320]
    X86_AT(c, 0x6d84u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)))); return;
    x86_fault(c, 0x6d75u, "ran off the end of a function");
}
void f_00006d7b(X86Cpu& c) {
    X86_TICK(c, 16);
    // 006d7b  shr edi, 1
    X86_AT(c, 0x6d7bu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[7] = r; }
    // 006d7d  add edi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x6d7du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 006d84  jmp dword ptr gs:[ebp + 0x320]
    X86_AT(c, 0x6d84u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)))); return;
    x86_fault(c, 0x6d7bu, "ran off the end of a function");
}
void f_00006d7d(X86Cpu& c) {
    X86_TICK(c, 13);
    // 006d7d  add edi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x6d7du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 006d84  jmp dword ptr gs:[ebp + 0x320]
    X86_AT(c, 0x6d84u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)))); return;
    x86_fault(c, 0x6d7du, "ran off the end of a function");
}
void f_00006d84(X86Cpu& c) {
    X86_TICK(c, 7);
    // 006d84  jmp dword ptr gs:[ebp + 0x320]
    X86_AT(c, 0x6d84u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)))); return;
    x86_fault(c, 0x6d84u, "ran off the end of a function");
}
void f_00006d8c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 006d8c  cmp eax, 0xffffffff
    X86_AT(c, 0x6d8cu);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFFu, 0, 4);
    // 006d91  je 0x6e14
    X86_AT(c, 0x6d91u);
    if (x86_cc(c, 4)) { goto L_6e14; }
    X86_TICK(c, 107);
    // 006d97  mov esi, dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x6d97u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)));
    // 006d9e  sub edx, edx
    X86_AT(c, 0x6d9eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 006da0  mov dl, al
    X86_AT(c, 0x6da0u);
    s8(c, 2, g8(c, 0));
    // 006da2  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6da2u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006daa  not ecx
    X86_AT(c, 0x6daau);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dac  mov ebx, dword ptr es:[edi + 0xc]
    X86_AT(c, 0x6dacu);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)));
    // 006db0  and ebx, ecx
    X86_AT(c, 0x6db0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006db2  not ecx
    X86_AT(c, 0x6db2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006db4  and ecx, esi
    X86_AT(c, 0x6db4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006db6  or ebx, ecx
    X86_AT(c, 0x6db6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006db8  mov dword ptr es:[edi + 0xc], ebx
    X86_AT(c, 0x6db8u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)), c.r[3]);
    // 006dbc  mov dl, ah
    X86_AT(c, 0x6dbcu);
    s8(c, 2, g8(c, 4));
    // 006dbe  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dbeu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006dc6  not ecx
    X86_AT(c, 0x6dc6u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dc8  mov ebx, dword ptr es:[edi + 8]
    X86_AT(c, 0x6dc8u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)));
    // 006dcc  and ebx, ecx
    X86_AT(c, 0x6dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006dce  not ecx
    X86_AT(c, 0x6dceu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dd0  and ecx, esi
    X86_AT(c, 0x6dd0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006dd2  or ebx, ecx
    X86_AT(c, 0x6dd2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006dd4  mov dword ptr es:[edi + 8], ebx
    X86_AT(c, 0x6dd4u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)), c.r[3]);
    // 006dd8  rol eax, 0x10
    X86_AT(c, 0x6dd8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 006ddb  mov dl, al
    X86_AT(c, 0x6ddbu);
    s8(c, 2, g8(c, 0));
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
L_6e14:
    X86_TICK(c, 23);
    // 006e14  mov ecx, 4
    X86_AT(c, 0x6e14u);
    c.r[1] = 0x4u;
    // 006e19  mov eax, dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x6e19u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)));
    // 006e20  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x6e20u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 006e22  ret 
    X86_AT(c, 0x6e22u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6d8cu, "ran off the end of a function");
}
void f_00006d91(X86Cpu& c) {
    X86_TICK(c, 5);
    // 006d91  je 0x6e14
    X86_AT(c, 0x6d91u);
    if (x86_cc(c, 4)) { goto L_6e14; }
    X86_TICK(c, 107);
    // 006d97  mov esi, dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x6d97u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)));
    // 006d9e  sub edx, edx
    X86_AT(c, 0x6d9eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 006da0  mov dl, al
    X86_AT(c, 0x6da0u);
    s8(c, 2, g8(c, 0));
    // 006da2  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6da2u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006daa  not ecx
    X86_AT(c, 0x6daau);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dac  mov ebx, dword ptr es:[edi + 0xc]
    X86_AT(c, 0x6dacu);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)));
    // 006db0  and ebx, ecx
    X86_AT(c, 0x6db0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006db2  not ecx
    X86_AT(c, 0x6db2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006db4  and ecx, esi
    X86_AT(c, 0x6db4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006db6  or ebx, ecx
    X86_AT(c, 0x6db6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006db8  mov dword ptr es:[edi + 0xc], ebx
    X86_AT(c, 0x6db8u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)), c.r[3]);
    // 006dbc  mov dl, ah
    X86_AT(c, 0x6dbcu);
    s8(c, 2, g8(c, 4));
    // 006dbe  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dbeu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006dc6  not ecx
    X86_AT(c, 0x6dc6u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dc8  mov ebx, dword ptr es:[edi + 8]
    X86_AT(c, 0x6dc8u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)));
    // 006dcc  and ebx, ecx
    X86_AT(c, 0x6dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006dce  not ecx
    X86_AT(c, 0x6dceu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dd0  and ecx, esi
    X86_AT(c, 0x6dd0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006dd2  or ebx, ecx
    X86_AT(c, 0x6dd2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006dd4  mov dword ptr es:[edi + 8], ebx
    X86_AT(c, 0x6dd4u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)), c.r[3]);
    // 006dd8  rol eax, 0x10
    X86_AT(c, 0x6dd8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 006ddb  mov dl, al
    X86_AT(c, 0x6ddbu);
    s8(c, 2, g8(c, 0));
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
L_6e14:
    X86_TICK(c, 23);
    // 006e14  mov ecx, 4
    X86_AT(c, 0x6e14u);
    c.r[1] = 0x4u;
    // 006e19  mov eax, dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x6e19u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)));
    // 006e20  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x6e20u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 006e22  ret 
    X86_AT(c, 0x6e22u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6d91u, "ran off the end of a function");
}
void f_00006d97(X86Cpu& c) {
    X86_TICK(c, 107);
    // 006d97  mov esi, dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x6d97u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)));
    // 006d9e  sub edx, edx
    X86_AT(c, 0x6d9eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 006da0  mov dl, al
    X86_AT(c, 0x6da0u);
    s8(c, 2, g8(c, 0));
    // 006da2  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6da2u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006daa  not ecx
    X86_AT(c, 0x6daau);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dac  mov ebx, dword ptr es:[edi + 0xc]
    X86_AT(c, 0x6dacu);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)));
    // 006db0  and ebx, ecx
    X86_AT(c, 0x6db0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006db2  not ecx
    X86_AT(c, 0x6db2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006db4  and ecx, esi
    X86_AT(c, 0x6db4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006db6  or ebx, ecx
    X86_AT(c, 0x6db6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006db8  mov dword ptr es:[edi + 0xc], ebx
    X86_AT(c, 0x6db8u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)), c.r[3]);
    // 006dbc  mov dl, ah
    X86_AT(c, 0x6dbcu);
    s8(c, 2, g8(c, 4));
    // 006dbe  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dbeu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006dc6  not ecx
    X86_AT(c, 0x6dc6u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dc8  mov ebx, dword ptr es:[edi + 8]
    X86_AT(c, 0x6dc8u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)));
    // 006dcc  and ebx, ecx
    X86_AT(c, 0x6dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006dce  not ecx
    X86_AT(c, 0x6dceu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dd0  and ecx, esi
    X86_AT(c, 0x6dd0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006dd2  or ebx, ecx
    X86_AT(c, 0x6dd2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006dd4  mov dword ptr es:[edi + 8], ebx
    X86_AT(c, 0x6dd4u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)), c.r[3]);
    // 006dd8  rol eax, 0x10
    X86_AT(c, 0x6dd8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 006ddb  mov dl, al
    X86_AT(c, 0x6ddbu);
    s8(c, 2, g8(c, 0));
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6d97u, "ran off the end of a function");
}
void f_00006d9e(X86Cpu& c) {
    X86_TICK(c, 103);
    // 006d9e  sub edx, edx
    X86_AT(c, 0x6d9eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 006da0  mov dl, al
    X86_AT(c, 0x6da0u);
    s8(c, 2, g8(c, 0));
    // 006da2  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6da2u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006daa  not ecx
    X86_AT(c, 0x6daau);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dac  mov ebx, dword ptr es:[edi + 0xc]
    X86_AT(c, 0x6dacu);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)));
    // 006db0  and ebx, ecx
    X86_AT(c, 0x6db0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006db2  not ecx
    X86_AT(c, 0x6db2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006db4  and ecx, esi
    X86_AT(c, 0x6db4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006db6  or ebx, ecx
    X86_AT(c, 0x6db6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006db8  mov dword ptr es:[edi + 0xc], ebx
    X86_AT(c, 0x6db8u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)), c.r[3]);
    // 006dbc  mov dl, ah
    X86_AT(c, 0x6dbcu);
    s8(c, 2, g8(c, 4));
    // 006dbe  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dbeu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006dc6  not ecx
    X86_AT(c, 0x6dc6u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dc8  mov ebx, dword ptr es:[edi + 8]
    X86_AT(c, 0x6dc8u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)));
    // 006dcc  and ebx, ecx
    X86_AT(c, 0x6dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006dce  not ecx
    X86_AT(c, 0x6dceu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dd0  and ecx, esi
    X86_AT(c, 0x6dd0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006dd2  or ebx, ecx
    X86_AT(c, 0x6dd2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006dd4  mov dword ptr es:[edi + 8], ebx
    X86_AT(c, 0x6dd4u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)), c.r[3]);
    // 006dd8  rol eax, 0x10
    X86_AT(c, 0x6dd8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 006ddb  mov dl, al
    X86_AT(c, 0x6ddbu);
    s8(c, 2, g8(c, 0));
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6d9eu, "ran off the end of a function");
}
void f_00006da0(X86Cpu& c) {
    X86_TICK(c, 101);
    // 006da0  mov dl, al
    X86_AT(c, 0x6da0u);
    s8(c, 2, g8(c, 0));
    // 006da2  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6da2u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006daa  not ecx
    X86_AT(c, 0x6daau);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dac  mov ebx, dword ptr es:[edi + 0xc]
    X86_AT(c, 0x6dacu);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)));
    // 006db0  and ebx, ecx
    X86_AT(c, 0x6db0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006db2  not ecx
    X86_AT(c, 0x6db2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006db4  and ecx, esi
    X86_AT(c, 0x6db4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006db6  or ebx, ecx
    X86_AT(c, 0x6db6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006db8  mov dword ptr es:[edi + 0xc], ebx
    X86_AT(c, 0x6db8u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)), c.r[3]);
    // 006dbc  mov dl, ah
    X86_AT(c, 0x6dbcu);
    s8(c, 2, g8(c, 4));
    // 006dbe  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dbeu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006dc6  not ecx
    X86_AT(c, 0x6dc6u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dc8  mov ebx, dword ptr es:[edi + 8]
    X86_AT(c, 0x6dc8u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)));
    // 006dcc  and ebx, ecx
    X86_AT(c, 0x6dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006dce  not ecx
    X86_AT(c, 0x6dceu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dd0  and ecx, esi
    X86_AT(c, 0x6dd0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006dd2  or ebx, ecx
    X86_AT(c, 0x6dd2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006dd4  mov dword ptr es:[edi + 8], ebx
    X86_AT(c, 0x6dd4u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)), c.r[3]);
    // 006dd8  rol eax, 0x10
    X86_AT(c, 0x6dd8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 006ddb  mov dl, al
    X86_AT(c, 0x6ddbu);
    s8(c, 2, g8(c, 0));
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6da0u, "ran off the end of a function");
}
void f_00006da2(X86Cpu& c) {
    X86_TICK(c, 99);
    // 006da2  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6da2u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006daa  not ecx
    X86_AT(c, 0x6daau);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dac  mov ebx, dword ptr es:[edi + 0xc]
    X86_AT(c, 0x6dacu);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)));
    // 006db0  and ebx, ecx
    X86_AT(c, 0x6db0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006db2  not ecx
    X86_AT(c, 0x6db2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006db4  and ecx, esi
    X86_AT(c, 0x6db4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006db6  or ebx, ecx
    X86_AT(c, 0x6db6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006db8  mov dword ptr es:[edi + 0xc], ebx
    X86_AT(c, 0x6db8u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)), c.r[3]);
    // 006dbc  mov dl, ah
    X86_AT(c, 0x6dbcu);
    s8(c, 2, g8(c, 4));
    // 006dbe  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dbeu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006dc6  not ecx
    X86_AT(c, 0x6dc6u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dc8  mov ebx, dword ptr es:[edi + 8]
    X86_AT(c, 0x6dc8u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)));
    // 006dcc  and ebx, ecx
    X86_AT(c, 0x6dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006dce  not ecx
    X86_AT(c, 0x6dceu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dd0  and ecx, esi
    X86_AT(c, 0x6dd0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006dd2  or ebx, ecx
    X86_AT(c, 0x6dd2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006dd4  mov dword ptr es:[edi + 8], ebx
    X86_AT(c, 0x6dd4u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)), c.r[3]);
    // 006dd8  rol eax, 0x10
    X86_AT(c, 0x6dd8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 006ddb  mov dl, al
    X86_AT(c, 0x6ddbu);
    s8(c, 2, g8(c, 0));
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6da2u, "ran off the end of a function");
}
void f_00006daa(X86Cpu& c) {
    X86_TICK(c, 95);
    // 006daa  not ecx
    X86_AT(c, 0x6daau);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dac  mov ebx, dword ptr es:[edi + 0xc]
    X86_AT(c, 0x6dacu);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)));
    // 006db0  and ebx, ecx
    X86_AT(c, 0x6db0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006db2  not ecx
    X86_AT(c, 0x6db2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006db4  and ecx, esi
    X86_AT(c, 0x6db4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006db6  or ebx, ecx
    X86_AT(c, 0x6db6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006db8  mov dword ptr es:[edi + 0xc], ebx
    X86_AT(c, 0x6db8u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)), c.r[3]);
    // 006dbc  mov dl, ah
    X86_AT(c, 0x6dbcu);
    s8(c, 2, g8(c, 4));
    // 006dbe  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dbeu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006dc6  not ecx
    X86_AT(c, 0x6dc6u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dc8  mov ebx, dword ptr es:[edi + 8]
    X86_AT(c, 0x6dc8u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)));
    // 006dcc  and ebx, ecx
    X86_AT(c, 0x6dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006dce  not ecx
    X86_AT(c, 0x6dceu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dd0  and ecx, esi
    X86_AT(c, 0x6dd0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006dd2  or ebx, ecx
    X86_AT(c, 0x6dd2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006dd4  mov dword ptr es:[edi + 8], ebx
    X86_AT(c, 0x6dd4u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)), c.r[3]);
    // 006dd8  rol eax, 0x10
    X86_AT(c, 0x6dd8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 006ddb  mov dl, al
    X86_AT(c, 0x6ddbu);
    s8(c, 2, g8(c, 0));
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6daau, "ran off the end of a function");
}
void f_00006dac(X86Cpu& c) {
    X86_TICK(c, 93);
    // 006dac  mov ebx, dword ptr es:[edi + 0xc]
    X86_AT(c, 0x6dacu);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)));
    // 006db0  and ebx, ecx
    X86_AT(c, 0x6db0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006db2  not ecx
    X86_AT(c, 0x6db2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006db4  and ecx, esi
    X86_AT(c, 0x6db4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006db6  or ebx, ecx
    X86_AT(c, 0x6db6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006db8  mov dword ptr es:[edi + 0xc], ebx
    X86_AT(c, 0x6db8u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)), c.r[3]);
    // 006dbc  mov dl, ah
    X86_AT(c, 0x6dbcu);
    s8(c, 2, g8(c, 4));
    // 006dbe  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dbeu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006dc6  not ecx
    X86_AT(c, 0x6dc6u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dc8  mov ebx, dword ptr es:[edi + 8]
    X86_AT(c, 0x6dc8u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)));
    // 006dcc  and ebx, ecx
    X86_AT(c, 0x6dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006dce  not ecx
    X86_AT(c, 0x6dceu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dd0  and ecx, esi
    X86_AT(c, 0x6dd0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006dd2  or ebx, ecx
    X86_AT(c, 0x6dd2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006dd4  mov dword ptr es:[edi + 8], ebx
    X86_AT(c, 0x6dd4u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)), c.r[3]);
    // 006dd8  rol eax, 0x10
    X86_AT(c, 0x6dd8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 006ddb  mov dl, al
    X86_AT(c, 0x6ddbu);
    s8(c, 2, g8(c, 0));
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6dacu, "ran off the end of a function");
}
void f_00006db0(X86Cpu& c) {
    X86_TICK(c, 89);
    // 006db0  and ebx, ecx
    X86_AT(c, 0x6db0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006db2  not ecx
    X86_AT(c, 0x6db2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006db4  and ecx, esi
    X86_AT(c, 0x6db4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006db6  or ebx, ecx
    X86_AT(c, 0x6db6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006db8  mov dword ptr es:[edi + 0xc], ebx
    X86_AT(c, 0x6db8u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)), c.r[3]);
    // 006dbc  mov dl, ah
    X86_AT(c, 0x6dbcu);
    s8(c, 2, g8(c, 4));
    // 006dbe  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dbeu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006dc6  not ecx
    X86_AT(c, 0x6dc6u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dc8  mov ebx, dword ptr es:[edi + 8]
    X86_AT(c, 0x6dc8u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)));
    // 006dcc  and ebx, ecx
    X86_AT(c, 0x6dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006dce  not ecx
    X86_AT(c, 0x6dceu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dd0  and ecx, esi
    X86_AT(c, 0x6dd0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006dd2  or ebx, ecx
    X86_AT(c, 0x6dd2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006dd4  mov dword ptr es:[edi + 8], ebx
    X86_AT(c, 0x6dd4u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)), c.r[3]);
    // 006dd8  rol eax, 0x10
    X86_AT(c, 0x6dd8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 006ddb  mov dl, al
    X86_AT(c, 0x6ddbu);
    s8(c, 2, g8(c, 0));
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6db0u, "ran off the end of a function");
}
void f_00006db2(X86Cpu& c) {
    X86_TICK(c, 87);
    // 006db2  not ecx
    X86_AT(c, 0x6db2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006db4  and ecx, esi
    X86_AT(c, 0x6db4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006db6  or ebx, ecx
    X86_AT(c, 0x6db6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006db8  mov dword ptr es:[edi + 0xc], ebx
    X86_AT(c, 0x6db8u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)), c.r[3]);
    // 006dbc  mov dl, ah
    X86_AT(c, 0x6dbcu);
    s8(c, 2, g8(c, 4));
    // 006dbe  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dbeu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006dc6  not ecx
    X86_AT(c, 0x6dc6u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dc8  mov ebx, dword ptr es:[edi + 8]
    X86_AT(c, 0x6dc8u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)));
    // 006dcc  and ebx, ecx
    X86_AT(c, 0x6dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006dce  not ecx
    X86_AT(c, 0x6dceu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dd0  and ecx, esi
    X86_AT(c, 0x6dd0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006dd2  or ebx, ecx
    X86_AT(c, 0x6dd2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006dd4  mov dword ptr es:[edi + 8], ebx
    X86_AT(c, 0x6dd4u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)), c.r[3]);
    // 006dd8  rol eax, 0x10
    X86_AT(c, 0x6dd8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 006ddb  mov dl, al
    X86_AT(c, 0x6ddbu);
    s8(c, 2, g8(c, 0));
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6db2u, "ran off the end of a function");
}
void f_00006db4(X86Cpu& c) {
    X86_TICK(c, 85);
    // 006db4  and ecx, esi
    X86_AT(c, 0x6db4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006db6  or ebx, ecx
    X86_AT(c, 0x6db6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006db8  mov dword ptr es:[edi + 0xc], ebx
    X86_AT(c, 0x6db8u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)), c.r[3]);
    // 006dbc  mov dl, ah
    X86_AT(c, 0x6dbcu);
    s8(c, 2, g8(c, 4));
    // 006dbe  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dbeu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006dc6  not ecx
    X86_AT(c, 0x6dc6u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dc8  mov ebx, dword ptr es:[edi + 8]
    X86_AT(c, 0x6dc8u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)));
    // 006dcc  and ebx, ecx
    X86_AT(c, 0x6dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006dce  not ecx
    X86_AT(c, 0x6dceu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dd0  and ecx, esi
    X86_AT(c, 0x6dd0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006dd2  or ebx, ecx
    X86_AT(c, 0x6dd2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006dd4  mov dword ptr es:[edi + 8], ebx
    X86_AT(c, 0x6dd4u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)), c.r[3]);
    // 006dd8  rol eax, 0x10
    X86_AT(c, 0x6dd8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 006ddb  mov dl, al
    X86_AT(c, 0x6ddbu);
    s8(c, 2, g8(c, 0));
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6db4u, "ran off the end of a function");
}
void f_00006db6(X86Cpu& c) {
    X86_TICK(c, 83);
    // 006db6  or ebx, ecx
    X86_AT(c, 0x6db6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006db8  mov dword ptr es:[edi + 0xc], ebx
    X86_AT(c, 0x6db8u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)), c.r[3]);
    // 006dbc  mov dl, ah
    X86_AT(c, 0x6dbcu);
    s8(c, 2, g8(c, 4));
    // 006dbe  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dbeu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006dc6  not ecx
    X86_AT(c, 0x6dc6u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dc8  mov ebx, dword ptr es:[edi + 8]
    X86_AT(c, 0x6dc8u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)));
    // 006dcc  and ebx, ecx
    X86_AT(c, 0x6dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006dce  not ecx
    X86_AT(c, 0x6dceu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dd0  and ecx, esi
    X86_AT(c, 0x6dd0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006dd2  or ebx, ecx
    X86_AT(c, 0x6dd2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006dd4  mov dword ptr es:[edi + 8], ebx
    X86_AT(c, 0x6dd4u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)), c.r[3]);
    // 006dd8  rol eax, 0x10
    X86_AT(c, 0x6dd8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 006ddb  mov dl, al
    X86_AT(c, 0x6ddbu);
    s8(c, 2, g8(c, 0));
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6db6u, "ran off the end of a function");
}
void f_00006db8(X86Cpu& c) {
    X86_TICK(c, 81);
    // 006db8  mov dword ptr es:[edi + 0xc], ebx
    X86_AT(c, 0x6db8u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)), c.r[3]);
    // 006dbc  mov dl, ah
    X86_AT(c, 0x6dbcu);
    s8(c, 2, g8(c, 4));
    // 006dbe  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dbeu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006dc6  not ecx
    X86_AT(c, 0x6dc6u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dc8  mov ebx, dword ptr es:[edi + 8]
    X86_AT(c, 0x6dc8u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)));
    // 006dcc  and ebx, ecx
    X86_AT(c, 0x6dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006dce  not ecx
    X86_AT(c, 0x6dceu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dd0  and ecx, esi
    X86_AT(c, 0x6dd0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006dd2  or ebx, ecx
    X86_AT(c, 0x6dd2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006dd4  mov dword ptr es:[edi + 8], ebx
    X86_AT(c, 0x6dd4u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)), c.r[3]);
    // 006dd8  rol eax, 0x10
    X86_AT(c, 0x6dd8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 006ddb  mov dl, al
    X86_AT(c, 0x6ddbu);
    s8(c, 2, g8(c, 0));
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6db8u, "ran off the end of a function");
}
void f_00006dbc(X86Cpu& c) {
    X86_TICK(c, 79);
    // 006dbc  mov dl, ah
    X86_AT(c, 0x6dbcu);
    s8(c, 2, g8(c, 4));
    // 006dbe  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dbeu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006dc6  not ecx
    X86_AT(c, 0x6dc6u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dc8  mov ebx, dword ptr es:[edi + 8]
    X86_AT(c, 0x6dc8u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)));
    // 006dcc  and ebx, ecx
    X86_AT(c, 0x6dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006dce  not ecx
    X86_AT(c, 0x6dceu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dd0  and ecx, esi
    X86_AT(c, 0x6dd0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006dd2  or ebx, ecx
    X86_AT(c, 0x6dd2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006dd4  mov dword ptr es:[edi + 8], ebx
    X86_AT(c, 0x6dd4u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)), c.r[3]);
    // 006dd8  rol eax, 0x10
    X86_AT(c, 0x6dd8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 006ddb  mov dl, al
    X86_AT(c, 0x6ddbu);
    s8(c, 2, g8(c, 0));
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6dbcu, "ran off the end of a function");
}
void f_00006dbe(X86Cpu& c) {
    X86_TICK(c, 77);
    // 006dbe  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dbeu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006dc6  not ecx
    X86_AT(c, 0x6dc6u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dc8  mov ebx, dword ptr es:[edi + 8]
    X86_AT(c, 0x6dc8u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)));
    // 006dcc  and ebx, ecx
    X86_AT(c, 0x6dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006dce  not ecx
    X86_AT(c, 0x6dceu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dd0  and ecx, esi
    X86_AT(c, 0x6dd0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006dd2  or ebx, ecx
    X86_AT(c, 0x6dd2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006dd4  mov dword ptr es:[edi + 8], ebx
    X86_AT(c, 0x6dd4u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)), c.r[3]);
    // 006dd8  rol eax, 0x10
    X86_AT(c, 0x6dd8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 006ddb  mov dl, al
    X86_AT(c, 0x6ddbu);
    s8(c, 2, g8(c, 0));
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6dbeu, "ran off the end of a function");
}
void f_00006dc6(X86Cpu& c) {
    X86_TICK(c, 73);
    // 006dc6  not ecx
    X86_AT(c, 0x6dc6u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dc8  mov ebx, dword ptr es:[edi + 8]
    X86_AT(c, 0x6dc8u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)));
    // 006dcc  and ebx, ecx
    X86_AT(c, 0x6dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006dce  not ecx
    X86_AT(c, 0x6dceu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dd0  and ecx, esi
    X86_AT(c, 0x6dd0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006dd2  or ebx, ecx
    X86_AT(c, 0x6dd2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006dd4  mov dword ptr es:[edi + 8], ebx
    X86_AT(c, 0x6dd4u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)), c.r[3]);
    // 006dd8  rol eax, 0x10
    X86_AT(c, 0x6dd8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 006ddb  mov dl, al
    X86_AT(c, 0x6ddbu);
    s8(c, 2, g8(c, 0));
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6dc6u, "ran off the end of a function");
}
void f_00006dc8(X86Cpu& c) {
    X86_TICK(c, 71);
    // 006dc8  mov ebx, dword ptr es:[edi + 8]
    X86_AT(c, 0x6dc8u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)));
    // 006dcc  and ebx, ecx
    X86_AT(c, 0x6dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006dce  not ecx
    X86_AT(c, 0x6dceu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dd0  and ecx, esi
    X86_AT(c, 0x6dd0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006dd2  or ebx, ecx
    X86_AT(c, 0x6dd2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006dd4  mov dword ptr es:[edi + 8], ebx
    X86_AT(c, 0x6dd4u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)), c.r[3]);
    // 006dd8  rol eax, 0x10
    X86_AT(c, 0x6dd8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 006ddb  mov dl, al
    X86_AT(c, 0x6ddbu);
    s8(c, 2, g8(c, 0));
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6dc8u, "ran off the end of a function");
}
void f_00006dcc(X86Cpu& c) {
    X86_TICK(c, 67);
    // 006dcc  and ebx, ecx
    X86_AT(c, 0x6dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006dce  not ecx
    X86_AT(c, 0x6dceu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dd0  and ecx, esi
    X86_AT(c, 0x6dd0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006dd2  or ebx, ecx
    X86_AT(c, 0x6dd2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006dd4  mov dword ptr es:[edi + 8], ebx
    X86_AT(c, 0x6dd4u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)), c.r[3]);
    // 006dd8  rol eax, 0x10
    X86_AT(c, 0x6dd8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 006ddb  mov dl, al
    X86_AT(c, 0x6ddbu);
    s8(c, 2, g8(c, 0));
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6dccu, "ran off the end of a function");
}
void f_00006dce(X86Cpu& c) {
    X86_TICK(c, 65);
    // 006dce  not ecx
    X86_AT(c, 0x6dceu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006dd0  and ecx, esi
    X86_AT(c, 0x6dd0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006dd2  or ebx, ecx
    X86_AT(c, 0x6dd2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006dd4  mov dword ptr es:[edi + 8], ebx
    X86_AT(c, 0x6dd4u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)), c.r[3]);
    // 006dd8  rol eax, 0x10
    X86_AT(c, 0x6dd8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 006ddb  mov dl, al
    X86_AT(c, 0x6ddbu);
    s8(c, 2, g8(c, 0));
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6dceu, "ran off the end of a function");
}
void f_00006dd0(X86Cpu& c) {
    X86_TICK(c, 63);
    // 006dd0  and ecx, esi
    X86_AT(c, 0x6dd0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006dd2  or ebx, ecx
    X86_AT(c, 0x6dd2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006dd4  mov dword ptr es:[edi + 8], ebx
    X86_AT(c, 0x6dd4u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)), c.r[3]);
    // 006dd8  rol eax, 0x10
    X86_AT(c, 0x6dd8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 006ddb  mov dl, al
    X86_AT(c, 0x6ddbu);
    s8(c, 2, g8(c, 0));
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6dd0u, "ran off the end of a function");
}
void f_00006dd2(X86Cpu& c) {
    X86_TICK(c, 61);
    // 006dd2  or ebx, ecx
    X86_AT(c, 0x6dd2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006dd4  mov dword ptr es:[edi + 8], ebx
    X86_AT(c, 0x6dd4u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)), c.r[3]);
    // 006dd8  rol eax, 0x10
    X86_AT(c, 0x6dd8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 006ddb  mov dl, al
    X86_AT(c, 0x6ddbu);
    s8(c, 2, g8(c, 0));
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6dd2u, "ran off the end of a function");
}
void f_00006dd4(X86Cpu& c) {
    X86_TICK(c, 59);
    // 006dd4  mov dword ptr es:[edi + 8], ebx
    X86_AT(c, 0x6dd4u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)), c.r[3]);
    // 006dd8  rol eax, 0x10
    X86_AT(c, 0x6dd8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 006ddb  mov dl, al
    X86_AT(c, 0x6ddbu);
    s8(c, 2, g8(c, 0));
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6dd4u, "ran off the end of a function");
}
void f_00006dd8(X86Cpu& c) {
    X86_TICK(c, 57);
    // 006dd8  rol eax, 0x10
    X86_AT(c, 0x6dd8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 006ddb  mov dl, al
    X86_AT(c, 0x6ddbu);
    s8(c, 2, g8(c, 0));
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6dd8u, "ran off the end of a function");
}
void f_00006ddb(X86Cpu& c) {
    X86_TICK(c, 54);
    // 006ddb  mov dl, al
    X86_AT(c, 0x6ddbu);
    s8(c, 2, g8(c, 0));
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6ddbu, "ran off the end of a function");
}
void f_00006ddd(X86Cpu& c) {
    X86_TICK(c, 52);
    // 006ddd  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6dddu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6dddu, "ran off the end of a function");
}
void f_00006de5(X86Cpu& c) {
    X86_TICK(c, 48);
    // 006de5  not ecx
    X86_AT(c, 0x6de5u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6de5u, "ran off the end of a function");
}
void f_00006de7(X86Cpu& c) {
    X86_TICK(c, 46);
    // 006de7  mov ebx, dword ptr es:[edi + 4]
    X86_AT(c, 0x6de7u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)));
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6de7u, "ran off the end of a function");
}
void f_00006deb(X86Cpu& c) {
    X86_TICK(c, 42);
    // 006deb  and ebx, ecx
    X86_AT(c, 0x6debu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6debu, "ran off the end of a function");
}
void f_00006ded(X86Cpu& c) {
    X86_TICK(c, 40);
    // 006ded  not ecx
    X86_AT(c, 0x6dedu);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6dedu, "ran off the end of a function");
}
void f_00006def(X86Cpu& c) {
    X86_TICK(c, 38);
    // 006def  and ecx, esi
    X86_AT(c, 0x6defu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6defu, "ran off the end of a function");
}
void f_00006df1(X86Cpu& c) {
    X86_TICK(c, 36);
    // 006df1  or ebx, ecx
    X86_AT(c, 0x6df1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6df1u, "ran off the end of a function");
}
void f_00006df3(X86Cpu& c) {
    X86_TICK(c, 34);
    // 006df3  mov dword ptr es:[edi + 4], ebx
    X86_AT(c, 0x6df3u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6df3u, "ran off the end of a function");
}
void f_00006df7(X86Cpu& c) {
    X86_TICK(c, 32);
    // 006df7  mov dl, ah
    X86_AT(c, 0x6df7u);
    s8(c, 2, g8(c, 4));
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6df7u, "ran off the end of a function");
}
void f_00006df9(X86Cpu& c) {
    X86_TICK(c, 30);
    // 006df9  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x6df9u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6df9u, "ran off the end of a function");
}
void f_00006e01(X86Cpu& c) {
    X86_TICK(c, 26);
    // 006e01  not ecx
    X86_AT(c, 0x6e01u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e03  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x6e03u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 006e06  and ebx, ecx
    X86_AT(c, 0x6e06u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[1], 4); }
    // 006e08  not ecx
    X86_AT(c, 0x6e08u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006e0a  and ecx, esi
    X86_AT(c, 0x6e0au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6e01u, "ran off the end of a function");
}
}
