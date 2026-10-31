#include "p_game_funcs.h"
namespace p_game {
void f_001023f6(X86Cpu& c) {
    X86_TICK(c, 51);
    // 1023f6  push ebp
    X86_AT(c, 0x1023f6u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 1023f7  mov ebp, esp
    X86_AT(c, 0x1023f7u);
    c.r[5] = c.r[4];
    // 1023f9  push esi
    X86_AT(c, 0x1023f9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1023fa  push edi
    X86_AT(c, 0x1023fau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1023fb  push ebx
    X86_AT(c, 0x1023fbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 1023fc  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0x1023fcu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 1023ff  mov byte ptr [0x10241b], al
    X86_AT(c, 0x1023ffu);
    wr8((c.sbase[3] + (uint32_t)(0x10241Bu)), g8(c, 0));
    // 102404  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x102404u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 102407  mov eax, dword ptr [esi]
    X86_AT(c, 0x102407u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 102409  mov ebx, dword ptr [esi + 4]
    X86_AT(c, 0x102409u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 10240c  mov ecx, dword ptr [esi + 8]
    X86_AT(c, 0x10240cu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 10240f  mov edx, dword ptr [esi + 0xc]
    X86_AT(c, 0x10240fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)));
    // 102412  mov edi, dword ptr [esi + 0x14]
    X86_AT(c, 0x102412u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)));
    // 102415  mov esi, dword ptr [esi + 0x10]
    X86_AT(c, 0x102415u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)));
    // 102418  jmp 0x10241a
    X86_AT(c, 0x102418u);
    goto L_10241a;
L_10241a:
    X86_TICK(c, 37);
    // 10241a  int 0
    X86_AT(c, 0x10241au);
    x86_int(c, 0x0, 0x10241cu);
    X86_TICK(c, 67);
    // 10241c  push edi
    X86_AT(c, 0x10241cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10241d  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x10241du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 102420  mov dword ptr [edi], eax
    X86_AT(c, 0x102420u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 102422  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x102422u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 102425  mov dword ptr [edi + 8], ecx
    X86_AT(c, 0x102425u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), c.r[1]);
    // 102428  mov dword ptr [edi + 0xc], edx
    X86_AT(c, 0x102428u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), c.r[2]);
    // 10242b  mov dword ptr [edi + 0x10], esi
    X86_AT(c, 0x10242bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u)), c.r[6]);
    // 10242e  pushfd 
    X86_AT(c, 0x10242eu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 10242f  pop dword ptr [edi + 0x18]
    X86_AT(c, 0x10242fu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), v); }
    // 102432  and dword ptr [edi + 0x18], 1
    X86_AT(c, 0x102432u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1u, 4)); }
    // 102436  pop dword ptr [edi + 0x14]
    X86_AT(c, 0x102436u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u)), v); }
    // 102439  pop ebx
    X86_AT(c, 0x102439u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 10243a  pop edi
    X86_AT(c, 0x10243au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10243b  pop esi
    X86_AT(c, 0x10243bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 10243c  mov esp, ebp
    X86_AT(c, 0x10243cu);
    c.r[4] = c.r[5];
    // 10243e  pop ebp
    X86_AT(c, 0x10243eu);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 10243f  ret 
    X86_AT(c, 0x10243fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1023f6u, "ran off the end of a function");
}
void f_00102492(X86Cpu& c) {
    X86_TICK(c, 75);
    // 102492  push ebp
    X86_AT(c, 0x102492u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 102493  mov ebp, esp
    X86_AT(c, 0x102493u);
    c.r[5] = c.r[4];
    // 102495  push esi
    X86_AT(c, 0x102495u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 102496  push edi
    X86_AT(c, 0x102496u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 102497  push ebx
    X86_AT(c, 0x102497u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 102498  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x102498u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 10249b  mov eax, dword ptr [esi]
    X86_AT(c, 0x10249bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 10249d  mov ebx, dword ptr [esi + 4]
    X86_AT(c, 0x10249du);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 1024a0  mov ecx, dword ptr [esi + 8]
    X86_AT(c, 0x1024a0u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 1024a3  mov edx, dword ptr [esi + 0xc]
    X86_AT(c, 0x1024a3u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)));
    // 1024a6  mov edi, dword ptr [esi + 0x14]
    X86_AT(c, 0x1024a6u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)));
    // 1024a9  mov esi, dword ptr [esi + 0x10]
    X86_AT(c, 0x1024a9u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)));
    // 1024ac  int 0x21
    X86_AT(c, 0x1024acu);
    x86_int(c, 0x21, 0x1024aeu);
    X86_TICK(c, 67);
    // 1024ae  push edi
    X86_AT(c, 0x1024aeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1024af  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x1024afu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 1024b2  mov dword ptr [edi], eax
    X86_AT(c, 0x1024b2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 1024b4  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x1024b4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 1024b7  mov dword ptr [edi + 8], ecx
    X86_AT(c, 0x1024b7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), c.r[1]);
    // 1024ba  mov dword ptr [edi + 0xc], edx
    X86_AT(c, 0x1024bau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), c.r[2]);
    // 1024bd  mov dword ptr [edi + 0x10], esi
    X86_AT(c, 0x1024bdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u)), c.r[6]);
    // 1024c0  pushfd 
    X86_AT(c, 0x1024c0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 1024c1  pop dword ptr [edi + 0x18]
    X86_AT(c, 0x1024c1u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), v); }
    // 1024c4  and dword ptr [edi + 0x18], 1
    X86_AT(c, 0x1024c4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1u, 4)); }
    // 1024c8  pop dword ptr [edi + 0x14]
    X86_AT(c, 0x1024c8u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u)), v); }
    // 1024cb  pop ebx
    X86_AT(c, 0x1024cbu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 1024cc  pop edi
    X86_AT(c, 0x1024ccu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1024cd  pop esi
    X86_AT(c, 0x1024cdu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1024ce  mov esp, ebp
    X86_AT(c, 0x1024ceu);
    c.r[4] = c.r[5];
    // 1024d0  pop ebp
    X86_AT(c, 0x1024d0u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 1024d1  ret 
    X86_AT(c, 0x1024d1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x102492u, "ran off the end of a function");
}
void f_00102558(X86Cpu& c) {
    X86_TICK(c, 32);
    // 102558  push ebp
    X86_AT(c, 0x102558u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 102559  mov ebp, esp
    X86_AT(c, 0x102559u);
    c.r[5] = c.r[4];
    // 10255b  push ebx
    X86_AT(c, 0x10255bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 10255c  push esi
    X86_AT(c, 0x10255cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 10255d  push edi
    X86_AT(c, 0x10255du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10255e  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x10255eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 102561  mov esi, edi
    X86_AT(c, 0x102561u);
    c.r[6] = c.r[7];
    // 102563  and byte ptr [esi + 0xc], 0x7f
    X86_AT(c, 0x102563u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 102567  mov eax, 0xdfe58
    X86_AT(c, 0x102567u);
    c.r[0] = 0xDFE58u;
    // 10256c  cmp eax, edi
    X86_AT(c, 0x10256cu);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 10256e  jne 0x102588
    X86_AT(c, 0x10256eu);
    if (x86_cc(c, 5)) { goto L_102588; }
    X86_TICK(c, 13);
    // 102570  mov al, byte ptr [esi + 0xe]
    X86_AT(c, 0x102570u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu))));
    // 102573  push eax
    X86_AT(c, 0x102573u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 102574  call 0x103ae8
    X86_AT(c, 0x102574u);
    push32(c, 0x102579u); f_00103ae8(c); X86_RET(c, 0x102579u);
    X86_TICK(c, 10);
    // 102579  xchg ebx, eax
    X86_AT(c, 0x102579u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 10257a  cmp bl, 1
    X86_AT(c, 0x10257au);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 10257d  je 0x102588
    X86_AT(c, 0x10257du);
    if (x86_cc(c, 4)) { goto L_102588; }
    X86_TICK(c, 7);
    // 10257f  cmp bl, 2
    X86_AT(c, 0x10257fu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 102582  je 0x102588
    X86_AT(c, 0x102582u);
    if (x86_cc(c, 4)) { goto L_102588; }
    X86_TICK(c, 7);
    // 102584  or byte ptr [esi + 0xc], 1
    X86_AT(c, 0x102584u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
L_102588:
    X86_TICK(c, 9);
    // 102588  mov eax, 0xdfe6c
    X86_AT(c, 0x102588u);
    c.r[0] = 0xDFE6Cu;
    // 10258d  cmp eax, edi
    X86_AT(c, 0x10258du);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 10258f  jne 0x1025a8
    X86_AT(c, 0x10258fu);
    if (x86_cc(c, 5)) { goto L_1025a8; }
    X86_TICK(c, 13);
    // 102591  mov al, byte ptr [esi + 0xe]
    X86_AT(c, 0x102591u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu))));
    // 102594  push eax
    X86_AT(c, 0x102594u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 102595  call 0x103ae8
    X86_AT(c, 0x102595u);
    push32(c, 0x10259au); f_00103ae8(c); X86_RET(c, 0x10259au);
    X86_TICK(c, 7);
    // 10259a  cmp al, 2
    X86_AT(c, 0x10259au);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 10259c  jne 0x1025a4
    X86_AT(c, 0x10259cu);
    if (x86_cc(c, 5)) { goto L_1025a4; }
    X86_TICK(c, 14);
    // 10259e  and byte ptr [esi + 0xc], 0xfe
    X86_AT(c, 0x10259eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFEu, 1)); }
    // 1025a2  jmp 0x1025a8
    X86_AT(c, 0x1025a2u);
    goto L_1025a8;
L_1025a4:
    X86_TICK(c, 7);
    // 1025a4  or byte ptr [esi + 0xc], 1
    X86_AT(c, 0x1025a4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
L_1025a8:
    X86_TICK(c, 9);
    // 1025a8  mov eax, 0xdfe80
    X86_AT(c, 0x1025a8u);
    c.r[0] = 0xDFE80u;
    // 1025ad  cmp eax, edi
    X86_AT(c, 0x1025adu);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 1025af  jne 0x1025b5
    X86_AT(c, 0x1025afu);
    if (x86_cc(c, 5)) { goto L_1025b5; }
    X86_TICK(c, 7);
    // 1025b1  and byte ptr [esi + 0xc], 0xfe
    X86_AT(c, 0x1025b1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFEu, 1)); }
L_1025b5:
    X86_TICK(c, 12);
    // 1025b5  test byte ptr [esi + 0xc], 1
    X86_AT(c, 0x1025b5u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu))) & 0x1u, 1);
    // 1025b9  je 0x1025dd
    X86_AT(c, 0x1025b9u);
    if (x86_cc(c, 4)) { goto L_1025dd; }
    X86_TICK(c, 9);
    // 1025bb  push 0x201
    X86_AT(c, 0x1025bbu);
    { uint32_t v = 0x201u; push32(c, v); }
    // 1025c0  call 0x101784
    X86_AT(c, 0x1025c0u);
    push32(c, 0x1025c5u); f_00101784(c); X86_RET(c, 0x1025c5u);
    X86_TICK(c, 13);
    // 1025c5  mov dword ptr [esi + 8], eax
    X86_AT(c, 0x1025c5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 1025c8  pop ecx
    X86_AT(c, 0x1025c8u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 1025c9  and eax, eax
    X86_AT(c, 0x1025c9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 1025cb  jne 0x1025d1
    X86_AT(c, 0x1025cbu);
    if (x86_cc(c, 5)) { goto L_1025d1; }
    X86_TICK(c, 7);
    // 1025cd  and byte ptr [esi + 0xc], 0xfe
    X86_AT(c, 0x1025cdu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFEu, 1)); }
L_1025d1:
    X86_TICK(c, 8);
    // 1025d1  mov eax, dword ptr [esi + 8]
    X86_AT(c, 0x1025d1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 1025d4  mov dword ptr [esi], eax
    X86_AT(c, 0x1025d4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 1025d6  mov dword ptr [esi + 4], 0xffffffff
    X86_AT(c, 0x1025d6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), 0xFFFFFFFFu);
L_1025dd:
    X86_TICK(c, 30);
    // 1025dd  mov word ptr [esi + 0x10], 0xffff
    X86_AT(c, 0x1025ddu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0xFFFFu);
    // 1025e3  pop edi
    X86_AT(c, 0x1025e3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1025e4  pop esi
    X86_AT(c, 0x1025e4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1025e5  pop ebx
    X86_AT(c, 0x1025e5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 1025e6  leave 
    X86_AT(c, 0x1025e6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1025e7  ret 4
    X86_AT(c, 0x1025e7u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x102558u, "ran off the end of a function");
}
void f_00102604(X86Cpu& c) {
    X86_TICK(c, 25);
    // 102604  push ebp
    X86_AT(c, 0x102604u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 102605  mov ebp, esp
    X86_AT(c, 0x102605u);
    c.r[5] = c.r[4];
    // 102607  push ebx
    X86_AT(c, 0x102607u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 102608  push esi
    X86_AT(c, 0x102608u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 102609  push edi
    X86_AT(c, 0x102609u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10260a  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x10260au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 10260d  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x10260du);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 102610  jmp 0x10262e
    X86_AT(c, 0x102610u);
    goto L_10262e;
L_102612:
    X86_TICK(c, 9);
    // 102612  mov eax, 0xa
    X86_AT(c, 0x102612u);
    c.r[0] = 0xAu;
    // 102617  cmp eax, esi
    X86_AT(c, 0x102617u);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 102619  jb 0x10261d
    X86_AT(c, 0x102619u);
    if (x86_cc(c, 2)) { goto L_10261d; }
    X86_TICK(c, 2);
    // 10261b  mov eax, esi
    X86_AT(c, 0x10261bu);
    c.r[0] = c.r[6];
L_10261d:
    X86_TICK(c, 18);
    // 10261d  xchg ebx, eax
    X86_AT(c, 0x10261du);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 10261e  push ebx
    X86_AT(c, 0x10261eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 10261f  push edi
    X86_AT(c, 0x10261fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 102620  mov ecx, dword ptr [0xdfc60]
    X86_AT(c, 0x102620u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xDFC60u)));
    // 102626  call dword ptr [0xdfc5c]
    X86_AT(c, 0x102626u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xDFC5Cu))); push32(c, 0x10262cu); x86_call(c, t); X86_RET(c, 0x10262cu); }
    X86_TICK(c, 2);
    // 10262c  sub esi, ebx
    X86_AT(c, 0x10262cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[3], 0, 4); }
L_10262e:
    X86_TICK(c, 7);
    // 10262e  and esi, esi
    X86_AT(c, 0x10262eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 102630  ja 0x102612
    X86_AT(c, 0x102630u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x102612u); goto L_102612; }
    X86_TICK(c, 28);
    // 102632  pop edi
    X86_AT(c, 0x102632u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 102633  pop esi
    X86_AT(c, 0x102633u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 102634  pop ebx
    X86_AT(c, 0x102634u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 102635  leave 
    X86_AT(c, 0x102635u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 102636  ret 8
    X86_AT(c, 0x102636u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x102604u, "ran off the end of a function");
}
void f_0010264c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 10264c  push ebp
    X86_AT(c, 0x10264cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 10264d  mov ebp, esp
    X86_AT(c, 0x10264du);
    c.r[5] = c.r[4];
    // 10264f  push esi
    X86_AT(c, 0x10264fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 102650  push edi
    X86_AT(c, 0x102650u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 102651  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x102651u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 102654  mov eax, dword ptr [0xdfc4c]
    X86_AT(c, 0x102654u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFC4Cu)));
    // 102659  cmp eax, 0xffff
    X86_AT(c, 0x102659u);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 10265e  je 0x102692
    X86_AT(c, 0x10265eu);
    if (x86_cc(c, 4)) { goto L_102692; }
    X86_TICK(c, 7);
    // 102660  cmp edi, eax
    X86_AT(c, 0x102660u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 102662  jae 0x102692
    X86_AT(c, 0x102662u);
    if (x86_cc(c, 3)) { goto L_102692; }
    X86_TICK(c, 24);
    // 102664  xchg esi, eax
    X86_AT(c, 0x102664u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 102665  sub esi, edi
    X86_AT(c, 0x102665u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[7], 0, 4); }
    // 102667  add dword ptr [0xdfc58], esi
    X86_AT(c, 0x102667u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC58u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 10266d  test byte ptr [0xdfc48], 0x10
    X86_AT(c, 0x10266du);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xDFC48u))) & 0x10u, 1);
    // 102674  je 0x102687
    X86_AT(c, 0x102674u);
    if (x86_cc(c, 4)) { goto L_102687; }
    X86_TICK(c, 12);
    // 102676  test byte ptr [0xdfc48], 1
    X86_AT(c, 0x102676u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xDFC48u))) & 0x1u, 1);
    // 10267d  jne 0x102687
    X86_AT(c, 0x10267du);
    if (x86_cc(c, 5)) { goto L_102687; }
    X86_TICK(c, 11);
    // 10267f  push esi
    X86_AT(c, 0x10267fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 102680  push 0xdfc64
    X86_AT(c, 0x102680u);
    { uint32_t v = 0xDFC64u; push32(c, v); }
    // 102685  jmp 0x10268d
    X86_AT(c, 0x102685u);
    goto L_10268d;
L_102687:
    X86_TICK(c, 4);
    // 102687  push esi
    X86_AT(c, 0x102687u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 102688  push 0xdfc6e
    X86_AT(c, 0x102688u);
    { uint32_t v = 0xDFC6Eu; push32(c, v); }
L_10268d:
    X86_TICK(c, 7);
    // 10268d  call 0x102604
    X86_AT(c, 0x10268du);
    push32(c, 0x102692u); f_00102604(c); X86_RET(c, 0x102692u);
L_102692:
    X86_TICK(c, 24);
    // 102692  pop edi
    X86_AT(c, 0x102692u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 102693  pop esi
    X86_AT(c, 0x102693u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 102694  leave 
    X86_AT(c, 0x102694u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 102695  ret 4
    X86_AT(c, 0x102695u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x10264cu, "ran off the end of a function");
}
void f_001026b8(X86Cpu& c) {
    X86_TICK(c, 25);
    // 1026b8  push ebp
    X86_AT(c, 0x1026b8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 1026b9  mov ebp, esp
    X86_AT(c, 0x1026b9u);
    c.r[5] = c.r[4];
    // 1026bb  push ecx
    X86_AT(c, 0x1026bbu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 1026bc  sub esp, 8
    X86_AT(c, 0x1026bcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 1026bf  push ebx
    X86_AT(c, 0x1026bfu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 1026c0  mov eax, dword ptr [0xe0074]
    X86_AT(c, 0x1026c0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0074u)));
    // 1026c5  mov bl, byte ptr [eax]
    X86_AT(c, 0x1026c5u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 1026c7  cmp bl, 0x2a
    X86_AT(c, 0x1026c7u);
    (void)x86_sub(c, g8(c, 3), 0x2Au, 0, 1);
    // 1026ca  je 0x1026ee
    X86_AT(c, 0x1026cau);
    if (x86_cc(c, 4)) { goto L_1026ee; }
    X86_TICK(c, 7);
    // 1026cc  cmp bl, 0x31
    X86_AT(c, 0x1026ccu);
    (void)x86_sub(c, g8(c, 3), 0x31u, 0, 1);
    // 1026cf  jb 0x1026d6
    X86_AT(c, 0x1026cfu);
    if (x86_cc(c, 2)) { goto L_1026d6; }
    X86_TICK(c, 7);
    // 1026d1  cmp bl, 0x39
    X86_AT(c, 0x1026d1u);
    (void)x86_sub(c, g8(c, 3), 0x39u, 0, 1);
    // 1026d4  jbe 0x1026ee
    X86_AT(c, 0x1026d4u);
    if (x86_cc(c, 6)) { goto L_1026ee; }
L_1026d6:
    X86_TICK(c, 12);
    // 1026d6  cmp byte ptr [ebp + 0xc], 0
    X86_AT(c, 0x1026d6u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x0u, 0, 1);
    // 1026da  je 0x102794
    X86_AT(c, 0x1026dau);
    if (x86_cc(c, 4)) { goto L_102794; }
    X86_TICK(c, 16);
    // 1026e0  mov eax, dword ptr [0xe0074]
    X86_AT(c, 0x1026e0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0074u)));
    // 1026e5  cmp byte ptr [eax], 0x30
    X86_AT(c, 0x1026e5u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x30u, 0, 1);
    // 1026e8  jne 0x102794
    X86_AT(c, 0x1026e8u);
    if (x86_cc(c, 5)) { goto L_102794; }
L_1026ee:
    X86_TICK(c, 17);
    // 1026ee  mov eax, dword ptr [0xe0074]
    X86_AT(c, 0x1026eeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0074u)));
    // 1026f3  mov al, byte ptr [eax]
    X86_AT(c, 0x1026f3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 1026f5  mov byte ptr [ebp - 9], al
    X86_AT(c, 0x1026f5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
    // 1026f8  cmp al, 0x30
    X86_AT(c, 0x1026f8u);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 1026fa  jb 0x102743
    X86_AT(c, 0x1026fau);
    if (x86_cc(c, 2)) { goto L_102743; }
    X86_TICK(c, 7);
    // 1026fc  cmp al, 0x39
    X86_AT(c, 0x1026fcu);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 1026fe  ja 0x102743
    X86_AT(c, 0x1026feu);
    if (x86_cc(c, 7)) { goto L_102743; }
    X86_TICK(c, 9);
    // 102700  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0x102700u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 102707  jmp 0x102728
    X86_AT(c, 0x102707u);
    goto L_102728;
L_102709:
    X86_TICK(c, 30);
    // 102709  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x102709u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 10270c  lea eax, [eax + eax*4]
    X86_AT(c, 0x10270cu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 10270f  add eax, eax
    X86_AT(c, 0x10270fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 102711  mov edx, dword ptr [0xe0074]
    X86_AT(c, 0x102711u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xE0074u)));
    // 102717  movzx ecx, byte ptr [edx]
    X86_AT(c, 0x102717u);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(c.r[2])));
    // 10271a  add ecx, eax
    X86_AT(c, 0x10271au);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[0], 0, 4); }
    // 10271c  sub ecx, 0x30
    X86_AT(c, 0x10271cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x30u, 0, 4); }
    // 10271f  mov dword ptr [ebp - 8], ecx
    X86_AT(c, 0x10271fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[1]);
    // 102722  inc dword ptr [0xe0074]
    X86_AT(c, 0x102722u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE0074u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_102728:
    X86_TICK(c, 17);
    // 102728  mov eax, dword ptr [0xe0074]
    X86_AT(c, 0x102728u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0074u)));
    // 10272d  mov al, byte ptr [eax]
    X86_AT(c, 0x10272du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 10272f  mov byte ptr [ebp - 0xa], al
    X86_AT(c, 0x10272fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), g8(c, 0));
    // 102732  cmp al, 0x30
    X86_AT(c, 0x102732u);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 102734  jb 0x1027aa
    X86_AT(c, 0x102734u);
    if (x86_cc(c, 2)) { goto L_1027aa; }
    X86_TICK(c, 7);
    // 10273a  cmp al, 0x39
    X86_AT(c, 0x10273au);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 10273c  jbe 0x102709
    X86_AT(c, 0x10273cu);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x102709u); goto L_102709; }
    X86_TICK(c, 7);
    // 10273e  jmp 0x1027aa
    X86_AT(c, 0x10273eu);
    goto L_1027aa;
L_102743:
    X86_TICK(c, 16);
    // 102743  mov eax, dword ptr [0xe0074]
    X86_AT(c, 0x102743u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0074u)));
    // 102748  cmp byte ptr [eax], 0x2a
    X86_AT(c, 0x102748u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x2Au, 0, 1);
    // 10274b  jne 0x1027aa
    X86_AT(c, 0x10274bu);
    if (x86_cc(c, 5)) { goto L_1027aa; }
    X86_TICK(c, 16);
    // 10274d  mov eax, dword ptr [0xe0060]
    X86_AT(c, 0x10274du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0060u)));
    // 102752  cmp dword ptr [eax], 0
    X86_AT(c, 0x102752u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 4);
    // 102755  jge 0x10277b
    X86_AT(c, 0x102755u);
    if (x86_cc(c, 13)) { goto L_10277b; }
    X86_TICK(c, 12);
    // 102757  cmp byte ptr [ebp + 8], 0x50
    X86_AT(c, 0x102757u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x50u, 0, 1);
    // 10275b  jne 0x102766
    X86_AT(c, 0x10275bu);
    if (x86_cc(c, 5)) { goto L_102766; }
    X86_TICK(c, 9);
    // 10275d  mov dword ptr [ebp - 8], 0xffff
    X86_AT(c, 0x10275du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFFFFu);
    // 102764  jmp 0x102785
    X86_AT(c, 0x102764u);
    goto L_102785;
L_102766:
    X86_TICK(c, 26);
    // 102766  mov eax, dword ptr [0xe0060]
    X86_AT(c, 0x102766u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0060u)));
    // 10276b  mov eax, dword ptr [eax]
    X86_AT(c, 0x10276bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 10276d  neg eax
    X86_AT(c, 0x10276du);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 10276f  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x10276fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 102772  or byte ptr [0xdfc48], 1
    X86_AT(c, 0x102772u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC48u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
    // 102779  jmp 0x102785
    X86_AT(c, 0x102779u);
    goto L_102785;
L_10277b:
    X86_TICK(c, 10);
    // 10277b  mov eax, dword ptr [0xe0060]
    X86_AT(c, 0x10277bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0060u)));
    // 102780  mov eax, dword ptr [eax]
    X86_AT(c, 0x102780u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 102782  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x102782u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
L_102785:
    X86_TICK(c, 20);
    // 102785  add dword ptr [0xe0060], 4
    X86_AT(c, 0x102785u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE0060u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 10278c  inc dword ptr [0xe0074]
    X86_AT(c, 0x10278cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE0074u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 102792  jmp 0x1027aa
    X86_AT(c, 0x102792u);
    goto L_1027aa;
L_102794:
    X86_TICK(c, 12);
    // 102794  cmp byte ptr [ebp + 8], 0x50
    X86_AT(c, 0x102794u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x50u, 0, 1);
    // 102798  jne 0x1027a3
    X86_AT(c, 0x102798u);
    if (x86_cc(c, 5)) { goto L_1027a3; }
    X86_TICK(c, 9);
    // 10279a  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0x10279au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 1027a1  jmp 0x1027aa
    X86_AT(c, 0x1027a1u);
    goto L_1027aa;
L_1027a3:
    X86_TICK(c, 2);
    // 1027a3  mov dword ptr [ebp - 8], 0xffff
    X86_AT(c, 0x1027a3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFFFFu);
L_1027aa:
    X86_TICK(c, 24);
    // 1027aa  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x1027aau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 1027ad  pop ebx
    X86_AT(c, 0x1027adu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 1027ae  leave 
    X86_AT(c, 0x1027aeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1027af  ret 8
    X86_AT(c, 0x1027afu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x1026b8u, "ran off the end of a function");
}
void f_001027c8(X86Cpu& c) {
    X86_TICK(c, 20);
    // 1027c8  push ebp
    X86_AT(c, 0x1027c8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 1027c9  mov ebp, esp
    X86_AT(c, 0x1027c9u);
    c.r[5] = c.r[4];
    // 1027cb  push ecx
    X86_AT(c, 0x1027cbu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 1027cc  push eax
    X86_AT(c, 0x1027ccu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1027cd  push ebx
    X86_AT(c, 0x1027cdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 1027ce  push esi
    X86_AT(c, 0x1027ceu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1027cf  push edi
    X86_AT(c, 0x1027cfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1027d0  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x1027d0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 1027d3  mov dword ptr [0xe0074], eax
    X86_AT(c, 0x1027d3u);
    wr32((c.sbase[3] + (uint32_t)(0xE0074u)), c.r[0]);
L_1027d8:
    X86_TICK(c, 29);
    // 1027d8  sub eax, eax
    X86_AT(c, 0x1027d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 1027da  mov byte ptr [0xdfc48], al
    X86_AT(c, 0x1027dau);
    wr8((c.sbase[3] + (uint32_t)(0xDFC48u)), g8(c, 0));
    // 1027df  mov edx, 0xffff
    X86_AT(c, 0x1027dfu);
    c.r[2] = 0xFFFFu;
    // 1027e4  mov dword ptr [0xdfc4c], edx
    X86_AT(c, 0x1027e4u);
    wr32((c.sbase[3] + (uint32_t)(0xDFC4Cu)), c.r[2]);
    // 1027ea  mov dword ptr [0xdfc50], edx
    X86_AT(c, 0x1027eau);
    wr32((c.sbase[3] + (uint32_t)(0xDFC50u)), c.r[2]);
    // 1027f0  mov byte ptr [0xdfc54], 1
    X86_AT(c, 0x1027f0u);
    wr8((c.sbase[3] + (uint32_t)(0xDFC54u)), 0x1u);
    // 1027f7  mov edi, eax
    X86_AT(c, 0x1027f7u);
    c.r[7] = c.r[0];
    // 1027f9  mov edx, dword ptr [0xe0074]
    X86_AT(c, 0x1027f9u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xE0074u)));
    // 1027ff  cmp al, byte ptr [edx]
    X86_AT(c, 0x1027ffu);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[2]))), 0, 1);
    // 102801  je 0x1029b0
    X86_AT(c, 0x102801u);
    if (x86_cc(c, 4)) { goto L_1029b0; }
    X86_TICK(c, 16);
    // 102807  mov eax, dword ptr [0xe0074]
    X86_AT(c, 0x102807u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0074u)));
    // 10280c  cmp byte ptr [eax], 0x25
    X86_AT(c, 0x10280cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x25u, 0, 1);
    // 10280f  je 0x102854
    X86_AT(c, 0x10280fu);
    if (x86_cc(c, 4)) { goto L_102854; }
    X86_TICK(c, 28);
    // 102811  mov edx, dword ptr [0xe006c]
    X86_AT(c, 0x102811u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xE006Cu)));
    // 102817  mov al, 0x25
    X86_AT(c, 0x102817u);
    s8(c, 0, 0x25u);
    // 102819  mov ecx, dword ptr [0xe0074]
    X86_AT(c, 0x102819u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xE0074u)));
    // 10281f  push edi
    X86_AT(c, 0x10281fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 102820  mov edi, ecx
    X86_AT(c, 0x102820u);
    c.r[7] = c.r[1];
    // 102822  mov ecx, edx
    X86_AT(c, 0x102822u);
    c.r[1] = c.r[2];
    // 102824  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x102824u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 102826  jne 0x10282b
    X86_AT(c, 0x102826u);
    if (x86_cc(c, 5)) { goto L_10282b; }
    X86_TICK(c, 4);
    // 102828  inc ecx
    X86_AT(c, 0x102828u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 102829  sub edx, ecx
    X86_AT(c, 0x102829u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_10282b:
    X86_TICK(c, 41);
    // 10282b  pop edi
    X86_AT(c, 0x10282bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10282c  mov edi, edx
    X86_AT(c, 0x10282cu);
    c.r[7] = c.r[2];
    // 10282e  mov eax, dword ptr [0xe0074]
    X86_AT(c, 0x10282eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0074u)));
    // 102833  mov dword ptr [0xe0064], eax
    X86_AT(c, 0x102833u);
    wr32((c.sbase[3] + (uint32_t)(0xE0064u)), c.r[0]);
    // 102838  mov dword ptr [0xe0068], edi
    X86_AT(c, 0x102838u);
    wr32((c.sbase[3] + (uint32_t)(0xE0068u)), c.r[7]);
    // 10283e  add dword ptr [0xe0074], edi
    X86_AT(c, 0x10283eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE0074u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 102844  sub dword ptr [0xe006c], edi
    X86_AT(c, 0x102844u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE006Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 10284a  push 0x30
    X86_AT(c, 0x10284au);
    { uint32_t v = 0x30u; push32(c, v); }
    // 10284c  mov ecx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x10284cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 10284f  call dword ptr [ebp + 0xc]
    X86_AT(c, 0x10284fu);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, 0x102852u); x86_call(c, t); X86_RET(c, 0x102852u); }
    X86_TICK(c, 7);
    // 102852  jmp 0x1027d8
    X86_AT(c, 0x102852u);
    X86_POLL(c, 0x1027d8u); goto L_1027d8;
L_102854:
    X86_TICK(c, 6);
    // 102854  mov esi, dword ptr [0xe0074]
    X86_AT(c, 0x102854u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xE0074u)));
    // 10285a  sub ebx, ebx
    X86_AT(c, 0x10285au);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_10285c:
    X86_TICK(c, 25);
    // 10285c  inc dword ptr [0xe0074]
    X86_AT(c, 0x10285cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE0074u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 102862  mov eax, dword ptr [0xe0074]
    X86_AT(c, 0x102862u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0074u)));
    // 102867  movzx eax, byte ptr [eax]
    X86_AT(c, 0x102867u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0])));
    // 10286a  sub eax, 0x20
    X86_AT(c, 0x10286au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x20u, 0, 4); }
    // 10286d  cmp eax, 0x10
    X86_AT(c, 0x10286du);
    (void)x86_sub(c, c.r[0], 0x10u, 0, 4);
    // 102870  ja 0x1028ef
    X86_AT(c, 0x102870u);
    if (x86_cc(c, 7)) { goto L_1028ef; }
    X86_TICK(c, 7);
    // 102876  jmp dword ptr cs:[eax*4 + 0x10287e]
    X86_AT(c, 0x102876u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10287Eu)));
      switch (t) {
      case 0x1028c2u: goto L_1028c2;
      case 0x1028cbu: goto L_1028cb;
      case 0x1028d4u: goto L_1028d4;
      case 0x1028ddu: goto L_1028dd;
      case 0x1028e6u: goto L_1028e6;
      case 0x1028efu: goto L_1028ef;
      default: x86_jump(c, t); return; } }
L_1028c2:
    X86_TICK(c, 14);
    // 1028c2  or byte ptr [0xdfc48], 1
    X86_AT(c, 0x1028c2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC48u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
    // 1028c9  jmp 0x1028f1
    X86_AT(c, 0x1028c9u);
    goto L_1028f1;
L_1028cb:
    X86_TICK(c, 14);
    // 1028cb  or byte ptr [0xdfc48], 2
    X86_AT(c, 0x1028cbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC48u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 1028d2  jmp 0x1028f1
    X86_AT(c, 0x1028d2u);
    goto L_1028f1;
L_1028d4:
    X86_TICK(c, 14);
    // 1028d4  or byte ptr [0xdfc48], 4
    X86_AT(c, 0x1028d4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC48u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 1028db  jmp 0x1028f1
    X86_AT(c, 0x1028dbu);
    goto L_1028f1;
L_1028dd:
    X86_TICK(c, 14);
    // 1028dd  or byte ptr [0xdfc48], 8
    X86_AT(c, 0x1028ddu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC48u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x8u, 1)); }
    // 1028e4  jmp 0x1028f1
    X86_AT(c, 0x1028e4u);
    goto L_1028f1;
L_1028e6:
    X86_TICK(c, 14);
    // 1028e6  or byte ptr [0xdfc48], 0x10
    X86_AT(c, 0x1028e6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC48u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
    // 1028ed  jmp 0x1028f1
    X86_AT(c, 0x1028edu);
    goto L_1028f1;
L_1028ef:
    X86_TICK(c, 2);
    // 1028ef  mov bl, 1
    X86_AT(c, 0x1028efu);
    s8(c, 3, 0x1u);
L_1028f1:
    X86_TICK(c, 7);
    // 1028f1  and bl, bl
    X86_AT(c, 0x1028f1u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 1028f3  je 0x10285c
    X86_AT(c, 0x1028f3u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x10285cu); goto L_10285c; }
    X86_TICK(c, 13);
    // 1028f9  push 0
    X86_AT(c, 0x1028f9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 1028fb  push 0x46
    X86_AT(c, 0x1028fbu);
    { uint32_t v = 0x46u; push32(c, v); }
    // 1028fd  mov ecx, ebp
    X86_AT(c, 0x1028fdu);
    c.r[1] = c.r[5];
    // 1028ff  call 0x1026b8
    X86_AT(c, 0x1028ffu);
    push32(c, 0x102904u); f_001026b8(c); X86_RET(c, 0x102904u);
    X86_TICK(c, 18);
    // 102904  mov dword ptr [0xdfc4c], eax
    X86_AT(c, 0x102904u);
    wr32((c.sbase[3] + (uint32_t)(0xDFC4Cu)), c.r[0]);
    // 102909  mov eax, dword ptr [0xe0074]
    X86_AT(c, 0x102909u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0074u)));
    // 10290e  cmp byte ptr [eax], 0x2e
    X86_AT(c, 0x10290eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x2Eu, 0, 1);
    // 102911  jne 0x10294d
    X86_AT(c, 0x102911u);
    if (x86_cc(c, 5)) { goto L_10294d; }
    X86_TICK(c, 22);
    // 102913  inc dword ptr [0xe0074]
    X86_AT(c, 0x102913u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE0074u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 102919  mov eax, dword ptr [0xe0074]
    X86_AT(c, 0x102919u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0074u)));
    // 10291e  cmp byte ptr [eax], 0x2d
    X86_AT(c, 0x10291eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x2Du, 0, 1);
    // 102921  jne 0x10293d
    X86_AT(c, 0x102921u);
    if (x86_cc(c, 5)) { goto L_10293d; }
L_102923:
    X86_TICK(c, 23);
    // 102923  inc dword ptr [0xe0074]
    X86_AT(c, 0x102923u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE0074u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 102929  mov eax, dword ptr [0xe0074]
    X86_AT(c, 0x102929u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0074u)));
    // 10292e  mov al, byte ptr [eax]
    X86_AT(c, 0x10292eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 102930  mov byte ptr [ebp - 5], al
    X86_AT(c, 0x102930u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
    // 102933  cmp al, 0x30
    X86_AT(c, 0x102933u);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 102935  jb 0x10294d
    X86_AT(c, 0x102935u);
    if (x86_cc(c, 2)) { goto L_10294d; }
    X86_TICK(c, 7);
    // 102937  cmp al, 0x39
    X86_AT(c, 0x102937u);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 102939  jbe 0x102923
    X86_AT(c, 0x102939u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x102923u); goto L_102923; }
    X86_TICK(c, 7);
    // 10293b  jmp 0x10294d
    X86_AT(c, 0x10293bu);
    goto L_10294d;
L_10293d:
    X86_TICK(c, 13);
    // 10293d  push 1
    X86_AT(c, 0x10293du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 10293f  push 0x50
    X86_AT(c, 0x10293fu);
    { uint32_t v = 0x50u; push32(c, v); }
    // 102941  mov ecx, ebp
    X86_AT(c, 0x102941u);
    c.r[1] = c.r[5];
    // 102943  call 0x1026b8
    X86_AT(c, 0x102943u);
    push32(c, 0x102948u); f_001026b8(c); X86_RET(c, 0x102948u);
    X86_TICK(c, 2);
    // 102948  mov dword ptr [0xdfc50], eax
    X86_AT(c, 0x102948u);
    wr32((c.sbase[3] + (uint32_t)(0xDFC50u)), c.r[0]);
L_10294d:
    X86_TICK(c, 16);
    // 10294d  mov eax, dword ptr [0xe0074]
    X86_AT(c, 0x10294du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0074u)));
    // 102952  cmp byte ptr [eax], 0x68
    X86_AT(c, 0x102952u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x68u, 0, 1);
    // 102955  jne 0x102960
    X86_AT(c, 0x102955u);
    if (x86_cc(c, 5)) { goto L_102960; }
    X86_TICK(c, 9);
    // 102957  mov byte ptr [0xdfc54], 0
    X86_AT(c, 0x102957u);
    wr8((c.sbase[3] + (uint32_t)(0xDFC54u)), 0x0u);
    // 10295e  jmp 0x102984
    X86_AT(c, 0x10295eu);
    goto L_102984;
L_102960:
    X86_TICK(c, 16);
    // 102960  mov eax, dword ptr [0xe0074]
    X86_AT(c, 0x102960u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0074u)));
    // 102965  cmp byte ptr [eax], 0x6c
    X86_AT(c, 0x102965u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x6Cu, 0, 1);
    // 102968  jne 0x102973
    X86_AT(c, 0x102968u);
    if (x86_cc(c, 5)) { goto L_102973; }
    X86_TICK(c, 9);
    // 10296a  mov byte ptr [0xdfc54], 2
    X86_AT(c, 0x10296au);
    wr8((c.sbase[3] + (uint32_t)(0xDFC54u)), 0x2u);
    // 102971  jmp 0x102984
    X86_AT(c, 0x102971u);
    goto L_102984;
L_102973:
    X86_TICK(c, 16);
    // 102973  mov eax, dword ptr [0xe0074]
    X86_AT(c, 0x102973u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0074u)));
    // 102978  cmp byte ptr [eax], 0x4c
    X86_AT(c, 0x102978u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x4Cu, 0, 1);
    // 10297b  jne 0x10298a
    X86_AT(c, 0x10297bu);
    if (x86_cc(c, 5)) { goto L_10298a; }
    X86_TICK(c, 2);
    // 10297d  mov byte ptr [0xdfc54], 3
    X86_AT(c, 0x10297du);
    wr8((c.sbase[3] + (uint32_t)(0xDFC54u)), 0x3u);
L_102984:
    X86_TICK(c, 6);
    // 102984  inc dword ptr [0xe0074]
    X86_AT(c, 0x102984u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE0074u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_10298a:
    X86_TICK(c, 21);
    // 10298a  mov eax, dword ptr [0xe0074]
    X86_AT(c, 0x10298au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0074u)));
    // 10298f  mov al, byte ptr [eax]
    X86_AT(c, 0x10298fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 102991  push eax
    X86_AT(c, 0x102991u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 102992  mov ecx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x102992u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 102995  call dword ptr [ebp + 0xc]
    X86_AT(c, 0x102995u);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, 0x102998u); x86_call(c, t); X86_RET(c, 0x102998u); }
    X86_TICK(c, 26);
    // 102998  inc dword ptr [0xe0074]
    X86_AT(c, 0x102998u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE0074u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 10299e  mov eax, dword ptr [0xe0074]
    X86_AT(c, 0x10299eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0074u)));
    // 1029a3  sub eax, esi
    X86_AT(c, 0x1029a3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 1029a5  sub dword ptr [0xe006c], eax
    X86_AT(c, 0x1029a5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE006Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 1029ab  jmp 0x1027d8
    X86_AT(c, 0x1029abu);
    X86_POLL(c, 0x1027d8u); goto L_1027d8;
L_1029b0:
    X86_TICK(c, 28);
    // 1029b0  pop edi
    X86_AT(c, 0x1029b0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1029b1  pop esi
    X86_AT(c, 0x1029b1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1029b2  pop ebx
    X86_AT(c, 0x1029b2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 1029b3  leave 
    X86_AT(c, 0x1029b3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1029b4  ret 0xc
    X86_AT(c, 0x1029b4u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x1027c8u, "ran off the end of a function");
}
void f_001029c4(X86Cpu& c) {
    X86_TICK(c, 28);
    // 1029c4  push ebp
    X86_AT(c, 0x1029c4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 1029c5  mov ebp, esp
    X86_AT(c, 0x1029c5u);
    c.r[5] = c.r[4];
    // 1029c7  push ecx
    X86_AT(c, 0x1029c7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 1029c8  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x1029c8u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 1029cb  add dword ptr [0xdfc58], ecx
    X86_AT(c, 0x1029cbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC58u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[1], 0, 4)); }
    // 1029d1  mov eax, dword ptr [0xdfc4c]
    X86_AT(c, 0x1029d1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFC4Cu)));
    // 1029d6  cmp eax, 0xffff
    X86_AT(c, 0x1029d6u);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 1029db  je 0x1029e7
    X86_AT(c, 0x1029dbu);
    if (x86_cc(c, 4)) { goto L_1029e7; }
    X86_TICK(c, 7);
    // 1029dd  cmp ecx, eax
    X86_AT(c, 0x1029ddu);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 1029df  ja 0x1029e7
    X86_AT(c, 0x1029dfu);
    if (x86_cc(c, 7)) { goto L_1029e7; }
    X86_TICK(c, 7);
    // 1029e1  sub dword ptr [0xdfc4c], ecx
    X86_AT(c, 0x1029e1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC4Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
L_1029e7:
    X86_TICK(c, 16);
    // 1029e7  leave 
    X86_AT(c, 0x1029e7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1029e8  ret 4
    X86_AT(c, 0x1029e8u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x1029c4u, "ran off the end of a function");
}
void f_00102a00(X86Cpu& c) {
    X86_TICK(c, 25);
    // 102a00  push ebp
    X86_AT(c, 0x102a00u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 102a01  mov ebp, esp
    X86_AT(c, 0x102a01u);
    c.r[5] = c.r[4];
    // 102a03  push ecx
    X86_AT(c, 0x102a03u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 102a04  mov dword ptr [0xe00ac], 0
    X86_AT(c, 0x102a04u);
    wr32((c.sbase[3] + (uint32_t)(0xE00ACu)), 0x0u);
    // 102a0e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x102a0eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 102a11  movzx eax, byte ptr [eax + 0xc]
    X86_AT(c, 0x102a11u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)));
    // 102a15  cmp eax, 0x69
    X86_AT(c, 0x102a15u);
    (void)x86_sub(c, c.r[0], 0x69u, 0, 4);
    // 102a18  ja 0x102a32
    X86_AT(c, 0x102a18u);
    if (x86_cc(c, 7)) { goto L_102a32; }
    X86_TICK(c, 7);
    // 102a1a  cmp eax, 0x69
    X86_AT(c, 0x102a1au);
    (void)x86_sub(c, c.r[0], 0x69u, 0, 4);
    // 102a1d  je 0x102a4a
    X86_AT(c, 0x102a1du);
    if (x86_cc(c, 4)) { goto L_102a4a; }
    X86_TICK(c, 7);
    // 102a1f  cmp eax, 0x58
    X86_AT(c, 0x102a1fu);
    (void)x86_sub(c, c.r[0], 0x58u, 0, 4);
    // 102a22  je 0x102ab9
    X86_AT(c, 0x102a22u);
    if (x86_cc(c, 4)) { goto L_102ab9; }
    X86_TICK(c, 7);
    // 102a28  cmp eax, 0x64
    X86_AT(c, 0x102a28u);
    (void)x86_sub(c, c.r[0], 0x64u, 0, 4);
    // 102a2b  je 0x102a4a
    X86_AT(c, 0x102a2bu);
    if (x86_cc(c, 4)) { goto L_102a4a; }
    X86_TICK(c, 7);
    // 102a2d  jmp 0x102aed
    X86_AT(c, 0x102a2du);
    goto L_102aed;
L_102a32:
    X86_TICK(c, 7);
    // 102a32  cmp eax, 0x6f
    X86_AT(c, 0x102a32u);
    (void)x86_sub(c, c.r[0], 0x6Fu, 0, 4);
    // 102a35  je 0x102a94
    X86_AT(c, 0x102a35u);
    if (x86_cc(c, 4)) { goto L_102a94; }
    X86_TICK(c, 7);
    // 102a37  cmp eax, 0x75
    X86_AT(c, 0x102a37u);
    (void)x86_sub(c, c.r[0], 0x75u, 0, 4);
    // 102a3a  je 0x102a8b
    X86_AT(c, 0x102a3au);
    if (x86_cc(c, 4)) { goto L_102a8b; }
    X86_TICK(c, 7);
    // 102a3c  cmp eax, 0x78
    X86_AT(c, 0x102a3cu);
    (void)x86_sub(c, c.r[0], 0x78u, 0, 4);
    // 102a3f  je 0x102ab9
    X86_AT(c, 0x102a3fu);
    if (x86_cc(c, 4)) { goto L_102ab9; }
    X86_TICK(c, 7);
    // 102a45  jmp 0x102aed
    X86_AT(c, 0x102a45u);
    goto L_102aed;
L_102a4a:
    X86_TICK(c, 17);
    // 102a4a  mov byte ptr [0xe00a0], 0xa
    X86_AT(c, 0x102a4au);
    wr8((c.sbase[3] + (uint32_t)(0xE00A0u)), 0xAu);
    // 102a51  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x102a51u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 102a54  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0x102a54u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 102a57  and edx, edx
    X86_AT(c, 0x102a57u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 102a59  jge 0x102a67
    X86_AT(c, 0x102a59u);
    if (x86_cc(c, 13)) { goto L_102a67; }
    X86_TICK(c, 15);
    // 102a5b  neg dword ptr [eax + 8]
    X86_AT(c, 0x102a5bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_neg(c, v, 4)); }
    // 102a5e  mov byte ptr [0xe00a2], 0x2d
    X86_AT(c, 0x102a5eu);
    wr8((c.sbase[3] + (uint32_t)(0xE00A2u)), 0x2Du);
    // 102a65  jmp 0x102aab
    X86_AT(c, 0x102a65u);
    goto L_102aab;
L_102a67:
    X86_TICK(c, 12);
    // 102a67  test byte ptr [0xdfc48], 2
    X86_AT(c, 0x102a67u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xDFC48u))) & 0x2u, 1);
    // 102a6e  je 0x102a79
    X86_AT(c, 0x102a6eu);
    if (x86_cc(c, 4)) { goto L_102a79; }
    X86_TICK(c, 9);
    // 102a70  mov byte ptr [0xe00a2], 0x2b
    X86_AT(c, 0x102a70u);
    wr8((c.sbase[3] + (uint32_t)(0xE00A2u)), 0x2Bu);
    // 102a77  jmp 0x102aab
    X86_AT(c, 0x102a77u);
    goto L_102aab;
L_102a79:
    X86_TICK(c, 12);
    // 102a79  test byte ptr [0xdfc48], 4
    X86_AT(c, 0x102a79u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xDFC48u))) & 0x4u, 1);
    // 102a80  je 0x102aed
    X86_AT(c, 0x102a80u);
    if (x86_cc(c, 4)) { goto L_102aed; }
    X86_TICK(c, 9);
    // 102a82  mov byte ptr [0xe00a2], 0x20
    X86_AT(c, 0x102a82u);
    wr8((c.sbase[3] + (uint32_t)(0xE00A2u)), 0x20u);
    // 102a89  jmp 0x102aab
    X86_AT(c, 0x102a89u);
    goto L_102aab;
L_102a8b:
    X86_TICK(c, 9);
    // 102a8b  mov byte ptr [0xe00a0], 0xa
    X86_AT(c, 0x102a8bu);
    wr8((c.sbase[3] + (uint32_t)(0xE00A0u)), 0xAu);
    // 102a92  jmp 0x102aed
    X86_AT(c, 0x102a92u);
    goto L_102aed;
L_102a94:
    X86_TICK(c, 14);
    // 102a94  mov byte ptr [0xe00a0], 8
    X86_AT(c, 0x102a94u);
    wr8((c.sbase[3] + (uint32_t)(0xE00A0u)), 0x8u);
    // 102a9b  test byte ptr [0xdfc48], 8
    X86_AT(c, 0x102a9bu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xDFC48u))) & 0x8u, 1);
    // 102aa2  je 0x102aed
    X86_AT(c, 0x102aa2u);
    if (x86_cc(c, 4)) { goto L_102aed; }
    X86_TICK(c, 2);
    // 102aa4  mov byte ptr [0xe00a2], 0x30
    X86_AT(c, 0x102aa4u);
    wr8((c.sbase[3] + (uint32_t)(0xE00A2u)), 0x30u);
L_102aab:
    X86_TICK(c, 11);
    // 102aab  mov dword ptr [0xe00ac], 1
    X86_AT(c, 0x102aabu);
    wr32((c.sbase[3] + (uint32_t)(0xE00ACu)), 0x1u);
    // 102ab5  push 1
    X86_AT(c, 0x102ab5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 102ab7  jmp 0x102ae6
    X86_AT(c, 0x102ab7u);
    goto L_102ae6;
L_102ab9:
    X86_TICK(c, 14);
    // 102ab9  mov byte ptr [0xe00a0], 0x10
    X86_AT(c, 0x102ab9u);
    wr8((c.sbase[3] + (uint32_t)(0xE00A0u)), 0x10u);
    // 102ac0  test byte ptr [0xdfc48], 8
    X86_AT(c, 0x102ac0u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xDFC48u))) & 0x8u, 1);
    // 102ac7  je 0x102aed
    X86_AT(c, 0x102ac7u);
    if (x86_cc(c, 4)) { goto L_102aed; }
    X86_TICK(c, 18);
    // 102ac9  mov byte ptr [0xe00a2], 0x30
    X86_AT(c, 0x102ac9u);
    wr8((c.sbase[3] + (uint32_t)(0xE00A2u)), 0x30u);
    // 102ad0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x102ad0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 102ad3  mov al, byte ptr [eax + 0xc]
    X86_AT(c, 0x102ad3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu))));
    // 102ad6  mov byte ptr [0xe00a3], al
    X86_AT(c, 0x102ad6u);
    wr8((c.sbase[3] + (uint32_t)(0xE00A3u)), g8(c, 0));
    // 102adb  mov eax, 2
    X86_AT(c, 0x102adbu);
    c.r[0] = 0x2u;
    // 102ae0  mov dword ptr [0xe00ac], eax
    X86_AT(c, 0x102ae0u);
    wr32((c.sbase[3] + (uint32_t)(0xE00ACu)), c.r[0]);
    // 102ae5  push eax
    X86_AT(c, 0x102ae5u);
    { uint32_t v = c.r[0]; push32(c, v); }
L_102ae6:
    X86_TICK(c, 9);
    // 102ae6  mov ecx, ebp
    X86_AT(c, 0x102ae6u);
    c.r[1] = c.r[5];
    // 102ae8  call 0x1029c4
    X86_AT(c, 0x102ae8u);
    push32(c, 0x102aedu); f_001029c4(c); X86_RET(c, 0x102aedu);
L_102aed:
    X86_TICK(c, 16);
    // 102aed  leave 
    X86_AT(c, 0x102aedu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 102aee  ret 
    X86_AT(c, 0x102aeeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x102a00u, "ran off the end of a function");
}
void f_00102aed(X86Cpu& c) {
    X86_TICK(c, 16);
    // 102aed  leave 
    X86_AT(c, 0x102aedu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 102aee  ret 
    X86_AT(c, 0x102aeeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x102aedu, "ran off the end of a function");
}
void f_00102af8(X86Cpu& c) {
    X86_TICK(c, 17);
    // 102af8  push ebp
    X86_AT(c, 0x102af8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 102af9  mov ebp, esp
    X86_AT(c, 0x102af9u);
    c.r[5] = c.r[4];
    // 102afb  push ecx
    X86_AT(c, 0x102afbu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 102afc  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x102afcu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 102aff  cmp ecx, 0xa
    X86_AT(c, 0x102affu);
    (void)x86_sub(c, c.r[1], 0xAu, 0, 4);
    // 102b02  jge 0x102b09
    X86_AT(c, 0x102b02u);
    if (x86_cc(c, 13)) { goto L_102b09; }
    X86_TICK(c, 9);
    // 102b04  add ecx, 0x30
    X86_AT(c, 0x102b04u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x30u, 0, 4); }
    // 102b07  jmp 0x102b1d
    X86_AT(c, 0x102b07u);
    goto L_102b1d;
L_102b09:
    X86_TICK(c, 20);
    // 102b09  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x102b09u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 102b0c  mov eax, dword ptr [eax - 4]
    X86_AT(c, 0x102b0cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 102b0f  cmp byte ptr [eax + 0xc], 0x78
    X86_AT(c, 0x102b0fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu))), 0x78u, 0, 1);
    // 102b13  jne 0x102b1a
    X86_AT(c, 0x102b13u);
    if (x86_cc(c, 5)) { goto L_102b1a; }
    X86_TICK(c, 9);
    // 102b15  add ecx, 0x57
    X86_AT(c, 0x102b15u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x57u, 0, 4); }
    // 102b18  jmp 0x102b1d
    X86_AT(c, 0x102b18u);
    goto L_102b1d;
L_102b1a:
    X86_TICK(c, 2);
    // 102b1a  add ecx, 0x37
    X86_AT(c, 0x102b1au);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x37u, 0, 4); }
L_102b1d:
    X86_TICK(c, 30);
    // 102b1d  mov eax, ecx
    X86_AT(c, 0x102b1du);
    c.r[0] = c.r[1];
    // 102b1f  mov edx, dword ptr [0xe0098]
    X86_AT(c, 0x102b1fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xE0098u)));
    // 102b25  mov byte ptr [edx + 0xe0077], al
    X86_AT(c, 0x102b25u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xE0077u)), g8(c, 0));
    // 102b2b  dec dword ptr [0xe0098]
    X86_AT(c, 0x102b2bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE0098u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 102b31  leave 
    X86_AT(c, 0x102b31u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 102b32  ret 4
    X86_AT(c, 0x102b32u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x102af8u, "ran off the end of a function");
}
void f_00102b44(X86Cpu& c) {
    X86_TICK(c, 27);
    // 102b44  push ebp
    X86_AT(c, 0x102b44u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 102b45  mov ebp, esp
    X86_AT(c, 0x102b45u);
    c.r[5] = c.r[4];
    // 102b47  push ecx
    X86_AT(c, 0x102b47u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 102b48  push ebx
    X86_AT(c, 0x102b48u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 102b49  push edi
    X86_AT(c, 0x102b49u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 102b4a  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x102b4au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 102b4d  mov edi, dword ptr [eax + 8]
    X86_AT(c, 0x102b4du);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 102b50  mov dword ptr [0xe0098], 0x1e
    X86_AT(c, 0x102b50u);
    wr32((c.sbase[3] + (uint32_t)(0xE0098u)), 0x1Eu);
    // 102b5a  and edi, edi
    X86_AT(c, 0x102b5au);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 102b5c  jbe 0x102b81
    X86_AT(c, 0x102b5cu);
    if (x86_cc(c, 6)) { goto L_102b81; }
    X86_TICK(c, 7);
    // 102b5e  jmp 0x102b7b
    X86_AT(c, 0x102b5eu);
    goto L_102b7b;
L_102b60:
    X86_TICK(c, 69);
    // 102b60  movzx ecx, byte ptr [0xe00a0]
    X86_AT(c, 0x102b60u);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(0xE00A0u)));
    // 102b67  mov eax, edi
    X86_AT(c, 0x102b67u);
    c.r[0] = c.r[7];
    // 102b69  sub edx, edx
    X86_AT(c, 0x102b69u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 102b6b  div ecx
    X86_AT(c, 0x102b6bu);
    x86_div(c, c.r[1], 4, 0x102b6bu);
    // 102b6d  mov ebx, edx
    X86_AT(c, 0x102b6du);
    c.r[3] = c.r[2];
    // 102b6f  xchg edi, eax
    X86_AT(c, 0x102b6fu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 102b70  movzx ebx, bl
    X86_AT(c, 0x102b70u);
    c.r[3] = g8(c, 3);
    // 102b73  push ebx
    X86_AT(c, 0x102b73u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 102b74  mov ecx, ebp
    X86_AT(c, 0x102b74u);
    c.r[1] = c.r[5];
    // 102b76  call 0x102af8
    X86_AT(c, 0x102b76u);
    push32(c, 0x102b7bu); f_00102af8(c); X86_RET(c, 0x102b7bu);
L_102b7b:
    X86_TICK(c, 7);
    // 102b7b  and edi, edi
    X86_AT(c, 0x102b7bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 102b7d  ja 0x102b60
    X86_AT(c, 0x102b7du);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x102b60u); goto L_102b60; }
    X86_TICK(c, 7);
    // 102b7f  jmp 0x102b93
    X86_AT(c, 0x102b7fu);
    goto L_102b93;
L_102b81:
    X86_TICK(c, 12);
    // 102b81  mov eax, dword ptr [0xe0098]
    X86_AT(c, 0x102b81u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0098u)));
    // 102b86  mov byte ptr [eax + 0xe0077], 0x30
    X86_AT(c, 0x102b86u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xE0077u)), 0x30u);
    // 102b8d  dec dword ptr [0xe0098]
    X86_AT(c, 0x102b8du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE0098u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_102b93:
    X86_TICK(c, 40);
    // 102b93  inc dword ptr [0xe0098]
    X86_AT(c, 0x102b93u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE0098u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 102b99  mov eax, 0x1f
    X86_AT(c, 0x102b99u);
    c.r[0] = 0x1Fu;
    // 102b9e  sub eax, dword ptr [0xe0098]
    X86_AT(c, 0x102b9eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xE0098u))), 0, 4); }
    // 102ba4  mov dword ptr [0xe009c], eax
    X86_AT(c, 0x102ba4u);
    wr32((c.sbase[3] + (uint32_t)(0xE009Cu)), c.r[0]);
    // 102ba9  pop edi
    X86_AT(c, 0x102ba9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 102baa  pop ebx
    X86_AT(c, 0x102baau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 102bab  leave 
    X86_AT(c, 0x102babu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 102bac  ret 
    X86_AT(c, 0x102bacu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x102b44u, "ran off the end of a function");
}
void f_00102bb4(X86Cpu& c) {
    X86_TICK(c, 18);
    // 102bb4  push ebp
    X86_AT(c, 0x102bb4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 102bb5  mov ebp, esp
    X86_AT(c, 0x102bb5u);
    c.r[5] = c.r[4];
    // 102bb7  push ecx
    X86_AT(c, 0x102bb7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 102bb8  push dword ptr [0xe00a8]
    X86_AT(c, 0x102bb8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE00A8u))); push32(c, v); }
    // 102bbe  call 0x10264c
    X86_AT(c, 0x102bbeu);
    push32(c, 0x102bc3u); f_0010264c(c); X86_RET(c, 0x102bc3u);
    X86_TICK(c, 22);
    // 102bc3  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x102bc3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 102bc6  mov byte ptr [eax - 5], 0
    X86_AT(c, 0x102bc6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFBu)), 0x0u);
    // 102bca  leave 
    X86_AT(c, 0x102bcau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 102bcb  ret 
    X86_AT(c, 0x102bcbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x102bb4u, "ran off the end of a function");
}
void f_00102be0(X86Cpu& c) {
    X86_TICK(c, 24);
    // 102be0  push ebp
    X86_AT(c, 0x102be0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 102be1  mov ebp, esp
    X86_AT(c, 0x102be1u);
    c.r[5] = c.r[4];
    // 102be3  push ecx
    X86_AT(c, 0x102be3u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 102be4  push eax
    X86_AT(c, 0x102be4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 102be5  push ebx
    X86_AT(c, 0x102be5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 102be6  push edi
    X86_AT(c, 0x102be6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 102be7  cmp dword ptr [0xdfc50], 0
    X86_AT(c, 0x102be7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDFC50u))), 0x0u, 0, 4);
    // 102bee  jne 0x102c02
    X86_AT(c, 0x102beeu);
    if (x86_cc(c, 5)) { goto L_102c02; }
    X86_TICK(c, 12);
    // 102bf0  cmp dword ptr [ebp + 8], 0
    X86_AT(c, 0x102bf0u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 4);
    // 102bf4  jne 0x102c02
    X86_AT(c, 0x102bf4u);
    if (x86_cc(c, 5)) { goto L_102c02; }
    X86_TICK(c, 9);
    // 102bf6  push 0
    X86_AT(c, 0x102bf6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 102bf8  call 0x10264c
    X86_AT(c, 0x102bf8u);
    push32(c, 0x102bfdu); f_0010264c(c); X86_RET(c, 0x102bfdu);
    X86_TICK(c, 7);
    // 102bfd  jmp 0x102d28
    X86_AT(c, 0x102bfdu);
    goto L_102d28;
L_102c02:
    X86_TICK(c, 9);
    // 102c02  mov ecx, ebp
    X86_AT(c, 0x102c02u);
    c.r[1] = c.r[5];
    // 102c04  call 0x102a00
    X86_AT(c, 0x102c04u);
    push32(c, 0x102c09u); f_00102a00(c); X86_RET(c, 0x102c09u);
    X86_TICK(c, 9);
    // 102c09  mov ecx, ebp
    X86_AT(c, 0x102c09u);
    c.r[1] = c.r[5];
    // 102c0b  call 0x102b44
    X86_AT(c, 0x102c0bu);
    push32(c, 0x102c10u); f_00102b44(c); X86_RET(c, 0x102c10u);
    X86_TICK(c, 12);
    // 102c10  cmp dword ptr [0xdfc50], 0xffff
    X86_AT(c, 0x102c10u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDFC50u))), 0xFFFFu, 0, 4);
    // 102c1a  jne 0x102c28
    X86_AT(c, 0x102c1au);
    if (x86_cc(c, 5)) { goto L_102c28; }
    X86_TICK(c, 13);
    // 102c1c  mov eax, dword ptr [0xe009c]
    X86_AT(c, 0x102c1cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE009Cu)));
    // 102c21  mov dword ptr [0xe00a8], eax
    X86_AT(c, 0x102c21u);
    wr32((c.sbase[3] + (uint32_t)(0xE00A8u)), c.r[0]);
    // 102c26  jmp 0x102c3e
    X86_AT(c, 0x102c26u);
    goto L_102c3e;
L_102c28:
    X86_TICK(c, 15);
    // 102c28  mov eax, dword ptr [0xdfc50]
    X86_AT(c, 0x102c28u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFC50u)));
    // 102c2d  mov edx, dword ptr [0xe009c]
    X86_AT(c, 0x102c2du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xE009Cu)));
    // 102c33  cmp eax, edx
    X86_AT(c, 0x102c33u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 102c35  jb 0x102c38
    X86_AT(c, 0x102c35u);
    if (x86_cc(c, 2)) { goto L_102c38; }
    X86_TICK(c, 3);
    // 102c37  xchg edx, eax
    X86_AT(c, 0x102c37u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_102c38:
    X86_TICK(c, 2);
    // 102c38  mov dword ptr [0xe00a8], edx
    X86_AT(c, 0x102c38u);
    wr32((c.sbase[3] + (uint32_t)(0xE00A8u)), c.r[2]);
L_102c3e:
    X86_TICK(c, 11);
    // 102c3e  mov eax, dword ptr [0xdfc4c]
    X86_AT(c, 0x102c3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFC4Cu)));
    // 102c43  cmp eax, 0xffff
    X86_AT(c, 0x102c43u);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 102c48  je 0x102c56
    X86_AT(c, 0x102c48u);
    if (x86_cc(c, 4)) { goto L_102c56; }
    X86_TICK(c, 11);
    // 102c4a  cmp eax, dword ptr [0xe00a8]
    X86_AT(c, 0x102c4au);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xE00A8u))), 0, 4);
    // 102c50  jbe 0x102c56
    X86_AT(c, 0x102c50u);
    if (x86_cc(c, 6)) { goto L_102c56; }
    X86_TICK(c, 9);
    // 102c52  mov bl, 1
    X86_AT(c, 0x102c52u);
    s8(c, 3, 0x1u);
    // 102c54  jmp 0x102c58
    X86_AT(c, 0x102c54u);
    goto L_102c58;
L_102c56:
    X86_TICK(c, 2);
    // 102c56  sub ebx, ebx
    X86_AT(c, 0x102c56u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_102c58:
    X86_TICK(c, 9);
    // 102c58  mov byte ptr [ebp - 5], bl
    X86_AT(c, 0x102c58u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 3));
    // 102c5b  and bl, bl
    X86_AT(c, 0x102c5bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 102c5d  je 0x102c78
    X86_AT(c, 0x102c5du);
    if (x86_cc(c, 4)) { goto L_102c78; }
    X86_TICK(c, 12);
    // 102c5f  test byte ptr [0xdfc48], 1
    X86_AT(c, 0x102c5fu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xDFC48u))) & 0x1u, 1);
    // 102c66  jne 0x102c78
    X86_AT(c, 0x102c66u);
    if (x86_cc(c, 5)) { goto L_102c78; }
    X86_TICK(c, 12);
    // 102c68  test byte ptr [0xdfc48], 0x10
    X86_AT(c, 0x102c68u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xDFC48u))) & 0x10u, 1);
    // 102c6f  jne 0x102c78
    X86_AT(c, 0x102c6fu);
    if (x86_cc(c, 5)) { goto L_102c78; }
    X86_TICK(c, 9);
    // 102c71  mov ecx, ebp
    X86_AT(c, 0x102c71u);
    c.r[1] = c.r[5];
    // 102c73  call 0x102bb4
    X86_AT(c, 0x102c73u);
    push32(c, 0x102c78u); f_00102bb4(c); X86_RET(c, 0x102c78u);
L_102c78:
    X86_TICK(c, 11);
    // 102c78  mov eax, dword ptr [0xe00ac]
    X86_AT(c, 0x102c78u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE00ACu)));
    // 102c7d  and eax, eax
    X86_AT(c, 0x102c7du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 102c7f  je 0x102c93
    X86_AT(c, 0x102c7fu);
    if (x86_cc(c, 4)) { goto L_102c93; }
    X86_TICK(c, 15);
    // 102c81  push eax
    X86_AT(c, 0x102c81u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 102c82  push 0xe00a2
    X86_AT(c, 0x102c82u);
    { uint32_t v = 0xE00A2u; push32(c, v); }
    // 102c87  mov ecx, dword ptr [0xdfc60]
    X86_AT(c, 0x102c87u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xDFC60u)));
    // 102c8d  call dword ptr [0xdfc5c]
    X86_AT(c, 0x102c8du);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xDFC5Cu))); push32(c, 0x102c93u); x86_call(c, t); X86_RET(c, 0x102c93u); }
L_102c93:
    X86_TICK(c, 12);
    // 102c93  cmp byte ptr [ebp - 5], 0
    X86_AT(c, 0x102c93u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0x0u, 0, 1);
    // 102c97  je 0x102ca9
    X86_AT(c, 0x102c97u);
    if (x86_cc(c, 4)) { goto L_102ca9; }
    X86_TICK(c, 12);
    // 102c99  test byte ptr [0xdfc48], 1
    X86_AT(c, 0x102c99u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xDFC48u))) & 0x1u, 1);
    // 102ca0  jne 0x102ca9
    X86_AT(c, 0x102ca0u);
    if (x86_cc(c, 5)) { goto L_102ca9; }
    X86_TICK(c, 9);
    // 102ca2  mov ecx, ebp
    X86_AT(c, 0x102ca2u);
    c.r[1] = c.r[5];
    // 102ca4  call 0x102bb4
    X86_AT(c, 0x102ca4u);
    push32(c, 0x102ca9u); f_00102bb4(c); X86_RET(c, 0x102ca9u);
L_102ca9:
    X86_TICK(c, 11);
    // 102ca9  mov eax, dword ptr [0xdfc50]
    X86_AT(c, 0x102ca9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFC50u)));
    // 102cae  cmp eax, 0xffff
    X86_AT(c, 0x102caeu);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 102cb3  je 0x102cd5
    X86_AT(c, 0x102cb3u);
    if (x86_cc(c, 4)) { goto L_102cd5; }
    X86_TICK(c, 11);
    // 102cb5  mov edx, dword ptr [0xe009c]
    X86_AT(c, 0x102cb5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xE009Cu)));
    // 102cbb  cmp eax, edx
    X86_AT(c, 0x102cbbu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 102cbd  jbe 0x102cd5
    X86_AT(c, 0x102cbdu);
    if (x86_cc(c, 6)) { goto L_102cd5; }
    X86_TICK(c, 23);
    // 102cbf  xchg edi, eax
    X86_AT(c, 0x102cbfu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 102cc0  sub edi, edx
    X86_AT(c, 0x102cc0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[2], 0, 4); }
    // 102cc2  add dword ptr [0xdfc58], edi
    X86_AT(c, 0x102cc2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC58u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 102cc8  push edi
    X86_AT(c, 0x102cc8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 102cc9  push 0xdfc64
    X86_AT(c, 0x102cc9u);
    { uint32_t v = 0xDFC64u; push32(c, v); }
    // 102cce  call 0x102604
    X86_AT(c, 0x102cceu);
    push32(c, 0x102cd3u); f_00102604(c); X86_RET(c, 0x102cd3u);
    X86_TICK(c, 7);
    // 102cd3  jmp 0x102cf8
    X86_AT(c, 0x102cd3u);
    goto L_102cf8;
L_102cd5:
    X86_TICK(c, 12);
    // 102cd5  cmp dword ptr [0xdfc50], 0
    X86_AT(c, 0x102cd5u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDFC50u))), 0x0u, 0, 4);
    // 102cdc  jne 0x102cf8
    X86_AT(c, 0x102cdcu);
    if (x86_cc(c, 5)) { goto L_102cf8; }
    X86_TICK(c, 12);
    // 102cde  cmp dword ptr [ebp + 8], 0
    X86_AT(c, 0x102cdeu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 4);
    // 102ce2  jne 0x102cf8
    X86_AT(c, 0x102ce2u);
    if (x86_cc(c, 5)) { goto L_102cf8; }
    X86_TICK(c, 4);
    // 102ce4  mov dword ptr [0xe0098], 0x1f
    X86_AT(c, 0x102ce4u);
    wr32((c.sbase[3] + (uint32_t)(0xE0098u)), 0x1Fu);
    // 102cee  mov dword ptr [0xe009c], 0
    X86_AT(c, 0x102ceeu);
    wr32((c.sbase[3] + (uint32_t)(0xE009Cu)), 0x0u);
L_102cf8:
    X86_TICK(c, 32);
    // 102cf8  mov eax, dword ptr [0xe009c]
    X86_AT(c, 0x102cf8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE009Cu)));
    // 102cfd  add dword ptr [0xdfc58], eax
    X86_AT(c, 0x102cfdu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC58u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 102d03  push eax
    X86_AT(c, 0x102d03u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 102d04  mov eax, dword ptr [0xe0098]
    X86_AT(c, 0x102d04u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0098u)));
    // 102d09  add eax, 0xe0077
    X86_AT(c, 0x102d09u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xE0077u, 0, 4); }
    // 102d0e  push eax
    X86_AT(c, 0x102d0eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 102d0f  mov ecx, dword ptr [0xdfc60]
    X86_AT(c, 0x102d0fu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xDFC60u)));
    // 102d15  call dword ptr [0xdfc5c]
    X86_AT(c, 0x102d15u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xDFC5Cu))); push32(c, 0x102d1bu); x86_call(c, t); X86_RET(c, 0x102d1bu); }
    X86_TICK(c, 12);
    // 102d1b  cmp byte ptr [ebp - 5], 0
    X86_AT(c, 0x102d1bu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0x0u, 0, 1);
    // 102d1f  je 0x102d28
    X86_AT(c, 0x102d1fu);
    if (x86_cc(c, 4)) { goto L_102d28; }
    X86_TICK(c, 9);
    // 102d21  mov ecx, ebp
    X86_AT(c, 0x102d21u);
    c.r[1] = c.r[5];
    // 102d23  call 0x102bb4
    X86_AT(c, 0x102d23u);
    push32(c, 0x102d28u); f_00102bb4(c); X86_RET(c, 0x102d28u);
L_102d28:
    X86_TICK(c, 24);
    // 102d28  pop edi
    X86_AT(c, 0x102d28u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 102d29  pop ebx
    X86_AT(c, 0x102d29u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 102d2a  leave 
    X86_AT(c, 0x102d2au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 102d2b  ret 8
    X86_AT(c, 0x102d2bu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x102be0u, "ran off the end of a function");
}
void f_00102d3c(X86Cpu& c) {
    X86_TICK(c, 25);
    // 102d3c  push ebp
    X86_AT(c, 0x102d3cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 102d3d  mov ebp, esp
    X86_AT(c, 0x102d3du);
    c.r[5] = c.r[4];
    // 102d3f  push ecx
    X86_AT(c, 0x102d3fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 102d40  push esi
    X86_AT(c, 0x102d40u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 102d41  push edi
    X86_AT(c, 0x102d41u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 102d42  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x102d42u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 102d45  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x102d45u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 102d48  jmp 0x102d6a
    X86_AT(c, 0x102d48u);
    goto L_102d6a;
L_102d4a:
    X86_TICK(c, 14);
    // 102d4a  mov ecx, edi
    X86_AT(c, 0x102d4au);
    c.r[1] = c.r[7];
    // 102d4c  and ecx, 0xf
    X86_AT(c, 0x102d4cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0xFu, 4); }
    // 102d52  shr edi, 4
    X86_AT(c, 0x102d52u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[7] = r; }
    // 102d55  cmp ecx, 0xa
    X86_AT(c, 0x102d55u);
    (void)x86_sub(c, c.r[1], 0xAu, 0, 4);
    // 102d58  jae 0x102d5f
    X86_AT(c, 0x102d58u);
    if (x86_cc(c, 3)) { goto L_102d5f; }
    X86_TICK(c, 9);
    // 102d5a  lea eax, [ecx + 0x30]
    X86_AT(c, 0x102d5au);
    c.r[0] = (uint32_t)(c.r[1] + 0x30u);
    // 102d5d  jmp 0x102d62
    X86_AT(c, 0x102d5du);
    goto L_102d62;
L_102d5f:
    X86_TICK(c, 2);
    // 102d5f  lea eax, [ecx + 0x57]
    X86_AT(c, 0x102d5fu);
    c.r[0] = (uint32_t)(c.r[1] + 0x57u);
L_102d62:
    X86_TICK(c, 8);
    // 102d62  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x102d62u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 102d65  mov byte ptr [edx + esi*1 - 0xf], al
    X86_AT(c, 0x102d65u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] + 0xFFFFFFF1u)), g8(c, 0));
    // 102d69  dec esi
    X86_AT(c, 0x102d69u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_102d6a:
    X86_TICK(c, 7);
    // 102d6a  and edi, edi
    X86_AT(c, 0x102d6au);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 102d6c  ja 0x102d4a
    X86_AT(c, 0x102d6cu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x102d4au); goto L_102d4a; }
    X86_TICK(c, 24);
    // 102d6e  pop edi
    X86_AT(c, 0x102d6eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 102d6f  pop esi
    X86_AT(c, 0x102d6fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 102d70  leave 
    X86_AT(c, 0x102d70u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 102d71  ret 8
    X86_AT(c, 0x102d71u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x102d3cu, "ran off the end of a function");
}
void f_00102d84(X86Cpu& c) {
    X86_TICK(c, 66);
    // 102d84  push ebp
    X86_AT(c, 0x102d84u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 102d85  mov ebp, esp
    X86_AT(c, 0x102d85u);
    c.r[5] = c.r[4];
    // 102d87  push ecx
    X86_AT(c, 0x102d87u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 102d88  sub esp, 0xc
    X86_AT(c, 0x102d88u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 102d8b  push ebx
    X86_AT(c, 0x102d8bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 102d8c  push esi
    X86_AT(c, 0x102d8cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 102d8d  push edi
    X86_AT(c, 0x102d8du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 102d8e  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x102d8eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 102d91  mov eax, 0x30303030
    X86_AT(c, 0x102d91u);
    c.r[0] = 0x30303030u;
    // 102d96  lea ecx, [ebp - 0xe]
    X86_AT(c, 0x102d96u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF2u);
    // 102d99  push edi
    X86_AT(c, 0x102d99u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 102d9a  mov edi, ecx
    X86_AT(c, 0x102d9au);
    c.r[7] = c.r[1];
    // 102d9c  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x102d9cu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 102d9d  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x102d9du);
    x86_string(c, 2, 4, 0, 4, 3);
    // 102d9e  stosw word ptr es:[edi], ax
    X86_AT(c, 0x102d9eu);
    x86_string(c, 2, 2, 0, 4, 3);
    // 102da0  pop edi
    X86_AT(c, 0x102da0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 102da1  mov ebx, 8
    X86_AT(c, 0x102da1u);
    c.r[3] = 0x8u;
    // 102da6  push ebx
    X86_AT(c, 0x102da6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 102da7  push edi
    X86_AT(c, 0x102da7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 102da8  mov ecx, ebp
    X86_AT(c, 0x102da8u);
    c.r[1] = c.r[5];
    // 102daa  call 0x102d3c
    X86_AT(c, 0x102daau);
    push32(c, 0x102dafu); f_00102d3c(c); X86_RET(c, 0x102dafu);
    X86_TICK(c, 24);
    // 102daf  add dword ptr [0xdfc58], ebx
    X86_AT(c, 0x102dafu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC58u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[3], 0, 4)); }
    // 102db5  push ebx
    X86_AT(c, 0x102db5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 102db6  lea eax, [ebp - 0xe]
    X86_AT(c, 0x102db6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF2u);
    // 102db9  push eax
    X86_AT(c, 0x102db9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 102dba  mov ecx, dword ptr [0xdfc60]
    X86_AT(c, 0x102dbau);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xDFC60u)));
    // 102dc0  call dword ptr [0xdfc5c]
    X86_AT(c, 0x102dc0u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xDFC5Cu))); push32(c, 0x102dc6u); x86_call(c, t); X86_RET(c, 0x102dc6u); }
    X86_TICK(c, 28);
    // 102dc6  pop edi
    X86_AT(c, 0x102dc6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 102dc7  pop esi
    X86_AT(c, 0x102dc7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 102dc8  pop ebx
    X86_AT(c, 0x102dc8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 102dc9  leave 
    X86_AT(c, 0x102dc9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 102dca  ret 4
    X86_AT(c, 0x102dcau);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x102d84u, "ran off the end of a function");
}
void f_00102dd8(X86Cpu& c) {
    X86_TICK(c, 32);
    // 102dd8  push ebp
    X86_AT(c, 0x102dd8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 102dd9  mov ebp, esp
    X86_AT(c, 0x102dd9u);
    c.r[5] = c.r[4];
    // 102ddb  push edi
    X86_AT(c, 0x102ddbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 102ddc  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x102ddcu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 102ddf  sub eax, eax
    X86_AT(c, 0x102ddfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 102de1  mov dword ptr [0xdfc58], eax
    X86_AT(c, 0x102de1u);
    wr32((c.sbase[3] + (uint32_t)(0xDFC58u)), c.r[0]);
    // 102de6  mov edx, 0x7fffffff
    X86_AT(c, 0x102de6u);
    c.r[2] = 0x7FFFFFFFu;
    // 102deb  push edi
    X86_AT(c, 0x102debu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 102dec  mov ecx, edx
    X86_AT(c, 0x102decu);
    c.r[1] = c.r[2];
    // 102dee  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x102deeu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 102df0  jne 0x102df5
    X86_AT(c, 0x102df0u);
    if (x86_cc(c, 5)) { goto L_102df5; }
    X86_TICK(c, 4);
    // 102df2  inc ecx
    X86_AT(c, 0x102df2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 102df3  sub edx, ecx
    X86_AT(c, 0x102df3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_102df5:
    X86_TICK(c, 27);
    // 102df5  pop edi
    X86_AT(c, 0x102df5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 102df6  mov dword ptr [0xe006c], edx
    X86_AT(c, 0x102df6u);
    wr32((c.sbase[3] + (uint32_t)(0xE006Cu)), c.r[2]);
    // 102dfc  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x102dfcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 102dff  mov dword ptr [0xe0060], eax
    X86_AT(c, 0x102dffu);
    wr32((c.sbase[3] + (uint32_t)(0xE0060u)), c.r[0]);
    // 102e04  push ebp
    X86_AT(c, 0x102e04u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 102e05  push 0x102e20
    X86_AT(c, 0x102e05u);
    { uint32_t v = 0x102E20u; push32(c, v); }
    // 102e0a  push edi
    X86_AT(c, 0x102e0au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 102e0b  mov ecx, ebp
    X86_AT(c, 0x102e0bu);
    c.r[1] = c.r[5];
    // 102e0d  call 0x1027c8
    X86_AT(c, 0x102e0du);
    push32(c, 0x102e12u); f_001027c8(c); X86_RET(c, 0x102e12u);
    X86_TICK(c, 20);
    // 102e12  pop edi
    X86_AT(c, 0x102e12u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 102e13  leave 
    X86_AT(c, 0x102e13u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 102e14  ret 8
    X86_AT(c, 0x102e14u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x102dd8u, "ran off the end of a function");
}
void f_00102e20(X86Cpu& c) {
    X86_TICK(c, 28);
    // 102e20  push ebp
    X86_AT(c, 0x102e20u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 102e21  mov ebp, esp
    X86_AT(c, 0x102e21u);
    c.r[5] = c.r[4];
    // 102e23  push ecx
    X86_AT(c, 0x102e23u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 102e24  sub esp, 8
    X86_AT(c, 0x102e24u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 102e27  push ebx
    X86_AT(c, 0x102e27u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 102e28  push esi
    X86_AT(c, 0x102e28u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 102e29  push edi
    X86_AT(c, 0x102e29u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 102e2a  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x102e2au);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 102e2d  movzx eax, bl
    X86_AT(c, 0x102e2du);
    c.r[0] = g8(c, 3);
    // 102e30  cmp eax, 0x25
    X86_AT(c, 0x102e30u);
    (void)x86_sub(c, c.r[0], 0x25u, 0, 4);
    // 102e33  je 0x102ff9
    X86_AT(c, 0x102e33u);
    if (x86_cc(c, 4)) { goto L_102ff9; }
    X86_TICK(c, 7);
    // 102e39  cmp eax, 0x30
    X86_AT(c, 0x102e39u);
    (void)x86_sub(c, c.r[0], 0x30u, 0, 4);
    // 102e3c  je 0x102f26
    X86_AT(c, 0x102e3cu);
    if (x86_cc(c, 4)) { goto L_102f26; }
    X86_TICK(c, 9);
    // 102e42  sub eax, 0x45
    X86_AT(c, 0x102e42u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x45u, 0, 4); }
    // 102e45  cmp eax, 0x33
    X86_AT(c, 0x102e45u);
    (void)x86_sub(c, c.r[0], 0x33u, 0, 4);
    // 102e48  ja 0x1030b6
    X86_AT(c, 0x102e48u);
    if (x86_cc(c, 7)) { goto L_1030b6; }
    X86_TICK(c, 7);
    // 102e4e  jmp dword ptr cs:[eax*4 + 0x102e56]
    X86_AT(c, 0x102e4eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x102E56u)));
      switch (t) {
      case 0x102f49u: goto L_102f49;
      case 0x102f78u: goto L_102f78;
      case 0x102fbcu: goto L_102fbc;
      case 0x102fdeu: goto L_102fde;
      case 0x103039u: goto L_103039;
      case 0x10304cu: goto L_10304c;
      case 0x1030b6u: goto L_1030b6;
      default: x86_jump(c, t); return; } }
L_102f26:
    X86_TICK(c, 29);
    // 102f26  mov eax, dword ptr [0xe0068]
    X86_AT(c, 0x102f26u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0068u)));
    // 102f2b  add dword ptr [0xdfc58], eax
    X86_AT(c, 0x102f2bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC58u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 102f31  push eax
    X86_AT(c, 0x102f31u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 102f32  push dword ptr [0xe0064]
    X86_AT(c, 0x102f32u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE0064u))); push32(c, v); }
    // 102f38  mov ecx, dword ptr [0xdfc60]
    X86_AT(c, 0x102f38u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xDFC60u)));
    // 102f3e  call dword ptr [0xdfc5c]
    X86_AT(c, 0x102f3eu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xDFC5Cu))); push32(c, 0x102f44u); x86_call(c, t); X86_RET(c, 0x102f44u); }
    X86_TICK(c, 7);
    // 102f44  jmp 0x1030bf
    X86_AT(c, 0x102f44u);
    goto L_1030bf;
L_102f49:
    X86_TICK(c, 42);
    // 102f49  cmp byte ptr [0xdfc54], 2
    X86_AT(c, 0x102f49u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFC54u))), 0x2u, 0, 1);
    // 102f50  mov eax, dword ptr [0xe0060]
    X86_AT(c, 0x102f50u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0060u)));
    // 102f55  mov edx, dword ptr [eax]
    X86_AT(c, 0x102f55u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 102f57  mov dword ptr [0xe0070], edx
    X86_AT(c, 0x102f57u);
    wr32((c.sbase[3] + (uint32_t)(0xE0070u)), c.r[2]);
    // 102f5d  add dword ptr [0xe0060], 4
    X86_AT(c, 0x102f5du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE0060u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 102f64  push ebx
    X86_AT(c, 0x102f64u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 102f65  push dword ptr [0xe0070]
    X86_AT(c, 0x102f65u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE0070u))); push32(c, v); }
    // 102f6b  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x102f6bu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 102f6e  call 0x102be0
    X86_AT(c, 0x102f6eu);
    push32(c, 0x102f73u); f_00102be0(c); X86_RET(c, 0x102f73u);
    X86_TICK(c, 7);
    // 102f73  jmp 0x1030bf
    X86_AT(c, 0x102f73u);
    goto L_1030bf;
L_102f78:
    X86_TICK(c, 12);
    // 102f78  cmp byte ptr [0xdfc54], 3
    X86_AT(c, 0x102f78u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFC54u))), 0x3u, 0, 1);
    // 102f7f  jne 0x102fa0
    X86_AT(c, 0x102f7fu);
    if (x86_cc(c, 5)) { goto L_102fa0; }
    X86_TICK(c, 28);
    // 102f81  push ebx
    X86_AT(c, 0x102f81u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 102f82  mov eax, dword ptr [0xe0060]
    X86_AT(c, 0x102f82u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0060u)));
    // 102f87  push dword ptr [eax + 8]
    X86_AT(c, 0x102f87u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))); push32(c, v); }
    // 102f8a  push dword ptr [eax + 4]
    X86_AT(c, 0x102f8au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))); push32(c, v); }
    // 102f8d  push dword ptr [eax]
    X86_AT(c, 0x102f8du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0]))); push32(c, v); }
    // 102f8f  call 0x104dfc
    X86_AT(c, 0x102f8fu);
    push32(c, 0x102f94u); f_00104dfc(c); X86_RET(c, 0x102f94u);
    X86_TICK(c, 14);
    // 102f94  add dword ptr [0xe0060], 0xa
    X86_AT(c, 0x102f94u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE0060u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xAu, 0, 4)); }
    // 102f9b  jmp 0x1030bf
    X86_AT(c, 0x102f9bu);
    goto L_1030bf;
L_102fa0:
    X86_TICK(c, 23);
    // 102fa0  push ebx
    X86_AT(c, 0x102fa0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 102fa1  mov eax, dword ptr [0xe0060]
    X86_AT(c, 0x102fa1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0060u)));
    // 102fa6  push dword ptr [eax + 4]
    X86_AT(c, 0x102fa6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))); push32(c, v); }
    // 102fa9  push dword ptr [eax]
    X86_AT(c, 0x102fa9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0]))); push32(c, v); }
    // 102fab  call 0x1046d0
    X86_AT(c, 0x102fabu);
    push32(c, 0x102fb0u); f_001046d0(c); X86_RET(c, 0x102fb0u);
    X86_TICK(c, 14);
    // 102fb0  add dword ptr [0xe0060], 8
    X86_AT(c, 0x102fb0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE0060u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x8u, 0, 4)); }
    // 102fb7  jmp 0x1030bf
    X86_AT(c, 0x102fb7u);
    goto L_1030bf;
L_102fbc:
    X86_TICK(c, 30);
    // 102fbc  mov eax, dword ptr [0xe0060]
    X86_AT(c, 0x102fbcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0060u)));
    // 102fc1  mov edx, dword ptr [eax]
    X86_AT(c, 0x102fc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 102fc3  mov dword ptr [0xe0070], edx
    X86_AT(c, 0x102fc3u);
    wr32((c.sbase[3] + (uint32_t)(0xE0070u)), c.r[2]);
    // 102fc9  add dword ptr [0xe0060], 4
    X86_AT(c, 0x102fc9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE0060u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 102fd0  push edx
    X86_AT(c, 0x102fd0u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 102fd1  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x102fd1u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 102fd4  call 0x102d84
    X86_AT(c, 0x102fd4u);
    push32(c, 0x102fd9u); f_00102d84(c); X86_RET(c, 0x102fd9u);
    X86_TICK(c, 7);
    // 102fd9  jmp 0x1030bf
    X86_AT(c, 0x102fd9u);
    goto L_1030bf;
L_102fde:
    X86_TICK(c, 28);
    // 102fde  mov eax, dword ptr [0xdfc58]
    X86_AT(c, 0x102fdeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFC58u)));
    // 102fe3  mov edx, dword ptr [0xe0060]
    X86_AT(c, 0x102fe3u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xE0060u)));
    // 102fe9  mov ecx, dword ptr [edx]
    X86_AT(c, 0x102fe9u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2])));
    // 102feb  mov dword ptr [ecx], eax
    X86_AT(c, 0x102febu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[0]);
    // 102fed  add dword ptr [0xe0060], 4
    X86_AT(c, 0x102fedu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE0060u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 102ff4  jmp 0x1030bf
    X86_AT(c, 0x102ff4u);
    goto L_1030bf;
L_102ff9:
    X86_TICK(c, 2);
    // 102ff9  mov byte ptr [ebp - 6], 0x25
    X86_AT(c, 0x102ff9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), 0x25u);
L_102ffd:
    X86_TICK(c, 18);
    // 102ffd  inc dword ptr [0xdfc58]
    X86_AT(c, 0x102ffdu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC58u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 103003  test byte ptr [0xdfc48], 1
    X86_AT(c, 0x103003u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xDFC48u))) & 0x1u, 1);
    // 10300a  jne 0x103013
    X86_AT(c, 0x10300au);
    if (x86_cc(c, 5)) { goto L_103013; }
    X86_TICK(c, 9);
    // 10300c  push 1
    X86_AT(c, 0x10300cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 10300e  call 0x10264c
    X86_AT(c, 0x10300eu);
    push32(c, 0x103013u); f_0010264c(c); X86_RET(c, 0x103013u);
L_103013:
    X86_TICK(c, 17);
    // 103013  push 1
    X86_AT(c, 0x103013u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 103015  lea eax, [ebp - 6]
    X86_AT(c, 0x103015u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFAu);
    // 103018  push eax
    X86_AT(c, 0x103018u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 103019  mov ecx, dword ptr [0xdfc60]
    X86_AT(c, 0x103019u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xDFC60u)));
    // 10301f  call dword ptr [0xdfc5c]
    X86_AT(c, 0x10301fu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xDFC5Cu))); push32(c, 0x103025u); x86_call(c, t); X86_RET(c, 0x103025u); }
    X86_TICK(c, 12);
    // 103025  test byte ptr [0xdfc48], 1
    X86_AT(c, 0x103025u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xDFC48u))) & 0x1u, 1);
    // 10302c  je 0x1030bf
    X86_AT(c, 0x10302cu);
    if (x86_cc(c, 4)) { goto L_1030bf; }
    X86_TICK(c, 9);
    // 103032  push 1
    X86_AT(c, 0x103032u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 103034  jmp 0x1030af
    X86_AT(c, 0x103034u);
    goto L_1030af;
L_103039:
    X86_TICK(c, 24);
    // 103039  mov eax, dword ptr [0xe0060]
    X86_AT(c, 0x103039u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0060u)));
    // 10303e  mov dl, byte ptr [eax]
    X86_AT(c, 0x10303eu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 103040  mov byte ptr [ebp - 6], dl
    X86_AT(c, 0x103040u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), g8(c, 2));
    // 103043  add dword ptr [0xe0060], 4
    X86_AT(c, 0x103043u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE0060u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 10304a  jmp 0x102ffd
    X86_AT(c, 0x10304au);
    X86_POLL(c, 0x102ffdu); goto L_102ffd;
L_10304c:
    X86_TICK(c, 22);
    // 10304c  mov eax, dword ptr [0xe0060]
    X86_AT(c, 0x10304cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0060u)));
    // 103051  mov edi, dword ptr [eax]
    X86_AT(c, 0x103051u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 103053  add dword ptr [0xe0060], 4
    X86_AT(c, 0x103053u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE0060u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 10305a  and edi, edi
    X86_AT(c, 0x10305au);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 10305c  je 0x1030bf
    X86_AT(c, 0x10305cu);
    if (x86_cc(c, 4)) { goto L_1030bf; }
    X86_TICK(c, 22);
    // 10305e  mov edx, dword ptr [0xdfc50]
    X86_AT(c, 0x10305eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xDFC50u)));
    // 103064  sub eax, eax
    X86_AT(c, 0x103064u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 103066  push edi
    X86_AT(c, 0x103066u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 103067  mov ecx, edx
    X86_AT(c, 0x103067u);
    c.r[1] = c.r[2];
    // 103069  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x103069u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 10306b  jne 0x103070
    X86_AT(c, 0x10306bu);
    if (x86_cc(c, 5)) { goto L_103070; }
    X86_TICK(c, 4);
    // 10306d  inc ecx
    X86_AT(c, 0x10306du);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 10306e  sub edx, ecx
    X86_AT(c, 0x10306eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_103070:
    X86_TICK(c, 17);
    // 103070  pop edi
    X86_AT(c, 0x103070u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 103071  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0x103071u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
    // 103074  mov ecx, dword ptr [0xdfc50]
    X86_AT(c, 0x103074u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xDFC50u)));
    // 10307a  cmp edx, ecx
    X86_AT(c, 0x10307au);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 10307c  jb 0x103080
    X86_AT(c, 0x10307cu);
    if (x86_cc(c, 2)) { goto L_103080; }
    X86_TICK(c, 2);
    // 10307e  mov edx, ecx
    X86_AT(c, 0x10307eu);
    c.r[2] = c.r[1];
L_103080:
    X86_TICK(c, 21);
    // 103080  mov esi, edx
    X86_AT(c, 0x103080u);
    c.r[6] = c.r[2];
    // 103082  add dword ptr [0xdfc58], esi
    X86_AT(c, 0x103082u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC58u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 103088  test byte ptr [0xdfc48], 1
    X86_AT(c, 0x103088u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xDFC48u))) & 0x1u, 1);
    // 10308f  jne 0x103097
    X86_AT(c, 0x10308fu);
    if (x86_cc(c, 5)) { goto L_103097; }
    X86_TICK(c, 9);
    // 103091  push esi
    X86_AT(c, 0x103091u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 103092  call 0x10264c
    X86_AT(c, 0x103092u);
    push32(c, 0x103097u); f_0010264c(c); X86_RET(c, 0x103097u);
L_103097:
    X86_TICK(c, 15);
    // 103097  push esi
    X86_AT(c, 0x103097u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 103098  push edi
    X86_AT(c, 0x103098u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 103099  mov ecx, dword ptr [0xdfc60]
    X86_AT(c, 0x103099u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xDFC60u)));
    // 10309f  call dword ptr [0xdfc5c]
    X86_AT(c, 0x10309fu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xDFC5Cu))); push32(c, 0x1030a5u); x86_call(c, t); X86_RET(c, 0x1030a5u); }
    X86_TICK(c, 12);
    // 1030a5  test byte ptr [0xdfc48], 1
    X86_AT(c, 0x1030a5u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xDFC48u))) & 0x1u, 1);
    // 1030ac  je 0x1030bf
    X86_AT(c, 0x1030acu);
    if (x86_cc(c, 4)) { goto L_1030bf; }
    X86_TICK(c, 2);
    // 1030ae  push esi
    X86_AT(c, 0x1030aeu);
    { uint32_t v = c.r[6]; push32(c, v); }
L_1030af:
    X86_TICK(c, 7);
    // 1030af  call 0x10264c
    X86_AT(c, 0x1030afu);
    push32(c, 0x1030b4u); f_0010264c(c); X86_RET(c, 0x1030b4u);
    X86_TICK(c, 7);
    // 1030b4  jmp 0x1030bf
    X86_AT(c, 0x1030b4u);
    goto L_1030bf;
L_1030b6:
    X86_TICK(c, 2);
    // 1030b6  mov word ptr [0xe00b6], 1
    X86_AT(c, 0x1030b6u);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), 0x1u);
L_1030bf:
    X86_TICK(c, 28);
    // 1030bf  pop edi
    X86_AT(c, 0x1030bfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1030c0  pop esi
    X86_AT(c, 0x1030c0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1030c1  pop ebx
    X86_AT(c, 0x1030c1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 1030c2  leave 
    X86_AT(c, 0x1030c2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1030c3  ret 4
    X86_AT(c, 0x1030c3u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x102e20u, "ran off the end of a function");
}
void f_001030bf(X86Cpu& c) {
    X86_TICK(c, 28);
    // 1030bf  pop edi
    X86_AT(c, 0x1030bfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1030c0  pop esi
    X86_AT(c, 0x1030c0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1030c1  pop ebx
    X86_AT(c, 0x1030c1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 1030c2  leave 
    X86_AT(c, 0x1030c2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1030c3  ret 4
    X86_AT(c, 0x1030c3u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x1030bfu, "ran off the end of a function");
}
void f_001030dc(X86Cpu& c) {
    X86_TICK(c, 12);
    // 1030dc  test byte ptr [0xe00e4], 2
    X86_AT(c, 0x1030dcu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xE00E4u))) & 0x2u, 1);
    // 1030e3  je 0x1030f9
    X86_AT(c, 0x1030e3u);
    if (x86_cc(c, 4)) { goto L_1030f9; }
    X86_TICK(c, 29);
    // 1030e5  mov eax, dword ptr [0xdfc30]
    X86_AT(c, 0x1030e5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFC30u)));
    // 1030ea  and byte ptr [eax + 0xc], 0xbf
    X86_AT(c, 0x1030eau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xBFu, 1)); }
    // 1030ee  mov eax, dword ptr [0xdfc34]
    X86_AT(c, 0x1030eeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFC34u)));
    // 1030f3  and byte ptr [eax + 0xc], 0xbf
    X86_AT(c, 0x1030f3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xBFu, 1)); }
    // 1030f7  jmp 0x10310b
    X86_AT(c, 0x1030f7u);
    goto L_10310b;
L_1030f9:
    X86_TICK(c, 22);
    // 1030f9  mov eax, dword ptr [0xdfc30]
    X86_AT(c, 0x1030f9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFC30u)));
    // 1030fe  or byte ptr [eax + 0xc], 0x40
    X86_AT(c, 0x1030feu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
    // 103102  mov eax, dword ptr [0xdfc34]
    X86_AT(c, 0x103102u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFC34u)));
    // 103107  or byte ptr [eax + 0xc], 0x40
    X86_AT(c, 0x103107u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
L_10310b:
    X86_TICK(c, 12);
    // 10310b  test byte ptr [0xe00e4], 4
    X86_AT(c, 0x10310bu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xE00E4u))) & 0x4u, 1);
    // 103112  je 0x10311f
    X86_AT(c, 0x103112u);
    if (x86_cc(c, 4)) { goto L_10311f; }
    X86_TICK(c, 18);
    // 103114  mov eax, dword ptr [0xdfc38]
    X86_AT(c, 0x103114u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFC38u)));
    // 103119  and byte ptr [eax + 0xc], 0xbf
    X86_AT(c, 0x103119u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xBFu, 1)); }
    // 10311d  jmp 0x103128
    X86_AT(c, 0x10311du);
    goto L_103128;
L_10311f:
    X86_TICK(c, 11);
    // 10311f  mov eax, dword ptr [0xdfc38]
    X86_AT(c, 0x10311fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFC38u)));
    // 103124  or byte ptr [eax + 0xc], 0x40
    X86_AT(c, 0x103124u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
L_103128:
    X86_TICK(c, 10);
    // 103128  ret 
    X86_AT(c, 0x103128u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1030dcu, "ran off the end of a function");
}
void f_00103130(X86Cpu& c) {
    X86_TICK(c, 9);
    // 103130  push edi
    X86_AT(c, 0x103130u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 103131  call 0x1014d0
    X86_AT(c, 0x103131u);
    push32(c, 0x103136u); f_001014d0(c); X86_RET(c, 0x103136u);
    X86_TICK(c, 7);
    // 103136  jmp 0x103158
    X86_AT(c, 0x103136u);
    goto L_103158;
L_103138:
    X86_TICK(c, 12);
    // 103138  push dword ptr [0xdfc3c]
    X86_AT(c, 0x103138u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFC3Cu))); push32(c, v); }
    // 10313e  call 0x1033f8
    X86_AT(c, 0x10313eu);
    push32(c, 0x103143u); f_001033f8(c); X86_RET(c, 0x103143u);
    X86_TICK(c, 19);
    // 103143  mov edi, dword ptr [0xdfc3c]
    X86_AT(c, 0x103143u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xDFC3Cu)));
    // 103149  mov eax, dword ptr [edi + 0xc]
    X86_AT(c, 0x103149u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)));
    // 10314c  mov dword ptr [0xdfc3c], eax
    X86_AT(c, 0x10314cu);
    wr32((c.sbase[3] + (uint32_t)(0xDFC3Cu)), c.r[0]);
    // 103151  push edi
    X86_AT(c, 0x103151u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 103152  call 0x101770
    X86_AT(c, 0x103152u);
    push32(c, 0x103157u); f_00101770(c); X86_RET(c, 0x103157u);
    X86_TICK(c, 4);
    // 103157  pop ecx
    X86_AT(c, 0x103157u);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_103158:
    X86_TICK(c, 12);
    // 103158  cmp dword ptr [0xdfc3c], 0
    X86_AT(c, 0x103158u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDFC3Cu))), 0x0u, 0, 4);
    // 10315f  jne 0x103138
    X86_AT(c, 0x10315fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x103138u); goto L_103138; }
    X86_TICK(c, 14);
    // 103161  pop edi
    X86_AT(c, 0x103161u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 103162  ret 
    X86_AT(c, 0x103162u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x103130u, "ran off the end of a function");
}
void f_00103178(X86Cpu& c) {
    X86_TICK(c, 33);
    // 103178  enter 0xc, 0
    X86_AT(c, 0x103178u);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 10317c  push ebx
    X86_AT(c, 0x10317cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 10317d  push esi
    X86_AT(c, 0x10317du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 10317e  push edi
    X86_AT(c, 0x10317eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10317f  sub eax, eax
    X86_AT(c, 0x10317fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 103181  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x103181u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 103184  xchg edi, eax
    X86_AT(c, 0x103184u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 103185  mov esi, 1
    X86_AT(c, 0x103185u);
    c.r[6] = 0x1u;
    // 10318a  mov dword ptr [ebp - 8], edi
    X86_AT(c, 0x10318au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[7]);
    // 10318d  mov eax, dword ptr [0xdfd38]
    X86_AT(c, 0x10318du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFD38u)));
    // 103192  mov edx, dword ptr [0xdfd1e]
    X86_AT(c, 0x103192u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xDFD1Eu)));
    // 103198  mov dword ptr [edx], eax
    X86_AT(c, 0x103198u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
L_10319a:
    X86_TICK(c, 8);
    // 10319a  sub eax, eax
    X86_AT(c, 0x10319au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 10319c  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x10319cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 10319f  mov byte ptr [ebp - 2], al
    X86_AT(c, 0x10319fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 1031a2  mov dword ptr [ebp - 0xc], edi
    X86_AT(c, 0x1031a2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[7]);
L_1031a5:
    X86_TICK(c, 11);
    // 1031a5  cmp esi, dword ptr [0xdfd24]
    X86_AT(c, 0x1031a5u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xDFD24u))), 0, 4);
    // 1031ab  ja 0x103229
    X86_AT(c, 0x1031abu);
    if (x86_cc(c, 7)) { goto L_103229; }
    X86_TICK(c, 17);
    // 1031b1  mov eax, dword ptr [0xdfd18]
    X86_AT(c, 0x1031b1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFD18u)));
    // 1031b6  mov bl, byte ptr [eax + esi*1 - 1]
    X86_AT(c, 0x1031b6u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] + 0xFFFFFFFFu))));
    // 1031ba  inc esi
    X86_AT(c, 0x1031bau);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 1031bb  cmp bl, 9
    X86_AT(c, 0x1031bbu);
    (void)x86_sub(c, g8(c, 3), 0x9u, 0, 1);
    // 1031be  je 0x1031c5
    X86_AT(c, 0x1031beu);
    if (x86_cc(c, 4)) { goto L_1031c5; }
    X86_TICK(c, 7);
    // 1031c0  cmp bl, 0x20
    X86_AT(c, 0x1031c0u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 1031c3  jne 0x1031d3
    X86_AT(c, 0x1031c3u);
    if (x86_cc(c, 5)) { goto L_1031d3; }
L_1031c5:
    X86_TICK(c, 12);
    // 1031c5  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0x1031c5u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 1031c9  je 0x1031a5
    X86_AT(c, 0x1031c9u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x1031a5u); goto L_1031a5; }
    X86_TICK(c, 12);
    // 1031cb  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x1031cbu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 1031cf  jne 0x103216
    X86_AT(c, 0x1031cfu);
    if (x86_cc(c, 5)) { goto L_103216; }
    X86_TICK(c, 7);
    // 1031d1  jmp 0x103229
    X86_AT(c, 0x1031d1u);
    goto L_103229;
L_1031d3:
    X86_TICK(c, 7);
    // 1031d3  cmp bl, 0x22
    X86_AT(c, 0x1031d3u);
    (void)x86_sub(c, g8(c, 3), 0x22u, 0, 1);
    // 1031d6  jne 0x1031f4
    X86_AT(c, 0x1031d6u);
    if (x86_cc(c, 5)) { goto L_1031f4; }
    X86_TICK(c, 12);
    // 1031d8  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x1031d8u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 1031dc  jne 0x1031e4
    X86_AT(c, 0x1031dcu);
    if (x86_cc(c, 5)) { goto L_1031e4; }
    X86_TICK(c, 12);
    // 1031de  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0x1031deu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 1031e2  jne 0x1031f4
    X86_AT(c, 0x1031e2u);
    if (x86_cc(c, 5)) { goto L_1031f4; }
L_1031e4:
    X86_TICK(c, 12);
    // 1031e4  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x1031e4u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 1031e8  jne 0x103229
    X86_AT(c, 0x1031e8u);
    if (x86_cc(c, 5)) { goto L_103229; }
    X86_TICK(c, 13);
    // 1031ea  mov al, 1
    X86_AT(c, 0x1031eau);
    s8(c, 0, 0x1u);
    // 1031ec  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x1031ecu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 1031ef  mov byte ptr [ebp - 2], al
    X86_AT(c, 0x1031efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 1031f2  jmp 0x1031a5
    X86_AT(c, 0x1031f2u);
    X86_POLL(c, 0x1031a5u); goto L_1031a5;
L_1031f4:
    X86_TICK(c, 7);
    // 1031f4  cmp bl, 0x5c
    X86_AT(c, 0x1031f4u);
    (void)x86_sub(c, g8(c, 3), 0x5Cu, 0, 1);
    // 1031f7  jne 0x103216
    X86_AT(c, 0x1031f7u);
    if (x86_cc(c, 5)) { goto L_103216; }
    X86_TICK(c, 12);
    // 1031f9  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x1031f9u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 1031fd  je 0x103216
    X86_AT(c, 0x1031fdu);
    if (x86_cc(c, 4)) { goto L_103216; }
    X86_TICK(c, 11);
    // 1031ff  cmp esi, dword ptr [0xdfd24]
    X86_AT(c, 0x1031ffu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xDFD24u))), 0, 4);
    // 103205  ja 0x103216
    X86_AT(c, 0x103205u);
    if (x86_cc(c, 7)) { goto L_103216; }
    X86_TICK(c, 16);
    // 103207  mov eax, dword ptr [0xdfd18]
    X86_AT(c, 0x103207u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFD18u)));
    // 10320c  cmp byte ptr [eax + esi*1 - 1], 0x22
    X86_AT(c, 0x10320cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] + 0xFFFFFFFFu))), 0x22u, 0, 1);
    // 103211  jne 0x103216
    X86_AT(c, 0x103211u);
    if (x86_cc(c, 5)) { goto L_103216; }
    X86_TICK(c, 4);
    // 103213  mov bl, 0x22
    X86_AT(c, 0x103213u);
    s8(c, 3, 0x22u);
    // 103215  inc esi
    X86_AT(c, 0x103215u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_103216:
    X86_TICK(c, 17);
    // 103216  mov eax, dword ptr [0xdfd18]
    X86_AT(c, 0x103216u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFD18u)));
    // 10321b  mov byte ptr [eax + edi*1 - 1], bl
    X86_AT(c, 0x10321bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] + 0xFFFFFFFFu)), g8(c, 3));
    // 10321f  inc edi
    X86_AT(c, 0x10321fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 103220  mov byte ptr [ebp - 1], 1
    X86_AT(c, 0x103220u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x1u);
    // 103224  jmp 0x1031a5
    X86_AT(c, 0x103224u);
    X86_POLL(c, 0x1031a5u); goto L_1031a5;
L_103229:
    X86_TICK(c, 12);
    // 103229  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0x103229u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 10322d  je 0x103250
    X86_AT(c, 0x10322du);
    if (x86_cc(c, 4)) { goto L_103250; }
    X86_TICK(c, 30);
    // 10322f  mov eax, dword ptr [0xdfd18]
    X86_AT(c, 0x10322fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFD18u)));
    // 103234  mov byte ptr [eax + edi*1 - 1], 0
    X86_AT(c, 0x103234u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] + 0xFFFFFFFFu)), 0x0u);
    // 103239  inc edi
    X86_AT(c, 0x103239u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 10323a  inc dword ptr [ebp - 8]
    X86_AT(c, 0x10323au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 10323d  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0x10323du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 103240  lea eax, [eax + edx*1 - 1]
    X86_AT(c, 0x103240u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFFFu);
    // 103244  mov edx, dword ptr [0xdfd1e]
    X86_AT(c, 0x103244u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xDFD1Eu)));
    // 10324a  mov ecx, dword ptr [ebp - 8]
    X86_AT(c, 0x10324au);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 10324d  mov dword ptr [edx + ecx*4], eax
    X86_AT(c, 0x10324du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[1] * 4)), c.r[0]);
L_103250:
    X86_TICK(c, 11);
    // 103250  cmp esi, dword ptr [0xdfd24]
    X86_AT(c, 0x103250u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xDFD24u))), 0, 4);
    // 103256  jbe 0x10319a
    X86_AT(c, 0x103256u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x10319au); goto L_10319a; }
    X86_TICK(c, 43);
    // 10325c  mov eax, dword ptr [0xdfd1e]
    X86_AT(c, 0x10325cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFD1Eu)));
    // 103261  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0x103261u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 103264  mov dword ptr [eax + edx*4 + 4], 0
    X86_AT(c, 0x103264u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 4 + 0x4u)), 0x0u);
    // 10326c  xchg edx, eax
    X86_AT(c, 0x10326cu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 10326d  inc eax
    X86_AT(c, 0x10326du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 10326e  pop edi
    X86_AT(c, 0x10326eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10326f  pop esi
    X86_AT(c, 0x10326fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 103270  pop ebx
    X86_AT(c, 0x103270u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 103271  leave 
    X86_AT(c, 0x103271u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 103272  ret 
    X86_AT(c, 0x103272u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x103178u, "ran off the end of a function");
}
void f_00103274(X86Cpu& c) {
    X86_TICK(c, 10);
    // 103274  ret 
    X86_AT(c, 0x103274u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x103274u, "ran off the end of a function");
}
void f_00103290(X86Cpu& c) {
    X86_TICK(c, 13);
    // 103290  mov al, byte ptr [esp + 4]
    X86_AT(c, 0x103290u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u))));
    // 103294  mov byte ptr [0xe00bd], al
    X86_AT(c, 0x103294u);
    wr8((c.sbase[3] + (uint32_t)(0xE00BDu)), g8(c, 0));
    // 103299  call 0x105110
    X86_AT(c, 0x103299u);
    push32(c, 0x10329eu); f_00105110(c); X86_RET(c, 0x10329eu);
    X86_TICK(c, 12);
    // 10329e  mov eax, dword ptr [0xe00dc]
    X86_AT(c, 0x10329eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE00DCu)));
    // 1032a3  rcr eax, 1
    X86_AT(c, 0x1032a3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 1032a5  jae 0x1032c4
    X86_AT(c, 0x1032a5u);
    if (x86_cc(c, 3)) { goto L_1032c4; }
    X86_TICK(c, 14);
    // 1032a7  mov ax, word ptr [0xe00bc]
    X86_AT(c, 0x1032a7u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE00BCu))));
    // 1032ad  mov word ptr [0xe00b6], ax
    X86_AT(c, 0x1032adu);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), (c.r[0] & 0xFFFFu));
    // 1032b3  sub eax, eax
    X86_AT(c, 0x1032b3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 1032b5  mov dword ptr [0xe00bc], eax
    X86_AT(c, 0x1032b5u);
    wr32((c.sbase[3] + (uint32_t)(0xE00BCu)), c.r[0]);
    // 1032ba  mov dword ptr [0xe00c4], eax
    X86_AT(c, 0x1032bau);
    wr32((c.sbase[3] + (uint32_t)(0xE00C4u)), c.r[0]);
    // 1032bf  mov dword ptr [0xe00c8], eax
    X86_AT(c, 0x1032bfu);
    wr32((c.sbase[3] + (uint32_t)(0xE00C8u)), c.r[0]);
L_1032c4:
    X86_TICK(c, 10);
    // 1032c4  ret 4
    X86_AT(c, 0x1032c4u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x103290u, "ran off the end of a function");
}
void f_001032d0(X86Cpu& c) {
    X86_TICK(c, 52);
    // 1032d0  enter 0x10, 0
    X86_AT(c, 0x1032d0u);
    x86_enter(c, 0x10u, 0x0u, 4);
    // 1032d4  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x1032d4u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 1032d7  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x1032d7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 1032da  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x1032dau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 1032dd  mov edx, 0xe00bc
    X86_AT(c, 0x1032ddu);
    c.r[2] = 0xE00BCu;
    // 1032e2  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0x1032e2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 1032e5  mov word ptr [ebp - 0xc], ds
    X86_AT(c, 0x1032e5u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (uint32_t)c.sreg[3]);
    // 1032e8  movzx edx, word ptr [ebp - 0xc]
    X86_AT(c, 0x1032e8u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 1032ec  mov dword ptr [ecx], edx
    X86_AT(c, 0x1032ecu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[2]);
    // 1032ee  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x1032eeu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 1032f1  mov dword ptr [edx], eax
    X86_AT(c, 0x1032f1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 1032f3  leave 
    X86_AT(c, 0x1032f3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1032f4  ret 0xc
    X86_AT(c, 0x1032f4u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x1032d0u, "ran off the end of a function");
}
void f_00103304(X86Cpu& c) {
    X86_TICK(c, 20);
    // 103304  push ebp
    X86_AT(c, 0x103304u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 103305  mov ebp, esp
    X86_AT(c, 0x103305u);
    c.r[5] = c.r[4];
    // 103307  push dword ptr [ebp + 8]
    X86_AT(c, 0x103307u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 10330a  push 0xe00c8
    X86_AT(c, 0x10330au);
    { uint32_t v = 0xE00C8u; push32(c, v); }
    // 10330f  push 0xe00d4
    X86_AT(c, 0x10330fu);
    { uint32_t v = 0xE00D4u; push32(c, v); }
    // 103314  call 0x1032d0
    X86_AT(c, 0x103314u);
    push32(c, 0x103319u); f_001032d0(c); X86_RET(c, 0x103319u);
    X86_TICK(c, 16);
    // 103319  leave 
    X86_AT(c, 0x103319u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 10331a  ret 4
    X86_AT(c, 0x10331au);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x103304u, "ran off the end of a function");
}
void f_00103328(X86Cpu& c) {
    X86_TICK(c, 21);
    // 103328  push ebp
    X86_AT(c, 0x103328u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 103329  mov ebp, esp
    X86_AT(c, 0x103329u);
    c.r[5] = c.r[4];
    // 10332b  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x10332bu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 10332f  mov dword ptr [0xe00c0], eax
    X86_AT(c, 0x10332fu);
    wr32((c.sbase[3] + (uint32_t)(0xE00C0u)), c.r[0]);
    // 103334  push 0x3e
    X86_AT(c, 0x103334u);
    { uint32_t v = 0x3Eu; push32(c, v); }
    // 103336  call 0x103290
    X86_AT(c, 0x103336u);
    push32(c, 0x10333bu); f_00103290(c); X86_RET(c, 0x10333bu);
    X86_TICK(c, 16);
    // 10333b  leave 
    X86_AT(c, 0x10333bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 10333c  ret 4
    X86_AT(c, 0x10333cu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x103328u, "ran off the end of a function");
}
void f_00103348(X86Cpu& c) {
    X86_TICK(c, 19);
    // 103348  push ebp
    X86_AT(c, 0x103348u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 103349  mov ebp, esp
    X86_AT(c, 0x103349u);
    c.r[5] = c.r[4];
    // 10334b  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0x10334bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 10334e  mov byte ptr [0xe00bc], al
    X86_AT(c, 0x10334eu);
    wr8((c.sbase[3] + (uint32_t)(0xE00BCu)), g8(c, 0));
    // 103353  push 0x4c
    X86_AT(c, 0x103353u);
    { uint32_t v = 0x4Cu; push32(c, v); }
    // 103355  call 0x103290
    X86_AT(c, 0x103355u);
    push32(c, 0x10335au); f_00103290(c); X86_RET(c, 0x10335au);
    X86_TICK(c, 16);
    // 10335a  leave 
    X86_AT(c, 0x10335au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 10335b  ret 4
    X86_AT(c, 0x10335bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x103348u, "ran off the end of a function");
}
void f_00103380(X86Cpu& c) {
    X86_TICK(c, 16);
    // 103380  push ebp
    X86_AT(c, 0x103380u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 103381  mov ebp, esp
    X86_AT(c, 0x103381u);
    c.r[5] = c.r[4];
    // 103383  push dword ptr [ebp + 8]
    X86_AT(c, 0x103383u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 103386  call 0x103304
    X86_AT(c, 0x103386u);
    push32(c, 0x10338bu); f_00103304(c); X86_RET(c, 0x10338bu);
    X86_TICK(c, 12);
    // 10338b  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x10338bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 10338e  call 0x103290
    X86_AT(c, 0x10338eu);
    push32(c, 0x103393u); f_00103290(c); X86_RET(c, 0x103393u);
    X86_TICK(c, 16);
    // 103393  leave 
    X86_AT(c, 0x103393u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 103394  ret 8
    X86_AT(c, 0x103394u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x103380u, "ran off the end of a function");
}
void f_001033a0(X86Cpu& c) {
    X86_TICK(c, 26);
    // 1033a0  push ebp
    X86_AT(c, 0x1033a0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 1033a1  mov ebp, esp
    X86_AT(c, 0x1033a1u);
    c.r[5] = c.r[4];
    // 1033a3  movzx eax, byte ptr [ebp + 0xc]
    X86_AT(c, 0x1033a3u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 1033a7  mov dword ptr [0xe00c4], eax
    X86_AT(c, 0x1033a7u);
    wr32((c.sbase[3] + (uint32_t)(0xE00C4u)), c.r[0]);
    // 1033ac  push 0x3c
    X86_AT(c, 0x1033acu);
    { uint32_t v = 0x3Cu; push32(c, v); }
    // 1033ae  push dword ptr [ebp + 8]
    X86_AT(c, 0x1033aeu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 1033b1  call 0x103380
    X86_AT(c, 0x1033b1u);
    push32(c, 0x1033b6u); f_00103380(c); X86_RET(c, 0x1033b6u);
    X86_TICK(c, 20);
    // 1033b6  mov al, byte ptr [0xe00bc]
    X86_AT(c, 0x1033b6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE00BCu))));
    // 1033bb  leave 
    X86_AT(c, 0x1033bbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1033bc  ret 8
    X86_AT(c, 0x1033bcu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x1033a0u, "ran off the end of a function");
}
void f_001033c8(X86Cpu& c) {
    X86_TICK(c, 33);
    // 1033c8  push ebp
    X86_AT(c, 0x1033c8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 1033c9  mov ebp, esp
    X86_AT(c, 0x1033c9u);
    c.r[5] = c.r[4];
    // 1033cb  mov al, byte ptr [0xe00e0]
    X86_AT(c, 0x1033cbu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE00E0u))));
    // 1033d0  shl al, 4
    X86_AT(c, 0x1033d0u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 1033d3  or al, byte ptr [ebp + 0xc]
    X86_AT(c, 0x1033d3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 1)); }
    // 1033d6  mov byte ptr [0xe00bc], al
    X86_AT(c, 0x1033d6u);
    wr8((c.sbase[3] + (uint32_t)(0xE00BCu)), g8(c, 0));
    // 1033db  push 0x3d
    X86_AT(c, 0x1033dbu);
    { uint32_t v = 0x3Du; push32(c, v); }
    // 1033dd  push dword ptr [ebp + 8]
    X86_AT(c, 0x1033ddu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 1033e0  call 0x103380
    X86_AT(c, 0x1033e0u);
    push32(c, 0x1033e5u); f_00103380(c); X86_RET(c, 0x1033e5u);
    X86_TICK(c, 20);
    // 1033e5  mov al, byte ptr [0xe00bc]
    X86_AT(c, 0x1033e5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE00BCu))));
    // 1033ea  leave 
    X86_AT(c, 0x1033eau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1033eb  ret 8
    X86_AT(c, 0x1033ebu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x1033c8u, "ran off the end of a function");
}
void f_001033f8(X86Cpu& c) {
    X86_TICK(c, 18);
    // 1033f8  push ebp
    X86_AT(c, 0x1033f8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 1033f9  mov ebp, esp
    X86_AT(c, 0x1033f9u);
    c.r[5] = c.r[4];
    // 1033fb  push 0x41
    X86_AT(c, 0x1033fbu);
    { uint32_t v = 0x41u; push32(c, v); }
    // 1033fd  push dword ptr [ebp + 8]
    X86_AT(c, 0x1033fdu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 103400  call 0x103380
    X86_AT(c, 0x103400u);
    push32(c, 0x103405u); f_00103380(c); X86_RET(c, 0x103405u);
    X86_TICK(c, 16);
    // 103405  leave 
    X86_AT(c, 0x103405u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 103406  ret 4
    X86_AT(c, 0x103406u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x1033f8u, "ran off the end of a function");
}
void f_00103420(X86Cpu& c) {
    X86_TICK(c, 21);
    // 103420  push ebp
    X86_AT(c, 0x103420u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 103421  mov ebp, esp
    X86_AT(c, 0x103421u);
    c.r[5] = c.r[4];
    // 103423  push ebx
    X86_AT(c, 0x103423u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 103424  push esi
    X86_AT(c, 0x103424u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 103425  push edi
    X86_AT(c, 0x103425u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 103426  mov edi, dword ptr [0xe00f4]
    X86_AT(c, 0x103426u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xE00F4u)));
    // 10342c  jmp 0x10345b
    X86_AT(c, 0x10342cu);
    goto L_10345b;
L_10342e:
    X86_TICK(c, 11);
    // 10342e  mov esi, dword ptr [edi]
    X86_AT(c, 0x10342eu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 103430  and esi, esi
    X86_AT(c, 0x103430u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 103432  je 0x103452
    X86_AT(c, 0x103432u);
    if (x86_cc(c, 4)) { goto L_103452; }
    X86_TICK(c, 11);
    // 103434  cmp edi, dword ptr [esi + 4]
    X86_AT(c, 0x103434u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))), 0, 4);
    // 103437  je 0x103452
    X86_AT(c, 0x103437u);
    if (x86_cc(c, 4)) { goto L_103452; }
    X86_TICK(c, 11);
    // 103439  push edi
    X86_AT(c, 0x103439u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10343a  push 1
    X86_AT(c, 0x10343au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 10343c  call 0x104fe4
    X86_AT(c, 0x10343cu);
    push32(c, 0x103441u); f_00104fe4(c); X86_RET(c, 0x103441u);
    X86_TICK(c, 15);
    // 103441  push edi
    X86_AT(c, 0x103441u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 103442  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x103442u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 103445  mov ebx, ecx
    X86_AT(c, 0x103445u);
    c.r[3] = c.r[1];
    // 103447  call dword ptr [ebp + 8]
    X86_AT(c, 0x103447u);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0x10344au); x86_call(c, t); X86_RET(c, 0x10344au); }
    X86_TICK(c, 11);
    // 10344a  push esi
    X86_AT(c, 0x10344au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 10344b  mov ecx, ebx
    X86_AT(c, 0x10344bu);
    c.r[1] = c.r[3];
    // 10344d  call dword ptr [ebp + 8]
    X86_AT(c, 0x10344du);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0x103450u); x86_call(c, t); X86_RET(c, 0x103450u); }
    X86_TICK(c, 7);
    // 103450  jmp 0x10345f
    X86_AT(c, 0x103450u);
    goto L_10345f;
L_103452:
    X86_TICK(c, 13);
    // 103452  push edi
    X86_AT(c, 0x103452u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 103453  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x103453u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 103456  call dword ptr [ebp + 8]
    X86_AT(c, 0x103456u);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0x103459u); x86_call(c, t); X86_RET(c, 0x103459u); }
    X86_TICK(c, 2);
    // 103459  mov edi, esi
    X86_AT(c, 0x103459u);
    c.r[7] = c.r[6];
L_10345b:
    X86_TICK(c, 7);
    // 10345b  and edi, edi
    X86_AT(c, 0x10345bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 10345d  jne 0x10342e
    X86_AT(c, 0x10345du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x10342eu); goto L_10342e; }
L_10345f:
    X86_TICK(c, 28);
    // 10345f  pop edi
    X86_AT(c, 0x10345fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 103460  pop esi
    X86_AT(c, 0x103460u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 103461  pop ebx
    X86_AT(c, 0x103461u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 103462  leave 
    X86_AT(c, 0x103462u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 103463  ret 8
    X86_AT(c, 0x103463u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x103420u, "ran off the end of a function");
}
void f_00103478(X86Cpu& c) {
    X86_TICK(c, 23);
    // 103478  push ebp
    X86_AT(c, 0x103478u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 103479  mov ebp, esp
    X86_AT(c, 0x103479u);
    c.r[5] = c.r[4];
    // 10347b  push ebx
    X86_AT(c, 0x10347bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 10347c  push esi
    X86_AT(c, 0x10347cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 10347d  push edi
    X86_AT(c, 0x10347du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10347e  mov edi, dword ptr [0xe00f0]
    X86_AT(c, 0x10347eu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xE00F0u)));
    // 103484  sub esi, esi
    X86_AT(c, 0x103484u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 103486  jmp 0x1034ca
    X86_AT(c, 0x103486u);
    goto L_1034ca;
L_103488:
    X86_TICK(c, 14);
    // 103488  mov ebx, edi
    X86_AT(c, 0x103488u);
    c.r[3] = c.r[7];
    // 10348a  cmp byte ptr [ebx + 0xf], 0x55
    X86_AT(c, 0x10348au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFu))), 0x55u, 0, 1);
    // 10348e  je 0x10349a
    X86_AT(c, 0x10348eu);
    if (x86_cc(c, 4)) { goto L_10349a; }
    X86_TICK(c, 11);
    // 103490  push edi
    X86_AT(c, 0x103490u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 103491  push 4
    X86_AT(c, 0x103491u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 103493  call 0x104fe4
    X86_AT(c, 0x103493u);
    push32(c, 0x103498u); f_00104fe4(c); X86_RET(c, 0x103498u);
    X86_TICK(c, 7);
    // 103498  jmp 0x1034ca
    X86_AT(c, 0x103498u);
    goto L_1034ca;
L_10349a:
    X86_TICK(c, 11);
    // 10349a  cmp esi, dword ptr [ebx + 0x14]
    X86_AT(c, 0x10349au);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))), 0, 4);
    // 10349d  je 0x1034ab
    X86_AT(c, 0x10349du);
    if (x86_cc(c, 4)) { goto L_1034ab; }
    X86_TICK(c, 11);
    // 10349f  push edi
    X86_AT(c, 0x10349fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1034a0  push 5
    X86_AT(c, 0x1034a0u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 1034a2  call 0x104fe4
    X86_AT(c, 0x1034a2u);
    push32(c, 0x1034a7u); f_00104fe4(c); X86_RET(c, 0x1034a7u);
    X86_TICK(c, 9);
    // 1034a7  sub edi, edi
    X86_AT(c, 0x1034a7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 1034a9  jmp 0x1034ca
    X86_AT(c, 0x1034a9u);
    goto L_1034ca;
L_1034ab:
    X86_TICK(c, 11);
    // 1034ab  mov eax, dword ptr [edi]
    X86_AT(c, 0x1034abu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 1034ad  and eax, eax
    X86_AT(c, 0x1034adu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 1034af  je 0x1034be
    X86_AT(c, 0x1034afu);
    if (x86_cc(c, 4)) { goto L_1034be; }
    X86_TICK(c, 11);
    // 1034b1  cmp edi, dword ptr [eax + 4]
    X86_AT(c, 0x1034b1u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))), 0, 4);
    // 1034b4  je 0x1034be
    X86_AT(c, 0x1034b4u);
    if (x86_cc(c, 4)) { goto L_1034be; }
    X86_TICK(c, 11);
    // 1034b6  push edi
    X86_AT(c, 0x1034b6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1034b7  push 1
    X86_AT(c, 0x1034b7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 1034b9  call 0x104fe4
    X86_AT(c, 0x1034b9u);
    push32(c, 0x1034beu); f_00104fe4(c); X86_RET(c, 0x1034beu);
L_1034be:
    X86_TICK(c, 13);
    // 1034be  push edi
    X86_AT(c, 0x1034beu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1034bf  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x1034bfu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 1034c2  call dword ptr [ebp + 8]
    X86_AT(c, 0x1034c2u);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0x1034c5u); x86_call(c, t); X86_RET(c, 0x1034c5u); }
    X86_TICK(c, 6);
    // 1034c5  mov esi, edi
    X86_AT(c, 0x1034c5u);
    c.r[6] = c.r[7];
    // 1034c7  mov edi, dword ptr [ebx + 0x10]
    X86_AT(c, 0x1034c7u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
L_1034ca:
    X86_TICK(c, 7);
    // 1034ca  and edi, edi
    X86_AT(c, 0x1034cau);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 1034cc  jne 0x103488
    X86_AT(c, 0x1034ccu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x103488u); goto L_103488; }
    X86_TICK(c, 28);
    // 1034ce  pop edi
    X86_AT(c, 0x1034ceu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1034cf  pop esi
    X86_AT(c, 0x1034cfu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1034d0  pop ebx
    X86_AT(c, 0x1034d0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 1034d1  leave 
    X86_AT(c, 0x1034d1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1034d2  ret 8
    X86_AT(c, 0x1034d2u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x103478u, "ran off the end of a function");
}
void f_001034ec(X86Cpu& c) {
    X86_TICK(c, 16);
    // 1034ec  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x1034ecu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 1034f0  cmp dword ptr [ecx + 8], 0x18
    X86_AT(c, 0x1034f0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x8u))), 0x18u, 0, 4);
    // 1034f4  jb 0x10351c
    X86_AT(c, 0x1034f4u);
    if (x86_cc(c, 2)) { goto L_10351c; }
    X86_TICK(c, 12);
    // 1034f6  cmp dword ptr [ecx + 0x14], 0
    X86_AT(c, 0x1034f6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x14u))), 0x0u, 0, 4);
    // 1034fa  jne 0x103506
    X86_AT(c, 0x1034fau);
    if (x86_cc(c, 5)) { goto L_103506; }
    X86_TICK(c, 13);
    // 1034fc  mov eax, dword ptr [ecx + 0x10]
    X86_AT(c, 0x1034fcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)));
    // 1034ff  mov dword ptr [0xe00f0], eax
    X86_AT(c, 0x1034ffu);
    wr32((c.sbase[3] + (uint32_t)(0xE00F0u)), c.r[0]);
    // 103504  jmp 0x10350f
    X86_AT(c, 0x103504u);
    goto L_10350f;
L_103506:
    X86_TICK(c, 10);
    // 103506  mov eax, dword ptr [ecx + 0x10]
    X86_AT(c, 0x103506u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)));
    // 103509  mov edx, dword ptr [ecx + 0x14]
    X86_AT(c, 0x103509u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x14u)));
    // 10350c  mov dword ptr [edx + 0x10], eax
    X86_AT(c, 0x10350cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u)), c.r[0]);
L_10350f:
    X86_TICK(c, 11);
    // 10350f  mov eax, dword ptr [ecx + 0x10]
    X86_AT(c, 0x10350fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)));
    // 103512  and eax, eax
    X86_AT(c, 0x103512u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 103514  je 0x10351c
    X86_AT(c, 0x103514u);
    if (x86_cc(c, 4)) { goto L_10351c; }
    X86_TICK(c, 6);
    // 103516  mov edx, dword ptr [ecx + 0x14]
    X86_AT(c, 0x103516u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x14u)));
    // 103519  mov dword ptr [eax + 0x14], edx
    X86_AT(c, 0x103519u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x14u)), c.r[2]);
L_10351c:
    X86_TICK(c, 10);
    // 10351c  ret 4
    X86_AT(c, 0x10351cu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x1034ecu, "ran off the end of a function");
}
void f_00103540(X86Cpu& c) {
    X86_TICK(c, 23);
    // 103540  push ebp
    X86_AT(c, 0x103540u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 103541  mov ebp, esp
    X86_AT(c, 0x103541u);
    c.r[5] = c.r[4];
    // 103543  push esi
    X86_AT(c, 0x103543u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 103544  push edi
    X86_AT(c, 0x103544u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 103545  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x103545u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 103548  mov esi, dword ptr [edi]
    X86_AT(c, 0x103548u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 10354a  and esi, esi
    X86_AT(c, 0x10354au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 10354c  je 0x103575
    X86_AT(c, 0x10354cu);
    if (x86_cc(c, 4)) { goto L_103575; }
    X86_TICK(c, 12);
    // 10354e  cmp byte ptr [esi + 0xf], 0x55
    X86_AT(c, 0x10354eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu))), 0x55u, 0, 1);
    // 103552  jne 0x103575
    X86_AT(c, 0x103552u);
    if (x86_cc(c, 5)) { goto L_103575; }
    X86_TICK(c, 11);
    // 103554  cmp esi, dword ptr [0xe00f8]
    X86_AT(c, 0x103554u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xE00F8u))), 0, 4);
    // 10355a  jne 0x103562
    X86_AT(c, 0x10355au);
    if (x86_cc(c, 5)) { goto L_103562; }
    X86_TICK(c, 2);
    // 10355c  mov dword ptr [0xe00f8], edi
    X86_AT(c, 0x10355cu);
    wr32((c.sbase[3] + (uint32_t)(0xE00F8u)), c.r[7]);
L_103562:
    X86_TICK(c, 9);
    // 103562  push esi
    X86_AT(c, 0x103562u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 103563  call 0x1034ec
    X86_AT(c, 0x103563u);
    push32(c, 0x103568u); f_001034ec(c); X86_RET(c, 0x103568u);
    X86_TICK(c, 27);
    // 103568  mov eax, dword ptr [esi + 8]
    X86_AT(c, 0x103568u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 10356b  add dword ptr [edi + 8], eax
    X86_AT(c, 0x10356bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 10356e  mov eax, dword ptr [esi]
    X86_AT(c, 0x10356eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 103570  mov dword ptr [edi], eax
    X86_AT(c, 0x103570u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 103572  xchg esi, eax
    X86_AT(c, 0x103572u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 103573  jmp 0x1035a8
    X86_AT(c, 0x103573u);
    goto L_1035a8;
L_103575:
    X86_TICK(c, 11);
    // 103575  mov eax, dword ptr [edi + 4]
    X86_AT(c, 0x103575u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 103578  and eax, eax
    X86_AT(c, 0x103578u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 10357a  je 0x1035b3
    X86_AT(c, 0x10357au);
    if (x86_cc(c, 4)) { goto L_1035b3; }
    X86_TICK(c, 15);
    // 10357c  xchg esi, eax
    X86_AT(c, 0x10357cu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 10357d  cmp byte ptr [esi + 0xf], 0x55
    X86_AT(c, 0x10357du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu))), 0x55u, 0, 1);
    // 103581  jne 0x1035b3
    X86_AT(c, 0x103581u);
    if (x86_cc(c, 5)) { goto L_1035b3; }
    X86_TICK(c, 11);
    // 103583  cmp edi, dword ptr [0xe00f8]
    X86_AT(c, 0x103583u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xE00F8u))), 0, 4);
    // 103589  jne 0x103591
    X86_AT(c, 0x103589u);
    if (x86_cc(c, 5)) { goto L_103591; }
    X86_TICK(c, 2);
    // 10358b  mov dword ptr [0xe00f8], esi
    X86_AT(c, 0x10358bu);
    wr32((c.sbase[3] + (uint32_t)(0xE00F8u)), c.r[6]);
L_103591:
    X86_TICK(c, 9);
    // 103591  push esi
    X86_AT(c, 0x103591u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 103592  call 0x1034ec
    X86_AT(c, 0x103592u);
    push32(c, 0x103597u); f_001034ec(c); X86_RET(c, 0x103597u);
    X86_TICK(c, 29);
    // 103597  mov eax, dword ptr [edi + 8]
    X86_AT(c, 0x103597u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)));
    // 10359a  add dword ptr [esi + 8], eax
    X86_AT(c, 0x10359au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 10359d  mov eax, dword ptr [edi]
    X86_AT(c, 0x10359du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 10359f  mov dword ptr [esi], eax
    X86_AT(c, 0x10359fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 1035a1  mov edi, esi
    X86_AT(c, 0x1035a1u);
    c.r[7] = c.r[6];
    // 1035a3  xchg esi, eax
    X86_AT(c, 0x1035a3u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 1035a4  and esi, esi
    X86_AT(c, 0x1035a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 1035a6  je 0x1035ab
    X86_AT(c, 0x1035a6u);
    if (x86_cc(c, 4)) { goto L_1035ab; }
L_1035a8:
    X86_TICK(c, 2);
    // 1035a8  mov dword ptr [esi + 4], edi
    X86_AT(c, 0x1035a8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[7]);
L_1035ab:
    X86_TICK(c, 9);
    // 1035ab  push edi
    X86_AT(c, 0x1035abu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1035ac  call 0x103540
    X86_AT(c, 0x1035acu);
    push32(c, 0x1035b1u); f_00103540(c); X86_RET(c, 0x1035b1u);
    X86_TICK(c, 7);
    // 1035b1  jmp 0x1035d6
    X86_AT(c, 0x1035b1u);
    goto L_1035d6;
L_1035b3:
    X86_TICK(c, 12);
    // 1035b3  cmp dword ptr [edi + 8], 0x18
    X86_AT(c, 0x1035b3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0x18u, 0, 4);
    // 1035b7  jb 0x1035d6
    X86_AT(c, 0x1035b7u);
    if (x86_cc(c, 2)) { goto L_1035d6; }
    X86_TICK(c, 13);
    // 1035b9  mov esi, dword ptr [0xe00f0]
    X86_AT(c, 0x1035b9u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xE00F0u)));
    // 1035bf  mov dword ptr [edi + 0x10], esi
    X86_AT(c, 0x1035bfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u)), c.r[6]);
    // 1035c2  and esi, esi
    X86_AT(c, 0x1035c2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 1035c4  je 0x1035c9
    X86_AT(c, 0x1035c4u);
    if (x86_cc(c, 4)) { goto L_1035c9; }
    X86_TICK(c, 2);
    // 1035c6  mov dword ptr [esi + 0x14], edi
    X86_AT(c, 0x1035c6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), c.r[7]);
L_1035c9:
    X86_TICK(c, 4);
    // 1035c9  mov dword ptr [edi + 0x14], 0
    X86_AT(c, 0x1035c9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u)), 0x0u);
    // 1035d0  mov dword ptr [0xe00f0], edi
    X86_AT(c, 0x1035d0u);
    wr32((c.sbase[3] + (uint32_t)(0xE00F0u)), c.r[7]);
L_1035d6:
    X86_TICK(c, 24);
    // 1035d6  pop edi
    X86_AT(c, 0x1035d6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1035d7  pop esi
    X86_AT(c, 0x1035d7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1035d8  leave 
    X86_AT(c, 0x1035d8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1035d9  ret 4
    X86_AT(c, 0x1035d9u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x103540u, "ran off the end of a function");
}
void f_001035f0(X86Cpu& c) {
    X86_TICK(c, 23);
    // 1035f0  enter 4, 0
    X86_AT(c, 0x1035f0u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 1035f4  push ebx
    X86_AT(c, 0x1035f4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 1035f5  push esi
    X86_AT(c, 0x1035f5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1035f6  push edi
    X86_AT(c, 0x1035f6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1035f7  push ebp
    X86_AT(c, 0x1035f7u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 1035f8  push 0x103620
    X86_AT(c, 0x1035f8u);
    { uint32_t v = 0x103620u; push32(c, v); }
    // 1035fd  call 0x103478
    X86_AT(c, 0x1035fdu);
    push32(c, 0x103602u); f_00103478(c); X86_RET(c, 0x103602u);
    X86_TICK(c, 36);
    // 103602  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x103602u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 103609  lea esp, [ebp - 0x10]
    X86_AT(c, 0x103609u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 10360c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x10360cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 10360f  pop edi
    X86_AT(c, 0x10360fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 103610  pop esi
    X86_AT(c, 0x103610u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 103611  pop ebx
    X86_AT(c, 0x103611u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 103612  leave 
    X86_AT(c, 0x103612u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 103613  ret 4
    X86_AT(c, 0x103613u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x1035f0u, "ran off the end of a function");
}
void f_00103620(X86Cpu& c) {
    goto L_103620;
L_103609:
    X86_TICK(c, 34);
    // 103609  lea esp, [ebp - 0x10]
    X86_AT(c, 0x103609u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 10360c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x10360cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 10360f  pop edi
    X86_AT(c, 0x10360fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 103610  pop esi
    X86_AT(c, 0x103610u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 103611  pop ebx
    X86_AT(c, 0x103611u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 103612  leave 
    X86_AT(c, 0x103612u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 103613  ret 4
    X86_AT(c, 0x103613u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
L_103620:
    X86_TICK(c, 29);
    // 103620  push ebp
    X86_AT(c, 0x103620u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 103621  mov ebp, esp
    X86_AT(c, 0x103621u);
    c.r[5] = c.r[4];
    // 103623  push ecx
    X86_AT(c, 0x103623u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 103624  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x103624u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 103627  mov eax, dword ptr [ecx + 8]
    X86_AT(c, 0x103627u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x8u)));
    // 10362a  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x10362au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 10362d  cmp eax, dword ptr [edx + 8]
    X86_AT(c, 0x10362du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u))), 0, 4);
    // 103630  jb 0x103639
    X86_AT(c, 0x103630u);
    if (x86_cc(c, 2)) { goto L_103639; }
    X86_TICK(c, 11);
    // 103632  mov dword ptr [edx - 4], ecx
    X86_AT(c, 0x103632u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFFCu)), c.r[1]);
    // 103635  mov ebp, edx
    X86_AT(c, 0x103635u);
    c.r[5] = c.r[2];
    // 103637  jmp 0x103609
    X86_AT(c, 0x103637u);
    X86_POLL(c, 0x103609u); goto L_103609;
L_103639:
    X86_TICK(c, 16);
    // 103639  leave 
    X86_AT(c, 0x103639u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 10363a  ret 4
    X86_AT(c, 0x10363au);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x103620u, "ran off the end of a function");
}
void f_00103648(X86Cpu& c) {
    X86_TICK(c, 23);
    // 103648  mov eax, dword ptr [0xe00fc]
    X86_AT(c, 0x103648u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE00FCu)));
    // 10364d  add eax, 0x200
    X86_AT(c, 0x10364du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x200u, 0, 4); }
    // 103652  push eax
    X86_AT(c, 0x103652u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 103653  mov eax, dword ptr [0xe00fc]
    X86_AT(c, 0x103653u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE00FCu)));
    // 103658  add eax, 0x100
    X86_AT(c, 0x103658u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x100u, 0, 4); }
    // 10365d  push eax
    X86_AT(c, 0x10365du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10365e  call 0x101f65
    X86_AT(c, 0x10365eu);
    push32(c, 0x103663u); f_00101f65(c); X86_RET(c, 0x103663u);
    X86_TICK(c, 10);
    // 103663  ret 
    X86_AT(c, 0x103663u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x103648u, "ran off the end of a function");
}
void f_00103670(X86Cpu& c) {
    X86_TICK(c, 28);
    // 103670  enter 4, 0
    X86_AT(c, 0x103670u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 103674  push ebx
    X86_AT(c, 0x103674u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 103675  push esi
    X86_AT(c, 0x103675u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 103676  push edi
    X86_AT(c, 0x103676u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 103677  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x103677u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 10367a  cmp dword ptr [0xe00fc], 0
    X86_AT(c, 0x10367au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xE00FCu))), 0x0u, 0, 4);
    // 103681  jne 0x10368d
    X86_AT(c, 0x103681u);
    if (x86_cc(c, 5)) { goto L_10368d; }
    X86_TICK(c, 7);
    // 103683  call 0x101f0a
    X86_AT(c, 0x103683u);
    push32(c, 0x103688u); f_00101f0a(c); X86_RET(c, 0x103688u);
    X86_TICK(c, 2);
    // 103688  mov dword ptr [0xe00fc], eax
    X86_AT(c, 0x103688u);
    wr32((c.sbase[3] + (uint32_t)(0xE00FCu)), c.r[0]);
L_10368d:
    X86_TICK(c, 7);
    // 10368d  call 0x101f16
    X86_AT(c, 0x10368du);
    push32(c, 0x103692u); f_00101f16(c); X86_RET(c, 0x103692u);
    X86_TICK(c, 16);
    // 103692  xchg esi, eax
    X86_AT(c, 0x103692u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 103693  sub esi, dword ptr [0xe00fc]
    X86_AT(c, 0x103693u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xE00FCu))), 0, 4); }
    // 103699  cmp esi, edi
    X86_AT(c, 0x103699u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 10369b  jb 0x1036a8
    X86_AT(c, 0x10369bu);
    if (x86_cc(c, 2)) { goto L_1036a8; }
    X86_TICK(c, 11);
    // 10369d  mov eax, esi
    X86_AT(c, 0x10369du);
    c.r[0] = c.r[6];
    // 10369f  sub eax, edi
    X86_AT(c, 0x10369fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 1036a1  cmp eax, 0x200
    X86_AT(c, 0x1036a1u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 1036a6  jge 0x1036ed
    X86_AT(c, 0x1036a6u);
    if (x86_cc(c, 13)) { goto L_1036ed; }
L_1036a8:
    X86_TICK(c, 7);
    // 1036a8  cmp esi, edi
    X86_AT(c, 0x1036a8u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 1036aa  jae 0x1036c3
    X86_AT(c, 0x1036aau);
    if (x86_cc(c, 3)) { goto L_1036c3; }
    X86_TICK(c, 63);
    // 1036ac  mov eax, edi
    X86_AT(c, 0x1036acu);
    c.r[0] = c.r[7];
    // 1036ae  sub eax, esi
    X86_AT(c, 0x1036aeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 1036b0  add eax, 0xfff
    X86_AT(c, 0x1036b0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xFFFu, 0, 4); }
    // 1036b5  cdq 
    X86_AT(c, 0x1036b5u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 1036b6  mov ecx, 0x1000
    X86_AT(c, 0x1036b6u);
    c.r[1] = 0x1000u;
    // 1036bb  idiv ecx
    X86_AT(c, 0x1036bbu);
    x86_idiv(c, c.r[1], 4, 0x1036bbu);
    // 1036bd  xchg ebx, eax
    X86_AT(c, 0x1036bdu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 1036be  shl ebx, 0xc
    X86_AT(c, 0x1036beu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[3] = r; }
    // 1036c1  jmp 0x1036c8
    X86_AT(c, 0x1036c1u);
    goto L_1036c8;
L_1036c3:
    X86_TICK(c, 2);
    // 1036c3  mov ebx, 0x1000
    X86_AT(c, 0x1036c3u);
    c.r[3] = 0x1000u;
L_1036c8:
    X86_TICK(c, 9);
    // 1036c8  push ebx
    X86_AT(c, 0x1036c8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 1036c9  call 0x101f1c
    X86_AT(c, 0x1036c9u);
    push32(c, 0x1036ceu); f_00101f1c(c); X86_RET(c, 0x1036ceu);
    X86_TICK(c, 7);
    // 1036ce  call 0x101f16
    X86_AT(c, 0x1036ceu);
    push32(c, 0x1036d3u); f_00101f16(c); X86_RET(c, 0x1036d3u);
    X86_TICK(c, 16);
    // 1036d3  xchg esi, eax
    X86_AT(c, 0x1036d3u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 1036d4  sub esi, dword ptr [0xe00fc]
    X86_AT(c, 0x1036d4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xE00FCu))), 0, 4); }
    // 1036da  cmp esi, edi
    X86_AT(c, 0x1036dau);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 1036dc  jb 0x1036e9
    X86_AT(c, 0x1036dcu);
    if (x86_cc(c, 2)) { goto L_1036e9; }
    X86_TICK(c, 11);
    // 1036de  mov eax, esi
    X86_AT(c, 0x1036deu);
    c.r[0] = c.r[6];
    // 1036e0  sub eax, edi
    X86_AT(c, 0x1036e0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 1036e2  cmp eax, 0x200
    X86_AT(c, 0x1036e2u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 1036e7  jge 0x1036ed
    X86_AT(c, 0x1036e7u);
    if (x86_cc(c, 13)) { goto L_1036ed; }
L_1036e9:
    X86_TICK(c, 9);
    // 1036e9  sub eax, eax
    X86_AT(c, 0x1036e9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 1036eb  jmp 0x103702
    X86_AT(c, 0x1036ebu);
    goto L_103702;
L_1036ed:
    X86_TICK(c, 20);
    // 1036ed  mov ebx, dword ptr [0xe00fc]
    X86_AT(c, 0x1036edu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xE00FCu)));
    // 1036f3  mov dword ptr [ebp - 4], ebx
    X86_AT(c, 0x1036f3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[3]);
    // 1036f6  add dword ptr [0xe00fc], edi
    X86_AT(c, 0x1036f6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE00FCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 1036fc  call 0x103648
    X86_AT(c, 0x1036fcu);
    push32(c, 0x103701u); f_00103648(c); X86_RET(c, 0x103701u);
    X86_TICK(c, 3);
    // 103701  xchg ebx, eax
    X86_AT(c, 0x103701u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
L_103702:
    X86_TICK(c, 28);
    // 103702  pop edi
    X86_AT(c, 0x103702u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 103703  pop esi
    X86_AT(c, 0x103703u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 103704  pop ebx
    X86_AT(c, 0x103704u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 103705  leave 
    X86_AT(c, 0x103705u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 103706  ret 4
    X86_AT(c, 0x103706u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x103670u, "ran off the end of a function");
}
void f_00103718(X86Cpu& c) {
    X86_TICK(c, 21);
    // 103718  push ebp
    X86_AT(c, 0x103718u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 103719  mov ebp, esp
    X86_AT(c, 0x103719u);
    c.r[5] = c.r[4];
    // 10371b  push esi
    X86_AT(c, 0x10371bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 10371c  push edi
    X86_AT(c, 0x10371cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10371d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x10371du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 103720  mov eax, 0x18
    X86_AT(c, 0x103720u);
    c.r[0] = 0x18u;
    // 103725  cmp eax, edi
    X86_AT(c, 0x103725u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 103727  jb 0x10372a
    X86_AT(c, 0x103727u);
    if (x86_cc(c, 2)) { goto L_10372a; }
    X86_TICK(c, 3);
    // 103729  xchg edi, eax
    X86_AT(c, 0x103729u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_10372a:
    X86_TICK(c, 7);
    // 10372a  cmp edi, 0x7fffffff
    X86_AT(c, 0x10372au);
    (void)x86_sub(c, c.r[7], 0x7FFFFFFFu, 0, 4);
    // 103730  ja 0x103775
    X86_AT(c, 0x103730u);
    if (x86_cc(c, 7)) { goto L_103775; }
    X86_TICK(c, 9);
    // 103732  push edi
    X86_AT(c, 0x103732u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 103733  call 0x103670
    X86_AT(c, 0x103733u);
    push32(c, 0x103738u); f_00103670(c); X86_RET(c, 0x103738u);
    X86_TICK(c, 10);
    // 103738  xchg esi, eax
    X86_AT(c, 0x103738u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 103739  and esi, esi
    X86_AT(c, 0x103739u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 10373b  je 0x103775
    X86_AT(c, 0x10373bu);
    if (x86_cc(c, 4)) { goto L_103775; }
    X86_TICK(c, 23);
    // 10373d  sub eax, eax
    X86_AT(c, 0x10373du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 10373f  mov dword ptr [esi], eax
    X86_AT(c, 0x10373fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 103741  mov edx, dword ptr [0xe00f8]
    X86_AT(c, 0x103741u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xE00F8u)));
    // 103747  mov dword ptr [esi + 4], edx
    X86_AT(c, 0x103747u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[2]);
    // 10374a  mov byte ptr [esi + 0xf], 0x55
    X86_AT(c, 0x10374au);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu)), 0x55u);
    // 10374e  mov dword ptr [esi + 8], edi
    X86_AT(c, 0x10374eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[7]);
    // 103751  mov byte ptr [esi + 0xe], al
    X86_AT(c, 0x103751u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu)), g8(c, 0));
    // 103754  cmp eax, edx
    X86_AT(c, 0x103754u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 103756  je 0x10375a
    X86_AT(c, 0x103756u);
    if (x86_cc(c, 4)) { goto L_10375a; }
    X86_TICK(c, 2);
    // 103758  mov dword ptr [edx], esi
    X86_AT(c, 0x103758u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[6]);
L_10375a:
    X86_TICK(c, 14);
    // 10375a  mov dword ptr [0xe00f8], esi
    X86_AT(c, 0x10375au);
    wr32((c.sbase[3] + (uint32_t)(0xE00F8u)), c.r[6]);
    // 103760  cmp dword ptr [0xe00f4], 0
    X86_AT(c, 0x103760u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xE00F4u))), 0x0u, 0, 4);
    // 103767  jne 0x10376f
    X86_AT(c, 0x103767u);
    if (x86_cc(c, 5)) { goto L_10376f; }
    X86_TICK(c, 2);
    // 103769  mov dword ptr [0xe00f4], esi
    X86_AT(c, 0x103769u);
    wr32((c.sbase[3] + (uint32_t)(0xE00F4u)), c.r[6]);
L_10376f:
    X86_TICK(c, 9);
    // 10376f  push esi
    X86_AT(c, 0x10376fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 103770  call 0x103540
    X86_AT(c, 0x103770u);
    push32(c, 0x103775u); f_00103540(c); X86_RET(c, 0x103775u);
L_103775:
    X86_TICK(c, 24);
    // 103775  pop edi
    X86_AT(c, 0x103775u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 103776  pop esi
    X86_AT(c, 0x103776u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 103777  leave 
    X86_AT(c, 0x103777u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 103778  ret 4
    X86_AT(c, 0x103778u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x103718u, "ran off the end of a function");
}
void f_00103784(X86Cpu& c) {
    X86_TICK(c, 28);
    // 103784  enter 8, 0
    X86_AT(c, 0x103784u);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 103788  push ebx
    X86_AT(c, 0x103788u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 103789  push esi
    X86_AT(c, 0x103789u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 10378a  push edi
    X86_AT(c, 0x10378au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10378b  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x10378bu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 10378e  cmp byte ptr [0xe00e8], 0
    X86_AT(c, 0x10378eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xE00E8u))), 0x0u, 0, 1);
    // 103795  je 0x10379c
    X86_AT(c, 0x103795u);
    if (x86_cc(c, 4)) { goto L_10379c; }
    X86_TICK(c, 7);
    // 103797  call 0x1039dc
    X86_AT(c, 0x103797u);
    push32(c, 0x10379cu); f_001039dc(c); X86_RET(c, 0x10379cu);
L_10379c:
    X86_TICK(c, 7);
    // 10379c  cmp edi, 0x7fffffec
    X86_AT(c, 0x10379cu);
    (void)x86_sub(c, c.r[7], 0x7FFFFFECu, 0, 4);
    // 1037a2  jbe 0x1037ab
    X86_AT(c, 0x1037a2u);
    if (x86_cc(c, 6)) { goto L_1037ab; }
    X86_TICK(c, 9);
    // 1037a4  sub eax, eax
    X86_AT(c, 0x1037a4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 1037a6  jmp 0x103883
    X86_AT(c, 0x1037a6u);
    goto L_103883;
L_1037ab:
    X86_TICK(c, 10);
    // 1037ab  mov eax, edi
    X86_AT(c, 0x1037abu);
    c.r[0] = c.r[7];
    // 1037ad  rcr eax, 1
    X86_AT(c, 0x1037adu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 1037af  jae 0x1037b2
    X86_AT(c, 0x1037afu);
    if (x86_cc(c, 3)) { goto L_1037b2; }
    X86_TICK(c, 2);
    // 1037b1  inc edi
    X86_AT(c, 0x1037b1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_1037b2:
    X86_TICK(c, 7);
    // 1037b2  test di, 3
    X86_AT(c, 0x1037b2u);
    (void)x86_logic(c, (c.r[7] & 0xFFFFu) & 0x3u, 2);
    // 1037b7  je 0x1037bc
    X86_AT(c, 0x1037b7u);
    if (x86_cc(c, 4)) { goto L_1037bc; }
    X86_TICK(c, 2);
    // 1037b9  add edi, 2
    X86_AT(c, 0x1037b9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
L_1037bc:
    X86_TICK(c, 11);
    // 1037bc  add edi, 0x10
    X86_AT(c, 0x1037bcu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x10u, 0, 4); }
    // 1037bf  push edi
    X86_AT(c, 0x1037bfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1037c0  call 0x1035f0
    X86_AT(c, 0x1037c0u);
    push32(c, 0x1037c5u); f_001035f0(c); X86_RET(c, 0x1037c5u);
    X86_TICK(c, 10);
    // 1037c5  xchg esi, eax
    X86_AT(c, 0x1037c5u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 1037c6  and esi, esi
    X86_AT(c, 0x1037c6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 1037c8  jne 0x1037d7
    X86_AT(c, 0x1037c8u);
    if (x86_cc(c, 5)) { goto L_1037d7; }
    X86_TICK(c, 9);
    // 1037ca  push edi
    X86_AT(c, 0x1037cau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1037cb  call 0x103718
    X86_AT(c, 0x1037cbu);
    push32(c, 0x1037d0u); f_00103718(c); X86_RET(c, 0x1037d0u);
    X86_TICK(c, 9);
    // 1037d0  push edi
    X86_AT(c, 0x1037d0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1037d1  call 0x1035f0
    X86_AT(c, 0x1037d1u);
    push32(c, 0x1037d6u); f_001035f0(c); X86_RET(c, 0x1037d6u);
    X86_TICK(c, 3);
    // 1037d6  xchg esi, eax
    X86_AT(c, 0x1037d6u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_1037d7:
    X86_TICK(c, 7);
    // 1037d7  and esi, esi
    X86_AT(c, 0x1037d7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 1037d9  je 0x10386b
    X86_AT(c, 0x1037d9u);
    if (x86_cc(c, 4)) { goto L_10386b; }
    X86_TICK(c, 9);
    // 1037df  push esi
    X86_AT(c, 0x1037dfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1037e0  call 0x1034ec
    X86_AT(c, 0x1037e0u);
    push32(c, 0x1037e5u); f_001034ec(c); X86_RET(c, 0x1037e5u);
    X86_TICK(c, 15);
    // 1037e5  mov eax, dword ptr [esi + 8]
    X86_AT(c, 0x1037e5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 1037e8  sub eax, edi
    X86_AT(c, 0x1037e8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 1037ea  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x1037eau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 1037ed  cmp eax, 0x10
    X86_AT(c, 0x1037edu);
    (void)x86_sub(c, c.r[0], 0x10u, 0, 4);
    // 1037f0  ja 0x1037fc
    X86_AT(c, 0x1037f0u);
    if (x86_cc(c, 7)) { goto L_1037fc; }
    X86_TICK(c, 6);
    // 1037f2  mov edi, dword ptr [esi + 8]
    X86_AT(c, 0x1037f2u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 1037f5  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0x1037f5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_1037fc:
    X86_TICK(c, 37);
    // 1037fc  mov dword ptr [esi + 8], edi
    X86_AT(c, 0x1037fcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[7]);
    // 1037ff  lea eax, [edi - 0x10]
    X86_AT(c, 0x1037ffu);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFF0u);
    // 103802  mov dword ptr [0xe0100], eax
    X86_AT(c, 0x103802u);
    wr32((c.sbase[3] + (uint32_t)(0xE0100u)), c.r[0]);
    // 103807  mov byte ptr [esi + 0xf], 0x44
    X86_AT(c, 0x103807u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu)), 0x44u);
    // 10380b  mov ax, word ptr [0xe011c]
    X86_AT(c, 0x10380bu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE011Cu))));
    // 103811  mov word ptr [esi + 0xc], ax
    X86_AT(c, 0x103811u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[0] & 0xFFFFu));
    // 103815  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0x103815u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 103818  mov byte ptr [esi + 0xe], al
    X86_AT(c, 0x103818u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu)), g8(c, 0));
    // 10381b  lea eax, [esi + 0x10]
    X86_AT(c, 0x10381bu);
    c.r[0] = (uint32_t)(c.r[6] + 0x10u);
    // 10381e  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x10381eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 103821  push eax
    X86_AT(c, 0x103821u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 103822  mov ecx, dword ptr [ebp + 0x14]
    X86_AT(c, 0x103822u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 103825  call dword ptr [ebp + 0x10]
    X86_AT(c, 0x103825u);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, 0x103828u); x86_call(c, t); X86_RET(c, 0x103828u); }
    X86_TICK(c, 11);
    // 103828  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x103828u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 10382b  and eax, eax
    X86_AT(c, 0x10382bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 10382d  jbe 0x103872
    X86_AT(c, 0x10382du);
    if (x86_cc(c, 6)) { goto L_103872; }
    X86_TICK(c, 37);
    // 10382f  lea ebx, [edi + esi*1]
    X86_AT(c, 0x10382fu);
    c.r[3] = (uint32_t)(c.r[7] + c.r[6]);
    // 103832  mov edx, dword ptr [esi]
    X86_AT(c, 0x103832u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 103834  mov dword ptr [ebx], edx
    X86_AT(c, 0x103834u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[2]);
    // 103836  mov dword ptr [esi], ebx
    X86_AT(c, 0x103836u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[3]);
    // 103838  mov dword ptr [ebx + 4], esi
    X86_AT(c, 0x103838u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[6]);
    // 10383b  mov dword ptr [ebx + 8], eax
    X86_AT(c, 0x10383bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)), c.r[0]);
    // 10383e  mov byte ptr [ebx + 0xf], 0x55
    X86_AT(c, 0x10383eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFu)), 0x55u);
    // 103842  mov byte ptr [ebx + 0xe], 0
    X86_AT(c, 0x103842u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu)), 0x0u);
    // 103846  mov dx, word ptr [0xe011c]
    X86_AT(c, 0x103846u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0xE011Cu))));
    // 10384d  mov word ptr [ebx + 0xc], dx
    X86_AT(c, 0x10384du);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), (c.r[2] & 0xFFFFu));
    // 103851  mov dword ptr [ebx + eax*1 + 4], ebx
    X86_AT(c, 0x103851u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x4u)), c.r[3]);
    // 103855  cmp esi, dword ptr [0xe00f8]
    X86_AT(c, 0x103855u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xE00F8u))), 0, 4);
    // 10385b  jne 0x103863
    X86_AT(c, 0x10385bu);
    if (x86_cc(c, 5)) { goto L_103863; }
    X86_TICK(c, 2);
    // 10385d  mov dword ptr [0xe00f8], ebx
    X86_AT(c, 0x10385du);
    wr32((c.sbase[3] + (uint32_t)(0xE00F8u)), c.r[3]);
L_103863:
    X86_TICK(c, 9);
    // 103863  push ebx
    X86_AT(c, 0x103863u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 103864  call 0x103540
    X86_AT(c, 0x103864u);
    push32(c, 0x103869u); f_00103540(c); X86_RET(c, 0x103869u);
    X86_TICK(c, 7);
    // 103869  jmp 0x103872
    X86_AT(c, 0x103869u);
    goto L_103872;
L_10386b:
    X86_TICK(c, 2);
    // 10386b  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x10386bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_103872:
    X86_TICK(c, 12);
    // 103872  cmp byte ptr [0xe00e8], 0
    X86_AT(c, 0x103872u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xE00E8u))), 0x0u, 0, 1);
    // 103879  je 0x103880
    X86_AT(c, 0x103879u);
    if (x86_cc(c, 4)) { goto L_103880; }
    X86_TICK(c, 7);
    // 10387b  call 0x1039dc
    X86_AT(c, 0x10387bu);
    push32(c, 0x103880u); f_001039dc(c); X86_RET(c, 0x103880u);
L_103880:
    X86_TICK(c, 4);
    // 103880  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x103880u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_103883:
    X86_TICK(c, 28);
    // 103883  pop edi
    X86_AT(c, 0x103883u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 103884  pop esi
    X86_AT(c, 0x103884u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 103885  pop ebx
    X86_AT(c, 0x103885u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 103886  leave 
    X86_AT(c, 0x103886u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 103887  ret 0x10
    X86_AT(c, 0x103887u);
    c.eip = pop32(c); c.r[4] += 0x10u; return;
    x86_fault(c, 0x103784u, "ran off the end of a function");
}
void f_0010388c(X86Cpu& c) {
    X86_TICK(c, 22);
    // 10388c  push ebp
    X86_AT(c, 0x10388cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 10388d  mov ebp, esp
    X86_AT(c, 0x10388du);
    c.r[5] = c.r[4];
    // 10388f  push ecx
    X86_AT(c, 0x10388fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 103890  leave 
    X86_AT(c, 0x103890u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 103891  ret 4
    X86_AT(c, 0x103891u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x10388cu, "ran off the end of a function");
}
void f_0010389c(X86Cpu& c) {
    X86_TICK(c, 29);
    // 10389c  enter 4, 0
    X86_AT(c, 0x10389cu);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 1038a0  push edi
    X86_AT(c, 0x1038a0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1038a1  push ebp
    X86_AT(c, 0x1038a1u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 1038a2  push 0x10388c
    X86_AT(c, 0x1038a2u);
    { uint32_t v = 0x10388Cu; push32(c, v); }
    // 1038a7  push dword ptr [ebp + 8]
    X86_AT(c, 0x1038a7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 1038aa  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x1038aau);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 1038ad  call 0x103784
    X86_AT(c, 0x1038adu);
    push32(c, 0x1038b2u); f_00103784(c); X86_RET(c, 0x1038b2u);
    X86_TICK(c, 14);
    // 1038b2  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x1038b2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 1038b5  cmp byte ptr [0xe00ea], 0
    X86_AT(c, 0x1038b5u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xE00EAu))), 0x0u, 0, 1);
    // 1038bc  je 0x1038d8
    X86_AT(c, 0x1038bcu);
    if (x86_cc(c, 4)) { goto L_1038d8; }
    X86_TICK(c, 7);
    // 1038be  and eax, eax
    X86_AT(c, 0x1038beu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 1038c0  je 0x1038d8
    X86_AT(c, 0x1038c0u);
    if (x86_cc(c, 4)) { goto L_1038d8; }
    X86_TICK(c, 11);
    // 1038c2  mov edx, dword ptr [0xe0100]
    X86_AT(c, 0x1038c2u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xE0100u)));
    // 1038c8  and edx, edx
    X86_AT(c, 0x1038c8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 1038ca  jbe 0x1038d8
    X86_AT(c, 0x1038cau);
    if (x86_cc(c, 6)) { goto L_1038d8; }
    X86_TICK(c, 17);
    // 1038cc  mov al, byte ptr [0xe00e9]
    X86_AT(c, 0x1038ccu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE00E9u))));
    // 1038d1  mov ecx, edx
    X86_AT(c, 0x1038d1u);
    c.r[1] = c.r[2];
    // 1038d3  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0x1038d3u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 1038d6  stosb byte ptr es:[edi], al
    X86_AT(c, 0x1038d6u);
    x86_string(c, 2, 1, 243, 4, 3);
L_1038d8:
    X86_TICK(c, 24);
    // 1038d8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x1038d8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 1038db  pop edi
    X86_AT(c, 0x1038dbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1038dc  leave 
    X86_AT(c, 0x1038dcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1038dd  ret 8
    X86_AT(c, 0x1038ddu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x10389cu, "ran off the end of a function");
}
void f_001038e8(X86Cpu& c) {
    X86_TICK(c, 22);
    // 1038e8  push ebp
    X86_AT(c, 0x1038e8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 1038e9  mov ebp, esp
    X86_AT(c, 0x1038e9u);
    c.r[5] = c.r[4];
    // 1038eb  push dword ptr [ebp + 8]
    X86_AT(c, 0x1038ebu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 1038ee  mov ax, word ptr [0xe00ec]
    X86_AT(c, 0x1038eeu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE00ECu))));
    // 1038f4  push eax
    X86_AT(c, 0x1038f4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1038f5  call 0x10389c
    X86_AT(c, 0x1038f5u);
    push32(c, 0x1038fau); f_0010389c(c); X86_RET(c, 0x1038fau);
    X86_TICK(c, 16);
    // 1038fa  leave 
    X86_AT(c, 0x1038fau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1038fb  ret 4
    X86_AT(c, 0x1038fbu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x1038e8u, "ran off the end of a function");
}
void f_00103904(X86Cpu& c) {
    X86_TICK(c, 26);
    // 103904  push ebp
    X86_AT(c, 0x103904u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 103905  mov ebp, esp
    X86_AT(c, 0x103905u);
    c.r[5] = c.r[4];
    // 103907  push ecx
    X86_AT(c, 0x103907u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 103908  push ebx
    X86_AT(c, 0x103908u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 103909  mov ebx, dword ptr [ebp - 4]
    X86_AT(c, 0x103909u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 10390c  push dword ptr [ebx + 8]
    X86_AT(c, 0x10390cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 10390f  push 6
    X86_AT(c, 0x10390fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 103911  call 0x104fe4
    X86_AT(c, 0x103911u);
    push32(c, 0x103916u); f_00104fe4(c); X86_RET(c, 0x103916u);
    X86_TICK(c, 9);
    // 103916  mov ebp, ebx
    X86_AT(c, 0x103916u);
    c.r[5] = c.r[3];
    // 103918  jmp 0x1039bc
    X86_AT(c, 0x103918u);
    goto L_1039bc;
L_1039bc:
    X86_TICK(c, 30);
    // 1039bc  lea esp, [ebp - 0x10]
    X86_AT(c, 0x1039bcu);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 1039bf  pop edi
    X86_AT(c, 0x1039bfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1039c0  pop esi
    X86_AT(c, 0x1039c0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1039c1  pop ebx
    X86_AT(c, 0x1039c1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 1039c2  leave 
    X86_AT(c, 0x1039c2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1039c3  ret 4
    X86_AT(c, 0x1039c3u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x103904u, "ran off the end of a function");
}
void f_00103922(X86Cpu& c) {
    X86_TICK(c, 24);
    // 103922  enter 4, 0
    X86_AT(c, 0x103922u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 103926  push ebx
    X86_AT(c, 0x103926u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 103927  push esi
    X86_AT(c, 0x103927u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 103928  push edi
    X86_AT(c, 0x103928u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 103929  cmp dword ptr [ebp + 8], 0
    X86_AT(c, 0x103929u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 4);
    // 10392d  je 0x1039bf
    X86_AT(c, 0x10392du);
    if (x86_cc(c, 4)) { goto L_1039bf; }
    X86_TICK(c, 25);
    // 103933  add dword ptr [ebp + 8], 0xfffffff0
    X86_AT(c, 0x103933u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF0u, 0, 4)); }
    // 103937  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x103937u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 10393a  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x10393au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 10393d  cmp byte ptr [0xe00e8], 0
    X86_AT(c, 0x10393du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xE00E8u))), 0x0u, 0, 1);
    // 103944  je 0x10394b
    X86_AT(c, 0x103944u);
    if (x86_cc(c, 4)) { goto L_10394b; }
    X86_TICK(c, 7);
    // 103946  call 0x1039dc
    X86_AT(c, 0x103946u);
    push32(c, 0x10394bu); f_001039dc(c); X86_RET(c, 0x10394bu);
L_10394b:
    X86_TICK(c, 16);
    // 10394b  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x10394bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 10394e  cmp byte ptr [eax + 0xf], 0x44
    X86_AT(c, 0x10394eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFu))), 0x44u, 0, 1);
    // 103952  jne 0x103962
    X86_AT(c, 0x103952u);
    if (x86_cc(c, 5)) { goto L_103962; }
    X86_TICK(c, 15);
    // 103954  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x103954u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 103957  mov edx, dword ptr [eax]
    X86_AT(c, 0x103957u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 103959  and edx, edx
    X86_AT(c, 0x103959u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 10395b  je 0x103969
    X86_AT(c, 0x10395bu);
    if (x86_cc(c, 4)) { goto L_103969; }
    X86_TICK(c, 11);
    // 10395d  cmp eax, dword ptr [edx + 4]
    X86_AT(c, 0x10395du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u))), 0, 4);
    // 103960  je 0x103969
    X86_AT(c, 0x103960u);
    if (x86_cc(c, 4)) { goto L_103969; }
L_103962:
    X86_TICK(c, 9);
    // 103962  mov ecx, ebp
    X86_AT(c, 0x103962u);
    c.r[1] = c.r[5];
    // 103964  call 0x103904
    X86_AT(c, 0x103964u);
    push32(c, 0x103969u); f_00103904(c); X86_RET(c, 0x103969u);
L_103969:
    X86_TICK(c, 15);
    // 103969  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x103969u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 10396c  mov byte ptr [eax + 0xf], 0x55
    X86_AT(c, 0x10396cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFu)), 0x55u);
    // 103970  push eax
    X86_AT(c, 0x103970u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 103971  call 0x103540
    X86_AT(c, 0x103971u);
    push32(c, 0x103976u); f_00103540(c); X86_RET(c, 0x103976u);
    X86_TICK(c, 16);
    // 103976  mov eax, dword ptr [0xe00f8]
    X86_AT(c, 0x103976u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE00F8u)));
    // 10397b  cmp byte ptr [eax + 0xf], 0x55
    X86_AT(c, 0x10397bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFu))), 0x55u, 0, 1);
    // 10397f  jne 0x1039ae
    X86_AT(c, 0x10397fu);
    if (x86_cc(c, 5)) { goto L_1039ae; }
    X86_TICK(c, 28);
    // 103981  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x103981u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 103984  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0x103984u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 103987  neg edx
    X86_AT(c, 0x103987u);
    { uint32_t v = c.r[2]; c.r[2] = x86_neg(c, v, 4); }
    // 103989  add dword ptr [0xe00fc], edx
    X86_AT(c, 0x103989u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE00FCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 10398f  mov eax, dword ptr [eax + 4]
    X86_AT(c, 0x10398fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 103992  mov dword ptr [0xe00f8], eax
    X86_AT(c, 0x103992u);
    wr32((c.sbase[3] + (uint32_t)(0xE00F8u)), c.r[0]);
    // 103997  and eax, eax
    X86_AT(c, 0x103997u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 103999  je 0x1039a1
    X86_AT(c, 0x103999u);
    if (x86_cc(c, 4)) { goto L_1039a1; }
    X86_TICK(c, 2);
    // 10399b  mov dword ptr [eax], 0
    X86_AT(c, 0x10399bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
L_1039a1:
    X86_TICK(c, 12);
    // 1039a1  push dword ptr [ebp - 4]
    X86_AT(c, 0x1039a1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 1039a4  call 0x1034ec
    X86_AT(c, 0x1039a4u);
    push32(c, 0x1039a9u); f_001034ec(c); X86_RET(c, 0x1039a9u);
    X86_TICK(c, 7);
    // 1039a9  call 0x103648
    X86_AT(c, 0x1039a9u);
    push32(c, 0x1039aeu); f_00103648(c); X86_RET(c, 0x1039aeu);
L_1039ae:
    X86_TICK(c, 12);
    // 1039ae  cmp byte ptr [0xe00e8], 0
    X86_AT(c, 0x1039aeu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xE00E8u))), 0x0u, 0, 1);
    // 1039b5  je 0x1039bc
    X86_AT(c, 0x1039b5u);
    if (x86_cc(c, 4)) { goto L_1039bc; }
    X86_TICK(c, 7);
    // 1039b7  call 0x1039dc
    X86_AT(c, 0x1039b7u);
    push32(c, 0x1039bcu); f_001039dc(c); X86_RET(c, 0x1039bcu);
L_1039bc:
    X86_TICK(c, 2);
    // 1039bc  lea esp, [ebp - 0x10]
    X86_AT(c, 0x1039bcu);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
L_1039bf:
    X86_TICK(c, 28);
    // 1039bf  pop edi
    X86_AT(c, 0x1039bfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1039c0  pop esi
    X86_AT(c, 0x1039c0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1039c1  pop ebx
    X86_AT(c, 0x1039c1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 1039c2  leave 
    X86_AT(c, 0x1039c2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1039c3  ret 4
    X86_AT(c, 0x1039c3u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x103922u, "ran off the end of a function");
}
void f_001039dc(X86Cpu& c) {
    X86_TICK(c, 15);
    // 1039dc  push ebp
    X86_AT(c, 0x1039dcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 1039dd  mov ebp, esp
    X86_AT(c, 0x1039ddu);
    c.r[5] = c.r[4];
    // 1039df  push ebp
    X86_AT(c, 0x1039dfu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 1039e0  push 0x1039f4
    X86_AT(c, 0x1039e0u);
    { uint32_t v = 0x1039F4u; push32(c, v); }
    // 1039e5  call 0x103420
    X86_AT(c, 0x1039e5u);
    push32(c, 0x1039eau); f_00103420(c); X86_RET(c, 0x1039eau);
    X86_TICK(c, 16);
    // 1039ea  leave 
    X86_AT(c, 0x1039eau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1039eb  ret 
    X86_AT(c, 0x1039ebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1039dcu, "ran off the end of a function");
}
void f_001039f4(X86Cpu& c) {
    X86_TICK(c, 22);
    // 1039f4  push ebp
    X86_AT(c, 0x1039f4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 1039f5  mov ebp, esp
    X86_AT(c, 0x1039f5u);
    c.r[5] = c.r[4];
    // 1039f7  push ecx
    X86_AT(c, 0x1039f7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 1039f8  leave 
    X86_AT(c, 0x1039f8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1039f9  ret 4
    X86_AT(c, 0x1039f9u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x1039f4u, "ran off the end of a function");
}
void f_001039fc(X86Cpu& c) {
    X86_TICK(c, 13);
    // 1039fc  inc byte ptr [0xe0121]
    X86_AT(c, 0x1039fcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE0121u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 103a02  call 0x104fbc
    X86_AT(c, 0x103a02u);
    push32(c, 0x103a07u); f_00104fbc(c); X86_RET(c, 0x103a07u);
    X86_TICK(c, 7);
    // 103a07  call 0x103274
    X86_AT(c, 0x103a07u);
    push32(c, 0x103a0cu); f_00103274(c); X86_RET(c, 0x103a0cu);
    X86_TICK(c, 7);
    // 103a0c  call 0x103130
    X86_AT(c, 0x103a0cu);
    push32(c, 0x103a11u); f_00103130(c); X86_RET(c, 0x103a11u);
    X86_TICK(c, 7);
    // 103a11  call 0x101a31
    X86_AT(c, 0x103a11u);
    push32(c, 0x103a16u); f_00101a31(c); X86_RET(c, 0x103a16u);
    X86_TICK(c, 13);
    // 103a16  mov al, byte ptr [0xe0120]
    X86_AT(c, 0x103a16u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE0120u))));
    // 103a1b  push eax
    X86_AT(c, 0x103a1bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 103a1c  call 0x103348
    X86_AT(c, 0x103a1cu);
    push32(c, 0x103a21u); f_00103348(c); X86_RET(c, 0x103a21u);
    X86_TICK(c, 10);
    // 103a21  ret 
    X86_AT(c, 0x103a21u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1039fcu, "ran off the end of a function");
}
void f_00103a24(X86Cpu& c) {
    X86_TICK(c, 16);
    // 103a24  push ebp
    X86_AT(c, 0x103a24u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 103a25  mov ebp, esp
    X86_AT(c, 0x103a25u);
    c.r[5] = c.r[4];
    // 103a27  cmp byte ptr [0xe0122], 0
    X86_AT(c, 0x103a27u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xE0122u))), 0x0u, 0, 1);
    // 103a2e  je 0x103a3d
    X86_AT(c, 0x103a2eu);
    if (x86_cc(c, 4)) { goto L_103a3d; }
    X86_TICK(c, 13);
    // 103a30  mov al, byte ptr [0xe0120]
    X86_AT(c, 0x103a30u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE0120u))));
    // 103a35  push eax
    X86_AT(c, 0x103a35u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 103a36  call 0x103348
    X86_AT(c, 0x103a36u);
    push32(c, 0x103a3bu); f_00103348(c); X86_RET(c, 0x103a3bu);
    X86_TICK(c, 7);
    // 103a3b  jmp 0x103a44
    X86_AT(c, 0x103a3bu);
    goto L_103a44;
L_103a3d:
    X86_TICK(c, 2);
    // 103a3d  mov byte ptr [0xe0122], 1
    X86_AT(c, 0x103a3du);
    wr8((c.sbase[3] + (uint32_t)(0xE0122u)), 0x1u);
L_103a44:
    X86_TICK(c, 13);
    // 103a44  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0x103a44u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 103a47  mov byte ptr [0xe0120], al
    X86_AT(c, 0x103a47u);
    wr8((c.sbase[3] + (uint32_t)(0xE0120u)), g8(c, 0));
    // 103a4c  call 0x1039fc
    X86_AT(c, 0x103a4cu);
    push32(c, 0x103a51u); f_001039fc(c); X86_RET(c, 0x103a51u);
    X86_TICK(c, 16);
    // 103a51  leave 
    X86_AT(c, 0x103a51u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 103a52  ret 4
    X86_AT(c, 0x103a52u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x103a24u, "ran off the end of a function");
}
void f_00103a58(X86Cpu& c) {
    X86_TICK(c, 16);
    // 103a58  push ebp
    X86_AT(c, 0x103a58u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 103a59  mov ebp, esp
    X86_AT(c, 0x103a59u);
    c.r[5] = c.r[4];
    // 103a5b  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x103a5bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 103a5e  call 0x103304
    X86_AT(c, 0x103a5eu);
    push32(c, 0x103a63u); f_00103304(c); X86_RET(c, 0x103a63u);
    X86_TICK(c, 23);
    // 103a63  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x103a63u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 103a66  mov dword ptr [0xe00c4], eax
    X86_AT(c, 0x103a66u);
    wr32((c.sbase[3] + (uint32_t)(0xE00C4u)), c.r[0]);
    // 103a6b  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x103a6bu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 103a6f  mov dword ptr [0xe00c0], eax
    X86_AT(c, 0x103a6fu);
    wr32((c.sbase[3] + (uint32_t)(0xE00C0u)), c.r[0]);
    // 103a74  push 0x3f
    X86_AT(c, 0x103a74u);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 103a76  call 0x103290
    X86_AT(c, 0x103a76u);
    push32(c, 0x103a7bu); f_00103290(c); X86_RET(c, 0x103a7bu);
    X86_TICK(c, 20);
    // 103a7b  mov eax, dword ptr [0xe00bc]
    X86_AT(c, 0x103a7bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE00BCu)));
    // 103a80  leave 
    X86_AT(c, 0x103a80u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 103a81  ret 0xc
    X86_AT(c, 0x103a81u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x103a58u, "ran off the end of a function");
}
void f_00103a84(X86Cpu& c) {
    X86_TICK(c, 22);
    // 103a84  push ebp
    X86_AT(c, 0x103a84u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 103a85  mov ebp, esp
    X86_AT(c, 0x103a85u);
    c.r[5] = c.r[4];
    // 103a87  push edi
    X86_AT(c, 0x103a87u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 103a88  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x103a88u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 103a8b  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x103a8bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 103a8e  call 0x103304
    X86_AT(c, 0x103a8eu);
    push32(c, 0x103a93u); f_00103304(c); X86_RET(c, 0x103a93u);
    X86_TICK(c, 19);
    // 103a93  mov dword ptr [0xe00c4], edi
    X86_AT(c, 0x103a93u);
    wr32((c.sbase[3] + (uint32_t)(0xE00C4u)), c.r[7]);
    // 103a99  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x103a99u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 103a9d  mov dword ptr [0xe00c0], eax
    X86_AT(c, 0x103a9du);
    wr32((c.sbase[3] + (uint32_t)(0xE00C0u)), c.r[0]);
    // 103aa2  push 0x40
    X86_AT(c, 0x103aa2u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 103aa4  call 0x103290
    X86_AT(c, 0x103aa4u);
    push32(c, 0x103aa9u); f_00103290(c); X86_RET(c, 0x103aa9u);
    X86_TICK(c, 11);
    // 103aa9  cmp edi, dword ptr [0xe00bc]
    X86_AT(c, 0x103aa9u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xE00BCu))), 0, 4);
    // 103aaf  jbe 0x103ac4
    X86_AT(c, 0x103aafu);
    if (x86_cc(c, 6)) { goto L_103ac4; }
    X86_TICK(c, 12);
    // 103ab1  cmp word ptr [0xe00b6], 0
    X86_AT(c, 0x103ab1u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xE00B6u))), 0x0u, 0, 2);
    // 103ab9  jne 0x103ac4
    X86_AT(c, 0x103ab9u);
    if (x86_cc(c, 5)) { goto L_103ac4; }
    X86_TICK(c, 2);
    // 103abb  mov word ptr [0xe00b6], 0x15
    X86_AT(c, 0x103abbu);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), 0x15u);
L_103ac4:
    X86_TICK(c, 24);
    // 103ac4  mov eax, dword ptr [0xe00bc]
    X86_AT(c, 0x103ac4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE00BCu)));
    // 103ac9  pop edi
    X86_AT(c, 0x103ac9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 103aca  leave 
    X86_AT(c, 0x103acau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 103acb  ret 0xc
    X86_AT(c, 0x103acbu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x103a84u, "ran off the end of a function");
}
void f_00103ad0(X86Cpu& c) {
    X86_TICK(c, 23);
    // 103ad0  push ebp
    X86_AT(c, 0x103ad0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 103ad1  mov ebp, esp
    X86_AT(c, 0x103ad1u);
    c.r[5] = c.r[4];
    // 103ad3  push 0
    X86_AT(c, 0x103ad3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 103ad5  lea eax, [ebp + 8]
    X86_AT(c, 0x103ad5u);
    c.r[0] = (uint32_t)(c.r[5] + 0x8u);
    // 103ad8  push eax
    X86_AT(c, 0x103ad8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 103ad9  mov al, byte ptr [eax]
    X86_AT(c, 0x103ad9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 103adb  push eax
    X86_AT(c, 0x103adbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 103adc  call 0x103a84
    X86_AT(c, 0x103adcu);
    push32(c, 0x103ae1u); f_00103a84(c); X86_RET(c, 0x103ae1u);
    X86_TICK(c, 16);
    // 103ae1  leave 
    X86_AT(c, 0x103ae1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 103ae2  ret 4
    X86_AT(c, 0x103ae2u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x103ad0u, "ran off the end of a function");
}
void f_00103ae8(X86Cpu& c) {
    X86_TICK(c, 23);
    // 103ae8  push ebp
    X86_AT(c, 0x103ae8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 103ae9  mov ebp, esp
    X86_AT(c, 0x103ae9u);
    c.r[5] = c.r[4];
    // 103aeb  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x103aebu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 103aef  mov dword ptr [0xe00c0], eax
    X86_AT(c, 0x103aefu);
    wr32((c.sbase[3] + (uint32_t)(0xE00C0u)), c.r[0]);
    // 103af4  mov byte ptr [0xe00bc], 0
    X86_AT(c, 0x103af4u);
    wr8((c.sbase[3] + (uint32_t)(0xE00BCu)), 0x0u);
    // 103afb  push 0x44
    X86_AT(c, 0x103afbu);
    { uint32_t v = 0x44u; push32(c, v); }
    // 103afd  call 0x103290
    X86_AT(c, 0x103afdu);
    push32(c, 0x103b02u); f_00103290(c); X86_RET(c, 0x103b02u);
    X86_TICK(c, 12);
    // 103b02  test byte ptr [0xe00c8], 0x80
    X86_AT(c, 0x103b02u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xE00C8u))) & 0x80u, 1);
    // 103b09  jne 0x103b0f
    X86_AT(c, 0x103b09u);
    if (x86_cc(c, 5)) { goto L_103b0f; }
    X86_TICK(c, 9);
    // 103b0b  sub eax, eax
    X86_AT(c, 0x103b0bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 103b0d  jmp 0x103b2b
    X86_AT(c, 0x103b0du);
    goto L_103b2b;
L_103b0f:
    X86_TICK(c, 12);
    // 103b0f  test byte ptr [0xe00c8], 2
    X86_AT(c, 0x103b0fu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xE00C8u))) & 0x2u, 1);
    // 103b16  je 0x103b1c
    X86_AT(c, 0x103b16u);
    if (x86_cc(c, 4)) { goto L_103b1c; }
    X86_TICK(c, 9);
    // 103b18  mov al, 2
    X86_AT(c, 0x103b18u);
    s8(c, 0, 0x2u);
    // 103b1a  jmp 0x103b2b
    X86_AT(c, 0x103b1au);
    goto L_103b2b;
L_103b1c:
    X86_TICK(c, 12);
    // 103b1c  test byte ptr [0xe00c8], 1
    X86_AT(c, 0x103b1cu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xE00C8u))) & 0x1u, 1);
    // 103b23  je 0x103b29
    X86_AT(c, 0x103b23u);
    if (x86_cc(c, 4)) { goto L_103b29; }
    X86_TICK(c, 9);
    // 103b25  mov al, 1
    X86_AT(c, 0x103b25u);
    s8(c, 0, 0x1u);
    // 103b27  jmp 0x103b2b
    X86_AT(c, 0x103b27u);
    goto L_103b2b;
L_103b29:
    X86_TICK(c, 2);
    // 103b29  mov al, 4
    X86_AT(c, 0x103b29u);
    s8(c, 0, 0x4u);
L_103b2b:
    X86_TICK(c, 16);
    // 103b2b  leave 
    X86_AT(c, 0x103b2bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 103b2c  ret 4
    X86_AT(c, 0x103b2cu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x103ae8u, "ran off the end of a function");
}
void f_00103b30(X86Cpu& c) {
    X86_TICK(c, 45);
    // 103b30  enter 4, 0
    X86_AT(c, 0x103b30u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 103b34  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x103b34u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 103b38  mov dword ptr [0xe00c0], eax
    X86_AT(c, 0x103b38u);
    wr32((c.sbase[3] + (uint32_t)(0xE00C0u)), c.r[0]);
    // 103b3d  mov al, byte ptr [ebp + 0x10]
    X86_AT(c, 0x103b3du);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 103b40  mov byte ptr [0xe00bc], al
    X86_AT(c, 0x103b40u);
    wr8((c.sbase[3] + (uint32_t)(0xE00BCu)), g8(c, 0));
    // 103b45  movzx eax, word ptr [ebp + 0xe]
    X86_AT(c, 0x103b45u);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xEu)));
    // 103b49  mov dword ptr [0xe00c4], eax
    X86_AT(c, 0x103b49u);
    wr32((c.sbase[3] + (uint32_t)(0xE00C4u)), c.r[0]);
    // 103b4e  movzx eax, word ptr [ebp + 0xc]
    X86_AT(c, 0x103b4eu);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 103b52  mov dword ptr [0xe00c8], eax
    X86_AT(c, 0x103b52u);
    wr32((c.sbase[3] + (uint32_t)(0xE00C8u)), c.r[0]);
    // 103b57  push 0x42
    X86_AT(c, 0x103b57u);
    { uint32_t v = 0x42u; push32(c, v); }
    // 103b59  call 0x103290
    X86_AT(c, 0x103b59u);
    push32(c, 0x103b5eu); f_00103290(c); X86_RET(c, 0x103b5eu);
    X86_TICK(c, 32);
    // 103b5e  mov ax, word ptr [0xe00c8]
    X86_AT(c, 0x103b5eu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE00C8u))));
    // 103b64  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x103b64u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 103b68  mov ax, word ptr [0xe00bc]
    X86_AT(c, 0x103b68u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE00BCu))));
    // 103b6e  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x103b6eu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 103b72  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x103b72u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 103b75  leave 
    X86_AT(c, 0x103b75u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 103b76  ret 0xc
    X86_AT(c, 0x103b76u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x103b30u, "ran off the end of a function");
}
void f_00103b7c(X86Cpu& c) {
    X86_TICK(c, 13);
    // 103b7c  push ebp
    X86_AT(c, 0x103b7cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 103b7d  mov ebp, esp
    X86_AT(c, 0x103b7du);
    c.r[5] = c.r[4];
    // 103b7f  push 0x2a
    X86_AT(c, 0x103b7fu);
    { uint32_t v = 0x2Au; push32(c, v); }
    // 103b81  call 0x103290
    X86_AT(c, 0x103b81u);
    push32(c, 0x103b86u); f_00103290(c); X86_RET(c, 0x103b86u);
    X86_TICK(c, 50);
    // 103b86  mov ax, word ptr [0xe00c4]
    X86_AT(c, 0x103b86u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE00C4u))));
    // 103b8c  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x103b8cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 103b8f  mov word ptr [edx], ax
    X86_AT(c, 0x103b8fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[2])), (c.r[0] & 0xFFFFu));
    // 103b92  movzx eax, byte ptr [0xe00c8]
    X86_AT(c, 0x103b92u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xE00C8u)));
    // 103b99  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x103b99u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 103b9c  mov word ptr [edx], ax
    X86_AT(c, 0x103b9cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[2])), (c.r[0] & 0xFFFFu));
    // 103b9f  movzx eax, byte ptr [0xe00c9]
    X86_AT(c, 0x103b9fu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xE00C9u)));
    // 103ba6  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x103ba6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 103ba9  mov word ptr [edx], ax
    X86_AT(c, 0x103ba9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[2])), (c.r[0] & 0xFFFFu));
    // 103bac  leave 
    X86_AT(c, 0x103bacu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 103bad  ret 0xc
    X86_AT(c, 0x103badu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x103b7cu, "ran off the end of a function");
}
void f_00103bb0(X86Cpu& c) {
    X86_TICK(c, 13);
    // 103bb0  push ebp
    X86_AT(c, 0x103bb0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 103bb1  mov ebp, esp
    X86_AT(c, 0x103bb1u);
    c.r[5] = c.r[4];
    // 103bb3  push 0x2c
    X86_AT(c, 0x103bb3u);
    { uint32_t v = 0x2Cu; push32(c, v); }
    // 103bb5  call 0x103290
    X86_AT(c, 0x103bb5u);
    push32(c, 0x103bbau); f_00103290(c); X86_RET(c, 0x103bbau);
    X86_TICK(c, 52);
    // 103bba  movzx eax, byte ptr [0xe00c5]
    X86_AT(c, 0x103bbau);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xE00C5u)));
    // 103bc1  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x103bc1u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 103bc4  mov word ptr [edx], ax
    X86_AT(c, 0x103bc4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[2])), (c.r[0] & 0xFFFFu));
    // 103bc7  movzx eax, byte ptr [0xe00c4]
    X86_AT(c, 0x103bc7u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xE00C4u)));
    // 103bce  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x103bceu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 103bd1  mov word ptr [edx], ax
    X86_AT(c, 0x103bd1u);
    wr16((c.sbase[3] + (uint32_t)(c.r[2])), (c.r[0] & 0xFFFFu));
    // 103bd4  movzx eax, byte ptr [0xe00c9]
    X86_AT(c, 0x103bd4u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xE00C9u)));
    // 103bdb  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x103bdbu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 103bde  mov word ptr [edx], ax
    X86_AT(c, 0x103bdeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[2])), (c.r[0] & 0xFFFFu));
    // 103be1  leave 
    X86_AT(c, 0x103be1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 103be2  ret 0xc
    X86_AT(c, 0x103be2u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x103bb0u, "ran off the end of a function");
}
void f_00103be8(X86Cpu& c) {
    X86_TICK(c, 17);
    // 103be8  enter 4, 0
    X86_AT(c, 0x103be8u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 103bec  push edi
    X86_AT(c, 0x103becu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 103bed  push 0x2c
    X86_AT(c, 0x103bedu);
    { uint32_t v = 0x2Cu; push32(c, v); }
    // 103bef  call 0x103290
    X86_AT(c, 0x103befu);
    push32(c, 0x103bf4u); f_00103290(c); X86_RET(c, 0x103bf4u);
    X86_TICK(c, 96);
    // 103bf4  mov edi, 0xe10
    X86_AT(c, 0x103bf4u);
    c.r[7] = 0xE10u;
    // 103bf9  movzx ecx, byte ptr [0xe00c5]
    X86_AT(c, 0x103bf9u);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(0xE00C5u)));
    // 103c00  imul edi, ecx
    X86_AT(c, 0x103c00u);
    c.r[7] = x86_imul2(c, c.r[7], c.r[1], 4);
    // 103c03  movzx eax, byte ptr [0xe00c4]
    X86_AT(c, 0x103c03u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xE00C4u)));
    // 103c0a  lea eax, [eax + eax*4]
    X86_AT(c, 0x103c0au);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 103c0d  lea eax, [eax*4]
    X86_AT(c, 0x103c0du);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 103c14  lea eax, [eax + eax*2]
    X86_AT(c, 0x103c14u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 103c17  add eax, edi
    X86_AT(c, 0x103c17u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 103c19  xchg edi, eax
    X86_AT(c, 0x103c19u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 103c1a  movzx eax, byte ptr [0xe00c9]
    X86_AT(c, 0x103c1au);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xE00C9u)));
    // 103c21  add edi, eax
    X86_AT(c, 0x103c21u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 103c23  lea edi, [edi + edi*4]
    X86_AT(c, 0x103c23u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 103c26  lea edi, [edi + edi*4]
    X86_AT(c, 0x103c26u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 103c29  lea edi, [edi*4]
    X86_AT(c, 0x103c29u);
    c.r[7] = (uint32_t)(c.r[7] * 4);
    // 103c30  movzx eax, byte ptr [0xe00c8]
    X86_AT(c, 0x103c30u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xE00C8u)));
    // 103c37  add eax, edi
    X86_AT(c, 0x103c37u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 103c39  xchg edi, eax
    X86_AT(c, 0x103c39u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 103c3a  mov dword ptr [ebp - 4], edi
    X86_AT(c, 0x103c3au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[7]);
    // 103c3d  mov eax, edi
    X86_AT(c, 0x103c3du);
    c.r[0] = c.r[7];
    // 103c3f  pop edi
    X86_AT(c, 0x103c3fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 103c40  leave 
    X86_AT(c, 0x103c40u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 103c41  ret 
    X86_AT(c, 0x103c41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x103be8u, "ran off the end of a function");
}
void f_00103c44(X86Cpu& c) {
    X86_TICK(c, 32);
    // 103c44  esc 0xf, byte ptr [0xe0128]
    X86_AT(c, 0x103c44u);
    // 103c4a  wait 
    X86_AT(c, 0x103c4au);
    // 103c4b  mov ax, word ptr [0xe0128]
    X86_AT(c, 0x103c4bu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE0128u))));
    // 103c51  and ax, 0xf3ff
    X86_AT(c, 0x103c51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xF3FFu, 2)); }
    // 103c55  or eax, ecx
    X86_AT(c, 0x103c55u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[1], 4); }
    // 103c57  mov word ptr [0xe0126], ax
    X86_AT(c, 0x103c57u);
    wr16((c.sbase[3] + (uint32_t)(0xE0126u)), (c.r[0] & 0xFFFFu));
    // 103c5d  esc 0xd, byte ptr [0xe0126]
    X86_AT(c, 0x103c5du);
    // 103c63  ret 
    X86_AT(c, 0x103c63u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x103c44u, "ran off the end of a function");
}
void f_00103c64(X86Cpu& c) {
    X86_TICK(c, 20);
    // 103c64  push eax
    X86_AT(c, 0x103c64u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 103c65  esc 0x3c, al
    X86_AT(c, 0x103c65u);
    // 103c67  wait 
    X86_AT(c, 0x103c67u);
    // 103c68  and ax, 0x4100
    X86_AT(c, 0x103c68u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x4100u, 2)); }
    // 103c6c  cmp ax, 0x4000
    X86_AT(c, 0x103c6cu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x4000u, 0, 2);
    // 103c70  je 0x103c76
    X86_AT(c, 0x103c70u);
    if (x86_cc(c, 4)) { goto L_103c76; }
    X86_TICK(c, 2);
    // 103c72  cmp ax, 1
    X86_AT(c, 0x103c72u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x1u, 0, 2);
L_103c76:
    X86_TICK(c, 14);
    // 103c76  pop eax
    X86_AT(c, 0x103c76u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 103c77  ret 
    X86_AT(c, 0x103c77u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x103c64u, "ran off the end of a function");
}
void f_00103c8d(X86Cpu& c) {
    X86_TICK(c, 27);
    // 103c8d  xor edx, edx
    X86_AT(c, 0x103c8du);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 103c8f  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0x103c8fu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 103c93  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x103c93u);
    // 103c95  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x103c95u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 103c99  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x103c99u);
    // 103c9b  mov eax, dword ptr cs:[edx + 0x103c81]
    X86_AT(c, 0x103c9bu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[2] + 0x103C81u)));
    // 103ca2  call eax
    X86_AT(c, 0x103ca2u);
    { uint32_t t = c.r[0]; push32(c, 0x103ca4u); x86_call(c, t); X86_RET(c, 0x103ca4u); }
    X86_TICK(c, 13);
    // 103ca4  esc 0x1f, byte ptr [ecx]
    X86_AT(c, 0x103ca4u);
    // 103ca6  ret 8
    X86_AT(c, 0x103ca6u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x103c8du, "ran off the end of a function");
}
void f_00103ca9(X86Cpu& c) {
    goto L_103ca9;
L_103c8f:
    X86_TICK(c, 25);
    // 103c8f  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0x103c8fu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 103c93  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x103c93u);
    // 103c95  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x103c95u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 103c99  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x103c99u);
    // 103c9b  mov eax, dword ptr cs:[edx + 0x103c81]
    X86_AT(c, 0x103c9bu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[2] + 0x103C81u)));
    // 103ca2  call eax
    X86_AT(c, 0x103ca2u);
    { uint32_t t = c.r[0]; push32(c, 0x103ca4u); x86_call(c, t); X86_RET(c, 0x103ca4u); }
    X86_TICK(c, 13);
    // 103ca4  esc 0x1f, byte ptr [ecx]
    X86_AT(c, 0x103ca4u);
    // 103ca6  ret 8
    X86_AT(c, 0x103ca6u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_103ca9:
    X86_TICK(c, 9);
    // 103ca9  mov edx, 4
    X86_AT(c, 0x103ca9u);
    c.r[2] = 0x4u;
    // 103cae  jmp 0x103c8f
    X86_AT(c, 0x103caeu);
    X86_POLL(c, 0x103c8fu); goto L_103c8f;
    x86_fault(c, 0x103ca9u, "ran off the end of a function");
}
void f_00103cb0(X86Cpu& c) {
    goto L_103cb0;
L_103c8f:
    X86_TICK(c, 25);
    // 103c8f  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0x103c8fu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 103c93  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x103c93u);
    // 103c95  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x103c95u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 103c99  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x103c99u);
    // 103c9b  mov eax, dword ptr cs:[edx + 0x103c81]
    X86_AT(c, 0x103c9bu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[2] + 0x103C81u)));
    // 103ca2  call eax
    X86_AT(c, 0x103ca2u);
    { uint32_t t = c.r[0]; push32(c, 0x103ca4u); x86_call(c, t); X86_RET(c, 0x103ca4u); }
    X86_TICK(c, 13);
    // 103ca4  esc 0x1f, byte ptr [ecx]
    X86_AT(c, 0x103ca4u);
    // 103ca6  ret 8
    X86_AT(c, 0x103ca6u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_103cb0:
    X86_TICK(c, 9);
    // 103cb0  mov edx, 8
    X86_AT(c, 0x103cb0u);
    c.r[2] = 0x8u;
    // 103cb5  jmp 0x103c8f
    X86_AT(c, 0x103cb5u);
    X86_POLL(c, 0x103c8fu); goto L_103c8f;
    x86_fault(c, 0x103cb0u, "ran off the end of a function");
}
void f_00103cb7(X86Cpu& c) {
    X86_TICK(c, 24);
    // 103cb7  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x103cb7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 103cbb  esc 0x1d, byte ptr [eax]
    X86_AT(c, 0x103cbbu);
    // 103cbd  mov eax, dword ptr [esp + 8]
    X86_AT(c, 0x103cbdu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 103cc1  esc 0x1d, byte ptr [eax]
    X86_AT(c, 0x103cc1u);
    // 103cc3  esc 0x33, cl
    X86_AT(c, 0x103cc3u);
    // 103cc5  call 0x103d2a
    X86_AT(c, 0x103cc5u);
    push32(c, 0x103ccau); f_00103d2a(c); X86_RET(c, 0x103ccau);
    X86_TICK(c, 10);
    // 103cca  ret 8
    X86_AT(c, 0x103ccau);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x103cb7u, "ran off the end of a function");
}
void f_00103ccd(X86Cpu& c) {
    X86_TICK(c, 13);
    // 103ccd  esc 0x18, byte ptr [esp + 4]
    X86_AT(c, 0x103ccdu);
    // 103cd1  ret 4
    X86_AT(c, 0x103cd1u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x103ccdu, "ran off the end of a function");
}
void f_00103cd4(X86Cpu& c) {
    X86_TICK(c, 19);
    // 103cd4  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x103cd4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 103cd8  mov dword ptr [0xe0132], eax
    X86_AT(c, 0x103cd8u);
    wr32((c.sbase[3] + (uint32_t)(0xE0132u)), c.r[0]);
    // 103cdd  esc 0x3d, byte ptr [0xe0132]
    X86_AT(c, 0x103cddu);
    // 103ce3  ret 4
    X86_AT(c, 0x103ce3u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x103cd4u, "ran off the end of a function");
}
}
