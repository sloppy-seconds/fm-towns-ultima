#include "p_game_funcs.h"
namespace p_game {
void f_000e16d4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e16d4  push 0x95f0
    X86_AT(c, 0xe16d4u);
    { uint32_t v = 0x95F0u; push32(c, v); }
    // 0e16d9  call 0x101784
    X86_AT(c, 0xe16d9u);
    push32(c, 0xe16deu); f_00101784(c); X86_RET(c, 0xe16deu);
    X86_TICK(c, 11);
    // 0e16de  add esp, 4
    X86_AT(c, 0xe16deu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e16e1  mov dword ptr [0xe448], eax
    X86_AT(c, 0xe16e1u);
    wr32((c.sbase[3] + (uint32_t)(0xE448u)), c.r[0]);
    // 0e16e6  and eax, eax
    X86_AT(c, 0xe16e6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e16e8  jne 0xe16fe
    X86_AT(c, 0xe16e8u);
    if (x86_cc(c, 5)) { goto L_e16fe; }
    X86_TICK(c, 9);
    // 0e16ea  push 0x10c4
    X86_AT(c, 0xe16eau);
    { uint32_t v = 0x10C4u; push32(c, v); }
    // 0e16ef  call 0xe75f8
    X86_AT(c, 0xe16efu);
    push32(c, 0xe16f4u); f_000e75f8(c); X86_RET(c, 0xe16f4u);
    X86_TICK(c, 11);
    // 0e16f4  mov eax, 0xffffffff
    X86_AT(c, 0xe16f4u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e16f9  add esp, 4
    X86_AT(c, 0xe16f9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e16fc  jmp 0xe175b
    X86_AT(c, 0xe16fcu);
    goto L_e175b;
L_e16fe:
    X86_TICK(c, 17);
    // 0e16fe  mov eax, dword ptr [0xe448]
    X86_AT(c, 0xe16feu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE448u)));
    // 0e1703  lea edx, [eax + 0x4000]
    X86_AT(c, 0xe1703u);
    c.r[2] = (uint32_t)(c.r[0] + 0x4000u);
    // 0e1709  mov dword ptr [0xe44c], edx
    X86_AT(c, 0xe1709u);
    wr32((c.sbase[3] + (uint32_t)(0xE44Cu)), c.r[2]);
    // 0e170f  push eax
    X86_AT(c, 0xe170fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1710  call 0xfd933
    X86_AT(c, 0xe1710u);
    push32(c, 0xe1715u); f_000fd933(c); X86_RET(c, 0xe1715u);
    X86_TICK(c, 9);
    // 0e1715  add esp, 4
    X86_AT(c, 0xe1715u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1718  and eax, eax
    X86_AT(c, 0xe1718u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e171a  je 0xe173b
    X86_AT(c, 0xe171au);
    if (x86_cc(c, 4)) { goto L_e173b; }
    X86_TICK(c, 9);
    // 0e171c  push 0x1108
    X86_AT(c, 0xe171cu);
    { uint32_t v = 0x1108u; push32(c, v); }
    // 0e1721  call 0xe75f8
    X86_AT(c, 0xe1721u);
    push32(c, 0xe1726u); f_000e75f8(c); X86_RET(c, 0xe1726u);
    X86_TICK(c, 12);
    // 0e1726  push dword ptr [0xe448]
    X86_AT(c, 0xe1726u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE448u))); push32(c, v); }
    // 0e172c  call 0x101770
    X86_AT(c, 0xe172cu);
    push32(c, 0xe1731u); f_00101770(c); X86_RET(c, 0xe1731u);
    X86_TICK(c, 11);
    // 0e1731  mov eax, 0xffffffff
    X86_AT(c, 0xe1731u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e1736  add esp, 8
    X86_AT(c, 0xe1736u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e1739  jmp 0xe175b
    X86_AT(c, 0xe1739u);
    goto L_e175b;
L_e173b:
    X86_TICK(c, 7);
    // 0e173b  call 0xe13c4
    X86_AT(c, 0xe173bu);
    push32(c, 0xe1740u); f_000e13c4(c); X86_RET(c, 0xe1740u);
    X86_TICK(c, 19);
    // 0e1740  push dword ptr [0xe448]
    X86_AT(c, 0xe1740u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE448u))); push32(c, v); }
    // 0e1746  push 0x55f0
    X86_AT(c, 0xe1746u);
    { uint32_t v = 0x55F0u; push32(c, v); }
    // 0e174b  push dword ptr [0xe44c]
    X86_AT(c, 0xe174bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE44Cu))); push32(c, v); }
    // 0e1751  call 0xe0de4
    X86_AT(c, 0xe1751u);
    push32(c, 0xe1756u); f_000e0de4(c); X86_RET(c, 0xe1756u);
    X86_TICK(c, 4);
    // 0e1756  sub eax, eax
    X86_AT(c, 0xe1756u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e1758  add esp, 0xc
    X86_AT(c, 0xe1758u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_e175b:
    X86_TICK(c, 10);
    // 0e175b  ret 
    X86_AT(c, 0xe175bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe16d4u, "ran off the end of a function");
}
void f_000e175c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0e175c  push dword ptr [0xe448]
    X86_AT(c, 0xe175cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE448u))); push32(c, v); }
    // 0e1762  call 0x101770
    X86_AT(c, 0xe1762u);
    push32(c, 0xe1767u); f_00101770(c); X86_RET(c, 0xe1767u);
    X86_TICK(c, 7);
    // 0e1767  call 0xfd99a
    X86_AT(c, 0xe1767u);
    push32(c, 0xe176cu); f_000fd99a(c); X86_RET(c, 0xe176cu);
    X86_TICK(c, 12);
    // 0e176c  add esp, 4
    X86_AT(c, 0xe176cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e176f  ret 
    X86_AT(c, 0xe176fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe175cu, "ran off the end of a function");
}
void f_000e1770(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0e1770  push ebp
    X86_AT(c, 0xe1770u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e1771  mov ebp, esp
    X86_AT(c, 0xe1771u);
    c.r[5] = c.r[4];
    // 0e1773  push dword ptr [ebp + 8]
    X86_AT(c, 0xe1773u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e1776  call 0xe0e70
    X86_AT(c, 0xe1776u);
    push32(c, 0xe177bu); f_000e0e70(c); X86_RET(c, 0xe177bu);
    X86_TICK(c, 9);
    // 0e177b  add esp, 4
    X86_AT(c, 0xe177bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e177e  inc eax
    X86_AT(c, 0xe177eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e177f  je 0xe178f
    X86_AT(c, 0xe177fu);
    if (x86_cc(c, 4)) { goto L_e178f; }
    X86_TICK(c, 17);
    // 0e1781  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xe1781u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0e1784  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe1784u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e1787  call 0xe1238
    X86_AT(c, 0xe1787u);
    push32(c, 0xe178cu); f_000e1238(c); X86_RET(c, 0xe178cu);
    X86_TICK(c, 2);
    // 0e178c  add esp, 8
    X86_AT(c, 0xe178cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_e178f:
    X86_TICK(c, 16);
    // 0e178f  leave 
    X86_AT(c, 0xe178fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e1790  ret 
    X86_AT(c, 0xe1790u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1770u, "ran off the end of a function");
}
void f_000e1794(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0e1794  push edi
    X86_AT(c, 0xe1794u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1795  mov edi, 0xffffffff
    X86_AT(c, 0xe1795u);
    c.r[7] = 0xFFFFFFFFu;
    // 0e179a  push 0xb20
    X86_AT(c, 0xe179au);
    { uint32_t v = 0xB20u; push32(c, v); }
    // 0e179f  push 0xe460
    X86_AT(c, 0xe179fu);
    { uint32_t v = 0xE460u; push32(c, v); }
    // 0e17a4  push 0x1150
    X86_AT(c, 0xe17a4u);
    { uint32_t v = 0x1150u; push32(c, v); }
    // 0e17a9  call 0xe13d8
    X86_AT(c, 0xe17a9u);
    push32(c, 0xe17aeu); f_000e13d8(c); X86_RET(c, 0xe17aeu);
    X86_TICK(c, 9);
    // 0e17ae  add esp, 0xc
    X86_AT(c, 0xe17aeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e17b1  and eax, eax
    X86_AT(c, 0xe17b1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e17b3  je 0xe17b7
    X86_AT(c, 0xe17b3u);
    if (x86_cc(c, 4)) { goto L_e17b7; }
    X86_TICK(c, 2);
    // 0e17b5  sub edi, edi
    X86_AT(c, 0xe17b5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e17b7:
    X86_TICK(c, 13);
    // 0e17b7  push 0x46f
    X86_AT(c, 0xe17b7u);
    { uint32_t v = 0x46Fu; push32(c, v); }
    // 0e17bc  push 0x14668
    X86_AT(c, 0xe17bcu);
    { uint32_t v = 0x14668u; push32(c, v); }
    // 0e17c1  push 0x1164
    X86_AT(c, 0xe17c1u);
    { uint32_t v = 0x1164u; push32(c, v); }
    // 0e17c6  call 0xe13d8
    X86_AT(c, 0xe17c6u);
    push32(c, 0xe17cbu); f_000e13d8(c); X86_RET(c, 0xe17cbu);
    X86_TICK(c, 9);
    // 0e17cb  add esp, 0xc
    X86_AT(c, 0xe17cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e17ce  and eax, eax
    X86_AT(c, 0xe17ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e17d0  je 0xe17d4
    X86_AT(c, 0xe17d0u);
    if (x86_cc(c, 4)) { goto L_e17d4; }
    X86_TICK(c, 2);
    // 0e17d2  sub edi, edi
    X86_AT(c, 0xe17d2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e17d4:
    X86_TICK(c, 13);
    // 0e17d4  push 0x939
    X86_AT(c, 0xe17d4u);
    { uint32_t v = 0x939u; push32(c, v); }
    // 0e17d9  push 0xef80
    X86_AT(c, 0xe17d9u);
    { uint32_t v = 0xEF80u; push32(c, v); }
    // 0e17de  push 0x1178
    X86_AT(c, 0xe17deu);
    { uint32_t v = 0x1178u; push32(c, v); }
    // 0e17e3  call 0xe13d8
    X86_AT(c, 0xe17e3u);
    push32(c, 0xe17e8u); f_000e13d8(c); X86_RET(c, 0xe17e8u);
    X86_TICK(c, 9);
    // 0e17e8  add esp, 0xc
    X86_AT(c, 0xe17e8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e17eb  and eax, eax
    X86_AT(c, 0xe17ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e17ed  je 0xe17f1
    X86_AT(c, 0xe17edu);
    if (x86_cc(c, 4)) { goto L_e17f1; }
    X86_TICK(c, 2);
    // 0e17ef  sub edi, edi
    X86_AT(c, 0xe17efu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e17f1:
    X86_TICK(c, 13);
    // 0e17f1  push 0x4042
    X86_AT(c, 0xe17f1u);
    { uint32_t v = 0x4042u; push32(c, v); }
    // 0e17f6  push 0xf8bc
    X86_AT(c, 0xe17f6u);
    { uint32_t v = 0xF8BCu; push32(c, v); }
    // 0e17fb  push 0x118c
    X86_AT(c, 0xe17fbu);
    { uint32_t v = 0x118Cu; push32(c, v); }
    // 0e1800  call 0xe13d8
    X86_AT(c, 0xe1800u);
    push32(c, 0xe1805u); f_000e13d8(c); X86_RET(c, 0xe1805u);
    X86_TICK(c, 9);
    // 0e1805  add esp, 0xc
    X86_AT(c, 0xe1805u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e1808  and eax, eax
    X86_AT(c, 0xe1808u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e180a  je 0xe180e
    X86_AT(c, 0xe180au);
    if (x86_cc(c, 4)) { goto L_e180e; }
    X86_TICK(c, 2);
    // 0e180c  sub edi, edi
    X86_AT(c, 0xe180cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e180e:
    X86_TICK(c, 13);
    // 0e180e  push 0xd66
    X86_AT(c, 0xe180eu);
    { uint32_t v = 0xD66u; push32(c, v); }
    // 0e1813  push 0x13900
    X86_AT(c, 0xe1813u);
    { uint32_t v = 0x13900u; push32(c, v); }
    // 0e1818  push 0x11a0
    X86_AT(c, 0xe1818u);
    { uint32_t v = 0x11A0u; push32(c, v); }
    // 0e181d  call 0xe13d8
    X86_AT(c, 0xe181du);
    push32(c, 0xe1822u); f_000e13d8(c); X86_RET(c, 0xe1822u);
    X86_TICK(c, 9);
    // 0e1822  add esp, 0xc
    X86_AT(c, 0xe1822u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e1825  and eax, eax
    X86_AT(c, 0xe1825u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e1827  je 0xe182b
    X86_AT(c, 0xe1827u);
    if (x86_cc(c, 4)) { goto L_e182b; }
    X86_TICK(c, 2);
    // 0e1829  sub edi, edi
    X86_AT(c, 0xe1829u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e182b:
    X86_TICK(c, 13);
    // 0e182b  push 0x50cc
    X86_AT(c, 0xe182bu);
    { uint32_t v = 0x50CCu; push32(c, v); }
    // 0e1830  push 0x14ad8
    X86_AT(c, 0xe1830u);
    { uint32_t v = 0x14AD8u; push32(c, v); }
    // 0e1835  push 0x11b4
    X86_AT(c, 0xe1835u);
    { uint32_t v = 0x11B4u; push32(c, v); }
    // 0e183a  call 0xe13d8
    X86_AT(c, 0xe183au);
    push32(c, 0xe183fu); f_000e13d8(c); X86_RET(c, 0xe183fu);
    X86_TICK(c, 9);
    // 0e183f  add esp, 0xc
    X86_AT(c, 0xe183fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e1842  and eax, eax
    X86_AT(c, 0xe1842u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e1844  je 0xe1848
    X86_AT(c, 0xe1844u);
    if (x86_cc(c, 4)) { goto L_e1848; }
    X86_TICK(c, 2);
    // 0e1846  sub edi, edi
    X86_AT(c, 0xe1846u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e1848:
    X86_TICK(c, 13);
    // 0e1848  push 0x190d
    X86_AT(c, 0xe1848u);
    { uint32_t v = 0x190Du; push32(c, v); }
    // 0e184d  push 0x19ba4
    X86_AT(c, 0xe184du);
    { uint32_t v = 0x19BA4u; push32(c, v); }
    // 0e1852  push 0x11c8
    X86_AT(c, 0xe1852u);
    { uint32_t v = 0x11C8u; push32(c, v); }
    // 0e1857  call 0xe13d8
    X86_AT(c, 0xe1857u);
    push32(c, 0xe185cu); f_000e13d8(c); X86_RET(c, 0xe185cu);
    X86_TICK(c, 9);
    // 0e185c  add esp, 0xc
    X86_AT(c, 0xe185cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e185f  and eax, eax
    X86_AT(c, 0xe185fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e1861  je 0xe1865
    X86_AT(c, 0xe1861u);
    if (x86_cc(c, 4)) { goto L_e1865; }
    X86_TICK(c, 2);
    // 0e1863  sub edi, edi
    X86_AT(c, 0xe1863u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e1865:
    X86_TICK(c, 13);
    // 0e1865  push 0x407a
    X86_AT(c, 0xe1865u);
    { uint32_t v = 0x407Au; push32(c, v); }
    // 0e186a  push 0x1b4b4
    X86_AT(c, 0xe186au);
    { uint32_t v = 0x1B4B4u; push32(c, v); }
    // 0e186f  push 0x11e0
    X86_AT(c, 0xe186fu);
    { uint32_t v = 0x11E0u; push32(c, v); }
    // 0e1874  call 0xe13d8
    X86_AT(c, 0xe1874u);
    push32(c, 0xe1879u); f_000e13d8(c); X86_RET(c, 0xe1879u);
    X86_TICK(c, 9);
    // 0e1879  add esp, 0xc
    X86_AT(c, 0xe1879u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e187c  and eax, eax
    X86_AT(c, 0xe187cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e187e  je 0xe1882
    X86_AT(c, 0xe187eu);
    if (x86_cc(c, 4)) { goto L_e1882; }
    X86_TICK(c, 2);
    // 0e1880  sub edi, edi
    X86_AT(c, 0xe1880u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e1882:
    X86_TICK(c, 13);
    // 0e1882  push 0x217a
    X86_AT(c, 0xe1882u);
    { uint32_t v = 0x217Au; push32(c, v); }
    // 0e1887  push 0x1f530
    X86_AT(c, 0xe1887u);
    { uint32_t v = 0x1F530u; push32(c, v); }
    // 0e188c  push 0x11f8
    X86_AT(c, 0xe188cu);
    { uint32_t v = 0x11F8u; push32(c, v); }
    // 0e1891  call 0xe13d8
    X86_AT(c, 0xe1891u);
    push32(c, 0xe1896u); f_000e13d8(c); X86_RET(c, 0xe1896u);
    X86_TICK(c, 9);
    // 0e1896  add esp, 0xc
    X86_AT(c, 0xe1896u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e1899  and eax, eax
    X86_AT(c, 0xe1899u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e189b  je 0xe189f
    X86_AT(c, 0xe189bu);
    if (x86_cc(c, 4)) { goto L_e189f; }
    X86_TICK(c, 2);
    // 0e189d  sub edi, edi
    X86_AT(c, 0xe189du);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e189f:
    X86_TICK(c, 13);
    // 0e189f  push 0x3f2d
    X86_AT(c, 0xe189fu);
    { uint32_t v = 0x3F2Du; push32(c, v); }
    // 0e18a4  push 0x216ac
    X86_AT(c, 0xe18a4u);
    { uint32_t v = 0x216ACu; push32(c, v); }
    // 0e18a9  push 0x120c
    X86_AT(c, 0xe18a9u);
    { uint32_t v = 0x120Cu; push32(c, v); }
    // 0e18ae  call 0xe13d8
    X86_AT(c, 0xe18aeu);
    push32(c, 0xe18b3u); f_000e13d8(c); X86_RET(c, 0xe18b3u);
    X86_TICK(c, 9);
    // 0e18b3  add esp, 0xc
    X86_AT(c, 0xe18b3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e18b6  and eax, eax
    X86_AT(c, 0xe18b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e18b8  je 0xe18bc
    X86_AT(c, 0xe18b8u);
    if (x86_cc(c, 4)) { goto L_e18bc; }
    X86_TICK(c, 2);
    // 0e18ba  sub edi, edi
    X86_AT(c, 0xe18bau);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e18bc:
    X86_TICK(c, 13);
    // 0e18bc  push 0x30a2
    X86_AT(c, 0xe18bcu);
    { uint32_t v = 0x30A2u; push32(c, v); }
    // 0e18c1  push 0x255dc
    X86_AT(c, 0xe18c1u);
    { uint32_t v = 0x255DCu; push32(c, v); }
    // 0e18c6  push 0x1220
    X86_AT(c, 0xe18c6u);
    { uint32_t v = 0x1220u; push32(c, v); }
    // 0e18cb  call 0xe13d8
    X86_AT(c, 0xe18cbu);
    push32(c, 0xe18d0u); f_000e13d8(c); X86_RET(c, 0xe18d0u);
    X86_TICK(c, 9);
    // 0e18d0  add esp, 0xc
    X86_AT(c, 0xe18d0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e18d3  and eax, eax
    X86_AT(c, 0xe18d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e18d5  je 0xe18d9
    X86_AT(c, 0xe18d5u);
    if (x86_cc(c, 4)) { goto L_e18d9; }
    X86_TICK(c, 2);
    // 0e18d7  sub edi, edi
    X86_AT(c, 0xe18d7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e18d9:
    X86_TICK(c, 13);
    // 0e18d9  push 0x8ddd
    X86_AT(c, 0xe18d9u);
    { uint32_t v = 0x8DDDu; push32(c, v); }
    // 0e18de  push 0x36b48
    X86_AT(c, 0xe18deu);
    { uint32_t v = 0x36B48u; push32(c, v); }
    // 0e18e3  push 0x1234
    X86_AT(c, 0xe18e3u);
    { uint32_t v = 0x1234u; push32(c, v); }
    // 0e18e8  call 0xe13d8
    X86_AT(c, 0xe18e8u);
    push32(c, 0xe18edu); f_000e13d8(c); X86_RET(c, 0xe18edu);
    X86_TICK(c, 9);
    // 0e18ed  add esp, 0xc
    X86_AT(c, 0xe18edu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e18f0  and eax, eax
    X86_AT(c, 0xe18f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e18f2  je 0xe18f6
    X86_AT(c, 0xe18f2u);
    if (x86_cc(c, 4)) { goto L_e18f6; }
    X86_TICK(c, 2);
    // 0e18f4  sub edi, edi
    X86_AT(c, 0xe18f4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e18f6:
    X86_TICK(c, 13);
    // 0e18f6  push 0xe4c7
    X86_AT(c, 0xe18f6u);
    { uint32_t v = 0xE4C7u; push32(c, v); }
    // 0e18fb  push 0x28680
    X86_AT(c, 0xe18fbu);
    { uint32_t v = 0x28680u; push32(c, v); }
    // 0e1900  push 0x124c
    X86_AT(c, 0xe1900u);
    { uint32_t v = 0x124Cu; push32(c, v); }
    // 0e1905  call 0xe13d8
    X86_AT(c, 0xe1905u);
    push32(c, 0xe190au); f_000e13d8(c); X86_RET(c, 0xe190au);
    X86_TICK(c, 9);
    // 0e190a  add esp, 0xc
    X86_AT(c, 0xe190au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e190d  and eax, eax
    X86_AT(c, 0xe190du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e190f  je 0xe1913
    X86_AT(c, 0xe190fu);
    if (x86_cc(c, 4)) { goto L_e1913; }
    X86_TICK(c, 2);
    // 0e1911  sub edi, edi
    X86_AT(c, 0xe1911u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e1913:
    X86_TICK(c, 13);
    // 0e1913  push 0x14a3
    X86_AT(c, 0xe1913u);
    { uint32_t v = 0x14A3u; push32(c, v); }
    // 0e1918  push 0x3f928
    X86_AT(c, 0xe1918u);
    { uint32_t v = 0x3F928u; push32(c, v); }
    // 0e191d  push 0x1260
    X86_AT(c, 0xe191du);
    { uint32_t v = 0x1260u; push32(c, v); }
    // 0e1922  call 0xe13d8
    X86_AT(c, 0xe1922u);
    push32(c, 0xe1927u); f_000e13d8(c); X86_RET(c, 0xe1927u);
    X86_TICK(c, 9);
    // 0e1927  add esp, 0xc
    X86_AT(c, 0xe1927u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e192a  and eax, eax
    X86_AT(c, 0xe192au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e192c  je 0xe1930
    X86_AT(c, 0xe192cu);
    if (x86_cc(c, 4)) { goto L_e1930; }
    X86_TICK(c, 2);
    // 0e192e  sub edi, edi
    X86_AT(c, 0xe192eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e1930:
    X86_TICK(c, 7);
    // 0e1930  and edi, edi
    X86_AT(c, 0xe1930u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e1932  jne 0xe1941
    X86_AT(c, 0xe1932u);
    if (x86_cc(c, 5)) { goto L_e1941; }
    X86_TICK(c, 9);
    // 0e1934  push 0x1274
    X86_AT(c, 0xe1934u);
    { uint32_t v = 0x1274u; push32(c, v); }
    // 0e1939  call 0xe75f8
    X86_AT(c, 0xe1939u);
    push32(c, 0xe193eu); f_000e75f8(c); X86_RET(c, 0xe193eu);
    X86_TICK(c, 2);
    // 0e193e  add esp, 4
    X86_AT(c, 0xe193eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e1941:
    X86_TICK(c, 14);
    // 0e1941  pop edi
    X86_AT(c, 0xe1941u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e1942  ret 
    X86_AT(c, 0xe1942u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1794u, "ran off the end of a function");
}
void f_000e1944(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0e1944  push ebp
    X86_AT(c, 0xe1944u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e1945  mov ebp, esp
    X86_AT(c, 0xe1945u);
    c.r[5] = c.r[4];
    // 0e1947  push edi
    X86_AT(c, 0xe1947u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1948  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe1948u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e194b  call 0xe15e8
    X86_AT(c, 0xe194bu);
    push32(c, 0xe1950u); f_000e15e8(c); X86_RET(c, 0xe1950u);
    X86_TICK(c, 11);
    // 0e1950  push 0x40
    X86_AT(c, 0xe1950u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0e1952  push 0x47
    X86_AT(c, 0xe1952u);
    { uint32_t v = 0x47u; push32(c, v); }
    // 0e1954  call 0xfd9f1
    X86_AT(c, 0xe1954u);
    push32(c, 0xe1959u); f_000fd9f1(c); X86_RET(c, 0xe1959u);
    X86_TICK(c, 31);
    // 0e1959  sub eax, eax
    X86_AT(c, 0xe1959u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e195b  mov edx, dword ptr [edi*4 + 0x40dcc]
    X86_AT(c, 0xe195bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0x40DCCu)));
    // 0e1962  mov dword ptr [edx + 0x10], eax
    X86_AT(c, 0xe1962u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u)), c.r[0]);
    // 0e1965  mov dword ptr [edx + 0x14], eax
    X86_AT(c, 0xe1965u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x14u)), c.r[0]);
    // 0e1968  push edx
    X86_AT(c, 0xe1968u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e1969  push 0x7f
    X86_AT(c, 0xe1969u);
    { uint32_t v = 0x7Fu; push32(c, v); }
    // 0e196b  movzx eax, byte ptr [edx + 0x1c]
    X86_AT(c, 0xe196bu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x1Cu)));
    // 0e196f  push eax
    X86_AT(c, 0xe196fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1970  push 0x47
    X86_AT(c, 0xe1970u);
    { uint32_t v = 0x47u; push32(c, v); }
    // 0e1972  call 0xfdc2c
    X86_AT(c, 0xe1972u);
    push32(c, 0xe1977u); f_000fdc2c(c); X86_RET(c, 0xe1977u);
    X86_TICK(c, 22);
    // 0e1977  add esp, 0x18
    X86_AT(c, 0xe1977u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0e197a  pop edi
    X86_AT(c, 0xe197au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e197b  leave 
    X86_AT(c, 0xe197bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e197c  ret 
    X86_AT(c, 0xe197cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1944u, "ran off the end of a function");
}
void f_000e1980(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e1980  push ebp
    X86_AT(c, 0xe1980u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e1981  mov ebp, esp
    X86_AT(c, 0xe1981u);
    c.r[5] = c.r[4];
    // 0e1983  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe1983u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e1986  push dword ptr [ebp + 8]
    X86_AT(c, 0xe1986u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e1989  push 1
    X86_AT(c, 0xe1989u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e198b  call 0xfdfc0
    X86_AT(c, 0xe198bu);
    push32(c, 0xe1990u); f_000fdfc0(c); X86_RET(c, 0xe1990u);
    X86_TICK(c, 16);
    // 0e1990  leave 
    X86_AT(c, 0xe1990u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e1991  ret 
    X86_AT(c, 0xe1991u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1980u, "ran off the end of a function");
}
void f_000e1994(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0e1994  mov eax, 0xe3f4
    X86_AT(c, 0xe1994u);
    c.r[0] = 0xE3F4u;
    // 0e1999  inc word ptr [eax]
    X86_AT(c, 0xe1999u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0])); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0e199c  cmp word ptr [eax], 4
    X86_AT(c, 0xe199cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[0]))), 0x4u, 0, 2);
    // 0e19a0  jne 0xe19a7
    X86_AT(c, 0xe19a0u);
    if (x86_cc(c, 5)) { goto L_e19a7; }
    X86_TICK(c, 2);
    // 0e19a2  mov word ptr [eax], 0
    X86_AT(c, 0xe19a2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
L_e19a7:
    X86_TICK(c, 9);
    // 0e19a7  push 0xffffffff
    X86_AT(c, 0xe19a7u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0e19a9  call 0xfe048
    X86_AT(c, 0xe19a9u);
    push32(c, 0xe19aeu); f_000fe048(c); X86_RET(c, 0xe19aeu);
    X86_TICK(c, 15);
    // 0e19ae  add esp, 4
    X86_AT(c, 0xe19aeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e19b1  movsx edx, word ptr [0xe3f4]
    X86_AT(c, 0xe19b1u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xE3F4u)));
    // 0e19b8  cmp edx, 3
    X86_AT(c, 0xe19b8u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0e19bb  ja 0xe19eb
    X86_AT(c, 0xe19bbu);
    if (x86_cc(c, 7)) { goto L_e19eb; }
    X86_TICK(c, 7);
    // 0e19bd  jmp dword ptr cs:[edx*4 + 0xe19c5]
    X86_AT(c, 0xe19bdu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE19C5u)));
      switch (t) {
      case 0xe19d5u: goto L_e19d5;
      case 0xe19d9u: goto L_e19d9;
      case 0xe19ddu: goto L_e19dd;
      case 0xe19e1u: goto L_e19e1;
      default: x86_jump(c, t); return; } }
L_e19d5:
    X86_TICK(c, 9);
    // 0e19d5  push 0x33
    X86_AT(c, 0xe19d5u);
    { uint32_t v = 0x33u; push32(c, v); }
    // 0e19d7  jmp 0xe19e3
    X86_AT(c, 0xe19d7u);
    goto L_e19e3;
L_e19d9:
    X86_TICK(c, 9);
    // 0e19d9  push 0x31
    X86_AT(c, 0xe19d9u);
    { uint32_t v = 0x31u; push32(c, v); }
    // 0e19db  jmp 0xe19e3
    X86_AT(c, 0xe19dbu);
    goto L_e19e3;
L_e19dd:
    X86_TICK(c, 9);
    // 0e19dd  push 0x32
    X86_AT(c, 0xe19ddu);
    { uint32_t v = 0x32u; push32(c, v); }
    // 0e19df  jmp 0xe19e3
    X86_AT(c, 0xe19dfu);
    goto L_e19e3;
L_e19e1:
    X86_TICK(c, 2);
    // 0e19e1  push 0x30
    X86_AT(c, 0xe19e1u);
    { uint32_t v = 0x30u; push32(c, v); }
L_e19e3:
    X86_TICK(c, 7);
    // 0e19e3  call 0xfe011
    X86_AT(c, 0xe19e3u);
    push32(c, 0xe19e8u); f_000fe011(c); X86_RET(c, 0xe19e8u);
    X86_TICK(c, 2);
    // 0e19e8  add esp, 4
    X86_AT(c, 0xe19e8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e19eb:
    X86_TICK(c, 16);
    // 0e19eb  movsx eax, word ptr [0xe3f4]
    X86_AT(c, 0xe19ebu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xE3F4u)));
    // 0e19f2  ret 
    X86_AT(c, 0xe19f2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1994u, "ran off the end of a function");
}
void f_000e19f4(X86Cpu& c) {
    X86_TICK(c, 58);
    // 0e19f4  push ebp
    X86_AT(c, 0xe19f4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e19f5  mov ebp, esp
    X86_AT(c, 0xe19f5u);
    c.r[5] = c.r[4];
    // 0e19f7  mov eax, 0xe3f4
    X86_AT(c, 0xe19f7u);
    c.r[0] = 0xE3F4u;
    // 0e19fc  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xe19fcu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e19ff  mov dword ptr [eax + 0x24], edx
    X86_AT(c, 0xe19ffu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x24u)), c.r[2]);
    // 0e1a02  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe1a02u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e1a05  mov dword ptr [eax + 0x28], edx
    X86_AT(c, 0xe1a05u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x28u)), c.r[2]);
    // 0e1a08  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe1a08u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e1a0b  mov dword ptr [eax + 0x2c], edx
    X86_AT(c, 0xe1a0bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x2Cu)), c.r[2]);
    // 0e1a0e  mov edx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xe1a0eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0e1a11  mov dword ptr [eax + 0x30], edx
    X86_AT(c, 0xe1a11u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x30u)), c.r[2]);
    // 0e1a14  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xe1a14u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0e1a17  mov dword ptr [eax + 0x34], edx
    X86_AT(c, 0xe1a17u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x34u)), c.r[2]);
    // 0e1a1a  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xe1a1au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0e1a1d  mov dword ptr [eax + 0x38], edx
    X86_AT(c, 0xe1a1du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x38u)), c.r[2]);
    // 0e1a20  leave 
    X86_AT(c, 0xe1a20u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e1a21  ret 
    X86_AT(c, 0xe1a21u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe19f4u, "ran off the end of a function");
}
void f_000e1a24(X86Cpu& c) {
    X86_TICK(c, 58);
    // 0e1a24  push ebp
    X86_AT(c, 0xe1a24u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e1a25  mov ebp, esp
    X86_AT(c, 0xe1a25u);
    c.r[5] = c.r[4];
    // 0e1a27  mov eax, 0xe3f4
    X86_AT(c, 0xe1a27u);
    c.r[0] = 0xE3F4u;
    // 0e1a2c  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xe1a2cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e1a2f  mov dword ptr [eax + 0x3c], edx
    X86_AT(c, 0xe1a2fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x3Cu)), c.r[2]);
    // 0e1a32  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe1a32u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e1a35  mov dword ptr [eax + 0x40], edx
    X86_AT(c, 0xe1a35u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x40u)), c.r[2]);
    // 0e1a38  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe1a38u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e1a3b  mov dword ptr [eax + 0x44], edx
    X86_AT(c, 0xe1a3bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x44u)), c.r[2]);
    // 0e1a3e  mov edx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xe1a3eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0e1a41  mov dword ptr [eax + 0x48], edx
    X86_AT(c, 0xe1a41u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x48u)), c.r[2]);
    // 0e1a44  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xe1a44u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0e1a47  mov dword ptr [eax + 0x4c], edx
    X86_AT(c, 0xe1a47u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4Cu)), c.r[2]);
    // 0e1a4a  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xe1a4au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0e1a4d  mov dword ptr [eax + 0x50], edx
    X86_AT(c, 0xe1a4du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x50u)), c.r[2]);
    // 0e1a50  leave 
    X86_AT(c, 0xe1a50u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e1a51  ret 
    X86_AT(c, 0xe1a51u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1a24u, "ran off the end of a function");
}
void f_000e1a54(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e1a54  push ebp
    X86_AT(c, 0xe1a54u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e1a55  mov ebp, esp
    X86_AT(c, 0xe1a55u);
    c.r[5] = c.r[4];
    // 0e1a57  call 0xfdcb6
    X86_AT(c, 0xe1a57u);
    push32(c, 0xe1a5cu); f_000fdcb6(c); X86_RET(c, 0xe1a5cu);
    X86_TICK(c, 14);
    // 0e1a5c  mov dword ptr [0x40e04], eax
    X86_AT(c, 0xe1a5cu);
    wr32((c.sbase[3] + (uint32_t)(0x40E04u)), c.r[0]);
    // 0e1a61  push dword ptr [ebp + 8]
    X86_AT(c, 0xe1a61u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e1a64  call 0xfdca0
    X86_AT(c, 0xe1a64u);
    push32(c, 0xe1a69u); f_000fdca0(c); X86_RET(c, 0xe1a69u);
    X86_TICK(c, 16);
    // 0e1a69  leave 
    X86_AT(c, 0xe1a69u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e1a6a  ret 
    X86_AT(c, 0xe1a6au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1a54u, "ran off the end of a function");
}
void f_000e1a6c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0e1a6c  push dword ptr [0x40e04]
    X86_AT(c, 0xe1a6cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x40E04u))); push32(c, v); }
    // 0e1a72  call 0xfdca0
    X86_AT(c, 0xe1a72u);
    push32(c, 0xe1a77u); f_000fdca0(c); X86_RET(c, 0xe1a77u);
    X86_TICK(c, 12);
    // 0e1a77  add esp, 4
    X86_AT(c, 0xe1a77u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1a7a  ret 
    X86_AT(c, 0xe1a7au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1a6cu, "ran off the end of a function");
}
void f_000e1a7c(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0e1a7c  push ebp
    X86_AT(c, 0xe1a7cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e1a7d  mov ebp, esp
    X86_AT(c, 0xe1a7du);
    c.r[5] = c.r[4];
    // 0e1a7f  push edi
    X86_AT(c, 0xe1a7fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1a80  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe1a80u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e1a83  and edi, edi
    X86_AT(c, 0xe1a83u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e1a85  jne 0xe1a8b
    X86_AT(c, 0xe1a85u);
    if (x86_cc(c, 5)) { goto L_e1a8b; }
    X86_TICK(c, 9);
    // 0e1a87  sub eax, eax
    X86_AT(c, 0xe1a87u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e1a89  jmp 0xe1a97
    X86_AT(c, 0xe1a89u);
    goto L_e1a97;
L_e1a8b:
    X86_TICK(c, 7);
    // 0e1a8b  call 0x101860
    X86_AT(c, 0xe1a8bu);
    push32(c, 0xe1a90u); f_00101860(c); X86_RET(c, 0xe1a90u);
    X86_TICK(c, 47);
    // 0e1a90  lea ecx, [edi + 1]
    X86_AT(c, 0xe1a90u);
    c.r[1] = (uint32_t)(c.r[7] + 0x1u);
    // 0e1a93  cdq 
    X86_AT(c, 0xe1a93u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e1a94  idiv ecx
    X86_AT(c, 0xe1a94u);
    x86_idiv(c, c.r[1], 4, 0xe1a94u);
    // 0e1a96  xchg edx, eax
    X86_AT(c, 0xe1a96u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_e1a97:
    X86_TICK(c, 20);
    // 0e1a97  pop edi
    X86_AT(c, 0xe1a97u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e1a98  leave 
    X86_AT(c, 0xe1a98u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e1a99  ret 
    X86_AT(c, 0xe1a99u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1a7cu, "ran off the end of a function");
}
void f_000e1a9c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e1a9c  push ebp
    X86_AT(c, 0xe1a9cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e1a9d  mov ebp, esp
    X86_AT(c, 0xe1a9du);
    c.r[5] = c.r[4];
    // 0e1a9f  call 0xe2fb0
    X86_AT(c, 0xe1a9fu);
    push32(c, 0xe1aa4u); f_000e2fb0(c); X86_RET(c, 0xe1aa4u);
    X86_TICK(c, 30);
    // 0e1aa4  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe1aa4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e1aa9  lea edx, [eax + eax*4]
    X86_AT(c, 0xe1aa9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e1aac  lea edx, [eax + edx*2]
    X86_AT(c, 0xe1aacu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e1aaf  shl edx, 5
    X86_AT(c, 0xe1aafu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e1ab2  sub edx, eax
    X86_AT(c, 0xe1ab2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e1ab4  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xe1ab4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0e1aba  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xe1abau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0e1ac0  call 0xe305c
    X86_AT(c, 0xe1ac0u);
    push32(c, 0xe1ac5u); f_000e305c(c); X86_RET(c, 0xe1ac5u);
    X86_TICK(c, 35);
    // 0e1ac5  push dword ptr [ebp + 8]
    X86_AT(c, 0xe1ac5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e1ac8  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe1ac8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e1acd  lea edx, [eax + eax*4]
    X86_AT(c, 0xe1acdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e1ad0  lea edx, [eax + edx*2]
    X86_AT(c, 0xe1ad0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e1ad3  shl edx, 5
    X86_AT(c, 0xe1ad3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e1ad6  sub edx, eax
    X86_AT(c, 0xe1ad6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e1ad8  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xe1ad8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0e1ade  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xe1adeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0e1ae4  call 0xe7f60
    X86_AT(c, 0xe1ae4u);
    push32(c, 0xe1ae9u); f_000e7f60(c); X86_RET(c, 0xe1ae9u);
    X86_TICK(c, 16);
    // 0e1ae9  leave 
    X86_AT(c, 0xe1ae9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e1aea  ret 
    X86_AT(c, 0xe1aeau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1a9cu, "ran off the end of a function");
}
void f_000e1aec(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0e1aec  push ebp
    X86_AT(c, 0xe1aecu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e1aed  mov ebp, esp
    X86_AT(c, 0xe1aedu);
    c.r[5] = c.r[4];
    // 0e1aef  push edi
    X86_AT(c, 0xe1aefu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1af0  push dword ptr [ebp + 8]
    X86_AT(c, 0xe1af0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e1af3  call 0xe42d0
    X86_AT(c, 0xe1af3u);
    push32(c, 0xe1af8u); f_000e42d0(c); X86_RET(c, 0xe1af8u);
    X86_TICK(c, 16);
    // 0e1af8  xchg edi, eax
    X86_AT(c, 0xe1af8u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e1af9  add esp, 4
    X86_AT(c, 0xe1af9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1afc  cmp edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe1afcu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4);
    // 0e1aff  jle 0xe1b08
    X86_AT(c, 0xe1affu);
    if (x86_cc(c, 14)) { goto L_e1b08; }
    X86_TICK(c, 9);
    // 0e1b01  mov eax, 0xffffffff
    X86_AT(c, 0xe1b01u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e1b06  jmp 0xe1b0a
    X86_AT(c, 0xe1b06u);
    goto L_e1b0a;
L_e1b08:
    X86_TICK(c, 2);
    // 0e1b08  mov eax, edi
    X86_AT(c, 0xe1b08u);
    c.r[0] = c.r[7];
L_e1b0a:
    X86_TICK(c, 20);
    // 0e1b0a  pop edi
    X86_AT(c, 0xe1b0au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e1b0b  leave 
    X86_AT(c, 0xe1b0bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e1b0c  ret 
    X86_AT(c, 0xe1b0cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1aecu, "ran off the end of a function");
}
void f_000e1b10(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0e1b10  push ebp
    X86_AT(c, 0xe1b10u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e1b11  mov ebp, esp
    X86_AT(c, 0xe1b11u);
    c.r[5] = c.r[4];
    // 0e1b13  sub esp, 0xc
    X86_AT(c, 0xe1b13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0e1b16  push ebx
    X86_AT(c, 0xe1b16u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e1b17  push esi
    X86_AT(c, 0xe1b17u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e1b18  push edi
    X86_AT(c, 0xe1b18u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1b19  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe1b19u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e1b1c  sub eax, eax
    X86_AT(c, 0xe1b1cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e1b1e  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xe1b1eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0e1b21  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe1b21u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
L_e1b24:
    X86_TICK(c, 9);
    // 0e1b24  push edi
    X86_AT(c, 0xe1b24u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1b25  call 0xe4748
    X86_AT(c, 0xe1b25u);
    push32(c, 0xe1b2au); f_000e4748(c); X86_RET(c, 0xe1b2au);
    X86_TICK(c, 11);
    // 0e1b2a  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xe1b2au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0e1b2d  add esp, 4
    X86_AT(c, 0xe1b2du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1b30  cmp al, 1
    X86_AT(c, 0xe1b30u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 0e1b32  je 0xe1b84
    X86_AT(c, 0xe1b32u);
    if (x86_cc(c, 4)) { goto L_e1b84; }
    X86_TICK(c, 7);
    // 0e1b34  cmp al, 4
    X86_AT(c, 0xe1b34u);
    (void)x86_sub(c, g8(c, 0), 0x4u, 0, 1);
    // 0e1b36  je 0xe1b84
    X86_AT(c, 0xe1b36u);
    if (x86_cc(c, 4)) { goto L_e1b84; }
    X86_TICK(c, 11);
    // 0e1b38  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0xe1b38u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 0e1b3b  cmp al, 0x30
    X86_AT(c, 0xe1b3bu);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 0e1b3d  jb 0xe1b43
    X86_AT(c, 0xe1b3du);
    if (x86_cc(c, 2)) { goto L_e1b43; }
    X86_TICK(c, 7);
    // 0e1b3f  cmp al, 0x39
    X86_AT(c, 0xe1b3fu);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 0e1b41  jbe 0xe1b55
    X86_AT(c, 0xe1b41u);
    if (x86_cc(c, 6)) { goto L_e1b55; }
L_e1b43:
    X86_TICK(c, 12);
    // 0e1b43  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0xe1b43u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0e1b47  je 0xe1b24
    X86_AT(c, 0xe1b47u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe1b24u); goto L_e1b24; }
    X86_TICK(c, 9);
    // 0e1b49  push 1
    X86_AT(c, 0xe1b49u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1b4b  call 0xe1944
    X86_AT(c, 0xe1b4bu);
    push32(c, 0xe1b50u); f_000e1944(c); X86_RET(c, 0xe1b50u);
    X86_TICK(c, 9);
    // 0e1b50  add esp, 4
    X86_AT(c, 0xe1b50u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1b53  jmp 0xe1b24
    X86_AT(c, 0xe1b53u);
    X86_POLL(c, 0xe1b24u); goto L_e1b24;
L_e1b55:
    X86_TICK(c, 17);
    // 0e1b55  lea esi, [ebp - 0xc]
    X86_AT(c, 0xe1b55u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0e1b58  push esi
    X86_AT(c, 0xe1b58u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e1b59  lea eax, [ebp - 8]
    X86_AT(c, 0xe1b59u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e1b5c  push eax
    X86_AT(c, 0xe1b5cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1b5d  push edi
    X86_AT(c, 0xe1b5du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1b5e  call 0xe7514
    X86_AT(c, 0xe1b5eu);
    push32(c, 0xe1b63u); f_000e7514(c); X86_RET(c, 0xe1b63u);
    X86_TICK(c, 22);
    // 0e1b63  push dword ptr [esi]
    X86_AT(c, 0xe1b63u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0e1b65  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe1b65u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e1b68  add eax, 2
    X86_AT(c, 0xe1b68u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0e1b6b  push eax
    X86_AT(c, 0xe1b6bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1b6c  push edi
    X86_AT(c, 0xe1b6cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1b6d  call 0xe7260
    X86_AT(c, 0xe1b6du);
    push32(c, 0xe1b72u); f_000e7260(c); X86_RET(c, 0xe1b72u);
    X86_TICK(c, 2);
    // 0e1b72  add esp, 0x18
    X86_AT(c, 0xe1b72u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_e1b75:
    X86_TICK(c, 9);
    // 0e1b75  push edi
    X86_AT(c, 0xe1b75u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1b76  call 0xe4748
    X86_AT(c, 0xe1b76u);
    push32(c, 0xe1b7bu); f_000e4748(c); X86_RET(c, 0xe1b7bu);
    X86_TICK(c, 12);
    // 0e1b7b  xchg ebx, eax
    X86_AT(c, 0xe1b7bu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e1b7c  add esp, 4
    X86_AT(c, 0xe1b7cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1b7f  cmp bl, 1
    X86_AT(c, 0xe1b7fu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0e1b82  jne 0xe1b8e
    X86_AT(c, 0xe1b82u);
    if (x86_cc(c, 5)) { goto L_e1b8e; }
L_e1b84:
    X86_TICK(c, 9);
    // 0e1b84  mov eax, 0xffffffff
    X86_AT(c, 0xe1b84u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e1b89  jmp 0xe1c05
    X86_AT(c, 0xe1b89u);
    goto L_e1c05;
L_e1b8e:
    X86_TICK(c, 7);
    // 0e1b8e  cmp bl, 4
    X86_AT(c, 0xe1b8eu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0e1b91  jne 0xe1b99
    X86_AT(c, 0xe1b91u);
    if (x86_cc(c, 5)) { goto L_e1b99; }
    X86_TICK(c, 13);
    // 0e1b93  movzx eax, byte ptr [ebp - 1]
    X86_AT(c, 0xe1b93u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)));
    // 0e1b97  jmp 0xe1c02
    X86_AT(c, 0xe1b97u);
    goto L_e1c02;
L_e1b99:
    X86_TICK(c, 7);
    // 0e1b99  cmp bl, 0x30
    X86_AT(c, 0xe1b99u);
    (void)x86_sub(c, g8(c, 3), 0x30u, 0, 1);
    // 0e1b9c  jb 0xe1ba3
    X86_AT(c, 0xe1b9cu);
    if (x86_cc(c, 2)) { goto L_e1ba3; }
    X86_TICK(c, 7);
    // 0e1b9e  cmp bl, 0x39
    X86_AT(c, 0xe1b9eu);
    (void)x86_sub(c, g8(c, 3), 0x39u, 0, 1);
    // 0e1ba1  jbe 0xe1bb8
    X86_AT(c, 0xe1ba1u);
    if (x86_cc(c, 6)) { goto L_e1bb8; }
L_e1ba3:
    X86_TICK(c, 7);
    // 0e1ba3  cmp bl, 3
    X86_AT(c, 0xe1ba3u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0e1ba6  je 0xe1bb8
    X86_AT(c, 0xe1ba6u);
    if (x86_cc(c, 4)) { goto L_e1bb8; }
    X86_TICK(c, 7);
    // 0e1ba8  and bl, bl
    X86_AT(c, 0xe1ba8u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e1baa  je 0xe1b75
    X86_AT(c, 0xe1baau);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe1b75u); goto L_e1b75; }
    X86_TICK(c, 9);
    // 0e1bac  push 1
    X86_AT(c, 0xe1bacu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1bae  call 0xe1944
    X86_AT(c, 0xe1baeu);
    push32(c, 0xe1bb3u); f_000e1944(c); X86_RET(c, 0xe1bb3u);
    X86_TICK(c, 9);
    // 0e1bb3  add esp, 4
    X86_AT(c, 0xe1bb3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1bb6  jmp 0xe1b75
    X86_AT(c, 0xe1bb6u);
    X86_POLL(c, 0xe1b75u); goto L_e1b75;
L_e1bb8:
    X86_TICK(c, 7);
    // 0e1bb8  cmp bl, 3
    X86_AT(c, 0xe1bb8u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0e1bbb  jne 0xe1bea
    X86_AT(c, 0xe1bbbu);
    if (x86_cc(c, 5)) { goto L_e1bea; }
    X86_TICK(c, 11);
    // 0e1bbd  push 0x20
    X86_AT(c, 0xe1bbdu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0e1bbf  push edi
    X86_AT(c, 0xe1bbfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1bc0  call 0xe6e28
    X86_AT(c, 0xe1bc0u);
    push32(c, 0xe1bc5u); f_000e6e28(c); X86_RET(c, 0xe1bc5u);
    X86_TICK(c, 17);
    // 0e1bc5  lea esi, [ebp - 0xc]
    X86_AT(c, 0xe1bc5u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0e1bc8  push esi
    X86_AT(c, 0xe1bc8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e1bc9  lea eax, [ebp - 8]
    X86_AT(c, 0xe1bc9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e1bcc  push eax
    X86_AT(c, 0xe1bccu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1bcd  push edi
    X86_AT(c, 0xe1bcdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1bce  call 0xe7514
    X86_AT(c, 0xe1bceu);
    push32(c, 0xe1bd3u); f_000e7514(c); X86_RET(c, 0xe1bd3u);
    X86_TICK(c, 22);
    // 0e1bd3  push dword ptr [esi]
    X86_AT(c, 0xe1bd3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0e1bd5  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe1bd5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e1bd8  sub eax, 2
    X86_AT(c, 0xe1bd8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0e1bdb  push eax
    X86_AT(c, 0xe1bdbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1bdc  push edi
    X86_AT(c, 0xe1bdcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1bdd  call 0xe7260
    X86_AT(c, 0xe1bddu);
    push32(c, 0xe1be2u); f_000e7260(c); X86_RET(c, 0xe1be2u);
    X86_TICK(c, 9);
    // 0e1be2  add esp, 0x20
    X86_AT(c, 0xe1be2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0e1be5  jmp 0xe1b24
    X86_AT(c, 0xe1be5u);
    X86_POLL(c, 0xe1b24u); goto L_e1b24;
L_e1bea:
    X86_TICK(c, 23);
    // 0e1bea  movzx eax, byte ptr [ebp - 1]
    X86_AT(c, 0xe1beau);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)));
    // 0e1bee  lea eax, [eax + eax*4]
    X86_AT(c, 0xe1beeu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e1bf1  add eax, eax
    X86_AT(c, 0xe1bf1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e1bf3  movzx eax, ax
    X86_AT(c, 0xe1bf3u);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 0e1bf6  sub eax, 0x1e0
    X86_AT(c, 0xe1bf6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x1E0u, 0, 4); }
    // 0e1bfb  movzx ebx, bl
    X86_AT(c, 0xe1bfbu);
    c.r[3] = g8(c, 3);
    // 0e1bfe  lea edx, [ebx + eax*1]
    X86_AT(c, 0xe1bfeu);
    c.r[2] = (uint32_t)(c.r[3] + c.r[0]);
    // 0e1c01  xchg edx, eax
    X86_AT(c, 0xe1c01u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_e1c02:
    X86_TICK(c, 2);
    // 0e1c02  sub eax, 0x30
    X86_AT(c, 0xe1c02u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x30u, 0, 4); }
L_e1c05:
    X86_TICK(c, 28);
    // 0e1c05  pop edi
    X86_AT(c, 0xe1c05u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e1c06  pop esi
    X86_AT(c, 0xe1c06u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e1c07  pop ebx
    X86_AT(c, 0xe1c07u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e1c08  leave 
    X86_AT(c, 0xe1c08u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e1c09  ret 
    X86_AT(c, 0xe1c09u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1b10u, "ran off the end of a function");
}
void f_000e1c0c(X86Cpu& c) {
    X86_TICK(c, 54);
    // 0e1c0c  push ebp
    X86_AT(c, 0xe1c0cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e1c0d  mov ebp, esp
    X86_AT(c, 0xe1c0du);
    c.r[5] = c.r[4];
    // 0e1c0f  sub esp, 0x14
    X86_AT(c, 0xe1c0fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x14u, 0, 4); }
    // 0e1c12  push ebx
    X86_AT(c, 0xe1c12u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e1c13  push esi
    X86_AT(c, 0xe1c13u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e1c14  push edi
    X86_AT(c, 0xe1c14u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1c15  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe1c15u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e1c18  sub eax, eax
    X86_AT(c, 0xe1c18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e1c1a  mov byte ptr [ebp - 8], al
    X86_AT(c, 0xe1c1au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), g8(c, 0));
    // 0e1c1d  mov byte ptr [ebp - 7], al
    X86_AT(c, 0xe1c1du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF9u)), g8(c, 0));
    // 0e1c20  mov byte ptr [ebp - 6], al
    X86_AT(c, 0xe1c20u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), g8(c, 0));
    // 0e1c23  mov byte ptr [ebp - 5], al
    X86_AT(c, 0xe1c23u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
    // 0e1c26  mov byte ptr [ebp - 4], al
    X86_AT(c, 0xe1c26u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), g8(c, 0));
    // 0e1c29  xchg esi, eax
    X86_AT(c, 0xe1c29u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e1c2a  mov dword ptr [ebp - 0x14], esi
    X86_AT(c, 0xe1c2au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[6]);
    // 0e1c2d  mov dword ptr [ebp - 0x10], esi
    X86_AT(c, 0xe1c2du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[6]);
    // 0e1c30  mov dword ptr [ebp - 0xc], esi
    X86_AT(c, 0xe1c30u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[6]);
    // 0e1c33  lea eax, [ebp - 0x10]
    X86_AT(c, 0xe1c33u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0e1c36  push eax
    X86_AT(c, 0xe1c36u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1c37  lea eax, [ebp - 0xc]
    X86_AT(c, 0xe1c37u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0e1c3a  push eax
    X86_AT(c, 0xe1c3au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1c3b  push edi
    X86_AT(c, 0xe1c3bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1c3c  call 0xe7514
    X86_AT(c, 0xe1c3cu);
    push32(c, 0xe1c41u); f_000e7514(c); X86_RET(c, 0xe1c41u);
L_e1c41:
    X86_TICK(c, 2);
    // 0e1c41  add esp, 0xc
    X86_AT(c, 0xe1c41u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_e1c44:
    X86_TICK(c, 11);
    // 0e1c44  cmp esi, 4
    X86_AT(c, 0xe1c44u);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0e1c47  push edi
    X86_AT(c, 0xe1c47u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1c48  call 0xe4748
    X86_AT(c, 0xe1c48u);
    push32(c, 0xe1c4du); f_000e4748(c); X86_RET(c, 0xe1c4du);
    X86_TICK(c, 12);
    // 0e1c4d  xchg ebx, eax
    X86_AT(c, 0xe1c4du);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e1c4e  add esp, 4
    X86_AT(c, 0xe1c4eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1c51  cmp bl, 1
    X86_AT(c, 0xe1c51u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0e1c54  je 0xe1c70
    X86_AT(c, 0xe1c54u);
    if (x86_cc(c, 4)) { goto L_e1c70; }
    X86_TICK(c, 7);
    // 0e1c56  cmp bl, 4
    X86_AT(c, 0xe1c56u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0e1c59  je 0xe1c70
    X86_AT(c, 0xe1c59u);
    if (x86_cc(c, 4)) { goto L_e1c70; }
    X86_TICK(c, 7);
    // 0e1c5b  cmp bl, 3
    X86_AT(c, 0xe1c5bu);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0e1c5e  je 0xe1c70
    X86_AT(c, 0xe1c5eu);
    if (x86_cc(c, 4)) { goto L_e1c70; }
    X86_TICK(c, 7);
    // 0e1c60  cmp bl, 0x30
    X86_AT(c, 0xe1c60u);
    (void)x86_sub(c, g8(c, 3), 0x30u, 0, 1);
    // 0e1c63  jb 0xe1c6a
    X86_AT(c, 0xe1c63u);
    if (x86_cc(c, 2)) { goto L_e1c6a; }
    X86_TICK(c, 7);
    // 0e1c65  cmp bl, 0x39
    X86_AT(c, 0xe1c65u);
    (void)x86_sub(c, g8(c, 3), 0x39u, 0, 1);
    // 0e1c68  jbe 0xe1c70
    X86_AT(c, 0xe1c68u);
    if (x86_cc(c, 6)) { goto L_e1c70; }
L_e1c6a:
    X86_TICK(c, 7);
    // 0e1c6a  and bl, bl
    X86_AT(c, 0xe1c6au);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e1c6c  je 0xe1c44
    X86_AT(c, 0xe1c6cu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe1c44u); goto L_e1c44; }
    X86_TICK(c, 7);
    // 0e1c6e  jmp 0xe1cb2
    X86_AT(c, 0xe1c6eu);
    goto L_e1cb2;
L_e1c70:
    X86_TICK(c, 9);
    // 0e1c70  push 7
    X86_AT(c, 0xe1c70u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e1c72  call 0xe693c
    X86_AT(c, 0xe1c72u);
    push32(c, 0xe1c77u); f_000e693c(c); X86_RET(c, 0xe1c77u);
    X86_TICK(c, 9);
    // 0e1c77  add esp, 4
    X86_AT(c, 0xe1c77u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1c7a  cmp bl, 1
    X86_AT(c, 0xe1c7au);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0e1c7d  jne 0xe1ca9
    X86_AT(c, 0xe1c7du);
    if (x86_cc(c, 5)) { goto L_e1ca9; }
    X86_TICK(c, 19);
    // 0e1c7f  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1c7fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1c82  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1c82u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0e1c85  push edi
    X86_AT(c, 0xe1c85u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1c86  call 0xe7260
    X86_AT(c, 0xe1c86u);
    push32(c, 0xe1c8bu); f_000e7260(c); X86_RET(c, 0xe1c8bu);
    X86_TICK(c, 11);
    // 0e1c8b  push 0x12c0
    X86_AT(c, 0xe1c8bu);
    { uint32_t v = 0x12C0u; push32(c, v); }
    // 0e1c90  push edi
    X86_AT(c, 0xe1c90u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1c91  call 0xe5654
    X86_AT(c, 0xe1c91u);
    push32(c, 0xe1c96u); f_000e5654(c); X86_RET(c, 0xe1c96u);
    X86_TICK(c, 9);
    // 0e1c96  push edi
    X86_AT(c, 0xe1c96u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1c97  call 0xe6c68
    X86_AT(c, 0xe1c97u);
    push32(c, 0xe1c9cu); f_000e6c68(c); X86_RET(c, 0xe1c9cu);
    X86_TICK(c, 11);
    // 0e1c9c  mov eax, 0xffffffff
    X86_AT(c, 0xe1c9cu);
    c.r[0] = 0xFFFFFFFFu;
    // 0e1ca1  add esp, 0x18
    X86_AT(c, 0xe1ca1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0e1ca4  jmp 0xe1df8
    X86_AT(c, 0xe1ca4u);
    goto L_e1df8;
L_e1ca9:
    X86_TICK(c, 7);
    // 0e1ca9  cmp bl, 3
    X86_AT(c, 0xe1ca9u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0e1cac  jne 0xe1cdd
    X86_AT(c, 0xe1cacu);
    if (x86_cc(c, 5)) { goto L_e1cdd; }
    X86_TICK(c, 7);
    // 0e1cae  and esi, esi
    X86_AT(c, 0xe1caeu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e1cb0  jne 0xe1cbe
    X86_AT(c, 0xe1cb0u);
    if (x86_cc(c, 5)) { goto L_e1cbe; }
L_e1cb2:
    X86_TICK(c, 9);
    // 0e1cb2  push 1
    X86_AT(c, 0xe1cb2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1cb4  call 0xe1944
    X86_AT(c, 0xe1cb4u);
    push32(c, 0xe1cb9u); f_000e1944(c); X86_RET(c, 0xe1cb9u);
    X86_TICK(c, 9);
    // 0e1cb9  add esp, 4
    X86_AT(c, 0xe1cb9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1cbc  jmp 0xe1c44
    X86_AT(c, 0xe1cbcu);
    X86_POLL(c, 0xe1c44u); goto L_e1c44;
L_e1cbe:
    X86_TICK(c, 11);
    // 0e1cbe  push 0x12d6
    X86_AT(c, 0xe1cbeu);
    { uint32_t v = 0x12D6u; push32(c, v); }
    // 0e1cc3  push edi
    X86_AT(c, 0xe1cc3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1cc4  call 0xe6cb0
    X86_AT(c, 0xe1cc4u);
    push32(c, 0xe1cc9u); f_000e6cb0(c); X86_RET(c, 0xe1cc9u);
    X86_TICK(c, 24);
    // 0e1cc9  dec esi
    X86_AT(c, 0xe1cc9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0e1cca  mov byte ptr [ebp + esi*1 - 8], 0
    X86_AT(c, 0xe1ccau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFFF8u)), 0x0u);
    // 0e1ccf  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1ccfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1cd2  lea eax, [esi + esi*1]
    X86_AT(c, 0xe1cd2u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6]);
    // 0e1cd5  add eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1cd5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
    // 0e1cd8  jmp 0xe1db5
    X86_AT(c, 0xe1cd8u);
    goto L_e1db5;
L_e1cdd:
    X86_TICK(c, 7);
    // 0e1cdd  cmp bl, 4
    X86_AT(c, 0xe1cddu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0e1ce0  je 0xe1dc4
    X86_AT(c, 0xe1ce0u);
    if (x86_cc(c, 4)) { goto L_e1dc4; }
    X86_TICK(c, 9);
    // 0e1ce6  mov edx, esi
    X86_AT(c, 0xe1ce6u);
    c.r[2] = c.r[6];
    // 0e1ce8  cmp edx, 4
    X86_AT(c, 0xe1ce8u);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0e1ceb  ja 0xe1c44
    X86_AT(c, 0xe1cebu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xe1c44u); goto L_e1c44; }
    X86_TICK(c, 7);
    // 0e1cf1  jmp dword ptr cs:[edx*4 + 0xe1cf9]
    X86_AT(c, 0xe1cf1u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE1CF9u)));
      switch (t) {
      case 0xe1d0du: goto L_e1d0d;
      case 0xe1d4au: goto L_e1d4a;
      case 0xe1d67u: goto L_e1d67;
      case 0xe1d84u: goto L_e1d84;
      case 0xe1da1u: goto L_e1da1;
      default: x86_jump(c, t); return; } }
L_e1d0d:
    X86_TICK(c, 7);
    // 0e1d0d  cmp bl, 0x30
    X86_AT(c, 0xe1d0du);
    (void)x86_sub(c, g8(c, 3), 0x30u, 0, 1);
    // 0e1d10  jne 0xe1d2d
    X86_AT(c, 0xe1d10u);
    if (x86_cc(c, 5)) { goto L_e1d2d; }
    X86_TICK(c, 19);
    // 0e1d12  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1d12u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1d15  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1d15u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0e1d18  push edi
    X86_AT(c, 0xe1d18u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1d19  call 0xe7260
    X86_AT(c, 0xe1d19u);
    push32(c, 0xe1d1eu); f_000e7260(c); X86_RET(c, 0xe1d1eu);
    X86_TICK(c, 9);
    // 0e1d1e  push 1
    X86_AT(c, 0xe1d1eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1d20  call 0xe1944
    X86_AT(c, 0xe1d20u);
    push32(c, 0xe1d25u); f_000e1944(c); X86_RET(c, 0xe1d25u);
    X86_TICK(c, 9);
    // 0e1d25  add esp, 0x10
    X86_AT(c, 0xe1d25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e1d28  jmp 0xe1c44
    X86_AT(c, 0xe1d28u);
    X86_POLL(c, 0xe1c44u); goto L_e1c44;
L_e1d2d:
    X86_TICK(c, 22);
    // 0e1d2d  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1d2du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1d30  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1d30u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e1d33  add eax, 2
    X86_AT(c, 0xe1d33u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0e1d36  push eax
    X86_AT(c, 0xe1d36u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1d37  push edi
    X86_AT(c, 0xe1d37u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1d38  call 0xe7260
    X86_AT(c, 0xe1d38u);
    push32(c, 0xe1d3du); f_000e7260(c); X86_RET(c, 0xe1d3du);
    X86_TICK(c, 11);
    // 0e1d3d  mov byte ptr [ebp - 8], bl
    X86_AT(c, 0xe1d3du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), g8(c, 3));
    // 0e1d40  mov esi, 1
    X86_AT(c, 0xe1d40u);
    c.r[6] = 0x1u;
    // 0e1d45  jmp 0xe1c41
    X86_AT(c, 0xe1d45u);
    X86_POLL(c, 0xe1c41u); goto L_e1c41;
L_e1d4a:
    X86_TICK(c, 22);
    // 0e1d4a  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1d4au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1d4d  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1d4du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e1d50  add eax, 4
    X86_AT(c, 0xe1d50u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1d53  push eax
    X86_AT(c, 0xe1d53u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1d54  push edi
    X86_AT(c, 0xe1d54u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1d55  call 0xe7260
    X86_AT(c, 0xe1d55u);
    push32(c, 0xe1d5au); f_000e7260(c); X86_RET(c, 0xe1d5au);
    X86_TICK(c, 11);
    // 0e1d5a  mov byte ptr [ebp - 7], bl
    X86_AT(c, 0xe1d5au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF9u)), g8(c, 3));
    // 0e1d5d  mov esi, 2
    X86_AT(c, 0xe1d5du);
    c.r[6] = 0x2u;
    // 0e1d62  jmp 0xe1c41
    X86_AT(c, 0xe1d62u);
    X86_POLL(c, 0xe1c41u); goto L_e1c41;
L_e1d67:
    X86_TICK(c, 22);
    // 0e1d67  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1d67u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1d6a  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1d6au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e1d6d  add eax, 6
    X86_AT(c, 0xe1d6du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x6u, 0, 4); }
    // 0e1d70  push eax
    X86_AT(c, 0xe1d70u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1d71  push edi
    X86_AT(c, 0xe1d71u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1d72  call 0xe7260
    X86_AT(c, 0xe1d72u);
    push32(c, 0xe1d77u); f_000e7260(c); X86_RET(c, 0xe1d77u);
    X86_TICK(c, 11);
    // 0e1d77  mov byte ptr [ebp - 6], bl
    X86_AT(c, 0xe1d77u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), g8(c, 3));
    // 0e1d7a  mov esi, 3
    X86_AT(c, 0xe1d7au);
    c.r[6] = 0x3u;
    // 0e1d7f  jmp 0xe1c41
    X86_AT(c, 0xe1d7fu);
    X86_POLL(c, 0xe1c41u); goto L_e1c41;
L_e1d84:
    X86_TICK(c, 22);
    // 0e1d84  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1d84u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1d87  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1d87u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e1d8a  add eax, 8
    X86_AT(c, 0xe1d8au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e1d8d  push eax
    X86_AT(c, 0xe1d8du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1d8e  push edi
    X86_AT(c, 0xe1d8eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1d8f  call 0xe7260
    X86_AT(c, 0xe1d8fu);
    push32(c, 0xe1d94u); f_000e7260(c); X86_RET(c, 0xe1d94u);
    X86_TICK(c, 11);
    // 0e1d94  mov byte ptr [ebp - 5], bl
    X86_AT(c, 0xe1d94u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 3));
    // 0e1d97  mov esi, 4
    X86_AT(c, 0xe1d97u);
    c.r[6] = 0x4u;
    // 0e1d9c  jmp 0xe1c41
    X86_AT(c, 0xe1d9cu);
    X86_POLL(c, 0xe1c41u); goto L_e1c41;
L_e1da1:
    X86_TICK(c, 11);
    // 0e1da1  push 0x12da
    X86_AT(c, 0xe1da1u);
    { uint32_t v = 0x12DAu; push32(c, v); }
    // 0e1da6  push edi
    X86_AT(c, 0xe1da6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1da7  call 0xe6cb0
    X86_AT(c, 0xe1da7u);
    push32(c, 0xe1dacu); f_000e6cb0(c); X86_RET(c, 0xe1dacu);
    X86_TICK(c, 11);
    // 0e1dac  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1dacu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1daf  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1dafu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e1db2  add eax, 8
    X86_AT(c, 0xe1db2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
L_e1db5:
    X86_TICK(c, 11);
    // 0e1db5  push eax
    X86_AT(c, 0xe1db5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1db6  push edi
    X86_AT(c, 0xe1db6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1db7  call 0xe7260
    X86_AT(c, 0xe1db7u);
    push32(c, 0xe1dbcu); f_000e7260(c); X86_RET(c, 0xe1dbcu);
    X86_TICK(c, 9);
    // 0e1dbc  add esp, 0x14
    X86_AT(c, 0xe1dbcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0e1dbf  jmp 0xe1c44
    X86_AT(c, 0xe1dbfu);
    X86_POLL(c, 0xe1c44u); goto L_e1c44;
L_e1dc4:
    X86_TICK(c, 11);
    // 0e1dc4  lea eax, [ebp - 8]
    X86_AT(c, 0xe1dc4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e1dc7  push eax
    X86_AT(c, 0xe1dc7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1dc8  call 0xe42d0
    X86_AT(c, 0xe1dc8u);
    push32(c, 0xe1dcdu); f_000e42d0(c); X86_RET(c, 0xe1dcdu);
    X86_TICK(c, 21);
    // 0e1dcd  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xe1dcdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0e1dd0  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1dd0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1dd3  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1dd3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0e1dd6  push edi
    X86_AT(c, 0xe1dd6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1dd7  call 0xe7260
    X86_AT(c, 0xe1dd7u);
    push32(c, 0xe1ddcu); f_000e7260(c); X86_RET(c, 0xe1ddcu);
    X86_TICK(c, 16);
    // 0e1ddc  push 4
    X86_AT(c, 0xe1ddcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e1dde  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xe1ddeu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0e1de1  push edi
    X86_AT(c, 0xe1de1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1de2  call 0xe5630
    X86_AT(c, 0xe1de2u);
    push32(c, 0xe1de7u); f_000e5630(c); X86_RET(c, 0xe1de7u);
    X86_TICK(c, 11);
    // 0e1de7  push 0x12de
    X86_AT(c, 0xe1de7u);
    { uint32_t v = 0x12DEu; push32(c, v); }
    // 0e1dec  push edi
    X86_AT(c, 0xe1decu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1ded  call 0xe6cb0
    X86_AT(c, 0xe1dedu);
    push32(c, 0xe1df2u); f_000e6cb0(c); X86_RET(c, 0xe1df2u);
    X86_TICK(c, 6);
    // 0e1df2  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe1df2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e1df5  add esp, 0x24
    X86_AT(c, 0xe1df5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_e1df8:
    X86_TICK(c, 28);
    // 0e1df8  pop edi
    X86_AT(c, 0xe1df8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e1df9  pop esi
    X86_AT(c, 0xe1df9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e1dfa  pop ebx
    X86_AT(c, 0xe1dfau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e1dfb  leave 
    X86_AT(c, 0xe1dfbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e1dfc  ret 
    X86_AT(c, 0xe1dfcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1c0cu, "ran off the end of a function");
}
void f_000e1c41(X86Cpu& c) {
L_e1c41:
    X86_TICK(c, 2);
    // 0e1c41  add esp, 0xc
    X86_AT(c, 0xe1c41u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_e1c44:
    X86_TICK(c, 11);
    // 0e1c44  cmp esi, 4
    X86_AT(c, 0xe1c44u);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0e1c47  push edi
    X86_AT(c, 0xe1c47u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1c48  call 0xe4748
    X86_AT(c, 0xe1c48u);
    push32(c, 0xe1c4du); f_000e4748(c); X86_RET(c, 0xe1c4du);
    X86_TICK(c, 12);
    // 0e1c4d  xchg ebx, eax
    X86_AT(c, 0xe1c4du);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e1c4e  add esp, 4
    X86_AT(c, 0xe1c4eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1c51  cmp bl, 1
    X86_AT(c, 0xe1c51u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0e1c54  je 0xe1c70
    X86_AT(c, 0xe1c54u);
    if (x86_cc(c, 4)) { goto L_e1c70; }
    X86_TICK(c, 7);
    // 0e1c56  cmp bl, 4
    X86_AT(c, 0xe1c56u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0e1c59  je 0xe1c70
    X86_AT(c, 0xe1c59u);
    if (x86_cc(c, 4)) { goto L_e1c70; }
    X86_TICK(c, 7);
    // 0e1c5b  cmp bl, 3
    X86_AT(c, 0xe1c5bu);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0e1c5e  je 0xe1c70
    X86_AT(c, 0xe1c5eu);
    if (x86_cc(c, 4)) { goto L_e1c70; }
    X86_TICK(c, 7);
    // 0e1c60  cmp bl, 0x30
    X86_AT(c, 0xe1c60u);
    (void)x86_sub(c, g8(c, 3), 0x30u, 0, 1);
    // 0e1c63  jb 0xe1c6a
    X86_AT(c, 0xe1c63u);
    if (x86_cc(c, 2)) { goto L_e1c6a; }
    X86_TICK(c, 7);
    // 0e1c65  cmp bl, 0x39
    X86_AT(c, 0xe1c65u);
    (void)x86_sub(c, g8(c, 3), 0x39u, 0, 1);
    // 0e1c68  jbe 0xe1c70
    X86_AT(c, 0xe1c68u);
    if (x86_cc(c, 6)) { goto L_e1c70; }
L_e1c6a:
    X86_TICK(c, 7);
    // 0e1c6a  and bl, bl
    X86_AT(c, 0xe1c6au);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e1c6c  je 0xe1c44
    X86_AT(c, 0xe1c6cu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe1c44u); goto L_e1c44; }
    X86_TICK(c, 7);
    // 0e1c6e  jmp 0xe1cb2
    X86_AT(c, 0xe1c6eu);
    goto L_e1cb2;
L_e1c70:
    X86_TICK(c, 9);
    // 0e1c70  push 7
    X86_AT(c, 0xe1c70u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e1c72  call 0xe693c
    X86_AT(c, 0xe1c72u);
    push32(c, 0xe1c77u); f_000e693c(c); X86_RET(c, 0xe1c77u);
    X86_TICK(c, 9);
    // 0e1c77  add esp, 4
    X86_AT(c, 0xe1c77u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1c7a  cmp bl, 1
    X86_AT(c, 0xe1c7au);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0e1c7d  jne 0xe1ca9
    X86_AT(c, 0xe1c7du);
    if (x86_cc(c, 5)) { goto L_e1ca9; }
    X86_TICK(c, 19);
    // 0e1c7f  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1c7fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1c82  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1c82u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0e1c85  push edi
    X86_AT(c, 0xe1c85u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1c86  call 0xe7260
    X86_AT(c, 0xe1c86u);
    push32(c, 0xe1c8bu); f_000e7260(c); X86_RET(c, 0xe1c8bu);
    X86_TICK(c, 11);
    // 0e1c8b  push 0x12c0
    X86_AT(c, 0xe1c8bu);
    { uint32_t v = 0x12C0u; push32(c, v); }
    // 0e1c90  push edi
    X86_AT(c, 0xe1c90u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1c91  call 0xe5654
    X86_AT(c, 0xe1c91u);
    push32(c, 0xe1c96u); f_000e5654(c); X86_RET(c, 0xe1c96u);
    X86_TICK(c, 9);
    // 0e1c96  push edi
    X86_AT(c, 0xe1c96u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1c97  call 0xe6c68
    X86_AT(c, 0xe1c97u);
    push32(c, 0xe1c9cu); f_000e6c68(c); X86_RET(c, 0xe1c9cu);
    X86_TICK(c, 11);
    // 0e1c9c  mov eax, 0xffffffff
    X86_AT(c, 0xe1c9cu);
    c.r[0] = 0xFFFFFFFFu;
    // 0e1ca1  add esp, 0x18
    X86_AT(c, 0xe1ca1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0e1ca4  jmp 0xe1df8
    X86_AT(c, 0xe1ca4u);
    goto L_e1df8;
L_e1ca9:
    X86_TICK(c, 7);
    // 0e1ca9  cmp bl, 3
    X86_AT(c, 0xe1ca9u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0e1cac  jne 0xe1cdd
    X86_AT(c, 0xe1cacu);
    if (x86_cc(c, 5)) { goto L_e1cdd; }
    X86_TICK(c, 7);
    // 0e1cae  and esi, esi
    X86_AT(c, 0xe1caeu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e1cb0  jne 0xe1cbe
    X86_AT(c, 0xe1cb0u);
    if (x86_cc(c, 5)) { goto L_e1cbe; }
L_e1cb2:
    X86_TICK(c, 9);
    // 0e1cb2  push 1
    X86_AT(c, 0xe1cb2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1cb4  call 0xe1944
    X86_AT(c, 0xe1cb4u);
    push32(c, 0xe1cb9u); f_000e1944(c); X86_RET(c, 0xe1cb9u);
    X86_TICK(c, 9);
    // 0e1cb9  add esp, 4
    X86_AT(c, 0xe1cb9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1cbc  jmp 0xe1c44
    X86_AT(c, 0xe1cbcu);
    X86_POLL(c, 0xe1c44u); goto L_e1c44;
L_e1cbe:
    X86_TICK(c, 11);
    // 0e1cbe  push 0x12d6
    X86_AT(c, 0xe1cbeu);
    { uint32_t v = 0x12D6u; push32(c, v); }
    // 0e1cc3  push edi
    X86_AT(c, 0xe1cc3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1cc4  call 0xe6cb0
    X86_AT(c, 0xe1cc4u);
    push32(c, 0xe1cc9u); f_000e6cb0(c); X86_RET(c, 0xe1cc9u);
    X86_TICK(c, 24);
    // 0e1cc9  dec esi
    X86_AT(c, 0xe1cc9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0e1cca  mov byte ptr [ebp + esi*1 - 8], 0
    X86_AT(c, 0xe1ccau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFFF8u)), 0x0u);
    // 0e1ccf  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1ccfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1cd2  lea eax, [esi + esi*1]
    X86_AT(c, 0xe1cd2u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6]);
    // 0e1cd5  add eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1cd5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
    // 0e1cd8  jmp 0xe1db5
    X86_AT(c, 0xe1cd8u);
    goto L_e1db5;
L_e1cdd:
    X86_TICK(c, 7);
    // 0e1cdd  cmp bl, 4
    X86_AT(c, 0xe1cddu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0e1ce0  je 0xe1dc4
    X86_AT(c, 0xe1ce0u);
    if (x86_cc(c, 4)) { goto L_e1dc4; }
    X86_TICK(c, 9);
    // 0e1ce6  mov edx, esi
    X86_AT(c, 0xe1ce6u);
    c.r[2] = c.r[6];
    // 0e1ce8  cmp edx, 4
    X86_AT(c, 0xe1ce8u);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0e1ceb  ja 0xe1c44
    X86_AT(c, 0xe1cebu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xe1c44u); goto L_e1c44; }
    X86_TICK(c, 7);
    // 0e1cf1  jmp dword ptr cs:[edx*4 + 0xe1cf9]
    X86_AT(c, 0xe1cf1u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE1CF9u)));
      switch (t) {
      case 0xe1d0du: goto L_e1d0d;
      case 0xe1d4au: goto L_e1d4a;
      case 0xe1d67u: goto L_e1d67;
      case 0xe1d84u: goto L_e1d84;
      case 0xe1da1u: goto L_e1da1;
      default: x86_jump(c, t); return; } }
L_e1d0d:
    X86_TICK(c, 7);
    // 0e1d0d  cmp bl, 0x30
    X86_AT(c, 0xe1d0du);
    (void)x86_sub(c, g8(c, 3), 0x30u, 0, 1);
    // 0e1d10  jne 0xe1d2d
    X86_AT(c, 0xe1d10u);
    if (x86_cc(c, 5)) { goto L_e1d2d; }
    X86_TICK(c, 19);
    // 0e1d12  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1d12u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1d15  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1d15u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0e1d18  push edi
    X86_AT(c, 0xe1d18u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1d19  call 0xe7260
    X86_AT(c, 0xe1d19u);
    push32(c, 0xe1d1eu); f_000e7260(c); X86_RET(c, 0xe1d1eu);
    X86_TICK(c, 9);
    // 0e1d1e  push 1
    X86_AT(c, 0xe1d1eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1d20  call 0xe1944
    X86_AT(c, 0xe1d20u);
    push32(c, 0xe1d25u); f_000e1944(c); X86_RET(c, 0xe1d25u);
    X86_TICK(c, 9);
    // 0e1d25  add esp, 0x10
    X86_AT(c, 0xe1d25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e1d28  jmp 0xe1c44
    X86_AT(c, 0xe1d28u);
    X86_POLL(c, 0xe1c44u); goto L_e1c44;
L_e1d2d:
    X86_TICK(c, 22);
    // 0e1d2d  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1d2du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1d30  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1d30u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e1d33  add eax, 2
    X86_AT(c, 0xe1d33u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0e1d36  push eax
    X86_AT(c, 0xe1d36u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1d37  push edi
    X86_AT(c, 0xe1d37u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1d38  call 0xe7260
    X86_AT(c, 0xe1d38u);
    push32(c, 0xe1d3du); f_000e7260(c); X86_RET(c, 0xe1d3du);
    X86_TICK(c, 11);
    // 0e1d3d  mov byte ptr [ebp - 8], bl
    X86_AT(c, 0xe1d3du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), g8(c, 3));
    // 0e1d40  mov esi, 1
    X86_AT(c, 0xe1d40u);
    c.r[6] = 0x1u;
    // 0e1d45  jmp 0xe1c41
    X86_AT(c, 0xe1d45u);
    X86_POLL(c, 0xe1c41u); goto L_e1c41;
L_e1d4a:
    X86_TICK(c, 22);
    // 0e1d4a  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1d4au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1d4d  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1d4du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e1d50  add eax, 4
    X86_AT(c, 0xe1d50u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1d53  push eax
    X86_AT(c, 0xe1d53u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1d54  push edi
    X86_AT(c, 0xe1d54u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1d55  call 0xe7260
    X86_AT(c, 0xe1d55u);
    push32(c, 0xe1d5au); f_000e7260(c); X86_RET(c, 0xe1d5au);
    X86_TICK(c, 11);
    // 0e1d5a  mov byte ptr [ebp - 7], bl
    X86_AT(c, 0xe1d5au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF9u)), g8(c, 3));
    // 0e1d5d  mov esi, 2
    X86_AT(c, 0xe1d5du);
    c.r[6] = 0x2u;
    // 0e1d62  jmp 0xe1c41
    X86_AT(c, 0xe1d62u);
    X86_POLL(c, 0xe1c41u); goto L_e1c41;
L_e1d67:
    X86_TICK(c, 22);
    // 0e1d67  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1d67u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1d6a  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1d6au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e1d6d  add eax, 6
    X86_AT(c, 0xe1d6du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x6u, 0, 4); }
    // 0e1d70  push eax
    X86_AT(c, 0xe1d70u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1d71  push edi
    X86_AT(c, 0xe1d71u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1d72  call 0xe7260
    X86_AT(c, 0xe1d72u);
    push32(c, 0xe1d77u); f_000e7260(c); X86_RET(c, 0xe1d77u);
    X86_TICK(c, 11);
    // 0e1d77  mov byte ptr [ebp - 6], bl
    X86_AT(c, 0xe1d77u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), g8(c, 3));
    // 0e1d7a  mov esi, 3
    X86_AT(c, 0xe1d7au);
    c.r[6] = 0x3u;
    // 0e1d7f  jmp 0xe1c41
    X86_AT(c, 0xe1d7fu);
    X86_POLL(c, 0xe1c41u); goto L_e1c41;
L_e1d84:
    X86_TICK(c, 22);
    // 0e1d84  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1d84u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1d87  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1d87u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e1d8a  add eax, 8
    X86_AT(c, 0xe1d8au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e1d8d  push eax
    X86_AT(c, 0xe1d8du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1d8e  push edi
    X86_AT(c, 0xe1d8eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1d8f  call 0xe7260
    X86_AT(c, 0xe1d8fu);
    push32(c, 0xe1d94u); f_000e7260(c); X86_RET(c, 0xe1d94u);
    X86_TICK(c, 11);
    // 0e1d94  mov byte ptr [ebp - 5], bl
    X86_AT(c, 0xe1d94u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 3));
    // 0e1d97  mov esi, 4
    X86_AT(c, 0xe1d97u);
    c.r[6] = 0x4u;
    // 0e1d9c  jmp 0xe1c41
    X86_AT(c, 0xe1d9cu);
    X86_POLL(c, 0xe1c41u); goto L_e1c41;
L_e1da1:
    X86_TICK(c, 11);
    // 0e1da1  push 0x12da
    X86_AT(c, 0xe1da1u);
    { uint32_t v = 0x12DAu; push32(c, v); }
    // 0e1da6  push edi
    X86_AT(c, 0xe1da6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1da7  call 0xe6cb0
    X86_AT(c, 0xe1da7u);
    push32(c, 0xe1dacu); f_000e6cb0(c); X86_RET(c, 0xe1dacu);
    X86_TICK(c, 11);
    // 0e1dac  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1dacu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1daf  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1dafu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e1db2  add eax, 8
    X86_AT(c, 0xe1db2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
L_e1db5:
    X86_TICK(c, 11);
    // 0e1db5  push eax
    X86_AT(c, 0xe1db5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1db6  push edi
    X86_AT(c, 0xe1db6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1db7  call 0xe7260
    X86_AT(c, 0xe1db7u);
    push32(c, 0xe1dbcu); f_000e7260(c); X86_RET(c, 0xe1dbcu);
    X86_TICK(c, 9);
    // 0e1dbc  add esp, 0x14
    X86_AT(c, 0xe1dbcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0e1dbf  jmp 0xe1c44
    X86_AT(c, 0xe1dbfu);
    X86_POLL(c, 0xe1c44u); goto L_e1c44;
L_e1dc4:
    X86_TICK(c, 11);
    // 0e1dc4  lea eax, [ebp - 8]
    X86_AT(c, 0xe1dc4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e1dc7  push eax
    X86_AT(c, 0xe1dc7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1dc8  call 0xe42d0
    X86_AT(c, 0xe1dc8u);
    push32(c, 0xe1dcdu); f_000e42d0(c); X86_RET(c, 0xe1dcdu);
    X86_TICK(c, 21);
    // 0e1dcd  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xe1dcdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0e1dd0  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1dd0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1dd3  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1dd3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0e1dd6  push edi
    X86_AT(c, 0xe1dd6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1dd7  call 0xe7260
    X86_AT(c, 0xe1dd7u);
    push32(c, 0xe1ddcu); f_000e7260(c); X86_RET(c, 0xe1ddcu);
    X86_TICK(c, 16);
    // 0e1ddc  push 4
    X86_AT(c, 0xe1ddcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e1dde  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xe1ddeu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0e1de1  push edi
    X86_AT(c, 0xe1de1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1de2  call 0xe5630
    X86_AT(c, 0xe1de2u);
    push32(c, 0xe1de7u); f_000e5630(c); X86_RET(c, 0xe1de7u);
    X86_TICK(c, 11);
    // 0e1de7  push 0x12de
    X86_AT(c, 0xe1de7u);
    { uint32_t v = 0x12DEu; push32(c, v); }
    // 0e1dec  push edi
    X86_AT(c, 0xe1decu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1ded  call 0xe6cb0
    X86_AT(c, 0xe1dedu);
    push32(c, 0xe1df2u); f_000e6cb0(c); X86_RET(c, 0xe1df2u);
    X86_TICK(c, 6);
    // 0e1df2  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe1df2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e1df5  add esp, 0x24
    X86_AT(c, 0xe1df5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_e1df8:
    X86_TICK(c, 28);
    // 0e1df8  pop edi
    X86_AT(c, 0xe1df8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e1df9  pop esi
    X86_AT(c, 0xe1df9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e1dfa  pop ebx
    X86_AT(c, 0xe1dfau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e1dfb  leave 
    X86_AT(c, 0xe1dfbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e1dfc  ret 
    X86_AT(c, 0xe1dfcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1c41u, "ran off the end of a function");
}
void f_000e1c44(X86Cpu& c) {
    goto L_e1c44;
L_e1c41:
    X86_TICK(c, 2);
    // 0e1c41  add esp, 0xc
    X86_AT(c, 0xe1c41u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_e1c44:
    X86_TICK(c, 11);
    // 0e1c44  cmp esi, 4
    X86_AT(c, 0xe1c44u);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0e1c47  push edi
    X86_AT(c, 0xe1c47u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1c48  call 0xe4748
    X86_AT(c, 0xe1c48u);
    push32(c, 0xe1c4du); f_000e4748(c); X86_RET(c, 0xe1c4du);
    X86_TICK(c, 12);
    // 0e1c4d  xchg ebx, eax
    X86_AT(c, 0xe1c4du);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e1c4e  add esp, 4
    X86_AT(c, 0xe1c4eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1c51  cmp bl, 1
    X86_AT(c, 0xe1c51u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0e1c54  je 0xe1c70
    X86_AT(c, 0xe1c54u);
    if (x86_cc(c, 4)) { goto L_e1c70; }
    X86_TICK(c, 7);
    // 0e1c56  cmp bl, 4
    X86_AT(c, 0xe1c56u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0e1c59  je 0xe1c70
    X86_AT(c, 0xe1c59u);
    if (x86_cc(c, 4)) { goto L_e1c70; }
    X86_TICK(c, 7);
    // 0e1c5b  cmp bl, 3
    X86_AT(c, 0xe1c5bu);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0e1c5e  je 0xe1c70
    X86_AT(c, 0xe1c5eu);
    if (x86_cc(c, 4)) { goto L_e1c70; }
    X86_TICK(c, 7);
    // 0e1c60  cmp bl, 0x30
    X86_AT(c, 0xe1c60u);
    (void)x86_sub(c, g8(c, 3), 0x30u, 0, 1);
    // 0e1c63  jb 0xe1c6a
    X86_AT(c, 0xe1c63u);
    if (x86_cc(c, 2)) { goto L_e1c6a; }
    X86_TICK(c, 7);
    // 0e1c65  cmp bl, 0x39
    X86_AT(c, 0xe1c65u);
    (void)x86_sub(c, g8(c, 3), 0x39u, 0, 1);
    // 0e1c68  jbe 0xe1c70
    X86_AT(c, 0xe1c68u);
    if (x86_cc(c, 6)) { goto L_e1c70; }
L_e1c6a:
    X86_TICK(c, 7);
    // 0e1c6a  and bl, bl
    X86_AT(c, 0xe1c6au);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e1c6c  je 0xe1c44
    X86_AT(c, 0xe1c6cu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe1c44u); goto L_e1c44; }
    X86_TICK(c, 7);
    // 0e1c6e  jmp 0xe1cb2
    X86_AT(c, 0xe1c6eu);
    goto L_e1cb2;
L_e1c70:
    X86_TICK(c, 9);
    // 0e1c70  push 7
    X86_AT(c, 0xe1c70u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e1c72  call 0xe693c
    X86_AT(c, 0xe1c72u);
    push32(c, 0xe1c77u); f_000e693c(c); X86_RET(c, 0xe1c77u);
    X86_TICK(c, 9);
    // 0e1c77  add esp, 4
    X86_AT(c, 0xe1c77u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1c7a  cmp bl, 1
    X86_AT(c, 0xe1c7au);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0e1c7d  jne 0xe1ca9
    X86_AT(c, 0xe1c7du);
    if (x86_cc(c, 5)) { goto L_e1ca9; }
    X86_TICK(c, 19);
    // 0e1c7f  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1c7fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1c82  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1c82u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0e1c85  push edi
    X86_AT(c, 0xe1c85u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1c86  call 0xe7260
    X86_AT(c, 0xe1c86u);
    push32(c, 0xe1c8bu); f_000e7260(c); X86_RET(c, 0xe1c8bu);
    X86_TICK(c, 11);
    // 0e1c8b  push 0x12c0
    X86_AT(c, 0xe1c8bu);
    { uint32_t v = 0x12C0u; push32(c, v); }
    // 0e1c90  push edi
    X86_AT(c, 0xe1c90u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1c91  call 0xe5654
    X86_AT(c, 0xe1c91u);
    push32(c, 0xe1c96u); f_000e5654(c); X86_RET(c, 0xe1c96u);
    X86_TICK(c, 9);
    // 0e1c96  push edi
    X86_AT(c, 0xe1c96u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1c97  call 0xe6c68
    X86_AT(c, 0xe1c97u);
    push32(c, 0xe1c9cu); f_000e6c68(c); X86_RET(c, 0xe1c9cu);
    X86_TICK(c, 11);
    // 0e1c9c  mov eax, 0xffffffff
    X86_AT(c, 0xe1c9cu);
    c.r[0] = 0xFFFFFFFFu;
    // 0e1ca1  add esp, 0x18
    X86_AT(c, 0xe1ca1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0e1ca4  jmp 0xe1df8
    X86_AT(c, 0xe1ca4u);
    goto L_e1df8;
L_e1ca9:
    X86_TICK(c, 7);
    // 0e1ca9  cmp bl, 3
    X86_AT(c, 0xe1ca9u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0e1cac  jne 0xe1cdd
    X86_AT(c, 0xe1cacu);
    if (x86_cc(c, 5)) { goto L_e1cdd; }
    X86_TICK(c, 7);
    // 0e1cae  and esi, esi
    X86_AT(c, 0xe1caeu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e1cb0  jne 0xe1cbe
    X86_AT(c, 0xe1cb0u);
    if (x86_cc(c, 5)) { goto L_e1cbe; }
L_e1cb2:
    X86_TICK(c, 9);
    // 0e1cb2  push 1
    X86_AT(c, 0xe1cb2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1cb4  call 0xe1944
    X86_AT(c, 0xe1cb4u);
    push32(c, 0xe1cb9u); f_000e1944(c); X86_RET(c, 0xe1cb9u);
    X86_TICK(c, 9);
    // 0e1cb9  add esp, 4
    X86_AT(c, 0xe1cb9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1cbc  jmp 0xe1c44
    X86_AT(c, 0xe1cbcu);
    X86_POLL(c, 0xe1c44u); goto L_e1c44;
L_e1cbe:
    X86_TICK(c, 11);
    // 0e1cbe  push 0x12d6
    X86_AT(c, 0xe1cbeu);
    { uint32_t v = 0x12D6u; push32(c, v); }
    // 0e1cc3  push edi
    X86_AT(c, 0xe1cc3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1cc4  call 0xe6cb0
    X86_AT(c, 0xe1cc4u);
    push32(c, 0xe1cc9u); f_000e6cb0(c); X86_RET(c, 0xe1cc9u);
    X86_TICK(c, 24);
    // 0e1cc9  dec esi
    X86_AT(c, 0xe1cc9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0e1cca  mov byte ptr [ebp + esi*1 - 8], 0
    X86_AT(c, 0xe1ccau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFFF8u)), 0x0u);
    // 0e1ccf  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1ccfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1cd2  lea eax, [esi + esi*1]
    X86_AT(c, 0xe1cd2u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[6]);
    // 0e1cd5  add eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1cd5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
    // 0e1cd8  jmp 0xe1db5
    X86_AT(c, 0xe1cd8u);
    goto L_e1db5;
L_e1cdd:
    X86_TICK(c, 7);
    // 0e1cdd  cmp bl, 4
    X86_AT(c, 0xe1cddu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0e1ce0  je 0xe1dc4
    X86_AT(c, 0xe1ce0u);
    if (x86_cc(c, 4)) { goto L_e1dc4; }
    X86_TICK(c, 9);
    // 0e1ce6  mov edx, esi
    X86_AT(c, 0xe1ce6u);
    c.r[2] = c.r[6];
    // 0e1ce8  cmp edx, 4
    X86_AT(c, 0xe1ce8u);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0e1ceb  ja 0xe1c44
    X86_AT(c, 0xe1cebu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xe1c44u); goto L_e1c44; }
    X86_TICK(c, 7);
    // 0e1cf1  jmp dword ptr cs:[edx*4 + 0xe1cf9]
    X86_AT(c, 0xe1cf1u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE1CF9u)));
      switch (t) {
      case 0xe1d0du: goto L_e1d0d;
      case 0xe1d4au: goto L_e1d4a;
      case 0xe1d67u: goto L_e1d67;
      case 0xe1d84u: goto L_e1d84;
      case 0xe1da1u: goto L_e1da1;
      default: x86_jump(c, t); return; } }
L_e1d0d:
    X86_TICK(c, 7);
    // 0e1d0d  cmp bl, 0x30
    X86_AT(c, 0xe1d0du);
    (void)x86_sub(c, g8(c, 3), 0x30u, 0, 1);
    // 0e1d10  jne 0xe1d2d
    X86_AT(c, 0xe1d10u);
    if (x86_cc(c, 5)) { goto L_e1d2d; }
    X86_TICK(c, 19);
    // 0e1d12  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1d12u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1d15  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1d15u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0e1d18  push edi
    X86_AT(c, 0xe1d18u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1d19  call 0xe7260
    X86_AT(c, 0xe1d19u);
    push32(c, 0xe1d1eu); f_000e7260(c); X86_RET(c, 0xe1d1eu);
    X86_TICK(c, 9);
    // 0e1d1e  push 1
    X86_AT(c, 0xe1d1eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1d20  call 0xe1944
    X86_AT(c, 0xe1d20u);
    push32(c, 0xe1d25u); f_000e1944(c); X86_RET(c, 0xe1d25u);
    X86_TICK(c, 9);
    // 0e1d25  add esp, 0x10
    X86_AT(c, 0xe1d25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e1d28  jmp 0xe1c44
    X86_AT(c, 0xe1d28u);
    X86_POLL(c, 0xe1c44u); goto L_e1c44;
L_e1d2d:
    X86_TICK(c, 22);
    // 0e1d2d  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1d2du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1d30  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1d30u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e1d33  add eax, 2
    X86_AT(c, 0xe1d33u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0e1d36  push eax
    X86_AT(c, 0xe1d36u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1d37  push edi
    X86_AT(c, 0xe1d37u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1d38  call 0xe7260
    X86_AT(c, 0xe1d38u);
    push32(c, 0xe1d3du); f_000e7260(c); X86_RET(c, 0xe1d3du);
    X86_TICK(c, 11);
    // 0e1d3d  mov byte ptr [ebp - 8], bl
    X86_AT(c, 0xe1d3du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), g8(c, 3));
    // 0e1d40  mov esi, 1
    X86_AT(c, 0xe1d40u);
    c.r[6] = 0x1u;
    // 0e1d45  jmp 0xe1c41
    X86_AT(c, 0xe1d45u);
    X86_POLL(c, 0xe1c41u); goto L_e1c41;
L_e1d4a:
    X86_TICK(c, 22);
    // 0e1d4a  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1d4au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1d4d  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1d4du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e1d50  add eax, 4
    X86_AT(c, 0xe1d50u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e1d53  push eax
    X86_AT(c, 0xe1d53u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1d54  push edi
    X86_AT(c, 0xe1d54u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1d55  call 0xe7260
    X86_AT(c, 0xe1d55u);
    push32(c, 0xe1d5au); f_000e7260(c); X86_RET(c, 0xe1d5au);
    X86_TICK(c, 11);
    // 0e1d5a  mov byte ptr [ebp - 7], bl
    X86_AT(c, 0xe1d5au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF9u)), g8(c, 3));
    // 0e1d5d  mov esi, 2
    X86_AT(c, 0xe1d5du);
    c.r[6] = 0x2u;
    // 0e1d62  jmp 0xe1c41
    X86_AT(c, 0xe1d62u);
    X86_POLL(c, 0xe1c41u); goto L_e1c41;
L_e1d67:
    X86_TICK(c, 22);
    // 0e1d67  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1d67u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1d6a  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1d6au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e1d6d  add eax, 6
    X86_AT(c, 0xe1d6du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x6u, 0, 4); }
    // 0e1d70  push eax
    X86_AT(c, 0xe1d70u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1d71  push edi
    X86_AT(c, 0xe1d71u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1d72  call 0xe7260
    X86_AT(c, 0xe1d72u);
    push32(c, 0xe1d77u); f_000e7260(c); X86_RET(c, 0xe1d77u);
    X86_TICK(c, 11);
    // 0e1d77  mov byte ptr [ebp - 6], bl
    X86_AT(c, 0xe1d77u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), g8(c, 3));
    // 0e1d7a  mov esi, 3
    X86_AT(c, 0xe1d7au);
    c.r[6] = 0x3u;
    // 0e1d7f  jmp 0xe1c41
    X86_AT(c, 0xe1d7fu);
    X86_POLL(c, 0xe1c41u); goto L_e1c41;
L_e1d84:
    X86_TICK(c, 22);
    // 0e1d84  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1d84u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1d87  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1d87u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e1d8a  add eax, 8
    X86_AT(c, 0xe1d8au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e1d8d  push eax
    X86_AT(c, 0xe1d8du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1d8e  push edi
    X86_AT(c, 0xe1d8eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1d8f  call 0xe7260
    X86_AT(c, 0xe1d8fu);
    push32(c, 0xe1d94u); f_000e7260(c); X86_RET(c, 0xe1d94u);
    X86_TICK(c, 11);
    // 0e1d94  mov byte ptr [ebp - 5], bl
    X86_AT(c, 0xe1d94u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 3));
    // 0e1d97  mov esi, 4
    X86_AT(c, 0xe1d97u);
    c.r[6] = 0x4u;
    // 0e1d9c  jmp 0xe1c41
    X86_AT(c, 0xe1d9cu);
    X86_POLL(c, 0xe1c41u); goto L_e1c41;
L_e1da1:
    X86_TICK(c, 11);
    // 0e1da1  push 0x12da
    X86_AT(c, 0xe1da1u);
    { uint32_t v = 0x12DAu; push32(c, v); }
    // 0e1da6  push edi
    X86_AT(c, 0xe1da6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1da7  call 0xe6cb0
    X86_AT(c, 0xe1da7u);
    push32(c, 0xe1dacu); f_000e6cb0(c); X86_RET(c, 0xe1dacu);
    X86_TICK(c, 11);
    // 0e1dac  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1dacu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1daf  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1dafu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e1db2  add eax, 8
    X86_AT(c, 0xe1db2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
L_e1db5:
    X86_TICK(c, 11);
    // 0e1db5  push eax
    X86_AT(c, 0xe1db5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1db6  push edi
    X86_AT(c, 0xe1db6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1db7  call 0xe7260
    X86_AT(c, 0xe1db7u);
    push32(c, 0xe1dbcu); f_000e7260(c); X86_RET(c, 0xe1dbcu);
    X86_TICK(c, 9);
    // 0e1dbc  add esp, 0x14
    X86_AT(c, 0xe1dbcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0e1dbf  jmp 0xe1c44
    X86_AT(c, 0xe1dbfu);
    X86_POLL(c, 0xe1c44u); goto L_e1c44;
L_e1dc4:
    X86_TICK(c, 11);
    // 0e1dc4  lea eax, [ebp - 8]
    X86_AT(c, 0xe1dc4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e1dc7  push eax
    X86_AT(c, 0xe1dc7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1dc8  call 0xe42d0
    X86_AT(c, 0xe1dc8u);
    push32(c, 0xe1dcdu); f_000e42d0(c); X86_RET(c, 0xe1dcdu);
    X86_TICK(c, 21);
    // 0e1dcd  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xe1dcdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0e1dd0  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe1dd0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e1dd3  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xe1dd3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0e1dd6  push edi
    X86_AT(c, 0xe1dd6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1dd7  call 0xe7260
    X86_AT(c, 0xe1dd7u);
    push32(c, 0xe1ddcu); f_000e7260(c); X86_RET(c, 0xe1ddcu);
    X86_TICK(c, 16);
    // 0e1ddc  push 4
    X86_AT(c, 0xe1ddcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e1dde  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xe1ddeu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0e1de1  push edi
    X86_AT(c, 0xe1de1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1de2  call 0xe5630
    X86_AT(c, 0xe1de2u);
    push32(c, 0xe1de7u); f_000e5630(c); X86_RET(c, 0xe1de7u);
    X86_TICK(c, 11);
    // 0e1de7  push 0x12de
    X86_AT(c, 0xe1de7u);
    { uint32_t v = 0x12DEu; push32(c, v); }
    // 0e1dec  push edi
    X86_AT(c, 0xe1decu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e1ded  call 0xe6cb0
    X86_AT(c, 0xe1dedu);
    push32(c, 0xe1df2u); f_000e6cb0(c); X86_RET(c, 0xe1df2u);
    X86_TICK(c, 6);
    // 0e1df2  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe1df2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e1df5  add esp, 0x24
    X86_AT(c, 0xe1df5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_e1df8:
    X86_TICK(c, 28);
    // 0e1df8  pop edi
    X86_AT(c, 0xe1df8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e1df9  pop esi
    X86_AT(c, 0xe1df9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e1dfa  pop ebx
    X86_AT(c, 0xe1dfau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e1dfb  leave 
    X86_AT(c, 0xe1dfbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e1dfc  ret 
    X86_AT(c, 0xe1dfcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1c44u, "ran off the end of a function");
}
void f_000e1e18(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e1e18  push ebp
    X86_AT(c, 0xe1e18u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e1e19  mov ebp, esp
    X86_AT(c, 0xe1e19u);
    c.r[5] = c.r[4];
    // 0e1e1b  push eax
    X86_AT(c, 0xe1e1bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1e1c  push ebx
    X86_AT(c, 0xe1e1cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e1e1d  sub eax, eax
    X86_AT(c, 0xe1e1du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e1e1f  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xe1e1fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0e1e22  cmp eax, dword ptr [0xcde44]
    X86_AT(c, 0xe1e22u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0, 4);
    // 0e1e28  je 0xe1f1d
    X86_AT(c, 0xe1e28u);
    if (x86_cc(c, 4)) { goto L_e1f1d; }
    X86_TICK(c, 13);
    // 0e1e2e  push 0xa
    X86_AT(c, 0xe1e2eu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e1e30  push eax
    X86_AT(c, 0xe1e30u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1e31  push 0xb
    X86_AT(c, 0xe1e31u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e1e33  call 0xe7260
    X86_AT(c, 0xe1e33u);
    push32(c, 0xe1e38u); f_000e7260(c); X86_RET(c, 0xe1e38u);
    X86_TICK(c, 11);
    // 0e1e38  push 0x12e4
    X86_AT(c, 0xe1e38u);
    { uint32_t v = 0x12E4u; push32(c, v); }
    // 0e1e3d  push 0xb
    X86_AT(c, 0xe1e3du);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e1e3f  call 0xe6cb0
    X86_AT(c, 0xe1e3fu);
    push32(c, 0xe1e44u); f_000e6cb0(c); X86_RET(c, 0xe1e44u);
    X86_TICK(c, 27);
    // 0e1e44  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe1e44u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e1e49  lea edx, [eax + eax*4]
    X86_AT(c, 0xe1e49u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e1e4c  lea edx, [eax + edx*2]
    X86_AT(c, 0xe1e4cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e1e4f  shl edx, 5
    X86_AT(c, 0xe1e4fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e1e52  sub edx, eax
    X86_AT(c, 0xe1e52u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e1e54  add esp, 0x14
    X86_AT(c, 0xe1e54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0e1e57  cmp dword ptr [edx + 0xcdf57], 4
    X86_AT(c, 0xe1e57u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x4u, 0, 4);
    // 0e1e5e  jge 0xe1e6a
    X86_AT(c, 0xe1e5eu);
    if (x86_cc(c, 13)) { goto L_e1e6a; }
    X86_TICK(c, 14);
    // 0e1e60  push 2
    X86_AT(c, 0xe1e60u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e1e62  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xe1e62u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0e1e68  jmp 0xe1e82
    X86_AT(c, 0xe1e68u);
    goto L_e1e82;
L_e1e6a:
    X86_TICK(c, 20);
    // 0e1e6a  push 2
    X86_AT(c, 0xe1e6au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e1e6c  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe1e6cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e1e71  lea edx, [eax + eax*4]
    X86_AT(c, 0xe1e71u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e1e74  lea edx, [eax + edx*2]
    X86_AT(c, 0xe1e74u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e1e77  shl edx, 5
    X86_AT(c, 0xe1e77u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e1e7a  sub edx, eax
    X86_AT(c, 0xe1e7au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e1e7c  push dword ptr [edx + 0xcdf63]
    X86_AT(c, 0xe1e7cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF63u))); push32(c, v); }
L_e1e82:
    X86_TICK(c, 9);
    // 0e1e82  push 0xb
    X86_AT(c, 0xe1e82u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e1e84  call 0xe5630
    X86_AT(c, 0xe1e84u);
    push32(c, 0xe1e89u); f_000e5630(c); X86_RET(c, 0xe1e89u);
    X86_TICK(c, 13);
    // 0e1e89  add esp, 0xc
    X86_AT(c, 0xe1e89u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e1e8c  push 0x12ec
    X86_AT(c, 0xe1e8cu);
    { uint32_t v = 0x12ECu; push32(c, v); }
    // 0e1e91  push 0xb
    X86_AT(c, 0xe1e91u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e1e93  call 0xe6cb0
    X86_AT(c, 0xe1e93u);
    push32(c, 0xe1e98u); f_000e6cb0(c); X86_RET(c, 0xe1e98u);
    X86_TICK(c, 27);
    // 0e1e98  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe1e98u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e1e9d  lea edx, [eax + eax*4]
    X86_AT(c, 0xe1e9du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e1ea0  lea edx, [eax + edx*2]
    X86_AT(c, 0xe1ea0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e1ea3  shl edx, 5
    X86_AT(c, 0xe1ea3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e1ea6  sub edx, eax
    X86_AT(c, 0xe1ea6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e1ea8  add esp, 8
    X86_AT(c, 0xe1ea8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e1eab  cmp dword ptr [edx + 0xcdf57], 4
    X86_AT(c, 0xe1eabu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x4u, 0, 4);
    // 0e1eb2  jge 0xe1ebe
    X86_AT(c, 0xe1eb2u);
    if (x86_cc(c, 13)) { goto L_e1ebe; }
    X86_TICK(c, 14);
    // 0e1eb4  push 2
    X86_AT(c, 0xe1eb4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e1eb6  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xe1eb6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0e1ebc  jmp 0xe1ed6
    X86_AT(c, 0xe1ebcu);
    goto L_e1ed6;
L_e1ebe:
    X86_TICK(c, 20);
    // 0e1ebe  push 2
    X86_AT(c, 0xe1ebeu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e1ec0  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe1ec0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e1ec5  lea edx, [eax + eax*4]
    X86_AT(c, 0xe1ec5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e1ec8  lea edx, [eax + edx*2]
    X86_AT(c, 0xe1ec8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e1ecb  shl edx, 5
    X86_AT(c, 0xe1ecbu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e1ece  sub edx, eax
    X86_AT(c, 0xe1eceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e1ed0  push dword ptr [edx + 0xcdf67]
    X86_AT(c, 0xe1ed0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF67u))); push32(c, v); }
L_e1ed6:
    X86_TICK(c, 9);
    // 0e1ed6  push 0xb
    X86_AT(c, 0xe1ed6u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e1ed8  call 0xe5630
    X86_AT(c, 0xe1ed8u);
    push32(c, 0xe1eddu); f_000e5630(c); X86_RET(c, 0xe1eddu);
    X86_TICK(c, 13);
    // 0e1edd  add esp, 0xc
    X86_AT(c, 0xe1eddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e1ee0  push 0x12f4
    X86_AT(c, 0xe1ee0u);
    { uint32_t v = 0x12F4u; push32(c, v); }
    // 0e1ee5  push 0xb
    X86_AT(c, 0xe1ee5u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e1ee7  call 0xe6cb0
    X86_AT(c, 0xe1ee7u);
    push32(c, 0xe1eecu); f_000e6cb0(c); X86_RET(c, 0xe1eecu);
    X86_TICK(c, 32);
    // 0e1eec  push 2
    X86_AT(c, 0xe1eecu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e1eee  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe1eeeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e1ef3  lea edx, [eax + eax*4]
    X86_AT(c, 0xe1ef3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e1ef6  lea edx, [eax + edx*2]
    X86_AT(c, 0xe1ef6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e1ef9  shl edx, 5
    X86_AT(c, 0xe1ef9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e1efc  sub edx, eax
    X86_AT(c, 0xe1efcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e1efe  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xe1efeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0e1f04  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xe1f04u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0e1f0a  call 0xef8f4
    X86_AT(c, 0xe1f0au);
    push32(c, 0xe1f0fu); f_000ef8f4(c); X86_RET(c, 0xe1f0fu);
    X86_TICK(c, 13);
    // 0e1f0f  add esp, 8
    X86_AT(c, 0xe1f0fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e1f12  push eax
    X86_AT(c, 0xe1f12u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e1f13  push 0xb
    X86_AT(c, 0xe1f13u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e1f15  call 0xe5630
    X86_AT(c, 0xe1f15u);
    push32(c, 0xe1f1au); f_000e5630(c); X86_RET(c, 0xe1f1au);
    X86_TICK(c, 2);
    // 0e1f1a  add esp, 0x14
    X86_AT(c, 0xe1f1au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_e1f1d:
    X86_TICK(c, 12);
    // 0e1f1d  cmp word ptr [0x7a5d4], 1
    X86_AT(c, 0xe1f1du);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x7A5D4u))), 0x1u, 0, 2);
    // 0e1f25  jne 0xe20f1
    X86_AT(c, 0xe1f25u);
    if (x86_cc(c, 5)) { goto L_e20f1; }
    X86_TICK(c, 9);
    // 0e1f2b  push 0xb
    X86_AT(c, 0xe1f2bu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e1f2d  call 0xe693c
    X86_AT(c, 0xe1f2du);
    push32(c, 0xe1f32u); f_000e693c(c); X86_RET(c, 0xe1f32u);
    X86_TICK(c, 13);
    // 0e1f32  push 1
    X86_AT(c, 0xe1f32u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1f34  push 0
    X86_AT(c, 0xe1f34u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e1f36  push 0xb
    X86_AT(c, 0xe1f36u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e1f38  call 0xe7260
    X86_AT(c, 0xe1f38u);
    push32(c, 0xe1f3du); f_000e7260(c); X86_RET(c, 0xe1f3du);
    X86_TICK(c, 13);
    // 0e1f3d  push 1
    X86_AT(c, 0xe1f3du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e1f3f  push 0x14
    X86_AT(c, 0xe1f3fu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0e1f41  push 0xb
    X86_AT(c, 0xe1f41u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e1f43  call 0xe7260
    X86_AT(c, 0xe1f43u);
    push32(c, 0xe1f48u); f_000e7260(c); X86_RET(c, 0xe1f48u);
    X86_TICK(c, 29);
    // 0e1f48  push 2
    X86_AT(c, 0xe1f48u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e1f4a  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe1f4au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e1f4f  lea edx, [eax + eax*4]
    X86_AT(c, 0xe1f4fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e1f52  lea edx, [eax + edx*2]
    X86_AT(c, 0xe1f52u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e1f55  shl edx, 5
    X86_AT(c, 0xe1f55u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e1f58  sub edx, eax
    X86_AT(c, 0xe1f58u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e1f5a  push dword ptr [edx + 0xcde62]
    X86_AT(c, 0xe1f5au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE62u))); push32(c, v); }
    // 0e1f60  push 0xb
    X86_AT(c, 0xe1f60u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e1f62  call 0xe5630
    X86_AT(c, 0xe1f62u);
    push32(c, 0xe1f67u); f_000e5630(c); X86_RET(c, 0xe1f67u);
    X86_TICK(c, 13);
    // 0e1f67  push 2
    X86_AT(c, 0xe1f67u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e1f69  push 0x14
    X86_AT(c, 0xe1f69u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0e1f6b  push 0xb
    X86_AT(c, 0xe1f6bu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e1f6d  call 0xe7260
    X86_AT(c, 0xe1f6du);
    push32(c, 0xe1f72u); f_000e7260(c); X86_RET(c, 0xe1f72u);
    X86_TICK(c, 29);
    // 0e1f72  push 2
    X86_AT(c, 0xe1f72u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e1f74  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe1f74u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e1f79  lea edx, [eax + eax*4]
    X86_AT(c, 0xe1f79u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e1f7c  lea edx, [eax + edx*2]
    X86_AT(c, 0xe1f7cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e1f7f  shl edx, 5
    X86_AT(c, 0xe1f7fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e1f82  sub edx, eax
    X86_AT(c, 0xe1f82u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e1f84  push dword ptr [edx + 0xcde66]
    X86_AT(c, 0xe1f84u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE66u))); push32(c, v); }
    // 0e1f8a  push 0xb
    X86_AT(c, 0xe1f8au);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e1f8c  call 0xe5630
    X86_AT(c, 0xe1f8cu);
    push32(c, 0xe1f91u); f_000e5630(c); X86_RET(c, 0xe1f91u);
    X86_TICK(c, 15);
    // 0e1f91  add esp, 0x40
    X86_AT(c, 0xe1f91u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e1f94  push 3
    X86_AT(c, 0xe1f94u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e1f96  push 0x14
    X86_AT(c, 0xe1f96u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0e1f98  push 0xb
    X86_AT(c, 0xe1f98u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e1f9a  call 0xe7260
    X86_AT(c, 0xe1f9au);
    push32(c, 0xe1f9fu); f_000e7260(c); X86_RET(c, 0xe1f9fu);
    X86_TICK(c, 29);
    // 0e1f9f  push 2
    X86_AT(c, 0xe1f9fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e1fa1  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe1fa1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e1fa6  lea edx, [eax + eax*4]
    X86_AT(c, 0xe1fa6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e1fa9  lea edx, [eax + edx*2]
    X86_AT(c, 0xe1fa9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e1fac  shl edx, 5
    X86_AT(c, 0xe1facu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e1faf  sub edx, eax
    X86_AT(c, 0xe1fafu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e1fb1  push dword ptr [edx + 0xcde76]
    X86_AT(c, 0xe1fb1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE76u))); push32(c, v); }
    // 0e1fb7  push 0xb
    X86_AT(c, 0xe1fb7u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e1fb9  call 0xe5630
    X86_AT(c, 0xe1fb9u);
    push32(c, 0xe1fbeu); f_000e5630(c); X86_RET(c, 0xe1fbeu);
    X86_TICK(c, 13);
    // 0e1fbe  push 4
    X86_AT(c, 0xe1fbeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e1fc0  push 0x14
    X86_AT(c, 0xe1fc0u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0e1fc2  push 0xb
    X86_AT(c, 0xe1fc2u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e1fc4  call 0xe7260
    X86_AT(c, 0xe1fc4u);
    push32(c, 0xe1fc9u); f_000e7260(c); X86_RET(c, 0xe1fc9u);
    X86_TICK(c, 29);
    // 0e1fc9  push 2
    X86_AT(c, 0xe1fc9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e1fcb  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe1fcbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e1fd0  lea edx, [eax + eax*4]
    X86_AT(c, 0xe1fd0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e1fd3  lea edx, [eax + edx*2]
    X86_AT(c, 0xe1fd3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e1fd6  shl edx, 5
    X86_AT(c, 0xe1fd6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e1fd9  sub edx, eax
    X86_AT(c, 0xe1fd9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e1fdb  push dword ptr [edx + 0xcde72]
    X86_AT(c, 0xe1fdbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE72u))); push32(c, v); }
    // 0e1fe1  push 0xb
    X86_AT(c, 0xe1fe1u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e1fe3  call 0xe5630
    X86_AT(c, 0xe1fe3u);
    push32(c, 0xe1fe8u); f_000e5630(c); X86_RET(c, 0xe1fe8u);
    X86_TICK(c, 13);
    // 0e1fe8  push 5
    X86_AT(c, 0xe1fe8u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e1fea  push 0x14
    X86_AT(c, 0xe1feau);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0e1fec  push 0xb
    X86_AT(c, 0xe1fecu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e1fee  call 0xe7260
    X86_AT(c, 0xe1feeu);
    push32(c, 0xe1ff3u); f_000e7260(c); X86_RET(c, 0xe1ff3u);
    X86_TICK(c, 31);
    // 0e1ff3  add esp, 0x3c
    X86_AT(c, 0xe1ff3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e1ff6  push 2
    X86_AT(c, 0xe1ff6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e1ff8  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe1ff8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e1ffd  lea edx, [eax + eax*4]
    X86_AT(c, 0xe1ffdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e2000  lea edx, [eax + edx*2]
    X86_AT(c, 0xe2000u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e2003  shl edx, 5
    X86_AT(c, 0xe2003u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e2006  sub edx, eax
    X86_AT(c, 0xe2006u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e2008  push dword ptr [edx + 0xcde6e]
    X86_AT(c, 0xe2008u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Eu))); push32(c, v); }
    // 0e200e  push 0xb
    X86_AT(c, 0xe200eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2010  call 0xe5630
    X86_AT(c, 0xe2010u);
    push32(c, 0xe2015u); f_000e5630(c); X86_RET(c, 0xe2015u);
    X86_TICK(c, 13);
    // 0e2015  push 6
    X86_AT(c, 0xe2015u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0e2017  push 0x14
    X86_AT(c, 0xe2017u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0e2019  push 0xb
    X86_AT(c, 0xe2019u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e201b  call 0xe7260
    X86_AT(c, 0xe201bu);
    push32(c, 0xe2020u); f_000e7260(c); X86_RET(c, 0xe2020u);
    X86_TICK(c, 29);
    // 0e2020  push 2
    X86_AT(c, 0xe2020u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e2022  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe2022u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e2027  lea edx, [eax + eax*4]
    X86_AT(c, 0xe2027u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e202a  lea edx, [eax + edx*2]
    X86_AT(c, 0xe202au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e202d  shl edx, 5
    X86_AT(c, 0xe202du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e2030  sub edx, eax
    X86_AT(c, 0xe2030u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e2032  push dword ptr [edx + 0xcde6a]
    X86_AT(c, 0xe2032u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Au))); push32(c, v); }
    // 0e2038  push 0xb
    X86_AT(c, 0xe2038u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e203a  call 0xe5630
    X86_AT(c, 0xe203au);
    push32(c, 0xe203fu); f_000e5630(c); X86_RET(c, 0xe203fu);
    X86_TICK(c, 13);
    // 0e203f  push 7
    X86_AT(c, 0xe203fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e2041  push 8
    X86_AT(c, 0xe2041u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e2043  push 0xb
    X86_AT(c, 0xe2043u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2045  call 0xe7260
    X86_AT(c, 0xe2045u);
    push32(c, 0xe204au); f_000e7260(c); X86_RET(c, 0xe204au);
    X86_TICK(c, 11);
    // 0e204a  push 0x12f8
    X86_AT(c, 0xe204au);
    { uint32_t v = 0x12F8u; push32(c, v); }
    // 0e204f  push 0xb
    X86_AT(c, 0xe204fu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2051  call 0xe6cb0
    X86_AT(c, 0xe2051u);
    push32(c, 0xe2056u); f_000e6cb0(c); X86_RET(c, 0xe2056u);
    X86_TICK(c, 13);
    // 0e2056  push 7
    X86_AT(c, 0xe2056u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e2058  push 8
    X86_AT(c, 0xe2058u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e205a  push 0xb
    X86_AT(c, 0xe205au);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e205c  call 0xe7260
    X86_AT(c, 0xe205cu);
    push32(c, 0xe2061u); f_000e7260(c); X86_RET(c, 0xe2061u);
    X86_TICK(c, 36);
    // 0e2061  add esp, 0x44
    X86_AT(c, 0xe2061u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0e2064  lea ebx, [ebp - 1]
    X86_AT(c, 0xe2064u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0e2067  push ebx
    X86_AT(c, 0xe2067u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e2068  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe2068u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e206d  lea edx, [eax + eax*4]
    X86_AT(c, 0xe206du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e2070  lea edx, [eax + edx*2]
    X86_AT(c, 0xe2070u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e2073  shl edx, 5
    X86_AT(c, 0xe2073u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e2076  sub edx, eax
    X86_AT(c, 0xe2076u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e2078  mov al, byte ptr [edx + 0xcdebe]
    X86_AT(c, 0xe2078u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBEu))));
    // 0e207e  push eax
    X86_AT(c, 0xe207eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e207f  push 0xa
    X86_AT(c, 0xe207fu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e2081  push 0xcfbe8
    X86_AT(c, 0xe2081u);
    { uint32_t v = 0xCFBE8u; push32(c, v); }
    // 0e2086  call 0xe53e0
    X86_AT(c, 0xe2086u);
    push32(c, 0xe208bu); f_000e53e0(c); X86_RET(c, 0xe208bu);
    X86_TICK(c, 11);
    // 0e208b  push eax
    X86_AT(c, 0xe208bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e208c  push 0xb
    X86_AT(c, 0xe208cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e208e  call 0xe6cb0
    X86_AT(c, 0xe208eu);
    push32(c, 0xe2093u); f_000e6cb0(c); X86_RET(c, 0xe2093u);
    X86_TICK(c, 13);
    // 0e2093  push 8
    X86_AT(c, 0xe2093u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e2095  push 8
    X86_AT(c, 0xe2095u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e2097  push 0xb
    X86_AT(c, 0xe2097u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2099  call 0xe7260
    X86_AT(c, 0xe2099u);
    push32(c, 0xe209eu); f_000e7260(c); X86_RET(c, 0xe209eu);
    X86_TICK(c, 11);
    // 0e209e  push 0x1310
    X86_AT(c, 0xe209eu);
    { uint32_t v = 0x1310u; push32(c, v); }
    // 0e20a3  push 0xb
    X86_AT(c, 0xe20a3u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e20a5  call 0xe6cb0
    X86_AT(c, 0xe20a5u);
    push32(c, 0xe20aau); f_000e6cb0(c); X86_RET(c, 0xe20aau);
    X86_TICK(c, 13);
    // 0e20aa  push 8
    X86_AT(c, 0xe20aau);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e20ac  push 8
    X86_AT(c, 0xe20acu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0e20ae  push 0xb
    X86_AT(c, 0xe20aeu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e20b0  call 0xe7260
    X86_AT(c, 0xe20b0u);
    push32(c, 0xe20b5u); f_000e7260(c); X86_RET(c, 0xe20b5u);
    X86_TICK(c, 32);
    // 0e20b5  push ebx
    X86_AT(c, 0xe20b5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e20b6  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xe20b6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0e20bb  lea edx, [eax + eax*4]
    X86_AT(c, 0xe20bbu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e20be  lea edx, [eax + edx*2]
    X86_AT(c, 0xe20beu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e20c1  shl edx, 5
    X86_AT(c, 0xe20c1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e20c4  sub edx, eax
    X86_AT(c, 0xe20c4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e20c6  mov al, byte ptr [edx + 0xcdea1]
    X86_AT(c, 0xe20c6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEA1u))));
    // 0e20cc  push eax
    X86_AT(c, 0xe20ccu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e20cd  push 7
    X86_AT(c, 0xe20cdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0e20cf  push 0xcf84c
    X86_AT(c, 0xe20cfu);
    { uint32_t v = 0xCF84Cu; push32(c, v); }
    // 0e20d4  call 0xe53e0
    X86_AT(c, 0xe20d4u);
    push32(c, 0xe20d9u); f_000e53e0(c); X86_RET(c, 0xe20d9u);
    X86_TICK(c, 13);
    // 0e20d9  add esp, 0x48
    X86_AT(c, 0xe20d9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 0e20dc  push eax
    X86_AT(c, 0xe20dcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e20dd  push 0xb
    X86_AT(c, 0xe20ddu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e20df  call 0xe6cb0
    X86_AT(c, 0xe20dfu);
    push32(c, 0xe20e4u); f_000e6cb0(c); X86_RET(c, 0xe20e4u);
    X86_TICK(c, 11);
    // 0e20e4  add esp, 8
    X86_AT(c, 0xe20e4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e20e7  push 0xb
    X86_AT(c, 0xe20e7u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e20e9  call 0xe6c68
    X86_AT(c, 0xe20e9u);
    push32(c, 0xe20eeu); f_000e6c68(c); X86_RET(c, 0xe20eeu);
    X86_TICK(c, 2);
    // 0e20ee  add esp, 4
    X86_AT(c, 0xe20eeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e20f1:
    X86_TICK(c, 20);
    // 0e20f1  pop ebx
    X86_AT(c, 0xe20f1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e20f2  leave 
    X86_AT(c, 0xe20f2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e20f3  ret 
    X86_AT(c, 0xe20f3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1e18u, "ran off the end of a function");
}
void f_000e20f4(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0e20f4  push ebp
    X86_AT(c, 0xe20f4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e20f5  mov ebp, esp
    X86_AT(c, 0xe20f5u);
    c.r[5] = c.r[4];
    // 0e20f7  push eax
    X86_AT(c, 0xe20f7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e20f8  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xe20f8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0e20fc  cmp dword ptr [0xcde38], 1
    X86_AT(c, 0xe20fcu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE38u))), 0x1u, 0, 4);
    // 0e2103  jne 0xe23ca
    X86_AT(c, 0xe2103u);
    if (x86_cc(c, 5)) { goto L_e23ca; }
    X86_TICK(c, 9);
    // 0e2109  push 0xb
    X86_AT(c, 0xe2109u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e210b  call 0xe693c
    X86_AT(c, 0xe210bu);
    push32(c, 0xe2110u); f_000e693c(c); X86_RET(c, 0xe2110u);
    X86_TICK(c, 15);
    // 0e2110  add esp, 4
    X86_AT(c, 0xe2110u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e2113  movsx edx, word ptr [0x7a5d4]
    X86_AT(c, 0xe2113u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x7A5D4u)));
    // 0e211a  and edx, edx
    X86_AT(c, 0xe211au);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0e211c  je 0xe2135
    X86_AT(c, 0xe211cu);
    if (x86_cc(c, 4)) { goto L_e2135; }
    X86_TICK(c, 7);
    // 0e211e  cmp edx, 1
    X86_AT(c, 0xe211eu);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0e2121  je 0xe21f8
    X86_AT(c, 0xe2121u);
    if (x86_cc(c, 4)) { goto L_e21f8; }
    X86_TICK(c, 7);
    // 0e2127  cmp edx, 2
    X86_AT(c, 0xe2127u);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0e212a  je 0xe22e7
    X86_AT(c, 0xe212au);
    if (x86_cc(c, 4)) { goto L_e22e7; }
    X86_TICK(c, 7);
    // 0e2130  jmp 0xe23ca
    X86_AT(c, 0xe2130u);
    goto L_e23ca;
L_e2135:
    X86_TICK(c, 9);
    // 0e2135  push 0xb
    X86_AT(c, 0xe2135u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2137  call 0xe693c
    X86_AT(c, 0xe2137u);
    push32(c, 0xe213cu); f_000e693c(c); X86_RET(c, 0xe213cu);
    X86_TICK(c, 9);
    // 0e213c  push 0xb
    X86_AT(c, 0xe213cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e213e  call 0xe6af0
    X86_AT(c, 0xe213eu);
    push32(c, 0xe2143u); f_000e6af0(c); X86_RET(c, 0xe2143u);
    X86_TICK(c, 13);
    // 0e2143  push 1
    X86_AT(c, 0xe2143u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2145  push 0
    X86_AT(c, 0xe2145u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2147  push 0xb
    X86_AT(c, 0xe2147u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2149  call 0xe7260
    X86_AT(c, 0xe2149u);
    push32(c, 0xe214eu); f_000e7260(c); X86_RET(c, 0xe214eu);
    X86_TICK(c, 11);
    // 0e214e  push 0x1328
    X86_AT(c, 0xe214eu);
    { uint32_t v = 0x1328u; push32(c, v); }
    // 0e2153  push 0xb
    X86_AT(c, 0xe2153u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2155  call 0xe5654
    X86_AT(c, 0xe2155u);
    push32(c, 0xe215au); f_000e5654(c); X86_RET(c, 0xe215au);
    X86_TICK(c, 9);
    // 0e215a  push 0xb
    X86_AT(c, 0xe215au);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e215c  call 0xe6c68
    X86_AT(c, 0xe215cu);
    push32(c, 0xe2161u); f_000e6c68(c); X86_RET(c, 0xe2161u);
    X86_TICK(c, 11);
    // 0e2161  push 0x1350
    X86_AT(c, 0xe2161u);
    { uint32_t v = 0x1350u; push32(c, v); }
    // 0e2166  push 0xb
    X86_AT(c, 0xe2166u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2168  call 0xe5654
    X86_AT(c, 0xe2168u);
    push32(c, 0xe216du); f_000e5654(c); X86_RET(c, 0xe216du);
    X86_TICK(c, 9);
    // 0e216d  push 0xb
    X86_AT(c, 0xe216du);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e216f  call 0xe6c68
    X86_AT(c, 0xe216fu);
    push32(c, 0xe2174u); f_000e6c68(c); X86_RET(c, 0xe2174u);
    X86_TICK(c, 11);
    // 0e2174  push 0x1378
    X86_AT(c, 0xe2174u);
    { uint32_t v = 0x1378u; push32(c, v); }
    // 0e2179  push 0xb
    X86_AT(c, 0xe2179u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e217b  call 0xe5654
    X86_AT(c, 0xe217bu);
    push32(c, 0xe2180u); f_000e5654(c); X86_RET(c, 0xe2180u);
    X86_TICK(c, 9);
    // 0e2180  push 0xb
    X86_AT(c, 0xe2180u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2182  call 0xe6c68
    X86_AT(c, 0xe2182u);
    push32(c, 0xe2187u); f_000e6c68(c); X86_RET(c, 0xe2187u);
    X86_TICK(c, 11);
    // 0e2187  push 0x13a0
    X86_AT(c, 0xe2187u);
    { uint32_t v = 0x13A0u; push32(c, v); }
    // 0e218c  push 0xb
    X86_AT(c, 0xe218cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e218e  call 0xe5654
    X86_AT(c, 0xe218eu);
    push32(c, 0xe2193u); f_000e5654(c); X86_RET(c, 0xe2193u);
    X86_TICK(c, 11);
    // 0e2193  add esp, 0x40
    X86_AT(c, 0xe2193u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e2196  push 0xb
    X86_AT(c, 0xe2196u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2198  call 0xe6c68
    X86_AT(c, 0xe2198u);
    push32(c, 0xe219du); f_000e6c68(c); X86_RET(c, 0xe219du);
    X86_TICK(c, 11);
    // 0e219d  push 0x13c8
    X86_AT(c, 0xe219du);
    { uint32_t v = 0x13C8u; push32(c, v); }
    // 0e21a2  push 0xb
    X86_AT(c, 0xe21a2u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e21a4  call 0xe5654
    X86_AT(c, 0xe21a4u);
    push32(c, 0xe21a9u); f_000e5654(c); X86_RET(c, 0xe21a9u);
    X86_TICK(c, 9);
    // 0e21a9  push 0xb
    X86_AT(c, 0xe21a9u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e21ab  call 0xe6c68
    X86_AT(c, 0xe21abu);
    push32(c, 0xe21b0u); f_000e6c68(c); X86_RET(c, 0xe21b0u);
    X86_TICK(c, 11);
    // 0e21b0  push 0x13f0
    X86_AT(c, 0xe21b0u);
    { uint32_t v = 0x13F0u; push32(c, v); }
    // 0e21b5  push 0xb
    X86_AT(c, 0xe21b5u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e21b7  call 0xe5654
    X86_AT(c, 0xe21b7u);
    push32(c, 0xe21bcu); f_000e5654(c); X86_RET(c, 0xe21bcu);
    X86_TICK(c, 9);
    // 0e21bc  push 0xb
    X86_AT(c, 0xe21bcu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e21be  call 0xe6c68
    X86_AT(c, 0xe21beu);
    push32(c, 0xe21c3u); f_000e6c68(c); X86_RET(c, 0xe21c3u);
    X86_TICK(c, 11);
    // 0e21c3  push 0x1418
    X86_AT(c, 0xe21c3u);
    { uint32_t v = 0x1418u; push32(c, v); }
    // 0e21c8  push 0xb
    X86_AT(c, 0xe21c8u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e21ca  call 0xe5654
    X86_AT(c, 0xe21cau);
    push32(c, 0xe21cfu); f_000e5654(c); X86_RET(c, 0xe21cfu);
    X86_TICK(c, 9);
    // 0e21cf  push 0xb
    X86_AT(c, 0xe21cfu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e21d1  call 0xe6c68
    X86_AT(c, 0xe21d1u);
    push32(c, 0xe21d6u); f_000e6c68(c); X86_RET(c, 0xe21d6u);
    X86_TICK(c, 11);
    // 0e21d6  push 0x142c
    X86_AT(c, 0xe21d6u);
    { uint32_t v = 0x142Cu; push32(c, v); }
    // 0e21db  push 0xb
    X86_AT(c, 0xe21dbu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e21dd  call 0xe5654
    X86_AT(c, 0xe21ddu);
    push32(c, 0xe21e2u); f_000e5654(c); X86_RET(c, 0xe21e2u);
    X86_TICK(c, 9);
    // 0e21e2  mov word ptr [0x7a5d4], 1
    X86_AT(c, 0xe21e2u);
    wr16((c.sbase[3] + (uint32_t)(0x7A5D4u)), 0x1u);
    // 0e21eb  call 0xe1e18
    X86_AT(c, 0xe21ebu);
    push32(c, 0xe21f0u); f_000e1e18(c); X86_RET(c, 0xe21f0u);
    X86_TICK(c, 9);
    // 0e21f0  add esp, 0x30
    X86_AT(c, 0xe21f0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0e21f3  jmp 0xe23ca
    X86_AT(c, 0xe21f3u);
    goto L_e23ca;
L_e21f8:
    X86_TICK(c, 9);
    // 0e21f8  push 0xb
    X86_AT(c, 0xe21f8u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e21fa  call 0xe6af0
    X86_AT(c, 0xe21fau);
    push32(c, 0xe21ffu); f_000e6af0(c); X86_RET(c, 0xe21ffu);
    X86_TICK(c, 13);
    // 0e21ff  push 0
    X86_AT(c, 0xe21ffu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2201  push 2
    X86_AT(c, 0xe2201u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e2203  push 0xb
    X86_AT(c, 0xe2203u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2205  call 0xe7260
    X86_AT(c, 0xe2205u);
    push32(c, 0xe220au); f_000e7260(c); X86_RET(c, 0xe220au);
    X86_TICK(c, 11);
    // 0e220a  push 0x1440
    X86_AT(c, 0xe220au);
    { uint32_t v = 0x1440u; push32(c, v); }
    // 0e220f  push 0xb
    X86_AT(c, 0xe220fu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2211  call 0xe5654
    X86_AT(c, 0xe2211u);
    push32(c, 0xe2216u); f_000e5654(c); X86_RET(c, 0xe2216u);
    X86_TICK(c, 9);
    // 0e2216  push 0xb
    X86_AT(c, 0xe2216u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2218  call 0xe6c68
    X86_AT(c, 0xe2218u);
    push32(c, 0xe221du); f_000e6c68(c); X86_RET(c, 0xe221du);
    X86_TICK(c, 11);
    // 0e221d  push 0x1470
    X86_AT(c, 0xe221du);
    { uint32_t v = 0x1470u; push32(c, v); }
    // 0e2222  push 0xb
    X86_AT(c, 0xe2222u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2224  call 0xe5654
    X86_AT(c, 0xe2224u);
    push32(c, 0xe2229u); f_000e5654(c); X86_RET(c, 0xe2229u);
    X86_TICK(c, 9);
    // 0e2229  push 0xb
    X86_AT(c, 0xe2229u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e222b  call 0xe6c68
    X86_AT(c, 0xe222bu);
    push32(c, 0xe2230u); f_000e6c68(c); X86_RET(c, 0xe2230u);
    X86_TICK(c, 11);
    // 0e2230  push 0x14a8
    X86_AT(c, 0xe2230u);
    { uint32_t v = 0x14A8u; push32(c, v); }
    // 0e2235  push 0xb
    X86_AT(c, 0xe2235u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2237  call 0xe5654
    X86_AT(c, 0xe2237u);
    push32(c, 0xe223cu); f_000e5654(c); X86_RET(c, 0xe223cu);
    X86_TICK(c, 9);
    // 0e223c  push 0xb
    X86_AT(c, 0xe223cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e223e  call 0xe6c68
    X86_AT(c, 0xe223eu);
    push32(c, 0xe2243u); f_000e6c68(c); X86_RET(c, 0xe2243u);
    X86_TICK(c, 11);
    // 0e2243  push 0x14e0
    X86_AT(c, 0xe2243u);
    { uint32_t v = 0x14E0u; push32(c, v); }
    // 0e2248  push 0xb
    X86_AT(c, 0xe2248u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e224a  call 0xe5654
    X86_AT(c, 0xe224au);
    push32(c, 0xe224fu); f_000e5654(c); X86_RET(c, 0xe224fu);
    X86_TICK(c, 11);
    // 0e224f  add esp, 0x3c
    X86_AT(c, 0xe224fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e2252  push 0xb
    X86_AT(c, 0xe2252u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2254  call 0xe6c68
    X86_AT(c, 0xe2254u);
    push32(c, 0xe2259u); f_000e6c68(c); X86_RET(c, 0xe2259u);
    X86_TICK(c, 11);
    // 0e2259  push 0x1518
    X86_AT(c, 0xe2259u);
    { uint32_t v = 0x1518u; push32(c, v); }
    // 0e225e  push 0xb
    X86_AT(c, 0xe225eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2260  call 0xe5654
    X86_AT(c, 0xe2260u);
    push32(c, 0xe2265u); f_000e5654(c); X86_RET(c, 0xe2265u);
    X86_TICK(c, 9);
    // 0e2265  push 0xb
    X86_AT(c, 0xe2265u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2267  call 0xe6c68
    X86_AT(c, 0xe2267u);
    push32(c, 0xe226cu); f_000e6c68(c); X86_RET(c, 0xe226cu);
    X86_TICK(c, 11);
    // 0e226c  push 0x1550
    X86_AT(c, 0xe226cu);
    { uint32_t v = 0x1550u; push32(c, v); }
    // 0e2271  push 0xb
    X86_AT(c, 0xe2271u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2273  call 0xe5654
    X86_AT(c, 0xe2273u);
    push32(c, 0xe2278u); f_000e5654(c); X86_RET(c, 0xe2278u);
    X86_TICK(c, 9);
    // 0e2278  push 0xb
    X86_AT(c, 0xe2278u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e227a  call 0xe6c68
    X86_AT(c, 0xe227au);
    push32(c, 0xe227fu); f_000e6c68(c); X86_RET(c, 0xe227fu);
    X86_TICK(c, 11);
    // 0e227f  push 0x1588
    X86_AT(c, 0xe227fu);
    { uint32_t v = 0x1588u; push32(c, v); }
    // 0e2284  push 0xb
    X86_AT(c, 0xe2284u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2286  call 0xe5654
    X86_AT(c, 0xe2286u);
    push32(c, 0xe228bu); f_000e5654(c); X86_RET(c, 0xe228bu);
    X86_TICK(c, 9);
    // 0e228b  push 0xb
    X86_AT(c, 0xe228bu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e228d  call 0xe6c68
    X86_AT(c, 0xe228du);
    push32(c, 0xe2292u); f_000e6c68(c); X86_RET(c, 0xe2292u);
    X86_TICK(c, 11);
    // 0e2292  push 0x15c0
    X86_AT(c, 0xe2292u);
    { uint32_t v = 0x15C0u; push32(c, v); }
    // 0e2297  push 0xb
    X86_AT(c, 0xe2297u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2299  call 0xe5654
    X86_AT(c, 0xe2299u);
    push32(c, 0xe229eu); f_000e5654(c); X86_RET(c, 0xe229eu);
    X86_TICK(c, 9);
    // 0e229e  push 0xb
    X86_AT(c, 0xe229eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e22a0  call 0xe6c68
    X86_AT(c, 0xe22a0u);
    push32(c, 0xe22a5u); f_000e6c68(c); X86_RET(c, 0xe22a5u);
    X86_TICK(c, 11);
    // 0e22a5  push 0x15f8
    X86_AT(c, 0xe22a5u);
    { uint32_t v = 0x15F8u; push32(c, v); }
    // 0e22aa  push 0xb
    X86_AT(c, 0xe22aau);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e22ac  call 0xe5654
    X86_AT(c, 0xe22acu);
    push32(c, 0xe22b1u); f_000e5654(c); X86_RET(c, 0xe22b1u);
    X86_TICK(c, 11);
    // 0e22b1  add esp, 0x3c
    X86_AT(c, 0xe22b1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e22b4  push 0xb
    X86_AT(c, 0xe22b4u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e22b6  call 0xe6c68
    X86_AT(c, 0xe22b6u);
    push32(c, 0xe22bbu); f_000e6c68(c); X86_RET(c, 0xe22bbu);
    X86_TICK(c, 13);
    // 0e22bb  add esp, 4
    X86_AT(c, 0xe22bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e22be  push 0x1630
    X86_AT(c, 0xe22beu);
    { uint32_t v = 0x1630u; push32(c, v); }
    // 0e22c3  push 0xb
    X86_AT(c, 0xe22c3u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e22c5  call 0xe5654
    X86_AT(c, 0xe22c5u);
    push32(c, 0xe22cau); f_000e5654(c); X86_RET(c, 0xe22cau);
    X86_TICK(c, 9);
    // 0e22ca  push 0xb
    X86_AT(c, 0xe22cau);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e22cc  call 0xe6c68
    X86_AT(c, 0xe22ccu);
    push32(c, 0xe22d1u); f_000e6c68(c); X86_RET(c, 0xe22d1u);
    X86_TICK(c, 9);
    // 0e22d1  mov word ptr [0x7a5d4], 2
    X86_AT(c, 0xe22d1u);
    wr16((c.sbase[3] + (uint32_t)(0x7A5D4u)), 0x2u);
    // 0e22da  call 0xe1e18
    X86_AT(c, 0xe22dau);
    push32(c, 0xe22dfu); f_000e1e18(c); X86_RET(c, 0xe22dfu);
    X86_TICK(c, 9);
    // 0e22df  add esp, 0xc
    X86_AT(c, 0xe22dfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e22e2  jmp 0xe23ca
    X86_AT(c, 0xe22e2u);
    goto L_e23ca;
L_e22e7:
    X86_TICK(c, 9);
    // 0e22e7  push 0xb
    X86_AT(c, 0xe22e7u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e22e9  call 0xe6af0
    X86_AT(c, 0xe22e9u);
    push32(c, 0xe22eeu); f_000e6af0(c); X86_RET(c, 0xe22eeu);
    X86_TICK(c, 13);
    // 0e22ee  push 0
    X86_AT(c, 0xe22eeu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e22f0  push 2
    X86_AT(c, 0xe22f0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e22f2  push 0xb
    X86_AT(c, 0xe22f2u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e22f4  call 0xe7260
    X86_AT(c, 0xe22f4u);
    push32(c, 0xe22f9u); f_000e7260(c); X86_RET(c, 0xe22f9u);
    X86_TICK(c, 11);
    // 0e22f9  push 0x1668
    X86_AT(c, 0xe22f9u);
    { uint32_t v = 0x1668u; push32(c, v); }
    // 0e22fe  push 0xb
    X86_AT(c, 0xe22feu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2300  call 0xe5654
    X86_AT(c, 0xe2300u);
    push32(c, 0xe2305u); f_000e5654(c); X86_RET(c, 0xe2305u);
    X86_TICK(c, 9);
    // 0e2305  push 0xb
    X86_AT(c, 0xe2305u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2307  call 0xe6c68
    X86_AT(c, 0xe2307u);
    push32(c, 0xe230cu); f_000e6c68(c); X86_RET(c, 0xe230cu);
    X86_TICK(c, 11);
    // 0e230c  push 0x1694
    X86_AT(c, 0xe230cu);
    { uint32_t v = 0x1694u; push32(c, v); }
    // 0e2311  push 0xb
    X86_AT(c, 0xe2311u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2313  call 0xe5654
    X86_AT(c, 0xe2313u);
    push32(c, 0xe2318u); f_000e5654(c); X86_RET(c, 0xe2318u);
    X86_TICK(c, 9);
    // 0e2318  push 0xb
    X86_AT(c, 0xe2318u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e231a  call 0xe6c68
    X86_AT(c, 0xe231au);
    push32(c, 0xe231fu); f_000e6c68(c); X86_RET(c, 0xe231fu);
    X86_TICK(c, 11);
    // 0e231f  push 0x16b8
    X86_AT(c, 0xe231fu);
    { uint32_t v = 0x16B8u; push32(c, v); }
    // 0e2324  push 0xb
    X86_AT(c, 0xe2324u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2326  call 0xe5654
    X86_AT(c, 0xe2326u);
    push32(c, 0xe232bu); f_000e5654(c); X86_RET(c, 0xe232bu);
    X86_TICK(c, 9);
    // 0e232b  push 0xb
    X86_AT(c, 0xe232bu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e232d  call 0xe6c68
    X86_AT(c, 0xe232du);
    push32(c, 0xe2332u); f_000e6c68(c); X86_RET(c, 0xe2332u);
    X86_TICK(c, 11);
    // 0e2332  push 0x16dc
    X86_AT(c, 0xe2332u);
    { uint32_t v = 0x16DCu; push32(c, v); }
    // 0e2337  push 0xb
    X86_AT(c, 0xe2337u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2339  call 0xe5654
    X86_AT(c, 0xe2339u);
    push32(c, 0xe233eu); f_000e5654(c); X86_RET(c, 0xe233eu);
    X86_TICK(c, 11);
    // 0e233e  add esp, 0x3c
    X86_AT(c, 0xe233eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e2341  push 0xb
    X86_AT(c, 0xe2341u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2343  call 0xe6c68
    X86_AT(c, 0xe2343u);
    push32(c, 0xe2348u); f_000e6c68(c); X86_RET(c, 0xe2348u);
    X86_TICK(c, 11);
    // 0e2348  push 0x1700
    X86_AT(c, 0xe2348u);
    { uint32_t v = 0x1700u; push32(c, v); }
    // 0e234d  push 0xb
    X86_AT(c, 0xe234du);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e234f  call 0xe5654
    X86_AT(c, 0xe234fu);
    push32(c, 0xe2354u); f_000e5654(c); X86_RET(c, 0xe2354u);
    X86_TICK(c, 9);
    // 0e2354  push 0xb
    X86_AT(c, 0xe2354u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2356  call 0xe6c68
    X86_AT(c, 0xe2356u);
    push32(c, 0xe235bu); f_000e6c68(c); X86_RET(c, 0xe235bu);
    X86_TICK(c, 11);
    // 0e235b  push 0x1724
    X86_AT(c, 0xe235bu);
    { uint32_t v = 0x1724u; push32(c, v); }
    // 0e2360  push 0xb
    X86_AT(c, 0xe2360u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2362  call 0xe5654
    X86_AT(c, 0xe2362u);
    push32(c, 0xe2367u); f_000e5654(c); X86_RET(c, 0xe2367u);
    X86_TICK(c, 9);
    // 0e2367  push 0xb
    X86_AT(c, 0xe2367u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2369  call 0xe6c68
    X86_AT(c, 0xe2369u);
    push32(c, 0xe236eu); f_000e6c68(c); X86_RET(c, 0xe236eu);
    X86_TICK(c, 11);
    // 0e236e  push 0x1748
    X86_AT(c, 0xe236eu);
    { uint32_t v = 0x1748u; push32(c, v); }
    // 0e2373  push 0xb
    X86_AT(c, 0xe2373u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2375  call 0xe5654
    X86_AT(c, 0xe2375u);
    push32(c, 0xe237au); f_000e5654(c); X86_RET(c, 0xe237au);
    X86_TICK(c, 9);
    // 0e237a  push 0xb
    X86_AT(c, 0xe237au);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e237c  call 0xe6c68
    X86_AT(c, 0xe237cu);
    push32(c, 0xe2381u); f_000e6c68(c); X86_RET(c, 0xe2381u);
    X86_TICK(c, 11);
    // 0e2381  push 0x176c
    X86_AT(c, 0xe2381u);
    { uint32_t v = 0x176Cu; push32(c, v); }
    // 0e2386  push 0xb
    X86_AT(c, 0xe2386u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e2388  call 0xe5654
    X86_AT(c, 0xe2388u);
    push32(c, 0xe238du); f_000e5654(c); X86_RET(c, 0xe238du);
    X86_TICK(c, 9);
    // 0e238d  push 0xb
    X86_AT(c, 0xe238du);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e238f  call 0xe6c68
    X86_AT(c, 0xe238fu);
    push32(c, 0xe2394u); f_000e6c68(c); X86_RET(c, 0xe2394u);
    X86_TICK(c, 11);
    // 0e2394  push 0x1790
    X86_AT(c, 0xe2394u);
    { uint32_t v = 0x1790u; push32(c, v); }
    // 0e2399  push 0xb
    X86_AT(c, 0xe2399u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e239b  call 0xe5654
    X86_AT(c, 0xe239bu);
    push32(c, 0xe23a0u); f_000e5654(c); X86_RET(c, 0xe23a0u);
    X86_TICK(c, 11);
    // 0e23a0  add esp, 0x3c
    X86_AT(c, 0xe23a0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e23a3  push 0xb
    X86_AT(c, 0xe23a3u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e23a5  call 0xe6c68
    X86_AT(c, 0xe23a5u);
    push32(c, 0xe23aau); f_000e6c68(c); X86_RET(c, 0xe23aau);
    X86_TICK(c, 13);
    // 0e23aa  add esp, 4
    X86_AT(c, 0xe23aau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e23ad  push 0x17b4
    X86_AT(c, 0xe23adu);
    { uint32_t v = 0x17B4u; push32(c, v); }
    // 0e23b2  push 0xb
    X86_AT(c, 0xe23b2u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e23b4  call 0xe5654
    X86_AT(c, 0xe23b4u);
    push32(c, 0xe23b9u); f_000e5654(c); X86_RET(c, 0xe23b9u);
    X86_TICK(c, 9);
    // 0e23b9  mov word ptr [0x7a5d4], 0
    X86_AT(c, 0xe23b9u);
    wr16((c.sbase[3] + (uint32_t)(0x7A5D4u)), 0x0u);
    // 0e23c2  call 0xe1e18
    X86_AT(c, 0xe23c2u);
    push32(c, 0xe23c7u); f_000e1e18(c); X86_RET(c, 0xe23c7u);
    X86_TICK(c, 2);
    // 0e23c7  add esp, 8
    X86_AT(c, 0xe23c7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_e23ca:
    X86_TICK(c, 16);
    // 0e23ca  leave 
    X86_AT(c, 0xe23cau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e23cb  ret 
    X86_AT(c, 0xe23cbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe20f4u, "ran off the end of a function");
}
void f_000e23ca(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0e23ca  leave 
    X86_AT(c, 0xe23cau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e23cb  ret 
    X86_AT(c, 0xe23cbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe23cau, "ran off the end of a function");
}
void f_000e23cc(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0e23cc  push ebp
    X86_AT(c, 0xe23ccu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e23cd  mov ebp, esp
    X86_AT(c, 0xe23cdu);
    c.r[5] = c.r[4];
    // 0e23cf  push 0
    X86_AT(c, 0xe23cfu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e23d1  push dword ptr [ebp + 8]
    X86_AT(c, 0xe23d1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e23d4  call 0x102317
    X86_AT(c, 0xe23d4u);
    push32(c, 0xe23d9u); f_00102317(c); X86_RET(c, 0xe23d9u);
    X86_TICK(c, 7);
    // 0e23d9  and eax, eax
    X86_AT(c, 0xe23d9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e23db  je 0xe23e4
    X86_AT(c, 0xe23dbu);
    if (x86_cc(c, 4)) { goto L_e23e4; }
    X86_TICK(c, 9);
    // 0e23dd  mov eax, 0xffffffff
    X86_AT(c, 0xe23ddu);
    c.r[0] = 0xFFFFFFFFu;
    // 0e23e2  jmp 0xe23e6
    X86_AT(c, 0xe23e2u);
    goto L_e23e6;
L_e23e4:
    X86_TICK(c, 2);
    // 0e23e4  sub eax, eax
    X86_AT(c, 0xe23e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e23e6:
    X86_TICK(c, 18);
    // 0e23e6  add esp, 8
    X86_AT(c, 0xe23e6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e23e9  leave 
    X86_AT(c, 0xe23e9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e23ea  ret 
    X86_AT(c, 0xe23eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe23ccu, "ran off the end of a function");
}
void f_000e23ec(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0e23ec  push ebp
    X86_AT(c, 0xe23ecu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e23ed  mov ebp, esp
    X86_AT(c, 0xe23edu);
    c.r[5] = c.r[4];
    // 0e23ef  push eax
    X86_AT(c, 0xe23efu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e23f0  push edi
    X86_AT(c, 0xe23f0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e23f1  mov word ptr [ebp - 2], 0
    X86_AT(c, 0xe23f1u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), 0x0u);
    // 0e23f7  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xe23f7u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e23fa  cmp edx, 3
    X86_AT(c, 0xe23fau);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0e23fd  ja 0xe2456
    X86_AT(c, 0xe23fdu);
    if (x86_cc(c, 7)) { goto L_e2456; }
    X86_TICK(c, 7);
    // 0e23ff  jmp dword ptr cs:[edx*4 + 0xe2407]
    X86_AT(c, 0xe23ffu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE2407u)));
      switch (t) {
      case 0xe2417u: goto L_e2417;
      case 0xe241du: goto L_e241d;
      case 0xe2456u: goto L_e2456;
      default: x86_jump(c, t); return; } }
L_e2417:
    X86_TICK(c, 9);
    // 0e2417  mov di, 0x20
    X86_AT(c, 0xe2417u);
    s16(c, 7, 0x20u);
    // 0e241b  jmp 0xe2421
    X86_AT(c, 0xe241bu);
    goto L_e2421;
L_e241d:
    X86_TICK(c, 2);
    // 0e241d  mov di, 0x21
    X86_AT(c, 0xe241du);
    s16(c, 7, 0x21u);
L_e2421:
    X86_TICK(c, 21);
    // 0e2421  mov byte ptr [0x7a619], 2
    X86_AT(c, 0xe2421u);
    wr8((c.sbase[3] + (uint32_t)(0x7A619u)), 0x2u);
    // 0e2428  mov eax, edi
    X86_AT(c, 0xe2428u);
    c.r[0] = c.r[7];
    // 0e242a  mov byte ptr [0x7a618], al
    X86_AT(c, 0xe242au);
    wr8((c.sbase[3] + (uint32_t)(0x7A618u)), g8(c, 0));
    // 0e242f  mov byte ptr [0x7a621], 0
    X86_AT(c, 0xe242fu);
    wr8((c.sbase[3] + (uint32_t)(0x7A621u)), 0x0u);
    // 0e2436  push 0x7a634
    X86_AT(c, 0xe2436u);
    { uint32_t v = 0x7A634u; push32(c, v); }
    // 0e243b  push 0x7a618
    X86_AT(c, 0xe243bu);
    { uint32_t v = 0x7A618u; push32(c, v); }
    // 0e2440  push 0x93
    X86_AT(c, 0xe2440u);
    { uint32_t v = 0x93u; push32(c, v); }
    // 0e2445  call 0x1023f6
    X86_AT(c, 0xe2445u);
    push32(c, 0xe244au); f_001023f6(c); X86_RET(c, 0xe244au);
    X86_TICK(c, 14);
    // 0e244a  add esp, 0xc
    X86_AT(c, 0xe244au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e244d  cmp byte ptr [0x7a635], 2
    X86_AT(c, 0xe244du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x7A635u))), 0x2u, 0, 1);
    // 0e2454  jne 0xe2460
    X86_AT(c, 0xe2454u);
    if (x86_cc(c, 5)) { goto L_e2460; }
L_e2456:
    X86_TICK(c, 9);
    // 0e2456  mov eax, 0xffffffff
    X86_AT(c, 0xe2456u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e245b  jmp 0xe24d5
    X86_AT(c, 0xe245bu);
    goto L_e24d5;
L_e2460:
    X86_TICK(c, 12);
    // 0e2460  test byte ptr [0x7a640], 1
    X86_AT(c, 0xe2460u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x7A640u))) & 0x1u, 1);
    // 0e2467  je 0xe2470
    X86_AT(c, 0xe2467u);
    if (x86_cc(c, 4)) { goto L_e2470; }
    X86_TICK(c, 9);
    // 0e2469  mov eax, 3
    X86_AT(c, 0xe2469u);
    c.r[0] = 0x3u;
    // 0e246e  jmp 0xe24d5
    X86_AT(c, 0xe246eu);
    goto L_e24d5;
L_e2470:
    X86_TICK(c, 12);
    // 0e2470  test byte ptr [0x7a640], 2
    X86_AT(c, 0xe2470u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x7A640u))) & 0x2u, 1);
    // 0e2477  je 0xe2480
    X86_AT(c, 0xe2477u);
    if (x86_cc(c, 4)) { goto L_e2480; }
    X86_TICK(c, 9);
    // 0e2479  mov eax, 2
    X86_AT(c, 0xe2479u);
    c.r[0] = 0x2u;
    // 0e247e  jmp 0xe24d5
    X86_AT(c, 0xe247eu);
    goto L_e24d5;
L_e2480:
    X86_TICK(c, 25);
    // 0e2480  mov byte ptr [0x7a619], 7
    X86_AT(c, 0xe2480u);
    wr8((c.sbase[3] + (uint32_t)(0x7A619u)), 0x7u);
    // 0e2487  mov eax, edi
    X86_AT(c, 0xe2487u);
    c.r[0] = c.r[7];
    // 0e2489  mov byte ptr [0x7a618], al
    X86_AT(c, 0xe2489u);
    wr8((c.sbase[3] + (uint32_t)(0x7A618u)), g8(c, 0));
    // 0e248e  mov word ptr [0x7a620], 1
    X86_AT(c, 0xe248eu);
    wr16((c.sbase[3] + (uint32_t)(0x7A620u)), 0x1u);
    // 0e2497  mov word ptr [0x7a624], 1
    X86_AT(c, 0xe2497u);
    wr16((c.sbase[3] + (uint32_t)(0x7A624u)), 0x1u);
    // 0e24a0  mov word ptr [0x7a61c], 1
    X86_AT(c, 0xe24a0u);
    wr16((c.sbase[3] + (uint32_t)(0x7A61Cu)), 0x1u);
    // 0e24a9  push 0x7a634
    X86_AT(c, 0xe24a9u);
    { uint32_t v = 0x7A634u; push32(c, v); }
    // 0e24ae  push 0x7a618
    X86_AT(c, 0xe24aeu);
    { uint32_t v = 0x7A618u; push32(c, v); }
    // 0e24b3  push 0x93
    X86_AT(c, 0xe24b3u);
    { uint32_t v = 0x93u; push32(c, v); }
    // 0e24b8  call 0x1023f6
    X86_AT(c, 0xe24b8u);
    push32(c, 0xe24bdu); f_001023f6(c); X86_RET(c, 0xe24bdu);
    X86_TICK(c, 14);
    // 0e24bd  add esp, 0xc
    X86_AT(c, 0xe24bdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e24c0  cmp byte ptr [0x7a635], 0
    X86_AT(c, 0xe24c0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x7A635u))), 0x0u, 0, 1);
    // 0e24c7  jne 0xe24d0
    X86_AT(c, 0xe24c7u);
    if (x86_cc(c, 5)) { goto L_e24d0; }
    X86_TICK(c, 9);
    // 0e24c9  mov eax, 1
    X86_AT(c, 0xe24c9u);
    c.r[0] = 0x1u;
    // 0e24ce  jmp 0xe24d5
    X86_AT(c, 0xe24ceu);
    goto L_e24d5;
L_e24d0:
    X86_TICK(c, 2);
    // 0e24d0  mov eax, 4
    X86_AT(c, 0xe24d0u);
    c.r[0] = 0x4u;
L_e24d5:
    X86_TICK(c, 20);
    // 0e24d5  pop edi
    X86_AT(c, 0xe24d5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e24d6  leave 
    X86_AT(c, 0xe24d6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e24d7  ret 
    X86_AT(c, 0xe24d7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe23ecu, "ran off the end of a function");
}
void f_000e24d8(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0e24d8  push ebp
    X86_AT(c, 0xe24d8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e24d9  mov ebp, esp
    X86_AT(c, 0xe24d9u);
    c.r[5] = c.r[4];
    // 0e24db  push edi
    X86_AT(c, 0xe24dbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e24dc  push dword ptr [ebp + 8]
    X86_AT(c, 0xe24dcu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e24df  call 0xe23ec
    X86_AT(c, 0xe24dfu);
    push32(c, 0xe24e4u); f_000e23ec(c); X86_RET(c, 0xe24e4u);
    X86_TICK(c, 14);
    // 0e24e4  add esp, 4
    X86_AT(c, 0xe24e4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e24e7  xchg edx, eax
    X86_AT(c, 0xe24e7u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0e24e8  inc edx
    X86_AT(c, 0xe24e8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0e24e9  cmp edx, 5
    X86_AT(c, 0xe24e9u);
    (void)x86_sub(c, c.r[2], 0x5u, 0, 4);
    // 0e24ec  ja 0xe252d
    X86_AT(c, 0xe24ecu);
    if (x86_cc(c, 7)) { goto L_e252d; }
    X86_TICK(c, 7);
    // 0e24ee  jmp dword ptr cs:[edx*4 + 0xe24f6]
    X86_AT(c, 0xe24eeu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE24F6u)));
      switch (t) {
      case 0xe250eu: goto L_e250e;
      case 0xe2512u: goto L_e2512;
      case 0xe2519u: goto L_e2519;
      case 0xe2520u: goto L_e2520;
      case 0xe252du: goto L_e252d;
      case 0xe253fu: goto L_e253f;
      default: x86_jump(c, t); return; } }
L_e250e:
    X86_TICK(c, 9);
    // 0e250e  sub eax, eax
    X86_AT(c, 0xe250eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e2510  jmp 0xe254f
    X86_AT(c, 0xe2510u);
    goto L_e254f;
L_e2512:
    X86_TICK(c, 9);
    // 0e2512  push 0x17d8
    X86_AT(c, 0xe2512u);
    { uint32_t v = 0x17D8u; push32(c, v); }
    // 0e2517  jmp 0xe2525
    X86_AT(c, 0xe2517u);
    goto L_e2525;
L_e2519:
    X86_TICK(c, 9);
    // 0e2519  push 0x1848
    X86_AT(c, 0xe2519u);
    { uint32_t v = 0x1848u; push32(c, v); }
    // 0e251e  jmp 0xe2525
    X86_AT(c, 0xe251eu);
    goto L_e2525;
L_e2520:
    X86_TICK(c, 2);
    // 0e2520  push 0x18bc
    X86_AT(c, 0xe2520u);
    { uint32_t v = 0x18BCu; push32(c, v); }
L_e2525:
    X86_TICK(c, 7);
    // 0e2525  call 0xe75f8
    X86_AT(c, 0xe2525u);
    push32(c, 0xe252au); f_000e75f8(c); X86_RET(c, 0xe252au);
    X86_TICK(c, 2);
    // 0e252a  add esp, 4
    X86_AT(c, 0xe252au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e252d:
    X86_TICK(c, 9);
    // 0e252d  push 2
    X86_AT(c, 0xe252du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e252f  call 0xe4b60
    X86_AT(c, 0xe252fu);
    push32(c, 0xe2534u); f_000e4b60(c); X86_RET(c, 0xe2534u);
    X86_TICK(c, 12);
    // 0e2534  movzx edi, al
    X86_AT(c, 0xe2534u);
    c.r[7] = g8(c, 0);
    // 0e2537  add esp, 4
    X86_AT(c, 0xe2537u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e253a  cmp edi, 1
    X86_AT(c, 0xe253au);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0e253d  jne 0xe2546
    X86_AT(c, 0xe253du);
    if (x86_cc(c, 5)) { goto L_e2546; }
L_e253f:
    X86_TICK(c, 9);
    // 0e253f  mov eax, 0xffffffff
    X86_AT(c, 0xe253fu);
    c.r[0] = 0xFFFFFFFFu;
    // 0e2544  jmp 0xe254f
    X86_AT(c, 0xe2544u);
    goto L_e254f;
L_e2546:
    X86_TICK(c, 7);
    // 0e2546  and edi, edi
    X86_AT(c, 0xe2546u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e2548  je 0xe252d
    X86_AT(c, 0xe2548u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe252du); goto L_e252d; }
    X86_TICK(c, 2);
    // 0e254a  mov eax, 5
    X86_AT(c, 0xe254au);
    c.r[0] = 0x5u;
L_e254f:
    X86_TICK(c, 20);
    // 0e254f  pop edi
    X86_AT(c, 0xe254fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e2550  leave 
    X86_AT(c, 0xe2550u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e2551  ret 
    X86_AT(c, 0xe2551u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe24d8u, "ran off the end of a function");
}
void f_000e2554(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0e2554  push ebp
    X86_AT(c, 0xe2554u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e2555  mov ebp, esp
    X86_AT(c, 0xe2555u);
    c.r[5] = c.r[4];
    // 0e2557  push edi
    X86_AT(c, 0xe2557u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2558  push dword ptr [ebp + 8]
    X86_AT(c, 0xe2558u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e255b  call 0xe23ec
    X86_AT(c, 0xe255bu);
    push32(c, 0xe2560u); f_000e23ec(c); X86_RET(c, 0xe2560u);
    X86_TICK(c, 14);
    // 0e2560  add esp, 4
    X86_AT(c, 0xe2560u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e2563  xchg edx, eax
    X86_AT(c, 0xe2563u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0e2564  inc edx
    X86_AT(c, 0xe2564u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0e2565  cmp edx, 5
    X86_AT(c, 0xe2565u);
    (void)x86_sub(c, c.r[2], 0x5u, 0, 4);
    // 0e2568  ja 0xe2623
    X86_AT(c, 0xe2568u);
    if (x86_cc(c, 7)) { goto L_e2623; }
    X86_TICK(c, 7);
    // 0e256e  jmp dword ptr cs:[edx*4 + 0xe2576]
    X86_AT(c, 0xe256eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE2576u)));
      switch (t) {
      case 0xe258eu: goto L_e258e;
      case 0xe25c6u: goto L_e25c6;
      case 0xe25f0u: goto L_e25f0;
      case 0xe260bu: goto L_e260b;
      case 0xe2612u: goto L_e2612;
      case 0xe2623u: goto L_e2623;
      default: x86_jump(c, t); return; } }
L_e258e:
    X86_TICK(c, 12);
    // 0e258e  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe258eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e2591  call 0xe23cc
    X86_AT(c, 0xe2591u);
    push32(c, 0xe2596u); f_000e23cc(c); X86_RET(c, 0xe2596u);
    X86_TICK(c, 9);
    // 0e2596  add esp, 4
    X86_AT(c, 0xe2596u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e2599  and eax, eax
    X86_AT(c, 0xe2599u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e259b  je 0xe2623
    X86_AT(c, 0xe259bu);
    if (x86_cc(c, 4)) { goto L_e2623; }
    X86_TICK(c, 9);
    // 0e25a1  push 0x1930
    X86_AT(c, 0xe25a1u);
    { uint32_t v = 0x1930u; push32(c, v); }
    // 0e25a6  call 0xe75f8
    X86_AT(c, 0xe25a6u);
    push32(c, 0xe25abu); f_000e75f8(c); X86_RET(c, 0xe25abu);
    X86_TICK(c, 2);
    // 0e25ab  add esp, 4
    X86_AT(c, 0xe25abu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e25ae:
    X86_TICK(c, 9);
    // 0e25ae  push 2
    X86_AT(c, 0xe25aeu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e25b0  call 0xe4b60
    X86_AT(c, 0xe25b0u);
    push32(c, 0xe25b5u); f_000e4b60(c); X86_RET(c, 0xe25b5u);
    X86_TICK(c, 12);
    // 0e25b5  movzx edi, al
    X86_AT(c, 0xe25b5u);
    c.r[7] = g8(c, 0);
    // 0e25b8  add esp, 4
    X86_AT(c, 0xe25b8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e25bb  cmp edi, 1
    X86_AT(c, 0xe25bbu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0e25be  je 0xe260b
    X86_AT(c, 0xe25beu);
    if (x86_cc(c, 4)) { goto L_e260b; }
    X86_TICK(c, 7);
    // 0e25c0  and edi, edi
    X86_AT(c, 0xe25c0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e25c2  je 0xe25ae
    X86_AT(c, 0xe25c2u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe25aeu); goto L_e25ae; }
    X86_TICK(c, 7);
    // 0e25c4  jmp 0xe2623
    X86_AT(c, 0xe25c4u);
    goto L_e2623;
L_e25c6:
    X86_TICK(c, 9);
    // 0e25c6  push 0x19a4
    X86_AT(c, 0xe25c6u);
    { uint32_t v = 0x19A4u; push32(c, v); }
    // 0e25cb  call 0xe75f8
    X86_AT(c, 0xe25cbu);
    push32(c, 0xe25d0u); f_000e75f8(c); X86_RET(c, 0xe25d0u);
    X86_TICK(c, 2);
    // 0e25d0  add esp, 4
    X86_AT(c, 0xe25d0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e25d3:
    X86_TICK(c, 9);
    // 0e25d3  push 2
    X86_AT(c, 0xe25d3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e25d5  call 0xe4b60
    X86_AT(c, 0xe25d5u);
    push32(c, 0xe25dau); f_000e4b60(c); X86_RET(c, 0xe25dau);
    X86_TICK(c, 12);
    // 0e25da  movzx edi, al
    X86_AT(c, 0xe25dau);
    c.r[7] = g8(c, 0);
    // 0e25dd  add esp, 4
    X86_AT(c, 0xe25ddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e25e0  cmp edi, 1
    X86_AT(c, 0xe25e0u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0e25e3  je 0xe260b
    X86_AT(c, 0xe25e3u);
    if (x86_cc(c, 4)) { goto L_e260b; }
    X86_TICK(c, 7);
    // 0e25e5  and edi, edi
    X86_AT(c, 0xe25e5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e25e7  je 0xe25d3
    X86_AT(c, 0xe25e7u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe25d3u); goto L_e25d3; }
    X86_TICK(c, 9);
    // 0e25e9  mov eax, 5
    X86_AT(c, 0xe25e9u);
    c.r[0] = 0x5u;
    // 0e25ee  jmp 0xe2625
    X86_AT(c, 0xe25eeu);
    goto L_e2625;
L_e25f0:
    X86_TICK(c, 9);
    // 0e25f0  push 0x1a24
    X86_AT(c, 0xe25f0u);
    { uint32_t v = 0x1A24u; push32(c, v); }
    // 0e25f5  call 0xe75f8
    X86_AT(c, 0xe25f5u);
    push32(c, 0xe25fau); f_000e75f8(c); X86_RET(c, 0xe25fau);
    X86_TICK(c, 2);
    // 0e25fa  add esp, 4
    X86_AT(c, 0xe25fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e25fd:
    X86_TICK(c, 9);
    // 0e25fd  push 2
    X86_AT(c, 0xe25fdu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e25ff  call 0xe4b60
    X86_AT(c, 0xe25ffu);
    push32(c, 0xe2604u); f_000e4b60(c); X86_RET(c, 0xe2604u);
    X86_TICK(c, 9);
    // 0e2604  add esp, 4
    X86_AT(c, 0xe2604u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e2607  and al, al
    X86_AT(c, 0xe2607u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0e2609  je 0xe25fd
    X86_AT(c, 0xe2609u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe25fdu); goto L_e25fd; }
L_e260b:
    X86_TICK(c, 9);
    // 0e260b  mov eax, 0xffffffff
    X86_AT(c, 0xe260bu);
    c.r[0] = 0xFFFFFFFFu;
    // 0e2610  jmp 0xe2625
    X86_AT(c, 0xe2610u);
    goto L_e2625;
L_e2612:
    X86_TICK(c, 9);
    // 0e2612  push 0x1a9c
    X86_AT(c, 0xe2612u);
    { uint32_t v = 0x1A9Cu; push32(c, v); }
    // 0e2617  call 0xe75f8
    X86_AT(c, 0xe2617u);
    push32(c, 0xe261cu); f_000e75f8(c); X86_RET(c, 0xe261cu);
    X86_TICK(c, 11);
    // 0e261c  sub eax, eax
    X86_AT(c, 0xe261cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e261e  add esp, 4
    X86_AT(c, 0xe261eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e2621  jmp 0xe2625
    X86_AT(c, 0xe2621u);
    goto L_e2625;
L_e2623:
    X86_TICK(c, 2);
    // 0e2623  sub eax, eax
    X86_AT(c, 0xe2623u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e2625:
    X86_TICK(c, 20);
    // 0e2625  pop edi
    X86_AT(c, 0xe2625u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e2626  leave 
    X86_AT(c, 0xe2626u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e2627  ret 
    X86_AT(c, 0xe2627u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2554u, "ran off the end of a function");
}
void f_000e2628(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0e2628  push ebp
    X86_AT(c, 0xe2628u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e2629  mov ebp, esp
    X86_AT(c, 0xe2629u);
    c.r[5] = c.r[4];
    // 0e262b  sub esp, 8
    X86_AT(c, 0xe262bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0e262e  push ebx
    X86_AT(c, 0xe262eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e262f  push edi
    X86_AT(c, 0xe262fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2630  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe2630u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e2633  lea eax, [ebp - 8]
    X86_AT(c, 0xe2633u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e2636  push eax
    X86_AT(c, 0xe2636u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e2637  lea eax, [ebp - 4]
    X86_AT(c, 0xe2637u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0e263a  push eax
    X86_AT(c, 0xe263au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e263b  push edi
    X86_AT(c, 0xe263bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e263c  call 0xe7514
    X86_AT(c, 0xe263cu);
    push32(c, 0xe2641u); f_000e7514(c); X86_RET(c, 0xe2641u);
    X86_TICK(c, 9);
    // 0e2641  push 0x1af0
    X86_AT(c, 0xe2641u);
    { uint32_t v = 0x1AF0u; push32(c, v); }
    // 0e2646  call 0xe75f8
    X86_AT(c, 0xe2646u);
    push32(c, 0xe264bu); f_000e75f8(c); X86_RET(c, 0xe264bu);
    X86_TICK(c, 9);
    // 0e264b  push edi
    X86_AT(c, 0xe264bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e264c  call 0xe693c
    X86_AT(c, 0xe264cu);
    push32(c, 0xe2651u); f_000e693c(c); X86_RET(c, 0xe2651u);
    X86_TICK(c, 2);
    // 0e2651  add esp, 0x14
    X86_AT(c, 0xe2651u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_e2654:
    X86_TICK(c, 9);
    // 0e2654  push edi
    X86_AT(c, 0xe2654u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2655  call 0xe4748
    X86_AT(c, 0xe2655u);
    push32(c, 0xe265au); f_000e4748(c); X86_RET(c, 0xe265au);
    X86_TICK(c, 12);
    // 0e265a  xchg ebx, eax
    X86_AT(c, 0xe265au);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e265b  add esp, 4
    X86_AT(c, 0xe265bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e265e  cmp bl, 0x59
    X86_AT(c, 0xe265eu);
    (void)x86_sub(c, g8(c, 3), 0x59u, 0, 1);
    // 0e2661  je 0xe266d
    X86_AT(c, 0xe2661u);
    if (x86_cc(c, 4)) { goto L_e266d; }
    X86_TICK(c, 7);
    // 0e2663  cmp bl, 0x4e
    X86_AT(c, 0xe2663u);
    (void)x86_sub(c, g8(c, 3), 0x4Eu, 0, 1);
    // 0e2666  je 0xe266d
    X86_AT(c, 0xe2666u);
    if (x86_cc(c, 4)) { goto L_e266d; }
    X86_TICK(c, 7);
    // 0e2668  cmp bl, 1
    X86_AT(c, 0xe2668u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0e266b  jne 0xe2654
    X86_AT(c, 0xe266bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe2654u); goto L_e2654; }
L_e266d:
    X86_TICK(c, 19);
    // 0e266d  push dword ptr [ebp - 8]
    X86_AT(c, 0xe266du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0e2670  push dword ptr [ebp - 4]
    X86_AT(c, 0xe2670u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0e2673  push edi
    X86_AT(c, 0xe2673u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2674  call 0xe7260
    X86_AT(c, 0xe2674u);
    push32(c, 0xe2679u); f_000e7260(c); X86_RET(c, 0xe2679u);
    X86_TICK(c, 12);
    // 0e2679  add esp, 0xc
    X86_AT(c, 0xe2679u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e267c  movzx edx, bl
    X86_AT(c, 0xe267cu);
    c.r[2] = g8(c, 3);
    // 0e267f  cmp edx, 1
    X86_AT(c, 0xe267fu);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0e2682  je 0xe26a2
    X86_AT(c, 0xe2682u);
    if (x86_cc(c, 4)) { goto L_e26a2; }
    X86_TICK(c, 7);
    // 0e2684  cmp edx, 0x4e
    X86_AT(c, 0xe2684u);
    (void)x86_sub(c, c.r[2], 0x4Eu, 0, 4);
    // 0e2687  je 0xe2695
    X86_AT(c, 0xe2687u);
    if (x86_cc(c, 4)) { goto L_e2695; }
    X86_TICK(c, 7);
    // 0e2689  cmp edx, 0x59
    X86_AT(c, 0xe2689u);
    (void)x86_sub(c, c.r[2], 0x59u, 0, 4);
    // 0e268c  jne 0xe26b0
    X86_AT(c, 0xe268cu);
    if (x86_cc(c, 5)) { goto L_e26b0; }
    X86_TICK(c, 9);
    // 0e268e  push 0x1b60
    X86_AT(c, 0xe268eu);
    { uint32_t v = 0x1B60u; push32(c, v); }
    // 0e2693  jmp 0xe269a
    X86_AT(c, 0xe2693u);
    goto L_e269a;
L_e2695:
    X86_TICK(c, 2);
    // 0e2695  push 0x1b6c
    X86_AT(c, 0xe2695u);
    { uint32_t v = 0x1B6Cu; push32(c, v); }
L_e269a:
    X86_TICK(c, 9);
    // 0e269a  push edi
    X86_AT(c, 0xe269au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e269b  call 0xe6cb0
    X86_AT(c, 0xe269bu);
    push32(c, 0xe26a0u); f_000e6cb0(c); X86_RET(c, 0xe26a0u);
    X86_TICK(c, 7);
    // 0e26a0  jmp 0xe26ad
    X86_AT(c, 0xe26a0u);
    goto L_e26ad;
L_e26a2:
    X86_TICK(c, 11);
    // 0e26a2  push 0x1b78
    X86_AT(c, 0xe26a2u);
    { uint32_t v = 0x1B78u; push32(c, v); }
    // 0e26a7  push edi
    X86_AT(c, 0xe26a7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e26a8  call 0xe5654
    X86_AT(c, 0xe26a8u);
    push32(c, 0xe26adu); f_000e5654(c); X86_RET(c, 0xe26adu);
L_e26ad:
    X86_TICK(c, 2);
    // 0e26ad  add esp, 8
    X86_AT(c, 0xe26adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_e26b0:
    X86_TICK(c, 9);
    // 0e26b0  push 2
    X86_AT(c, 0xe26b0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e26b2  call 0xe6c68
    X86_AT(c, 0xe26b2u);
    push32(c, 0xe26b7u); f_000e6c68(c); X86_RET(c, 0xe26b7u);
    X86_TICK(c, 9);
    // 0e26b7  push edi
    X86_AT(c, 0xe26b7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e26b8  call 0xe6c68
    X86_AT(c, 0xe26b8u);
    push32(c, 0xe26bdu); f_000e6c68(c); X86_RET(c, 0xe26bdu);
    X86_TICK(c, 28);
    // 0e26bd  mov eax, ebx
    X86_AT(c, 0xe26bdu);
    c.r[0] = c.r[3];
    // 0e26bf  add esp, 8
    X86_AT(c, 0xe26bfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e26c2  pop edi
    X86_AT(c, 0xe26c2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e26c3  pop ebx
    X86_AT(c, 0xe26c3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e26c4  leave 
    X86_AT(c, 0xe26c4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e26c5  ret 
    X86_AT(c, 0xe26c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2628u, "ran off the end of a function");
}
void f_000e26c8(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e26c8  push ebp
    X86_AT(c, 0xe26c8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e26c9  mov ebp, esp
    X86_AT(c, 0xe26c9u);
    c.r[5] = c.r[4];
    // 0e26cb  sub esp, 8
    X86_AT(c, 0xe26cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0e26ce  push ebx
    X86_AT(c, 0xe26ceu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e26cf  push edi
    X86_AT(c, 0xe26cfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e26d0  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe26d0u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e26d3  push edi
    X86_AT(c, 0xe26d3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e26d4  call 0xe6c68
    X86_AT(c, 0xe26d4u);
    push32(c, 0xe26d9u); f_000e6c68(c); X86_RET(c, 0xe26d9u);
    X86_TICK(c, 9);
    // 0e26d9  push edi
    X86_AT(c, 0xe26d9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e26da  call 0xe693c
    X86_AT(c, 0xe26dau);
    push32(c, 0xe26dfu); f_000e693c(c); X86_RET(c, 0xe26dfu);
    X86_TICK(c, 11);
    // 0e26df  push 0x1b8c
    X86_AT(c, 0xe26dfu);
    { uint32_t v = 0x1B8Cu; push32(c, v); }
    // 0e26e4  push edi
    X86_AT(c, 0xe26e4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e26e5  call 0xe5654
    X86_AT(c, 0xe26e5u);
    push32(c, 0xe26eau); f_000e5654(c); X86_RET(c, 0xe26eau);
    X86_TICK(c, 17);
    // 0e26ea  lea eax, [ebp - 8]
    X86_AT(c, 0xe26eau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e26ed  push eax
    X86_AT(c, 0xe26edu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e26ee  lea eax, [ebp - 4]
    X86_AT(c, 0xe26eeu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0e26f1  push eax
    X86_AT(c, 0xe26f1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e26f2  push edi
    X86_AT(c, 0xe26f2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e26f3  call 0xe7514
    X86_AT(c, 0xe26f3u);
    push32(c, 0xe26f8u); f_000e7514(c); X86_RET(c, 0xe26f8u);
    X86_TICK(c, 9);
    // 0e26f8  push 0x1bac
    X86_AT(c, 0xe26f8u);
    { uint32_t v = 0x1BACu; push32(c, v); }
    // 0e26fd  call 0xe75f8
    X86_AT(c, 0xe26fdu);
    push32(c, 0xe2702u); f_000e75f8(c); X86_RET(c, 0xe2702u);
    X86_TICK(c, 9);
    // 0e2702  push edi
    X86_AT(c, 0xe2702u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2703  call 0xe693c
    X86_AT(c, 0xe2703u);
    push32(c, 0xe2708u); f_000e693c(c); X86_RET(c, 0xe2708u);
    X86_TICK(c, 2);
    // 0e2708  add esp, 0x24
    X86_AT(c, 0xe2708u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_e270b:
    X86_TICK(c, 9);
    // 0e270b  push edi
    X86_AT(c, 0xe270bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e270c  call 0xe4748
    X86_AT(c, 0xe270cu);
    push32(c, 0xe2711u); f_000e4748(c); X86_RET(c, 0xe2711u);
    X86_TICK(c, 12);
    // 0e2711  xchg ebx, eax
    X86_AT(c, 0xe2711u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e2712  add esp, 4
    X86_AT(c, 0xe2712u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e2715  cmp bl, 5
    X86_AT(c, 0xe2715u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0e2718  je 0xe2752
    X86_AT(c, 0xe2718u);
    if (x86_cc(c, 4)) { goto L_e2752; }
    X86_TICK(c, 7);
    // 0e271a  cmp bl, 6
    X86_AT(c, 0xe271au);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0e271d  je 0xe2752
    X86_AT(c, 0xe271du);
    if (x86_cc(c, 4)) { goto L_e2752; }
    X86_TICK(c, 7);
    // 0e271f  cmp bl, 3
    X86_AT(c, 0xe271fu);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0e2722  je 0xe2752
    X86_AT(c, 0xe2722u);
    if (x86_cc(c, 4)) { goto L_e2752; }
    X86_TICK(c, 7);
    // 0e2724  cmp bl, 7
    X86_AT(c, 0xe2724u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0e2727  je 0xe2752
    X86_AT(c, 0xe2727u);
    if (x86_cc(c, 4)) { goto L_e2752; }
    X86_TICK(c, 7);
    // 0e2729  cmp bl, 1
    X86_AT(c, 0xe2729u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0e272c  je 0xe2752
    X86_AT(c, 0xe272cu);
    if (x86_cc(c, 4)) { goto L_e2752; }
    X86_TICK(c, 7);
    // 0e272e  cmp bl, 0x4e
    X86_AT(c, 0xe272eu);
    (void)x86_sub(c, g8(c, 3), 0x4Eu, 0, 1);
    // 0e2731  je 0xe2752
    X86_AT(c, 0xe2731u);
    if (x86_cc(c, 4)) { goto L_e2752; }
    X86_TICK(c, 7);
    // 0e2733  cmp bl, 0x53
    X86_AT(c, 0xe2733u);
    (void)x86_sub(c, g8(c, 3), 0x53u, 0, 1);
    // 0e2736  je 0xe2752
    X86_AT(c, 0xe2736u);
    if (x86_cc(c, 4)) { goto L_e2752; }
    X86_TICK(c, 7);
    // 0e2738  cmp bl, 0x45
    X86_AT(c, 0xe2738u);
    (void)x86_sub(c, g8(c, 3), 0x45u, 0, 1);
    // 0e273b  je 0xe2752
    X86_AT(c, 0xe273bu);
    if (x86_cc(c, 4)) { goto L_e2752; }
    X86_TICK(c, 7);
    // 0e273d  cmp bl, 0x57
    X86_AT(c, 0xe273du);
    (void)x86_sub(c, g8(c, 3), 0x57u, 0, 1);
    // 0e2740  je 0xe2752
    X86_AT(c, 0xe2740u);
    if (x86_cc(c, 4)) { goto L_e2752; }
    X86_TICK(c, 7);
    // 0e2742  and bl, bl
    X86_AT(c, 0xe2742u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e2744  je 0xe270b
    X86_AT(c, 0xe2744u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe270bu); goto L_e270b; }
    X86_TICK(c, 9);
    // 0e2746  push 1
    X86_AT(c, 0xe2746u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2748  call 0xe1944
    X86_AT(c, 0xe2748u);
    push32(c, 0xe274du); f_000e1944(c); X86_RET(c, 0xe274du);
    X86_TICK(c, 9);
    // 0e274d  add esp, 4
    X86_AT(c, 0xe274du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e2750  jmp 0xe270b
    X86_AT(c, 0xe2750u);
    X86_POLL(c, 0xe270bu); goto L_e270b;
L_e2752:
    X86_TICK(c, 9);
    // 0e2752  push 2
    X86_AT(c, 0xe2752u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e2754  call 0xe6c68
    X86_AT(c, 0xe2754u);
    push32(c, 0xe2759u); f_000e6c68(c); X86_RET(c, 0xe2759u);
    X86_TICK(c, 9);
    // 0e2759  push edi
    X86_AT(c, 0xe2759u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e275a  call 0xe693c
    X86_AT(c, 0xe275au);
    push32(c, 0xe275fu); f_000e693c(c); X86_RET(c, 0xe275fu);
    X86_TICK(c, 9);
    // 0e275f  add esp, 8
    X86_AT(c, 0xe275fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e2762  cmp bl, 1
    X86_AT(c, 0xe2762u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0e2765  jne 0xe2771
    X86_AT(c, 0xe2765u);
    if (x86_cc(c, 5)) { goto L_e2771; }
    X86_TICK(c, 9);
    // 0e2767  mov eax, 0xffffffff
    X86_AT(c, 0xe2767u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e276c  jmp 0xe2820
    X86_AT(c, 0xe276cu);
    goto L_e2820;
L_e2771:
    X86_TICK(c, 19);
    // 0e2771  push dword ptr [ebp - 8]
    X86_AT(c, 0xe2771u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0e2774  push dword ptr [ebp - 4]
    X86_AT(c, 0xe2774u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0e2777  push edi
    X86_AT(c, 0xe2777u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2778  call 0xe7260
    X86_AT(c, 0xe2778u);
    push32(c, 0xe277du); f_000e7260(c); X86_RET(c, 0xe277du);
    X86_TICK(c, 12);
    // 0e277d  add esp, 0xc
    X86_AT(c, 0xe277du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e2780  movzx edx, bl
    X86_AT(c, 0xe2780u);
    c.r[2] = g8(c, 3);
    // 0e2783  cmp edx, 7
    X86_AT(c, 0xe2783u);
    (void)x86_sub(c, c.r[2], 0x7u, 0, 4);
    // 0e2786  ja 0xe27a9
    X86_AT(c, 0xe2786u);
    if (x86_cc(c, 7)) { goto L_e27a9; }
    X86_TICK(c, 7);
    // 0e2788  cmp edx, 7
    X86_AT(c, 0xe2788u);
    (void)x86_sub(c, c.r[2], 0x7u, 0, 4);
    // 0e278b  je 0xe27ef
    X86_AT(c, 0xe278bu);
    if (x86_cc(c, 4)) { goto L_e27ef; }
    X86_TICK(c, 7);
    // 0e2791  cmp edx, 3
    X86_AT(c, 0xe2791u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0e2794  je 0xe2807
    X86_AT(c, 0xe2794u);
    if (x86_cc(c, 4)) { goto L_e2807; }
    X86_TICK(c, 7);
    // 0e279a  cmp edx, 5
    X86_AT(c, 0xe279au);
    (void)x86_sub(c, c.r[2], 0x5u, 0, 4);
    // 0e279d  je 0xe27bf
    X86_AT(c, 0xe279du);
    if (x86_cc(c, 4)) { goto L_e27bf; }
    X86_TICK(c, 7);
    // 0e279f  cmp edx, 6
    X86_AT(c, 0xe279fu);
    (void)x86_sub(c, c.r[2], 0x6u, 0, 4);
    // 0e27a2  je 0xe27d7
    X86_AT(c, 0xe27a2u);
    if (x86_cc(c, 4)) { goto L_e27d7; }
    X86_TICK(c, 7);
    // 0e27a4  jmp 0xe2820
    X86_AT(c, 0xe27a4u);
    goto L_e2820;
L_e27a9:
    X86_TICK(c, 7);
    // 0e27a9  cmp edx, 0x45
    X86_AT(c, 0xe27a9u);
    (void)x86_sub(c, c.r[2], 0x45u, 0, 4);
    // 0e27ac  je 0xe27ef
    X86_AT(c, 0xe27acu);
    if (x86_cc(c, 4)) { goto L_e27ef; }
    X86_TICK(c, 7);
    // 0e27ae  cmp edx, 0x4e
    X86_AT(c, 0xe27aeu);
    (void)x86_sub(c, c.r[2], 0x4Eu, 0, 4);
    // 0e27b1  je 0xe27bf
    X86_AT(c, 0xe27b1u);
    if (x86_cc(c, 4)) { goto L_e27bf; }
    X86_TICK(c, 7);
    // 0e27b3  cmp edx, 0x53
    X86_AT(c, 0xe27b3u);
    (void)x86_sub(c, c.r[2], 0x53u, 0, 4);
    // 0e27b6  je 0xe27d7
    X86_AT(c, 0xe27b6u);
    if (x86_cc(c, 4)) { goto L_e27d7; }
    X86_TICK(c, 7);
    // 0e27b8  cmp edx, 0x57
    X86_AT(c, 0xe27b8u);
    (void)x86_sub(c, c.r[2], 0x57u, 0, 4);
    // 0e27bb  je 0xe2807
    X86_AT(c, 0xe27bbu);
    if (x86_cc(c, 4)) { goto L_e2807; }
    X86_TICK(c, 7);
    // 0e27bd  jmp 0xe2820
    X86_AT(c, 0xe27bdu);
    goto L_e2820;
L_e27bf:
    X86_TICK(c, 11);
    // 0e27bf  push 0x1c00
    X86_AT(c, 0xe27bfu);
    { uint32_t v = 0x1C00u; push32(c, v); }
    // 0e27c4  push edi
    X86_AT(c, 0xe27c4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e27c5  call 0xe5654
    X86_AT(c, 0xe27c5u);
    push32(c, 0xe27cau); f_000e5654(c); X86_RET(c, 0xe27cau);
    X86_TICK(c, 9);
    // 0e27ca  push edi
    X86_AT(c, 0xe27cau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e27cb  call 0xe6c68
    X86_AT(c, 0xe27cbu);
    push32(c, 0xe27d0u); f_000e6c68(c); X86_RET(c, 0xe27d0u);
    X86_TICK(c, 9);
    // 0e27d0  mov eax, 1
    X86_AT(c, 0xe27d0u);
    c.r[0] = 0x1u;
    // 0e27d5  jmp 0xe281d
    X86_AT(c, 0xe27d5u);
    goto L_e281d;
L_e27d7:
    X86_TICK(c, 11);
    // 0e27d7  push 0x1c10
    X86_AT(c, 0xe27d7u);
    { uint32_t v = 0x1C10u; push32(c, v); }
    // 0e27dc  push edi
    X86_AT(c, 0xe27dcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e27dd  call 0xe5654
    X86_AT(c, 0xe27ddu);
    push32(c, 0xe27e2u); f_000e5654(c); X86_RET(c, 0xe27e2u);
    X86_TICK(c, 9);
    // 0e27e2  push edi
    X86_AT(c, 0xe27e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e27e3  call 0xe6c68
    X86_AT(c, 0xe27e3u);
    push32(c, 0xe27e8u); f_000e6c68(c); X86_RET(c, 0xe27e8u);
    X86_TICK(c, 9);
    // 0e27e8  mov eax, 3
    X86_AT(c, 0xe27e8u);
    c.r[0] = 0x3u;
    // 0e27ed  jmp 0xe281d
    X86_AT(c, 0xe27edu);
    goto L_e281d;
L_e27ef:
    X86_TICK(c, 11);
    // 0e27ef  push 0x1c20
    X86_AT(c, 0xe27efu);
    { uint32_t v = 0x1C20u; push32(c, v); }
    // 0e27f4  push edi
    X86_AT(c, 0xe27f4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e27f5  call 0xe5654
    X86_AT(c, 0xe27f5u);
    push32(c, 0xe27fau); f_000e5654(c); X86_RET(c, 0xe27fau);
    X86_TICK(c, 9);
    // 0e27fa  push edi
    X86_AT(c, 0xe27fau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e27fb  call 0xe6c68
    X86_AT(c, 0xe27fbu);
    push32(c, 0xe2800u); f_000e6c68(c); X86_RET(c, 0xe2800u);
    X86_TICK(c, 9);
    // 0e2800  mov eax, 2
    X86_AT(c, 0xe2800u);
    c.r[0] = 0x2u;
    // 0e2805  jmp 0xe281d
    X86_AT(c, 0xe2805u);
    goto L_e281d;
L_e2807:
    X86_TICK(c, 11);
    // 0e2807  push 0x1c30
    X86_AT(c, 0xe2807u);
    { uint32_t v = 0x1C30u; push32(c, v); }
    // 0e280c  push edi
    X86_AT(c, 0xe280cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e280d  call 0xe5654
    X86_AT(c, 0xe280du);
    push32(c, 0xe2812u); f_000e5654(c); X86_RET(c, 0xe2812u);
    X86_TICK(c, 9);
    // 0e2812  push edi
    X86_AT(c, 0xe2812u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2813  call 0xe6c68
    X86_AT(c, 0xe2813u);
    push32(c, 0xe2818u); f_000e6c68(c); X86_RET(c, 0xe2818u);
    X86_TICK(c, 2);
    // 0e2818  mov eax, 4
    X86_AT(c, 0xe2818u);
    c.r[0] = 0x4u;
L_e281d:
    X86_TICK(c, 2);
    // 0e281d  add esp, 0xc
    X86_AT(c, 0xe281du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_e2820:
    X86_TICK(c, 24);
    // 0e2820  pop edi
    X86_AT(c, 0xe2820u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e2821  pop ebx
    X86_AT(c, 0xe2821u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e2822  leave 
    X86_AT(c, 0xe2822u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e2823  ret 
    X86_AT(c, 0xe2823u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe26c8u, "ran off the end of a function");
}
void f_000e2820(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0e2820  pop edi
    X86_AT(c, 0xe2820u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e2821  pop ebx
    X86_AT(c, 0xe2821u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e2822  leave 
    X86_AT(c, 0xe2822u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e2823  ret 
    X86_AT(c, 0xe2823u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2820u, "ran off the end of a function");
}
void f_000e2824(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e2824  push edi
    X86_AT(c, 0xe2824u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e2825  push 1
    X86_AT(c, 0xe2825u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2827  call 0xe58cc
    X86_AT(c, 0xe2827u);
    push32(c, 0xe282cu); f_000e58cc(c); X86_RET(c, 0xe282cu);
    X86_TICK(c, 15);
    // 0e282c  push 0xff
    X86_AT(c, 0xe282cu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e2831  push 0xff
    X86_AT(c, 0xe2831u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e2836  push 0xff
    X86_AT(c, 0xe2836u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e283b  push 1
    X86_AT(c, 0xe283bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e283d  call 0xe5700
    X86_AT(c, 0xe283du);
    push32(c, 0xe2842u); f_000e5700(c); X86_RET(c, 0xe2842u);
    X86_TICK(c, 9);
    // 0e2842  push 5
    X86_AT(c, 0xe2842u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e2844  call 0xe9740
    X86_AT(c, 0xe2844u);
    push32(c, 0xe2849u); f_000e9740(c); X86_RET(c, 0xe2849u);
    X86_TICK(c, 15);
    // 0e2849  push 0xff
    X86_AT(c, 0xe2849u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e284e  push 0xff
    X86_AT(c, 0xe284eu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e2853  push 0xff
    X86_AT(c, 0xe2853u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e2858  push 2
    X86_AT(c, 0xe2858u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e285a  call 0xe5700
    X86_AT(c, 0xe285au);
    push32(c, 0xe285fu); f_000e5700(c); X86_RET(c, 0xe285fu);
    X86_TICK(c, 9);
    // 0e285f  push 5
    X86_AT(c, 0xe285fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e2861  call 0xe9740
    X86_AT(c, 0xe2861u);
    push32(c, 0xe2866u); f_000e9740(c); X86_RET(c, 0xe2866u);
    X86_TICK(c, 15);
    // 0e2866  push 0xff
    X86_AT(c, 0xe2866u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e286b  push 0xff
    X86_AT(c, 0xe286bu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e2870  push 0xff
    X86_AT(c, 0xe2870u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e2875  push 3
    X86_AT(c, 0xe2875u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e2877  call 0xe5700
    X86_AT(c, 0xe2877u);
    push32(c, 0xe287cu); f_000e5700(c); X86_RET(c, 0xe287cu);
    X86_TICK(c, 11);
    // 0e287c  add esp, 0x3c
    X86_AT(c, 0xe287cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e287f  push 5
    X86_AT(c, 0xe287fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e2881  call 0xe9740
    X86_AT(c, 0xe2881u);
    push32(c, 0xe2886u); f_000e9740(c); X86_RET(c, 0xe2886u);
    X86_TICK(c, 15);
    // 0e2886  push 0xff
    X86_AT(c, 0xe2886u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e288b  push 0xff
    X86_AT(c, 0xe288bu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e2890  push 0xff
    X86_AT(c, 0xe2890u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e2895  push 4
    X86_AT(c, 0xe2895u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e2897  call 0xe5700
    X86_AT(c, 0xe2897u);
    push32(c, 0xe289cu); f_000e5700(c); X86_RET(c, 0xe289cu);
    X86_TICK(c, 9);
    // 0e289c  push 5
    X86_AT(c, 0xe289cu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e289e  call 0xe9740
    X86_AT(c, 0xe289eu);
    push32(c, 0xe28a3u); f_000e9740(c); X86_RET(c, 0xe28a3u);
    X86_TICK(c, 15);
    // 0e28a3  push 0xff
    X86_AT(c, 0xe28a3u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e28a8  push 0xff
    X86_AT(c, 0xe28a8u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e28ad  push 0xff
    X86_AT(c, 0xe28adu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e28b2  push 5
    X86_AT(c, 0xe28b2u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e28b4  call 0xe5700
    X86_AT(c, 0xe28b4u);
    push32(c, 0xe28b9u); f_000e5700(c); X86_RET(c, 0xe28b9u);
    X86_TICK(c, 9);
    // 0e28b9  push 5
    X86_AT(c, 0xe28b9u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e28bb  call 0xe9740
    X86_AT(c, 0xe28bbu);
    push32(c, 0xe28c0u); f_000e9740(c); X86_RET(c, 0xe28c0u);
    X86_TICK(c, 15);
    // 0e28c0  push 0xff
    X86_AT(c, 0xe28c0u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e28c5  push 0xff
    X86_AT(c, 0xe28c5u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e28ca  push 0xff
    X86_AT(c, 0xe28cau);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e28cf  push 6
    X86_AT(c, 0xe28cfu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0e28d1  call 0xe5700
    X86_AT(c, 0xe28d1u);
    push32(c, 0xe28d6u); f_000e5700(c); X86_RET(c, 0xe28d6u);
    X86_TICK(c, 11);
    // 0e28d6  add esp, 0x3c
    X86_AT(c, 0xe28d6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e28d9  push 5
    X86_AT(c, 0xe28d9u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e28db  call 0xe9740
    X86_AT(c, 0xe28dbu);
    push32(c, 0xe28e0u); f_000e9740(c); X86_RET(c, 0xe28e0u);
    X86_TICK(c, 4);
    // 0e28e0  sub edi, edi
    X86_AT(c, 0xe28e0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0e28e2  add esp, 4
    X86_AT(c, 0xe28e2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e28e5:
    X86_TICK(c, 7);
    // 0e28e5  cmp edi, 6
    X86_AT(c, 0xe28e5u);
    (void)x86_sub(c, c.r[7], 0x6u, 0, 4);
    // 0e28e8  jge 0xe2a05
    X86_AT(c, 0xe28e8u);
    if (x86_cc(c, 13)) { goto L_e2a05; }
    X86_TICK(c, 15);
    // 0e28ee  push 0xe6
    X86_AT(c, 0xe28eeu);
    { uint32_t v = 0xE6u; push32(c, v); }
    // 0e28f3  push 0xe6
    X86_AT(c, 0xe28f3u);
    { uint32_t v = 0xE6u; push32(c, v); }
    // 0e28f8  push 0xe6
    X86_AT(c, 0xe28f8u);
    { uint32_t v = 0xE6u; push32(c, v); }
    // 0e28fd  push 1
    X86_AT(c, 0xe28fdu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e28ff  call 0xe5700
    X86_AT(c, 0xe28ffu);
    push32(c, 0xe2904u); f_000e5700(c); X86_RET(c, 0xe2904u);
    X86_TICK(c, 15);
    // 0e2904  push 0xe6
    X86_AT(c, 0xe2904u);
    { uint32_t v = 0xE6u; push32(c, v); }
    // 0e2909  push 0xe6
    X86_AT(c, 0xe2909u);
    { uint32_t v = 0xE6u; push32(c, v); }
    // 0e290e  push 0xe6
    X86_AT(c, 0xe290eu);
    { uint32_t v = 0xE6u; push32(c, v); }
    // 0e2913  push 2
    X86_AT(c, 0xe2913u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e2915  call 0xe5700
    X86_AT(c, 0xe2915u);
    push32(c, 0xe291au); f_000e5700(c); X86_RET(c, 0xe291au);
    X86_TICK(c, 15);
    // 0e291a  push 0xc8
    X86_AT(c, 0xe291au);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0e291f  push 0xc8
    X86_AT(c, 0xe291fu);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0e2924  push 0xc8
    X86_AT(c, 0xe2924u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0e2929  push 3
    X86_AT(c, 0xe2929u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e292b  call 0xe5700
    X86_AT(c, 0xe292bu);
    push32(c, 0xe2930u); f_000e5700(c); X86_RET(c, 0xe2930u);
    X86_TICK(c, 15);
    // 0e2930  push 0xe6
    X86_AT(c, 0xe2930u);
    { uint32_t v = 0xE6u; push32(c, v); }
    // 0e2935  push 0xe6
    X86_AT(c, 0xe2935u);
    { uint32_t v = 0xE6u; push32(c, v); }
    // 0e293a  push 0xc8
    X86_AT(c, 0xe293au);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0e293f  push 4
    X86_AT(c, 0xe293fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e2941  call 0xe5700
    X86_AT(c, 0xe2941u);
    push32(c, 0xe2946u); f_000e5700(c); X86_RET(c, 0xe2946u);
    X86_TICK(c, 17);
    // 0e2946  add esp, 0x40
    X86_AT(c, 0xe2946u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e2949  push 0xc8
    X86_AT(c, 0xe2949u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0e294e  push 0xc8
    X86_AT(c, 0xe294eu);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0e2953  push 0xc8
    X86_AT(c, 0xe2953u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0e2958  push 5
    X86_AT(c, 0xe2958u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e295a  call 0xe5700
    X86_AT(c, 0xe295au);
    push32(c, 0xe295fu); f_000e5700(c); X86_RET(c, 0xe295fu);
    X86_TICK(c, 15);
    // 0e295f  push 0xc8
    X86_AT(c, 0xe295fu);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0e2964  push 0xc8
    X86_AT(c, 0xe2964u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0e2969  push 0xc8
    X86_AT(c, 0xe2969u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 0e296e  push 6
    X86_AT(c, 0xe296eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0e2970  call 0xe5700
    X86_AT(c, 0xe2970u);
    push32(c, 0xe2975u); f_000e5700(c); X86_RET(c, 0xe2975u);
    X86_TICK(c, 15);
    // 0e2975  push 0xff
    X86_AT(c, 0xe2975u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e297a  push 0xff
    X86_AT(c, 0xe297au);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e297f  push 0xff
    X86_AT(c, 0xe297fu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e2984  push 1
    X86_AT(c, 0xe2984u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e2986  call 0xe5700
    X86_AT(c, 0xe2986u);
    push32(c, 0xe298bu); f_000e5700(c); X86_RET(c, 0xe298bu);
    X86_TICK(c, 15);
    // 0e298b  push 0xff
    X86_AT(c, 0xe298bu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e2990  push 0xff
    X86_AT(c, 0xe2990u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e2995  push 0xff
    X86_AT(c, 0xe2995u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e299a  push 2
    X86_AT(c, 0xe299au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e299c  call 0xe5700
    X86_AT(c, 0xe299cu);
    push32(c, 0xe29a1u); f_000e5700(c); X86_RET(c, 0xe29a1u);
    X86_TICK(c, 17);
    // 0e29a1  add esp, 0x40
    X86_AT(c, 0xe29a1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e29a4  push 0xff
    X86_AT(c, 0xe29a4u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e29a9  push 0xff
    X86_AT(c, 0xe29a9u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e29ae  push 0xff
    X86_AT(c, 0xe29aeu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e29b3  push 3
    X86_AT(c, 0xe29b3u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e29b5  call 0xe5700
    X86_AT(c, 0xe29b5u);
    push32(c, 0xe29bau); f_000e5700(c); X86_RET(c, 0xe29bau);
    X86_TICK(c, 15);
    // 0e29ba  push 0xff
    X86_AT(c, 0xe29bau);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e29bf  push 0xff
    X86_AT(c, 0xe29bfu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e29c4  push 0xff
    X86_AT(c, 0xe29c4u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e29c9  push 4
    X86_AT(c, 0xe29c9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e29cb  call 0xe5700
    X86_AT(c, 0xe29cbu);
    push32(c, 0xe29d0u); f_000e5700(c); X86_RET(c, 0xe29d0u);
    X86_TICK(c, 15);
    // 0e29d0  push 0xff
    X86_AT(c, 0xe29d0u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e29d5  push 0xff
    X86_AT(c, 0xe29d5u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e29da  push 0xff
    X86_AT(c, 0xe29dau);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e29df  push 5
    X86_AT(c, 0xe29dfu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e29e1  call 0xe5700
    X86_AT(c, 0xe29e1u);
    push32(c, 0xe29e6u); f_000e5700(c); X86_RET(c, 0xe29e6u);
    X86_TICK(c, 15);
    // 0e29e6  push 0xff
    X86_AT(c, 0xe29e6u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e29eb  push 0xff
    X86_AT(c, 0xe29ebu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e29f0  push 0xff
    X86_AT(c, 0xe29f0u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0e29f5  push 6
    X86_AT(c, 0xe29f5u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0e29f7  call 0xe5700
    X86_AT(c, 0xe29f7u);
    push32(c, 0xe29fcu); f_000e5700(c); X86_RET(c, 0xe29fcu);
    X86_TICK(c, 11);
    // 0e29fc  add esp, 0x40
    X86_AT(c, 0xe29fcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e29ff  inc edi
    X86_AT(c, 0xe29ffu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e2a00  jmp 0xe28e5
    X86_AT(c, 0xe2a00u);
    X86_POLL(c, 0xe28e5u); goto L_e28e5;
L_e2a05:
    X86_TICK(c, 9);
    // 0e2a05  push 5
    X86_AT(c, 0xe2a05u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e2a07  call 0xe9740
    X86_AT(c, 0xe2a07u);
    push32(c, 0xe2a0cu); f_000e9740(c); X86_RET(c, 0xe2a0cu);
    X86_TICK(c, 9);
    // 0e2a0c  push 5
    X86_AT(c, 0xe2a0cu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e2a0e  call 0xe7810
    X86_AT(c, 0xe2a0eu);
    push32(c, 0xe2a13u); f_000e7810(c); X86_RET(c, 0xe2a13u);
    X86_TICK(c, 9);
    // 0e2a13  push 0
    X86_AT(c, 0xe2a13u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e2a15  call 0xe58cc
    X86_AT(c, 0xe2a15u);
    push32(c, 0xe2a1au); f_000e58cc(c); X86_RET(c, 0xe2a1au);
    X86_TICK(c, 16);
    // 0e2a1a  add esp, 0xc
    X86_AT(c, 0xe2a1au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e2a1d  pop edi
    X86_AT(c, 0xe2a1du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e2a1e  ret 
    X86_AT(c, 0xe2a1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe2824u, "ran off the end of a function");
}
}
