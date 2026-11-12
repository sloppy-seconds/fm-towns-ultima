#include "p_game_funcs.h"
namespace p_game {
void f_000db778(X86Cpu& c) {
    X86_TICK(c, 61);
    // 0db778  push ebp
    X86_AT(c, 0xdb778u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0db779  mov ebp, esp
    X86_AT(c, 0xdb779u);
    c.r[5] = c.r[4];
    // 0db77b  sub esp, 0xc
    X86_AT(c, 0xdb77bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0db77e  push ebx
    X86_AT(c, 0xdb77eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0db77f  push esi
    X86_AT(c, 0xdb77fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0db780  push edi
    X86_AT(c, 0xdb780u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db781  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xdb781u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0db784  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdb784u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0db787  mov eax, 0xb224c
    X86_AT(c, 0xdb787u);
    c.r[0] = 0xB224Cu;
    // 0db78c  mov edx, edi
    X86_AT(c, 0xdb78cu);
    c.r[2] = c.r[7];
    // 0db78e  add edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xdb78eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 0db791  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xdb791u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0db794  shl edx, 8
    X86_AT(c, 0xdb794u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 0db797  mov eax, esi
    X86_AT(c, 0xdb797u);
    c.r[0] = c.r[6];
    // 0db799  add eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xdb799u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0, 4); }
    // 0db79c  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xdb79cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0db79f  shl eax, 4
    X86_AT(c, 0xdb79fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0db7a2  add eax, edx
    X86_AT(c, 0xdb7a2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0db7a4  mov ebx, dword ptr [eax + 0xb2334]
    X86_AT(c, 0xdb7a4u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB2334u)));
    // 0db7aa  cmp ebx, 2
    X86_AT(c, 0xdb7aau);
    (void)x86_sub(c, c.r[3], 0x2u, 0, 4);
    // 0db7ad  je 0xdb82c
    X86_AT(c, 0xdb7adu);
    if (x86_cc(c, 4)) { goto L_db82c; }
    X86_TICK(c, 7);
    // 0db7b3  cmp ebx, 3
    X86_AT(c, 0xdb7b3u);
    (void)x86_sub(c, c.r[3], 0x3u, 0, 4);
    // 0db7b6  je 0xdb82c
    X86_AT(c, 0xdb7b6u);
    if (x86_cc(c, 4)) { goto L_db82c; }
    X86_TICK(c, 7);
    // 0db7bc  cmp ebx, 8
    X86_AT(c, 0xdb7bcu);
    (void)x86_sub(c, c.r[3], 0x8u, 0, 4);
    // 0db7bf  je 0xdb82c
    X86_AT(c, 0xdb7bfu);
    if (x86_cc(c, 4)) { goto L_db82c; }
    X86_TICK(c, 7);
    // 0db7c5  cmp ebx, 0xf
    X86_AT(c, 0xdb7c5u);
    (void)x86_sub(c, c.r[3], 0xFu, 0, 4);
    // 0db7c8  je 0xdb82c
    X86_AT(c, 0xdb7c8u);
    if (x86_cc(c, 4)) { goto L_db82c; }
    X86_TICK(c, 7);
    // 0db7ca  cmp ebx, 0xe
    X86_AT(c, 0xdb7cau);
    (void)x86_sub(c, c.r[3], 0xEu, 0, 4);
    // 0db7cd  je 0xdb82c
    X86_AT(c, 0xdb7cdu);
    if (x86_cc(c, 4)) { goto L_db82c; }
    X86_TICK(c, 7);
    // 0db7cf  cmp ebx, 4
    X86_AT(c, 0xdb7cfu);
    (void)x86_sub(c, c.r[3], 0x4u, 0, 4);
    // 0db7d2  je 0xdb82c
    X86_AT(c, 0xdb7d2u);
    if (x86_cc(c, 4)) { goto L_db82c; }
    X86_TICK(c, 12);
    // 0db7d4  cmp dword ptr [eax + 0xb2338], 0xffffffff
    X86_AT(c, 0xdb7d4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB2338u))), 0xFFFFFFFFu, 0, 4);
    // 0db7db  jne 0xdb82c
    X86_AT(c, 0xdb7dbu);
    if (x86_cc(c, 5)) { goto L_db82c; }
    X86_TICK(c, 15);
    // 0db7dd  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xdb7ddu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db7e0  cmp edx, dword ptr [0xb2304]
    X86_AT(c, 0xdb7e0u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(0xB2304u))), 0, 4);
    // 0db7e6  je 0xdb82c
    X86_AT(c, 0xdb7e6u);
    if (x86_cc(c, 4)) { goto L_db82c; }
    X86_TICK(c, 15);
    // 0db7e8  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xdb7e8u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0db7eb  cmp edx, dword ptr [0xb2308]
    X86_AT(c, 0xdb7ebu);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(0xB2308u))), 0, 4);
    // 0db7f1  je 0xdb82c
    X86_AT(c, 0xdb7f1u);
    if (x86_cc(c, 4)) { goto L_db82c; }
    X86_TICK(c, 42);
    // 0db7f3  mov edx, edi
    X86_AT(c, 0xdb7f3u);
    c.r[2] = c.r[7];
    // 0db7f5  shl edx, 8
    X86_AT(c, 0xdb7f5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 0db7f8  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xdb7f8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0db7fb  mov eax, esi
    X86_AT(c, 0xdb7fbu);
    c.r[0] = c.r[6];
    // 0db7fd  shl eax, 4
    X86_AT(c, 0xdb7fdu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0db800  add eax, edx
    X86_AT(c, 0xdb800u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0db802  mov edx, dword ptr [eax + 0xb2338]
    X86_AT(c, 0xdb802u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB2338u)));
    // 0db808  mov ecx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdb808u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0db80b  mov dword ptr [ecx + 0xb2338], edx
    X86_AT(c, 0xdb80bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xB2338u)), c.r[2]);
    // 0db811  mov dword ptr [eax + 0xb2338], 0xffffffff
    X86_AT(c, 0xdb811u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB2338u)), 0xFFFFFFFFu);
    // 0db81b  add dword ptr [ecx + 0xb233c], 0x3e8
    X86_AT(c, 0xdb81bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[1] + 0xB233Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x3E8u, 0, 4)); }
    // 0db825  mov eax, 1
    X86_AT(c, 0xdb825u);
    c.r[0] = 0x1u;
    // 0db82a  jmp 0xdb82e
    X86_AT(c, 0xdb82au);
    goto L_db82e;
L_db82c:
    X86_TICK(c, 2);
    // 0db82c  sub eax, eax
    X86_AT(c, 0xdb82cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_db82e:
    X86_TICK(c, 28);
    // 0db82e  pop edi
    X86_AT(c, 0xdb82eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0db82f  pop esi
    X86_AT(c, 0xdb82fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0db830  pop ebx
    X86_AT(c, 0xdb830u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0db831  leave 
    X86_AT(c, 0xdb831u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0db832  ret 
    X86_AT(c, 0xdb832u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb778u, "ran off the end of a function");
}
void f_000db834(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0db834  push ebp
    X86_AT(c, 0xdb834u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0db835  mov ebp, esp
    X86_AT(c, 0xdb835u);
    c.r[5] = c.r[4];
    // 0db837  sub esp, 0x10
    X86_AT(c, 0xdb837u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0db83a  push ebx
    X86_AT(c, 0xdb83au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0db83b  push esi
    X86_AT(c, 0xdb83bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0db83c  push edi
    X86_AT(c, 0xdb83cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db83d  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xdb83du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0db844  mov edi, 1
    X86_AT(c, 0xdb844u);
    c.r[7] = 0x1u;
L_db849:
    X86_TICK(c, 7);
    // 0db849  cmp edi, 9
    X86_AT(c, 0xdb849u);
    (void)x86_sub(c, c.r[7], 0x9u, 0, 4);
    // 0db84c  jg 0xdb937
    X86_AT(c, 0xdb84cu);
    if (x86_cc(c, 15)) { goto L_db937; }
    X86_TICK(c, 2);
    // 0db852  mov esi, 1
    X86_AT(c, 0xdb852u);
    c.r[6] = 0x1u;
L_db857:
    X86_TICK(c, 7);
    // 0db857  cmp esi, 9
    X86_AT(c, 0xdb857u);
    (void)x86_sub(c, c.r[6], 0x9u, 0, 4);
    // 0db85a  jg 0xdb931
    X86_AT(c, 0xdb85au);
    if (x86_cc(c, 15)) { goto L_db931; }
    X86_TICK(c, 24);
    // 0db860  mov eax, edi
    X86_AT(c, 0xdb860u);
    c.r[0] = c.r[7];
    // 0db862  shl eax, 8
    X86_AT(c, 0xdb862u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0db865  mov edx, esi
    X86_AT(c, 0xdb865u);
    c.r[2] = c.r[6];
    // 0db867  shl edx, 4
    X86_AT(c, 0xdb867u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0db86a  add edx, eax
    X86_AT(c, 0xdb86au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0db86c  cmp dword ptr [edx + 0xb2338], 0xffffffff
    X86_AT(c, 0xdb86cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2338u))), 0xFFFFFFFFu, 0, 4);
    // 0db873  je 0xdb919
    X86_AT(c, 0xdb873u);
    if (x86_cc(c, 4)) { goto L_db919; }
    X86_TICK(c, 12);
    // 0db879  cmp dword ptr [edx + 0xb233c], 0x3e7
    X86_AT(c, 0xdb879u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB233Cu))), 0x3E7u, 0, 4);
    // 0db883  jge 0xdb919
    X86_AT(c, 0xdb883u);
    if (x86_cc(c, 13)) { goto L_db919; }
    X86_TICK(c, 21);
    // 0db889  mov ebx, dword ptr [0xb2304]
    X86_AT(c, 0xdb889u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0db88f  sub ebx, edi
    X86_AT(c, 0xdb88fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0db891  mov eax, dword ptr [0xb2308]
    X86_AT(c, 0xdb891u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0db896  sub eax, esi
    X86_AT(c, 0xdb896u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0db898  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdb898u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0db89b  and ebx, ebx
    X86_AT(c, 0xdb89bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0db89d  jl 0xdb8a3
    X86_AT(c, 0xdb89du);
    if (x86_cc(c, 12)) { goto L_db8a3; }
    X86_TICK(c, 9);
    // 0db89f  mov eax, ebx
    X86_AT(c, 0xdb89fu);
    c.r[0] = c.r[3];
    // 0db8a1  jmp 0xdb8a7
    X86_AT(c, 0xdb8a1u);
    goto L_db8a7;
L_db8a3:
    X86_TICK(c, 4);
    // 0db8a3  mov eax, ebx
    X86_AT(c, 0xdb8a3u);
    c.r[0] = c.r[3];
    // 0db8a5  neg eax
    X86_AT(c, 0xdb8a5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_db8a7:
    X86_TICK(c, 13);
    // 0db8a7  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xdb8a7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0db8aa  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb8aau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db8ad  and eax, eax
    X86_AT(c, 0xdb8adu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0db8af  jge 0xdb8b6
    X86_AT(c, 0xdb8afu);
    if (x86_cc(c, 13)) { goto L_db8b6; }
    X86_TICK(c, 6);
    // 0db8b1  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb8b1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db8b4  neg eax
    X86_AT(c, 0xdb8b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_db8b6:
    X86_TICK(c, 15);
    // 0db8b6  add eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xdb8b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
    // 0db8b9  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xdb8b9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0db8bc  dec eax
    X86_AT(c, 0xdb8bcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0db8bd  jne 0xdb8cd
    X86_AT(c, 0xdb8bdu);
    if (x86_cc(c, 5)) { goto L_db8cd; }
    X86_TICK(c, 14);
    // 0db8bf  push dword ptr [ebp - 4]
    X86_AT(c, 0xdb8bfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0db8c2  push ebx
    X86_AT(c, 0xdb8c2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0db8c3  call 0xdb4ac
    X86_AT(c, 0xdb8c3u);
    push32(c, 0xdb8c8u); x86_call_known(c, 0xdb4acu, f_000db4ac); X86_RET(c, 0xdb8c8u);
    X86_TICK(c, 9);
    // 0db8c8  add esp, 8
    X86_AT(c, 0xdb8c8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0db8cb  jmp 0xdb919
    X86_AT(c, 0xdb8cbu);
    goto L_db919;
L_db8cd:
    X86_TICK(c, 12);
    // 0db8cd  cmp dword ptr [ebp - 0xc], 7
    X86_AT(c, 0xdb8cdu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x7u, 0, 4);
    // 0db8d1  jge 0xdb919
    X86_AT(c, 0xdb8d1u);
    if (x86_cc(c, 13)) { goto L_db919; }
    X86_TICK(c, 9);
    // 0db8d3  push ebx
    X86_AT(c, 0xdb8d3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0db8d4  call 0xde3e8
    X86_AT(c, 0xdb8d4u);
    push32(c, 0xdb8d9u); x86_call_known(c, 0xde3e8u, f_000de3e8); X86_RET(c, 0xdb8d9u);
    X86_TICK(c, 15);
    // 0db8d9  xchg ebx, eax
    X86_AT(c, 0xdb8d9u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0db8da  push dword ptr [ebp - 4]
    X86_AT(c, 0xdb8dau);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0db8dd  call 0xde3e8
    X86_AT(c, 0xdb8ddu);
    push32(c, 0xdb8e2u); x86_call_known(c, 0xde3e8u, f_000de3e8); X86_RET(c, 0xdb8e2u);
    X86_TICK(c, 11);
    // 0db8e2  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdb8e2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0db8e5  add esp, 8
    X86_AT(c, 0xdb8e5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0db8e8  and ebx, ebx
    X86_AT(c, 0xdb8e8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0db8ea  je 0xdb8fc
    X86_AT(c, 0xdb8eau);
    if (x86_cc(c, 4)) { goto L_db8fc; }
    X86_TICK(c, 15);
    // 0db8ec  push 0
    X86_AT(c, 0xdb8ecu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0db8ee  push ebx
    X86_AT(c, 0xdb8eeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0db8ef  push esi
    X86_AT(c, 0xdb8efu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0db8f0  push edi
    X86_AT(c, 0xdb8f0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db8f1  call 0xdb778
    X86_AT(c, 0xdb8f1u);
    push32(c, 0xdb8f6u); x86_call_known(c, 0xdb778u, f_000db778); X86_RET(c, 0xdb8f6u);
    X86_TICK(c, 4);
    // 0db8f6  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xdb8f6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0db8f9  add esp, 0x10
    X86_AT(c, 0xdb8f9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_db8fc:
    X86_TICK(c, 12);
    // 0db8fc  cmp dword ptr [ebp - 8], 0
    X86_AT(c, 0xdb8fcu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x0u, 0, 4);
    // 0db900  jne 0xdb919
    X86_AT(c, 0xdb900u);
    if (x86_cc(c, 5)) { goto L_db919; }
    X86_TICK(c, 11);
    // 0db902  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdb902u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0db905  and eax, eax
    X86_AT(c, 0xdb905u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0db907  je 0xdb919
    X86_AT(c, 0xdb907u);
    if (x86_cc(c, 4)) { goto L_db919; }
    X86_TICK(c, 15);
    // 0db909  push eax
    X86_AT(c, 0xdb909u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0db90a  push 0
    X86_AT(c, 0xdb90au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0db90c  push esi
    X86_AT(c, 0xdb90cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0db90d  push edi
    X86_AT(c, 0xdb90du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db90e  call 0xdb778
    X86_AT(c, 0xdb90eu);
    push32(c, 0xdb913u); x86_call_known(c, 0xdb778u, f_000db778); X86_RET(c, 0xdb913u);
    X86_TICK(c, 4);
    // 0db913  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xdb913u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0db916  add esp, 0x10
    X86_AT(c, 0xdb916u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_db919:
    X86_TICK(c, 12);
    // 0db919  cmp dword ptr [0xb02fe], 0
    X86_AT(c, 0xdb919u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x0u, 0, 4);
    // 0db920  jle 0xdb931
    X86_AT(c, 0xdb920u);
    if (x86_cc(c, 14)) { goto L_db931; }
    X86_TICK(c, 12);
    // 0db922  cmp dword ptr [0xb0322], 0
    X86_AT(c, 0xdb922u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0322u))), 0x0u, 0, 4);
    // 0db929  jle 0xdb931
    X86_AT(c, 0xdb929u);
    if (x86_cc(c, 14)) { goto L_db931; }
    X86_TICK(c, 9);
    // 0db92b  inc esi
    X86_AT(c, 0xdb92bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0db92c  jmp 0xdb857
    X86_AT(c, 0xdb92cu);
    X86_POLL(c, 0xdb857u); goto L_db857;
L_db931:
    X86_TICK(c, 9);
    // 0db931  inc edi
    X86_AT(c, 0xdb931u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0db932  jmp 0xdb849
    X86_AT(c, 0xdb932u);
    X86_POLL(c, 0xdb849u); goto L_db849;
L_db937:
    X86_TICK(c, 2);
    // 0db937  mov edi, 1
    X86_AT(c, 0xdb937u);
    c.r[7] = 0x1u;
L_db93c:
    X86_TICK(c, 7);
    // 0db93c  cmp edi, 9
    X86_AT(c, 0xdb93cu);
    (void)x86_sub(c, c.r[7], 0x9u, 0, 4);
    // 0db93f  jg 0xdb974
    X86_AT(c, 0xdb93fu);
    if (x86_cc(c, 15)) { goto L_db974; }
    X86_TICK(c, 2);
    // 0db941  mov esi, 1
    X86_AT(c, 0xdb941u);
    c.r[6] = 0x1u;
L_db946:
    X86_TICK(c, 7);
    // 0db946  cmp esi, 9
    X86_AT(c, 0xdb946u);
    (void)x86_sub(c, c.r[6], 0x9u, 0, 4);
    // 0db949  jg 0xdb971
    X86_AT(c, 0xdb949u);
    if (x86_cc(c, 15)) { goto L_db971; }
    X86_TICK(c, 23);
    // 0db94b  mov eax, edi
    X86_AT(c, 0xdb94bu);
    c.r[0] = c.r[7];
    // 0db94d  shl eax, 8
    X86_AT(c, 0xdb94du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0db950  mov edx, esi
    X86_AT(c, 0xdb950u);
    c.r[2] = c.r[6];
    // 0db952  shl edx, 4
    X86_AT(c, 0xdb952u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0db955  add edx, eax
    X86_AT(c, 0xdb955u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0db957  mov eax, dword ptr [edx + 0xb233c]
    X86_AT(c, 0xdb957u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB233Cu)));
    // 0db95d  cmp eax, 0x3e7
    X86_AT(c, 0xdb95du);
    (void)x86_sub(c, c.r[0], 0x3E7u, 0, 4);
    // 0db962  jle 0xdb96e
    X86_AT(c, 0xdb962u);
    if (x86_cc(c, 14)) { goto L_db96e; }
    X86_TICK(c, 7);
    // 0db964  sub dword ptr [edx + 0xb233c], 0x3e8
    X86_AT(c, 0xdb964u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xB233Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x3E8u, 0, 4)); }
L_db96e:
    X86_TICK(c, 9);
    // 0db96e  inc esi
    X86_AT(c, 0xdb96eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0db96f  jmp 0xdb946
    X86_AT(c, 0xdb96fu);
    X86_POLL(c, 0xdb946u); goto L_db946;
L_db971:
    X86_TICK(c, 9);
    // 0db971  inc edi
    X86_AT(c, 0xdb971u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0db972  jmp 0xdb93c
    X86_AT(c, 0xdb972u);
    X86_POLL(c, 0xdb93cu); goto L_db93c;
L_db974:
    X86_TICK(c, 28);
    // 0db974  pop edi
    X86_AT(c, 0xdb974u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0db975  pop esi
    X86_AT(c, 0xdb975u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0db976  pop ebx
    X86_AT(c, 0xdb976u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0db977  leave 
    X86_AT(c, 0xdb977u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0db978  ret 
    X86_AT(c, 0xdb978u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb834u, "ran off the end of a function");
}
void f_000db97c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0db97c  push esi
    X86_AT(c, 0xdb97cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0db97d  push edi
    X86_AT(c, 0xdb97du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0db97e  mov edi, dword ptr [0xb033a]
    X86_AT(c, 0xdb97eu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xB033Au)));
    // 0db984  mov esi, dword ptr [0xb033e]
    X86_AT(c, 0xdb984u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xB033Eu)));
    // 0db98a  push 7
    X86_AT(c, 0xdb98au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0db98c  call 0xca0a0
    X86_AT(c, 0xdb98cu);
    push32(c, 0xdb991u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xdb991u);
    X86_TICK(c, 7);
    // 0db991  call 0xd35ec
    X86_AT(c, 0xdb991u);
    push32(c, 0xdb996u); x86_call_known(c, 0xd35ecu, f_000d35ec); X86_RET(c, 0xdb996u);
    X86_TICK(c, 7);
    // 0db996  call 0xd35c0
    X86_AT(c, 0xdb996u);
    push32(c, 0xdb99bu); x86_call_known(c, 0xd35c0u, f_000d35c0); X86_RET(c, 0xdb99bu);
    X86_TICK(c, 27);
    // 0db99b  mov eax, 3
    X86_AT(c, 0xdb99bu);
    c.r[0] = 0x3u;
    // 0db9a0  mov dword ptr [0xb52f8], eax
    X86_AT(c, 0xdb9a0u);
    wr32((c.sbase[3] + (uint32_t)(0xB52F8u)), c.r[0]);
    // 0db9a5  mov edx, 1
    X86_AT(c, 0xdb9a5u);
    c.r[2] = 0x1u;
    // 0db9aa  mov dword ptr [0xb2308], edx
    X86_AT(c, 0xdb9aau);
    wr32((c.sbase[3] + (uint32_t)(0xB2308u)), c.r[2]);
    // 0db9b0  mov dword ptr [0xb2304], edx
    X86_AT(c, 0xdb9b0u);
    wr32((c.sbase[3] + (uint32_t)(0xB2304u)), c.r[2]);
    // 0db9b6  mov dword ptr [0xb2328], edx
    X86_AT(c, 0xdb9b6u);
    wr32((c.sbase[3] + (uint32_t)(0xB2328u)), c.r[2]);
    // 0db9bc  mov dword ptr [0xb232c], eax
    X86_AT(c, 0xdb9bcu);
    wr32((c.sbase[3] + (uint32_t)(0xB232Cu)), c.r[0]);
    // 0db9c1  mov dword ptr [0xb2330], 0
    X86_AT(c, 0xdb9c1u);
    wr32((c.sbase[3] + (uint32_t)(0xB2330u)), 0x0u);
    // 0db9cb  mov word ptr [0xa1b74], 0xffff
    X86_AT(c, 0xdb9cbu);
    wr16((c.sbase[3] + (uint32_t)(0xA1B74u)), 0xFFFFu);
    // 0db9d4  push 2
    X86_AT(c, 0xdb9d4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0db9d6  call 0xc71e0
    X86_AT(c, 0xdb9d6u);
    push32(c, 0xdb9dbu); x86_call_known(c, 0xc71e0u, f_000c71e0); X86_RET(c, 0xdb9dbu);
    X86_TICK(c, 7);
    // 0db9db  call 0xdbf3c
    X86_AT(c, 0xdb9dbu);
    push32(c, 0xdb9e0u); x86_call_known(c, 0xdbf3cu, f_000dbf3c); X86_RET(c, 0xdb9e0u);
    X86_TICK(c, 2);
    // 0db9e0  add esp, 8
    X86_AT(c, 0xdb9e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_db9e3:
    X86_TICK(c, 7);
    // 0db9e3  call 0xdc294
    X86_AT(c, 0xdb9e3u);
    push32(c, 0xdb9e8u); x86_call_known(c, 0xdc294u, f_000dc294); X86_RET(c, 0xdb9e8u);
    X86_TICK(c, 7);
    // 0db9e8  and eax, eax
    X86_AT(c, 0xdb9e8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0db9ea  je 0xdb9e3
    X86_AT(c, 0xdb9eau);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xdb9e3u); goto L_db9e3; }
    X86_TICK(c, 12);
    // 0db9ec  cmp dword ptr [0xb02fe], 0
    X86_AT(c, 0xdb9ecu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x0u, 0, 4);
    // 0db9f3  jle 0xdb9fe
    X86_AT(c, 0xdb9f3u);
    if (x86_cc(c, 14)) { goto L_db9fe; }
    X86_TICK(c, 12);
    // 0db9f5  cmp dword ptr [0xb0322], 0
    X86_AT(c, 0xdb9f5u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0322u))), 0x0u, 0, 4);
    // 0db9fc  jg 0xdba05
    X86_AT(c, 0xdb9fcu);
    if (x86_cc(c, 15)) { goto L_dba05; }
L_db9fe:
    X86_TICK(c, 7);
    // 0db9fe  call 0xd2f10
    X86_AT(c, 0xdb9feu);
    push32(c, 0xdba03u); x86_call_known(c, 0xd2f10u, f_000d2f10); X86_RET(c, 0xdba03u);
    X86_TICK(c, 7);
    // 0dba03  jmp 0xdba5c
    X86_AT(c, 0xdba03u);
    goto L_dba5c;
L_dba05:
    X86_TICK(c, 9);
    // 0dba05  push 3
    X86_AT(c, 0xdba05u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0dba07  call 0xca3cc
    X86_AT(c, 0xdba07u);
    push32(c, 0xdba0cu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xdba0cu);
    X86_TICK(c, 9);
    // 0dba0c  push 8
    X86_AT(c, 0xdba0cu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0dba0e  call 0xca3cc
    X86_AT(c, 0xdba0eu);
    push32(c, 0xdba13u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xdba13u);
    X86_TICK(c, 11);
    // 0dba13  push 0xd
    X86_AT(c, 0xdba13u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0dba15  push 8
    X86_AT(c, 0xdba15u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0dba17  call 0xca2d4
    X86_AT(c, 0xdba17u);
    push32(c, 0xdba1cu); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xdba1cu);
    X86_TICK(c, 9);
    // 0dba1c  push 0xcc34
    X86_AT(c, 0xdba1cu);
    { uint32_t v = 0xCC34u; push32(c, v); }
    // 0dba21  call 0xcc7bc
    X86_AT(c, 0xdba21u);
    push32(c, 0xdba26u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdba26u);
    X86_TICK(c, 11);
    // 0dba26  mov dword ptr [0xb033a], edi
    X86_AT(c, 0xdba26u);
    wr32((c.sbase[3] + (uint32_t)(0xB033Au)), c.r[7]);
    // 0dba2c  mov dword ptr [0xb033e], esi
    X86_AT(c, 0xdba2cu);
    wr32((c.sbase[3] + (uint32_t)(0xB033Eu)), c.r[6]);
    // 0dba32  call 0xcbd48
    X86_AT(c, 0xdba32u);
    push32(c, 0xdba37u); x86_call_known(c, 0xcbd48u, f_000cbd48); X86_RET(c, 0xdba37u);
    X86_TICK(c, 9);
    // 0dba37  push 0xcc78
    X86_AT(c, 0xdba37u);
    { uint32_t v = 0xCC78u; push32(c, v); }
    // 0dba3c  call 0xcba5c
    X86_AT(c, 0xdba3cu);
    push32(c, 0xdba41u); x86_call_known(c, 0xcba5cu, f_000cba5c); X86_RET(c, 0xdba41u);
    X86_TICK(c, 9);
    // 0dba41  push 0
    X86_AT(c, 0xdba41u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0dba43  call 0xc71e0
    X86_AT(c, 0xdba43u);
    push32(c, 0xdba48u); x86_call_known(c, 0xc71e0u, f_000c71e0); X86_RET(c, 0xdba48u);
    X86_TICK(c, 9);
    // 0dba48  push 0x42b8c
    X86_AT(c, 0xdba48u);
    { uint32_t v = 0x42B8Cu; push32(c, v); }
    // 0dba4d  call 0xcbf54
    X86_AT(c, 0xdba4du);
    push32(c, 0xdba52u); x86_call_known(c, 0xcbf54u, f_000cbf54); X86_RET(c, 0xdba52u);
    X86_TICK(c, 9);
    // 0dba52  push 1
    X86_AT(c, 0xdba52u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0dba54  call 0xc5e44
    X86_AT(c, 0xdba54u);
    push32(c, 0xdba59u); x86_call_known(c, 0xc5e44u, f_000c5e44); X86_RET(c, 0xdba59u);
    X86_TICK(c, 2);
    // 0dba59  add esp, 0x24
    X86_AT(c, 0xdba59u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_dba5c:
    X86_TICK(c, 18);
    // 0dba5c  pop edi
    X86_AT(c, 0xdba5cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dba5d  pop esi
    X86_AT(c, 0xdba5du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dba5e  ret 
    X86_AT(c, 0xdba5eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb97cu, "ran off the end of a function");
}
void f_000dba60(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0dba60  push ebp
    X86_AT(c, 0xdba60u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dba61  mov ebp, esp
    X86_AT(c, 0xdba61u);
    c.r[5] = c.r[4];
    // 0dba63  sub esp, 8
    X86_AT(c, 0xdba63u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0dba66  push esi
    X86_AT(c, 0xdba66u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dba67  push edi
    X86_AT(c, 0xdba67u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dba68  mov edi, 0xffffffff
    X86_AT(c, 0xdba68u);
    c.r[7] = 0xFFFFFFFFu;
    // 0dba6d  cmp dword ptr [0xb52f8], 0
    X86_AT(c, 0xdba6du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x0u, 0, 4);
    // 0dba74  jne 0xdba80
    X86_AT(c, 0xdba74u);
    if (x86_cc(c, 5)) { goto L_dba80; }
    X86_TICK(c, 9);
    // 0dba76  mov eax, 3
    X86_AT(c, 0xdba76u);
    c.r[0] = 0x3u;
    // 0dba7b  jmp 0xdbd2a
    X86_AT(c, 0xdba7bu);
    goto L_dbd2a;
L_dba80:
    X86_TICK(c, 9);
    // 0dba80  push 7
    X86_AT(c, 0xdba80u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dba82  call 0xca0a0
    X86_AT(c, 0xdba82u);
    push32(c, 0xdba87u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xdba87u);
    X86_TICK(c, 15);
    // 0dba87  add esp, 4
    X86_AT(c, 0xdba87u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dba8a  movzx edx, byte ptr [ebp + 8]
    X86_AT(c, 0xdba8au);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dba8e  cmp edx, 4
    X86_AT(c, 0xdba8eu);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0dba91  ja 0xdbcd2
    X86_AT(c, 0xdba91u);
    if (x86_cc(c, 7)) { goto L_dbcd2; }
    X86_TICK(c, 7);
    // 0dba97  jmp dword ptr cs:[edx*4 + 0xdba9f]
    X86_AT(c, 0xdba97u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xDBA9Fu)));
      switch (t) {
      case 0xdbab3u: goto L_dbab3;
      case 0xdbb9cu: goto L_dbb9c;
      case 0xdbbf8u: goto L_dbbf8;
      case 0xdbc51u: goto L_dbc51;
      case 0xdbcc2u: goto L_dbcc2;
      default: x86_jump(c, t); return; } }
L_dbab3:
    X86_TICK(c, 13);
    // 0dbab3  mov edx, dword ptr [0xb232c]
    X86_AT(c, 0xdbab3u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB232Cu)));
    // 0dbab9  dec edx
    X86_AT(c, 0xdbab9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0dbaba  cmp edx, 3
    X86_AT(c, 0xdbabau);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0dbabd  ja 0xdbb5f
    X86_AT(c, 0xdbabdu);
    if (x86_cc(c, 7)) { goto L_dbb5f; }
    X86_TICK(c, 7);
    // 0dbac3  jmp dword ptr cs:[edx*4 + 0xdbacb]
    X86_AT(c, 0xdbac3u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xDBACBu)));
      switch (t) {
      case 0xdbadbu: goto L_dbadb;
      case 0xdbb00u: goto L_dbb00;
      case 0xdbb1au: goto L_dbb1a;
      case 0xdbb3cu: goto L_dbb3c;
      default: x86_jump(c, t); return; } }
L_dbadb:
    X86_TICK(c, 18);
    // 0dbadb  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xdbadbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0dbae0  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdbae0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0dbae3  cmp dword ptr [0xb2308], 0
    X86_AT(c, 0xdbae3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB2308u))), 0x0u, 0, 4);
    // 0dbaea  jne 0xdbaf8
    X86_AT(c, 0xdbaeau);
    if (x86_cc(c, 5)) { goto L_dbaf8; }
    X86_TICK(c, 9);
    // 0dbaec  mov dword ptr [ebp - 8], 0xf
    X86_AT(c, 0xdbaecu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFu);
    // 0dbaf3  jmp 0xdbb5f
    X86_AT(c, 0xdbaf3u);
    goto L_dbb5f;
L_dbaf8:
    X86_TICK(c, 13);
    // 0dbaf8  mov eax, dword ptr [0xb2308]
    X86_AT(c, 0xdbaf8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0dbafd  dec eax
    X86_AT(c, 0xdbafdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0dbafe  jmp 0xdbb5c
    X86_AT(c, 0xdbafeu);
    goto L_dbb5c;
L_dbb00:
    X86_TICK(c, 12);
    // 0dbb00  cmp dword ptr [0xb2304], 0xf
    X86_AT(c, 0xdbb00u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB2304u))), 0xFu, 0, 4);
    // 0dbb07  jne 0xdbb12
    X86_AT(c, 0xdbb07u);
    if (x86_cc(c, 5)) { goto L_dbb12; }
    X86_TICK(c, 9);
    // 0dbb09  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xdbb09u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0dbb10  jmp 0xdbb57
    X86_AT(c, 0xdbb10u);
    goto L_dbb57;
L_dbb12:
    X86_TICK(c, 13);
    // 0dbb12  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xdbb12u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0dbb17  inc eax
    X86_AT(c, 0xdbb17u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0dbb18  jmp 0xdbb54
    X86_AT(c, 0xdbb18u);
    goto L_dbb54;
L_dbb1a:
    X86_TICK(c, 18);
    // 0dbb1a  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xdbb1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0dbb1f  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdbb1fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0dbb22  cmp dword ptr [0xb2308], 0xf
    X86_AT(c, 0xdbb22u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB2308u))), 0xFu, 0, 4);
    // 0dbb29  jne 0xdbb34
    X86_AT(c, 0xdbb29u);
    if (x86_cc(c, 5)) { goto L_dbb34; }
    X86_TICK(c, 9);
    // 0dbb2b  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xdbb2bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0dbb32  jmp 0xdbb5f
    X86_AT(c, 0xdbb32u);
    goto L_dbb5f;
L_dbb34:
    X86_TICK(c, 13);
    // 0dbb34  mov eax, dword ptr [0xb2308]
    X86_AT(c, 0xdbb34u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0dbb39  inc eax
    X86_AT(c, 0xdbb39u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0dbb3a  jmp 0xdbb5c
    X86_AT(c, 0xdbb3au);
    goto L_dbb5c;
L_dbb3c:
    X86_TICK(c, 12);
    // 0dbb3c  cmp dword ptr [0xb2304], 0
    X86_AT(c, 0xdbb3cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB2304u))), 0x0u, 0, 4);
    // 0dbb43  jne 0xdbb4e
    X86_AT(c, 0xdbb43u);
    if (x86_cc(c, 5)) { goto L_dbb4e; }
    X86_TICK(c, 9);
    // 0dbb45  mov dword ptr [ebp - 4], 0xf
    X86_AT(c, 0xdbb45u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFu);
    // 0dbb4c  jmp 0xdbb57
    X86_AT(c, 0xdbb4cu);
    goto L_dbb57;
L_dbb4e:
    X86_TICK(c, 6);
    // 0dbb4e  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xdbb4eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0dbb53  dec eax
    X86_AT(c, 0xdbb53u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_dbb54:
    X86_TICK(c, 2);
    // 0dbb54  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdbb54u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_dbb57:
    X86_TICK(c, 4);
    // 0dbb57  mov eax, dword ptr [0xb2308]
    X86_AT(c, 0xdbb57u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
L_dbb5c:
    X86_TICK(c, 2);
    // 0dbb5c  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xdbb5cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
L_dbb5f:
    X86_TICK(c, 9);
    // 0dbb5f  push 0xcc88
    X86_AT(c, 0xdbb5fu);
    { uint32_t v = 0xCC88u; push32(c, v); }
    // 0dbb64  call 0xcc7bc
    X86_AT(c, 0xdbb64u);
    push32(c, 0xdbb69u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdbb69u);
    X86_TICK(c, 17);
    // 0dbb69  push dword ptr [ebp - 8]
    X86_AT(c, 0xdbb69u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0dbb6c  push dword ptr [ebp - 4]
    X86_AT(c, 0xdbb6cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0dbb6f  call 0xdc2d8
    X86_AT(c, 0xdbb6fu);
    push32(c, 0xdbb74u); x86_call_known(c, 0xdc2d8u, f_000dc2d8); X86_RET(c, 0xdbb74u);
    X86_TICK(c, 9);
    // 0dbb74  add esp, 0xc
    X86_AT(c, 0xdbb74u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0dbb77  and eax, eax
    X86_AT(c, 0xdbb77u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0dbb79  je 0xdbb85
    X86_AT(c, 0xdbb79u);
    if (x86_cc(c, 4)) { goto L_dbb85; }
    X86_TICK(c, 9);
    // 0dbb7b  mov eax, 0xffffffff
    X86_AT(c, 0xdbb7bu);
    c.r[0] = 0xFFFFFFFFu;
    // 0dbb80  jmp 0xdbd2a
    X86_AT(c, 0xdbb80u);
    goto L_dbd2a;
L_dbb85:
    X86_TICK(c, 21);
    // 0dbb85  sub edi, edi
    X86_AT(c, 0xdbb85u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0dbb87  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdbb87u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0dbb8a  mov dword ptr [0xb2304], eax
    X86_AT(c, 0xdbb8au);
    wr32((c.sbase[3] + (uint32_t)(0xB2304u)), c.r[0]);
    // 0dbb8f  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xdbb8fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0dbb92  mov dword ptr [0xb2308], eax
    X86_AT(c, 0xdbb92u);
    wr32((c.sbase[3] + (uint32_t)(0xB2308u)), c.r[0]);
    // 0dbb97  jmp 0xdbcd2
    X86_AT(c, 0xdbb97u);
    goto L_dbcd2;
L_dbb9c:
    X86_TICK(c, 13);
    // 0dbb9c  mov edx, dword ptr [0xb232c]
    X86_AT(c, 0xdbb9cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB232Cu)));
    // 0dbba2  dec edx
    X86_AT(c, 0xdbba2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0dbba3  cmp edx, 3
    X86_AT(c, 0xdbba3u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0dbba6  ja 0xdbbee
    X86_AT(c, 0xdbba6u);
    if (x86_cc(c, 7)) { goto L_dbbee; }
    X86_TICK(c, 7);
    // 0dbba8  jmp dword ptr cs:[edx*4 + 0xdbbb0]
    X86_AT(c, 0xdbba8u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xDBBB0u)));
      switch (t) {
      case 0xdbbc0u: goto L_dbbc0;
      case 0xdbbccu: goto L_dbbcc;
      case 0xdbbd8u: goto L_dbbd8;
      case 0xdbbe4u: goto L_dbbe4;
      default: x86_jump(c, t); return; } }
L_dbbc0:
    X86_TICK(c, 9);
    // 0dbbc0  mov dword ptr [0xb232c], 2
    X86_AT(c, 0xdbbc0u);
    wr32((c.sbase[3] + (uint32_t)(0xB232Cu)), 0x2u);
    // 0dbbca  jmp 0xdbbee
    X86_AT(c, 0xdbbcau);
    goto L_dbbee;
L_dbbcc:
    X86_TICK(c, 9);
    // 0dbbcc  mov dword ptr [0xb232c], 3
    X86_AT(c, 0xdbbccu);
    wr32((c.sbase[3] + (uint32_t)(0xB232Cu)), 0x3u);
    // 0dbbd6  jmp 0xdbbee
    X86_AT(c, 0xdbbd6u);
    goto L_dbbee;
L_dbbd8:
    X86_TICK(c, 9);
    // 0dbbd8  mov dword ptr [0xb232c], 4
    X86_AT(c, 0xdbbd8u);
    wr32((c.sbase[3] + (uint32_t)(0xB232Cu)), 0x4u);
    // 0dbbe2  jmp 0xdbbee
    X86_AT(c, 0xdbbe2u);
    goto L_dbbee;
L_dbbe4:
    X86_TICK(c, 2);
    // 0dbbe4  mov dword ptr [0xb232c], 1
    X86_AT(c, 0xdbbe4u);
    wr32((c.sbase[3] + (uint32_t)(0xB232Cu)), 0x1u);
L_dbbee:
    X86_TICK(c, 9);
    // 0dbbee  push 0xcc9c
    X86_AT(c, 0xdbbeeu);
    { uint32_t v = 0xCC9Cu; push32(c, v); }
    // 0dbbf3  jmp 0xdbca8
    X86_AT(c, 0xdbbf3u);
    goto L_dbca8;
L_dbbf8:
    X86_TICK(c, 13);
    // 0dbbf8  mov edx, dword ptr [0xb232c]
    X86_AT(c, 0xdbbf8u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB232Cu)));
    // 0dbbfe  dec edx
    X86_AT(c, 0xdbbfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0dbbff  cmp edx, 3
    X86_AT(c, 0xdbbffu);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0dbc02  ja 0xdbc4a
    X86_AT(c, 0xdbc02u);
    if (x86_cc(c, 7)) { goto L_dbc4a; }
    X86_TICK(c, 7);
    // 0dbc04  jmp dword ptr cs:[edx*4 + 0xdbc0c]
    X86_AT(c, 0xdbc04u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xDBC0Cu)));
      switch (t) {
      case 0xdbc1cu: goto L_dbc1c;
      case 0xdbc28u: goto L_dbc28;
      case 0xdbc34u: goto L_dbc34;
      case 0xdbc40u: goto L_dbc40;
      default: x86_jump(c, t); return; } }
L_dbc1c:
    X86_TICK(c, 9);
    // 0dbc1c  mov dword ptr [0xb232c], 3
    X86_AT(c, 0xdbc1cu);
    wr32((c.sbase[3] + (uint32_t)(0xB232Cu)), 0x3u);
    // 0dbc26  jmp 0xdbc4a
    X86_AT(c, 0xdbc26u);
    goto L_dbc4a;
L_dbc28:
    X86_TICK(c, 9);
    // 0dbc28  mov dword ptr [0xb232c], 4
    X86_AT(c, 0xdbc28u);
    wr32((c.sbase[3] + (uint32_t)(0xB232Cu)), 0x4u);
    // 0dbc32  jmp 0xdbc4a
    X86_AT(c, 0xdbc32u);
    goto L_dbc4a;
L_dbc34:
    X86_TICK(c, 9);
    // 0dbc34  mov dword ptr [0xb232c], 1
    X86_AT(c, 0xdbc34u);
    wr32((c.sbase[3] + (uint32_t)(0xB232Cu)), 0x1u);
    // 0dbc3e  jmp 0xdbc4a
    X86_AT(c, 0xdbc3eu);
    goto L_dbc4a;
L_dbc40:
    X86_TICK(c, 2);
    // 0dbc40  mov dword ptr [0xb232c], 2
    X86_AT(c, 0xdbc40u);
    wr32((c.sbase[3] + (uint32_t)(0xB232Cu)), 0x2u);
L_dbc4a:
    X86_TICK(c, 9);
    // 0dbc4a  push 0xccbc
    X86_AT(c, 0xdbc4au);
    { uint32_t v = 0xCCBCu; push32(c, v); }
    // 0dbc4f  jmp 0xdbca8
    X86_AT(c, 0xdbc4fu);
    goto L_dbca8;
L_dbc51:
    X86_TICK(c, 13);
    // 0dbc51  mov edx, dword ptr [0xb232c]
    X86_AT(c, 0xdbc51u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB232Cu)));
    // 0dbc57  dec edx
    X86_AT(c, 0xdbc57u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0dbc58  cmp edx, 3
    X86_AT(c, 0xdbc58u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0dbc5b  ja 0xdbca3
    X86_AT(c, 0xdbc5bu);
    if (x86_cc(c, 7)) { goto L_dbca3; }
    X86_TICK(c, 7);
    // 0dbc5d  jmp dword ptr cs:[edx*4 + 0xdbc65]
    X86_AT(c, 0xdbc5du);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xDBC65u)));
      switch (t) {
      case 0xdbc75u: goto L_dbc75;
      case 0xdbc81u: goto L_dbc81;
      case 0xdbc8du: goto L_dbc8d;
      case 0xdbc99u: goto L_dbc99;
      default: x86_jump(c, t); return; } }
L_dbc75:
    X86_TICK(c, 9);
    // 0dbc75  mov dword ptr [0xb232c], 4
    X86_AT(c, 0xdbc75u);
    wr32((c.sbase[3] + (uint32_t)(0xB232Cu)), 0x4u);
    // 0dbc7f  jmp 0xdbca3
    X86_AT(c, 0xdbc7fu);
    goto L_dbca3;
L_dbc81:
    X86_TICK(c, 9);
    // 0dbc81  mov dword ptr [0xb232c], 1
    X86_AT(c, 0xdbc81u);
    wr32((c.sbase[3] + (uint32_t)(0xB232Cu)), 0x1u);
    // 0dbc8b  jmp 0xdbca3
    X86_AT(c, 0xdbc8bu);
    goto L_dbca3;
L_dbc8d:
    X86_TICK(c, 9);
    // 0dbc8d  mov dword ptr [0xb232c], 2
    X86_AT(c, 0xdbc8du);
    wr32((c.sbase[3] + (uint32_t)(0xB232Cu)), 0x2u);
    // 0dbc97  jmp 0xdbca3
    X86_AT(c, 0xdbc97u);
    goto L_dbca3;
L_dbc99:
    X86_TICK(c, 2);
    // 0dbc99  mov dword ptr [0xb232c], 3
    X86_AT(c, 0xdbc99u);
    wr32((c.sbase[3] + (uint32_t)(0xB232Cu)), 0x3u);
L_dbca3:
    X86_TICK(c, 2);
    // 0dbca3  push 0xccd8
    X86_AT(c, 0xdbca3u);
    { uint32_t v = 0xCCD8u; push32(c, v); }
L_dbca8:
    X86_TICK(c, 7);
    // 0dbca8  call 0xcc7bc
    X86_AT(c, 0xdbca8u);
    push32(c, 0xdbcadu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdbcadu);
    X86_TICK(c, 21);
    // 0dbcad  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xdbcadu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0dbcb2  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdbcb2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0dbcb5  mov eax, dword ptr [0xb2308]
    X86_AT(c, 0xdbcb5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0dbcba  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xdbcbau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0dbcbd  add esp, 4
    X86_AT(c, 0xdbcbdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dbcc0  jmp 0xdbcd2
    X86_AT(c, 0xdbcc0u);
    goto L_dbcd2;
L_dbcc2:
    X86_TICK(c, 12);
    // 0dbcc2  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xdbcc2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0dbcc7  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdbcc7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0dbcca  mov eax, dword ptr [0xb2308]
    X86_AT(c, 0xdbccau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0dbccf  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xdbccfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
L_dbcd2:
    X86_TICK(c, 22);
    // 0dbcd2  lea eax, [ebp - 8]
    X86_AT(c, 0xdbcd2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0dbcd5  push eax
    X86_AT(c, 0xdbcd5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dbcd6  lea eax, [ebp - 4]
    X86_AT(c, 0xdbcd6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0dbcd9  push eax
    X86_AT(c, 0xdbcd9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dbcda  push dword ptr [0xb232c]
    X86_AT(c, 0xdbcdau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB232Cu))); push32(c, v); }
    // 0dbce0  push 0xb34a4
    X86_AT(c, 0xdbce0u);
    { uint32_t v = 0xB34A4u; push32(c, v); }
    // 0dbce5  call 0xdadcc
    X86_AT(c, 0xdbce5u);
    push32(c, 0xdbceau); x86_call_known(c, 0xdadccu, f_000dadcc); X86_RET(c, 0xdbceau);
    X86_TICK(c, 17);
    // 0dbcea  xchg esi, eax
    X86_AT(c, 0xdbceau);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0dbceb  add esp, 0x10
    X86_AT(c, 0xdbcebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0dbcee  cmp dword ptr [0xb2300], 1
    X86_AT(c, 0xdbceeu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB2300u))), 0x1u, 0, 4);
    // 0dbcf5  jne 0xdbd06
    X86_AT(c, 0xdbcf5u);
    if (x86_cc(c, 5)) { goto L_dbd06; }
    X86_TICK(c, 7);
    // 0dbcf7  call 0xcbd48
    X86_AT(c, 0xdbcf7u);
    push32(c, 0xdbcfcu); x86_call_known(c, 0xcbd48u, f_000cbd48); X86_RET(c, 0xdbcfcu);
    X86_TICK(c, 2);
    // 0dbcfc  mov dword ptr [0xb2300], 2
    X86_AT(c, 0xdbcfcu);
    wr32((c.sbase[3] + (uint32_t)(0xB2300u)), 0x2u);
L_dbd06:
    X86_TICK(c, 12);
    // 0dbd06  cmp dword ptr [0xb2300], 0
    X86_AT(c, 0xdbd06u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB2300u))), 0x0u, 0, 4);
    // 0dbd0d  jne 0xdbd28
    X86_AT(c, 0xdbd0du);
    if (x86_cc(c, 5)) { goto L_dbd28; }
    X86_TICK(c, 19);
    // 0dbd0f  push dword ptr [ebp - 8]
    X86_AT(c, 0xdbd0fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0dbd12  push dword ptr [ebp - 4]
    X86_AT(c, 0xdbd12u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0dbd15  push esi
    X86_AT(c, 0xdbd15u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dbd16  call 0xdaf74
    X86_AT(c, 0xdbd16u);
    push32(c, 0xdbd1bu); x86_call_known(c, 0xdaf74u, f_000daf74); X86_RET(c, 0xdbd1bu);
    X86_TICK(c, 4);
    // 0dbd1b  mov dword ptr [0xb2300], 1
    X86_AT(c, 0xdbd1bu);
    wr32((c.sbase[3] + (uint32_t)(0xB2300u)), 0x1u);
    // 0dbd25  add esp, 0xc
    X86_AT(c, 0xdbd25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_dbd28:
    X86_TICK(c, 2);
    // 0dbd28  mov eax, edi
    X86_AT(c, 0xdbd28u);
    c.r[0] = c.r[7];
L_dbd2a:
    X86_TICK(c, 24);
    // 0dbd2a  pop edi
    X86_AT(c, 0xdbd2au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dbd2b  pop esi
    X86_AT(c, 0xdbd2bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dbd2c  leave 
    X86_AT(c, 0xdbd2cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dbd2d  ret 
    X86_AT(c, 0xdbd2du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdba60u, "ran off the end of a function");
}
void f_000dbd2a(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0dbd2a  pop edi
    X86_AT(c, 0xdbd2au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dbd2b  pop esi
    X86_AT(c, 0xdbd2bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dbd2c  leave 
    X86_AT(c, 0xdbd2cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dbd2d  ret 
    X86_AT(c, 0xdbd2du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdbd2au, "ran off the end of a function");
}
void f_000dbd30(X86Cpu& c) {
    X86_TICK(c, 6);
    // 0dbd30  push esi
    X86_AT(c, 0xdbd30u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dbd31  push edi
    X86_AT(c, 0xdbd31u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dbd32  sub esi, esi
    X86_AT(c, 0xdbd32u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_dbd34:
    X86_TICK(c, 7);
    // 0dbd34  cmp esi, 0x10
    X86_AT(c, 0xdbd34u);
    (void)x86_sub(c, c.r[6], 0x10u, 0, 4);
    // 0dbd37  jge 0xdbd60
    X86_AT(c, 0xdbd37u);
    if (x86_cc(c, 13)) { goto L_dbd60; }
    X86_TICK(c, 2);
    // 0dbd39  sub edi, edi
    X86_AT(c, 0xdbd39u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_dbd3b:
    X86_TICK(c, 7);
    // 0dbd3b  cmp edi, 0x10
    X86_AT(c, 0xdbd3bu);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0dbd3e  jge 0xdbd5d
    X86_AT(c, 0xdbd3eu);
    if (x86_cc(c, 13)) { goto L_dbd5d; }
    X86_TICK(c, 29);
    // 0dbd40  mov eax, esi
    X86_AT(c, 0xdbd40u);
    c.r[0] = c.r[6];
    // 0dbd42  shl eax, 4
    X86_AT(c, 0xdbd42u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0dbd45  mov edx, edi
    X86_AT(c, 0xdbd45u);
    c.r[2] = c.r[7];
    // 0dbd47  shl edx, 8
    X86_AT(c, 0xdbd47u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 0dbd4a  add edx, eax
    X86_AT(c, 0xdbd4au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dbd4c  add eax, edi
    X86_AT(c, 0xdbd4cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0dbd4e  mov dl, byte ptr [edx + 0xb2334]
    X86_AT(c, 0xdbd4eu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u))));
    // 0dbd54  mov byte ptr [eax + 0xb333c], dl
    X86_AT(c, 0xdbd54u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB333Cu)), g8(c, 2));
    // 0dbd5a  inc edi
    X86_AT(c, 0xdbd5au);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dbd5b  jmp 0xdbd3b
    X86_AT(c, 0xdbd5bu);
    X86_POLL(c, 0xdbd3bu); goto L_dbd3b;
L_dbd5d:
    X86_TICK(c, 9);
    // 0dbd5d  inc esi
    X86_AT(c, 0xdbd5du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0dbd5e  jmp 0xdbd34
    X86_AT(c, 0xdbd5eu);
    X86_POLL(c, 0xdbd34u); goto L_dbd34;
L_dbd60:
    X86_TICK(c, 7);
    // 0dbd60  call 0xdb454
    X86_AT(c, 0xdbd60u);
    push32(c, 0xdbd65u); x86_call_known(c, 0xdb454u, f_000db454); X86_RET(c, 0xdbd65u);
    X86_TICK(c, 18);
    // 0dbd65  pop edi
    X86_AT(c, 0xdbd65u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dbd66  pop esi
    X86_AT(c, 0xdbd66u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dbd67  ret 
    X86_AT(c, 0xdbd67u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdbd30u, "ran off the end of a function");
}
void f_000dbd68(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0dbd68  push 8
    X86_AT(c, 0xdbd68u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0dbd6a  call 0xca0a0
    X86_AT(c, 0xdbd6au);
    push32(c, 0xdbd6fu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xdbd6fu);
    X86_TICK(c, 13);
    // 0dbd6f  push 0
    X86_AT(c, 0xdbd6fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0dbd71  push 0
    X86_AT(c, 0xdbd71u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0dbd73  push 8
    X86_AT(c, 0xdbd73u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0dbd75  call 0xca9c8
    X86_AT(c, 0xdbd75u);
    push32(c, 0xdbd7au); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xdbd7au);
    X86_TICK(c, 11);
    // 0dbd7a  push 0xccf4
    X86_AT(c, 0xdbd7au);
    { uint32_t v = 0xCCF4u; push32(c, v); }
    // 0dbd7f  push 8
    X86_AT(c, 0xdbd7fu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0dbd81  call 0xca414
    X86_AT(c, 0xdbd81u);
    push32(c, 0xdbd86u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xdbd86u);
    X86_TICK(c, 16);
    // 0dbd86  push 2
    X86_AT(c, 0xdbd86u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0dbd88  push dword ptr [0xb2328]
    X86_AT(c, 0xdbd88u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB2328u))); push32(c, v); }
    // 0dbd8e  push 8
    X86_AT(c, 0xdbd8eu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0dbd90  call 0xc8cb8
    X86_AT(c, 0xdbd90u);
    push32(c, 0xdbd95u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xdbd95u);
    X86_TICK(c, 12);
    // 0dbd95  add esp, 0x24
    X86_AT(c, 0xdbd95u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0dbd98  ret 
    X86_AT(c, 0xdbd98u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdbd68u, "ran off the end of a function");
}
void f_000dbd9c(X86Cpu& c) {
    X86_TICK(c, 39);
    // 0dbd9c  push ebp
    X86_AT(c, 0xdbd9cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dbd9d  mov ebp, esp
    X86_AT(c, 0xdbd9du);
    c.r[5] = c.r[4];
    // 0dbd9f  sub esp, 8
    X86_AT(c, 0xdbd9fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0dbda2  mov eax, dword ptr [0xb033a]
    X86_AT(c, 0xdbda2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB033Au)));
    // 0dbda7  lea eax, [eax + eax*4]
    X86_AT(c, 0xdbda7u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0dbdaa  mov edx, dword ptr [0xb033e]
    X86_AT(c, 0xdbdaau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB033Eu)));
    // 0dbdb0  lea edx, [edx + edx*2]
    X86_AT(c, 0xdbdb0u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0dbdb3  add edx, eax
    X86_AT(c, 0xdbdb3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dbdb5  mov eax, dword ptr [0xb2328]
    X86_AT(c, 0xdbdb5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2328u)));
    // 0dbdba  lea ecx, [eax + eax*8]
    X86_AT(c, 0xdbdbau);
    c.r[1] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0dbdbd  lea eax, [ecx + eax*8]
    X86_AT(c, 0xdbdbdu);
    c.r[0] = (uint32_t)(c.r[1] + c.r[0] * 8);
    // 0dbdc0  add eax, edx
    X86_AT(c, 0xdbdc0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0dbdc2  push eax
    X86_AT(c, 0xdbdc2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dbdc3  call 0xe825c
    X86_AT(c, 0xdbdc3u);
    push32(c, 0xdbdc8u); x86_call_known(c, 0xe825cu, f_000e825c); X86_RET(c, 0xdbdc8u);
    X86_TICK(c, 7);
    // 0dbdc8  call 0xe831c
    X86_AT(c, 0xdbdc8u);
    push32(c, 0xdbdcdu); x86_call_known(c, 0xe831cu, f_000e831c); X86_RET(c, 0xdbdcdu);
    X86_TICK(c, 16);
    // 0dbdcd  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xdbdcdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0dbdd0  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xdbdd0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0dbdd3  push dword ptr [0xb0336]
    X86_AT(c, 0xdbdd3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB0336u))); push32(c, v); }
    // 0dbdd9  call 0xe825c
    X86_AT(c, 0xdbdd9u);
    push32(c, 0xdbddeu); x86_call_known(c, 0xe825cu, f_000e825c); X86_RET(c, 0xdbddeu);
    X86_TICK(c, 17);
    // 0dbdde  push dword ptr [ebp - 4]
    X86_AT(c, 0xdbddeu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0dbde1  push dword ptr [ebp - 8]
    X86_AT(c, 0xdbde1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0dbde4  call 0xe82e0
    X86_AT(c, 0xdbde4u);
    push32(c, 0xdbde9u); x86_call_known(c, 0xe82e0u, f_000e82e0); X86_RET(c, 0xdbde9u);
    X86_TICK(c, 7);
    // 0dbde9  call 0xe7fc4
    X86_AT(c, 0xdbde9u);
    push32(c, 0xdbdeeu); x86_call_known(c, 0xe7fc4u, f_000e7fc4); X86_RET(c, 0xdbdeeu);
    X86_TICK(c, 7);
    // 0dbdee  call 0xe80dc
    X86_AT(c, 0xdbdeeu);
    push32(c, 0xdbdf3u); x86_call_known(c, 0xe80dcu, f_000e80dc); X86_RET(c, 0xdbdf3u);
    X86_TICK(c, 9);
    // 0dbdf3  push eax
    X86_AT(c, 0xdbdf3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dbdf4  call 0xe78dc
    X86_AT(c, 0xdbdf4u);
    push32(c, 0xdbdf9u); x86_call_known(c, 0xe78dcu, f_000e78dc); X86_RET(c, 0xdbdf9u);
    X86_TICK(c, 16);
    // 0dbdf9  leave 
    X86_AT(c, 0xdbdf9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dbdfa  ret 
    X86_AT(c, 0xdbdfau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdbd9cu, "ran off the end of a function");
}
void f_000dbdfc(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0dbdfc  push ebp
    X86_AT(c, 0xdbdfcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dbdfd  mov ebp, esp
    X86_AT(c, 0xdbdfdu);
    c.r[5] = c.r[4];
    // 0dbdff  sub esp, 0xc
    X86_AT(c, 0xdbdffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0dbe02  push ebx
    X86_AT(c, 0xdbe02u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dbe03  push esi
    X86_AT(c, 0xdbe03u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dbe04  push edi
    X86_AT(c, 0xdbe04u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dbe05  sub ebx, ebx
    X86_AT(c, 0xdbe05u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_dbe07:
    X86_TICK(c, 11);
    // 0dbe07  push 0xf2
    X86_AT(c, 0xdbe07u);
    { uint32_t v = 0xF2u; push32(c, v); }
    // 0dbe0c  push 0
    X86_AT(c, 0xdbe0cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0dbe0e  call 0xc5df0
    X86_AT(c, 0xdbe0eu);
    push32(c, 0xdbe13u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdbe13u);
    X86_TICK(c, 57);
    // 0dbe13  cdq 
    X86_AT(c, 0xdbe13u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0dbe14  mov ecx, 9
    X86_AT(c, 0xdbe14u);
    c.r[1] = 0x9u;
    // 0dbe19  idiv ecx
    X86_AT(c, 0xdbe19u);
    x86_idiv(c, c.r[1], 4, 0xdbe19u);
    // 0dbe1b  lea edi, [edx + 1]
    X86_AT(c, 0xdbe1bu);
    c.r[7] = (uint32_t)(c.r[2] + 0x1u);
    // 0dbe1e  push 0xf2
    X86_AT(c, 0xdbe1eu);
    { uint32_t v = 0xF2u; push32(c, v); }
    // 0dbe23  push 0
    X86_AT(c, 0xdbe23u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0dbe25  call 0xc5df0
    X86_AT(c, 0xdbe25u);
    push32(c, 0xdbe2au); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdbe2au);
    X86_TICK(c, 72);
    // 0dbe2a  cdq 
    X86_AT(c, 0xdbe2au);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0dbe2b  mov ecx, 9
    X86_AT(c, 0xdbe2bu);
    c.r[1] = 0x9u;
    // 0dbe30  idiv ecx
    X86_AT(c, 0xdbe30u);
    x86_idiv(c, c.r[1], 4, 0xdbe30u);
    // 0dbe32  lea esi, [edx + 1]
    X86_AT(c, 0xdbe32u);
    c.r[6] = (uint32_t)(c.r[2] + 0x1u);
    // 0dbe35  mov eax, 0xb224c
    X86_AT(c, 0xdbe35u);
    c.r[0] = 0xB224Cu;
    // 0dbe3a  mov edx, edi
    X86_AT(c, 0xdbe3au);
    c.r[2] = c.r[7];
    // 0dbe3c  shl edx, 8
    X86_AT(c, 0xdbe3cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 0dbe3f  mov eax, esi
    X86_AT(c, 0xdbe3fu);
    c.r[0] = c.r[6];
    // 0dbe41  shl eax, 4
    X86_AT(c, 0xdbe41u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0dbe44  add eax, edx
    X86_AT(c, 0xdbe44u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0dbe46  cmp dword ptr [eax + 0xb2338], 0xffffffff
    X86_AT(c, 0xdbe46u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB2338u))), 0xFFFFFFFFu, 0, 4);
    // 0dbe4d  jne 0xdbe80
    X86_AT(c, 0xdbe4du);
    if (x86_cc(c, 5)) { goto L_dbe80; }
    X86_TICK(c, 11);
    // 0dbe4f  mov edx, dword ptr [eax + 0xb2334]
    X86_AT(c, 0xdbe4fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB2334u)));
    // 0dbe55  cmp edx, 2
    X86_AT(c, 0xdbe55u);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0dbe58  je 0xdbe80
    X86_AT(c, 0xdbe58u);
    if (x86_cc(c, 4)) { goto L_dbe80; }
    X86_TICK(c, 7);
    // 0dbe5a  cmp edx, 3
    X86_AT(c, 0xdbe5au);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0dbe5d  je 0xdbe80
    X86_AT(c, 0xdbe5du);
    if (x86_cc(c, 4)) { goto L_dbe80; }
    X86_TICK(c, 7);
    // 0dbe5f  cmp edx, 0xf
    X86_AT(c, 0xdbe5fu);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0dbe62  je 0xdbe80
    X86_AT(c, 0xdbe62u);
    if (x86_cc(c, 4)) { goto L_dbe80; }
    X86_TICK(c, 7);
    // 0dbe64  cmp edx, 0xe
    X86_AT(c, 0xdbe64u);
    (void)x86_sub(c, c.r[2], 0xEu, 0, 4);
    // 0dbe67  je 0xdbe80
    X86_AT(c, 0xdbe67u);
    if (x86_cc(c, 4)) { goto L_dbe80; }
    X86_TICK(c, 7);
    // 0dbe69  cmp edx, 8
    X86_AT(c, 0xdbe69u);
    (void)x86_sub(c, c.r[2], 0x8u, 0, 4);
    // 0dbe6c  je 0xdbe80
    X86_AT(c, 0xdbe6cu);
    if (x86_cc(c, 4)) { goto L_dbe80; }
    X86_TICK(c, 7);
    // 0dbe6e  cmp edx, 4
    X86_AT(c, 0xdbe6eu);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0dbe71  je 0xdbe80
    X86_AT(c, 0xdbe71u);
    if (x86_cc(c, 4)) { goto L_dbe80; }
    X86_TICK(c, 12);
    // 0dbe73  cmp dword ptr [eax + 0xb233c], 4
    X86_AT(c, 0xdbe73u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB233Cu))), 0x4u, 0, 4);
    // 0dbe7a  je 0xdbe80
    X86_AT(c, 0xdbe7au);
    if (x86_cc(c, 4)) { goto L_dbe80; }
    X86_TICK(c, 9);
    // 0dbe7c  mov al, 1
    X86_AT(c, 0xdbe7cu);
    s8(c, 0, 0x1u);
    // 0dbe7e  jmp 0xdbe82
    X86_AT(c, 0xdbe7eu);
    goto L_dbe82;
L_dbe80:
    X86_TICK(c, 2);
    // 0dbe80  sub eax, eax
    X86_AT(c, 0xdbe80u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_dbe82:
    X86_TICK(c, 14);
    // 0dbe82  movzx eax, al
    X86_AT(c, 0xdbe82u);
    c.r[0] = g8(c, 0);
    // 0dbe85  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xdbe85u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0dbe88  add esp, 0x10
    X86_AT(c, 0xdbe88u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0dbe8b  and eax, eax
    X86_AT(c, 0xdbe8bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0dbe8d  jne 0xdbe9c
    X86_AT(c, 0xdbe8du);
    if (x86_cc(c, 5)) { goto L_dbe9c; }
    X86_TICK(c, 9);
    // 0dbe8f  inc ebx
    X86_AT(c, 0xdbe8fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0dbe90  cmp ebx, 0x1f4
    X86_AT(c, 0xdbe90u);
    (void)x86_sub(c, c.r[3], 0x1F4u, 0, 4);
    // 0dbe96  jle 0xdbe07
    X86_AT(c, 0xdbe96u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xdbe07u); goto L_dbe07; }
L_dbe9c:
    X86_TICK(c, 7);
    // 0dbe9c  cmp ebx, 0x1f4
    X86_AT(c, 0xdbe9cu);
    (void)x86_sub(c, c.r[3], 0x1F4u, 0, 4);
    // 0dbea2  jge 0xdbf34
    X86_AT(c, 0xdbea2u);
    if (x86_cc(c, 13)) { goto L_dbf34; }
    X86_TICK(c, 11);
    // 0dbea8  cmp edi, dword ptr [0xb2304]
    X86_AT(c, 0xdbea8u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xB2304u))), 0, 4);
    // 0dbeae  jne 0xdbeb8
    X86_AT(c, 0xdbeaeu);
    if (x86_cc(c, 5)) { goto L_dbeb8; }
    X86_TICK(c, 11);
    // 0dbeb0  cmp esi, dword ptr [0xb2308]
    X86_AT(c, 0xdbeb0u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xB2308u))), 0, 4);
    // 0dbeb6  je 0xdbf34
    X86_AT(c, 0xdbeb6u);
    if (x86_cc(c, 4)) { goto L_dbf34; }
L_dbeb8:
    X86_TICK(c, 11);
    // 0dbeb8  push 0x32
    X86_AT(c, 0xdbeb8u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 0dbeba  push 1
    X86_AT(c, 0xdbebau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0dbebc  call 0xc5df0
    X86_AT(c, 0xdbebcu);
    push32(c, 0xdbec1u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdbec1u);
    X86_TICK(c, 65);
    // 0dbec1  dec eax
    X86_AT(c, 0xdbec1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0dbec2  cdq 
    X86_AT(c, 0xdbec2u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0dbec3  mov ecx, 0xa
    X86_AT(c, 0xdbec3u);
    c.r[1] = 0xAu;
    // 0dbec8  idiv ecx
    X86_AT(c, 0xdbec8u);
    x86_idiv(c, c.r[1], 4, 0xdbec8u);
    // 0dbeca  xchg ebx, eax
    X86_AT(c, 0xdbecau);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0dbecb  mov eax, 0xb224c
    X86_AT(c, 0xdbecbu);
    c.r[0] = 0xB224Cu;
    // 0dbed0  add esp, 8
    X86_AT(c, 0xdbed0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0dbed3  cmp byte ptr [eax + ebx*1 + 0x10e8], 0
    X86_AT(c, 0xdbed3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[3] + 0x10E8u))), 0x0u, 0, 1);
    // 0dbedb  jne 0xdbeb8
    X86_AT(c, 0xdbedbu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xdbeb8u); goto L_dbeb8; }
    X86_TICK(c, 80);
    // 0dbedd  mov byte ptr [eax + ebx*1 + 0x10e8], 1
    X86_AT(c, 0xdbeddu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[3] + 0x10E8u)), 0x1u);
    // 0dbee5  mov eax, dword ptr [eax + 0xdc]
    X86_AT(c, 0xdbee5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xDCu)));
    // 0dbeeb  dec eax
    X86_AT(c, 0xdbeebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0dbeec  cdq 
    X86_AT(c, 0xdbeecu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0dbeed  sub eax, edx
    X86_AT(c, 0xdbeedu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0dbeef  sar eax, 1
    X86_AT(c, 0xdbeefu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0dbef1  lea eax, [eax + eax*4]
    X86_AT(c, 0xdbef1u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0dbef4  lea edx, [ebx + eax*1]
    X86_AT(c, 0xdbef4u);
    c.r[2] = (uint32_t)(c.r[3] + c.r[0]);
    // 0dbef7  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xdbef7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0dbefa  mov eax, edi
    X86_AT(c, 0xdbefau);
    c.r[0] = c.r[7];
    // 0dbefc  shl eax, 8
    X86_AT(c, 0xdbefcu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0dbeff  mov edx, esi
    X86_AT(c, 0xdbeffu);
    c.r[2] = c.r[6];
    // 0dbf01  shl edx, 4
    X86_AT(c, 0xdbf01u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0dbf04  add edx, eax
    X86_AT(c, 0xdbf04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dbf06  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdbf06u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0dbf09  mov dword ptr [edx + 0xb2338], eax
    X86_AT(c, 0xdbf09u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2338u)), c.r[0]);
    // 0dbf0f  mov eax, dword ptr [0xb2328]
    X86_AT(c, 0xdbf0fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2328u)));
    // 0dbf14  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0xdbf14u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
    // 0dbf17  mul eax
    X86_AT(c, 0xdbf17u);
    x86_mul(c, c.r[0], 4);
    // 0dbf19  inc eax
    X86_AT(c, 0xdbf19u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0dbf1a  push eax
    X86_AT(c, 0xdbf1au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dbf1b  push 1
    X86_AT(c, 0xdbf1bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0dbf1d  call 0xc5df0
    X86_AT(c, 0xdbf1du);
    push32(c, 0xdbf22u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdbf22u);
    X86_TICK(c, 16);
    // 0dbf22  add eax, 0xa
    X86_AT(c, 0xdbf22u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xAu, 0, 4); }
    // 0dbf25  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdbf25u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0dbf28  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdbf28u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dbf2b  mov dword ptr [edx + 0xb2340], eax
    X86_AT(c, 0xdbf2bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2340u)), c.r[0]);
    // 0dbf31  add esp, 8
    X86_AT(c, 0xdbf31u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_dbf34:
    X86_TICK(c, 28);
    // 0dbf34  pop edi
    X86_AT(c, 0xdbf34u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dbf35  pop esi
    X86_AT(c, 0xdbf35u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dbf36  pop ebx
    X86_AT(c, 0xdbf36u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dbf37  leave 
    X86_AT(c, 0xdbf37u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dbf38  ret 
    X86_AT(c, 0xdbf38u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdbdfcu, "ran off the end of a function");
}
void f_000dbf3c(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0dbf3c  push ebp
    X86_AT(c, 0xdbf3cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dbf3d  mov ebp, esp
    X86_AT(c, 0xdbf3du);
    c.r[5] = c.r[4];
    // 0dbf3f  sub esp, 0xc
    X86_AT(c, 0xdbf3fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0dbf42  push ebx
    X86_AT(c, 0xdbf42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dbf43  push esi
    X86_AT(c, 0xdbf43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dbf44  push edi
    X86_AT(c, 0xdbf44u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dbf45  call 0xdbd9c
    X86_AT(c, 0xdbf45u);
    push32(c, 0xdbf4au); x86_call_known(c, 0xdbd9cu, f_000dbd9c); X86_RET(c, 0xdbf4au);
    X86_TICK(c, 2);
    // 0dbf4a  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xdbf4au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_dbf51:
    X86_TICK(c, 12);
    // 0dbf51  cmp dword ptr [ebp - 4], 0xa
    X86_AT(c, 0xdbf51u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0xAu, 0, 4);
    // 0dbf55  jg 0xdbf9e
    X86_AT(c, 0xdbf55u);
    if (x86_cc(c, 15)) { goto L_dbf9e; }
    X86_TICK(c, 2);
    // 0dbf57  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xdbf57u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_dbf5e:
    X86_TICK(c, 11);
    // 0dbf5e  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xdbf5eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0dbf61  cmp eax, 0xa
    X86_AT(c, 0xdbf61u);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0dbf64  jg 0xdbf99
    X86_AT(c, 0xdbf64u);
    if (x86_cc(c, 15)) { goto L_dbf99; }
    X86_TICK(c, 37);
    // 0dbf66  mov edx, 0xb224c
    X86_AT(c, 0xdbf66u);
    c.r[2] = 0xB224Cu;
    // 0dbf6b  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xdbf6bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0dbf6e  shl edx, 8
    X86_AT(c, 0xdbf6eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 0dbf71  shl eax, 4
    X86_AT(c, 0xdbf71u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0dbf74  add eax, edx
    X86_AT(c, 0xdbf74u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0dbf76  sub edx, edx
    X86_AT(c, 0xdbf76u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0dbf78  mov dword ptr [eax + 0xb2334], edx
    X86_AT(c, 0xdbf78u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB2334u)), c.r[2]);
    // 0dbf7e  mov dword ptr [eax + 0xb233c], edx
    X86_AT(c, 0xdbf7eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB233Cu)), c.r[2]);
    // 0dbf84  mov dword ptr [eax + 0xb2338], 0xffffffff
    X86_AT(c, 0xdbf84u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB2338u)), 0xFFFFFFFFu);
    // 0dbf8e  mov dword ptr [eax + 0xb2340], edx
    X86_AT(c, 0xdbf8eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB2340u)), c.r[2]);
    // 0dbf94  inc dword ptr [ebp - 8]
    X86_AT(c, 0xdbf94u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dbf97  jmp 0xdbf5e
    X86_AT(c, 0xdbf97u);
    X86_POLL(c, 0xdbf5eu); goto L_dbf5e;
L_dbf99:
    X86_TICK(c, 13);
    // 0dbf99  inc dword ptr [ebp - 4]
    X86_AT(c, 0xdbf99u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dbf9c  jmp 0xdbf51
    X86_AT(c, 0xdbf9cu);
    X86_POLL(c, 0xdbf51u); goto L_dbf51;
L_dbf9e:
    X86_TICK(c, 2);
    // 0dbf9e  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xdbf9eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_dbfa5:
    X86_TICK(c, 11);
    // 0dbfa5  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdbfa5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0dbfa8  cmp eax, 0xa
    X86_AT(c, 0xdbfa8u);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0dbfab  jg 0xdbfdd
    X86_AT(c, 0xdbfabu);
    if (x86_cc(c, 15)) { goto L_dbfdd; }
    X86_TICK(c, 35);
    // 0dbfad  shl eax, 8
    X86_AT(c, 0xdbfadu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0dbfb0  mov edx, 2
    X86_AT(c, 0xdbfb0u);
    c.r[2] = 0x2u;
    // 0dbfb5  mov dword ptr [eax + 0xb2334], edx
    X86_AT(c, 0xdbfb5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB2334u)), c.r[2]);
    // 0dbfbb  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xdbfbbu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0dbfbe  shl edx, 4
    X86_AT(c, 0xdbfbeu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0dbfc1  mov ecx, 2
    X86_AT(c, 0xdbfc1u);
    c.r[1] = 0x2u;
    // 0dbfc6  mov dword ptr [edx + 0xb2334], ecx
    X86_AT(c, 0xdbfc6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u)), c.r[1]);
    // 0dbfcc  mov dword ptr [edx + 0xb2d34], ecx
    X86_AT(c, 0xdbfccu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2D34u)), c.r[1]);
    // 0dbfd2  mov dword ptr [eax + 0xb23d4], ecx
    X86_AT(c, 0xdbfd2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB23D4u)), c.r[1]);
    // 0dbfd8  inc dword ptr [ebp - 4]
    X86_AT(c, 0xdbfd8u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dbfdb  jmp 0xdbfa5
    X86_AT(c, 0xdbfdbu);
    X86_POLL(c, 0xdbfa5u); goto L_dbfa5;
L_dbfdd:
    X86_TICK(c, 2);
    // 0dbfdd  mov dword ptr [ebp - 4], 2
    X86_AT(c, 0xdbfddu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x2u);
L_dbfe4:
    X86_TICK(c, 11);
    // 0dbfe4  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdbfe4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0dbfe7  cmp eax, 8
    X86_AT(c, 0xdbfe7u);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 0dbfea  jg 0xdc011
    X86_AT(c, 0xdbfeau);
    if (x86_cc(c, 15)) { goto L_dc011; }
    X86_TICK(c, 27);
    // 0dbfec  shl eax, 8
    X86_AT(c, 0xdbfecu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0dbfef  mov edx, 2
    X86_AT(c, 0xdbfefu);
    c.r[2] = 0x2u;
    // 0dbff4  mov dword ptr [eax + 0xb2354], edx
    X86_AT(c, 0xdbff4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB2354u)), c.r[2]);
    // 0dbffa  mov dword ptr [eax + 0xb2374], edx
    X86_AT(c, 0xdbffau);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB2374u)), c.r[2]);
    // 0dc000  mov dword ptr [eax + 0xb2394], edx
    X86_AT(c, 0xdc000u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB2394u)), c.r[2]);
    // 0dc006  mov dword ptr [eax + 0xb23b4], edx
    X86_AT(c, 0xdc006u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB23B4u)), c.r[2]);
    // 0dc00c  add dword ptr [ebp - 4], edx
    X86_AT(c, 0xdc00cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 0dc00f  jmp 0xdbfe4
    X86_AT(c, 0xdc00fu);
    X86_POLL(c, 0xdbfe4u); goto L_dbfe4;
L_dc011:
    X86_TICK(c, 2);
    // 0dc011  mov dword ptr [ebp - 4], 2
    X86_AT(c, 0xdc011u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x2u);
L_dc018:
    X86_TICK(c, 12);
    // 0dc018  cmp dword ptr [ebp - 4], 8
    X86_AT(c, 0xdc018u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x8u, 0, 4);
    // 0dc01c  jg 0xdc0ac
    X86_AT(c, 0xdc01cu);
    if (x86_cc(c, 15)) { goto L_dc0ac; }
    X86_TICK(c, 2);
    // 0dc022  mov dword ptr [ebp - 8], 1
    X86_AT(c, 0xdc022u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x1u);
L_dc029:
    X86_TICK(c, 12);
    // 0dc029  cmp dword ptr [ebp - 8], 9
    X86_AT(c, 0xdc029u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x9u, 0, 4);
    // 0dc02d  jg 0xdc05b
    X86_AT(c, 0xdc02du);
    if (x86_cc(c, 15)) { goto L_dc05b; }
    X86_TICK(c, 11);
    // 0dc02f  push 3
    X86_AT(c, 0xdc02fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0dc031  push 0
    X86_AT(c, 0xdc031u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0dc033  call 0xc5df0
    X86_AT(c, 0xdc033u);
    push32(c, 0xdc038u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdc038u);
    X86_TICK(c, 40);
    // 0dc038  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xdc038u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0dc03b  shl edx, 8
    X86_AT(c, 0xdc03bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 0dc03e  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xdc03eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0dc041  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xdc041u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0dc044  shl eax, 4
    X86_AT(c, 0xdc044u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0dc047  add eax, edx
    X86_AT(c, 0xdc047u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0dc049  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdc049u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dc04c  mov dword ptr [eax + 0xb2334], edx
    X86_AT(c, 0xdc04cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB2334u)), c.r[2]);
    // 0dc052  add dword ptr [ebp - 8], 2
    X86_AT(c, 0xdc052u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x2u, 0, 4)); }
    // 0dc056  add esp, 8
    X86_AT(c, 0xdc056u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0dc059  jmp 0xdc029
    X86_AT(c, 0xdc059u);
    X86_POLL(c, 0xdc029u); goto L_dc029;
L_dc05b:
    X86_TICK(c, 21);
    // 0dc05b  mov eax, 0xb224c
    X86_AT(c, 0xdc05bu);
    c.r[0] = 0xB224Cu;
    // 0dc060  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xdc060u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0dc063  shl edx, 8
    X86_AT(c, 0xdc063u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 0dc066  cmp dword ptr [eax + edx*1 + 0xf8], 2
    X86_AT(c, 0xdc066u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0xF8u))), 0x2u, 0, 4);
    // 0dc06e  jne 0xdc0a3
    X86_AT(c, 0xdc06eu);
    if (x86_cc(c, 5)) { goto L_dc0a3; }
    X86_TICK(c, 12);
    // 0dc070  cmp dword ptr [eax + edx*1 + 0x118], 2
    X86_AT(c, 0xdc070u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x118u))), 0x2u, 0, 4);
    // 0dc078  jne 0xdc0a3
    X86_AT(c, 0xdc078u);
    if (x86_cc(c, 5)) { goto L_dc0a3; }
    X86_TICK(c, 12);
    // 0dc07a  cmp dword ptr [eax + edx*1 + 0x138], 2
    X86_AT(c, 0xdc07au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x138u))), 0x2u, 0, 4);
    // 0dc082  jne 0xdc0a3
    X86_AT(c, 0xdc082u);
    if (x86_cc(c, 5)) { goto L_dc0a3; }
    X86_TICK(c, 12);
    // 0dc084  cmp dword ptr [eax + edx*1 + 0x158], 2
    X86_AT(c, 0xdc084u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x158u))), 0x2u, 0, 4);
    // 0dc08c  jne 0xdc0a3
    X86_AT(c, 0xdc08cu);
    if (x86_cc(c, 5)) { goto L_dc0a3; }
    X86_TICK(c, 12);
    // 0dc08e  cmp dword ptr [eax + edx*1 + 0x178], 2
    X86_AT(c, 0xdc08eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x178u))), 0x2u, 0, 4);
    // 0dc096  jne 0xdc0a3
    X86_AT(c, 0xdc096u);
    if (x86_cc(c, 5)) { goto L_dc0a3; }
    X86_TICK(c, 2);
    // 0dc098  mov dword ptr [eax + edx*1 + 0x178], 3
    X86_AT(c, 0xdc098u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x178u)), 0x3u);
L_dc0a3:
    X86_TICK(c, 14);
    // 0dc0a3  add dword ptr [ebp - 4], 2
    X86_AT(c, 0xdc0a3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x2u, 0, 4)); }
    // 0dc0a7  jmp 0xdc018
    X86_AT(c, 0xdc0a7u);
    X86_POLL(c, 0xdc018u); goto L_dc018;
L_dc0ac:
    X86_TICK(c, 8);
    // 0dc0ac  mov esi, dword ptr [0xb2328]
    X86_AT(c, 0xdc0acu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xB2328u)));
    // 0dc0b2  add esi, esi
    X86_AT(c, 0xdc0b2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[6], 0, 4); }
    // 0dc0b4  sub edi, edi
    X86_AT(c, 0xdc0b4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_dc0b6:
    X86_TICK(c, 7);
    // 0dc0b6  cmp esi, edi
    X86_AT(c, 0xdc0b6u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 0dc0b8  jl 0xdc123
    X86_AT(c, 0xdc0b8u);
    if (x86_cc(c, 12)) { goto L_dc123; }
    X86_TICK(c, 11);
    // 0dc0ba  push 0xff
    X86_AT(c, 0xdc0bau);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0dc0bf  push 1
    X86_AT(c, 0xdc0bfu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0dc0c1  call 0xc5df0
    X86_AT(c, 0xdc0c1u);
    push32(c, 0xdc0c6u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdc0c6u);
    X86_TICK(c, 9);
    // 0dc0c6  add esp, 8
    X86_AT(c, 0xdc0c6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0dc0c9  cmp eax, 0xa0
    X86_AT(c, 0xdc0c9u);
    (void)x86_sub(c, c.r[0], 0xA0u, 0, 4);
    // 0dc0ce  jle 0xdc120
    X86_AT(c, 0xdc0ceu);
    if (x86_cc(c, 14)) { goto L_dc120; }
    X86_TICK(c, 13);
    // 0dc0d0  mov ebx, 8
    X86_AT(c, 0xdc0d0u);
    c.r[3] = 0x8u;
    // 0dc0d5  push 0x10
    X86_AT(c, 0xdc0d5u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0dc0d7  push 1
    X86_AT(c, 0xdc0d7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0dc0d9  call 0xc5df0
    X86_AT(c, 0xdc0d9u);
    push32(c, 0xdc0deu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdc0deu);
    X86_TICK(c, 18);
    // 0dc0de  dec eax
    X86_AT(c, 0xdc0deu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0dc0df  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdc0dfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0dc0e2  add esp, 8
    X86_AT(c, 0xdc0e2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0dc0e5  test byte ptr [0xb2328], 1
    X86_AT(c, 0xdc0e5u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB2328u))) & 0x1u, 1);
    // 0dc0ec  je 0xdc101
    X86_AT(c, 0xdc0ecu);
    if (x86_cc(c, 4)) { goto L_dc101; }
    X86_TICK(c, 18);
    // 0dc0ee  mov edx, dword ptr [eax*4 + 0xb2280]
    X86_AT(c, 0xdc0eeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB2280u)));
    // 0dc0f5  shl edx, 8
    X86_AT(c, 0xdc0f5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 0dc0f8  mov eax, dword ptr [eax*4 + 0xb22c0]
    X86_AT(c, 0xdc0f8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB22C0u)));
    // 0dc0ff  jmp 0xdc115
    X86_AT(c, 0xdc0ffu);
    goto L_dc115;
L_dc101:
    X86_TICK(c, 15);
    // 0dc101  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdc101u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0dc104  mov edx, dword ptr [eax*4 + 0xb22c0]
    X86_AT(c, 0xdc104u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB22C0u)));
    // 0dc10b  shl edx, 8
    X86_AT(c, 0xdc10bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 0dc10e  mov eax, dword ptr [eax*4 + 0xb2280]
    X86_AT(c, 0xdc10eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB2280u)));
L_dc115:
    X86_TICK(c, 7);
    // 0dc115  shl eax, 4
    X86_AT(c, 0xdc115u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0dc118  add eax, edx
    X86_AT(c, 0xdc118u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0dc11a  mov dword ptr [eax + 0xb2334], ebx
    X86_AT(c, 0xdc11au);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB2334u)), c.r[3]);
L_dc120:
    X86_TICK(c, 9);
    // 0dc120  inc edi
    X86_AT(c, 0xdc120u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dc121  jmp 0xdc0b6
    X86_AT(c, 0xdc121u);
    X86_POLL(c, 0xdc0b6u); goto L_dc0b6;
L_dc123:
    X86_TICK(c, 7);
    // 0dc123  call 0xc5e0c
    X86_AT(c, 0xdc123u);
    push32(c, 0xdc128u); x86_call_known(c, 0xc5e0cu, f_000c5e0c); X86_RET(c, 0xdc128u);
    X86_TICK(c, 11);
    // 0dc128  add eax, 0x6f1
    X86_AT(c, 0xdc128u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x6F1u, 0, 4); }
    // 0dc12d  push eax
    X86_AT(c, 0xdc12du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dc12e  call 0xe78dc
    X86_AT(c, 0xdc12eu);
    push32(c, 0xdc133u); x86_call_known(c, 0xe78dcu, f_000e78dc); X86_RET(c, 0xdc133u);
    X86_TICK(c, 4);
    // 0dc133  sub edi, edi
    X86_AT(c, 0xdc133u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0dc135  add esp, 4
    X86_AT(c, 0xdc135u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_dc138:
    X86_TICK(c, 11);
    // 0dc138  cmp edi, dword ptr [0xb2328]
    X86_AT(c, 0xdc138u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xB2328u))), 0, 4);
    // 0dc13e  jg 0xdc1b4
    X86_AT(c, 0xdc13eu);
    if (x86_cc(c, 15)) { goto L_dc1b4; }
    X86_TICK(c, 11);
    // 0dc144  push 0x64
    X86_AT(c, 0xdc144u);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0dc146  push 1
    X86_AT(c, 0xdc146u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0dc148  call 0xc5df0
    X86_AT(c, 0xdc148u);
    push32(c, 0xdc14du); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdc14du);
    X86_TICK(c, 18);
    // 0dc14d  xchg ebx, eax
    X86_AT(c, 0xdc14du);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0dc14e  and ebx, 1
    X86_AT(c, 0xdc14eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x1u, 4); }
    // 0dc154  add ebx, 4
    X86_AT(c, 0xdc154u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dc157  push 0x63
    X86_AT(c, 0xdc157u);
    { uint32_t v = 0x63u; push32(c, v); }
    // 0dc159  push 0xa
    X86_AT(c, 0xdc159u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0dc15b  call 0xc5df0
    X86_AT(c, 0xdc15bu);
    push32(c, 0xdc160u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdc160u);
    X86_TICK(c, 57);
    // 0dc160  cdq 
    X86_AT(c, 0xdc160u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0dc161  mov ecx, 0xa
    X86_AT(c, 0xdc161u);
    c.r[1] = 0xAu;
    // 0dc166  idiv ecx
    X86_AT(c, 0xdc166u);
    x86_idiv(c, c.r[1], 4, 0xdc166u);
    // 0dc168  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdc168u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0dc16b  push 0x63
    X86_AT(c, 0xdc16bu);
    { uint32_t v = 0x63u; push32(c, v); }
    // 0dc16d  push ecx
    X86_AT(c, 0xdc16du);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0dc16e  call 0xc5df0
    X86_AT(c, 0xdc16eu);
    push32(c, 0xdc173u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xdc173u);
    X86_TICK(c, 71);
    // 0dc173  cdq 
    X86_AT(c, 0xdc173u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0dc174  mov ecx, 0xa
    X86_AT(c, 0xdc174u);
    c.r[1] = 0xAu;
    // 0dc179  idiv ecx
    X86_AT(c, 0xdc179u);
    x86_idiv(c, c.r[1], 4, 0xdc179u);
    // 0dc17b  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xdc17bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0dc17e  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xdc17eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0dc181  shl edx, 8
    X86_AT(c, 0xdc181u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 0dc184  shl eax, 4
    X86_AT(c, 0xdc184u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0dc187  add eax, edx
    X86_AT(c, 0xdc187u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0dc189  add esp, 0x18
    X86_AT(c, 0xdc189u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0dc18c  mov edx, dword ptr [eax + 0xb2334]
    X86_AT(c, 0xdc18cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB2334u)));
    // 0dc192  cmp edx, 2
    X86_AT(c, 0xdc192u);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0dc195  je 0xdc1b1
    X86_AT(c, 0xdc195u);
    if (x86_cc(c, 4)) { goto L_dc1b1; }
    X86_TICK(c, 7);
    // 0dc197  cmp edx, 3
    X86_AT(c, 0xdc197u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0dc19a  je 0xdc1b1
    X86_AT(c, 0xdc19au);
    if (x86_cc(c, 4)) { goto L_dc1b1; }
    X86_TICK(c, 7);
    // 0dc19c  cmp edx, 8
    X86_AT(c, 0xdc19cu);
    (void)x86_sub(c, c.r[2], 0x8u, 0, 4);
    // 0dc19f  je 0xdc1b1
    X86_AT(c, 0xdc19fu);
    if (x86_cc(c, 4)) { goto L_dc1b1; }
    X86_TICK(c, 4);
    // 0dc1a1  mov dword ptr [eax + 0xb2334], 4
    X86_AT(c, 0xdc1a1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB2334u)), 0x4u);
    // 0dc1ab  mov dword ptr [eax + 0xb233c], ebx
    X86_AT(c, 0xdc1abu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB233Cu)), c.r[3]);
L_dc1b1:
    X86_TICK(c, 9);
    // 0dc1b1  inc edi
    X86_AT(c, 0xdc1b1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dc1b2  jmp 0xdc138
    X86_AT(c, 0xdc1b2u);
    X86_POLL(c, 0xdc138u); goto L_dc138;
L_dc1b4:
    X86_TICK(c, 16);
    // 0dc1b4  sub eax, eax
    X86_AT(c, 0xdc1b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0dc1b6  mov dword ptr [0xb2454], eax
    X86_AT(c, 0xdc1b6u);
    wr32((c.sbase[3] + (uint32_t)(0xB2454u)), c.r[0]);
    // 0dc1bb  test byte ptr [0xb2328], 1
    X86_AT(c, 0xdc1bbu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB2328u))) & 0x1u, 1);
    // 0dc1c2  je 0xdc1da
    X86_AT(c, 0xdc1c2u);
    if (x86_cc(c, 4)) { goto L_dc1da; }
    X86_TICK(c, 11);
    // 0dc1c4  mov dword ptr [0xb2a64], 0xf
    X86_AT(c, 0xdc1c4u);
    wr32((c.sbase[3] + (uint32_t)(0xB2A64u)), 0xFu);
    // 0dc1ce  mov dword ptr [0xb26a4], 0xe
    X86_AT(c, 0xdc1ceu);
    wr32((c.sbase[3] + (uint32_t)(0xB26A4u)), 0xEu);
    // 0dc1d8  jmp 0xdc1ee
    X86_AT(c, 0xdc1d8u);
    goto L_dc1ee;
L_dc1da:
    X86_TICK(c, 4);
    // 0dc1da  mov dword ptr [0xb2a64], 0xe
    X86_AT(c, 0xdc1dau);
    wr32((c.sbase[3] + (uint32_t)(0xB2A64u)), 0xEu);
    // 0dc1e4  mov dword ptr [0xb26a4], 0xf
    X86_AT(c, 0xdc1e4u);
    wr32((c.sbase[3] + (uint32_t)(0xB26A4u)), 0xFu);
L_dc1ee:
    X86_TICK(c, 12);
    // 0dc1ee  cmp dword ptr [0xb2328], 0xa
    X86_AT(c, 0xdc1eeu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB2328u))), 0xAu, 0, 4);
    // 0dc1f5  jne 0xdc201
    X86_AT(c, 0xdc1f5u);
    if (x86_cc(c, 5)) { goto L_dc201; }
    X86_TICK(c, 2);
    // 0dc1f7  mov dword ptr [0xb2a64], 0
    X86_AT(c, 0xdc1f7u);
    wr32((c.sbase[3] + (uint32_t)(0xB2A64u)), 0x0u);
L_dc201:
    X86_TICK(c, 12);
    // 0dc201  cmp dword ptr [0xb2328], 1
    X86_AT(c, 0xdc201u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB2328u))), 0x1u, 0, 4);
    // 0dc208  jne 0xdc21e
    X86_AT(c, 0xdc208u);
    if (x86_cc(c, 5)) { goto L_dc21e; }
    X86_TICK(c, 4);
    // 0dc20a  mov dword ptr [0xb2444], 0xf
    X86_AT(c, 0xdc20au);
    wr32((c.sbase[3] + (uint32_t)(0xB2444u)), 0xFu);
    // 0dc214  mov dword ptr [0xb2a64], 0
    X86_AT(c, 0xdc214u);
    wr32((c.sbase[3] + (uint32_t)(0xB2A64u)), 0x0u);
L_dc21e:
    X86_TICK(c, 2);
    // 0dc21e  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xdc21eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_dc225:
    X86_TICK(c, 11);
    // 0dc225  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdc225u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0dc228  cmp eax, 5
    X86_AT(c, 0xdc228u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0dc22b  jge 0xdc239
    X86_AT(c, 0xdc22bu);
    if (x86_cc(c, 13)) { goto L_dc239; }
    X86_TICK(c, 15);
    // 0dc22d  mov byte ptr [eax + 0xb3334], 0
    X86_AT(c, 0xdc22du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB3334u)), 0x0u);
    // 0dc234  inc dword ptr [ebp - 4]
    X86_AT(c, 0xdc234u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dc237  jmp 0xdc225
    X86_AT(c, 0xdc237u);
    X86_POLL(c, 0xdc225u); goto L_dc225;
L_dc239:
    X86_TICK(c, 7);
    // 0dc239  call 0xdbdfc
    X86_AT(c, 0xdc239u);
    push32(c, 0xdc23eu); x86_call_known(c, 0xdbdfcu, f_000dbdfc); X86_RET(c, 0xdc23eu);
    X86_TICK(c, 7);
    // 0dc23e  call 0xdbdfc
    X86_AT(c, 0xdc23eu);
    push32(c, 0xdc243u); x86_call_known(c, 0xdbdfcu, f_000dbdfc); X86_RET(c, 0xdc243u);
    X86_TICK(c, 7);
    // 0dc243  call 0xdbdfc
    X86_AT(c, 0xdc243u);
    push32(c, 0xdc248u); x86_call_known(c, 0xdbdfcu, f_000dbdfc); X86_RET(c, 0xdc248u);
    X86_TICK(c, 7);
    // 0dc248  call 0xdb454
    X86_AT(c, 0xdc248u);
    push32(c, 0xdc24du); x86_call_known(c, 0xdb454u, f_000db454); X86_RET(c, 0xdc24du);
    X86_TICK(c, 34);
    // 0dc24d  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xdc24du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0dc252  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdc252u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0dc255  mov eax, dword ptr [0xb2308]
    X86_AT(c, 0xdc255u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0dc25a  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xdc25au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0dc25d  lea eax, [ebp - 8]
    X86_AT(c, 0xdc25du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0dc260  push eax
    X86_AT(c, 0xdc260u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dc261  lea eax, [ebp - 4]
    X86_AT(c, 0xdc261u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0dc264  push eax
    X86_AT(c, 0xdc264u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dc265  push dword ptr [0xb232c]
    X86_AT(c, 0xdc265u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB232Cu))); push32(c, v); }
    // 0dc26b  push 0xb34a4
    X86_AT(c, 0xdc26bu);
    { uint32_t v = 0xB34A4u; push32(c, v); }
    // 0dc270  call 0xdadcc
    X86_AT(c, 0xdc270u);
    push32(c, 0xdc275u); x86_call_known(c, 0xdadccu, f_000dadcc); X86_RET(c, 0xdc275u);
    X86_TICK(c, 7);
    // 0dc275  call 0xdbd68
    X86_AT(c, 0xdc275u);
    push32(c, 0xdc27au); x86_call_known(c, 0xdbd68u, f_000dbd68); X86_RET(c, 0xdc27au);
    X86_TICK(c, 7);
    // 0dc27a  call 0xdb284
    X86_AT(c, 0xdc27au);
    push32(c, 0xdc27fu); x86_call_known(c, 0xdb284u, f_000db284); X86_RET(c, 0xdc27fu);
    X86_TICK(c, 9);
    // 0dc27f  push 7
    X86_AT(c, 0xdc27fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dc281  call 0xca0a0
    X86_AT(c, 0xdc281u);
    push32(c, 0xdc286u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xdc286u);
    X86_TICK(c, 7);
    // 0dc286  call 0xcc3f0
    X86_AT(c, 0xdc286u);
    push32(c, 0xdc28bu); x86_call_known(c, 0xcc3f0u, f_000cc3f0); X86_RET(c, 0xdc28bu);
    X86_TICK(c, 30);
    // 0dc28b  add esp, 0x14
    X86_AT(c, 0xdc28bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0dc28e  pop edi
    X86_AT(c, 0xdc28eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc28f  pop esi
    X86_AT(c, 0xdc28fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dc290  pop ebx
    X86_AT(c, 0xdc290u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dc291  leave 
    X86_AT(c, 0xdc291u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dc292  ret 
    X86_AT(c, 0xdc292u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdbf3cu, "ran off the end of a function");
}
void f_000dc294(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0dc294  push ebp
    X86_AT(c, 0xdc294u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dc295  mov ebp, esp
    X86_AT(c, 0xdc295u);
    c.r[5] = c.r[4];
    // 0dc297  push eax
    X86_AT(c, 0xdc297u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dc298  call 0xdc564
    X86_AT(c, 0xdc298u);
    push32(c, 0xdc29du); x86_call_known(c, 0xdc564u, f_000dc564); X86_RET(c, 0xdc29du);
    X86_TICK(c, 9);
    // 0dc29d  push eax
    X86_AT(c, 0xdc29du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dc29e  call 0xdba60
    X86_AT(c, 0xdc29eu);
    push32(c, 0xdc2a3u); x86_call_known(c, 0xdba60u, f_000dba60); X86_RET(c, 0xdc2a3u);
    X86_TICK(c, 16);
    // 0dc2a3  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdc2a3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0dc2a6  add esp, 4
    X86_AT(c, 0xdc2a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dc2a9  cmp dword ptr [0xb52f8], 0
    X86_AT(c, 0xdc2a9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x0u, 0, 4);
    // 0dc2b0  jne 0xdc2b9
    X86_AT(c, 0xdc2b0u);
    if (x86_cc(c, 5)) { goto L_dc2b9; }
    X86_TICK(c, 9);
    // 0dc2b2  mov eax, 0xffffffff
    X86_AT(c, 0xdc2b2u);
    c.r[0] = 0xFFFFFFFFu;
    // 0dc2b7  jmp 0xdc2d4
    X86_AT(c, 0xdc2b7u);
    goto L_dc2d4;
L_dc2b9:
    X86_TICK(c, 7);
    // 0dc2b9  call 0xdbd68
    X86_AT(c, 0xdc2b9u);
    push32(c, 0xdc2beu); x86_call_known(c, 0xdbd68u, f_000dbd68); X86_RET(c, 0xdc2beu);
    X86_TICK(c, 7);
    // 0dc2be  call 0xdb284
    X86_AT(c, 0xdc2beu);
    push32(c, 0xdc2c3u); x86_call_known(c, 0xdb284u, f_000db284); X86_RET(c, 0xdc2c3u);
    X86_TICK(c, 7);
    // 0dc2c3  call 0xcc3f0
    X86_AT(c, 0xdc2c3u);
    push32(c, 0xdc2c8u); x86_call_known(c, 0xcc3f0u, f_000cc3f0); X86_RET(c, 0xdc2c8u);
    X86_TICK(c, 7);
    // 0dc2c8  call 0xdb834
    X86_AT(c, 0xdc2c8u);
    push32(c, 0xdc2cdu); x86_call_known(c, 0xdb834u, f_000db834); X86_RET(c, 0xdc2cdu);
    X86_TICK(c, 7);
    // 0dc2cd  call 0xcc3f0
    X86_AT(c, 0xdc2cdu);
    push32(c, 0xdc2d2u); x86_call_known(c, 0xcc3f0u, f_000cc3f0); X86_RET(c, 0xdc2d2u);
    X86_TICK(c, 2);
    // 0dc2d2  sub eax, eax
    X86_AT(c, 0xdc2d2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_dc2d4:
    X86_TICK(c, 16);
    // 0dc2d4  leave 
    X86_AT(c, 0xdc2d4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dc2d5  ret 
    X86_AT(c, 0xdc2d5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdc294u, "ran off the end of a function");
}
void f_000dc2d8(X86Cpu& c) {
    X86_TICK(c, 62);
    // 0dc2d8  push ebp
    X86_AT(c, 0xdc2d8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dc2d9  mov ebp, esp
    X86_AT(c, 0xdc2d9u);
    c.r[5] = c.r[4];
    // 0dc2db  sub esp, 8
    X86_AT(c, 0xdc2dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0dc2de  push ebx
    X86_AT(c, 0xdc2deu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dc2df  push esi
    X86_AT(c, 0xdc2dfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dc2e0  push edi
    X86_AT(c, 0xdc2e0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc2e1  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xdc2e1u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0dc2e4  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xdc2e4u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0dc2e7  mov eax, esi
    X86_AT(c, 0xdc2e7u);
    c.r[0] = c.r[6];
    // 0dc2e9  shl eax, 4
    X86_AT(c, 0xdc2e9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0dc2ec  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xdc2ecu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0dc2ef  add eax, edi
    X86_AT(c, 0xdc2efu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0dc2f1  mov bl, byte ptr [eax + 0xb34a4]
    X86_AT(c, 0xdc2f1u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB34A4u))));
    // 0dc2f7  mov eax, edi
    X86_AT(c, 0xdc2f7u);
    c.r[0] = c.r[7];
    // 0dc2f9  shl eax, 8
    X86_AT(c, 0xdc2f9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0dc2fc  add eax, dword ptr [ebp - 8]
    X86_AT(c, 0xdc2fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 0dc2ff  mov al, byte ptr [eax + 0xb233c]
    X86_AT(c, 0xdc2ffu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB233Cu))));
    // 0dc305  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xdc305u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0dc308  movzx edx, bl
    X86_AT(c, 0xdc308u);
    c.r[2] = g8(c, 3);
    // 0dc30b  dec edx
    X86_AT(c, 0xdc30bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0dc30c  cmp edx, 7
    X86_AT(c, 0xdc30cu);
    (void)x86_sub(c, c.r[2], 0x7u, 0, 4);
    // 0dc30f  ja 0xdc37c
    X86_AT(c, 0xdc30fu);
    if (x86_cc(c, 7)) { goto L_dc37c; }
    X86_TICK(c, 7);
    // 0dc311  jmp dword ptr cs:[edx*4 + 0xdc319]
    X86_AT(c, 0xdc311u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xDC319u)));
      switch (t) {
      case 0xdc339u: goto L_dc339;
      case 0xdc347u: goto L_dc347;
      case 0xdc355u: goto L_dc355;
      case 0xdc363u: goto L_dc363;
      case 0xdc37cu: goto L_dc37c;
      default: x86_jump(c, t); return; } }
L_dc339:
    X86_TICK(c, 9);
    // 0dc339  push 0
    X86_AT(c, 0xdc339u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0dc33b  call 0xc5ca4
    X86_AT(c, 0xdc33bu);
    push32(c, 0xdc340u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xdc340u);
    X86_TICK(c, 9);
    // 0dc340  push 0xccf8
    X86_AT(c, 0xdc340u);
    { uint32_t v = 0xCCF8u; push32(c, v); }
    // 0dc345  jmp 0xdc374
    X86_AT(c, 0xdc345u);
    goto L_dc374;
L_dc347:
    X86_TICK(c, 9);
    // 0dc347  push 9
    X86_AT(c, 0xdc347u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0dc349  call 0xc5ca4
    X86_AT(c, 0xdc349u);
    push32(c, 0xdc34eu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xdc34eu);
    X86_TICK(c, 9);
    // 0dc34e  push 0xcd38
    X86_AT(c, 0xdc34eu);
    { uint32_t v = 0xCD38u; push32(c, v); }
    // 0dc353  jmp 0xdc374
    X86_AT(c, 0xdc353u);
    goto L_dc374;
L_dc355:
    X86_TICK(c, 9);
    // 0dc355  push 9
    X86_AT(c, 0xdc355u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0dc357  call 0xc5ca4
    X86_AT(c, 0xdc357u);
    push32(c, 0xdc35cu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xdc35cu);
    X86_TICK(c, 9);
    // 0dc35c  push 0xcd90
    X86_AT(c, 0xdc35cu);
    { uint32_t v = 0xCD90u; push32(c, v); }
    // 0dc361  jmp 0xdc374
    X86_AT(c, 0xdc361u);
    goto L_dc374;
L_dc363:
    X86_TICK(c, 9);
    // 0dc363  push 2
    X86_AT(c, 0xdc363u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0dc365  call 0xc5ca4
    X86_AT(c, 0xdc365u);
    push32(c, 0xdc36au); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xdc36au);
    X86_TICK(c, 7);
    // 0dc36a  call 0xc7638
    X86_AT(c, 0xdc36au);
    push32(c, 0xdc36fu); x86_call_known(c, 0xc7638u, f_000c7638); X86_RET(c, 0xdc36fu);
    X86_TICK(c, 2);
    // 0dc36f  push 0xcdbc
    X86_AT(c, 0xdc36fu);
    { uint32_t v = 0xCDBCu; push32(c, v); }
L_dc374:
    X86_TICK(c, 7);
    // 0dc374  call 0xcc7bc
    X86_AT(c, 0xdc374u);
    push32(c, 0xdc379u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdc379u);
    X86_TICK(c, 2);
    // 0dc379  add esp, 8
    X86_AT(c, 0xdc379u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_dc37c:
    X86_TICK(c, 11);
    // 0dc37c  push esi
    X86_AT(c, 0xdc37cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dc37d  push edi
    X86_AT(c, 0xdc37du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc37e  call 0xdb32c
    X86_AT(c, 0xdc37eu);
    push32(c, 0xdc383u); x86_call_known(c, 0xdb32cu, f_000db32c); X86_RET(c, 0xdc383u);
    X86_TICK(c, 9);
    // 0dc383  add esp, 8
    X86_AT(c, 0xdc383u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0dc386  and eax, eax
    X86_AT(c, 0xdc386u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0dc388  je 0xdc3a5
    X86_AT(c, 0xdc388u);
    if (x86_cc(c, 4)) { goto L_dc3a5; }
    X86_TICK(c, 9);
    // 0dc38a  push 0
    X86_AT(c, 0xdc38au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0dc38c  call 0xc5ca4
    X86_AT(c, 0xdc38cu);
    push32(c, 0xdc391u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xdc391u);
    X86_TICK(c, 9);
    // 0dc391  push 0xcdf0
    X86_AT(c, 0xdc391u);
    { uint32_t v = 0xCDF0u; push32(c, v); }
    // 0dc396  call 0xcc7bc
    X86_AT(c, 0xdc396u);
    push32(c, 0xdc39bu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdc39bu);
    X86_TICK(c, 11);
    // 0dc39b  mov eax, 0xffffffff
    X86_AT(c, 0xdc39bu);
    c.r[0] = 0xFFFFFFFFu;
    // 0dc3a0  add esp, 8
    X86_AT(c, 0xdc3a0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0dc3a3  jmp 0xdc3dc
    X86_AT(c, 0xdc3a3u);
    goto L_dc3dc;
L_dc3a5:
    X86_TICK(c, 13);
    // 0dc3a5  movzx edx, byte ptr [ebp - 1]
    X86_AT(c, 0xdc3a5u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)));
    // 0dc3a9  cmp edx, 4
    X86_AT(c, 0xdc3a9u);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0dc3ac  je 0xdc3b5
    X86_AT(c, 0xdc3acu);
    if (x86_cc(c, 4)) { goto L_dc3b5; }
    X86_TICK(c, 7);
    // 0dc3ae  cmp edx, 5
    X86_AT(c, 0xdc3aeu);
    (void)x86_sub(c, c.r[2], 0x5u, 0, 4);
    // 0dc3b1  je 0xdc3bc
    X86_AT(c, 0xdc3b1u);
    if (x86_cc(c, 4)) { goto L_dc3bc; }
    X86_TICK(c, 7);
    // 0dc3b3  jmp 0xdc3c9
    X86_AT(c, 0xdc3b3u);
    goto L_dc3c9;
L_dc3b5:
    X86_TICK(c, 9);
    // 0dc3b5  push 0xce18
    X86_AT(c, 0xdc3b5u);
    { uint32_t v = 0xCE18u; push32(c, v); }
    // 0dc3ba  jmp 0xdc3c1
    X86_AT(c, 0xdc3bau);
    goto L_dc3c1;
L_dc3bc:
    X86_TICK(c, 2);
    // 0dc3bc  push 0xce30
    X86_AT(c, 0xdc3bcu);
    { uint32_t v = 0xCE30u; push32(c, v); }
L_dc3c1:
    X86_TICK(c, 7);
    // 0dc3c1  call 0xcc7bc
    X86_AT(c, 0xdc3c1u);
    push32(c, 0xdc3c6u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdc3c6u);
    X86_TICK(c, 2);
    // 0dc3c6  add esp, 4
    X86_AT(c, 0xdc3c6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_dc3c9:
    X86_TICK(c, 7);
    // 0dc3c9  cmp bl, 2
    X86_AT(c, 0xdc3c9u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0dc3cc  je 0xdc3d3
    X86_AT(c, 0xdc3ccu);
    if (x86_cc(c, 4)) { goto L_dc3d3; }
    X86_TICK(c, 7);
    // 0dc3ce  cmp bl, 8
    X86_AT(c, 0xdc3ceu);
    (void)x86_sub(c, g8(c, 3), 0x8u, 0, 1);
    // 0dc3d1  jne 0xdc3da
    X86_AT(c, 0xdc3d1u);
    if (x86_cc(c, 5)) { goto L_dc3da; }
L_dc3d3:
    X86_TICK(c, 9);
    // 0dc3d3  mov eax, 0xffffffff
    X86_AT(c, 0xdc3d3u);
    c.r[0] = 0xFFFFFFFFu;
    // 0dc3d8  jmp 0xdc3dc
    X86_AT(c, 0xdc3d8u);
    goto L_dc3dc;
L_dc3da:
    X86_TICK(c, 2);
    // 0dc3da  sub eax, eax
    X86_AT(c, 0xdc3dau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_dc3dc:
    X86_TICK(c, 28);
    // 0dc3dc  pop edi
    X86_AT(c, 0xdc3dcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc3dd  pop esi
    X86_AT(c, 0xdc3ddu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dc3de  pop ebx
    X86_AT(c, 0xdc3deu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dc3df  leave 
    X86_AT(c, 0xdc3dfu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dc3e0  ret 
    X86_AT(c, 0xdc3e0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdc2d8u, "ran off the end of a function");
}
void f_000dc3e4(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0dc3e4  dec dword ptr [0xb2328]
    X86_AT(c, 0xdc3e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB2328u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0dc3ea  push 0xce4c
    X86_AT(c, 0xdc3eau);
    { uint32_t v = 0xCE4Cu; push32(c, v); }
    // 0dc3ef  call 0xcc7bc
    X86_AT(c, 0xdc3efu);
    push32(c, 0xdc3f4u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdc3f4u);
    X86_TICK(c, 14);
    // 0dc3f4  add esp, 4
    X86_AT(c, 0xdc3f4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dc3f7  cmp dword ptr [0xb2328], 0
    X86_AT(c, 0xdc3f7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB2328u))), 0x0u, 0, 4);
    // 0dc3fe  jne 0xdc46f
    X86_AT(c, 0xdc3feu);
    if (x86_cc(c, 5)) { goto L_dc46f; }
    X86_TICK(c, 17);
    // 0dc400  mov eax, dword ptr [0xb02fe]
    X86_AT(c, 0xdc400u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB02FEu)));
    // 0dc405  add eax, dword ptr [0xb2330]
    X86_AT(c, 0xdc405u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB2330u))), 0, 4); }
    // 0dc40b  cmp eax, 0x270f
    X86_AT(c, 0xdc40bu);
    (void)x86_sub(c, c.r[0], 0x270Fu, 0, 4);
    // 0dc410  jle 0xdc422
    X86_AT(c, 0xdc410u);
    if (x86_cc(c, 14)) { goto L_dc422; }
    X86_TICK(c, 10);
    // 0dc412  mov eax, 0x270f
    X86_AT(c, 0xdc412u);
    c.r[0] = 0x270Fu;
    // 0dc417  sub eax, dword ptr [0xb02fe]
    X86_AT(c, 0xdc417u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0, 4); }
    // 0dc41d  mov dword ptr [0xb2330], eax
    X86_AT(c, 0xdc41du);
    wr32((c.sbase[3] + (uint32_t)(0xB2330u)), c.r[0]);
L_dc422:
    X86_TICK(c, 12);
    // 0dc422  cmp dword ptr [0xb2330], 0
    X86_AT(c, 0xdc422u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB2330u))), 0x0u, 0, 4);
    // 0dc429  je 0xdc463
    X86_AT(c, 0xdc429u);
    if (x86_cc(c, 4)) { goto L_dc463; }
    X86_TICK(c, 11);
    // 0dc42b  push 0xf
    X86_AT(c, 0xdc42bu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0dc42d  push 0xce68
    X86_AT(c, 0xdc42du);
    { uint32_t v = 0xCE68u; push32(c, v); }
    // 0dc432  call 0xcc830
    X86_AT(c, 0xdc432u);
    push32(c, 0xdc437u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xdc437u);
    X86_TICK(c, 16);
    // 0dc437  push 4
    X86_AT(c, 0xdc437u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0dc439  push dword ptr [0xb2330]
    X86_AT(c, 0xdc439u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB2330u))); push32(c, v); }
    // 0dc43f  push 7
    X86_AT(c, 0xdc43fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dc441  call 0xc8cb8
    X86_AT(c, 0xdc441u);
    push32(c, 0xdc446u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xdc446u);
    X86_TICK(c, 9);
    // 0dc446  push 0xce98
    X86_AT(c, 0xdc446u);
    { uint32_t v = 0xCE98u; push32(c, v); }
    // 0dc44b  call 0xcc7bc
    X86_AT(c, 0xdc44bu);
    push32(c, 0xdc450u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdc450u);
    X86_TICK(c, 18);
    // 0dc450  mov eax, dword ptr [0xb2330]
    X86_AT(c, 0xdc450u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2330u)));
    // 0dc455  add dword ptr [0xb02fe], eax
    X86_AT(c, 0xdc455u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB02FEu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0dc45b  call 0xcc628
    X86_AT(c, 0xdc45bu);
    push32(c, 0xdc460u); x86_call_known(c, 0xcc628u, f_000cc628); X86_RET(c, 0xdc460u);
    X86_TICK(c, 2);
    // 0dc460  add esp, 0x18
    X86_AT(c, 0xdc460u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_dc463:
    X86_TICK(c, 9);
    // 0dc463  mov dword ptr [0xb52f8], 0
    X86_AT(c, 0xdc463u);
    wr32((c.sbase[3] + (uint32_t)(0xB52F8u)), 0x0u);
    // 0dc46d  jmp 0xdc4a5
    X86_AT(c, 0xdc46du);
    goto L_dc4a5;
L_dc46f:
    X86_TICK(c, 7);
    // 0dc46f  call 0xdbf3c
    X86_AT(c, 0xdc46fu);
    push32(c, 0xdc474u); x86_call_known(c, 0xdbf3cu, f_000dbf3c); X86_RET(c, 0xdc474u);
    X86_TICK(c, 27);
    // 0dc474  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xdc474u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0dc479  shl eax, 8
    X86_AT(c, 0xdc479u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0dc47c  mov edx, dword ptr [0xb2308]
    X86_AT(c, 0xdc47cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0dc482  shl edx, 4
    X86_AT(c, 0xdc482u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0dc485  add edx, eax
    X86_AT(c, 0xdc485u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dc487  mov dword ptr [edx + 0xb2338], 0xffffffff
    X86_AT(c, 0xdc487u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2338u)), 0xFFFFFFFFu);
    // 0dc491  push 0xcebc
    X86_AT(c, 0xdc491u);
    { uint32_t v = 0xCEBCu; push32(c, v); }
    // 0dc496  call 0xcc7bc
    X86_AT(c, 0xdc496u);
    push32(c, 0xdc49bu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdc49bu);
    X86_TICK(c, 9);
    // 0dc49b  push 2
    X86_AT(c, 0xdc49bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0dc49d  call 0xc71e0
    X86_AT(c, 0xdc49du);
    push32(c, 0xdc4a2u); x86_call_known(c, 0xc71e0u, f_000c71e0); X86_RET(c, 0xdc4a2u);
    X86_TICK(c, 2);
    // 0dc4a2  add esp, 8
    X86_AT(c, 0xdc4a2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_dc4a5:
    X86_TICK(c, 10);
    // 0dc4a5  ret 
    X86_AT(c, 0xdc4a5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdc3e4u, "ran off the end of a function");
}
void f_000dc4a8(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0dc4a8  inc dword ptr [0xb2328]
    X86_AT(c, 0xdc4a8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB2328u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dc4ae  push 0xcee4
    X86_AT(c, 0xdc4aeu);
    { uint32_t v = 0xCEE4u; push32(c, v); }
    // 0dc4b3  call 0xcc7bc
    X86_AT(c, 0xdc4b3u);
    push32(c, 0xdc4b8u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdc4b8u);
    X86_TICK(c, 7);
    // 0dc4b8  call 0xdbf3c
    X86_AT(c, 0xdc4b8u);
    push32(c, 0xdc4bdu); x86_call_known(c, 0xdbf3cu, f_000dbf3c); X86_RET(c, 0xdc4bdu);
    X86_TICK(c, 9);
    // 0dc4bd  push 2
    X86_AT(c, 0xdc4bdu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0dc4bf  call 0xc71e0
    X86_AT(c, 0xdc4bfu);
    push32(c, 0xdc4c4u); x86_call_known(c, 0xc71e0u, f_000c71e0); X86_RET(c, 0xdc4c4u);
    X86_TICK(c, 9);
    // 0dc4c4  push 0xcf04
    X86_AT(c, 0xdc4c4u);
    { uint32_t v = 0xCF04u; push32(c, v); }
    // 0dc4c9  call 0xcc7bc
    X86_AT(c, 0xdc4c9u);
    push32(c, 0xdc4ceu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdc4ceu);
    X86_TICK(c, 12);
    // 0dc4ce  add esp, 0xc
    X86_AT(c, 0xdc4ceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0dc4d1  ret 
    X86_AT(c, 0xdc4d1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdc4a8u, "ran off the end of a function");
}
void f_000dc4d4(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0dc4d4  push ebx
    X86_AT(c, 0xdc4d4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dc4d5  push 0xf
    X86_AT(c, 0xdc4d5u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0dc4d7  push 0xcf30
    X86_AT(c, 0xdc4d7u);
    { uint32_t v = 0xCF30u; push32(c, v); }
    // 0dc4dc  call 0xcc830
    X86_AT(c, 0xdc4dcu);
    push32(c, 0xdc4e1u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xdc4e1u);
    X86_TICK(c, 14);
    // 0dc4e1  add esp, 8
    X86_AT(c, 0xdc4e1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0dc4e4  cmp dword ptr [0xb52f8], 3
    X86_AT(c, 0xdc4e4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x3u, 0, 4);
    // 0dc4eb  je 0xdc503
    X86_AT(c, 0xdc4ebu);
    if (x86_cc(c, 4)) { goto L_dc503; }
    X86_TICK(c, 9);
    // 0dc4ed  push 0xcf48
    X86_AT(c, 0xdc4edu);
    { uint32_t v = 0xCF48u; push32(c, v); }
    // 0dc4f2  call 0xcc7bc
    X86_AT(c, 0xdc4f2u);
    push32(c, 0xdc4f7u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdc4f7u);
    X86_TICK(c, 9);
    // 0dc4f7  push 1
    X86_AT(c, 0xdc4f7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0dc4f9  call 0xc5ca4
    X86_AT(c, 0xdc4f9u);
    push32(c, 0xdc4feu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xdc4feu);
    X86_TICK(c, 9);
    // 0dc4fe  add esp, 8
    X86_AT(c, 0xdc4feu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0dc501  jmp 0xdc55e
    X86_AT(c, 0xdc501u);
    goto L_dc55e;
L_dc503:
    X86_TICK(c, 27);
    // 0dc503  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xdc503u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0dc508  shl eax, 8
    X86_AT(c, 0xdc508u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0dc50b  mov edx, dword ptr [0xb2308]
    X86_AT(c, 0xdc50bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0dc511  shl edx, 4
    X86_AT(c, 0xdc511u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0dc514  add edx, eax
    X86_AT(c, 0xdc514u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dc516  mov bl, byte ptr [edx + 0xb2334]
    X86_AT(c, 0xdc516u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u))));
    // 0dc51c  cmp bl, 0xf
    X86_AT(c, 0xdc51cu);
    (void)x86_sub(c, g8(c, 3), 0xFu, 0, 1);
    // 0dc51f  je 0xdc54d
    X86_AT(c, 0xdc51fu);
    if (x86_cc(c, 4)) { goto L_dc54d; }
    X86_TICK(c, 7);
    // 0dc521  cmp bl, 0xe
    X86_AT(c, 0xdc521u);
    (void)x86_sub(c, g8(c, 3), 0xEu, 0, 1);
    // 0dc524  je 0xdc54d
    X86_AT(c, 0xdc524u);
    if (x86_cc(c, 4)) { goto L_dc54d; }
    X86_TICK(c, 9);
    // 0dc526  push 0xcf50
    X86_AT(c, 0xdc526u);
    { uint32_t v = 0xCF50u; push32(c, v); }
    // 0dc52b  call 0xcc7bc
    X86_AT(c, 0xdc52bu);
    push32(c, 0xdc530u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdc530u);
    X86_TICK(c, 9);
    // 0dc530  push 1
    X86_AT(c, 0xdc530u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0dc532  call 0xc5ca4
    X86_AT(c, 0xdc532u);
    push32(c, 0xdc537u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xdc537u);
    X86_TICK(c, 9);
    // 0dc537  push 0xcf64
    X86_AT(c, 0xdc537u);
    { uint32_t v = 0xCF64u; push32(c, v); }
    // 0dc53c  call 0xcc7bc
    X86_AT(c, 0xdc53cu);
    push32(c, 0xdc541u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdc541u);
    X86_TICK(c, 9);
    // 0dc541  push 7
    X86_AT(c, 0xdc541u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dc543  call 0xca3cc
    X86_AT(c, 0xdc543u);
    push32(c, 0xdc548u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xdc548u);
    X86_TICK(c, 9);
    // 0dc548  add esp, 0x10
    X86_AT(c, 0xdc548u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0dc54b  jmp 0xdc55e
    X86_AT(c, 0xdc54bu);
    goto L_dc55e;
L_dc54d:
    X86_TICK(c, 7);
    // 0dc54d  cmp bl, 0xf
    X86_AT(c, 0xdc54du);
    (void)x86_sub(c, g8(c, 3), 0xFu, 0, 1);
    // 0dc550  jne 0xdc559
    X86_AT(c, 0xdc550u);
    if (x86_cc(c, 5)) { goto L_dc559; }
    X86_TICK(c, 7);
    // 0dc552  call 0xdc3e4
    X86_AT(c, 0xdc552u);
    push32(c, 0xdc557u); x86_call_known(c, 0xdc3e4u, f_000dc3e4); X86_RET(c, 0xdc557u);
    X86_TICK(c, 7);
    // 0dc557  jmp 0xdc55e
    X86_AT(c, 0xdc557u);
    goto L_dc55e;
L_dc559:
    X86_TICK(c, 7);
    // 0dc559  call 0xdc4a8
    X86_AT(c, 0xdc559u);
    push32(c, 0xdc55eu); x86_call_known(c, 0xdc4a8u, f_000dc4a8); X86_RET(c, 0xdc55eu);
L_dc55e:
    X86_TICK(c, 16);
    // 0dc55e  mov al, 4
    X86_AT(c, 0xdc55eu);
    s8(c, 0, 0x4u);
    // 0dc560  pop ebx
    X86_AT(c, 0xdc560u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dc561  ret 
    X86_AT(c, 0xdc561u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdc4d4u, "ran off the end of a function");
}
void f_000dc564(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0dc564  push ebp
    X86_AT(c, 0xdc564u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dc565  mov ebp, esp
    X86_AT(c, 0xdc565u);
    c.r[5] = c.r[4];
    // 0dc567  push eax
    X86_AT(c, 0xdc567u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0dc568  push ebx
    X86_AT(c, 0xdc568u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dc569  push edi
    X86_AT(c, 0xdc569u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc56a  sub edi, edi
    X86_AT(c, 0xdc56au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0dc56c  mov ebx, edi
    X86_AT(c, 0xdc56cu);
    c.r[3] = c.r[7];
    // 0dc56e  cmp edi, dword ptr [0xb02fe]
    X86_AT(c, 0xdc56eu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0, 4);
    // 0dc574  jge 0xdc57e
    X86_AT(c, 0xdc574u);
    if (x86_cc(c, 13)) { goto L_dc57e; }
    X86_TICK(c, 11);
    // 0dc576  cmp edi, dword ptr [0xb0322]
    X86_AT(c, 0xdc576u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xB0322u))), 0, 4);
    // 0dc57c  jl 0xdc58d
    X86_AT(c, 0xdc57cu);
    if (x86_cc(c, 12)) { goto L_dc58d; }
L_dc57e:
    X86_TICK(c, 9);
    // 0dc57e  mov dword ptr [0xb52f8], 0
    X86_AT(c, 0xdc57eu);
    wr32((c.sbase[3] + (uint32_t)(0xB52F8u)), 0x0u);
    // 0dc588  jmp 0xdc826
    X86_AT(c, 0xdc588u);
    goto L_dc826;
L_dc58d:
    X86_TICK(c, 9);
    // 0dc58d  push 7
    X86_AT(c, 0xdc58du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dc58f  call 0xca0a0
    X86_AT(c, 0xdc58fu);
    push32(c, 0xdc594u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xdc594u);
    X86_TICK(c, 2);
    // 0dc594  add esp, 4
    X86_AT(c, 0xdc594u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_dc597:
    X86_TICK(c, 9);
    // 0dc597  push 7
    X86_AT(c, 0xdc597u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dc599  call 0xcad80
    X86_AT(c, 0xdc599u);
    push32(c, 0xdc59eu); x86_call_known(c, 0xcad80u, f_000cad80); X86_RET(c, 0xdc59eu);
    X86_TICK(c, 9);
    // 0dc59e  push 7
    X86_AT(c, 0xdc59eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0dc5a0  call 0xc7dc8
    X86_AT(c, 0xdc5a0u);
    push32(c, 0xdc5a5u); x86_call_known(c, 0xc7dc8u, f_000c7dc8); X86_RET(c, 0xdc5a5u);
    X86_TICK(c, 18);
    // 0dc5a5  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xdc5a5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0dc5a8  inc edi
    X86_AT(c, 0xdc5a8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dc5a9  add esp, 8
    X86_AT(c, 0xdc5a9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0dc5ac  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0xdc5acu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0dc5b0  jne 0xdc5ba
    X86_AT(c, 0xdc5b0u);
    if (x86_cc(c, 5)) { goto L_dc5ba; }
    X86_TICK(c, 7);
    // 0dc5b2  cmp edi, 0x5dc
    X86_AT(c, 0xdc5b2u);
    (void)x86_sub(c, c.r[7], 0x5DCu, 0, 4);
    // 0dc5b8  jl 0xdc597
    X86_AT(c, 0xdc5b8u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xdc597u); goto L_dc597; }
L_dc5ba:
    X86_TICK(c, 12);
    // 0dc5ba  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0xdc5bau);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0dc5be  jne 0xdc5c4
    X86_AT(c, 0xdc5beu);
    if (x86_cc(c, 5)) { goto L_dc5c4; }
    X86_TICK(c, 2);
    // 0dc5c0  mov byte ptr [ebp - 1], 0x20
    X86_AT(c, 0xdc5c0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x20u);
L_dc5c4:
    X86_TICK(c, 13);
    // 0dc5c4  movzx edx, byte ptr [ebp - 1]
    X86_AT(c, 0xdc5c4u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)));
    // 0dc5c8  cmp edx, 0x5a
    X86_AT(c, 0xdc5c8u);
    (void)x86_sub(c, c.r[2], 0x5Au, 0, 4);
    // 0dc5cb  ja 0xdc82a
    X86_AT(c, 0xdc5cbu);
    if (x86_cc(c, 7)) { goto L_dc82a; }
    X86_TICK(c, 7);
    // 0dc5d1  jmp dword ptr cs:[edx*4 + 0xdc5d9]
    X86_AT(c, 0xdc5d1u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xDC5D9u)));
      switch (t) {
      case 0xdc745u: goto L_dc745;
      case 0xdc74cu: goto L_dc74c;
      case 0xdc753u: goto L_dc753;
      case 0xdc75au: goto L_dc75a;
      case 0xdc761u: goto L_dc761;
      case 0xdc772u: goto L_dc772;
      case 0xdc77cu: goto L_dc77c;
      case 0xdc786u: goto L_dc786;
      case 0xdc790u: goto L_dc790;
      case 0xdc79au: goto L_dc79a;
      case 0xdc7a4u: goto L_dc7a4;
      case 0xdc7aeu: goto L_dc7ae;
      case 0xdc7b8u: goto L_dc7b8;
      case 0xdc7c2u: goto L_dc7c2;
      case 0xdc7cau: goto L_dc7ca;
      case 0xdc7d1u: goto L_dc7d1;
      case 0xdc7d8u: goto L_dc7d8;
      case 0xdc7dfu: goto L_dc7df;
      case 0xdc7e6u: goto L_dc7e6;
      case 0xdc7edu: goto L_dc7ed;
      case 0xdc7f4u: goto L_dc7f4;
      case 0xdc7fbu: goto L_dc7fb;
      case 0xdc802u: goto L_dc802;
      case 0xdc809u: goto L_dc809;
      case 0xdc810u: goto L_dc810;
      case 0xdc821u: goto L_dc821;
      case 0xdc82au: goto L_dc82a;
      default: x86_jump(c, t); return; } }
L_dc745:
    X86_TICK(c, 9);
    // 0dc745  mov bl, 2
    X86_AT(c, 0xdc745u);
    s8(c, 3, 0x2u);
    // 0dc747  jmp 0xdc840
    X86_AT(c, 0xdc747u);
    goto L_dc840;
L_dc74c:
    X86_TICK(c, 9);
    // 0dc74c  mov bl, 1
    X86_AT(c, 0xdc74cu);
    s8(c, 3, 0x1u);
    // 0dc74e  jmp 0xdc840
    X86_AT(c, 0xdc74eu);
    goto L_dc840;
L_dc753:
    X86_TICK(c, 9);
    // 0dc753  sub ebx, ebx
    X86_AT(c, 0xdc753u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0dc755  jmp 0xdc840
    X86_AT(c, 0xdc755u);
    goto L_dc840;
L_dc75a:
    X86_TICK(c, 9);
    // 0dc75a  mov bl, 3
    X86_AT(c, 0xdc75au);
    s8(c, 3, 0x3u);
    // 0dc75c  jmp 0xdc840
    X86_AT(c, 0xdc75cu);
    goto L_dc840;
L_dc761:
    X86_TICK(c, 9);
    // 0dc761  push 0xffffffff
    X86_AT(c, 0xdc761u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0dc763  call 0xcf580
    X86_AT(c, 0xdc763u);
    push32(c, 0xdc768u); x86_call_known(c, 0xcf580u, f_000cf580); X86_RET(c, 0xdc768u);
    X86_TICK(c, 11);
    // 0dc768  mov bl, 4
    X86_AT(c, 0xdc768u);
    s8(c, 3, 0x4u);
    // 0dc76a  add esp, 4
    X86_AT(c, 0xdc76au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dc76d  jmp 0xdc840
    X86_AT(c, 0xdc76du);
    goto L_dc840;
L_dc772:
    X86_TICK(c, 7);
    // 0dc772  call 0xcc9e0
    X86_AT(c, 0xdc772u);
    push32(c, 0xdc777u); x86_call_known(c, 0xcc9e0u, f_000cc9e0); X86_RET(c, 0xdc777u);
    X86_TICK(c, 7);
    // 0dc777  jmp 0xdc826
    X86_AT(c, 0xdc777u);
    goto L_dc826;
L_dc77c:
    X86_TICK(c, 7);
    // 0dc77c  call 0xcd1a8
    X86_AT(c, 0xdc77cu);
    push32(c, 0xdc781u); x86_call_known(c, 0xcd1a8u, f_000cd1a8); X86_RET(c, 0xdc781u);
    X86_TICK(c, 7);
    // 0dc781  jmp 0xdc826
    X86_AT(c, 0xdc781u);
    goto L_dc826;
L_dc786:
    X86_TICK(c, 7);
    // 0dc786  call 0xcd824
    X86_AT(c, 0xdc786u);
    push32(c, 0xdc78bu); x86_call_known(c, 0xcd824u, f_000cd824); X86_RET(c, 0xdc78bu);
    X86_TICK(c, 7);
    // 0dc78b  jmp 0xdc826
    X86_AT(c, 0xdc78bu);
    goto L_dc826;
L_dc790:
    X86_TICK(c, 7);
    // 0dc790  call 0xd4c30
    X86_AT(c, 0xdc790u);
    push32(c, 0xdc795u); x86_call_known(c, 0xd4c30u, f_000d4c30); X86_RET(c, 0xdc795u);
    X86_TICK(c, 7);
    // 0dc795  jmp 0xdc826
    X86_AT(c, 0xdc795u);
    goto L_dc826;
L_dc79a:
    X86_TICK(c, 7);
    // 0dc79a  call 0xcd8c0
    X86_AT(c, 0xdc79au);
    push32(c, 0xdc79fu); x86_call_known(c, 0xcd8c0u, f_000cd8c0); X86_RET(c, 0xdc79fu);
    X86_TICK(c, 7);
    // 0dc79f  jmp 0xdc826
    X86_AT(c, 0xdc79fu);
    goto L_dc826;
L_dc7a4:
    X86_TICK(c, 7);
    // 0dc7a4  call 0xcfa18
    X86_AT(c, 0xdc7a4u);
    push32(c, 0xdc7a9u); x86_call_known(c, 0xcfa18u, f_000cfa18); X86_RET(c, 0xdc7a9u);
    X86_TICK(c, 7);
    // 0dc7a9  jmp 0xdc826
    X86_AT(c, 0xdc7a9u);
    goto L_dc826;
L_dc7ae:
    X86_TICK(c, 7);
    // 0dc7ae  call 0xcd938
    X86_AT(c, 0xdc7aeu);
    push32(c, 0xdc7b3u); x86_call_known(c, 0xcd938u, f_000cd938); X86_RET(c, 0xdc7b3u);
    X86_TICK(c, 7);
    // 0dc7b3  jmp 0xdc826
    X86_AT(c, 0xdc7b3u);
    goto L_dc826;
L_dc7b8:
    X86_TICK(c, 7);
    // 0dc7b8  call 0xcd9f0
    X86_AT(c, 0xdc7b8u);
    push32(c, 0xdc7bdu); x86_call_known(c, 0xcd9f0u, f_000cd9f0); X86_RET(c, 0xdc7bdu);
    X86_TICK(c, 7);
    // 0dc7bd  jmp 0xdc826
    X86_AT(c, 0xdc7bdu);
    goto L_dc826;
L_dc7c2:
    X86_TICK(c, 7);
    // 0dc7c2  call 0xdc4d4
    X86_AT(c, 0xdc7c2u);
    push32(c, 0xdc7c7u); x86_call_known(c, 0xdc4d4u, f_000dc4d4); X86_RET(c, 0xdc7c7u);
    X86_TICK(c, 10);
    // 0dc7c7  xchg ebx, eax
    X86_AT(c, 0xdc7c7u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0dc7c8  jmp 0xdc826
    X86_AT(c, 0xdc7c8u);
    goto L_dc826;
L_dc7ca:
    X86_TICK(c, 7);
    // 0dc7ca  call 0xcfa5c
    X86_AT(c, 0xdc7cau);
    push32(c, 0xdc7cfu); x86_call_known(c, 0xcfa5cu, f_000cfa5c); X86_RET(c, 0xdc7cfu);
    X86_TICK(c, 7);
    // 0dc7cf  jmp 0xdc826
    X86_AT(c, 0xdc7cfu);
    goto L_dc826;
L_dc7d1:
    X86_TICK(c, 7);
    // 0dc7d1  call 0xcdbe8
    X86_AT(c, 0xdc7d1u);
    push32(c, 0xdc7d6u); x86_call_known(c, 0xcdbe8u, f_000cdbe8); X86_RET(c, 0xdc7d6u);
    X86_TICK(c, 7);
    // 0dc7d6  jmp 0xdc826
    X86_AT(c, 0xdc7d6u);
    goto L_dc826;
L_dc7d8:
    X86_TICK(c, 7);
    // 0dc7d8  call 0xcdfdc
    X86_AT(c, 0xdc7d8u);
    push32(c, 0xdc7ddu); x86_call_known(c, 0xcdfdcu, f_000cdfdc); X86_RET(c, 0xdc7ddu);
    X86_TICK(c, 7);
    // 0dc7dd  jmp 0xdc826
    X86_AT(c, 0xdc7ddu);
    goto L_dc826;
L_dc7df:
    X86_TICK(c, 7);
    // 0dc7df  call 0xcfc24
    X86_AT(c, 0xdc7dfu);
    push32(c, 0xdc7e4u); x86_call_known(c, 0xcfc24u, f_000cfc24); X86_RET(c, 0xdc7e4u);
    X86_TICK(c, 7);
    // 0dc7e4  jmp 0xdc826
    X86_AT(c, 0xdc7e4u);
    goto L_dc826;
L_dc7e6:
    X86_TICK(c, 7);
    // 0dc7e6  call 0xcff4c
    X86_AT(c, 0xdc7e6u);
    push32(c, 0xdc7ebu); x86_call_known(c, 0xcff4cu, f_000cff4c); X86_RET(c, 0xdc7ebu);
    X86_TICK(c, 7);
    // 0dc7eb  jmp 0xdc826
    X86_AT(c, 0xdc7ebu);
    goto L_dc826;
L_dc7ed:
    X86_TICK(c, 7);
    // 0dc7ed  call 0xd20ec
    X86_AT(c, 0xdc7edu);
    push32(c, 0xdc7f2u); x86_call_known(c, 0xd20ecu, f_000d20ec); X86_RET(c, 0xdc7f2u);
    X86_TICK(c, 7);
    // 0dc7f2  jmp 0xdc826
    X86_AT(c, 0xdc7f2u);
    goto L_dc826;
L_dc7f4:
    X86_TICK(c, 7);
    // 0dc7f4  call 0xce1d0
    X86_AT(c, 0xdc7f4u);
    push32(c, 0xdc7f9u); x86_call_known(c, 0xce1d0u, f_000ce1d0); X86_RET(c, 0xdc7f9u);
    X86_TICK(c, 7);
    // 0dc7f9  jmp 0xdc826
    X86_AT(c, 0xdc7f9u);
    goto L_dc826;
L_dc7fb:
    X86_TICK(c, 7);
    // 0dc7fb  call 0xce258
    X86_AT(c, 0xdc7fbu);
    push32(c, 0xdc800u); x86_call_known(c, 0xce258u, f_000ce258); X86_RET(c, 0xdc800u);
    X86_TICK(c, 7);
    // 0dc800  jmp 0xdc826
    X86_AT(c, 0xdc800u);
    goto L_dc826;
L_dc802:
    X86_TICK(c, 7);
    // 0dc802  call 0xce270
    X86_AT(c, 0xdc802u);
    push32(c, 0xdc807u); x86_call_known(c, 0xce270u, f_000ce270); X86_RET(c, 0xdc807u);
    X86_TICK(c, 7);
    // 0dc807  jmp 0xdc826
    X86_AT(c, 0xdc807u);
    goto L_dc826;
L_dc809:
    X86_TICK(c, 7);
    // 0dc809  call 0xce57c
    X86_AT(c, 0xdc809u);
    push32(c, 0xdc80eu); x86_call_known(c, 0xce57cu, f_000ce57c); X86_RET(c, 0xdc80eu);
    X86_TICK(c, 7);
    // 0dc80e  jmp 0xdc826
    X86_AT(c, 0xdc80eu);
    goto L_dc826;
L_dc810:
    X86_TICK(c, 7);
    // 0dc810  call 0xd238c
    X86_AT(c, 0xdc810u);
    push32(c, 0xdc815u); x86_call_known(c, 0xd238cu, f_000d238c); X86_RET(c, 0xdc815u);
    X86_TICK(c, 9);
    // 0dc815  mov dword ptr [0xbef90], 1
    X86_AT(c, 0xdc815u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x1u);
    // 0dc81f  jmp 0xdc826
    X86_AT(c, 0xdc81fu);
    goto L_dc826;
L_dc821:
    X86_TICK(c, 7);
    // 0dc821  call 0xcdcf8
    X86_AT(c, 0xdc821u);
    push32(c, 0xdc826u); x86_call_known(c, 0xcdcf8u, f_000cdcf8); X86_RET(c, 0xdc826u);
L_dc826:
    X86_TICK(c, 9);
    // 0dc826  mov bl, 4
    X86_AT(c, 0xdc826u);
    s8(c, 3, 0x4u);
    // 0dc828  jmp 0xdc840
    X86_AT(c, 0xdc828u);
    goto L_dc840;
L_dc82a:
    X86_TICK(c, 9);
    // 0dc82a  push 0xcfa4
    X86_AT(c, 0xdc82au);
    { uint32_t v = 0xCFA4u; push32(c, v); }
    // 0dc82f  call 0xcc7bc
    X86_AT(c, 0xdc82fu);
    push32(c, 0xdc834u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xdc834u);
    X86_TICK(c, 9);
    // 0dc834  push 1
    X86_AT(c, 0xdc834u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0dc836  call 0xc5ca4
    X86_AT(c, 0xdc836u);
    push32(c, 0xdc83bu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xdc83bu);
    X86_TICK(c, 4);
    // 0dc83b  mov bl, 4
    X86_AT(c, 0xdc83bu);
    s8(c, 3, 0x4u);
    // 0dc83d  add esp, 8
    X86_AT(c, 0xdc83du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_dc840:
    X86_TICK(c, 26);
    // 0dc840  mov eax, ebx
    X86_AT(c, 0xdc840u);
    c.r[0] = c.r[3];
    // 0dc842  pop edi
    X86_AT(c, 0xdc842u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc843  pop ebx
    X86_AT(c, 0xdc843u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dc844  leave 
    X86_AT(c, 0xdc844u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dc845  ret 
    X86_AT(c, 0xdc845u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdc564u, "ran off the end of a function");
}
void f_000dc826(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0dc826  mov bl, 4
    X86_AT(c, 0xdc826u);
    s8(c, 3, 0x4u);
    // 0dc828  jmp 0xdc840
    X86_AT(c, 0xdc828u);
    goto L_dc840;
L_dc840:
    X86_TICK(c, 26);
    // 0dc840  mov eax, ebx
    X86_AT(c, 0xdc840u);
    c.r[0] = c.r[3];
    // 0dc842  pop edi
    X86_AT(c, 0xdc842u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc843  pop ebx
    X86_AT(c, 0xdc843u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dc844  leave 
    X86_AT(c, 0xdc844u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dc845  ret 
    X86_AT(c, 0xdc845u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdc826u, "ran off the end of a function");
}
void f_000dc840(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0dc840  mov eax, ebx
    X86_AT(c, 0xdc840u);
    c.r[0] = c.r[3];
    // 0dc842  pop edi
    X86_AT(c, 0xdc842u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc843  pop ebx
    X86_AT(c, 0xdc843u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dc844  leave 
    X86_AT(c, 0xdc844u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dc845  ret 
    X86_AT(c, 0xdc845u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdc840u, "ran off the end of a function");
}
void f_000dc848(X86Cpu& c) {
    X86_TICK(c, 4);
    // 0dc848  mov ecx, 0x92458
    X86_AT(c, 0xdc848u);
    c.r[1] = 0x92458u;
    // 0dc84d  sub eax, eax
    X86_AT(c, 0xdc84du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_dc84f:
    X86_TICK(c, 7);
    // 0dc84f  cmp eax, 0xb
    X86_AT(c, 0xdc84fu);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0dc852  jge 0xdc85b
    X86_AT(c, 0xdc852u);
    if (x86_cc(c, 13)) { goto L_dc85b; }
    X86_TICK(c, 13);
    // 0dc854  mov byte ptr [ecx], 0x26
    X86_AT(c, 0xdc854u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x26u);
    // 0dc857  inc ecx
    X86_AT(c, 0xdc857u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0dc858  inc eax
    X86_AT(c, 0xdc858u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0dc859  jmp 0xdc84f
    X86_AT(c, 0xdc859u);
    X86_POLL(c, 0xdc84fu); goto L_dc84f;
L_dc85b:
    X86_TICK(c, 2);
    // 0dc85b  sub eax, eax
    X86_AT(c, 0xdc85bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_dc85d:
    X86_TICK(c, 7);
    // 0dc85d  cmp eax, 0xb
    X86_AT(c, 0xdc85du);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0dc860  jge 0xdc869
    X86_AT(c, 0xdc860u);
    if (x86_cc(c, 13)) { goto L_dc869; }
    X86_TICK(c, 13);
    // 0dc862  mov byte ptr [ecx], 0x27
    X86_AT(c, 0xdc862u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x27u);
    // 0dc865  inc ecx
    X86_AT(c, 0xdc865u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0dc866  inc eax
    X86_AT(c, 0xdc866u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0dc867  jmp 0xdc85d
    X86_AT(c, 0xdc867u);
    X86_POLL(c, 0xdc85du); goto L_dc85d;
L_dc869:
    X86_TICK(c, 2);
    // 0dc869  sub eax, eax
    X86_AT(c, 0xdc869u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_dc86b:
    X86_TICK(c, 7);
    // 0dc86b  cmp eax, 0xb
    X86_AT(c, 0xdc86bu);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0dc86e  jge 0xdc877
    X86_AT(c, 0xdc86eu);
    if (x86_cc(c, 13)) { goto L_dc877; }
    X86_TICK(c, 13);
    // 0dc870  mov byte ptr [ecx], 0x37
    X86_AT(c, 0xdc870u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x37u);
    // 0dc873  inc ecx
    X86_AT(c, 0xdc873u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0dc874  inc eax
    X86_AT(c, 0xdc874u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0dc875  jmp 0xdc86b
    X86_AT(c, 0xdc875u);
    X86_POLL(c, 0xdc86bu); goto L_dc86b;
L_dc877:
    X86_TICK(c, 2);
    // 0dc877  sub eax, eax
    X86_AT(c, 0xdc877u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_dc879:
    X86_TICK(c, 7);
    // 0dc879  cmp eax, 0xb
    X86_AT(c, 0xdc879u);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0dc87c  jge 0xdc885
    X86_AT(c, 0xdc87cu);
    if (x86_cc(c, 13)) { goto L_dc885; }
    X86_TICK(c, 13);
    // 0dc87e  mov byte ptr [ecx], 0
    X86_AT(c, 0xdc87eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x0u);
    // 0dc881  inc ecx
    X86_AT(c, 0xdc881u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0dc882  inc eax
    X86_AT(c, 0xdc882u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0dc883  jmp 0xdc879
    X86_AT(c, 0xdc883u);
    X86_POLL(c, 0xdc879u); goto L_dc879;
L_dc885:
    X86_TICK(c, 2);
    // 0dc885  sub eax, eax
    X86_AT(c, 0xdc885u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_dc887:
    X86_TICK(c, 7);
    // 0dc887  cmp eax, 0xb
    X86_AT(c, 0xdc887u);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0dc88a  jge 0xdc893
    X86_AT(c, 0xdc88au);
    if (x86_cc(c, 13)) { goto L_dc893; }
    X86_TICK(c, 13);
    // 0dc88c  mov byte ptr [ecx], 0
    X86_AT(c, 0xdc88cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x0u);
    // 0dc88f  inc ecx
    X86_AT(c, 0xdc88fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0dc890  inc eax
    X86_AT(c, 0xdc890u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0dc891  jmp 0xdc887
    X86_AT(c, 0xdc891u);
    X86_POLL(c, 0xdc887u); goto L_dc887;
L_dc893:
    X86_TICK(c, 2);
    // 0dc893  sub eax, eax
    X86_AT(c, 0xdc893u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_dc895:
    X86_TICK(c, 7);
    // 0dc895  cmp eax, 0xb
    X86_AT(c, 0xdc895u);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0dc898  jge 0xdc8a1
    X86_AT(c, 0xdc898u);
    if (x86_cc(c, 13)) { goto L_dc8a1; }
    X86_TICK(c, 13);
    // 0dc89a  mov byte ptr [ecx], 0
    X86_AT(c, 0xdc89au);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x0u);
    // 0dc89d  inc ecx
    X86_AT(c, 0xdc89du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0dc89e  inc eax
    X86_AT(c, 0xdc89eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0dc89f  jmp 0xdc895
    X86_AT(c, 0xdc89fu);
    X86_POLL(c, 0xdc895u); goto L_dc895;
L_dc8a1:
    X86_TICK(c, 2);
    // 0dc8a1  sub eax, eax
    X86_AT(c, 0xdc8a1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_dc8a3:
    X86_TICK(c, 7);
    // 0dc8a3  cmp eax, 0xb
    X86_AT(c, 0xdc8a3u);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0dc8a6  jge 0xdc8af
    X86_AT(c, 0xdc8a6u);
    if (x86_cc(c, 13)) { goto L_dc8af; }
    X86_TICK(c, 13);
    // 0dc8a8  mov byte ptr [ecx], 7
    X86_AT(c, 0xdc8a8u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x7u);
    // 0dc8ab  inc ecx
    X86_AT(c, 0xdc8abu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0dc8ac  inc eax
    X86_AT(c, 0xdc8acu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0dc8ad  jmp 0xdc8a3
    X86_AT(c, 0xdc8adu);
    X86_POLL(c, 0xdc8a3u); goto L_dc8a3;
L_dc8af:
    X86_TICK(c, 2);
    // 0dc8af  sub eax, eax
    X86_AT(c, 0xdc8afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_dc8b1:
    X86_TICK(c, 7);
    // 0dc8b1  cmp eax, 0xb
    X86_AT(c, 0xdc8b1u);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0dc8b4  jge 0xdc8bd
    X86_AT(c, 0xdc8b4u);
    if (x86_cc(c, 13)) { goto L_dc8bd; }
    X86_TICK(c, 13);
    // 0dc8b6  mov byte ptr [ecx], 6
    X86_AT(c, 0xdc8b6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x6u);
    // 0dc8b9  inc ecx
    X86_AT(c, 0xdc8b9u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0dc8ba  inc eax
    X86_AT(c, 0xdc8bau);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0dc8bb  jmp 0xdc8b1
    X86_AT(c, 0xdc8bbu);
    X86_POLL(c, 0xdc8b1u); goto L_dc8b1;
L_dc8bd:
    X86_TICK(c, 2);
    // 0dc8bd  sub eax, eax
    X86_AT(c, 0xdc8bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_dc8bf:
    X86_TICK(c, 7);
    // 0dc8bf  cmp eax, 0xb
    X86_AT(c, 0xdc8bfu);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0dc8c2  jge 0xdc8cb
    X86_AT(c, 0xdc8c2u);
    if (x86_cc(c, 13)) { goto L_dc8cb; }
    X86_TICK(c, 13);
    // 0dc8c4  mov byte ptr [ecx], 5
    X86_AT(c, 0xdc8c4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x5u);
    // 0dc8c7  inc ecx
    X86_AT(c, 0xdc8c7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0dc8c8  inc eax
    X86_AT(c, 0xdc8c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0dc8c9  jmp 0xdc8bf
    X86_AT(c, 0xdc8c9u);
    X86_POLL(c, 0xdc8bfu); goto L_dc8bf;
L_dc8cb:
    X86_TICK(c, 2);
    // 0dc8cb  sub eax, eax
    X86_AT(c, 0xdc8cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_dc8cd:
    X86_TICK(c, 7);
    // 0dc8cd  cmp eax, 0xb
    X86_AT(c, 0xdc8cdu);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0dc8d0  jge 0xdc8d9
    X86_AT(c, 0xdc8d0u);
    if (x86_cc(c, 13)) { goto L_dc8d9; }
    X86_TICK(c, 13);
    // 0dc8d2  mov byte ptr [ecx], 4
    X86_AT(c, 0xdc8d2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x4u);
    // 0dc8d5  inc ecx
    X86_AT(c, 0xdc8d5u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0dc8d6  inc eax
    X86_AT(c, 0xdc8d6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0dc8d7  jmp 0xdc8cd
    X86_AT(c, 0xdc8d7u);
    X86_POLL(c, 0xdc8cdu); goto L_dc8cd;
L_dc8d9:
    X86_TICK(c, 2);
    // 0dc8d9  sub eax, eax
    X86_AT(c, 0xdc8d9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_dc8db:
    X86_TICK(c, 7);
    // 0dc8db  cmp eax, 0xb
    X86_AT(c, 0xdc8dbu);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0dc8de  jge 0xdc8e7
    X86_AT(c, 0xdc8deu);
    if (x86_cc(c, 13)) { goto L_dc8e7; }
    X86_TICK(c, 13);
    // 0dc8e0  mov byte ptr [ecx], 2
    X86_AT(c, 0xdc8e0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x2u);
    // 0dc8e3  inc ecx
    X86_AT(c, 0xdc8e3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0dc8e4  inc eax
    X86_AT(c, 0xdc8e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0dc8e5  jmp 0xdc8db
    X86_AT(c, 0xdc8e5u);
    X86_POLL(c, 0xdc8dbu); goto L_dc8db;
L_dc8e7:
    X86_TICK(c, 10);
    // 0dc8e7  ret 
    X86_AT(c, 0xdc8e7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdc848u, "ran off the end of a function");
}
void f_000dc8e8(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0dc8e8  push ebp
    X86_AT(c, 0xdc8e8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dc8e9  mov ebp, esp
    X86_AT(c, 0xdc8e9u);
    c.r[5] = c.r[4];
    // 0dc8eb  sub esp, 0xc
    X86_AT(c, 0xdc8ebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0dc8ee  push ebx
    X86_AT(c, 0xdc8eeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dc8ef  push esi
    X86_AT(c, 0xdc8efu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dc8f0  push edi
    X86_AT(c, 0xdc8f0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc8f1  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xdc8f1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
    // 0dc8f8  sub eax, eax
    X86_AT(c, 0xdc8f8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0dc8fa  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xdc8fau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0dc8fd  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdc8fdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0dc900  push 0x41a00
    X86_AT(c, 0xdc900u);
    { uint32_t v = 0x41A00u; push32(c, v); }
    // 0dc905  call 0xe77d8
    X86_AT(c, 0xdc905u);
    push32(c, 0xdc90au); x86_call_known(c, 0xe77d8u, f_000e77d8); X86_RET(c, 0xdc90au);
    X86_TICK(c, 11);
    // 0dc90a  add esp, 4
    X86_AT(c, 0xdc90au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dc90d  mov dword ptr [0xb2320], eax
    X86_AT(c, 0xdc90du);
    wr32((c.sbase[3] + (uint32_t)(0xB2320u)), c.r[0]);
    // 0dc912  and eax, eax
    X86_AT(c, 0xdc912u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0dc914  jne 0xdc925
    X86_AT(c, 0xdc914u);
    if (x86_cc(c, 5)) { goto L_dc925; }
    X86_TICK(c, 9);
    // 0dc916  push 0xcfb4
    X86_AT(c, 0xdc916u);
    { uint32_t v = 0xCFB4u; push32(c, v); }
    // 0dc91b  call 0xcad60
    X86_AT(c, 0xdc91bu);
    push32(c, 0xdc920u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xdc920u);
    X86_TICK(c, 9);
    // 0dc920  add esp, 4
    X86_AT(c, 0xdc920u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dc923  jmp 0xdc997
    X86_AT(c, 0xdc923u);
    goto L_dc997;
L_dc925:
    X86_TICK(c, 42);
    // 0dc925  mov eax, dword ptr [0xb2320]
    X86_AT(c, 0xdc925u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2320u)));
    // 0dc92a  mov dword ptr [0xb2314], eax
    X86_AT(c, 0xdc92au);
    wr32((c.sbase[3] + (uint32_t)(0xB2314u)), c.r[0]);
    // 0dc92f  add eax, 0x32000
    X86_AT(c, 0xdc92fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x32000u, 0, 4); }
    // 0dc934  mov dword ptr [0xb2318], eax
    X86_AT(c, 0xdc934u);
    wr32((c.sbase[3] + (uint32_t)(0xB2318u)), c.r[0]);
    // 0dc939  add eax, 0xc800
    X86_AT(c, 0xdc939u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xC800u, 0, 4); }
    // 0dc93e  mov dword ptr [0xb231c], eax
    X86_AT(c, 0xdc93eu);
    wr32((c.sbase[3] + (uint32_t)(0xB231Cu)), c.r[0]);
    // 0dc943  lea ebx, [ebp - 0xc]
    X86_AT(c, 0xdc943u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0dc946  push ebx
    X86_AT(c, 0xdc946u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dc947  lea esi, [ebp - 8]
    X86_AT(c, 0xdc947u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0dc94a  push esi
    X86_AT(c, 0xdc94au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dc94b  lea edi, [ebp - 4]
    X86_AT(c, 0xdc94bu);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0dc94e  push edi
    X86_AT(c, 0xdc94eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc94f  push 0x32000
    X86_AT(c, 0xdc94fu);
    { uint32_t v = 0x32000u; push32(c, v); }
    // 0dc954  push dword ptr [0xb2314]
    X86_AT(c, 0xdc954u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB2314u))); push32(c, v); }
    // 0dc95a  push 0xd010
    X86_AT(c, 0xdc95au);
    { uint32_t v = 0xD010u; push32(c, v); }
    // 0dc95f  call 0xc9bc4
    X86_AT(c, 0xdc95fu);
    push32(c, 0xdc964u); x86_call_known(c, 0xc9bc4u, f_000c9bc4); X86_RET(c, 0xdc964u);
    X86_TICK(c, 22);
    // 0dc964  push ebx
    X86_AT(c, 0xdc964u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dc965  push esi
    X86_AT(c, 0xdc965u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dc966  push edi
    X86_AT(c, 0xdc966u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc967  push 0xc800
    X86_AT(c, 0xdc967u);
    { uint32_t v = 0xC800u; push32(c, v); }
    // 0dc96c  push dword ptr [0xb2318]
    X86_AT(c, 0xdc96cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB2318u))); push32(c, v); }
    // 0dc972  push 0xd024
    X86_AT(c, 0xdc972u);
    { uint32_t v = 0xD024u; push32(c, v); }
    // 0dc977  call 0xc9bc4
    X86_AT(c, 0xdc977u);
    push32(c, 0xdc97cu); x86_call_known(c, 0xc9bc4u, f_000c9bc4); X86_RET(c, 0xdc97cu);
    X86_TICK(c, 22);
    // 0dc97c  push ebx
    X86_AT(c, 0xdc97cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dc97d  push esi
    X86_AT(c, 0xdc97du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dc97e  push edi
    X86_AT(c, 0xdc97eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc97f  push 0x3200
    X86_AT(c, 0xdc97fu);
    { uint32_t v = 0x3200u; push32(c, v); }
    // 0dc984  push dword ptr [0xb231c]
    X86_AT(c, 0xdc984u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB231Cu))); push32(c, v); }
    // 0dc98a  push 0xd038
    X86_AT(c, 0xdc98au);
    { uint32_t v = 0xD038u; push32(c, v); }
    // 0dc98f  call 0xc9bc4
    X86_AT(c, 0xdc98fu);
    push32(c, 0xdc994u); x86_call_known(c, 0xc9bc4u, f_000c9bc4); X86_RET(c, 0xdc994u);
    X86_TICK(c, 2);
    // 0dc994  add esp, 0x48
    X86_AT(c, 0xdc994u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
L_dc997:
    X86_TICK(c, 28);
    // 0dc997  pop edi
    X86_AT(c, 0xdc997u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dc998  pop esi
    X86_AT(c, 0xdc998u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dc999  pop ebx
    X86_AT(c, 0xdc999u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dc99a  leave 
    X86_AT(c, 0xdc99au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dc99b  ret 
    X86_AT(c, 0xdc99bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdc8e8u, "ran off the end of a function");
}
void f_000dc99c(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0dc99c  push ebp
    X86_AT(c, 0xdc99cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dc99d  mov ebp, esp
    X86_AT(c, 0xdc99du);
    c.r[5] = c.r[4];
    // 0dc99f  sub esp, 0xc
    X86_AT(c, 0xdc99fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0dc9a2  push ebx
    X86_AT(c, 0xdc9a2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dc9a3  push esi
    X86_AT(c, 0xdc9a3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dc9a4  push edi
    X86_AT(c, 0xdc9a4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dc9a5  call 0xdb23c
    X86_AT(c, 0xdc9a5u);
    push32(c, 0xdc9aau); x86_call_known(c, 0xdb23cu, f_000db23c); X86_RET(c, 0xdc9aau);
    X86_TICK(c, 9);
    // 0dc9aa  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xdc9aau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0dc9ad  call 0xdb260
    X86_AT(c, 0xdc9adu);
    push32(c, 0xdc9b2u); x86_call_known(c, 0xdb260u, f_000db260); X86_RET(c, 0xdc9b2u);
    X86_TICK(c, 36);
    // 0dc9b2  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xdc9b2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0dc9b5  sub eax, eax
    X86_AT(c, 0xdc9b5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0dc9b7  mov dword ptr [0xb2310], eax
    X86_AT(c, 0xdc9b7u);
    wr32((c.sbase[3] + (uint32_t)(0xB2310u)), c.r[0]);
    // 0dc9bc  mov dword ptr [0xb230c], eax
    X86_AT(c, 0xdc9bcu);
    wr32((c.sbase[3] + (uint32_t)(0xB230Cu)), c.r[0]);
    // 0dc9c1  mov eax, dword ptr [0xb2304]
    X86_AT(c, 0xdc9c1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2304u)));
    // 0dc9c6  shl eax, 8
    X86_AT(c, 0xdc9c6u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0dc9c9  mov edx, dword ptr [0xb2308]
    X86_AT(c, 0xdc9c9u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB2308u)));
    // 0dc9cf  shl edx, 4
    X86_AT(c, 0xdc9cfu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0dc9d2  add edx, eax
    X86_AT(c, 0xdc9d2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dc9d4  cmp dword ptr [edx + 0xb2334], 3
    X86_AT(c, 0xdc9d4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u))), 0x3u, 0, 4);
    // 0dc9db  je 0xdca3c
    X86_AT(c, 0xdc9dbu);
    if (x86_cc(c, 4)) { goto L_dca3c; }
    X86_TICK(c, 2);
    // 0dc9dd  mov edi, 1
    X86_AT(c, 0xdc9ddu);
    c.r[7] = 0x1u;
L_dc9e2:
    X86_TICK(c, 7);
    // 0dc9e2  cmp edi, 4
    X86_AT(c, 0xdc9e2u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0dc9e5  jge 0xdca71
    X86_AT(c, 0xdc9e5u);
    if (x86_cc(c, 13)) { goto L_dca71; }
    X86_TICK(c, 71);
    // 0dc9eb  mov eax, edi
    X86_AT(c, 0xdc9ebu);
    c.r[0] = c.r[7];
    // 0dc9ed  imul eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdc9edu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 4);
    // 0dc9f1  add eax, dword ptr [0xb2304]
    X86_AT(c, 0xdc9f1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB2304u))), 0, 4); }
    // 0dc9f7  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xdc9f7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0dc9fa  mov edx, edi
    X86_AT(c, 0xdc9fau);
    c.r[2] = c.r[7];
    // 0dc9fc  imul edx, dword ptr [ebp - 8]
    X86_AT(c, 0xdc9fcu);
    c.r[2] = x86_imul2(c, c.r[2], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 4);
    // 0dca00  mov esi, edx
    X86_AT(c, 0xdca00u);
    c.r[6] = c.r[2];
    // 0dca02  add esi, dword ptr [0xb2308]
    X86_AT(c, 0xdca02u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB2308u))), 0, 4); }
    // 0dca08  and eax, eax
    X86_AT(c, 0xdca08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0dca0a  jl 0xdca3c
    X86_AT(c, 0xdca0au);
    if (x86_cc(c, 12)) { goto L_dca3c; }
    X86_TICK(c, 7);
    // 0dca0c  cmp eax, 0xa
    X86_AT(c, 0xdca0cu);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0dca0f  jge 0xdca3c
    X86_AT(c, 0xdca0fu);
    if (x86_cc(c, 13)) { goto L_dca3c; }
    X86_TICK(c, 7);
    // 0dca11  and esi, esi
    X86_AT(c, 0xdca11u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0dca13  jl 0xdca3c
    X86_AT(c, 0xdca13u);
    if (x86_cc(c, 12)) { goto L_dca3c; }
    X86_TICK(c, 7);
    // 0dca15  cmp esi, 0xa
    X86_AT(c, 0xdca15u);
    (void)x86_sub(c, c.r[6], 0xAu, 0, 4);
    // 0dca18  jge 0xdca3c
    X86_AT(c, 0xdca18u);
    if (x86_cc(c, 13)) { goto L_dca3c; }
    X86_TICK(c, 25);
    // 0dca1a  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdca1au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dca1d  shl eax, 8
    X86_AT(c, 0xdca1du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0dca20  mov edx, esi
    X86_AT(c, 0xdca20u);
    c.r[2] = c.r[6];
    // 0dca22  shl edx, 4
    X86_AT(c, 0xdca22u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0dca25  add edx, eax
    X86_AT(c, 0xdca25u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dca27  mov ebx, dword ptr [edx + 0xb2334]
    X86_AT(c, 0xdca27u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2334u)));
    // 0dca2d  cmp ebx, 2
    X86_AT(c, 0xdca2du);
    (void)x86_sub(c, c.r[3], 0x2u, 0, 4);
    // 0dca30  je 0xdca3c
    X86_AT(c, 0xdca30u);
    if (x86_cc(c, 4)) { goto L_dca3c; }
    X86_TICK(c, 7);
    // 0dca32  cmp ebx, 3
    X86_AT(c, 0xdca32u);
    (void)x86_sub(c, c.r[3], 0x3u, 0, 4);
    // 0dca35  je 0xdca3c
    X86_AT(c, 0xdca35u);
    if (x86_cc(c, 4)) { goto L_dca3c; }
    X86_TICK(c, 7);
    // 0dca37  cmp ebx, 1
    X86_AT(c, 0xdca37u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 0dca3a  jne 0xdca43
    X86_AT(c, 0xdca3au);
    if (x86_cc(c, 5)) { goto L_dca43; }
L_dca3c:
    X86_TICK(c, 9);
    // 0dca3c  mov eax, 0xffffffff
    X86_AT(c, 0xdca3cu);
    c.r[0] = 0xFFFFFFFFu;
    // 0dca41  jmp 0xdca71
    X86_AT(c, 0xdca41u);
    goto L_dca71;
L_dca43:
    X86_TICK(c, 25);
    // 0dca43  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdca43u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dca46  shl eax, 8
    X86_AT(c, 0xdca46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0dca49  mov edx, esi
    X86_AT(c, 0xdca49u);
    c.r[2] = c.r[6];
    // 0dca4b  shl edx, 4
    X86_AT(c, 0xdca4bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0dca4e  add edx, eax
    X86_AT(c, 0xdca4eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0dca50  mov ebx, dword ptr [edx + 0xb2338]
    X86_AT(c, 0xdca50u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB2338u)));
    // 0dca56  cmp ebx, 0xffffffff
    X86_AT(c, 0xdca56u);
    (void)x86_sub(c, c.r[3], 0xFFFFFFFFu, 0, 4);
    // 0dca59  je 0xdca6b
    X86_AT(c, 0xdca59u);
    if (x86_cc(c, 4)) { goto L_dca6b; }
    X86_TICK(c, 13);
    // 0dca5b  mov dword ptr [0xb2310], edi
    X86_AT(c, 0xdca5bu);
    wr32((c.sbase[3] + (uint32_t)(0xB2310u)), c.r[7]);
    // 0dca61  mov dword ptr [0xb230c], ebx
    X86_AT(c, 0xdca61u);
    wr32((c.sbase[3] + (uint32_t)(0xB230Cu)), c.r[3]);
    // 0dca67  sub eax, eax
    X86_AT(c, 0xdca67u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0dca69  jmp 0xdca71
    X86_AT(c, 0xdca69u);
    goto L_dca71;
L_dca6b:
    X86_TICK(c, 9);
    // 0dca6b  inc edi
    X86_AT(c, 0xdca6bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dca6c  jmp 0xdc9e2
    X86_AT(c, 0xdca6cu);
    X86_POLL(c, 0xdc9e2u); goto L_dc9e2;
L_dca71:
    X86_TICK(c, 28);
    // 0dca71  pop edi
    X86_AT(c, 0xdca71u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dca72  pop esi
    X86_AT(c, 0xdca72u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dca73  pop ebx
    X86_AT(c, 0xdca73u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dca74  leave 
    X86_AT(c, 0xdca74u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dca75  ret 
    X86_AT(c, 0xdca75u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdc99cu, "ran off the end of a function");
}
void f_000dca78(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0dca78  push ebp
    X86_AT(c, 0xdca78u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dca79  mov ebp, esp
    X86_AT(c, 0xdca79u);
    c.r[5] = c.r[4];
    // 0dca7b  sub esp, 0x1c
    X86_AT(c, 0xdca7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x1Cu, 0, 4); }
    // 0dca7e  push ebx
    X86_AT(c, 0xdca7eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dca7f  push esi
    X86_AT(c, 0xdca7fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dca80  push edi
    X86_AT(c, 0xdca80u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dca81  cmp word ptr [0xb2324], 0
    X86_AT(c, 0xdca81u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xB2324u))), 0x0u, 0, 2);
    // 0dca89  jne 0xdcb99
    X86_AT(c, 0xdca89u);
    if (x86_cc(c, 5)) { goto L_dcb99; }
    X86_TICK(c, 2);
    // 0dca8f  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xdca8fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_dca96:
    X86_TICK(c, 12);
    // 0dca96  cmp dword ptr [ebp - 8], 4
    X86_AT(c, 0xdca96u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x4u, 0, 4);
    // 0dca9a  jge 0xdcb99
    X86_AT(c, 0xdca9au);
    if (x86_cc(c, 13)) { goto L_dcb99; }
    X86_TICK(c, 2);
    // 0dcaa0  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xdcaa0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_dcaa7:
    X86_TICK(c, 12);
    // 0dcaa7  cmp dword ptr [ebp - 0xc], 0xb
    X86_AT(c, 0xdcaa7u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0xBu, 0, 4);
    // 0dcaab  jge 0xdcb86
    X86_AT(c, 0xdcaabu);
    if (x86_cc(c, 13)) { goto L_dcb86; }
    X86_TICK(c, 2);
    // 0dcab1  sub esi, esi
    X86_AT(c, 0xdcab1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_dcab3:
    X86_TICK(c, 7);
    // 0dcab3  cmp esi, 0xb
    X86_AT(c, 0xdcab3u);
    (void)x86_sub(c, c.r[6], 0xBu, 0, 4);
    // 0dcab6  jge 0xdcb7e
    X86_AT(c, 0xdcab6u);
    if (x86_cc(c, 13)) { goto L_dcb7e; }
    X86_TICK(c, 33);
    // 0dcabc  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xdcabcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0dcabf  lea edx, [eax + eax*4]
    X86_AT(c, 0xdcabfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0dcac2  lea edx, [edx + edx*2]
    X86_AT(c, 0xdcac2u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0dcac5  lea edx, [eax + edx*8]
    X86_AT(c, 0xdcac5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0dcac8  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdcac8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dcacb  lea ecx, [eax + eax*8]
    X86_AT(c, 0xdcacbu);
    c.r[1] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0dcace  lea eax, [ecx + eax*2]
    X86_AT(c, 0xdcaceu);
    c.r[0] = (uint32_t)(c.r[1] + c.r[0] * 2);
    // 0dcad1  add eax, edx
    X86_AT(c, 0xdcad1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0dcad3  add eax, esi
    X86_AT(c, 0xdcad3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 0dcad5  mov al, byte ptr [eax + 0xb3b0c]
    X86_AT(c, 0xdcad5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB3B0Cu))));
    // 0dcadb  and al, al
    X86_AT(c, 0xdcadbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0dcadd  je 0xdcb78
    X86_AT(c, 0xdcaddu);
    if (x86_cc(c, 4)) { goto L_dcb78; }
    X86_TICK(c, 60);
    // 0dcae3  mov edx, esi
    X86_AT(c, 0xdcae3u);
    c.r[2] = c.r[6];
    // 0dcae5  shl edx, 5
    X86_AT(c, 0xdcae5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0dcae8  mov byte ptr [ebp - 0x18], al
    X86_AT(c, 0xdcae8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), g8(c, 0));
    // 0dcaeb  xchg edx, eax
    X86_AT(c, 0xdcaebu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0dcaec  cdq 
    X86_AT(c, 0xdcaecu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0dcaed  sub eax, edx
    X86_AT(c, 0xdcaedu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0dcaef  sar eax, 1
    X86_AT(c, 0xdcaefu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0dcaf1  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdcaf1u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dcaf4  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xdcaf4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0dcaf7  lea eax, [edx + edx*4]
    X86_AT(c, 0xdcaf7u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0dcafa  lea eax, [edx + eax*2]
    X86_AT(c, 0xdcafau);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0dcafd  shl eax, 0xa
    X86_AT(c, 0xdcafdu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[0] = r; }
    // 0dcb00  cdq 
    X86_AT(c, 0xdcb00u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0dcb01  sub eax, edx
    X86_AT(c, 0xdcb01u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0dcb03  sar eax, 1
    X86_AT(c, 0xdcb03u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0dcb05  add eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xdcb05u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0, 4); }
    // 0dcb08  lea ebx, [eax*1 + 0x92550]
    X86_AT(c, 0xdcb08u);
    c.r[3] = (uint32_t)(c.r[0] + 0x92550u);
    // 0dcb0f  movzx eax, byte ptr [ebp - 0x18]
    X86_AT(c, 0xdcb0fu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0dcb13  shl eax, 9
    X86_AT(c, 0xdcb13u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0dcb16  add eax, 0x76bf8
    X86_AT(c, 0xdcb16u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x76BF8u, 0, 4); }
    // 0dcb1b  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xdcb1bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0dcb1e  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xdcb1eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_dcb25:
    X86_TICK(c, 12);
    // 0dcb25  cmp dword ptr [ebp - 4], 0x20
    X86_AT(c, 0xdcb25u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x20u, 0, 4);
    // 0dcb29  jge 0xdcb78
    X86_AT(c, 0xdcb29u);
    if (x86_cc(c, 13)) { goto L_dcb78; }
    X86_TICK(c, 2);
    // 0dcb2b  sub edi, edi
    X86_AT(c, 0xdcb2bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_dcb2d:
    X86_TICK(c, 7);
    // 0dcb2d  cmp edi, 0x10
    X86_AT(c, 0xdcb2du);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0dcb30  jge 0xdcb6d
    X86_AT(c, 0xdcb30u);
    if (x86_cc(c, 13)) { goto L_dcb6d; }
    X86_TICK(c, 19);
    // 0dcb32  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xdcb32u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0dcb35  mov al, byte ptr [eax]
    X86_AT(c, 0xdcb35u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0dcb37  and al, 0xf
    X86_AT(c, 0xdcb37u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0dcb39  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xdcb39u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
    // 0dcb3c  and al, al
    X86_AT(c, 0xdcb3cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0dcb3e  jne 0xdcb48
    X86_AT(c, 0xdcb3eu);
    if (x86_cc(c, 5)) { goto L_dcb48; }
    X86_TICK(c, 8);
    // 0dcb40  mov al, byte ptr [ebx + edi*1]
    X86_AT(c, 0xdcb40u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + c.r[7]))));
    // 0dcb43  and al, 0xf
    X86_AT(c, 0xdcb43u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0dcb45  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xdcb45u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
L_dcb48:
    X86_TICK(c, 25);
    // 0dcb48  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xdcb48u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0dcb4b  inc dword ptr [ebp - 0x14]
    X86_AT(c, 0xdcb4bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dcb4e  mov al, byte ptr [eax]
    X86_AT(c, 0xdcb4eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0dcb50  and al, 0xf0
    X86_AT(c, 0xdcb50u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0dcb52  mov byte ptr [ebp - 0xe], al
    X86_AT(c, 0xdcb52u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), g8(c, 0));
    // 0dcb55  and al, al
    X86_AT(c, 0xdcb55u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0dcb57  jne 0xdcb61
    X86_AT(c, 0xdcb57u);
    if (x86_cc(c, 5)) { goto L_dcb61; }
    X86_TICK(c, 8);
    // 0dcb59  mov al, byte ptr [ebx + edi*1]
    X86_AT(c, 0xdcb59u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + c.r[7]))));
    // 0dcb5c  and al, 0xf0
    X86_AT(c, 0xdcb5cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0dcb5e  mov byte ptr [ebp - 0xe], al
    X86_AT(c, 0xdcb5eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), g8(c, 0));
L_dcb61:
    X86_TICK(c, 21);
    // 0dcb61  mov al, byte ptr [ebp - 0xd]
    X86_AT(c, 0xdcb61u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))));
    // 0dcb64  add al, byte ptr [ebp - 0xe]
    X86_AT(c, 0xdcb64u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0, 1)); }
    // 0dcb67  mov byte ptr [ebx + edi*1], al
    X86_AT(c, 0xdcb67u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + c.r[7])), g8(c, 0));
    // 0dcb6a  inc edi
    X86_AT(c, 0xdcb6au);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dcb6b  jmp 0xdcb2d
    X86_AT(c, 0xdcb6bu);
    X86_POLL(c, 0xdcb2du); goto L_dcb2d;
L_dcb6d:
    X86_TICK(c, 15);
    // 0dcb6d  inc dword ptr [ebp - 4]
    X86_AT(c, 0xdcb6du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dcb70  add ebx, 0xb0
    X86_AT(c, 0xdcb70u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0xB0u, 0, 4); }
    // 0dcb76  jmp 0xdcb25
    X86_AT(c, 0xdcb76u);
    X86_POLL(c, 0xdcb25u); goto L_dcb25;
L_dcb78:
    X86_TICK(c, 9);
    // 0dcb78  inc esi
    X86_AT(c, 0xdcb78u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0dcb79  jmp 0xdcab3
    X86_AT(c, 0xdcb79u);
    X86_POLL(c, 0xdcab3u); goto L_dcab3;
L_dcb7e:
    X86_TICK(c, 13);
    // 0dcb7e  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xdcb7eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dcb81  jmp 0xdcaa7
    X86_AT(c, 0xdcb81u);
    X86_POLL(c, 0xdcaa7u); goto L_dcaa7;
L_dcb86:
    X86_TICK(c, 12);
    // 0dcb86  push dword ptr [ebp - 8]
    X86_AT(c, 0xdcb86u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0dcb89  call 0xdcba4
    X86_AT(c, 0xdcb89u);
    push32(c, 0xdcb8eu); x86_call_known(c, 0xdcba4u, f_000dcba4); X86_RET(c, 0xdcb8eu);
    X86_TICK(c, 15);
    // 0dcb8e  inc dword ptr [ebp - 8]
    X86_AT(c, 0xdcb8eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dcb91  add esp, 4
    X86_AT(c, 0xdcb91u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dcb94  jmp 0xdca96
    X86_AT(c, 0xdcb94u);
    X86_POLL(c, 0xdca96u); goto L_dca96;
L_dcb99:
    X86_TICK(c, 28);
    // 0dcb99  pop edi
    X86_AT(c, 0xdcb99u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dcb9a  pop esi
    X86_AT(c, 0xdcb9au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dcb9b  pop ebx
    X86_AT(c, 0xdcb9bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dcb9c  leave 
    X86_AT(c, 0xdcb9cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dcb9d  ret 
    X86_AT(c, 0xdcb9du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdca78u, "ran off the end of a function");
}
void f_000dcba4(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0dcba4  push ebp
    X86_AT(c, 0xdcba4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dcba5  mov ebp, esp
    X86_AT(c, 0xdcba5u);
    c.r[5] = c.r[4];
    // 0dcba7  sub esp, 0xc
    X86_AT(c, 0xdcba7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0dcbaa  push ebx
    X86_AT(c, 0xdcbaau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dcbab  push esi
    X86_AT(c, 0xdcbabu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dcbac  push edi
    X86_AT(c, 0xdcbacu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dcbad  push 2
    X86_AT(c, 0xdcbadu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0dcbaf  call 0xca3cc
    X86_AT(c, 0xdcbafu);
    push32(c, 0xdcbb4u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xdcbb4u);
    X86_TICK(c, 13);
    // 0dcbb4  add esp, 4
    X86_AT(c, 0xdcbb4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0dcbb7  mov eax, dword ptr [0xb2310]
    X86_AT(c, 0xdcbb7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB2310u)));
    // 0dcbbc  and eax, eax
    X86_AT(c, 0xdcbbcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0dcbbe  je 0xdcd3d
    X86_AT(c, 0xdcbbeu);
    if (x86_cc(c, 4)) { goto L_dcd3d; }
    X86_TICK(c, 15);
    // 0dcbc4  mov edx, 3
    X86_AT(c, 0xdcbc4u);
    c.r[2] = 0x3u;
    // 0dcbc9  sub edx, dword ptr [ebp + 8]
    X86_AT(c, 0xdcbc9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 0dcbcc  cmp edx, eax
    X86_AT(c, 0xdcbccu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0dcbce  jne 0xdcd3d
    X86_AT(c, 0xdcbceu);
    if (x86_cc(c, 5)) { goto L_dcd3d; }
    X86_TICK(c, 10);
    // 0dcbd4  xchg edx, eax
    X86_AT(c, 0xdcbd4u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0dcbd5  cmp edx, 1
    X86_AT(c, 0xdcbd5u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0dcbd8  je 0xdcbf1
    X86_AT(c, 0xdcbd8u);
    if (x86_cc(c, 4)) { goto L_dcbf1; }
    X86_TICK(c, 7);
    // 0dcbda  cmp edx, 2
    X86_AT(c, 0xdcbdau);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0dcbdd  je 0xdcc63
    X86_AT(c, 0xdcbddu);
    if (x86_cc(c, 4)) { goto L_dcc63; }
    X86_TICK(c, 7);
    // 0dcbe3  cmp edx, 3
    X86_AT(c, 0xdcbe3u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0dcbe6  je 0xdccd2
    X86_AT(c, 0xdcbe6u);
    if (x86_cc(c, 4)) { goto L_dccd2; }
    X86_TICK(c, 7);
    // 0dcbec  jmp 0xdcd3d
    X86_AT(c, 0xdcbecu);
    goto L_dcd3d;
L_dcbf1:
    X86_TICK(c, 19);
    // 0dcbf1  mov esi, 0x97284
    X86_AT(c, 0xdcbf1u);
    c.r[6] = 0x97284u;
    // 0dcbf6  mov eax, dword ptr [0xb230c]
    X86_AT(c, 0xdcbf6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB230Cu)));
    // 0dcbfb  shl eax, 0xd
    X86_AT(c, 0xdcbfbu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[0] = r; }
    // 0dcbfe  add eax, dword ptr [0xb2314]
    X86_AT(c, 0xdcbfeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB2314u))), 0, 4); }
    // 0dcc04  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xdcc04u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0dcc07  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xdcc07u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_dcc0e:
    X86_TICK(c, 12);
    // 0dcc0e  cmp dword ptr [ebp - 4], 0x80
    X86_AT(c, 0xdcc0eu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x80u, 0, 4);
    // 0dcc15  jge 0xdcd3d
    X86_AT(c, 0xdcc15u);
    if (x86_cc(c, 13)) { goto L_dcd3d; }
    X86_TICK(c, 2);
    // 0dcc1b  sub edi, edi
    X86_AT(c, 0xdcc1bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_dcc1d:
    X86_TICK(c, 7);
    // 0dcc1d  cmp edi, 0x40
    X86_AT(c, 0xdcc1du);
    (void)x86_sub(c, c.r[7], 0x40u, 0, 4);
    // 0dcc20  jge 0xdcc58
    X86_AT(c, 0xdcc20u);
    if (x86_cc(c, 13)) { goto L_dcc58; }
    X86_TICK(c, 17);
    // 0dcc22  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdcc22u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dcc25  mov bl, byte ptr [eax]
    X86_AT(c, 0xdcc25u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0dcc27  and bl, 0xf
    X86_AT(c, 0xdcc27u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xFu, 1)); }
    // 0dcc2a  and bl, bl
    X86_AT(c, 0xdcc2au);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0dcc2c  jne 0xdcc34
    X86_AT(c, 0xdcc2cu);
    if (x86_cc(c, 5)) { goto L_dcc34; }
    X86_TICK(c, 6);
    // 0dcc2e  mov bl, byte ptr [esi + edi*1]
    X86_AT(c, 0xdcc2eu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0dcc31  and bl, 0xf
    X86_AT(c, 0xdcc31u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xFu, 1)); }
L_dcc34:
    X86_TICK(c, 25);
    // 0dcc34  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdcc34u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dcc37  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xdcc37u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dcc3a  mov al, byte ptr [eax]
    X86_AT(c, 0xdcc3au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0dcc3c  and al, 0xf0
    X86_AT(c, 0xdcc3cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0dcc3e  mov byte ptr [ebp - 5], al
    X86_AT(c, 0xdcc3eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
    // 0dcc41  and al, al
    X86_AT(c, 0xdcc41u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0dcc43  jne 0xdcc4d
    X86_AT(c, 0xdcc43u);
    if (x86_cc(c, 5)) { goto L_dcc4d; }
    X86_TICK(c, 8);
    // 0dcc45  mov al, byte ptr [esi + edi*1]
    X86_AT(c, 0xdcc45u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0dcc48  and al, 0xf0
    X86_AT(c, 0xdcc48u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0dcc4a  mov byte ptr [ebp - 5], al
    X86_AT(c, 0xdcc4au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
L_dcc4d:
    X86_TICK(c, 19);
    // 0dcc4d  mov eax, ebx
    X86_AT(c, 0xdcc4du);
    c.r[0] = c.r[3];
    // 0dcc4f  add al, byte ptr [ebp - 5]
    X86_AT(c, 0xdcc4fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0, 1)); }
    // 0dcc52  mov byte ptr [esi + edi*1], al
    X86_AT(c, 0xdcc52u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7])), g8(c, 0));
    // 0dcc55  inc edi
    X86_AT(c, 0xdcc55u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dcc56  jmp 0xdcc1d
    X86_AT(c, 0xdcc56u);
    X86_POLL(c, 0xdcc1du); goto L_dcc1d;
L_dcc58:
    X86_TICK(c, 15);
    // 0dcc58  inc dword ptr [ebp - 4]
    X86_AT(c, 0xdcc58u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dcc5b  add esi, 0xb0
    X86_AT(c, 0xdcc5bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xB0u, 0, 4); }
    // 0dcc61  jmp 0xdcc0e
    X86_AT(c, 0xdcc61u);
    X86_POLL(c, 0xdcc0eu); goto L_dcc0e;
L_dcc63:
    X86_TICK(c, 19);
    // 0dcc63  mov esi, 0x98894
    X86_AT(c, 0xdcc63u);
    c.r[6] = 0x98894u;
    // 0dcc68  mov eax, dword ptr [0xb230c]
    X86_AT(c, 0xdcc68u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB230Cu)));
    // 0dcc6d  shl eax, 0xb
    X86_AT(c, 0xdcc6du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xBu, 4, w); if (w) c.r[0] = r; }
    // 0dcc70  add eax, dword ptr [0xb2318]
    X86_AT(c, 0xdcc70u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB2318u))), 0, 4); }
    // 0dcc76  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xdcc76u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0dcc79  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xdcc79u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_dcc80:
    X86_TICK(c, 12);
    // 0dcc80  cmp dword ptr [ebp - 4], 0x40
    X86_AT(c, 0xdcc80u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x40u, 0, 4);
    // 0dcc84  jge 0xdcd3d
    X86_AT(c, 0xdcc84u);
    if (x86_cc(c, 13)) { goto L_dcd3d; }
    X86_TICK(c, 2);
    // 0dcc8a  sub edi, edi
    X86_AT(c, 0xdcc8au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_dcc8c:
    X86_TICK(c, 7);
    // 0dcc8c  cmp edi, 0x20
    X86_AT(c, 0xdcc8cu);
    (void)x86_sub(c, c.r[7], 0x20u, 0, 4);
    // 0dcc8f  jge 0xdccc7
    X86_AT(c, 0xdcc8fu);
    if (x86_cc(c, 13)) { goto L_dccc7; }
    X86_TICK(c, 17);
    // 0dcc91  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdcc91u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dcc94  mov bl, byte ptr [eax]
    X86_AT(c, 0xdcc94u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0dcc96  and bl, 0xf
    X86_AT(c, 0xdcc96u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xFu, 1)); }
    // 0dcc99  and bl, bl
    X86_AT(c, 0xdcc99u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0dcc9b  jne 0xdcca3
    X86_AT(c, 0xdcc9bu);
    if (x86_cc(c, 5)) { goto L_dcca3; }
    X86_TICK(c, 6);
    // 0dcc9d  mov bl, byte ptr [esi + edi*1]
    X86_AT(c, 0xdcc9du);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0dcca0  and bl, 0xf
    X86_AT(c, 0xdcca0u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xFu, 1)); }
L_dcca3:
    X86_TICK(c, 25);
    // 0dcca3  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdcca3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dcca6  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xdcca6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dcca9  mov al, byte ptr [eax]
    X86_AT(c, 0xdcca9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0dccab  and al, 0xf0
    X86_AT(c, 0xdccabu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0dccad  mov byte ptr [ebp - 5], al
    X86_AT(c, 0xdccadu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
    // 0dccb0  and al, al
    X86_AT(c, 0xdccb0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0dccb2  jne 0xdccbc
    X86_AT(c, 0xdccb2u);
    if (x86_cc(c, 5)) { goto L_dccbc; }
    X86_TICK(c, 8);
    // 0dccb4  mov al, byte ptr [esi + edi*1]
    X86_AT(c, 0xdccb4u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0dccb7  and al, 0xf0
    X86_AT(c, 0xdccb7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0dccb9  mov byte ptr [ebp - 5], al
    X86_AT(c, 0xdccb9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
L_dccbc:
    X86_TICK(c, 19);
    // 0dccbc  mov eax, ebx
    X86_AT(c, 0xdccbcu);
    c.r[0] = c.r[3];
    // 0dccbe  add al, byte ptr [ebp - 5]
    X86_AT(c, 0xdccbeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0, 1)); }
    // 0dccc1  mov byte ptr [esi + edi*1], al
    X86_AT(c, 0xdccc1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7])), g8(c, 0));
    // 0dccc4  inc edi
    X86_AT(c, 0xdccc4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dccc5  jmp 0xdcc8c
    X86_AT(c, 0xdccc5u);
    X86_POLL(c, 0xdcc8cu); goto L_dcc8c;
L_dccc7:
    X86_TICK(c, 15);
    // 0dccc7  inc dword ptr [ebp - 4]
    X86_AT(c, 0xdccc7u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dccca  add esi, 0xb0
    X86_AT(c, 0xdcccau);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xB0u, 0, 4); }
    // 0dccd0  jmp 0xdcc80
    X86_AT(c, 0xdccd0u);
    X86_POLL(c, 0xdcc80u); goto L_dcc80;
L_dccd2:
    X86_TICK(c, 19);
    // 0dccd2  mov esi, 0x993a0
    X86_AT(c, 0xdccd2u);
    c.r[6] = 0x993A0u;
    // 0dccd7  mov eax, dword ptr [0xb230c]
    X86_AT(c, 0xdccd7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB230Cu)));
    // 0dccdc  shl eax, 9
    X86_AT(c, 0xdccdcu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0dccdf  add eax, dword ptr [0xb231c]
    X86_AT(c, 0xdccdfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB231Cu))), 0, 4); }
    // 0dcce5  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xdcce5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0dcce8  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xdcce8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_dccef:
    X86_TICK(c, 12);
    // 0dccef  cmp dword ptr [ebp - 4], 0x20
    X86_AT(c, 0xdccefu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x20u, 0, 4);
    // 0dccf3  jge 0xdcd3d
    X86_AT(c, 0xdccf3u);
    if (x86_cc(c, 13)) { goto L_dcd3d; }
    X86_TICK(c, 2);
    // 0dccf5  sub edi, edi
    X86_AT(c, 0xdccf5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_dccf7:
    X86_TICK(c, 7);
    // 0dccf7  cmp edi, 0x10
    X86_AT(c, 0xdccf7u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0dccfa  jge 0xdcd32
    X86_AT(c, 0xdccfau);
    if (x86_cc(c, 13)) { goto L_dcd32; }
    X86_TICK(c, 17);
    // 0dccfc  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdccfcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dccff  mov bl, byte ptr [eax]
    X86_AT(c, 0xdccffu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0dcd01  and bl, 0xf
    X86_AT(c, 0xdcd01u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xFu, 1)); }
    // 0dcd04  and bl, bl
    X86_AT(c, 0xdcd04u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0dcd06  jne 0xdcd0e
    X86_AT(c, 0xdcd06u);
    if (x86_cc(c, 5)) { goto L_dcd0e; }
    X86_TICK(c, 6);
    // 0dcd08  mov bl, byte ptr [esi + edi*1]
    X86_AT(c, 0xdcd08u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0dcd0b  and bl, 0xf
    X86_AT(c, 0xdcd0bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0xFu, 1)); }
L_dcd0e:
    X86_TICK(c, 25);
    // 0dcd0e  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdcd0eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dcd11  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xdcd11u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dcd14  mov al, byte ptr [eax]
    X86_AT(c, 0xdcd14u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0dcd16  and al, 0xf0
    X86_AT(c, 0xdcd16u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0dcd18  mov byte ptr [ebp - 5], al
    X86_AT(c, 0xdcd18u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
    // 0dcd1b  and al, al
    X86_AT(c, 0xdcd1bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0dcd1d  jne 0xdcd27
    X86_AT(c, 0xdcd1du);
    if (x86_cc(c, 5)) { goto L_dcd27; }
    X86_TICK(c, 8);
    // 0dcd1f  mov al, byte ptr [esi + edi*1]
    X86_AT(c, 0xdcd1fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0dcd22  and al, 0xf0
    X86_AT(c, 0xdcd22u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0dcd24  mov byte ptr [ebp - 5], al
    X86_AT(c, 0xdcd24u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
L_dcd27:
    X86_TICK(c, 19);
    // 0dcd27  mov eax, ebx
    X86_AT(c, 0xdcd27u);
    c.r[0] = c.r[3];
    // 0dcd29  add al, byte ptr [ebp - 5]
    X86_AT(c, 0xdcd29u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0, 1)); }
    // 0dcd2c  mov byte ptr [esi + edi*1], al
    X86_AT(c, 0xdcd2cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7])), g8(c, 0));
    // 0dcd2f  inc edi
    X86_AT(c, 0xdcd2fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dcd30  jmp 0xdccf7
    X86_AT(c, 0xdcd30u);
    X86_POLL(c, 0xdccf7u); goto L_dccf7;
L_dcd32:
    X86_TICK(c, 15);
    // 0dcd32  inc dword ptr [ebp - 4]
    X86_AT(c, 0xdcd32u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dcd35  add esi, 0xb0
    X86_AT(c, 0xdcd35u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xB0u, 0, 4); }
    // 0dcd3b  jmp 0xdccef
    X86_AT(c, 0xdcd3bu);
    X86_POLL(c, 0xdccefu); goto L_dccef;
L_dcd3d:
    X86_TICK(c, 28);
    // 0dcd3d  pop edi
    X86_AT(c, 0xdcd3du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dcd3e  pop esi
    X86_AT(c, 0xdcd3eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dcd3f  pop ebx
    X86_AT(c, 0xdcd3fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dcd40  leave 
    X86_AT(c, 0xdcd40u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dcd41  ret 
    X86_AT(c, 0xdcd41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdcba4u, "ran off the end of a function");
}
void f_000dcd44(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0dcd44  push ebp
    X86_AT(c, 0xdcd44u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dcd45  mov ebp, esp
    X86_AT(c, 0xdcd45u);
    c.r[5] = c.r[4];
    // 0dcd47  sub esp, 0x24
    X86_AT(c, 0xdcd47u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x24u, 0, 4); }
    // 0dcd4a  push ebx
    X86_AT(c, 0xdcd4au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dcd4b  push esi
    X86_AT(c, 0xdcd4bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dcd4c  push edi
    X86_AT(c, 0xdcd4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dcd4d  mov dword ptr [ebp - 0x24], 0xffffffff
    X86_AT(c, 0xdcd4du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0xFFFFFFFFu);
    // 0dcd54  sub ebx, ebx
    X86_AT(c, 0xdcd54u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_dcd56:
    X86_TICK(c, 7);
    // 0dcd56  cmp ebx, 4
    X86_AT(c, 0xdcd56u);
    (void)x86_sub(c, c.r[3], 0x4u, 0, 4);
    // 0dcd59  jge 0xdce80
    X86_AT(c, 0xdcd59u);
    if (x86_cc(c, 13)) { goto L_dce80; }
    X86_TICK(c, 2);
    // 0dcd5f  sub esi, esi
    X86_AT(c, 0xdcd5fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_dcd61:
    X86_TICK(c, 7);
    // 0dcd61  cmp esi, 5
    X86_AT(c, 0xdcd61u);
    (void)x86_sub(c, c.r[6], 0x5u, 0, 4);
    // 0dcd64  jge 0xdce7a
    X86_AT(c, 0xdcd64u);
    if (x86_cc(c, 13)) { goto L_dce7a; }
    X86_TICK(c, 22);
    // 0dcd6a  lea eax, [ebx + ebx*4]
    X86_AT(c, 0xdcd6au);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 4);
    // 0dcd6d  lea edx, [esi + eax*1]
    X86_AT(c, 0xdcd6du);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 0dcd70  mov al, byte ptr [edx + 0xb35a4]
    X86_AT(c, 0xdcd70u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB35A4u))));
    // 0dcd76  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xdcd76u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0dcd79  movzx edx, al
    X86_AT(c, 0xdcd79u);
    c.r[2] = g8(c, 0);
    // 0dcd7c  sub edx, 4
    X86_AT(c, 0xdcd7cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x4u, 0, 4); }
    // 0dcd7f  cmp edx, 0xc
    X86_AT(c, 0xdcd7fu);
    (void)x86_sub(c, c.r[2], 0xCu, 0, 4);
    // 0dcd82  ja 0xdce74
    X86_AT(c, 0xdcd82u);
    if (x86_cc(c, 7)) { goto L_dce74; }
    X86_TICK(c, 7);
    // 0dcd88  jmp dword ptr cs:[edx*4 + 0xdcd90]
    X86_AT(c, 0xdcd88u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xDCD90u)));
      switch (t) {
      case 0xdcdc4u: goto L_dcdc4;
      case 0xdcdd3u: goto L_dcdd3;
      case 0xdcde2u: goto L_dcde2;
      case 0xdcdf1u: goto L_dcdf1;
      case 0xdce74u: goto L_dce74;
      default: x86_jump(c, t); return; } }
L_dcdc4:
    X86_TICK(c, 15);
    // 0dcdc4  lea eax, [ebx + ebx*4]
    X86_AT(c, 0xdcdc4u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 4);
    // 0dcdc7  lea edx, [esi + eax*1]
    X86_AT(c, 0xdcdc7u);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 0dcdca  mov edi, dword ptr [edx*4 + 0xb3d78]
    X86_AT(c, 0xdcdcau);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] * 4 + 0xB3D78u)));
    // 0dcdd1  jmp 0xdcdfe
    X86_AT(c, 0xdcdd1u);
    goto L_dcdfe;
L_dcdd3:
    X86_TICK(c, 15);
    // 0dcdd3  lea eax, [ebx + ebx*4]
    X86_AT(c, 0xdcdd3u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 4);
    // 0dcdd6  lea edx, [esi + eax*1]
    X86_AT(c, 0xdcdd6u);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 0dcdd9  mov edi, dword ptr [edx*4 + 0xb3e4c]
    X86_AT(c, 0xdcdd9u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] * 4 + 0xB3E4Cu)));
    // 0dcde0  jmp 0xdcdfe
    X86_AT(c, 0xdcde0u);
    goto L_dcdfe;
L_dcde2:
    X86_TICK(c, 15);
    // 0dcde2  lea eax, [ebx + ebx*4]
    X86_AT(c, 0xdcde2u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 4);
    // 0dcde5  lea edx, [esi + eax*1]
    X86_AT(c, 0xdcde5u);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 0dcde8  mov edi, dword ptr [edx*4 + 0xb3f20]
    X86_AT(c, 0xdcde8u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] * 4 + 0xB3F20u)));
    // 0dcdef  jmp 0xdcdfe
    X86_AT(c, 0xdcdefu);
    goto L_dcdfe;
L_dcdf1:
    X86_TICK(c, 8);
    // 0dcdf1  lea eax, [ebx + ebx*4]
    X86_AT(c, 0xdcdf1u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 4);
    // 0dcdf4  lea edx, [esi + eax*1]
    X86_AT(c, 0xdcdf4u);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 0dcdf7  mov edi, dword ptr [edx*4 + 0xb4018]
    X86_AT(c, 0xdcdf7u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] * 4 + 0xB4018u)));
L_dcdfe:
    X86_TICK(c, 52);
    // 0dcdfe  mov dword ptr [ebp - 0x24], 0
    X86_AT(c, 0xdcdfeu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0x0u);
    // 0dce05  movzx eax, byte ptr [edi]
    X86_AT(c, 0xdce05u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0dce08  inc edi
    X86_AT(c, 0xdce08u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dce09  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xdce09u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0dce0c  movzx eax, byte ptr [edi]
    X86_AT(c, 0xdce0cu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0dce0f  inc edi
    X86_AT(c, 0xdce0fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dce10  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xdce10u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0dce13  movzx eax, byte ptr [edi]
    X86_AT(c, 0xdce13u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0dce16  inc edi
    X86_AT(c, 0xdce16u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dce17  mov dword ptr [ebp - 0x18], eax
    X86_AT(c, 0xdce17u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[0]);
    // 0dce1a  movzx eax, byte ptr [edi]
    X86_AT(c, 0xdce1au);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0dce1d  inc edi
    X86_AT(c, 0xdce1du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dce1e  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xdce1eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0dce21  movzx eax, byte ptr [edi]
    X86_AT(c, 0xdce21u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0dce24  inc edi
    X86_AT(c, 0xdce24u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dce25  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xdce25u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
L_dce28:
    X86_TICK(c, 12);
    // 0dce28  cmp dword ptr [ebp - 0x10], 0
    X86_AT(c, 0xdce28u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0x0u, 0, 4);
    // 0dce2c  jle 0xdce74
    X86_AT(c, 0xdce2cu);
    if (x86_cc(c, 14)) { goto L_dce74; }
    X86_TICK(c, 12);
    // 0dce2e  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdce2eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dce31  mov dword ptr [ebp - 0x20], eax
    X86_AT(c, 0xdce31u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[0]);
    // 0dce34  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xdce34u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0dce37  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xdce37u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
L_dce3a:
    X86_TICK(c, 11);
    // 0dce3a  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0xdce3au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0dce3d  and eax, eax
    X86_AT(c, 0xdce3du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0dce3f  jle 0xdce6c
    X86_AT(c, 0xdce3fu);
    if (x86_cc(c, 14)) { goto L_dce6c; }
    X86_TICK(c, 53);
    // 0dce41  mov edx, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xdce41u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0dce44  lea ecx, [edx + edx*4]
    X86_AT(c, 0xdce44u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0dce47  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0xdce47u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0dce4a  lea ecx, [edx + ecx*8]
    X86_AT(c, 0xdce4au);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 8);
    // 0dce4d  mov edx, dword ptr [ebp - 0x18]
    X86_AT(c, 0xdce4du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0dce50  lea eax, [edx + edx*8]
    X86_AT(c, 0xdce50u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0dce53  lea edx, [eax + edx*2]
    X86_AT(c, 0xdce53u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0dce56  add edx, ecx
    X86_AT(c, 0xdce56u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
    // 0dce58  add edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xdce58u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 4); }
    // 0dce5b  mov al, byte ptr [edi]
    X86_AT(c, 0xdce5bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0dce5d  inc edi
    X86_AT(c, 0xdce5du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dce5e  mov byte ptr [edx + 0xb3b0c], al
    X86_AT(c, 0xdce5eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB3B0Cu)), g8(c, 0));
    // 0dce64  inc dword ptr [ebp - 0x14]
    X86_AT(c, 0xdce64u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dce67  dec dword ptr [ebp - 0x20]
    X86_AT(c, 0xdce67u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0dce6a  jmp 0xdce3a
    X86_AT(c, 0xdce6au);
    X86_POLL(c, 0xdce3au); goto L_dce3a;
L_dce6c:
    X86_TICK(c, 19);
    // 0dce6c  dec dword ptr [ebp - 0x10]
    X86_AT(c, 0xdce6cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0dce6f  inc dword ptr [ebp - 0x18]
    X86_AT(c, 0xdce6fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dce72  jmp 0xdce28
    X86_AT(c, 0xdce72u);
    X86_POLL(c, 0xdce28u); goto L_dce28;
L_dce74:
    X86_TICK(c, 9);
    // 0dce74  inc esi
    X86_AT(c, 0xdce74u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0dce75  jmp 0xdcd61
    X86_AT(c, 0xdce75u);
    X86_POLL(c, 0xdcd61u); goto L_dcd61;
L_dce7a:
    X86_TICK(c, 9);
    // 0dce7a  inc ebx
    X86_AT(c, 0xdce7au);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0dce7b  jmp 0xdcd56
    X86_AT(c, 0xdce7bu);
    X86_POLL(c, 0xdcd56u); goto L_dcd56;
L_dce80:
    X86_TICK(c, 7);
    // 0dce80  call 0xdc99c
    X86_AT(c, 0xdce80u);
    push32(c, 0xdce85u); x86_call_known(c, 0xdc99cu, f_000dc99c); X86_RET(c, 0xdce85u);
    X86_TICK(c, 7);
    // 0dce85  and eax, eax
    X86_AT(c, 0xdce85u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0dce87  jne 0xdce90
    X86_AT(c, 0xdce87u);
    if (x86_cc(c, 5)) { goto L_dce90; }
    X86_TICK(c, 2);
    // 0dce89  mov dword ptr [ebp - 0x24], 0
    X86_AT(c, 0xdce89u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0x0u);
L_dce90:
    X86_TICK(c, 32);
    // 0dce90  mov eax, dword ptr [ebp - 0x24]
    X86_AT(c, 0xdce90u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)));
    // 0dce93  pop edi
    X86_AT(c, 0xdce93u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dce94  pop esi
    X86_AT(c, 0xdce94u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dce95  pop ebx
    X86_AT(c, 0xdce95u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dce96  leave 
    X86_AT(c, 0xdce96u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dce97  ret 
    X86_AT(c, 0xdce97u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdcd44u, "ran off the end of a function");
}
void f_000dce98(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0dce98  push ebp
    X86_AT(c, 0xdce98u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0dce99  mov ebp, esp
    X86_AT(c, 0xdce99u);
    c.r[5] = c.r[4];
    // 0dce9b  sub esp, 0x10
    X86_AT(c, 0xdce9bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0dce9e  push ebx
    X86_AT(c, 0xdce9eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0dce9f  push esi
    X86_AT(c, 0xdce9fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0dcea0  push edi
    X86_AT(c, 0xdcea0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0dcea1  mov ebx, 0xb3b0c
    X86_AT(c, 0xdcea1u);
    c.r[3] = 0xB3B0Cu;
    // 0dcea6  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xdcea6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_dcead:
    X86_TICK(c, 11);
    // 0dcead  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdceadu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0dceb0  cmp eax, 0x1e4
    X86_AT(c, 0xdceb0u);
    (void)x86_sub(c, c.r[0], 0x1E4u, 0, 4);
    // 0dceb5  jge 0xdcec0
    X86_AT(c, 0xdceb5u);
    if (x86_cc(c, 13)) { goto L_dcec0; }
    X86_TICK(c, 17);
    // 0dceb7  mov byte ptr [ebx], 0
    X86_AT(c, 0xdceb7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3])), 0x0u);
    // 0dceba  inc ebx
    X86_AT(c, 0xdcebau);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0dcebb  inc dword ptr [ebp - 4]
    X86_AT(c, 0xdcebbu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dcebe  jmp 0xdcead
    X86_AT(c, 0xdcebeu);
    X86_POLL(c, 0xdceadu); goto L_dcead;
L_dcec0:
    X86_TICK(c, 7);
    // 0dcec0  call 0xdcd44
    X86_AT(c, 0xdcec0u);
    push32(c, 0xdcec5u); x86_call_known(c, 0xdcd44u, f_000dcd44); X86_RET(c, 0xdcec5u);
    X86_TICK(c, 21);
    // 0dcec5  mov word ptr [0xb2324], 0
    X86_AT(c, 0xdcec5u);
    wr16((c.sbase[3] + (uint32_t)(0xB2324u)), 0x0u);
    // 0dcece  mov al, byte ptr [0xb35a5]
    X86_AT(c, 0xdceceu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xB35A5u))));
    // 0dced3  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xdced3u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
    // 0dced6  mov dl, byte ptr [0xb35a7]
    X86_AT(c, 0xdced6u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xB35A7u))));
    // 0dcedc  mov byte ptr [ebp - 0xe], dl
    X86_AT(c, 0xdcedcu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), g8(c, 2));
    // 0dcedf  dec al
    X86_AT(c, 0xdcedfu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0dcee1  jne 0xdcef0
    X86_AT(c, 0xdcee1u);
    if (x86_cc(c, 5)) { goto L_dcef0; }
    X86_TICK(c, 7);
    // 0dcee3  dec dl
    X86_AT(c, 0xdcee3u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 0dcee5  jne 0xdcef0
    X86_AT(c, 0xdcee5u);
    if (x86_cc(c, 5)) { goto L_dcef0; }
    X86_TICK(c, 9);
    // 0dcee7  mov byte ptr [ebp - 0xf], 0x43
    X86_AT(c, 0xdcee7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x43u);
    // 0dceeb  jmp 0xdcfe2
    X86_AT(c, 0xdceebu);
    goto L_dcfe2;
L_dcef0:
    X86_TICK(c, 12);
    // 0dcef0  cmp byte ptr [ebp - 0xd], 1
    X86_AT(c, 0xdcef0u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x1u, 0, 1);
    // 0dcef4  jne 0xdcf00
    X86_AT(c, 0xdcef4u);
    if (x86_cc(c, 5)) { goto L_dcf00; }
    X86_TICK(c, 12);
    // 0dcef6  cmp byte ptr [ebp - 0xe], 2
    X86_AT(c, 0xdcef6u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x2u, 0, 1);
    // 0dcefa  je 0xdcfc6
    X86_AT(c, 0xdcefau);
    if (x86_cc(c, 4)) { goto L_dcfc6; }
L_dcf00:
    X86_TICK(c, 12);
    // 0dcf00  cmp byte ptr [ebp - 0xd], 2
    X86_AT(c, 0xdcf00u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x2u, 0, 1);
    // 0dcf04  jne 0xdcf10
    X86_AT(c, 0xdcf04u);
    if (x86_cc(c, 5)) { goto L_dcf10; }
    X86_TICK(c, 12);
    // 0dcf06  cmp byte ptr [ebp - 0xe], 1
    X86_AT(c, 0xdcf06u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x1u, 0, 1);
    // 0dcf0a  je 0xdcfd8
    X86_AT(c, 0xdcf0au);
    if (x86_cc(c, 4)) { goto L_dcfd8; }
L_dcf10:
    X86_TICK(c, 12);
    // 0dcf10  cmp byte ptr [ebp - 0xd], 2
    X86_AT(c, 0xdcf10u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x2u, 0, 1);
    // 0dcf14  jne 0xdcf20
    X86_AT(c, 0xdcf14u);
    if (x86_cc(c, 5)) { goto L_dcf20; }
    X86_TICK(c, 12);
    // 0dcf16  cmp byte ptr [ebp - 0xe], 2
    X86_AT(c, 0xdcf16u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x2u, 0, 1);
    // 0dcf1a  je 0xdcfb4
    X86_AT(c, 0xdcf1au);
    if (x86_cc(c, 4)) { goto L_dcfb4; }
L_dcf20:
    X86_TICK(c, 12);
    // 0dcf20  cmp byte ptr [ebp - 0xd], 0
    X86_AT(c, 0xdcf20u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x0u, 0, 1);
    // 0dcf24  jne 0xdcf30
    X86_AT(c, 0xdcf24u);
    if (x86_cc(c, 5)) { goto L_dcf30; }
    X86_TICK(c, 12);
    // 0dcf26  cmp byte ptr [ebp - 0xe], 2
    X86_AT(c, 0xdcf26u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x2u, 0, 1);
    // 0dcf2a  je 0xdcf87
    X86_AT(c, 0xdcf2au);
    if (x86_cc(c, 4)) { goto L_dcf87; }
L_dcf30:
    X86_TICK(c, 12);
    // 0dcf30  cmp byte ptr [ebp - 0xd], 2
    X86_AT(c, 0xdcf30u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x2u, 0, 1);
    // 0dcf34  jne 0xdcf45
    X86_AT(c, 0xdcf34u);
    if (x86_cc(c, 5)) { goto L_dcf45; }
    X86_TICK(c, 12);
    // 0dcf36  cmp byte ptr [ebp - 0xe], 0
    X86_AT(c, 0xdcf36u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x0u, 0, 1);
    // 0dcf3a  jne 0xdcf45
    X86_AT(c, 0xdcf3au);
    if (x86_cc(c, 5)) { goto L_dcf45; }
    X86_TICK(c, 9);
    // 0dcf3c  mov byte ptr [ebp - 0xf], 0x2d
    X86_AT(c, 0xdcf3cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x2Du);
    // 0dcf40  jmp 0xdcfe2
    X86_AT(c, 0xdcf40u);
    goto L_dcfe2;
L_dcf45:
    X86_TICK(c, 12);
    // 0dcf45  cmp byte ptr [ebp - 0xd], 0
    X86_AT(c, 0xdcf45u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x0u, 0, 1);
    // 0dcf49  jne 0xdcf5a
    X86_AT(c, 0xdcf49u);
    if (x86_cc(c, 5)) { goto L_dcf5a; }
    X86_TICK(c, 12);
    // 0dcf4b  cmp byte ptr [ebp - 0xe], 1
    X86_AT(c, 0xdcf4bu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x1u, 0, 1);
    // 0dcf4f  jne 0xdcf5a
    X86_AT(c, 0xdcf4fu);
    if (x86_cc(c, 5)) { goto L_dcf5a; }
    X86_TICK(c, 9);
    // 0dcf51  mov byte ptr [ebp - 0xf], 0x4b
    X86_AT(c, 0xdcf51u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x4Bu);
    // 0dcf55  jmp 0xdcfe2
    X86_AT(c, 0xdcf55u);
    goto L_dcfe2;
L_dcf5a:
    X86_TICK(c, 12);
    // 0dcf5a  cmp byte ptr [ebp - 0xd], 1
    X86_AT(c, 0xdcf5au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x1u, 0, 1);
    // 0dcf5e  jne 0xdcf6f
    X86_AT(c, 0xdcf5eu);
    if (x86_cc(c, 5)) { goto L_dcf6f; }
    X86_TICK(c, 12);
    // 0dcf60  cmp byte ptr [ebp - 0xe], 0
    X86_AT(c, 0xdcf60u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x0u, 0, 1);
    // 0dcf64  jne 0xdcf6f
    X86_AT(c, 0xdcf64u);
    if (x86_cc(c, 5)) { goto L_dcf6f; }
    X86_TICK(c, 9);
    // 0dcf66  mov byte ptr [ebp - 0xf], 0x4a
    X86_AT(c, 0xdcf66u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x4Au);
    // 0dcf6a  jmp 0xdcfe2
    X86_AT(c, 0xdcf6au);
    goto L_dcfe2;
L_dcf6f:
    X86_TICK(c, 12);
    // 0dcf6f  cmp byte ptr [ebp - 0xd], 3
    X86_AT(c, 0xdcf6fu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x3u, 0, 1);
    // 0dcf73  jne 0xdcf7b
    X86_AT(c, 0xdcf73u);
    if (x86_cc(c, 5)) { goto L_dcf7b; }
    X86_TICK(c, 12);
    // 0dcf75  cmp byte ptr [ebp - 0xe], 0
    X86_AT(c, 0xdcf75u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x0u, 0, 1);
    // 0dcf79  je 0xdcfb4
    X86_AT(c, 0xdcf79u);
    if (x86_cc(c, 4)) { goto L_dcfb4; }
L_dcf7b:
    X86_TICK(c, 12);
    // 0dcf7b  cmp byte ptr [ebp - 0xd], 0
    X86_AT(c, 0xdcf7bu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x0u, 0, 1);
    // 0dcf7f  jne 0xdcf90
    X86_AT(c, 0xdcf7fu);
    if (x86_cc(c, 5)) { goto L_dcf90; }
    X86_TICK(c, 12);
    // 0dcf81  cmp byte ptr [ebp - 0xe], 3
    X86_AT(c, 0xdcf81u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x3u, 0, 1);
    // 0dcf85  jne 0xdcf90
    X86_AT(c, 0xdcf85u);
    if (x86_cc(c, 5)) { goto L_dcf90; }
L_dcf87:
    X86_TICK(c, 9);
    // 0dcf87  mov byte ptr [ebp - 0xf], 0x2e
    X86_AT(c, 0xdcf87u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x2Eu);
    // 0dcf8b  jmp 0xdcfe2
    X86_AT(c, 0xdcf8bu);
    goto L_dcfe2;
L_dcf90:
    X86_TICK(c, 12);
    // 0dcf90  cmp byte ptr [ebp - 0xd], 3
    X86_AT(c, 0xdcf90u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x3u, 0, 1);
    // 0dcf94  jne 0xdcf9c
    X86_AT(c, 0xdcf94u);
    if (x86_cc(c, 5)) { goto L_dcf9c; }
    X86_TICK(c, 12);
    // 0dcf96  cmp byte ptr [ebp - 0xe], 2
    X86_AT(c, 0xdcf96u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x2u, 0, 1);
    // 0dcf9a  je 0xdcfb4
    X86_AT(c, 0xdcf9au);
    if (x86_cc(c, 4)) { goto L_dcfb4; }
L_dcf9c:
    X86_TICK(c, 12);
    // 0dcf9c  cmp byte ptr [ebp - 0xd], 2
    X86_AT(c, 0xdcf9cu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x2u, 0, 1);
    // 0dcfa0  jne 0xdcfa8
    X86_AT(c, 0xdcfa0u);
    if (x86_cc(c, 5)) { goto L_dcfa8; }
    X86_TICK(c, 12);
    // 0dcfa2  cmp byte ptr [ebp - 0xe], 3
    X86_AT(c, 0xdcfa2u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x3u, 0, 1);
    // 0dcfa6  je 0xdcfb4
    X86_AT(c, 0xdcfa6u);
    if (x86_cc(c, 4)) { goto L_dcfb4; }
L_dcfa8:
    X86_TICK(c, 12);
    // 0dcfa8  cmp byte ptr [ebp - 0xd], 3
    X86_AT(c, 0xdcfa8u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x3u, 0, 1);
    // 0dcfac  jne 0xdcfba
    X86_AT(c, 0xdcfacu);
    if (x86_cc(c, 5)) { goto L_dcfba; }
    X86_TICK(c, 12);
    // 0dcfae  cmp byte ptr [ebp - 0xe], 3
    X86_AT(c, 0xdcfaeu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x3u, 0, 1);
    // 0dcfb2  jne 0xdcfba
    X86_AT(c, 0xdcfb2u);
    if (x86_cc(c, 5)) { goto L_dcfba; }
L_dcfb4:
    X86_TICK(c, 9);
    // 0dcfb4  mov byte ptr [ebp - 0xf], 0x2f
    X86_AT(c, 0xdcfb4u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x2Fu);
    // 0dcfb8  jmp 0xdcfe2
    X86_AT(c, 0xdcfb8u);
    goto L_dcfe2;
L_dcfba:
    X86_TICK(c, 12);
    // 0dcfba  cmp byte ptr [ebp - 0xd], 1
    X86_AT(c, 0xdcfbau);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x1u, 0, 1);
    // 0dcfbe  jne 0xdcfcc
    X86_AT(c, 0xdcfbeu);
    if (x86_cc(c, 5)) { goto L_dcfcc; }
    X86_TICK(c, 12);
    // 0dcfc0  cmp byte ptr [ebp - 0xe], 3
    X86_AT(c, 0xdcfc0u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x3u, 0, 1);
    // 0dcfc4  jne 0xdcfcc
    X86_AT(c, 0xdcfc4u);
    if (x86_cc(c, 5)) { goto L_dcfcc; }
L_dcfc6:
    X86_TICK(c, 9);
    // 0dcfc6  mov byte ptr [ebp - 0xf], 0x75
    X86_AT(c, 0xdcfc6u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x75u);
    // 0dcfca  jmp 0xdcfe2
    X86_AT(c, 0xdcfcau);
    goto L_dcfe2;
L_dcfcc:
    X86_TICK(c, 12);
    // 0dcfcc  cmp byte ptr [ebp - 0xd], 3
    X86_AT(c, 0xdcfccu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x3u, 0, 1);
    // 0dcfd0  jne 0xdcfde
    X86_AT(c, 0xdcfd0u);
    if (x86_cc(c, 5)) { goto L_dcfde; }
    X86_TICK(c, 12);
    // 0dcfd2  cmp byte ptr [ebp - 0xe], 1
    X86_AT(c, 0xdcfd2u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x1u, 0, 1);
    // 0dcfd6  jne 0xdcfde
    X86_AT(c, 0xdcfd6u);
    if (x86_cc(c, 5)) { goto L_dcfde; }
L_dcfd8:
    X86_TICK(c, 9);
    // 0dcfd8  mov byte ptr [ebp - 0xf], 0x7d
    X86_AT(c, 0xdcfd8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x7Du);
    // 0dcfdc  jmp 0xdcfe2
    X86_AT(c, 0xdcfdcu);
    goto L_dcfe2;
L_dcfde:
    X86_TICK(c, 2);
    // 0dcfde  mov byte ptr [ebp - 0xf], 0
    X86_AT(c, 0xdcfdeu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x0u);
L_dcfe2:
    X86_TICK(c, 8);
    // 0dcfe2  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0xdcfe2u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 0dcfe5  mov byte ptr [0x92494], al
    X86_AT(c, 0xdcfe5u);
    wr8((c.sbase[3] + (uint32_t)(0x92494u)), g8(c, 0));
    // 0dcfea  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xdcfeau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_dcff1:
    X86_TICK(c, 12);
    // 0dcff1  cmp dword ptr [ebp - 0xc], 4
    X86_AT(c, 0xdcff1u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x4u, 0, 4);
    // 0dcff5  jge 0xdd1ac
    X86_AT(c, 0xdcff5u);
    if (x86_cc(c, 13)) { goto L_dd1ac; }
    X86_TICK(c, 2);
    // 0dcffb  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xdcffbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_dd002:
    X86_TICK(c, 11);
    // 0dd002  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xdd002u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0dd005  cmp eax, 5
    X86_AT(c, 0xdd005u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0dd008  jge 0xdd1a4
    X86_AT(c, 0xdd008u);
    if (x86_cc(c, 13)) { goto L_dd1a4; }
    X86_TICK(c, 28);
    // 0dd00e  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdd00eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dd011  lea edx, [edx + edx*4]
    X86_AT(c, 0xdd011u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0dd014  add edx, dword ptr [eax*4 + 0xb3cf0]
    X86_AT(c, 0xdd014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB3CF0u))), 0, 4); }
    // 0dd01b  mov al, byte ptr [edx + 0xb35a4]
    X86_AT(c, 0xdd01bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB35A4u))));
    // 0dd021  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xdd021u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
    // 0dd024  movzx edx, al
    X86_AT(c, 0xdd024u);
    c.r[2] = g8(c, 0);
    // 0dd027  cmp edx, 1
    X86_AT(c, 0xdd027u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0dd02a  je 0xdd04c
    X86_AT(c, 0xdd02au);
    if (x86_cc(c, 4)) { goto L_dd04c; }
    X86_TICK(c, 7);
    // 0dd02c  cmp edx, 2
    X86_AT(c, 0xdd02cu);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0dd02f  je 0xdd03a
    X86_AT(c, 0xdd02fu);
    if (x86_cc(c, 4)) { goto L_dd03a; }
    X86_TICK(c, 7);
    // 0dd031  cmp edx, 3
    X86_AT(c, 0xdd031u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0dd034  jne 0xdd19c
    X86_AT(c, 0xdd034u);
    if (x86_cc(c, 5)) { goto L_dd19c; }
L_dd03a:
    X86_TICK(c, 23);
    // 0dd03a  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xdd03au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0dd03d  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdd03du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dd040  lea edx, [edx + edx*4]
    X86_AT(c, 0xdd040u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0dd043  add edx, dword ptr [eax*4 + 0xb3cf0]
    X86_AT(c, 0xdd043u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB3CF0u))), 0, 4); }
    // 0dd04a  jmp 0xdd05f
    X86_AT(c, 0xdd04au);
    goto L_dd05f;
L_dd04c:
    X86_TICK(c, 18);
    // 0dd04c  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xdd04cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0dd04f  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdd04fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dd052  lea edx, [edx + edx*4]
    X86_AT(c, 0xdd052u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0dd055  add edx, dword ptr [eax*4 + 0xb3cf0]
    X86_AT(c, 0xdd055u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB3CF0u))), 0, 4); }
    // 0dd05c  add edx, 0x14
    X86_AT(c, 0xdd05cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x14u, 0, 4); }
L_dd05f:
    X86_TICK(c, 12);
    // 0dd05f  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xdd05fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0dd062  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xdd062u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0dd065  mov ebx, dword ptr [eax*4 + 0xb5254]
    X86_AT(c, 0xdd065u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB5254u)));
    // 0dd06c  sub esi, esi
    X86_AT(c, 0xdd06cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_dd06e:
    X86_TICK(c, 7);
    // 0dd06e  cmp esi, 0xb
    X86_AT(c, 0xdd06eu);
    (void)x86_sub(c, c.r[6], 0xBu, 0, 4);
    // 0dd071  jge 0xdd19c
    X86_AT(c, 0xdd071u);
    if (x86_cc(c, 13)) { goto L_dd19c; }
    X86_TICK(c, 2);
    // 0dd077  sub edi, edi
    X86_AT(c, 0xdd077u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_dd079:
    X86_TICK(c, 7);
    // 0dd079  cmp edi, 0xb
    X86_AT(c, 0xdd079u);
    (void)x86_sub(c, c.r[7], 0xBu, 0, 4);
    // 0dd07c  jge 0xdd196
    X86_AT(c, 0xdd07cu);
    if (x86_cc(c, 13)) { goto L_dd196; }
    X86_TICK(c, 11);
    // 0dd082  mov al, byte ptr [ebx]
    X86_AT(c, 0xdd082u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3]))));
    // 0dd084  and al, al
    X86_AT(c, 0xdd084u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0dd086  je 0xdd18f
    X86_AT(c, 0xdd086u);
    if (x86_cc(c, 4)) { goto L_dd18f; }
    X86_TICK(c, 20);
    // 0dd08c  mov edx, esi
    X86_AT(c, 0xdd08cu);
    c.r[2] = c.r[6];
    // 0dd08e  lea ecx, [edx + edx*8]
    X86_AT(c, 0xdd08eu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0dd091  lea edx, [ecx + edx*2]
    X86_AT(c, 0xdd091u);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0dd094  lea ecx, [edi + edx*1]
    X86_AT(c, 0xdd094u);
    c.r[1] = (uint32_t)(c.r[7] + c.r[2]);
    // 0dd097  mov byte ptr [ecx + 0x92458], al
    X86_AT(c, 0xdd097u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0x92458u)), g8(c, 0));
    // 0dd09d  movzx edx, al
    X86_AT(c, 0xdd09du);
    c.r[2] = g8(c, 0);
    // 0dd0a0  cmp edx, 0x42
    X86_AT(c, 0xdd0a0u);
    (void)x86_sub(c, c.r[2], 0x42u, 0, 4);
    // 0dd0a3  ja 0xdd0d7
    X86_AT(c, 0xdd0a3u);
    if (x86_cc(c, 7)) { goto L_dd0d7; }
    X86_TICK(c, 7);
    // 0dd0a5  cmp edx, 0x42
    X86_AT(c, 0xdd0a5u);
    (void)x86_sub(c, c.r[2], 0x42u, 0, 4);
    // 0dd0a8  je 0xdd18f
    X86_AT(c, 0xdd0a8u);
    if (x86_cc(c, 4)) { goto L_dd18f; }
    X86_TICK(c, 7);
    // 0dd0ae  cmp edx, 1
    X86_AT(c, 0xdd0aeu);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0dd0b1  je 0xdd18f
    X86_AT(c, 0xdd0b1u);
    if (x86_cc(c, 4)) { goto L_dd18f; }
    X86_TICK(c, 7);
    // 0dd0b7  cmp edx, 3
    X86_AT(c, 0xdd0b7u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0dd0ba  je 0xdd18f
    X86_AT(c, 0xdd0bau);
    if (x86_cc(c, 4)) { goto L_dd18f; }
    X86_TICK(c, 7);
    // 0dd0c0  cmp edx, 0xc
    X86_AT(c, 0xdd0c0u);
    (void)x86_sub(c, c.r[2], 0xCu, 0, 4);
    // 0dd0c3  je 0xdd18f
    X86_AT(c, 0xdd0c3u);
    if (x86_cc(c, 4)) { goto L_dd18f; }
    X86_TICK(c, 7);
    // 0dd0c9  cmp edx, 0xd
    X86_AT(c, 0xdd0c9u);
    (void)x86_sub(c, c.r[2], 0xDu, 0, 4);
    // 0dd0cc  je 0xdd18f
    X86_AT(c, 0xdd0ccu);
    if (x86_cc(c, 4)) { goto L_dd18f; }
    X86_TICK(c, 9);
    // 0dd0d2  cmp edx, 0x36
    X86_AT(c, 0xdd0d2u);
    (void)x86_sub(c, c.r[2], 0x36u, 0, 4);
    // 0dd0d5  jmp 0xdd0f1
    X86_AT(c, 0xdd0d5u);
    goto L_dd0f1;
L_dd0d7:
    X86_TICK(c, 7);
    // 0dd0d7  cmp edx, 0x58
    X86_AT(c, 0xdd0d7u);
    (void)x86_sub(c, c.r[2], 0x58u, 0, 4);
    // 0dd0da  ja 0xdd0f9
    X86_AT(c, 0xdd0dau);
    if (x86_cc(c, 7)) { goto L_dd0f9; }
    X86_TICK(c, 7);
    // 0dd0dc  cmp edx, 0x58
    X86_AT(c, 0xdd0dcu);
    (void)x86_sub(c, c.r[2], 0x58u, 0, 4);
    // 0dd0df  je 0xdd18f
    X86_AT(c, 0xdd0dfu);
    if (x86_cc(c, 4)) { goto L_dd18f; }
    X86_TICK(c, 7);
    // 0dd0e5  cmp edx, 0x4a
    X86_AT(c, 0xdd0e5u);
    (void)x86_sub(c, c.r[2], 0x4Au, 0, 4);
    // 0dd0e8  je 0xdd18f
    X86_AT(c, 0xdd0e8u);
    if (x86_cc(c, 4)) { goto L_dd18f; }
    X86_TICK(c, 2);
    // 0dd0ee  cmp edx, 0x51
    X86_AT(c, 0xdd0eeu);
    (void)x86_sub(c, c.r[2], 0x51u, 0, 4);
L_dd0f1:
    X86_TICK(c, 5);
    // 0dd0f1  je 0xdd18f
    X86_AT(c, 0xdd0f1u);
    if (x86_cc(c, 4)) { goto L_dd18f; }
    X86_TICK(c, 7);
    // 0dd0f7  jmp 0xdd127
    X86_AT(c, 0xdd0f7u);
    goto L_dd127;
L_dd0f9:
    X86_TICK(c, 7);
    // 0dd0f9  cmp edx, 0x59
    X86_AT(c, 0xdd0f9u);
    (void)x86_sub(c, c.r[2], 0x59u, 0, 4);
    // 0dd0fc  je 0xdd18f
    X86_AT(c, 0xdd0fcu);
    if (x86_cc(c, 4)) { goto L_dd18f; }
    X86_TICK(c, 7);
    // 0dd102  cmp edx, 0x61
    X86_AT(c, 0xdd102u);
    (void)x86_sub(c, c.r[2], 0x61u, 0, 4);
    // 0dd105  je 0xdd18f
    X86_AT(c, 0xdd105u);
    if (x86_cc(c, 4)) { goto L_dd18f; }
    X86_TICK(c, 7);
    // 0dd10b  cmp edx, 0x80
    X86_AT(c, 0xdd10bu);
    (void)x86_sub(c, c.r[2], 0x80u, 0, 4);
    // 0dd111  jne 0xdd127
    X86_AT(c, 0xdd111u);
    if (x86_cc(c, 5)) { goto L_dd127; }
    X86_TICK(c, 17);
    // 0dd113  mov eax, esi
    X86_AT(c, 0xdd113u);
    c.r[0] = c.r[6];
    // 0dd115  lea edx, [eax + eax*8]
    X86_AT(c, 0xdd115u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0dd118  lea eax, [edx + eax*2]
    X86_AT(c, 0xdd118u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0dd11b  lea edx, [edi + eax*1]
    X86_AT(c, 0xdd11bu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0dd11e  mov byte ptr [edx + 0x92458], 0x2c
    X86_AT(c, 0xdd11eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0x92458u)), 0x2Cu);
    // 0dd125  jmp 0xdd18f
    X86_AT(c, 0xdd125u);
    goto L_dd18f;
L_dd127:
    X86_TICK(c, 11);
    // 0dd127  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xdd127u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0dd12a  cmp edx, 3
    X86_AT(c, 0xdd12au);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0dd12d  ja 0xdd18f
    X86_AT(c, 0xdd12du);
    if (x86_cc(c, 7)) { goto L_dd18f; }
    X86_TICK(c, 7);
    // 0dd12f  jmp dword ptr cs:[edx*4 + 0xdd137]
    X86_AT(c, 0xdd12fu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xDD137u)));
      switch (t) {
      case 0xdd147u: goto L_dd147;
      case 0xdd159u: goto L_dd159;
      case 0xdd16bu: goto L_dd16b;
      case 0xdd17du: goto L_dd17d;
      default: x86_jump(c, t); return; } }
L_dd147:
    X86_TICK(c, 10);
    // 0dd147  mov eax, esi
    X86_AT(c, 0xdd147u);
    c.r[0] = c.r[6];
    // 0dd149  lea edx, [eax + eax*8]
    X86_AT(c, 0xdd149u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0dd14c  lea eax, [edx + eax*2]
    X86_AT(c, 0xdd14cu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0dd14f  lea edx, [edi + eax*1]
    X86_AT(c, 0xdd14fu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0dd152  mov byte ptr [edx + 0xb3c77], 0
    X86_AT(c, 0xdd152u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB3C77u)), 0x0u);
L_dd159:
    X86_TICK(c, 10);
    // 0dd159  mov eax, esi
    X86_AT(c, 0xdd159u);
    c.r[0] = c.r[6];
    // 0dd15b  lea edx, [eax + eax*8]
    X86_AT(c, 0xdd15bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0dd15e  lea eax, [edx + eax*2]
    X86_AT(c, 0xdd15eu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0dd161  lea edx, [edi + eax*1]
    X86_AT(c, 0xdd161u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0dd164  mov byte ptr [edx + 0xb3bfe], 0
    X86_AT(c, 0xdd164u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB3BFEu)), 0x0u);
L_dd16b:
    X86_TICK(c, 10);
    // 0dd16b  mov eax, esi
    X86_AT(c, 0xdd16bu);
    c.r[0] = c.r[6];
    // 0dd16d  lea edx, [eax + eax*8]
    X86_AT(c, 0xdd16du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0dd170  lea eax, [edx + eax*2]
    X86_AT(c, 0xdd170u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0dd173  lea edx, [edi + eax*1]
    X86_AT(c, 0xdd173u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0dd176  mov byte ptr [edx + 0xb3b85], 0
    X86_AT(c, 0xdd176u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB3B85u)), 0x0u);
L_dd17d:
    X86_TICK(c, 10);
    // 0dd17d  mov eax, esi
    X86_AT(c, 0xdd17du);
    c.r[0] = c.r[6];
    // 0dd17f  lea edx, [eax + eax*8]
    X86_AT(c, 0xdd17fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0dd182  lea eax, [edx + eax*2]
    X86_AT(c, 0xdd182u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0dd185  lea edx, [edi + eax*1]
    X86_AT(c, 0xdd185u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0dd188  mov byte ptr [edx + 0xb3b0c], 0
    X86_AT(c, 0xdd188u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB3B0Cu)), 0x0u);
L_dd18f:
    X86_TICK(c, 11);
    // 0dd18f  inc ebx
    X86_AT(c, 0xdd18fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0dd190  inc edi
    X86_AT(c, 0xdd190u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0dd191  jmp 0xdd079
    X86_AT(c, 0xdd191u);
    X86_POLL(c, 0xdd079u); goto L_dd079;
L_dd196:
    X86_TICK(c, 9);
    // 0dd196  inc esi
    X86_AT(c, 0xdd196u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0dd197  jmp 0xdd06e
    X86_AT(c, 0xdd197u);
    X86_POLL(c, 0xdd06eu); goto L_dd06e;
L_dd19c:
    X86_TICK(c, 13);
    // 0dd19c  inc dword ptr [ebp - 8]
    X86_AT(c, 0xdd19cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dd19f  jmp 0xdd002
    X86_AT(c, 0xdd19fu);
    X86_POLL(c, 0xdd002u); goto L_dd002;
L_dd1a4:
    X86_TICK(c, 13);
    // 0dd1a4  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xdd1a4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0dd1a7  jmp 0xdcff1
    X86_AT(c, 0xdd1a7u);
    X86_POLL(c, 0xdcff1u); goto L_dcff1;
L_dd1ac:
    X86_TICK(c, 28);
    // 0dd1ac  pop edi
    X86_AT(c, 0xdd1acu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0dd1ad  pop esi
    X86_AT(c, 0xdd1adu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0dd1ae  pop ebx
    X86_AT(c, 0xdd1aeu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0dd1af  leave 
    X86_AT(c, 0xdd1afu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0dd1b0  ret 
    X86_AT(c, 0xdd1b0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdce98u, "ran off the end of a function");
}
}
