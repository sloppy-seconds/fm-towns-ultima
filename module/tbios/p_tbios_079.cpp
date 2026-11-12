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
void f_00006e03(X86Cpu& c) {
    X86_TICK(c, 24);
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
    x86_fault(c, 0x6e03u, "ran off the end of a function");
}
void f_00006e06(X86Cpu& c) {
    X86_TICK(c, 20);
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
    x86_fault(c, 0x6e06u, "ran off the end of a function");
}
void f_00006e08(X86Cpu& c) {
    X86_TICK(c, 18);
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
    x86_fault(c, 0x6e08u, "ran off the end of a function");
}
void f_00006e0a(X86Cpu& c) {
    X86_TICK(c, 16);
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
    x86_fault(c, 0x6e0au, "ran off the end of a function");
}
void f_00006e0c(X86Cpu& c) {
    X86_TICK(c, 14);
    // 006e0c  or ebx, ecx
    X86_AT(c, 0x6e0cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[1], 4); }
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6e0cu, "ran off the end of a function");
}
void f_00006e0e(X86Cpu& c) {
    X86_TICK(c, 12);
    // 006e0e  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x6e0eu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6e0eu, "ran off the end of a function");
}
void f_00006e11(X86Cpu& c) {
    X86_TICK(c, 10);
    // 006e11  ret 
    X86_AT(c, 0x6e11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6e11u, "ran off the end of a function");
}
void f_00006e14(X86Cpu& c) {
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
    x86_fault(c, 0x6e14u, "ran off the end of a function");
}
void f_00006e19(X86Cpu& c) {
    X86_TICK(c, 21);
    // 006e19  mov eax, dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x6e19u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)));
    // 006e20  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x6e20u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 006e22  ret 
    X86_AT(c, 0x6e22u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6e19u, "ran off the end of a function");
}
void f_00006e20(X86Cpu& c) {
    X86_TICK(c, 17);
    // 006e20  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x6e20u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 006e22  ret 
    X86_AT(c, 0x6e22u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6e20u, "ran off the end of a function");
}
void f_00006e22(X86Cpu& c) {
    X86_TICK(c, 10);
    // 006e22  ret 
    X86_AT(c, 0x6e22u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6e22u, "ran off the end of a function");
}
void f_000070b4(X86Cpu& c) {
    X86_TICK(c, 79);
    // 0070b4  mov esi, dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x70b4u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)));
    // 0070bb  sub edx, edx
    X86_AT(c, 0x70bbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0070bd  mov dl, al
    X86_AT(c, 0x70bdu);
    s8(c, 2, g8(c, 0));
    // 0070bf  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x70bfu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 0070c7  and ecx, esi
    X86_AT(c, 0x70c7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 0070c9  xor dword ptr es:[edi + 0xc], ecx
    X86_AT(c, 0x70c9u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[1], 4)); }
    // 0070cd  mov dl, ah
    X86_AT(c, 0x70cdu);
    s8(c, 2, g8(c, 4));
    // 0070cf  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x70cfu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 0070d7  and ecx, esi
    X86_AT(c, 0x70d7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 0070d9  xor dword ptr es:[edi + 8], ecx
    X86_AT(c, 0x70d9u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[1], 4)); }
    // 0070dd  rol eax, 0x10
    X86_AT(c, 0x70ddu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0070e0  mov dl, al
    X86_AT(c, 0x70e0u);
    s8(c, 2, g8(c, 0));
    // 0070e2  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x70e2u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 0070ea  and ecx, esi
    X86_AT(c, 0x70eau);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 0070ec  xor dword ptr es:[edi + 4], ecx
    X86_AT(c, 0x70ecu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[1], 4)); }
    // 0070f0  mov dl, ah
    X86_AT(c, 0x70f0u);
    s8(c, 2, g8(c, 4));
    // 0070f2  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x70f2u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 0070fa  and ecx, esi
    X86_AT(c, 0x70fau);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 0070fc  xor dword ptr es:[edi], ecx
    X86_AT(c, 0x70fcu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[1], 4)); }
    // 0070ff  ret 
    X86_AT(c, 0x70ffu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x70b4u, "ran off the end of a function");
}
void f_000070bb(X86Cpu& c) {
    X86_TICK(c, 75);
    // 0070bb  sub edx, edx
    X86_AT(c, 0x70bbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0070bd  mov dl, al
    X86_AT(c, 0x70bdu);
    s8(c, 2, g8(c, 0));
    // 0070bf  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x70bfu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 0070c7  and ecx, esi
    X86_AT(c, 0x70c7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 0070c9  xor dword ptr es:[edi + 0xc], ecx
    X86_AT(c, 0x70c9u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[1], 4)); }
    // 0070cd  mov dl, ah
    X86_AT(c, 0x70cdu);
    s8(c, 2, g8(c, 4));
    // 0070cf  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x70cfu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 0070d7  and ecx, esi
    X86_AT(c, 0x70d7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 0070d9  xor dword ptr es:[edi + 8], ecx
    X86_AT(c, 0x70d9u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[1], 4)); }
    // 0070dd  rol eax, 0x10
    X86_AT(c, 0x70ddu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0070e0  mov dl, al
    X86_AT(c, 0x70e0u);
    s8(c, 2, g8(c, 0));
    // 0070e2  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x70e2u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 0070ea  and ecx, esi
    X86_AT(c, 0x70eau);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 0070ec  xor dword ptr es:[edi + 4], ecx
    X86_AT(c, 0x70ecu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[1], 4)); }
    // 0070f0  mov dl, ah
    X86_AT(c, 0x70f0u);
    s8(c, 2, g8(c, 4));
    // 0070f2  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x70f2u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 0070fa  and ecx, esi
    X86_AT(c, 0x70fau);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 0070fc  xor dword ptr es:[edi], ecx
    X86_AT(c, 0x70fcu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[1], 4)); }
    // 0070ff  ret 
    X86_AT(c, 0x70ffu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x70bbu, "ran off the end of a function");
}
void f_000070bd(X86Cpu& c) {
    X86_TICK(c, 73);
    // 0070bd  mov dl, al
    X86_AT(c, 0x70bdu);
    s8(c, 2, g8(c, 0));
    // 0070bf  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x70bfu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 0070c7  and ecx, esi
    X86_AT(c, 0x70c7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 0070c9  xor dword ptr es:[edi + 0xc], ecx
    X86_AT(c, 0x70c9u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[1], 4)); }
    // 0070cd  mov dl, ah
    X86_AT(c, 0x70cdu);
    s8(c, 2, g8(c, 4));
    // 0070cf  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x70cfu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 0070d7  and ecx, esi
    X86_AT(c, 0x70d7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 0070d9  xor dword ptr es:[edi + 8], ecx
    X86_AT(c, 0x70d9u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[1], 4)); }
    // 0070dd  rol eax, 0x10
    X86_AT(c, 0x70ddu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0070e0  mov dl, al
    X86_AT(c, 0x70e0u);
    s8(c, 2, g8(c, 0));
    // 0070e2  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x70e2u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 0070ea  and ecx, esi
    X86_AT(c, 0x70eau);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 0070ec  xor dword ptr es:[edi + 4], ecx
    X86_AT(c, 0x70ecu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[1], 4)); }
    // 0070f0  mov dl, ah
    X86_AT(c, 0x70f0u);
    s8(c, 2, g8(c, 4));
    // 0070f2  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x70f2u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 0070fa  and ecx, esi
    X86_AT(c, 0x70fau);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 0070fc  xor dword ptr es:[edi], ecx
    X86_AT(c, 0x70fcu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[1], 4)); }
    // 0070ff  ret 
    X86_AT(c, 0x70ffu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x70bdu, "ran off the end of a function");
}
void f_000070bf(X86Cpu& c) {
    X86_TICK(c, 71);
    // 0070bf  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x70bfu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 0070c7  and ecx, esi
    X86_AT(c, 0x70c7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 0070c9  xor dword ptr es:[edi + 0xc], ecx
    X86_AT(c, 0x70c9u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[1], 4)); }
    // 0070cd  mov dl, ah
    X86_AT(c, 0x70cdu);
    s8(c, 2, g8(c, 4));
    // 0070cf  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x70cfu);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 0070d7  and ecx, esi
    X86_AT(c, 0x70d7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 0070d9  xor dword ptr es:[edi + 8], ecx
    X86_AT(c, 0x70d9u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[1], 4)); }
    // 0070dd  rol eax, 0x10
    X86_AT(c, 0x70ddu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0070e0  mov dl, al
    X86_AT(c, 0x70e0u);
    s8(c, 2, g8(c, 0));
    // 0070e2  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x70e2u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 0070ea  and ecx, esi
    X86_AT(c, 0x70eau);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 0070ec  xor dword ptr es:[edi + 4], ecx
    X86_AT(c, 0x70ecu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[1], 4)); }
    // 0070f0  mov dl, ah
    X86_AT(c, 0x70f0u);
    s8(c, 2, g8(c, 4));
    // 0070f2  mov ecx, dword ptr cs:[edx*4 + 0xbf34]
    X86_AT(c, 0x70f2u);
    c.r[1] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xBF34u)));
    // 0070fa  and ecx, esi
    X86_AT(c, 0x70fau);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[6], 4); }
    // 0070fc  xor dword ptr es:[edi], ecx
    X86_AT(c, 0x70fcu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[1], 4)); }
    // 0070ff  ret 
    X86_AT(c, 0x70ffu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x70bfu, "ran off the end of a function");
}
}
