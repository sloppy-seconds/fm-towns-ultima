#include "p_game_funcs.h"
namespace p_game {
void f_000e553c(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0e553c  push ebp
    X86_AT(c, 0xe553cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e553d  mov ebp, esp
    X86_AT(c, 0xe553du);
    c.r[5] = c.r[4];
    // 0e553f  sub esp, 8
    X86_AT(c, 0xe553fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0e5542  push ebx
    X86_AT(c, 0xe5542u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e5543  push esi
    X86_AT(c, 0xe5543u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e5544  push edi
    X86_AT(c, 0xe5544u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5545  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe5545u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e5548  push edi
    X86_AT(c, 0xe5548u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5549  call 0xe52a8
    X86_AT(c, 0xe5549u);
    push32(c, 0xe554eu); f_000e52a8(c); X86_RET(c, 0xe554eu);
    X86_TICK(c, 9);
    // 0e554e  sub ebx, ebx
    X86_AT(c, 0xe554eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0e5550  call 0xe4324
    X86_AT(c, 0xe5550u);
    push32(c, 0xe5555u); f_000e4324(c); X86_RET(c, 0xe5555u);
    X86_TICK(c, 17);
    // 0e5555  sub ebx, ebx
    X86_AT(c, 0xe5555u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0e5557  mov dword ptr [ebp - 4], ebx
    X86_AT(c, 0xe5557u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[3]);
    // 0e555a  mov esi, ebx
    X86_AT(c, 0xe555au);
    c.r[6] = c.r[3];
    // 0e555c  push esi
    X86_AT(c, 0xe555cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e555d  push edi
    X86_AT(c, 0xe555du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e555e  call 0xe51c4
    X86_AT(c, 0xe555eu);
    push32(c, 0xe5563u); f_000e51c4(c); X86_RET(c, 0xe5563u);
    X86_TICK(c, 2);
    // 0e5563  add esp, 0xc
    X86_AT(c, 0xe5563u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_e5566:
    X86_TICK(c, 12);
    // 0e5566  push dword ptr [ebp + 8]
    X86_AT(c, 0xe5566u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e5569  call 0xe4b60
    X86_AT(c, 0xe5569u);
    push32(c, 0xe556eu); f_000e4b60(c); X86_RET(c, 0xe556eu);
    X86_TICK(c, 12);
    // 0e556e  xchg ebx, eax
    X86_AT(c, 0xe556eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e556f  add esp, 4
    X86_AT(c, 0xe556fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e5572  and bl, bl
    X86_AT(c, 0xe5572u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e5574  je 0xe5566
    X86_AT(c, 0xe5574u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe5566u); goto L_e5566; }
    X86_TICK(c, 7);
    // 0e5576  cmp bl, 4
    X86_AT(c, 0xe5576u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0e5579  je 0xe55fc
    X86_AT(c, 0xe5579u);
    if (x86_cc(c, 4)) { goto L_e55fc; }
    X86_TICK(c, 7);
    // 0e557f  cmp bl, 5
    X86_AT(c, 0xe557fu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0e5582  jne 0xe558f
    X86_AT(c, 0xe5582u);
    if (x86_cc(c, 5)) { goto L_e558f; }
    X86_TICK(c, 9);
    // 0e5584  dec esi
    X86_AT(c, 0xe5584u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0e5585  and esi, esi
    X86_AT(c, 0xe5585u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e5587  jge 0xe559c
    X86_AT(c, 0xe5587u);
    if (x86_cc(c, 13)) { goto L_e559c; }
    X86_TICK(c, 13);
    // 0e5589  mov esi, dword ptr [edi + 4]
    X86_AT(c, 0xe5589u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 0e558c  dec esi
    X86_AT(c, 0xe558cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0e558d  jmp 0xe559c
    X86_AT(c, 0xe558du);
    goto L_e559c;
L_e558f:
    X86_TICK(c, 7);
    // 0e558f  cmp bl, 6
    X86_AT(c, 0xe558fu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0e5592  jne 0xe55a8
    X86_AT(c, 0xe5592u);
    if (x86_cc(c, 5)) { goto L_e55a8; }
    X86_TICK(c, 13);
    // 0e5594  inc esi
    X86_AT(c, 0xe5594u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e5595  cmp esi, dword ptr [edi + 4]
    X86_AT(c, 0xe5595u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4);
    // 0e5598  jl 0xe559c
    X86_AT(c, 0xe5598u);
    if (x86_cc(c, 12)) { goto L_e559c; }
    X86_TICK(c, 2);
    // 0e559a  sub esi, esi
    X86_AT(c, 0xe559au);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_e559c:
    X86_TICK(c, 11);
    // 0e559c  push esi
    X86_AT(c, 0xe559cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e559d  push edi
    X86_AT(c, 0xe559du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e559e  call 0xe51c4
    X86_AT(c, 0xe559eu);
    push32(c, 0xe55a3u); f_000e51c4(c); X86_RET(c, 0xe55a3u);
    X86_TICK(c, 9);
    // 0e55a3  add esp, 8
    X86_AT(c, 0xe55a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e55a6  jmp 0xe5566
    X86_AT(c, 0xe55a6u);
    X86_POLL(c, 0xe5566u); goto L_e5566;
L_e55a8:
    X86_TICK(c, 7);
    // 0e55a8  cmp bl, 1
    X86_AT(c, 0xe55a8u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0e55ab  jne 0xe55d7
    X86_AT(c, 0xe55abu);
    if (x86_cc(c, 5)) { goto L_e55d7; }
    X86_TICK(c, 18);
    // 0e55ad  lea eax, [ebp - 5]
    X86_AT(c, 0xe55adu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0e55b0  push eax
    X86_AT(c, 0xe55b0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e55b1  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xe55b1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0e55b4  push edi
    X86_AT(c, 0xe55b4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e55b5  call 0xe532c
    X86_AT(c, 0xe55b5u);
    push32(c, 0xe55bau); f_000e532c(c); X86_RET(c, 0xe55bau);
    X86_TICK(c, 11);
    // 0e55ba  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe55bau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e55bd  add esp, 0xc
    X86_AT(c, 0xe55bdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e55c0  inc eax
    X86_AT(c, 0xe55c0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e55c1  jne 0xe55d2
    X86_AT(c, 0xe55c1u);
    if (x86_cc(c, 5)) { goto L_e55d2; }
    X86_TICK(c, 11);
    // 0e55c3  push esi
    X86_AT(c, 0xe55c3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e55c4  push edi
    X86_AT(c, 0xe55c4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e55c5  call 0xe51c4
    X86_AT(c, 0xe55c5u);
    push32(c, 0xe55cau); f_000e51c4(c); X86_RET(c, 0xe55cau);
    X86_TICK(c, 13);
    // 0e55ca  mov al, byte ptr [ebp + 0x10]
    X86_AT(c, 0xe55cau);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0e55cd  add esp, 8
    X86_AT(c, 0xe55cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e55d0  jmp 0xe5628
    X86_AT(c, 0xe55d0u);
    goto L_e5628;
L_e55d2:
    X86_TICK(c, 11);
    // 0e55d2  mov esi, dword ptr [ebp - 4]
    X86_AT(c, 0xe55d2u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e55d5  jmp 0xe55f2
    X86_AT(c, 0xe55d5u);
    goto L_e55f2;
L_e55d7:
    X86_TICK(c, 15);
    // 0e55d7  lea eax, [ebp - 5]
    X86_AT(c, 0xe55d7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0e55da  push eax
    X86_AT(c, 0xe55dau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e55db  push ebx
    X86_AT(c, 0xe55dbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e55dc  push edi
    X86_AT(c, 0xe55dcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e55dd  call 0xe532c
    X86_AT(c, 0xe55ddu);
    push32(c, 0xe55e2u); f_000e532c(c); X86_RET(c, 0xe55e2u);
    X86_TICK(c, 11);
    // 0e55e2  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe55e2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e55e5  add esp, 0xc
    X86_AT(c, 0xe55e5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e55e8  cmp eax, 0xffffffff
    X86_AT(c, 0xe55e8u);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFFu, 0, 4);
    // 0e55eb  je 0xe5566
    X86_AT(c, 0xe55ebu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe5566u); goto L_e5566; }
    X86_TICK(c, 3);
    // 0e55f1  xchg esi, eax
    X86_AT(c, 0xe55f1u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_e55f2:
    X86_TICK(c, 11);
    // 0e55f2  push esi
    X86_AT(c, 0xe55f2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e55f3  push edi
    X86_AT(c, 0xe55f3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e55f4  call 0xe51c4
    X86_AT(c, 0xe55f4u);
    push32(c, 0xe55f9u); f_000e51c4(c); X86_RET(c, 0xe55f9u);
    X86_TICK(c, 2);
    // 0e55f9  add esp, 8
    X86_AT(c, 0xe55f9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_e55fc:
    X86_TICK(c, 9);
    // 0e55fc  push 2
    X86_AT(c, 0xe55fcu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e55fe  call 0xe9740
    X86_AT(c, 0xe55feu);
    push32(c, 0xe5603u); f_000e9740(c); X86_RET(c, 0xe5603u);
    X86_TICK(c, 11);
    // 0e5603  push esi
    X86_AT(c, 0xe5603u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e5604  push edi
    X86_AT(c, 0xe5604u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5605  call 0xe51c4
    X86_AT(c, 0xe5605u);
    push32(c, 0xe560au); f_000e51c4(c); X86_RET(c, 0xe560au);
    X86_TICK(c, 16);
    // 0e560a  lea eax, [esi*4]
    X86_AT(c, 0xe560au);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0e5611  lea edx, [eax*8]
    X86_AT(c, 0xe5611u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0e5618  lea edx, [eax + edx*4]
    X86_AT(c, 0xe5618u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0e561b  mov eax, dword ptr [edi + 0x1c]
    X86_AT(c, 0xe561bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)));
    // 0e561e  mov al, byte ptr [eax + edx*1 + 0x83]
    X86_AT(c, 0xe561eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x83u))));
    // 0e5625  add esp, 0xc
    X86_AT(c, 0xe5625u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_e5628:
    X86_TICK(c, 28);
    // 0e5628  pop edi
    X86_AT(c, 0xe5628u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e5629  pop esi
    X86_AT(c, 0xe5629u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e562a  pop ebx
    X86_AT(c, 0xe562au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e562b  leave 
    X86_AT(c, 0xe562bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e562c  ret 
    X86_AT(c, 0xe562cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe553cu, "ran off the end of a function");
}
void f_000e5630(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0e5630  push ebp
    X86_AT(c, 0xe5630u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e5631  mov ebp, esp
    X86_AT(c, 0xe5631u);
    c.r[5] = c.r[4];
    // 0e5633  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xe5633u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0e5636  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe5636u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e5639  call 0xe3ff0
    X86_AT(c, 0xe5639u);
    push32(c, 0xe563eu); f_000e3ff0(c); X86_RET(c, 0xe563eu);
    X86_TICK(c, 9);
    // 0e563e  push eax
    X86_AT(c, 0xe563eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e563f  call 0xe4058
    X86_AT(c, 0xe563fu);
    push32(c, 0xe5644u); f_000e4058(c); X86_RET(c, 0xe5644u);
    X86_TICK(c, 14);
    // 0e5644  push eax
    X86_AT(c, 0xe5644u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5645  push dword ptr [ebp + 8]
    X86_AT(c, 0xe5645u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e5648  call 0xe6cb0
    X86_AT(c, 0xe5648u);
    push32(c, 0xe564du); f_000e6cb0(c); X86_RET(c, 0xe564du);
    X86_TICK(c, 18);
    // 0e564d  add esp, 0x14
    X86_AT(c, 0xe564du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0e5650  leave 
    X86_AT(c, 0xe5650u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e5651  ret 
    X86_AT(c, 0xe5651u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5630u, "ran off the end of a function");
}
void f_000e5654(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0e5654  push ebp
    X86_AT(c, 0xe5654u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e5655  mov ebp, esp
    X86_AT(c, 0xe5655u);
    c.r[5] = c.r[4];
    // 0e5657  push edi
    X86_AT(c, 0xe5657u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5658  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe5658u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e565b  cmp dword ptr [0x7a6b4], 0
    X86_AT(c, 0xe565bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x7A6B4u))), 0x0u, 0, 4);
    // 0e5662  je 0xe566b
    X86_AT(c, 0xe5662u);
    if (x86_cc(c, 4)) { goto L_e566b; }
L_e5664:
    X86_TICK(c, 14);
    // 0e5664  inc edi
    X86_AT(c, 0xe5664u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e5665  cmp byte ptr [edi - 1], 0
    X86_AT(c, 0xe5665u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0e5669  jne 0xe5664
    X86_AT(c, 0xe5669u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe5664u); goto L_e5664; }
L_e566b:
    X86_TICK(c, 14);
    // 0e566b  push edi
    X86_AT(c, 0xe566bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e566c  push dword ptr [ebp + 8]
    X86_AT(c, 0xe566cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e566f  call 0xe6cb0
    X86_AT(c, 0xe566fu);
    push32(c, 0xe5674u); f_000e6cb0(c); X86_RET(c, 0xe5674u);
    X86_TICK(c, 22);
    // 0e5674  add esp, 8
    X86_AT(c, 0xe5674u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e5677  pop edi
    X86_AT(c, 0xe5677u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e5678  leave 
    X86_AT(c, 0xe5678u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e5679  ret 
    X86_AT(c, 0xe5679u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5654u, "ran off the end of a function");
}
void f_000e5690(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0e5690  push edi
    X86_AT(c, 0xe5690u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5691  mov dword ptr [0x7add8], 1
    X86_AT(c, 0xe5691u);
    wr32((c.sbase[3] + (uint32_t)(0x7ADD8u)), 0x1u);
    // 0e569b  mov byte ptr [0x7ade3], 0
    X86_AT(c, 0xe569bu);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE3u)), 0x0u);
    // 0e56a2  mov edi, 1
    X86_AT(c, 0xe56a2u);
    c.r[7] = 0x1u;
L_e56a7:
    X86_TICK(c, 7);
    // 0e56a7  cmp edi, 0x10
    X86_AT(c, 0xe56a7u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0e56aa  jge 0xe56fe
    X86_AT(c, 0xe56aau);
    if (x86_cc(c, 13)) { goto L_e56fe; }
    X86_TICK(c, 41);
    // 0e56ac  mov dword ptr [0x7addc], edi
    X86_AT(c, 0xe56acu);
    wr32((c.sbase[3] + (uint32_t)(0x7ADDCu)), c.r[7]);
    // 0e56b2  mov eax, 0x7a7d0
    X86_AT(c, 0xe56b2u);
    c.r[0] = 0x7A7D0u;
    // 0e56b7  lea edx, [edi*4]
    X86_AT(c, 0xe56b7u);
    c.r[2] = (uint32_t)(c.r[7] * 4);
    // 0e56be  lea edx, [edx + edx*2]
    X86_AT(c, 0xe56beu);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0e56c1  mov cl, byte ptr [eax + edx*1 + 0x648]
    X86_AT(c, 0xe56c1u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x648u))));
    // 0e56c8  mov byte ptr [0x7ade0], cl
    X86_AT(c, 0xe56c8u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE0u)), g8(c, 1));
    // 0e56ce  mov cl, byte ptr [eax + edx*1 + 0x64c]
    X86_AT(c, 0xe56ceu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x64Cu))));
    // 0e56d5  mov byte ptr [0x7ade1], cl
    X86_AT(c, 0xe56d5u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE1u)), g8(c, 1));
    // 0e56db  mov dl, byte ptr [eax + edx*1 + 0x650]
    X86_AT(c, 0xe56dbu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x650u))));
    // 0e56e2  mov byte ptr [0x7ade2], dl
    X86_AT(c, 0xe56e2u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE2u)), g8(c, 2));
    // 0e56e8  push 0x7add8
    X86_AT(c, 0xe56e8u);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e56ed  push 1
    X86_AT(c, 0xe56edu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e56ef  add eax, 8
    X86_AT(c, 0xe56efu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e56f2  push eax
    X86_AT(c, 0xe56f2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e56f3  call 0x19c
    X86_AT(c, 0xe56f3u);
    push32(c, 0xe56f8u); f_0000019c(c); X86_RET(c, 0xe56f8u);
    X86_TICK(c, 11);
    // 0e56f8  inc edi
    X86_AT(c, 0xe56f8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e56f9  add esp, 0xc
    X86_AT(c, 0xe56f9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e56fc  jmp 0xe56a7
    X86_AT(c, 0xe56fcu);
    X86_POLL(c, 0xe56a7u); goto L_e56a7;
L_e56fe:
    X86_TICK(c, 14);
    // 0e56fe  pop edi
    X86_AT(c, 0xe56feu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e56ff  ret 
    X86_AT(c, 0xe56ffu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5690u, "ran off the end of a function");
}
void f_000e5700(X86Cpu& c) {
    X86_TICK(c, 45);
    // 0e5700  push ebp
    X86_AT(c, 0xe5700u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e5701  mov ebp, esp
    X86_AT(c, 0xe5701u);
    c.r[5] = c.r[4];
    // 0e5703  mov dword ptr [0x7add8], 1
    X86_AT(c, 0xe5703u);
    wr32((c.sbase[3] + (uint32_t)(0x7ADD8u)), 0x1u);
    // 0e570d  mov byte ptr [0x7ade3], 0
    X86_AT(c, 0xe570du);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE3u)), 0x0u);
    // 0e5714  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe5714u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e5717  mov dword ptr [0x7addc], eax
    X86_AT(c, 0xe5717u);
    wr32((c.sbase[3] + (uint32_t)(0x7ADDCu)), c.r[0]);
    // 0e571c  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0xe571cu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0e571f  mov byte ptr [0x7ade0], al
    X86_AT(c, 0xe571fu);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE0u)), g8(c, 0));
    // 0e5724  mov al, byte ptr [ebp + 0x10]
    X86_AT(c, 0xe5724u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0e5727  mov byte ptr [0x7ade1], al
    X86_AT(c, 0xe5727u);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE1u)), g8(c, 0));
    // 0e572c  mov al, byte ptr [ebp + 0x14]
    X86_AT(c, 0xe572cu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0e572f  mov byte ptr [0x7ade2], al
    X86_AT(c, 0xe572fu);
    wr8((c.sbase[3] + (uint32_t)(0x7ADE2u)), g8(c, 0));
    // 0e5734  push 0x7add8
    X86_AT(c, 0xe5734u);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e5739  push 1
    X86_AT(c, 0xe5739u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e573b  push 0x7a7d8
    X86_AT(c, 0xe573bu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5740  call 0x19c
    X86_AT(c, 0xe5740u);
    push32(c, 0xe5745u); f_0000019c(c); X86_RET(c, 0xe5745u);
    X86_TICK(c, 16);
    // 0e5745  leave 
    X86_AT(c, 0xe5745u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e5746  ret 
    X86_AT(c, 0xe5746u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5700u, "ran off the end of a function");
}
void f_000e5748(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e5748  push ebp
    X86_AT(c, 0xe5748u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e5749  mov ebp, esp
    X86_AT(c, 0xe5749u);
    c.r[5] = c.r[4];
    // 0e574b  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0xe574bu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e574f  push eax
    X86_AT(c, 0xe574fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5750  push 0
    X86_AT(c, 0xe5750u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e5752  push 0x7a7d8
    X86_AT(c, 0xe5752u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5757  call 0x20e
    X86_AT(c, 0xe5757u);
    push32(c, 0xe575cu); f_0000020e(c); X86_RET(c, 0xe575cu);
    X86_TICK(c, 16);
    // 0e575c  leave 
    X86_AT(c, 0xe575cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e575d  ret 
    X86_AT(c, 0xe575du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5748u, "ran off the end of a function");
}
void f_000e5760(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e5760  push ebp
    X86_AT(c, 0xe5760u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e5761  mov ebp, esp
    X86_AT(c, 0xe5761u);
    c.r[5] = c.r[4];
    // 0e5763  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0xe5763u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e5767  push eax
    X86_AT(c, 0xe5767u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5768  push 1
    X86_AT(c, 0xe5768u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e576a  push 0x7a7d8
    X86_AT(c, 0xe576au);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e576f  call 0x20e
    X86_AT(c, 0xe576fu);
    push32(c, 0xe5774u); f_0000020e(c); X86_RET(c, 0xe5774u);
    X86_TICK(c, 16);
    // 0e5774  leave 
    X86_AT(c, 0xe5774u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e5775  ret 
    X86_AT(c, 0xe5775u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5760u, "ran off the end of a function");
}
void f_000e5778(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e5778  push ebp
    X86_AT(c, 0xe5778u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e5779  mov ebp, esp
    X86_AT(c, 0xe5779u);
    c.r[5] = c.r[4];
    // 0e577b  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0xe577bu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e577f  push eax
    X86_AT(c, 0xe577fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5780  push 2
    X86_AT(c, 0xe5780u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e5782  push 0x7a7d8
    X86_AT(c, 0xe5782u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5787  call 0x20e
    X86_AT(c, 0xe5787u);
    push32(c, 0xe578cu); f_0000020e(c); X86_RET(c, 0xe578cu);
    X86_TICK(c, 16);
    // 0e578c  leave 
    X86_AT(c, 0xe578cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e578d  ret 
    X86_AT(c, 0xe578du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5778u, "ran off the end of a function");
}
void f_000e5790(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e5790  push ebp
    X86_AT(c, 0xe5790u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e5791  mov ebp, esp
    X86_AT(c, 0xe5791u);
    c.r[5] = c.r[4];
    // 0e5793  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0xe5793u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e5797  push eax
    X86_AT(c, 0xe5797u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5798  push 3
    X86_AT(c, 0xe5798u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e579a  push 0x7a7d8
    X86_AT(c, 0xe579au);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e579f  call 0x20e
    X86_AT(c, 0xe579fu);
    push32(c, 0xe57a4u); f_0000020e(c); X86_RET(c, 0xe57a4u);
    X86_TICK(c, 16);
    // 0e57a4  leave 
    X86_AT(c, 0xe57a4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e57a5  ret 
    X86_AT(c, 0xe57a5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5790u, "ran off the end of a function");
}
void f_000e57a8(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0e57a8  push ebp
    X86_AT(c, 0xe57a8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e57a9  mov ebp, esp
    X86_AT(c, 0xe57a9u);
    c.r[5] = c.r[4];
    // 0e57ab  push edi
    X86_AT(c, 0xe57abu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e57ac  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe57acu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e57af  sar eax, 3
    X86_AT(c, 0xe57afu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 0e57b2  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe57b2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e57b5  sar edx, 3
    X86_AT(c, 0xe57b5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0e57b8  shl edx, 5
    X86_AT(c, 0xe57b8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e57bb  add edx, eax
    X86_AT(c, 0xe57bbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e57bd  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe57bdu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e57c0  sar edi, 3
    X86_AT(c, 0xe57c0u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 0e57c3  shl edi, 0xa
    X86_AT(c, 0xe57c3u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 0e57c6  add edi, edx
    X86_AT(c, 0xe57c6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 0e57c8  push edi
    X86_AT(c, 0xe57c8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e57c9  push 0
    X86_AT(c, 0xe57c9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e57cb  push 0x7a7d8
    X86_AT(c, 0xe57cbu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e57d0  call 0x20e
    X86_AT(c, 0xe57d0u);
    push32(c, 0xe57d5u); f_0000020e(c); X86_RET(c, 0xe57d5u);
    X86_TICK(c, 22);
    // 0e57d5  add esp, 0xc
    X86_AT(c, 0xe57d5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e57d8  pop edi
    X86_AT(c, 0xe57d8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e57d9  leave 
    X86_AT(c, 0xe57d9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e57da  ret 
    X86_AT(c, 0xe57dau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe57a8u, "ran off the end of a function");
}
void f_000e57dc(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0e57dc  push ebp
    X86_AT(c, 0xe57dcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e57dd  mov ebp, esp
    X86_AT(c, 0xe57ddu);
    c.r[5] = c.r[4];
    // 0e57df  push edi
    X86_AT(c, 0xe57dfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e57e0  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe57e0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e57e3  sar eax, 3
    X86_AT(c, 0xe57e3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 0e57e6  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe57e6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e57e9  sar edx, 3
    X86_AT(c, 0xe57e9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0e57ec  shl edx, 5
    X86_AT(c, 0xe57ecu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e57ef  add edx, eax
    X86_AT(c, 0xe57efu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e57f1  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe57f1u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e57f4  sar edi, 3
    X86_AT(c, 0xe57f4u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 0e57f7  shl edi, 0xa
    X86_AT(c, 0xe57f7u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 0e57fa  add edi, edx
    X86_AT(c, 0xe57fau);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 0e57fc  push edi
    X86_AT(c, 0xe57fcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e57fd  push 1
    X86_AT(c, 0xe57fdu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e57ff  push 0x7a7d8
    X86_AT(c, 0xe57ffu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5804  call 0x20e
    X86_AT(c, 0xe5804u);
    push32(c, 0xe5809u); f_0000020e(c); X86_RET(c, 0xe5809u);
    X86_TICK(c, 22);
    // 0e5809  add esp, 0xc
    X86_AT(c, 0xe5809u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e580c  pop edi
    X86_AT(c, 0xe580cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e580d  leave 
    X86_AT(c, 0xe580du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e580e  ret 
    X86_AT(c, 0xe580eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe57dcu, "ran off the end of a function");
}
void f_000e5810(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0e5810  push ebp
    X86_AT(c, 0xe5810u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e5811  mov ebp, esp
    X86_AT(c, 0xe5811u);
    c.r[5] = c.r[4];
    // 0e5813  push dword ptr [ebp + 8]
    X86_AT(c, 0xe5813u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e5816  push 0x7a7d8
    X86_AT(c, 0xe5816u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e581b  call 0x4b1
    X86_AT(c, 0xe581bu);
    push32(c, 0xe5820u); f_000004b1(c); X86_RET(c, 0xe5820u);
    X86_TICK(c, 16);
    // 0e5820  leave 
    X86_AT(c, 0xe5820u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e5821  ret 
    X86_AT(c, 0xe5821u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5810u, "ran off the end of a function");
}
void f_000e583c(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0e583c  push ebp
    X86_AT(c, 0xe583cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e583d  mov ebp, esp
    X86_AT(c, 0xe583du);
    c.r[5] = c.r[4];
    // 0e583f  push edi
    X86_AT(c, 0xe583fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5840  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe5840u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e5843  sar eax, 3
    X86_AT(c, 0xe5843u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 0e5846  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe5846u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e5849  sar edx, 3
    X86_AT(c, 0xe5849u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0e584c  shl edx, 5
    X86_AT(c, 0xe584cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e584f  add edx, eax
    X86_AT(c, 0xe584fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e5851  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe5851u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e5854  sar edi, 3
    X86_AT(c, 0xe5854u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 0e5857  shl edi, 0xa
    X86_AT(c, 0xe5857u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 0e585a  add edi, edx
    X86_AT(c, 0xe585au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 0e585c  push edi
    X86_AT(c, 0xe585cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e585d  push 2
    X86_AT(c, 0xe585du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e585f  push 0x7a7d8
    X86_AT(c, 0xe585fu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5864  call 0x20e
    X86_AT(c, 0xe5864u);
    push32(c, 0xe5869u); f_0000020e(c); X86_RET(c, 0xe5869u);
    X86_TICK(c, 22);
    // 0e5869  add esp, 0xc
    X86_AT(c, 0xe5869u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e586c  pop edi
    X86_AT(c, 0xe586cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e586d  leave 
    X86_AT(c, 0xe586du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e586e  ret 
    X86_AT(c, 0xe586eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe583cu, "ran off the end of a function");
}
void f_000e5870(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0e5870  push ebp
    X86_AT(c, 0xe5870u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e5871  mov ebp, esp
    X86_AT(c, 0xe5871u);
    c.r[5] = c.r[4];
    // 0e5873  push edi
    X86_AT(c, 0xe5873u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5874  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe5874u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e5877  sar eax, 3
    X86_AT(c, 0xe5877u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 0e587a  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe587au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e587d  sar edx, 3
    X86_AT(c, 0xe587du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0e5880  shl edx, 5
    X86_AT(c, 0xe5880u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0e5883  add edx, eax
    X86_AT(c, 0xe5883u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e5885  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe5885u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e5888  sar edi, 3
    X86_AT(c, 0xe5888u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 0e588b  shl edi, 0xa
    X86_AT(c, 0xe588bu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 0e588e  add edi, edx
    X86_AT(c, 0xe588eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 0e5890  push edi
    X86_AT(c, 0xe5890u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5891  push 3
    X86_AT(c, 0xe5891u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e5893  push 0x7a7d8
    X86_AT(c, 0xe5893u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5898  call 0x20e
    X86_AT(c, 0xe5898u);
    push32(c, 0xe589du); f_0000020e(c); X86_RET(c, 0xe589du);
    X86_TICK(c, 22);
    // 0e589d  add esp, 0xc
    X86_AT(c, 0xe589du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e58a0  pop edi
    X86_AT(c, 0xe58a0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e58a1  leave 
    X86_AT(c, 0xe58a1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e58a2  ret 
    X86_AT(c, 0xe58a2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5870u, "ran off the end of a function");
}
void f_000e58a4(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0e58a4  push ebp
    X86_AT(c, 0xe58a4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e58a5  mov ebp, esp
    X86_AT(c, 0xe58a5u);
    c.r[5] = c.r[4];
    // 0e58a7  push dword ptr [ebp + 8]
    X86_AT(c, 0xe58a7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e58aa  push 0x7a7d8
    X86_AT(c, 0xe58aau);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e58af  call 0x2c5
    X86_AT(c, 0xe58afu);
    push32(c, 0xe58b4u); f_000002c5(c); X86_RET(c, 0xe58b4u);
    X86_TICK(c, 16);
    // 0e58b4  leave 
    X86_AT(c, 0xe58b4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e58b5  ret 
    X86_AT(c, 0xe58b5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe58a4u, "ran off the end of a function");
}
void f_000e58b8(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0e58b8  push ebp
    X86_AT(c, 0xe58b8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e58b9  mov ebp, esp
    X86_AT(c, 0xe58b9u);
    c.r[5] = c.r[4];
    // 0e58bb  push dword ptr [ebp + 8]
    X86_AT(c, 0xe58bbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e58be  push 0x7a7d8
    X86_AT(c, 0xe58beu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e58c3  call 0x27d
    X86_AT(c, 0xe58c3u);
    push32(c, 0xe58c8u); f_0000027d(c); X86_RET(c, 0xe58c8u);
    X86_TICK(c, 16);
    // 0e58c8  leave 
    X86_AT(c, 0xe58c8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e58c9  ret 
    X86_AT(c, 0xe58c9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe58b8u, "ran off the end of a function");
}
void f_000e58cc(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0e58cc  push ebp
    X86_AT(c, 0xe58ccu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e58cd  mov ebp, esp
    X86_AT(c, 0xe58cdu);
    c.r[5] = c.r[4];
    // 0e58cf  push dword ptr [ebp + 8]
    X86_AT(c, 0xe58cfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e58d2  push 0x7a7d8
    X86_AT(c, 0xe58d2u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e58d7  call 0x1c4
    X86_AT(c, 0xe58d7u);
    push32(c, 0xe58dcu); f_000001c4(c); X86_RET(c, 0xe58dcu);
    X86_TICK(c, 16);
    // 0e58dc  leave 
    X86_AT(c, 0xe58dcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e58dd  ret 
    X86_AT(c, 0xe58ddu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe58ccu, "ran off the end of a function");
}
void f_000e58e0(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0e58e0  push ebp
    X86_AT(c, 0xe58e0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e58e1  mov ebp, esp
    X86_AT(c, 0xe58e1u);
    c.r[5] = c.r[4];
    // 0e58e3  push edi
    X86_AT(c, 0xe58e3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e58e4  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe58e4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e58e7  inc edi
    X86_AT(c, 0xe58e7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e58e8  cmp edi, 4
    X86_AT(c, 0xe58e8u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0e58eb  jne 0xe58ef
    X86_AT(c, 0xe58ebu);
    if (x86_cc(c, 5)) { goto L_e58ef; }
    X86_TICK(c, 2);
    // 0e58ed  sub edi, edi
    X86_AT(c, 0xe58edu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e58ef:
    X86_TICK(c, 13);
    // 0e58ef  push edi
    X86_AT(c, 0xe58efu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e58f0  push 0
    X86_AT(c, 0xe58f0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e58f2  push 0x7a7d8
    X86_AT(c, 0xe58f2u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e58f7  call 0x1e6
    X86_AT(c, 0xe58f7u);
    push32(c, 0xe58fcu); f_000001e6(c); X86_RET(c, 0xe58fcu);
    X86_TICK(c, 22);
    // 0e58fc  add esp, 0xc
    X86_AT(c, 0xe58fcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e58ff  pop edi
    X86_AT(c, 0xe58ffu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e5900  leave 
    X86_AT(c, 0xe5900u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e5901  ret 
    X86_AT(c, 0xe5901u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe58e0u, "ran off the end of a function");
}
void f_000e5904(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0e5904  push ebp
    X86_AT(c, 0xe5904u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e5905  mov ebp, esp
    X86_AT(c, 0xe5905u);
    c.r[5] = c.r[4];
    // 0e5907  push edi
    X86_AT(c, 0xe5907u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5908  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe5908u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e590b  and edi, edi
    X86_AT(c, 0xe590bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e590d  jne 0xe591a
    X86_AT(c, 0xe590du);
    if (x86_cc(c, 5)) { goto L_e591a; }
    X86_TICK(c, 9);
    // 0e590f  mov word ptr [0x7aed8], 0xa
    X86_AT(c, 0xe590fu);
    wr16((c.sbase[3] + (uint32_t)(0x7AED8u)), 0xAu);
    // 0e5918  jmp 0xe592c
    X86_AT(c, 0xe5918u);
    goto L_e592c;
L_e591a:
    X86_TICK(c, 7);
    // 0e591a  cmp edi, 1
    X86_AT(c, 0xe591au);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0e591d  jne 0xe5a39
    X86_AT(c, 0xe591du);
    if (x86_cc(c, 5)) { goto L_e5a39; }
    X86_TICK(c, 2);
    // 0e5923  mov word ptr [0x7aeda], 0xa
    X86_AT(c, 0xe5923u);
    wr16((c.sbase[3] + (uint32_t)(0x7AEDAu)), 0xAu);
L_e592c:
    X86_TICK(c, 13);
    // 0e592c  push 1
    X86_AT(c, 0xe592cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e592e  push edi
    X86_AT(c, 0xe592eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e592f  push 0x7a7d8
    X86_AT(c, 0xe592fu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5934  call 0xea
    X86_AT(c, 0xe5934u);
    push32(c, 0xe5939u); f_000000ea(c); X86_RET(c, 0xe5939u);
    X86_TICK(c, 13);
    // 0e5939  push 0xa
    X86_AT(c, 0xe5939u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e593b  push edi
    X86_AT(c, 0xe593bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e593c  push 0x7a7d8
    X86_AT(c, 0xe593cu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5941  call 0xea
    X86_AT(c, 0xe5941u);
    push32(c, 0xe5946u); f_000000ea(c); X86_RET(c, 0xe5946u);
    X86_TICK(c, 9);
    // 0e5946  push edi
    X86_AT(c, 0xe5946u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5947  call 0xe58cc
    X86_AT(c, 0xe5947u);
    push32(c, 0xe594cu); f_000e58cc(c); X86_RET(c, 0xe594cu);
    X86_TICK(c, 22);
    // 0e594c  push dword ptr [0x7aed4]
    X86_AT(c, 0xe594cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x7AED4u))); push32(c, v); }
    // 0e5952  push dword ptr [0x7aed0]
    X86_AT(c, 0xe5952u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x7AED0u))); push32(c, v); }
    // 0e5958  push dword ptr [0x7aecc]
    X86_AT(c, 0xe5958u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x7AECCu))); push32(c, v); }
    // 0e595e  call 0xe57a8
    X86_AT(c, 0xe595eu);
    push32(c, 0xe5963u); f_000e57a8(c); X86_RET(c, 0xe5963u);
    X86_TICK(c, 22);
    // 0e5963  push dword ptr [0x7ae20]
    X86_AT(c, 0xe5963u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x7AE20u))); push32(c, v); }
    // 0e5969  push dword ptr [0x7ae1c]
    X86_AT(c, 0xe5969u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x7AE1Cu))); push32(c, v); }
    // 0e596f  push dword ptr [0x7ae18]
    X86_AT(c, 0xe596fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x7AE18u))); push32(c, v); }
    // 0e5975  call 0xe57dc
    X86_AT(c, 0xe5975u);
    push32(c, 0xe597au); f_000e57dc(c); X86_RET(c, 0xe597au);
    X86_TICK(c, 22);
    // 0e597a  push dword ptr [0x7aebc]
    X86_AT(c, 0xe597au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x7AEBCu))); push32(c, v); }
    // 0e5980  push dword ptr [0x7aeb8]
    X86_AT(c, 0xe5980u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x7AEB8u))); push32(c, v); }
    // 0e5986  push dword ptr [0x7aeb4]
    X86_AT(c, 0xe5986u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x7AEB4u))); push32(c, v); }
    // 0e598c  call 0xe583c
    X86_AT(c, 0xe598cu);
    push32(c, 0xe5991u); f_000e583c(c); X86_RET(c, 0xe5991u);
    X86_TICK(c, 24);
    // 0e5991  add esp, 0x40
    X86_AT(c, 0xe5991u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e5994  push dword ptr [0x7ae20]
    X86_AT(c, 0xe5994u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x7AE20u))); push32(c, v); }
    // 0e599a  push dword ptr [0x7ae1c]
    X86_AT(c, 0xe599au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x7AE1Cu))); push32(c, v); }
    // 0e59a0  push dword ptr [0x7ae18]
    X86_AT(c, 0xe59a0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x7AE18u))); push32(c, v); }
    // 0e59a6  call 0xe5870
    X86_AT(c, 0xe59a6u);
    push32(c, 0xe59abu); f_000e5870(c); X86_RET(c, 0xe59abu);
    X86_TICK(c, 19);
    // 0e59ab  mov word ptr [0x7add8], 0
    X86_AT(c, 0xe59abu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADD8u)), 0x0u);
    // 0e59b4  mov word ptr [0x7adda], 0
    X86_AT(c, 0xe59b4u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDAu)), 0x0u);
    // 0e59bd  mov word ptr [0x7addc], 0x13f
    X86_AT(c, 0xe59bdu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDCu)), 0x13Fu);
    // 0e59c6  mov word ptr [0x7adde], 0xef
    X86_AT(c, 0xe59c6u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDEu)), 0xEFu);
    // 0e59cf  push 0x7add8
    X86_AT(c, 0xe59cfu);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e59d4  push 0x7a7d8
    X86_AT(c, 0xe59d4u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e59d9  call 0x178
    X86_AT(c, 0xe59d9u);
    push32(c, 0xe59deu); f_00000178(c); X86_RET(c, 0xe59deu);
    X86_TICK(c, 15);
    // 0e59de  movsx eax, word ptr [0x7a7d4]
    X86_AT(c, 0xe59deu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x7A7D4u)));
    // 0e59e5  push eax
    X86_AT(c, 0xe59e5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e59e6  call 0xe58b8
    X86_AT(c, 0xe59e6u);
    push32(c, 0xe59ebu); f_000e58b8(c); X86_RET(c, 0xe59ebu);
    X86_TICK(c, 17);
    // 0e59eb  movsx eax, word ptr [0x7aedc]
    X86_AT(c, 0xe59ebu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x7AEDCu)));
    // 0e59f2  push eax
    X86_AT(c, 0xe59f2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e59f3  push 0x7a7d8
    X86_AT(c, 0xe59f3u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e59f8  call 0x2c5
    X86_AT(c, 0xe59f8u);
    push32(c, 0xe59fdu); f_000002c5(c); X86_RET(c, 0xe59fdu);
    X86_TICK(c, 15);
    // 0e59fd  push 0
    X86_AT(c, 0xe59fdu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e59ff  push 0
    X86_AT(c, 0xe59ffu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e5a01  push 0
    X86_AT(c, 0xe5a01u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e5a03  push 0x7a7d8
    X86_AT(c, 0xe5a03u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5a08  call 0x14a
    X86_AT(c, 0xe5a08u);
    push32(c, 0xe5a0du); f_0000014a(c); X86_RET(c, 0xe5a0du);
    X86_TICK(c, 17);
    // 0e5a0d  add esp, 0x30
    X86_AT(c, 0xe5a0du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0e5a10  push 2
    X86_AT(c, 0xe5a10u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e5a12  push 2
    X86_AT(c, 0xe5a12u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e5a14  push 2
    X86_AT(c, 0xe5a14u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e5a16  push 0x7a7d8
    X86_AT(c, 0xe5a16u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5a1b  call 0x14a
    X86_AT(c, 0xe5a1bu);
    push32(c, 0xe5a20u); f_0000014a(c); X86_RET(c, 0xe5a20u);
    X86_TICK(c, 15);
    // 0e5a20  push 0xf0
    X86_AT(c, 0xe5a20u);
    { uint32_t v = 0xF0u; push32(c, v); }
    // 0e5a25  push 0x140
    X86_AT(c, 0xe5a25u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 0e5a2a  push 3
    X86_AT(c, 0xe5a2au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e5a2c  push 0x7a7d8
    X86_AT(c, 0xe5a2cu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5a31  call 0x14a
    X86_AT(c, 0xe5a31u);
    push32(c, 0xe5a36u); f_0000014a(c); X86_RET(c, 0xe5a36u);
    X86_TICK(c, 2);
    // 0e5a36  add esp, 0x20
    X86_AT(c, 0xe5a36u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_e5a39:
    X86_TICK(c, 20);
    // 0e5a39  pop edi
    X86_AT(c, 0xe5a39u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e5a3a  leave 
    X86_AT(c, 0xe5a3au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e5a3b  ret 
    X86_AT(c, 0xe5a3bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5904u, "ran off the end of a function");
}
void f_000e5a3c(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0e5a3c  push ebp
    X86_AT(c, 0xe5a3cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e5a3d  mov ebp, esp
    X86_AT(c, 0xe5a3du);
    c.r[5] = c.r[4];
    // 0e5a3f  push edi
    X86_AT(c, 0xe5a3fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5a40  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe5a40u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e5a43  and edi, edi
    X86_AT(c, 0xe5a43u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e5a45  jne 0xe5a5a
    X86_AT(c, 0xe5a45u);
    if (x86_cc(c, 5)) { goto L_e5a5a; }
    X86_TICK(c, 15);
    // 0e5a47  push 0
    X86_AT(c, 0xe5a47u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e5a49  push 0
    X86_AT(c, 0xe5a49u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e5a4b  push 1
    X86_AT(c, 0xe5a4bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e5a4d  push 0x7a7d8
    X86_AT(c, 0xe5a4du);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5a52  call 0x14a
    X86_AT(c, 0xe5a52u);
    push32(c, 0xe5a57u); f_0000014a(c); X86_RET(c, 0xe5a57u);
    X86_TICK(c, 2);
    // 0e5a57  add esp, 0x10
    X86_AT(c, 0xe5a57u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_e5a5a:
    X86_TICK(c, 7);
    // 0e5a5a  cmp edi, 1
    X86_AT(c, 0xe5a5au);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0e5a5d  jne 0xe5a72
    X86_AT(c, 0xe5a5du);
    if (x86_cc(c, 5)) { goto L_e5a72; }
    X86_TICK(c, 15);
    // 0e5a5f  push 0x31
    X86_AT(c, 0xe5a5fu);
    { uint32_t v = 0x31u; push32(c, v); }
    // 0e5a61  push 0x36
    X86_AT(c, 0xe5a61u);
    { uint32_t v = 0x36u; push32(c, v); }
    // 0e5a63  push 1
    X86_AT(c, 0xe5a63u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e5a65  push 0x7a7d8
    X86_AT(c, 0xe5a65u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5a6a  call 0x14a
    X86_AT(c, 0xe5a6au);
    push32(c, 0xe5a6fu); f_0000014a(c); X86_RET(c, 0xe5a6fu);
    X86_TICK(c, 2);
    // 0e5a6f  add esp, 0x10
    X86_AT(c, 0xe5a6fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_e5a72:
    X86_TICK(c, 20);
    // 0e5a72  pop edi
    X86_AT(c, 0xe5a72u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e5a73  leave 
    X86_AT(c, 0xe5a73u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e5a74  ret 
    X86_AT(c, 0xe5a74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5a3cu, "ran off the end of a function");
}
void f_000e5a78(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0e5a78  push ebp
    X86_AT(c, 0xe5a78u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e5a79  mov ebp, esp
    X86_AT(c, 0xe5a79u);
    c.r[5] = c.r[4];
    // 0e5a7b  push 0x31
    X86_AT(c, 0xe5a7bu);
    { uint32_t v = 0x31u; push32(c, v); }
    // 0e5a7d  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe5a7du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e5a80  add eax, 0x36
    X86_AT(c, 0xe5a80u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x36u, 0, 4); }
    // 0e5a83  push eax
    X86_AT(c, 0xe5a83u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5a84  push 1
    X86_AT(c, 0xe5a84u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e5a86  push 0x7a7d8
    X86_AT(c, 0xe5a86u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5a8b  call 0x14a
    X86_AT(c, 0xe5a8bu);
    push32(c, 0xe5a90u); f_0000014a(c); X86_RET(c, 0xe5a90u);
    X86_TICK(c, 16);
    // 0e5a90  leave 
    X86_AT(c, 0xe5a90u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e5a91  ret 
    X86_AT(c, 0xe5a91u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5a78u, "ran off the end of a function");
}
void f_000e5a94(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0e5a94  push ebp
    X86_AT(c, 0xe5a94u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e5a95  mov ebp, esp
    X86_AT(c, 0xe5a95u);
    c.r[5] = c.r[4];
    // 0e5a97  push edi
    X86_AT(c, 0xe5a97u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5a98  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe5a98u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e5a9b  and edi, edi
    X86_AT(c, 0xe5a9bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e5a9d  jne 0xe5aaa
    X86_AT(c, 0xe5a9du);
    if (x86_cc(c, 5)) { goto L_e5aaa; }
    X86_TICK(c, 9);
    // 0e5a9f  mov word ptr [0x7aed8], 3
    X86_AT(c, 0xe5a9fu);
    wr16((c.sbase[3] + (uint32_t)(0x7AED8u)), 0x3u);
    // 0e5aa8  jmp 0xe5abc
    X86_AT(c, 0xe5aa8u);
    goto L_e5abc;
L_e5aaa:
    X86_TICK(c, 7);
    // 0e5aaa  cmp edi, 1
    X86_AT(c, 0xe5aaau);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0e5aad  jne 0xe5b8b
    X86_AT(c, 0xe5aadu);
    if (x86_cc(c, 5)) { goto L_e5b8b; }
    X86_TICK(c, 2);
    // 0e5ab3  mov word ptr [0x7aeda], 3
    X86_AT(c, 0xe5ab3u);
    wr16((c.sbase[3] + (uint32_t)(0x7AEDAu)), 0x3u);
L_e5abc:
    X86_TICK(c, 13);
    // 0e5abc  push 1
    X86_AT(c, 0xe5abcu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e5abe  push edi
    X86_AT(c, 0xe5abeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5abf  push 0x7a7d8
    X86_AT(c, 0xe5abfu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5ac4  call 0xea
    X86_AT(c, 0xe5ac4u);
    push32(c, 0xe5ac9u); f_000000ea(c); X86_RET(c, 0xe5ac9u);
    X86_TICK(c, 13);
    // 0e5ac9  push 3
    X86_AT(c, 0xe5ac9u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e5acb  push edi
    X86_AT(c, 0xe5acbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5acc  push 0x7a7d8
    X86_AT(c, 0xe5accu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5ad1  call 0xea
    X86_AT(c, 0xe5ad1u);
    push32(c, 0xe5ad6u); f_000000ea(c); X86_RET(c, 0xe5ad6u);
    X86_TICK(c, 9);
    // 0e5ad6  push edi
    X86_AT(c, 0xe5ad6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5ad7  call 0xe58cc
    X86_AT(c, 0xe5ad7u);
    push32(c, 0xe5adcu); f_000e58cc(c); X86_RET(c, 0xe5adcu);
    X86_TICK(c, 19);
    // 0e5adc  mov word ptr [0x7add8], 0
    X86_AT(c, 0xe5adcu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADD8u)), 0x0u);
    // 0e5ae5  mov word ptr [0x7adda], 0
    X86_AT(c, 0xe5ae5u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDAu)), 0x0u);
    // 0e5aee  mov word ptr [0x7addc], 0x4fe
    X86_AT(c, 0xe5aeeu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDCu)), 0x4FEu);
    // 0e5af7  mov word ptr [0x7adde], 0x1df
    X86_AT(c, 0xe5af7u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDEu)), 0x1DFu);
    // 0e5b00  push 0x7add8
    X86_AT(c, 0xe5b00u);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e5b05  push 0x7a7d8
    X86_AT(c, 0xe5b05u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5b0a  call 0x178
    X86_AT(c, 0xe5b0au);
    push32(c, 0xe5b0fu); f_00000178(c); X86_RET(c, 0xe5b0fu);
    X86_TICK(c, 7);
    // 0e5b0f  call 0xe5690
    X86_AT(c, 0xe5b0fu);
    push32(c, 0xe5b14u); f_000e5690(c); X86_RET(c, 0xe5b14u);
    X86_TICK(c, 9);
    // 0e5b14  push 0xf
    X86_AT(c, 0xe5b14u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e5b16  call 0xe5748
    X86_AT(c, 0xe5b16u);
    push32(c, 0xe5b1bu); f_000e5748(c); X86_RET(c, 0xe5b1bu);
    X86_TICK(c, 9);
    // 0e5b1b  push 0
    X86_AT(c, 0xe5b1bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e5b1d  call 0xe5760
    X86_AT(c, 0xe5b1du);
    push32(c, 0xe5b22u); f_000e5760(c); X86_RET(c, 0xe5b22u);
    X86_TICK(c, 9);
    // 0e5b22  push 0xd
    X86_AT(c, 0xe5b22u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e5b24  call 0xe5778
    X86_AT(c, 0xe5b24u);
    push32(c, 0xe5b29u); f_000e5778(c); X86_RET(c, 0xe5b29u);
    X86_TICK(c, 9);
    // 0e5b29  push 0
    X86_AT(c, 0xe5b29u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e5b2b  call 0xe5790
    X86_AT(c, 0xe5b2bu);
    push32(c, 0xe5b30u); f_000e5790(c); X86_RET(c, 0xe5b30u);
    X86_TICK(c, 15);
    // 0e5b30  movsx eax, word ptr [0x7a7d4]
    X86_AT(c, 0xe5b30u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x7A7D4u)));
    // 0e5b37  push eax
    X86_AT(c, 0xe5b37u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5b38  call 0xe58b8
    X86_AT(c, 0xe5b38u);
    push32(c, 0xe5b3du); f_000e58b8(c); X86_RET(c, 0xe5b3du);
    X86_TICK(c, 17);
    // 0e5b3d  movsx eax, word ptr [0x7aedc]
    X86_AT(c, 0xe5b3du);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x7AEDCu)));
    // 0e5b44  push eax
    X86_AT(c, 0xe5b44u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5b45  push 0x7a7d8
    X86_AT(c, 0xe5b45u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5b4a  call 0x2c5
    X86_AT(c, 0xe5b4au);
    push32(c, 0xe5b4fu); f_000002c5(c); X86_RET(c, 0xe5b4fu);
    X86_TICK(c, 17);
    // 0e5b4f  add esp, 0x40
    X86_AT(c, 0xe5b4fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e5b52  push 0
    X86_AT(c, 0xe5b52u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e5b54  push 0
    X86_AT(c, 0xe5b54u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e5b56  push 0
    X86_AT(c, 0xe5b56u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e5b58  push 0x7a7d8
    X86_AT(c, 0xe5b58u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5b5d  call 0x14a
    X86_AT(c, 0xe5b5du);
    push32(c, 0xe5b62u); f_0000014a(c); X86_RET(c, 0xe5b62u);
    X86_TICK(c, 15);
    // 0e5b62  push 1
    X86_AT(c, 0xe5b62u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e5b64  push 1
    X86_AT(c, 0xe5b64u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e5b66  push 2
    X86_AT(c, 0xe5b66u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e5b68  push 0x7a7d8
    X86_AT(c, 0xe5b68u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5b6d  call 0x14a
    X86_AT(c, 0xe5b6du);
    push32(c, 0xe5b72u); f_0000014a(c); X86_RET(c, 0xe5b72u);
    X86_TICK(c, 15);
    // 0e5b72  push 0x1e0
    X86_AT(c, 0xe5b72u);
    { uint32_t v = 0x1E0u; push32(c, v); }
    // 0e5b77  push 0x280
    X86_AT(c, 0xe5b77u);
    { uint32_t v = 0x280u; push32(c, v); }
    // 0e5b7c  push 3
    X86_AT(c, 0xe5b7cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0e5b7e  push 0x7a7d8
    X86_AT(c, 0xe5b7eu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5b83  call 0x14a
    X86_AT(c, 0xe5b83u);
    push32(c, 0xe5b88u); f_0000014a(c); X86_RET(c, 0xe5b88u);
    X86_TICK(c, 2);
    // 0e5b88  add esp, 0x30
    X86_AT(c, 0xe5b88u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
L_e5b8b:
    X86_TICK(c, 20);
    // 0e5b8b  pop edi
    X86_AT(c, 0xe5b8bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e5b8c  leave 
    X86_AT(c, 0xe5b8cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e5b8d  ret 
    X86_AT(c, 0xe5b8du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5a94u, "ran off the end of a function");
}
void f_000e5b90(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0e5b90  push 0x600
    X86_AT(c, 0xe5b90u);
    { uint32_t v = 0x600u; push32(c, v); }
    // 0e5b95  push 0x7a7d8
    X86_AT(c, 0xe5b95u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5b9a  call 0xc8
    X86_AT(c, 0xe5b9au);
    push32(c, 0xe5b9fu); f_000000c8(c); X86_RET(c, 0xe5b9fu);
    X86_TICK(c, 9);
    // 0e5b9f  add esp, 8
    X86_AT(c, 0xe5b9fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e5ba2  and eax, eax
    X86_AT(c, 0xe5ba2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e5ba4  je 0xe5bb0
    X86_AT(c, 0xe5ba4u);
    if (x86_cc(c, 4)) { goto L_e5bb0; }
    X86_TICK(c, 9);
    // 0e5ba6  mov eax, 0xffffffff
    X86_AT(c, 0xe5ba6u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e5bab  jmp 0xe5c6a
    X86_AT(c, 0xe5babu);
    goto L_e5c6a;
L_e5bb0:
    X86_TICK(c, 17);
    // 0e5bb0  mov word ptr [0x7aed8], 3
    X86_AT(c, 0xe5bb0u);
    wr16((c.sbase[3] + (uint32_t)(0x7AED8u)), 0x3u);
    // 0e5bb9  mov eax, 3
    X86_AT(c, 0xe5bb9u);
    c.r[0] = 0x3u;
    // 0e5bbe  push eax
    X86_AT(c, 0xe5bbeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5bbf  push 0
    X86_AT(c, 0xe5bbfu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e5bc1  push 0x7a7d8
    X86_AT(c, 0xe5bc1u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5bc6  call 0xea
    X86_AT(c, 0xe5bc6u);
    push32(c, 0xe5bcbu); f_000000ea(c); X86_RET(c, 0xe5bcbu);
    X86_TICK(c, 19);
    // 0e5bcb  mov ax, 3
    X86_AT(c, 0xe5bcbu);
    s16(c, 0, 0x3u);
    // 0e5bcf  mov word ptr [0x7aeda], ax
    X86_AT(c, 0xe5bcfu);
    wr16((c.sbase[3] + (uint32_t)(0x7AEDAu)), (c.r[0] & 0xFFFFu));
    // 0e5bd5  mov eax, 3
    X86_AT(c, 0xe5bd5u);
    c.r[0] = 0x3u;
    // 0e5bda  push eax
    X86_AT(c, 0xe5bdau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5bdb  push 1
    X86_AT(c, 0xe5bdbu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e5bdd  push 0x7a7d8
    X86_AT(c, 0xe5bddu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5be2  call 0xea
    X86_AT(c, 0xe5be2u);
    push32(c, 0xe5be7u); f_000000ea(c); X86_RET(c, 0xe5be7u);
    X86_TICK(c, 15);
    // 0e5be7  mov ax, 9
    X86_AT(c, 0xe5be7u);
    s16(c, 0, 0x9u);
    // 0e5beb  mov word ptr [0x7a7d4], ax
    X86_AT(c, 0xe5bebu);
    wr16((c.sbase[3] + (uint32_t)(0x7A7D4u)), (c.r[0] & 0xFFFFu));
    // 0e5bf1  mov eax, 9
    X86_AT(c, 0xe5bf1u);
    c.r[0] = 0x9u;
    // 0e5bf6  push eax
    X86_AT(c, 0xe5bf6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5bf7  call 0xe58b8
    X86_AT(c, 0xe5bf7u);
    push32(c, 0xe5bfcu); f_000e58b8(c); X86_RET(c, 0xe5bfcu);
    X86_TICK(c, 17);
    // 0e5bfc  mov ax, 0x22
    X86_AT(c, 0xe5bfcu);
    s16(c, 0, 0x22u);
    // 0e5c00  mov word ptr [0x7aedc], ax
    X86_AT(c, 0xe5c00u);
    wr16((c.sbase[3] + (uint32_t)(0x7AEDCu)), (c.r[0] & 0xFFFFu));
    // 0e5c06  mov eax, 0x22
    X86_AT(c, 0xe5c06u);
    c.r[0] = 0x22u;
    // 0e5c0b  push eax
    X86_AT(c, 0xe5c0bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5c0c  push 0x7a7d8
    X86_AT(c, 0xe5c0cu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5c11  call 0x2c5
    X86_AT(c, 0xe5c11u);
    push32(c, 0xe5c16u); f_000002c5(c); X86_RET(c, 0xe5c16u);
    X86_TICK(c, 9);
    // 0e5c16  push 0
    X86_AT(c, 0xe5c16u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e5c18  call 0xe58cc
    X86_AT(c, 0xe5c18u);
    push32(c, 0xe5c1du); f_000e58cc(c); X86_RET(c, 0xe5c1du);
    X86_TICK(c, 9);
    // 0e5c1d  push 0
    X86_AT(c, 0xe5c1du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e5c1f  call 0xe58e0
    X86_AT(c, 0xe5c1fu);
    push32(c, 0xe5c24u); f_000e58e0(c); X86_RET(c, 0xe5c24u);
    X86_TICK(c, 7);
    // 0e5c24  call 0xe5690
    X86_AT(c, 0xe5c24u);
    push32(c, 0xe5c29u); f_000e5690(c); X86_RET(c, 0xe5c29u);
    X86_TICK(c, 9);
    // 0e5c29  push 0xf
    X86_AT(c, 0xe5c29u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e5c2b  call 0xe5748
    X86_AT(c, 0xe5c2bu);
    push32(c, 0xe5c30u); f_000e5748(c); X86_RET(c, 0xe5c30u);
    X86_TICK(c, 9);
    // 0e5c30  push 0
    X86_AT(c, 0xe5c30u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e5c32  call 0xe5760
    X86_AT(c, 0xe5c32u);
    push32(c, 0xe5c37u); f_000e5760(c); X86_RET(c, 0xe5c37u);
    X86_TICK(c, 9);
    // 0e5c37  push 0xd
    X86_AT(c, 0xe5c37u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0e5c39  call 0xe5778
    X86_AT(c, 0xe5c39u);
    push32(c, 0xe5c3eu); f_000e5778(c); X86_RET(c, 0xe5c3eu);
    X86_TICK(c, 11);
    // 0e5c3e  push 0
    X86_AT(c, 0xe5c3eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e5c40  push 0x7a7d8
    X86_AT(c, 0xe5c40u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5c45  call 0x41c
    X86_AT(c, 0xe5c45u);
    push32(c, 0xe5c4au); f_0000041c(c); X86_RET(c, 0xe5c4au);
    X86_TICK(c, 13);
    // 0e5c4a  add esp, 0x40
    X86_AT(c, 0xe5c4au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0e5c4d  push 0
    X86_AT(c, 0xe5c4du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e5c4f  push 0x7a7d8
    X86_AT(c, 0xe5c4fu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5c54  call 0x43e
    X86_AT(c, 0xe5c54u);
    push32(c, 0xe5c59u); f_0000043e(c); X86_RET(c, 0xe5c59u);
    X86_TICK(c, 11);
    // 0e5c59  push 0
    X86_AT(c, 0xe5c59u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e5c5b  push 0x7a7d8
    X86_AT(c, 0xe5c5bu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5c60  call 0x460
    X86_AT(c, 0xe5c60u);
    push32(c, 0xe5c65u); f_00000460(c); X86_RET(c, 0xe5c65u);
    X86_TICK(c, 4);
    // 0e5c65  sub eax, eax
    X86_AT(c, 0xe5c65u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e5c67  add esp, 0x10
    X86_AT(c, 0xe5c67u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_e5c6a:
    X86_TICK(c, 10);
    // 0e5c6a  ret 
    X86_AT(c, 0xe5c6au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5b90u, "ran off the end of a function");
}
void f_000e5c6c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e5c6c  push ebp
    X86_AT(c, 0xe5c6cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e5c6d  mov ebp, esp
    X86_AT(c, 0xe5c6du);
    c.r[5] = c.r[4];
    // 0e5c6f  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0xe5c6fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e5c73  push eax
    X86_AT(c, 0xe5c73u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5c74  push 1
    X86_AT(c, 0xe5c74u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e5c76  push 0x7a7d8
    X86_AT(c, 0xe5c76u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5c7b  call 0x20e
    X86_AT(c, 0xe5c7bu);
    push32(c, 0xe5c80u); f_0000020e(c); X86_RET(c, 0xe5c80u);
    X86_TICK(c, 9);
    // 0e5c80  push 0x7a7d8
    X86_AT(c, 0xe5c80u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5c85  call 0x518
    X86_AT(c, 0xe5c85u);
    push32(c, 0xe5c8au); f_00000518(c); X86_RET(c, 0xe5c8au);
    X86_TICK(c, 16);
    // 0e5c8a  leave 
    X86_AT(c, 0xe5c8au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e5c8b  ret 
    X86_AT(c, 0xe5c8bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5c6cu, "ran off the end of a function");
}
void f_000e5cc0(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0e5cc0  push ebp
    X86_AT(c, 0xe5cc0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e5cc1  mov ebp, esp
    X86_AT(c, 0xe5cc1u);
    c.r[5] = c.r[4];
    // 0e5cc3  push dword ptr [ebp + 8]
    X86_AT(c, 0xe5cc3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e5cc6  push 0x7a7d8
    X86_AT(c, 0xe5cc6u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5ccb  call 0x7e5
    X86_AT(c, 0xe5ccbu);
    push32(c, 0xe5cd0u); f_000007e5(c); X86_RET(c, 0xe5cd0u);
    X86_TICK(c, 16);
    // 0e5cd0  leave 
    X86_AT(c, 0xe5cd0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e5cd1  ret 
    X86_AT(c, 0xe5cd1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5cc0u, "ran off the end of a function");
}
void f_000e5cd4(X86Cpu& c) {
    X86_TICK(c, 41);
    // 0e5cd4  push ebp
    X86_AT(c, 0xe5cd4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e5cd5  mov ebp, esp
    X86_AT(c, 0xe5cd5u);
    c.r[5] = c.r[4];
    // 0e5cd7  mov word ptr [0x7add8], 2
    X86_AT(c, 0xe5cd7u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADD8u)), 0x2u);
    // 0e5ce0  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0xe5ce0u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0e5ce4  mov word ptr [0x7adda], ax
    X86_AT(c, 0xe5ce4u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDAu)), (c.r[0] & 0xFFFFu));
    // 0e5cea  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0xe5ceau);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0e5cee  mov word ptr [0x7addc], ax
    X86_AT(c, 0xe5ceeu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDCu)), (c.r[0] & 0xFFFFu));
    // 0e5cf4  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0xe5cf4u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0e5cf8  mov word ptr [0x7adde], ax
    X86_AT(c, 0xe5cf8u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDEu)), (c.r[0] & 0xFFFFu));
    // 0e5cfe  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0xe5cfeu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0e5d02  mov word ptr [0x7ade0], ax
    X86_AT(c, 0xe5d02u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE0u)), (c.r[0] & 0xFFFFu));
    // 0e5d08  push 0x7add8
    X86_AT(c, 0xe5d08u);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e5d0d  push 0x7a7d8
    X86_AT(c, 0xe5d0du);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5d12  call 0x809
    X86_AT(c, 0xe5d12u);
    push32(c, 0xe5d17u); f_00000809(c); X86_RET(c, 0xe5d17u);
    X86_TICK(c, 16);
    // 0e5d17  leave 
    X86_AT(c, 0xe5d17u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e5d18  ret 
    X86_AT(c, 0xe5d18u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5cd4u, "ran off the end of a function");
}
void f_000e5d1c(X86Cpu& c) {
    X86_TICK(c, 39);
    // 0e5d1c  push ebp
    X86_AT(c, 0xe5d1cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e5d1d  mov ebp, esp
    X86_AT(c, 0xe5d1du);
    c.r[5] = c.r[4];
    // 0e5d1f  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0xe5d1fu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0e5d23  mov word ptr [0x7add8], ax
    X86_AT(c, 0xe5d23u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADD8u)), (c.r[0] & 0xFFFFu));
    // 0e5d29  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0xe5d29u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0e5d2d  mov word ptr [0x7adda], ax
    X86_AT(c, 0xe5d2du);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDAu)), (c.r[0] & 0xFFFFu));
    // 0e5d33  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0xe5d33u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0e5d37  mov word ptr [0x7addc], ax
    X86_AT(c, 0xe5d37u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDCu)), (c.r[0] & 0xFFFFu));
    // 0e5d3d  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0xe5d3du);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0e5d41  mov word ptr [0x7adde], ax
    X86_AT(c, 0xe5d41u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDEu)), (c.r[0] & 0xFFFFu));
    // 0e5d47  push 0x7add8
    X86_AT(c, 0xe5d47u);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e5d4c  push 0x7a7d8
    X86_AT(c, 0xe5d4cu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5d51  call 0x8bd
    X86_AT(c, 0xe5d51u);
    push32(c, 0xe5d56u); f_000008bd(c); X86_RET(c, 0xe5d56u);
    X86_TICK(c, 16);
    // 0e5d56  leave 
    X86_AT(c, 0xe5d56u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e5d57  ret 
    X86_AT(c, 0xe5d57u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5d1cu, "ran off the end of a function");
}
void f_000e5df4(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0e5df4  push ebp
    X86_AT(c, 0xe5df4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e5df5  mov ebp, esp
    X86_AT(c, 0xe5df5u);
    c.r[5] = c.r[4];
    // 0e5df7  mov ax, word ptr [0x7aedc]
    X86_AT(c, 0xe5df7u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x7AEDCu))));
    // 0e5dfd  or al, 0x20
    X86_AT(c, 0xe5dfdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 0e5dff  movsx eax, ax
    X86_AT(c, 0xe5dffu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 0e5e02  push eax
    X86_AT(c, 0xe5e02u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5e03  push 0x7a7d8
    X86_AT(c, 0xe5e03u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5e08  call 0x2c5
    X86_AT(c, 0xe5e08u);
    push32(c, 0xe5e0du); f_000002c5(c); X86_RET(c, 0xe5e0du);
    X86_TICK(c, 35);
    // 0e5e0d  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0xe5e0du);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0e5e11  mov word ptr [0x7add8], ax
    X86_AT(c, 0xe5e11u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADD8u)), (c.r[0] & 0xFFFFu));
    // 0e5e17  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0xe5e17u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0e5e1b  mov word ptr [0x7adda], ax
    X86_AT(c, 0xe5e1bu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDAu)), (c.r[0] & 0xFFFFu));
    // 0e5e21  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0xe5e21u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0e5e25  mov word ptr [0x7addc], ax
    X86_AT(c, 0xe5e25u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDCu)), (c.r[0] & 0xFFFFu));
    // 0e5e2b  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0xe5e2bu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0e5e2f  mov word ptr [0x7adde], ax
    X86_AT(c, 0xe5e2fu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDEu)), (c.r[0] & 0xFFFFu));
    // 0e5e35  push 0x7add8
    X86_AT(c, 0xe5e35u);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e5e3a  push 0x7a7d8
    X86_AT(c, 0xe5e3au);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5e3f  call 0x8bd
    X86_AT(c, 0xe5e3fu);
    push32(c, 0xe5e44u); f_000008bd(c); X86_RET(c, 0xe5e44u);
    X86_TICK(c, 17);
    // 0e5e44  movsx eax, word ptr [0x7aedc]
    X86_AT(c, 0xe5e44u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x7AEDCu)));
    // 0e5e4b  push eax
    X86_AT(c, 0xe5e4bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5e4c  push 0x7a7d8
    X86_AT(c, 0xe5e4cu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5e51  call 0x2c5
    X86_AT(c, 0xe5e51u);
    push32(c, 0xe5e56u); f_000002c5(c); X86_RET(c, 0xe5e56u);
    X86_TICK(c, 16);
    // 0e5e56  leave 
    X86_AT(c, 0xe5e56u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e5e57  ret 
    X86_AT(c, 0xe5e57u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5df4u, "ran off the end of a function");
}
void f_000e5e58(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0e5e58  push ebp
    X86_AT(c, 0xe5e58u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e5e59  mov ebp, esp
    X86_AT(c, 0xe5e59u);
    c.r[5] = c.r[4];
    // 0e5e5b  push edi
    X86_AT(c, 0xe5e5bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5e5c  mov edi, dword ptr [ebp + 0x18]
    X86_AT(c, 0xe5e5cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0e5e5f  push 0
    X86_AT(c, 0xe5e5fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e5e61  call 0xe58b8
    X86_AT(c, 0xe5e61u);
    push32(c, 0xe5e66u); f_000e58b8(c); X86_RET(c, 0xe5e66u);
    X86_TICK(c, 9);
    // 0e5e66  push edi
    X86_AT(c, 0xe5e66u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5e67  call 0xe5748
    X86_AT(c, 0xe5e67u);
    push32(c, 0xe5e6cu); f_000e5748(c); X86_RET(c, 0xe5e6cu);
    X86_TICK(c, 9);
    // 0e5e6c  push edi
    X86_AT(c, 0xe5e6cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5e6d  call 0xe5778
    X86_AT(c, 0xe5e6du);
    push32(c, 0xe5e72u); f_000e5778(c); X86_RET(c, 0xe5e72u);
    X86_TICK(c, 35);
    // 0e5e72  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0xe5e72u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0e5e76  mov word ptr [0x7add8], ax
    X86_AT(c, 0xe5e76u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADD8u)), (c.r[0] & 0xFFFFu));
    // 0e5e7c  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0xe5e7cu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0e5e80  mov word ptr [0x7adda], ax
    X86_AT(c, 0xe5e80u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDAu)), (c.r[0] & 0xFFFFu));
    // 0e5e86  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0xe5e86u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0e5e8a  mov word ptr [0x7addc], ax
    X86_AT(c, 0xe5e8au);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDCu)), (c.r[0] & 0xFFFFu));
    // 0e5e90  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0xe5e90u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0e5e94  mov word ptr [0x7adde], ax
    X86_AT(c, 0xe5e94u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDEu)), (c.r[0] & 0xFFFFu));
    // 0e5e9a  push 0x7add8
    X86_AT(c, 0xe5e9au);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e5e9f  push 0x7a7d8
    X86_AT(c, 0xe5e9fu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5ea4  call 0x8bd
    X86_AT(c, 0xe5ea4u);
    push32(c, 0xe5ea9u); f_000008bd(c); X86_RET(c, 0xe5ea9u);
    X86_TICK(c, 15);
    // 0e5ea9  movsx eax, word ptr [0x7a7d4]
    X86_AT(c, 0xe5ea9u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x7A7D4u)));
    // 0e5eb0  push eax
    X86_AT(c, 0xe5eb0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5eb1  call 0xe58b8
    X86_AT(c, 0xe5eb1u);
    push32(c, 0xe5eb6u); f_000e58b8(c); X86_RET(c, 0xe5eb6u);
    X86_TICK(c, 17);
    // 0e5eb6  movsx eax, word ptr [0x7aedc]
    X86_AT(c, 0xe5eb6u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x7AEDCu)));
    // 0e5ebd  push eax
    X86_AT(c, 0xe5ebdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5ebe  push 0x7a7d8
    X86_AT(c, 0xe5ebeu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5ec3  call 0x2c5
    X86_AT(c, 0xe5ec3u);
    push32(c, 0xe5ec8u); f_000002c5(c); X86_RET(c, 0xe5ec8u);
    X86_TICK(c, 22);
    // 0e5ec8  add esp, 0x20
    X86_AT(c, 0xe5ec8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0e5ecb  pop edi
    X86_AT(c, 0xe5ecbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e5ecc  leave 
    X86_AT(c, 0xe5eccu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e5ecd  ret 
    X86_AT(c, 0xe5ecdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5e58u, "ran off the end of a function");
}
void f_000e5ed0(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0e5ed0  push ebp
    X86_AT(c, 0xe5ed0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e5ed1  mov ebp, esp
    X86_AT(c, 0xe5ed1u);
    c.r[5] = c.r[4];
    // 0e5ed3  sub esp, 0x24
    X86_AT(c, 0xe5ed3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x24u, 0, 4); }
    // 0e5ed6  push ebx
    X86_AT(c, 0xe5ed6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e5ed7  push esi
    X86_AT(c, 0xe5ed7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e5ed8  push edi
    X86_AT(c, 0xe5ed8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5ed9  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe5ed9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e5edc  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe5edcu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e5edf  mov ebx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xe5edfu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0e5ee2  push 9
    X86_AT(c, 0xe5ee2u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e5ee4  call 0xe5748
    X86_AT(c, 0xe5ee4u);
    push32(c, 0xe5ee9u); f_000e5748(c); X86_RET(c, 0xe5ee9u);
    X86_TICK(c, 9);
    // 0e5ee9  push 9
    X86_AT(c, 0xe5ee9u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e5eeb  call 0xe5778
    X86_AT(c, 0xe5eebu);
    push32(c, 0xe5ef0u); f_000e5778(c); X86_RET(c, 0xe5ef0u);
    X86_TICK(c, 14);
    // 0e5ef0  add esp, 8
    X86_AT(c, 0xe5ef0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e5ef3  cmp dword ptr [ebp + 0x18], 0
    X86_AT(c, 0xe5ef3u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0x0u, 0, 4);
    // 0e5ef7  je 0xe5f09
    X86_AT(c, 0xe5ef7u);
    if (x86_cc(c, 4)) { goto L_e5f09; }
    X86_TICK(c, 29);
    // 0e5ef9  lea eax, [ebx + esi*1]
    X86_AT(c, 0xe5ef9u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[6]);
    // 0e5efc  dec eax
    X86_AT(c, 0xe5efcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e5efd  push eax
    X86_AT(c, 0xe5efdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5efe  mov eax, edi
    X86_AT(c, 0xe5efeu);
    c.r[0] = c.r[7];
    // 0e5f00  add eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe5f00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 0e5f03  dec eax
    X86_AT(c, 0xe5f03u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e5f04  push eax
    X86_AT(c, 0xe5f04u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5f05  push esi
    X86_AT(c, 0xe5f05u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e5f06  push edi
    X86_AT(c, 0xe5f06u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e5f07  jmp 0xe5f17
    X86_AT(c, 0xe5f07u);
    goto L_e5f17;
L_e5f09:
    X86_TICK(c, 8);
    // 0e5f09  push 0x1a7
    X86_AT(c, 0xe5f09u);
    { uint32_t v = 0x1A7u; push32(c, v); }
    // 0e5f0e  push 0x27f
    X86_AT(c, 0xe5f0eu);
    { uint32_t v = 0x27Fu; push32(c, v); }
    // 0e5f13  push 0x18
    X86_AT(c, 0xe5f13u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 0e5f15  push 0
    X86_AT(c, 0xe5f15u);
    { uint32_t v = 0x0u; push32(c, v); }
L_e5f17:
    X86_TICK(c, 7);
    // 0e5f17  call 0xe5df4
    X86_AT(c, 0xe5f17u);
    push32(c, 0xe5f1cu); f_000e5df4(c); X86_RET(c, 0xe5f1cu);
    X86_TICK(c, 14);
    // 0e5f1c  add esp, 0x10
    X86_AT(c, 0xe5f1cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e5f1f  push dword ptr [ebp + 0x18]
    X86_AT(c, 0xe5f1fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 0e5f22  call 0xe5748
    X86_AT(c, 0xe5f22u);
    push32(c, 0xe5f27u); f_000e5748(c); X86_RET(c, 0xe5f27u);
    X86_TICK(c, 12);
    // 0e5f27  push dword ptr [ebp + 0x18]
    X86_AT(c, 0xe5f27u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 0e5f2a  call 0xe5778
    X86_AT(c, 0xe5f2au);
    push32(c, 0xe5f2fu); f_000e5778(c); X86_RET(c, 0xe5f2fu);
    X86_TICK(c, 20);
    // 0e5f2f  mov ax, word ptr [0x7aedc]
    X86_AT(c, 0xe5f2fu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x7AEDCu))));
    // 0e5f35  or al, 0x20
    X86_AT(c, 0xe5f35u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 0e5f37  movsx eax, ax
    X86_AT(c, 0xe5f37u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 0e5f3a  push eax
    X86_AT(c, 0xe5f3au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e5f3b  push 0x7a7d8
    X86_AT(c, 0xe5f3bu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5f40  call 0x2c5
    X86_AT(c, 0xe5f40u);
    push32(c, 0xe5f45u); f_000002c5(c); X86_RET(c, 0xe5f45u);
    X86_TICK(c, 35);
    // 0e5f45  mov eax, edi
    X86_AT(c, 0xe5f45u);
    c.r[0] = c.r[7];
    // 0e5f47  mov word ptr [ebp - 4], ax
    X86_AT(c, 0xe5f47u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 0e5f4b  add ax, 0xf
    X86_AT(c, 0xe5f4bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xFu, 0, 2)); }
    // 0e5f4f  mov word ptr [0x7add8], ax
    X86_AT(c, 0xe5f4fu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADD8u)), (c.r[0] & 0xFFFFu));
    // 0e5f55  lea eax, [esi + 0x10]
    X86_AT(c, 0xe5f55u);
    c.r[0] = (uint32_t)(c.r[6] + 0x10u);
    // 0e5f58  mov word ptr [0x7adda], ax
    X86_AT(c, 0xe5f58u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDAu)), (c.r[0] & 0xFFFFu));
    // 0e5f5e  mov word ptr [0x7addc], 0xfff0
    X86_AT(c, 0xe5f5eu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDCu)), 0xFFF0u);
    // 0e5f67  mov word ptr [0x7adde], 0xfff0
    X86_AT(c, 0xe5f67u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDEu)), 0xFFF0u);
    // 0e5f70  mov word ptr [0x7ade0], 0xfff0
    X86_AT(c, 0xe5f70u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE0u)), 0xFFF0u);
    // 0e5f79  mov word ptr [0x7ade2], 0xfff0
    X86_AT(c, 0xe5f79u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE2u)), 0xFFF0u);
    // 0e5f82  mov word ptr [0x7ade4], 0x10
    X86_AT(c, 0xe5f82u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE4u)), 0x10u);
    // 0e5f8b  push 0x7add8
    X86_AT(c, 0xe5f8bu);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e5f90  push 0x7a7d8
    X86_AT(c, 0xe5f90u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5f95  mov word ptr [ebp - 8], ax
    X86_AT(c, 0xe5f95u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[0] & 0xFFFFu));
    // 0e5f99  call 0x929
    X86_AT(c, 0xe5f99u);
    push32(c, 0xe5f9eu); f_00000929(c); X86_RET(c, 0xe5f9eu);
    X86_TICK(c, 9);
    // 0e5f9e  push 0xf
    X86_AT(c, 0xe5f9eu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e5fa0  call 0xe5748
    X86_AT(c, 0xe5fa0u);
    push32(c, 0xe5fa5u); f_000e5748(c); X86_RET(c, 0xe5fa5u);
    X86_TICK(c, 11);
    // 0e5fa5  push 0x7add8
    X86_AT(c, 0xe5fa5u);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e5faa  push 0x7a7d8
    X86_AT(c, 0xe5faau);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e5faf  call 0x905
    X86_AT(c, 0xe5fafu);
    push32(c, 0xe5fb4u); f_00000905(c); X86_RET(c, 0xe5fb4u);
    X86_TICK(c, 12);
    // 0e5fb4  push dword ptr [ebp + 0x18]
    X86_AT(c, 0xe5fb4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 0e5fb7  call 0xe5748
    X86_AT(c, 0xe5fb7u);
    push32(c, 0xe5fbcu); f_000e5748(c); X86_RET(c, 0xe5fbcu);
    X86_TICK(c, 41);
    // 0e5fbc  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0xe5fbcu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 0e5fc0  add ax, word ptr [ebp + 0x10]
    X86_AT(c, 0xe5fc0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 2)); }
    // 0e5fc4  sub ax, 0x10
    X86_AT(c, 0xe5fc4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x10u, 0, 2)); }
    // 0e5fc8  mov word ptr [0x7add8], ax
    X86_AT(c, 0xe5fc8u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADD8u)), (c.r[0] & 0xFFFFu));
    // 0e5fce  mov ax, word ptr [ebp - 8]
    X86_AT(c, 0xe5fceu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 0e5fd2  mov word ptr [0x7adda], ax
    X86_AT(c, 0xe5fd2u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDAu)), (c.r[0] & 0xFFFFu));
    // 0e5fd8  sub eax, eax
    X86_AT(c, 0xe5fd8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e5fda  mov word ptr [0x7addc], ax
    X86_AT(c, 0xe5fdau);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDCu)), (c.r[0] & 0xFFFFu));
    // 0e5fe0  mov word ptr [0x7adde], 0xfff0
    X86_AT(c, 0xe5fe0u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDEu)), 0xFFF0u);
    // 0e5fe9  mov word ptr [0x7ade0], 0x10
    X86_AT(c, 0xe5fe9u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE0u)), 0x10u);
    // 0e5ff2  mov word ptr [0x7ade2], ax
    X86_AT(c, 0xe5ff2u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE2u)), (c.r[0] & 0xFFFFu));
    // 0e5ff8  push 0x7add8
    X86_AT(c, 0xe5ff8u);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e5ffd  push 0x7a7d8
    X86_AT(c, 0xe5ffdu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e6002  call 0x929
    X86_AT(c, 0xe6002u);
    push32(c, 0xe6007u); f_00000929(c); X86_RET(c, 0xe6007u);
    X86_TICK(c, 9);
    // 0e6007  push 0xf
    X86_AT(c, 0xe6007u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e6009  call 0xe5748
    X86_AT(c, 0xe6009u);
    push32(c, 0xe600eu); f_000e5748(c); X86_RET(c, 0xe600eu);
    X86_TICK(c, 11);
    // 0e600e  push 0x7add8
    X86_AT(c, 0xe600eu);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e6013  push 0x7a7d8
    X86_AT(c, 0xe6013u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e6018  call 0x905
    X86_AT(c, 0xe6018u);
    push32(c, 0xe601du); f_00000905(c); X86_RET(c, 0xe601du);
    X86_TICK(c, 14);
    // 0e601d  add esp, 0x3c
    X86_AT(c, 0xe601du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0e6020  push dword ptr [ebp + 0x18]
    X86_AT(c, 0xe6020u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 0e6023  call 0xe5748
    X86_AT(c, 0xe6023u);
    push32(c, 0xe6028u); f_000e5748(c); X86_RET(c, 0xe6028u);
    X86_TICK(c, 47);
    // 0e6028  mov eax, edi
    X86_AT(c, 0xe6028u);
    c.r[0] = c.r[7];
    // 0e602a  mov word ptr [ebp - 4], ax
    X86_AT(c, 0xe602au);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 0e602e  add ax, word ptr [ebp + 0x10]
    X86_AT(c, 0xe602eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 2)); }
    // 0e6032  sub ax, 0x10
    X86_AT(c, 0xe6032u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x10u, 0, 2)); }
    // 0e6036  mov word ptr [0x7add8], ax
    X86_AT(c, 0xe6036u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADD8u)), (c.r[0] & 0xFFFFu));
    // 0e603c  mov eax, esi
    X86_AT(c, 0xe603cu);
    c.r[0] = c.r[6];
    // 0e603e  lea edx, [ebx + eax*1]
    X86_AT(c, 0xe603eu);
    c.r[2] = (uint32_t)(c.r[3] + c.r[0]);
    // 0e6041  sub dx, 0x11
    X86_AT(c, 0xe6041u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x11u, 0, 2)); }
    // 0e6045  mov word ptr [0x7adda], dx
    X86_AT(c, 0xe6045u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDAu)), (c.r[2] & 0xFFFFu));
    // 0e604c  mov word ptr [0x7addc], 0x10
    X86_AT(c, 0xe604cu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDCu)), 0x10u);
    // 0e6055  mov word ptr [0x7adde], 0
    X86_AT(c, 0xe6055u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDEu)), 0x0u);
    // 0e605e  mov word ptr [0x7ade0], 0
    X86_AT(c, 0xe605eu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE0u)), 0x0u);
    // 0e6067  mov word ptr [0x7ade2], 0x10
    X86_AT(c, 0xe6067u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE2u)), 0x10u);
    // 0e6070  push 0x7add8
    X86_AT(c, 0xe6070u);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e6075  mov eax, 0x7a7d0
    X86_AT(c, 0xe6075u);
    c.r[0] = 0x7A7D0u;
    // 0e607a  add eax, 8
    X86_AT(c, 0xe607au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e607d  push eax
    X86_AT(c, 0xe607du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e607e  mov word ptr [ebp - 8], dx
    X86_AT(c, 0xe607eu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[2] & 0xFFFFu));
    // 0e6082  call 0x929
    X86_AT(c, 0xe6082u);
    push32(c, 0xe6087u); f_00000929(c); X86_RET(c, 0xe6087u);
    X86_TICK(c, 9);
    // 0e6087  push 0xf
    X86_AT(c, 0xe6087u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e6089  call 0xe5748
    X86_AT(c, 0xe6089u);
    push32(c, 0xe608eu); f_000e5748(c); X86_RET(c, 0xe608eu);
    X86_TICK(c, 13);
    // 0e608e  push 0x7add8
    X86_AT(c, 0xe608eu);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e6093  mov eax, 0x7a7d8
    X86_AT(c, 0xe6093u);
    c.r[0] = 0x7A7D8u;
    // 0e6098  push eax
    X86_AT(c, 0xe6098u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6099  call 0x905
    X86_AT(c, 0xe6099u);
    push32(c, 0xe609eu); f_00000905(c); X86_RET(c, 0xe609eu);
    X86_TICK(c, 12);
    // 0e609e  push dword ptr [ebp + 0x18]
    X86_AT(c, 0xe609eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 0e60a1  call 0xe5748
    X86_AT(c, 0xe60a1u);
    push32(c, 0xe60a6u); f_000e5748(c); X86_RET(c, 0xe60a6u);
    X86_TICK(c, 35);
    // 0e60a6  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0xe60a6u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 0e60aa  add ax, 0xf
    X86_AT(c, 0xe60aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xFu, 0, 2)); }
    // 0e60ae  mov word ptr [0x7add8], ax
    X86_AT(c, 0xe60aeu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADD8u)), (c.r[0] & 0xFFFFu));
    // 0e60b4  mov ax, word ptr [ebp - 8]
    X86_AT(c, 0xe60b4u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 0e60b8  mov word ptr [0x7adda], ax
    X86_AT(c, 0xe60b8u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDAu)), (c.r[0] & 0xFFFFu));
    // 0e60be  mov word ptr [0x7addc], 0
    X86_AT(c, 0xe60beu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDCu)), 0x0u);
    // 0e60c7  mov word ptr [0x7adde], 0x10
    X86_AT(c, 0xe60c7u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDEu)), 0x10u);
    // 0e60d0  mov word ptr [0x7ade0], 0xfff0
    X86_AT(c, 0xe60d0u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE0u)), 0xFFF0u);
    // 0e60d9  mov word ptr [0x7ade2], 0
    X86_AT(c, 0xe60d9u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE2u)), 0x0u);
    // 0e60e2  push 0x7add8
    X86_AT(c, 0xe60e2u);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e60e7  mov eax, 0x7a7d8
    X86_AT(c, 0xe60e7u);
    c.r[0] = 0x7A7D8u;
    // 0e60ec  push eax
    X86_AT(c, 0xe60ecu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e60ed  call 0x929
    X86_AT(c, 0xe60edu);
    push32(c, 0xe60f2u); f_00000929(c); X86_RET(c, 0xe60f2u);
    X86_TICK(c, 9);
    // 0e60f2  push 0xf
    X86_AT(c, 0xe60f2u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e60f4  call 0xe5748
    X86_AT(c, 0xe60f4u);
    push32(c, 0xe60f9u); f_000e5748(c); X86_RET(c, 0xe60f9u);
    X86_TICK(c, 13);
    // 0e60f9  push 0x7add8
    X86_AT(c, 0xe60f9u);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e60fe  mov eax, 0x7a7d8
    X86_AT(c, 0xe60feu);
    c.r[0] = 0x7A7D8u;
    // 0e6103  push eax
    X86_AT(c, 0xe6103u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6104  call 0x905
    X86_AT(c, 0xe6104u);
    push32(c, 0xe6109u); f_00000905(c); X86_RET(c, 0xe6109u);
    X86_TICK(c, 12);
    // 0e6109  push dword ptr [ebp + 0x18]
    X86_AT(c, 0xe6109u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 0e610c  call 0xe5748
    X86_AT(c, 0xe610cu);
    push32(c, 0xe6111u); f_000e5748(c); X86_RET(c, 0xe6111u);
    X86_TICK(c, 29);
    // 0e6111  lea eax, [esi + 0xf]
    X86_AT(c, 0xe6111u);
    c.r[0] = (uint32_t)(c.r[6] + 0xFu);
    // 0e6114  push eax
    X86_AT(c, 0xe6114u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6115  mov eax, edi
    X86_AT(c, 0xe6115u);
    c.r[0] = c.r[7];
    // 0e6117  add eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe6117u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 0e611a  sub eax, 0x11
    X86_AT(c, 0xe611au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x11u, 0, 4); }
    // 0e611d  push eax
    X86_AT(c, 0xe611du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e611e  push esi
    X86_AT(c, 0xe611eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e611f  lea eax, [edi + 0x10]
    X86_AT(c, 0xe611fu);
    c.r[0] = (uint32_t)(c.r[7] + 0x10u);
    // 0e6122  push eax
    X86_AT(c, 0xe6122u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6123  call 0xe5df4
    X86_AT(c, 0xe6123u);
    push32(c, 0xe6128u); f_000e5df4(c); X86_RET(c, 0xe6128u);
    X86_TICK(c, 41);
    // 0e6128  add esp, 0x44
    X86_AT(c, 0xe6128u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0e612b  lea eax, [ebx + esi*1]
    X86_AT(c, 0xe612bu);
    c.r[0] = (uint32_t)(c.r[3] + c.r[6]);
    // 0e612e  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe612eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e6131  sub eax, 0x11
    X86_AT(c, 0xe6131u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x11u, 0, 4); }
    // 0e6134  push eax
    X86_AT(c, 0xe6134u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6135  mov edx, edi
    X86_AT(c, 0xe6135u);
    c.r[2] = c.r[7];
    // 0e6137  add edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe6137u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 0e613a  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xe613au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0e613d  dec edx
    X86_AT(c, 0xe613du);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0e613e  push edx
    X86_AT(c, 0xe613eu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e613f  lea ecx, [esi + 0x10]
    X86_AT(c, 0xe613fu);
    c.r[1] = (uint32_t)(c.r[6] + 0x10u);
    // 0e6142  push ecx
    X86_AT(c, 0xe6142u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e6143  push edi
    X86_AT(c, 0xe6143u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6144  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xe6144u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0e6147  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0xe6147u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 0e614a  call 0xe5df4
    X86_AT(c, 0xe614au);
    push32(c, 0xe614fu); f_000e5df4(c); X86_RET(c, 0xe614fu);
    X86_TICK(c, 38);
    // 0e614f  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe614fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e6152  dec eax
    X86_AT(c, 0xe6152u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e6153  push eax
    X86_AT(c, 0xe6153u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6154  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xe6154u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e6157  sub edx, 0x11
    X86_AT(c, 0xe6157u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x11u, 0, 4); }
    // 0e615a  push edx
    X86_AT(c, 0xe615au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e615b  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xe615bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0e615e  lea ecx, [edi + 0x10]
    X86_AT(c, 0xe615eu);
    c.r[1] = (uint32_t)(c.r[7] + 0x10u);
    // 0e6161  push ecx
    X86_AT(c, 0xe6161u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e6162  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xe6162u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0e6165  mov dword ptr [ebp - 0x18], ecx
    X86_AT(c, 0xe6165u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[1]);
    // 0e6168  mov dword ptr [ebp - 0x1c], edx
    X86_AT(c, 0xe6168u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[2]);
    // 0e616b  call 0xe5df4
    X86_AT(c, 0xe616bu);
    push32(c, 0xe6170u); f_000e5df4(c); X86_RET(c, 0xe6170u);
    X86_TICK(c, 9);
    // 0e6170  push 0xf
    X86_AT(c, 0xe6170u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e6172  call 0xe5748
    X86_AT(c, 0xe6172u);
    push32(c, 0xe6177u); f_000e5748(c); X86_RET(c, 0xe6177u);
    X86_TICK(c, 21);
    // 0e6177  push esi
    X86_AT(c, 0xe6177u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e6178  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xe6178u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0e617b  push esi
    X86_AT(c, 0xe617bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e617c  push dword ptr [ebp - 0x18]
    X86_AT(c, 0xe617cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))); push32(c, v); }
    // 0e617f  call 0xe5cd4
    X86_AT(c, 0xe617fu);
    push32(c, 0xe6184u); f_000e5cd4(c); X86_RET(c, 0xe6184u);
    X86_TICK(c, 33);
    // 0e6184  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe6184u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e6187  sub eax, 0xe
    X86_AT(c, 0xe6187u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xEu, 0, 4); }
    // 0e618a  push eax
    X86_AT(c, 0xe618au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e618b  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe618bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e618e  lea edx, [esi + 0xd]
    X86_AT(c, 0xe618eu);
    c.r[2] = (uint32_t)(c.r[6] + 0xDu);
    // 0e6191  push edx
    X86_AT(c, 0xe6191u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e6192  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xe6192u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0e6195  mov dword ptr [ebp - 0x20], eax
    X86_AT(c, 0xe6195u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[0]);
    // 0e6198  mov dword ptr [ebp - 0x24], edx
    X86_AT(c, 0xe6198u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), c.r[2]);
    // 0e619b  call 0xe5cd4
    X86_AT(c, 0xe619bu);
    push32(c, 0xe61a0u); f_000e5cd4(c); X86_RET(c, 0xe61a0u);
    X86_TICK(c, 29);
    // 0e61a0  add esp, 0x44
    X86_AT(c, 0xe61a0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0e61a3  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xe61a3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0e61a6  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xe61a6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0e61a9  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xe61a9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0e61ac  push dword ptr [ebp - 0x18]
    X86_AT(c, 0xe61acu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))); push32(c, v); }
    // 0e61af  call 0xe5cd4
    X86_AT(c, 0xe61afu);
    push32(c, 0xe61b4u); f_000e5cd4(c); X86_RET(c, 0xe61b4u);
    X86_TICK(c, 21);
    // 0e61b4  push dword ptr [ebp - 0x20]
    X86_AT(c, 0xe61b4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))); push32(c, v); }
    // 0e61b7  push edi
    X86_AT(c, 0xe61b7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e61b8  push dword ptr [ebp - 0x24]
    X86_AT(c, 0xe61b8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))); push32(c, v); }
    // 0e61bb  push edi
    X86_AT(c, 0xe61bbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e61bc  call 0xe5cd4
    X86_AT(c, 0xe61bcu);
    push32(c, 0xe61c1u); f_000e5cd4(c); X86_RET(c, 0xe61c1u);
    X86_TICK(c, 14);
    // 0e61c1  add esp, 0x20
    X86_AT(c, 0xe61c1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0e61c4  cmp dword ptr [ebp + 0x18], 0
    X86_AT(c, 0xe61c4u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0x0u, 0, 4);
    // 0e61c8  je 0xe61ce
    X86_AT(c, 0xe61c8u);
    if (x86_cc(c, 4)) { goto L_e61ce; }
    X86_TICK(c, 9);
    // 0e61ca  push 0xf
    X86_AT(c, 0xe61cau);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e61cc  jmp 0xe61d0
    X86_AT(c, 0xe61ccu);
    goto L_e61d0;
L_e61ce:
    X86_TICK(c, 2);
    // 0e61ce  push 0
    X86_AT(c, 0xe61ceu);
    { uint32_t v = 0x0u; push32(c, v); }
L_e61d0:
    X86_TICK(c, 7);
    // 0e61d0  call 0xe5748
    X86_AT(c, 0xe61d0u);
    push32(c, 0xe61d5u); f_000e5748(c); X86_RET(c, 0xe61d5u);
    X86_TICK(c, 11);
    // 0e61d5  add esp, 4
    X86_AT(c, 0xe61d5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e61d8  push 0
    X86_AT(c, 0xe61d8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e61da  call 0xe5778
    X86_AT(c, 0xe61dau);
    push32(c, 0xe61dfu); f_000e5778(c); X86_RET(c, 0xe61dfu);
    X86_TICK(c, 15);
    // 0e61df  push 0x18e
    X86_AT(c, 0xe61dfu);
    { uint32_t v = 0x18Eu; push32(c, v); }
    // 0e61e4  push 0x169
    X86_AT(c, 0xe61e4u);
    { uint32_t v = 0x169u; push32(c, v); }
    // 0e61e9  push 0x2f
    X86_AT(c, 0xe61e9u);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 0e61eb  push 0xa
    X86_AT(c, 0xe61ebu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e61ed  call 0xe5df4
    X86_AT(c, 0xe61edu);
    push32(c, 0xe61f2u); f_000e5df4(c); X86_RET(c, 0xe61f2u);
    X86_TICK(c, 9);
    // 0e61f2  push 0xf
    X86_AT(c, 0xe61f2u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e61f4  call 0xe5748
    X86_AT(c, 0xe61f4u);
    push32(c, 0xe61f9u); f_000e5748(c); X86_RET(c, 0xe61f9u);
    X86_TICK(c, 17);
    // 0e61f9  movsx eax, word ptr [0x7aedc]
    X86_AT(c, 0xe61f9u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x7AEDCu)));
    // 0e6200  push eax
    X86_AT(c, 0xe6200u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6201  push 0x7a7d8
    X86_AT(c, 0xe6201u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e6206  call 0x2c5
    X86_AT(c, 0xe6206u);
    push32(c, 0xe620bu); f_000002c5(c); X86_RET(c, 0xe620bu);
    X86_TICK(c, 30);
    // 0e620b  add esp, 0x20
    X86_AT(c, 0xe620bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0e620e  pop edi
    X86_AT(c, 0xe620eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e620f  pop esi
    X86_AT(c, 0xe620fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e6210  pop ebx
    X86_AT(c, 0xe6210u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e6211  leave 
    X86_AT(c, 0xe6211u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e6212  ret 
    X86_AT(c, 0xe6212u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5ed0u, "ran off the end of a function");
}
void f_000e6214(X86Cpu& c) {
    X86_TICK(c, 81);
    // 0e6214  push ebp
    X86_AT(c, 0xe6214u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e6215  mov ebp, esp
    X86_AT(c, 0xe6215u);
    c.r[5] = c.r[4];
    // 0e6217  push esi
    X86_AT(c, 0xe6217u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e6218  push edi
    X86_AT(c, 0xe6218u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6219  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6219u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e621c  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe621cu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e621f  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe621fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e6222  mov dword ptr [0x7add8], eax
    X86_AT(c, 0xe6222u);
    wr32((c.sbase[3] + (uint32_t)(0x7ADD8u)), c.r[0]);
    // 0e6227  mov word ptr [0x7addc], 0x14
    X86_AT(c, 0xe6227u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDCu)), 0x14u);
    // 0e6230  mov eax, edi
    X86_AT(c, 0xe6230u);
    c.r[0] = c.r[7];
    // 0e6232  mov word ptr [0x7adde], ax
    X86_AT(c, 0xe6232u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDEu)), (c.r[0] & 0xFFFFu));
    // 0e6238  mov eax, esi
    X86_AT(c, 0xe6238u);
    c.r[0] = c.r[6];
    // 0e623a  mov word ptr [0x7ade0], ax
    X86_AT(c, 0xe623au);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE0u)), (c.r[0] & 0xFFFFu));
    // 0e6240  mov eax, edi
    X86_AT(c, 0xe6240u);
    c.r[0] = c.r[7];
    // 0e6242  add ax, word ptr [ebp + 0x14]
    X86_AT(c, 0xe6242u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0, 2)); }
    // 0e6246  dec eax
    X86_AT(c, 0xe6246u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e6247  mov word ptr [0x7ade2], ax
    X86_AT(c, 0xe6247u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE2u)), (c.r[0] & 0xFFFFu));
    // 0e624d  mov eax, esi
    X86_AT(c, 0xe624du);
    c.r[0] = c.r[6];
    // 0e624f  add ax, word ptr [ebp + 0x18]
    X86_AT(c, 0xe624fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0, 2)); }
    // 0e6253  dec eax
    X86_AT(c, 0xe6253u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e6254  mov word ptr [0x7ade4], ax
    X86_AT(c, 0xe6254u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE4u)), (c.r[0] & 0xFFFFu));
    // 0e625a  mov ax, word ptr [ebp + 0x1c]
    X86_AT(c, 0xe625au);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))));
    // 0e625e  mov word ptr [0x7ade6], ax
    X86_AT(c, 0xe625eu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE6u)), (c.r[0] & 0xFFFFu));
    // 0e6264  mov ax, word ptr [ebp + 0x20]
    X86_AT(c, 0xe6264u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 0e6268  mov word ptr [0x7ade8], ax
    X86_AT(c, 0xe6268u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE8u)), (c.r[0] & 0xFFFFu));
    // 0e626e  push 0x7add8
    X86_AT(c, 0xe626eu);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e6273  push 0
    X86_AT(c, 0xe6273u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e6275  push 0x7a7d8
    X86_AT(c, 0xe6275u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e627a  call 0x610
    X86_AT(c, 0xe627au);
    push32(c, 0xe627fu); f_00000610(c); X86_RET(c, 0xe627fu);
    X86_TICK(c, 26);
    // 0e627f  add esp, 0xc
    X86_AT(c, 0xe627fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e6282  pop edi
    X86_AT(c, 0xe6282u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6283  pop esi
    X86_AT(c, 0xe6283u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e6284  leave 
    X86_AT(c, 0xe6284u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e6285  ret 
    X86_AT(c, 0xe6285u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe6214u, "ran off the end of a function");
}
void f_000e6288(X86Cpu& c) {
    X86_TICK(c, 69);
    // 0e6288  push ebp
    X86_AT(c, 0xe6288u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e6289  mov ebp, esp
    X86_AT(c, 0xe6289u);
    c.r[5] = c.r[4];
    // 0e628b  push esi
    X86_AT(c, 0xe628bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e628c  push edi
    X86_AT(c, 0xe628cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e628d  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe628du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e6290  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe6290u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e6293  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe6293u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e6296  mov dword ptr [0x7add8], eax
    X86_AT(c, 0xe6296u);
    wr32((c.sbase[3] + (uint32_t)(0x7ADD8u)), c.r[0]);
    // 0e629b  mov word ptr [0x7addc], 0x14
    X86_AT(c, 0xe629bu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDCu)), 0x14u);
    // 0e62a4  mov eax, edi
    X86_AT(c, 0xe62a4u);
    c.r[0] = c.r[7];
    // 0e62a6  mov word ptr [0x7adde], ax
    X86_AT(c, 0xe62a6u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDEu)), (c.r[0] & 0xFFFFu));
    // 0e62ac  mov eax, esi
    X86_AT(c, 0xe62acu);
    c.r[0] = c.r[6];
    // 0e62ae  mov word ptr [0x7ade0], ax
    X86_AT(c, 0xe62aeu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE0u)), (c.r[0] & 0xFFFFu));
    // 0e62b4  mov eax, edi
    X86_AT(c, 0xe62b4u);
    c.r[0] = c.r[7];
    // 0e62b6  add ax, word ptr [ebp + 0x14]
    X86_AT(c, 0xe62b6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0, 2)); }
    // 0e62ba  dec eax
    X86_AT(c, 0xe62bau);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e62bb  mov word ptr [0x7ade2], ax
    X86_AT(c, 0xe62bbu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE2u)), (c.r[0] & 0xFFFFu));
    // 0e62c1  mov eax, esi
    X86_AT(c, 0xe62c1u);
    c.r[0] = c.r[6];
    // 0e62c3  add ax, word ptr [ebp + 0x18]
    X86_AT(c, 0xe62c3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0, 2)); }
    // 0e62c7  dec eax
    X86_AT(c, 0xe62c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e62c8  mov word ptr [0x7ade4], ax
    X86_AT(c, 0xe62c8u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE4u)), (c.r[0] & 0xFFFFu));
    // 0e62ce  push 0x7add8
    X86_AT(c, 0xe62ceu);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e62d3  push 0
    X86_AT(c, 0xe62d3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e62d5  push 0x7a7d8
    X86_AT(c, 0xe62d5u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e62da  call 0x5c4
    X86_AT(c, 0xe62dau);
    push32(c, 0xe62dfu); f_000005c4(c); X86_RET(c, 0xe62dfu);
    X86_TICK(c, 26);
    // 0e62df  add esp, 0xc
    X86_AT(c, 0xe62dfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e62e2  pop edi
    X86_AT(c, 0xe62e2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e62e3  pop esi
    X86_AT(c, 0xe62e3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e62e4  leave 
    X86_AT(c, 0xe62e4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e62e5  ret 
    X86_AT(c, 0xe62e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe6288u, "ran off the end of a function");
}
void f_000e62e8(X86Cpu& c) {
    X86_TICK(c, 62);
    // 0e62e8  push ebp
    X86_AT(c, 0xe62e8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e62e9  mov ebp, esp
    X86_AT(c, 0xe62e9u);
    c.r[5] = c.r[4];
    // 0e62eb  push esi
    X86_AT(c, 0xe62ebu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e62ec  push edi
    X86_AT(c, 0xe62ecu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e62ed  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe62edu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e62f0  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe62f0u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e62f3  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xe62f3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0e62f6  shl eax, 9
    X86_AT(c, 0xe62f6u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0e62f9  add eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe62f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 0e62fc  mov dword ptr [0x7add8], eax
    X86_AT(c, 0xe62fcu);
    wr32((c.sbase[3] + (uint32_t)(0x7ADD8u)), c.r[0]);
    // 0e6301  mov word ptr [0x7addc], 0x14
    X86_AT(c, 0xe6301u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDCu)), 0x14u);
    // 0e630a  mov eax, edi
    X86_AT(c, 0xe630au);
    c.r[0] = c.r[7];
    // 0e630c  mov word ptr [0x7adde], ax
    X86_AT(c, 0xe630cu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDEu)), (c.r[0] & 0xFFFFu));
    // 0e6312  mov eax, esi
    X86_AT(c, 0xe6312u);
    c.r[0] = c.r[6];
    // 0e6314  mov word ptr [0x7ade0], ax
    X86_AT(c, 0xe6314u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE0u)), (c.r[0] & 0xFFFFu));
    // 0e631a  lea eax, [edi + 0x1f]
    X86_AT(c, 0xe631au);
    c.r[0] = (uint32_t)(c.r[7] + 0x1Fu);
    // 0e631d  mov word ptr [0x7ade2], ax
    X86_AT(c, 0xe631du);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE2u)), (c.r[0] & 0xFFFFu));
    // 0e6323  lea eax, [esi + 0x1f]
    X86_AT(c, 0xe6323u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1Fu);
    // 0e6326  mov word ptr [0x7ade4], ax
    X86_AT(c, 0xe6326u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE4u)), (c.r[0] & 0xFFFFu));
    // 0e632c  push 0x7add8
    X86_AT(c, 0xe632cu);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e6331  push 0
    X86_AT(c, 0xe6331u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e6333  push 0x7a7d8
    X86_AT(c, 0xe6333u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e6338  call 0x5c4
    X86_AT(c, 0xe6338u);
    push32(c, 0xe633du); f_000005c4(c); X86_RET(c, 0xe633du);
    X86_TICK(c, 26);
    // 0e633d  add esp, 0xc
    X86_AT(c, 0xe633du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e6340  pop edi
    X86_AT(c, 0xe6340u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6341  pop esi
    X86_AT(c, 0xe6341u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e6342  leave 
    X86_AT(c, 0xe6342u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e6343  ret 
    X86_AT(c, 0xe6343u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe62e8u, "ran off the end of a function");
}
void f_000e63fc(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0e63fc  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xe63fcu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e6400  mov eax, dword ptr [ecx + 0x1e]
    X86_AT(c, 0xe6400u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x1Eu)));
    // 0e6403  mov edx, dword ptr [esp + 8]
    X86_AT(c, 0xe6403u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0e6407  mov dword ptr [edx], eax
    X86_AT(c, 0xe6407u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0e6409  mov eax, dword ptr [ecx + 0x2a]
    X86_AT(c, 0xe6409u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x2Au)));
    // 0e640c  mov edx, dword ptr [esp + 0xc]
    X86_AT(c, 0xe640cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0e6410  mov dword ptr [edx], eax
    X86_AT(c, 0xe6410u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0e6412  ret 
    X86_AT(c, 0xe6412u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe63fcu, "ran off the end of a function");
}
void f_000e642c(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0e642c  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xe642cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e6430  movsx eax, word ptr [eax + 0x36]
    X86_AT(c, 0xe6430u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x36u)));
    // 0e6434  ret 
    X86_AT(c, 0xe6434u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe642cu, "ran off the end of a function");
}
void f_000e6438(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0e6438  push ebp
    X86_AT(c, 0xe6438u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e6439  mov ebp, esp
    X86_AT(c, 0xe6439u);
    c.r[5] = c.r[4];
    // 0e643b  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe643bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e643e  push 2
    X86_AT(c, 0xe643eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e6440  push 0x100
    X86_AT(c, 0xe6440u);
    { uint32_t v = 0x100u; push32(c, v); }
    // 0e6445  push dword ptr [ebp + 8]
    X86_AT(c, 0xe6445u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e6448  call 0x100c58
    X86_AT(c, 0xe6448u);
    push32(c, 0xe644du); f_00100c58(c); X86_RET(c, 0xe644du);
    X86_TICK(c, 9);
    // 0e644d  add esp, 0x10
    X86_AT(c, 0xe644du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e6450  cmp eax, 2
    X86_AT(c, 0xe6450u);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0e6453  jge 0xe645c
    X86_AT(c, 0xe6453u);
    if (x86_cc(c, 13)) { goto L_e645c; }
    X86_TICK(c, 9);
    // 0e6455  mov eax, 0xffffffff
    X86_AT(c, 0xe6455u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e645a  jmp 0xe645e
    X86_AT(c, 0xe645au);
    goto L_e645e;
L_e645c:
    X86_TICK(c, 2);
    // 0e645c  sub eax, eax
    X86_AT(c, 0xe645cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e645e:
    X86_TICK(c, 16);
    // 0e645e  leave 
    X86_AT(c, 0xe645eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e645f  ret 
    X86_AT(c, 0xe645fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe6438u, "ran off the end of a function");
}
void f_000e6460(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0e6460  push ebp
    X86_AT(c, 0xe6460u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e6461  mov ebp, esp
    X86_AT(c, 0xe6461u);
    c.r[5] = c.r[4];
    // 0e6463  sub esp, 0x200
    X86_AT(c, 0xe6463u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x200u, 0, 4); }
    // 0e6469  push ebx
    X86_AT(c, 0xe6469u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e646a  push esi
    X86_AT(c, 0xe646au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e646b  push edi
    X86_AT(c, 0xe646bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e646c  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe646cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e646f  push 0x2070
    X86_AT(c, 0xe646fu);
    { uint32_t v = 0x2070u; push32(c, v); }
    // 0e6474  push dword ptr [ebp + 8]
    X86_AT(c, 0xe6474u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e6477  call 0x100f34
    X86_AT(c, 0xe6477u);
    push32(c, 0xe647cu); f_00100f34(c); X86_RET(c, 0xe647cu);
    X86_TICK(c, 12);
    // 0e647c  add esp, 8
    X86_AT(c, 0xe647cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e647f  xchg ebx, eax
    X86_AT(c, 0xe647fu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e6480  and ebx, ebx
    X86_AT(c, 0xe6480u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0e6482  jne 0xe64a2
    X86_AT(c, 0xe6482u);
    if (x86_cc(c, 5)) { goto L_e64a2; }
    X86_TICK(c, 9);
    // 0e6484  push 0x2074
    X86_AT(c, 0xe6484u);
    { uint32_t v = 0x2074u; push32(c, v); }
    // 0e6489  call 0xe75f8
    X86_AT(c, 0xe6489u);
    push32(c, 0xe648eu); f_000e75f8(c); X86_RET(c, 0xe648eu);
    X86_TICK(c, 9);
    // 0e648e  push 0xa
    X86_AT(c, 0xe648eu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e6490  call 0xe9740
    X86_AT(c, 0xe6490u);
    push32(c, 0xe6495u); f_000e9740(c); X86_RET(c, 0xe6495u);
    X86_TICK(c, 11);
    // 0e6495  mov eax, 0xffffffff
    X86_AT(c, 0xe6495u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e649a  add esp, 8
    X86_AT(c, 0xe649au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e649d  jmp 0xe654a
    X86_AT(c, 0xe649du);
    goto L_e654a;
L_e64a2:
    X86_TICK(c, 13);
    // 0e64a2  push ebx
    X86_AT(c, 0xe64a2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e64a3  lea eax, [ebp - 0x200]
    X86_AT(c, 0xe64a3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFE00u);
    // 0e64a9  push eax
    X86_AT(c, 0xe64a9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e64aa  call 0xe6438
    X86_AT(c, 0xe64aau);
    push32(c, 0xe64afu); f_000e6438(c); X86_RET(c, 0xe64afu);
    X86_TICK(c, 9);
    // 0e64af  add esp, 8
    X86_AT(c, 0xe64afu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e64b2  inc eax
    X86_AT(c, 0xe64b2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e64b3  jne 0xe64bc
    X86_AT(c, 0xe64b3u);
    if (x86_cc(c, 5)) { goto L_e64bc; }
    X86_TICK(c, 9);
    // 0e64b5  push 0x20a0
    X86_AT(c, 0xe64b5u);
    { uint32_t v = 0x20A0u; push32(c, v); }
    // 0e64ba  jmp 0xe6523
    X86_AT(c, 0xe64bau);
    goto L_e6523;
L_e64bc:
    X86_TICK(c, 21);
    // 0e64bc  push dword ptr [ebp + 0x18]
    X86_AT(c, 0xe64bcu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 0e64bf  push dword ptr [ebp + 0x14]
    X86_AT(c, 0xe64bfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))); push32(c, v); }
    // 0e64c2  lea eax, [ebp - 0x200]
    X86_AT(c, 0xe64c2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFE00u);
    // 0e64c8  push eax
    X86_AT(c, 0xe64c8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e64c9  call 0xe63fc
    X86_AT(c, 0xe64c9u);
    push32(c, 0xe64ceu); f_000e63fc(c); X86_RET(c, 0xe64ceu);
    X86_TICK(c, 11);
    // 0e64ce  lea eax, [ebp - 0x200]
    X86_AT(c, 0xe64ceu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFE00u);
    // 0e64d4  push eax
    X86_AT(c, 0xe64d4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e64d5  call 0xe642c
    X86_AT(c, 0xe64d5u);
    push32(c, 0xe64dau); f_000e642c(c); X86_RET(c, 0xe64dau);
    X86_TICK(c, 21);
    // 0e64da  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xe64dau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0e64dd  mov dword ptr [edx], eax
    X86_AT(c, 0xe64ddu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0e64df  movzx eax, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe64dfu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu)));
    // 0e64e3  push eax
    X86_AT(c, 0xe64e3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e64e4  call 0x102367
    X86_AT(c, 0xe64e4u);
    push32(c, 0xe64e9u); f_00102367(c); X86_RET(c, 0xe64e9u);
    X86_TICK(c, 14);
    // 0e64e9  xchg esi, eax
    X86_AT(c, 0xe64e9u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e64ea  sub esi, 0x200
    X86_AT(c, 0xe64eau);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x200u, 0, 4); }
    // 0e64f0  add esp, 0x14
    X86_AT(c, 0xe64f0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0e64f3  cmp esi, 1
    X86_AT(c, 0xe64f3u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0e64f6  jge 0xe6505
    X86_AT(c, 0xe64f6u);
    if (x86_cc(c, 13)) { goto L_e6505; }
    X86_TICK(c, 9);
    // 0e64f8  push ebx
    X86_AT(c, 0xe64f8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e64f9  call 0x101430
    X86_AT(c, 0xe64f9u);
    push32(c, 0xe64feu); f_00101430(c); X86_RET(c, 0xe64feu);
    X86_TICK(c, 9);
    // 0e64fe  mov eax, 0xffffffff
    X86_AT(c, 0xe64feu);
    c.r[0] = 0xFFFFFFFFu;
    // 0e6503  jmp 0xe6547
    X86_AT(c, 0xe6503u);
    goto L_e6547;
L_e6505:
    X86_TICK(c, 7);
    // 0e6505  cmp edi, esi
    X86_AT(c, 0xe6505u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 0e6507  jge 0xe650b
    X86_AT(c, 0xe6507u);
    if (x86_cc(c, 13)) { goto L_e650b; }
    X86_TICK(c, 2);
    // 0e6509  mov esi, edi
    X86_AT(c, 0xe6509u);
    c.r[6] = c.r[7];
L_e650b:
    X86_TICK(c, 18);
    // 0e650b  push ebx
    X86_AT(c, 0xe650bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e650c  push esi
    X86_AT(c, 0xe650cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e650d  push 1
    X86_AT(c, 0xe650du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e650f  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe650fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e6512  call 0x100c58
    X86_AT(c, 0xe6512u);
    push32(c, 0xe6517u); f_00100c58(c); X86_RET(c, 0xe6517u);
    X86_TICK(c, 9);
    // 0e6517  add esp, 0x10
    X86_AT(c, 0xe6517u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e651a  cmp esi, eax
    X86_AT(c, 0xe651au);
    (void)x86_sub(c, c.r[6], c.r[0], 0, 4);
    // 0e651c  jle 0xe653f
    X86_AT(c, 0xe651cu);
    if (x86_cc(c, 14)) { goto L_e653f; }
    X86_TICK(c, 2);
    // 0e651e  push 0x20c8
    X86_AT(c, 0xe651eu);
    { uint32_t v = 0x20C8u; push32(c, v); }
L_e6523:
    X86_TICK(c, 7);
    // 0e6523  call 0xe75f8
    X86_AT(c, 0xe6523u);
    push32(c, 0xe6528u); f_000e75f8(c); X86_RET(c, 0xe6528u);
    X86_TICK(c, 9);
    // 0e6528  push 0xa
    X86_AT(c, 0xe6528u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0e652a  call 0xe9740
    X86_AT(c, 0xe652au);
    push32(c, 0xe652fu); f_000e9740(c); X86_RET(c, 0xe652fu);
    X86_TICK(c, 9);
    // 0e652f  push ebx
    X86_AT(c, 0xe652fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e6530  call 0x101430
    X86_AT(c, 0xe6530u);
    push32(c, 0xe6535u); f_00101430(c); X86_RET(c, 0xe6535u);
    X86_TICK(c, 11);
    // 0e6535  mov eax, 0xffffffff
    X86_AT(c, 0xe6535u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e653a  add esp, 0xc
    X86_AT(c, 0xe653au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e653d  jmp 0xe654a
    X86_AT(c, 0xe653du);
    goto L_e654a;
L_e653f:
    X86_TICK(c, 9);
    // 0e653f  push ebx
    X86_AT(c, 0xe653fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e6540  call 0x101430
    X86_AT(c, 0xe6540u);
    push32(c, 0xe6545u); f_00101430(c); X86_RET(c, 0xe6545u);
    X86_TICK(c, 2);
    // 0e6545  mov eax, esi
    X86_AT(c, 0xe6545u);
    c.r[0] = c.r[6];
L_e6547:
    X86_TICK(c, 2);
    // 0e6547  add esp, 4
    X86_AT(c, 0xe6547u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e654a:
    X86_TICK(c, 28);
    // 0e654a  pop edi
    X86_AT(c, 0xe654au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e654b  pop esi
    X86_AT(c, 0xe654bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e654c  pop ebx
    X86_AT(c, 0xe654cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e654d  leave 
    X86_AT(c, 0xe654du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e654e  ret 
    X86_AT(c, 0xe654eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe6460u, "ran off the end of a function");
}
void f_000e6550(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0e6550  push ebp
    X86_AT(c, 0xe6550u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e6551  mov ebp, esp
    X86_AT(c, 0xe6551u);
    c.r[5] = c.r[4];
    // 0e6553  sub esp, 0x281c
    X86_AT(c, 0xe6553u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x281Cu, 0, 4); }
    // 0e6559  push ebx
    X86_AT(c, 0xe6559u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e655a  push esi
    X86_AT(c, 0xe655au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e655b  push edi
    X86_AT(c, 0xe655bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e655c  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe655cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e655f  mov dword ptr [ebp - 0x18], 0
    X86_AT(c, 0xe655fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0x0u);
    // 0e6566  push 0x20e8
    X86_AT(c, 0xe6566u);
    { uint32_t v = 0x20E8u; push32(c, v); }
    // 0e656b  push dword ptr [ebp + 8]
    X86_AT(c, 0xe656bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e656e  call 0x100f34
    X86_AT(c, 0xe656eu);
    push32(c, 0xe6573u); f_00100f34(c); X86_RET(c, 0xe6573u);
    X86_TICK(c, 11);
    // 0e6573  add esp, 8
    X86_AT(c, 0xe6573u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e6576  mov dword ptr [ebp - 0x281c], eax
    X86_AT(c, 0xe6576u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u)), c.r[0]);
    // 0e657c  and eax, eax
    X86_AT(c, 0xe657cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e657e  je 0xe6849
    X86_AT(c, 0xe657eu);
    if (x86_cc(c, 4)) { goto L_e6849; }
    X86_TICK(c, 16);
    // 0e6584  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0xe6584u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 0e658a  lea eax, [ebp - 0x2818]
    X86_AT(c, 0xe658au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 0e6590  push eax
    X86_AT(c, 0xe6590u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6591  call 0xe6438
    X86_AT(c, 0xe6591u);
    push32(c, 0xe6596u); f_000e6438(c); X86_RET(c, 0xe6596u);
    X86_TICK(c, 9);
    // 0e6596  add esp, 8
    X86_AT(c, 0xe6596u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e6599  inc eax
    X86_AT(c, 0xe6599u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e659a  je 0xe67b9
    X86_AT(c, 0xe659au);
    if (x86_cc(c, 4)) { goto L_e67b9; }
    X86_TICK(c, 19);
    // 0e65a0  lea eax, [ebp - 0xc]
    X86_AT(c, 0xe65a0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0e65a3  push eax
    X86_AT(c, 0xe65a3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e65a4  lea ecx, [ebp - 8]
    X86_AT(c, 0xe65a4u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e65a7  push ecx
    X86_AT(c, 0xe65a7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e65a8  lea edx, [ebp - 0x2818]
    X86_AT(c, 0xe65a8u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 0e65ae  push edx
    X86_AT(c, 0xe65aeu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e65af  call 0xe63fc
    X86_AT(c, 0xe65afu);
    push32(c, 0xe65b4u); f_000e63fc(c); X86_RET(c, 0xe65b4u);
    X86_TICK(c, 11);
    // 0e65b4  lea eax, [ebp - 0x2818]
    X86_AT(c, 0xe65b4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 0e65ba  push eax
    X86_AT(c, 0xe65bau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e65bb  call 0xe642c
    X86_AT(c, 0xe65bbu);
    push32(c, 0xe65c0u); f_000e642c(c); X86_RET(c, 0xe65c0u);
    X86_TICK(c, 21);
    // 0e65c0  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe65c0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e65c3  mov eax, dword ptr [ebp - 0x281c]
    X86_AT(c, 0xe65c3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u)));
    // 0e65c9  movzx eax, byte ptr [eax + 0xe]
    X86_AT(c, 0xe65c9u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xEu)));
    // 0e65cd  push eax
    X86_AT(c, 0xe65cdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e65ce  call 0x102367
    X86_AT(c, 0xe65ceu);
    push32(c, 0xe65d3u); f_00102367(c); X86_RET(c, 0xe65d3u);
    X86_TICK(c, 14);
    // 0e65d3  xchg esi, eax
    X86_AT(c, 0xe65d3u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e65d4  sub esi, 0x200
    X86_AT(c, 0xe65d4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x200u, 0, 4); }
    // 0e65da  add esp, 0x14
    X86_AT(c, 0xe65dau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0e65dd  cmp esi, 1
    X86_AT(c, 0xe65ddu);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0e65e0  jl 0xe67b9
    X86_AT(c, 0xe65e0u);
    if (x86_cc(c, 12)) { goto L_e67b9; }
    X86_TICK(c, 12);
    // 0e65e6  cmp dword ptr [ebp - 8], 1
    X86_AT(c, 0xe65e6u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x1u, 0, 4);
    // 0e65ea  jl 0xe67b9
    X86_AT(c, 0xe65eau);
    if (x86_cc(c, 12)) { goto L_e67b9; }
    X86_TICK(c, 12);
    // 0e65f0  cmp dword ptr [ebp - 0xc], 1
    X86_AT(c, 0xe65f0u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x1u, 0, 4);
    // 0e65f4  jl 0xe67b9
    X86_AT(c, 0xe65f4u);
    if (x86_cc(c, 12)) { goto L_e67b9; }
    X86_TICK(c, 13);
    // 0e65fa  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xe65fau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e65fd  dec edx
    X86_AT(c, 0xe65fdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0e65fe  cmp edx, 0xf
    X86_AT(c, 0xe65feu);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0e6601  ja 0xe6663
    X86_AT(c, 0xe6601u);
    if (x86_cc(c, 7)) { goto L_e6663; }
    X86_TICK(c, 7);
    // 0e6603  jmp dword ptr cs:[edx*4 + 0xe660b]
    X86_AT(c, 0xe6603u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xE660Bu)));
      switch (t) {
      case 0xe664bu: goto L_e664b;
      case 0xe6656u: goto L_e6656;
      case 0xe665bu: goto L_e665b;
      case 0xe6663u: goto L_e6663;
      default: x86_jump(c, t); return; } }
L_e664b:
    X86_TICK(c, 20);
    // 0e664b  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe664bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e664e  inc eax
    X86_AT(c, 0xe664eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e664f  cdq 
    X86_AT(c, 0xe664fu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e6650  sub eax, edx
    X86_AT(c, 0xe6650u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e6652  sar eax, 1
    X86_AT(c, 0xe6652u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e6654  jmp 0xe6660
    X86_AT(c, 0xe6654u);
    goto L_e6660;
L_e6656:
    X86_TICK(c, 11);
    // 0e6656  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe6656u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e6659  jmp 0xe6660
    X86_AT(c, 0xe6659u);
    goto L_e6660;
L_e665b:
    X86_TICK(c, 6);
    // 0e665b  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe665bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e665e  add eax, eax
    X86_AT(c, 0xe665eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
L_e6660:
    X86_TICK(c, 2);
    // 0e6660  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xe6660u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
L_e6663:
    X86_TICK(c, 33);
    // 0e6663  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xe6663u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0e6666  imul eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe6666u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 4);
    // 0e666a  cmp eax, esi
    X86_AT(c, 0xe666au);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0e666c  jge 0xe666f
    X86_AT(c, 0xe666cu);
    if (x86_cc(c, 13)) { goto L_e666f; }
    X86_TICK(c, 3);
    // 0e666e  xchg esi, eax
    X86_AT(c, 0xe666eu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_e666f:
    X86_TICK(c, 33);
    // 0e666f  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xe666fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0e6672  imul eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe6672u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 4);
    // 0e6676  cmp eax, esi
    X86_AT(c, 0xe6676u);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0e6678  jle 0xe6688
    X86_AT(c, 0xe6678u);
    if (x86_cc(c, 14)) { goto L_e6688; }
    X86_TICK(c, 71);
    // 0e667a  mov eax, esi
    X86_AT(c, 0xe667au);
    c.r[0] = c.r[6];
    // 0e667c  cdq 
    X86_AT(c, 0xe667cu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e667d  idiv dword ptr [ebp - 0x10]
    X86_AT(c, 0xe667du);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4, 0xe667du);
    // 0e6680  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xe6680u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0e6683  imul eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xe6683u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4);
    // 0e6687  xchg esi, eax
    X86_AT(c, 0xe6687u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_e6688:
    X86_TICK(c, 7);
    // 0e6688  cmp esi, 0x2800
    X86_AT(c, 0xe6688u);
    (void)x86_sub(c, c.r[6], 0x2800u, 0, 4);
    // 0e668e  jg 0xe671e
    X86_AT(c, 0xe668eu);
    if (x86_cc(c, 15)) { goto L_e671e; }
    X86_TICK(c, 22);
    // 0e6694  mov ebx, esi
    X86_AT(c, 0xe6694u);
    c.r[3] = c.r[6];
    // 0e6696  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0xe6696u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 0e669c  push 1
    X86_AT(c, 0xe669cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e669e  push ebx
    X86_AT(c, 0xe669eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e669f  lea eax, [ebp - 0x2818]
    X86_AT(c, 0xe669fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 0e66a5  push eax
    X86_AT(c, 0xe66a5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e66a6  call 0x100c58
    X86_AT(c, 0xe66a6u);
    push32(c, 0xe66abu); f_00100c58(c); X86_RET(c, 0xe66abu);
    X86_TICK(c, 9);
    // 0e66ab  add esp, 0x10
    X86_AT(c, 0xe66abu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e66ae  dec eax
    X86_AT(c, 0xe66aeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e66af  jge 0xe66b8
    X86_AT(c, 0xe66afu);
    if (x86_cc(c, 13)) { goto L_e66b8; }
    X86_TICK(c, 2);
    // 0e66b1  mov dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0xe66b1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0xFFFFFFFFu);
L_e66b8:
    X86_TICK(c, 51);
    // 0e66b8  lea eax, [ebp - 0x2818]
    X86_AT(c, 0xe66b8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 0e66be  mov dword ptr [0x7add8], eax
    X86_AT(c, 0xe66beu);
    wr32((c.sbase[3] + (uint32_t)(0x7ADD8u)), c.r[0]);
    // 0e66c3  mov word ptr [0x7addc], 0x14
    X86_AT(c, 0xe66c3u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDCu)), 0x14u);
    // 0e66cc  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0xe66ccu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0e66d0  mov word ptr [0x7adde], ax
    X86_AT(c, 0xe66d0u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDEu)), (c.r[0] & 0xFFFFu));
    // 0e66d6  mov edx, edi
    X86_AT(c, 0xe66d6u);
    c.r[2] = c.r[7];
    // 0e66d8  mov word ptr [0x7ade0], dx
    X86_AT(c, 0xe66d8u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE0u)), (c.r[2] & 0xFFFFu));
    // 0e66df  add ax, word ptr [ebp - 8]
    X86_AT(c, 0xe66dfu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 2)); }
    // 0e66e3  dec eax
    X86_AT(c, 0xe66e3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e66e4  mov word ptr [0x7ade2], ax
    X86_AT(c, 0xe66e4u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE2u)), (c.r[0] & 0xFFFFu));
    // 0e66ea  mov eax, edi
    X86_AT(c, 0xe66eau);
    c.r[0] = c.r[7];
    // 0e66ec  add ax, word ptr [ebp - 0xc]
    X86_AT(c, 0xe66ecu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 2)); }
    // 0e66f0  dec eax
    X86_AT(c, 0xe66f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e66f1  mov word ptr [0x7ade4], ax
    X86_AT(c, 0xe66f1u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE4u)), (c.r[0] & 0xFFFFu));
    // 0e66f7  push 0x7add8
    X86_AT(c, 0xe66f7u);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e66fc  push 0
    X86_AT(c, 0xe66fcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e66fe  push 0x7a7d8
    X86_AT(c, 0xe66feu);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e6703  call 0x5c4
    X86_AT(c, 0xe6703u);
    push32(c, 0xe6708u); f_000005c4(c); X86_RET(c, 0xe6708u);
    X86_TICK(c, 12);
    // 0e6708  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0xe6708u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 0e670e  call 0x101430
    X86_AT(c, 0xe670eu);
    push32(c, 0xe6713u); f_00101430(c); X86_RET(c, 0xe6713u);
    X86_TICK(c, 13);
    // 0e6713  mov eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0xe6713u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0e6716  add esp, 0x10
    X86_AT(c, 0xe6716u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e6719  jmp 0xe6852
    X86_AT(c, 0xe6719u);
    goto L_e6852;
L_e671e:
    X86_TICK(c, 93);
    // 0e671e  mov eax, 0x2800
    X86_AT(c, 0xe671eu);
    c.r[0] = 0x2800u;
    // 0e6723  cdq 
    X86_AT(c, 0xe6723u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e6724  idiv dword ptr [ebp - 0x10]
    X86_AT(c, 0xe6724u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4, 0xe6724u);
    // 0e6727  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xe6727u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0e672a  imul eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xe672au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4);
    // 0e672e  xchg ebx, eax
    X86_AT(c, 0xe672eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e672f  lea eax, [ebp - 0x2818]
    X86_AT(c, 0xe672fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 0e6735  mov dword ptr [0x7add8], eax
    X86_AT(c, 0xe6735u);
    wr32((c.sbase[3] + (uint32_t)(0x7ADD8u)), c.r[0]);
    // 0e673a  mov word ptr [0x7addc], 0x14
    X86_AT(c, 0xe673au);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDCu)), 0x14u);
    // 0e6743  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0xe6743u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0e6747  mov word ptr [0x7adde], ax
    X86_AT(c, 0xe6747u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDEu)), (c.r[0] & 0xFFFFu));
    // 0e674d  add ax, word ptr [ebp - 8]
    X86_AT(c, 0xe674du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 2)); }
    // 0e6751  dec eax
    X86_AT(c, 0xe6751u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e6752  mov word ptr [0x7ade2], ax
    X86_AT(c, 0xe6752u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE2u)), (c.r[0] & 0xFFFFu));
L_e6758:
    X86_TICK(c, 7);
    // 0e6758  cmp ebx, esi
    X86_AT(c, 0xe6758u);
    (void)x86_sub(c, c.r[3], c.r[6], 0, 4);
    // 0e675a  jge 0xe67b4
    X86_AT(c, 0xe675au);
    if (x86_cc(c, 13)) { goto L_e67b4; }
    X86_TICK(c, 20);
    // 0e675c  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0xe675cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 0e6762  push 1
    X86_AT(c, 0xe6762u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e6764  push ebx
    X86_AT(c, 0xe6764u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e6765  lea eax, [ebp - 0x2818]
    X86_AT(c, 0xe6765u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 0e676b  push eax
    X86_AT(c, 0xe676bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e676c  call 0x100c58
    X86_AT(c, 0xe676cu);
    push32(c, 0xe6771u); f_00100c58(c); X86_RET(c, 0xe6771u);
    X86_TICK(c, 9);
    // 0e6771  add esp, 0x10
    X86_AT(c, 0xe6771u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e6774  dec eax
    X86_AT(c, 0xe6774u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e6775  jge 0xe677e
    X86_AT(c, 0xe6775u);
    if (x86_cc(c, 13)) { goto L_e677e; }
    X86_TICK(c, 2);
    // 0e6777  mov dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0xe6777u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0xFFFFFFFFu);
L_e677e:
    X86_TICK(c, 29);
    // 0e677e  mov eax, edi
    X86_AT(c, 0xe677eu);
    c.r[0] = c.r[7];
    // 0e6780  mov word ptr [0x7ade0], ax
    X86_AT(c, 0xe6780u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE0u)), (c.r[0] & 0xFFFFu));
    // 0e6786  mov eax, edi
    X86_AT(c, 0xe6786u);
    c.r[0] = c.r[7];
    // 0e6788  add ax, word ptr [ebp - 0x14]
    X86_AT(c, 0xe6788u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 2)); }
    // 0e678c  dec eax
    X86_AT(c, 0xe678cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e678d  mov word ptr [0x7ade4], ax
    X86_AT(c, 0xe678du);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE4u)), (c.r[0] & 0xFFFFu));
    // 0e6793  push 0x7add8
    X86_AT(c, 0xe6793u);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e6798  push 0
    X86_AT(c, 0xe6798u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e679a  push 0x7a7d8
    X86_AT(c, 0xe679au);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e679f  call 0x5c4
    X86_AT(c, 0xe679fu);
    push32(c, 0xe67a4u); f_000005c4(c); X86_RET(c, 0xe67a4u);
    X86_TICK(c, 22);
    // 0e67a4  add edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe67a4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 4); }
    // 0e67a7  sub esi, ebx
    X86_AT(c, 0xe67a7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0e67a9  add esp, 0xc
    X86_AT(c, 0xe67a9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0e67ac  cmp dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0xe67acu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 0xFFFFFFFFu, 0, 4);
    // 0e67b0  jne 0xe6758
    X86_AT(c, 0xe67b0u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe6758u); goto L_e6758; }
    X86_TICK(c, 7);
    // 0e67b2  jmp 0xe67b9
    X86_AT(c, 0xe67b2u);
    goto L_e67b9;
L_e67b4:
    X86_TICK(c, 11);
    // 0e67b4  cmp esi, dword ptr [ebp - 0x10]
    X86_AT(c, 0xe67b4u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4);
    // 0e67b7  jge 0xe67d1
    X86_AT(c, 0xe67b7u);
    if (x86_cc(c, 13)) { goto L_e67d1; }
L_e67b9:
    X86_TICK(c, 12);
    // 0e67b9  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0xe67b9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 0e67bf  call 0x101430
    X86_AT(c, 0xe67bfu);
    push32(c, 0xe67c4u); f_00101430(c); X86_RET(c, 0xe67c4u);
    X86_TICK(c, 11);
    // 0e67c4  mov eax, 0xffffffff
    X86_AT(c, 0xe67c4u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e67c9  add esp, 4
    X86_AT(c, 0xe67c9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e67cc  jmp 0xe6852
    X86_AT(c, 0xe67ccu);
    goto L_e6852;
L_e67d1:
    X86_TICK(c, 88);
    // 0e67d1  mov eax, esi
    X86_AT(c, 0xe67d1u);
    c.r[0] = c.r[6];
    // 0e67d3  cdq 
    X86_AT(c, 0xe67d3u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e67d4  idiv dword ptr [ebp - 0x10]
    X86_AT(c, 0xe67d4u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4, 0xe67d4u);
    // 0e67d7  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xe67d7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0e67da  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0xe67dau);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 0e67e0  push 1
    X86_AT(c, 0xe67e0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e67e2  imul eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xe67e2u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4);
    // 0e67e6  push eax
    X86_AT(c, 0xe67e6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e67e7  lea eax, [ebp - 0x2818]
    X86_AT(c, 0xe67e7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 0e67ed  push eax
    X86_AT(c, 0xe67edu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e67ee  call 0x100c58
    X86_AT(c, 0xe67eeu);
    push32(c, 0xe67f3u); f_00100c58(c); X86_RET(c, 0xe67f3u);
    X86_TICK(c, 9);
    // 0e67f3  add esp, 0x10
    X86_AT(c, 0xe67f3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e67f6  dec eax
    X86_AT(c, 0xe67f6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e67f7  jge 0xe6800
    X86_AT(c, 0xe67f7u);
    if (x86_cc(c, 13)) { goto L_e6800; }
    X86_TICK(c, 2);
    // 0e67f9  mov dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0xe67f9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0xFFFFFFFFu);
L_e6800:
    X86_TICK(c, 35);
    // 0e6800  mov eax, edi
    X86_AT(c, 0xe6800u);
    c.r[0] = c.r[7];
    // 0e6802  mov word ptr [0x7ade0], ax
    X86_AT(c, 0xe6802u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE0u)), (c.r[0] & 0xFFFFu));
    // 0e6808  mov eax, edi
    X86_AT(c, 0xe6808u);
    c.r[0] = c.r[7];
    // 0e680a  add ax, word ptr [ebp - 0x14]
    X86_AT(c, 0xe680au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 2)); }
    // 0e680e  dec eax
    X86_AT(c, 0xe680eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e680f  mov word ptr [0x7ade4], ax
    X86_AT(c, 0xe680fu);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE4u)), (c.r[0] & 0xFFFFu));
    // 0e6815  mov ax, word ptr [ebp - 0x14]
    X86_AT(c, 0xe6815u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))));
    // 0e6819  mov word ptr [0x7ade8], ax
    X86_AT(c, 0xe6819u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADE8u)), (c.r[0] & 0xFFFFu));
    // 0e681f  push 0x7add8
    X86_AT(c, 0xe681fu);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e6824  push 0
    X86_AT(c, 0xe6824u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e6826  push 0x7a7d8
    X86_AT(c, 0xe6826u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e682b  call 0x5c4
    X86_AT(c, 0xe682bu);
    push32(c, 0xe6830u); f_000005c4(c); X86_RET(c, 0xe6830u);
    X86_TICK(c, 12);
    // 0e6830  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0xe6830u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 0e6836  call 0x101430
    X86_AT(c, 0xe6836u);
    push32(c, 0xe683bu); f_00101430(c); X86_RET(c, 0xe683bu);
    X86_TICK(c, 35);
    // 0e683b  add esp, 0x10
    X86_AT(c, 0xe683bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e683e  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xe683eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0e6841  imul eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe6841u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 4);
    // 0e6845  cmp eax, esi
    X86_AT(c, 0xe6845u);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0e6847  jge 0xe6850
    X86_AT(c, 0xe6847u);
    if (x86_cc(c, 13)) { goto L_e6850; }
L_e6849:
    X86_TICK(c, 9);
    // 0e6849  mov eax, 0xffffffff
    X86_AT(c, 0xe6849u);
    c.r[0] = 0xFFFFFFFFu;
    // 0e684e  jmp 0xe6852
    X86_AT(c, 0xe684eu);
    goto L_e6852;
L_e6850:
    X86_TICK(c, 2);
    // 0e6850  sub eax, eax
    X86_AT(c, 0xe6850u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_e6852:
    X86_TICK(c, 28);
    // 0e6852  pop edi
    X86_AT(c, 0xe6852u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6853  pop esi
    X86_AT(c, 0xe6853u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e6854  pop ebx
    X86_AT(c, 0xe6854u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e6855  leave 
    X86_AT(c, 0xe6855u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e6856  ret 
    X86_AT(c, 0xe6856u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe6550u, "ran off the end of a function");
}
void f_000e6852(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0e6852  pop edi
    X86_AT(c, 0xe6852u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6853  pop esi
    X86_AT(c, 0xe6853u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e6854  pop ebx
    X86_AT(c, 0xe6854u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e6855  leave 
    X86_AT(c, 0xe6855u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e6856  ret 
    X86_AT(c, 0xe6856u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe6852u, "ran off the end of a function");
}
void f_000e6858(X86Cpu& c) {
    X86_TICK(c, 56);
    // 0e6858  push ebp
    X86_AT(c, 0xe6858u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e6859  mov ebp, esp
    X86_AT(c, 0xe6859u);
    c.r[5] = c.r[4];
    // 0e685b  push ebx
    X86_AT(c, 0xe685bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e685c  push esi
    X86_AT(c, 0xe685cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e685d  push edi
    X86_AT(c, 0xe685du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e685e  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe685eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e6861  mov esi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xe6861u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0e6864  mov ebx, dword ptr [ebp + 0x20]
    X86_AT(c, 0xe6864u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)));
    // 0e6867  lea eax, [esi - 6]
    X86_AT(c, 0xe6867u);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFFAu);
    // 0e686a  cdq 
    X86_AT(c, 0xe686au);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e686b  sub eax, edx
    X86_AT(c, 0xe686bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e686d  sar eax, 1
    X86_AT(c, 0xe686du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e686f  cdq 
    X86_AT(c, 0xe686fu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e6870  sub eax, edx
    X86_AT(c, 0xe6870u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e6872  sar eax, 1
    X86_AT(c, 0xe6872u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e6874  cdq 
    X86_AT(c, 0xe6874u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e6875  sub eax, edx
    X86_AT(c, 0xe6875u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e6877  sar eax, 1
    X86_AT(c, 0xe6877u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e6879  cmp eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xe6879u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))), 0, 4);
    // 0e687c  jge 0xe6881
    X86_AT(c, 0xe687cu);
    if (x86_cc(c, 13)) { goto L_e6881; }
    X86_TICK(c, 2);
    // 0e687e  mov dword ptr [ebp + 0x1c], eax
    X86_AT(c, 0xe687eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
L_e6881:
    X86_TICK(c, 57);
    // 0e6881  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0xe6881u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0e6884  sub eax, 4
    X86_AT(c, 0xe6884u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x4u, 0, 4); }
    // 0e6887  cdq 
    X86_AT(c, 0xe6887u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e6888  mov ecx, 0x10
    X86_AT(c, 0xe6888u);
    c.r[1] = 0x10u;
    // 0e688d  idiv ecx
    X86_AT(c, 0xe688du);
    x86_idiv(c, c.r[1], 4, 0xe688du);
    // 0e688f  cmp eax, ebx
    X86_AT(c, 0xe688fu);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0e6891  jge 0xe6894
    X86_AT(c, 0xe6891u);
    if (x86_cc(c, 13)) { goto L_e6894; }
    X86_TICK(c, 3);
    // 0e6893  xchg ebx, eax
    X86_AT(c, 0xe6893u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
L_e6894:
    X86_TICK(c, 100);
    // 0e6894  mov eax, 0x7a7d0
    X86_AT(c, 0xe6894u);
    c.r[0] = 0x7A7D0u;
    // 0e6899  lea edx, [edi + edi*2]
    X86_AT(c, 0xe6899u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0e689c  lea ecx, [edx + edx*8]
    X86_AT(c, 0xe689cu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0e689f  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xe689fu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0e68a2  mov byte ptr [eax + ecx*1 + 0x714], 0xff
    X86_AT(c, 0xe68a2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x714u)), 0xFFu);
    // 0e68aa  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe68aau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e68ad  mov dword ptr [eax + ecx*1 + 0x715], edx
    X86_AT(c, 0xe68adu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x715u)), c.r[2]);
    // 0e68b4  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe68b4u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e68b7  mov dword ptr [eax + ecx*1 + 0x719], edx
    X86_AT(c, 0xe68b7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x719u)), c.r[2]);
    // 0e68be  mov dword ptr [eax + ecx*1 + 0x71d], esi
    X86_AT(c, 0xe68beu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x71Du)), c.r[6]);
    // 0e68c5  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xe68c5u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0e68c8  mov dword ptr [eax + ecx*1 + 0x721], edx
    X86_AT(c, 0xe68c8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x721u)), c.r[2]);
    // 0e68cf  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xe68cfu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0e68d2  mov dword ptr [eax + ecx*1 + 0x725], edx
    X86_AT(c, 0xe68d2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x725u)), c.r[2]);
    // 0e68d9  mov dword ptr [eax + ecx*1 + 0x729], ebx
    X86_AT(c, 0xe68d9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x729u)), c.r[3]);
    // 0e68e0  sub edx, edx
    X86_AT(c, 0xe68e0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e68e2  mov dword ptr [eax + ecx*1 + 0x72d], edx
    X86_AT(c, 0xe68e2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x72Du)), c.r[2]);
    // 0e68e9  mov dword ptr [eax + ecx*1 + 0x731], edx
    X86_AT(c, 0xe68e9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x731u)), c.r[2]);
    // 0e68f0  mov edx, 0xffffffff
    X86_AT(c, 0xe68f0u);
    c.r[2] = 0xFFFFFFFFu;
    // 0e68f5  mov dword ptr [eax + ecx*1 + 0x735], edx
    X86_AT(c, 0xe68f5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x735u)), c.r[2]);
    // 0e68fc  mov edx, dword ptr [ebp + 0x24]
    X86_AT(c, 0xe68fcu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u)));
    // 0e68ff  mov dword ptr [eax + ecx*1 + 0x739], edx
    X86_AT(c, 0xe68ffu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x739u)), c.r[2]);
    // 0e6906  mov dword ptr [eax + ecx*1 + 0x73d], 0
    X86_AT(c, 0xe6906u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x73Du)), 0x0u);
    // 0e6911  mov edx, dword ptr [ebp + 0x28]
    X86_AT(c, 0xe6911u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x28u)));
    // 0e6914  mov dword ptr [eax + ecx*1 + 0x741], edx
    X86_AT(c, 0xe6914u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x741u)), c.r[2]);
    // 0e691b  mov edx, dword ptr [ebp + 0x2c]
    X86_AT(c, 0xe691bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x2Cu)));
    // 0e691e  mov dword ptr [eax + ecx*1 + 0x745], edx
    X86_AT(c, 0xe691eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x745u)), c.r[2]);
    // 0e6925  mov dword ptr [eax + ecx*1 + 0x749], 0xffffffff
    X86_AT(c, 0xe6925u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x749u)), 0xFFFFFFFFu);
    // 0e6930  lea eax, [eax + ecx*1 + 0x714]
    X86_AT(c, 0xe6930u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[1] + 0x714u);
    // 0e6937  pop edi
    X86_AT(c, 0xe6937u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6938  pop esi
    X86_AT(c, 0xe6938u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e6939  pop ebx
    X86_AT(c, 0xe6939u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e693a  leave 
    X86_AT(c, 0xe693au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e693b  ret 
    X86_AT(c, 0xe693bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe6858u, "ran off the end of a function");
}
void f_000e693c(X86Cpu& c) {
    X86_TICK(c, 38);
    // 0e693c  push ebp
    X86_AT(c, 0xe693cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e693d  mov ebp, esp
    X86_AT(c, 0xe693du);
    c.r[5] = c.r[4];
    // 0e693f  push ebx
    X86_AT(c, 0xe693fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e6940  push esi
    X86_AT(c, 0xe6940u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e6941  push edi
    X86_AT(c, 0xe6941u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6942  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe6942u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e6945  mov eax, 0x7a7d0
    X86_AT(c, 0xe6945u);
    c.r[0] = 0x7A7D0u;
    // 0e694a  lea edx, [edi + edi*2]
    X86_AT(c, 0xe694au);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0e694d  lea ecx, [edx + edx*8]
    X86_AT(c, 0xe694du);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0e6950  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xe6950u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0e6953  push dword ptr [eax + ecx*1 + 0x739]
    X86_AT(c, 0xe6953u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x739u))); push32(c, v); }
    // 0e695a  mov ebx, eax
    X86_AT(c, 0xe695au);
    c.r[3] = c.r[0];
    // 0e695c  mov esi, ecx
    X86_AT(c, 0xe695cu);
    c.r[6] = c.r[1];
    // 0e695e  call 0xe5748
    X86_AT(c, 0xe695eu);
    push32(c, 0xe6963u); f_000e5748(c); X86_RET(c, 0xe6963u);
    X86_TICK(c, 14);
    // 0e6963  add esp, 4
    X86_AT(c, 0xe6963u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e6966  cmp dword ptr [ebx + esi*1 + 0x749], 0xffffffff
    X86_AT(c, 0xe6966u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] + 0x749u))), 0xFFFFFFFFu, 0, 4);
    // 0e696e  jne 0xe697f
    X86_AT(c, 0xe696eu);
    if (x86_cc(c, 5)) { goto L_e697f; }
    X86_TICK(c, 12);
    // 0e6970  push dword ptr [ebx + esi*1 + 0x745]
    X86_AT(c, 0xe6970u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] + 0x745u))); push32(c, v); }
    // 0e6977  call 0xe5760
    X86_AT(c, 0xe6977u);
    push32(c, 0xe697cu); f_000e5760(c); X86_RET(c, 0xe697cu);
    X86_TICK(c, 2);
    // 0e697c  add esp, 4
    X86_AT(c, 0xe697cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e697f:
    X86_TICK(c, 18);
    // 0e697f  lea eax, [edi + edi*2]
    X86_AT(c, 0xe697fu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0e6982  lea edx, [eax + eax*8]
    X86_AT(c, 0xe6982u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e6985  lea edx, [eax + edx*2]
    X86_AT(c, 0xe6985u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e6988  push dword ptr [edx + 0x7af0d]
    X86_AT(c, 0xe6988u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x7AF0Du))); push32(c, v); }
    // 0e698e  call 0xe5810
    X86_AT(c, 0xe698eu);
    push32(c, 0xe6993u); f_000e5810(c); X86_RET(c, 0xe6993u);
    X86_TICK(c, 30);
    // 0e6993  add esp, 4
    X86_AT(c, 0xe6993u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e6996  pop edi
    X86_AT(c, 0xe6996u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6997  pop esi
    X86_AT(c, 0xe6997u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e6998  pop ebx
    X86_AT(c, 0xe6998u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e6999  leave 
    X86_AT(c, 0xe6999u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e699a  ret 
    X86_AT(c, 0xe699au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe693cu, "ran off the end of a function");
}
void f_000e699c(X86Cpu& c) {
    X86_TICK(c, 74);
    // 0e699c  push ebp
    X86_AT(c, 0xe699cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e699d  mov ebp, esp
    X86_AT(c, 0xe699du);
    c.r[5] = c.r[4];
    // 0e699f  push edi
    X86_AT(c, 0xe699fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e69a0  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe69a0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e69a3  lea eax, [eax + eax*2]
    X86_AT(c, 0xe69a3u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e69a6  lea edx, [eax + eax*8]
    X86_AT(c, 0xe69a6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e69a9  lea edx, [eax + edx*2]
    X86_AT(c, 0xe69a9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e69ac  lea edi, [edx + 0x7aee4]
    X86_AT(c, 0xe69acu);
    c.r[7] = (uint32_t)(c.r[2] + 0x7AEE4u);
    // 0e69b2  push dword ptr [edi + 0x31]
    X86_AT(c, 0xe69b2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
    // 0e69b5  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xe69b5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0e69b8  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xe69b8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0e69bb  sub eax, 2
    X86_AT(c, 0xe69bbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0e69be  push eax
    X86_AT(c, 0xe69beu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e69bf  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xe69bfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0e69c2  add eax, dword ptr [edi + 9]
    X86_AT(c, 0xe69c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0e69c5  sub eax, 2
    X86_AT(c, 0xe69c5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0e69c8  push eax
    X86_AT(c, 0xe69c8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e69c9  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xe69c9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0e69cc  inc eax
    X86_AT(c, 0xe69ccu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e69cd  push eax
    X86_AT(c, 0xe69cdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e69ce  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xe69ceu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0e69d1  inc eax
    X86_AT(c, 0xe69d1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e69d2  push eax
    X86_AT(c, 0xe69d2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e69d3  call 0xe5e58
    X86_AT(c, 0xe69d3u);
    push32(c, 0xe69d8u); f_000e5e58(c); X86_RET(c, 0xe69d8u);
    X86_TICK(c, 12);
    // 0e69d8  push dword ptr [edi + 0x2d]
    X86_AT(c, 0xe69d8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Du))); push32(c, v); }
    // 0e69db  call 0xe5748
    X86_AT(c, 0xe69dbu);
    push32(c, 0xe69e0u); f_000e5748(c); X86_RET(c, 0xe69e0u);
    X86_TICK(c, 51);
    // 0e69e0  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xe69e0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0e69e3  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xe69e3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0e69e6  sub eax, 2
    X86_AT(c, 0xe69e6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0e69e9  push eax
    X86_AT(c, 0xe69e9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e69ea  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xe69eau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0e69ed  add eax, dword ptr [edi + 9]
    X86_AT(c, 0xe69edu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0e69f0  sub eax, 2
    X86_AT(c, 0xe69f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0e69f3  push eax
    X86_AT(c, 0xe69f3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e69f4  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xe69f4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0e69f7  inc eax
    X86_AT(c, 0xe69f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e69f8  push eax
    X86_AT(c, 0xe69f8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e69f9  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xe69f9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0e69fc  inc eax
    X86_AT(c, 0xe69fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e69fd  push eax
    X86_AT(c, 0xe69fdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e69fe  call 0xe5df4
    X86_AT(c, 0xe69feu);
    push32(c, 0xe6a03u); f_000e5df4(c); X86_RET(c, 0xe6a03u);
    X86_TICK(c, 39);
    // 0e6a03  push dword ptr [edi + 5]
    X86_AT(c, 0xe6a03u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))); push32(c, v); }
    // 0e6a06  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xe6a06u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0e6a09  add eax, dword ptr [edi + 9]
    X86_AT(c, 0xe6a09u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0e6a0c  sub eax, 3
    X86_AT(c, 0xe6a0cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0e6a0f  push eax
    X86_AT(c, 0xe6a0fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6a10  push dword ptr [edi + 5]
    X86_AT(c, 0xe6a10u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))); push32(c, v); }
    // 0e6a13  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xe6a13u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0e6a16  add eax, 2
    X86_AT(c, 0xe6a16u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0e6a19  push eax
    X86_AT(c, 0xe6a19u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6a1a  call 0xe5cd4
    X86_AT(c, 0xe6a1au);
    push32(c, 0xe6a1fu); f_000e5cd4(c); X86_RET(c, 0xe6a1fu);
    X86_TICK(c, 45);
    // 0e6a1f  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xe6a1fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0e6a22  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xe6a22u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0e6a25  sub eax, 3
    X86_AT(c, 0xe6a25u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0e6a28  push eax
    X86_AT(c, 0xe6a28u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6a29  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xe6a29u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0e6a2c  add eax, dword ptr [edi + 9]
    X86_AT(c, 0xe6a2cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0e6a2f  dec eax
    X86_AT(c, 0xe6a2fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e6a30  push eax
    X86_AT(c, 0xe6a30u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6a31  mov edx, dword ptr [edi + 5]
    X86_AT(c, 0xe6a31u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0e6a34  add edx, 2
    X86_AT(c, 0xe6a34u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x2u, 0, 4); }
    // 0e6a37  push edx
    X86_AT(c, 0xe6a37u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e6a38  push eax
    X86_AT(c, 0xe6a38u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6a39  call 0xe5cd4
    X86_AT(c, 0xe6a39u);
    push32(c, 0xe6a3eu); f_000e5cd4(c); X86_RET(c, 0xe6a3eu);
    X86_TICK(c, 47);
    // 0e6a3e  add esp, 0x48
    X86_AT(c, 0xe6a3eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 0e6a41  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xe6a41u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0e6a44  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xe6a44u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0e6a47  dec eax
    X86_AT(c, 0xe6a47u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e6a48  push eax
    X86_AT(c, 0xe6a48u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6a49  mov edx, dword ptr [edi + 1]
    X86_AT(c, 0xe6a49u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0e6a4c  add edx, dword ptr [edi + 9]
    X86_AT(c, 0xe6a4cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0e6a4f  sub edx, 3
    X86_AT(c, 0xe6a4fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0e6a52  push edx
    X86_AT(c, 0xe6a52u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e6a53  push eax
    X86_AT(c, 0xe6a53u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6a54  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xe6a54u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0e6a57  add eax, 2
    X86_AT(c, 0xe6a57u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0e6a5a  push eax
    X86_AT(c, 0xe6a5au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6a5b  call 0xe5cd4
    X86_AT(c, 0xe6a5bu);
    push32(c, 0xe6a60u); f_000e5cd4(c); X86_RET(c, 0xe6a60u);
    X86_TICK(c, 41);
    // 0e6a60  add esp, 0x10
    X86_AT(c, 0xe6a60u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e6a63  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xe6a63u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0e6a66  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xe6a66u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0e6a69  sub eax, 3
    X86_AT(c, 0xe6a69u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0e6a6c  push eax
    X86_AT(c, 0xe6a6cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6a6d  push dword ptr [edi + 1]
    X86_AT(c, 0xe6a6du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))); push32(c, v); }
    // 0e6a70  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xe6a70u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0e6a73  add eax, 2
    X86_AT(c, 0xe6a73u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0e6a76  push eax
    X86_AT(c, 0xe6a76u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6a77  push dword ptr [edi + 1]
    X86_AT(c, 0xe6a77u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))); push32(c, v); }
    // 0e6a7a  call 0xe5cd4
    X86_AT(c, 0xe6a7au);
    push32(c, 0xe6a7fu); f_000e5cd4(c); X86_RET(c, 0xe6a7fu);
    X86_TICK(c, 24);
    // 0e6a7f  mov byte ptr [edi], 0
    X86_AT(c, 0xe6a7fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 0e6a82  add esp, 0x10
    X86_AT(c, 0xe6a82u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e6a85  pop edi
    X86_AT(c, 0xe6a85u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6a86  leave 
    X86_AT(c, 0xe6a86u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e6a87  ret 
    X86_AT(c, 0xe6a87u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe699cu, "ran off the end of a function");
}
void f_000e6a88(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e6a88  push ebp
    X86_AT(c, 0xe6a88u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e6a89  mov ebp, esp
    X86_AT(c, 0xe6a89u);
    c.r[5] = c.r[4];
    // 0e6a8b  sub esp, 0x40
    X86_AT(c, 0xe6a8bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x40u, 0, 4); }
    // 0e6a8e  push ebx
    X86_AT(c, 0xe6a8eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e6a8f  push edi
    X86_AT(c, 0xe6a8fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6a90  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe6a90u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e6a93  push 9
    X86_AT(c, 0xe6a93u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0e6a95  call 0xe58b8
    X86_AT(c, 0xe6a95u);
    push32(c, 0xe6a9au); f_000e58b8(c); X86_RET(c, 0xe6a9au);
    X86_TICK(c, 32);
    // 0e6a9a  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0xe6a9au);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0e6a9e  mov word ptr [ebp - 0x40], ax
    X86_AT(c, 0xe6a9eu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC0u)), (c.r[0] & 0xFFFFu));
    // 0e6aa2  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0xe6aa2u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0e6aa6  mov word ptr [ebp - 0x3e], ax
    X86_AT(c, 0xe6aa6u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC2u)), (c.r[0] & 0xFFFFu));
    // 0e6aaa  mov edx, 0xffff
    X86_AT(c, 0xe6aaau);
    c.r[2] = 0xFFFFu;
    // 0e6aaf  sub eax, eax
    X86_AT(c, 0xe6aafu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e6ab1  push edi
    X86_AT(c, 0xe6ab1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6ab2  mov ecx, edx
    X86_AT(c, 0xe6ab2u);
    c.r[1] = c.r[2];
    // 0e6ab4  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xe6ab4u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0e6ab6  jne 0xe6abb
    X86_AT(c, 0xe6ab6u);
    if (x86_cc(c, 5)) { goto L_e6abb; }
    X86_TICK(c, 4);
    // 0e6ab8  inc ecx
    X86_AT(c, 0xe6ab8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e6ab9  sub edx, ecx
    X86_AT(c, 0xe6ab9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_e6abb:
    X86_TICK(c, 19);
    // 0e6abb  pop edi
    X86_AT(c, 0xe6abbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6abc  mov word ptr [ebp - 0x3c], dx
    X86_AT(c, 0xe6abcu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC4u)), (c.r[2] & 0xFFFFu));
    // 0e6ac0  push edi
    X86_AT(c, 0xe6ac0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6ac1  lea eax, [ebp - 0x3a]
    X86_AT(c, 0xe6ac1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC6u);
    // 0e6ac4  push eax
    X86_AT(c, 0xe6ac4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6ac5  call 0x1019a0
    X86_AT(c, 0xe6ac5u);
    push32(c, 0xe6acau); f_001019a0(c); X86_RET(c, 0xe6acau);
    X86_TICK(c, 15);
    // 0e6aca  lea ebx, [ebp - 0x40]
    X86_AT(c, 0xe6acau);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFC0u);
    // 0e6acd  push ebx
    X86_AT(c, 0xe6acdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e6ace  push 1
    X86_AT(c, 0xe6aceu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e6ad0  push 0x7a7d8
    X86_AT(c, 0xe6ad0u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e6ad5  call 0xac5
    X86_AT(c, 0xe6ad5u);
    push32(c, 0xe6adau); f_00000ac5(c); X86_RET(c, 0xe6adau);
    X86_TICK(c, 15);
    // 0e6ada  movsx eax, word ptr [0x7a7d4]
    X86_AT(c, 0xe6adau);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x7A7D4u)));
    // 0e6ae1  push eax
    X86_AT(c, 0xe6ae1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6ae2  call 0xe58b8
    X86_AT(c, 0xe6ae2u);
    push32(c, 0xe6ae7u); f_000e58b8(c); X86_RET(c, 0xe6ae7u);
    X86_TICK(c, 26);
    // 0e6ae7  add esp, 0x1c
    X86_AT(c, 0xe6ae7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0e6aea  pop edi
    X86_AT(c, 0xe6aeau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6aeb  pop ebx
    X86_AT(c, 0xe6aebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e6aec  leave 
    X86_AT(c, 0xe6aecu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e6aed  ret 
    X86_AT(c, 0xe6aedu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe6a88u, "ran off the end of a function");
}
void f_000e6af0(X86Cpu& c) {
    X86_TICK(c, 74);
    // 0e6af0  push ebp
    X86_AT(c, 0xe6af0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e6af1  mov ebp, esp
    X86_AT(c, 0xe6af1u);
    c.r[5] = c.r[4];
    // 0e6af3  push edi
    X86_AT(c, 0xe6af3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6af4  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe6af4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e6af7  lea eax, [eax + eax*2]
    X86_AT(c, 0xe6af7u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e6afa  lea edx, [eax + eax*8]
    X86_AT(c, 0xe6afau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e6afd  lea edx, [eax + edx*2]
    X86_AT(c, 0xe6afdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e6b00  lea edi, [edx + 0x7aee4]
    X86_AT(c, 0xe6b00u);
    c.r[7] = (uint32_t)(c.r[2] + 0x7AEE4u);
    // 0e6b06  push dword ptr [edi + 0x31]
    X86_AT(c, 0xe6b06u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
    // 0e6b09  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xe6b09u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0e6b0c  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xe6b0cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0e6b0f  sub eax, 3
    X86_AT(c, 0xe6b0fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0e6b12  push eax
    X86_AT(c, 0xe6b12u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6b13  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xe6b13u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0e6b16  add eax, dword ptr [edi + 9]
    X86_AT(c, 0xe6b16u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0e6b19  sub eax, 3
    X86_AT(c, 0xe6b19u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0e6b1c  push eax
    X86_AT(c, 0xe6b1cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6b1d  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xe6b1du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0e6b20  add eax, 2
    X86_AT(c, 0xe6b20u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0e6b23  push eax
    X86_AT(c, 0xe6b23u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6b24  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xe6b24u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0e6b27  add eax, 2
    X86_AT(c, 0xe6b27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0e6b2a  push eax
    X86_AT(c, 0xe6b2au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6b2b  call 0xe5e58
    X86_AT(c, 0xe6b2bu);
    push32(c, 0xe6b30u); f_000e5e58(c); X86_RET(c, 0xe6b30u);
    X86_TICK(c, 12);
    // 0e6b30  push dword ptr [edi + 0x25]
    X86_AT(c, 0xe6b30u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x25u))); push32(c, v); }
    // 0e6b33  call 0xe5748
    X86_AT(c, 0xe6b33u);
    push32(c, 0xe6b38u); f_000e5748(c); X86_RET(c, 0xe6b38u);
    X86_TICK(c, 12);
    // 0e6b38  push dword ptr [edi + 0x31]
    X86_AT(c, 0xe6b38u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
    // 0e6b3b  call 0xe5778
    X86_AT(c, 0xe6b3bu);
    push32(c, 0xe6b40u); f_000e5778(c); X86_RET(c, 0xe6b40u);
    X86_TICK(c, 14);
    // 0e6b40  add esp, 0x1c
    X86_AT(c, 0xe6b40u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0e6b43  cmp dword ptr [edi + 0x35], 0
    X86_AT(c, 0xe6b43u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x35u))), 0x0u, 0, 4);
    // 0e6b47  jne 0xe6b4d
    X86_AT(c, 0xe6b47u);
    if (x86_cc(c, 5)) { goto L_e6b4d; }
    X86_TICK(c, 9);
    // 0e6b49  push 0xb
    X86_AT(c, 0xe6b49u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e6b4b  jmp 0xe6b50
    X86_AT(c, 0xe6b4bu);
    goto L_e6b50;
L_e6b4d:
    X86_TICK(c, 5);
    // 0e6b4d  push dword ptr [edi + 0x31]
    X86_AT(c, 0xe6b4du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
L_e6b50:
    X86_TICK(c, 7);
    // 0e6b50  call 0xe5760
    X86_AT(c, 0xe6b50u);
    push32(c, 0xe6b55u); f_000e5760(c); X86_RET(c, 0xe6b55u);
    X86_TICK(c, 19);
    // 0e6b55  add esp, 4
    X86_AT(c, 0xe6b55u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e6b58  movsx eax, word ptr [0x7aedc]
    X86_AT(c, 0xe6b58u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x7AEDCu)));
    // 0e6b5f  push eax
    X86_AT(c, 0xe6b5fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6b60  push 0x7a7d8
    X86_AT(c, 0xe6b60u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e6b65  call 0x2c5
    X86_AT(c, 0xe6b65u);
    push32(c, 0xe6b6au); f_000002c5(c); X86_RET(c, 0xe6b6au);
    X86_TICK(c, 22);
    // 0e6b6a  add esp, 8
    X86_AT(c, 0xe6b6au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e6b6d  pop edi
    X86_AT(c, 0xe6b6du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6b6e  leave 
    X86_AT(c, 0xe6b6eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e6b6f  ret 
    X86_AT(c, 0xe6b6fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe6af0u, "ran off the end of a function");
}
void f_000e6b70(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0e6b70  push ebp
    X86_AT(c, 0xe6b70u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e6b71  mov ebp, esp
    X86_AT(c, 0xe6b71u);
    c.r[5] = c.r[4];
    // 0e6b73  push edi
    X86_AT(c, 0xe6b73u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6b74  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe6b74u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e6b77  lea eax, [eax + eax*2]
    X86_AT(c, 0xe6b77u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e6b7a  lea edx, [eax + eax*8]
    X86_AT(c, 0xe6b7au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e6b7d  lea edx, [eax + edx*2]
    X86_AT(c, 0xe6b7du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e6b80  lea edi, [edx + 0x7aee4]
    X86_AT(c, 0xe6b80u);
    c.r[7] = (uint32_t)(c.r[2] + 0x7AEE4u);
    // 0e6b86  cmp byte ptr [edi], 0
    X86_AT(c, 0xe6b86u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0e6b89  jne 0xe6bc4
    X86_AT(c, 0xe6b89u);
    if (x86_cc(c, 5)) { goto L_e6bc4; }
    X86_TICK(c, 50);
    // 0e6b8b  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6b8bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e6b8e  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0xe6b8eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 0e6b91  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0xe6b91u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 0e6b94  dec eax
    X86_AT(c, 0xe6b94u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e6b95  push eax
    X86_AT(c, 0xe6b95u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6b96  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0xe6b96u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 0e6b99  add eax, dword ptr [edi + 9]
    X86_AT(c, 0xe6b99u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 0e6b9c  dec eax
    X86_AT(c, 0xe6b9cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e6b9d  push eax
    X86_AT(c, 0xe6b9du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6b9e  push dword ptr [edi + 5]
    X86_AT(c, 0xe6b9eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))); push32(c, v); }
    // 0e6ba1  push dword ptr [edi + 1]
    X86_AT(c, 0xe6ba1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))); push32(c, v); }
    // 0e6ba4  call 0xe5e58
    X86_AT(c, 0xe6ba4u);
    push32(c, 0xe6ba9u); f_000e5e58(c); X86_RET(c, 0xe6ba9u);
    X86_TICK(c, 9);
    // 0e6ba9  push 0xf
    X86_AT(c, 0xe6ba9u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e6bab  call 0xe5748
    X86_AT(c, 0xe6babu);
    push32(c, 0xe6bb0u); f_000e5748(c); X86_RET(c, 0xe6bb0u);
    X86_TICK(c, 9);
    // 0e6bb0  push 0xf
    X86_AT(c, 0xe6bb0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0e6bb2  call 0xe5778
    X86_AT(c, 0xe6bb2u);
    push32(c, 0xe6bb7u); f_000e5778(c); X86_RET(c, 0xe6bb7u);
    X86_TICK(c, 6);
    // 0e6bb7  mov dword ptr [edi + 0x35], 0xffffffff
    X86_AT(c, 0xe6bb7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x35u)), 0xFFFFFFFFu);
    // 0e6bbe  mov byte ptr [edi], 0xff
    X86_AT(c, 0xe6bbeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0xFFu);
    // 0e6bc1  add esp, 0x1c
    X86_AT(c, 0xe6bc1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_e6bc4:
    X86_TICK(c, 20);
    // 0e6bc4  pop edi
    X86_AT(c, 0xe6bc4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6bc5  leave 
    X86_AT(c, 0xe6bc5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e6bc6  ret 
    X86_AT(c, 0xe6bc6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe6b70u, "ran off the end of a function");
}
void f_000e6bc8(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0e6bc8  push ebp
    X86_AT(c, 0xe6bc8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e6bc9  mov ebp, esp
    X86_AT(c, 0xe6bc9u);
    c.r[5] = c.r[4];
    // 0e6bcb  push ebx
    X86_AT(c, 0xe6bcbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e6bcc  push edi
    X86_AT(c, 0xe6bccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6bcd  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe6bcdu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e6bd0  lea eax, [edi + edi*2]
    X86_AT(c, 0xe6bd0u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0e6bd3  lea edx, [eax + eax*8]
    X86_AT(c, 0xe6bd3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e6bd6  lea edx, [eax + edx*2]
    X86_AT(c, 0xe6bd6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e6bd9  push dword ptr [edx + 0x7af15]
    X86_AT(c, 0xe6bd9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x7AF15u))); push32(c, v); }
    // 0e6bdf  mov ebx, edx
    X86_AT(c, 0xe6bdfu);
    c.r[3] = c.r[2];
    // 0e6be1  call 0xe5760
    X86_AT(c, 0xe6be1u);
    push32(c, 0xe6be6u); f_000e5760(c); X86_RET(c, 0xe6be6u);
    X86_TICK(c, 61);
    // 0e6be6  mov ax, word ptr [ebx + 0x7aee5]
    X86_AT(c, 0xe6be6u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x7AEE5u))));
    // 0e6bed  add ax, 2
    X86_AT(c, 0xe6bedu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 0e6bf1  mov word ptr [0x7add8], ax
    X86_AT(c, 0xe6bf1u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADD8u)), (c.r[0] & 0xFFFFu));
    // 0e6bf7  mov ax, word ptr [ebx + 0x7aee9]
    X86_AT(c, 0xe6bf7u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x7AEE9u))));
    // 0e6bfe  add ax, 2
    X86_AT(c, 0xe6bfeu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 0e6c02  mov word ptr [0x7adda], ax
    X86_AT(c, 0xe6c02u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDAu)), (c.r[0] & 0xFFFFu));
    // 0e6c08  mov ax, word ptr [ebx + 0x7aee5]
    X86_AT(c, 0xe6c08u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x7AEE5u))));
    // 0e6c0f  add ax, word ptr [ebx + 0x7aeed]
    X86_AT(c, 0xe6c0fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x7AEEDu))), 0, 2)); }
    // 0e6c16  sub ax, 3
    X86_AT(c, 0xe6c16u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3u, 0, 2)); }
    // 0e6c1a  mov word ptr [0x7addc], ax
    X86_AT(c, 0xe6c1au);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDCu)), (c.r[0] & 0xFFFFu));
    // 0e6c20  mov ax, word ptr [ebx + 0x7aee9]
    X86_AT(c, 0xe6c20u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x7AEE9u))));
    // 0e6c27  add ax, word ptr [ebx + 0x7aef1]
    X86_AT(c, 0xe6c27u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x7AEF1u))), 0, 2)); }
    // 0e6c2e  sub ax, 3
    X86_AT(c, 0xe6c2eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3u, 0, 2)); }
    // 0e6c32  mov word ptr [0x7adde], ax
    X86_AT(c, 0xe6c32u);
    wr16((c.sbase[3] + (uint32_t)(0x7ADDEu)), (c.r[0] & 0xFFFFu));
    // 0e6c38  push 0x7add8
    X86_AT(c, 0xe6c38u);
    { uint32_t v = 0x7ADD8u; push32(c, v); }
    // 0e6c3d  push 0xfffffff0
    X86_AT(c, 0xe6c3du);
    { uint32_t v = 0xFFFFFFF0u; push32(c, v); }
    // 0e6c3f  push 0
    X86_AT(c, 0xe6c3fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e6c41  push 1
    X86_AT(c, 0xe6c41u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e6c43  push 0x7a7d8
    X86_AT(c, 0xe6c43u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e6c48  call 0x6b6
    X86_AT(c, 0xe6c48u);
    push32(c, 0xe6c4du); f_000006b6(c); X86_RET(c, 0xe6c4du);
    X86_TICK(c, 14);
    // 0e6c4d  add esp, 0x18
    X86_AT(c, 0xe6c4du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0e6c50  cmp dword ptr [ebx + 0x7af19], 0
    X86_AT(c, 0xe6c50u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x7AF19u))), 0x0u, 0, 4);
    // 0e6c57  jne 0xe6c63
    X86_AT(c, 0xe6c57u);
    if (x86_cc(c, 5)) { goto L_e6c63; }
    X86_TICK(c, 9);
    // 0e6c59  push 0xb
    X86_AT(c, 0xe6c59u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0e6c5b  call 0xe5760
    X86_AT(c, 0xe6c5bu);
    push32(c, 0xe6c60u); f_000e5760(c); X86_RET(c, 0xe6c60u);
    X86_TICK(c, 2);
    // 0e6c60  add esp, 4
    X86_AT(c, 0xe6c60u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_e6c63:
    X86_TICK(c, 24);
    // 0e6c63  pop edi
    X86_AT(c, 0xe6c63u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6c64  pop ebx
    X86_AT(c, 0xe6c64u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e6c65  leave 
    X86_AT(c, 0xe6c65u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e6c66  ret 
    X86_AT(c, 0xe6c66u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe6bc8u, "ran off the end of a function");
}
void f_000e6c68(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0e6c68  push ebp
    X86_AT(c, 0xe6c68u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e6c69  mov ebp, esp
    X86_AT(c, 0xe6c69u);
    c.r[5] = c.r[4];
    // 0e6c6b  push edi
    X86_AT(c, 0xe6c6bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6c6c  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe6c6cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e6c6f  lea eax, [edi + edi*2]
    X86_AT(c, 0xe6c6fu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0e6c72  lea edx, [eax + eax*8]
    X86_AT(c, 0xe6c72u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e6c75  lea edx, [eax + edx*2]
    X86_AT(c, 0xe6c75u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e6c78  mov dword ptr [edx + 0x7aefd], 0
    X86_AT(c, 0xe6c78u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x7AEFDu)), 0x0u);
    // 0e6c82  mov eax, dword ptr [edx + 0x7af01]
    X86_AT(c, 0xe6c82u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x7AF01u)));
    // 0e6c88  cmp eax, dword ptr [edx + 0x7aef9]
    X86_AT(c, 0xe6c88u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x7AEF9u))), 0, 4);
    // 0e6c8e  jne 0xe6c9b
    X86_AT(c, 0xe6c8eu);
    if (x86_cc(c, 5)) { goto L_e6c9b; }
    X86_TICK(c, 9);
    // 0e6c90  push edi
    X86_AT(c, 0xe6c90u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6c91  call 0xe6bc8
    X86_AT(c, 0xe6c91u);
    push32(c, 0xe6c96u); f_000e6bc8(c); X86_RET(c, 0xe6c96u);
    X86_TICK(c, 9);
    // 0e6c96  add esp, 4
    X86_AT(c, 0xe6c96u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e6c99  jmp 0xe6caa
    X86_AT(c, 0xe6c99u);
    goto L_e6caa;
L_e6c9b:
    X86_TICK(c, 12);
    // 0e6c9b  lea eax, [edi + edi*2]
    X86_AT(c, 0xe6c9bu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 0e6c9e  lea edx, [eax + eax*8]
    X86_AT(c, 0xe6c9eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e6ca1  lea edx, [eax + edx*2]
    X86_AT(c, 0xe6ca1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e6ca4  inc dword ptr [edx + 0x7af01]
    X86_AT(c, 0xe6ca4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x7AF01u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_e6caa:
    X86_TICK(c, 20);
    // 0e6caa  pop edi
    X86_AT(c, 0xe6caau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6cab  leave 
    X86_AT(c, 0xe6cabu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e6cac  ret 
    X86_AT(c, 0xe6cacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe6c68u, "ran off the end of a function");
}
void f_000e6cb0(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0e6cb0  push ebp
    X86_AT(c, 0xe6cb0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e6cb1  mov ebp, esp
    X86_AT(c, 0xe6cb1u);
    c.r[5] = c.r[4];
    // 0e6cb3  sub esp, 0xc
    X86_AT(c, 0xe6cb3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0e6cb6  push ebx
    X86_AT(c, 0xe6cb6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e6cb7  push esi
    X86_AT(c, 0xe6cb7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e6cb8  push edi
    X86_AT(c, 0xe6cb8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6cb9  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6cb9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e6cbc  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe6cbcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e6cbf  lea eax, [eax + eax*2]
    X86_AT(c, 0xe6cbfu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e6cc2  lea edx, [eax + eax*8]
    X86_AT(c, 0xe6cc2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0e6cc5  lea edx, [eax + edx*2]
    X86_AT(c, 0xe6cc5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0e6cc8  lea ebx, [edx + 0x7aee4]
    X86_AT(c, 0xe6cc8u);
    c.r[3] = (uint32_t)(c.r[2] + 0x7AEE4u);
L_e6cce:
    X86_TICK(c, 12);
    // 0e6cce  cmp byte ptr [edi], 0
    X86_AT(c, 0xe6cceu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0e6cd1  je 0xe6e20
    X86_AT(c, 0xe6cd1u);
    if (x86_cc(c, 4)) { goto L_e6e20; }
    X86_TICK(c, 52);
    // 0e6cd7  mov dword ptr [ebp - 0xc], 0xcda7e
    X86_AT(c, 0xe6cd7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0xCDA7Eu);
    // 0e6cde  mov ax, word ptr [ebx + 1]
    X86_AT(c, 0xe6cdeu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x1u))));
    // 0e6ce2  add ax, 4
    X86_AT(c, 0xe6ce2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x4u, 0, 2)); }
    // 0e6ce6  mov edx, dword ptr [ebx + 0x19]
    X86_AT(c, 0xe6ce6u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 0e6ce9  shl edx, 3
    X86_AT(c, 0xe6ce9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0e6cec  add edx, eax
    X86_AT(c, 0xe6cecu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e6cee  mov word ptr [0xcda78], dx
    X86_AT(c, 0xe6ceeu);
    wr16((c.sbase[3] + (uint32_t)(0xCDA78u)), (c.r[2] & 0xFFFFu));
    // 0e6cf5  mov ax, word ptr [ebx + 5]
    X86_AT(c, 0xe6cf5u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x5u))));
    // 0e6cf9  add ax, 0x11
    X86_AT(c, 0xe6cf9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 0e6cfd  mov edx, dword ptr [ebx + 0x1d]
    X86_AT(c, 0xe6cfdu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 0e6d00  shl edx, 4
    X86_AT(c, 0xe6d00u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0e6d03  add edx, eax
    X86_AT(c, 0xe6d03u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e6d05  mov word ptr [0xcda7a], dx
    X86_AT(c, 0xe6d05u);
    wr16((c.sbase[3] + (uint32_t)(0xCDA7Au)), (c.r[2] & 0xFFFFu));
    // 0e6d0c  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xe6d0cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0e6d13  mov esi, dword ptr [ebx + 0x11]
    X86_AT(c, 0xe6d13u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x11u)));
    // 0e6d16  sub esi, dword ptr [ebx + 0x19]
    X86_AT(c, 0xe6d16u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u))), 0, 4); }
    // 0e6d19  inc esi
    X86_AT(c, 0xe6d19u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e6d1a  mov dword ptr [ebp - 8], esi
    X86_AT(c, 0xe6d1au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[6]);
L_e6d1d:
    X86_TICK(c, 7);
    // 0e6d1d  and esi, esi
    X86_AT(c, 0xe6d1du);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e6d1f  jle 0xe6db3
    X86_AT(c, 0xe6d1fu);
    if (x86_cc(c, 14)) { goto L_e6db3; }
    X86_TICK(c, 17);
    // 0e6d25  mov al, byte ptr [edi]
    X86_AT(c, 0xe6d25u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0e6d27  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe6d27u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e6d2a  mov byte ptr [edx], al
    X86_AT(c, 0xe6d2au);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0e6d2c  cmp esi, 1
    X86_AT(c, 0xe6d2cu);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0e6d2f  jne 0xe6d90
    X86_AT(c, 0xe6d2fu);
    if (x86_cc(c, 5)) { goto L_e6d90; }
    X86_TICK(c, 11);
    // 0e6d35  mov al, byte ptr [edi]
    X86_AT(c, 0xe6d35u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0e6d37  cmp al, 0x81
    X86_AT(c, 0xe6d37u);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 0e6d39  jb 0xe6d3f
    X86_AT(c, 0xe6d39u);
    if (x86_cc(c, 2)) { goto L_e6d3f; }
    X86_TICK(c, 7);
    // 0e6d3b  cmp al, 0x9f
    X86_AT(c, 0xe6d3bu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 0e6d3d  jbe 0xe6d4d
    X86_AT(c, 0xe6d3du);
    if (x86_cc(c, 6)) { goto L_e6d4d; }
L_e6d3f:
    X86_TICK(c, 11);
    // 0e6d3f  mov al, byte ptr [edi]
    X86_AT(c, 0xe6d3fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0e6d41  cmp al, 0xe0
    X86_AT(c, 0xe6d41u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 0e6d43  jb 0xe6d90
    X86_AT(c, 0xe6d43u);
    if (x86_cc(c, 2)) { goto L_e6d90; }
    X86_TICK(c, 7);
    // 0e6d49  cmp al, 0xfc
    X86_AT(c, 0xe6d49u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 0e6d4b  ja 0xe6d90
    X86_AT(c, 0xe6d4bu);
    if (x86_cc(c, 7)) { goto L_e6d90; }
L_e6d4d:
    X86_TICK(c, 11);
    // 0e6d4d  mov al, byte ptr [edi + 1]
    X86_AT(c, 0xe6d4du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0e6d50  cmp al, 0x40
    X86_AT(c, 0xe6d50u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0e6d52  jb 0xe6d58
    X86_AT(c, 0xe6d52u);
    if (x86_cc(c, 2)) { goto L_e6d58; }
    X86_TICK(c, 7);
    // 0e6d54  cmp al, 0x7e
    X86_AT(c, 0xe6d54u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 0e6d56  jbe 0xe6d63
    X86_AT(c, 0xe6d56u);
    if (x86_cc(c, 6)) { goto L_e6d63; }
L_e6d58:
    X86_TICK(c, 11);
    // 0e6d58  mov al, byte ptr [edi + 1]
    X86_AT(c, 0xe6d58u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0e6d5b  cmp al, 0x80
    X86_AT(c, 0xe6d5bu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0e6d5d  jb 0xe6d90
    X86_AT(c, 0xe6d5du);
    if (x86_cc(c, 2)) { goto L_e6d90; }
    X86_TICK(c, 7);
    // 0e6d5f  cmp al, 0xfc
    X86_AT(c, 0xe6d5fu);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 0e6d61  ja 0xe6d90
    X86_AT(c, 0xe6d61u);
    if (x86_cc(c, 7)) { goto L_e6d90; }
L_e6d63:
    X86_TICK(c, 11);
    // 0e6d63  mov al, byte ptr [edi - 1]
    X86_AT(c, 0xe6d63u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 0e6d66  cmp al, 0x81
    X86_AT(c, 0xe6d66u);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 0e6d68  jb 0xe6d6e
    X86_AT(c, 0xe6d68u);
    if (x86_cc(c, 2)) { goto L_e6d6e; }
    X86_TICK(c, 7);
    // 0e6d6a  cmp al, 0x9f
    X86_AT(c, 0xe6d6au);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 0e6d6c  jbe 0xe6d79
    X86_AT(c, 0xe6d6cu);
    if (x86_cc(c, 6)) { goto L_e6d79; }
L_e6d6e:
    X86_TICK(c, 11);
    // 0e6d6e  mov al, byte ptr [edi - 1]
    X86_AT(c, 0xe6d6eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 0e6d71  cmp al, 0xe0
    X86_AT(c, 0xe6d71u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 0e6d73  jb 0xe6db3
    X86_AT(c, 0xe6d73u);
    if (x86_cc(c, 2)) { goto L_e6db3; }
    X86_TICK(c, 7);
    // 0e6d75  cmp al, 0xfc
    X86_AT(c, 0xe6d75u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 0e6d77  ja 0xe6db3
    X86_AT(c, 0xe6d77u);
    if (x86_cc(c, 7)) { goto L_e6db3; }
L_e6d79:
    X86_TICK(c, 11);
    // 0e6d79  mov al, byte ptr [edi]
    X86_AT(c, 0xe6d79u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0e6d7b  cmp al, 0x40
    X86_AT(c, 0xe6d7bu);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0e6d7d  jb 0xe6d83
    X86_AT(c, 0xe6d7du);
    if (x86_cc(c, 2)) { goto L_e6d83; }
    X86_TICK(c, 7);
    // 0e6d7f  cmp al, 0x7e
    X86_AT(c, 0xe6d7fu);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 0e6d81  jbe 0xe6d8d
    X86_AT(c, 0xe6d81u);
    if (x86_cc(c, 6)) { goto L_e6d8d; }
L_e6d83:
    X86_TICK(c, 11);
    // 0e6d83  mov al, byte ptr [edi]
    X86_AT(c, 0xe6d83u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0e6d85  cmp al, 0x80
    X86_AT(c, 0xe6d85u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0e6d87  jb 0xe6db3
    X86_AT(c, 0xe6d87u);
    if (x86_cc(c, 2)) { goto L_e6db3; }
    X86_TICK(c, 7);
    // 0e6d89  cmp al, 0xfc
    X86_AT(c, 0xe6d89u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 0e6d8b  ja 0xe6db3
    X86_AT(c, 0xe6d8bu);
    if (x86_cc(c, 7)) { goto L_e6db3; }
L_e6d8d:
    X86_TICK(c, 9);
    // 0e6d8d  inc edi
    X86_AT(c, 0xe6d8du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e6d8e  jmp 0xe6db3
    X86_AT(c, 0xe6d8eu);
    goto L_e6db3;
L_e6d90:
    X86_TICK(c, 12);
    // 0e6d90  cmp byte ptr [edi], 0xa
    X86_AT(c, 0xe6d90u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xAu, 0, 1);
    // 0e6d93  jne 0xe6d9b
    X86_AT(c, 0xe6d93u);
    if (x86_cc(c, 5)) { goto L_e6d9b; }
    X86_TICK(c, 15);
    // 0e6d95  inc edi
    X86_AT(c, 0xe6d95u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e6d96  dec dword ptr [ebp - 0xc]
    X86_AT(c, 0xe6d96u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0e6d99  jmp 0xe6db3
    X86_AT(c, 0xe6d99u);
    goto L_e6db3;
L_e6d9b:
    X86_TICK(c, 12);
    // 0e6d9b  cmp byte ptr [edi], 0
    X86_AT(c, 0xe6d9bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0e6d9e  jne 0xe6da9
    X86_AT(c, 0xe6d9eu);
    if (x86_cc(c, 5)) { goto L_e6da9; }
    X86_TICK(c, 9);
    // 0e6da0  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0xe6da0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 0e6da7  jmp 0xe6db3
    X86_AT(c, 0xe6da7u);
    goto L_e6db3;
L_e6da9:
    X86_TICK(c, 17);
    // 0e6da9  dec esi
    X86_AT(c, 0xe6da9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0e6daa  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xe6daau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e6dad  inc edi
    X86_AT(c, 0xe6dadu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e6dae  jmp 0xe6d1d
    X86_AT(c, 0xe6daeu);
    X86_POLL(c, 0xe6d1du); goto L_e6d1d;
L_e6db3:
    X86_TICK(c, 33);
    // 0e6db3  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xe6db3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e6db6  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe6db6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e6db9  mov byte ptr [eax], 0
    X86_AT(c, 0xe6db9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
    // 0e6dbc  mov eax, esi
    X86_AT(c, 0xe6dbcu);
    c.r[0] = c.r[6];
    // 0e6dbe  mov dx, word ptr [ebp - 8]
    X86_AT(c, 0xe6dbeu);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 0e6dc2  sub edx, eax
    X86_AT(c, 0xe6dc2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e6dc4  mov word ptr [0xcda7c], dx
    X86_AT(c, 0xe6dc4u);
    wr16((c.sbase[3] + (uint32_t)(0xCDA7Cu)), (c.r[2] & 0xFFFFu));
    // 0e6dcb  push 0xcda78
    X86_AT(c, 0xe6dcbu);
    { uint32_t v = 0xCDA78u; push32(c, v); }
    // 0e6dd0  push 0x7a7d8
    X86_AT(c, 0xe6dd0u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e6dd5  call 0xa7d
    X86_AT(c, 0xe6dd5u);
    push32(c, 0xe6ddau); f_00000a7d(c); X86_RET(c, 0xe6ddau);
    X86_TICK(c, 28);
    // 0e6dda  mov eax, dword ptr [ebx + 0x19]
    X86_AT(c, 0xe6ddau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 0e6ddd  add eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe6dddu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 0e6de0  sub eax, esi
    X86_AT(c, 0xe6de0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e6de2  mov dword ptr [ebx + 0x19], eax
    X86_AT(c, 0xe6de2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), c.r[0]);
    // 0e6de5  add esp, 8
    X86_AT(c, 0xe6de5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e6de8  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xe6de8u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0e6dec  jne 0xe6cce
    X86_AT(c, 0xe6decu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe6cceu); goto L_e6cce; }
    X86_TICK(c, 15);
    // 0e6df2  mov eax, dword ptr [ebx + 0x1d]
    X86_AT(c, 0xe6df2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 0e6df5  cmp eax, dword ptr [ebx + 0x15]
    X86_AT(c, 0xe6df5u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x15u))), 0, 4);
    // 0e6df8  jne 0xe6e11
    X86_AT(c, 0xe6df8u);
    if (x86_cc(c, 5)) { goto L_e6e11; }
    X86_TICK(c, 12);
    // 0e6dfa  push dword ptr [ebp + 8]
    X86_AT(c, 0xe6dfau);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e6dfd  call 0xe6bc8
    X86_AT(c, 0xe6dfdu);
    push32(c, 0xe6e02u); f_000e6bc8(c); X86_RET(c, 0xe6e02u);
    X86_TICK(c, 11);
    // 0e6e02  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0xe6e02u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 0e6e09  add esp, 4
    X86_AT(c, 0xe6e09u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e6e0c  jmp 0xe6cce
    X86_AT(c, 0xe6e0cu);
    X86_POLL(c, 0xe6cceu); goto L_e6cce;
L_e6e11:
    X86_TICK(c, 15);
    // 0e6e11  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0xe6e11u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 0e6e18  inc dword ptr [ebx + 0x1d]
    X86_AT(c, 0xe6e18u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e6e1b  jmp 0xe6cce
    X86_AT(c, 0xe6e1bu);
    X86_POLL(c, 0xe6cceu); goto L_e6cce;
L_e6e20:
    X86_TICK(c, 28);
    // 0e6e20  pop edi
    X86_AT(c, 0xe6e20u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6e21  pop esi
    X86_AT(c, 0xe6e21u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e6e22  pop ebx
    X86_AT(c, 0xe6e22u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e6e23  leave 
    X86_AT(c, 0xe6e23u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e6e24  ret 
    X86_AT(c, 0xe6e24u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe6cb0u, "ran off the end of a function");
}
void f_000e6cce(X86Cpu& c) {
L_e6cce:
    X86_TICK(c, 12);
    // 0e6cce  cmp byte ptr [edi], 0
    X86_AT(c, 0xe6cceu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0e6cd1  je 0xe6e20
    X86_AT(c, 0xe6cd1u);
    if (x86_cc(c, 4)) { goto L_e6e20; }
    X86_TICK(c, 52);
    // 0e6cd7  mov dword ptr [ebp - 0xc], 0xcda7e
    X86_AT(c, 0xe6cd7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0xCDA7Eu);
    // 0e6cde  mov ax, word ptr [ebx + 1]
    X86_AT(c, 0xe6cdeu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x1u))));
    // 0e6ce2  add ax, 4
    X86_AT(c, 0xe6ce2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x4u, 0, 2)); }
    // 0e6ce6  mov edx, dword ptr [ebx + 0x19]
    X86_AT(c, 0xe6ce6u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 0e6ce9  shl edx, 3
    X86_AT(c, 0xe6ce9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0e6cec  add edx, eax
    X86_AT(c, 0xe6cecu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e6cee  mov word ptr [0xcda78], dx
    X86_AT(c, 0xe6ceeu);
    wr16((c.sbase[3] + (uint32_t)(0xCDA78u)), (c.r[2] & 0xFFFFu));
    // 0e6cf5  mov ax, word ptr [ebx + 5]
    X86_AT(c, 0xe6cf5u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x5u))));
    // 0e6cf9  add ax, 0x11
    X86_AT(c, 0xe6cf9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 0e6cfd  mov edx, dword ptr [ebx + 0x1d]
    X86_AT(c, 0xe6cfdu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 0e6d00  shl edx, 4
    X86_AT(c, 0xe6d00u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0e6d03  add edx, eax
    X86_AT(c, 0xe6d03u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e6d05  mov word ptr [0xcda7a], dx
    X86_AT(c, 0xe6d05u);
    wr16((c.sbase[3] + (uint32_t)(0xCDA7Au)), (c.r[2] & 0xFFFFu));
    // 0e6d0c  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xe6d0cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0e6d13  mov esi, dword ptr [ebx + 0x11]
    X86_AT(c, 0xe6d13u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x11u)));
    // 0e6d16  sub esi, dword ptr [ebx + 0x19]
    X86_AT(c, 0xe6d16u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u))), 0, 4); }
    // 0e6d19  inc esi
    X86_AT(c, 0xe6d19u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e6d1a  mov dword ptr [ebp - 8], esi
    X86_AT(c, 0xe6d1au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[6]);
L_e6d1d:
    X86_TICK(c, 7);
    // 0e6d1d  and esi, esi
    X86_AT(c, 0xe6d1du);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e6d1f  jle 0xe6db3
    X86_AT(c, 0xe6d1fu);
    if (x86_cc(c, 14)) { goto L_e6db3; }
    X86_TICK(c, 17);
    // 0e6d25  mov al, byte ptr [edi]
    X86_AT(c, 0xe6d25u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0e6d27  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe6d27u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e6d2a  mov byte ptr [edx], al
    X86_AT(c, 0xe6d2au);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0e6d2c  cmp esi, 1
    X86_AT(c, 0xe6d2cu);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0e6d2f  jne 0xe6d90
    X86_AT(c, 0xe6d2fu);
    if (x86_cc(c, 5)) { goto L_e6d90; }
    X86_TICK(c, 11);
    // 0e6d35  mov al, byte ptr [edi]
    X86_AT(c, 0xe6d35u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0e6d37  cmp al, 0x81
    X86_AT(c, 0xe6d37u);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 0e6d39  jb 0xe6d3f
    X86_AT(c, 0xe6d39u);
    if (x86_cc(c, 2)) { goto L_e6d3f; }
    X86_TICK(c, 7);
    // 0e6d3b  cmp al, 0x9f
    X86_AT(c, 0xe6d3bu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 0e6d3d  jbe 0xe6d4d
    X86_AT(c, 0xe6d3du);
    if (x86_cc(c, 6)) { goto L_e6d4d; }
L_e6d3f:
    X86_TICK(c, 11);
    // 0e6d3f  mov al, byte ptr [edi]
    X86_AT(c, 0xe6d3fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0e6d41  cmp al, 0xe0
    X86_AT(c, 0xe6d41u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 0e6d43  jb 0xe6d90
    X86_AT(c, 0xe6d43u);
    if (x86_cc(c, 2)) { goto L_e6d90; }
    X86_TICK(c, 7);
    // 0e6d49  cmp al, 0xfc
    X86_AT(c, 0xe6d49u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 0e6d4b  ja 0xe6d90
    X86_AT(c, 0xe6d4bu);
    if (x86_cc(c, 7)) { goto L_e6d90; }
L_e6d4d:
    X86_TICK(c, 11);
    // 0e6d4d  mov al, byte ptr [edi + 1]
    X86_AT(c, 0xe6d4du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0e6d50  cmp al, 0x40
    X86_AT(c, 0xe6d50u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0e6d52  jb 0xe6d58
    X86_AT(c, 0xe6d52u);
    if (x86_cc(c, 2)) { goto L_e6d58; }
    X86_TICK(c, 7);
    // 0e6d54  cmp al, 0x7e
    X86_AT(c, 0xe6d54u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 0e6d56  jbe 0xe6d63
    X86_AT(c, 0xe6d56u);
    if (x86_cc(c, 6)) { goto L_e6d63; }
L_e6d58:
    X86_TICK(c, 11);
    // 0e6d58  mov al, byte ptr [edi + 1]
    X86_AT(c, 0xe6d58u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 0e6d5b  cmp al, 0x80
    X86_AT(c, 0xe6d5bu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0e6d5d  jb 0xe6d90
    X86_AT(c, 0xe6d5du);
    if (x86_cc(c, 2)) { goto L_e6d90; }
    X86_TICK(c, 7);
    // 0e6d5f  cmp al, 0xfc
    X86_AT(c, 0xe6d5fu);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 0e6d61  ja 0xe6d90
    X86_AT(c, 0xe6d61u);
    if (x86_cc(c, 7)) { goto L_e6d90; }
L_e6d63:
    X86_TICK(c, 11);
    // 0e6d63  mov al, byte ptr [edi - 1]
    X86_AT(c, 0xe6d63u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 0e6d66  cmp al, 0x81
    X86_AT(c, 0xe6d66u);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 0e6d68  jb 0xe6d6e
    X86_AT(c, 0xe6d68u);
    if (x86_cc(c, 2)) { goto L_e6d6e; }
    X86_TICK(c, 7);
    // 0e6d6a  cmp al, 0x9f
    X86_AT(c, 0xe6d6au);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 0e6d6c  jbe 0xe6d79
    X86_AT(c, 0xe6d6cu);
    if (x86_cc(c, 6)) { goto L_e6d79; }
L_e6d6e:
    X86_TICK(c, 11);
    // 0e6d6e  mov al, byte ptr [edi - 1]
    X86_AT(c, 0xe6d6eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 0e6d71  cmp al, 0xe0
    X86_AT(c, 0xe6d71u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 0e6d73  jb 0xe6db3
    X86_AT(c, 0xe6d73u);
    if (x86_cc(c, 2)) { goto L_e6db3; }
    X86_TICK(c, 7);
    // 0e6d75  cmp al, 0xfc
    X86_AT(c, 0xe6d75u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 0e6d77  ja 0xe6db3
    X86_AT(c, 0xe6d77u);
    if (x86_cc(c, 7)) { goto L_e6db3; }
L_e6d79:
    X86_TICK(c, 11);
    // 0e6d79  mov al, byte ptr [edi]
    X86_AT(c, 0xe6d79u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0e6d7b  cmp al, 0x40
    X86_AT(c, 0xe6d7bu);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 0e6d7d  jb 0xe6d83
    X86_AT(c, 0xe6d7du);
    if (x86_cc(c, 2)) { goto L_e6d83; }
    X86_TICK(c, 7);
    // 0e6d7f  cmp al, 0x7e
    X86_AT(c, 0xe6d7fu);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 0e6d81  jbe 0xe6d8d
    X86_AT(c, 0xe6d81u);
    if (x86_cc(c, 6)) { goto L_e6d8d; }
L_e6d83:
    X86_TICK(c, 11);
    // 0e6d83  mov al, byte ptr [edi]
    X86_AT(c, 0xe6d83u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0e6d85  cmp al, 0x80
    X86_AT(c, 0xe6d85u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 0e6d87  jb 0xe6db3
    X86_AT(c, 0xe6d87u);
    if (x86_cc(c, 2)) { goto L_e6db3; }
    X86_TICK(c, 7);
    // 0e6d89  cmp al, 0xfc
    X86_AT(c, 0xe6d89u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 0e6d8b  ja 0xe6db3
    X86_AT(c, 0xe6d8bu);
    if (x86_cc(c, 7)) { goto L_e6db3; }
L_e6d8d:
    X86_TICK(c, 9);
    // 0e6d8d  inc edi
    X86_AT(c, 0xe6d8du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e6d8e  jmp 0xe6db3
    X86_AT(c, 0xe6d8eu);
    goto L_e6db3;
L_e6d90:
    X86_TICK(c, 12);
    // 0e6d90  cmp byte ptr [edi], 0xa
    X86_AT(c, 0xe6d90u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xAu, 0, 1);
    // 0e6d93  jne 0xe6d9b
    X86_AT(c, 0xe6d93u);
    if (x86_cc(c, 5)) { goto L_e6d9b; }
    X86_TICK(c, 15);
    // 0e6d95  inc edi
    X86_AT(c, 0xe6d95u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e6d96  dec dword ptr [ebp - 0xc]
    X86_AT(c, 0xe6d96u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0e6d99  jmp 0xe6db3
    X86_AT(c, 0xe6d99u);
    goto L_e6db3;
L_e6d9b:
    X86_TICK(c, 12);
    // 0e6d9b  cmp byte ptr [edi], 0
    X86_AT(c, 0xe6d9bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0e6d9e  jne 0xe6da9
    X86_AT(c, 0xe6d9eu);
    if (x86_cc(c, 5)) { goto L_e6da9; }
    X86_TICK(c, 9);
    // 0e6da0  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0xe6da0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 0e6da7  jmp 0xe6db3
    X86_AT(c, 0xe6da7u);
    goto L_e6db3;
L_e6da9:
    X86_TICK(c, 17);
    // 0e6da9  dec esi
    X86_AT(c, 0xe6da9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0e6daa  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xe6daau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e6dad  inc edi
    X86_AT(c, 0xe6dadu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e6dae  jmp 0xe6d1d
    X86_AT(c, 0xe6daeu);
    X86_POLL(c, 0xe6d1du); goto L_e6d1d;
L_e6db3:
    X86_TICK(c, 33);
    // 0e6db3  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xe6db3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e6db6  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe6db6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e6db9  mov byte ptr [eax], 0
    X86_AT(c, 0xe6db9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
    // 0e6dbc  mov eax, esi
    X86_AT(c, 0xe6dbcu);
    c.r[0] = c.r[6];
    // 0e6dbe  mov dx, word ptr [ebp - 8]
    X86_AT(c, 0xe6dbeu);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 0e6dc2  sub edx, eax
    X86_AT(c, 0xe6dc2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e6dc4  mov word ptr [0xcda7c], dx
    X86_AT(c, 0xe6dc4u);
    wr16((c.sbase[3] + (uint32_t)(0xCDA7Cu)), (c.r[2] & 0xFFFFu));
    // 0e6dcb  push 0xcda78
    X86_AT(c, 0xe6dcbu);
    { uint32_t v = 0xCDA78u; push32(c, v); }
    // 0e6dd0  push 0x7a7d8
    X86_AT(c, 0xe6dd0u);
    { uint32_t v = 0x7A7D8u; push32(c, v); }
    // 0e6dd5  call 0xa7d
    X86_AT(c, 0xe6dd5u);
    push32(c, 0xe6ddau); f_00000a7d(c); X86_RET(c, 0xe6ddau);
    X86_TICK(c, 28);
    // 0e6dda  mov eax, dword ptr [ebx + 0x19]
    X86_AT(c, 0xe6ddau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 0e6ddd  add eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe6dddu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 0e6de0  sub eax, esi
    X86_AT(c, 0xe6de0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e6de2  mov dword ptr [ebx + 0x19], eax
    X86_AT(c, 0xe6de2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), c.r[0]);
    // 0e6de5  add esp, 8
    X86_AT(c, 0xe6de5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0e6de8  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xe6de8u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0e6dec  jne 0xe6cce
    X86_AT(c, 0xe6decu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe6cceu); goto L_e6cce; }
    X86_TICK(c, 15);
    // 0e6df2  mov eax, dword ptr [ebx + 0x1d]
    X86_AT(c, 0xe6df2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 0e6df5  cmp eax, dword ptr [ebx + 0x15]
    X86_AT(c, 0xe6df5u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x15u))), 0, 4);
    // 0e6df8  jne 0xe6e11
    X86_AT(c, 0xe6df8u);
    if (x86_cc(c, 5)) { goto L_e6e11; }
    X86_TICK(c, 12);
    // 0e6dfa  push dword ptr [ebp + 8]
    X86_AT(c, 0xe6dfau);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e6dfd  call 0xe6bc8
    X86_AT(c, 0xe6dfdu);
    push32(c, 0xe6e02u); f_000e6bc8(c); X86_RET(c, 0xe6e02u);
    X86_TICK(c, 11);
    // 0e6e02  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0xe6e02u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 0e6e09  add esp, 4
    X86_AT(c, 0xe6e09u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0e6e0c  jmp 0xe6cce
    X86_AT(c, 0xe6e0cu);
    X86_POLL(c, 0xe6cceu); goto L_e6cce;
L_e6e11:
    X86_TICK(c, 15);
    // 0e6e11  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0xe6e11u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 0e6e18  inc dword ptr [ebx + 0x1d]
    X86_AT(c, 0xe6e18u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e6e1b  jmp 0xe6cce
    X86_AT(c, 0xe6e1bu);
    X86_POLL(c, 0xe6cceu); goto L_e6cce;
L_e6e20:
    X86_TICK(c, 28);
    // 0e6e20  pop edi
    X86_AT(c, 0xe6e20u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6e21  pop esi
    X86_AT(c, 0xe6e21u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e6e22  pop ebx
    X86_AT(c, 0xe6e22u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e6e23  leave 
    X86_AT(c, 0xe6e23u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e6e24  ret 
    X86_AT(c, 0xe6e24u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe6cceu, "ran off the end of a function");
}
}
