#include "p_game_funcs.h"
namespace p_game {
void f_00094075(X86Cpu& c) {
    X86_TICK(c, 16);
    // 094075  leave 
    X86_AT(c, 0x94075u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094076  ret 
    X86_AT(c, 0x94076u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x94075u, "ran off the end of a function");
}
void f_00094080(X86Cpu& c) {
    X86_TICK(c, 17);
    // 094080  push ebp
    X86_AT(c, 0x94080u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094081  mov ebp, esp
    X86_AT(c, 0x94081u);
    c.r[5] = c.r[4];
    // 094083  push ecx
    X86_AT(c, 0x94083u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 094084  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x94084u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094087  cmp ecx, 0xa
    X86_AT(c, 0x94087u);
    (void)x86_sub(c, c.r[1], 0xAu, 0, 4);
    // 09408a  jge 0x94091
    X86_AT(c, 0x9408au);
    if (x86_cc(c, 13)) { goto L_94091; }
    X86_TICK(c, 9);
    // 09408c  add ecx, 0x30
    X86_AT(c, 0x9408cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x30u, 0, 4); }
    // 09408f  jmp 0x940a5
    X86_AT(c, 0x9408fu);
    goto L_940a5;
L_94091:
    X86_TICK(c, 20);
    // 094091  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94091u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094094  mov eax, dword ptr [eax - 4]
    X86_AT(c, 0x94094u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 094097  cmp byte ptr [eax + 0xc], 0x78
    X86_AT(c, 0x94097u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu))), 0x78u, 0, 1);
    // 09409b  jne 0x940a2
    X86_AT(c, 0x9409bu);
    if (x86_cc(c, 5)) { goto L_940a2; }
    X86_TICK(c, 9);
    // 09409d  add ecx, 0x57
    X86_AT(c, 0x9409du);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x57u, 0, 4); }
    // 0940a0  jmp 0x940a5
    X86_AT(c, 0x940a0u);
    goto L_940a5;
L_940a2:
    X86_TICK(c, 2);
    // 0940a2  add ecx, 0x37
    X86_AT(c, 0x940a2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x37u, 0, 4); }
L_940a5:
    X86_TICK(c, 30);
    // 0940a5  mov eax, ecx
    X86_AT(c, 0x940a5u);
    c.r[0] = c.r[1];
    // 0940a7  mov edx, dword ptr [0x8aaa0]
    X86_AT(c, 0x940a7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AAA0u)));
    // 0940ad  mov byte ptr [edx + 0x8aa7f], al
    X86_AT(c, 0x940adu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8AA7Fu)), g8(c, 0));
    // 0940b3  dec dword ptr [0x8aaa0]
    X86_AT(c, 0x940b3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AAA0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0940b9  leave 
    X86_AT(c, 0x940b9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0940ba  ret 4
    X86_AT(c, 0x940bau);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94080u, "ran off the end of a function");
}
void f_000940cc(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0940cc  push ebp
    X86_AT(c, 0x940ccu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0940cd  mov ebp, esp
    X86_AT(c, 0x940cdu);
    c.r[5] = c.r[4];
    // 0940cf  push ecx
    X86_AT(c, 0x940cfu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0940d0  push ebx
    X86_AT(c, 0x940d0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0940d1  push edi
    X86_AT(c, 0x940d1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0940d2  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x940d2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0940d5  mov edi, dword ptr [eax + 8]
    X86_AT(c, 0x940d5u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 0940d8  mov dword ptr [0x8aaa0], 0x1e
    X86_AT(c, 0x940d8u);
    wr32((c.sbase[3] + (uint32_t)(0x8AAA0u)), 0x1Eu);
    // 0940e2  and edi, edi
    X86_AT(c, 0x940e2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0940e4  jbe 0x94109
    X86_AT(c, 0x940e4u);
    if (x86_cc(c, 6)) { goto L_94109; }
    X86_TICK(c, 7);
    // 0940e6  jmp 0x94103
    X86_AT(c, 0x940e6u);
    goto L_94103;
L_940e8:
    X86_TICK(c, 69);
    // 0940e8  movzx ecx, byte ptr [0x8aaa8]
    X86_AT(c, 0x940e8u);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(0x8AAA8u)));
    // 0940ef  mov eax, edi
    X86_AT(c, 0x940efu);
    c.r[0] = c.r[7];
    // 0940f1  sub edx, edx
    X86_AT(c, 0x940f1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0940f3  div ecx
    X86_AT(c, 0x940f3u);
    x86_div(c, c.r[1], 4, 0x940f3u);
    // 0940f5  mov ebx, edx
    X86_AT(c, 0x940f5u);
    c.r[3] = c.r[2];
    // 0940f7  xchg edi, eax
    X86_AT(c, 0x940f7u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0940f8  movzx ebx, bl
    X86_AT(c, 0x940f8u);
    c.r[3] = g8(c, 3);
    // 0940fb  push ebx
    X86_AT(c, 0x940fbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0940fc  mov ecx, ebp
    X86_AT(c, 0x940fcu);
    c.r[1] = c.r[5];
    // 0940fe  call 0x94080
    X86_AT(c, 0x940feu);
    push32(c, 0x94103u); x86_call_known(c, 0x94080u, f_00094080); X86_RET(c, 0x94103u);
L_94103:
    X86_TICK(c, 7);
    // 094103  and edi, edi
    X86_AT(c, 0x94103u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 094105  ja 0x940e8
    X86_AT(c, 0x94105u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x940e8u); goto L_940e8; }
    X86_TICK(c, 7);
    // 094107  jmp 0x9411b
    X86_AT(c, 0x94107u);
    goto L_9411b;
L_94109:
    X86_TICK(c, 12);
    // 094109  mov eax, dword ptr [0x8aaa0]
    X86_AT(c, 0x94109u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AAA0u)));
    // 09410e  mov byte ptr [eax + 0x8aa7f], 0x30
    X86_AT(c, 0x9410eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8AA7Fu)), 0x30u);
    // 094115  dec dword ptr [0x8aaa0]
    X86_AT(c, 0x94115u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AAA0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_9411b:
    X86_TICK(c, 40);
    // 09411b  inc dword ptr [0x8aaa0]
    X86_AT(c, 0x9411bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AAA0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 094121  mov eax, 0x1f
    X86_AT(c, 0x94121u);
    c.r[0] = 0x1Fu;
    // 094126  sub eax, dword ptr [0x8aaa0]
    X86_AT(c, 0x94126u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0x8AAA0u))), 0, 4); }
    // 09412c  mov dword ptr [0x8aaa4], eax
    X86_AT(c, 0x9412cu);
    wr32((c.sbase[3] + (uint32_t)(0x8AAA4u)), c.r[0]);
    // 094131  pop edi
    X86_AT(c, 0x94131u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094132  pop ebx
    X86_AT(c, 0x94132u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 094133  leave 
    X86_AT(c, 0x94133u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094134  ret 
    X86_AT(c, 0x94134u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x940ccu, "ran off the end of a function");
}
void f_0009413c(X86Cpu& c) {
    X86_TICK(c, 18);
    // 09413c  push ebp
    X86_AT(c, 0x9413cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 09413d  mov ebp, esp
    X86_AT(c, 0x9413du);
    c.r[5] = c.r[4];
    // 09413f  push ecx
    X86_AT(c, 0x9413fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 094140  push dword ptr [0x8aab0]
    X86_AT(c, 0x94140u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8AAB0u))); push32(c, v); }
    // 094146  call 0x93bd4
    X86_AT(c, 0x94146u);
    push32(c, 0x9414bu); x86_call_known(c, 0x93bd4u, f_00093bd4); X86_RET(c, 0x9414bu);
    X86_TICK(c, 22);
    // 09414b  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x9414bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09414e  mov byte ptr [eax - 5], 0
    X86_AT(c, 0x9414eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFBu)), 0x0u);
    // 094152  leave 
    X86_AT(c, 0x94152u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094153  ret 
    X86_AT(c, 0x94153u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9413cu, "ran off the end of a function");
}
void f_00094168(X86Cpu& c) {
    X86_TICK(c, 24);
    // 094168  push ebp
    X86_AT(c, 0x94168u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094169  mov ebp, esp
    X86_AT(c, 0x94169u);
    c.r[5] = c.r[4];
    // 09416b  push ecx
    X86_AT(c, 0x9416bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 09416c  push eax
    X86_AT(c, 0x9416cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09416d  push ebx
    X86_AT(c, 0x9416du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09416e  push edi
    X86_AT(c, 0x9416eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09416f  cmp dword ptr [0x8a754], 0
    X86_AT(c, 0x9416fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A754u))), 0x0u, 0, 4);
    // 094176  jne 0x9418a
    X86_AT(c, 0x94176u);
    if (x86_cc(c, 5)) { goto L_9418a; }
    X86_TICK(c, 12);
    // 094178  cmp dword ptr [ebp + 8], 0
    X86_AT(c, 0x94178u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 4);
    // 09417c  jne 0x9418a
    X86_AT(c, 0x9417cu);
    if (x86_cc(c, 5)) { goto L_9418a; }
    X86_TICK(c, 9);
    // 09417e  push 0
    X86_AT(c, 0x9417eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 094180  call 0x93bd4
    X86_AT(c, 0x94180u);
    push32(c, 0x94185u); x86_call_known(c, 0x93bd4u, f_00093bd4); X86_RET(c, 0x94185u);
    X86_TICK(c, 7);
    // 094185  jmp 0x942b0
    X86_AT(c, 0x94185u);
    goto L_942b0;
L_9418a:
    X86_TICK(c, 9);
    // 09418a  mov ecx, ebp
    X86_AT(c, 0x9418au);
    c.r[1] = c.r[5];
    // 09418c  call 0x93f88
    X86_AT(c, 0x9418cu);
    push32(c, 0x94191u); x86_call_known(c, 0x93f88u, f_00093f88); X86_RET(c, 0x94191u);
    X86_TICK(c, 9);
    // 094191  mov ecx, ebp
    X86_AT(c, 0x94191u);
    c.r[1] = c.r[5];
    // 094193  call 0x940cc
    X86_AT(c, 0x94193u);
    push32(c, 0x94198u); x86_call_known(c, 0x940ccu, f_000940cc); X86_RET(c, 0x94198u);
    X86_TICK(c, 12);
    // 094198  cmp dword ptr [0x8a754], 0xffff
    X86_AT(c, 0x94198u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A754u))), 0xFFFFu, 0, 4);
    // 0941a2  jne 0x941b0
    X86_AT(c, 0x941a2u);
    if (x86_cc(c, 5)) { goto L_941b0; }
    X86_TICK(c, 13);
    // 0941a4  mov eax, dword ptr [0x8aaa4]
    X86_AT(c, 0x941a4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AAA4u)));
    // 0941a9  mov dword ptr [0x8aab0], eax
    X86_AT(c, 0x941a9u);
    wr32((c.sbase[3] + (uint32_t)(0x8AAB0u)), c.r[0]);
    // 0941ae  jmp 0x941c6
    X86_AT(c, 0x941aeu);
    goto L_941c6;
L_941b0:
    X86_TICK(c, 15);
    // 0941b0  mov eax, dword ptr [0x8a754]
    X86_AT(c, 0x941b0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A754u)));
    // 0941b5  mov edx, dword ptr [0x8aaa4]
    X86_AT(c, 0x941b5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AAA4u)));
    // 0941bb  cmp eax, edx
    X86_AT(c, 0x941bbu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0941bd  jb 0x941c0
    X86_AT(c, 0x941bdu);
    if (x86_cc(c, 2)) { goto L_941c0; }
    X86_TICK(c, 3);
    // 0941bf  xchg edx, eax
    X86_AT(c, 0x941bfu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_941c0:
    X86_TICK(c, 2);
    // 0941c0  mov dword ptr [0x8aab0], edx
    X86_AT(c, 0x941c0u);
    wr32((c.sbase[3] + (uint32_t)(0x8AAB0u)), c.r[2]);
L_941c6:
    X86_TICK(c, 11);
    // 0941c6  mov eax, dword ptr [0x8a750]
    X86_AT(c, 0x941c6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A750u)));
    // 0941cb  cmp eax, 0xffff
    X86_AT(c, 0x941cbu);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 0941d0  je 0x941de
    X86_AT(c, 0x941d0u);
    if (x86_cc(c, 4)) { goto L_941de; }
    X86_TICK(c, 11);
    // 0941d2  cmp eax, dword ptr [0x8aab0]
    X86_AT(c, 0x941d2u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x8AAB0u))), 0, 4);
    // 0941d8  jbe 0x941de
    X86_AT(c, 0x941d8u);
    if (x86_cc(c, 6)) { goto L_941de; }
    X86_TICK(c, 9);
    // 0941da  mov bl, 1
    X86_AT(c, 0x941dau);
    s8(c, 3, 0x1u);
    // 0941dc  jmp 0x941e0
    X86_AT(c, 0x941dcu);
    goto L_941e0;
L_941de:
    X86_TICK(c, 2);
    // 0941de  sub ebx, ebx
    X86_AT(c, 0x941deu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_941e0:
    X86_TICK(c, 9);
    // 0941e0  mov byte ptr [ebp - 5], bl
    X86_AT(c, 0x941e0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 3));
    // 0941e3  and bl, bl
    X86_AT(c, 0x941e3u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0941e5  je 0x94200
    X86_AT(c, 0x941e5u);
    if (x86_cc(c, 4)) { goto L_94200; }
    X86_TICK(c, 12);
    // 0941e7  test byte ptr [0x8a74c], 1
    X86_AT(c, 0x941e7u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A74Cu))) & 0x1u, 1);
    // 0941ee  jne 0x94200
    X86_AT(c, 0x941eeu);
    if (x86_cc(c, 5)) { goto L_94200; }
    X86_TICK(c, 12);
    // 0941f0  test byte ptr [0x8a74c], 0x10
    X86_AT(c, 0x941f0u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A74Cu))) & 0x10u, 1);
    // 0941f7  jne 0x94200
    X86_AT(c, 0x941f7u);
    if (x86_cc(c, 5)) { goto L_94200; }
    X86_TICK(c, 9);
    // 0941f9  mov ecx, ebp
    X86_AT(c, 0x941f9u);
    c.r[1] = c.r[5];
    // 0941fb  call 0x9413c
    X86_AT(c, 0x941fbu);
    push32(c, 0x94200u); x86_call_known(c, 0x9413cu, f_0009413c); X86_RET(c, 0x94200u);
L_94200:
    X86_TICK(c, 11);
    // 094200  mov eax, dword ptr [0x8aab4]
    X86_AT(c, 0x94200u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AAB4u)));
    // 094205  and eax, eax
    X86_AT(c, 0x94205u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 094207  je 0x9421b
    X86_AT(c, 0x94207u);
    if (x86_cc(c, 4)) { goto L_9421b; }
    X86_TICK(c, 15);
    // 094209  push eax
    X86_AT(c, 0x94209u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09420a  push 0x8aaaa
    X86_AT(c, 0x9420au);
    { uint32_t v = 0x8AAAAu; push32(c, v); }
    // 09420f  mov ecx, dword ptr [0x8a764]
    X86_AT(c, 0x9420fu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A764u)));
    // 094215  call dword ptr [0x8a760]
    X86_AT(c, 0x94215u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A760u))); push32(c, 0x9421bu); x86_call(c, t); X86_RET(c, 0x9421bu); }
L_9421b:
    X86_TICK(c, 12);
    // 09421b  cmp byte ptr [ebp - 5], 0
    X86_AT(c, 0x9421bu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0x0u, 0, 1);
    // 09421f  je 0x94231
    X86_AT(c, 0x9421fu);
    if (x86_cc(c, 4)) { goto L_94231; }
    X86_TICK(c, 12);
    // 094221  test byte ptr [0x8a74c], 1
    X86_AT(c, 0x94221u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A74Cu))) & 0x1u, 1);
    // 094228  jne 0x94231
    X86_AT(c, 0x94228u);
    if (x86_cc(c, 5)) { goto L_94231; }
    X86_TICK(c, 9);
    // 09422a  mov ecx, ebp
    X86_AT(c, 0x9422au);
    c.r[1] = c.r[5];
    // 09422c  call 0x9413c
    X86_AT(c, 0x9422cu);
    push32(c, 0x94231u); x86_call_known(c, 0x9413cu, f_0009413c); X86_RET(c, 0x94231u);
L_94231:
    X86_TICK(c, 11);
    // 094231  mov eax, dword ptr [0x8a754]
    X86_AT(c, 0x94231u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A754u)));
    // 094236  cmp eax, 0xffff
    X86_AT(c, 0x94236u);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 09423b  je 0x9425d
    X86_AT(c, 0x9423bu);
    if (x86_cc(c, 4)) { goto L_9425d; }
    X86_TICK(c, 11);
    // 09423d  mov edx, dword ptr [0x8aaa4]
    X86_AT(c, 0x9423du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AAA4u)));
    // 094243  cmp eax, edx
    X86_AT(c, 0x94243u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 094245  jbe 0x9425d
    X86_AT(c, 0x94245u);
    if (x86_cc(c, 6)) { goto L_9425d; }
    X86_TICK(c, 23);
    // 094247  xchg edi, eax
    X86_AT(c, 0x94247u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 094248  sub edi, edx
    X86_AT(c, 0x94248u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[2], 0, 4); }
    // 09424a  add dword ptr [0x8a75c], edi
    X86_AT(c, 0x9424au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A75Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 094250  push edi
    X86_AT(c, 0x94250u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094251  push 0x8a768
    X86_AT(c, 0x94251u);
    { uint32_t v = 0x8A768u; push32(c, v); }
    // 094256  call 0x93b8c
    X86_AT(c, 0x94256u);
    push32(c, 0x9425bu); x86_call_known(c, 0x93b8cu, f_00093b8c); X86_RET(c, 0x9425bu);
    X86_TICK(c, 7);
    // 09425b  jmp 0x94280
    X86_AT(c, 0x9425bu);
    goto L_94280;
L_9425d:
    X86_TICK(c, 12);
    // 09425d  cmp dword ptr [0x8a754], 0
    X86_AT(c, 0x9425du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A754u))), 0x0u, 0, 4);
    // 094264  jne 0x94280
    X86_AT(c, 0x94264u);
    if (x86_cc(c, 5)) { goto L_94280; }
    X86_TICK(c, 12);
    // 094266  cmp dword ptr [ebp + 8], 0
    X86_AT(c, 0x94266u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 4);
    // 09426a  jne 0x94280
    X86_AT(c, 0x9426au);
    if (x86_cc(c, 5)) { goto L_94280; }
    X86_TICK(c, 4);
    // 09426c  mov dword ptr [0x8aaa0], 0x1f
    X86_AT(c, 0x9426cu);
    wr32((c.sbase[3] + (uint32_t)(0x8AAA0u)), 0x1Fu);
    // 094276  mov dword ptr [0x8aaa4], 0
    X86_AT(c, 0x94276u);
    wr32((c.sbase[3] + (uint32_t)(0x8AAA4u)), 0x0u);
L_94280:
    X86_TICK(c, 32);
    // 094280  mov eax, dword ptr [0x8aaa4]
    X86_AT(c, 0x94280u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AAA4u)));
    // 094285  add dword ptr [0x8a75c], eax
    X86_AT(c, 0x94285u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A75Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 09428b  push eax
    X86_AT(c, 0x9428bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09428c  mov eax, dword ptr [0x8aaa0]
    X86_AT(c, 0x9428cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AAA0u)));
    // 094291  add eax, 0x8aa7f
    X86_AT(c, 0x94291u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8AA7Fu, 0, 4); }
    // 094296  push eax
    X86_AT(c, 0x94296u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094297  mov ecx, dword ptr [0x8a764]
    X86_AT(c, 0x94297u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A764u)));
    // 09429d  call dword ptr [0x8a760]
    X86_AT(c, 0x9429du);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A760u))); push32(c, 0x942a3u); x86_call(c, t); X86_RET(c, 0x942a3u); }
    X86_TICK(c, 12);
    // 0942a3  cmp byte ptr [ebp - 5], 0
    X86_AT(c, 0x942a3u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0x0u, 0, 1);
    // 0942a7  je 0x942b0
    X86_AT(c, 0x942a7u);
    if (x86_cc(c, 4)) { goto L_942b0; }
    X86_TICK(c, 9);
    // 0942a9  mov ecx, ebp
    X86_AT(c, 0x942a9u);
    c.r[1] = c.r[5];
    // 0942ab  call 0x9413c
    X86_AT(c, 0x942abu);
    push32(c, 0x942b0u); x86_call_known(c, 0x9413cu, f_0009413c); X86_RET(c, 0x942b0u);
L_942b0:
    X86_TICK(c, 24);
    // 0942b0  pop edi
    X86_AT(c, 0x942b0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0942b1  pop ebx
    X86_AT(c, 0x942b1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0942b2  leave 
    X86_AT(c, 0x942b2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0942b3  ret 8
    X86_AT(c, 0x942b3u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x94168u, "ran off the end of a function");
}
void f_000942c4(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0942c4  push ebp
    X86_AT(c, 0x942c4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0942c5  mov ebp, esp
    X86_AT(c, 0x942c5u);
    c.r[5] = c.r[4];
    // 0942c7  push ecx
    X86_AT(c, 0x942c7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0942c8  push esi
    X86_AT(c, 0x942c8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0942c9  push edi
    X86_AT(c, 0x942c9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0942ca  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x942cau);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0942cd  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x942cdu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0942d0  jmp 0x942f2
    X86_AT(c, 0x942d0u);
    goto L_942f2;
L_942d2:
    X86_TICK(c, 14);
    // 0942d2  mov ecx, edi
    X86_AT(c, 0x942d2u);
    c.r[1] = c.r[7];
    // 0942d4  and ecx, 0xf
    X86_AT(c, 0x942d4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0xFu, 4); }
    // 0942da  shr edi, 4
    X86_AT(c, 0x942dau);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[7] = r; }
    // 0942dd  cmp ecx, 0xa
    X86_AT(c, 0x942ddu);
    (void)x86_sub(c, c.r[1], 0xAu, 0, 4);
    // 0942e0  jae 0x942e7
    X86_AT(c, 0x942e0u);
    if (x86_cc(c, 3)) { goto L_942e7; }
    X86_TICK(c, 9);
    // 0942e2  lea eax, [ecx + 0x30]
    X86_AT(c, 0x942e2u);
    c.r[0] = (uint32_t)(c.r[1] + 0x30u);
    // 0942e5  jmp 0x942ea
    X86_AT(c, 0x942e5u);
    goto L_942ea;
L_942e7:
    X86_TICK(c, 2);
    // 0942e7  lea eax, [ecx + 0x57]
    X86_AT(c, 0x942e7u);
    c.r[0] = (uint32_t)(c.r[1] + 0x57u);
L_942ea:
    X86_TICK(c, 8);
    // 0942ea  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x942eau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0942ed  mov byte ptr [edx + esi*1 - 0xf], al
    X86_AT(c, 0x942edu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] + 0xFFFFFFF1u)), g8(c, 0));
    // 0942f1  dec esi
    X86_AT(c, 0x942f1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_942f2:
    X86_TICK(c, 7);
    // 0942f2  and edi, edi
    X86_AT(c, 0x942f2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0942f4  ja 0x942d2
    X86_AT(c, 0x942f4u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x942d2u); goto L_942d2; }
    X86_TICK(c, 24);
    // 0942f6  pop edi
    X86_AT(c, 0x942f6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0942f7  pop esi
    X86_AT(c, 0x942f7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0942f8  leave 
    X86_AT(c, 0x942f8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0942f9  ret 8
    X86_AT(c, 0x942f9u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x942c4u, "ran off the end of a function");
}
void f_0009430c(X86Cpu& c) {
    X86_TICK(c, 66);
    // 09430c  push ebp
    X86_AT(c, 0x9430cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 09430d  mov ebp, esp
    X86_AT(c, 0x9430du);
    c.r[5] = c.r[4];
    // 09430f  push ecx
    X86_AT(c, 0x9430fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 094310  sub esp, 0xc
    X86_AT(c, 0x94310u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 094313  push ebx
    X86_AT(c, 0x94313u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094314  push esi
    X86_AT(c, 0x94314u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094315  push edi
    X86_AT(c, 0x94315u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094316  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x94316u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094319  mov eax, 0x30303030
    X86_AT(c, 0x94319u);
    c.r[0] = 0x30303030u;
    // 09431e  lea ecx, [ebp - 0xe]
    X86_AT(c, 0x9431eu);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF2u);
    // 094321  push edi
    X86_AT(c, 0x94321u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094322  mov edi, ecx
    X86_AT(c, 0x94322u);
    c.r[7] = c.r[1];
    // 094324  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x94324u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 094325  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x94325u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 094326  stosw word ptr es:[edi], ax
    X86_AT(c, 0x94326u);
    x86_string(c, 2, 2, 0, 4, 3);
    // 094328  pop edi
    X86_AT(c, 0x94328u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094329  mov ebx, 8
    X86_AT(c, 0x94329u);
    c.r[3] = 0x8u;
    // 09432e  push ebx
    X86_AT(c, 0x9432eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09432f  push edi
    X86_AT(c, 0x9432fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094330  mov ecx, ebp
    X86_AT(c, 0x94330u);
    c.r[1] = c.r[5];
    // 094332  call 0x942c4
    X86_AT(c, 0x94332u);
    push32(c, 0x94337u); x86_call_known(c, 0x942c4u, f_000942c4); X86_RET(c, 0x94337u);
    X86_TICK(c, 24);
    // 094337  add dword ptr [0x8a75c], ebx
    X86_AT(c, 0x94337u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A75Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[3], 0, 4)); }
    // 09433d  push ebx
    X86_AT(c, 0x9433du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09433e  lea eax, [ebp - 0xe]
    X86_AT(c, 0x9433eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF2u);
    // 094341  push eax
    X86_AT(c, 0x94341u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094342  mov ecx, dword ptr [0x8a764]
    X86_AT(c, 0x94342u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A764u)));
    // 094348  call dword ptr [0x8a760]
    X86_AT(c, 0x94348u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A760u))); push32(c, 0x9434eu); x86_call(c, t); X86_RET(c, 0x9434eu); }
    X86_TICK(c, 28);
    // 09434e  pop edi
    X86_AT(c, 0x9434eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09434f  pop esi
    X86_AT(c, 0x9434fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094350  pop ebx
    X86_AT(c, 0x94350u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 094351  leave 
    X86_AT(c, 0x94351u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094352  ret 4
    X86_AT(c, 0x94352u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x9430cu, "ran off the end of a function");
}
void f_00094360(X86Cpu& c) {
    X86_TICK(c, 32);
    // 094360  push ebp
    X86_AT(c, 0x94360u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094361  mov ebp, esp
    X86_AT(c, 0x94361u);
    c.r[5] = c.r[4];
    // 094363  push edi
    X86_AT(c, 0x94363u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094364  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x94364u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094367  sub eax, eax
    X86_AT(c, 0x94367u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 094369  mov dword ptr [0x8a75c], eax
    X86_AT(c, 0x94369u);
    wr32((c.sbase[3] + (uint32_t)(0x8A75Cu)), c.r[0]);
    // 09436e  mov edx, 0x7fffffff
    X86_AT(c, 0x9436eu);
    c.r[2] = 0x7FFFFFFFu;
    // 094373  push edi
    X86_AT(c, 0x94373u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094374  mov ecx, edx
    X86_AT(c, 0x94374u);
    c.r[1] = c.r[2];
    // 094376  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x94376u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 094378  jne 0x9437d
    X86_AT(c, 0x94378u);
    if (x86_cc(c, 5)) { goto L_9437d; }
    X86_TICK(c, 4);
    // 09437a  inc ecx
    X86_AT(c, 0x9437au);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 09437b  sub edx, ecx
    X86_AT(c, 0x9437bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_9437d:
    X86_TICK(c, 27);
    // 09437d  pop edi
    X86_AT(c, 0x9437du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09437e  mov dword ptr [0x8aa74], edx
    X86_AT(c, 0x9437eu);
    wr32((c.sbase[3] + (uint32_t)(0x8AA74u)), c.r[2]);
    // 094384  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x94384u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 094387  mov dword ptr [0x8aa68], eax
    X86_AT(c, 0x94387u);
    wr32((c.sbase[3] + (uint32_t)(0x8AA68u)), c.r[0]);
    // 09438c  push ebp
    X86_AT(c, 0x9438cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 09438d  push 0x943a8
    X86_AT(c, 0x9438du);
    { uint32_t v = 0x943A8u; push32(c, v); }
    // 094392  push edi
    X86_AT(c, 0x94392u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094393  mov ecx, ebp
    X86_AT(c, 0x94393u);
    c.r[1] = c.r[5];
    // 094395  call 0x93d50
    X86_AT(c, 0x94395u);
    push32(c, 0x9439au); x86_call_known(c, 0x93d50u, f_00093d50); X86_RET(c, 0x9439au);
    X86_TICK(c, 20);
    // 09439a  pop edi
    X86_AT(c, 0x9439au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09439b  leave 
    X86_AT(c, 0x9439bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09439c  ret 8
    X86_AT(c, 0x9439cu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x94360u, "ran off the end of a function");
}
void f_000943a8(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0943a8  push ebp
    X86_AT(c, 0x943a8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0943a9  mov ebp, esp
    X86_AT(c, 0x943a9u);
    c.r[5] = c.r[4];
    // 0943ab  push ecx
    X86_AT(c, 0x943abu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0943ac  sub esp, 8
    X86_AT(c, 0x943acu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0943af  push ebx
    X86_AT(c, 0x943afu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0943b0  push esi
    X86_AT(c, 0x943b0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0943b1  push edi
    X86_AT(c, 0x943b1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0943b2  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x943b2u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0943b5  movzx eax, bl
    X86_AT(c, 0x943b5u);
    c.r[0] = g8(c, 3);
    // 0943b8  cmp eax, 0x25
    X86_AT(c, 0x943b8u);
    (void)x86_sub(c, c.r[0], 0x25u, 0, 4);
    // 0943bb  je 0x94581
    X86_AT(c, 0x943bbu);
    if (x86_cc(c, 4)) { goto L_94581; }
    X86_TICK(c, 7);
    // 0943c1  cmp eax, 0x30
    X86_AT(c, 0x943c1u);
    (void)x86_sub(c, c.r[0], 0x30u, 0, 4);
    // 0943c4  je 0x944ae
    X86_AT(c, 0x943c4u);
    if (x86_cc(c, 4)) { goto L_944ae; }
    X86_TICK(c, 9);
    // 0943ca  sub eax, 0x45
    X86_AT(c, 0x943cau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x45u, 0, 4); }
    // 0943cd  cmp eax, 0x33
    X86_AT(c, 0x943cdu);
    (void)x86_sub(c, c.r[0], 0x33u, 0, 4);
    // 0943d0  ja 0x9463e
    X86_AT(c, 0x943d0u);
    if (x86_cc(c, 7)) { goto L_9463e; }
    X86_TICK(c, 7);
    // 0943d6  jmp dword ptr cs:[eax*4 + 0x943de]
    X86_AT(c, 0x943d6u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x943DEu)));
      switch (t) {
      case 0x944d1u: goto L_944d1;
      case 0x94500u: goto L_94500;
      case 0x94544u: goto L_94544;
      case 0x94566u: goto L_94566;
      case 0x945c1u: goto L_945c1;
      case 0x945d4u: goto L_945d4;
      case 0x9463eu: goto L_9463e;
      default: x86_jump(c, t); return; } }
L_944ae:
    X86_TICK(c, 29);
    // 0944ae  mov eax, dword ptr [0x8aa70]
    X86_AT(c, 0x944aeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA70u)));
    // 0944b3  add dword ptr [0x8a75c], eax
    X86_AT(c, 0x944b3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A75Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0944b9  push eax
    X86_AT(c, 0x944b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0944ba  push dword ptr [0x8aa6c]
    X86_AT(c, 0x944bau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8AA6Cu))); push32(c, v); }
    // 0944c0  mov ecx, dword ptr [0x8a764]
    X86_AT(c, 0x944c0u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A764u)));
    // 0944c6  call dword ptr [0x8a760]
    X86_AT(c, 0x944c6u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A760u))); push32(c, 0x944ccu); x86_call(c, t); X86_RET(c, 0x944ccu); }
    X86_TICK(c, 7);
    // 0944cc  jmp 0x94647
    X86_AT(c, 0x944ccu);
    goto L_94647;
L_944d1:
    X86_TICK(c, 42);
    // 0944d1  cmp byte ptr [0x8a758], 2
    X86_AT(c, 0x944d1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A758u))), 0x2u, 0, 1);
    // 0944d8  mov eax, dword ptr [0x8aa68]
    X86_AT(c, 0x944d8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA68u)));
    // 0944dd  mov edx, dword ptr [eax]
    X86_AT(c, 0x944ddu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0944df  mov dword ptr [0x8aa78], edx
    X86_AT(c, 0x944dfu);
    wr32((c.sbase[3] + (uint32_t)(0x8AA78u)), c.r[2]);
    // 0944e5  add dword ptr [0x8aa68], 4
    X86_AT(c, 0x944e5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AA68u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0944ec  push ebx
    X86_AT(c, 0x944ecu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0944ed  push dword ptr [0x8aa78]
    X86_AT(c, 0x944edu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8AA78u))); push32(c, v); }
    // 0944f3  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x944f3u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0944f6  call 0x94168
    X86_AT(c, 0x944f6u);
    push32(c, 0x944fbu); x86_call_known(c, 0x94168u, f_00094168); X86_RET(c, 0x944fbu);
    X86_TICK(c, 7);
    // 0944fb  jmp 0x94647
    X86_AT(c, 0x944fbu);
    goto L_94647;
L_94500:
    X86_TICK(c, 12);
    // 094500  cmp byte ptr [0x8a758], 3
    X86_AT(c, 0x94500u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A758u))), 0x3u, 0, 1);
    // 094507  jne 0x94528
    X86_AT(c, 0x94507u);
    if (x86_cc(c, 5)) { goto L_94528; }
    X86_TICK(c, 28);
    // 094509  push ebx
    X86_AT(c, 0x94509u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09450a  mov eax, dword ptr [0x8aa68]
    X86_AT(c, 0x9450au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA68u)));
    // 09450f  push dword ptr [eax + 8]
    X86_AT(c, 0x9450fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))); push32(c, v); }
    // 094512  push dword ptr [eax + 4]
    X86_AT(c, 0x94512u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))); push32(c, v); }
    // 094515  push dword ptr [eax]
    X86_AT(c, 0x94515u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0]))); push32(c, v); }
    // 094517  call 0x95c28
    X86_AT(c, 0x94517u);
    push32(c, 0x9451cu); x86_call_known(c, 0x95c28u, f_00095c28); X86_RET(c, 0x9451cu);
    X86_TICK(c, 14);
    // 09451c  add dword ptr [0x8aa68], 0xa
    X86_AT(c, 0x9451cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AA68u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xAu, 0, 4)); }
    // 094523  jmp 0x94647
    X86_AT(c, 0x94523u);
    goto L_94647;
L_94528:
    X86_TICK(c, 23);
    // 094528  push ebx
    X86_AT(c, 0x94528u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094529  mov eax, dword ptr [0x8aa68]
    X86_AT(c, 0x94529u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA68u)));
    // 09452e  push dword ptr [eax + 4]
    X86_AT(c, 0x9452eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))); push32(c, v); }
    // 094531  push dword ptr [eax]
    X86_AT(c, 0x94531u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0]))); push32(c, v); }
    // 094533  call 0x954fc
    X86_AT(c, 0x94533u);
    push32(c, 0x94538u); x86_call_known(c, 0x954fcu, f_000954fc); X86_RET(c, 0x94538u);
    X86_TICK(c, 14);
    // 094538  add dword ptr [0x8aa68], 8
    X86_AT(c, 0x94538u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AA68u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x8u, 0, 4)); }
    // 09453f  jmp 0x94647
    X86_AT(c, 0x9453fu);
    goto L_94647;
L_94544:
    X86_TICK(c, 30);
    // 094544  mov eax, dword ptr [0x8aa68]
    X86_AT(c, 0x94544u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA68u)));
    // 094549  mov edx, dword ptr [eax]
    X86_AT(c, 0x94549u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 09454b  mov dword ptr [0x8aa78], edx
    X86_AT(c, 0x9454bu);
    wr32((c.sbase[3] + (uint32_t)(0x8AA78u)), c.r[2]);
    // 094551  add dword ptr [0x8aa68], 4
    X86_AT(c, 0x94551u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AA68u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 094558  push edx
    X86_AT(c, 0x94558u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 094559  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x94559u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09455c  call 0x9430c
    X86_AT(c, 0x9455cu);
    push32(c, 0x94561u); x86_call_known(c, 0x9430cu, f_0009430c); X86_RET(c, 0x94561u);
    X86_TICK(c, 7);
    // 094561  jmp 0x94647
    X86_AT(c, 0x94561u);
    goto L_94647;
L_94566:
    X86_TICK(c, 28);
    // 094566  mov eax, dword ptr [0x8a75c]
    X86_AT(c, 0x94566u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A75Cu)));
    // 09456b  mov edx, dword ptr [0x8aa68]
    X86_AT(c, 0x9456bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AA68u)));
    // 094571  mov ecx, dword ptr [edx]
    X86_AT(c, 0x94571u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2])));
    // 094573  mov dword ptr [ecx], eax
    X86_AT(c, 0x94573u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[0]);
    // 094575  add dword ptr [0x8aa68], 4
    X86_AT(c, 0x94575u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AA68u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 09457c  jmp 0x94647
    X86_AT(c, 0x9457cu);
    goto L_94647;
L_94581:
    X86_TICK(c, 2);
    // 094581  mov byte ptr [ebp - 6], 0x25
    X86_AT(c, 0x94581u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), 0x25u);
L_94585:
    X86_TICK(c, 18);
    // 094585  inc dword ptr [0x8a75c]
    X86_AT(c, 0x94585u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A75Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 09458b  test byte ptr [0x8a74c], 1
    X86_AT(c, 0x9458bu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A74Cu))) & 0x1u, 1);
    // 094592  jne 0x9459b
    X86_AT(c, 0x94592u);
    if (x86_cc(c, 5)) { goto L_9459b; }
    X86_TICK(c, 9);
    // 094594  push 1
    X86_AT(c, 0x94594u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 094596  call 0x93bd4
    X86_AT(c, 0x94596u);
    push32(c, 0x9459bu); x86_call_known(c, 0x93bd4u, f_00093bd4); X86_RET(c, 0x9459bu);
L_9459b:
    X86_TICK(c, 17);
    // 09459b  push 1
    X86_AT(c, 0x9459bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 09459d  lea eax, [ebp - 6]
    X86_AT(c, 0x9459du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFAu);
    // 0945a0  push eax
    X86_AT(c, 0x945a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0945a1  mov ecx, dword ptr [0x8a764]
    X86_AT(c, 0x945a1u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A764u)));
    // 0945a7  call dword ptr [0x8a760]
    X86_AT(c, 0x945a7u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A760u))); push32(c, 0x945adu); x86_call(c, t); X86_RET(c, 0x945adu); }
    X86_TICK(c, 12);
    // 0945ad  test byte ptr [0x8a74c], 1
    X86_AT(c, 0x945adu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A74Cu))) & 0x1u, 1);
    // 0945b4  je 0x94647
    X86_AT(c, 0x945b4u);
    if (x86_cc(c, 4)) { goto L_94647; }
    X86_TICK(c, 9);
    // 0945ba  push 1
    X86_AT(c, 0x945bau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0945bc  jmp 0x94637
    X86_AT(c, 0x945bcu);
    goto L_94637;
L_945c1:
    X86_TICK(c, 24);
    // 0945c1  mov eax, dword ptr [0x8aa68]
    X86_AT(c, 0x945c1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA68u)));
    // 0945c6  mov dl, byte ptr [eax]
    X86_AT(c, 0x945c6u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0945c8  mov byte ptr [ebp - 6], dl
    X86_AT(c, 0x945c8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), g8(c, 2));
    // 0945cb  add dword ptr [0x8aa68], 4
    X86_AT(c, 0x945cbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AA68u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0945d2  jmp 0x94585
    X86_AT(c, 0x945d2u);
    X86_POLL(c, 0x94585u); goto L_94585;
L_945d4:
    X86_TICK(c, 22);
    // 0945d4  mov eax, dword ptr [0x8aa68]
    X86_AT(c, 0x945d4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA68u)));
    // 0945d9  mov edi, dword ptr [eax]
    X86_AT(c, 0x945d9u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0945db  add dword ptr [0x8aa68], 4
    X86_AT(c, 0x945dbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AA68u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0945e2  and edi, edi
    X86_AT(c, 0x945e2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0945e4  je 0x94647
    X86_AT(c, 0x945e4u);
    if (x86_cc(c, 4)) { goto L_94647; }
    X86_TICK(c, 22);
    // 0945e6  mov edx, dword ptr [0x8a754]
    X86_AT(c, 0x945e6u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A754u)));
    // 0945ec  sub eax, eax
    X86_AT(c, 0x945ecu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0945ee  push edi
    X86_AT(c, 0x945eeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0945ef  mov ecx, edx
    X86_AT(c, 0x945efu);
    c.r[1] = c.r[2];
    // 0945f1  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x945f1u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0945f3  jne 0x945f8
    X86_AT(c, 0x945f3u);
    if (x86_cc(c, 5)) { goto L_945f8; }
    X86_TICK(c, 4);
    // 0945f5  inc ecx
    X86_AT(c, 0x945f5u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0945f6  sub edx, ecx
    X86_AT(c, 0x945f6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_945f8:
    X86_TICK(c, 17);
    // 0945f8  pop edi
    X86_AT(c, 0x945f8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0945f9  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0x945f9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
    // 0945fc  mov ecx, dword ptr [0x8a754]
    X86_AT(c, 0x945fcu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A754u)));
    // 094602  cmp edx, ecx
    X86_AT(c, 0x94602u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 094604  jb 0x94608
    X86_AT(c, 0x94604u);
    if (x86_cc(c, 2)) { goto L_94608; }
    X86_TICK(c, 2);
    // 094606  mov edx, ecx
    X86_AT(c, 0x94606u);
    c.r[2] = c.r[1];
L_94608:
    X86_TICK(c, 21);
    // 094608  mov esi, edx
    X86_AT(c, 0x94608u);
    c.r[6] = c.r[2];
    // 09460a  add dword ptr [0x8a75c], esi
    X86_AT(c, 0x9460au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A75Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 094610  test byte ptr [0x8a74c], 1
    X86_AT(c, 0x94610u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A74Cu))) & 0x1u, 1);
    // 094617  jne 0x9461f
    X86_AT(c, 0x94617u);
    if (x86_cc(c, 5)) { goto L_9461f; }
    X86_TICK(c, 9);
    // 094619  push esi
    X86_AT(c, 0x94619u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09461a  call 0x93bd4
    X86_AT(c, 0x9461au);
    push32(c, 0x9461fu); x86_call_known(c, 0x93bd4u, f_00093bd4); X86_RET(c, 0x9461fu);
L_9461f:
    X86_TICK(c, 15);
    // 09461f  push esi
    X86_AT(c, 0x9461fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094620  push edi
    X86_AT(c, 0x94620u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094621  mov ecx, dword ptr [0x8a764]
    X86_AT(c, 0x94621u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A764u)));
    // 094627  call dword ptr [0x8a760]
    X86_AT(c, 0x94627u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A760u))); push32(c, 0x9462du); x86_call(c, t); X86_RET(c, 0x9462du); }
    X86_TICK(c, 12);
    // 09462d  test byte ptr [0x8a74c], 1
    X86_AT(c, 0x9462du);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A74Cu))) & 0x1u, 1);
    // 094634  je 0x94647
    X86_AT(c, 0x94634u);
    if (x86_cc(c, 4)) { goto L_94647; }
    X86_TICK(c, 2);
    // 094636  push esi
    X86_AT(c, 0x94636u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_94637:
    X86_TICK(c, 7);
    // 094637  call 0x93bd4
    X86_AT(c, 0x94637u);
    push32(c, 0x9463cu); x86_call_known(c, 0x93bd4u, f_00093bd4); X86_RET(c, 0x9463cu);
    X86_TICK(c, 7);
    // 09463c  jmp 0x94647
    X86_AT(c, 0x9463cu);
    goto L_94647;
L_9463e:
    X86_TICK(c, 2);
    // 09463e  mov word ptr [0x8aabe], 1
    X86_AT(c, 0x9463eu);
    wr16((c.sbase[3] + (uint32_t)(0x8AABEu)), 0x1u);
L_94647:
    X86_TICK(c, 28);
    // 094647  pop edi
    X86_AT(c, 0x94647u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094648  pop esi
    X86_AT(c, 0x94648u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094649  pop ebx
    X86_AT(c, 0x94649u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 09464a  leave 
    X86_AT(c, 0x9464au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09464b  ret 4
    X86_AT(c, 0x9464bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x943a8u, "ran off the end of a function");
}
void f_00094647(X86Cpu& c) {
    X86_TICK(c, 28);
    // 094647  pop edi
    X86_AT(c, 0x94647u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094648  pop esi
    X86_AT(c, 0x94648u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094649  pop ebx
    X86_AT(c, 0x94649u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 09464a  leave 
    X86_AT(c, 0x9464au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09464b  ret 4
    X86_AT(c, 0x9464bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94647u, "ran off the end of a function");
}
void f_00094664(X86Cpu& c) {
    X86_TICK(c, 12);
    // 094664  test byte ptr [0x8aaec], 2
    X86_AT(c, 0x94664u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8AAECu))) & 0x2u, 1);
    // 09466b  je 0x94681
    X86_AT(c, 0x9466bu);
    if (x86_cc(c, 4)) { goto L_94681; }
    X86_TICK(c, 29);
    // 09466d  mov eax, dword ptr [0x8a734]
    X86_AT(c, 0x9466du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A734u)));
    // 094672  and byte ptr [eax + 0xc], 0xbf
    X86_AT(c, 0x94672u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xBFu, 1)); }
    // 094676  mov eax, dword ptr [0x8a738]
    X86_AT(c, 0x94676u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A738u)));
    // 09467b  and byte ptr [eax + 0xc], 0xbf
    X86_AT(c, 0x9467bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xBFu, 1)); }
    // 09467f  jmp 0x94693
    X86_AT(c, 0x9467fu);
    goto L_94693;
L_94681:
    X86_TICK(c, 22);
    // 094681  mov eax, dword ptr [0x8a734]
    X86_AT(c, 0x94681u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A734u)));
    // 094686  or byte ptr [eax + 0xc], 0x40
    X86_AT(c, 0x94686u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
    // 09468a  mov eax, dword ptr [0x8a738]
    X86_AT(c, 0x9468au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A738u)));
    // 09468f  or byte ptr [eax + 0xc], 0x40
    X86_AT(c, 0x9468fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
L_94693:
    X86_TICK(c, 12);
    // 094693  test byte ptr [0x8aaec], 4
    X86_AT(c, 0x94693u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8AAECu))) & 0x4u, 1);
    // 09469a  je 0x946a7
    X86_AT(c, 0x9469au);
    if (x86_cc(c, 4)) { goto L_946a7; }
    X86_TICK(c, 18);
    // 09469c  mov eax, dword ptr [0x8a73c]
    X86_AT(c, 0x9469cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A73Cu)));
    // 0946a1  and byte ptr [eax + 0xc], 0xbf
    X86_AT(c, 0x946a1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xBFu, 1)); }
    // 0946a5  jmp 0x946b0
    X86_AT(c, 0x946a5u);
    goto L_946b0;
L_946a7:
    X86_TICK(c, 11);
    // 0946a7  mov eax, dword ptr [0x8a73c]
    X86_AT(c, 0x946a7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A73Cu)));
    // 0946ac  or byte ptr [eax + 0xc], 0x40
    X86_AT(c, 0x946acu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
L_946b0:
    X86_TICK(c, 10);
    // 0946b0  ret 
    X86_AT(c, 0x946b0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x94664u, "ran off the end of a function");
}
void f_000946b8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0946b8  push edi
    X86_AT(c, 0x946b8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0946b9  call 0x92d78
    X86_AT(c, 0x946b9u);
    push32(c, 0x946beu); x86_call_known(c, 0x92d78u, f_00092d78); X86_RET(c, 0x946beu);
    X86_TICK(c, 7);
    // 0946be  jmp 0x946e0
    X86_AT(c, 0x946beu);
    goto L_946e0;
L_946c0:
    X86_TICK(c, 12);
    // 0946c0  push dword ptr [0x8a740]
    X86_AT(c, 0x946c0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A740u))); push32(c, v); }
    // 0946c6  call 0x94980
    X86_AT(c, 0x946c6u);
    push32(c, 0x946cbu); x86_call_known(c, 0x94980u, f_00094980); X86_RET(c, 0x946cbu);
    X86_TICK(c, 19);
    // 0946cb  mov edi, dword ptr [0x8a740]
    X86_AT(c, 0x946cbu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x8A740u)));
    // 0946d1  mov eax, dword ptr [edi + 0xc]
    X86_AT(c, 0x946d1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)));
    // 0946d4  mov dword ptr [0x8a740], eax
    X86_AT(c, 0x946d4u);
    wr32((c.sbase[3] + (uint32_t)(0x8A740u)), c.r[0]);
    // 0946d9  push edi
    X86_AT(c, 0x946d9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0946da  call 0x9319c
    X86_AT(c, 0x946dau);
    push32(c, 0x946dfu); x86_call_known(c, 0x9319cu, f_0009319c); X86_RET(c, 0x946dfu);
    X86_TICK(c, 4);
    // 0946df  pop ecx
    X86_AT(c, 0x946dfu);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_946e0:
    X86_TICK(c, 12);
    // 0946e0  cmp dword ptr [0x8a740], 0
    X86_AT(c, 0x946e0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A740u))), 0x0u, 0, 4);
    // 0946e7  jne 0x946c0
    X86_AT(c, 0x946e7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x946c0u); goto L_946c0; }
    X86_TICK(c, 14);
    // 0946e9  pop edi
    X86_AT(c, 0x946e9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0946ea  ret 
    X86_AT(c, 0x946eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x946b8u, "ran off the end of a function");
}
void f_00094700(X86Cpu& c) {
    X86_TICK(c, 33);
    // 094700  enter 0xc, 0
    X86_AT(c, 0x94700u);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 094704  push ebx
    X86_AT(c, 0x94704u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094705  push esi
    X86_AT(c, 0x94705u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094706  push edi
    X86_AT(c, 0x94706u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094707  sub eax, eax
    X86_AT(c, 0x94707u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 094709  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x94709u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 09470c  xchg edi, eax
    X86_AT(c, 0x9470cu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 09470d  mov esi, 1
    X86_AT(c, 0x9470du);
    c.r[6] = 0x1u;
    // 094712  mov dword ptr [ebp - 8], edi
    X86_AT(c, 0x94712u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[7]);
    // 094715  mov eax, dword ptr [0x8a83c]
    X86_AT(c, 0x94715u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A83Cu)));
    // 09471a  mov edx, dword ptr [0x8a822]
    X86_AT(c, 0x9471au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A822u)));
    // 094720  mov dword ptr [edx], eax
    X86_AT(c, 0x94720u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
L_94722:
    X86_TICK(c, 8);
    // 094722  sub eax, eax
    X86_AT(c, 0x94722u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 094724  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x94724u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 094727  mov byte ptr [ebp - 2], al
    X86_AT(c, 0x94727u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 09472a  mov dword ptr [ebp - 0xc], edi
    X86_AT(c, 0x9472au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[7]);
L_9472d:
    X86_TICK(c, 11);
    // 09472d  cmp esi, dword ptr [0x8a828]
    X86_AT(c, 0x9472du);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0x8A828u))), 0, 4);
    // 094733  ja 0x947b1
    X86_AT(c, 0x94733u);
    if (x86_cc(c, 7)) { goto L_947b1; }
    X86_TICK(c, 17);
    // 094739  mov eax, dword ptr [0x8a81c]
    X86_AT(c, 0x94739u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A81Cu)));
    // 09473e  mov bl, byte ptr [eax + esi*1 - 1]
    X86_AT(c, 0x9473eu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] + 0xFFFFFFFFu))));
    // 094742  inc esi
    X86_AT(c, 0x94742u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 094743  cmp bl, 9
    X86_AT(c, 0x94743u);
    (void)x86_sub(c, g8(c, 3), 0x9u, 0, 1);
    // 094746  je 0x9474d
    X86_AT(c, 0x94746u);
    if (x86_cc(c, 4)) { goto L_9474d; }
    X86_TICK(c, 7);
    // 094748  cmp bl, 0x20
    X86_AT(c, 0x94748u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 09474b  jne 0x9475b
    X86_AT(c, 0x9474bu);
    if (x86_cc(c, 5)) { goto L_9475b; }
L_9474d:
    X86_TICK(c, 12);
    // 09474d  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0x9474du);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 094751  je 0x9472d
    X86_AT(c, 0x94751u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x9472du); goto L_9472d; }
    X86_TICK(c, 12);
    // 094753  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x94753u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 094757  jne 0x9479e
    X86_AT(c, 0x94757u);
    if (x86_cc(c, 5)) { goto L_9479e; }
    X86_TICK(c, 7);
    // 094759  jmp 0x947b1
    X86_AT(c, 0x94759u);
    goto L_947b1;
L_9475b:
    X86_TICK(c, 7);
    // 09475b  cmp bl, 0x22
    X86_AT(c, 0x9475bu);
    (void)x86_sub(c, g8(c, 3), 0x22u, 0, 1);
    // 09475e  jne 0x9477c
    X86_AT(c, 0x9475eu);
    if (x86_cc(c, 5)) { goto L_9477c; }
    X86_TICK(c, 12);
    // 094760  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x94760u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 094764  jne 0x9476c
    X86_AT(c, 0x94764u);
    if (x86_cc(c, 5)) { goto L_9476c; }
    X86_TICK(c, 12);
    // 094766  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0x94766u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 09476a  jne 0x9477c
    X86_AT(c, 0x9476au);
    if (x86_cc(c, 5)) { goto L_9477c; }
L_9476c:
    X86_TICK(c, 12);
    // 09476c  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x9476cu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 094770  jne 0x947b1
    X86_AT(c, 0x94770u);
    if (x86_cc(c, 5)) { goto L_947b1; }
    X86_TICK(c, 13);
    // 094772  mov al, 1
    X86_AT(c, 0x94772u);
    s8(c, 0, 0x1u);
    // 094774  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x94774u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 094777  mov byte ptr [ebp - 2], al
    X86_AT(c, 0x94777u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 09477a  jmp 0x9472d
    X86_AT(c, 0x9477au);
    X86_POLL(c, 0x9472du); goto L_9472d;
L_9477c:
    X86_TICK(c, 7);
    // 09477c  cmp bl, 0x5c
    X86_AT(c, 0x9477cu);
    (void)x86_sub(c, g8(c, 3), 0x5Cu, 0, 1);
    // 09477f  jne 0x9479e
    X86_AT(c, 0x9477fu);
    if (x86_cc(c, 5)) { goto L_9479e; }
    X86_TICK(c, 12);
    // 094781  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x94781u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 094785  je 0x9479e
    X86_AT(c, 0x94785u);
    if (x86_cc(c, 4)) { goto L_9479e; }
    X86_TICK(c, 11);
    // 094787  cmp esi, dword ptr [0x8a828]
    X86_AT(c, 0x94787u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0x8A828u))), 0, 4);
    // 09478d  ja 0x9479e
    X86_AT(c, 0x9478du);
    if (x86_cc(c, 7)) { goto L_9479e; }
    X86_TICK(c, 16);
    // 09478f  mov eax, dword ptr [0x8a81c]
    X86_AT(c, 0x9478fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A81Cu)));
    // 094794  cmp byte ptr [eax + esi*1 - 1], 0x22
    X86_AT(c, 0x94794u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] + 0xFFFFFFFFu))), 0x22u, 0, 1);
    // 094799  jne 0x9479e
    X86_AT(c, 0x94799u);
    if (x86_cc(c, 5)) { goto L_9479e; }
    X86_TICK(c, 4);
    // 09479b  mov bl, 0x22
    X86_AT(c, 0x9479bu);
    s8(c, 3, 0x22u);
    // 09479d  inc esi
    X86_AT(c, 0x9479du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_9479e:
    X86_TICK(c, 17);
    // 09479e  mov eax, dword ptr [0x8a81c]
    X86_AT(c, 0x9479eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A81Cu)));
    // 0947a3  mov byte ptr [eax + edi*1 - 1], bl
    X86_AT(c, 0x947a3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] + 0xFFFFFFFFu)), g8(c, 3));
    // 0947a7  inc edi
    X86_AT(c, 0x947a7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0947a8  mov byte ptr [ebp - 1], 1
    X86_AT(c, 0x947a8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x1u);
    // 0947ac  jmp 0x9472d
    X86_AT(c, 0x947acu);
    X86_POLL(c, 0x9472du); goto L_9472d;
L_947b1:
    X86_TICK(c, 12);
    // 0947b1  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0x947b1u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0947b5  je 0x947d8
    X86_AT(c, 0x947b5u);
    if (x86_cc(c, 4)) { goto L_947d8; }
    X86_TICK(c, 30);
    // 0947b7  mov eax, dword ptr [0x8a81c]
    X86_AT(c, 0x947b7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A81Cu)));
    // 0947bc  mov byte ptr [eax + edi*1 - 1], 0
    X86_AT(c, 0x947bcu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] + 0xFFFFFFFFu)), 0x0u);
    // 0947c1  inc edi
    X86_AT(c, 0x947c1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0947c2  inc dword ptr [ebp - 8]
    X86_AT(c, 0x947c2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0947c5  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0x947c5u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0947c8  lea eax, [eax + edx*1 - 1]
    X86_AT(c, 0x947c8u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFFFu);
    // 0947cc  mov edx, dword ptr [0x8a822]
    X86_AT(c, 0x947ccu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A822u)));
    // 0947d2  mov ecx, dword ptr [ebp - 8]
    X86_AT(c, 0x947d2u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0947d5  mov dword ptr [edx + ecx*4], eax
    X86_AT(c, 0x947d5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[1] * 4)), c.r[0]);
L_947d8:
    X86_TICK(c, 11);
    // 0947d8  cmp esi, dword ptr [0x8a828]
    X86_AT(c, 0x947d8u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0x8A828u))), 0, 4);
    // 0947de  jbe 0x94722
    X86_AT(c, 0x947deu);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x94722u); goto L_94722; }
    X86_TICK(c, 43);
    // 0947e4  mov eax, dword ptr [0x8a822]
    X86_AT(c, 0x947e4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A822u)));
    // 0947e9  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0x947e9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0947ec  mov dword ptr [eax + edx*4 + 4], 0
    X86_AT(c, 0x947ecu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 4 + 0x4u)), 0x0u);
    // 0947f4  xchg edx, eax
    X86_AT(c, 0x947f4u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0947f5  inc eax
    X86_AT(c, 0x947f5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0947f6  pop edi
    X86_AT(c, 0x947f6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0947f7  pop esi
    X86_AT(c, 0x947f7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0947f8  pop ebx
    X86_AT(c, 0x947f8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0947f9  leave 
    X86_AT(c, 0x947f9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0947fa  ret 
    X86_AT(c, 0x947fau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x94700u, "ran off the end of a function");
}
void f_000947fc(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0947fc  ret 
    X86_AT(c, 0x947fcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x947fcu, "ran off the end of a function");
}
void f_00094818(X86Cpu& c) {
    X86_TICK(c, 13);
    // 094818  mov al, byte ptr [esp + 4]
    X86_AT(c, 0x94818u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u))));
    // 09481c  mov byte ptr [0x8aac5], al
    X86_AT(c, 0x9481cu);
    wr8((c.sbase[3] + (uint32_t)(0x8AAC5u)), g8(c, 0));
    // 094821  call 0x95e78
    X86_AT(c, 0x94821u);
    push32(c, 0x94826u); x86_call_known(c, 0x95e78u, f_00095e78); X86_RET(c, 0x94826u);
    X86_TICK(c, 12);
    // 094826  mov eax, dword ptr [0x8aae4]
    X86_AT(c, 0x94826u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AAE4u)));
    // 09482b  rcr eax, 1
    X86_AT(c, 0x9482bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 09482d  jae 0x9484c
    X86_AT(c, 0x9482du);
    if (x86_cc(c, 3)) { goto L_9484c; }
    X86_TICK(c, 14);
    // 09482f  mov ax, word ptr [0x8aac4]
    X86_AT(c, 0x9482fu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8AAC4u))));
    // 094835  mov word ptr [0x8aabe], ax
    X86_AT(c, 0x94835u);
    wr16((c.sbase[3] + (uint32_t)(0x8AABEu)), (c.r[0] & 0xFFFFu));
    // 09483b  sub eax, eax
    X86_AT(c, 0x9483bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 09483d  mov dword ptr [0x8aac4], eax
    X86_AT(c, 0x9483du);
    wr32((c.sbase[3] + (uint32_t)(0x8AAC4u)), c.r[0]);
    // 094842  mov dword ptr [0x8aacc], eax
    X86_AT(c, 0x94842u);
    wr32((c.sbase[3] + (uint32_t)(0x8AACCu)), c.r[0]);
    // 094847  mov dword ptr [0x8aad0], eax
    X86_AT(c, 0x94847u);
    wr32((c.sbase[3] + (uint32_t)(0x8AAD0u)), c.r[0]);
L_9484c:
    X86_TICK(c, 10);
    // 09484c  ret 4
    X86_AT(c, 0x9484cu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94818u, "ran off the end of a function");
}
void f_00094858(X86Cpu& c) {
    X86_TICK(c, 52);
    // 094858  enter 0x10, 0
    X86_AT(c, 0x94858u);
    x86_enter(c, 0x10u, 0x0u, 4);
    // 09485c  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x9485cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 09485f  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x9485fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 094862  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x94862u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 094865  mov edx, 0x8aac4
    X86_AT(c, 0x94865u);
    c.r[2] = 0x8AAC4u;
    // 09486a  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0x9486au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 09486d  mov word ptr [ebp - 0xc], ds
    X86_AT(c, 0x9486du);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (uint32_t)c.sreg[3]);
    // 094870  movzx edx, word ptr [ebp - 0xc]
    X86_AT(c, 0x94870u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 094874  mov dword ptr [ecx], edx
    X86_AT(c, 0x94874u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[2]);
    // 094876  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x94876u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 094879  mov dword ptr [edx], eax
    X86_AT(c, 0x94879u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 09487b  leave 
    X86_AT(c, 0x9487bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09487c  ret 0xc
    X86_AT(c, 0x9487cu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x94858u, "ran off the end of a function");
}
void f_0009488c(X86Cpu& c) {
    X86_TICK(c, 20);
    // 09488c  push ebp
    X86_AT(c, 0x9488cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 09488d  mov ebp, esp
    X86_AT(c, 0x9488du);
    c.r[5] = c.r[4];
    // 09488f  push dword ptr [ebp + 8]
    X86_AT(c, 0x9488fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 094892  push 0x8aad0
    X86_AT(c, 0x94892u);
    { uint32_t v = 0x8AAD0u; push32(c, v); }
    // 094897  push 0x8aadc
    X86_AT(c, 0x94897u);
    { uint32_t v = 0x8AADCu; push32(c, v); }
    // 09489c  call 0x94858
    X86_AT(c, 0x9489cu);
    push32(c, 0x948a1u); x86_call_known(c, 0x94858u, f_00094858); X86_RET(c, 0x948a1u);
    X86_TICK(c, 16);
    // 0948a1  leave 
    X86_AT(c, 0x948a1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0948a2  ret 4
    X86_AT(c, 0x948a2u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x9488cu, "ran off the end of a function");
}
void f_000948b0(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0948b0  push ebp
    X86_AT(c, 0x948b0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0948b1  mov ebp, esp
    X86_AT(c, 0x948b1u);
    c.r[5] = c.r[4];
    // 0948b3  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x948b3u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0948b7  mov dword ptr [0x8aac8], eax
    X86_AT(c, 0x948b7u);
    wr32((c.sbase[3] + (uint32_t)(0x8AAC8u)), c.r[0]);
    // 0948bc  push 0x3e
    X86_AT(c, 0x948bcu);
    { uint32_t v = 0x3Eu; push32(c, v); }
    // 0948be  call 0x94818
    X86_AT(c, 0x948beu);
    push32(c, 0x948c3u); x86_call_known(c, 0x94818u, f_00094818); X86_RET(c, 0x948c3u);
    X86_TICK(c, 16);
    // 0948c3  leave 
    X86_AT(c, 0x948c3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0948c4  ret 4
    X86_AT(c, 0x948c4u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x948b0u, "ran off the end of a function");
}
void f_000948d0(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0948d0  push ebp
    X86_AT(c, 0x948d0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0948d1  mov ebp, esp
    X86_AT(c, 0x948d1u);
    c.r[5] = c.r[4];
    // 0948d3  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0x948d3u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0948d6  mov byte ptr [0x8aac4], al
    X86_AT(c, 0x948d6u);
    wr8((c.sbase[3] + (uint32_t)(0x8AAC4u)), g8(c, 0));
    // 0948db  push 0x4c
    X86_AT(c, 0x948dbu);
    { uint32_t v = 0x4Cu; push32(c, v); }
    // 0948dd  call 0x94818
    X86_AT(c, 0x948ddu);
    push32(c, 0x948e2u); x86_call_known(c, 0x94818u, f_00094818); X86_RET(c, 0x948e2u);
    X86_TICK(c, 16);
    // 0948e2  leave 
    X86_AT(c, 0x948e2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0948e3  ret 4
    X86_AT(c, 0x948e3u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x948d0u, "ran off the end of a function");
}
void f_00094908(X86Cpu& c) {
    X86_TICK(c, 16);
    // 094908  push ebp
    X86_AT(c, 0x94908u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094909  mov ebp, esp
    X86_AT(c, 0x94909u);
    c.r[5] = c.r[4];
    // 09490b  push dword ptr [ebp + 8]
    X86_AT(c, 0x9490bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 09490e  call 0x9488c
    X86_AT(c, 0x9490eu);
    push32(c, 0x94913u); x86_call_known(c, 0x9488cu, f_0009488c); X86_RET(c, 0x94913u);
    X86_TICK(c, 12);
    // 094913  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x94913u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 094916  call 0x94818
    X86_AT(c, 0x94916u);
    push32(c, 0x9491bu); x86_call_known(c, 0x94818u, f_00094818); X86_RET(c, 0x9491bu);
    X86_TICK(c, 16);
    // 09491b  leave 
    X86_AT(c, 0x9491bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09491c  ret 8
    X86_AT(c, 0x9491cu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x94908u, "ran off the end of a function");
}
void f_00094928(X86Cpu& c) {
    X86_TICK(c, 26);
    // 094928  push ebp
    X86_AT(c, 0x94928u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094929  mov ebp, esp
    X86_AT(c, 0x94929u);
    c.r[5] = c.r[4];
    // 09492b  movzx eax, byte ptr [ebp + 0xc]
    X86_AT(c, 0x9492bu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09492f  mov dword ptr [0x8aacc], eax
    X86_AT(c, 0x9492fu);
    wr32((c.sbase[3] + (uint32_t)(0x8AACCu)), c.r[0]);
    // 094934  push 0x3c
    X86_AT(c, 0x94934u);
    { uint32_t v = 0x3Cu; push32(c, v); }
    // 094936  push dword ptr [ebp + 8]
    X86_AT(c, 0x94936u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 094939  call 0x94908
    X86_AT(c, 0x94939u);
    push32(c, 0x9493eu); x86_call_known(c, 0x94908u, f_00094908); X86_RET(c, 0x9493eu);
    X86_TICK(c, 20);
    // 09493e  mov al, byte ptr [0x8aac4]
    X86_AT(c, 0x9493eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8AAC4u))));
    // 094943  leave 
    X86_AT(c, 0x94943u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094944  ret 8
    X86_AT(c, 0x94944u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x94928u, "ran off the end of a function");
}
void f_00094950(X86Cpu& c) {
    X86_TICK(c, 33);
    // 094950  push ebp
    X86_AT(c, 0x94950u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094951  mov ebp, esp
    X86_AT(c, 0x94951u);
    c.r[5] = c.r[4];
    // 094953  mov al, byte ptr [0x8aae8]
    X86_AT(c, 0x94953u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8AAE8u))));
    // 094958  shl al, 4
    X86_AT(c, 0x94958u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 09495b  or al, byte ptr [ebp + 0xc]
    X86_AT(c, 0x9495bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 1)); }
    // 09495e  mov byte ptr [0x8aac4], al
    X86_AT(c, 0x9495eu);
    wr8((c.sbase[3] + (uint32_t)(0x8AAC4u)), g8(c, 0));
    // 094963  push 0x3d
    X86_AT(c, 0x94963u);
    { uint32_t v = 0x3Du; push32(c, v); }
    // 094965  push dword ptr [ebp + 8]
    X86_AT(c, 0x94965u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 094968  call 0x94908
    X86_AT(c, 0x94968u);
    push32(c, 0x9496du); x86_call_known(c, 0x94908u, f_00094908); X86_RET(c, 0x9496du);
    X86_TICK(c, 20);
    // 09496d  mov al, byte ptr [0x8aac4]
    X86_AT(c, 0x9496du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8AAC4u))));
    // 094972  leave 
    X86_AT(c, 0x94972u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094973  ret 8
    X86_AT(c, 0x94973u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x94950u, "ran off the end of a function");
}
void f_00094980(X86Cpu& c) {
    X86_TICK(c, 18);
    // 094980  push ebp
    X86_AT(c, 0x94980u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094981  mov ebp, esp
    X86_AT(c, 0x94981u);
    c.r[5] = c.r[4];
    // 094983  push 0x41
    X86_AT(c, 0x94983u);
    { uint32_t v = 0x41u; push32(c, v); }
    // 094985  push dword ptr [ebp + 8]
    X86_AT(c, 0x94985u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 094988  call 0x94908
    X86_AT(c, 0x94988u);
    push32(c, 0x9498du); x86_call_known(c, 0x94908u, f_00094908); X86_RET(c, 0x9498du);
    X86_TICK(c, 16);
    // 09498d  leave 
    X86_AT(c, 0x9498du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09498e  ret 4
    X86_AT(c, 0x9498eu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94980u, "ran off the end of a function");
}
void f_000949a8(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0949a8  push ebp
    X86_AT(c, 0x949a8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0949a9  mov ebp, esp
    X86_AT(c, 0x949a9u);
    c.r[5] = c.r[4];
    // 0949ab  push ebx
    X86_AT(c, 0x949abu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0949ac  push esi
    X86_AT(c, 0x949acu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0949ad  push edi
    X86_AT(c, 0x949adu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0949ae  mov edi, dword ptr [0x8aafc]
    X86_AT(c, 0x949aeu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x8AAFCu)));
    // 0949b4  jmp 0x949e3
    X86_AT(c, 0x949b4u);
    goto L_949e3;
L_949b6:
    X86_TICK(c, 11);
    // 0949b6  mov esi, dword ptr [edi]
    X86_AT(c, 0x949b6u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0949b8  and esi, esi
    X86_AT(c, 0x949b8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0949ba  je 0x949da
    X86_AT(c, 0x949bau);
    if (x86_cc(c, 4)) { goto L_949da; }
    X86_TICK(c, 11);
    // 0949bc  cmp edi, dword ptr [esi + 4]
    X86_AT(c, 0x949bcu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))), 0, 4);
    // 0949bf  je 0x949da
    X86_AT(c, 0x949bfu);
    if (x86_cc(c, 4)) { goto L_949da; }
    X86_TICK(c, 11);
    // 0949c1  push edi
    X86_AT(c, 0x949c1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0949c2  push 1
    X86_AT(c, 0x949c2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0949c4  call 0x95e10
    X86_AT(c, 0x949c4u);
    push32(c, 0x949c9u); x86_call_known(c, 0x95e10u, f_00095e10); X86_RET(c, 0x949c9u);
    X86_TICK(c, 15);
    // 0949c9  push edi
    X86_AT(c, 0x949c9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0949ca  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x949cau);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0949cd  mov ebx, ecx
    X86_AT(c, 0x949cdu);
    c.r[3] = c.r[1];
    // 0949cf  call dword ptr [ebp + 8]
    X86_AT(c, 0x949cfu);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0x949d2u); x86_call(c, t); X86_RET(c, 0x949d2u); }
    X86_TICK(c, 11);
    // 0949d2  push esi
    X86_AT(c, 0x949d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0949d3  mov ecx, ebx
    X86_AT(c, 0x949d3u);
    c.r[1] = c.r[3];
    // 0949d5  call dword ptr [ebp + 8]
    X86_AT(c, 0x949d5u);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0x949d8u); x86_call(c, t); X86_RET(c, 0x949d8u); }
    X86_TICK(c, 7);
    // 0949d8  jmp 0x949e7
    X86_AT(c, 0x949d8u);
    goto L_949e7;
L_949da:
    X86_TICK(c, 13);
    // 0949da  push edi
    X86_AT(c, 0x949dau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0949db  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x949dbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0949de  call dword ptr [ebp + 8]
    X86_AT(c, 0x949deu);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0x949e1u); x86_call(c, t); X86_RET(c, 0x949e1u); }
    X86_TICK(c, 2);
    // 0949e1  mov edi, esi
    X86_AT(c, 0x949e1u);
    c.r[7] = c.r[6];
L_949e3:
    X86_TICK(c, 7);
    // 0949e3  and edi, edi
    X86_AT(c, 0x949e3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0949e5  jne 0x949b6
    X86_AT(c, 0x949e5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x949b6u); goto L_949b6; }
L_949e7:
    X86_TICK(c, 28);
    // 0949e7  pop edi
    X86_AT(c, 0x949e7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0949e8  pop esi
    X86_AT(c, 0x949e8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0949e9  pop ebx
    X86_AT(c, 0x949e9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0949ea  leave 
    X86_AT(c, 0x949eau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0949eb  ret 8
    X86_AT(c, 0x949ebu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x949a8u, "ran off the end of a function");
}
void f_00094a00(X86Cpu& c) {
    X86_TICK(c, 23);
    // 094a00  push ebp
    X86_AT(c, 0x94a00u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094a01  mov ebp, esp
    X86_AT(c, 0x94a01u);
    c.r[5] = c.r[4];
    // 094a03  push ebx
    X86_AT(c, 0x94a03u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094a04  push esi
    X86_AT(c, 0x94a04u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094a05  push edi
    X86_AT(c, 0x94a05u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094a06  mov edi, dword ptr [0x8aaf8]
    X86_AT(c, 0x94a06u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x8AAF8u)));
    // 094a0c  sub esi, esi
    X86_AT(c, 0x94a0cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 094a0e  jmp 0x94a52
    X86_AT(c, 0x94a0eu);
    goto L_94a52;
L_94a10:
    X86_TICK(c, 14);
    // 094a10  mov ebx, edi
    X86_AT(c, 0x94a10u);
    c.r[3] = c.r[7];
    // 094a12  cmp byte ptr [ebx + 0xf], 0x55
    X86_AT(c, 0x94a12u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFu))), 0x55u, 0, 1);
    // 094a16  je 0x94a22
    X86_AT(c, 0x94a16u);
    if (x86_cc(c, 4)) { goto L_94a22; }
    X86_TICK(c, 11);
    // 094a18  push edi
    X86_AT(c, 0x94a18u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094a19  push 4
    X86_AT(c, 0x94a19u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 094a1b  call 0x95e10
    X86_AT(c, 0x94a1bu);
    push32(c, 0x94a20u); x86_call_known(c, 0x95e10u, f_00095e10); X86_RET(c, 0x94a20u);
    X86_TICK(c, 7);
    // 094a20  jmp 0x94a52
    X86_AT(c, 0x94a20u);
    goto L_94a52;
L_94a22:
    X86_TICK(c, 11);
    // 094a22  cmp esi, dword ptr [ebx + 0x14]
    X86_AT(c, 0x94a22u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))), 0, 4);
    // 094a25  je 0x94a33
    X86_AT(c, 0x94a25u);
    if (x86_cc(c, 4)) { goto L_94a33; }
    X86_TICK(c, 11);
    // 094a27  push edi
    X86_AT(c, 0x94a27u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094a28  push 5
    X86_AT(c, 0x94a28u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 094a2a  call 0x95e10
    X86_AT(c, 0x94a2au);
    push32(c, 0x94a2fu); x86_call_known(c, 0x95e10u, f_00095e10); X86_RET(c, 0x94a2fu);
    X86_TICK(c, 9);
    // 094a2f  sub edi, edi
    X86_AT(c, 0x94a2fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 094a31  jmp 0x94a52
    X86_AT(c, 0x94a31u);
    goto L_94a52;
L_94a33:
    X86_TICK(c, 11);
    // 094a33  mov eax, dword ptr [edi]
    X86_AT(c, 0x94a33u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 094a35  and eax, eax
    X86_AT(c, 0x94a35u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 094a37  je 0x94a46
    X86_AT(c, 0x94a37u);
    if (x86_cc(c, 4)) { goto L_94a46; }
    X86_TICK(c, 11);
    // 094a39  cmp edi, dword ptr [eax + 4]
    X86_AT(c, 0x94a39u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))), 0, 4);
    // 094a3c  je 0x94a46
    X86_AT(c, 0x94a3cu);
    if (x86_cc(c, 4)) { goto L_94a46; }
    X86_TICK(c, 11);
    // 094a3e  push edi
    X86_AT(c, 0x94a3eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094a3f  push 1
    X86_AT(c, 0x94a3fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 094a41  call 0x95e10
    X86_AT(c, 0x94a41u);
    push32(c, 0x94a46u); x86_call_known(c, 0x95e10u, f_00095e10); X86_RET(c, 0x94a46u);
L_94a46:
    X86_TICK(c, 13);
    // 094a46  push edi
    X86_AT(c, 0x94a46u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094a47  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x94a47u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 094a4a  call dword ptr [ebp + 8]
    X86_AT(c, 0x94a4au);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0x94a4du); x86_call(c, t); X86_RET(c, 0x94a4du); }
    X86_TICK(c, 6);
    // 094a4d  mov esi, edi
    X86_AT(c, 0x94a4du);
    c.r[6] = c.r[7];
    // 094a4f  mov edi, dword ptr [ebx + 0x10]
    X86_AT(c, 0x94a4fu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
L_94a52:
    X86_TICK(c, 7);
    // 094a52  and edi, edi
    X86_AT(c, 0x94a52u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 094a54  jne 0x94a10
    X86_AT(c, 0x94a54u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x94a10u); goto L_94a10; }
    X86_TICK(c, 28);
    // 094a56  pop edi
    X86_AT(c, 0x94a56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094a57  pop esi
    X86_AT(c, 0x94a57u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094a58  pop ebx
    X86_AT(c, 0x94a58u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 094a59  leave 
    X86_AT(c, 0x94a59u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094a5a  ret 8
    X86_AT(c, 0x94a5au);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x94a00u, "ran off the end of a function");
}
void f_00094a74(X86Cpu& c) {
    X86_TICK(c, 16);
    // 094a74  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x94a74u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 094a78  cmp dword ptr [ecx + 8], 0x18
    X86_AT(c, 0x94a78u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x8u))), 0x18u, 0, 4);
    // 094a7c  jb 0x94aa4
    X86_AT(c, 0x94a7cu);
    if (x86_cc(c, 2)) { goto L_94aa4; }
    X86_TICK(c, 12);
    // 094a7e  cmp dword ptr [ecx + 0x14], 0
    X86_AT(c, 0x94a7eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x14u))), 0x0u, 0, 4);
    // 094a82  jne 0x94a8e
    X86_AT(c, 0x94a82u);
    if (x86_cc(c, 5)) { goto L_94a8e; }
    X86_TICK(c, 13);
    // 094a84  mov eax, dword ptr [ecx + 0x10]
    X86_AT(c, 0x94a84u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)));
    // 094a87  mov dword ptr [0x8aaf8], eax
    X86_AT(c, 0x94a87u);
    wr32((c.sbase[3] + (uint32_t)(0x8AAF8u)), c.r[0]);
    // 094a8c  jmp 0x94a97
    X86_AT(c, 0x94a8cu);
    goto L_94a97;
L_94a8e:
    X86_TICK(c, 10);
    // 094a8e  mov eax, dword ptr [ecx + 0x10]
    X86_AT(c, 0x94a8eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)));
    // 094a91  mov edx, dword ptr [ecx + 0x14]
    X86_AT(c, 0x94a91u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x14u)));
    // 094a94  mov dword ptr [edx + 0x10], eax
    X86_AT(c, 0x94a94u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u)), c.r[0]);
L_94a97:
    X86_TICK(c, 11);
    // 094a97  mov eax, dword ptr [ecx + 0x10]
    X86_AT(c, 0x94a97u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)));
    // 094a9a  and eax, eax
    X86_AT(c, 0x94a9au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 094a9c  je 0x94aa4
    X86_AT(c, 0x94a9cu);
    if (x86_cc(c, 4)) { goto L_94aa4; }
    X86_TICK(c, 6);
    // 094a9e  mov edx, dword ptr [ecx + 0x14]
    X86_AT(c, 0x94a9eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x14u)));
    // 094aa1  mov dword ptr [eax + 0x14], edx
    X86_AT(c, 0x94aa1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x14u)), c.r[2]);
L_94aa4:
    X86_TICK(c, 10);
    // 094aa4  ret 4
    X86_AT(c, 0x94aa4u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94a74u, "ran off the end of a function");
}
void f_00094ac8(X86Cpu& c) {
    X86_TICK(c, 23);
    // 094ac8  push ebp
    X86_AT(c, 0x94ac8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094ac9  mov ebp, esp
    X86_AT(c, 0x94ac9u);
    c.r[5] = c.r[4];
    // 094acb  push esi
    X86_AT(c, 0x94acbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094acc  push edi
    X86_AT(c, 0x94accu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094acd  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x94acdu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094ad0  mov esi, dword ptr [edi]
    X86_AT(c, 0x94ad0u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 094ad2  and esi, esi
    X86_AT(c, 0x94ad2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 094ad4  je 0x94afd
    X86_AT(c, 0x94ad4u);
    if (x86_cc(c, 4)) { goto L_94afd; }
    X86_TICK(c, 12);
    // 094ad6  cmp byte ptr [esi + 0xf], 0x55
    X86_AT(c, 0x94ad6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu))), 0x55u, 0, 1);
    // 094ada  jne 0x94afd
    X86_AT(c, 0x94adau);
    if (x86_cc(c, 5)) { goto L_94afd; }
    X86_TICK(c, 11);
    // 094adc  cmp esi, dword ptr [0x8ab00]
    X86_AT(c, 0x94adcu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0x8AB00u))), 0, 4);
    // 094ae2  jne 0x94aea
    X86_AT(c, 0x94ae2u);
    if (x86_cc(c, 5)) { goto L_94aea; }
    X86_TICK(c, 2);
    // 094ae4  mov dword ptr [0x8ab00], edi
    X86_AT(c, 0x94ae4u);
    wr32((c.sbase[3] + (uint32_t)(0x8AB00u)), c.r[7]);
L_94aea:
    X86_TICK(c, 9);
    // 094aea  push esi
    X86_AT(c, 0x94aeau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094aeb  call 0x94a74
    X86_AT(c, 0x94aebu);
    push32(c, 0x94af0u); x86_call_known(c, 0x94a74u, f_00094a74); X86_RET(c, 0x94af0u);
    X86_TICK(c, 27);
    // 094af0  mov eax, dword ptr [esi + 8]
    X86_AT(c, 0x94af0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 094af3  add dword ptr [edi + 8], eax
    X86_AT(c, 0x94af3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 094af6  mov eax, dword ptr [esi]
    X86_AT(c, 0x94af6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 094af8  mov dword ptr [edi], eax
    X86_AT(c, 0x94af8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 094afa  xchg esi, eax
    X86_AT(c, 0x94afau);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 094afb  jmp 0x94b30
    X86_AT(c, 0x94afbu);
    goto L_94b30;
L_94afd:
    X86_TICK(c, 11);
    // 094afd  mov eax, dword ptr [edi + 4]
    X86_AT(c, 0x94afdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 094b00  and eax, eax
    X86_AT(c, 0x94b00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 094b02  je 0x94b3b
    X86_AT(c, 0x94b02u);
    if (x86_cc(c, 4)) { goto L_94b3b; }
    X86_TICK(c, 15);
    // 094b04  xchg esi, eax
    X86_AT(c, 0x94b04u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 094b05  cmp byte ptr [esi + 0xf], 0x55
    X86_AT(c, 0x94b05u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu))), 0x55u, 0, 1);
    // 094b09  jne 0x94b3b
    X86_AT(c, 0x94b09u);
    if (x86_cc(c, 5)) { goto L_94b3b; }
    X86_TICK(c, 11);
    // 094b0b  cmp edi, dword ptr [0x8ab00]
    X86_AT(c, 0x94b0bu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0x8AB00u))), 0, 4);
    // 094b11  jne 0x94b19
    X86_AT(c, 0x94b11u);
    if (x86_cc(c, 5)) { goto L_94b19; }
    X86_TICK(c, 2);
    // 094b13  mov dword ptr [0x8ab00], esi
    X86_AT(c, 0x94b13u);
    wr32((c.sbase[3] + (uint32_t)(0x8AB00u)), c.r[6]);
L_94b19:
    X86_TICK(c, 9);
    // 094b19  push esi
    X86_AT(c, 0x94b19u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094b1a  call 0x94a74
    X86_AT(c, 0x94b1au);
    push32(c, 0x94b1fu); x86_call_known(c, 0x94a74u, f_00094a74); X86_RET(c, 0x94b1fu);
    X86_TICK(c, 29);
    // 094b1f  mov eax, dword ptr [edi + 8]
    X86_AT(c, 0x94b1fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)));
    // 094b22  add dword ptr [esi + 8], eax
    X86_AT(c, 0x94b22u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 094b25  mov eax, dword ptr [edi]
    X86_AT(c, 0x94b25u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 094b27  mov dword ptr [esi], eax
    X86_AT(c, 0x94b27u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 094b29  mov edi, esi
    X86_AT(c, 0x94b29u);
    c.r[7] = c.r[6];
    // 094b2b  xchg esi, eax
    X86_AT(c, 0x94b2bu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 094b2c  and esi, esi
    X86_AT(c, 0x94b2cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 094b2e  je 0x94b33
    X86_AT(c, 0x94b2eu);
    if (x86_cc(c, 4)) { goto L_94b33; }
L_94b30:
    X86_TICK(c, 2);
    // 094b30  mov dword ptr [esi + 4], edi
    X86_AT(c, 0x94b30u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[7]);
L_94b33:
    X86_TICK(c, 9);
    // 094b33  push edi
    X86_AT(c, 0x94b33u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094b34  call 0x94ac8
    X86_AT(c, 0x94b34u);
    push32(c, 0x94b39u); x86_call_known(c, 0x94ac8u, f_00094ac8); X86_RET(c, 0x94b39u);
    X86_TICK(c, 7);
    // 094b39  jmp 0x94b5e
    X86_AT(c, 0x94b39u);
    goto L_94b5e;
L_94b3b:
    X86_TICK(c, 12);
    // 094b3b  cmp dword ptr [edi + 8], 0x18
    X86_AT(c, 0x94b3bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0x18u, 0, 4);
    // 094b3f  jb 0x94b5e
    X86_AT(c, 0x94b3fu);
    if (x86_cc(c, 2)) { goto L_94b5e; }
    X86_TICK(c, 13);
    // 094b41  mov esi, dword ptr [0x8aaf8]
    X86_AT(c, 0x94b41u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8AAF8u)));
    // 094b47  mov dword ptr [edi + 0x10], esi
    X86_AT(c, 0x94b47u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u)), c.r[6]);
    // 094b4a  and esi, esi
    X86_AT(c, 0x94b4au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 094b4c  je 0x94b51
    X86_AT(c, 0x94b4cu);
    if (x86_cc(c, 4)) { goto L_94b51; }
    X86_TICK(c, 2);
    // 094b4e  mov dword ptr [esi + 0x14], edi
    X86_AT(c, 0x94b4eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), c.r[7]);
L_94b51:
    X86_TICK(c, 4);
    // 094b51  mov dword ptr [edi + 0x14], 0
    X86_AT(c, 0x94b51u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u)), 0x0u);
    // 094b58  mov dword ptr [0x8aaf8], edi
    X86_AT(c, 0x94b58u);
    wr32((c.sbase[3] + (uint32_t)(0x8AAF8u)), c.r[7]);
L_94b5e:
    X86_TICK(c, 24);
    // 094b5e  pop edi
    X86_AT(c, 0x94b5eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094b5f  pop esi
    X86_AT(c, 0x94b5fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094b60  leave 
    X86_AT(c, 0x94b60u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094b61  ret 4
    X86_AT(c, 0x94b61u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94ac8u, "ran off the end of a function");
}
void f_00094b78(X86Cpu& c) {
    X86_TICK(c, 23);
    // 094b78  enter 4, 0
    X86_AT(c, 0x94b78u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 094b7c  push ebx
    X86_AT(c, 0x94b7cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094b7d  push esi
    X86_AT(c, 0x94b7du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094b7e  push edi
    X86_AT(c, 0x94b7eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094b7f  push ebp
    X86_AT(c, 0x94b7fu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094b80  push 0x94ba8
    X86_AT(c, 0x94b80u);
    { uint32_t v = 0x94BA8u; push32(c, v); }
    // 094b85  call 0x94a00
    X86_AT(c, 0x94b85u);
    push32(c, 0x94b8au); x86_call_known(c, 0x94a00u, f_00094a00); X86_RET(c, 0x94b8au);
    X86_TICK(c, 36);
    // 094b8a  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x94b8au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 094b91  lea esp, [ebp - 0x10]
    X86_AT(c, 0x94b91u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 094b94  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94b94u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094b97  pop edi
    X86_AT(c, 0x94b97u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094b98  pop esi
    X86_AT(c, 0x94b98u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094b99  pop ebx
    X86_AT(c, 0x94b99u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 094b9a  leave 
    X86_AT(c, 0x94b9au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094b9b  ret 4
    X86_AT(c, 0x94b9bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94b78u, "ran off the end of a function");
}
void f_00094ba8(X86Cpu& c) {
    goto L_94ba8;
L_94b91:
    X86_TICK(c, 34);
    // 094b91  lea esp, [ebp - 0x10]
    X86_AT(c, 0x94b91u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 094b94  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94b94u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094b97  pop edi
    X86_AT(c, 0x94b97u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094b98  pop esi
    X86_AT(c, 0x94b98u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094b99  pop ebx
    X86_AT(c, 0x94b99u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 094b9a  leave 
    X86_AT(c, 0x94b9au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094b9b  ret 4
    X86_AT(c, 0x94b9bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
L_94ba8:
    X86_TICK(c, 29);
    // 094ba8  push ebp
    X86_AT(c, 0x94ba8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094ba9  mov ebp, esp
    X86_AT(c, 0x94ba9u);
    c.r[5] = c.r[4];
    // 094bab  push ecx
    X86_AT(c, 0x94babu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 094bac  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x94bacu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094baf  mov eax, dword ptr [ecx + 8]
    X86_AT(c, 0x94bafu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x8u)));
    // 094bb2  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x94bb2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094bb5  cmp eax, dword ptr [edx + 8]
    X86_AT(c, 0x94bb5u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u))), 0, 4);
    // 094bb8  jb 0x94bc1
    X86_AT(c, 0x94bb8u);
    if (x86_cc(c, 2)) { goto L_94bc1; }
    X86_TICK(c, 11);
    // 094bba  mov dword ptr [edx - 4], ecx
    X86_AT(c, 0x94bbau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFFCu)), c.r[1]);
    // 094bbd  mov ebp, edx
    X86_AT(c, 0x94bbdu);
    c.r[5] = c.r[2];
    // 094bbf  jmp 0x94b91
    X86_AT(c, 0x94bbfu);
    X86_POLL(c, 0x94b91u); goto L_94b91;
L_94bc1:
    X86_TICK(c, 16);
    // 094bc1  leave 
    X86_AT(c, 0x94bc1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094bc2  ret 4
    X86_AT(c, 0x94bc2u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94ba8u, "ran off the end of a function");
}
void f_00094bd0(X86Cpu& c) {
    X86_TICK(c, 23);
    // 094bd0  mov eax, dword ptr [0x8ab04]
    X86_AT(c, 0x94bd0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB04u)));
    // 094bd5  add eax, 0x200
    X86_AT(c, 0x94bd5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x200u, 0, 4); }
    // 094bda  push eax
    X86_AT(c, 0x94bdau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094bdb  mov eax, dword ptr [0x8ab04]
    X86_AT(c, 0x94bdbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB04u)));
    // 094be0  add eax, 0x100
    X86_AT(c, 0x94be0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x100u, 0, 4); }
    // 094be5  push eax
    X86_AT(c, 0x94be5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094be6  call 0x938d9
    X86_AT(c, 0x94be6u);
    push32(c, 0x94bebu); x86_call_known(c, 0x938d9u, f_000938d9); X86_RET(c, 0x94bebu);
    X86_TICK(c, 10);
    // 094beb  ret 
    X86_AT(c, 0x94bebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x94bd0u, "ran off the end of a function");
}
void f_00094bf8(X86Cpu& c) {
    X86_TICK(c, 28);
    // 094bf8  enter 4, 0
    X86_AT(c, 0x94bf8u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 094bfc  push ebx
    X86_AT(c, 0x94bfcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094bfd  push esi
    X86_AT(c, 0x94bfdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094bfe  push edi
    X86_AT(c, 0x94bfeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094bff  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x94bffu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094c02  cmp dword ptr [0x8ab04], 0
    X86_AT(c, 0x94c02u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8AB04u))), 0x0u, 0, 4);
    // 094c09  jne 0x94c15
    X86_AT(c, 0x94c09u);
    if (x86_cc(c, 5)) { goto L_94c15; }
    X86_TICK(c, 7);
    // 094c0b  call 0x9387e
    X86_AT(c, 0x94c0bu);
    push32(c, 0x94c10u); x86_call_known(c, 0x9387eu, f_0009387e); X86_RET(c, 0x94c10u);
    X86_TICK(c, 2);
    // 094c10  mov dword ptr [0x8ab04], eax
    X86_AT(c, 0x94c10u);
    wr32((c.sbase[3] + (uint32_t)(0x8AB04u)), c.r[0]);
L_94c15:
    X86_TICK(c, 7);
    // 094c15  call 0x9388a
    X86_AT(c, 0x94c15u);
    push32(c, 0x94c1au); x86_call_known(c, 0x9388au, f_0009388a); X86_RET(c, 0x94c1au);
    X86_TICK(c, 16);
    // 094c1a  xchg esi, eax
    X86_AT(c, 0x94c1au);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 094c1b  sub esi, dword ptr [0x8ab04]
    X86_AT(c, 0x94c1bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0x8AB04u))), 0, 4); }
    // 094c21  cmp esi, edi
    X86_AT(c, 0x94c21u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 094c23  jb 0x94c30
    X86_AT(c, 0x94c23u);
    if (x86_cc(c, 2)) { goto L_94c30; }
    X86_TICK(c, 11);
    // 094c25  mov eax, esi
    X86_AT(c, 0x94c25u);
    c.r[0] = c.r[6];
    // 094c27  sub eax, edi
    X86_AT(c, 0x94c27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 094c29  cmp eax, 0x200
    X86_AT(c, 0x94c29u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 094c2e  jge 0x94c75
    X86_AT(c, 0x94c2eu);
    if (x86_cc(c, 13)) { goto L_94c75; }
L_94c30:
    X86_TICK(c, 7);
    // 094c30  cmp esi, edi
    X86_AT(c, 0x94c30u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 094c32  jae 0x94c4b
    X86_AT(c, 0x94c32u);
    if (x86_cc(c, 3)) { goto L_94c4b; }
    X86_TICK(c, 63);
    // 094c34  mov eax, edi
    X86_AT(c, 0x94c34u);
    c.r[0] = c.r[7];
    // 094c36  sub eax, esi
    X86_AT(c, 0x94c36u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 094c38  add eax, 0xfff
    X86_AT(c, 0x94c38u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xFFFu, 0, 4); }
    // 094c3d  cdq 
    X86_AT(c, 0x94c3du);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 094c3e  mov ecx, 0x1000
    X86_AT(c, 0x94c3eu);
    c.r[1] = 0x1000u;
    // 094c43  idiv ecx
    X86_AT(c, 0x94c43u);
    x86_idiv(c, c.r[1], 4, 0x94c43u);
    // 094c45  xchg ebx, eax
    X86_AT(c, 0x94c45u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 094c46  shl ebx, 0xc
    X86_AT(c, 0x94c46u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[3] = r; }
    // 094c49  jmp 0x94c50
    X86_AT(c, 0x94c49u);
    goto L_94c50;
L_94c4b:
    X86_TICK(c, 2);
    // 094c4b  mov ebx, 0x1000
    X86_AT(c, 0x94c4bu);
    c.r[3] = 0x1000u;
L_94c50:
    X86_TICK(c, 9);
    // 094c50  push ebx
    X86_AT(c, 0x94c50u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094c51  call 0x93890
    X86_AT(c, 0x94c51u);
    push32(c, 0x94c56u); x86_call_known(c, 0x93890u, f_00093890); X86_RET(c, 0x94c56u);
    X86_TICK(c, 7);
    // 094c56  call 0x9388a
    X86_AT(c, 0x94c56u);
    push32(c, 0x94c5bu); x86_call_known(c, 0x9388au, f_0009388a); X86_RET(c, 0x94c5bu);
    X86_TICK(c, 16);
    // 094c5b  xchg esi, eax
    X86_AT(c, 0x94c5bu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 094c5c  sub esi, dword ptr [0x8ab04]
    X86_AT(c, 0x94c5cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0x8AB04u))), 0, 4); }
    // 094c62  cmp esi, edi
    X86_AT(c, 0x94c62u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 094c64  jb 0x94c71
    X86_AT(c, 0x94c64u);
    if (x86_cc(c, 2)) { goto L_94c71; }
    X86_TICK(c, 11);
    // 094c66  mov eax, esi
    X86_AT(c, 0x94c66u);
    c.r[0] = c.r[6];
    // 094c68  sub eax, edi
    X86_AT(c, 0x94c68u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 094c6a  cmp eax, 0x200
    X86_AT(c, 0x94c6au);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 094c6f  jge 0x94c75
    X86_AT(c, 0x94c6fu);
    if (x86_cc(c, 13)) { goto L_94c75; }
L_94c71:
    X86_TICK(c, 9);
    // 094c71  sub eax, eax
    X86_AT(c, 0x94c71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 094c73  jmp 0x94c8a
    X86_AT(c, 0x94c73u);
    goto L_94c8a;
L_94c75:
    X86_TICK(c, 20);
    // 094c75  mov ebx, dword ptr [0x8ab04]
    X86_AT(c, 0x94c75u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x8AB04u)));
    // 094c7b  mov dword ptr [ebp - 4], ebx
    X86_AT(c, 0x94c7bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[3]);
    // 094c7e  add dword ptr [0x8ab04], edi
    X86_AT(c, 0x94c7eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AB04u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 094c84  call 0x94bd0
    X86_AT(c, 0x94c84u);
    push32(c, 0x94c89u); x86_call_known(c, 0x94bd0u, f_00094bd0); X86_RET(c, 0x94c89u);
    X86_TICK(c, 3);
    // 094c89  xchg ebx, eax
    X86_AT(c, 0x94c89u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
L_94c8a:
    X86_TICK(c, 28);
    // 094c8a  pop edi
    X86_AT(c, 0x94c8au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094c8b  pop esi
    X86_AT(c, 0x94c8bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094c8c  pop ebx
    X86_AT(c, 0x94c8cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 094c8d  leave 
    X86_AT(c, 0x94c8du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094c8e  ret 4
    X86_AT(c, 0x94c8eu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94bf8u, "ran off the end of a function");
}
void f_00094ca0(X86Cpu& c) {
    X86_TICK(c, 21);
    // 094ca0  push ebp
    X86_AT(c, 0x94ca0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094ca1  mov ebp, esp
    X86_AT(c, 0x94ca1u);
    c.r[5] = c.r[4];
    // 094ca3  push esi
    X86_AT(c, 0x94ca3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094ca4  push edi
    X86_AT(c, 0x94ca4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094ca5  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x94ca5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094ca8  mov eax, 0x18
    X86_AT(c, 0x94ca8u);
    c.r[0] = 0x18u;
    // 094cad  cmp eax, edi
    X86_AT(c, 0x94cadu);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 094caf  jb 0x94cb2
    X86_AT(c, 0x94cafu);
    if (x86_cc(c, 2)) { goto L_94cb2; }
    X86_TICK(c, 3);
    // 094cb1  xchg edi, eax
    X86_AT(c, 0x94cb1u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_94cb2:
    X86_TICK(c, 7);
    // 094cb2  cmp edi, 0x7fffffff
    X86_AT(c, 0x94cb2u);
    (void)x86_sub(c, c.r[7], 0x7FFFFFFFu, 0, 4);
    // 094cb8  ja 0x94cfd
    X86_AT(c, 0x94cb8u);
    if (x86_cc(c, 7)) { goto L_94cfd; }
    X86_TICK(c, 9);
    // 094cba  push edi
    X86_AT(c, 0x94cbau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094cbb  call 0x94bf8
    X86_AT(c, 0x94cbbu);
    push32(c, 0x94cc0u); x86_call_known(c, 0x94bf8u, f_00094bf8); X86_RET(c, 0x94cc0u);
    X86_TICK(c, 10);
    // 094cc0  xchg esi, eax
    X86_AT(c, 0x94cc0u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 094cc1  and esi, esi
    X86_AT(c, 0x94cc1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 094cc3  je 0x94cfd
    X86_AT(c, 0x94cc3u);
    if (x86_cc(c, 4)) { goto L_94cfd; }
    X86_TICK(c, 23);
    // 094cc5  sub eax, eax
    X86_AT(c, 0x94cc5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 094cc7  mov dword ptr [esi], eax
    X86_AT(c, 0x94cc7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 094cc9  mov edx, dword ptr [0x8ab00]
    X86_AT(c, 0x94cc9u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AB00u)));
    // 094ccf  mov dword ptr [esi + 4], edx
    X86_AT(c, 0x94ccfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[2]);
    // 094cd2  mov byte ptr [esi + 0xf], 0x55
    X86_AT(c, 0x94cd2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu)), 0x55u);
    // 094cd6  mov dword ptr [esi + 8], edi
    X86_AT(c, 0x94cd6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[7]);
    // 094cd9  mov byte ptr [esi + 0xe], al
    X86_AT(c, 0x94cd9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu)), g8(c, 0));
    // 094cdc  cmp eax, edx
    X86_AT(c, 0x94cdcu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 094cde  je 0x94ce2
    X86_AT(c, 0x94cdeu);
    if (x86_cc(c, 4)) { goto L_94ce2; }
    X86_TICK(c, 2);
    // 094ce0  mov dword ptr [edx], esi
    X86_AT(c, 0x94ce0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[6]);
L_94ce2:
    X86_TICK(c, 14);
    // 094ce2  mov dword ptr [0x8ab00], esi
    X86_AT(c, 0x94ce2u);
    wr32((c.sbase[3] + (uint32_t)(0x8AB00u)), c.r[6]);
    // 094ce8  cmp dword ptr [0x8aafc], 0
    X86_AT(c, 0x94ce8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8AAFCu))), 0x0u, 0, 4);
    // 094cef  jne 0x94cf7
    X86_AT(c, 0x94cefu);
    if (x86_cc(c, 5)) { goto L_94cf7; }
    X86_TICK(c, 2);
    // 094cf1  mov dword ptr [0x8aafc], esi
    X86_AT(c, 0x94cf1u);
    wr32((c.sbase[3] + (uint32_t)(0x8AAFCu)), c.r[6]);
L_94cf7:
    X86_TICK(c, 9);
    // 094cf7  push esi
    X86_AT(c, 0x94cf7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094cf8  call 0x94ac8
    X86_AT(c, 0x94cf8u);
    push32(c, 0x94cfdu); x86_call_known(c, 0x94ac8u, f_00094ac8); X86_RET(c, 0x94cfdu);
L_94cfd:
    X86_TICK(c, 24);
    // 094cfd  pop edi
    X86_AT(c, 0x94cfdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094cfe  pop esi
    X86_AT(c, 0x94cfeu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094cff  leave 
    X86_AT(c, 0x94cffu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094d00  ret 4
    X86_AT(c, 0x94d00u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94ca0u, "ran off the end of a function");
}
void f_00094d0c(X86Cpu& c) {
    X86_TICK(c, 28);
    // 094d0c  enter 8, 0
    X86_AT(c, 0x94d0cu);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 094d10  push ebx
    X86_AT(c, 0x94d10u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094d11  push esi
    X86_AT(c, 0x94d11u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094d12  push edi
    X86_AT(c, 0x94d12u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094d13  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x94d13u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094d16  cmp byte ptr [0x8aaf0], 0
    X86_AT(c, 0x94d16u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8AAF0u))), 0x0u, 0, 1);
    // 094d1d  je 0x94d24
    X86_AT(c, 0x94d1du);
    if (x86_cc(c, 4)) { goto L_94d24; }
    X86_TICK(c, 7);
    // 094d1f  call 0x94f64
    X86_AT(c, 0x94d1fu);
    push32(c, 0x94d24u); x86_call_known(c, 0x94f64u, f_00094f64); X86_RET(c, 0x94d24u);
L_94d24:
    X86_TICK(c, 7);
    // 094d24  cmp edi, 0x7fffffec
    X86_AT(c, 0x94d24u);
    (void)x86_sub(c, c.r[7], 0x7FFFFFECu, 0, 4);
    // 094d2a  jbe 0x94d33
    X86_AT(c, 0x94d2au);
    if (x86_cc(c, 6)) { goto L_94d33; }
    X86_TICK(c, 9);
    // 094d2c  sub eax, eax
    X86_AT(c, 0x94d2cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 094d2e  jmp 0x94e0b
    X86_AT(c, 0x94d2eu);
    goto L_94e0b;
L_94d33:
    X86_TICK(c, 10);
    // 094d33  mov eax, edi
    X86_AT(c, 0x94d33u);
    c.r[0] = c.r[7];
    // 094d35  rcr eax, 1
    X86_AT(c, 0x94d35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 094d37  jae 0x94d3a
    X86_AT(c, 0x94d37u);
    if (x86_cc(c, 3)) { goto L_94d3a; }
    X86_TICK(c, 2);
    // 094d39  inc edi
    X86_AT(c, 0x94d39u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_94d3a:
    X86_TICK(c, 7);
    // 094d3a  test di, 3
    X86_AT(c, 0x94d3au);
    (void)x86_logic(c, (c.r[7] & 0xFFFFu) & 0x3u, 2);
    // 094d3f  je 0x94d44
    X86_AT(c, 0x94d3fu);
    if (x86_cc(c, 4)) { goto L_94d44; }
    X86_TICK(c, 2);
    // 094d41  add edi, 2
    X86_AT(c, 0x94d41u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
L_94d44:
    X86_TICK(c, 11);
    // 094d44  add edi, 0x10
    X86_AT(c, 0x94d44u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x10u, 0, 4); }
    // 094d47  push edi
    X86_AT(c, 0x94d47u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094d48  call 0x94b78
    X86_AT(c, 0x94d48u);
    push32(c, 0x94d4du); x86_call_known(c, 0x94b78u, f_00094b78); X86_RET(c, 0x94d4du);
    X86_TICK(c, 10);
    // 094d4d  xchg esi, eax
    X86_AT(c, 0x94d4du);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 094d4e  and esi, esi
    X86_AT(c, 0x94d4eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 094d50  jne 0x94d5f
    X86_AT(c, 0x94d50u);
    if (x86_cc(c, 5)) { goto L_94d5f; }
    X86_TICK(c, 9);
    // 094d52  push edi
    X86_AT(c, 0x94d52u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094d53  call 0x94ca0
    X86_AT(c, 0x94d53u);
    push32(c, 0x94d58u); x86_call_known(c, 0x94ca0u, f_00094ca0); X86_RET(c, 0x94d58u);
    X86_TICK(c, 9);
    // 094d58  push edi
    X86_AT(c, 0x94d58u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094d59  call 0x94b78
    X86_AT(c, 0x94d59u);
    push32(c, 0x94d5eu); x86_call_known(c, 0x94b78u, f_00094b78); X86_RET(c, 0x94d5eu);
    X86_TICK(c, 3);
    // 094d5e  xchg esi, eax
    X86_AT(c, 0x94d5eu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_94d5f:
    X86_TICK(c, 7);
    // 094d5f  and esi, esi
    X86_AT(c, 0x94d5fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 094d61  je 0x94df3
    X86_AT(c, 0x94d61u);
    if (x86_cc(c, 4)) { goto L_94df3; }
    X86_TICK(c, 9);
    // 094d67  push esi
    X86_AT(c, 0x94d67u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094d68  call 0x94a74
    X86_AT(c, 0x94d68u);
    push32(c, 0x94d6du); x86_call_known(c, 0x94a74u, f_00094a74); X86_RET(c, 0x94d6du);
    X86_TICK(c, 15);
    // 094d6d  mov eax, dword ptr [esi + 8]
    X86_AT(c, 0x94d6du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 094d70  sub eax, edi
    X86_AT(c, 0x94d70u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 094d72  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x94d72u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 094d75  cmp eax, 0x10
    X86_AT(c, 0x94d75u);
    (void)x86_sub(c, c.r[0], 0x10u, 0, 4);
    // 094d78  ja 0x94d84
    X86_AT(c, 0x94d78u);
    if (x86_cc(c, 7)) { goto L_94d84; }
    X86_TICK(c, 6);
    // 094d7a  mov edi, dword ptr [esi + 8]
    X86_AT(c, 0x94d7au);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 094d7d  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0x94d7du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_94d84:
    X86_TICK(c, 37);
    // 094d84  mov dword ptr [esi + 8], edi
    X86_AT(c, 0x94d84u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[7]);
    // 094d87  lea eax, [edi - 0x10]
    X86_AT(c, 0x94d87u);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFF0u);
    // 094d8a  mov dword ptr [0x8ab08], eax
    X86_AT(c, 0x94d8au);
    wr32((c.sbase[3] + (uint32_t)(0x8AB08u)), c.r[0]);
    // 094d8f  mov byte ptr [esi + 0xf], 0x44
    X86_AT(c, 0x94d8fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu)), 0x44u);
    // 094d93  mov ax, word ptr [0x8ab24]
    X86_AT(c, 0x94d93u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8AB24u))));
    // 094d99  mov word ptr [esi + 0xc], ax
    X86_AT(c, 0x94d99u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[0] & 0xFFFFu));
    // 094d9d  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0x94d9du);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 094da0  mov byte ptr [esi + 0xe], al
    X86_AT(c, 0x94da0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu)), g8(c, 0));
    // 094da3  lea eax, [esi + 0x10]
    X86_AT(c, 0x94da3u);
    c.r[0] = (uint32_t)(c.r[6] + 0x10u);
    // 094da6  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x94da6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 094da9  push eax
    X86_AT(c, 0x94da9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094daa  mov ecx, dword ptr [ebp + 0x14]
    X86_AT(c, 0x94daau);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 094dad  call dword ptr [ebp + 0x10]
    X86_AT(c, 0x94dadu);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, 0x94db0u); x86_call(c, t); X86_RET(c, 0x94db0u); }
    X86_TICK(c, 11);
    // 094db0  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x94db0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 094db3  and eax, eax
    X86_AT(c, 0x94db3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 094db5  jbe 0x94dfa
    X86_AT(c, 0x94db5u);
    if (x86_cc(c, 6)) { goto L_94dfa; }
    X86_TICK(c, 37);
    // 094db7  lea ebx, [edi + esi*1]
    X86_AT(c, 0x94db7u);
    c.r[3] = (uint32_t)(c.r[7] + c.r[6]);
    // 094dba  mov edx, dword ptr [esi]
    X86_AT(c, 0x94dbau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 094dbc  mov dword ptr [ebx], edx
    X86_AT(c, 0x94dbcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[2]);
    // 094dbe  mov dword ptr [esi], ebx
    X86_AT(c, 0x94dbeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[3]);
    // 094dc0  mov dword ptr [ebx + 4], esi
    X86_AT(c, 0x94dc0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[6]);
    // 094dc3  mov dword ptr [ebx + 8], eax
    X86_AT(c, 0x94dc3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)), c.r[0]);
    // 094dc6  mov byte ptr [ebx + 0xf], 0x55
    X86_AT(c, 0x94dc6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFu)), 0x55u);
    // 094dca  mov byte ptr [ebx + 0xe], 0
    X86_AT(c, 0x94dcau);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu)), 0x0u);
    // 094dce  mov dx, word ptr [0x8ab24]
    X86_AT(c, 0x94dceu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0x8AB24u))));
    // 094dd5  mov word ptr [ebx + 0xc], dx
    X86_AT(c, 0x94dd5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), (c.r[2] & 0xFFFFu));
    // 094dd9  mov dword ptr [ebx + eax*1 + 4], ebx
    X86_AT(c, 0x94dd9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x4u)), c.r[3]);
    // 094ddd  cmp esi, dword ptr [0x8ab00]
    X86_AT(c, 0x94dddu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0x8AB00u))), 0, 4);
    // 094de3  jne 0x94deb
    X86_AT(c, 0x94de3u);
    if (x86_cc(c, 5)) { goto L_94deb; }
    X86_TICK(c, 2);
    // 094de5  mov dword ptr [0x8ab00], ebx
    X86_AT(c, 0x94de5u);
    wr32((c.sbase[3] + (uint32_t)(0x8AB00u)), c.r[3]);
L_94deb:
    X86_TICK(c, 9);
    // 094deb  push ebx
    X86_AT(c, 0x94debu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094dec  call 0x94ac8
    X86_AT(c, 0x94decu);
    push32(c, 0x94df1u); x86_call_known(c, 0x94ac8u, f_00094ac8); X86_RET(c, 0x94df1u);
    X86_TICK(c, 7);
    // 094df1  jmp 0x94dfa
    X86_AT(c, 0x94df1u);
    goto L_94dfa;
L_94df3:
    X86_TICK(c, 2);
    // 094df3  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x94df3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_94dfa:
    X86_TICK(c, 12);
    // 094dfa  cmp byte ptr [0x8aaf0], 0
    X86_AT(c, 0x94dfau);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8AAF0u))), 0x0u, 0, 1);
    // 094e01  je 0x94e08
    X86_AT(c, 0x94e01u);
    if (x86_cc(c, 4)) { goto L_94e08; }
    X86_TICK(c, 7);
    // 094e03  call 0x94f64
    X86_AT(c, 0x94e03u);
    push32(c, 0x94e08u); x86_call_known(c, 0x94f64u, f_00094f64); X86_RET(c, 0x94e08u);
L_94e08:
    X86_TICK(c, 4);
    // 094e08  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94e08u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_94e0b:
    X86_TICK(c, 28);
    // 094e0b  pop edi
    X86_AT(c, 0x94e0bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094e0c  pop esi
    X86_AT(c, 0x94e0cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094e0d  pop ebx
    X86_AT(c, 0x94e0du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 094e0e  leave 
    X86_AT(c, 0x94e0eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094e0f  ret 0x10
    X86_AT(c, 0x94e0fu);
    c.eip = pop32(c); c.r[4] += 0x10u; return;
    x86_fault(c, 0x94d0cu, "ran off the end of a function");
}
void f_00094e14(X86Cpu& c) {
    X86_TICK(c, 22);
    // 094e14  push ebp
    X86_AT(c, 0x94e14u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094e15  mov ebp, esp
    X86_AT(c, 0x94e15u);
    c.r[5] = c.r[4];
    // 094e17  push ecx
    X86_AT(c, 0x94e17u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 094e18  leave 
    X86_AT(c, 0x94e18u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094e19  ret 4
    X86_AT(c, 0x94e19u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94e14u, "ran off the end of a function");
}
void f_00094e24(X86Cpu& c) {
    X86_TICK(c, 29);
    // 094e24  enter 4, 0
    X86_AT(c, 0x94e24u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 094e28  push edi
    X86_AT(c, 0x94e28u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094e29  push ebp
    X86_AT(c, 0x94e29u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094e2a  push 0x94e14
    X86_AT(c, 0x94e2au);
    { uint32_t v = 0x94E14u; push32(c, v); }
    // 094e2f  push dword ptr [ebp + 8]
    X86_AT(c, 0x94e2fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 094e32  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x94e32u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 094e35  call 0x94d0c
    X86_AT(c, 0x94e35u);
    push32(c, 0x94e3au); x86_call_known(c, 0x94d0cu, f_00094d0c); X86_RET(c, 0x94e3au);
    X86_TICK(c, 14);
    // 094e3a  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x94e3au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 094e3d  cmp byte ptr [0x8aaf2], 0
    X86_AT(c, 0x94e3du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8AAF2u))), 0x0u, 0, 1);
    // 094e44  je 0x94e60
    X86_AT(c, 0x94e44u);
    if (x86_cc(c, 4)) { goto L_94e60; }
    X86_TICK(c, 7);
    // 094e46  and eax, eax
    X86_AT(c, 0x94e46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 094e48  je 0x94e60
    X86_AT(c, 0x94e48u);
    if (x86_cc(c, 4)) { goto L_94e60; }
    X86_TICK(c, 11);
    // 094e4a  mov edx, dword ptr [0x8ab08]
    X86_AT(c, 0x94e4au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AB08u)));
    // 094e50  and edx, edx
    X86_AT(c, 0x94e50u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 094e52  jbe 0x94e60
    X86_AT(c, 0x94e52u);
    if (x86_cc(c, 6)) { goto L_94e60; }
    X86_TICK(c, 17);
    // 094e54  mov al, byte ptr [0x8aaf1]
    X86_AT(c, 0x94e54u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8AAF1u))));
    // 094e59  mov ecx, edx
    X86_AT(c, 0x94e59u);
    c.r[1] = c.r[2];
    // 094e5b  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0x94e5bu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094e5e  stosb byte ptr es:[edi], al
    X86_AT(c, 0x94e5eu);
    x86_string(c, 2, 1, 243, 4, 3);
L_94e60:
    X86_TICK(c, 24);
    // 094e60  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94e60u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094e63  pop edi
    X86_AT(c, 0x94e63u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094e64  leave 
    X86_AT(c, 0x94e64u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094e65  ret 8
    X86_AT(c, 0x94e65u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x94e24u, "ran off the end of a function");
}
void f_00094e70(X86Cpu& c) {
    X86_TICK(c, 22);
    // 094e70  push ebp
    X86_AT(c, 0x94e70u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094e71  mov ebp, esp
    X86_AT(c, 0x94e71u);
    c.r[5] = c.r[4];
    // 094e73  push dword ptr [ebp + 8]
    X86_AT(c, 0x94e73u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 094e76  mov ax, word ptr [0x8aaf4]
    X86_AT(c, 0x94e76u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8AAF4u))));
    // 094e7c  push eax
    X86_AT(c, 0x94e7cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094e7d  call 0x94e24
    X86_AT(c, 0x94e7du);
    push32(c, 0x94e82u); x86_call_known(c, 0x94e24u, f_00094e24); X86_RET(c, 0x94e82u);
    X86_TICK(c, 16);
    // 094e82  leave 
    X86_AT(c, 0x94e82u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094e83  ret 4
    X86_AT(c, 0x94e83u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94e70u, "ran off the end of a function");
}
void f_00094e8c(X86Cpu& c) {
    X86_TICK(c, 26);
    // 094e8c  push ebp
    X86_AT(c, 0x94e8cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094e8d  mov ebp, esp
    X86_AT(c, 0x94e8du);
    c.r[5] = c.r[4];
    // 094e8f  push ecx
    X86_AT(c, 0x94e8fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 094e90  push ebx
    X86_AT(c, 0x94e90u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094e91  mov ebx, dword ptr [ebp - 4]
    X86_AT(c, 0x94e91u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094e94  push dword ptr [ebx + 8]
    X86_AT(c, 0x94e94u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 094e97  push 6
    X86_AT(c, 0x94e97u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 094e99  call 0x95e10
    X86_AT(c, 0x94e99u);
    push32(c, 0x94e9eu); x86_call_known(c, 0x95e10u, f_00095e10); X86_RET(c, 0x94e9eu);
    X86_TICK(c, 9);
    // 094e9e  mov ebp, ebx
    X86_AT(c, 0x94e9eu);
    c.r[5] = c.r[3];
    // 094ea0  jmp 0x94f44
    X86_AT(c, 0x94ea0u);
    goto L_94f44;
L_94f44:
    X86_TICK(c, 30);
    // 094f44  lea esp, [ebp - 0x10]
    X86_AT(c, 0x94f44u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 094f47  pop edi
    X86_AT(c, 0x94f47u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094f48  pop esi
    X86_AT(c, 0x94f48u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094f49  pop ebx
    X86_AT(c, 0x94f49u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 094f4a  leave 
    X86_AT(c, 0x94f4au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094f4b  ret 4
    X86_AT(c, 0x94f4bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94e8cu, "ran off the end of a function");
}
void f_00094eaa(X86Cpu& c) {
    X86_TICK(c, 24);
    // 094eaa  enter 4, 0
    X86_AT(c, 0x94eaau);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 094eae  push ebx
    X86_AT(c, 0x94eaeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094eaf  push esi
    X86_AT(c, 0x94eafu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094eb0  push edi
    X86_AT(c, 0x94eb0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094eb1  cmp dword ptr [ebp + 8], 0
    X86_AT(c, 0x94eb1u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 4);
    // 094eb5  je 0x94f47
    X86_AT(c, 0x94eb5u);
    if (x86_cc(c, 4)) { goto L_94f47; }
    X86_TICK(c, 25);
    // 094ebb  add dword ptr [ebp + 8], 0xfffffff0
    X86_AT(c, 0x94ebbu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF0u, 0, 4)); }
    // 094ebf  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x94ebfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094ec2  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x94ec2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 094ec5  cmp byte ptr [0x8aaf0], 0
    X86_AT(c, 0x94ec5u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8AAF0u))), 0x0u, 0, 1);
    // 094ecc  je 0x94ed3
    X86_AT(c, 0x94eccu);
    if (x86_cc(c, 4)) { goto L_94ed3; }
    X86_TICK(c, 7);
    // 094ece  call 0x94f64
    X86_AT(c, 0x94eceu);
    push32(c, 0x94ed3u); x86_call_known(c, 0x94f64u, f_00094f64); X86_RET(c, 0x94ed3u);
L_94ed3:
    X86_TICK(c, 16);
    // 094ed3  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94ed3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094ed6  cmp byte ptr [eax + 0xf], 0x44
    X86_AT(c, 0x94ed6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFu))), 0x44u, 0, 1);
    // 094eda  jne 0x94eea
    X86_AT(c, 0x94edau);
    if (x86_cc(c, 5)) { goto L_94eea; }
    X86_TICK(c, 15);
    // 094edc  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94edcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094edf  mov edx, dword ptr [eax]
    X86_AT(c, 0x94edfu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 094ee1  and edx, edx
    X86_AT(c, 0x94ee1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 094ee3  je 0x94ef1
    X86_AT(c, 0x94ee3u);
    if (x86_cc(c, 4)) { goto L_94ef1; }
    X86_TICK(c, 11);
    // 094ee5  cmp eax, dword ptr [edx + 4]
    X86_AT(c, 0x94ee5u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u))), 0, 4);
    // 094ee8  je 0x94ef1
    X86_AT(c, 0x94ee8u);
    if (x86_cc(c, 4)) { goto L_94ef1; }
L_94eea:
    X86_TICK(c, 9);
    // 094eea  mov ecx, ebp
    X86_AT(c, 0x94eeau);
    c.r[1] = c.r[5];
    // 094eec  call 0x94e8c
    X86_AT(c, 0x94eecu);
    push32(c, 0x94ef1u); x86_call_known(c, 0x94e8cu, f_00094e8c); X86_RET(c, 0x94ef1u);
L_94ef1:
    X86_TICK(c, 15);
    // 094ef1  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94ef1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094ef4  mov byte ptr [eax + 0xf], 0x55
    X86_AT(c, 0x94ef4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFu)), 0x55u);
    // 094ef8  push eax
    X86_AT(c, 0x94ef8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094ef9  call 0x94ac8
    X86_AT(c, 0x94ef9u);
    push32(c, 0x94efeu); x86_call_known(c, 0x94ac8u, f_00094ac8); X86_RET(c, 0x94efeu);
    X86_TICK(c, 16);
    // 094efe  mov eax, dword ptr [0x8ab00]
    X86_AT(c, 0x94efeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB00u)));
    // 094f03  cmp byte ptr [eax + 0xf], 0x55
    X86_AT(c, 0x94f03u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFu))), 0x55u, 0, 1);
    // 094f07  jne 0x94f36
    X86_AT(c, 0x94f07u);
    if (x86_cc(c, 5)) { goto L_94f36; }
    X86_TICK(c, 28);
    // 094f09  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x94f09u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 094f0c  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0x94f0cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 094f0f  neg edx
    X86_AT(c, 0x94f0fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_neg(c, v, 4); }
    // 094f11  add dword ptr [0x8ab04], edx
    X86_AT(c, 0x94f11u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AB04u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 094f17  mov eax, dword ptr [eax + 4]
    X86_AT(c, 0x94f17u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 094f1a  mov dword ptr [0x8ab00], eax
    X86_AT(c, 0x94f1au);
    wr32((c.sbase[3] + (uint32_t)(0x8AB00u)), c.r[0]);
    // 094f1f  and eax, eax
    X86_AT(c, 0x94f1fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 094f21  je 0x94f29
    X86_AT(c, 0x94f21u);
    if (x86_cc(c, 4)) { goto L_94f29; }
    X86_TICK(c, 2);
    // 094f23  mov dword ptr [eax], 0
    X86_AT(c, 0x94f23u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
L_94f29:
    X86_TICK(c, 12);
    // 094f29  push dword ptr [ebp - 4]
    X86_AT(c, 0x94f29u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 094f2c  call 0x94a74
    X86_AT(c, 0x94f2cu);
    push32(c, 0x94f31u); x86_call_known(c, 0x94a74u, f_00094a74); X86_RET(c, 0x94f31u);
    X86_TICK(c, 7);
    // 094f31  call 0x94bd0
    X86_AT(c, 0x94f31u);
    push32(c, 0x94f36u); x86_call_known(c, 0x94bd0u, f_00094bd0); X86_RET(c, 0x94f36u);
L_94f36:
    X86_TICK(c, 12);
    // 094f36  cmp byte ptr [0x8aaf0], 0
    X86_AT(c, 0x94f36u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8AAF0u))), 0x0u, 0, 1);
    // 094f3d  je 0x94f44
    X86_AT(c, 0x94f3du);
    if (x86_cc(c, 4)) { goto L_94f44; }
    X86_TICK(c, 7);
    // 094f3f  call 0x94f64
    X86_AT(c, 0x94f3fu);
    push32(c, 0x94f44u); x86_call_known(c, 0x94f64u, f_00094f64); X86_RET(c, 0x94f44u);
L_94f44:
    X86_TICK(c, 2);
    // 094f44  lea esp, [ebp - 0x10]
    X86_AT(c, 0x94f44u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
L_94f47:
    X86_TICK(c, 28);
    // 094f47  pop edi
    X86_AT(c, 0x94f47u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094f48  pop esi
    X86_AT(c, 0x94f48u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094f49  pop ebx
    X86_AT(c, 0x94f49u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 094f4a  leave 
    X86_AT(c, 0x94f4au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094f4b  ret 4
    X86_AT(c, 0x94f4bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94eaau, "ran off the end of a function");
}
void f_00094f64(X86Cpu& c) {
    X86_TICK(c, 15);
    // 094f64  push ebp
    X86_AT(c, 0x94f64u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094f65  mov ebp, esp
    X86_AT(c, 0x94f65u);
    c.r[5] = c.r[4];
    // 094f67  push ebp
    X86_AT(c, 0x94f67u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094f68  push 0x94f7c
    X86_AT(c, 0x94f68u);
    { uint32_t v = 0x94F7Cu; push32(c, v); }
    // 094f6d  call 0x949a8
    X86_AT(c, 0x94f6du);
    push32(c, 0x94f72u); x86_call_known(c, 0x949a8u, f_000949a8); X86_RET(c, 0x94f72u);
    X86_TICK(c, 16);
    // 094f72  leave 
    X86_AT(c, 0x94f72u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094f73  ret 
    X86_AT(c, 0x94f73u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x94f64u, "ran off the end of a function");
}
void f_00094f7c(X86Cpu& c) {
    X86_TICK(c, 22);
    // 094f7c  push ebp
    X86_AT(c, 0x94f7cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094f7d  mov ebp, esp
    X86_AT(c, 0x94f7du);
    c.r[5] = c.r[4];
    // 094f7f  push ecx
    X86_AT(c, 0x94f7fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 094f80  leave 
    X86_AT(c, 0x94f80u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094f81  ret 4
    X86_AT(c, 0x94f81u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94f7cu, "ran off the end of a function");
}
void f_00094f84(X86Cpu& c) {
    X86_TICK(c, 13);
    // 094f84  inc byte ptr [0x8ab29]
    X86_AT(c, 0x94f84u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AB29u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 094f8a  call 0x95de8
    X86_AT(c, 0x94f8au);
    push32(c, 0x94f8fu); x86_call_known(c, 0x95de8u, f_00095de8); X86_RET(c, 0x94f8fu);
    X86_TICK(c, 7);
    // 094f8f  call 0x947fc
    X86_AT(c, 0x94f8fu);
    push32(c, 0x94f94u); x86_call_known(c, 0x947fcu, f_000947fc); X86_RET(c, 0x94f94u);
    X86_TICK(c, 7);
    // 094f94  call 0x946b8
    X86_AT(c, 0x94f94u);
    push32(c, 0x94f99u); x86_call_known(c, 0x946b8u, f_000946b8); X86_RET(c, 0x94f99u);
    X86_TICK(c, 7);
    // 094f99  call 0x933a5
    X86_AT(c, 0x94f99u);
    push32(c, 0x94f9eu); x86_call_known(c, 0x933a5u, f_000933a5); X86_RET(c, 0x94f9eu);
    X86_TICK(c, 13);
    // 094f9e  mov al, byte ptr [0x8ab28]
    X86_AT(c, 0x94f9eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8AB28u))));
    // 094fa3  push eax
    X86_AT(c, 0x94fa3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094fa4  call 0x948d0
    X86_AT(c, 0x94fa4u);
    push32(c, 0x94fa9u); x86_call_known(c, 0x948d0u, f_000948d0); X86_RET(c, 0x94fa9u);
    X86_TICK(c, 10);
    // 094fa9  ret 
    X86_AT(c, 0x94fa9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x94f84u, "ran off the end of a function");
}
void f_00094fac(X86Cpu& c) {
    X86_TICK(c, 16);
    // 094fac  push ebp
    X86_AT(c, 0x94facu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094fad  mov ebp, esp
    X86_AT(c, 0x94fadu);
    c.r[5] = c.r[4];
    // 094faf  cmp byte ptr [0x8ab2a], 0
    X86_AT(c, 0x94fafu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8AB2Au))), 0x0u, 0, 1);
    // 094fb6  je 0x94fc5
    X86_AT(c, 0x94fb6u);
    if (x86_cc(c, 4)) { goto L_94fc5; }
    X86_TICK(c, 13);
    // 094fb8  mov al, byte ptr [0x8ab28]
    X86_AT(c, 0x94fb8u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8AB28u))));
    // 094fbd  push eax
    X86_AT(c, 0x94fbdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094fbe  call 0x948d0
    X86_AT(c, 0x94fbeu);
    push32(c, 0x94fc3u); x86_call_known(c, 0x948d0u, f_000948d0); X86_RET(c, 0x94fc3u);
    X86_TICK(c, 7);
    // 094fc3  jmp 0x94fcc
    X86_AT(c, 0x94fc3u);
    goto L_94fcc;
L_94fc5:
    X86_TICK(c, 2);
    // 094fc5  mov byte ptr [0x8ab2a], 1
    X86_AT(c, 0x94fc5u);
    wr8((c.sbase[3] + (uint32_t)(0x8AB2Au)), 0x1u);
L_94fcc:
    X86_TICK(c, 13);
    // 094fcc  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0x94fccu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 094fcf  mov byte ptr [0x8ab28], al
    X86_AT(c, 0x94fcfu);
    wr8((c.sbase[3] + (uint32_t)(0x8AB28u)), g8(c, 0));
    // 094fd4  call 0x94f84
    X86_AT(c, 0x94fd4u);
    push32(c, 0x94fd9u); x86_call_known(c, 0x94f84u, f_00094f84); X86_RET(c, 0x94fd9u);
    X86_TICK(c, 16);
    // 094fd9  leave 
    X86_AT(c, 0x94fd9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094fda  ret 4
    X86_AT(c, 0x94fdau);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94facu, "ran off the end of a function");
}
void f_00094fe0(X86Cpu& c) {
    X86_TICK(c, 16);
    // 094fe0  push ebp
    X86_AT(c, 0x94fe0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094fe1  mov ebp, esp
    X86_AT(c, 0x94fe1u);
    c.r[5] = c.r[4];
    // 094fe3  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x94fe3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 094fe6  call 0x9488c
    X86_AT(c, 0x94fe6u);
    push32(c, 0x94febu); x86_call_known(c, 0x9488cu, f_0009488c); X86_RET(c, 0x94febu);
    X86_TICK(c, 23);
    // 094feb  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x94febu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 094fee  mov dword ptr [0x8aacc], eax
    X86_AT(c, 0x94feeu);
    wr32((c.sbase[3] + (uint32_t)(0x8AACCu)), c.r[0]);
    // 094ff3  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x94ff3u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094ff7  mov dword ptr [0x8aac8], eax
    X86_AT(c, 0x94ff7u);
    wr32((c.sbase[3] + (uint32_t)(0x8AAC8u)), c.r[0]);
    // 094ffc  push 0x3f
    X86_AT(c, 0x94ffcu);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 094ffe  call 0x94818
    X86_AT(c, 0x94ffeu);
    push32(c, 0x95003u); x86_call_known(c, 0x94818u, f_00094818); X86_RET(c, 0x95003u);
    X86_TICK(c, 20);
    // 095003  mov eax, dword ptr [0x8aac4]
    X86_AT(c, 0x95003u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AAC4u)));
    // 095008  leave 
    X86_AT(c, 0x95008u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095009  ret 0xc
    X86_AT(c, 0x95009u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x94fe0u, "ran off the end of a function");
}
void f_0009500c(X86Cpu& c) {
    X86_TICK(c, 22);
    // 09500c  push ebp
    X86_AT(c, 0x9500cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 09500d  mov ebp, esp
    X86_AT(c, 0x9500du);
    c.r[5] = c.r[4];
    // 09500f  push edi
    X86_AT(c, 0x9500fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095010  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x95010u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 095013  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x95013u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 095016  call 0x9488c
    X86_AT(c, 0x95016u);
    push32(c, 0x9501bu); x86_call_known(c, 0x9488cu, f_0009488c); X86_RET(c, 0x9501bu);
    X86_TICK(c, 19);
    // 09501b  mov dword ptr [0x8aacc], edi
    X86_AT(c, 0x9501bu);
    wr32((c.sbase[3] + (uint32_t)(0x8AACCu)), c.r[7]);
    // 095021  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x95021u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 095025  mov dword ptr [0x8aac8], eax
    X86_AT(c, 0x95025u);
    wr32((c.sbase[3] + (uint32_t)(0x8AAC8u)), c.r[0]);
    // 09502a  push 0x40
    X86_AT(c, 0x9502au);
    { uint32_t v = 0x40u; push32(c, v); }
    // 09502c  call 0x94818
    X86_AT(c, 0x9502cu);
    push32(c, 0x95031u); x86_call_known(c, 0x94818u, f_00094818); X86_RET(c, 0x95031u);
    X86_TICK(c, 11);
    // 095031  cmp edi, dword ptr [0x8aac4]
    X86_AT(c, 0x95031u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0x8AAC4u))), 0, 4);
    // 095037  jbe 0x9504c
    X86_AT(c, 0x95037u);
    if (x86_cc(c, 6)) { goto L_9504c; }
    X86_TICK(c, 12);
    // 095039  cmp word ptr [0x8aabe], 0
    X86_AT(c, 0x95039u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8AABEu))), 0x0u, 0, 2);
    // 095041  jne 0x9504c
    X86_AT(c, 0x95041u);
    if (x86_cc(c, 5)) { goto L_9504c; }
    X86_TICK(c, 2);
    // 095043  mov word ptr [0x8aabe], 0x15
    X86_AT(c, 0x95043u);
    wr16((c.sbase[3] + (uint32_t)(0x8AABEu)), 0x15u);
L_9504c:
    X86_TICK(c, 24);
    // 09504c  mov eax, dword ptr [0x8aac4]
    X86_AT(c, 0x9504cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AAC4u)));
    // 095051  pop edi
    X86_AT(c, 0x95051u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095052  leave 
    X86_AT(c, 0x95052u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095053  ret 0xc
    X86_AT(c, 0x95053u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x9500cu, "ran off the end of a function");
}
void f_00095070(X86Cpu& c) {
    X86_TICK(c, 23);
    // 095070  push ebp
    X86_AT(c, 0x95070u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095071  mov ebp, esp
    X86_AT(c, 0x95071u);
    c.r[5] = c.r[4];
    // 095073  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x95073u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 095077  mov dword ptr [0x8aac8], eax
    X86_AT(c, 0x95077u);
    wr32((c.sbase[3] + (uint32_t)(0x8AAC8u)), c.r[0]);
    // 09507c  mov byte ptr [0x8aac4], 0
    X86_AT(c, 0x9507cu);
    wr8((c.sbase[3] + (uint32_t)(0x8AAC4u)), 0x0u);
    // 095083  push 0x44
    X86_AT(c, 0x95083u);
    { uint32_t v = 0x44u; push32(c, v); }
    // 095085  call 0x94818
    X86_AT(c, 0x95085u);
    push32(c, 0x9508au); x86_call_known(c, 0x94818u, f_00094818); X86_RET(c, 0x9508au);
    X86_TICK(c, 12);
    // 09508a  test byte ptr [0x8aad0], 0x80
    X86_AT(c, 0x9508au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8AAD0u))) & 0x80u, 1);
    // 095091  jne 0x95097
    X86_AT(c, 0x95091u);
    if (x86_cc(c, 5)) { goto L_95097; }
    X86_TICK(c, 9);
    // 095093  sub eax, eax
    X86_AT(c, 0x95093u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 095095  jmp 0x950b3
    X86_AT(c, 0x95095u);
    goto L_950b3;
L_95097:
    X86_TICK(c, 12);
    // 095097  test byte ptr [0x8aad0], 2
    X86_AT(c, 0x95097u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8AAD0u))) & 0x2u, 1);
    // 09509e  je 0x950a4
    X86_AT(c, 0x9509eu);
    if (x86_cc(c, 4)) { goto L_950a4; }
    X86_TICK(c, 9);
    // 0950a0  mov al, 2
    X86_AT(c, 0x950a0u);
    s8(c, 0, 0x2u);
    // 0950a2  jmp 0x950b3
    X86_AT(c, 0x950a2u);
    goto L_950b3;
L_950a4:
    X86_TICK(c, 12);
    // 0950a4  test byte ptr [0x8aad0], 1
    X86_AT(c, 0x950a4u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8AAD0u))) & 0x1u, 1);
    // 0950ab  je 0x950b1
    X86_AT(c, 0x950abu);
    if (x86_cc(c, 4)) { goto L_950b1; }
    X86_TICK(c, 9);
    // 0950ad  mov al, 1
    X86_AT(c, 0x950adu);
    s8(c, 0, 0x1u);
    // 0950af  jmp 0x950b3
    X86_AT(c, 0x950afu);
    goto L_950b3;
L_950b1:
    X86_TICK(c, 2);
    // 0950b1  mov al, 4
    X86_AT(c, 0x950b1u);
    s8(c, 0, 0x4u);
L_950b3:
    X86_TICK(c, 16);
    // 0950b3  leave 
    X86_AT(c, 0x950b3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0950b4  ret 4
    X86_AT(c, 0x950b4u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x95070u, "ran off the end of a function");
}
void f_000950b8(X86Cpu& c) {
    X86_TICK(c, 45);
    // 0950b8  enter 4, 0
    X86_AT(c, 0x950b8u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0950bc  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x950bcu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0950c0  mov dword ptr [0x8aac8], eax
    X86_AT(c, 0x950c0u);
    wr32((c.sbase[3] + (uint32_t)(0x8AAC8u)), c.r[0]);
    // 0950c5  mov al, byte ptr [ebp + 0x10]
    X86_AT(c, 0x950c5u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0950c8  mov byte ptr [0x8aac4], al
    X86_AT(c, 0x950c8u);
    wr8((c.sbase[3] + (uint32_t)(0x8AAC4u)), g8(c, 0));
    // 0950cd  movzx eax, word ptr [ebp + 0xe]
    X86_AT(c, 0x950cdu);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xEu)));
    // 0950d1  mov dword ptr [0x8aacc], eax
    X86_AT(c, 0x950d1u);
    wr32((c.sbase[3] + (uint32_t)(0x8AACCu)), c.r[0]);
    // 0950d6  movzx eax, word ptr [ebp + 0xc]
    X86_AT(c, 0x950d6u);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0950da  mov dword ptr [0x8aad0], eax
    X86_AT(c, 0x950dau);
    wr32((c.sbase[3] + (uint32_t)(0x8AAD0u)), c.r[0]);
    // 0950df  push 0x42
    X86_AT(c, 0x950dfu);
    { uint32_t v = 0x42u; push32(c, v); }
    // 0950e1  call 0x94818
    X86_AT(c, 0x950e1u);
    push32(c, 0x950e6u); x86_call_known(c, 0x94818u, f_00094818); X86_RET(c, 0x950e6u);
    X86_TICK(c, 32);
    // 0950e6  mov ax, word ptr [0x8aad0]
    X86_AT(c, 0x950e6u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8AAD0u))));
    // 0950ec  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x950ecu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 0950f0  mov ax, word ptr [0x8aac4]
    X86_AT(c, 0x950f0u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8AAC4u))));
    // 0950f6  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x950f6u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 0950fa  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x950fau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0950fd  leave 
    X86_AT(c, 0x950fdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0950fe  ret 0xc
    X86_AT(c, 0x950feu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x950b8u, "ran off the end of a function");
}
void f_00095104(X86Cpu& c) {
    X86_TICK(c, 40);
    // 095104  push ebp
    X86_AT(c, 0x95104u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095105  mov ebp, esp
    X86_AT(c, 0x95105u);
    c.r[5] = c.r[4];
    // 095107  push esi
    X86_AT(c, 0x95107u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095108  push edi
    X86_AT(c, 0x95108u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095109  push ebx
    X86_AT(c, 0x95109u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09510a  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x9510au);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 09510d  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9510du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 095110  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0x95110u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 095114  sub eax, eax
    X86_AT(c, 0x95114u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 095116  cld 
    X86_AT(c, 0x95116u);
    c.fl &= ~X86_DF;
    // 095117  cmpsb byte ptr [esi], byte ptr es:[edi]
    X86_AT(c, 0x95117u);
    x86_string(c, 1, 1, 243, 4, 3);
    // 095119  jb 0x95120
    X86_AT(c, 0x95119u);
    if (x86_cc(c, 2)) { goto L_95120; }
    X86_TICK(c, 5);
    // 09511b  je 0x95121
    X86_AT(c, 0x9511bu);
    if (x86_cc(c, 4)) { goto L_95121; }
    X86_TICK(c, 9);
    // 09511d  inc eax
    X86_AT(c, 0x9511du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 09511e  jmp 0x95121
    X86_AT(c, 0x9511eu);
    goto L_95121;
L_95120:
    X86_TICK(c, 2);
    // 095120  dec eax
    X86_AT(c, 0x95120u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_95121:
    X86_TICK(c, 26);
    // 095121  pop ebx
    X86_AT(c, 0x95121u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 095122  pop edi
    X86_AT(c, 0x95122u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095123  pop esi
    X86_AT(c, 0x95123u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095124  pop ebp
    X86_AT(c, 0x95124u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 095125  ret 0xc
    X86_AT(c, 0x95125u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x95104u, "ran off the end of a function");
}
void f_00095144(X86Cpu& c) {
    X86_TICK(c, 48);
    // 095144  push ebp
    X86_AT(c, 0x95144u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095145  mov ebp, esp
    X86_AT(c, 0x95145u);
    c.r[5] = c.r[4];
    // 095147  push ecx
    X86_AT(c, 0x95147u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 095148  sub esp, 0x28
    X86_AT(c, 0x95148u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x28u, 0, 4); }
    // 09514b  push ebx
    X86_AT(c, 0x9514bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09514c  push esi
    X86_AT(c, 0x9514cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09514d  push edi
    X86_AT(c, 0x9514du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09514e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x9514eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095151  movzx edx, byte ptr [eax - 0x21]
    X86_AT(c, 0x95151u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFDFu)));
    // 095155  mov ecx, dword ptr [eax + 0x20]
    X86_AT(c, 0x95155u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x20u)));
    // 095158  sub ecx, edx
    X86_AT(c, 0x95158u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 09515a  mov dword ptr [ebp - 0x20], ecx
    X86_AT(c, 0x9515au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[1]);
    // 09515d  push dword ptr [ebp - 0x20]
    X86_AT(c, 0x9515du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))); push32(c, v); }
    // 095160  lea ecx, [ebp - 0x10]
    X86_AT(c, 0x95160u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 095163  push ecx
    X86_AT(c, 0x95163u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 095164  call 0x95f5c
    X86_AT(c, 0x95164u);
    push32(c, 0x95169u); x86_call_known(c, 0x95f5cu, f_00095f5c); X86_RET(c, 0x95169u);
    X86_TICK(c, 15);
    // 095169  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95169u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09516c  lea edx, [eax + 0xc]
    X86_AT(c, 0x9516cu);
    c.r[2] = (uint32_t)(c.r[0] + 0xCu);
    // 09516f  push edx
    X86_AT(c, 0x9516fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 095170  call 0x96280
    X86_AT(c, 0x95170u);
    push32(c, 0x95175u); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x95175u);
    X86_TICK(c, 11);
    // 095175  lea eax, [ebp - 0x10]
    X86_AT(c, 0x95175u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 095178  push eax
    X86_AT(c, 0x95178u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095179  call 0x96280
    X86_AT(c, 0x95179u);
    push32(c, 0x9517eu); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x9517eu);
    X86_TICK(c, 7);
    // 09517e  call 0x963f0
    X86_AT(c, 0x9517eu);
    push32(c, 0x95183u); x86_call_known(c, 0x963f0u, f_000963f0); X86_RET(c, 0x95183u);
    X86_TICK(c, 11);
    // 095183  lea eax, [ebp - 0x10]
    X86_AT(c, 0x95183u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 095186  push eax
    X86_AT(c, 0x95186u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095187  call 0x962e0
    X86_AT(c, 0x95187u);
    push32(c, 0x9518cu); x86_call_known(c, 0x962e0u, f_000962e0); X86_RET(c, 0x9518cu);
    X86_TICK(c, 15);
    // 09518c  lea eax, [ebp - 0x10]
    X86_AT(c, 0x9518cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 09518f  push eax
    X86_AT(c, 0x9518fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095190  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x95190u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 095193  push eax
    X86_AT(c, 0x95193u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095194  call 0x960c0
    X86_AT(c, 0x95194u);
    push32(c, 0x95199u); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x95199u);
    X86_TICK(c, 47);
    // 095199  push esi
    X86_AT(c, 0x95199u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09519a  lea esi, [ebp - 0x2c]
    X86_AT(c, 0x9519au);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 09519d  push edi
    X86_AT(c, 0x9519du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09519e  lea edi, [ebp - 0x1a]
    X86_AT(c, 0x9519eu);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFE6u);
    // 0951a1  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x951a1u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0951a2  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x951a2u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0951a3  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x951a3u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 0951a5  pop edi
    X86_AT(c, 0x951a5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0951a6  pop esi
    X86_AT(c, 0x951a6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0951a7  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x951a7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0951aa  mov dword ptr [eax - 0x20], 0x13
    X86_AT(c, 0x951aau);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)), 0x13u);
    // 0951b1  mov edi, 1
    X86_AT(c, 0x951b1u);
    c.r[7] = 0x1u;
    // 0951b6  mov esi, edi
    X86_AT(c, 0x951b6u);
    c.r[6] = c.r[7];
L_951b8:
    X86_TICK(c, 14);
    // 0951b8  mov bl, byte ptr [ebp + edi*1 - 0x1b]
    X86_AT(c, 0x951b8u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] + 0xFFFFFFE5u))));
    // 0951bc  mov eax, esi
    X86_AT(c, 0x951bcu);
    c.r[0] = c.r[6];
    // 0951be  rcr eax, 1
    X86_AT(c, 0x951beu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0951c0  jae 0x951ca
    X86_AT(c, 0x951c0u);
    if (x86_cc(c, 3)) { goto L_951ca; }
    X86_TICK(c, 13);
    // 0951c2  sub bh, bh
    X86_AT(c, 0x951c2u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, g8(c, 7), 0, 1)); }
    // 0951c4  mov eax, ebx
    X86_AT(c, 0x951c4u);
    c.r[0] = c.r[3];
    // 0951c6  and al, 0xf
    X86_AT(c, 0x951c6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0951c8  jmp 0x951cf
    X86_AT(c, 0x951c8u);
    goto L_951cf;
L_951ca:
    X86_TICK(c, 5);
    // 0951ca  mov eax, ebx
    X86_AT(c, 0x951cau);
    c.r[0] = c.r[3];
    // 0951cc  shr al, 4
    X86_AT(c, 0x951ccu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
L_951cf:
    X86_TICK(c, 34);
    // 0951cf  mov byte ptr [ebp - 0x21], al
    X86_AT(c, 0x951cfu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), g8(c, 0));
    // 0951d2  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x951d2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0951d5  dec dword ptr [eax - 0x20]
    X86_AT(c, 0x951d5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0951d8  mov dl, byte ptr [ebp - 0x21]
    X86_AT(c, 0x951d8u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu))));
    // 0951db  add dl, 0x30
    X86_AT(c, 0x951dbu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x30u, 0, 1)); }
    // 0951de  mov ecx, dword ptr [eax - 0x20]
    X86_AT(c, 0x951deu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)));
    // 0951e1  mov byte ptr [eax + ecx*1 - 0x1c], dl
    X86_AT(c, 0x951e1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0xFFFFFFE4u)), g8(c, 2));
    // 0951e5  mov eax, esi
    X86_AT(c, 0x951e5u);
    c.r[0] = c.r[6];
    // 0951e7  rcr eax, 1
    X86_AT(c, 0x951e7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0951e9  jb 0x951ec
    X86_AT(c, 0x951e9u);
    if (x86_cc(c, 2)) { goto L_951ec; }
    X86_TICK(c, 2);
    // 0951eb  inc edi
    X86_AT(c, 0x951ebu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_951ec:
    X86_TICK(c, 7);
    // 0951ec  cmp esi, 0x12
    X86_AT(c, 0x951ecu);
    (void)x86_sub(c, c.r[6], 0x12u, 0, 4);
    // 0951ef  jge 0x951fa
    X86_AT(c, 0x951efu);
    if (x86_cc(c, 13)) { goto L_951fa; }
    X86_TICK(c, 9);
    // 0951f1  inc esi
    X86_AT(c, 0x951f1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0951f2  jmp 0x951b8
    X86_AT(c, 0x951f2u);
    X86_POLL(c, 0x951b8u); goto L_951b8;
L_951f4:
    X86_TICK(c, 10);
    // 0951f4  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x951f4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0951f7  inc dword ptr [eax - 0x20]
    X86_AT(c, 0x951f7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_951fa:
    X86_TICK(c, 20);
    // 0951fa  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x951fau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0951fd  mov edx, dword ptr [eax - 0x20]
    X86_AT(c, 0x951fdu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)));
    // 095200  cmp byte ptr [eax + edx*1 - 0x1c], 0x30
    X86_AT(c, 0x95200u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFE4u))), 0x30u, 0, 1);
    // 095205  je 0x951f4
    X86_AT(c, 0x95205u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x951f4u); goto L_951f4; }
    X86_TICK(c, 17);
    // 095207  mov ecx, 0x12
    X86_AT(c, 0x95207u);
    c.r[1] = 0x12u;
    // 09520c  sub ecx, dword ptr [ebp - 0x20]
    X86_AT(c, 0x9520cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))), 0, 4); }
    // 09520f  inc ecx
    X86_AT(c, 0x9520fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 095210  cmp edx, ecx
    X86_AT(c, 0x95210u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 095212  jge 0x95217
    X86_AT(c, 0x95212u);
    if (x86_cc(c, 13)) { goto L_95217; }
    X86_TICK(c, 6);
    // 095214  inc dword ptr [eax - 4]
    X86_AT(c, 0x95214u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_95217:
    X86_TICK(c, 28);
    // 095217  pop edi
    X86_AT(c, 0x95217u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095218  pop esi
    X86_AT(c, 0x95218u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095219  pop ebx
    X86_AT(c, 0x95219u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 09521a  leave 
    X86_AT(c, 0x9521au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09521b  ret 
    X86_AT(c, 0x9521bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95144u, "ran off the end of a function");
}
void f_00095224(X86Cpu& c) {
    X86_TICK(c, 33);
    // 095224  push ebp
    X86_AT(c, 0x95224u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095225  mov ebp, esp
    X86_AT(c, 0x95225u);
    c.r[5] = c.r[4];
    // 095227  push ecx
    X86_AT(c, 0x95227u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 095228  sub esp, 0xc
    X86_AT(c, 0x95228u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 09522b  push ebx
    X86_AT(c, 0x9522bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09522c  push esi
    X86_AT(c, 0x9522cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09522d  push edi
    X86_AT(c, 0x9522du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09522e  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x9522eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 095231  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95231u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095234  cmp edi, dword ptr [eax + 0x20]
    X86_AT(c, 0x95234u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x20u))), 0, 4);
    // 095237  jge 0x952dd
    X86_AT(c, 0x95237u);
    if (x86_cc(c, 13)) { goto L_952dd; }
    X86_TICK(c, 17);
    // 09523d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x9523du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095240  add eax, 0xc
    X86_AT(c, 0x95240u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xCu, 0, 4); }
    // 095243  push eax
    X86_AT(c, 0x95243u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095244  mov ebx, eax
    X86_AT(c, 0x95244u);
    c.r[3] = c.r[0];
    // 095246  call 0x96280
    X86_AT(c, 0x95246u);
    push32(c, 0x9524bu); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x9524bu);
    X86_TICK(c, 12);
    // 09524b  push dword ptr [0x1bbc]
    X86_AT(c, 0x9524bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BBCu))); push32(c, v); }
    // 095251  call 0x96208
    X86_AT(c, 0x95251u);
    push32(c, 0x95256u); x86_call_known(c, 0x96208u, f_00096208); X86_RET(c, 0x95256u);
    X86_TICK(c, 7);
    // 095256  call 0x96724
    X86_AT(c, 0x95256u);
    push32(c, 0x9525bu); x86_call_known(c, 0x96724u, f_00096724); X86_RET(c, 0x9525bu);
    X86_TICK(c, 5);
    // 09525b  je 0x952dd
    X86_AT(c, 0x9525bu);
    if (x86_cc(c, 4)) { goto L_952dd; }
    X86_TICK(c, 15);
    // 095261  mov eax, edi
    X86_AT(c, 0x95261u);
    c.r[0] = c.r[7];
    // 095263  push eax
    X86_AT(c, 0x95263u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095264  lea ebx, [ebp - 0x10]
    X86_AT(c, 0x95264u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 095267  push ebx
    X86_AT(c, 0x95267u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095268  call 0x95f5c
    X86_AT(c, 0x95268u);
    push32(c, 0x9526du); x86_call_known(c, 0x95f5cu, f_00095f5c); X86_RET(c, 0x9526du);
    X86_TICK(c, 9);
    // 09526d  push ebx
    X86_AT(c, 0x9526du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09526e  call 0x96280
    X86_AT(c, 0x9526eu);
    push32(c, 0x95273u); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x95273u);
    X86_TICK(c, 12);
    // 095273  push dword ptr [0x1bc0]
    X86_AT(c, 0x95273u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BC0u))); push32(c, v); }
    // 095279  call 0x96208
    X86_AT(c, 0x95279u);
    push32(c, 0x9527eu); x86_call_known(c, 0x96208u, f_00096208); X86_RET(c, 0x9527eu);
    X86_TICK(c, 7);
    // 09527e  call 0x96514
    X86_AT(c, 0x9527eu);
    push32(c, 0x95283u); x86_call_known(c, 0x96514u, f_00096514); X86_RET(c, 0x95283u);
    X86_TICK(c, 19);
    // 095283  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95283u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095286  lea edx, [eax + 0xc]
    X86_AT(c, 0x95286u);
    c.r[2] = (uint32_t)(c.r[0] + 0xCu);
    // 095289  push edx
    X86_AT(c, 0x95289u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 09528a  mov ebx, eax
    X86_AT(c, 0x9528au);
    c.r[3] = c.r[0];
    // 09528c  mov esi, edx
    X86_AT(c, 0x9528cu);
    c.r[6] = c.r[2];
    // 09528e  call 0x96280
    X86_AT(c, 0x9528eu);
    push32(c, 0x95293u); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x95293u);
    X86_TICK(c, 7);
    // 095293  call 0x960f0
    X86_AT(c, 0x95293u);
    push32(c, 0x95298u); x86_call_known(c, 0x960f0u, f_000960f0); X86_RET(c, 0x95298u);
    X86_TICK(c, 9);
    // 095298  push esi
    X86_AT(c, 0x95298u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095299  call 0x962e0
    X86_AT(c, 0x95299u);
    push32(c, 0x9529eu); x86_call_known(c, 0x962e0u, f_000962e0); X86_RET(c, 0x9529eu);
    X86_TICK(c, 9);
    // 09529e  push esi
    X86_AT(c, 0x9529eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09529f  call 0x96280
    X86_AT(c, 0x9529fu);
    push32(c, 0x952a4u); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x952a4u);
    X86_TICK(c, 12);
    // 0952a4  push dword ptr [0x1bc4]
    X86_AT(c, 0x952a4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BC4u))); push32(c, v); }
    // 0952aa  call 0x96208
    X86_AT(c, 0x952aau);
    push32(c, 0x952afu); x86_call_known(c, 0x96208u, f_00096208); X86_RET(c, 0x952afu);
    X86_TICK(c, 7);
    // 0952af  call 0x96724
    X86_AT(c, 0x952afu);
    push32(c, 0x952b4u); x86_call_known(c, 0x96724u, f_00096724); X86_RET(c, 0x952b4u);
    X86_TICK(c, 13);
    // 0952b4  setae al
    X86_AT(c, 0x952b4u);
    s8(c, 0, x86_cc(c, 3) ? 1u : 0u);
    // 0952b7  mov byte ptr [ebx - 0x21], al
    X86_AT(c, 0x952b7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFDFu)), g8(c, 0));
    // 0952ba  and al, al
    X86_AT(c, 0x952bau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0952bc  je 0x952dd
    X86_AT(c, 0x952bcu);
    if (x86_cc(c, 4)) { goto L_952dd; }
    X86_TICK(c, 9);
    // 0952be  push esi
    X86_AT(c, 0x952beu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0952bf  call 0x96280
    X86_AT(c, 0x952bfu);
    push32(c, 0x952c4u); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x952c4u);
    X86_TICK(c, 11);
    // 0952c4  mov eax, 0x1bc8
    X86_AT(c, 0x952c4u);
    c.r[0] = 0x1BC8u;
    // 0952c9  push eax
    X86_AT(c, 0x952c9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0952ca  call 0x96280
    X86_AT(c, 0x952cau);
    push32(c, 0x952cfu); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x952cfu);
    X86_TICK(c, 7);
    // 0952cf  call 0x963f0
    X86_AT(c, 0x952cfu);
    push32(c, 0x952d4u); x86_call_known(c, 0x963f0u, f_000963f0); X86_RET(c, 0x952d4u);
    X86_TICK(c, 9);
    // 0952d4  push esi
    X86_AT(c, 0x952d4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0952d5  call 0x962e0
    X86_AT(c, 0x952d5u);
    push32(c, 0x952dau); x86_call_known(c, 0x962e0u, f_000962e0); X86_RET(c, 0x952dau);
    X86_TICK(c, 6);
    // 0952da  inc dword ptr [ebx - 4]
    X86_AT(c, 0x952dau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_952dd:
    X86_TICK(c, 28);
    // 0952dd  pop edi
    X86_AT(c, 0x952ddu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0952de  pop esi
    X86_AT(c, 0x952deu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0952df  pop ebx
    X86_AT(c, 0x952dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0952e0  leave 
    X86_AT(c, 0x952e0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0952e1  ret 4
    X86_AT(c, 0x952e1u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x95224u, "ran off the end of a function");
}
void f_000952f4(X86Cpu& c) {
    X86_TICK(c, 35);
    // 0952f4  enter 0x38, 0
    X86_AT(c, 0x952f4u);
    x86_enter(c, 0x38u, 0x0u, 4);
    // 0952f8  push ebx
    X86_AT(c, 0x952f8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0952f9  push esi
    X86_AT(c, 0x952f9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0952fa  push edi
    X86_AT(c, 0x952fau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0952fb  mov edi, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x952fbu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0952fe  mov esi, dword ptr [ebp + 0x24]
    X86_AT(c, 0x952feu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u)));
    // 095301  lea eax, [ebp + 0xc]
    X86_AT(c, 0x95301u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 095304  push eax
    X86_AT(c, 0x95304u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095305  lea eax, [ebp - 0x38]
    X86_AT(c, 0x95305u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC8u);
    // 095308  push eax
    X86_AT(c, 0x95308u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095309  call 0x95fdc
    X86_AT(c, 0x95309u);
    push32(c, 0x9530eu); x86_call_known(c, 0x95fdcu, f_00095fdc); X86_RET(c, 0x9530eu);
    X86_TICK(c, 39);
    // 09530e  lea eax, [ebp - 0x38]
    X86_AT(c, 0x9530eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC8u);
    // 095311  push esi
    X86_AT(c, 0x95311u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095312  push edi
    X86_AT(c, 0x95312u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095313  mov edi, esi
    X86_AT(c, 0x95313u);
    c.r[7] = c.r[6];
    // 095315  mov esi, eax
    X86_AT(c, 0x95315u);
    c.r[6] = c.r[0];
    // 095317  mov ecx, 3
    X86_AT(c, 0x95317u);
    c.r[1] = 0x3u;
    // 09531c  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x9531cu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 09531e  pop edi
    X86_AT(c, 0x9531eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09531f  pop esi
    X86_AT(c, 0x9531fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095320  cmp word ptr [esi], 0
    X86_AT(c, 0x95320u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[6]))), 0x0u, 0, 2);
    // 095324  jne 0x954e0
    X86_AT(c, 0x95324u);
    if (x86_cc(c, 5)) { goto L_954e0; }
    X86_TICK(c, 11);
    // 09532a  lea eax, [ebp + 0xc]
    X86_AT(c, 0x9532au);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 09532d  push eax
    X86_AT(c, 0x9532du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09532e  call 0x9609c
    X86_AT(c, 0x9532eu);
    push32(c, 0x95333u); x86_call_known(c, 0x9609cu, f_0009609c); X86_RET(c, 0x95333u);
    X86_TICK(c, 12);
    // 095333  movsx eax, ax
    X86_AT(c, 0x95333u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 095336  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x95336u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 095339  and eax, eax
    X86_AT(c, 0x95339u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 09533b  jl 0x953cc
    X86_AT(c, 0x9533bu);
    if (x86_cc(c, 12)) { goto L_953cc; }
    X86_TICK(c, 77);
    // 095341  imul eax, eax, 0x12a
    X86_AT(c, 0x95341u);
    c.r[0] = x86_imul2(c, c.r[0], 0x12Au, 4);
    // 095347  cdq 
    X86_AT(c, 0x95347u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 095348  mov ecx, 0x3de
    X86_AT(c, 0x95348u);
    c.r[1] = 0x3DEu;
    // 09534d  idiv ecx
    X86_AT(c, 0x9534du);
    x86_idiv(c, c.r[1], 4, 0x9534du);
    // 09534f  inc eax
    X86_AT(c, 0x9534fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 095350  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x95350u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 095353  and eax, eax
    X86_AT(c, 0x95353u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 095355  je 0x95383
    X86_AT(c, 0x95355u);
    if (x86_cc(c, 4)) { goto L_95383; }
    X86_TICK(c, 16);
    // 095357  push dword ptr [ebp - 4]
    X86_AT(c, 0x95357u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 09535a  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x9535au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 09535d  push eax
    X86_AT(c, 0x9535du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09535e  call 0x95f5c
    X86_AT(c, 0x9535eu);
    push32(c, 0x95363u); x86_call_known(c, 0x95f5cu, f_00095f5c); X86_RET(c, 0x95363u);
    X86_TICK(c, 11);
    // 095363  lea eax, [ebp + 0xc]
    X86_AT(c, 0x95363u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 095366  push eax
    X86_AT(c, 0x95366u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095367  call 0x96280
    X86_AT(c, 0x95367u);
    push32(c, 0x9536cu); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x9536cu);
    X86_TICK(c, 11);
    // 09536c  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x9536cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 09536f  push eax
    X86_AT(c, 0x9536fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095370  call 0x96280
    X86_AT(c, 0x95370u);
    push32(c, 0x95375u); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x95375u);
    X86_TICK(c, 7);
    // 095375  call 0x96520
    X86_AT(c, 0x95375u);
    push32(c, 0x9537au); x86_call_known(c, 0x96520u, f_00096520); X86_RET(c, 0x9537au);
    X86_TICK(c, 11);
    // 09537a  lea eax, [ebp + 0xc]
    X86_AT(c, 0x9537au);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 09537d  push eax
    X86_AT(c, 0x9537du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09537e  call 0x962e0
    X86_AT(c, 0x9537eu);
    push32(c, 0x95383u); x86_call_known(c, 0x962e0u, f_000962e0); X86_RET(c, 0x95383u);
L_95383:
    X86_TICK(c, 11);
    // 095383  lea eax, [ebp + 0xc]
    X86_AT(c, 0x95383u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 095386  push eax
    X86_AT(c, 0x95386u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095387  call 0x96280
    X86_AT(c, 0x95387u);
    push32(c, 0x9538cu); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x9538cu);
    X86_TICK(c, 12);
    // 09538c  push dword ptr [0x1bc4]
    X86_AT(c, 0x9538cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BC4u))); push32(c, v); }
    // 095392  call 0x96208
    X86_AT(c, 0x95392u);
    push32(c, 0x95397u); x86_call_known(c, 0x96208u, f_00096208); X86_RET(c, 0x95397u);
    X86_TICK(c, 7);
    // 095397  call 0x96724
    X86_AT(c, 0x95397u);
    push32(c, 0x9539cu); x86_call_known(c, 0x96724u, f_00096724); X86_RET(c, 0x9539cu);
    X86_TICK(c, 5);
    // 09539c  jb 0x95457
    X86_AT(c, 0x9539cu);
    if (x86_cc(c, 2)) { goto L_95457; }
    X86_TICK(c, 11);
    // 0953a2  lea eax, [ebp + 0xc]
    X86_AT(c, 0x953a2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0953a5  push eax
    X86_AT(c, 0x953a5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0953a6  call 0x96280
    X86_AT(c, 0x953a6u);
    push32(c, 0x953abu); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x953abu);
    X86_TICK(c, 11);
    // 0953ab  mov eax, 0x1bc8
    X86_AT(c, 0x953abu);
    c.r[0] = 0x1BC8u;
    // 0953b0  push eax
    X86_AT(c, 0x953b0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0953b1  call 0x96280
    X86_AT(c, 0x953b1u);
    push32(c, 0x953b6u); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x953b6u);
    X86_TICK(c, 7);
    // 0953b6  call 0x963f0
    X86_AT(c, 0x953b6u);
    push32(c, 0x953bbu); x86_call_known(c, 0x963f0u, f_000963f0); X86_RET(c, 0x953bbu);
    X86_TICK(c, 11);
    // 0953bb  lea eax, [ebp + 0xc]
    X86_AT(c, 0x953bbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0953be  push eax
    X86_AT(c, 0x953beu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0953bf  call 0x962e0
    X86_AT(c, 0x953bfu);
    push32(c, 0x953c4u); x86_call_known(c, 0x962e0u, f_000962e0); X86_RET(c, 0x953c4u);
    X86_TICK(c, 13);
    // 0953c4  inc dword ptr [ebp - 4]
    X86_AT(c, 0x953c4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0953c7  jmp 0x95457
    X86_AT(c, 0x953c7u);
    goto L_95457;
L_953cc:
    X86_TICK(c, 77);
    // 0953cc  imul eax, dword ptr [ebp - 4], 0x12a
    X86_AT(c, 0x953ccu);
    c.r[0] = x86_imul2(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x12Au, 4);
    // 0953d3  add eax, 0x12a
    X86_AT(c, 0x953d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x12Au, 0, 4); }
    // 0953d8  cdq 
    X86_AT(c, 0x953d8u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0953d9  mov ecx, 0x3de
    X86_AT(c, 0x953d9u);
    c.r[1] = 0x3DEu;
    // 0953de  idiv ecx
    X86_AT(c, 0x953deu);
    x86_idiv(c, c.r[1], 4, 0x953deu);
    // 0953e0  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x953e0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0953e3  and eax, eax
    X86_AT(c, 0x953e3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0953e5  je 0x95417
    X86_AT(c, 0x953e5u);
    if (x86_cc(c, 4)) { goto L_95417; }
    X86_TICK(c, 19);
    // 0953e7  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0x953e7u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 0953eb  neg eax
    X86_AT(c, 0x953ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0953ed  push eax
    X86_AT(c, 0x953edu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0953ee  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x953eeu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 0953f1  push eax
    X86_AT(c, 0x953f1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0953f2  call 0x95f5c
    X86_AT(c, 0x953f2u);
    push32(c, 0x953f7u); x86_call_known(c, 0x95f5cu, f_00095f5c); X86_RET(c, 0x953f7u);
    X86_TICK(c, 11);
    // 0953f7  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x953f7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 0953fa  push eax
    X86_AT(c, 0x953fau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0953fb  call 0x96280
    X86_AT(c, 0x953fbu);
    push32(c, 0x95400u); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x95400u);
    X86_TICK(c, 11);
    // 095400  lea eax, [ebp + 0xc]
    X86_AT(c, 0x95400u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 095403  push eax
    X86_AT(c, 0x95403u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095404  call 0x96280
    X86_AT(c, 0x95404u);
    push32(c, 0x95409u); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x95409u);
    X86_TICK(c, 7);
    // 095409  call 0x963f0
    X86_AT(c, 0x95409u);
    push32(c, 0x9540eu); x86_call_known(c, 0x963f0u, f_000963f0); X86_RET(c, 0x9540eu);
    X86_TICK(c, 11);
    // 09540e  lea eax, [ebp + 0xc]
    X86_AT(c, 0x9540eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 095411  push eax
    X86_AT(c, 0x95411u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095412  call 0x962e0
    X86_AT(c, 0x95412u);
    push32(c, 0x95417u); x86_call_known(c, 0x962e0u, f_000962e0); X86_RET(c, 0x95417u);
L_95417:
    X86_TICK(c, 11);
    // 095417  lea eax, [ebp + 0xc]
    X86_AT(c, 0x95417u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 09541a  push eax
    X86_AT(c, 0x9541au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09541b  call 0x96280
    X86_AT(c, 0x9541bu);
    push32(c, 0x95420u); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x95420u);
    X86_TICK(c, 11);
    // 095420  mov eax, 0x1bc8
    X86_AT(c, 0x95420u);
    c.r[0] = 0x1BC8u;
    // 095425  push eax
    X86_AT(c, 0x95425u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095426  call 0x96280
    X86_AT(c, 0x95426u);
    push32(c, 0x9542bu); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x9542bu);
    X86_TICK(c, 7);
    // 09542b  call 0x96724
    X86_AT(c, 0x9542bu);
    push32(c, 0x95430u); x86_call_known(c, 0x96724u, f_00096724); X86_RET(c, 0x95430u);
    X86_TICK(c, 5);
    // 095430  jae 0x95457
    X86_AT(c, 0x95430u);
    if (x86_cc(c, 3)) { goto L_95457; }
    X86_TICK(c, 11);
    // 095432  lea eax, [ebp + 0xc]
    X86_AT(c, 0x95432u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 095435  push eax
    X86_AT(c, 0x95435u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095436  call 0x96280
    X86_AT(c, 0x95436u);
    push32(c, 0x9543bu); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x9543bu);
    X86_TICK(c, 12);
    // 09543b  push dword ptr [0x1bd4]
    X86_AT(c, 0x9543bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BD4u))); push32(c, v); }
    // 095441  call 0x96208
    X86_AT(c, 0x95441u);
    push32(c, 0x95446u); x86_call_known(c, 0x96208u, f_00096208); X86_RET(c, 0x95446u);
    X86_TICK(c, 7);
    // 095446  call 0x963f0
    X86_AT(c, 0x95446u);
    push32(c, 0x9544bu); x86_call_known(c, 0x963f0u, f_000963f0); X86_RET(c, 0x9544bu);
    X86_TICK(c, 11);
    // 09544b  lea eax, [ebp + 0xc]
    X86_AT(c, 0x9544bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 09544e  push eax
    X86_AT(c, 0x9544eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09544f  call 0x962e0
    X86_AT(c, 0x9544fu);
    push32(c, 0x95454u); x86_call_known(c, 0x962e0u, f_000962e0); X86_RET(c, 0x95454u);
    X86_TICK(c, 6);
    // 095454  dec dword ptr [ebp - 4]
    X86_AT(c, 0x95454u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_95457:
    X86_TICK(c, 15);
    // 095457  mov byte ptr [ebp - 0x21], 0
    X86_AT(c, 0x95457u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), 0x0u);
    // 09545b  movzx eax, byte ptr [ebp + 0x18]
    X86_AT(c, 0x9545bu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 09545f  cmp eax, 0x45
    X86_AT(c, 0x9545fu);
    (void)x86_sub(c, c.r[0], 0x45u, 0, 4);
    // 095462  je 0x95489
    X86_AT(c, 0x95462u);
    if (x86_cc(c, 4)) { goto L_95489; }
    X86_TICK(c, 7);
    // 095464  cmp eax, 0x47
    X86_AT(c, 0x95464u);
    (void)x86_sub(c, c.r[0], 0x47u, 0, 4);
    // 095467  je 0x9548e
    X86_AT(c, 0x95467u);
    if (x86_cc(c, 4)) { goto L_9548e; }
    X86_TICK(c, 7);
    // 095469  cmp eax, 0x65
    X86_AT(c, 0x95469u);
    (void)x86_sub(c, c.r[0], 0x65u, 0, 4);
    // 09546c  je 0x95489
    X86_AT(c, 0x9546cu);
    if (x86_cc(c, 4)) { goto L_95489; }
    X86_TICK(c, 7);
    // 09546e  cmp eax, 0x66
    X86_AT(c, 0x9546eu);
    (void)x86_sub(c, c.r[0], 0x66u, 0, 4);
    // 095471  je 0x9547a
    X86_AT(c, 0x95471u);
    if (x86_cc(c, 4)) { goto L_9547a; }
    X86_TICK(c, 7);
    // 095473  cmp eax, 0x67
    X86_AT(c, 0x95473u);
    (void)x86_sub(c, c.r[0], 0x67u, 0, 4);
    // 095476  je 0x9548e
    X86_AT(c, 0x95476u);
    if (x86_cc(c, 4)) { goto L_9548e; }
    X86_TICK(c, 7);
    // 095478  jmp 0x9549f
    X86_AT(c, 0x95478u);
    goto L_9549f;
L_9547a:
    X86_TICK(c, 17);
    // 09547a  mov eax, edi
    X86_AT(c, 0x9547au);
    c.r[0] = c.r[7];
    // 09547c  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x9547cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 09547f  sub edx, edx
    X86_AT(c, 0x9547fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 095481  cmp eax, edx
    X86_AT(c, 0x95481u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 095483  jl 0x95486
    X86_AT(c, 0x95483u);
    if (x86_cc(c, 12)) { goto L_95486; }
    X86_TICK(c, 3);
    // 095485  xchg edx, eax
    X86_AT(c, 0x95485u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_95486:
    X86_TICK(c, 9);
    // 095486  push edx
    X86_AT(c, 0x95486u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 095487  jmp 0x95498
    X86_AT(c, 0x95487u);
    goto L_95498;
L_95489:
    X86_TICK(c, 9);
    // 095489  lea eax, [edi + 1]
    X86_AT(c, 0x95489u);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 09548c  jmp 0x95497
    X86_AT(c, 0x9548cu);
    goto L_95497;
L_9548e:
    X86_TICK(c, 11);
    // 09548e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x9548eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095491  cmp edi, eax
    X86_AT(c, 0x95491u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 095493  jl 0x95497
    X86_AT(c, 0x95493u);
    if (x86_cc(c, 12)) { goto L_95497; }
    X86_TICK(c, 2);
    // 095495  mov eax, edi
    X86_AT(c, 0x95495u);
    c.r[0] = c.r[7];
L_95497:
    X86_TICK(c, 2);
    // 095497  push eax
    X86_AT(c, 0x95497u);
    { uint32_t v = c.r[0]; push32(c, v); }
L_95498:
    X86_TICK(c, 9);
    // 095498  mov ecx, ebp
    X86_AT(c, 0x95498u);
    c.r[1] = c.r[5];
    // 09549a  call 0x95224
    X86_AT(c, 0x9549au);
    push32(c, 0x9549fu); x86_call_known(c, 0x95224u, f_00095224); X86_RET(c, 0x9549fu);
L_9549f:
    X86_TICK(c, 9);
    // 09549f  mov ecx, ebp
    X86_AT(c, 0x9549fu);
    c.r[1] = c.r[5];
    // 0954a1  call 0x95144
    X86_AT(c, 0x954a1u);
    push32(c, 0x954a6u); x86_call_known(c, 0x95144u, f_00095144); X86_RET(c, 0x954a6u);
    X86_TICK(c, 34);
    // 0954a6  mov eax, 0x30303030
    X86_AT(c, 0x954a6u);
    c.r[0] = 0x30303030u;
    // 0954ab  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x954abu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0954ae  add edx, 4
    X86_AT(c, 0x954aeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x4u, 0, 4); }
    // 0954b1  push edi
    X86_AT(c, 0x954b1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0954b2  mov edi, edx
    X86_AT(c, 0x954b2u);
    c.r[7] = c.r[2];
    // 0954b4  mov ecx, 0x12
    X86_AT(c, 0x954b4u);
    c.r[1] = 0x12u;
    // 0954b9  stosb byte ptr es:[edi], al
    X86_AT(c, 0x954b9u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0954bb  pop edi
    X86_AT(c, 0x954bbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0954bc  sub ebx, ebx
    X86_AT(c, 0x954bcu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0954be  jmp 0x954d2
    X86_AT(c, 0x954beu);
    goto L_954d2;
L_954c0:
    X86_TICK(c, 22);
    // 0954c0  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0x954c0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0954c3  mov dl, byte ptr [ebp + eax*1 - 0x1c]
    X86_AT(c, 0x954c3u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFE4u))));
    // 0954c7  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x954c7u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0954ca  mov byte ptr [ecx + ebx*1 + 4], dl
    X86_AT(c, 0x954cau);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + c.r[3] + 0x4u)), g8(c, 2));
    // 0954ce  inc dword ptr [ebp - 0x20]
    X86_AT(c, 0x954ceu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0954d1  inc ebx
    X86_AT(c, 0x954d1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
L_954d2:
    X86_TICK(c, 12);
    // 0954d2  cmp dword ptr [ebp - 0x20], 0x12
    X86_AT(c, 0x954d2u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))), 0x12u, 0, 4);
    // 0954d6  jle 0x954c0
    X86_AT(c, 0x954d6u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0x954c0u); goto L_954c0; }
    X86_TICK(c, 10);
    // 0954d8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x954d8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0954db  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x954dbu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0954de  mov dword ptr [edx], eax
    X86_AT(c, 0x954deu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
L_954e0:
    X86_TICK(c, 28);
    // 0954e0  pop edi
    X86_AT(c, 0x954e0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0954e1  pop esi
    X86_AT(c, 0x954e1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0954e2  pop ebx
    X86_AT(c, 0x954e2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0954e3  leave 
    X86_AT(c, 0x954e3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0954e4  ret 0x20
    X86_AT(c, 0x954e4u);
    c.eip = pop32(c); c.r[4] += 0x20u; return;
    x86_fault(c, 0x952f4u, "ran off the end of a function");
}
void f_000954fc(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0954fc  push ebp
    X86_AT(c, 0x954fcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0954fd  mov ebp, esp
    X86_AT(c, 0x954fdu);
    c.r[5] = c.r[4];
    // 0954ff  push dword ptr [ebp + 0x10]
    X86_AT(c, 0x954ffu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 095502  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x95502u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 095505  push dword ptr [ebp + 8]
    X86_AT(c, 0x95505u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 095508  call 0x96244
    X86_AT(c, 0x95508u);
    push32(c, 0x9550du); x86_call_known(c, 0x96244u, f_00096244); X86_RET(c, 0x9550du);
    X86_TICK(c, 11);
    // 09550d  sub esp, 0xc
    X86_AT(c, 0x9550du);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 095510  push esp
    X86_AT(c, 0x95510u);
    { uint32_t v = c.r[4]; push32(c, v); }
    // 095511  call 0x962e0
    X86_AT(c, 0x95511u);
    push32(c, 0x95516u); x86_call_known(c, 0x962e0u, f_000962e0); X86_RET(c, 0x95516u);
    X86_TICK(c, 7);
    // 095516  call 0x95c28
    X86_AT(c, 0x95516u);
    push32(c, 0x9551bu); x86_call_known(c, 0x95c28u, f_00095c28); X86_RET(c, 0x9551bu);
    X86_TICK(c, 16);
    // 09551b  leave 
    X86_AT(c, 0x9551bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09551c  ret 0xc
    X86_AT(c, 0x9551cu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x954fcu, "ran off the end of a function");
}
void f_00095524(X86Cpu& c) {
    X86_TICK(c, 17);
    // 095524  push ebp
    X86_AT(c, 0x95524u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095525  mov ebp, esp
    X86_AT(c, 0x95525u);
    c.r[5] = c.r[4];
    // 095527  push ecx
    X86_AT(c, 0x95527u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 095528  mov eax, dword ptr [0x8a750]
    X86_AT(c, 0x95528u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A750u)));
    // 09552d  cmp eax, 0xffff
    X86_AT(c, 0x9552du);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 095532  je 0x95544
    X86_AT(c, 0x95532u);
    if (x86_cc(c, 4)) { goto L_95544; }
    X86_TICK(c, 11);
    // 095534  mov edx, dword ptr [0x8ab58]
    X86_AT(c, 0x95534u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AB58u)));
    // 09553a  cmp eax, edx
    X86_AT(c, 0x9553au);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 09553c  jbe 0x95544
    X86_AT(c, 0x9553cu);
    if (x86_cc(c, 6)) { goto L_95544; }
    X86_TICK(c, 9);
    // 09553e  push edx
    X86_AT(c, 0x9553eu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 09553f  call 0x93bd4
    X86_AT(c, 0x9553fu);
    push32(c, 0x95544u); x86_call_known(c, 0x93bd4u, f_00093bd4); X86_RET(c, 0x95544u);
L_95544:
    X86_TICK(c, 18);
    // 095544  mov byte ptr [0x8ab50], 1
    X86_AT(c, 0x95544u);
    wr8((c.sbase[3] + (uint32_t)(0x8AB50u)), 0x1u);
    // 09554b  leave 
    X86_AT(c, 0x9554bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09554c  ret 
    X86_AT(c, 0x9554cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95524u, "ran off the end of a function");
}
void f_00095558(X86Cpu& c) {
    X86_TICK(c, 23);
    // 095558  push ebp
    X86_AT(c, 0x95558u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095559  mov ebp, esp
    X86_AT(c, 0x95559u);
    c.r[5] = c.r[4];
    // 09555b  push ecx
    X86_AT(c, 0x9555bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 09555c  inc dword ptr [0x8a75c]
    X86_AT(c, 0x9555cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A75Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 095562  mov eax, dword ptr [0x8a750]
    X86_AT(c, 0x95562u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A750u)));
    // 095567  cmp eax, 0xffff
    X86_AT(c, 0x95567u);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 09556c  je 0x95579
    X86_AT(c, 0x9556cu);
    if (x86_cc(c, 4)) { goto L_95579; }
    X86_TICK(c, 7);
    // 09556e  cmp eax, 1
    X86_AT(c, 0x9556eu);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 095571  jb 0x95579
    X86_AT(c, 0x95571u);
    if (x86_cc(c, 2)) { goto L_95579; }
    X86_TICK(c, 6);
    // 095573  dec dword ptr [0x8a750]
    X86_AT(c, 0x95573u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A750u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_95579:
    X86_TICK(c, 16);
    // 095579  leave 
    X86_AT(c, 0x95579u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09557a  ret 
    X86_AT(c, 0x9557au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95558u, "ran off the end of a function");
}
void f_00095588(X86Cpu& c) {
    X86_TICK(c, 27);
    // 095588  push ebp
    X86_AT(c, 0x95588u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095589  mov ebp, esp
    X86_AT(c, 0x95589u);
    c.r[5] = c.r[4];
    // 09558b  push ecx
    X86_AT(c, 0x9558bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 09558c  push ebx
    X86_AT(c, 0x9558cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09558d  mov dword ptr [0x8ab54], 0
    X86_AT(c, 0x9558du);
    wr32((c.sbase[3] + (uint32_t)(0x8AB54u)), 0x0u);
    // 095597  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95597u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09559a  add eax, 8
    X86_AT(c, 0x9559au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 09559d  push eax
    X86_AT(c, 0x9559du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09559e  mov ebx, eax
    X86_AT(c, 0x9559eu);
    c.r[3] = c.r[0];
    // 0955a0  call 0x96280
    X86_AT(c, 0x955a0u);
    push32(c, 0x955a5u); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x955a5u);
    X86_TICK(c, 12);
    // 0955a5  push dword ptr [0x1bbc]
    X86_AT(c, 0x955a5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BBCu))); push32(c, v); }
    // 0955ab  call 0x96208
    X86_AT(c, 0x955abu);
    push32(c, 0x955b0u); x86_call_known(c, 0x96208u, f_00096208); X86_RET(c, 0x955b0u);
    X86_TICK(c, 7);
    // 0955b0  call 0x96724
    X86_AT(c, 0x955b0u);
    push32(c, 0x955b5u); x86_call_known(c, 0x96724u, f_00096724); X86_RET(c, 0x955b5u);
    X86_TICK(c, 5);
    // 0955b5  jae 0x955d1
    X86_AT(c, 0x955b5u);
    if (x86_cc(c, 3)) { goto L_955d1; }
    X86_TICK(c, 9);
    // 0955b7  push ebx
    X86_AT(c, 0x955b7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0955b8  call 0x96280
    X86_AT(c, 0x955b8u);
    push32(c, 0x955bdu); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x955bdu);
    X86_TICK(c, 7);
    // 0955bd  call 0x96358
    X86_AT(c, 0x955bdu);
    push32(c, 0x955c2u); x86_call_known(c, 0x96358u, f_00096358); X86_RET(c, 0x955c2u);
    X86_TICK(c, 9);
    // 0955c2  push ebx
    X86_AT(c, 0x955c2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0955c3  call 0x962e0
    X86_AT(c, 0x955c3u);
    push32(c, 0x955c8u); x86_call_known(c, 0x962e0u, f_000962e0); X86_RET(c, 0x955c8u);
    X86_TICK(c, 9);
    // 0955c8  mov byte ptr [0x8ab4c], 0x2d
    X86_AT(c, 0x955c8u);
    wr8((c.sbase[3] + (uint32_t)(0x8AB4Cu)), 0x2Du);
    // 0955cf  jmp 0x955f3
    X86_AT(c, 0x955cfu);
    goto L_955f3;
L_955d1:
    X86_TICK(c, 12);
    // 0955d1  test byte ptr [0x8a74c], 2
    X86_AT(c, 0x955d1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A74Cu))) & 0x2u, 1);
    // 0955d8  je 0x955e3
    X86_AT(c, 0x955d8u);
    if (x86_cc(c, 4)) { goto L_955e3; }
    X86_TICK(c, 9);
    // 0955da  mov byte ptr [0x8ab4c], 0x2b
    X86_AT(c, 0x955dau);
    wr8((c.sbase[3] + (uint32_t)(0x8AB4Cu)), 0x2Bu);
    // 0955e1  jmp 0x955f3
    X86_AT(c, 0x955e1u);
    goto L_955f3;
L_955e3:
    X86_TICK(c, 12);
    // 0955e3  test byte ptr [0x8a74c], 4
    X86_AT(c, 0x955e3u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A74Cu))) & 0x4u, 1);
    // 0955ea  je 0x95604
    X86_AT(c, 0x955eau);
    if (x86_cc(c, 4)) { goto L_95604; }
    X86_TICK(c, 2);
    // 0955ec  mov byte ptr [0x8ab4c], 0x20
    X86_AT(c, 0x955ecu);
    wr8((c.sbase[3] + (uint32_t)(0x8AB4Cu)), 0x20u);
L_955f3:
    X86_TICK(c, 11);
    // 0955f3  mov dword ptr [0x8ab54], 1
    X86_AT(c, 0x955f3u);
    wr32((c.sbase[3] + (uint32_t)(0x8AB54u)), 0x1u);
    // 0955fd  mov ecx, ebp
    X86_AT(c, 0x955fdu);
    c.r[1] = c.r[5];
    // 0955ff  call 0x95558
    X86_AT(c, 0x955ffu);
    push32(c, 0x95604u); x86_call_known(c, 0x95558u, f_00095558); X86_RET(c, 0x95604u);
L_95604:
    X86_TICK(c, 20);
    // 095604  pop ebx
    X86_AT(c, 0x95604u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 095605  leave 
    X86_AT(c, 0x95605u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095606  ret 
    X86_AT(c, 0x95606u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95588u, "ran off the end of a function");
}
void f_00095620(X86Cpu& c) {
    X86_TICK(c, 27);
    // 095620  push ebp
    X86_AT(c, 0x95620u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095621  mov ebp, esp
    X86_AT(c, 0x95621u);
    c.r[5] = c.r[4];
    // 095623  push ecx
    X86_AT(c, 0x95623u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 095624  push esi
    X86_AT(c, 0x95624u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095625  push edi
    X86_AT(c, 0x95625u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095626  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x95626u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 095629  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x95629u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09562c  mov ecx, edi
    X86_AT(c, 0x9562cu);
    c.r[1] = c.r[7];
    // 09562e  jmp 0x95631
    X86_AT(c, 0x9562eu);
    goto L_95631;
L_95630:
    X86_TICK(c, 2);
    // 095630  dec ecx
    X86_AT(c, 0x95630u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
L_95631:
    X86_TICK(c, 7);
    // 095631  cmp esi, ecx
    X86_AT(c, 0x95631u);
    (void)x86_sub(c, c.r[6], c.r[1], 0, 4);
    // 095633  jae 0x9563e
    X86_AT(c, 0x95633u);
    if (x86_cc(c, 3)) { goto L_9563e; }
    X86_TICK(c, 12);
    // 095635  cmp byte ptr [ecx + 0x8ab2a], 0x30
    X86_AT(c, 0x95635u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[1] + 0x8AB2Au))), 0x30u, 0, 1);
    // 09563c  je 0x95630
    X86_AT(c, 0x9563cu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x95630u); goto L_95630; }
L_9563e:
    X86_TICK(c, 9);
    // 09563e  lea eax, [esi + 1]
    X86_AT(c, 0x9563eu);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 095641  cmp eax, ecx
    X86_AT(c, 0x95641u);
    (void)x86_sub(c, c.r[0], c.r[1], 0, 4);
    // 095643  jne 0x95658
    X86_AT(c, 0x95643u);
    if (x86_cc(c, 5)) { goto L_95658; }
    X86_TICK(c, 12);
    // 095645  test byte ptr [0x8a74c], 8
    X86_AT(c, 0x95645u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A74Cu))) & 0x8u, 1);
    // 09564c  jne 0x95658
    X86_AT(c, 0x9564cu);
    if (x86_cc(c, 5)) { goto L_95658; }
    X86_TICK(c, 12);
    // 09564e  cmp byte ptr [esi + 0x8ab2b], 0x2e
    X86_AT(c, 0x9564eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x8AB2Bu))), 0x2Eu, 0, 1);
    // 095655  jne 0x95658
    X86_AT(c, 0x95655u);
    if (x86_cc(c, 5)) { goto L_95658; }
    X86_TICK(c, 2);
    // 095657  dec ecx
    X86_AT(c, 0x95657u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
L_95658:
    X86_TICK(c, 43);
    // 095658  lea eax, [ecx - 1]
    X86_AT(c, 0x95658u);
    c.r[0] = (uint32_t)(c.r[1] + 0xFFFFFFFFu);
    // 09565b  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x9565bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09565e  mov dword ptr [edx - 0x10], eax
    X86_AT(c, 0x9565eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[0]);
    // 095661  mov eax, edi
    X86_AT(c, 0x95661u);
    c.r[0] = c.r[7];
    // 095663  sub eax, ecx
    X86_AT(c, 0x95663u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[1], 0, 4); }
    // 095665  sub dword ptr [0x8ab58], eax
    X86_AT(c, 0x95665u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AB58u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 09566b  pop edi
    X86_AT(c, 0x9566bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09566c  pop esi
    X86_AT(c, 0x9566cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09566d  leave 
    X86_AT(c, 0x9566du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09566e  ret 8
    X86_AT(c, 0x9566eu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x95620u, "ran off the end of a function");
}
void f_0009568c(X86Cpu& c) {
    X86_TICK(c, 18);
    // 09568c  push ebp
    X86_AT(c, 0x9568cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 09568d  mov ebp, esp
    X86_AT(c, 0x9568du);
    c.r[5] = c.r[4];
    // 09568f  push ecx
    X86_AT(c, 0x9568fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 095690  test byte ptr [0x8a74c], 1
    X86_AT(c, 0x95690u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A74Cu))) & 0x1u, 1);
    // 095697  jne 0x956ad
    X86_AT(c, 0x95697u);
    if (x86_cc(c, 5)) { goto L_956ad; }
    X86_TICK(c, 12);
    // 095699  test byte ptr [0x8a74c], 0x10
    X86_AT(c, 0x95699u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A74Cu))) & 0x10u, 1);
    // 0956a0  jne 0x956ad
    X86_AT(c, 0x956a0u);
    if (x86_cc(c, 5)) { goto L_956ad; }
    X86_TICK(c, 15);
    // 0956a2  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x956a2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0956a5  mov ecx, dword ptr [eax - 4]
    X86_AT(c, 0x956a5u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 0956a8  call 0x95524
    X86_AT(c, 0x956a8u);
    push32(c, 0x956adu); x86_call_known(c, 0x95524u, f_00095524); X86_RET(c, 0x956adu);
L_956ad:
    X86_TICK(c, 11);
    // 0956ad  mov eax, dword ptr [0x8ab54]
    X86_AT(c, 0x956adu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB54u)));
    // 0956b2  and eax, eax
    X86_AT(c, 0x956b2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0956b4  je 0x956c8
    X86_AT(c, 0x956b4u);
    if (x86_cc(c, 4)) { goto L_956c8; }
    X86_TICK(c, 15);
    // 0956b6  push eax
    X86_AT(c, 0x956b6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0956b7  push 0x8ab4c
    X86_AT(c, 0x956b7u);
    { uint32_t v = 0x8AB4Cu; push32(c, v); }
    // 0956bc  mov ecx, dword ptr [0x8a764]
    X86_AT(c, 0x956bcu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A764u)));
    // 0956c2  call dword ptr [0x8a760]
    X86_AT(c, 0x956c2u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A760u))); push32(c, 0x956c8u); x86_call(c, t); X86_RET(c, 0x956c8u); }
L_956c8:
    X86_TICK(c, 12);
    // 0956c8  test byte ptr [0x8a74c], 1
    X86_AT(c, 0x956c8u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A74Cu))) & 0x1u, 1);
    // 0956cf  jne 0x956e5
    X86_AT(c, 0x956cfu);
    if (x86_cc(c, 5)) { goto L_956e5; }
    X86_TICK(c, 12);
    // 0956d1  cmp byte ptr [0x8ab50], 0
    X86_AT(c, 0x956d1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8AB50u))), 0x0u, 0, 1);
    // 0956d8  jne 0x956e5
    X86_AT(c, 0x956d8u);
    if (x86_cc(c, 5)) { goto L_956e5; }
    X86_TICK(c, 15);
    // 0956da  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x956dau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0956dd  mov ecx, dword ptr [eax - 4]
    X86_AT(c, 0x956ddu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 0956e0  call 0x95524
    X86_AT(c, 0x956e0u);
    push32(c, 0x956e5u); x86_call_known(c, 0x95524u, f_00095524); X86_RET(c, 0x956e5u);
L_956e5:
    X86_TICK(c, 16);
    // 0956e5  leave 
    X86_AT(c, 0x956e5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0956e6  ret 
    X86_AT(c, 0x956e6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9568cu, "ran off the end of a function");
}
void f_000956f0(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0956f0  push ebp
    X86_AT(c, 0x956f0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0956f1  mov ebp, esp
    X86_AT(c, 0x956f1u);
    c.r[5] = c.r[4];
    // 0956f3  push ecx
    X86_AT(c, 0x956f3u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0956f4  push ebx
    X86_AT(c, 0x956f4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0956f5  push esi
    X86_AT(c, 0x956f5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0956f6  push edi
    X86_AT(c, 0x956f6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0956f7  cmp dword ptr [0x8ab5c], 0
    X86_AT(c, 0x956f7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8AB5Cu))), 0x0u, 0, 4);
    // 0956fe  jle 0x9582f
    X86_AT(c, 0x956feu);
    if (x86_cc(c, 14)) { goto L_9582f; }
    X86_TICK(c, 12);
    // 095704  cmp byte ptr [0x8ab73], 0
    X86_AT(c, 0x95704u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8AB73u))), 0x0u, 0, 1);
    // 09570b  je 0x9571e
    X86_AT(c, 0x9570bu);
    if (x86_cc(c, 4)) { goto L_9571e; }
    X86_TICK(c, 8);
    // 09570d  mov byte ptr [0x8ab2c], 0x2e
    X86_AT(c, 0x9570du);
    wr8((c.sbase[3] + (uint32_t)(0x8AB2Cu)), 0x2Eu);
    // 095714  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95714u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095717  mov dword ptr [eax - 0x10], 1
    X86_AT(c, 0x95717u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF0u)), 0x1u);
L_9571e:
    X86_TICK(c, 11);
    // 09571e  mov eax, dword ptr [0x8a754]
    X86_AT(c, 0x9571eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A754u)));
    // 095723  and eax, eax
    X86_AT(c, 0x95723u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 095725  je 0x9579d
    X86_AT(c, 0x95725u);
    if (x86_cc(c, 4)) { goto L_9579d; }
    X86_TICK(c, 19);
    // 09572b  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x9572bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09572e  mov ecx, dword ptr [edx - 8]
    X86_AT(c, 0x9572eu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF8u)));
    // 095731  mov esi, dword ptr [0x8ab5c]
    X86_AT(c, 0x95731u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8AB5Cu)));
    // 095737  cmp esi, ecx
    X86_AT(c, 0x95737u);
    (void)x86_sub(c, c.r[6], c.r[1], 0, 4);
    // 095739  jge 0x95777
    X86_AT(c, 0x95739u);
    if (x86_cc(c, 13)) { goto L_95777; }
    X86_TICK(c, 9);
    // 09573b  sub ecx, esi
    X86_AT(c, 0x9573bu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[6], 0, 4); }
    // 09573d  cmp ecx, eax
    X86_AT(c, 0x9573du);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 09573f  jb 0x95743
    X86_AT(c, 0x9573fu);
    if (x86_cc(c, 2)) { goto L_95743; }
    X86_TICK(c, 2);
    // 095741  mov ecx, eax
    X86_AT(c, 0x95741u);
    c.r[1] = c.r[0];
L_95743:
    X86_TICK(c, 44);
    // 095743  mov edi, ecx
    X86_AT(c, 0x95743u);
    c.r[7] = c.r[1];
    // 095745  add esi, 0x8ab60
    X86_AT(c, 0x95745u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8AB60u, 0, 4); }
    // 09574b  mov ebx, 0x8ab2d
    X86_AT(c, 0x9574bu);
    c.r[3] = 0x8AB2Du;
    // 095750  push edi
    X86_AT(c, 0x95750u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095751  mov edi, ebx
    X86_AT(c, 0x95751u);
    c.r[7] = c.r[3];
    // 095753  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x95753u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 095755  pop edi
    X86_AT(c, 0x95755u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095756  lea ecx, [edi + 1]
    X86_AT(c, 0x95756u);
    c.r[1] = (uint32_t)(c.r[7] + 0x1u);
    // 095759  mov dword ptr [edx - 0x10], ecx
    X86_AT(c, 0x95759u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[1]);
    // 09575c  sub dword ptr [0x8a754], edi
    X86_AT(c, 0x9575cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A754u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 095762  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0x95762u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 095766  je 0x957b0
    X86_AT(c, 0x95766u);
    if (x86_cc(c, 4)) { goto L_957b0; }
    X86_TICK(c, 15);
    // 095768  push 1
    X86_AT(c, 0x95768u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 09576a  lea eax, [edi + 2]
    X86_AT(c, 0x9576au);
    c.r[0] = (uint32_t)(c.r[7] + 0x2u);
    // 09576d  push eax
    X86_AT(c, 0x9576du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09576e  mov ecx, edx
    X86_AT(c, 0x9576eu);
    c.r[1] = c.r[2];
    // 095770  call 0x95620
    X86_AT(c, 0x95770u);
    push32(c, 0x95775u); x86_call_known(c, 0x95620u, f_00095620); X86_RET(c, 0x95775u);
    X86_TICK(c, 7);
    // 095775  jmp 0x957b0
    X86_AT(c, 0x95775u);
    goto L_957b0;
L_95777:
    X86_TICK(c, 16);
    // 095777  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95777u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09577a  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0x9577au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 09577e  je 0x957b0
    X86_AT(c, 0x9577eu);
    if (x86_cc(c, 4)) { goto L_957b0; }
    X86_TICK(c, 12);
    // 095780  test byte ptr [0x8a74c], 8
    X86_AT(c, 0x95780u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A74Cu))) & 0x8u, 1);
    // 095787  jne 0x957b0
    X86_AT(c, 0x95787u);
    if (x86_cc(c, 5)) { goto L_957b0; }
    X86_TICK(c, 12);
    // 095789  cmp dword ptr [0x8a750], 0xffff
    X86_AT(c, 0x95789u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A750u))), 0xFFFFu, 0, 4);
    // 095793  je 0x957a6
    X86_AT(c, 0x95793u);
    if (x86_cc(c, 4)) { goto L_957a6; }
    X86_TICK(c, 13);
    // 095795  dec dword ptr [0x8ab58]
    X86_AT(c, 0x95795u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AB58u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 09579b  jmp 0x957a6
    X86_AT(c, 0x9579bu);
    goto L_957a6;
L_9579d:
    X86_TICK(c, 12);
    // 09579d  test byte ptr [0x8a74c], 8
    X86_AT(c, 0x9579du);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A74Cu))) & 0x8u, 1);
    // 0957a4  jne 0x957b0
    X86_AT(c, 0x957a4u);
    if (x86_cc(c, 5)) { goto L_957b0; }
L_957a6:
    X86_TICK(c, 6);
    // 0957a6  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x957a6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0957a9  mov dword ptr [eax - 0x10], 0
    X86_AT(c, 0x957a9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF0u)), 0x0u);
L_957b0:
    X86_TICK(c, 13);
    // 0957b0  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x957b0u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0957b3  mov ebx, ecx
    X86_AT(c, 0x957b3u);
    c.r[3] = c.r[1];
    // 0957b5  call 0x9568c
    X86_AT(c, 0x957b5u);
    push32(c, 0x957bau); x86_call_known(c, 0x9568cu, f_0009568c); X86_RET(c, 0x957bau);
    X86_TICK(c, 15);
    // 0957ba  mov eax, dword ptr [ebx - 8]
    X86_AT(c, 0x957bau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF8u)));
    // 0957bd  mov edx, dword ptr [0x8ab5c]
    X86_AT(c, 0x957bdu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AB5Cu)));
    // 0957c3  cmp edx, eax
    X86_AT(c, 0x957c3u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0957c5  jl 0x957c8
    X86_AT(c, 0x957c5u);
    if (x86_cc(c, 12)) { goto L_957c8; }
    X86_TICK(c, 3);
    // 0957c7  xchg edx, eax
    X86_AT(c, 0x957c7u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_957c8:
    X86_TICK(c, 15);
    // 0957c8  push edx
    X86_AT(c, 0x957c8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0957c9  push 0x8ab60
    X86_AT(c, 0x957c9u);
    { uint32_t v = 0x8AB60u; push32(c, v); }
    // 0957ce  mov ecx, dword ptr [0x8a764]
    X86_AT(c, 0x957ceu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A764u)));
    // 0957d4  call dword ptr [0x8a760]
    X86_AT(c, 0x957d4u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A760u))); push32(c, 0x957dau); x86_call(c, t); X86_RET(c, 0x957dau); }
    X86_TICK(c, 15);
    // 0957da  mov eax, dword ptr [ebx - 8]
    X86_AT(c, 0x957dau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF8u)));
    // 0957dd  mov edx, dword ptr [0x8ab5c]
    X86_AT(c, 0x957ddu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AB5Cu)));
    // 0957e3  cmp edx, eax
    X86_AT(c, 0x957e3u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0957e5  jle 0x957f4
    X86_AT(c, 0x957e5u);
    if (x86_cc(c, 14)) { goto L_957f4; }
    X86_TICK(c, 13);
    // 0957e7  sub edx, eax
    X86_AT(c, 0x957e7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0957e9  push edx
    X86_AT(c, 0x957e9u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0957ea  push 0x8a768
    X86_AT(c, 0x957eau);
    { uint32_t v = 0x8A768u; push32(c, v); }
    // 0957ef  call 0x93b8c
    X86_AT(c, 0x957efu);
    push32(c, 0x957f4u); x86_call_known(c, 0x93b8cu, f_00093b8c); X86_RET(c, 0x957f4u);
L_957f4:
    X86_TICK(c, 15);
    // 0957f4  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x957f4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0957f7  mov eax, dword ptr [eax - 0x10]
    X86_AT(c, 0x957f7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF0u)));
    // 0957fa  and eax, eax
    X86_AT(c, 0x957fau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0957fc  je 0x95810
    X86_AT(c, 0x957fcu);
    if (x86_cc(c, 4)) { goto L_95810; }
    X86_TICK(c, 15);
    // 0957fe  push eax
    X86_AT(c, 0x957feu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0957ff  push 0x8ab2c
    X86_AT(c, 0x957ffu);
    { uint32_t v = 0x8AB2Cu; push32(c, v); }
    // 095804  mov ecx, dword ptr [0x8a764]
    X86_AT(c, 0x95804u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A764u)));
    // 09580a  call dword ptr [0x8a760]
    X86_AT(c, 0x9580au);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A760u))); push32(c, 0x95810u); x86_call(c, t); X86_RET(c, 0x95810u); }
L_95810:
    X86_TICK(c, 11);
    // 095810  mov eax, dword ptr [0x8a754]
    X86_AT(c, 0x95810u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A754u)));
    // 095815  and eax, eax
    X86_AT(c, 0x95815u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 095817  je 0x95973
    X86_AT(c, 0x95817u);
    if (x86_cc(c, 4)) { goto L_95973; }
    X86_TICK(c, 16);
    // 09581d  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x9581du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095820  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0x95820u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 095824  jne 0x95973
    X86_AT(c, 0x95824u);
    if (x86_cc(c, 5)) { goto L_95973; }
    X86_TICK(c, 7);
    // 09582a  jmp 0x95968
    X86_AT(c, 0x9582au);
    goto L_95968;
L_9582f:
    X86_TICK(c, 11);
    // 09582f  mov eax, dword ptr [0x8ab5c]
    X86_AT(c, 0x9582fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB5Cu)));
    // 095834  and eax, eax
    X86_AT(c, 0x95834u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 095836  jge 0x9583a
    X86_AT(c, 0x95836u);
    if (x86_cc(c, 13)) { goto L_9583a; }
    X86_TICK(c, 2);
    // 095838  neg eax
    X86_AT(c, 0x95838u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_9583a:
    X86_TICK(c, 13);
    // 09583a  mov dword ptr [0x8ab5c], eax
    X86_AT(c, 0x9583au);
    wr32((c.sbase[3] + (uint32_t)(0x8AB5Cu)), c.r[0]);
    // 09583f  mov edx, dword ptr [0x8a754]
    X86_AT(c, 0x9583fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A754u)));
    // 095845  and edx, edx
    X86_AT(c, 0x95845u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 095847  je 0x95879
    X86_AT(c, 0x95847u);
    if (x86_cc(c, 4)) { goto L_95879; }
    X86_TICK(c, 7);
    // 095849  cmp edx, eax
    X86_AT(c, 0x95849u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 09584b  jle 0x95870
    X86_AT(c, 0x9584bu);
    if (x86_cc(c, 14)) { goto L_95870; }
    X86_TICK(c, 21);
    // 09584d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x9584du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095850  mov eax, dword ptr [eax - 4]
    X86_AT(c, 0x95850u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 095853  add eax, 8
    X86_AT(c, 0x95853u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 095856  push eax
    X86_AT(c, 0x95856u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095857  mov ebx, eax
    X86_AT(c, 0x95857u);
    c.r[3] = c.r[0];
    // 095859  call 0x96280
    X86_AT(c, 0x95859u);
    push32(c, 0x9585eu); x86_call_known(c, 0x96280u, f_00096280); X86_RET(c, 0x9585eu);
    X86_TICK(c, 12);
    // 09585e  push dword ptr [0x1bbc]
    X86_AT(c, 0x9585eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1BBCu))); push32(c, v); }
    // 095864  call 0x96208
    X86_AT(c, 0x95864u);
    push32(c, 0x95869u); x86_call_known(c, 0x96208u, f_00096208); X86_RET(c, 0x95869u);
    X86_TICK(c, 7);
    // 095869  call 0x96724
    X86_AT(c, 0x95869u);
    push32(c, 0x9586eu); x86_call_known(c, 0x96724u, f_00096724); X86_RET(c, 0x9586eu);
    X86_TICK(c, 5);
    // 09586e  jne 0x958cd
    X86_AT(c, 0x9586eu);
    if (x86_cc(c, 5)) { goto L_958cd; }
L_95870:
    X86_TICK(c, 16);
    // 095870  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95870u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095873  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0x95873u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 095877  je 0x958ac
    X86_AT(c, 0x95877u);
    if (x86_cc(c, 4)) { goto L_958ac; }
L_95879:
    X86_TICK(c, 12);
    // 095879  test byte ptr [0x8a74c], 8
    X86_AT(c, 0x95879u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A74Cu))) & 0x8u, 1);
    // 095880  jne 0x958a0
    X86_AT(c, 0x95880u);
    if (x86_cc(c, 5)) { goto L_958a0; }
    X86_TICK(c, 13);
    // 095882  mov dword ptr [0x8ab58], 1
    X86_AT(c, 0x95882u);
    wr32((c.sbase[3] + (uint32_t)(0x8AB58u)), 0x1u);
    // 09588c  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x9588cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09588f  call 0x9568c
    X86_AT(c, 0x9588fu);
    push32(c, 0x95894u); x86_call_known(c, 0x9568cu, f_0009568c); X86_RET(c, 0x95894u);
    X86_TICK(c, 11);
    // 095894  push 1
    X86_AT(c, 0x95894u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 095896  push 0x1bd8
    X86_AT(c, 0x95896u);
    { uint32_t v = 0x1BD8u; push32(c, v); }
    // 09589b  jmp 0x9594a
    X86_AT(c, 0x9589bu);
    goto L_9594a;
L_958a0:
    X86_TICK(c, 9);
    // 0958a0  mov dword ptr [0x8ab58], 2
    X86_AT(c, 0x958a0u);
    wr32((c.sbase[3] + (uint32_t)(0x8AB58u)), 0x2u);
    // 0958aa  jmp 0x958b9
    X86_AT(c, 0x958aau);
    goto L_958b9;
L_958ac:
    X86_TICK(c, 8);
    // 0958ac  mov eax, dword ptr [0x8a754]
    X86_AT(c, 0x958acu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A754u)));
    // 0958b1  add eax, 2
    X86_AT(c, 0x958b1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0958b4  mov dword ptr [0x8ab58], eax
    X86_AT(c, 0x958b4u);
    wr32((c.sbase[3] + (uint32_t)(0x8AB58u)), c.r[0]);
L_958b9:
    X86_TICK(c, 11);
    // 0958b9  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x958b9u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0958bc  call 0x9568c
    X86_AT(c, 0x958bcu);
    push32(c, 0x958c1u); x86_call_known(c, 0x9568cu, f_0009568c); X86_RET(c, 0x958c1u);
    X86_TICK(c, 11);
    // 0958c1  push 2
    X86_AT(c, 0x958c1u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0958c3  push 0x1bda
    X86_AT(c, 0x958c3u);
    { uint32_t v = 0x1BDAu; push32(c, v); }
    // 0958c8  jmp 0x9594a
    X86_AT(c, 0x958c8u);
    goto L_9594a;
L_958cd:
    X86_TICK(c, 30);
    // 0958cd  mov eax, dword ptr [0x8ab5c]
    X86_AT(c, 0x958cdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AB5Cu)));
    // 0958d2  sub dword ptr [0x8a754], eax
    X86_AT(c, 0x958d2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A754u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0958d8  mov eax, dword ptr [0x8a754]
    X86_AT(c, 0x958d8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A754u)));
    // 0958dd  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x958ddu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0958e0  mov ecx, dword ptr [edx - 8]
    X86_AT(c, 0x958e0u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF8u)));
    // 0958e3  cmp ecx, eax
    X86_AT(c, 0x958e3u);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 0958e5  jb 0x958e9
    X86_AT(c, 0x958e5u);
    if (x86_cc(c, 2)) { goto L_958e9; }
    X86_TICK(c, 2);
    // 0958e7  mov ecx, eax
    X86_AT(c, 0x958e7u);
    c.r[1] = c.r[0];
L_958e9:
    X86_TICK(c, 40);
    // 0958e9  mov edi, ecx
    X86_AT(c, 0x958e9u);
    c.r[7] = c.r[1];
    // 0958eb  mov esi, 0x8ab60
    X86_AT(c, 0x958ebu);
    c.r[6] = 0x8AB60u;
    // 0958f0  push edi
    X86_AT(c, 0x958f0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0958f1  mov edi, 0x8ab2c
    X86_AT(c, 0x958f1u);
    c.r[7] = 0x8AB2Cu;
    // 0958f6  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x958f6u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0958f8  pop edi
    X86_AT(c, 0x958f8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0958f9  sub dword ptr [0x8a754], edi
    X86_AT(c, 0x958f9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A754u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 0958ff  mov dword ptr [edx - 0x10], edi
    X86_AT(c, 0x958ffu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[7]);
    // 095902  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0x95902u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 095906  je 0x95915
    X86_AT(c, 0x95906u);
    if (x86_cc(c, 4)) { goto L_95915; }
    X86_TICK(c, 15);
    // 095908  push 1
    X86_AT(c, 0x95908u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 09590a  lea eax, [edi + 1]
    X86_AT(c, 0x9590au);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 09590d  push eax
    X86_AT(c, 0x9590du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09590e  mov ecx, edx
    X86_AT(c, 0x9590eu);
    c.r[1] = c.r[2];
    // 095910  call 0x95620
    X86_AT(c, 0x95910u);
    push32(c, 0x95915u); x86_call_known(c, 0x95620u, f_00095620); X86_RET(c, 0x95915u);
L_95915:
    X86_TICK(c, 13);
    // 095915  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x95915u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095918  mov ebx, ecx
    X86_AT(c, 0x95918u);
    c.r[3] = c.r[1];
    // 09591a  call 0x9568c
    X86_AT(c, 0x9591au);
    push32(c, 0x9591fu); x86_call_known(c, 0x9568cu, f_0009568c); X86_RET(c, 0x9591fu);
    X86_TICK(c, 15);
    // 09591f  push 2
    X86_AT(c, 0x9591fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 095921  push 0x1bda
    X86_AT(c, 0x95921u);
    { uint32_t v = 0x1BDAu; push32(c, v); }
    // 095926  mov ecx, dword ptr [0x8a764]
    X86_AT(c, 0x95926u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A764u)));
    // 09592c  call dword ptr [0x8a760]
    X86_AT(c, 0x9592cu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A760u))); push32(c, 0x95932u); x86_call(c, t); X86_RET(c, 0x95932u); }
    X86_TICK(c, 14);
    // 095932  push dword ptr [0x8ab5c]
    X86_AT(c, 0x95932u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8AB5Cu))); push32(c, v); }
    // 095938  push 0x8a768
    X86_AT(c, 0x95938u);
    { uint32_t v = 0x8A768u; push32(c, v); }
    // 09593d  call 0x93b8c
    X86_AT(c, 0x9593du);
    push32(c, 0x95942u); x86_call_known(c, 0x93b8cu, f_00093b8c); X86_RET(c, 0x95942u);
    X86_TICK(c, 7);
    // 095942  push dword ptr [ebx - 0x10]
    X86_AT(c, 0x95942u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF0u))); push32(c, v); }
    // 095945  push 0x8ab2c
    X86_AT(c, 0x95945u);
    { uint32_t v = 0x8AB2Cu; push32(c, v); }
L_9594a:
    X86_TICK(c, 11);
    // 09594a  mov ecx, dword ptr [0x8a764]
    X86_AT(c, 0x9594au);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A764u)));
    // 095950  call dword ptr [0x8a760]
    X86_AT(c, 0x95950u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A760u))); push32(c, 0x95956u); x86_call(c, t); X86_RET(c, 0x95956u); }
    X86_TICK(c, 16);
    // 095956  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95956u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095959  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0x95959u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 09595d  jne 0x95973
    X86_AT(c, 0x9595du);
    if (x86_cc(c, 5)) { goto L_95973; }
    X86_TICK(c, 11);
    // 09595f  mov eax, dword ptr [0x8a754]
    X86_AT(c, 0x9595fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A754u)));
    // 095964  and eax, eax
    X86_AT(c, 0x95964u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 095966  je 0x95973
    X86_AT(c, 0x95966u);
    if (x86_cc(c, 4)) { goto L_95973; }
L_95968:
    X86_TICK(c, 11);
    // 095968  push eax
    X86_AT(c, 0x95968u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095969  push 0x8a768
    X86_AT(c, 0x95969u);
    { uint32_t v = 0x8A768u; push32(c, v); }
    // 09596e  call 0x93b8c
    X86_AT(c, 0x9596eu);
    push32(c, 0x95973u); x86_call_known(c, 0x93b8cu, f_00093b8c); X86_RET(c, 0x95973u);
L_95973:
    X86_TICK(c, 28);
    // 095973  pop edi
    X86_AT(c, 0x95973u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095974  pop esi
    X86_AT(c, 0x95974u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095975  pop ebx
    X86_AT(c, 0x95975u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 095976  leave 
    X86_AT(c, 0x95976u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095977  ret 
    X86_AT(c, 0x95977u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x956f0u, "ran off the end of a function");
}
}
