#include "p_game_funcs.h"
namespace p_game {
void f_000dc994(X86Cpu& c) {
    X86_TICK(c, 173);
    // 0dc994  push ebp
    X86_AT(c, 0xdc994u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dc995  mov ebp, esp
    X86_AT(c, 0xdc995u);
    c.r[5] = c.r[4];
    // 0dc997  push edi
    X86_AT(c, 0xdc997u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc998  push ebx
    X86_AT(c, 0xdc998u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dc999  xor ecx, ecx
    X86_AT(c, 0xdc999u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
    // 0dc99b  mov ebx, ecx
    X86_AT(c, 0xdc99bu);
    c.r[3] = c.r[1];
    // 0dc99d  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdc99du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0dc9a0  mul dword ptr [ebp + 0x14]
    X86_AT(c, 0xdc9a0u);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 4);
    // 0dc9a3  push eax
    X86_AT(c, 0xdc9a3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dc9a4  mov edi, edx
    X86_AT(c, 0xdc9a4u);
    c.r[7] = c.r[2];
    // 0dc9a6  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdc9a6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0dc9a9  mul dword ptr [ebp + 0x18]
    X86_AT(c, 0xdc9a9u);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 4);
    // 0dc9ac  add edi, eax
    X86_AT(c, 0xdc9acu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dc9ae  adc ecx, edx
    X86_AT(c, 0xdc9aeu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 0dc9b0  adc ebx, 0
    X86_AT(c, 0xdc9b0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 0dc9b3  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xdc9b3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0dc9b6  mul dword ptr [ebp + 0x10]
    X86_AT(c, 0xdc9b6u);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 0dc9b9  add edi, eax
    X86_AT(c, 0xdc9b9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dc9bb  adc ecx, edx
    X86_AT(c, 0xdc9bbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 0dc9bd  adc ebx, 0
    X86_AT(c, 0xdc9bdu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 0dc9c0  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0xdc9c0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0dc9c3  mul dword ptr [ebp + 0x10]
    X86_AT(c, 0xdc9c3u);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 0dc9c6  add ecx, eax
    X86_AT(c, 0xdc9c6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dc9c8  adc ebx, edx
    X86_AT(c, 0xdc9c8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 0dc9ca  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xdc9cau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dc9cd  mov dword ptr [edx + 0xc], ebx
    X86_AT(c, 0xdc9cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCu)), c.r[3]);
    // 0dc9d0  mov dword ptr [edx + 8], ecx
    X86_AT(c, 0xdc9d0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), c.r[1]);
    // 0dc9d3  mov dword ptr [edx + 4], edi
    X86_AT(c, 0xdc9d3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[7]);
    // 0dc9d6  pop dword ptr [edx]
    X86_AT(c, 0xdc9d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[2])), v); }
    // 0dc9d8  pop ebx
    X86_AT(c, 0xdc9d8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dc9d9  pop edi
    X86_AT(c, 0xdc9d9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc9da  pop ebp
    X86_AT(c, 0xdc9dau);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0dc9db  ret 0x14
    X86_AT(c, 0xdc9dbu);
    c.eip = pop32(c); c.r[4] += 0x14u; return;
    x86_fault(c, 0xdc994u, "ran off the end of a function");
}
void f_000dc9e0(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0dc9e0  push ebp
    X86_AT(c, 0xdc9e0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dc9e1  mov ebp, esp
    X86_AT(c, 0xdc9e1u);
    c.r[5] = c.r[4];
    // 0dc9e3  push esi
    X86_AT(c, 0xdc9e3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dc9e4  push edi
    X86_AT(c, 0xdc9e4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc9e5  push ebx
    X86_AT(c, 0xdc9e5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dc9e6  sub ebx, ebx
    X86_AT(c, 0xdc9e6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0dc9e8  mov eax, ebx
    X86_AT(c, 0xdc9e8u);
    c.r[0] = c.r[3];
    // 0dc9ea  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xdc9eau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0dc9ed  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdc9edu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0dc9f0  mov ecx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xdc9f0u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0dc9f3  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xdc9f3u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0dc9f6  push ebp
    X86_AT(c, 0xdc9f6u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dc9f7  xor ebp, ebp
    X86_AT(c, 0xdc9f7u);
    { uint32_t v = c.r[5]; c.r[5] = x86_logic(c, v ^ c.r[5], 4); }
L_dc9f9:
    X86_TICK(c, 7);
    // 0dc9f9  cmp edx, ecx
    X86_AT(c, 0xdc9f9u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 0dc9fb  ja 0xdca03
    X86_AT(c, 0xdc9fbu);
    if (x86_cc(c, 7)) { goto L_dca03; }
    X86_TICK(c, 5);
    // 0dc9fd  jb 0xdca0e
    X86_AT(c, 0xdc9fdu);
    if (x86_cc(c, 2)) { goto L_dca0e; }
    X86_TICK(c, 7);
    // 0dc9ff  cmp esi, edi
    X86_AT(c, 0xdc9ffu);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 0dca01  jb 0xdca0e
    X86_AT(c, 0xdca01u);
    if (x86_cc(c, 2)) { goto L_dca0e; }
L_dca03:
    X86_TICK(c, 19);
    // 0dca03  sub esi, edi
    X86_AT(c, 0xdca03u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0dca05  sbb edx, ecx
    X86_AT(c, 0xdca05u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], c.fl & 1, 4); }
    // 0dca07  stc 
    X86_AT(c, 0xdca07u);
    c.fl |= X86_CF;
    // 0dca08  rcl eax, 1
    X86_AT(c, 0xdca08u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0dca0a  rcl ebx, 1
    X86_AT(c, 0xdca0au);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[3] = r; }
    // 0dca0c  jmp 0xdca12
    X86_AT(c, 0xdca0cu);
    goto L_dca12;
L_dca0e:
    X86_TICK(c, 6);
    // 0dca0e  shl eax, 1
    X86_AT(c, 0xdca0eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0dca10  rcl ebx, 1
    X86_AT(c, 0xdca10u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[3] = r; }
L_dca12:
    X86_TICK(c, 7);
    // 0dca12  test ebx, 0x80000000
    X86_AT(c, 0xdca12u);
    (void)x86_logic(c, c.r[3] & 0x80000000u, 4);
    // 0dca18  jne 0xdca24
    X86_AT(c, 0xdca18u);
    if (x86_cc(c, 5)) { goto L_dca24; }
    X86_TICK(c, 7);
    // 0dca1a  and edx, edx
    X86_AT(c, 0xdca1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0dca1c  jne 0xdca3e
    X86_AT(c, 0xdca1cu);
    if (x86_cc(c, 5)) { goto L_dca3e; }
    X86_TICK(c, 7);
    // 0dca1e  and esi, esi
    X86_AT(c, 0xdca1eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0dca20  jne 0xdca3e
    X86_AT(c, 0xdca20u);
    if (x86_cc(c, 5)) { goto L_dca3e; }
    X86_TICK(c, 7);
    // 0dca22  jmp 0xdca47
    X86_AT(c, 0xdca22u);
    goto L_dca47;
L_dca24:
    X86_TICK(c, 11);
    // 0dca24  shl esi, 1
    X86_AT(c, 0xdca24u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 0dca26  rcl edx, 1
    X86_AT(c, 0xdca26u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 0dca28  jb 0xdca34
    X86_AT(c, 0xdca28u);
    if (x86_cc(c, 2)) { goto L_dca34; }
    X86_TICK(c, 7);
    // 0dca2a  cmp edx, ecx
    X86_AT(c, 0xdca2au);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 0dca2c  ja 0xdca34
    X86_AT(c, 0xdca2cu);
    if (x86_cc(c, 7)) { goto L_dca34; }
    X86_TICK(c, 5);
    // 0dca2e  jb 0xdca63
    X86_AT(c, 0xdca2eu);
    if (x86_cc(c, 2)) { goto L_dca63; }
    X86_TICK(c, 7);
    // 0dca30  cmp esi, edi
    X86_AT(c, 0xdca30u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 0dca32  jb 0xdca63
    X86_AT(c, 0xdca32u);
    if (x86_cc(c, 2)) { goto L_dca63; }
L_dca34:
    X86_TICK(c, 11);
    // 0dca34  add eax, 1
    X86_AT(c, 0xdca34u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x1u, 0, 4); }
    // 0dca39  adc ebx, 0
    X86_AT(c, 0xdca39u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 0dca3c  jmp 0xdca63
    X86_AT(c, 0xdca3cu);
    goto L_dca63;
L_dca3e:
    X86_TICK(c, 13);
    // 0dca3e  inc ebp
    X86_AT(c, 0xdca3eu);
    { uint32_t v = c.r[5]; c.r[5] = x86_inc(c, v, 4); }
    // 0dca3f  shl esi, 1
    X86_AT(c, 0xdca3fu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 0dca41  rcl edx, 1
    X86_AT(c, 0xdca41u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 0dca43  jb 0xdca03
    X86_AT(c, 0xdca43u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xdca03u); goto L_dca03; }
    X86_TICK(c, 7);
    // 0dca45  jmp 0xdc9f9
    X86_AT(c, 0xdca45u);
    X86_POLL(c, 0xdc9f9u); goto L_dc9f9;
L_dca47:
    X86_TICK(c, 7);
    // 0dca47  and ebx, ebx
    X86_AT(c, 0xdca47u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0dca49  jne 0xdca54
    X86_AT(c, 0xdca49u);
    if (x86_cc(c, 5)) { goto L_dca54; }
    X86_TICK(c, 13);
    // 0dca4b  add ebp, 0x20
    X86_AT(c, 0xdca4bu);
    { uint32_t v = c.r[5]; c.r[5] = x86_add(c, v, 0x20u, 0, 4); }
    // 0dca4e  mov ebx, eax
    X86_AT(c, 0xdca4eu);
    c.r[3] = c.r[0];
    // 0dca50  xor eax, eax
    X86_AT(c, 0xdca50u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0dca52  jmp 0xdca47
    X86_AT(c, 0xdca52u);
    X86_POLL(c, 0xdca47u); goto L_dca47;
L_dca54:
    X86_TICK(c, 22);
    // 0dca54  bsr ecx, ebx
    X86_AT(c, 0xdca54u);
    c.r[1] = x86_bsr(c, c.r[3], c.r[1]);
    // 0dca57  sub ecx, 0x1f
    X86_AT(c, 0xdca57u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x1Fu, 0, 4); }
    // 0dca5a  neg ecx
    X86_AT(c, 0xdca5au);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 0dca5c  shld ebx, eax, cl
    X86_AT(c, 0xdca5cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[3] = r; }
    // 0dca5f  shl eax, cl
    X86_AT(c, 0xdca5fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 0dca61  add ebp, ecx
    X86_AT(c, 0xdca61u);
    { uint32_t v = c.r[5]; c.r[5] = x86_add(c, v, c.r[1], 0, 4); }
L_dca63:
    X86_TICK(c, 44);
    // 0dca63  pop ecx
    X86_AT(c, 0xdca63u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0dca64  xchg ebp, ecx
    X86_AT(c, 0xdca64u);
    { uint32_t t = c.r[5]; c.r[5] = c.r[1]; c.r[1] = t; }
    // 0dca66  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xdca66u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dca69  mov dword ptr [edi], eax
    X86_AT(c, 0xdca69u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0dca6b  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0xdca6bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 0dca6e  xchg ecx, eax
    X86_AT(c, 0xdca6eu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0dca6f  pop ebx
    X86_AT(c, 0xdca6fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dca70  pop edi
    X86_AT(c, 0xdca70u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dca71  pop esi
    X86_AT(c, 0xdca71u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dca72  pop ebp
    X86_AT(c, 0xdca72u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0dca73  ret 0x14
    X86_AT(c, 0xdca73u);
    c.eip = pop32(c); c.r[4] += 0x14u; return;
    x86_fault(c, 0xdc9e0u, "ran off the end of a function");
}
}
