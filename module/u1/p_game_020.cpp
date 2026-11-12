#include "p_game_funcs.h"
namespace p_game {
void f_000e1758(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0e1758  push edi
    X86_AT(c, 0xe1758u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1759  push dword ptr [0xb0316]
    X86_AT(c, 0xe1759u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB0316u))); push32(c, v); }
    // 0e175f  push 2
    X86_AT(c, 0xe175fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e1761  call 0xc5df0
    X86_AT(c, 0xe1761u);
    push32(c, 0xe1766u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe1766u);
    X86_TICK(c, 17);
    // 0e1766  xchg edi, eax
    X86_AT(c, 0xe1766u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e1767  add esp, 8
    X86_AT(c, 0xe1767u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e176a  cmp dword ptr [0xb0326], 9
    X86_AT(c, 0xe176au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0326u))), 0x9u, 0, 4);
    // 0e1771  jne 0xe1777
    X86_AT(c, 0xe1771u);
    if (x86_cc(c, 5)) { goto L_e1777; }
    X86_TICK(c, 9);
    // 0e1773  add edi, edi
    X86_AT(c, 0xe1773u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[7], 0, 4); }
    // 0e1775  jmp 0xe179e
    X86_AT(c, 0xe1775u);
    goto L_e179e;
L_e1777:
    X86_TICK(c, 12);
    // 0e1777  cmp dword ptr [0xb0326], 8
    X86_AT(c, 0xe1777u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0326u))), 0x8u, 0, 4);
    // 0e177e  jne 0xe178c
    X86_AT(c, 0xe177eu);
    if (x86_cc(c, 5)) { goto L_e178c; }
    X86_TICK(c, 22);
    // 0e1780  lea edi, [edi + edi*2]
    X86_AT(c, 0xe1780u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0e1783  xchg edi, eax
    X86_AT(c, 0xe1783u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e1784  cdq 
    X86_AT(c, 0xe1784u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e1785  sub eax, edx
    X86_AT(c, 0xe1785u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e1787  sar eax, 1
    X86_AT(c, 0xe1787u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e1789  xchg edi, eax
    X86_AT(c, 0xe1789u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e178a  jmp 0xe179e
    X86_AT(c, 0xe178au);
    goto L_e179e;
L_e178c:
    X86_TICK(c, 11);
    // 0e178c  mov eax, dword ptr [0xb0326]
    X86_AT(c, 0xe178cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0326u)));
    // 0e1791  cmp eax, 0xa
    X86_AT(c, 0xe1791u);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0e1794  je 0xe179b
    X86_AT(c, 0xe1794u);
    if (x86_cc(c, 4)) { goto L_e179b; }
    X86_TICK(c, 7);
    // 0e1796  cmp eax, 0xb
    X86_AT(c, 0xe1796u);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0e1799  jne 0xe179e
    X86_AT(c, 0xe1799u);
    if (x86_cc(c, 5)) { goto L_e179e; }
L_e179b:
    X86_TICK(c, 2);
    // 0e179b  lea edi, [edi + edi*2]
    X86_AT(c, 0xe179bu);
    c.r[7] = (uint32_t)(c.r[7] + c.r[7] * 2);
L_e179e:
    X86_TICK(c, 16);
    // 0e179e  mov eax, edi
    X86_AT(c, 0xe179eu);
    c.r[0] = c.r[7];
    // 0e17a0  pop edi
    X86_AT(c, 0xe17a0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e17a1  ret 
    X86_AT(c, 0xe17a1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1758u, "ran off the end of a function");
}
void f_000e17a4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e17a4  push 0xe146
    X86_AT(c, 0xe17a4u);
    { uint32_t v = 0xE146u; push32(c, v); }
    // 0e17a9  call 0xcc7bc
    X86_AT(c, 0xe17a9u);
    push32(c, 0xe17aeu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe17aeu);
    X86_TICK(c, 11);
    // 0e17ae  add esp, 4
    X86_AT(c, 0xe17aeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e17b1  mov eax, 0xe12f4
    X86_AT(c, 0xe17b1u);
    c.r[0] = 0xE12F4u;
    // 0e17b6  and eax, eax
    X86_AT(c, 0xe17b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e17b8  je 0xe17d5
    X86_AT(c, 0xe17b8u);
    if (x86_cc(c, 4)) { goto L_e17d5; }
    X86_TICK(c, 9);
    // 0e17ba  push 0xe148
    X86_AT(c, 0xe17bau);
    { uint32_t v = 0xE148u; push32(c, v); }
    // 0e17bf  call 0xcc7bc
    X86_AT(c, 0xe17bfu);
    push32(c, 0xe17c4u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe17c4u);
    X86_TICK(c, 9);
    // 0e17c4  push 5
    X86_AT(c, 0xe17c4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e17c6  call 0xc5ca4
    X86_AT(c, 0xe17c6u);
    push32(c, 0xe17cbu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe17cbu);
    X86_TICK(c, 11);
    // 0e17cb  mov eax, 1
    X86_AT(c, 0xe17cbu);
    c.r[0] = 0x1u;
    // 0e17d0  add esp, 8
    X86_AT(c, 0xe17d0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e17d3  jmp 0xe17d7
    X86_AT(c, 0xe17d3u);
    goto L_e17d7;
L_e17d5:
    X86_TICK(c, 2);
    // 0e17d5  sub eax, eax
    X86_AT(c, 0xe17d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e17d7:
    X86_TICK(c, 10);
    // 0e17d7  ret 
    X86_AT(c, 0xe17d7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe17a4u, "ran off the end of a function");
}
void f_000e17d8(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0e17d8  push ebx
    X86_AT(c, 0xe17d8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e17d9  push esi
    X86_AT(c, 0xe17d9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e17da  push edi
    X86_AT(c, 0xe17dau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e17db  push 0xf
    X86_AT(c, 0xe17dbu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e17dd  push 0xe17c
    X86_AT(c, 0xe17ddu);
    { uint32_t v = 0xE17Cu; push32(c, v); }
    // 0e17e2  call 0xcc830
    X86_AT(c, 0xe17e2u);
    push32(c, 0xe17e7u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xe17e7u);
    X86_TICK(c, 7);
    // 0e17e7  call 0xe12c8
    X86_AT(c, 0xe17e7u);
    push32(c, 0xe17ecu); x86_call_known(c, 0xe12c8u, f_000e12c8); X86_RET(c, 0xe17ecu);
    X86_TICK(c, 12);
    // 0e17ec  xchg ebx, eax
    X86_AT(c, 0xe17ecu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e17ed  add esp, 8
    X86_AT(c, 0xe17edu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e17f0  cmp bl, 3
    X86_AT(c, 0xe17f0u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0e17f3  je 0xe1822
    X86_AT(c, 0xe17f3u);
    if (x86_cc(c, 4)) { goto L_e1822; }
    X86_TICK(c, 7);
    // 0e17f5  cmp bl, 7
    X86_AT(c, 0xe17f5u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0e17f8  je 0xe1822
    X86_AT(c, 0xe17f8u);
    if (x86_cc(c, 4)) { goto L_e1822; }
    X86_TICK(c, 7);
    // 0e17fa  cmp bl, 5
    X86_AT(c, 0xe17fau);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0e17fd  je 0xe1822
    X86_AT(c, 0xe17fdu);
    if (x86_cc(c, 4)) { goto L_e1822; }
    X86_TICK(c, 7);
    // 0e17ff  cmp bl, 6
    X86_AT(c, 0xe17ffu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0e1802  je 0xe1822
    X86_AT(c, 0xe1802u);
    if (x86_cc(c, 4)) { goto L_e1822; }
    X86_TICK(c, 9);
    // 0e1804  push 0xe184
    X86_AT(c, 0xe1804u);
    { uint32_t v = 0xE184u; push32(c, v); }
    // 0e1809  call 0xcc7bc
    X86_AT(c, 0xe1809u);
    push32(c, 0xe180eu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe180eu);
    X86_TICK(c, 9);
    // 0e180e  push 5
    X86_AT(c, 0xe180eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e1810  call 0xc5ca4
    X86_AT(c, 0xe1810u);
    push32(c, 0xe1815u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe1815u);
    X86_TICK(c, 11);
    // 0e1815  mov eax, 1
    X86_AT(c, 0xe1815u);
    c.r[0] = 0x1u;
    // 0e181a  add esp, 8
    X86_AT(c, 0xe181au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e181d  jmp 0xe18b3
    X86_AT(c, 0xe181du);
    goto L_e18b3;
L_e1822:
    X86_TICK(c, 15);
    // 0e1822  movzx ebx, bl
    X86_AT(c, 0xe1822u);
    c.r[3] = g8(c, 3);
    // 0e1825  push dword ptr [ebx*4 + 0xaa274]
    X86_AT(c, 0xe1825u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xAA274u))); push32(c, v); }
    // 0e182c  call 0xcc7bc
    X86_AT(c, 0xe182cu);
    push32(c, 0xe1831u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe1831u);
    X86_TICK(c, 9);
    // 0e1831  add esp, 4
    X86_AT(c, 0xe1831u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1834  call 0xe12f4
    X86_AT(c, 0xe1834u);
    push32(c, 0xe1839u); x86_call_known(c, 0xe12f4u, f_000e12f4); X86_RET(c, 0xe1839u);
    X86_TICK(c, 7);
    // 0e1839  and eax, eax
    X86_AT(c, 0xe1839u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e183b  je 0xe18b1
    X86_AT(c, 0xe183bu);
    if (x86_cc(c, 4)) { goto L_e18b1; }
    X86_TICK(c, 12);
    // 0e1841  movzx ebx, bl
    X86_AT(c, 0xe1841u);
    c.r[3] = g8(c, 3);
    // 0e1844  push ebx
    X86_AT(c, 0xe1844u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e1845  call 0xe222c
    X86_AT(c, 0xe1845u);
    push32(c, 0xe184au); x86_call_known(c, 0xe222cu, f_000e222c); X86_RET(c, 0xe184au);
    X86_TICK(c, 18);
    // 0e184a  xchg edi, eax
    X86_AT(c, 0xe184au);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e184b  add edi, dword ptr [0xc2db8]
    X86_AT(c, 0xe184bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xC2DB8u))), 0, 4); }
    // 0e1851  push ebx
    X86_AT(c, 0xe1851u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e1852  call 0xe2250
    X86_AT(c, 0xe1852u);
    push32(c, 0xe1857u); x86_call_known(c, 0xe2250u, f_000e2250); X86_RET(c, 0xe1857u);
    X86_TICK(c, 27);
    // 0e1857  xchg esi, eax
    X86_AT(c, 0xe1857u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e1858  add esi, dword ptr [0xc2dbc]
    X86_AT(c, 0xe1858u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xC2DBCu))), 0, 4); }
    // 0e185e  lea eax, [edi + edi*8]
    X86_AT(c, 0xe185eu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 8);
    // 0e1861  add eax, esi
    X86_AT(c, 0xe1861u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 0e1863  add esp, 8
    X86_AT(c, 0xe1863u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e1866  cmp byte ptr [eax + 0xc2de0], 0
    X86_AT(c, 0xe1866u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xC2DE0u))), 0x0u, 0, 1);
    // 0e186d  jne 0xe18b1
    X86_AT(c, 0xe186du);
    if (x86_cc(c, 5)) { goto L_e18b1; }
    X86_TICK(c, 11);
    // 0e186f  cmp edi, dword ptr [0xc2dc0]
    X86_AT(c, 0xe186fu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xC2DC0u))), 0, 4);
    // 0e1875  je 0xe18b1
    X86_AT(c, 0xe1875u);
    if (x86_cc(c, 4)) { goto L_e18b1; }
    X86_TICK(c, 11);
    // 0e1877  cmp esi, dword ptr [0xc2dc4]
    X86_AT(c, 0xe1877u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xC2DC4u))), 0, 4);
    // 0e187d  je 0xe18b1
    X86_AT(c, 0xe187du);
    if (x86_cc(c, 4)) { goto L_e18b1; }
    X86_TICK(c, 21);
    // 0e187f  mov dl, 0xe
    X86_AT(c, 0xe187fu);
    s8(c, 2, 0xEu);
    // 0e1881  mov byte ptr [eax + 0xc2de0], dl
    X86_AT(c, 0xe1881u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xC2DE0u)), g8(c, 2));
    // 0e1887  push 0
    X86_AT(c, 0xe1887u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1889  push esi
    X86_AT(c, 0xe1889u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e188a  push edi
    X86_AT(c, 0xe188au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e188b  mov edx, 0xe
    X86_AT(c, 0xe188bu);
    c.r[2] = 0xEu;
    // 0e1890  push edx
    X86_AT(c, 0xe1890u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e1891  call 0xe120c
    X86_AT(c, 0xe1891u);
    push32(c, 0xe1896u); x86_call_known(c, 0xe120cu, f_000e120c); X86_RET(c, 0xe1896u);
    X86_TICK(c, 9);
    // 0e1896  push 5
    X86_AT(c, 0xe1896u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e1898  call 0xc5ca4
    X86_AT(c, 0xe1898u);
    push32(c, 0xe189du); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe189du);
    X86_TICK(c, 9);
    // 0e189d  push 0xe1a0
    X86_AT(c, 0xe189du);
    { uint32_t v = 0xE1A0u; push32(c, v); }
    // 0e18a2  call 0xcc7bc
    X86_AT(c, 0xe18a2u);
    push32(c, 0xe18a7u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe18a7u);
    X86_TICK(c, 11);
    // 0e18a7  mov eax, 1
    X86_AT(c, 0xe18a7u);
    c.r[0] = 0x1u;
    // 0e18ac  add esp, 0x18
    X86_AT(c, 0xe18acu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0e18af  jmp 0xe18b3
    X86_AT(c, 0xe18afu);
    goto L_e18b3;
L_e18b1:
    X86_TICK(c, 2);
    // 0e18b1  sub eax, eax
    X86_AT(c, 0xe18b1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e18b3:
    X86_TICK(c, 22);
    // 0e18b3  pop edi
    X86_AT(c, 0xe18b3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e18b4  pop esi
    X86_AT(c, 0xe18b4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e18b5  pop ebx
    X86_AT(c, 0xe18b5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e18b6  ret 
    X86_AT(c, 0xe18b6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe17d8u, "ran off the end of a function");
}
void f_000e18b8(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0e18b8  push ebx
    X86_AT(c, 0xe18b8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e18b9  push esi
    X86_AT(c, 0xe18b9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e18ba  push edi
    X86_AT(c, 0xe18bau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e18bb  push 0xf
    X86_AT(c, 0xe18bbu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e18bd  push 0xe1b4
    X86_AT(c, 0xe18bdu);
    { uint32_t v = 0xE1B4u; push32(c, v); }
    // 0e18c2  call 0xcc830
    X86_AT(c, 0xe18c2u);
    push32(c, 0xe18c7u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xe18c7u);
    X86_TICK(c, 7);
    // 0e18c7  call 0xe12c8
    X86_AT(c, 0xe18c7u);
    push32(c, 0xe18ccu); x86_call_known(c, 0xe12c8u, f_000e12c8); X86_RET(c, 0xe18ccu);
    X86_TICK(c, 12);
    // 0e18cc  xchg ebx, eax
    X86_AT(c, 0xe18ccu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e18cd  add esp, 8
    X86_AT(c, 0xe18cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e18d0  cmp bl, 3
    X86_AT(c, 0xe18d0u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0e18d3  je 0xe1902
    X86_AT(c, 0xe18d3u);
    if (x86_cc(c, 4)) { goto L_e1902; }
    X86_TICK(c, 7);
    // 0e18d5  cmp bl, 7
    X86_AT(c, 0xe18d5u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0e18d8  je 0xe1902
    X86_AT(c, 0xe18d8u);
    if (x86_cc(c, 4)) { goto L_e1902; }
    X86_TICK(c, 7);
    // 0e18da  cmp bl, 5
    X86_AT(c, 0xe18dau);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0e18dd  je 0xe1902
    X86_AT(c, 0xe18ddu);
    if (x86_cc(c, 4)) { goto L_e1902; }
    X86_TICK(c, 7);
    // 0e18df  cmp bl, 6
    X86_AT(c, 0xe18dfu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0e18e2  je 0xe1902
    X86_AT(c, 0xe18e2u);
    if (x86_cc(c, 4)) { goto L_e1902; }
    X86_TICK(c, 9);
    // 0e18e4  push 0xe1bc
    X86_AT(c, 0xe18e4u);
    { uint32_t v = 0xE1BCu; push32(c, v); }
    // 0e18e9  call 0xcc7bc
    X86_AT(c, 0xe18e9u);
    push32(c, 0xe18eeu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe18eeu);
    X86_TICK(c, 9);
    // 0e18ee  push 5
    X86_AT(c, 0xe18eeu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e18f0  call 0xc5ca4
    X86_AT(c, 0xe18f0u);
    push32(c, 0xe18f5u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe18f5u);
    X86_TICK(c, 11);
    // 0e18f5  mov eax, 1
    X86_AT(c, 0xe18f5u);
    c.r[0] = 0x1u;
    // 0e18fa  add esp, 8
    X86_AT(c, 0xe18fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e18fd  jmp 0xe1979
    X86_AT(c, 0xe18fdu);
    goto L_e1979;
L_e1902:
    X86_TICK(c, 15);
    // 0e1902  movzx ebx, bl
    X86_AT(c, 0xe1902u);
    c.r[3] = g8(c, 3);
    // 0e1905  push dword ptr [ebx*4 + 0xaa274]
    X86_AT(c, 0xe1905u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xAA274u))); push32(c, v); }
    // 0e190c  call 0xcc7bc
    X86_AT(c, 0xe190cu);
    push32(c, 0xe1911u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe1911u);
    X86_TICK(c, 9);
    // 0e1911  add esp, 4
    X86_AT(c, 0xe1911u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1914  call 0xe12f4
    X86_AT(c, 0xe1914u);
    push32(c, 0xe1919u); x86_call_known(c, 0xe12f4u, f_000e12f4); X86_RET(c, 0xe1919u);
    X86_TICK(c, 7);
    // 0e1919  and eax, eax
    X86_AT(c, 0xe1919u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e191b  je 0xe1977
    X86_AT(c, 0xe191bu);
    if (x86_cc(c, 4)) { goto L_e1977; }
    X86_TICK(c, 12);
    // 0e191d  movzx ebx, bl
    X86_AT(c, 0xe191du);
    c.r[3] = g8(c, 3);
    // 0e1920  push ebx
    X86_AT(c, 0xe1920u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e1921  call 0xe222c
    X86_AT(c, 0xe1921u);
    push32(c, 0xe1926u); x86_call_known(c, 0xe222cu, f_000e222c); X86_RET(c, 0xe1926u);
    X86_TICK(c, 18);
    // 0e1926  xchg edi, eax
    X86_AT(c, 0xe1926u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e1927  add edi, dword ptr [0xc2db8]
    X86_AT(c, 0xe1927u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xC2DB8u))), 0, 4); }
    // 0e192d  push ebx
    X86_AT(c, 0xe192du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e192e  call 0xe2250
    X86_AT(c, 0xe192eu);
    push32(c, 0xe1933u); x86_call_known(c, 0xe2250u, f_000e2250); X86_RET(c, 0xe1933u);
    X86_TICK(c, 27);
    // 0e1933  xchg esi, eax
    X86_AT(c, 0xe1933u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e1934  add esi, dword ptr [0xc2dbc]
    X86_AT(c, 0xe1934u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xC2DBCu))), 0, 4); }
    // 0e193a  lea eax, [edi + edi*8]
    X86_AT(c, 0xe193au);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 8);
    // 0e193d  add eax, esi
    X86_AT(c, 0xe193du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 0e193f  add esp, 8
    X86_AT(c, 0xe193fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e1942  cmp byte ptr [eax + 0xc2de0], 0xe
    X86_AT(c, 0xe1942u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xC2DE0u))), 0xEu, 0, 1);
    // 0e1949  jne 0xe1977
    X86_AT(c, 0xe1949u);
    if (x86_cc(c, 5)) { goto L_e1977; }
    X86_TICK(c, 19);
    // 0e194b  sub edx, edx
    X86_AT(c, 0xe194bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e194d  mov byte ptr [eax + 0xc2de0], dl
    X86_AT(c, 0xe194du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xC2DE0u)), g8(c, 2));
    // 0e1953  push edx
    X86_AT(c, 0xe1953u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e1954  push esi
    X86_AT(c, 0xe1954u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e1955  push edi
    X86_AT(c, 0xe1955u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1956  push edx
    X86_AT(c, 0xe1956u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e1957  call 0xe120c
    X86_AT(c, 0xe1957u);
    push32(c, 0xe195cu); x86_call_known(c, 0xe120cu, f_000e120c); X86_RET(c, 0xe195cu);
    X86_TICK(c, 9);
    // 0e195c  push 5
    X86_AT(c, 0xe195cu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e195e  call 0xc5ca4
    X86_AT(c, 0xe195eu);
    push32(c, 0xe1963u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe1963u);
    X86_TICK(c, 9);
    // 0e1963  push 0xe1d8
    X86_AT(c, 0xe1963u);
    { uint32_t v = 0xE1D8u; push32(c, v); }
    // 0e1968  call 0xcc7bc
    X86_AT(c, 0xe1968u);
    push32(c, 0xe196du); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe196du);
    X86_TICK(c, 11);
    // 0e196d  mov eax, 1
    X86_AT(c, 0xe196du);
    c.r[0] = 0x1u;
    // 0e1972  add esp, 0x18
    X86_AT(c, 0xe1972u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0e1975  jmp 0xe1979
    X86_AT(c, 0xe1975u);
    goto L_e1979;
L_e1977:
    X86_TICK(c, 2);
    // 0e1977  sub eax, eax
    X86_AT(c, 0xe1977u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e1979:
    X86_TICK(c, 22);
    // 0e1979  pop edi
    X86_AT(c, 0xe1979u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e197a  pop esi
    X86_AT(c, 0xe197au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e197b  pop ebx
    X86_AT(c, 0xe197bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e197c  ret 
    X86_AT(c, 0xe197cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe18b8u, "ran off the end of a function");
}
void f_000e1980(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e1980  push 0xe1ee
    X86_AT(c, 0xe1980u);
    { uint32_t v = 0xE1EEu; push32(c, v); }
    // 0e1985  call 0xcc7bc
    X86_AT(c, 0xe1985u);
    push32(c, 0xe198au); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe198au);
    X86_TICK(c, 7);
    // 0e198a  call 0xe12f4
    X86_AT(c, 0xe198au);
    push32(c, 0xe198fu); x86_call_known(c, 0xe12f4u, f_000e12f4); X86_RET(c, 0xe198fu);
    X86_TICK(c, 9);
    // 0e198f  add esp, 4
    X86_AT(c, 0xe198fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1992  and eax, eax
    X86_AT(c, 0xe1992u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e1994  je 0xe19e3
    X86_AT(c, 0xe1994u);
    if (x86_cc(c, 4)) { goto L_e19e3; }
    X86_TICK(c, 7);
    // 0e1996  call 0xe1328
    X86_AT(c, 0xe1996u);
    push32(c, 0xe199bu); x86_call_known(c, 0xe1328u, f_000e1328); X86_RET(c, 0xe199bu);
    X86_TICK(c, 7);
    // 0e199b  and eax, eax
    X86_AT(c, 0xe199bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e199d  je 0xe19e3
    X86_AT(c, 0xe199du);
    if (x86_cc(c, 4)) { goto L_e19e3; }
    X86_TICK(c, 9);
    // 0e199f  push 0xe1f0
    X86_AT(c, 0xe199fu);
    { uint32_t v = 0xE1F0u; push32(c, v); }
    // 0e19a4  call 0xcc7bc
    X86_AT(c, 0xe19a4u);
    push32(c, 0xe19a9u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe19a9u);
    X86_TICK(c, 9);
    // 0e19a9  push 0xe238
    X86_AT(c, 0xe19a9u);
    { uint32_t v = 0xE238u; push32(c, v); }
    // 0e19ae  call 0xcc7bc
    X86_AT(c, 0xe19aeu);
    push32(c, 0xe19b3u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe19b3u);
    X86_TICK(c, 9);
    // 0e19b3  push 0xe280
    X86_AT(c, 0xe19b3u);
    { uint32_t v = 0xE280u; push32(c, v); }
    // 0e19b8  call 0xcc7bc
    X86_AT(c, 0xe19b8u);
    push32(c, 0xe19bdu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe19bdu);
    X86_TICK(c, 13);
    // 0e19bd  add esp, 0xc
    X86_AT(c, 0xe19bdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e19c0  mov eax, dword ptr [0xc2dc8]
    X86_AT(c, 0xe19c0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2DC8u)));
    // 0e19c5  cmp eax, 0x3a98
    X86_AT(c, 0xe19c5u);
    (void)x86_sub(c, c.r[0], 0x3A98u, 0, 4);
    // 0e19ca  jge 0xe19d2
    X86_AT(c, 0xe19cau);
    if (x86_cc(c, 13)) { goto L_e19d2; }
    X86_TICK(c, 7);
    // 0e19cc  shl dword ptr [0xc2dc8], 1
    X86_AT(c, 0xe19ccu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC2DC8u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) wr32(ea, r); }
L_e19d2:
    X86_TICK(c, 9);
    // 0e19d2  push 5
    X86_AT(c, 0xe19d2u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e19d4  call 0xc5ca4
    X86_AT(c, 0xe19d4u);
    push32(c, 0xe19d9u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe19d9u);
    X86_TICK(c, 11);
    // 0e19d9  mov eax, 1
    X86_AT(c, 0xe19d9u);
    c.r[0] = 0x1u;
    // 0e19de  add esp, 4
    X86_AT(c, 0xe19deu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e19e1  jmp 0xe19e5
    X86_AT(c, 0xe19e1u);
    goto L_e19e5;
L_e19e3:
    X86_TICK(c, 2);
    // 0e19e3  sub eax, eax
    X86_AT(c, 0xe19e3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e19e5:
    X86_TICK(c, 10);
    // 0e19e5  ret 
    X86_AT(c, 0xe19e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1980u, "ran off the end of a function");
}
void f_000e19e8(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0e19e8  push ebx
    X86_AT(c, 0xe19e8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e19e9  push edi
    X86_AT(c, 0xe19e9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e19ea  push 0xf
    X86_AT(c, 0xe19eau);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e19ec  push 0xe2bc
    X86_AT(c, 0xe19ecu);
    { uint32_t v = 0xE2BCu; push32(c, v); }
    // 0e19f1  call 0xcc830
    X86_AT(c, 0xe19f1u);
    push32(c, 0xe19f6u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xe19f6u);
    X86_TICK(c, 7);
    // 0e19f6  call 0xe12c8
    X86_AT(c, 0xe19f6u);
    push32(c, 0xe19fbu); x86_call_known(c, 0xe12c8u, f_000e12c8); X86_RET(c, 0xe19fbu);
    X86_TICK(c, 12);
    // 0e19fb  xchg ebx, eax
    X86_AT(c, 0xe19fbu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e19fc  add esp, 8
    X86_AT(c, 0xe19fcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e19ff  cmp bl, 3
    X86_AT(c, 0xe19ffu);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0e1a02  je 0xe1a2b
    X86_AT(c, 0xe1a02u);
    if (x86_cc(c, 4)) { goto L_e1a2b; }
    X86_TICK(c, 7);
    // 0e1a04  cmp bl, 7
    X86_AT(c, 0xe1a04u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0e1a07  je 0xe1a2b
    X86_AT(c, 0xe1a07u);
    if (x86_cc(c, 4)) { goto L_e1a2b; }
    X86_TICK(c, 7);
    // 0e1a09  cmp bl, 5
    X86_AT(c, 0xe1a09u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0e1a0c  je 0xe1a2b
    X86_AT(c, 0xe1a0cu);
    if (x86_cc(c, 4)) { goto L_e1a2b; }
    X86_TICK(c, 7);
    // 0e1a0e  cmp bl, 6
    X86_AT(c, 0xe1a0eu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0e1a11  je 0xe1a2b
    X86_AT(c, 0xe1a11u);
    if (x86_cc(c, 4)) { goto L_e1a2b; }
    X86_TICK(c, 9);
    // 0e1a13  push 0xe2c4
    X86_AT(c, 0xe1a13u);
    { uint32_t v = 0xE2C4u; push32(c, v); }
    // 0e1a18  call 0xcc7bc
    X86_AT(c, 0xe1a18u);
    push32(c, 0xe1a1du); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe1a1du);
    X86_TICK(c, 9);
    // 0e1a1d  push 5
    X86_AT(c, 0xe1a1du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e1a1f  call 0xc5ca4
    X86_AT(c, 0xe1a1fu);
    push32(c, 0xe1a24u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe1a24u);
    X86_TICK(c, 11);
    // 0e1a24  sub eax, eax
    X86_AT(c, 0xe1a24u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e1a26  add esp, 8
    X86_AT(c, 0xe1a26u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e1a29  jmp 0xe1a74
    X86_AT(c, 0xe1a29u);
    goto L_e1a74;
L_e1a2b:
    X86_TICK(c, 15);
    // 0e1a2b  movzx ebx, bl
    X86_AT(c, 0xe1a2bu);
    c.r[3] = g8(c, 3);
    // 0e1a2e  push dword ptr [ebx*4 + 0xaa274]
    X86_AT(c, 0xe1a2eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xAA274u))); push32(c, v); }
    // 0e1a35  call 0xcc7bc
    X86_AT(c, 0xe1a35u);
    push32(c, 0xe1a3au); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe1a3au);
    X86_TICK(c, 9);
    // 0e1a3a  add esp, 4
    X86_AT(c, 0xe1a3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1a3d  call 0xe12f4
    X86_AT(c, 0xe1a3du);
    push32(c, 0xe1a42u); x86_call_known(c, 0xe12f4u, f_000e12f4); X86_RET(c, 0xe1a42u);
    X86_TICK(c, 7);
    // 0e1a42  and eax, eax
    X86_AT(c, 0xe1a42u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e1a44  je 0xe1a72
    X86_AT(c, 0xe1a44u);
    if (x86_cc(c, 4)) { goto L_e1a72; }
    X86_TICK(c, 7);
    // 0e1a46  call 0xe1328
    X86_AT(c, 0xe1a46u);
    push32(c, 0xe1a4bu); x86_call_known(c, 0xe1328u, f_000e1328); X86_RET(c, 0xe1a4bu);
    X86_TICK(c, 7);
    // 0e1a4b  and eax, eax
    X86_AT(c, 0xe1a4bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e1a4d  je 0xe1a72
    X86_AT(c, 0xe1a4du);
    if (x86_cc(c, 4)) { goto L_e1a72; }
    X86_TICK(c, 7);
    // 0e1a4f  call 0xe1758
    X86_AT(c, 0xe1a4fu);
    push32(c, 0xe1a54u); x86_call_known(c, 0xe1758u, f_000e1758); X86_RET(c, 0xe1a54u);
    X86_TICK(c, 23);
    // 0e1a54  xchg edi, eax
    X86_AT(c, 0xe1a54u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e1a55  push 0x1f4
    X86_AT(c, 0xe1a55u);
    { uint32_t v = 0x1F4u; push32(c, v); }
    // 0e1a5a  push edi
    X86_AT(c, 0xe1a5au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1a5b  push 5
    X86_AT(c, 0xe1a5bu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e1a5d  push 5
    X86_AT(c, 0xe1a5du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e1a5f  movzx ebx, bl
    X86_AT(c, 0xe1a5fu);
    c.r[3] = g8(c, 3);
    // 0e1a62  push ebx
    X86_AT(c, 0xe1a62u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e1a63  call 0xe1514
    X86_AT(c, 0xe1a63u);
    push32(c, 0xe1a68u); x86_call_known(c, 0xe1514u, f_000e1514); X86_RET(c, 0xe1a68u);
    X86_TICK(c, 11);
    // 0e1a68  mov eax, 1
    X86_AT(c, 0xe1a68u);
    c.r[0] = 0x1u;
    // 0e1a6d  add esp, 0x14
    X86_AT(c, 0xe1a6du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0e1a70  jmp 0xe1a74
    X86_AT(c, 0xe1a70u);
    goto L_e1a74;
L_e1a72:
    X86_TICK(c, 2);
    // 0e1a72  sub eax, eax
    X86_AT(c, 0xe1a72u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e1a74:
    X86_TICK(c, 18);
    // 0e1a74  pop edi
    X86_AT(c, 0xe1a74u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e1a75  pop ebx
    X86_AT(c, 0xe1a75u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e1a76  ret 
    X86_AT(c, 0xe1a76u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe19e8u, "ran off the end of a function");
}
void f_000e1a78(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e1a78  push ebp
    X86_AT(c, 0xe1a78u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e1a79  mov ebp, esp
    X86_AT(c, 0xe1a79u);
    c.r[5] = c.r[4];
    // 0e1a7b  push eax
    X86_AT(c, 0xe1a7bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1a7c  push ebx
    X86_AT(c, 0xe1a7cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e1a7d  push esi
    X86_AT(c, 0xe1a7du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e1a7e  push edi
    X86_AT(c, 0xe1a7eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1a7f  sub ebx, ebx
    X86_AT(c, 0xe1a7fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0e1a81  push 0xe2de
    X86_AT(c, 0xe1a81u);
    { uint32_t v = 0xE2DEu; push32(c, v); }
    // 0e1a86  call 0xcc7bc
    X86_AT(c, 0xe1a86u);
    push32(c, 0xe1a8bu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe1a8bu);
    X86_TICK(c, 7);
    // 0e1a8b  call 0xe12f4
    X86_AT(c, 0xe1a8bu);
    push32(c, 0xe1a90u); x86_call_known(c, 0xe12f4u, f_000e12f4); X86_RET(c, 0xe1a90u);
    X86_TICK(c, 9);
    // 0e1a90  add esp, 4
    X86_AT(c, 0xe1a90u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1a93  cmp ebx, eax
    X86_AT(c, 0xe1a93u);
    (void)x86_sub(c, c.r[3], c.r[0], 0, 4);
    // 0e1a95  je 0xe1b4e
    X86_AT(c, 0xe1a95u);
    if (x86_cc(c, 4)) { goto L_e1b4e; }
L_e1a9b:
    X86_TICK(c, 11);
    // 0e1a9b  push 0xff
    X86_AT(c, 0xe1a9bu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e1aa0  push 1
    X86_AT(c, 0xe1aa0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1aa2  call 0xc5df0
    X86_AT(c, 0xe1aa2u);
    push32(c, 0xe1aa7u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe1aa7u);
    X86_TICK(c, 57);
    // 0e1aa7  cdq 
    X86_AT(c, 0xe1aa7u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e1aa8  mov ecx, 0x13
    X86_AT(c, 0xe1aa8u);
    c.r[1] = 0x13u;
    // 0e1aad  idiv ecx
    X86_AT(c, 0xe1aadu);
    x86_idiv(c, c.r[1], 4, 0xe1aadu);
    // 0e1aaf  mov edi, edx
    X86_AT(c, 0xe1aafu);
    c.r[7] = c.r[2];
    // 0e1ab1  push 0xff
    X86_AT(c, 0xe1ab1u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e1ab6  push 1
    X86_AT(c, 0xe1ab6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1ab8  call 0xc5df0
    X86_AT(c, 0xe1ab8u);
    push32(c, 0xe1abdu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe1abdu);
    X86_TICK(c, 64);
    // 0e1abd  cdq 
    X86_AT(c, 0xe1abdu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e1abe  mov ecx, 9
    X86_AT(c, 0xe1abeu);
    c.r[1] = 0x9u;
    // 0e1ac3  idiv ecx
    X86_AT(c, 0xe1ac3u);
    x86_idiv(c, c.r[1], 4, 0xe1ac3u);
    // 0e1ac5  mov esi, edx
    X86_AT(c, 0xe1ac5u);
    c.r[6] = c.r[2];
    // 0e1ac7  lea eax, [edi + edi*8]
    X86_AT(c, 0xe1ac7u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 8);
    // 0e1aca  add eax, esi
    X86_AT(c, 0xe1acau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 0e1acc  add esp, 0x10
    X86_AT(c, 0xe1accu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e1acf  cmp byte ptr [eax + 0xc2de0], 0
    X86_AT(c, 0xe1acfu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xC2DE0u))), 0x0u, 0, 1);
    // 0e1ad6  jne 0xe1a9b
    X86_AT(c, 0xe1ad6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe1a9bu); goto L_e1a9b; }
    X86_TICK(c, 23);
    // 0e1ad8  push 0
    X86_AT(c, 0xe1ad8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1ada  push dword ptr [0xc2dbc]
    X86_AT(c, 0xe1adau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2DBCu))); push32(c, v); }
    // 0e1ae0  push dword ptr [0xc2db8]
    X86_AT(c, 0xe1ae0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2DB8u))); push32(c, v); }
    // 0e1ae6  push 0
    X86_AT(c, 0xe1ae6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1ae8  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe1ae8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e1aeb  call 0xe120c
    X86_AT(c, 0xe1aebu);
    push32(c, 0xe1af0u); x86_call_known(c, 0xe120cu, f_000e120c); X86_RET(c, 0xe1af0u);
    X86_TICK(c, 21);
    // 0e1af0  push 1
    X86_AT(c, 0xe1af0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1af2  push esi
    X86_AT(c, 0xe1af2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e1af3  push edi
    X86_AT(c, 0xe1af3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1af4  mov eax, dword ptr [0x42b80]
    X86_AT(c, 0xe1af4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x42B80u)));
    // 0e1af9  lea eax, [eax*2 - 0x100]
    X86_AT(c, 0xe1af9u);
    c.r[0] = (uint32_t)(c.r[0] * 2 + 0xFFFFFF00u);
    // 0e1b00  push eax
    X86_AT(c, 0xe1b00u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1b01  call 0xe120c
    X86_AT(c, 0xe1b01u);
    push32(c, 0xe1b06u); x86_call_known(c, 0xe120cu, f_000e120c); X86_RET(c, 0xe1b06u);
    X86_TICK(c, 39);
    // 0e1b06  mov al, byte ptr [0x42b80]
    X86_AT(c, 0xe1b06u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x42B80u))));
    // 0e1b0b  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xe1b0bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e1b0e  mov byte ptr [edx + 0xc2de0], al
    X86_AT(c, 0xe1b0eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xC2DE0u)), g8(c, 0));
    // 0e1b14  mov eax, dword ptr [0xc2db8]
    X86_AT(c, 0xe1b14u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2DB8u)));
    // 0e1b19  lea eax, [eax + eax*8]
    X86_AT(c, 0xe1b19u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e1b1c  add eax, dword ptr [0xc2dbc]
    X86_AT(c, 0xe1b1cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xC2DBCu))), 0, 4); }
    // 0e1b22  mov byte ptr [eax + 0xc2de0], 0
    X86_AT(c, 0xe1b22u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xC2DE0u)), 0x0u);
    // 0e1b29  mov dword ptr [0xc2db8], edi
    X86_AT(c, 0xe1b29u);
    wr32((c.sbase[3] + (uint32_t)(0xC2DB8u)), c.r[7]);
    // 0e1b2f  mov dword ptr [0xc2dbc], esi
    X86_AT(c, 0xe1b2fu);
    wr32((c.sbase[3] + (uint32_t)(0xC2DBCu)), c.r[6]);
    // 0e1b35  mov ebx, 1
    X86_AT(c, 0xe1b35u);
    c.r[3] = 0x1u;
    // 0e1b3a  push 5
    X86_AT(c, 0xe1b3au);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e1b3c  call 0xc5ca4
    X86_AT(c, 0xe1b3cu);
    push32(c, 0xe1b41u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe1b41u);
    X86_TICK(c, 9);
    // 0e1b41  push 0xe2e0
    X86_AT(c, 0xe1b41u);
    { uint32_t v = 0xE2E0u; push32(c, v); }
    // 0e1b46  call 0xcc7bc
    X86_AT(c, 0xe1b46u);
    push32(c, 0xe1b4bu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe1b4bu);
    X86_TICK(c, 2);
    // 0e1b4b  add esp, 0x28
    X86_AT(c, 0xe1b4bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_e1b4e:
    X86_TICK(c, 30);
    // 0e1b4e  mov eax, ebx
    X86_AT(c, 0xe1b4eu);
    c.r[0] = c.r[3];
    // 0e1b50  pop edi
    X86_AT(c, 0xe1b50u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e1b51  pop esi
    X86_AT(c, 0xe1b51u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e1b52  pop ebx
    X86_AT(c, 0xe1b52u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e1b53  leave 
    X86_AT(c, 0xe1b53u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e1b54  ret 
    X86_AT(c, 0xe1b54u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1a78u, "ran off the end of a function");
}
void f_000e1b58(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0e1b58  push ebp
    X86_AT(c, 0xe1b58u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e1b59  mov ebp, esp
    X86_AT(c, 0xe1b59u);
    c.r[5] = c.r[4];
    // 0e1b5b  push edi
    X86_AT(c, 0xe1b5bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1b5c  sub edi, edi
    X86_AT(c, 0xe1b5cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0e1b5e  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xe1b5eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e1b61  cmp edx, 0xa
    X86_AT(c, 0xe1b61u);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0e1b64  ja 0xe1bbd
    X86_AT(c, 0xe1b64u);
    if (x86_cc(c, 7)) { goto L_e1bbd; }
    X86_TICK(c, 7);
    // 0e1b66  jmp dword ptr cs:[edx*4 + 0xe1b6e]
    X86_AT(c, 0xe1b66u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE1B6Eu)));
      switch (t) {
      case 0xe1b9au: goto L_e1b9a;
      case 0xe1ba1u: goto L_e1ba1;
      case 0xe1ba8u: goto L_e1ba8;
      case 0xe1bafu: goto L_e1baf;
      case 0xe1bb6u: goto L_e1bb6;
      case 0xe1bbdu: goto L_e1bbd;
      default: x86_jump(c, t); return; } }
L_e1b9a:
    X86_TICK(c, 7);
    // 0e1b9a  call 0xe17a4
    X86_AT(c, 0xe1b9au);
    push32(c, 0xe1b9fu); x86_call_known(c, 0xe17a4u, f_000e17a4); X86_RET(c, 0xe1b9fu);
    X86_TICK(c, 7);
    // 0e1b9f  jmp 0xe1bc2
    X86_AT(c, 0xe1b9fu);
    goto L_e1bc2;
L_e1ba1:
    X86_TICK(c, 7);
    // 0e1ba1  call 0xe17d8
    X86_AT(c, 0xe1ba1u);
    push32(c, 0xe1ba6u); x86_call_known(c, 0xe17d8u, f_000e17d8); X86_RET(c, 0xe1ba6u);
    X86_TICK(c, 7);
    // 0e1ba6  jmp 0xe1bc2
    X86_AT(c, 0xe1ba6u);
    goto L_e1bc2;
L_e1ba8:
    X86_TICK(c, 7);
    // 0e1ba8  call 0xe18b8
    X86_AT(c, 0xe1ba8u);
    push32(c, 0xe1badu); x86_call_known(c, 0xe18b8u, f_000e18b8); X86_RET(c, 0xe1badu);
    X86_TICK(c, 7);
    // 0e1bad  jmp 0xe1bc2
    X86_AT(c, 0xe1badu);
    goto L_e1bc2;
L_e1baf:
    X86_TICK(c, 7);
    // 0e1baf  call 0xe1980
    X86_AT(c, 0xe1bafu);
    push32(c, 0xe1bb4u); x86_call_known(c, 0xe1980u, f_000e1980); X86_RET(c, 0xe1bb4u);
    X86_TICK(c, 7);
    // 0e1bb4  jmp 0xe1bc2
    X86_AT(c, 0xe1bb4u);
    goto L_e1bc2;
L_e1bb6:
    X86_TICK(c, 7);
    // 0e1bb6  call 0xe1a78
    X86_AT(c, 0xe1bb6u);
    push32(c, 0xe1bbbu); x86_call_known(c, 0xe1a78u, f_000e1a78); X86_RET(c, 0xe1bbbu);
    X86_TICK(c, 7);
    // 0e1bbb  jmp 0xe1bc2
    X86_AT(c, 0xe1bbbu);
    goto L_e1bc2;
L_e1bbd:
    X86_TICK(c, 7);
    // 0e1bbd  call 0xe19e8
    X86_AT(c, 0xe1bbdu);
    push32(c, 0xe1bc2u); x86_call_known(c, 0xe19e8u, f_000e19e8); X86_RET(c, 0xe1bc2u);
L_e1bc2:
    X86_TICK(c, 10);
    // 0e1bc2  xchg edi, eax
    X86_AT(c, 0xe1bc2u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e1bc3  and edi, edi
    X86_AT(c, 0xe1bc3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e1bc5  jne 0xe1bdb
    X86_AT(c, 0xe1bc5u);
    if (x86_cc(c, 5)) { goto L_e1bdb; }
    X86_TICK(c, 9);
    // 0e1bc7  push 5
    X86_AT(c, 0xe1bc7u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e1bc9  call 0xc5ca4
    X86_AT(c, 0xe1bc9u);
    push32(c, 0xe1bceu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe1bceu);
    X86_TICK(c, 9);
    // 0e1bce  push 0xe2f8
    X86_AT(c, 0xe1bceu);
    { uint32_t v = 0xE2F8u; push32(c, v); }
    // 0e1bd3  call 0xcc7bc
    X86_AT(c, 0xe1bd3u);
    push32(c, 0xe1bd8u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe1bd8u);
    X86_TICK(c, 2);
    // 0e1bd8  add esp, 8
    X86_AT(c, 0xe1bd8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_e1bdb:
    X86_TICK(c, 20);
    // 0e1bdb  pop edi
    X86_AT(c, 0xe1bdbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e1bdc  leave 
    X86_AT(c, 0xe1bdcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e1bdd  ret 
    X86_AT(c, 0xe1bddu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1b58u, "ran off the end of a function");
}
void f_000e1be0(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e1be0  push 0xf
    X86_AT(c, 0xe1be0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e1be2  push 0xe314
    X86_AT(c, 0xe1be2u);
    { uint32_t v = 0xE314u; push32(c, v); }
    // 0e1be7  call 0xcc830
    X86_AT(c, 0xe1be7u);
    push32(c, 0xe1becu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xe1becu);
    X86_TICK(c, 18);
    // 0e1bec  mov eax, dword ptr [0xb032a]
    X86_AT(c, 0xe1becu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB032Au)));
    // 0e1bf1  push dword ptr [eax*4 + 0xa1e44]
    X86_AT(c, 0xe1bf1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1E44u))); push32(c, v); }
    // 0e1bf8  push 7
    X86_AT(c, 0xe1bf8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e1bfa  call 0xc8cdc
    X86_AT(c, 0xe1bfau);
    push32(c, 0xe1bffu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe1bffu);
    X86_TICK(c, 18);
    // 0e1bff  mov eax, dword ptr [0xb032a]
    X86_AT(c, 0xe1bffu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB032Au)));
    // 0e1c04  add esp, 0x10
    X86_AT(c, 0xe1c04u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e1c07  cmp dword ptr [eax*4 + 0xb03d2], 0
    X86_AT(c, 0xe1c07u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB03D2u))), 0x0u, 0, 4);
    // 0e1c0f  jne 0xe1c1f
    X86_AT(c, 0xe1c0fu);
    if (x86_cc(c, 5)) { goto L_e1c1f; }
    X86_TICK(c, 9);
    // 0e1c11  push 7
    X86_AT(c, 0xe1c11u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e1c13  call 0xca3cc
    X86_AT(c, 0xe1c13u);
    push32(c, 0xe1c18u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xe1c18u);
    X86_TICK(c, 9);
    // 0e1c18  push 0xe324
    X86_AT(c, 0xe1c18u);
    { uint32_t v = 0xE324u; push32(c, v); }
    // 0e1c1d  jmp 0xe1c59
    X86_AT(c, 0xe1c1du);
    goto L_e1c59;
L_e1c1f:
    X86_TICK(c, 11);
    // 0e1c1f  mov eax, dword ptr [0xb032a]
    X86_AT(c, 0xe1c1fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB032Au)));
    // 0e1c24  and eax, eax
    X86_AT(c, 0xe1c24u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e1c26  je 0xe1c2f
    X86_AT(c, 0xe1c26u);
    if (x86_cc(c, 4)) { goto L_e1c2f; }
    X86_TICK(c, 6);
    // 0e1c28  dec dword ptr [eax*4 + 0xb03d2]
    X86_AT(c, 0xe1c28u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB03D2u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_e1c2f:
    X86_TICK(c, 11);
    // 0e1c2f  mov eax, dword ptr [0xb032a]
    X86_AT(c, 0xe1c2fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB032Au)));
    // 0e1c34  cmp eax, 3
    X86_AT(c, 0xe1c34u);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0e1c37  je 0xe1c6a
    X86_AT(c, 0xe1c37u);
    if (x86_cc(c, 4)) { goto L_e1c6a; }
    X86_TICK(c, 7);
    // 0e1c39  cmp eax, 7
    X86_AT(c, 0xe1c39u);
    (void)x86_sub(c, c.r[0], 0x7u, 0, 4);
    // 0e1c3c  je 0xe1c6a
    X86_AT(c, 0xe1c3cu);
    if (x86_cc(c, 4)) { goto L_e1c6a; }
    X86_TICK(c, 7);
    // 0e1c3e  cmp eax, 8
    X86_AT(c, 0xe1c3eu);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 0e1c41  je 0xe1c6a
    X86_AT(c, 0xe1c41u);
    if (x86_cc(c, 4)) { goto L_e1c6a; }
    X86_TICK(c, 7);
    // 0e1c43  cmp eax, 9
    X86_AT(c, 0xe1c43u);
    (void)x86_sub(c, c.r[0], 0x9u, 0, 4);
    // 0e1c46  je 0xe1c6a
    X86_AT(c, 0xe1c46u);
    if (x86_cc(c, 4)) { goto L_e1c6a; }
    X86_TICK(c, 7);
    // 0e1c48  cmp eax, 0xa
    X86_AT(c, 0xe1c48u);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0e1c4b  je 0xe1c6a
    X86_AT(c, 0xe1c4bu);
    if (x86_cc(c, 4)) { goto L_e1c6a; }
    X86_TICK(c, 9);
    // 0e1c4d  push 7
    X86_AT(c, 0xe1c4du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e1c4f  call 0xca3cc
    X86_AT(c, 0xe1c4fu);
    push32(c, 0xe1c54u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xe1c54u);
    X86_TICK(c, 2);
    // 0e1c54  push 0xe374
    X86_AT(c, 0xe1c54u);
    { uint32_t v = 0xE374u; push32(c, v); }
L_e1c59:
    X86_TICK(c, 7);
    // 0e1c59  call 0xcc7bc
    X86_AT(c, 0xe1c59u);
    push32(c, 0xe1c5eu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe1c5eu);
    X86_TICK(c, 9);
    // 0e1c5e  push 5
    X86_AT(c, 0xe1c5eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e1c60  call 0xc5ca4
    X86_AT(c, 0xe1c60u);
    push32(c, 0xe1c65u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe1c65u);
    X86_TICK(c, 9);
    // 0e1c65  add esp, 0xc
    X86_AT(c, 0xe1c65u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e1c68  jmp 0xe1c78
    X86_AT(c, 0xe1c68u);
    goto L_e1c78;
L_e1c6a:
    X86_TICK(c, 12);
    // 0e1c6a  push dword ptr [0xb032a]
    X86_AT(c, 0xe1c6au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB032Au))); push32(c, v); }
    // 0e1c70  call 0xe1b58
    X86_AT(c, 0xe1c70u);
    push32(c, 0xe1c75u); x86_call_known(c, 0xe1b58u, f_000e1b58); X86_RET(c, 0xe1c75u);
    X86_TICK(c, 2);
    // 0e1c75  add esp, 4
    X86_AT(c, 0xe1c75u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e1c78:
    X86_TICK(c, 10);
    // 0e1c78  ret 
    X86_AT(c, 0xe1c78u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1be0u, "ran off the end of a function");
}
void f_000e1c7c(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0e1c7c  push ebp
    X86_AT(c, 0xe1c7cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e1c7d  mov ebp, esp
    X86_AT(c, 0xe1c7du);
    c.r[5] = c.r[4];
    // 0e1c7f  push esi
    X86_AT(c, 0xe1c7fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e1c80  push edi
    X86_AT(c, 0xe1c80u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1c81  mov eax, 0xc2db8
    X86_AT(c, 0xe1c81u);
    c.r[0] = 0xC2DB8u;
    // 0e1c86  mov edi, dword ptr [eax]
    X86_AT(c, 0xe1c86u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0e1c88  add edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe1c88u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 0e1c8b  mov esi, dword ptr [eax + 4]
    X86_AT(c, 0xe1c8bu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 0e1c8e  add esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe1c8eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0e1c91  and edi, edi
    X86_AT(c, 0xe1c91u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e1c93  jle 0xe1cb7
    X86_AT(c, 0xe1c93u);
    if (x86_cc(c, 14)) { goto L_e1cb7; }
    X86_TICK(c, 7);
    // 0e1c95  cmp edi, 0x13
    X86_AT(c, 0xe1c95u);
    (void)x86_sub(c, c.r[7], 0x13u, 0, 4);
    // 0e1c98  jge 0xe1cb7
    X86_AT(c, 0xe1c98u);
    if (x86_cc(c, 13)) { goto L_e1cb7; }
    X86_TICK(c, 7);
    // 0e1c9a  and esi, esi
    X86_AT(c, 0xe1c9au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e1c9c  jle 0xe1cb7
    X86_AT(c, 0xe1c9cu);
    if (x86_cc(c, 14)) { goto L_e1cb7; }
    X86_TICK(c, 7);
    // 0e1c9e  cmp esi, 9
    X86_AT(c, 0xe1c9eu);
    (void)x86_sub(c, c.r[6], 0x9u, 0, 4);
    // 0e1ca1  jge 0xe1cb7
    X86_AT(c, 0xe1ca1u);
    if (x86_cc(c, 13)) { goto L_e1cb7; }
    X86_TICK(c, 16);
    // 0e1ca3  lea edx, [edi + edi*8]
    X86_AT(c, 0xe1ca3u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 8);
    // 0e1ca6  lea ecx, [esi + edx*1]
    X86_AT(c, 0xe1ca6u);
    c.r[1] = (uint32_t)(c.r[6] + c.r[2]);
    // 0e1ca9  cmp byte ptr [eax + ecx*1 + 0x28], 0xa0
    X86_AT(c, 0xe1ca9u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x28u))), 0xA0u, 0, 1);
    // 0e1cae  jne 0xe1cb7
    X86_AT(c, 0xe1caeu);
    if (x86_cc(c, 5)) { goto L_e1cb7; }
    X86_TICK(c, 9);
    // 0e1cb0  mov eax, 1
    X86_AT(c, 0xe1cb0u);
    c.r[0] = 0x1u;
    // 0e1cb5  jmp 0xe1cb9
    X86_AT(c, 0xe1cb5u);
    goto L_e1cb9;
L_e1cb7:
    X86_TICK(c, 2);
    // 0e1cb7  sub eax, eax
    X86_AT(c, 0xe1cb7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e1cb9:
    X86_TICK(c, 24);
    // 0e1cb9  pop edi
    X86_AT(c, 0xe1cb9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e1cba  pop esi
    X86_AT(c, 0xe1cbau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e1cbb  leave 
    X86_AT(c, 0xe1cbbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e1cbc  ret 
    X86_AT(c, 0xe1cbcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1c7cu, "ran off the end of a function");
}
void f_000e1cc0(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e1cc0  push 1
    X86_AT(c, 0xe1cc0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1cc2  push 1
    X86_AT(c, 0xe1cc2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1cc4  call 0xe1c7c
    X86_AT(c, 0xe1cc4u);
    push32(c, 0xe1cc9u); x86_call_known(c, 0xe1c7cu, f_000e1c7c); X86_RET(c, 0xe1cc9u);
    X86_TICK(c, 7);
    // 0e1cc9  and eax, eax
    X86_AT(c, 0xe1cc9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e1ccb  jne 0xe1d49
    X86_AT(c, 0xe1ccbu);
    if (x86_cc(c, 5)) { goto L_e1d49; }
    X86_TICK(c, 11);
    // 0e1cd1  push 0
    X86_AT(c, 0xe1cd1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1cd3  push 1
    X86_AT(c, 0xe1cd3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1cd5  call 0xe1c7c
    X86_AT(c, 0xe1cd5u);
    push32(c, 0xe1cdau); x86_call_known(c, 0xe1c7cu, f_000e1c7c); X86_RET(c, 0xe1cdau);
    X86_TICK(c, 9);
    // 0e1cda  add esp, 8
    X86_AT(c, 0xe1cdau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e1cdd  and eax, eax
    X86_AT(c, 0xe1cddu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e1cdf  jne 0xe1d49
    X86_AT(c, 0xe1cdfu);
    if (x86_cc(c, 5)) { goto L_e1d49; }
    X86_TICK(c, 11);
    // 0e1ce5  push 1
    X86_AT(c, 0xe1ce5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1ce7  push 0
    X86_AT(c, 0xe1ce7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1ce9  call 0xe1c7c
    X86_AT(c, 0xe1ce9u);
    push32(c, 0xe1ceeu); x86_call_known(c, 0xe1c7cu, f_000e1c7c); X86_RET(c, 0xe1ceeu);
    X86_TICK(c, 9);
    // 0e1cee  add esp, 8
    X86_AT(c, 0xe1ceeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e1cf1  and eax, eax
    X86_AT(c, 0xe1cf1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e1cf3  jne 0xe1d49
    X86_AT(c, 0xe1cf3u);
    if (x86_cc(c, 5)) { goto L_e1d49; }
    X86_TICK(c, 11);
    // 0e1cf5  push 0xffffffff
    X86_AT(c, 0xe1cf5u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0e1cf7  push 0xffffffff
    X86_AT(c, 0xe1cf7u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0e1cf9  call 0xe1c7c
    X86_AT(c, 0xe1cf9u);
    push32(c, 0xe1cfeu); x86_call_known(c, 0xe1c7cu, f_000e1c7c); X86_RET(c, 0xe1cfeu);
    X86_TICK(c, 9);
    // 0e1cfe  add esp, 8
    X86_AT(c, 0xe1cfeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e1d01  and eax, eax
    X86_AT(c, 0xe1d01u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e1d03  jne 0xe1d49
    X86_AT(c, 0xe1d03u);
    if (x86_cc(c, 5)) { goto L_e1d49; }
    X86_TICK(c, 11);
    // 0e1d05  push 0
    X86_AT(c, 0xe1d05u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1d07  push 0xffffffff
    X86_AT(c, 0xe1d07u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0e1d09  call 0xe1c7c
    X86_AT(c, 0xe1d09u);
    push32(c, 0xe1d0eu); x86_call_known(c, 0xe1c7cu, f_000e1c7c); X86_RET(c, 0xe1d0eu);
    X86_TICK(c, 9);
    // 0e1d0e  add esp, 8
    X86_AT(c, 0xe1d0eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e1d11  and eax, eax
    X86_AT(c, 0xe1d11u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e1d13  jne 0xe1d49
    X86_AT(c, 0xe1d13u);
    if (x86_cc(c, 5)) { goto L_e1d49; }
    X86_TICK(c, 11);
    // 0e1d15  push 0xffffffff
    X86_AT(c, 0xe1d15u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0e1d17  push 0
    X86_AT(c, 0xe1d17u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1d19  call 0xe1c7c
    X86_AT(c, 0xe1d19u);
    push32(c, 0xe1d1eu); x86_call_known(c, 0xe1c7cu, f_000e1c7c); X86_RET(c, 0xe1d1eu);
    X86_TICK(c, 9);
    // 0e1d1e  add esp, 8
    X86_AT(c, 0xe1d1eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e1d21  and eax, eax
    X86_AT(c, 0xe1d21u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e1d23  jne 0xe1d49
    X86_AT(c, 0xe1d23u);
    if (x86_cc(c, 5)) { goto L_e1d49; }
    X86_TICK(c, 11);
    // 0e1d25  push 0xffffffff
    X86_AT(c, 0xe1d25u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0e1d27  push 1
    X86_AT(c, 0xe1d27u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1d29  call 0xe1c7c
    X86_AT(c, 0xe1d29u);
    push32(c, 0xe1d2eu); x86_call_known(c, 0xe1c7cu, f_000e1c7c); X86_RET(c, 0xe1d2eu);
    X86_TICK(c, 9);
    // 0e1d2e  add esp, 8
    X86_AT(c, 0xe1d2eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e1d31  and eax, eax
    X86_AT(c, 0xe1d31u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e1d33  jne 0xe1d49
    X86_AT(c, 0xe1d33u);
    if (x86_cc(c, 5)) { goto L_e1d49; }
    X86_TICK(c, 11);
    // 0e1d35  push 1
    X86_AT(c, 0xe1d35u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1d37  push 0xffffffff
    X86_AT(c, 0xe1d37u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0e1d39  call 0xe1c7c
    X86_AT(c, 0xe1d39u);
    push32(c, 0xe1d3eu); x86_call_known(c, 0xe1c7cu, f_000e1c7c); X86_RET(c, 0xe1d3eu);
    X86_TICK(c, 9);
    // 0e1d3e  add esp, 8
    X86_AT(c, 0xe1d3eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e1d41  and eax, eax
    X86_AT(c, 0xe1d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e1d43  jne 0xe1d49
    X86_AT(c, 0xe1d43u);
    if (x86_cc(c, 5)) { goto L_e1d49; }
    X86_TICK(c, 9);
    // 0e1d45  sub eax, eax
    X86_AT(c, 0xe1d45u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e1d47  jmp 0xe1d4b
    X86_AT(c, 0xe1d47u);
    goto L_e1d4b;
L_e1d49:
    X86_TICK(c, 2);
    // 0e1d49  mov al, 1
    X86_AT(c, 0xe1d49u);
    s8(c, 0, 0x1u);
L_e1d4b:
    X86_TICK(c, 15);
    // 0e1d4b  movzx eax, al
    X86_AT(c, 0xe1d4bu);
    c.r[0] = g8(c, 0);
    // 0e1d4e  add esp, 8
    X86_AT(c, 0xe1d4eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e1d51  ret 
    X86_AT(c, 0xe1d51u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1cc0u, "ran off the end of a function");
}
void f_000e1d54(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0e1d54  push esi
    X86_AT(c, 0xe1d54u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e1d55  push edi
    X86_AT(c, 0xe1d55u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1d56  push 0xe390
    X86_AT(c, 0xe1d56u);
    { uint32_t v = 0xE390u; push32(c, v); }
    // 0e1d5b  push 7
    X86_AT(c, 0xe1d5bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e1d5d  call 0xc8cdc
    X86_AT(c, 0xe1d5du);
    push32(c, 0xe1d62u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe1d62u);
    X86_TICK(c, 9);
    // 0e1d62  push 0x1e
    X86_AT(c, 0xe1d62u);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 0e1d64  call 0xd6660
    X86_AT(c, 0xe1d64u);
    push32(c, 0xe1d69u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xe1d69u);
    X86_TICK(c, 14);
    // 0e1d69  add esp, 0xc
    X86_AT(c, 0xe1d69u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e1d6c  cmp dword ptr [0xc2e9c], 0
    X86_AT(c, 0xe1d6cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2E9Cu))), 0x0u, 0, 4);
    // 0e1d73  jne 0xe1d7e
    X86_AT(c, 0xe1d73u);
    if (x86_cc(c, 5)) { goto L_e1d7e; }
    X86_TICK(c, 7);
    // 0e1d75  call 0xe1cc0
    X86_AT(c, 0xe1d75u);
    push32(c, 0xe1d7au); x86_call_known(c, 0xe1cc0u, f_000e1cc0); X86_RET(c, 0xe1d7au);
    X86_TICK(c, 7);
    // 0e1d7a  and eax, eax
    X86_AT(c, 0xe1d7au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e1d7c  jne 0xe1d9e
    X86_AT(c, 0xe1d7cu);
    if (x86_cc(c, 5)) { goto L_e1d9e; }
L_e1d7e:
    X86_TICK(c, 9);
    // 0e1d7e  push 7
    X86_AT(c, 0xe1d7eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e1d80  call 0xca3cc
    X86_AT(c, 0xe1d80u);
    push32(c, 0xe1d85u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xe1d85u);
    X86_TICK(c, 9);
    // 0e1d85  push 0xe3a8
    X86_AT(c, 0xe1d85u);
    { uint32_t v = 0xE3A8u; push32(c, v); }
    // 0e1d8a  call 0xcc7bc
    X86_AT(c, 0xe1d8au);
    push32(c, 0xe1d8fu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe1d8fu);
    X86_TICK(c, 9);
    // 0e1d8f  push 1
    X86_AT(c, 0xe1d8fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1d91  call 0xc5ca4
    X86_AT(c, 0xe1d91u);
    push32(c, 0xe1d96u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe1d96u);
    X86_TICK(c, 9);
    // 0e1d96  add esp, 0xc
    X86_AT(c, 0xe1d96u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e1d99  jmp 0xe1e3a
    X86_AT(c, 0xe1d99u);
    goto L_e1e3a;
L_e1d9e:
    X86_TICK(c, 49);
    // 0e1d9e  mov eax, 1
    X86_AT(c, 0xe1d9eu);
    c.r[0] = 0x1u;
    // 0e1da3  mov dword ptr [0xc2e98], eax
    X86_AT(c, 0xe1da3u);
    wr32((c.sbase[3] + (uint32_t)(0xC2E98u)), c.r[0]);
    // 0e1da8  mov dword ptr [0xbef90], eax
    X86_AT(c, 0xe1da8u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), c.r[0]);
    // 0e1dad  mov dword ptr [0xc2e9c], eax
    X86_AT(c, 0xe1dadu);
    wr32((c.sbase[3] + (uint32_t)(0xC2E9Cu)), c.r[0]);
    // 0e1db2  mov byte ptr [0xc2e62], 0
    X86_AT(c, 0xe1db2u);
    wr8((c.sbase[3] + (uint32_t)(0xC2E62u)), 0x0u);
    // 0e1db9  mov dword ptr [0xc2dd8], 0
    X86_AT(c, 0xe1db9u);
    wr32((c.sbase[3] + (uint32_t)(0xC2DD8u)), 0x0u);
    // 0e1dc3  mov edi, dword ptr [0xb02fe]
    X86_AT(c, 0xe1dc3u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xB02FEu)));
    // 0e1dc9  lea edi, [edi + edi*2]
    X86_AT(c, 0xe1dc9u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0e1dcc  xchg edi, eax
    X86_AT(c, 0xe1dccu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e1dcd  cdq 
    X86_AT(c, 0xe1dcdu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e1dce  sub eax, edx
    X86_AT(c, 0xe1dceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e1dd0  sar eax, 1
    X86_AT(c, 0xe1dd0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e1dd2  cdq 
    X86_AT(c, 0xe1dd2u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e1dd3  sub eax, edx
    X86_AT(c, 0xe1dd3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e1dd5  sar eax, 1
    X86_AT(c, 0xe1dd5u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e1dd7  xchg edi, eax
    X86_AT(c, 0xe1dd7u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e1dd8  push 0xf
    X86_AT(c, 0xe1dd8u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e1dda  push 0xe3e4
    X86_AT(c, 0xe1ddau);
    { uint32_t v = 0xE3E4u; push32(c, v); }
    // 0e1ddf  call 0xcc830
    X86_AT(c, 0xe1ddfu);
    push32(c, 0xe1de4u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xe1de4u);
    X86_TICK(c, 13);
    // 0e1de4  push 4
    X86_AT(c, 0xe1de4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e1de6  push edi
    X86_AT(c, 0xe1de6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1de7  push 7
    X86_AT(c, 0xe1de7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e1de9  call 0xc8cb8
    X86_AT(c, 0xe1de9u);
    push32(c, 0xe1deeu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xe1deeu);
    X86_TICK(c, 9);
    // 0e1dee  push 0xe3f4
    X86_AT(c, 0xe1deeu);
    { uint32_t v = 0xE3F4u; push32(c, v); }
    // 0e1df3  call 0xcc7bc
    X86_AT(c, 0xe1df3u);
    push32(c, 0xe1df8u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe1df8u);
    X86_TICK(c, 4);
    // 0e1df8  sub esi, esi
    X86_AT(c, 0xe1df8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e1dfa  add esp, 0x18
    X86_AT(c, 0xe1dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_e1dfd:
    X86_TICK(c, 7);
    // 0e1dfd  cmp esi, 5
    X86_AT(c, 0xe1dfdu);
    (void)x86_sub(c, c.r[6], 0x5u, 0, 4);
    // 0e1e00  jge 0xe1e0f
    X86_AT(c, 0xe1e00u);
    if (x86_cc(c, 13)) { goto L_e1e0f; }
    X86_TICK(c, 9);
    // 0e1e02  push 8
    X86_AT(c, 0xe1e02u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e1e04  call 0xc5ca4
    X86_AT(c, 0xe1e04u);
    push32(c, 0xe1e09u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe1e09u);
    X86_TICK(c, 11);
    // 0e1e09  inc esi
    X86_AT(c, 0xe1e09u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e1e0a  add esp, 4
    X86_AT(c, 0xe1e0au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1e0d  jmp 0xe1dfd
    X86_AT(c, 0xe1e0du);
    X86_POLL(c, 0xe1dfdu); goto L_e1dfd;
L_e1e0f:
    X86_TICK(c, 9);
    // 0e1e0f  push 0xe41c
    X86_AT(c, 0xe1e0fu);
    { uint32_t v = 0xE41Cu; push32(c, v); }
    // 0e1e14  call 0xcc7bc
    X86_AT(c, 0xe1e14u);
    push32(c, 0xe1e19u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe1e19u);
    X86_TICK(c, 14);
    // 0e1e19  sub dword ptr [0xb02fe], edi
    X86_AT(c, 0xe1e19u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB02FEu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 0e1e1f  call 0xcc628
    X86_AT(c, 0xe1e1fu);
    push32(c, 0xe1e24u); x86_call_known(c, 0xcc628u, f_000cc628); X86_RET(c, 0xe1e24u);
    X86_TICK(c, 14);
    // 0e1e24  add esp, 4
    X86_AT(c, 0xe1e24u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1e27  cmp dword ptr [0xc2e94], 0x1e
    X86_AT(c, 0xe1e27u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2E94u))), 0x1Eu, 0, 4);
    // 0e1e2e  jne 0xe1e3a
    X86_AT(c, 0xe1e2eu);
    if (x86_cc(c, 5)) { goto L_e1e3a; }
    X86_TICK(c, 2);
    // 0e1e30  mov dword ptr [0xc2ea0], 1
    X86_AT(c, 0xe1e30u);
    wr32((c.sbase[3] + (uint32_t)(0xC2EA0u)), 0x1u);
L_e1e3a:
    X86_TICK(c, 18);
    // 0e1e3a  pop edi
    X86_AT(c, 0xe1e3au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e1e3b  pop esi
    X86_AT(c, 0xe1e3bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e1e3c  ret 
    X86_AT(c, 0xe1e3cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1d54u, "ran off the end of a function");
}
void f_000e1e40(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0e1e40  push edi
    X86_AT(c, 0xe1e40u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1e41  mov edi, 4
    X86_AT(c, 0xe1e41u);
    c.r[7] = 0x4u;
    // 0e1e46  push 0xf
    X86_AT(c, 0xe1e46u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e1e48  push 0xe460
    X86_AT(c, 0xe1e48u);
    { uint32_t v = 0xE460u; push32(c, v); }
    // 0e1e4d  call 0xcc830
    X86_AT(c, 0xe1e4du);
    push32(c, 0xe1e52u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xe1e52u);
    X86_TICK(c, 27);
    // 0e1e52  push 0xe
    X86_AT(c, 0xe1e52u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0e1e54  push 0xf
    X86_AT(c, 0xe1e54u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e1e56  push 0xf
    X86_AT(c, 0xe1e56u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e1e58  push 0xa
    X86_AT(c, 0xe1e58u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e1e5a  push 0x29
    X86_AT(c, 0xe1e5au);
    { uint32_t v = 0x29u; push32(c, v); }
    // 0e1e5c  push 0xb6
    X86_AT(c, 0xe1e5cu);
    { uint32_t v = 0xB6u; push32(c, v); }
    // 0e1e61  push 0x15a
    X86_AT(c, 0xe1e61u);
    { uint32_t v = 0x15Au; push32(c, v); }
    // 0e1e66  push 0x5a
    X86_AT(c, 0xe1e66u);
    { uint32_t v = 0x5Au; push32(c, v); }
    // 0e1e68  push 0xd
    X86_AT(c, 0xe1e68u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e1e6a  push edi
    X86_AT(c, 0xe1e6au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1e6b  call 0xc9fbc
    X86_AT(c, 0xe1e6bu);
    push32(c, 0xe1e70u); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xe1e70u);
    X86_TICK(c, 9);
    // 0e1e70  push edi
    X86_AT(c, 0xe1e70u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1e71  call 0xca100
    X86_AT(c, 0xe1e71u);
    push32(c, 0xe1e76u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xe1e76u);
    X86_TICK(c, 14);
    // 0e1e76  add esp, 0x34
    X86_AT(c, 0xe1e76u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0e1e79  cmp dword ptr [0xc2e9c], 0
    X86_AT(c, 0xe1e79u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2E9Cu))), 0x0u, 0, 4);
    // 0e1e80  je 0xe1eed
    X86_AT(c, 0xe1e80u);
    if (x86_cc(c, 4)) { goto L_e1eed; }
    X86_TICK(c, 11);
    // 0e1e82  push 2
    X86_AT(c, 0xe1e82u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e1e84  push 0
    X86_AT(c, 0xe1e84u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1e86  call 0xcc814
    X86_AT(c, 0xe1e86u);
    push32(c, 0xe1e8bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe1e8bu);
    X86_TICK(c, 11);
    // 0e1e8b  push 0xe490
    X86_AT(c, 0xe1e8bu);
    { uint32_t v = 0xE490u; push32(c, v); }
    // 0e1e90  push edi
    X86_AT(c, 0xe1e90u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1e91  call 0xc8cdc
    X86_AT(c, 0xe1e91u);
    push32(c, 0xe1e96u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe1e96u);
    X86_TICK(c, 11);
    // 0e1e96  push 3
    X86_AT(c, 0xe1e96u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e1e98  push 0
    X86_AT(c, 0xe1e98u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1e9a  call 0xcc814
    X86_AT(c, 0xe1e9au);
    push32(c, 0xe1e9fu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe1e9fu);
    X86_TICK(c, 11);
    // 0e1e9f  push 0xe4b8
    X86_AT(c, 0xe1e9fu);
    { uint32_t v = 0xE4B8u; push32(c, v); }
    // 0e1ea4  push edi
    X86_AT(c, 0xe1ea4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1ea5  call 0xc8cdc
    X86_AT(c, 0xe1ea5u);
    push32(c, 0xe1eaau); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe1eaau);
    X86_TICK(c, 11);
    // 0e1eaa  push edi
    X86_AT(c, 0xe1eaau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1eab  push 0
    X86_AT(c, 0xe1eabu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1ead  call 0xcc814
    X86_AT(c, 0xe1eadu);
    push32(c, 0xe1eb2u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe1eb2u);
    X86_TICK(c, 11);
    // 0e1eb2  push 0xe4dc
    X86_AT(c, 0xe1eb2u);
    { uint32_t v = 0xE4DCu; push32(c, v); }
    // 0e1eb7  push edi
    X86_AT(c, 0xe1eb7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1eb8  call 0xc8cdc
    X86_AT(c, 0xe1eb8u);
    push32(c, 0xe1ebdu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe1ebdu);
    X86_TICK(c, 11);
    // 0e1ebd  push 5
    X86_AT(c, 0xe1ebdu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e1ebf  push 0
    X86_AT(c, 0xe1ebfu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1ec1  call 0xcc814
    X86_AT(c, 0xe1ec1u);
    push32(c, 0xe1ec6u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe1ec6u);
    X86_TICK(c, 11);
    // 0e1ec6  push 0xe51c
    X86_AT(c, 0xe1ec6u);
    { uint32_t v = 0xE51Cu; push32(c, v); }
    // 0e1ecb  push edi
    X86_AT(c, 0xe1ecbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1ecc  call 0xc8cdc
    X86_AT(c, 0xe1eccu);
    push32(c, 0xe1ed1u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe1ed1u);
    X86_TICK(c, 13);
    // 0e1ed1  add esp, 0x40
    X86_AT(c, 0xe1ed1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e1ed4  push 6
    X86_AT(c, 0xe1ed4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0e1ed6  push 0
    X86_AT(c, 0xe1ed6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1ed8  call 0xcc814
    X86_AT(c, 0xe1ed8u);
    push32(c, 0xe1eddu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe1eddu);
    X86_TICK(c, 11);
    // 0e1edd  push 0xe568
    X86_AT(c, 0xe1eddu);
    { uint32_t v = 0xE568u; push32(c, v); }
    // 0e1ee2  push edi
    X86_AT(c, 0xe1ee2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1ee3  call 0xc8cdc
    X86_AT(c, 0xe1ee3u);
    push32(c, 0xe1ee8u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe1ee8u);
    X86_TICK(c, 9);
    // 0e1ee8  add esp, 0x10
    X86_AT(c, 0xe1ee8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e1eeb  jmp 0xe1f18
    X86_AT(c, 0xe1eebu);
    goto L_e1f18;
L_e1eed:
    X86_TICK(c, 11);
    // 0e1eed  push 3
    X86_AT(c, 0xe1eedu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e1eef  push 0
    X86_AT(c, 0xe1eefu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1ef1  call 0xcc814
    X86_AT(c, 0xe1ef1u);
    push32(c, 0xe1ef6u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe1ef6u);
    X86_TICK(c, 11);
    // 0e1ef6  push 0xe594
    X86_AT(c, 0xe1ef6u);
    { uint32_t v = 0xE594u; push32(c, v); }
    // 0e1efb  push edi
    X86_AT(c, 0xe1efbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1efc  call 0xc8cdc
    X86_AT(c, 0xe1efcu);
    push32(c, 0xe1f01u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe1f01u);
    X86_TICK(c, 11);
    // 0e1f01  push 4
    X86_AT(c, 0xe1f01u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e1f03  push 0
    X86_AT(c, 0xe1f03u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1f05  call 0xcc814
    X86_AT(c, 0xe1f05u);
    push32(c, 0xe1f0au); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe1f0au);
    X86_TICK(c, 11);
    // 0e1f0a  push 0xe5e0
    X86_AT(c, 0xe1f0au);
    { uint32_t v = 0xE5E0u; push32(c, v); }
    // 0e1f0f  push edi
    X86_AT(c, 0xe1f0fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1f10  call 0xc8cdc
    X86_AT(c, 0xe1f10u);
    push32(c, 0xe1f15u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe1f15u);
    X86_TICK(c, 2);
    // 0e1f15  add esp, 0x20
    X86_AT(c, 0xe1f15u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_e1f18:
    X86_TICK(c, 7);
    // 0e1f18  call 0xcc85c
    X86_AT(c, 0xe1f18u);
    push32(c, 0xe1f1du); x86_call_known(c, 0xcc85cu, f_000cc85c); X86_RET(c, 0xe1f1du);
    X86_TICK(c, 11);
    // 0e1f1d  push 0
    X86_AT(c, 0xe1f1du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1f1f  push edi
    X86_AT(c, 0xe1f1fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1f20  call 0xca2d4
    X86_AT(c, 0xe1f20u);
    push32(c, 0xe1f25u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xe1f25u);
    X86_TICK(c, 9);
    // 0e1f25  push 7
    X86_AT(c, 0xe1f25u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e1f27  call 0xca0a0
    X86_AT(c, 0xe1f27u);
    push32(c, 0xe1f2cu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xe1f2cu);
    X86_TICK(c, 16);
    // 0e1f2c  add esp, 0xc
    X86_AT(c, 0xe1f2cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e1f2f  pop edi
    X86_AT(c, 0xe1f2fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e1f30  ret 
    X86_AT(c, 0xe1f30u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1e40u, "ran off the end of a function");
}
void f_000e1f34(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0e1f34  push ebp
    X86_AT(c, 0xe1f34u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e1f35  mov ebp, esp
    X86_AT(c, 0xe1f35u);
    c.r[5] = c.r[4];
    // 0e1f37  push dword ptr [ebp + 8]
    X86_AT(c, 0xe1f37u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e1f3a  call 0xcc7bc
    X86_AT(c, 0xe1f3au);
    push32(c, 0xe1f3fu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe1f3fu);
    X86_TICK(c, 9);
    // 0e1f3f  push 1
    X86_AT(c, 0xe1f3fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1f41  call 0xc5ca4
    X86_AT(c, 0xe1f41u);
    push32(c, 0xe1f46u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe1f46u);
    X86_TICK(c, 16);
    // 0e1f46  leave 
    X86_AT(c, 0xe1f46u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e1f47  ret 
    X86_AT(c, 0xe1f47u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1f34u, "ran off the end of a function");
}
void f_000e1f48(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e1f48  push 0xe638
    X86_AT(c, 0xe1f48u);
    { uint32_t v = 0xE638u; push32(c, v); }
    // 0e1f4d  call 0xe1f34
    X86_AT(c, 0xe1f4du);
    push32(c, 0xe1f52u); x86_call_known(c, 0xe1f34u, f_000e1f34); X86_RET(c, 0xe1f52u);
    X86_TICK(c, 12);
    // 0e1f52  add esp, 4
    X86_AT(c, 0xe1f52u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1f55  ret 
    X86_AT(c, 0xe1f55u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1f48u, "ran off the end of a function");
}
void f_000e1f58(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e1f58  push 0xe64c
    X86_AT(c, 0xe1f58u);
    { uint32_t v = 0xE64Cu; push32(c, v); }
    // 0e1f5d  call 0xe1f34
    X86_AT(c, 0xe1f5du);
    push32(c, 0xe1f62u); x86_call_known(c, 0xe1f34u, f_000e1f34); X86_RET(c, 0xe1f62u);
    X86_TICK(c, 12);
    // 0e1f62  add esp, 4
    X86_AT(c, 0xe1f62u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1f65  ret 
    X86_AT(c, 0xe1f65u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1f58u, "ran off the end of a function");
}
void f_000e1f68(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e1f68  push 0xe660
    X86_AT(c, 0xe1f68u);
    { uint32_t v = 0xE660u; push32(c, v); }
    // 0e1f6d  call 0xe1f34
    X86_AT(c, 0xe1f6du);
    push32(c, 0xe1f72u); x86_call_known(c, 0xe1f34u, f_000e1f34); X86_RET(c, 0xe1f72u);
    X86_TICK(c, 12);
    // 0e1f72  add esp, 4
    X86_AT(c, 0xe1f72u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1f75  ret 
    X86_AT(c, 0xe1f75u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1f68u, "ran off the end of a function");
}
void f_000e1f78(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e1f78  push 0xe674
    X86_AT(c, 0xe1f78u);
    { uint32_t v = 0xE674u; push32(c, v); }
    // 0e1f7d  call 0xe1f34
    X86_AT(c, 0xe1f7du);
    push32(c, 0xe1f82u); x86_call_known(c, 0xe1f34u, f_000e1f34); X86_RET(c, 0xe1f82u);
    X86_TICK(c, 12);
    // 0e1f82  add esp, 4
    X86_AT(c, 0xe1f82u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1f85  ret 
    X86_AT(c, 0xe1f85u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1f78u, "ran off the end of a function");
}
void f_000e1f88(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e1f88  push 0xe68c
    X86_AT(c, 0xe1f88u);
    { uint32_t v = 0xE68Cu; push32(c, v); }
    // 0e1f8d  call 0xe1f34
    X86_AT(c, 0xe1f8du);
    push32(c, 0xe1f92u); x86_call_known(c, 0xe1f34u, f_000e1f34); X86_RET(c, 0xe1f92u);
    X86_TICK(c, 12);
    // 0e1f92  add esp, 4
    X86_AT(c, 0xe1f92u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1f95  ret 
    X86_AT(c, 0xe1f95u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1f88u, "ran off the end of a function");
}
void f_000e1f98(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e1f98  push 0xe6b4
    X86_AT(c, 0xe1f98u);
    { uint32_t v = 0xE6B4u; push32(c, v); }
    // 0e1f9d  call 0xe1f34
    X86_AT(c, 0xe1f9du);
    push32(c, 0xe1fa2u); x86_call_known(c, 0xe1f34u, f_000e1f34); X86_RET(c, 0xe1fa2u);
    X86_TICK(c, 12);
    // 0e1fa2  add esp, 4
    X86_AT(c, 0xe1fa2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1fa5  ret 
    X86_AT(c, 0xe1fa5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1f98u, "ran off the end of a function");
}
void f_000e1fa8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e1fa8  push 0xe6c8
    X86_AT(c, 0xe1fa8u);
    { uint32_t v = 0xE6C8u; push32(c, v); }
    // 0e1fad  call 0xe1f34
    X86_AT(c, 0xe1fadu);
    push32(c, 0xe1fb2u); x86_call_known(c, 0xe1f34u, f_000e1f34); X86_RET(c, 0xe1fb2u);
    X86_TICK(c, 12);
    // 0e1fb2  add esp, 4
    X86_AT(c, 0xe1fb2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1fb5  ret 
    X86_AT(c, 0xe1fb5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1fa8u, "ran off the end of a function");
}
void f_000e1fb8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e1fb8  push 0xe6dc
    X86_AT(c, 0xe1fb8u);
    { uint32_t v = 0xE6DCu; push32(c, v); }
    // 0e1fbd  call 0xe1f34
    X86_AT(c, 0xe1fbdu);
    push32(c, 0xe1fc2u); x86_call_known(c, 0xe1f34u, f_000e1f34); X86_RET(c, 0xe1fc2u);
    X86_TICK(c, 12);
    // 0e1fc2  add esp, 4
    X86_AT(c, 0xe1fc2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1fc5  ret 
    X86_AT(c, 0xe1fc5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1fb8u, "ran off the end of a function");
}
void f_000e1fc8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e1fc8  push 0xe720
    X86_AT(c, 0xe1fc8u);
    { uint32_t v = 0xE720u; push32(c, v); }
    // 0e1fcd  call 0xcc7bc
    X86_AT(c, 0xe1fcdu);
    push32(c, 0xe1fd2u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe1fd2u);
    X86_TICK(c, 9);
    // 0e1fd2  push 0xe754
    X86_AT(c, 0xe1fd2u);
    { uint32_t v = 0xE754u; push32(c, v); }
    // 0e1fd7  call 0xe1f34
    X86_AT(c, 0xe1fd7u);
    push32(c, 0xe1fdcu); x86_call_known(c, 0xe1f34u, f_000e1f34); X86_RET(c, 0xe1fdcu);
    X86_TICK(c, 12);
    // 0e1fdc  add esp, 8
    X86_AT(c, 0xe1fdcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e1fdf  ret 
    X86_AT(c, 0xe1fdfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1fc8u, "ran off the end of a function");
}
void f_000e1fe0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e1fe0  push 0xe7a0
    X86_AT(c, 0xe1fe0u);
    { uint32_t v = 0xE7A0u; push32(c, v); }
    // 0e1fe5  call 0xcc7bc
    X86_AT(c, 0xe1fe5u);
    push32(c, 0xe1feau); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe1feau);
    X86_TICK(c, 9);
    // 0e1fea  push 0xe7e4
    X86_AT(c, 0xe1feau);
    { uint32_t v = 0xE7E4u; push32(c, v); }
    // 0e1fef  call 0xe1f34
    X86_AT(c, 0xe1fefu);
    push32(c, 0xe1ff4u); x86_call_known(c, 0xe1f34u, f_000e1f34); X86_RET(c, 0xe1ff4u);
    X86_TICK(c, 12);
    // 0e1ff4  add esp, 8
    X86_AT(c, 0xe1ff4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e1ff7  ret 
    X86_AT(c, 0xe1ff7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1fe0u, "ran off the end of a function");
}
void f_000e1ff8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e1ff8  push 0xe820
    X86_AT(c, 0xe1ff8u);
    { uint32_t v = 0xE820u; push32(c, v); }
    // 0e1ffd  call 0xe1f34
    X86_AT(c, 0xe1ffdu);
    push32(c, 0xe2002u); x86_call_known(c, 0xe1f34u, f_000e1f34); X86_RET(c, 0xe2002u);
    X86_TICK(c, 12);
    // 0e2002  add esp, 4
    X86_AT(c, 0xe2002u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e2005  ret 
    X86_AT(c, 0xe2005u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1ff8u, "ran off the end of a function");
}
void f_000e2008(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e2008  push 0xe838
    X86_AT(c, 0xe2008u);
    { uint32_t v = 0xE838u; push32(c, v); }
    // 0e200d  call 0xe1f34
    X86_AT(c, 0xe200du);
    push32(c, 0xe2012u); x86_call_known(c, 0xe1f34u, f_000e1f34); X86_RET(c, 0xe2012u);
    X86_TICK(c, 12);
    // 0e2012  add esp, 4
    X86_AT(c, 0xe2012u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e2015  ret 
    X86_AT(c, 0xe2015u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2008u, "ran off the end of a function");
}
void f_000e2018(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e2018  push 0xe854
    X86_AT(c, 0xe2018u);
    { uint32_t v = 0xE854u; push32(c, v); }
    // 0e201d  call 0xe1f34
    X86_AT(c, 0xe201du);
    push32(c, 0xe2022u); x86_call_known(c, 0xe1f34u, f_000e1f34); X86_RET(c, 0xe2022u);
    X86_TICK(c, 12);
    // 0e2022  add esp, 4
    X86_AT(c, 0xe2022u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e2025  ret 
    X86_AT(c, 0xe2025u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2018u, "ran off the end of a function");
}
void f_000e2028(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e2028  push edi
    X86_AT(c, 0xe2028u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2029  mov edi, 4
    X86_AT(c, 0xe2029u);
    c.r[7] = 0x4u;
    // 0e202e  push 0xb
    X86_AT(c, 0xe202eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2030  call 0xc8dd4
    X86_AT(c, 0xe2030u);
    push32(c, 0xe2035u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xe2035u);
    X86_TICK(c, 9);
    // 0e2035  push 0xe868
    X86_AT(c, 0xe2035u);
    { uint32_t v = 0xE868u; push32(c, v); }
    // 0e203a  call 0xcc7bc
    X86_AT(c, 0xe203au);
    push32(c, 0xe203fu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe203fu);
    X86_TICK(c, 27);
    // 0e203f  push 9
    X86_AT(c, 0xe203fu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e2041  push 0xf
    X86_AT(c, 0xe2041u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e2043  push 0xf
    X86_AT(c, 0xe2043u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e2045  push 0xa
    X86_AT(c, 0xe2045u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e2047  push 0x27
    X86_AT(c, 0xe2047u);
    { uint32_t v = 0x27u; push32(c, v); }
    // 0e2049  push 0xb6
    X86_AT(c, 0xe2049u);
    { uint32_t v = 0xB6u; push32(c, v); }
    // 0e204e  push 0x13a
    X86_AT(c, 0xe204eu);
    { uint32_t v = 0x13Au; push32(c, v); }
    // 0e2053  push 0x5a
    X86_AT(c, 0xe2053u);
    { uint32_t v = 0x5Au; push32(c, v); }
    // 0e2055  push 0x1c
    X86_AT(c, 0xe2055u);
    { uint32_t v = 0x1Cu; push32(c, v); }
    // 0e2057  push edi
    X86_AT(c, 0xe2057u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2058  call 0xc9fbc
    X86_AT(c, 0xe2058u);
    push32(c, 0xe205du); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xe205du);
    X86_TICK(c, 9);
    // 0e205d  push edi
    X86_AT(c, 0xe205du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e205e  call 0xca100
    X86_AT(c, 0xe205eu);
    push32(c, 0xe2063u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xe2063u);
    X86_TICK(c, 11);
    // 0e2063  push 2
    X86_AT(c, 0xe2063u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e2065  push 0
    X86_AT(c, 0xe2065u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2067  call 0xcc814
    X86_AT(c, 0xe2067u);
    push32(c, 0xe206cu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe206cu);
    X86_TICK(c, 11);
    // 0e206c  add esp, 0x3c
    X86_AT(c, 0xe206cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e206f  push 0xe
    X86_AT(c, 0xe206fu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0e2071  call 0xc8dd4
    X86_AT(c, 0xe2071u);
    push32(c, 0xe2076u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xe2076u);
    X86_TICK(c, 11);
    // 0e2076  push 0xe89c
    X86_AT(c, 0xe2076u);
    { uint32_t v = 0xE89Cu; push32(c, v); }
    // 0e207b  push edi
    X86_AT(c, 0xe207bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e207c  call 0xc8cdc
    X86_AT(c, 0xe207cu);
    push32(c, 0xe2081u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2081u);
    X86_TICK(c, 11);
    // 0e2081  push 3
    X86_AT(c, 0xe2081u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e2083  push 0
    X86_AT(c, 0xe2083u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2085  call 0xcc814
    X86_AT(c, 0xe2085u);
    push32(c, 0xe208au); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe208au);
    X86_TICK(c, 9);
    // 0e208a  push 0xe
    X86_AT(c, 0xe208au);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0e208c  call 0xc8dd4
    X86_AT(c, 0xe208cu);
    push32(c, 0xe2091u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xe2091u);
    X86_TICK(c, 11);
    // 0e2091  push 0xe8c0
    X86_AT(c, 0xe2091u);
    { uint32_t v = 0xE8C0u; push32(c, v); }
    // 0e2096  push edi
    X86_AT(c, 0xe2096u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2097  call 0xc8cdc
    X86_AT(c, 0xe2097u);
    push32(c, 0xe209cu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe209cu);
    X86_TICK(c, 11);
    // 0e209c  push edi
    X86_AT(c, 0xe209cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e209d  push 0
    X86_AT(c, 0xe209du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e209f  call 0xcc814
    X86_AT(c, 0xe209fu);
    push32(c, 0xe20a4u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe20a4u);
    X86_TICK(c, 9);
    // 0e20a4  push 0xe
    X86_AT(c, 0xe20a4u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0e20a6  call 0xc8dd4
    X86_AT(c, 0xe20a6u);
    push32(c, 0xe20abu); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xe20abu);
    X86_TICK(c, 11);
    // 0e20ab  push 0xe8ec
    X86_AT(c, 0xe20abu);
    { uint32_t v = 0xE8ECu; push32(c, v); }
    // 0e20b0  push edi
    X86_AT(c, 0xe20b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e20b1  call 0xc8cdc
    X86_AT(c, 0xe20b1u);
    push32(c, 0xe20b6u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe20b6u);
    X86_TICK(c, 11);
    // 0e20b6  push 5
    X86_AT(c, 0xe20b6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e20b8  push 0
    X86_AT(c, 0xe20b8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e20ba  call 0xcc814
    X86_AT(c, 0xe20bau);
    push32(c, 0xe20bfu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe20bfu);
    X86_TICK(c, 11);
    // 0e20bf  add esp, 0x3c
    X86_AT(c, 0xe20bfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e20c2  push 0xe
    X86_AT(c, 0xe20c2u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0e20c4  call 0xc8dd4
    X86_AT(c, 0xe20c4u);
    push32(c, 0xe20c9u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xe20c9u);
    X86_TICK(c, 13);
    // 0e20c9  add esp, 4
    X86_AT(c, 0xe20c9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e20cc  push 0xe91c
    X86_AT(c, 0xe20ccu);
    { uint32_t v = 0xE91Cu; push32(c, v); }
    // 0e20d1  push edi
    X86_AT(c, 0xe20d1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e20d2  call 0xc8cdc
    X86_AT(c, 0xe20d2u);
    push32(c, 0xe20d7u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe20d7u);
    X86_TICK(c, 11);
    // 0e20d7  push 6
    X86_AT(c, 0xe20d7u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0e20d9  push 0
    X86_AT(c, 0xe20d9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e20db  call 0xcc814
    X86_AT(c, 0xe20dbu);
    push32(c, 0xe20e0u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe20e0u);
    X86_TICK(c, 9);
    // 0e20e0  push 0xe
    X86_AT(c, 0xe20e0u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0e20e2  call 0xc8dd4
    X86_AT(c, 0xe20e2u);
    push32(c, 0xe20e7u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xe20e7u);
    X86_TICK(c, 11);
    // 0e20e7  push 0xe950
    X86_AT(c, 0xe20e7u);
    { uint32_t v = 0xE950u; push32(c, v); }
    // 0e20ec  push edi
    X86_AT(c, 0xe20ecu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e20ed  call 0xc8cdc
    X86_AT(c, 0xe20edu);
    push32(c, 0xe20f2u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe20f2u);
    X86_TICK(c, 11);
    // 0e20f2  push 7
    X86_AT(c, 0xe20f2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e20f4  push 0
    X86_AT(c, 0xe20f4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e20f6  call 0xcc814
    X86_AT(c, 0xe20f6u);
    push32(c, 0xe20fbu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe20fbu);
    X86_TICK(c, 9);
    // 0e20fb  push 0xe
    X86_AT(c, 0xe20fbu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0e20fd  call 0xc8dd4
    X86_AT(c, 0xe20fdu);
    push32(c, 0xe2102u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xe2102u);
    X86_TICK(c, 11);
    // 0e2102  push 0xe98c
    X86_AT(c, 0xe2102u);
    { uint32_t v = 0xE98Cu; push32(c, v); }
    // 0e2107  push edi
    X86_AT(c, 0xe2107u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2108  call 0xc8cdc
    X86_AT(c, 0xe2108u);
    push32(c, 0xe210du); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe210du);
    X86_TICK(c, 9);
    // 0e210d  push 0xf
    X86_AT(c, 0xe210du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e210f  call 0xc8dd4
    X86_AT(c, 0xe210fu);
    push32(c, 0xe2114u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xe2114u);
    X86_TICK(c, 7);
    // 0e2114  call 0xc56dc
    X86_AT(c, 0xe2114u);
    push32(c, 0xe2119u); x86_call_known(c, 0xc56dcu, f_000c56dc); X86_RET(c, 0xe2119u);
    X86_TICK(c, 9);
    // 0e2119  push 0x1c2
    X86_AT(c, 0xe2119u);
    { uint32_t v = 0x1C2u; push32(c, v); }
    // 0e211e  call 0xd6660
    X86_AT(c, 0xe211eu);
    push32(c, 0xe2123u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xe2123u);
    X86_TICK(c, 16);
    // 0e2123  add esp, 0x38
    X86_AT(c, 0xe2123u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0e2126  pop edi
    X86_AT(c, 0xe2126u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e2127  ret 
    X86_AT(c, 0xe2127u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2028u, "ran off the end of a function");
}
void f_000e2128(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e2128  push esi
    X86_AT(c, 0xe2128u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2129  push edi
    X86_AT(c, 0xe2129u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e212a  sub eax, eax
    X86_AT(c, 0xe212au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e212c  mov dword ptr [0xbef90], eax
    X86_AT(c, 0xe212cu);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), c.r[0]);
    // 0e2131  xchg edi, eax
    X86_AT(c, 0xe2131u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_e2132:
    X86_TICK(c, 7);
    // 0e2132  cmp edi, 0x13
    X86_AT(c, 0xe2132u);
    (void)x86_sub(c, c.r[7], 0x13u, 0, 4);
    // 0e2135  jge 0xe21e4
    X86_AT(c, 0xe2135u);
    if (x86_cc(c, 13)) { goto L_e21e4; }
    X86_TICK(c, 2);
    // 0e213b  sub esi, esi
    X86_AT(c, 0xe213bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e213d:
    X86_TICK(c, 7);
    // 0e213d  cmp esi, 9
    X86_AT(c, 0xe213du);
    (void)x86_sub(c, c.r[6], 0x9u, 0, 4);
    // 0e2140  jge 0xe21de
    X86_AT(c, 0xe2140u);
    if (x86_cc(c, 13)) { goto L_e21de; }
    X86_TICK(c, 15);
    // 0e2146  lea eax, [edi + edi*8]
    X86_AT(c, 0xe2146u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 8);
    // 0e2149  add eax, esi
    X86_AT(c, 0xe2149u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 0e214b  mov al, byte ptr [eax + 0xc2de0]
    X86_AT(c, 0xe214bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xC2DE0u))));
    // 0e2151  cmp al, 0x40
    X86_AT(c, 0xe2151u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0e2153  jae 0xe2161
    X86_AT(c, 0xe2153u);
    if (x86_cc(c, 3)) { goto L_e2161; }
    X86_TICK(c, 16);
    // 0e2155  push 0
    X86_AT(c, 0xe2155u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2157  push esi
    X86_AT(c, 0xe2157u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2158  push edi
    X86_AT(c, 0xe2158u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2159  movzx eax, al
    X86_AT(c, 0xe2159u);
    c.r[0] = g8(c, 0);
    // 0e215c  jmp 0xe21cf
    X86_AT(c, 0xe215cu);
    goto L_e21cf;
L_e2161:
    X86_TICK(c, 16);
    // 0e2161  lea eax, [edi + edi*8]
    X86_AT(c, 0xe2161u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 8);
    // 0e2164  add eax, esi
    X86_AT(c, 0xe2164u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 0e2166  cmp byte ptr [eax + 0xc2de0], 0xa0
    X86_AT(c, 0xe2166u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xC2DE0u))), 0xA0u, 0, 1);
    // 0e216d  jae 0xe2181
    X86_AT(c, 0xe216du);
    if (x86_cc(c, 3)) { goto L_e2181; }
    X86_TICK(c, 19);
    // 0e216f  push 1
    X86_AT(c, 0xe216fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2171  push esi
    X86_AT(c, 0xe2171u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2172  push edi
    X86_AT(c, 0xe2172u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2173  mov eax, dword ptr [0x42b80]
    X86_AT(c, 0xe2173u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x42B80u)));
    // 0e2178  lea eax, [eax*2 - 0x100]
    X86_AT(c, 0xe2178u);
    c.r[0] = (uint32_t)(c.r[0] * 2 + 0xFFFFFF00u);
    // 0e217f  jmp 0xe21cf
    X86_AT(c, 0xe217fu);
    goto L_e21cf;
L_e2181:
    X86_TICK(c, 15);
    // 0e2181  lea eax, [edi + edi*8]
    X86_AT(c, 0xe2181u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 8);
    // 0e2184  add eax, esi
    X86_AT(c, 0xe2184u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 0e2186  mov al, byte ptr [eax + 0xc2de0]
    X86_AT(c, 0xe2186u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xC2DE0u))));
    // 0e218c  cmp al, 0xa2
    X86_AT(c, 0xe218cu);
    (void)x86_sub(c, g8(c, 0), 0xA2u, 0, 1);
    // 0e218e  jae 0xe219e
    X86_AT(c, 0xe218eu);
    if (x86_cc(c, 3)) { goto L_e219e; }
    X86_TICK(c, 18);
    // 0e2190  push 2
    X86_AT(c, 0xe2190u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e2192  push esi
    X86_AT(c, 0xe2192u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2193  push edi
    X86_AT(c, 0xe2193u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2194  movzx eax, al
    X86_AT(c, 0xe2194u);
    c.r[0] = g8(c, 0);
    // 0e2197  sub eax, 0xa0
    X86_AT(c, 0xe2197u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xA0u, 0, 4); }
    // 0e219c  jmp 0xe21cf
    X86_AT(c, 0xe219cu);
    goto L_e21cf;
L_e219e:
    X86_TICK(c, 15);
    // 0e219e  lea eax, [edi + edi*8]
    X86_AT(c, 0xe219eu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 8);
    // 0e21a1  add eax, esi
    X86_AT(c, 0xe21a1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 0e21a3  mov al, byte ptr [eax + 0xc2de0]
    X86_AT(c, 0xe21a3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xC2DE0u))));
    // 0e21a9  cmp al, 0xab
    X86_AT(c, 0xe21a9u);
    (void)x86_sub(c, g8(c, 0), 0xABu, 0, 1);
    // 0e21ab  jae 0xe21bb
    X86_AT(c, 0xe21abu);
    if (x86_cc(c, 3)) { goto L_e21bb; }
    X86_TICK(c, 18);
    // 0e21ad  push 2
    X86_AT(c, 0xe21adu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e21af  push esi
    X86_AT(c, 0xe21afu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e21b0  push edi
    X86_AT(c, 0xe21b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e21b1  movzx eax, al
    X86_AT(c, 0xe21b1u);
    c.r[0] = g8(c, 0);
    // 0e21b4  sub eax, 0x9a
    X86_AT(c, 0xe21b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x9Au, 0, 4); }
    // 0e21b9  jmp 0xe21cf
    X86_AT(c, 0xe21b9u);
    goto L_e21cf;
L_e21bb:
    X86_TICK(c, 18);
    // 0e21bb  push 2
    X86_AT(c, 0xe21bbu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e21bd  push esi
    X86_AT(c, 0xe21bdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e21be  push edi
    X86_AT(c, 0xe21beu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e21bf  lea eax, [edi + edi*8]
    X86_AT(c, 0xe21bfu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 8);
    // 0e21c2  lea edx, [esi + eax*1]
    X86_AT(c, 0xe21c2u);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 0e21c5  movzx eax, byte ptr [edx + 0xc2de0]
    X86_AT(c, 0xe21c5u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xC2DE0u)));
    // 0e21cc  sub eax, 0x77
    X86_AT(c, 0xe21ccu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x77u, 0, 4); }
L_e21cf:
    X86_TICK(c, 9);
    // 0e21cf  push eax
    X86_AT(c, 0xe21cfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e21d0  call 0xe120c
    X86_AT(c, 0xe21d0u);
    push32(c, 0xe21d5u); x86_call_known(c, 0xe120cu, f_000e120c); X86_RET(c, 0xe21d5u);
    X86_TICK(c, 11);
    // 0e21d5  add esp, 0x10
    X86_AT(c, 0xe21d5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e21d8  inc esi
    X86_AT(c, 0xe21d8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e21d9  jmp 0xe213d
    X86_AT(c, 0xe21d9u);
    X86_POLL(c, 0xe213du); goto L_e213d;
L_e21de:
    X86_TICK(c, 9);
    // 0e21de  inc edi
    X86_AT(c, 0xe21deu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e21df  jmp 0xe2132
    X86_AT(c, 0xe21dfu);
    X86_POLL(c, 0xe2132u); goto L_e2132;
L_e21e4:
    X86_TICK(c, 33);
    // 0e21e4  push 1
    X86_AT(c, 0xe21e4u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e21e6  push dword ptr [0xc2dc4]
    X86_AT(c, 0xe21e6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2DC4u))); push32(c, v); }
    // 0e21ec  push dword ptr [0xc2dc0]
    X86_AT(c, 0xe21ecu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2DC0u))); push32(c, v); }
    // 0e21f2  mov eax, dword ptr [0xc2e8c]
    X86_AT(c, 0xe21f2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2E8Cu)));
    // 0e21f7  add eax, dword ptr [0xc2e90]
    X86_AT(c, 0xe21f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xC2E90u))), 0, 4); }
    // 0e21fd  sub eax, 0x66
    X86_AT(c, 0xe21fdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x66u, 0, 4); }
    // 0e2200  push eax
    X86_AT(c, 0xe2200u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2201  call 0xe120c
    X86_AT(c, 0xe2201u);
    push32(c, 0xe2206u); x86_call_known(c, 0xe120cu, f_000e120c); X86_RET(c, 0xe2206u);
    X86_TICK(c, 14);
    // 0e2206  add esp, 0x10
    X86_AT(c, 0xe2206u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e2209  cmp dword ptr [0xc2dd8], 0
    X86_AT(c, 0xe2209u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2DD8u))), 0x0u, 0, 4);
    // 0e2210  je 0xe2226
    X86_AT(c, 0xe2210u);
    if (x86_cc(c, 4)) { goto L_e2226; }
    X86_TICK(c, 4);
    // 0e2212  mov dword ptr [0xc2dd8], 1
    X86_AT(c, 0xe2212u);
    wr32((c.sbase[3] + (uint32_t)(0xC2DD8u)), 0x1u);
    // 0e221c  mov dword ptr [0xc2ddc], 1
    X86_AT(c, 0xe221cu);
    wr32((c.sbase[3] + (uint32_t)(0xC2DDCu)), 0x1u);
L_e2226:
    X86_TICK(c, 18);
    // 0e2226  pop edi
    X86_AT(c, 0xe2226u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e2227  pop esi
    X86_AT(c, 0xe2227u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e2228  ret 
    X86_AT(c, 0xe2228u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2128u, "ran off the end of a function");
}
void f_000e222c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e222c  mov cl, byte ptr [esp + 4]
    X86_AT(c, 0xe222cu);
    s8(c, 1, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u))));
    // 0e2230  cmp cl, 5
    X86_AT(c, 0xe2230u);
    (void)x86_sub(c, g8(c, 1), 0x5u, 0, 1);
    // 0e2233  je 0xe223a
    X86_AT(c, 0xe2233u);
    if (x86_cc(c, 4)) { goto L_e223a; }
    X86_TICK(c, 7);
    // 0e2235  cmp cl, 6
    X86_AT(c, 0xe2235u);
    (void)x86_sub(c, g8(c, 1), 0x6u, 0, 1);
    // 0e2238  jne 0xe223e
    X86_AT(c, 0xe2238u);
    if (x86_cc(c, 5)) { goto L_e223e; }
L_e223a:
    X86_TICK(c, 9);
    // 0e223a  sub eax, eax
    X86_AT(c, 0xe223au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e223c  jmp 0xe224f
    X86_AT(c, 0xe223cu);
    goto L_e224f;
L_e223e:
    X86_TICK(c, 7);
    // 0e223e  cmp cl, 7
    X86_AT(c, 0xe223eu);
    (void)x86_sub(c, g8(c, 1), 0x7u, 0, 1);
    // 0e2241  jne 0xe224a
    X86_AT(c, 0xe2241u);
    if (x86_cc(c, 5)) { goto L_e224a; }
    X86_TICK(c, 9);
    // 0e2243  mov eax, 1
    X86_AT(c, 0xe2243u);
    c.r[0] = 0x1u;
    // 0e2248  jmp 0xe224f
    X86_AT(c, 0xe2248u);
    goto L_e224f;
L_e224a:
    X86_TICK(c, 2);
    // 0e224a  mov eax, 0xffffffff
    X86_AT(c, 0xe224au);
    c.r[0] = 0xFFFFFFFFu;
L_e224f:
    X86_TICK(c, 10);
    // 0e224f  ret 
    X86_AT(c, 0xe224fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe222cu, "ran off the end of a function");
}
void f_000e2250(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e2250  mov cl, byte ptr [esp + 4]
    X86_AT(c, 0xe2250u);
    s8(c, 1, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u))));
    // 0e2254  cmp cl, 7
    X86_AT(c, 0xe2254u);
    (void)x86_sub(c, g8(c, 1), 0x7u, 0, 1);
    // 0e2257  je 0xe225e
    X86_AT(c, 0xe2257u);
    if (x86_cc(c, 4)) { goto L_e225e; }
    X86_TICK(c, 7);
    // 0e2259  cmp cl, 3
    X86_AT(c, 0xe2259u);
    (void)x86_sub(c, g8(c, 1), 0x3u, 0, 1);
    // 0e225c  jne 0xe2262
    X86_AT(c, 0xe225cu);
    if (x86_cc(c, 5)) { goto L_e2262; }
L_e225e:
    X86_TICK(c, 9);
    // 0e225e  sub eax, eax
    X86_AT(c, 0xe225eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e2260  jmp 0xe2273
    X86_AT(c, 0xe2260u);
    goto L_e2273;
L_e2262:
    X86_TICK(c, 7);
    // 0e2262  cmp cl, 5
    X86_AT(c, 0xe2262u);
    (void)x86_sub(c, g8(c, 1), 0x5u, 0, 1);
    // 0e2265  jne 0xe226e
    X86_AT(c, 0xe2265u);
    if (x86_cc(c, 5)) { goto L_e226e; }
    X86_TICK(c, 9);
    // 0e2267  mov eax, 0xffffffff
    X86_AT(c, 0xe2267u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e226c  jmp 0xe2273
    X86_AT(c, 0xe226cu);
    goto L_e2273;
L_e226e:
    X86_TICK(c, 2);
    // 0e226e  mov eax, 1
    X86_AT(c, 0xe226eu);
    c.r[0] = 0x1u;
L_e2273:
    X86_TICK(c, 10);
    // 0e2273  ret 
    X86_AT(c, 0xe2273u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2250u, "ran off the end of a function");
}
void f_000e2274(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e2274  push ebx
    X86_AT(c, 0xe2274u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e2275  mov eax, dword ptr [0xc2dd4]
    X86_AT(c, 0xe2275u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2DD4u)));
    // 0e227a  and eax, eax
    X86_AT(c, 0xe227au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e227c  jl 0xe22da
    X86_AT(c, 0xe227cu);
    if (x86_cc(c, 12)) { goto L_e22da; }
    X86_TICK(c, 7);
    // 0e227e  cmp eax, 6
    X86_AT(c, 0xe227eu);
    (void)x86_sub(c, c.r[0], 0x6u, 0, 4);
    // 0e2281  jne 0xe22b9
    X86_AT(c, 0xe2281u);
    if (x86_cc(c, 5)) { goto L_e22b9; }
    X86_TICK(c, 23);
    // 0e2283  mov dword ptr [0xc2dd4], 0xffffffff
    X86_AT(c, 0xe2283u);
    wr32((c.sbase[3] + (uint32_t)(0xC2DD4u)), 0xFFFFFFFFu);
    // 0e228d  push 0
    X86_AT(c, 0xe228du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e228f  push dword ptr [0xc2dd0]
    X86_AT(c, 0xe228fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2DD0u))); push32(c, v); }
    // 0e2295  push dword ptr [0xc2dcc]
    X86_AT(c, 0xe2295u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2DCCu))); push32(c, v); }
    // 0e229b  push 0
    X86_AT(c, 0xe229bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e229d  call 0xe120c
    X86_AT(c, 0xe229du);
    push32(c, 0xe22a2u); x86_call_known(c, 0xe120cu, f_000e120c); X86_RET(c, 0xe22a2u);
    X86_TICK(c, 21);
    // 0e22a2  mov eax, dword ptr [0xc2dcc]
    X86_AT(c, 0xe22a2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2DCCu)));
    // 0e22a7  lea eax, [eax + eax*8]
    X86_AT(c, 0xe22a7u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e22aa  add eax, dword ptr [0xc2dd0]
    X86_AT(c, 0xe22aau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xC2DD0u))), 0, 4); }
    // 0e22b0  mov byte ptr [eax + 0xc2de0], 0
    X86_AT(c, 0xe22b0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xC2DE0u)), 0x0u);
    // 0e22b7  jmp 0xe22d7
    X86_AT(c, 0xe22b7u);
    goto L_e22d7;
L_e22b9:
    X86_TICK(c, 31);
    // 0e22b9  push 2
    X86_AT(c, 0xe22b9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e22bb  mov eax, 0xc2db8
    X86_AT(c, 0xe22bbu);
    c.r[0] = 0xC2DB8u;
    // 0e22c0  push dword ptr [eax + 0x18]
    X86_AT(c, 0xe22c0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x18u))); push32(c, v); }
    // 0e22c3  push dword ptr [eax + 0x14]
    X86_AT(c, 0xe22c3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x14u))); push32(c, v); }
    // 0e22c6  mov edx, dword ptr [eax + 0x1c]
    X86_AT(c, 0xe22c6u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x1Cu)));
    // 0e22c9  add edx, 8
    X86_AT(c, 0xe22c9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e22cc  push edx
    X86_AT(c, 0xe22ccu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e22cd  mov ebx, eax
    X86_AT(c, 0xe22cdu);
    c.r[3] = c.r[0];
    // 0e22cf  call 0xe120c
    X86_AT(c, 0xe22cfu);
    push32(c, 0xe22d4u); x86_call_known(c, 0xe120cu, f_000e120c); X86_RET(c, 0xe22d4u);
    X86_TICK(c, 6);
    // 0e22d4  inc dword ptr [ebx + 0x1c]
    X86_AT(c, 0xe22d4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x1Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_e22d7:
    X86_TICK(c, 2);
    // 0e22d7  add esp, 0x10
    X86_AT(c, 0xe22d7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_e22da:
    X86_TICK(c, 11);
    // 0e22da  mov eax, dword ptr [0xc2dd8]
    X86_AT(c, 0xe22dau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2DD8u)));
    // 0e22df  and eax, eax
    X86_AT(c, 0xe22dfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e22e1  je 0xe232b
    X86_AT(c, 0xe22e1u);
    if (x86_cc(c, 4)) { goto L_e232b; }
    X86_TICK(c, 23);
    // 0e22e3  mov eax, dword ptr [0xc2ddc]
    X86_AT(c, 0xe22e3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2DDCu)));
    // 0e22e8  add dword ptr [0xc2dd8], eax
    X86_AT(c, 0xe22e8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC2DD8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e22ee  cmp dword ptr [0xc2dd8], 1
    X86_AT(c, 0xe22eeu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2DD8u))), 0x1u, 0, 4);
    // 0e22f5  jne 0xe2303
    X86_AT(c, 0xe22f5u);
    if (x86_cc(c, 5)) { goto L_e2303; }
    X86_TICK(c, 9);
    // 0e22f7  mov dword ptr [0xc2ddc], 1
    X86_AT(c, 0xe22f7u);
    wr32((c.sbase[3] + (uint32_t)(0xC2DDCu)), 0x1u);
    // 0e2301  jmp 0xe2316
    X86_AT(c, 0xe2301u);
    goto L_e2316;
L_e2303:
    X86_TICK(c, 12);
    // 0e2303  cmp dword ptr [0xc2dd8], 4
    X86_AT(c, 0xe2303u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2DD8u))), 0x4u, 0, 4);
    // 0e230a  jle 0xe2316
    X86_AT(c, 0xe230au);
    if (x86_cc(c, 14)) { goto L_e2316; }
    X86_TICK(c, 2);
    // 0e230c  mov dword ptr [0xc2ddc], 0xffffffff
    X86_AT(c, 0xe230cu);
    wr32((c.sbase[3] + (uint32_t)(0xC2DDCu)), 0xFFFFFFFFu);
L_e2316:
    X86_TICK(c, 21);
    // 0e2316  push 2
    X86_AT(c, 0xe2316u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e2318  push 4
    X86_AT(c, 0xe2318u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e231a  push 0xe
    X86_AT(c, 0xe231au);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0e231c  mov eax, dword ptr [0xc2dd8]
    X86_AT(c, 0xe231cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2DD8u)));
    // 0e2321  dec eax
    X86_AT(c, 0xe2321u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e2322  push eax
    X86_AT(c, 0xe2322u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2323  call 0xe120c
    X86_AT(c, 0xe2323u);
    push32(c, 0xe2328u); x86_call_known(c, 0xe120cu, f_000e120c); X86_RET(c, 0xe2328u);
    X86_TICK(c, 2);
    // 0e2328  add esp, 0x10
    X86_AT(c, 0xe2328u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_e232b:
    X86_TICK(c, 12);
    // 0e232b  cmp dword ptr [0xc2e8c], 0x9a
    X86_AT(c, 0xe232bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2E8Cu))), 0x9Au, 0, 4);
    // 0e2335  jne 0xe234e
    X86_AT(c, 0xe2335u);
    if (x86_cc(c, 5)) { goto L_e234e; }
    X86_TICK(c, 11);
    // 0e2337  push 0xc8
    X86_AT(c, 0xe2337u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0e233c  push 1
    X86_AT(c, 0xe233cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e233e  call 0xc5df0
    X86_AT(c, 0xe233eu);
    push32(c, 0xe2343u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe2343u);
    X86_TICK(c, 16);
    // 0e2343  cmp eax, 0x64
    X86_AT(c, 0xe2343u);
    (void)x86_sub(c, c.r[0], 0x64u, 0, 4);
    // 0e2346  setl al
    X86_AT(c, 0xe2346u);
    s8(c, 0, x86_cc(c, 12) ? 1u : 0u);
    // 0e2349  movzx eax, al
    X86_AT(c, 0xe2349u);
    c.r[0] = g8(c, 0);
    // 0e234c  jmp 0xe2363
    X86_AT(c, 0xe234cu);
    goto L_e2363;
L_e234e:
    X86_TICK(c, 12);
    // 0e234e  cmp dword ptr [0xc2e8c], 0x9e
    X86_AT(c, 0xe234eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2E8Cu))), 0x9Eu, 0, 4);
    // 0e2358  jne 0xe236b
    X86_AT(c, 0xe2358u);
    if (x86_cc(c, 5)) { goto L_e236b; }
    X86_TICK(c, 11);
    // 0e235a  push 7
    X86_AT(c, 0xe235au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e235c  push 0
    X86_AT(c, 0xe235cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e235e  call 0xc5df0
    X86_AT(c, 0xe235eu);
    push32(c, 0xe2363u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe2363u);
L_e2363:
    X86_TICK(c, 4);
    // 0e2363  mov dword ptr [0xc2e90], eax
    X86_AT(c, 0xe2363u);
    wr32((c.sbase[3] + (uint32_t)(0xC2E90u)), c.r[0]);
    // 0e2368  add esp, 8
    X86_AT(c, 0xe2368u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_e236b:
    X86_TICK(c, 35);
    // 0e236b  push 1
    X86_AT(c, 0xe236bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e236d  mov eax, 0xc2db8
    X86_AT(c, 0xe236du);
    c.r[0] = 0xC2DB8u;
    // 0e2372  push dword ptr [eax + 0xc]
    X86_AT(c, 0xe2372u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu))); push32(c, v); }
    // 0e2375  push dword ptr [eax + 8]
    X86_AT(c, 0xe2375u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))); push32(c, v); }
    // 0e2378  mov edx, dword ptr [eax + 0xd4]
    X86_AT(c, 0xe2378u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4u)));
    // 0e237e  add edx, dword ptr [eax + 0xd8]
    X86_AT(c, 0xe237eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xD8u))), 0, 4); }
    // 0e2384  sub edx, 0x66
    X86_AT(c, 0xe2384u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x66u, 0, 4); }
    // 0e2387  push edx
    X86_AT(c, 0xe2387u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e2388  call 0xe120c
    X86_AT(c, 0xe2388u);
    push32(c, 0xe238du); x86_call_known(c, 0xe120cu, f_000e120c); X86_RET(c, 0xe238du);
    X86_TICK(c, 16);
    // 0e238d  add esp, 0x10
    X86_AT(c, 0xe238du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e2390  pop ebx
    X86_AT(c, 0xe2390u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e2391  ret 
    X86_AT(c, 0xe2391u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2274u, "ran off the end of a function");
}
void f_000e2394(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e2394  push edi
    X86_AT(c, 0xe2394u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2395  push 0xff
    X86_AT(c, 0xe2395u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e239a  push 1
    X86_AT(c, 0xe239au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e239c  call 0xc5df0
    X86_AT(c, 0xe239cu);
    push32(c, 0xe23a1u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe23a1u);
    X86_TICK(c, 13);
    // 0e23a1  mov edi, eax
    X86_AT(c, 0xe23a1u);
    c.r[7] = c.r[0];
    // 0e23a3  sub eax, 0x80
    X86_AT(c, 0xe23a3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x80u, 0, 4); }
    // 0e23a8  push eax
    X86_AT(c, 0xe23a8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e23a9  call 0xe12a8
    X86_AT(c, 0xe23a9u);
    push32(c, 0xe23aeu); x86_call_known(c, 0xe12a8u, f_000e12a8); X86_RET(c, 0xe23aeu);
    X86_TICK(c, 16);
    // 0e23ae  add esp, 0xc
    X86_AT(c, 0xe23aeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e23b1  pop edi
    X86_AT(c, 0xe23b1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e23b2  ret 
    X86_AT(c, 0xe23b2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2394u, "ran off the end of a function");
}
void f_000e23b4(X86Cpu& c) {
    X86_TICK(c, 39);
    // 0e23b4  push ebp
    X86_AT(c, 0xe23b4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e23b5  mov ebp, esp
    X86_AT(c, 0xe23b5u);
    c.r[5] = c.r[4];
    // 0e23b7  push ebx
    X86_AT(c, 0xe23b7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e23b8  push esi
    X86_AT(c, 0xe23b8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e23b9  push edi
    X86_AT(c, 0xe23b9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e23ba  sub ebx, ebx
    X86_AT(c, 0xe23bau);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0e23bc  mov edi, dword ptr [0xc2dc0]
    X86_AT(c, 0xe23bcu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xC2DC0u)));
    // 0e23c2  add edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe23c2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 0e23c5  mov esi, dword ptr [0xc2dc4]
    X86_AT(c, 0xe23c5u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xC2DC4u)));
    // 0e23cb  add esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe23cbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0e23ce  cmp ebx, edi
    X86_AT(c, 0xe23ceu);
    (void)x86_sub(c, c.r[3], c.r[7], 0, 4);
    // 0e23d0  jg 0xe2444
    X86_AT(c, 0xe23d0u);
    if (x86_cc(c, 15)) { goto L_e2444; }
    X86_TICK(c, 7);
    // 0e23d6  cmp ebx, esi
    X86_AT(c, 0xe23d6u);
    (void)x86_sub(c, c.r[3], c.r[6], 0, 4);
    // 0e23d8  jg 0xe2444
    X86_AT(c, 0xe23d8u);
    if (x86_cc(c, 15)) { goto L_e2444; }
    X86_TICK(c, 7);
    // 0e23da  cmp edi, 0x13
    X86_AT(c, 0xe23dau);
    (void)x86_sub(c, c.r[7], 0x13u, 0, 4);
    // 0e23dd  jge 0xe2444
    X86_AT(c, 0xe23ddu);
    if (x86_cc(c, 13)) { goto L_e2444; }
    X86_TICK(c, 7);
    // 0e23df  cmp esi, 9
    X86_AT(c, 0xe23dfu);
    (void)x86_sub(c, c.r[6], 0x9u, 0, 4);
    // 0e23e2  jge 0xe2444
    X86_AT(c, 0xe23e2u);
    if (x86_cc(c, 13)) { goto L_e2444; }
    X86_TICK(c, 15);
    // 0e23e4  lea eax, [edi + edi*8]
    X86_AT(c, 0xe23e4u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 8);
    // 0e23e7  add eax, esi
    X86_AT(c, 0xe23e7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 0e23e9  cmp bl, byte ptr [eax + 0xc2de0]
    X86_AT(c, 0xe23e9u);
    (void)x86_sub(c, g8(c, 3), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xC2DE0u))), 0, 1);
    // 0e23ef  jne 0xe2444
    X86_AT(c, 0xe23efu);
    if (x86_cc(c, 5)) { goto L_e2444; }
    X86_TICK(c, 35);
    // 0e23f1  mov eax, dword ptr [0xc2dc0]
    X86_AT(c, 0xe23f1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2DC0u)));
    // 0e23f6  lea eax, [eax + eax*8]
    X86_AT(c, 0xe23f6u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e23f9  add eax, dword ptr [0xc2dc4]
    X86_AT(c, 0xe23f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xC2DC4u))), 0, 4); }
    // 0e23ff  mov byte ptr [eax + 0xc2de0], bl
    X86_AT(c, 0xe23ffu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xC2DE0u)), g8(c, 3));
    // 0e2405  push ebx
    X86_AT(c, 0xe2405u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e2406  push dword ptr [0xc2dc4]
    X86_AT(c, 0xe2406u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2DC4u))); push32(c, v); }
    // 0e240c  push dword ptr [0xc2dc0]
    X86_AT(c, 0xe240cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC2DC0u))); push32(c, v); }
    // 0e2412  push ebx
    X86_AT(c, 0xe2412u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e2413  call 0xe120c
    X86_AT(c, 0xe2413u);
    push32(c, 0xe2418u); x86_call_known(c, 0xe120cu, f_000e120c); X86_RET(c, 0xe2418u);
    X86_TICK(c, 31);
    // 0e2418  mov dword ptr [0xc2dc0], edi
    X86_AT(c, 0xe2418u);
    wr32((c.sbase[3] + (uint32_t)(0xC2DC0u)), c.r[7]);
    // 0e241e  mov dword ptr [0xc2dc4], esi
    X86_AT(c, 0xe241eu);
    wr32((c.sbase[3] + (uint32_t)(0xC2DC4u)), c.r[6]);
    // 0e2424  push 1
    X86_AT(c, 0xe2424u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2426  push esi
    X86_AT(c, 0xe2426u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2427  push edi
    X86_AT(c, 0xe2427u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2428  mov eax, dword ptr [0xc2e8c]
    X86_AT(c, 0xe2428u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2E8Cu)));
    // 0e242d  add eax, dword ptr [0xc2e90]
    X86_AT(c, 0xe242du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xC2E90u))), 0, 4); }
    // 0e2433  sub eax, 0x66
    X86_AT(c, 0xe2433u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x66u, 0, 4); }
    // 0e2436  push eax
    X86_AT(c, 0xe2436u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2437  call 0xe120c
    X86_AT(c, 0xe2437u);
    push32(c, 0xe243cu); x86_call_known(c, 0xe120cu, f_000e120c); X86_RET(c, 0xe243cu);
    X86_TICK(c, 4);
    // 0e243c  mov ebx, 1
    X86_AT(c, 0xe243cu);
    c.r[3] = 0x1u;
    // 0e2441  add esp, 0x20
    X86_AT(c, 0xe2441u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_e2444:
    X86_TICK(c, 30);
    // 0e2444  mov eax, ebx
    X86_AT(c, 0xe2444u);
    c.r[0] = c.r[3];
    // 0e2446  pop edi
    X86_AT(c, 0xe2446u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e2447  pop esi
    X86_AT(c, 0xe2447u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e2448  pop ebx
    X86_AT(c, 0xe2448u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e2449  leave 
    X86_AT(c, 0xe2449u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e244a  ret 
    X86_AT(c, 0xe244au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe23b4u, "ran off the end of a function");
}
void f_000e244c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0e244c  push ebp
    X86_AT(c, 0xe244cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e244d  mov ebp, esp
    X86_AT(c, 0xe244du);
    c.r[5] = c.r[4];
    // 0e244f  push edi
    X86_AT(c, 0xe244fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2450  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe2450u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e2453  push 0xe9ac
    X86_AT(c, 0xe2453u);
    { uint32_t v = 0xE9ACu; push32(c, v); }
    // 0e2458  push 7
    X86_AT(c, 0xe2458u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e245a  call 0xc8cdc
    X86_AT(c, 0xe245au);
    push32(c, 0xe245fu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe245fu);
    X86_TICK(c, 13);
    // 0e245f  push 3
    X86_AT(c, 0xe245fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e2461  push edi
    X86_AT(c, 0xe2461u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2462  push 7
    X86_AT(c, 0xe2462u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e2464  call 0xc8cb8
    X86_AT(c, 0xe2464u);
    push32(c, 0xe2469u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xe2469u);
    X86_TICK(c, 9);
    // 0e2469  push 0xe9c4
    X86_AT(c, 0xe2469u);
    { uint32_t v = 0xE9C4u; push32(c, v); }
    // 0e246e  call 0xcc7bc
    X86_AT(c, 0xe246eu);
    push32(c, 0xe2473u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe2473u);
    X86_TICK(c, 16);
    // 0e2473  sub dword ptr [0xb02fe], edi
    X86_AT(c, 0xe2473u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB02FEu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 0e2479  push 8
    X86_AT(c, 0xe2479u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e247b  call 0xc5ca4
    X86_AT(c, 0xe247bu);
    push32(c, 0xe2480u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe2480u);
    X86_TICK(c, 7);
    // 0e2480  call 0xcc628
    X86_AT(c, 0xe2480u);
    push32(c, 0xe2485u); x86_call_known(c, 0xcc628u, f_000cc628); X86_RET(c, 0xe2485u);
    X86_TICK(c, 22);
    // 0e2485  add esp, 0x1c
    X86_AT(c, 0xe2485u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0e2488  pop edi
    X86_AT(c, 0xe2488u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e2489  leave 
    X86_AT(c, 0xe2489u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e248a  ret 
    X86_AT(c, 0xe248au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe244cu, "ran off the end of a function");
}
void f_000e248c(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0e248c  push ebp
    X86_AT(c, 0xe248cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e248d  mov ebp, esp
    X86_AT(c, 0xe248du);
    c.r[5] = c.r[4];
    // 0e248f  push eax
    X86_AT(c, 0xe248fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2490  push 0xe9f0
    X86_AT(c, 0xe2490u);
    { uint32_t v = 0xE9F0u; push32(c, v); }
    // 0e2495  call 0xcc7bc
    X86_AT(c, 0xe2495u);
    push32(c, 0xe249au); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe249au);
    X86_TICK(c, 9);
    // 0e249a  push 7
    X86_AT(c, 0xe249au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e249c  call 0xc5ca4
    X86_AT(c, 0xe249cu);
    push32(c, 0xe24a1u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe24a1u);
    X86_TICK(c, 11);
    // 0e24a1  push 0xff
    X86_AT(c, 0xe24a1u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e24a6  push 1
    X86_AT(c, 0xe24a6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e24a8  call 0xc5df0
    X86_AT(c, 0xe24a8u);
    push32(c, 0xe24adu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe24adu);
    X86_TICK(c, 41);
    // 0e24ad  add esp, 0x10
    X86_AT(c, 0xe24adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e24b0  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe24b0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e24b3  mov eax, dword ptr [0xb030a]
    X86_AT(c, 0xe24b3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB030Au)));
    // 0e24b8  cdq 
    X86_AT(c, 0xe24b8u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e24b9  sub eax, edx
    X86_AT(c, 0xe24b9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e24bb  sar eax, 1
    X86_AT(c, 0xe24bbu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e24bd  mov edx, 0xb9
    X86_AT(c, 0xe24bdu);
    c.r[2] = 0xB9u;
    // 0e24c2  sub edx, eax
    X86_AT(c, 0xe24c2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e24c4  mov eax, dword ptr [0xb032e]
    X86_AT(c, 0xe24c4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB032Eu)));
    // 0e24c9  shl eax, 3
    X86_AT(c, 0xe24c9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 0e24cc  add eax, edx
    X86_AT(c, 0xe24ccu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0e24ce  add eax, eax
    X86_AT(c, 0xe24ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e24d0  cmp eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe24d0u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4);
    // 0e24d3  jge 0xe24e4
    X86_AT(c, 0xe24d3u);
    if (x86_cc(c, 13)) { goto L_e24e4; }
    X86_TICK(c, 9);
    // 0e24d5  push 0xea2c
    X86_AT(c, 0xe24d5u);
    { uint32_t v = 0xEA2Cu; push32(c, v); }
    // 0e24da  call 0xcc7bc
    X86_AT(c, 0xe24dau);
    push32(c, 0xe24dfu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe24dfu);
    X86_TICK(c, 9);
    // 0e24df  add esp, 4
    X86_AT(c, 0xe24dfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e24e2  jmp 0xe250b
    X86_AT(c, 0xe24e2u);
    goto L_e250b;
L_e24e4:
    X86_TICK(c, 11);
    // 0e24e4  push 0x14
    X86_AT(c, 0xe24e4u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0e24e6  push 1
    X86_AT(c, 0xe24e6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e24e8  call 0xc5df0
    X86_AT(c, 0xe24e8u);
    push32(c, 0xe24edu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe24edu);
    X86_TICK(c, 65);
    // 0e24ed  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe24edu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e24f0  mov eax, dword ptr [0xb02fe]
    X86_AT(c, 0xe24f0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB02FEu)));
    // 0e24f5  cdq 
    X86_AT(c, 0xe24f5u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e24f6  mov ecx, 0x20
    X86_AT(c, 0xe24f6u);
    c.r[1] = 0x20u;
    // 0e24fb  idiv ecx
    X86_AT(c, 0xe24fbu);
    x86_idiv(c, c.r[1], 4, 0xe24fbu);
    // 0e24fd  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xe24fdu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e2500  add edx, eax
    X86_AT(c, 0xe2500u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e2502  push edx
    X86_AT(c, 0xe2502u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e2503  call 0xe244c
    X86_AT(c, 0xe2503u);
    push32(c, 0xe2508u); x86_call_known(c, 0xe244cu, f_000e244c); X86_RET(c, 0xe2508u);
    X86_TICK(c, 2);
    // 0e2508  add esp, 0xc
    X86_AT(c, 0xe2508u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_e250b:
    X86_TICK(c, 16);
    // 0e250b  leave 
    X86_AT(c, 0xe250bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e250c  ret 
    X86_AT(c, 0xe250cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe248cu, "ran off the end of a function");
}
void f_000e2510(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e2510  push ebp
    X86_AT(c, 0xe2510u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e2511  mov ebp, esp
    X86_AT(c, 0xe2511u);
    c.r[5] = c.r[4];
    // 0e2513  push eax
    X86_AT(c, 0xe2513u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2514  push ebx
    X86_AT(c, 0xe2514u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e2515  push esi
    X86_AT(c, 0xe2515u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2516  push edi
    X86_AT(c, 0xe2516u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2517  push 0xee
    X86_AT(c, 0xe2517u);
    { uint32_t v = 0xEEu; push32(c, v); }
    // 0e251c  push 1
    X86_AT(c, 0xe251cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e251e  call 0xc5df0
    X86_AT(c, 0xe251eu);
    push32(c, 0xe2523u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe2523u);
    X86_TICK(c, 57);
    // 0e2523  cdq 
    X86_AT(c, 0xe2523u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e2524  mov ecx, 3
    X86_AT(c, 0xe2524u);
    c.r[1] = 0x3u;
    // 0e2529  idiv ecx
    X86_AT(c, 0xe2529u);
    x86_idiv(c, c.r[1], 4, 0xe2529u);
    // 0e252b  mov edi, edx
    X86_AT(c, 0xe252bu);
    c.r[7] = c.r[2];
    // 0e252d  push 0xf
    X86_AT(c, 0xe252du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e252f  push 0xea44
    X86_AT(c, 0xe252fu);
    { uint32_t v = 0xEA44u; push32(c, v); }
    // 0e2534  call 0xcc830
    X86_AT(c, 0xe2534u);
    push32(c, 0xe2539u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xe2539u);
    X86_TICK(c, 11);
    // 0e2539  add esp, 0x10
    X86_AT(c, 0xe2539u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e253c  mov edx, edi
    X86_AT(c, 0xe253cu);
    c.r[2] = c.r[7];
    // 0e253e  and edx, edx
    X86_AT(c, 0xe253eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0e2540  je 0xe2555
    X86_AT(c, 0xe2540u);
    if (x86_cc(c, 4)) { goto L_e2555; }
    X86_TICK(c, 7);
    // 0e2542  cmp edx, 1
    X86_AT(c, 0xe2542u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0e2545  je 0xe25ba
    X86_AT(c, 0xe2545u);
    if (x86_cc(c, 4)) { goto L_e25ba; }
    X86_TICK(c, 7);
    // 0e2547  cmp edx, 2
    X86_AT(c, 0xe2547u);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0e254a  je 0xe2644
    X86_AT(c, 0xe254au);
    if (x86_cc(c, 4)) { goto L_e2644; }
    X86_TICK(c, 7);
    // 0e2550  jmp 0xe2699
    X86_AT(c, 0xe2550u);
    goto L_e2699;
L_e2555:
    X86_TICK(c, 9);
    // 0e2555  push 0xea7c
    X86_AT(c, 0xe2555u);
    { uint32_t v = 0xEA7Cu; push32(c, v); }
    // 0e255a  call 0xcc7bc
    X86_AT(c, 0xe255au);
    push32(c, 0xe255fu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe255fu);
    X86_TICK(c, 9);
    // 0e255f  push 5
    X86_AT(c, 0xe255fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e2561  call 0xc5ca4
    X86_AT(c, 0xe2561u);
    push32(c, 0xe2566u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe2566u);
    X86_TICK(c, 36);
    // 0e2566  mov eax, dword ptr [0xb0316]
    X86_AT(c, 0xe2566u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0316u)));
    // 0e256b  cdq 
    X86_AT(c, 0xe256bu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e256c  sub eax, edx
    X86_AT(c, 0xe256cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e256e  sar eax, 1
    X86_AT(c, 0xe256eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e2570  add eax, dword ptr [0xb0312]
    X86_AT(c, 0xe2570u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB0312u))), 0, 4); }
    // 0e2576  mov edx, 0xc3
    X86_AT(c, 0xe2576u);
    c.r[2] = 0xC3u;
    // 0e257b  sub edx, eax
    X86_AT(c, 0xe257bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e257d  add edx, edx
    X86_AT(c, 0xe257du);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[2], 0, 4); }
    // 0e257f  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xe257fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0e2582  push 0xff
    X86_AT(c, 0xe2582u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e2587  push 1
    X86_AT(c, 0xe2587u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2589  call 0xc5df0
    X86_AT(c, 0xe2589u);
    push32(c, 0xe258eu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe258eu);
    X86_TICK(c, 25);
    // 0e258e  cmp eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe258eu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4);
    // 0e2591  setl al
    X86_AT(c, 0xe2591u);
    s8(c, 0, x86_cc(c, 12) ? 1u : 0u);
    // 0e2594  movzx eax, al
    X86_AT(c, 0xe2594u);
    c.r[0] = g8(c, 0);
    // 0e2597  xchg esi, eax
    X86_AT(c, 0xe2597u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e2598  add esp, 0x10
    X86_AT(c, 0xe2598u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e259b  and esi, esi
    X86_AT(c, 0xe259bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e259d  je 0xe2699
    X86_AT(c, 0xe259du);
    if (x86_cc(c, 4)) { goto L_e2699; }
    X86_TICK(c, 11);
    // 0e25a3  push 0x64
    X86_AT(c, 0xe25a3u);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0e25a5  push 1
    X86_AT(c, 0xe25a5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e25a7  call 0xc5df0
    X86_AT(c, 0xe25a7u);
    push32(c, 0xe25acu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe25acu);
    X86_TICK(c, 9);
    // 0e25ac  push eax
    X86_AT(c, 0xe25acu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e25ad  call 0xe244c
    X86_AT(c, 0xe25adu);
    push32(c, 0xe25b2u); x86_call_known(c, 0xe244cu, f_000e244c); X86_RET(c, 0xe25b2u);
    X86_TICK(c, 9);
    // 0e25b2  add esp, 0xc
    X86_AT(c, 0xe25b2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e25b5  jmp 0xe2699
    X86_AT(c, 0xe25b5u);
    goto L_e2699;
L_e25ba:
    X86_TICK(c, 9);
    // 0e25ba  push 0xeab0
    X86_AT(c, 0xe25bau);
    { uint32_t v = 0xEAB0u; push32(c, v); }
    // 0e25bf  call 0xcc7bc
    X86_AT(c, 0xe25bfu);
    push32(c, 0xe25c4u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe25c4u);
    X86_TICK(c, 9);
    // 0e25c4  push 5
    X86_AT(c, 0xe25c4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e25c6  call 0xc5ca4
    X86_AT(c, 0xe25c6u);
    push32(c, 0xe25cbu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe25cbu);
    X86_TICK(c, 11);
    // 0e25cb  push 0xc8
    X86_AT(c, 0xe25cbu);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0e25d0  push 1
    X86_AT(c, 0xe25d0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e25d2  call 0xc5df0
    X86_AT(c, 0xe25d2u);
    push32(c, 0xe25d7u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe25d7u);
    X86_TICK(c, 21);
    // 0e25d7  cmp eax, 0x8c
    X86_AT(c, 0xe25d7u);
    (void)x86_sub(c, c.r[0], 0x8Cu, 0, 4);
    // 0e25dc  setg al
    X86_AT(c, 0xe25dcu);
    s8(c, 0, x86_cc(c, 15) ? 1u : 0u);
    // 0e25df  movzx eax, al
    X86_AT(c, 0xe25dfu);
    c.r[0] = g8(c, 0);
    // 0e25e2  xchg esi, eax
    X86_AT(c, 0xe25e2u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e25e3  add esp, 0x10
    X86_AT(c, 0xe25e3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e25e6  and esi, esi
    X86_AT(c, 0xe25e6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e25e8  je 0xe2699
    X86_AT(c, 0xe25e8u);
    if (x86_cc(c, 4)) { goto L_e2699; }
    X86_TICK(c, 9);
    // 0e25ee  push 0xeae4
    X86_AT(c, 0xe25eeu);
    { uint32_t v = 0xEAE4u; push32(c, v); }
    // 0e25f3  call 0xcc7bc
    X86_AT(c, 0xe25f3u);
    push32(c, 0xe25f8u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe25f8u);
    X86_TICK(c, 4);
    // 0e25f8  mov ebx, 1
    X86_AT(c, 0xe25f8u);
    c.r[3] = 0x1u;
    // 0e25fd  add esp, 4
    X86_AT(c, 0xe25fdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e2600:
    X86_TICK(c, 7);
    // 0e2600  cmp ebx, 6
    X86_AT(c, 0xe2600u);
    (void)x86_sub(c, c.r[3], 0x6u, 0, 4);
    // 0e2603  jg 0xe2699
    X86_AT(c, 0xe2603u);
    if (x86_cc(c, 15)) { goto L_e2699; }
    X86_TICK(c, 11);
    // 0e2609  mov eax, dword ptr [ebx*4 + 0xb02fe]
    X86_AT(c, 0xe2609u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB02FEu)));
    // 0e2610  cmp eax, 0x10
    X86_AT(c, 0xe2610u);
    (void)x86_sub(c, c.r[0], 0x10u, 0, 4);
    // 0e2613  jle 0xe262d
    X86_AT(c, 0xe2613u);
    if (x86_cc(c, 14)) { goto L_e262d; }
    X86_TICK(c, 35);
    // 0e2615  cdq 
    X86_AT(c, 0xe2615u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e2616  sub eax, edx
    X86_AT(c, 0xe2616u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e2618  sar eax, 1
    X86_AT(c, 0xe2618u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e261a  cdq 
    X86_AT(c, 0xe261au);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e261b  sub eax, edx
    X86_AT(c, 0xe261bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e261d  sar eax, 1
    X86_AT(c, 0xe261du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e261f  cdq 
    X86_AT(c, 0xe261fu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e2620  sub eax, edx
    X86_AT(c, 0xe2620u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e2622  sar eax, 1
    X86_AT(c, 0xe2622u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e2624  sub dword ptr [ebx*4 + 0xb02fe], eax
    X86_AT(c, 0xe2624u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB02FEu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0e262b  jmp 0xe2641
    X86_AT(c, 0xe262bu);
    goto L_e2641;
L_e262d:
    X86_TICK(c, 11);
    // 0e262d  mov eax, dword ptr [ebx*4 + 0xb02fe]
    X86_AT(c, 0xe262du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB02FEu)));
    // 0e2634  cmp eax, 2
    X86_AT(c, 0xe2634u);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0e2637  jl 0xe2641
    X86_AT(c, 0xe2637u);
    if (x86_cc(c, 12)) { goto L_e2641; }
    X86_TICK(c, 7);
    // 0e2639  sub dword ptr [ebx*4 + 0xb02fe], 2
    X86_AT(c, 0xe2639u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xB02FEu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x2u, 0, 4)); }
L_e2641:
    X86_TICK(c, 9);
    // 0e2641  inc ebx
    X86_AT(c, 0xe2641u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0e2642  jmp 0xe2600
    X86_AT(c, 0xe2642u);
    X86_POLL(c, 0xe2600u); goto L_e2600;
L_e2644:
    X86_TICK(c, 9);
    // 0e2644  push 0xeb30
    X86_AT(c, 0xe2644u);
    { uint32_t v = 0xEB30u; push32(c, v); }
    // 0e2649  call 0xcc7bc
    X86_AT(c, 0xe2649u);
    push32(c, 0xe264eu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe264eu);
    X86_TICK(c, 9);
    // 0e264e  push 5
    X86_AT(c, 0xe264eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e2650  call 0xc5ca4
    X86_AT(c, 0xe2650u);
    push32(c, 0xe2655u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe2655u);
    X86_TICK(c, 11);
    // 0e2655  push 0xc8
    X86_AT(c, 0xe2655u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0e265a  push 1
    X86_AT(c, 0xe265au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e265c  call 0xc5df0
    X86_AT(c, 0xe265cu);
    push32(c, 0xe2661u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe2661u);
    X86_TICK(c, 21);
    // 0e2661  cmp eax, 0x8c
    X86_AT(c, 0xe2661u);
    (void)x86_sub(c, c.r[0], 0x8Cu, 0, 4);
    // 0e2666  setg al
    X86_AT(c, 0xe2666u);
    s8(c, 0, x86_cc(c, 15) ? 1u : 0u);
    // 0e2669  movzx eax, al
    X86_AT(c, 0xe2669u);
    c.r[0] = g8(c, 0);
    // 0e266c  xchg esi, eax
    X86_AT(c, 0xe266cu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e266d  add esp, 0x10
    X86_AT(c, 0xe266du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e2670  and esi, esi
    X86_AT(c, 0xe2670u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e2672  je 0xe2699
    X86_AT(c, 0xe2672u);
    if (x86_cc(c, 4)) { goto L_e2699; }
    X86_TICK(c, 58);
    // 0e2674  mov eax, dword ptr [0xb02fe]
    X86_AT(c, 0xe2674u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB02FEu)));
    // 0e2679  cdq 
    X86_AT(c, 0xe2679u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e267a  mov ecx, 0x20
    X86_AT(c, 0xe267au);
    c.r[1] = 0x20u;
    // 0e267f  idiv ecx
    X86_AT(c, 0xe267fu);
    x86_idiv(c, c.r[1], 4, 0xe267fu);
    // 0e2681  xchg ebx, eax
    X86_AT(c, 0xe2681u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e2682  cmp ebx, 0xff
    X86_AT(c, 0xe2682u);
    (void)x86_sub(c, c.r[3], 0xFFu, 0, 4);
    // 0e2688  jle 0xe2690
    X86_AT(c, 0xe2688u);
    if (x86_cc(c, 14)) { goto L_e2690; }
    X86_TICK(c, 2);
    // 0e268a  sub ebx, 0xfe
    X86_AT(c, 0xe268au);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0xFEu, 0, 4); }
L_e2690:
    X86_TICK(c, 9);
    // 0e2690  push ebx
    X86_AT(c, 0xe2690u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e2691  call 0xe244c
    X86_AT(c, 0xe2691u);
    push32(c, 0xe2696u); x86_call_known(c, 0xe244cu, f_000e244c); X86_RET(c, 0xe2696u);
    X86_TICK(c, 2);
    // 0e2696  add esp, 4
    X86_AT(c, 0xe2696u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e2699:
    X86_TICK(c, 7);
    // 0e2699  and esi, esi
    X86_AT(c, 0xe2699u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e269b  jne 0xe26aa
    X86_AT(c, 0xe269bu);
    if (x86_cc(c, 5)) { goto L_e26aa; }
    X86_TICK(c, 9);
    // 0e269d  push 0xeb68
    X86_AT(c, 0xe269du);
    { uint32_t v = 0xEB68u; push32(c, v); }
    // 0e26a2  call 0xcc7bc
    X86_AT(c, 0xe26a2u);
    push32(c, 0xe26a7u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe26a7u);
    X86_TICK(c, 2);
    // 0e26a7  add esp, 4
    X86_AT(c, 0xe26a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e26aa:
    X86_TICK(c, 28);
    // 0e26aa  pop edi
    X86_AT(c, 0xe26aau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e26ab  pop esi
    X86_AT(c, 0xe26abu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e26ac  pop ebx
    X86_AT(c, 0xe26acu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e26ad  leave 
    X86_AT(c, 0xe26adu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e26ae  ret 
    X86_AT(c, 0xe26aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2510u, "ran off the end of a function");
}
void f_000e2699(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0e2699  and esi, esi
    X86_AT(c, 0xe2699u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e269b  jne 0xe26aa
    X86_AT(c, 0xe269bu);
    if (x86_cc(c, 5)) { goto L_e26aa; }
    X86_TICK(c, 9);
    // 0e269d  push 0xeb68
    X86_AT(c, 0xe269du);
    { uint32_t v = 0xEB68u; push32(c, v); }
    // 0e26a2  call 0xcc7bc
    X86_AT(c, 0xe26a2u);
    push32(c, 0xe26a7u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe26a7u);
    X86_TICK(c, 2);
    // 0e26a7  add esp, 4
    X86_AT(c, 0xe26a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e26aa:
    X86_TICK(c, 28);
    // 0e26aa  pop edi
    X86_AT(c, 0xe26aau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e26ab  pop esi
    X86_AT(c, 0xe26abu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e26ac  pop ebx
    X86_AT(c, 0xe26acu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e26ad  leave 
    X86_AT(c, 0xe26adu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e26ae  ret 
    X86_AT(c, 0xe26aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2699u, "ran off the end of a function");
}
void f_000e26b0(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0e26b0  push ebp
    X86_AT(c, 0xe26b0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e26b1  mov ebp, esp
    X86_AT(c, 0xe26b1u);
    c.r[5] = c.r[4];
    // 0e26b3  sub esp, 8
    X86_AT(c, 0xe26b3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0e26b6  push ebx
    X86_AT(c, 0xe26b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e26b7  push esi
    X86_AT(c, 0xe26b7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e26b8  push edi
    X86_AT(c, 0xe26b8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e26b9  sub ebx, ebx
    X86_AT(c, 0xe26b9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0e26bb  cmp ebx, dword ptr [0xc2e98]
    X86_AT(c, 0xe26bbu);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(0xC2E98u))), 0, 4);
    // 0e26c1  jne 0xe26e9
    X86_AT(c, 0xe26c1u);
    if (x86_cc(c, 5)) { goto L_e26e9; }
    X86_TICK(c, 11);
    // 0e26c3  push 0xc8
    X86_AT(c, 0xe26c3u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0e26c8  push 1
    X86_AT(c, 0xe26c8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e26ca  call 0xc5df0
    X86_AT(c, 0xe26cau);
    push32(c, 0xe26cfu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe26cfu);
    X86_TICK(c, 9);
    // 0e26cf  add esp, 8
    X86_AT(c, 0xe26cfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e26d2  cmp eax, 0x11
    X86_AT(c, 0xe26d2u);
    (void)x86_sub(c, c.r[0], 0x11u, 0, 4);
    // 0e26d5  jge 0xe26e9
    X86_AT(c, 0xe26d5u);
    if (x86_cc(c, 13)) { goto L_e26e9; }
    X86_TICK(c, 9);
    // 0e26d7  push 0xeb80
    X86_AT(c, 0xe26d7u);
    { uint32_t v = 0xEB80u; push32(c, v); }
    // 0e26dc  call 0xcc7bc
    X86_AT(c, 0xe26dcu);
    push32(c, 0xe26e1u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe26e1u);
    X86_TICK(c, 9);
    // 0e26e1  add esp, 4
    X86_AT(c, 0xe26e1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e26e4  jmp 0xe2820
    X86_AT(c, 0xe26e4u);
    goto L_e2820;
L_e26e9:
    X86_TICK(c, 12);
    // 0e26e9  cmp dword ptr [0xc2e98], 0
    X86_AT(c, 0xe26e9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2E98u))), 0x0u, 0, 4);
    // 0e26f0  je 0xe2820
    X86_AT(c, 0xe26f0u);
    if (x86_cc(c, 4)) { goto L_e2820; }
    X86_TICK(c, 12);
    // 0e26f6  cmp dword ptr [0xc2e8c], 0x9c
    X86_AT(c, 0xe26f6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2E8Cu))), 0x9Cu, 0, 4);
    // 0e2700  jne 0xe270e
    X86_AT(c, 0xe2700u);
    if (x86_cc(c, 5)) { goto L_e270e; }
    X86_TICK(c, 14);
    // 0e2702  add dword ptr [0xc2dc8], 0x19
    X86_AT(c, 0xe2702u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC2DC8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x19u, 0, 4)); }
    // 0e2709  jmp 0xe2820
    X86_AT(c, 0xe2709u);
    goto L_e2820;
L_e270e:
    X86_TICK(c, 29);
    // 0e270e  mov eax, 0xc2db8
    X86_AT(c, 0xe270eu);
    c.r[0] = 0xC2DB8u;
    // 0e2713  mov edi, dword ptr [eax + 8]
    X86_AT(c, 0xe2713u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 0e2716  sub edi, dword ptr [eax]
    X86_AT(c, 0xe2716u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0]))), 0, 4); }
    // 0e2718  mov esi, dword ptr [eax + 0xc]
    X86_AT(c, 0xe2718u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)));
    // 0e271b  sub esi, dword ptr [eax + 4]
    X86_AT(c, 0xe271bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))), 0, 4); }
    // 0e271e  and edi, edi
    X86_AT(c, 0xe271eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e2720  jl 0xe2726
    X86_AT(c, 0xe2720u);
    if (x86_cc(c, 12)) { goto L_e2726; }
    X86_TICK(c, 9);
    // 0e2722  mov eax, edi
    X86_AT(c, 0xe2722u);
    c.r[0] = c.r[7];
    // 0e2724  jmp 0xe272a
    X86_AT(c, 0xe2724u);
    goto L_e272a;
L_e2726:
    X86_TICK(c, 4);
    // 0e2726  mov eax, edi
    X86_AT(c, 0xe2726u);
    c.r[0] = c.r[7];
    // 0e2728  neg eax
    X86_AT(c, 0xe2728u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_e272a:
    X86_TICK(c, 9);
    // 0e272a  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe272au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e272d  and esi, esi
    X86_AT(c, 0xe272du);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e272f  jl 0xe2735
    X86_AT(c, 0xe272fu);
    if (x86_cc(c, 12)) { goto L_e2735; }
    X86_TICK(c, 9);
    // 0e2731  mov eax, esi
    X86_AT(c, 0xe2731u);
    c.r[0] = c.r[6];
    // 0e2733  jmp 0xe2739
    X86_AT(c, 0xe2733u);
    goto L_e2739;
L_e2735:
    X86_TICK(c, 4);
    // 0e2735  mov eax, esi
    X86_AT(c, 0xe2735u);
    c.r[0] = c.r[6];
    // 0e2737  neg eax
    X86_AT(c, 0xe2737u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_e2739:
    X86_TICK(c, 15);
    // 0e2739  add eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe2739u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 0e273c  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe273cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e273f  dec eax
    X86_AT(c, 0xe273fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e2740  jne 0xe2755
    X86_AT(c, 0xe2740u);
    if (x86_cc(c, 5)) { goto L_e2755; }
    X86_TICK(c, 12);
    // 0e2742  cmp dword ptr [0xc2e94], 0x14
    X86_AT(c, 0xe2742u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2E94u))), 0x14u, 0, 4);
    // 0e2749  jne 0xe2755
    X86_AT(c, 0xe2749u);
    if (x86_cc(c, 5)) { goto L_e2755; }
    X86_TICK(c, 7);
    // 0e274b  call 0xe248c
    X86_AT(c, 0xe274bu);
    push32(c, 0xe2750u); x86_call_known(c, 0xe248cu, f_000e248c); X86_RET(c, 0xe2750u);
    X86_TICK(c, 7);
    // 0e2750  jmp 0xe2820
    X86_AT(c, 0xe2750u);
    goto L_e2820;
L_e2755:
    X86_TICK(c, 12);
    // 0e2755  cmp dword ptr [ebp - 4], 7
    X86_AT(c, 0xe2755u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x7u, 0, 4);
    // 0e2759  jge 0xe2784
    X86_AT(c, 0xe2759u);
    if (x86_cc(c, 13)) { goto L_e2784; }
    X86_TICK(c, 11);
    // 0e275b  push 0xff
    X86_AT(c, 0xe275bu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e2760  push 1
    X86_AT(c, 0xe2760u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2762  call 0xc5df0
    X86_AT(c, 0xe2762u);
    push32(c, 0xe2767u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe2767u);
    X86_TICK(c, 9);
    // 0e2767  add esp, 8
    X86_AT(c, 0xe2767u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e276a  cmp eax, 0x80
    X86_AT(c, 0xe276au);
    (void)x86_sub(c, c.r[0], 0x80u, 0, 4);
    // 0e276f  jge 0xe2784
    X86_AT(c, 0xe276fu);
    if (x86_cc(c, 13)) { goto L_e2784; }
    X86_TICK(c, 12);
    // 0e2771  cmp dword ptr [0xc2e94], 0x14
    X86_AT(c, 0xe2771u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2E94u))), 0x14u, 0, 4);
    // 0e2778  jne 0xe2784
    X86_AT(c, 0xe2778u);
    if (x86_cc(c, 5)) { goto L_e2784; }
    X86_TICK(c, 7);
    // 0e277a  call 0xe2510
    X86_AT(c, 0xe277au);
    push32(c, 0xe277fu); x86_call_known(c, 0xe2510u, f_000e2510); X86_RET(c, 0xe277fu);
    X86_TICK(c, 7);
    // 0e277f  jmp 0xe2820
    X86_AT(c, 0xe277fu);
    goto L_e2820;
L_e2784:
    X86_TICK(c, 12);
    // 0e2784  cmp dword ptr [0xc2e94], 0x28
    X86_AT(c, 0xe2784u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2E94u))), 0x28u, 0, 4);
    // 0e278b  jne 0xe27a1
    X86_AT(c, 0xe278bu);
    if (x86_cc(c, 5)) { goto L_e27a1; }
    X86_TICK(c, 7);
    // 0e278d  and edi, edi
    X86_AT(c, 0xe278du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e278f  jne 0xe2797
    X86_AT(c, 0xe278fu);
    if (x86_cc(c, 5)) { goto L_e2797; }
    X86_TICK(c, 7);
    // 0e2791  call 0xe2394
    X86_AT(c, 0xe2791u);
    push32(c, 0xe2796u); x86_call_known(c, 0xe2394u, f_000e2394); X86_RET(c, 0xe2796u);
    X86_TICK(c, 3);
    // 0e2796  xchg edi, eax
    X86_AT(c, 0xe2796u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_e2797:
    X86_TICK(c, 7);
    // 0e2797  and esi, esi
    X86_AT(c, 0xe2797u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e2799  jne 0xe27a1
    X86_AT(c, 0xe2799u);
    if (x86_cc(c, 5)) { goto L_e27a1; }
    X86_TICK(c, 7);
    // 0e279b  call 0xe2394
    X86_AT(c, 0xe279bu);
    push32(c, 0xe27a0u); x86_call_known(c, 0xe2394u, f_000e2394); X86_RET(c, 0xe27a0u);
    X86_TICK(c, 3);
    // 0e27a0  xchg esi, eax
    X86_AT(c, 0xe27a0u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_e27a1:
    X86_TICK(c, 11);
    // 0e27a1  push 0xff
    X86_AT(c, 0xe27a1u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e27a6  push 1
    X86_AT(c, 0xe27a6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e27a8  call 0xc5df0
    X86_AT(c, 0xe27a8u);
    push32(c, 0xe27adu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe27adu);
    X86_TICK(c, 9);
    // 0e27ad  add esp, 8
    X86_AT(c, 0xe27adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e27b0  test al, 1
    X86_AT(c, 0xe27b0u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0e27b2  je 0xe27e1
    X86_AT(c, 0xe27b2u);
    if (x86_cc(c, 4)) { goto L_e27e1; }
    X86_TICK(c, 9);
    // 0e27b4  push esi
    X86_AT(c, 0xe27b4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e27b5  call 0xe12a8
    X86_AT(c, 0xe27b5u);
    push32(c, 0xe27bau); x86_call_known(c, 0xe12a8u, f_000e12a8); X86_RET(c, 0xe27bau);
    X86_TICK(c, 11);
    // 0e27ba  push eax
    X86_AT(c, 0xe27bau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e27bb  push 0
    X86_AT(c, 0xe27bbu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e27bd  call 0xe23b4
    X86_AT(c, 0xe27bdu);
    push32(c, 0xe27c2u); x86_call_known(c, 0xe23b4u, f_000e23b4); X86_RET(c, 0xe27c2u);
    X86_TICK(c, 12);
    // 0e27c2  xchg ebx, eax
    X86_AT(c, 0xe27c2u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e27c3  add esp, 0xc
    X86_AT(c, 0xe27c3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e27c6  and ebx, ebx
    X86_AT(c, 0xe27c6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0e27c8  jne 0xe280c
    X86_AT(c, 0xe27c8u);
    if (x86_cc(c, 5)) { goto L_e280c; }
    X86_TICK(c, 11);
    // 0e27ca  push 0
    X86_AT(c, 0xe27cau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e27cc  push edi
    X86_AT(c, 0xe27ccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e27cd  call 0xe12a8
    X86_AT(c, 0xe27cdu);
    push32(c, 0xe27d2u); x86_call_known(c, 0xe12a8u, f_000e12a8); X86_RET(c, 0xe27d2u);
    X86_TICK(c, 11);
    // 0e27d2  add esp, 4
    X86_AT(c, 0xe27d2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e27d5  push eax
    X86_AT(c, 0xe27d5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e27d6  call 0xe23b4
    X86_AT(c, 0xe27d6u);
    push32(c, 0xe27dbu); x86_call_known(c, 0xe23b4u, f_000e23b4); X86_RET(c, 0xe27dbu);
    X86_TICK(c, 12);
    // 0e27db  xchg ebx, eax
    X86_AT(c, 0xe27dbu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e27dc  add esp, 8
    X86_AT(c, 0xe27dcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e27df  jmp 0xe280c
    X86_AT(c, 0xe27dfu);
    goto L_e280c;
L_e27e1:
    X86_TICK(c, 11);
    // 0e27e1  push 0
    X86_AT(c, 0xe27e1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e27e3  push edi
    X86_AT(c, 0xe27e3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e27e4  call 0xe12a8
    X86_AT(c, 0xe27e4u);
    push32(c, 0xe27e9u); x86_call_known(c, 0xe12a8u, f_000e12a8); X86_RET(c, 0xe27e9u);
    X86_TICK(c, 11);
    // 0e27e9  add esp, 4
    X86_AT(c, 0xe27e9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e27ec  push eax
    X86_AT(c, 0xe27ecu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e27ed  call 0xe23b4
    X86_AT(c, 0xe27edu);
    push32(c, 0xe27f2u); x86_call_known(c, 0xe23b4u, f_000e23b4); X86_RET(c, 0xe27f2u);
    X86_TICK(c, 12);
    // 0e27f2  xchg ebx, eax
    X86_AT(c, 0xe27f2u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e27f3  add esp, 8
    X86_AT(c, 0xe27f3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e27f6  and ebx, ebx
    X86_AT(c, 0xe27f6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0e27f8  jne 0xe280c
    X86_AT(c, 0xe27f8u);
    if (x86_cc(c, 5)) { goto L_e280c; }
    X86_TICK(c, 9);
    // 0e27fa  push esi
    X86_AT(c, 0xe27fau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e27fb  call 0xe12a8
    X86_AT(c, 0xe27fbu);
    push32(c, 0xe2800u); x86_call_known(c, 0xe12a8u, f_000e12a8); X86_RET(c, 0xe2800u);
    X86_TICK(c, 11);
    // 0e2800  push eax
    X86_AT(c, 0xe2800u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2801  push 0
    X86_AT(c, 0xe2801u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2803  call 0xe23b4
    X86_AT(c, 0xe2803u);
    push32(c, 0xe2808u); x86_call_known(c, 0xe23b4u, f_000e23b4); X86_RET(c, 0xe2808u);
    X86_TICK(c, 5);
    // 0e2808  xchg ebx, eax
    X86_AT(c, 0xe2808u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e2809  add esp, 0xc
    X86_AT(c, 0xe2809u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_e280c:
    X86_TICK(c, 7);
    // 0e280c  and ebx, ebx
    X86_AT(c, 0xe280cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0e280e  jne 0xe2820
    X86_AT(c, 0xe280eu);
    if (x86_cc(c, 5)) { goto L_e2820; }
    X86_TICK(c, 12);
    // 0e2810  cmp dword ptr [0xc2e94], 0x28
    X86_AT(c, 0xe2810u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2E94u))), 0x28u, 0, 4);
    // 0e2817  jne 0xe2820
    X86_AT(c, 0xe2817u);
    if (x86_cc(c, 5)) { goto L_e2820; }
    X86_TICK(c, 7);
    // 0e2819  add dword ptr [0xc2dc8], 5
    X86_AT(c, 0xe2819u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC2DC8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x5u, 0, 4)); }
L_e2820:
    X86_TICK(c, 28);
    // 0e2820  pop edi
    X86_AT(c, 0xe2820u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e2821  pop esi
    X86_AT(c, 0xe2821u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e2822  pop ebx
    X86_AT(c, 0xe2822u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e2823  leave 
    X86_AT(c, 0xe2823u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e2824  ret 
    X86_AT(c, 0xe2824u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe26b0u, "ran off the end of a function");
}
void f_000e2820(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0e2820  pop edi
    X86_AT(c, 0xe2820u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e2821  pop esi
    X86_AT(c, 0xe2821u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e2822  pop ebx
    X86_AT(c, 0xe2822u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e2823  leave 
    X86_AT(c, 0xe2823u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e2824  ret 
    X86_AT(c, 0xe2824u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2820u, "ran off the end of a function");
}
void f_000e2828(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0e2828  push ebx
    X86_AT(c, 0xe2828u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e2829  push edi
    X86_AT(c, 0xe2829u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e282a  sub edi, edi
    X86_AT(c, 0xe282au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0e282c  cmp edi, dword ptr [0xc2e98]
    X86_AT(c, 0xe282cu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xC2E98u))), 0, 4);
    // 0e2832  je 0xe2901
    X86_AT(c, 0xe2832u);
    if (x86_cc(c, 4)) { goto L_e2901; }
    X86_TICK(c, 12);
    // 0e2838  cmp dword ptr [0xc2dd4], 0xffffffff
    X86_AT(c, 0xe2838u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2DD4u))), 0xFFFFFFFFu, 0, 4);
    // 0e283f  jne 0xe2901
    X86_AT(c, 0xe283fu);
    if (x86_cc(c, 5)) { goto L_e2901; }
    X86_TICK(c, 11);
    // 0e2845  push 0xc8
    X86_AT(c, 0xe2845u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0e284a  push 1
    X86_AT(c, 0xe284au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e284c  call 0xc5df0
    X86_AT(c, 0xe284cu);
    push32(c, 0xe2851u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe2851u);
    X86_TICK(c, 9);
    // 0e2851  add esp, 8
    X86_AT(c, 0xe2851u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e2854  cmp eax, 0x24
    X86_AT(c, 0xe2854u);
    (void)x86_sub(c, c.r[0], 0x24u, 0, 4);
    // 0e2857  jge 0xe2901
    X86_AT(c, 0xe2857u);
    if (x86_cc(c, 13)) { goto L_e2901; }
L_e285d:
    X86_TICK(c, 11);
    // 0e285d  push 0xff
    X86_AT(c, 0xe285du);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e2862  push 1
    X86_AT(c, 0xe2862u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2864  call 0xc5df0
    X86_AT(c, 0xe2864u);
    push32(c, 0xe2869u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe2869u);
    X86_TICK(c, 13);
    // 0e2869  push 0xff
    X86_AT(c, 0xe2869u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e286e  push 1
    X86_AT(c, 0xe286eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2870  mov ebx, eax
    X86_AT(c, 0xe2870u);
    c.r[3] = c.r[0];
    // 0e2872  call 0xc5df0
    X86_AT(c, 0xe2872u);
    push32(c, 0xe2877u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe2877u);
    X86_TICK(c, 59);
    // 0e2877  add eax, ebx
    X86_AT(c, 0xe2877u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[3], 0, 4); }
    // 0e2879  cdq 
    X86_AT(c, 0xe2879u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e287a  mov ecx, 0x13
    X86_AT(c, 0xe287au);
    c.r[1] = 0x13u;
    // 0e287f  idiv ecx
    X86_AT(c, 0xe287fu);
    x86_idiv(c, c.r[1], 4, 0xe287fu);
    // 0e2881  mov dword ptr [0xc2dcc], edx
    X86_AT(c, 0xe2881u);
    wr32((c.sbase[3] + (uint32_t)(0xC2DCCu)), c.r[2]);
    // 0e2887  push 0xff
    X86_AT(c, 0xe2887u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e288c  push 1
    X86_AT(c, 0xe288cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e288e  call 0xc5df0
    X86_AT(c, 0xe288eu);
    push32(c, 0xe2893u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe2893u);
    X86_TICK(c, 13);
    // 0e2893  push 0xff
    X86_AT(c, 0xe2893u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e2898  push 1
    X86_AT(c, 0xe2898u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e289a  mov ebx, eax
    X86_AT(c, 0xe289au);
    c.r[3] = c.r[0];
    // 0e289c  call 0xc5df0
    X86_AT(c, 0xe289cu);
    push32(c, 0xe28a1u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xe28a1u);
    X86_TICK(c, 70);
    // 0e28a1  add eax, ebx
    X86_AT(c, 0xe28a1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[3], 0, 4); }
    // 0e28a3  cdq 
    X86_AT(c, 0xe28a3u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e28a4  mov ecx, 9
    X86_AT(c, 0xe28a4u);
    c.r[1] = 0x9u;
    // 0e28a9  idiv ecx
    X86_AT(c, 0xe28a9u);
    x86_idiv(c, c.r[1], 4, 0xe28a9u);
    // 0e28ab  mov dword ptr [0xc2dd0], edx
    X86_AT(c, 0xe28abu);
    wr32((c.sbase[3] + (uint32_t)(0xC2DD0u)), c.r[2]);
    // 0e28b1  mov eax, dword ptr [0xc2dcc]
    X86_AT(c, 0xe28b1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC2DCCu)));
    // 0e28b6  lea eax, [eax + eax*8]
    X86_AT(c, 0xe28b6u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e28b9  add edx, eax
    X86_AT(c, 0xe28b9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e28bb  add esp, 0x20
    X86_AT(c, 0xe28bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0e28be  cmp byte ptr [edx + 0xc2de0], 0
    X86_AT(c, 0xe28beu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xC2DE0u))), 0x0u, 0, 1);
    // 0e28c5  je 0xe28cd
    X86_AT(c, 0xe28c5u);
    if (x86_cc(c, 4)) { goto L_e28cd; }
    X86_TICK(c, 9);
    // 0e28c7  inc edi
    X86_AT(c, 0xe28c7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e28c8  cmp edi, 0x64
    X86_AT(c, 0xe28c8u);
    (void)x86_sub(c, c.r[7], 0x64u, 0, 4);
    // 0e28cb  jl 0xe285d
    X86_AT(c, 0xe28cbu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xe285du); goto L_e285d; }
L_e28cd:
    X86_TICK(c, 7);
    // 0e28cd  cmp edi, 0x64
    X86_AT(c, 0xe28cdu);
    (void)x86_sub(c, c.r[7], 0x64u, 0, 4);
    // 0e28d0  jge 0xe2901
    X86_AT(c, 0xe28d0u);
    if (x86_cc(c, 13)) { goto L_e2901; }
    X86_TICK(c, 17);
    // 0e28d2  mov eax, 0xc2db8
    X86_AT(c, 0xe28d2u);
    c.r[0] = 0xC2DB8u;
    // 0e28d7  mov edx, dword ptr [eax + 0x14]
    X86_AT(c, 0xe28d7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x14u)));
    // 0e28da  cmp edx, dword ptr [eax + 8]
    X86_AT(c, 0xe28dau);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))), 0, 4);
    // 0e28dd  je 0xe2901
    X86_AT(c, 0xe28ddu);
    if (x86_cc(c, 4)) { goto L_e2901; }
    X86_TICK(c, 11);
    // 0e28df  cmp edx, dword ptr [eax]
    X86_AT(c, 0xe28dfu);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[0]))), 0, 4);
    // 0e28e1  je 0xe2901
    X86_AT(c, 0xe28e1u);
    if (x86_cc(c, 4)) { goto L_e2901; }
    X86_TICK(c, 15);
    // 0e28e3  mov ecx, dword ptr [eax + 0x18]
    X86_AT(c, 0xe28e3u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x18u)));
    // 0e28e6  cmp ecx, dword ptr [eax + 0xc]
    X86_AT(c, 0xe28e6u);
    (void)x86_sub(c, c.r[1], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu))), 0, 4);
    // 0e28e9  je 0xe2901
    X86_AT(c, 0xe28e9u);
    if (x86_cc(c, 4)) { goto L_e2901; }
    X86_TICK(c, 11);
    // 0e28eb  cmp ecx, dword ptr [eax + 4]
    X86_AT(c, 0xe28ebu);
    (void)x86_sub(c, c.r[1], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))), 0, 4);
    // 0e28ee  je 0xe2901
    X86_AT(c, 0xe28eeu);
    if (x86_cc(c, 4)) { goto L_e2901; }
    X86_TICK(c, 8);
    // 0e28f0  mov dword ptr [eax + 0x1c], 0
    X86_AT(c, 0xe28f0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x1Cu)), 0x0u);
    // 0e28f7  lea edx, [edx + edx*8]
    X86_AT(c, 0xe28f7u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0e28fa  add ecx, edx
    X86_AT(c, 0xe28fau);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0e28fc  mov byte ptr [eax + ecx*1 + 0x28], 0xa2
    X86_AT(c, 0xe28fcu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x28u)), 0xA2u);
L_e2901:
    X86_TICK(c, 14);
    // 0e2901  mov eax, 0xc2db8
    X86_AT(c, 0xe2901u);
    c.r[0] = 0xC2DB8u;
    // 0e2906  cmp dword ptr [eax + 0x10], 0x1f4
    X86_AT(c, 0xe2906u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x10u))), 0x1F4u, 0, 4);
    // 0e290d  jle 0xe2928
    X86_AT(c, 0xe290du);
    if (x86_cc(c, 14)) { goto L_e2928; }
    X86_TICK(c, 11);
    // 0e290f  mov dword ptr [eax + 0xd4], 0x9a
    X86_AT(c, 0xe290fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4u)), 0x9Au);
    // 0e2919  mov dword ptr [eax + 0xdc], 0x14
    X86_AT(c, 0xe2919u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xDCu)), 0x14u);
    // 0e2923  jmp 0xe29d2
    X86_AT(c, 0xe2923u);
    goto L_e29d2;
L_e2928:
    X86_TICK(c, 13);
    // 0e2928  mov eax, 0xc2db8
    X86_AT(c, 0xe2928u);
    c.r[0] = 0xC2DB8u;
    // 0e292d  mov edx, dword ptr [eax + 0x10]
    X86_AT(c, 0xe292du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x10u)));
    // 0e2930  cmp edx, 0x1f4
    X86_AT(c, 0xe2930u);
    (void)x86_sub(c, c.r[2], 0x1F4u, 0, 4);
    // 0e2936  jg 0xe2967
    X86_AT(c, 0xe2936u);
    if (x86_cc(c, 15)) { goto L_e2967; }
    X86_TICK(c, 7);
    // 0e2938  dec edx
    X86_AT(c, 0xe2938u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0e2939  jl 0xe2967
    X86_AT(c, 0xe2939u);
    if (x86_cc(c, 12)) { goto L_e2967; }
    X86_TICK(c, 12);
    // 0e293b  cmp dword ptr [eax + 0xd4], 0x9e
    X86_AT(c, 0xe293bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4u))), 0x9Eu, 0, 4);
    // 0e2945  je 0xe2967
    X86_AT(c, 0xe2945u);
    if (x86_cc(c, 4)) { goto L_e2967; }
    X86_TICK(c, 13);
    // 0e2947  mov dword ptr [eax + 0xd4], 0x9e
    X86_AT(c, 0xe2947u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4u)), 0x9Eu);
    // 0e2951  mov dword ptr [eax + 0xdc], 0x28
    X86_AT(c, 0xe2951u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xDCu)), 0x28u);
    // 0e295b  mov dword ptr [eax + 0xd8], 0
    X86_AT(c, 0xe295bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xD8u)), 0x0u);
    // 0e2965  jmp 0xe29d2
    X86_AT(c, 0xe2965u);
    goto L_e29d2;
L_e2967:
    X86_TICK(c, 12);
    // 0e2967  cmp dword ptr [0xc2dc8], 0
    X86_AT(c, 0xe2967u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2DC8u))), 0x0u, 0, 4);
    // 0e296e  jg 0xe29d2
    X86_AT(c, 0xe296eu);
    if (x86_cc(c, 15)) { goto L_e29d2; }
    X86_TICK(c, 12);
    // 0e2970  cmp dword ptr [0xc2e94], 0x1e
    X86_AT(c, 0xe2970u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2E94u))), 0x1Eu, 0, 4);
    // 0e2977  je 0xe29d2
    X86_AT(c, 0xe2977u);
    if (x86_cc(c, 4)) { goto L_e29d2; }
    X86_TICK(c, 11);
    // 0e2979  push 0xf
    X86_AT(c, 0xe2979u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e297b  push 0xebd4
    X86_AT(c, 0xe297bu);
    { uint32_t v = 0xEBD4u; push32(c, v); }
    // 0e2980  call 0xcc830
    X86_AT(c, 0xe2980u);
    push32(c, 0xe2985u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xe2985u);
    X86_TICK(c, 14);
    // 0e2985  add esp, 8
    X86_AT(c, 0xe2985u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e2988  cmp dword ptr [0xc2e9c], 0
    X86_AT(c, 0xe2988u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2E9Cu))), 0x0u, 0, 4);
    // 0e298f  jne 0xe299d
    X86_AT(c, 0xe298fu);
    if (x86_cc(c, 5)) { goto L_e299d; }
    X86_TICK(c, 9);
    // 0e2991  push 0xec0c
    X86_AT(c, 0xe2991u);
    { uint32_t v = 0xEC0Cu; push32(c, v); }
    // 0e2996  call 0xcc7bc
    X86_AT(c, 0xe2996u);
    push32(c, 0xe299bu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe299bu);
    X86_TICK(c, 7);
    // 0e299b  jmp 0xe29b1
    X86_AT(c, 0xe299bu);
    goto L_e29b1;
L_e299d:
    X86_TICK(c, 9);
    // 0e299d  push 0xec3e
    X86_AT(c, 0xe299du);
    { uint32_t v = 0xEC3Eu; push32(c, v); }
    // 0e29a2  call 0xcc7bc
    X86_AT(c, 0xe29a2u);
    push32(c, 0xe29a7u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe29a7u);
    X86_TICK(c, 2);
    // 0e29a7  mov dword ptr [0xc2ea0], 1
    X86_AT(c, 0xe29a7u);
    wr32((c.sbase[3] + (uint32_t)(0xC2EA0u)), 0x1u);
L_e29b1:
    X86_TICK(c, 8);
    // 0e29b1  add esp, 4
    X86_AT(c, 0xe29b1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e29b4  mov dword ptr [0xc2e8c], 0x9c
    X86_AT(c, 0xe29b4u);
    wr32((c.sbase[3] + (uint32_t)(0xC2E8Cu)), 0x9Cu);
    // 0e29be  mov dword ptr [0xc2e94], 0x1e
    X86_AT(c, 0xe29beu);
    wr32((c.sbase[3] + (uint32_t)(0xC2E94u)), 0x1Eu);
    // 0e29c8  mov dword ptr [0xc2e90], 0
    X86_AT(c, 0xe29c8u);
    wr32((c.sbase[3] + (uint32_t)(0xC2E90u)), 0x0u);
L_e29d2:
    X86_TICK(c, 18);
    // 0e29d2  pop edi
    X86_AT(c, 0xe29d2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e29d3  pop ebx
    X86_AT(c, 0xe29d3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e29d4  ret 
    X86_AT(c, 0xe29d4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2828u, "ran off the end of a function");
}
void f_000e29d8(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e29d8  push ebx
    X86_AT(c, 0xe29d8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e29d9  push 7
    X86_AT(c, 0xe29d9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e29db  call 0xc7dc8
    X86_AT(c, 0xe29dbu);
    push32(c, 0xe29e0u); x86_call_known(c, 0xc7dc8u, f_000c7dc8); X86_RET(c, 0xe29e0u);
    X86_TICK(c, 12);
    // 0e29e0  xchg ebx, eax
    X86_AT(c, 0xe29e0u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e29e1  push 1
    X86_AT(c, 0xe29e1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e29e3  call 0xd6660
    X86_AT(c, 0xe29e3u);
    push32(c, 0xe29e8u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xe29e8u);
    X86_TICK(c, 9);
    // 0e29e8  add esp, 8
    X86_AT(c, 0xe29e8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e29eb  and bl, bl
    X86_AT(c, 0xe29ebu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e29ed  jne 0xe2a15
    X86_AT(c, 0xe29edu);
    if (x86_cc(c, 5)) { goto L_e2a15; }
    X86_TICK(c, 9);
    // 0e29ef  push 1
    X86_AT(c, 0xe29efu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e29f1  call 0xd6660
    X86_AT(c, 0xe29f1u);
    push32(c, 0xe29f6u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xe29f6u);
    X86_TICK(c, 14);
    // 0e29f6  add esp, 4
    X86_AT(c, 0xe29f6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e29f9  cmp dword ptr [0xc2dd8], 0
    X86_AT(c, 0xe29f9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC2DD8u))), 0x0u, 0, 4);
    // 0e2a00  jne 0xe2a0b
    X86_AT(c, 0xe2a00u);
    if (x86_cc(c, 5)) { goto L_e2a0b; }
    X86_TICK(c, 9);
    // 0e2a02  push 1
    X86_AT(c, 0xe2a02u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2a04  call 0xd6660
    X86_AT(c, 0xe2a04u);
    push32(c, 0xe2a09u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xe2a09u);
    X86_TICK(c, 7);
    // 0e2a09  jmp 0xe2a12
    X86_AT(c, 0xe2a09u);
    goto L_e2a12;
L_e2a0b:
    X86_TICK(c, 9);
    // 0e2a0b  push 4
    X86_AT(c, 0xe2a0bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e2a0d  call 0xdd728
    X86_AT(c, 0xe2a0du);
    push32(c, 0xe2a12u); x86_call_known(c, 0xdd728u, f_000dd728); X86_RET(c, 0xe2a12u);
L_e2a12:
    X86_TICK(c, 2);
    // 0e2a12  add esp, 4
    X86_AT(c, 0xe2a12u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e2a15:
    X86_TICK(c, 16);
    // 0e2a15  mov eax, ebx
    X86_AT(c, 0xe2a15u);
    c.r[0] = c.r[3];
    // 0e2a17  pop ebx
    X86_AT(c, 0xe2a17u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e2a18  ret 
    X86_AT(c, 0xe2a18u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe29d8u, "ran off the end of a function");
}
void f_000e2a1c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e2a1c  push 0xec40
    X86_AT(c, 0xe2a1cu);
    { uint32_t v = 0xEC40u; push32(c, v); }
    // 0e2a21  call 0xcc7bc
    X86_AT(c, 0xe2a21u);
    push32(c, 0xe2a26u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xe2a26u);
    X86_TICK(c, 9);
    // 0e2a26  push 1
    X86_AT(c, 0xe2a26u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2a28  call 0xc5ca4
    X86_AT(c, 0xe2a28u);
    push32(c, 0xe2a2du); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xe2a2du);
    X86_TICK(c, 12);
    // 0e2a2d  add esp, 8
    X86_AT(c, 0xe2a2du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e2a30  ret 
    X86_AT(c, 0xe2a30u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2a1cu, "ran off the end of a function");
}
void f_000e2a34(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e2a34  push 0xb
    X86_AT(c, 0xe2a34u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2a36  call 0xc8dd4
    X86_AT(c, 0xe2a36u);
    push32(c, 0xe2a3bu); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xe2a3bu);
    X86_TICK(c, 13);
    // 0e2a3b  push 3
    X86_AT(c, 0xe2a3bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e2a3d  push 0xc
    X86_AT(c, 0xe2a3du);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e2a3f  push 0xa
    X86_AT(c, 0xe2a3fu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e2a41  call 0xca9c8
    X86_AT(c, 0xe2a41u);
    push32(c, 0xe2a46u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xe2a46u);
    X86_TICK(c, 11);
    // 0e2a46  push 0xec50
    X86_AT(c, 0xe2a46u);
    { uint32_t v = 0xEC50u; push32(c, v); }
    // 0e2a4b  push 0xa
    X86_AT(c, 0xe2a4bu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e2a4d  call 0xc8cdc
    X86_AT(c, 0xe2a4du);
    push32(c, 0xe2a52u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2a52u);
    X86_TICK(c, 13);
    // 0e2a52  push 3
    X86_AT(c, 0xe2a52u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e2a54  push 0xc
    X86_AT(c, 0xe2a54u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e2a56  push 0xa
    X86_AT(c, 0xe2a56u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e2a58  call 0xca9c8
    X86_AT(c, 0xe2a58u);
    push32(c, 0xe2a5du); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xe2a5du);
    X86_TICK(c, 18);
    // 0e2a5d  mov eax, dword ptr [0xb0326]
    X86_AT(c, 0xe2a5du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0326u)));
    // 0e2a62  push dword ptr [eax*4 + 0xab054]
    X86_AT(c, 0xe2a62u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAB054u))); push32(c, v); }
    // 0e2a69  push 0xa
    X86_AT(c, 0xe2a69u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e2a6b  call 0xc8cdc
    X86_AT(c, 0xe2a6bu);
    push32(c, 0xe2a70u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2a70u);
    X86_TICK(c, 13);
    // 0e2a70  push 4
    X86_AT(c, 0xe2a70u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e2a72  push 0xc
    X86_AT(c, 0xe2a72u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e2a74  push 0xa
    X86_AT(c, 0xe2a74u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e2a76  call 0xca9c8
    X86_AT(c, 0xe2a76u);
    push32(c, 0xe2a7bu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xe2a7bu);
    X86_TICK(c, 11);
    // 0e2a7b  push 0xec7c
    X86_AT(c, 0xe2a7bu);
    { uint32_t v = 0xEC7Cu; push32(c, v); }
    // 0e2a80  push 0xa
    X86_AT(c, 0xe2a80u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e2a82  call 0xc8cdc
    X86_AT(c, 0xe2a82u);
    push32(c, 0xe2a87u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2a87u);
    X86_TICK(c, 15);
    // 0e2a87  add esp, 0x40
    X86_AT(c, 0xe2a87u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e2a8a  push 4
    X86_AT(c, 0xe2a8au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e2a8c  push 0xc
    X86_AT(c, 0xe2a8cu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e2a8e  push 0xa
    X86_AT(c, 0xe2a8eu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e2a90  call 0xca9c8
    X86_AT(c, 0xe2a90u);
    push32(c, 0xe2a95u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xe2a95u);
    X86_TICK(c, 18);
    // 0e2a95  mov eax, dword ptr [0xb032e]
    X86_AT(c, 0xe2a95u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB032Eu)));
    // 0e2a9a  push dword ptr [eax*4 + 0xab0c0]
    X86_AT(c, 0xe2a9au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAB0C0u))); push32(c, v); }
    // 0e2aa1  push 0xa
    X86_AT(c, 0xe2aa1u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e2aa3  call 0xc8cdc
    X86_AT(c, 0xe2aa3u);
    push32(c, 0xe2aa8u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2aa8u);
    X86_TICK(c, 9);
    // 0e2aa8  push 0xf
    X86_AT(c, 0xe2aa8u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e2aaa  call 0xc8dd4
    X86_AT(c, 0xe2aaau);
    push32(c, 0xe2aafu); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xe2aafu);
    X86_TICK(c, 12);
    // 0e2aaf  add esp, 0x18
    X86_AT(c, 0xe2aafu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0e2ab2  ret 
    X86_AT(c, 0xe2ab2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2a34u, "ran off the end of a function");
}
void f_000e2ab4(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0e2ab4  call 0xe2028
    X86_AT(c, 0xe2ab4u);
    push32(c, 0xe2ab9u); x86_call_known(c, 0xe2028u, f_000e2028); X86_RET(c, 0xe2ab9u);
    X86_TICK(c, 9);
    // 0e2ab9  push 0xeca8
    X86_AT(c, 0xe2ab9u);
    { uint32_t v = 0xECA8u; push32(c, v); }
    // 0e2abe  call 0xcba5c
    X86_AT(c, 0xe2abeu);
    push32(c, 0xe2ac3u); x86_call_known(c, 0xcba5cu, f_000cba5c); X86_RET(c, 0xe2ac3u);
    X86_TICK(c, 9);
    // 0e2ac3  push 0
    X86_AT(c, 0xe2ac3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2ac5  call 0xc71e0
    X86_AT(c, 0xe2ac5u);
    push32(c, 0xe2acau); x86_call_known(c, 0xc71e0u, f_000c71e0); X86_RET(c, 0xe2acau);
    X86_TICK(c, 9);
    // 0e2aca  push 1
    X86_AT(c, 0xe2acau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2acc  call 0xc8f40
    X86_AT(c, 0xe2accu);
    push32(c, 0xe2ad1u); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xe2ad1u);
    X86_TICK(c, 9);
    // 0e2ad1  push 0
    X86_AT(c, 0xe2ad1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2ad3  call 0xc92e0
    X86_AT(c, 0xe2ad3u);
    push32(c, 0xe2ad8u); x86_call_known(c, 0xc92e0u, f_000c92e0); X86_RET(c, 0xe2ad8u);
    X86_TICK(c, 9);
    // 0e2ad8  push 0
    X86_AT(c, 0xe2ad8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2ada  call 0xc8f40
    X86_AT(c, 0xe2adau);
    push32(c, 0xe2adfu); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xe2adfu);
    X86_TICK(c, 9);
    // 0e2adf  push 0xd
    X86_AT(c, 0xe2adfu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e2ae1  call 0xd66ec
    X86_AT(c, 0xe2ae1u);
    push32(c, 0xe2ae6u); x86_call_known(c, 0xd66ecu, f_000d66ec); X86_RET(c, 0xe2ae6u);
    X86_TICK(c, 7);
    // 0e2ae6  call 0xd3370
    X86_AT(c, 0xe2ae6u);
    push32(c, 0xe2aebu); x86_call_known(c, 0xd3370u, f_000d3370); X86_RET(c, 0xe2aebu);
    X86_TICK(c, 7);
    // 0e2aeb  call 0xd35c0
    X86_AT(c, 0xe2aebu);
    push32(c, 0xe2af0u); x86_call_known(c, 0xd35c0u, f_000d35c0); X86_RET(c, 0xe2af0u);
    X86_TICK(c, 9);
    // 0e2af0  push 2
    X86_AT(c, 0xe2af0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e2af2  call 0xc8f54
    X86_AT(c, 0xe2af2u);
    push32(c, 0xe2af7u); x86_call_known(c, 0xc8f54u, f_000c8f54); X86_RET(c, 0xe2af7u);
    X86_TICK(c, 7);
    // 0e2af7  call 0xd351c
    X86_AT(c, 0xe2af7u);
    push32(c, 0xe2afcu); x86_call_known(c, 0xd351cu, f_000d351c); X86_RET(c, 0xe2afcu);
    X86_TICK(c, 7);
    // 0e2afc  call 0xcc700
    X86_AT(c, 0xe2afcu);
    push32(c, 0xe2b01u); x86_call_known(c, 0xcc700u, f_000cc700); X86_RET(c, 0xe2b01u);
    X86_TICK(c, 12);
    // 0e2b01  add esp, 0x1c
    X86_AT(c, 0xe2b01u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0e2b04  ret 
    X86_AT(c, 0xe2b04u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2ab4u, "ran off the end of a function");
}
void f_000e2b08(X86Cpu& c) {
    X86_TICK(c, 47);
    // 0e2b08  push ebp
    X86_AT(c, 0xe2b08u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e2b09  mov ebp, esp
    X86_AT(c, 0xe2b09u);
    c.r[5] = c.r[4];
    // 0e2b0b  sub esp, 0x10
    X86_AT(c, 0xe2b0bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0e2b0e  push esi
    X86_AT(c, 0xe2b0eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2b0f  push edi
    X86_AT(c, 0xe2b0fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2b10  mov esi, 4
    X86_AT(c, 0xe2b10u);
    c.r[6] = 0x4u;
    // 0e2b15  mov dword ptr [ebp - 0x10], 2
    X86_AT(c, 0xe2b15u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x2u);
    // 0e2b1c  mov dword ptr [ebp - 8], 1
    X86_AT(c, 0xe2b1cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x1u);
    // 0e2b23  mov dword ptr [ebp - 0xc], 1
    X86_AT(c, 0xe2b23u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x1u);
    // 0e2b2a  mov dword ptr [ebp - 4], 3
    X86_AT(c, 0xe2b2au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x3u);
    // 0e2b31  push 9
    X86_AT(c, 0xe2b31u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e2b33  push 0xf
    X86_AT(c, 0xe2b33u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e2b35  push 0xf
    X86_AT(c, 0xe2b35u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e2b37  push 0x11
    X86_AT(c, 0xe2b37u);
    { uint32_t v = 0x11u; push32(c, v); }
    // 0e2b39  push 0x29
    X86_AT(c, 0xe2b39u);
    { uint32_t v = 0x29u; push32(c, v); }
    // 0e2b3b  push 0x120
    X86_AT(c, 0xe2b3bu);
    { uint32_t v = 0x120u; push32(c, v); }
    // 0e2b40  push 0x15c
    X86_AT(c, 0xe2b40u);
    { uint32_t v = 0x15Cu; push32(c, v); }
    // 0e2b45  push 0x25
    X86_AT(c, 0xe2b45u);
    { uint32_t v = 0x25u; push32(c, v); }
    // 0e2b47  push 0xc
    X86_AT(c, 0xe2b47u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e2b49  push esi
    X86_AT(c, 0xe2b49u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2b4a  call 0xc9fbc
    X86_AT(c, 0xe2b4au);
    push32(c, 0xe2b4fu); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xe2b4fu);
    X86_TICK(c, 9);
    // 0e2b4f  push esi
    X86_AT(c, 0xe2b4fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2b50  call 0xca100
    X86_AT(c, 0xe2b50u);
    push32(c, 0xe2b55u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xe2b55u);
    X86_TICK(c, 11);
    // 0e2b55  push 1
    X86_AT(c, 0xe2b55u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2b57  push 1
    X86_AT(c, 0xe2b57u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2b59  call 0xcc814
    X86_AT(c, 0xe2b59u);
    push32(c, 0xe2b5eu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2b5eu);
    X86_TICK(c, 11);
    // 0e2b5e  push 0xecb8
    X86_AT(c, 0xe2b5eu);
    { uint32_t v = 0xECB8u; push32(c, v); }
    // 0e2b63  push esi
    X86_AT(c, 0xe2b63u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2b64  call 0xc8cdc
    X86_AT(c, 0xe2b64u);
    push32(c, 0xe2b69u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2b69u);
    X86_TICK(c, 13);
    // 0e2b69  add esp, 0x3c
    X86_AT(c, 0xe2b69u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e2b6c  push 2
    X86_AT(c, 0xe2b6cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e2b6e  push 1
    X86_AT(c, 0xe2b6eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2b70  call 0xcc814
    X86_AT(c, 0xe2b70u);
    push32(c, 0xe2b75u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2b75u);
    X86_TICK(c, 11);
    // 0e2b75  push 0xecf8
    X86_AT(c, 0xe2b75u);
    { uint32_t v = 0xECF8u; push32(c, v); }
    // 0e2b7a  push esi
    X86_AT(c, 0xe2b7au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2b7b  call 0xc8cdc
    X86_AT(c, 0xe2b7bu);
    push32(c, 0xe2b80u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2b80u);
    X86_TICK(c, 11);
    // 0e2b80  push 3
    X86_AT(c, 0xe2b80u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e2b82  push 1
    X86_AT(c, 0xe2b82u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2b84  call 0xcc814
    X86_AT(c, 0xe2b84u);
    push32(c, 0xe2b89u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2b89u);
    X86_TICK(c, 11);
    // 0e2b89  push 0xed40
    X86_AT(c, 0xe2b89u);
    { uint32_t v = 0xED40u; push32(c, v); }
    // 0e2b8e  push esi
    X86_AT(c, 0xe2b8eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2b8f  call 0xc8cdc
    X86_AT(c, 0xe2b8fu);
    push32(c, 0xe2b94u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2b94u);
    X86_TICK(c, 11);
    // 0e2b94  push 5
    X86_AT(c, 0xe2b94u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e2b96  push 1
    X86_AT(c, 0xe2b96u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2b98  call 0xcc814
    X86_AT(c, 0xe2b98u);
    push32(c, 0xe2b9du); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2b9du);
    X86_TICK(c, 9);
    // 0e2b9d  push 0xe
    X86_AT(c, 0xe2b9du);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0e2b9f  call 0xc8dd4
    X86_AT(c, 0xe2b9fu);
    push32(c, 0xe2ba4u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xe2ba4u);
    X86_TICK(c, 11);
    // 0e2ba4  push 0xed6c
    X86_AT(c, 0xe2ba4u);
    { uint32_t v = 0xED6Cu; push32(c, v); }
    // 0e2ba9  push esi
    X86_AT(c, 0xe2ba9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2baa  call 0xc8cdc
    X86_AT(c, 0xe2baau);
    push32(c, 0xe2bafu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2bafu);
    X86_TICK(c, 9);
    // 0e2baf  push 0xc
    X86_AT(c, 0xe2bafu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e2bb1  call 0xc8dd4
    X86_AT(c, 0xe2bb1u);
    push32(c, 0xe2bb6u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xe2bb6u);
    X86_TICK(c, 11);
    // 0e2bb6  push 0xed80
    X86_AT(c, 0xe2bb6u);
    { uint32_t v = 0xED80u; push32(c, v); }
    // 0e2bbb  push esi
    X86_AT(c, 0xe2bbbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2bbc  call 0xc8cdc
    X86_AT(c, 0xe2bbcu);
    push32(c, 0xe2bc1u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2bc1u);
    X86_TICK(c, 11);
    // 0e2bc1  add esp, 0x40
    X86_AT(c, 0xe2bc1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e2bc4  push 0xd
    X86_AT(c, 0xe2bc4u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e2bc6  call 0xc8dd4
    X86_AT(c, 0xe2bc6u);
    push32(c, 0xe2bcbu); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xe2bcbu);
    X86_TICK(c, 11);
    // 0e2bcb  push 0xed94
    X86_AT(c, 0xe2bcbu);
    { uint32_t v = 0xED94u; push32(c, v); }
    // 0e2bd0  push esi
    X86_AT(c, 0xe2bd0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2bd1  call 0xc8cdc
    X86_AT(c, 0xe2bd1u);
    push32(c, 0xe2bd6u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2bd6u);
    X86_TICK(c, 9);
    // 0e2bd6  push 0xf
    X86_AT(c, 0xe2bd6u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e2bd8  call 0xc8dd4
    X86_AT(c, 0xe2bd8u);
    push32(c, 0xe2bddu); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xe2bddu);
    X86_TICK(c, 13);
    // 0e2bdd  add esp, 0x10
    X86_AT(c, 0xe2bddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e2be0  push 0xeda8
    X86_AT(c, 0xe2be0u);
    { uint32_t v = 0xEDA8u; push32(c, v); }
    // 0e2be5  push esi
    X86_AT(c, 0xe2be5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2be6  call 0xc8cdc
    X86_AT(c, 0xe2be6u);
    push32(c, 0xe2bebu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2bebu);
    X86_TICK(c, 4);
    // 0e2beb  sub edi, edi
    X86_AT(c, 0xe2bebu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0e2bed  add esp, 8
    X86_AT(c, 0xe2bedu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_e2bf0:
    X86_TICK(c, 7);
    // 0e2bf0  cmp edi, 4
    X86_AT(c, 0xe2bf0u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0e2bf3  jge 0xe2c07
    X86_AT(c, 0xe2bf3u);
    if (x86_cc(c, 13)) { goto L_e2c07; }
    X86_TICK(c, 16);
    // 0e2bf5  push dword ptr [ebp + edi*4 - 0x10]
    X86_AT(c, 0xe2bf5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFF0u))); push32(c, v); }
    // 0e2bf9  push 4
    X86_AT(c, 0xe2bf9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e2bfb  push esi
    X86_AT(c, 0xe2bfbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2bfc  call 0xcc7dc
    X86_AT(c, 0xe2bfcu);
    push32(c, 0xe2c01u); x86_call_known(c, 0xcc7dcu, f_000cc7dc); X86_RET(c, 0xe2c01u);
    X86_TICK(c, 11);
    // 0e2c01  inc edi
    X86_AT(c, 0xe2c01u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e2c02  add esp, 0xc
    X86_AT(c, 0xe2c02u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e2c05  jmp 0xe2bf0
    X86_AT(c, 0xe2c05u);
    X86_POLL(c, 0xe2bf0u); goto L_e2bf0;
L_e2c07:
    X86_TICK(c, 11);
    // 0e2c07  push 7
    X86_AT(c, 0xe2c07u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e2c09  push 1
    X86_AT(c, 0xe2c09u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2c0b  call 0xcc814
    X86_AT(c, 0xe2c0bu);
    push32(c, 0xe2c10u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2c10u);
    X86_TICK(c, 11);
    // 0e2c10  push 0xedbc
    X86_AT(c, 0xe2c10u);
    { uint32_t v = 0xEDBCu; push32(c, v); }
    // 0e2c15  push esi
    X86_AT(c, 0xe2c15u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2c16  call 0xc8cdc
    X86_AT(c, 0xe2c16u);
    push32(c, 0xe2c1bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2c1bu);
    X86_TICK(c, 11);
    // 0e2c1b  push 8
    X86_AT(c, 0xe2c1bu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e2c1d  push 1
    X86_AT(c, 0xe2c1du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2c1f  call 0xcc814
    X86_AT(c, 0xe2c1fu);
    push32(c, 0xe2c24u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2c24u);
    X86_TICK(c, 11);
    // 0e2c24  push 0xede8
    X86_AT(c, 0xe2c24u);
    { uint32_t v = 0xEDE8u; push32(c, v); }
    // 0e2c29  push esi
    X86_AT(c, 0xe2c29u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2c2a  call 0xc8cdc
    X86_AT(c, 0xe2c2au);
    push32(c, 0xe2c2fu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2c2fu);
    X86_TICK(c, 11);
    // 0e2c2f  push 9
    X86_AT(c, 0xe2c2fu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e2c31  push 1
    X86_AT(c, 0xe2c31u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2c33  call 0xcc814
    X86_AT(c, 0xe2c33u);
    push32(c, 0xe2c38u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2c38u);
    X86_TICK(c, 11);
    // 0e2c38  push 0xee38
    X86_AT(c, 0xe2c38u);
    { uint32_t v = 0xEE38u; push32(c, v); }
    // 0e2c3d  push esi
    X86_AT(c, 0xe2c3du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2c3e  call 0xc8cdc
    X86_AT(c, 0xe2c3eu);
    push32(c, 0xe2c43u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2c43u);
    X86_TICK(c, 11);
    // 0e2c43  push 0xa
    X86_AT(c, 0xe2c43u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e2c45  push 1
    X86_AT(c, 0xe2c45u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2c47  call 0xcc814
    X86_AT(c, 0xe2c47u);
    push32(c, 0xe2c4cu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2c4cu);
    X86_TICK(c, 11);
    // 0e2c4c  push 0xee7c
    X86_AT(c, 0xe2c4cu);
    { uint32_t v = 0xEE7Cu; push32(c, v); }
    // 0e2c51  push esi
    X86_AT(c, 0xe2c51u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2c52  call 0xc8cdc
    X86_AT(c, 0xe2c52u);
    push32(c, 0xe2c57u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2c57u);
    X86_TICK(c, 13);
    // 0e2c57  add esp, 0x40
    X86_AT(c, 0xe2c57u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e2c5a  push 0xb
    X86_AT(c, 0xe2c5au);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2c5c  push 1
    X86_AT(c, 0xe2c5cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2c5e  call 0xcc814
    X86_AT(c, 0xe2c5eu);
    push32(c, 0xe2c63u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2c63u);
    X86_TICK(c, 11);
    // 0e2c63  push 0xeec8
    X86_AT(c, 0xe2c63u);
    { uint32_t v = 0xEEC8u; push32(c, v); }
    // 0e2c68  push esi
    X86_AT(c, 0xe2c68u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2c69  call 0xc8cdc
    X86_AT(c, 0xe2c69u);
    push32(c, 0xe2c6eu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2c6eu);
    X86_TICK(c, 11);
    // 0e2c6e  push 0xc
    X86_AT(c, 0xe2c6eu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e2c70  push 1
    X86_AT(c, 0xe2c70u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2c72  call 0xcc814
    X86_AT(c, 0xe2c72u);
    push32(c, 0xe2c77u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2c77u);
    X86_TICK(c, 11);
    // 0e2c77  push 0xef14
    X86_AT(c, 0xe2c77u);
    { uint32_t v = 0xEF14u; push32(c, v); }
    // 0e2c7c  push esi
    X86_AT(c, 0xe2c7cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2c7d  call 0xc8cdc
    X86_AT(c, 0xe2c7du);
    push32(c, 0xe2c82u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2c82u);
    X86_TICK(c, 11);
    // 0e2c82  push 0xd
    X86_AT(c, 0xe2c82u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e2c84  push 1
    X86_AT(c, 0xe2c84u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2c86  call 0xcc814
    X86_AT(c, 0xe2c86u);
    push32(c, 0xe2c8bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2c8bu);
    X86_TICK(c, 11);
    // 0e2c8b  push 0xef50
    X86_AT(c, 0xe2c8bu);
    { uint32_t v = 0xEF50u; push32(c, v); }
    // 0e2c90  push esi
    X86_AT(c, 0xe2c90u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2c91  call 0xc8cdc
    X86_AT(c, 0xe2c91u);
    push32(c, 0xe2c96u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2c96u);
    X86_TICK(c, 11);
    // 0e2c96  push 0xe
    X86_AT(c, 0xe2c96u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0e2c98  push 1
    X86_AT(c, 0xe2c98u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2c9a  call 0xcc814
    X86_AT(c, 0xe2c9au);
    push32(c, 0xe2c9fu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2c9fu);
    X86_TICK(c, 11);
    // 0e2c9f  push 0xef7c
    X86_AT(c, 0xe2c9fu);
    { uint32_t v = 0xEF7Cu; push32(c, v); }
    // 0e2ca4  push esi
    X86_AT(c, 0xe2ca4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2ca5  call 0xc8cdc
    X86_AT(c, 0xe2ca5u);
    push32(c, 0xe2caau); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2caau);
    X86_TICK(c, 13);
    // 0e2caa  add esp, 0x40
    X86_AT(c, 0xe2caau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e2cad  push 0xf
    X86_AT(c, 0xe2cadu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e2caf  push 1
    X86_AT(c, 0xe2cafu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2cb1  call 0xcc814
    X86_AT(c, 0xe2cb1u);
    push32(c, 0xe2cb6u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2cb6u);
    X86_TICK(c, 11);
    // 0e2cb6  push 0xefc0
    X86_AT(c, 0xe2cb6u);
    { uint32_t v = 0xEFC0u; push32(c, v); }
    // 0e2cbb  push esi
    X86_AT(c, 0xe2cbbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2cbc  call 0xc8cdc
    X86_AT(c, 0xe2cbcu);
    push32(c, 0xe2cc1u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2cc1u);
    X86_TICK(c, 11);
    // 0e2cc1  push 0x10
    X86_AT(c, 0xe2cc1u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0e2cc3  push 1
    X86_AT(c, 0xe2cc3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2cc5  call 0xcc814
    X86_AT(c, 0xe2cc5u);
    push32(c, 0xe2ccau); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2ccau);
    X86_TICK(c, 11);
    // 0e2cca  push 0xefec
    X86_AT(c, 0xe2ccau);
    { uint32_t v = 0xEFECu; push32(c, v); }
    // 0e2ccf  push esi
    X86_AT(c, 0xe2ccfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e2cd0  call 0xc8cdc
    X86_AT(c, 0xe2cd0u);
    push32(c, 0xe2cd5u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2cd5u);
    X86_TICK(c, 26);
    // 0e2cd5  add esp, 0x20
    X86_AT(c, 0xe2cd5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0e2cd8  pop edi
    X86_AT(c, 0xe2cd8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e2cd9  pop esi
    X86_AT(c, 0xe2cd9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e2cda  leave 
    X86_AT(c, 0xe2cdau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e2cdb  ret 
    X86_AT(c, 0xe2cdbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2b08u, "ran off the end of a function");
}
void f_000e2cdc(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0e2cdc  push edi
    X86_AT(c, 0xe2cdcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2cdd  mov edi, 4
    X86_AT(c, 0xe2cddu);
    c.r[7] = 0x4u;
    // 0e2ce2  push 2
    X86_AT(c, 0xe2ce2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e2ce4  push 0
    X86_AT(c, 0xe2ce4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2ce6  call 0xcc814
    X86_AT(c, 0xe2ce6u);
    push32(c, 0xe2cebu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2cebu);
    X86_TICK(c, 11);
    // 0e2ceb  push 0xf018
    X86_AT(c, 0xe2cebu);
    { uint32_t v = 0xF018u; push32(c, v); }
    // 0e2cf0  push edi
    X86_AT(c, 0xe2cf0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2cf1  call 0xc8cdc
    X86_AT(c, 0xe2cf1u);
    push32(c, 0xe2cf6u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2cf6u);
    X86_TICK(c, 11);
    // 0e2cf6  push 3
    X86_AT(c, 0xe2cf6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e2cf8  push 0
    X86_AT(c, 0xe2cf8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2cfa  call 0xcc814
    X86_AT(c, 0xe2cfau);
    push32(c, 0xe2cffu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2cffu);
    X86_TICK(c, 11);
    // 0e2cff  push 0xf044
    X86_AT(c, 0xe2cffu);
    { uint32_t v = 0xF044u; push32(c, v); }
    // 0e2d04  push edi
    X86_AT(c, 0xe2d04u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2d05  call 0xc8cdc
    X86_AT(c, 0xe2d05u);
    push32(c, 0xe2d0au); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2d0au);
    X86_TICK(c, 11);
    // 0e2d0a  push edi
    X86_AT(c, 0xe2d0au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2d0b  push 0
    X86_AT(c, 0xe2d0bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2d0d  call 0xcc814
    X86_AT(c, 0xe2d0du);
    push32(c, 0xe2d12u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2d12u);
    X86_TICK(c, 11);
    // 0e2d12  push 0xf070
    X86_AT(c, 0xe2d12u);
    { uint32_t v = 0xF070u; push32(c, v); }
    // 0e2d17  push edi
    X86_AT(c, 0xe2d17u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2d18  call 0xc8cdc
    X86_AT(c, 0xe2d18u);
    push32(c, 0xe2d1du); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2d1du);
    X86_TICK(c, 11);
    // 0e2d1d  push 5
    X86_AT(c, 0xe2d1du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e2d1f  push 0
    X86_AT(c, 0xe2d1fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2d21  call 0xcc814
    X86_AT(c, 0xe2d21u);
    push32(c, 0xe2d26u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2d26u);
    X86_TICK(c, 11);
    // 0e2d26  push 0xf09c
    X86_AT(c, 0xe2d26u);
    { uint32_t v = 0xF09Cu; push32(c, v); }
    // 0e2d2b  push edi
    X86_AT(c, 0xe2d2bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2d2c  call 0xc8cdc
    X86_AT(c, 0xe2d2cu);
    push32(c, 0xe2d31u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2d31u);
    X86_TICK(c, 13);
    // 0e2d31  add esp, 0x40
    X86_AT(c, 0xe2d31u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e2d34  push 6
    X86_AT(c, 0xe2d34u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0e2d36  push 0
    X86_AT(c, 0xe2d36u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2d38  call 0xcc814
    X86_AT(c, 0xe2d38u);
    push32(c, 0xe2d3du); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2d3du);
    X86_TICK(c, 11);
    // 0e2d3d  push 0xf0e4
    X86_AT(c, 0xe2d3du);
    { uint32_t v = 0xF0E4u; push32(c, v); }
    // 0e2d42  push edi
    X86_AT(c, 0xe2d42u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2d43  call 0xc8cdc
    X86_AT(c, 0xe2d43u);
    push32(c, 0xe2d48u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2d48u);
    X86_TICK(c, 11);
    // 0e2d48  push 7
    X86_AT(c, 0xe2d48u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e2d4a  push 0
    X86_AT(c, 0xe2d4au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2d4c  call 0xcc814
    X86_AT(c, 0xe2d4cu);
    push32(c, 0xe2d51u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2d51u);
    X86_TICK(c, 11);
    // 0e2d51  push 0xf128
    X86_AT(c, 0xe2d51u);
    { uint32_t v = 0xF128u; push32(c, v); }
    // 0e2d56  push edi
    X86_AT(c, 0xe2d56u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2d57  call 0xc8cdc
    X86_AT(c, 0xe2d57u);
    push32(c, 0xe2d5cu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2d5cu);
    X86_TICK(c, 11);
    // 0e2d5c  push 8
    X86_AT(c, 0xe2d5cu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e2d5e  push 0
    X86_AT(c, 0xe2d5eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2d60  call 0xcc814
    X86_AT(c, 0xe2d60u);
    push32(c, 0xe2d65u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2d65u);
    X86_TICK(c, 11);
    // 0e2d65  push 0xf16c
    X86_AT(c, 0xe2d65u);
    { uint32_t v = 0xF16Cu; push32(c, v); }
    // 0e2d6a  push edi
    X86_AT(c, 0xe2d6au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2d6b  call 0xc8cdc
    X86_AT(c, 0xe2d6bu);
    push32(c, 0xe2d70u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2d70u);
    X86_TICK(c, 11);
    // 0e2d70  push 9
    X86_AT(c, 0xe2d70u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e2d72  push 0
    X86_AT(c, 0xe2d72u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2d74  call 0xcc814
    X86_AT(c, 0xe2d74u);
    push32(c, 0xe2d79u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2d79u);
    X86_TICK(c, 11);
    // 0e2d79  push 0xf1b0
    X86_AT(c, 0xe2d79u);
    { uint32_t v = 0xF1B0u; push32(c, v); }
    // 0e2d7e  push edi
    X86_AT(c, 0xe2d7eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2d7f  call 0xc8cdc
    X86_AT(c, 0xe2d7fu);
    push32(c, 0xe2d84u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2d84u);
    X86_TICK(c, 13);
    // 0e2d84  add esp, 0x40
    X86_AT(c, 0xe2d84u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e2d87  push 0xa
    X86_AT(c, 0xe2d87u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e2d89  push 0
    X86_AT(c, 0xe2d89u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2d8b  call 0xcc814
    X86_AT(c, 0xe2d8bu);
    push32(c, 0xe2d90u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2d90u);
    X86_TICK(c, 11);
    // 0e2d90  push 0xf1f0
    X86_AT(c, 0xe2d90u);
    { uint32_t v = 0xF1F0u; push32(c, v); }
    // 0e2d95  push edi
    X86_AT(c, 0xe2d95u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2d96  call 0xc8cdc
    X86_AT(c, 0xe2d96u);
    push32(c, 0xe2d9bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2d9bu);
    X86_TICK(c, 11);
    // 0e2d9b  push 0xb
    X86_AT(c, 0xe2d9bu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2d9d  push 0
    X86_AT(c, 0xe2d9du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2d9f  call 0xcc814
    X86_AT(c, 0xe2d9fu);
    push32(c, 0xe2da4u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2da4u);
    X86_TICK(c, 13);
    // 0e2da4  add esp, 0x18
    X86_AT(c, 0xe2da4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0e2da7  push 0xf238
    X86_AT(c, 0xe2da7u);
    { uint32_t v = 0xF238u; push32(c, v); }
    // 0e2dac  push edi
    X86_AT(c, 0xe2dacu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2dad  call 0xc8cdc
    X86_AT(c, 0xe2dadu);
    push32(c, 0xe2db2u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2db2u);
    X86_TICK(c, 11);
    // 0e2db2  push 0xc
    X86_AT(c, 0xe2db2u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0e2db4  push 0
    X86_AT(c, 0xe2db4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2db6  call 0xcc814
    X86_AT(c, 0xe2db6u);
    push32(c, 0xe2dbbu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2dbbu);
    X86_TICK(c, 11);
    // 0e2dbb  push 0xf288
    X86_AT(c, 0xe2dbbu);
    { uint32_t v = 0xF288u; push32(c, v); }
    // 0e2dc0  push edi
    X86_AT(c, 0xe2dc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2dc1  call 0xc8cdc
    X86_AT(c, 0xe2dc1u);
    push32(c, 0xe2dc6u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2dc6u);
    X86_TICK(c, 11);
    // 0e2dc6  push 0xd
    X86_AT(c, 0xe2dc6u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e2dc8  push 0
    X86_AT(c, 0xe2dc8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2dca  call 0xcc814
    X86_AT(c, 0xe2dcau);
    push32(c, 0xe2dcfu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2dcfu);
    X86_TICK(c, 11);
    // 0e2dcf  push 0xf2b4
    X86_AT(c, 0xe2dcfu);
    { uint32_t v = 0xF2B4u; push32(c, v); }
    // 0e2dd4  push edi
    X86_AT(c, 0xe2dd4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2dd5  call 0xc8cdc
    X86_AT(c, 0xe2dd5u);
    push32(c, 0xe2ddau); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2ddau);
    X86_TICK(c, 11);
    // 0e2dda  push 0xe
    X86_AT(c, 0xe2ddau);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0e2ddc  push 0
    X86_AT(c, 0xe2ddcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2dde  call 0xcc814
    X86_AT(c, 0xe2ddeu);
    push32(c, 0xe2de3u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xe2de3u);
    X86_TICK(c, 11);
    // 0e2de3  push 0xf2e0
    X86_AT(c, 0xe2de3u);
    { uint32_t v = 0xF2E0u; push32(c, v); }
    // 0e2de8  push edi
    X86_AT(c, 0xe2de8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2de9  call 0xc8cdc
    X86_AT(c, 0xe2de9u);
    push32(c, 0xe2deeu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xe2deeu);
    X86_TICK(c, 16);
    // 0e2dee  add esp, 0x38
    X86_AT(c, 0xe2deeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 0e2df1  pop edi
    X86_AT(c, 0xe2df1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e2df2  ret 
    X86_AT(c, 0xe2df2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2cdcu, "ran off the end of a function");
}
}
