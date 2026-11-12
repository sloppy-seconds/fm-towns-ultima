#include "p_game_funcs.h"
namespace p_game {
void f_000d7ee0(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0d7ee0  enter 4, 0
    X86_AT(c, 0xd7ee0u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0d7ee4  sub ecx, ecx
    X86_AT(c, 0xd7ee4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0d7ee6  jmp 0xd7efd
    X86_AT(c, 0xd7ee6u);
    goto L_d7efd;
L_d7ee8:
    X86_TICK(c, 16);
    // 0d7ee8  lea eax, [ecx + ecx*4]
    X86_AT(c, 0xd7ee8u);
    c.r[0] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 0d7eeb  lea eax, [eax*4]
    X86_AT(c, 0xd7eebu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0d7ef2  cmp word ptr [eax + 0xb4594], 0
    X86_AT(c, 0xd7ef2u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0xB4594u))), 0x0u, 0, 2);
    // 0d7efa  je 0xd7f02
    X86_AT(c, 0xd7efau);
    if (x86_cc(c, 4)) { goto L_d7f02; }
    X86_TICK(c, 2);
    // 0d7efc  inc ecx
    X86_AT(c, 0xd7efcu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
L_d7efd:
    X86_TICK(c, 7);
    // 0d7efd  cmp ecx, 0x19
    X86_AT(c, 0xd7efdu);
    (void)x86_sub(c, c.r[1], 0x19u, 0, 4);
    // 0d7f00  jbe 0xd7ee8
    X86_AT(c, 0xd7f00u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xd7ee8u); goto L_d7ee8; }
L_d7f02:
    X86_TICK(c, 7);
    // 0d7f02  cmp ecx, 0x19
    X86_AT(c, 0xd7f02u);
    (void)x86_sub(c, c.r[1], 0x19u, 0, 4);
    // 0d7f05  jbe 0xd7f19
    X86_AT(c, 0xd7f05u);
    if (x86_cc(c, 6)) { goto L_d7f19; }
    X86_TICK(c, 11);
    // 0d7f07  mov word ptr [0xb47e6], 4
    X86_AT(c, 0xd7f07u);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), 0x4u);
    // 0d7f10  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xd7f10u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0d7f17  jmp 0xd7f2b
    X86_AT(c, 0xd7f17u);
    goto L_d7f2b;
L_d7f19:
    X86_TICK(c, 8);
    // 0d7f19  lea eax, [ecx + ecx*4]
    X86_AT(c, 0xd7f19u);
    c.r[0] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 0d7f1c  lea eax, [eax*4]
    X86_AT(c, 0xd7f1cu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0d7f23  add eax, 0xb4588
    X86_AT(c, 0xd7f23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xB4588u, 0, 4); }
    // 0d7f28  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd7f28u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_d7f2b:
    X86_TICK(c, 20);
    // 0d7f2b  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd7f2bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d7f2e  leave 
    X86_AT(c, 0xd7f2eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d7f2f  ret 
    X86_AT(c, 0xd7f2fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd7ee0u, "ran off the end of a function");
}
void f_000d7f40(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0d7f40  push ebp
    X86_AT(c, 0xd7f40u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d7f41  mov ebp, esp
    X86_AT(c, 0xd7f41u);
    c.r[5] = c.r[4];
    // 0d7f43  push ebx
    X86_AT(c, 0xd7f43u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d7f44  push edi
    X86_AT(c, 0xd7f44u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7f45  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd7f45u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d7f48  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0xd7f48u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0d7f4b  mov byte ptr [edi + 0xe], al
    X86_AT(c, 0xd7f4bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xEu)), g8(c, 0));
    // 0d7f4e  cmp byte ptr [ebp + 0x10], 0
    X86_AT(c, 0xd7f4eu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 0d7f52  jne 0xd7f5c
    X86_AT(c, 0xd7f52u);
    if (x86_cc(c, 5)) { goto L_d7f5c; }
    X86_TICK(c, 9);
    // 0d7f54  mov word ptr [edi + 0xc], 2
    X86_AT(c, 0xd7f54u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), 0x2u);
    // 0d7f5a  jmp 0xd7f70
    X86_AT(c, 0xd7f5au);
    goto L_d7f70;
L_d7f5c:
    X86_TICK(c, 12);
    // 0d7f5c  cmp byte ptr [ebp + 0x10], 1
    X86_AT(c, 0xd7f5cu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0d7f60  jne 0xd7f6a
    X86_AT(c, 0xd7f60u);
    if (x86_cc(c, 5)) { goto L_d7f6a; }
    X86_TICK(c, 9);
    // 0d7f62  mov word ptr [edi + 0xc], 4
    X86_AT(c, 0xd7f62u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), 0x4u);
    // 0d7f68  jmp 0xd7f70
    X86_AT(c, 0xd7f68u);
    goto L_d7f70;
L_d7f6a:
    X86_TICK(c, 2);
    // 0d7f6a  mov word ptr [edi + 0xc], 6
    X86_AT(c, 0xd7f6au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), 0x6u);
L_d7f70:
    X86_TICK(c, 12);
    // 0d7f70  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0xd7f70u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 0d7f74  je 0xd7f7a
    X86_AT(c, 0xd7f74u);
    if (x86_cc(c, 4)) { goto L_d7f7a; }
    X86_TICK(c, 7);
    // 0d7f76  or byte ptr [edi + 0xc], 8
    X86_AT(c, 0xd7f76u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x8u, 1)); }
L_d7f7a:
    X86_TICK(c, 12);
    // 0d7f7a  cmp byte ptr [ebp + 0x18], 0
    X86_AT(c, 0xd7f7au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0x0u, 0, 1);
    // 0d7f7e  je 0xd7f84
    X86_AT(c, 0xd7f7eu);
    if (x86_cc(c, 4)) { goto L_d7f84; }
    X86_TICK(c, 7);
    // 0d7f80  or byte ptr [edi + 0xc], 0x40
    X86_AT(c, 0xd7f80u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
L_d7f84:
    X86_TICK(c, 12);
    // 0d7f84  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7f84u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0d7f87  call 0xda938
    X86_AT(c, 0xd7f87u);
    push32(c, 0xd7f8cu); x86_call_known(c, 0xda938u, f_000da938); X86_RET(c, 0xd7f8cu);
    X86_TICK(c, 10);
    // 0d7f8c  xchg ebx, eax
    X86_AT(c, 0xd7f8cu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d7f8d  cmp bl, 1
    X86_AT(c, 0xd7f8du);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d7f90  je 0xd7f97
    X86_AT(c, 0xd7f90u);
    if (x86_cc(c, 4)) { goto L_d7f97; }
    X86_TICK(c, 7);
    // 0d7f92  cmp bl, 2
    X86_AT(c, 0xd7f92u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0d7f95  jne 0xd7f9b
    X86_AT(c, 0xd7f95u);
    if (x86_cc(c, 5)) { goto L_d7f9b; }
L_d7f97:
    X86_TICK(c, 2);
    // 0d7f97  mov byte ptr [ebp + 0x1c], 0
    X86_AT(c, 0xd7f97u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)), 0x0u);
L_d7f9b:
    X86_TICK(c, 12);
    // 0d7f9b  cmp byte ptr [ebp + 0x1c], 0
    X86_AT(c, 0xd7f9bu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))), 0x0u, 0, 1);
    // 0d7f9f  je 0xd7fa5
    X86_AT(c, 0xd7f9fu);
    if (x86_cc(c, 4)) { goto L_d7fa5; }
    X86_TICK(c, 7);
    // 0d7fa1  or byte ptr [edi + 0xc], 1
    X86_AT(c, 0xd7fa1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
L_d7fa5:
    X86_TICK(c, 12);
    // 0d7fa5  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0xd7fa5u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 0d7fa9  je 0xd7fb7
    X86_AT(c, 0xd7fa9u);
    if (x86_cc(c, 4)) { goto L_d7fb7; }
    X86_TICK(c, 16);
    // 0d7fab  push 2
    X86_AT(c, 0xd7fabu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d7fad  push 0
    X86_AT(c, 0xd7fadu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d7faf  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7fafu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0d7fb2  call 0xda980
    X86_AT(c, 0xd7fb2u);
    push32(c, 0xd7fb7u); x86_call_known(c, 0xda980u, f_000da980); X86_RET(c, 0xd7fb7u);
L_d7fb7:
    X86_TICK(c, 24);
    // 0d7fb7  pop edi
    X86_AT(c, 0xd7fb7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d7fb8  pop ebx
    X86_AT(c, 0xd7fb8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d7fb9  leave 
    X86_AT(c, 0xd7fb9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d7fba  ret 0x18
    X86_AT(c, 0xd7fbau);
    c.eip = pop32(c); c.r[4] += 0x18u; return;
    x86_fault(c, 0xd7f40u, "ran off the end of a function");
}
void f_000d7fc4(X86Cpu& c) {
    X86_TICK(c, 63);
    // 0d7fc4  enter 0xc, 0
    X86_AT(c, 0xd7fc4u);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 0d7fc8  push ebx
    X86_AT(c, 0xd7fc8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d7fc9  test byte ptr [0xb4814], 1
    X86_AT(c, 0xd7fc9u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4814u))) & 0x1u, 1);
    // 0d7fd0  setne al
    X86_AT(c, 0xd7fd0u);
    s8(c, 0, x86_cc(c, 5) ? 1u : 0u);
    // 0d7fd3  xchg ebx, eax
    X86_AT(c, 0xd7fd3u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d7fd4  xor bl, 1
    X86_AT(c, 0xd7fd4u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ 0x1u, 1)); }
    // 0d7fd7  mov byte ptr [ebp - 8], bl
    X86_AT(c, 0xd7fd7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), g8(c, 3));
    // 0d7fda  lea ebx, [ebp - 0xa]
    X86_AT(c, 0xd7fdau);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF6u);
    // 0d7fdd  push ebx
    X86_AT(c, 0xd7fddu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d7fde  lea eax, [ebp - 8]
    X86_AT(c, 0xd7fdeu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0d7fe1  push eax
    X86_AT(c, 0xd7fe1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7fe2  lea eax, [ebp - 7]
    X86_AT(c, 0xd7fe2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF9u);
    // 0d7fe5  push eax
    X86_AT(c, 0xd7fe5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7fe6  lea eax, [ebp - 6]
    X86_AT(c, 0xd7fe6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFAu);
    // 0d7fe9  push eax
    X86_AT(c, 0xd7fe9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7fea  lea eax, [ebp - 5]
    X86_AT(c, 0xd7feau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0d7fed  push eax
    X86_AT(c, 0xd7fedu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7fee  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xd7feeu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0d7ff1  push dword ptr [ebp + 8]
    X86_AT(c, 0xd7ff1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d7ff4  call 0xd7d90
    X86_AT(c, 0xd7ff4u);
    push32(c, 0xd7ff9u); x86_call_known(c, 0xd7d90u, f_000d7d90); X86_RET(c, 0xd7ff9u);
    X86_TICK(c, 14);
    // 0d7ff9  mov byte ptr [ebp - 9], al
    X86_AT(c, 0xd7ff9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
    // 0d7ffc  cmp byte ptr [ebx], 0
    X86_AT(c, 0xd7ffcu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3]))), 0x0u, 0, 1);
    // 0d7fff  je 0xd800a
    X86_AT(c, 0xd7fffu);
    if (x86_cc(c, 4)) { goto L_d800a; }
    X86_TICK(c, 9);
    // 0d8001  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xd8001u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0d8008  jmp 0xd8012
    X86_AT(c, 0xd8008u);
    goto L_d8012;
L_d800a:
    X86_TICK(c, 7);
    // 0d800a  call 0xd7ee0
    X86_AT(c, 0xd800au);
    push32(c, 0xd800fu); x86_call_known(c, 0xd7ee0u, f_000d7ee0); X86_RET(c, 0xd800fu);
    X86_TICK(c, 2);
    // 0d800f  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd800fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_d8012:
    X86_TICK(c, 12);
    // 0d8012  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xd8012u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0d8016  je 0xd803d
    X86_AT(c, 0xd8016u);
    if (x86_cc(c, 4)) { goto L_d803d; }
    X86_TICK(c, 37);
    // 0d8018  push dword ptr [ebp - 5]
    X86_AT(c, 0xd8018u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))); push32(c, v); }
    // 0d801b  push dword ptr [ebp - 8]
    X86_AT(c, 0xd801bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0d801e  push dword ptr [ebp - 7]
    X86_AT(c, 0xd801eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF9u))); push32(c, v); }
    // 0d8021  push dword ptr [ebp - 6]
    X86_AT(c, 0xd8021u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))); push32(c, v); }
    // 0d8024  push dword ptr [ebp - 9]
    X86_AT(c, 0xd8024u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))); push32(c, v); }
    // 0d8027  push dword ptr [ebp - 4]
    X86_AT(c, 0xd8027u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d802a  call 0xd7f40
    X86_AT(c, 0xd802au);
    push32(c, 0xd802fu); x86_call_known(c, 0xd7f40u, f_000d7f40); X86_RET(c, 0xd802fu);
    X86_TICK(c, 13);
    // 0d802f  mov ebx, dword ptr [ebp - 4]
    X86_AT(c, 0xd802fu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d8032  or byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0xd8032u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
    // 0d8036  mov dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0xd8036u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0xFFFFFFFFu);
L_d803d:
    X86_TICK(c, 24);
    // 0d803d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd803du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d8040  pop ebx
    X86_AT(c, 0xd8040u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d8041  leave 
    X86_AT(c, 0xd8041u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d8042  ret 
    X86_AT(c, 0xd8042u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd7fc4u, "ran off the end of a function");
}
void f_000d8058(X86Cpu& c) {
    X86_TICK(c, 44);
    // 0d8058  enter 0x14, 0
    X86_AT(c, 0xd8058u);
    x86_enter(c, 0x14u, 0x0u, 4);
    // 0d805c  push ebx
    X86_AT(c, 0xd805cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d805d  push esi
    X86_AT(c, 0xd805du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d805e  push edi
    X86_AT(c, 0xd805eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d805f  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xd805fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0d8062  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xd8062u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0d8069  mov ax, word ptr [0xb47e6]
    X86_AT(c, 0xd8069u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB47E6u))));
    // 0d806f  mov word ptr [ebp - 0xa], ax
    X86_AT(c, 0xd806fu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), (c.r[0] & 0xFFFFu));
    // 0d8073  mov word ptr [0xb47e6], 0
    X86_AT(c, 0xd8073u);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), 0x0u);
    // 0d807c  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xd807cu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d807f  sub esi, esi
    X86_AT(c, 0xd807fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0d8081  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0xd8081u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 0d8085  jne 0xd812f
    X86_AT(c, 0xd8085u);
    if (x86_cc(c, 5)) { goto L_d812f; }
    X86_TICK(c, 12);
    // 0d808b  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0xd808bu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0d808f  jne 0xd8122
    X86_AT(c, 0xd808fu);
    if (x86_cc(c, 5)) { goto L_d8122; }
    X86_TICK(c, 20);
    // 0d8095  push edi
    X86_AT(c, 0xd8095u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d8096  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xd8096u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0d8099  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd8099u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d809c  push eax
    X86_AT(c, 0xd809cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d809d  call 0xda8d4
    X86_AT(c, 0xd809du);
    push32(c, 0xd80a2u); x86_call_known(c, 0xda8d4u, f_000da8d4); X86_RET(c, 0xd80a2u);
    X86_TICK(c, 9);
    // 0d80a2  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd80a2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d80a5  jmp 0xd8314
    X86_AT(c, 0xd80a5u);
    goto L_d8314;
L_d80aa:
    X86_TICK(c, 32);
    // 0d80aa  mov edx, edi
    X86_AT(c, 0xd80aau);
    c.r[2] = c.r[7];
    // 0d80ac  mov al, 0xa
    X86_AT(c, 0xd80acu);
    s8(c, 0, 0xAu);
    // 0d80ae  mov ecx, esi
    X86_AT(c, 0xd80aeu);
    c.r[1] = c.r[6];
    // 0d80b0  add ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd80b0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0d80b3  push edi
    X86_AT(c, 0xd80b3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d80b4  mov edi, ecx
    X86_AT(c, 0xd80b4u);
    c.r[7] = c.r[1];
    // 0d80b6  mov dword ptr [ebp - 0x14], ecx
    X86_AT(c, 0xd80b6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[1]);
    // 0d80b9  mov ecx, edx
    X86_AT(c, 0xd80b9u);
    c.r[1] = c.r[2];
    // 0d80bb  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xd80bbu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0d80bd  jne 0xd80c2
    X86_AT(c, 0xd80bdu);
    if (x86_cc(c, 5)) { goto L_d80c2; }
    X86_TICK(c, 4);
    // 0d80bf  inc ecx
    X86_AT(c, 0xd80bfu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d80c0  sub edx, ecx
    X86_AT(c, 0xd80c0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_d80c2:
    X86_TICK(c, 13);
    // 0d80c2  pop edi
    X86_AT(c, 0xd80c2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d80c3  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0xd80c3u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 0d80c7  and dx, dx
    X86_AT(c, 0xd80c7u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & (c.r[2] & 0xFFFFu), 2)); }
    // 0d80ca  je 0xd80f4
    X86_AT(c, 0xd80cau);
    if (x86_cc(c, 4)) { goto L_d80f4; }
    X86_TICK(c, 23);
    // 0d80cc  movsx edx, dx
    X86_AT(c, 0xd80ccu);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 0d80cf  push edx
    X86_AT(c, 0xd80cfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d80d0  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd80d0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d80d3  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd80d3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d80d6  push eax
    X86_AT(c, 0xd80d6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d80d7  call 0xda8d4
    X86_AT(c, 0xd80d7u);
    push32(c, 0xd80dcu); x86_call_known(c, 0xda8d4u, f_000da8d4); X86_RET(c, 0xd80dcu);
    X86_TICK(c, 22);
    // 0d80dc  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xd80dcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0d80df  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xd80dfu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d80e2  movsx edx, word ptr [ebx + 0x10]
    X86_AT(c, 0xd80e2u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0d80e6  cmp edx, eax
    X86_AT(c, 0xd80e6u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0d80e8  jne 0xd8314
    X86_AT(c, 0xd80e8u);
    if (x86_cc(c, 5)) { goto L_d8314; }
    X86_TICK(c, 12);
    // 0d80ee  add esi, dword ptr [ebp - 0x10]
    X86_AT(c, 0xd80eeu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
    // 0d80f1  sub edi, dword ptr [ebp - 0x10]
    X86_AT(c, 0xd80f1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
L_d80f4:
    X86_TICK(c, 7);
    // 0d80f4  and edi, edi
    X86_AT(c, 0xd80f4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d80f6  jbe 0xd8122
    X86_AT(c, 0xd80f6u);
    if (x86_cc(c, 6)) { goto L_d8122; }
    X86_TICK(c, 23);
    // 0d80f8  movzx eax, word ptr [0xb435c]
    X86_AT(c, 0xd80f8u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xB435Cu)));
    // 0d80ff  push eax
    X86_AT(c, 0xd80ffu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d8100  push 0xb435e
    X86_AT(c, 0xd8100u);
    { uint32_t v = 0xB435Eu; push32(c, v); }
    // 0d8105  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd8105u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d8108  push eax
    X86_AT(c, 0xd8108u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d8109  call 0xda8d4
    X86_AT(c, 0xd8109u);
    push32(c, 0xd810eu); x86_call_known(c, 0xda8d4u, f_000da8d4); X86_RET(c, 0xd810eu);
    X86_TICK(c, 13);
    // 0d810e  movzx edx, word ptr [0xb435c]
    X86_AT(c, 0xd810eu);
    c.r[2] = rd16((c.sbase[3] + (uint32_t)(0xB435Cu)));
    // 0d8115  cmp edx, eax
    X86_AT(c, 0xd8115u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0d8117  jne 0xd8314
    X86_AT(c, 0xd8117u);
    if (x86_cc(c, 5)) { goto L_d8314; }
    X86_TICK(c, 10);
    // 0d811d  inc dword ptr [ebp - 4]
    X86_AT(c, 0xd811du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d8120  inc esi
    X86_AT(c, 0xd8120u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d8121  dec edi
    X86_AT(c, 0xd8121u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
L_d8122:
    X86_TICK(c, 7);
    // 0d8122  and edi, edi
    X86_AT(c, 0xd8122u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d8124  jbe 0xd8314
    X86_AT(c, 0xd8124u);
    if (x86_cc(c, 6)) { goto L_d8314; }
    X86_TICK(c, 7);
    // 0d812a  jmp 0xd80aa
    X86_AT(c, 0xd812au);
    X86_POLL(c, 0xd80aau); goto L_d80aa;
L_d812f:
    X86_TICK(c, 12);
    // 0d812f  cmp dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0xd812fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 0d8133  jne 0xd813c
    X86_AT(c, 0xd8133u);
    if (x86_cc(c, 5)) { goto L_d813c; }
    X86_TICK(c, 2);
    // 0d8135  mov dword ptr [ebx + 4], 0x200
    X86_AT(c, 0xd8135u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x200u);
L_d813c:
    X86_TICK(c, 12);
    // 0d813c  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0xd813cu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0d8140  jne 0xd830c
    X86_AT(c, 0xd8140u);
    if (x86_cc(c, 5)) { goto L_d830c; }
    X86_TICK(c, 11);
    // 0d8146  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xd8146u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d8149  cmp eax, 0x200
    X86_AT(c, 0xd8149u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 0d814e  jge 0xd81ad
    X86_AT(c, 0xd814eu);
    if (x86_cc(c, 13)) { goto L_d81ad; }
    X86_TICK(c, 9);
    // 0d8150  mov edx, edi
    X86_AT(c, 0xd8150u);
    c.r[2] = c.r[7];
    // 0d8152  cmp edx, eax
    X86_AT(c, 0xd8152u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0d8154  jl 0xd8157
    X86_AT(c, 0xd8154u);
    if (x86_cc(c, 12)) { goto L_d8157; }
    X86_TICK(c, 3);
    // 0d8156  xchg edx, eax
    X86_AT(c, 0xd8156u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_d8157:
    X86_TICK(c, 50);
    // 0d8157  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xd8157u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0d815a  mov ecx, edx
    X86_AT(c, 0xd815au);
    c.r[1] = c.r[2];
    // 0d815c  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd815cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d815f  mov edx, dword ptr [ebx]
    X86_AT(c, 0xd815fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d8161  push esi
    X86_AT(c, 0xd8161u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8162  push edi
    X86_AT(c, 0xd8162u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d8163  mov esi, eax
    X86_AT(c, 0xd8163u);
    c.r[6] = c.r[0];
    // 0d8165  mov edi, edx
    X86_AT(c, 0xd8165u);
    c.r[7] = c.r[2];
    // 0d8167  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xd8167u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0d8169  pop edi
    X86_AT(c, 0xd8169u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d816a  pop esi
    X86_AT(c, 0xd816au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d816b  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd816bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d816e  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0xd816eu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0d8171  jne 0xd819d
    X86_AT(c, 0xd8171u);
    if (x86_cc(c, 5)) { goto L_d819d; }
    X86_TICK(c, 20);
    // 0d8173  push 0x200
    X86_AT(c, 0xd8173u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 0d8178  push dword ptr [ebx + 8]
    X86_AT(c, 0xd8178u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0d817b  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd817bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d817e  push eax
    X86_AT(c, 0xd817eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d817f  call 0xda8d4
    X86_AT(c, 0xd817fu);
    push32(c, 0xd8184u); x86_call_known(c, 0xda8d4u, f_000da8d4); X86_RET(c, 0xd8184u);
    X86_TICK(c, 7);
    // 0d8184  cmp eax, 0x200
    X86_AT(c, 0xd8184u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 0d8189  jne 0xd8314
    X86_AT(c, 0xd8189u);
    if (x86_cc(c, 5)) { goto L_d8314; }
    X86_TICK(c, 15);
    // 0d818f  mov dword ptr [ebx + 4], 0x200
    X86_AT(c, 0xd818fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x200u);
    // 0d8196  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd8196u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d8199  mov dword ptr [ebx], eax
    X86_AT(c, 0xd8199u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0d819b  jmp 0xd81a5
    X86_AT(c, 0xd819bu);
    goto L_d81a5;
L_d819d:
    X86_TICK(c, 18);
    // 0d819d  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd819du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d81a0  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0xd81a0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0d81a3  add dword ptr [ebx], eax
    X86_AT(c, 0xd81a3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
L_d81a5:
    X86_TICK(c, 13);
    // 0d81a5  mov esi, dword ptr [ebp - 8]
    X86_AT(c, 0xd81a5u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d81a8  sub edi, esi
    X86_AT(c, 0xd81a8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0d81aa  add dword ptr [ebp - 4], esi
    X86_AT(c, 0xd81aau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_d81ad:
    X86_TICK(c, 7);
    // 0d81ad  cmp edi, 0x200
    X86_AT(c, 0xd81adu);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 0d81b3  jbe 0xd81e3
    X86_AT(c, 0xd81b3u);
    if (x86_cc(c, 6)) { goto L_d81e3; }
    X86_TICK(c, 35);
    // 0d81b5  mov eax, edi
    X86_AT(c, 0xd81b5u);
    c.r[0] = c.r[7];
    // 0d81b7  shr eax, 9
    X86_AT(c, 0xd81b7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0d81ba  shl eax, 9
    X86_AT(c, 0xd81bau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0d81bd  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd81bdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d81c0  push eax
    X86_AT(c, 0xd81c0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d81c1  mov edx, esi
    X86_AT(c, 0xd81c1u);
    c.r[2] = c.r[6];
    // 0d81c3  add edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd81c3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0d81c6  push edx
    X86_AT(c, 0xd81c6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d81c7  mov dl, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd81c7u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d81ca  push edx
    X86_AT(c, 0xd81cau);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d81cb  call 0xda8d4
    X86_AT(c, 0xd81cbu);
    push32(c, 0xd81d0u); x86_call_known(c, 0xda8d4u, f_000da8d4); X86_RET(c, 0xd81d0u);
    X86_TICK(c, 11);
    // 0d81d0  cmp eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd81d0u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4);
    // 0d81d3  jne 0xd8314
    X86_AT(c, 0xd81d3u);
    if (x86_cc(c, 5)) { goto L_d8314; }
    X86_TICK(c, 15);
    // 0d81d9  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd81d9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d81dc  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xd81dcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d81df  add esi, eax
    X86_AT(c, 0xd81dfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d81e1  sub edi, eax
    X86_AT(c, 0xd81e1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
L_d81e3:
    X86_TICK(c, 7);
    // 0d81e3  and edi, edi
    X86_AT(c, 0xd81e3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d81e5  jbe 0xd8314
    X86_AT(c, 0xd81e5u);
    if (x86_cc(c, 6)) { goto L_d8314; }
    X86_TICK(c, 65);
    // 0d81eb  mov ecx, edi
    X86_AT(c, 0xd81ebu);
    c.r[1] = c.r[7];
    // 0d81ed  mov eax, esi
    X86_AT(c, 0xd81edu);
    c.r[0] = c.r[6];
    // 0d81ef  add eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd81efu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0d81f2  mov edx, dword ptr [ebx]
    X86_AT(c, 0xd81f2u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d81f4  push esi
    X86_AT(c, 0xd81f4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d81f5  push edi
    X86_AT(c, 0xd81f5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d81f6  mov esi, eax
    X86_AT(c, 0xd81f6u);
    c.r[6] = c.r[0];
    // 0d81f8  mov edi, edx
    X86_AT(c, 0xd81f8u);
    c.r[7] = c.r[2];
    // 0d81fa  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xd81fau);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0d81fc  pop edi
    X86_AT(c, 0xd81fcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d81fd  pop esi
    X86_AT(c, 0xd81fdu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d81fe  sub dword ptr [ebx + 4], edi
    X86_AT(c, 0xd81feu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 0d8201  add dword ptr [ebx], edi
    X86_AT(c, 0xd8201u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 0d8203  add dword ptr [ebp - 4], edi
    X86_AT(c, 0xd8203u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 0d8206  jmp 0xd8314
    X86_AT(c, 0xd8206u);
    goto L_d8314;
L_d820b:
    X86_TICK(c, 9);
    // 0d820b  mov byte ptr [ebp - 0xc], 0
    X86_AT(c, 0xd820bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
    // 0d820f  jmp 0xd82bc
    X86_AT(c, 0xd820fu);
    goto L_d82bc;
L_d8214:
    X86_TICK(c, 11);
    // 0d8214  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xd8214u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d8217  cmp eax, edi
    X86_AT(c, 0xd8217u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 0d8219  jl 0xd821d
    X86_AT(c, 0xd8219u);
    if (x86_cc(c, 12)) { goto L_d821d; }
    X86_TICK(c, 2);
    // 0d821b  mov eax, edi
    X86_AT(c, 0xd821bu);
    c.r[0] = c.r[7];
L_d821d:
    X86_TICK(c, 31);
    // 0d821d  xchg edx, eax
    X86_AT(c, 0xd821du);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0d821e  mov al, 0xa
    X86_AT(c, 0xd821eu);
    s8(c, 0, 0xAu);
    // 0d8220  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd8220u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d8223  add ecx, esi
    X86_AT(c, 0xd8223u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[6], 0, 4); }
    // 0d8225  push edi
    X86_AT(c, 0xd8225u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d8226  mov edi, ecx
    X86_AT(c, 0xd8226u);
    c.r[7] = c.r[1];
    // 0d8228  mov dword ptr [ebp - 0x14], ecx
    X86_AT(c, 0xd8228u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[1]);
    // 0d822b  mov ecx, edx
    X86_AT(c, 0xd822bu);
    c.r[1] = c.r[2];
    // 0d822d  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xd822du);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0d822f  jne 0xd8234
    X86_AT(c, 0xd822fu);
    if (x86_cc(c, 5)) { goto L_d8234; }
    X86_TICK(c, 4);
    // 0d8231  inc ecx
    X86_AT(c, 0xd8231u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d8232  sub edx, ecx
    X86_AT(c, 0xd8232u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_d8234:
    X86_TICK(c, 83);
    // 0d8234  pop edi
    X86_AT(c, 0xd8234u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d8235  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0xd8235u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 0d8239  mov ecx, edx
    X86_AT(c, 0xd8239u);
    c.r[1] = c.r[2];
    // 0d823b  movsx ecx, cx
    X86_AT(c, 0xd823bu);
    c.r[1] = (uint32_t)(int32_t)(int16_t)(c.r[1] & 0xFFFFu);
    // 0d823e  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xd823eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0d8241  mov edx, dword ptr [ebx]
    X86_AT(c, 0xd8241u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d8243  push esi
    X86_AT(c, 0xd8243u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8244  push edi
    X86_AT(c, 0xd8244u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d8245  mov esi, eax
    X86_AT(c, 0xd8245u);
    c.r[6] = c.r[0];
    // 0d8247  mov edi, edx
    X86_AT(c, 0xd8247u);
    c.r[7] = c.r[2];
    // 0d8249  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xd8249u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0d824b  pop edi
    X86_AT(c, 0xd824bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d824c  pop esi
    X86_AT(c, 0xd824cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d824d  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xd824du);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0d8251  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xd8251u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d8254  add esi, eax
    X86_AT(c, 0xd8254u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d8256  add dword ptr [ebx], eax
    X86_AT(c, 0xd8256u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d8258  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xd8258u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0d825c  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xd825cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d825f  mov ecx, edi
    X86_AT(c, 0xd825fu);
    c.r[1] = c.r[7];
    // 0d8261  cmp ecx, edx
    X86_AT(c, 0xd8261u);
    (void)x86_sub(c, c.r[1], c.r[2], 0, 4);
    // 0d8263  jl 0xd8267
    X86_AT(c, 0xd8263u);
    if (x86_cc(c, 12)) { goto L_d8267; }
    X86_TICK(c, 2);
    // 0d8265  mov ecx, edx
    X86_AT(c, 0xd8265u);
    c.r[1] = c.r[2];
L_d8267:
    X86_TICK(c, 7);
    // 0d8267  cmp ecx, eax
    X86_AT(c, 0xd8267u);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 0d8269  jle 0xd82b3
    X86_AT(c, 0xd8269u);
    if (x86_cc(c, 14)) { goto L_d82b3; }
    X86_TICK(c, 15);
    // 0d826b  sub edx, eax
    X86_AT(c, 0xd826bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d826d  movzx eax, word ptr [0xb435c]
    X86_AT(c, 0xd826du);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xB435Cu)));
    // 0d8274  cmp eax, edx
    X86_AT(c, 0xd8274u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0d8276  jle 0xd8283
    X86_AT(c, 0xd8276u);
    if (x86_cc(c, 14)) { goto L_d8283; }
    X86_TICK(c, 15);
    // 0d8278  mov eax, dword ptr [ebx]
    X86_AT(c, 0xd8278u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d827a  mov byte ptr [eax], 0xd
    X86_AT(c, 0xd827au);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0xDu);
    // 0d827d  mov byte ptr [ebp - 0xc], 1
    X86_AT(c, 0xd827du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x1u);
    // 0d8281  jmp 0xd829b
    X86_AT(c, 0xd8281u);
    goto L_d829b;
L_d8283:
    X86_TICK(c, 35);
    // 0d8283  movzx ecx, word ptr [0xb435c]
    X86_AT(c, 0xd8283u);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(0xB435Cu)));
    // 0d828a  mov eax, 0xb435e
    X86_AT(c, 0xd828au);
    c.r[0] = 0xB435Eu;
    // 0d828f  mov edx, dword ptr [ebx]
    X86_AT(c, 0xd828fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d8291  push esi
    X86_AT(c, 0xd8291u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8292  push edi
    X86_AT(c, 0xd8292u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d8293  mov esi, eax
    X86_AT(c, 0xd8293u);
    c.r[6] = c.r[0];
    // 0d8295  mov edi, edx
    X86_AT(c, 0xd8295u);
    c.r[7] = c.r[2];
    // 0d8297  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xd8297u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0d8299  pop edi
    X86_AT(c, 0xd8299u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d829a  pop esi
    X86_AT(c, 0xd829au);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_d829b:
    X86_TICK(c, 36);
    // 0d829b  inc dword ptr [ebp - 4]
    X86_AT(c, 0xd829bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d829e  inc esi
    X86_AT(c, 0xd829eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d829f  dec edi
    X86_AT(c, 0xd829fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0d82a0  movzx eax, word ptr [0xb435c]
    X86_AT(c, 0xd82a0u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xB435Cu)));
    // 0d82a7  add dword ptr [ebx], eax
    X86_AT(c, 0xd82a7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d82a9  movzx eax, word ptr [0xb435c]
    X86_AT(c, 0xd82a9u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xB435Cu)));
    // 0d82b0  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0xd82b0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
L_d82b3:
    X86_TICK(c, 15);
    // 0d82b3  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xd82b3u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0d82b7  sub edi, eax
    X86_AT(c, 0xd82b7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d82b9  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0xd82b9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
L_d82bc:
    X86_TICK(c, 12);
    // 0d82bc  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xd82bcu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0d82c0  jle 0xd82ca
    X86_AT(c, 0xd82c0u);
    if (x86_cc(c, 14)) { goto L_d82ca; }
    X86_TICK(c, 7);
    // 0d82c2  and edi, edi
    X86_AT(c, 0xd82c2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d82c4  ja 0xd8214
    X86_AT(c, 0xd82c4u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xd8214u); goto L_d8214; }
L_d82ca:
    X86_TICK(c, 7);
    // 0d82ca  and edi, edi
    X86_AT(c, 0xd82cau);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d82cc  ja 0xd82d8
    X86_AT(c, 0xd82ccu);
    if (x86_cc(c, 7)) { goto L_d82d8; }
    X86_TICK(c, 7);
    // 0d82ce  and edi, edi
    X86_AT(c, 0xd82ceu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d82d0  jne 0xd82fc
    X86_AT(c, 0xd82d0u);
    if (x86_cc(c, 5)) { goto L_d82fc; }
    X86_TICK(c, 12);
    // 0d82d2  cmp byte ptr [ebp - 0xc], 0
    X86_AT(c, 0xd82d2u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x0u, 0, 1);
    // 0d82d6  je 0xd82fc
    X86_AT(c, 0xd82d6u);
    if (x86_cc(c, 4)) { goto L_d82fc; }
L_d82d8:
    X86_TICK(c, 20);
    // 0d82d8  push 0x200
    X86_AT(c, 0xd82d8u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 0d82dd  push dword ptr [ebx + 8]
    X86_AT(c, 0xd82ddu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0d82e0  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd82e0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d82e3  push eax
    X86_AT(c, 0xd82e3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d82e4  call 0xda8d4
    X86_AT(c, 0xd82e4u);
    push32(c, 0xd82e9u); x86_call_known(c, 0xda8d4u, f_000da8d4); X86_RET(c, 0xd82e9u);
    X86_TICK(c, 7);
    // 0d82e9  cmp eax, 0x200
    X86_AT(c, 0xd82e9u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 0d82ee  jne 0xd8314
    X86_AT(c, 0xd82eeu);
    if (x86_cc(c, 5)) { goto L_d8314; }
    X86_TICK(c, 8);
    // 0d82f0  mov dword ptr [ebx + 4], 0x200
    X86_AT(c, 0xd82f0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x200u);
    // 0d82f7  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd82f7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d82fa  mov dword ptr [ebx], eax
    X86_AT(c, 0xd82fau);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_d82fc:
    X86_TICK(c, 12);
    // 0d82fc  cmp byte ptr [ebp - 0xc], 0
    X86_AT(c, 0xd82fcu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x0u, 0, 1);
    // 0d8300  je 0xd830c
    X86_AT(c, 0xd8300u);
    if (x86_cc(c, 4)) { goto L_d830c; }
    X86_TICK(c, 18);
    // 0d8302  mov eax, dword ptr [ebx]
    X86_AT(c, 0xd8302u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0d8304  mov byte ptr [eax], 0xa
    X86_AT(c, 0xd8304u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0xAu);
    // 0d8307  inc dword ptr [ebx]
    X86_AT(c, 0xd8307u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d8309  dec dword ptr [ebx + 4]
    X86_AT(c, 0xd8309u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_d830c:
    X86_TICK(c, 7);
    // 0d830c  and edi, edi
    X86_AT(c, 0xd830cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d830e  ja 0xd820b
    X86_AT(c, 0xd830eu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xd820bu); goto L_d820b; }
L_d8314:
    X86_TICK(c, 12);
    // 0d8314  cmp word ptr [0xb47e6], 0
    X86_AT(c, 0xd8314u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xB47E6u))), 0x0u, 0, 2);
    // 0d831c  je 0xd8324
    X86_AT(c, 0xd831cu);
    if (x86_cc(c, 4)) { goto L_d8324; }
    X86_TICK(c, 14);
    // 0d831e  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0xd831eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 0d8322  jmp 0xd832e
    X86_AT(c, 0xd8322u);
    goto L_d832e;
L_d8324:
    X86_TICK(c, 6);
    // 0d8324  mov ax, word ptr [ebp - 0xa]
    X86_AT(c, 0xd8324u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u))));
    // 0d8328  mov word ptr [0xb47e6], ax
    X86_AT(c, 0xd8328u);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), (c.r[0] & 0xFFFFu));
L_d832e:
    X86_TICK(c, 32);
    // 0d832e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd832eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d8331  pop edi
    X86_AT(c, 0xd8331u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d8332  pop esi
    X86_AT(c, 0xd8332u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d8333  pop ebx
    X86_AT(c, 0xd8333u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d8334  leave 
    X86_AT(c, 0xd8334u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d8335  ret 0xc
    X86_AT(c, 0xd8335u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xd8058u, "ran off the end of a function");
}
void f_000d8314(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0d8314  cmp word ptr [0xb47e6], 0
    X86_AT(c, 0xd8314u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xB47E6u))), 0x0u, 0, 2);
    // 0d831c  je 0xd8324
    X86_AT(c, 0xd831cu);
    if (x86_cc(c, 4)) { goto L_d8324; }
    X86_TICK(c, 14);
    // 0d831e  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0xd831eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 0d8322  jmp 0xd832e
    X86_AT(c, 0xd8322u);
    goto L_d832e;
L_d8324:
    X86_TICK(c, 6);
    // 0d8324  mov ax, word ptr [ebp - 0xa]
    X86_AT(c, 0xd8324u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u))));
    // 0d8328  mov word ptr [0xb47e6], ax
    X86_AT(c, 0xd8328u);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), (c.r[0] & 0xFFFFu));
L_d832e:
    X86_TICK(c, 32);
    // 0d832e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd832eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d8331  pop edi
    X86_AT(c, 0xd8331u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d8332  pop esi
    X86_AT(c, 0xd8332u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d8333  pop ebx
    X86_AT(c, 0xd8333u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d8334  leave 
    X86_AT(c, 0xd8334u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d8335  ret 0xc
    X86_AT(c, 0xd8335u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xd8314u, "ran off the end of a function");
}
void f_000d8340(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0d8340  enter 4, 0
    X86_AT(c, 0xd8340u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0d8344  push ebx
    X86_AT(c, 0xd8344u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d8345  push esi
    X86_AT(c, 0xd8345u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8346  push edi
    X86_AT(c, 0xd8346u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d8347  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xd8347u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0d834a  mov ebx, edi
    X86_AT(c, 0xd834au);
    c.r[3] = c.r[7];
    // 0d834c  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0xd834cu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 0d8350  jne 0xd8362
    X86_AT(c, 0xd8350u);
    if (x86_cc(c, 5)) { goto L_d8362; }
    X86_TICK(c, 18);
    // 0d8352  mov ax, 5
    X86_AT(c, 0xd8352u);
    s16(c, 0, 0x5u);
    // 0d8356  mov word ptr [0xb47e6], ax
    X86_AT(c, 0xd8356u);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), (c.r[0] & 0xFFFFu));
    // 0d835c  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0xd835cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 0d8360  jmp 0xd8395
    X86_AT(c, 0xd8360u);
    goto L_d8395;
L_d8362:
    X86_TICK(c, 12);
    // 0d8362  test byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0xd8362u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x80u, 1);
    // 0d8366  je 0xd836e
    X86_AT(c, 0xd8366u);
    if (x86_cc(c, 4)) { goto L_d836e; }
    X86_TICK(c, 9);
    // 0d8368  push edi
    X86_AT(c, 0xd8368u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d8369  call 0xd93a8
    X86_AT(c, 0xd8369u);
    push32(c, 0xd836eu); x86_call_known(c, 0xd93a8u, f_000d93a8); X86_RET(c, 0xd836eu);
L_d836e:
    X86_TICK(c, 43);
    // 0d836e  or byte ptr [ebx + 0xd], 8
    X86_AT(c, 0xd836eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x8u, 1)); }
    // 0d8372  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd8372u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d8375  imul eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xd8375u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 0d8379  xchg esi, eax
    X86_AT(c, 0xd8379u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d837a  and esi, esi
    X86_AT(c, 0xd837au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d837c  jl 0xd8386
    X86_AT(c, 0xd837cu);
    if (x86_cc(c, 12)) { goto L_d8386; }
    X86_TICK(c, 7);
    // 0d837e  cmp esi, 0x7fffffff
    X86_AT(c, 0xd837eu);
    (void)x86_sub(c, c.r[6], 0x7FFFFFFFu, 0, 4);
    // 0d8384  jle 0xd8391
    X86_AT(c, 0xd8384u);
    if (x86_cc(c, 14)) { goto L_d8391; }
L_d8386:
    X86_TICK(c, 9);
    // 0d8386  mov word ptr [0xb47e6], 1
    X86_AT(c, 0xd8386u);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), 0x1u);
    // 0d838f  jmp 0xd8395
    X86_AT(c, 0xd838fu);
    goto L_d8395;
L_d8391:
    X86_TICK(c, 7);
    // 0d8391  and esi, esi
    X86_AT(c, 0xd8391u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d8393  jne 0xd8399
    X86_AT(c, 0xd8393u);
    if (x86_cc(c, 5)) { goto L_d8399; }
L_d8395:
    X86_TICK(c, 9);
    // 0d8395  sub eax, eax
    X86_AT(c, 0xd8395u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d8397  jmp 0xd83da
    X86_AT(c, 0xd8397u);
    goto L_d83da;
L_d8399:
    X86_TICK(c, 12);
    // 0d8399  test byte ptr [ebx + 0xc], 8
    X86_AT(c, 0xd8399u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x8u, 1);
    // 0d839d  je 0xd83ac
    X86_AT(c, 0xd839du);
    if (x86_cc(c, 4)) { goto L_d83ac; }
    X86_TICK(c, 17);
    // 0d839f  push 2
    X86_AT(c, 0xd839fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d83a1  push 0
    X86_AT(c, 0xd83a1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d83a3  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd83a3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d83a6  push eax
    X86_AT(c, 0xd83a6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d83a7  call 0xda980
    X86_AT(c, 0xd83a7u);
    push32(c, 0xd83acu); x86_call_known(c, 0xda980u, f_000da980); X86_RET(c, 0xd83acu);
L_d83ac:
    X86_TICK(c, 16);
    // 0d83ac  push esi
    X86_AT(c, 0xd83acu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d83ad  push dword ptr [ebp + 8]
    X86_AT(c, 0xd83adu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d83b0  push edi
    X86_AT(c, 0xd83b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d83b1  call 0xd8058
    X86_AT(c, 0xd83b1u);
    push32(c, 0xd83b6u); x86_call_known(c, 0xd8058u, f_000d8058); X86_RET(c, 0xd83b6u);
    X86_TICK(c, 56);
    // 0d83b6  cdq 
    X86_AT(c, 0xd83b6u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d83b7  idiv dword ptr [ebp + 0xc]
    X86_AT(c, 0xd83b7u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 4, 0xd83b7u);
    // 0d83ba  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd83bau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d83bd  test byte ptr [ebx + 0xc], 8
    X86_AT(c, 0xd83bdu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x8u, 1);
    // 0d83c1  je 0xd83d7
    X86_AT(c, 0xd83c1u);
    if (x86_cc(c, 4)) { goto L_d83d7; }
    X86_TICK(c, 9);
    // 0d83c3  push edi
    X86_AT(c, 0xd83c3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d83c4  call 0xd83f4
    X86_AT(c, 0xd83c4u);
    push32(c, 0xd83c9u); x86_call_known(c, 0xd83f4u, f_000d83f4); X86_RET(c, 0xd83c9u);
    X86_TICK(c, 21);
    // 0d83c9  pop ecx
    X86_AT(c, 0xd83c9u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0d83ca  push 2
    X86_AT(c, 0xd83cau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d83cc  push 0
    X86_AT(c, 0xd83ccu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d83ce  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd83ceu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d83d1  push eax
    X86_AT(c, 0xd83d1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d83d2  call 0xda980
    X86_AT(c, 0xd83d2u);
    push32(c, 0xd83d7u); x86_call_known(c, 0xda980u, f_000da980); X86_RET(c, 0xd83d7u);
L_d83d7:
    X86_TICK(c, 4);
    // 0d83d7  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd83d7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_d83da:
    X86_TICK(c, 28);
    // 0d83da  pop edi
    X86_AT(c, 0xd83dau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d83db  pop esi
    X86_AT(c, 0xd83dbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d83dc  pop ebx
    X86_AT(c, 0xd83dcu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d83dd  leave 
    X86_AT(c, 0xd83ddu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d83de  ret 
    X86_AT(c, 0xd83deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd8340u, "ran off the end of a function");
}
void f_000d83f4(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0d83f4  enter 4, 0
    X86_AT(c, 0xd83f4u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0d83f8  push edi
    X86_AT(c, 0xd83f8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d83f9  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd83f9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d83fc  test byte ptr [edi + 0xc], 4
    X86_AT(c, 0xd83fcu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x4u, 1);
    // 0d8400  jne 0xd8419
    X86_AT(c, 0xd8400u);
    if (x86_cc(c, 5)) { goto L_d8419; }
    X86_TICK(c, 15);
    // 0d8402  mov ax, 1
    X86_AT(c, 0xd8402u);
    s16(c, 0, 0x1u);
    // 0d8406  mov word ptr [0xb47e6], ax
    X86_AT(c, 0xd8406u);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), (c.r[0] & 0xFFFFu));
    // 0d840c  mov eax, 1
    X86_AT(c, 0xd840cu);
    c.r[0] = 0x1u;
    // 0d8411  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd8411u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d8414  jmp 0xd84b0
    X86_AT(c, 0xd8414u);
    goto L_d84b0;
L_d8419:
    X86_TICK(c, 12);
    // 0d8419  test byte ptr [edi + 0xd], 8
    X86_AT(c, 0xd8419u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))) & 0x8u, 1);
    // 0d841d  je 0xd842b
    X86_AT(c, 0xd841du);
    if (x86_cc(c, 4)) { goto L_d842b; }
    X86_TICK(c, 12);
    // 0d841f  cmp dword ptr [edi + 4], 0xffffffff
    X86_AT(c, 0xd841fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 0d8423  je 0xd842b
    X86_AT(c, 0xd8423u);
    if (x86_cc(c, 4)) { goto L_d842b; }
    X86_TICK(c, 12);
    // 0d8425  test byte ptr [edi + 0xc], 0x80
    X86_AT(c, 0xd8425u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x80u, 1);
    // 0d8429  je 0xd8432
    X86_AT(c, 0xd8429u);
    if (x86_cc(c, 4)) { goto L_d8432; }
L_d842b:
    X86_TICK(c, 9);
    // 0d842b  sub eax, eax
    X86_AT(c, 0xd842bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d842d  jmp 0xd84b3
    X86_AT(c, 0xd842du);
    goto L_d84b3;
L_d8432:
    X86_TICK(c, 12);
    // 0d8432  test byte ptr [edi + 0xc], 1
    X86_AT(c, 0xd8432u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x1u, 1);
    // 0d8436  je 0xd84a9
    X86_AT(c, 0xd8436u);
    if (x86_cc(c, 4)) { goto L_d84a9; }
    X86_TICK(c, 12);
    // 0d843c  cmp dword ptr [edi + 4], 0x200
    X86_AT(c, 0xd843cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0x200u, 0, 4);
    // 0d8443  jge 0xd84a9
    X86_AT(c, 0xd8443u);
    if (x86_cc(c, 13)) { goto L_d84a9; }
    X86_TICK(c, 12);
    // 0d8445  test byte ptr [edi + 0xc], 8
    X86_AT(c, 0xd8445u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x8u, 1);
    // 0d8449  je 0xd8458
    X86_AT(c, 0xd8449u);
    if (x86_cc(c, 4)) { goto L_d8458; }
    X86_TICK(c, 17);
    // 0d844b  push 2
    X86_AT(c, 0xd844bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d844d  push 0
    X86_AT(c, 0xd844du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d844f  mov al, byte ptr [edi + 0xe]
    X86_AT(c, 0xd844fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xEu))));
    // 0d8452  push eax
    X86_AT(c, 0xd8452u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d8453  call 0xda980
    X86_AT(c, 0xd8453u);
    push32(c, 0xd8458u); x86_call_known(c, 0xda980u, f_000da980); X86_RET(c, 0xd8458u);
L_d8458:
    X86_TICK(c, 28);
    // 0d8458  mov eax, 0x200
    X86_AT(c, 0xd8458u);
    c.r[0] = 0x200u;
    // 0d845d  sub eax, dword ptr [edi + 4]
    X86_AT(c, 0xd845du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4); }
    // 0d8460  push eax
    X86_AT(c, 0xd8460u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d8461  push dword ptr [edi + 8]
    X86_AT(c, 0xd8461u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))); push32(c, v); }
    // 0d8464  mov al, byte ptr [edi + 0xe]
    X86_AT(c, 0xd8464u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xEu))));
    // 0d8467  push eax
    X86_AT(c, 0xd8467u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d8468  call 0xda8d4
    X86_AT(c, 0xd8468u);
    push32(c, 0xd846du); x86_call_known(c, 0xda8d4u, f_000da8d4); X86_RET(c, 0xd846du);
    X86_TICK(c, 17);
    // 0d846d  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd846du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d8470  mov edx, 0x200
    X86_AT(c, 0xd8470u);
    c.r[2] = 0x200u;
    // 0d8475  sub edx, dword ptr [edi + 4]
    X86_AT(c, 0xd8475u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4); }
    // 0d8478  cmp edx, eax
    X86_AT(c, 0xd8478u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0d847a  jne 0xd8485
    X86_AT(c, 0xd847au);
    if (x86_cc(c, 5)) { goto L_d8485; }
    X86_TICK(c, 9);
    // 0d847c  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xd847cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0d8483  jmp 0xd849b
    X86_AT(c, 0xd8483u);
    goto L_d849b;
L_d8485:
    X86_TICK(c, 15);
    // 0d8485  mov ax, 0x15
    X86_AT(c, 0xd8485u);
    s16(c, 0, 0x15u);
    // 0d8489  mov word ptr [0xb47e6], ax
    X86_AT(c, 0xd8489u);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), (c.r[0] & 0xFFFFu));
    // 0d848f  mov eax, 0x15
    X86_AT(c, 0xd848fu);
    c.r[0] = 0x15u;
    // 0d8494  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd8494u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d8497  or byte ptr [edi + 0xc], 0x20
    X86_AT(c, 0xd8497u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
L_d849b:
    X86_TICK(c, 15);
    // 0d849b  mov eax, dword ptr [edi + 8]
    X86_AT(c, 0xd849bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)));
    // 0d849e  mov dword ptr [edi], eax
    X86_AT(c, 0xd849eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0d84a0  mov dword ptr [edi + 4], 0x200
    X86_AT(c, 0xd84a0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), 0x200u);
    // 0d84a7  jmp 0xd84b0
    X86_AT(c, 0xd84a7u);
    goto L_d84b0;
L_d84a9:
    X86_TICK(c, 2);
    // 0d84a9  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xd84a9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_d84b0:
    X86_TICK(c, 4);
    // 0d84b0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd84b0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_d84b3:
    X86_TICK(c, 20);
    // 0d84b3  pop edi
    X86_AT(c, 0xd84b3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d84b4  leave 
    X86_AT(c, 0xd84b4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d84b5  ret 
    X86_AT(c, 0xd84b5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd83f4u, "ran off the end of a function");
}
void f_000d84c0(X86Cpu& c) {
    X86_TICK(c, 80);
    // 0d84c0  enter 4, 0
    X86_AT(c, 0xd84c0u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0d84c4  push ebx
    X86_AT(c, 0xd84c4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d84c5  push esi
    X86_AT(c, 0xd84c5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d84c6  push edi
    X86_AT(c, 0xd84c6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d84c7  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd84c7u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d84ca  sub eax, eax
    X86_AT(c, 0xd84cau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d84cc  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd84ccu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d84cf  mov eax, edi
    X86_AT(c, 0xd84cfu);
    c.r[0] = c.r[7];
    // 0d84d1  mov edx, 0xb4588
    X86_AT(c, 0xd84d1u);
    c.r[2] = 0xB4588u;
    // 0d84d6  sub eax, edx
    X86_AT(c, 0xd84d6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d84d8  cdq 
    X86_AT(c, 0xd84d8u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d84d9  mov ecx, 0x12
    X86_AT(c, 0xd84d9u);
    c.r[1] = 0x12u;
    // 0d84de  idiv ecx
    X86_AT(c, 0xd84deu);
    x86_idiv(c, c.r[1], 4, 0xd84deu);
    // 0d84e0  xchg esi, eax
    X86_AT(c, 0xd84e0u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d84e1  and esi, esi
    X86_AT(c, 0xd84e1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d84e3  jl 0xd8537
    X86_AT(c, 0xd84e3u);
    if (x86_cc(c, 12)) { goto L_d8537; }
    X86_TICK(c, 7);
    // 0d84e5  cmp esi, 0x19
    X86_AT(c, 0xd84e5u);
    (void)x86_sub(c, c.r[6], 0x19u, 0, 4);
    // 0d84e8  jg 0xd8537
    X86_AT(c, 0xd84e8u);
    if (x86_cc(c, 15)) { goto L_d8537; }
    X86_TICK(c, 12);
    // 0d84ea  cmp word ptr [edi + 0xc], 0
    X86_AT(c, 0xd84eau);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))), 0x0u, 0, 2);
    // 0d84ef  je 0xd8537
    X86_AT(c, 0xd84efu);
    if (x86_cc(c, 4)) { goto L_d8537; }
    X86_TICK(c, 14);
    // 0d84f1  mov ebx, edi
    X86_AT(c, 0xd84f1u);
    c.r[3] = c.r[7];
    // 0d84f3  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0xd84f3u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 0d84f7  je 0xd8526
    X86_AT(c, 0xd84f7u);
    if (x86_cc(c, 4)) { goto L_d8526; }
    X86_TICK(c, 12);
    // 0d84f9  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0xd84f9u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 0d84fd  je 0xd850b
    X86_AT(c, 0xd84fdu);
    if (x86_cc(c, 4)) { goto L_d850b; }
    X86_TICK(c, 9);
    // 0d84ff  push edi
    X86_AT(c, 0xd84ffu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d8500  call 0xd83f4
    X86_AT(c, 0xd8500u);
    push32(c, 0xd8505u); x86_call_known(c, 0xd83f4u, f_000d83f4); X86_RET(c, 0xd8505u);
    X86_TICK(c, 13);
    // 0d8505  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd8505u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d8508  pop ecx
    X86_AT(c, 0xd8508u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0d8509  jmp 0xd8511
    X86_AT(c, 0xd8509u);
    goto L_d8511;
L_d850b:
    X86_TICK(c, 12);
    // 0d850b  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0xd850bu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 0d850f  je 0xd8537
    X86_AT(c, 0xd850fu);
    if (x86_cc(c, 4)) { goto L_d8537; }
L_d8511:
    X86_TICK(c, 12);
    // 0d8511  test byte ptr [ebx + 0xd], 1
    X86_AT(c, 0xd8511u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x1u, 1);
    // 0d8515  jne 0xd8526
    X86_AT(c, 0xd8515u);
    if (x86_cc(c, 5)) { goto L_d8526; }
    X86_TICK(c, 12);
    // 0d8517  test byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0xd8517u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x80u, 1);
    // 0d851b  jne 0xd8526
    X86_AT(c, 0xd851bu);
    if (x86_cc(c, 5)) { goto L_d8526; }
    X86_TICK(c, 12);
    // 0d851d  push dword ptr [ebx + 8]
    X86_AT(c, 0xd851du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0d8520  call 0xd8800
    X86_AT(c, 0xd8520u);
    push32(c, 0xd8525u); x86_call_known(c, 0xd8800u, f_000d8800); X86_RET(c, 0xd8525u);
    X86_TICK(c, 4);
    // 0d8525  pop ecx
    X86_AT(c, 0xd8525u);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_d8526:
    X86_TICK(c, 13);
    // 0d8526  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd8526u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d8529  push eax
    X86_AT(c, 0xd8529u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d852a  call 0xda178
    X86_AT(c, 0xd852au);
    push32(c, 0xd852fu); x86_call_known(c, 0xda178u, f_000da178); X86_RET(c, 0xd852fu);
    X86_TICK(c, 9);
    // 0d852f  mov word ptr [ebx + 0xc], 0
    X86_AT(c, 0xd852fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), 0x0u);
    // 0d8535  jmp 0xd8549
    X86_AT(c, 0xd8535u);
    goto L_d8549;
L_d8537:
    X86_TICK(c, 8);
    // 0d8537  mov ax, 6
    X86_AT(c, 0xd8537u);
    s16(c, 0, 0x6u);
    // 0d853b  mov word ptr [0xb47e6], ax
    X86_AT(c, 0xd853bu);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), (c.r[0] & 0xFFFFu));
    // 0d8541  mov eax, 6
    X86_AT(c, 0xd8541u);
    c.r[0] = 0x6u;
    // 0d8546  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd8546u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_d8549:
    X86_TICK(c, 32);
    // 0d8549  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd8549u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d854c  pop edi
    X86_AT(c, 0xd854cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d854d  pop esi
    X86_AT(c, 0xd854du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d854e  pop ebx
    X86_AT(c, 0xd854eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d854f  leave 
    X86_AT(c, 0xd854fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d8550  ret 
    X86_AT(c, 0xd8550u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd84c0u, "ran off the end of a function");
}
void f_000d8560(X86Cpu& c) {
    X86_TICK(c, 4);
    // 0d8560  push edi
    X86_AT(c, 0xd8560u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d8561  sub edi, edi
    X86_AT(c, 0xd8561u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d8563:
    X86_TICK(c, 16);
    // 0d8563  lea eax, [edi + edi*4]
    X86_AT(c, 0xd8563u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0d8566  lea eax, [eax*4]
    X86_AT(c, 0xd8566u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0d856d  test byte ptr [eax + 0xb4594], 6
    X86_AT(c, 0xd856du);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB4594u))) & 0x6u, 1);
    // 0d8574  je 0xd858a
    X86_AT(c, 0xd8574u);
    if (x86_cc(c, 4)) { goto L_d858a; }
    X86_TICK(c, 13);
    // 0d8576  add eax, 0xb4588
    X86_AT(c, 0xd8576u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xB4588u, 0, 4); }
    // 0d857b  cmp eax, dword ptr [0xb4368]
    X86_AT(c, 0xd857bu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xB4368u))), 0, 4);
    // 0d8581  je 0xd858a
    X86_AT(c, 0xd8581u);
    if (x86_cc(c, 4)) { goto L_d858a; }
    X86_TICK(c, 9);
    // 0d8583  push eax
    X86_AT(c, 0xd8583u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d8584  call 0xd84c0
    X86_AT(c, 0xd8584u);
    push32(c, 0xd8589u); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xd8589u);
    X86_TICK(c, 4);
    // 0d8589  pop ecx
    X86_AT(c, 0xd8589u);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_d858a:
    X86_TICK(c, 7);
    // 0d858a  cmp edi, 0x19
    X86_AT(c, 0xd858au);
    (void)x86_sub(c, c.r[7], 0x19u, 0, 4);
    // 0d858d  jae 0xd8592
    X86_AT(c, 0xd858du);
    if (x86_cc(c, 3)) { goto L_d8592; }
    X86_TICK(c, 9);
    // 0d858f  inc edi
    X86_AT(c, 0xd858fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d8590  jmp 0xd8563
    X86_AT(c, 0xd8590u);
    X86_POLL(c, 0xd8563u); goto L_d8563;
L_d8592:
    X86_TICK(c, 12);
    // 0d8592  push dword ptr [0xb4368]
    X86_AT(c, 0xd8592u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB4368u))); push32(c, v); }
    // 0d8598  call 0xd84c0
    X86_AT(c, 0xd8598u);
    push32(c, 0xd859du); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xd859du);
    X86_TICK(c, 18);
    // 0d859d  pop ecx
    X86_AT(c, 0xd859du);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0d859e  pop edi
    X86_AT(c, 0xd859eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d859f  ret 
    X86_AT(c, 0xd859fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd8560u, "ran off the end of a function");
}
void f_000d85b4(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0d85b4  enter 8, 0
    X86_AT(c, 0xd85b4u);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 0d85b8  push ebx
    X86_AT(c, 0xd85b8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d85b9  push esi
    X86_AT(c, 0xd85b9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d85ba  push edi
    X86_AT(c, 0xd85bau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d85bb  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd85bbu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d85be  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xd85beu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0d85c1  and esi, esi
    X86_AT(c, 0xd85c1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d85c3  jl 0xd85ca
    X86_AT(c, 0xd85c3u);
    if (x86_cc(c, 12)) { goto L_d85ca; }
    X86_TICK(c, 7);
    // 0d85c5  cmp esi, 2
    X86_AT(c, 0xd85c5u);
    (void)x86_sub(c, c.r[6], 0x2u, 0, 4);
    // 0d85c8  jle 0xd85d6
    X86_AT(c, 0xd85c8u);
    if (x86_cc(c, 14)) { goto L_d85d6; }
L_d85ca:
    X86_TICK(c, 9);
    // 0d85ca  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xd85cau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 0d85d1  jmp 0xd8687
    X86_AT(c, 0xd85d1u);
    goto L_d8687;
L_d85d6:
    X86_TICK(c, 31);
    // 0d85d6  mov ax, word ptr [0xb47e6]
    X86_AT(c, 0xd85d6u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB47E6u))));
    // 0d85dc  mov word ptr [ebp - 6], ax
    X86_AT(c, 0xd85dcu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), (c.r[0] & 0xFFFFu));
    // 0d85e0  sub eax, eax
    X86_AT(c, 0xd85e0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d85e2  mov word ptr [0xb47e6], ax
    X86_AT(c, 0xd85e2u);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), (c.r[0] & 0xFFFFu));
    // 0d85e8  mov ebx, edi
    X86_AT(c, 0xd85e8u);
    c.r[3] = c.r[7];
    // 0d85ea  and byte ptr [ebx + 0xd], 0xfb
    X86_AT(c, 0xd85eau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFBu, 1)); }
    // 0d85ee  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0xd85eeu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 0d85f2  je 0xd864d
    X86_AT(c, 0xd85f2u);
    if (x86_cc(c, 4)) { goto L_d864d; }
    X86_TICK(c, 12);
    // 0d85f4  cmp dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0xd85f4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 0d85f8  je 0xd8630
    X86_AT(c, 0xd85f8u);
    if (x86_cc(c, 4)) { goto L_d8630; }
    X86_TICK(c, 12);
    // 0d85fa  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0xd85fau);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 0d85fe  je 0xd8613
    X86_AT(c, 0xd85feu);
    if (x86_cc(c, 4)) { goto L_d8613; }
    X86_TICK(c, 12);
    // 0d8600  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0xd8600u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 0d8604  je 0xd860c
    X86_AT(c, 0xd8604u);
    if (x86_cc(c, 4)) { goto L_d860c; }
    X86_TICK(c, 12);
    // 0d8606  test byte ptr [ebx + 0xd], 8
    X86_AT(c, 0xd8606u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x8u, 1);
    // 0d860a  je 0xd8613
    X86_AT(c, 0xd860au);
    if (x86_cc(c, 4)) { goto L_d8613; }
L_d860c:
    X86_TICK(c, 9);
    // 0d860c  push edi
    X86_AT(c, 0xd860cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d860d  call 0xd83f4
    X86_AT(c, 0xd860du);
    push32(c, 0xd8612u); x86_call_known(c, 0xd83f4u, f_000d83f4); X86_RET(c, 0xd8612u);
    X86_TICK(c, 4);
    // 0d8612  pop ecx
    X86_AT(c, 0xd8612u);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_d8613:
    X86_TICK(c, 7);
    // 0d8613  cmp esi, 1
    X86_AT(c, 0xd8613u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0d8616  jne 0xd8630
    X86_AT(c, 0xd8616u);
    if (x86_cc(c, 5)) { goto L_d8630; }
    X86_TICK(c, 12);
    // 0d8618  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0xd8618u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 0d861c  je 0xd8630
    X86_AT(c, 0xd861cu);
    if (x86_cc(c, 4)) { goto L_d8630; }
    X86_TICK(c, 12);
    // 0d861e  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0xd861eu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 0d8622  je 0xd862a
    X86_AT(c, 0xd8622u);
    if (x86_cc(c, 4)) { goto L_d862a; }
    X86_TICK(c, 12);
    // 0d8624  test byte ptr [ebx + 0xd], 8
    X86_AT(c, 0xd8624u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x8u, 1);
    // 0d8628  jne 0xd8630
    X86_AT(c, 0xd8628u);
    if (x86_cc(c, 5)) { goto L_d8630; }
L_d862a:
    X86_TICK(c, 11);
    // 0d862a  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xd862au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0d862d  sub dword ptr [ebp + 0xc], eax
    X86_AT(c, 0xd862du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
L_d8630:
    X86_TICK(c, 22);
    // 0d8630  mov eax, esi
    X86_AT(c, 0xd8630u);
    c.r[0] = c.r[6];
    // 0d8632  push eax
    X86_AT(c, 0xd8632u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d8633  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xd8633u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0d8636  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd8636u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d8639  push eax
    X86_AT(c, 0xd8639u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d863a  call 0xda980
    X86_AT(c, 0xd863au);
    push32(c, 0xd863fu); x86_call_known(c, 0xda980u, f_000da980); X86_RET(c, 0xd863fu);
    X86_TICK(c, 15);
    // 0d863f  mov dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0xd863fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0xFFFFFFFFu);
    // 0d8646  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xd8646u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0d8649  mov dword ptr [ebx], eax
    X86_AT(c, 0xd8649u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0d864b  jmp 0xd865c
    X86_AT(c, 0xd864bu);
    goto L_d865c;
L_d864d:
    X86_TICK(c, 22);
    // 0d864d  mov eax, esi
    X86_AT(c, 0xd864du);
    c.r[0] = c.r[6];
    // 0d864f  push eax
    X86_AT(c, 0xd864fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d8650  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xd8650u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0d8653  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xd8653u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0d8656  push eax
    X86_AT(c, 0xd8656u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d8657  call 0xda980
    X86_AT(c, 0xd8657u);
    push32(c, 0xd865cu); x86_call_known(c, 0xda980u, f_000da980); X86_RET(c, 0xd865cu);
L_d865c:
    X86_TICK(c, 12);
    // 0d865c  cmp word ptr [0xb47e6], 0
    X86_AT(c, 0xd865cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xB47E6u))), 0x0u, 0, 2);
    // 0d8664  jne 0xd8679
    X86_AT(c, 0xd8664u);
    if (x86_cc(c, 5)) { goto L_d8679; }
    X86_TICK(c, 15);
    // 0d8666  mov ax, word ptr [ebp - 6]
    X86_AT(c, 0xd8666u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))));
    // 0d866a  mov word ptr [0xb47e6], ax
    X86_AT(c, 0xd866au);
    wr16((c.sbase[3] + (uint32_t)(0xB47E6u)), (c.r[0] & 0xFFFFu));
    // 0d8670  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xd8670u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0d8677  jmp 0xd8683
    X86_AT(c, 0xd8677u);
    goto L_d8683;
L_d8679:
    X86_TICK(c, 8);
    // 0d8679  movzx eax, word ptr [0xb47e6]
    X86_AT(c, 0xd8679u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xB47E6u)));
    // 0d8680  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd8680u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_d8683:
    X86_TICK(c, 7);
    // 0d8683  and byte ptr [edi + 0xc], 0xef
    X86_AT(c, 0xd8683u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xEFu, 1)); }
L_d8687:
    X86_TICK(c, 32);
    // 0d8687  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd8687u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d868a  pop edi
    X86_AT(c, 0xd868au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d868b  pop esi
    X86_AT(c, 0xd868bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d868c  pop ebx
    X86_AT(c, 0xd868cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d868d  leave 
    X86_AT(c, 0xd868du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d868e  ret 
    X86_AT(c, 0xd868eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd85b4u, "ran off the end of a function");
}
void f_000d871c(X86Cpu& c) {
    X86_TICK(c, 39);
    // 0d871c  push ebp
    X86_AT(c, 0xd871cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d871d  mov ebp, esp
    X86_AT(c, 0xd871du);
    c.r[5] = c.r[4];
    // 0d871f  push ecx
    X86_AT(c, 0xd871fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d8720  push ebx
    X86_AT(c, 0xd8720u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d8721  push edi
    X86_AT(c, 0xd8721u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d8722  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd8722u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d8725  mov ebx, dword ptr [ebp - 4]
    X86_AT(c, 0xd8725u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d8728  push dword ptr [ebx + 8]
    X86_AT(c, 0xd8728u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0d872b  push edi
    X86_AT(c, 0xd872bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d872c  push 1
    X86_AT(c, 0xd872cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d872e  push dword ptr [ebp + 8]
    X86_AT(c, 0xd872eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d8731  call 0xd8340
    X86_AT(c, 0xd8731u);
    push32(c, 0xd8736u); x86_call_known(c, 0xd8340u, f_000d8340); X86_RET(c, 0xd8736u);
    X86_TICK(c, 9);
    // 0d8736  add esp, 0x10
    X86_AT(c, 0xd8736u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d8739  cmp edi, eax
    X86_AT(c, 0xd8739u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0d873b  je 0xd8748
    X86_AT(c, 0xd873bu);
    if (x86_cc(c, 4)) { goto L_d8748; }
    X86_TICK(c, 11);
    // 0d873d  mov dword ptr [ebx - 4], 0xffffffff
    X86_AT(c, 0xd873du);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 0d8744  mov ebp, ebx
    X86_AT(c, 0xd8744u);
    c.r[5] = c.r[3];
    // 0d8746  jmp 0xd8781
    X86_AT(c, 0xd8746u);
    goto L_d8781;
L_d8748:
    X86_TICK(c, 24);
    // 0d8748  pop edi
    X86_AT(c, 0xd8748u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d8749  pop ebx
    X86_AT(c, 0xd8749u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d874a  leave 
    X86_AT(c, 0xd874au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d874b  ret 8
    X86_AT(c, 0xd874bu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_d8781:
    X86_TICK(c, 34);
    // 0d8781  lea esp, [ebp - 0x10]
    X86_AT(c, 0xd8781u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0d8784  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd8784u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d8787  pop edi
    X86_AT(c, 0xd8787u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d8788  pop esi
    X86_AT(c, 0xd8788u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d8789  pop ebx
    X86_AT(c, 0xd8789u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d878a  leave 
    X86_AT(c, 0xd878au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d878b  ret 
    X86_AT(c, 0xd878bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd871cu, "ran off the end of a function");
}
void f_000d8758(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0d8758  enter 4, 0
    X86_AT(c, 0xd8758u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0d875c  push ebx
    X86_AT(c, 0xd875cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d875d  push esi
    X86_AT(c, 0xd875du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d875e  push edi
    X86_AT(c, 0xd875eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d875f  mov dword ptr [0xb438c], 0xd871c
    X86_AT(c, 0xd875fu);
    wr32((c.sbase[3] + (uint32_t)(0xB438Cu)), 0xD871Cu);
    // 0d8769  mov dword ptr [0xb4390], ebp
    X86_AT(c, 0xd8769u);
    wr32((c.sbase[3] + (uint32_t)(0xB4390u)), c.r[5]);
    // 0d876f  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xd876fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0d8772  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xd8772u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0d8775  call 0xd9c28
    X86_AT(c, 0xd8775u);
    push32(c, 0xd877au); x86_call_known(c, 0xd9c28u, f_000d9c28); X86_RET(c, 0xd877au);
    X86_TICK(c, 11);
    // 0d877a  mov eax, dword ptr [0xb4388]
    X86_AT(c, 0xd877au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4388u)));
    // 0d877f  jmp 0xd8787
    X86_AT(c, 0xd877fu);
    goto L_d8787;
L_d8787:
    X86_TICK(c, 28);
    // 0d8787  pop edi
    X86_AT(c, 0xd8787u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d8788  pop esi
    X86_AT(c, 0xd8788u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d8789  pop ebx
    X86_AT(c, 0xd8789u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d878a  leave 
    X86_AT(c, 0xd878au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d878b  ret 
    X86_AT(c, 0xd878bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd8758u, "ran off the end of a function");
}
void f_000d87d8(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0d87d8  push ebp
    X86_AT(c, 0xd87d8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d87d9  mov ebp, esp
    X86_AT(c, 0xd87d9u);
    c.r[5] = c.r[4];
    // 0d87db  lea eax, [ebp + 0x10]
    X86_AT(c, 0xd87dbu);
    c.r[0] = (uint32_t)(c.r[5] + 0x10u);
    // 0d87de  push eax
    X86_AT(c, 0xd87deu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d87df  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xd87dfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0d87e2  push dword ptr [ebp + 8]
    X86_AT(c, 0xd87e2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d87e5  call 0xd8758
    X86_AT(c, 0xd87e5u);
    push32(c, 0xd87eau); x86_call_known(c, 0xd8758u, f_000d8758); X86_RET(c, 0xd87eau);
    X86_TICK(c, 18);
    // 0d87ea  add esp, 0xc
    X86_AT(c, 0xd87eau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d87ed  leave 
    X86_AT(c, 0xd87edu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d87ee  ret 
    X86_AT(c, 0xd87eeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd87d8u, "ran off the end of a function");
}
void f_000d8800(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0d8800  push ebp
    X86_AT(c, 0xd8800u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d8801  mov ebp, esp
    X86_AT(c, 0xd8801u);
    c.r[5] = c.r[4];
    // 0d8803  push dword ptr [ebp + 8]
    X86_AT(c, 0xd8803u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d8806  call 0xda772
    X86_AT(c, 0xd8806u);
    push32(c, 0xd880bu); x86_call_known(c, 0xda772u, f_000da772); X86_RET(c, 0xd880bu);
    X86_TICK(c, 16);
    // 0d880b  leave 
    X86_AT(c, 0xd880bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d880c  ret 
    X86_AT(c, 0xd880cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd8800u, "ran off the end of a function");
}
void f_000d8814(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0d8814  push ebp
    X86_AT(c, 0xd8814u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d8815  mov ebp, esp
    X86_AT(c, 0xd8815u);
    c.r[5] = c.r[4];
    // 0d8817  push dword ptr [ebp + 8]
    X86_AT(c, 0xd8817u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d881a  call 0xda738
    X86_AT(c, 0xd881au);
    push32(c, 0xd881fu); x86_call_known(c, 0xda738u, f_000da738); X86_RET(c, 0xd881fu);
    X86_TICK(c, 16);
    // 0d881f  leave 
    X86_AT(c, 0xd881fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d8820  ret 
    X86_AT(c, 0xd8820u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd8814u, "ran off the end of a function");
}
void f_000d8840(X86Cpu& c) {
    X86_TICK(c, 35);
    // 0d8840  enter 0x20, 0
    X86_AT(c, 0xd8840u);
    x86_enter(c, 0x20u, 0x0u, 4);
    // 0d8844  push ebx
    X86_AT(c, 0xd8844u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d8845  push esi
    X86_AT(c, 0xd8845u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8846  push edi
    X86_AT(c, 0xd8846u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d8847  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd8847u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d884a  lea ebx, [ebp - 0x1c]
    X86_AT(c, 0xd884au);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFE4u);
    // 0d884d  push ebx
    X86_AT(c, 0xd884du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d884e  lea esi, [ebp - 0x14]
    X86_AT(c, 0xd884eu);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 0d8851  push esi
    X86_AT(c, 0xd8851u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8852  lea eax, [ebp - 0x12]
    X86_AT(c, 0xd8852u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFEEu);
    // 0d8855  push eax
    X86_AT(c, 0xd8855u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d8856  call 0xda9cc
    X86_AT(c, 0xd8856u);
    push32(c, 0xd885bu); x86_call_known(c, 0xda9ccu, f_000da9cc); X86_RET(c, 0xd885bu);
    X86_TICK(c, 44);
    // 0d885b  mov ax, word ptr [ebx]
    X86_AT(c, 0xd885bu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3]))));
    // 0d885e  mov word ptr [ebp - 0x10], ax
    X86_AT(c, 0xd885eu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[0] & 0xFFFFu));
    // 0d8862  mov ax, word ptr [esi]
    X86_AT(c, 0xd8862u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0d8865  dec eax
    X86_AT(c, 0xd8865u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d8866  mov word ptr [ebp - 0xe], ax
    X86_AT(c, 0xd8866u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), (c.r[0] & 0xFFFFu));
    // 0d886a  shl eax, 8
    X86_AT(c, 0xd886au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0d886d  add ax, word ptr [ebp - 0x12]
    X86_AT(c, 0xd886du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEEu))), 0, 2)); }
    // 0d8871  mov word ptr [ebp - 0xe], ax
    X86_AT(c, 0xd8871u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), (c.r[0] & 0xFFFFu));
    // 0d8875  lea ebx, [ebp - 0x1a]
    X86_AT(c, 0xd8875u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFE6u);
    // 0d8878  push ebx
    X86_AT(c, 0xd8878u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d8879  lea esi, [ebp - 0x18]
    X86_AT(c, 0xd8879u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFE8u);
    // 0d887c  push esi
    X86_AT(c, 0xd887cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d887d  lea eax, [ebp - 0x16]
    X86_AT(c, 0xd887du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFEAu);
    // 0d8880  push eax
    X86_AT(c, 0xd8880u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d8881  call 0xdaa00
    X86_AT(c, 0xd8881u);
    push32(c, 0xd8886u); x86_call_known(c, 0xdaa00u, f_000daa00); X86_RET(c, 0xd8886u);
    X86_TICK(c, 22);
    // 0d8886  mov ax, word ptr [ebp - 0x16]
    X86_AT(c, 0xd8886u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEAu))));
    // 0d888a  shl eax, 8
    X86_AT(c, 0xd888au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0d888d  add ax, word ptr [esi]
    X86_AT(c, 0xd888du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 0d8890  mov word ptr [ebp - 0xc], ax
    X86_AT(c, 0xd8890u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (c.r[0] & 0xFFFFu));
    // 0d8894  call 0xdaa38
    X86_AT(c, 0xd8894u);
    push32(c, 0xd8899u); x86_call_known(c, 0xdaa38u, f_000daa38); X86_RET(c, 0xd8899u);
    X86_TICK(c, 63);
    // 0d8899  mov dx, word ptr [ebx]
    X86_AT(c, 0xd8899u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3]))));
    // 0d889c  shl edx, 8
    X86_AT(c, 0xd889cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 0d889f  movzx edx, dx
    X86_AT(c, 0xd889fu);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 0d88a2  mov dword ptr [ebp - 0x20], edx
    X86_AT(c, 0xd88a2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[2]);
    // 0d88a5  cdq 
    X86_AT(c, 0xd88a5u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d88a6  mov ecx, 0x64
    X86_AT(c, 0xd88a6u);
    c.r[1] = 0x64u;
    // 0d88ab  idiv ecx
    X86_AT(c, 0xd88abu);
    x86_idiv(c, c.r[1], 4, 0xd88abu);
    // 0d88ad  and edx, edx
    X86_AT(c, 0xd88adu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0d88af  jge 0xd88b3
    X86_AT(c, 0xd88afu);
    if (x86_cc(c, 13)) { goto L_d88b3; }
    X86_TICK(c, 2);
    // 0d88b1  add edx, ecx
    X86_AT(c, 0xd88b1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
L_d88b3:
    X86_TICK(c, 27);
    // 0d88b3  add edx, dword ptr [ebp - 0x20]
    X86_AT(c, 0xd88b3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))), 0, 4); }
    // 0d88b6  mov word ptr [ebp - 0xa], dx
    X86_AT(c, 0xd88b6u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), (c.r[2] & 0xFFFFu));
    // 0d88ba  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xd88bau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0d88bd  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd88bdu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0d88c0  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd88c0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d88c3  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xd88c3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0d88c6  and edi, edi
    X86_AT(c, 0xd88c6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d88c8  je 0xd88cf
    X86_AT(c, 0xd88c8u);
    if (x86_cc(c, 4)) { goto L_d88cf; }
    X86_TICK(c, 4);
    // 0d88ca  mov dword ptr [edi], eax
    X86_AT(c, 0xd88cau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0d88cc  mov dword ptr [edi + 4], edx
    X86_AT(c, 0xd88ccu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[2]);
L_d88cf:
    X86_TICK(c, 36);
    // 0d88cf  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd88cfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d88d2  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xd88d2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d88d5  pop edi
    X86_AT(c, 0xd88d5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d88d6  pop esi
    X86_AT(c, 0xd88d6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d88d7  pop ebx
    X86_AT(c, 0xd88d7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d88d8  leave 
    X86_AT(c, 0xd88d8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d88d9  ret 
    X86_AT(c, 0xd88d9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd8840u, "ran off the end of a function");
}
void f_000d88f0(X86Cpu& c) {
    X86_TICK(c, 45);
    // 0d88f0  imul eax, dword ptr [0xb43a8], 0x41c64e6d
    X86_AT(c, 0xd88f0u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xB43A8u))), 0x41C64E6Du, 4);
    // 0d88fa  add eax, 0x3039
    X86_AT(c, 0xd88fau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x3039u, 0, 4); }
    // 0d88ff  mov dword ptr [0xb43a8], eax
    X86_AT(c, 0xd88ffu);
    wr32((c.sbase[3] + (uint32_t)(0xB43A8u)), c.r[0]);
    // 0d8904  mov ax, word ptr [0xb43aa]
    X86_AT(c, 0xd8904u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xB43AAu))));
    // 0d890a  and ah, 0x7f
    X86_AT(c, 0xd890au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & 0x7Fu, 1)); }
    // 0d890d  movzx eax, ax
    X86_AT(c, 0xd890du);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 0d8910  ret 
    X86_AT(c, 0xd8910u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd88f0u, "ran off the end of a function");
}
void f_000d8918(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0d8918  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xd8918u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0d891c  mov dword ptr [0xb43a8], eax
    X86_AT(c, 0xd891cu);
    wr32((c.sbase[3] + (uint32_t)(0xB43A8u)), c.r[0]);
    // 0d8921  ret 
    X86_AT(c, 0xd8921u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd8918u, "ran off the end of a function");
}
void f_000d8938(X86Cpu& c) {
    X86_TICK(c, 46);
    // 0d8938  enter 0x70, 0
    X86_AT(c, 0xd8938u);
    x86_enter(c, 0x70u, 0x0u, 4);
    // 0d893c  push esi
    X86_AT(c, 0xd893cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d893d  push edi
    X86_AT(c, 0xd893du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d893e  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd893eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d8941  mov eax, dword ptr [0xb4458]
    X86_AT(c, 0xd8941u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4458u)));
    // 0d8946  mov dx, word ptr [0xb445c]
    X86_AT(c, 0xd8946u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0xB445Cu))));
    // 0d894d  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd894du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0d8950  mov word ptr [ebp - 8], dx
    X86_AT(c, 0xd8950u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[2] & 0xFFFFu));
    // 0d8954  mov edx, 0x7fffffff
    X86_AT(c, 0xd8954u);
    c.r[2] = 0x7FFFFFFFu;
    // 0d8959  sub eax, eax
    X86_AT(c, 0xd8959u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d895b  push edi
    X86_AT(c, 0xd895bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d895c  mov ecx, edx
    X86_AT(c, 0xd895cu);
    c.r[1] = c.r[2];
    // 0d895e  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xd895eu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0d8960  jne 0xd8965
    X86_AT(c, 0xd8960u);
    if (x86_cc(c, 5)) { goto L_d8965; }
    X86_TICK(c, 4);
    // 0d8962  inc ecx
    X86_AT(c, 0xd8962u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d8963  sub edx, ecx
    X86_AT(c, 0xd8963u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_d8965:
    X86_TICK(c, 13);
    // 0d8965  pop edi
    X86_AT(c, 0xd8965u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d8966  mov ax, 0x64
    X86_AT(c, 0xd8966u);
    s16(c, 0, 0x64u);
    // 0d896a  cmp ax, dx
    X86_AT(c, 0xd896au);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 0d896d  jb 0xd8970
    X86_AT(c, 0xd896du);
    if (x86_cc(c, 2)) { goto L_d8970; }
    X86_TICK(c, 3);
    // 0d896f  xchg edx, eax
    X86_AT(c, 0xd896fu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_d8970:
    X86_TICK(c, 10);
    // 0d8970  movzx esi, ax
    X86_AT(c, 0xd8970u);
    c.r[6] = (c.r[0] & 0xFFFFu);
    // 0d8973  jmp 0xd8a17
    X86_AT(c, 0xd8973u);
    goto L_d8a17;
L_d8978:
    X86_TICK(c, 64);
    // 0d8978  mov ecx, esi
    X86_AT(c, 0xd8978u);
    c.r[1] = c.r[6];
    // 0d897a  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0xd897au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 0d897d  push ds
    X86_AT(c, 0xd897du);
    push32(c, c.sreg[3]);
    // 0d897e  push es
    X86_AT(c, 0xd897eu);
    push32(c, c.sreg[0]);
    // 0d897f  lea edx, [ebp - 0x70]
    X86_AT(c, 0xd897fu);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFF90u);
    // 0d8982  push ds
    X86_AT(c, 0xd8982u);
    push32(c, c.sreg[3]);
    // 0d8983  pop es
    X86_AT(c, 0xd8983u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0d8984  pop ds
    X86_AT(c, 0xd8984u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0d8985  push esi
    X86_AT(c, 0xd8985u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8986  push edi
    X86_AT(c, 0xd8986u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d8987  mov esi, eax
    X86_AT(c, 0xd8987u);
    c.r[6] = c.r[0];
    // 0d8989  mov edi, edx
    X86_AT(c, 0xd8989u);
    c.r[7] = c.r[2];
    // 0d898b  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xd898bu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0d898d  pop edi
    X86_AT(c, 0xd898du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d898e  pop esi
    X86_AT(c, 0xd898eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d898f  pop ds
    X86_AT(c, 0xd898fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0d8990  push esi
    X86_AT(c, 0xd8990u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8991  push edi
    X86_AT(c, 0xd8991u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d8992  push edx
    X86_AT(c, 0xd8992u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d8993  call 0xdabd4
    X86_AT(c, 0xd8993u);
    push32(c, 0xd8998u); x86_call_known(c, 0xdabd4u, f_000dabd4); X86_RET(c, 0xd8998u);
    X86_TICK(c, 7);
    // 0d8998  and ax, ax
    X86_AT(c, 0xd8998u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 0d899b  jne 0xd89ed
    X86_AT(c, 0xd899bu);
    if (x86_cc(c, 5)) { goto L_d89ed; }
    X86_TICK(c, 24);
    // 0d899d  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0xd899du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 0d89a0  cmp byte ptr es:[eax + esi*1], 0x3d
    X86_AT(c, 0xd89a0u);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[0] + c.r[6]))), 0x3Du, 0, 1);
    // 0d89a5  push ds
    X86_AT(c, 0xd89a5u);
    push32(c, c.sreg[3]);
    // 0d89a6  pop es
    X86_AT(c, 0xd89a6u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0d89a7  jne 0xd89ed
    X86_AT(c, 0xd89a7u);
    if (x86_cc(c, 5)) { goto L_d89ed; }
    X86_TICK(c, 37);
    // 0d89a9  lea eax, [esi + 1]
    X86_AT(c, 0xd89a9u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0d89ac  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd89acu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d89af  mov edx, 0x7fffffff
    X86_AT(c, 0xd89afu);
    c.r[2] = 0x7FFFFFFFu;
    // 0d89b4  sub eax, eax
    X86_AT(c, 0xd89b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d89b6  les ecx, fword ptr [ebp - 0xc]
    X86_AT(c, 0xd89b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[1] = o; }
    // 0d89b9  push edi
    X86_AT(c, 0xd89b9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d89ba  mov edi, ecx
    X86_AT(c, 0xd89bau);
    c.r[7] = c.r[1];
    // 0d89bc  mov ecx, edx
    X86_AT(c, 0xd89bcu);
    c.r[1] = c.r[2];
    // 0d89be  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xd89beu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0d89c0  jne 0xd89c5
    X86_AT(c, 0xd89c0u);
    if (x86_cc(c, 5)) { goto L_d89c5; }
    X86_TICK(c, 4);
    // 0d89c2  inc ecx
    X86_AT(c, 0xd89c2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d89c3  sub edx, ecx
    X86_AT(c, 0xd89c3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_d89c5:
    X86_TICK(c, 15);
    // 0d89c5  pop edi
    X86_AT(c, 0xd89c5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d89c6  inc edx
    X86_AT(c, 0xd89c6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0d89c7  mov eax, 0x80
    X86_AT(c, 0xd89c7u);
    c.r[0] = 0x80u;
    // 0d89cc  cmp eax, edx
    X86_AT(c, 0xd89ccu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0d89ce  jb 0xd89d1
    X86_AT(c, 0xd89ceu);
    if (x86_cc(c, 2)) { goto L_d89d1; }
    X86_TICK(c, 3);
    // 0d89d0  xchg edx, eax
    X86_AT(c, 0xd89d0u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_d89d1:
    X86_TICK(c, 62);
    // 0d89d1  xchg ecx, eax
    X86_AT(c, 0xd89d1u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0d89d2  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0xd89d2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 0d89d5  push ds
    X86_AT(c, 0xd89d5u);
    push32(c, c.sreg[3]);
    // 0d89d6  push es
    X86_AT(c, 0xd89d6u);
    push32(c, c.sreg[0]);
    // 0d89d7  mov edx, 0xb43ac
    X86_AT(c, 0xd89d7u);
    c.r[2] = 0xB43ACu;
    // 0d89dc  push ds
    X86_AT(c, 0xd89dcu);
    push32(c, c.sreg[3]);
    // 0d89dd  pop es
    X86_AT(c, 0xd89ddu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0d89de  pop ds
    X86_AT(c, 0xd89deu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0d89df  push esi
    X86_AT(c, 0xd89dfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d89e0  push edi
    X86_AT(c, 0xd89e0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d89e1  mov esi, eax
    X86_AT(c, 0xd89e1u);
    c.r[6] = c.r[0];
    // 0d89e3  mov edi, edx
    X86_AT(c, 0xd89e3u);
    c.r[7] = c.r[2];
    // 0d89e5  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xd89e5u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0d89e7  pop edi
    X86_AT(c, 0xd89e7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d89e8  pop esi
    X86_AT(c, 0xd89e8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d89e9  pop ds
    X86_AT(c, 0xd89e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0d89ea  xchg edx, eax
    X86_AT(c, 0xd89eau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0d89eb  jmp 0xd8a2b
    X86_AT(c, 0xd89ebu);
    goto L_d8a2b;
L_d89ed:
    X86_TICK(c, 28);
    // 0d89ed  mov edx, 0x7fffffff
    X86_AT(c, 0xd89edu);
    c.r[2] = 0x7FFFFFFFu;
    // 0d89f2  sub eax, eax
    X86_AT(c, 0xd89f2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d89f4  les ecx, fword ptr [ebp - 0xc]
    X86_AT(c, 0xd89f4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[1] = o; }
    // 0d89f7  push edi
    X86_AT(c, 0xd89f7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d89f8  mov edi, ecx
    X86_AT(c, 0xd89f8u);
    c.r[7] = c.r[1];
    // 0d89fa  mov ecx, edx
    X86_AT(c, 0xd89fau);
    c.r[1] = c.r[2];
    // 0d89fc  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xd89fcu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0d89fe  jne 0xd8a03
    X86_AT(c, 0xd89feu);
    if (x86_cc(c, 5)) { goto L_d8a03; }
    X86_TICK(c, 4);
    // 0d8a00  inc ecx
    X86_AT(c, 0xd8a00u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d8a01  sub edx, ecx
    X86_AT(c, 0xd8a01u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_d8a03:
    X86_TICK(c, 24);
    // 0d8a03  pop edi
    X86_AT(c, 0xd8a03u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d8a04  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0xd8a04u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 0d8a07  lea eax, es:[eax + edx*1 + 1]
    X86_AT(c, 0xd8a07u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0x1u);
    // 0d8a0c  mov edx, es
    X86_AT(c, 0xd8a0cu);
    c.r[2] = (uint32_t)c.sreg[0];
    // 0d8a0e  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd8a0eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0d8a11  mov word ptr [ebp - 8], dx
    X86_AT(c, 0xd8a11u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[2] & 0xFFFFu));
    // 0d8a15  push ds
    X86_AT(c, 0xd8a15u);
    push32(c, c.sreg[3]);
    // 0d8a16  pop es
    X86_AT(c, 0xd8a16u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
L_d8a17:
    X86_TICK(c, 24);
    // 0d8a17  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0xd8a17u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 0d8a1a  cmp byte ptr es:[eax], 0
    X86_AT(c, 0xd8a1au);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 0d8a1e  push ds
    X86_AT(c, 0xd8a1eu);
    push32(c, c.sreg[3]);
    // 0d8a1f  pop es
    X86_AT(c, 0xd8a1fu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0d8a20  jne 0xd8978
    X86_AT(c, 0xd8a20u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd8978u); goto L_d8978; }
    X86_TICK(c, 4);
    // 0d8a26  sub eax, eax
    X86_AT(c, 0xd8a26u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d8a28  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd8a28u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_d8a2b:
    X86_TICK(c, 24);
    // 0d8a2b  pop edi
    X86_AT(c, 0xd8a2bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d8a2c  pop esi
    X86_AT(c, 0xd8a2cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d8a2d  leave 
    X86_AT(c, 0xd8a2du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d8a2e  ret 
    X86_AT(c, 0xd8a2eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd8938u, "ran off the end of a function");
}
void f_000d8a30(X86Cpu& c) {
    X86_TICK(c, 72);
    // 0d8a30  mov edx, esi
    X86_AT(c, 0xd8a30u);
    c.r[2] = c.r[6];
    // 0d8a32  push edi
    X86_AT(c, 0xd8a32u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d8a33  sub eax, eax
    X86_AT(c, 0xd8a33u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d8a35  mov ecx, 0xffffffff
    X86_AT(c, 0xd8a35u);
    c.r[1] = 0xFFFFFFFFu;
    // 0d8a3a  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0xd8a3au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0d8a3e  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xd8a3eu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0d8a40  not ecx
    X86_AT(c, 0xd8a40u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0d8a42  mov esi, dword ptr [esp + 0xc]
    X86_AT(c, 0xd8a42u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0d8a46  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0xd8a46u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0d8a4a  mov eax, ecx
    X86_AT(c, 0xd8a4au);
    c.r[0] = c.r[1];
    // 0d8a4c  shr ecx, 2
    X86_AT(c, 0xd8a4cu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0d8a4f  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xd8a4fu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0d8a51  mov ecx, eax
    X86_AT(c, 0xd8a51u);
    c.r[1] = c.r[0];
    // 0d8a53  and ecx, 3
    X86_AT(c, 0xd8a53u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 0d8a59  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xd8a59u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0d8a5b  mov eax, dword ptr [esp + 8]
    X86_AT(c, 0xd8a5bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0d8a5f  mov esi, edx
    X86_AT(c, 0xd8a5fu);
    c.r[6] = c.r[2];
    // 0d8a61  pop edi
    X86_AT(c, 0xd8a61u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d8a62  ret 
    X86_AT(c, 0xd8a62u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd8a30u, "ran off the end of a function");
}
void f_000d8a74(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0d8a74  push ebp
    X86_AT(c, 0xd8a74u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d8a75  mov ebp, esp
    X86_AT(c, 0xd8a75u);
    c.r[5] = c.r[4];
    // 0d8a77  push dword ptr [ebp + 8]
    X86_AT(c, 0xd8a77u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d8a7a  call 0xda874
    X86_AT(c, 0xd8a7au);
    push32(c, 0xd8a7fu); x86_call_known(c, 0xda874u, f_000da874); X86_RET(c, 0xd8a7fu);
    X86_TICK(c, 16);
    // 0d8a7f  leave 
    X86_AT(c, 0xd8a7fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d8a80  ret 4
    X86_AT(c, 0xd8a80u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xd8a74u, "ran off the end of a function");
}
void f_000d8ab0(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0d8ab0  jmp 0xd8b08
    X86_AT(c, 0xd8ab0u);
    goto L_d8b08;
L_d8ab2:
    X86_TICK(c, 7);
    // 0d8ab2  call 0xc2168
    X86_AT(c, 0xd8ab2u);
    push32(c, 0xd8ab7u); x86_call_known(c, 0xc2168u, f_000c2168); X86_RET(c, 0xd8ab7u);
L_d8ab7:
    X86_TICK(c, 9);
    // 0d8ab7  push eax
    X86_AT(c, 0xd8ab7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d8ab8  call 0xda874
    X86_AT(c, 0xd8ab8u);
    push32(c, 0xd8abdu); x86_call_known(c, 0xda874u, f_000da874); X86_RET(c, 0xd8abdu);
    X86_TICK(c, 39);
    // 0d8abd  xor eax, eax
    X86_AT(c, 0xd8abdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0d8abf  int 0x21
    X86_AT(c, 0xd8abfu);
    x86_int(c, 0x21, 0xd8ac1u);
    X86_TICK(c, 10);
    // 0d8ac1  ret 
    X86_AT(c, 0xd8ac1u);
    c.eip = pop32(c); return;
L_d8b08:
    X86_TICK(c, 7);
    // 0d8b08  cmp al, 0xcd
    X86_AT(c, 0xd8b08u);
    (void)x86_sub(c, g8(c, 0), 0xCDu, 0, 1);
    // 0d8b0a  jne 0xd8b27
    X86_AT(c, 0xd8b0au);
    if (x86_cc(c, 5)) { goto L_d8b27; }
    X86_TICK(c, 7);
    // 0d8b0c  cmp ah, 0xab
    X86_AT(c, 0xd8b0cu);
    (void)x86_sub(c, g8(c, 4), 0xABu, 0, 1);
    // 0d8b0f  jne 0xd8b27
    X86_AT(c, 0xd8b0fu);
    if (x86_cc(c, 5)) { goto L_d8b27; }
    X86_TICK(c, 7);
    // 0d8b11  cmp eax, 0xabcdabcd
    X86_AT(c, 0xd8b11u);
    (void)x86_sub(c, c.r[0], 0xABCDABCDu, 0, 4);
    // 0d8b16  jne 0xd8b27
    X86_AT(c, 0xd8b16u);
    if (x86_cc(c, 5)) { goto L_d8b27; }
    X86_TICK(c, 11);
    // 0d8b18  mov byte ptr [0xb446e], 1
    X86_AT(c, 0xd8b18u);
    wr8((c.sbase[3] + (uint32_t)(0xB446Eu)), 0x1u);
    // 0d8b1f  mov dword ptr [0xb4444], edx
    X86_AT(c, 0xd8b1fu);
    wr32((c.sbase[3] + (uint32_t)(0xB4444u)), c.r[2]);
    // 0d8b25  jmp 0xd8b2e
    X86_AT(c, 0xd8b25u);
    goto L_d8b2e;
L_d8b27:
    X86_TICK(c, 2);
    // 0d8b27  mov byte ptr [0xb446e], 2
    X86_AT(c, 0xd8b27u);
    wr8((c.sbase[3] + (uint32_t)(0xB446Eu)), 0x2u);
L_d8b2e:
    X86_TICK(c, 34);
    // 0d8b2e  sub ebp, ebp
    X86_AT(c, 0xd8b2eu);
    { uint32_t v = c.r[5]; c.r[5] = x86_sub(c, v, c.r[5], 0, 4); }
    // 0d8b30  and esp, 0xfffffffc
    X86_AT(c, 0xd8b30u);
    { uint32_t v = c.r[4]; c.r[4] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0d8b33  mov dword ptr [0xa4924], 0x200
    X86_AT(c, 0xd8b33u);
    wr32((c.sbase[3] + (uint32_t)(0xA4924u)), 0x200u);
    // 0d8b3d  mov dword ptr [0xa4928], 0x100
    X86_AT(c, 0xd8b3du);
    wr32((c.sbase[3] + (uint32_t)(0xA4928u)), 0x100u);
    // 0d8b47  add dword ptr [0xa4924], 0xdca78
    X86_AT(c, 0xd8b47u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xA4924u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xDCA78u, 0, 4)); }
    // 0d8b51  add dword ptr [0xa4928], 0xdca78
    X86_AT(c, 0xd8b51u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xA4928u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xDCA78u, 0, 4)); }
    // 0d8b5b  cmp byte ptr [0xb446e], 1
    X86_AT(c, 0xd8b5bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB446Eu))), 0x1u, 0, 1);
    // 0d8b62  je 0xd8b84
    X86_AT(c, 0xd8b62u);
    if (x86_cc(c, 4)) { goto L_d8b84; }
    X86_TICK(c, 23);
    // 0d8b64  mov dword ptr [0xb443c], 0
    X86_AT(c, 0xd8b64u);
    wr32((c.sbase[3] + (uint32_t)(0xB443Cu)), 0x0u);
    // 0d8b6e  lea eax, [esp + 0x20]
    X86_AT(c, 0xd8b6eu);
    c.r[0] = (uint32_t)(c.r[4] + 0x20u);
    // 0d8b72  mov dword ptr [0xb4438], esp
    X86_AT(c, 0xd8b72u);
    wr32((c.sbase[3] + (uint32_t)(0xB4438u)), c.r[4]);
    // 0d8b78  mov eax, ds
    X86_AT(c, 0xd8b78u);
    c.r[0] = (uint32_t)c.sreg[3];
    // 0d8b7a  lsl eax, eax
    X86_AT(c, 0xd8b7au);
    { uint32_t v; if (x86_lsl(c, (c.r[0] & 0xFFFFu), v)) { c.r[0] = v; c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 0d8b7d  mov dword ptr [0xb4440], eax
    X86_AT(c, 0xd8b7du);
    wr32((c.sbase[3] + (uint32_t)(0xB4440u)), c.r[0]);
    // 0d8b82  jmp 0xd8bc4
    X86_AT(c, 0xd8b82u);
    goto L_d8bc4;
L_d8b84:
    X86_TICK(c, 84);
    // 0d8b84  mov eax, esp
    X86_AT(c, 0xd8b84u);
    c.r[0] = c.r[4];
    // 0d8b86  mov ecx, dword ptr [edx + 0x74]
    X86_AT(c, 0xd8b86u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x74u)));
    // 0d8b89  shl ecx, 0xa
    X86_AT(c, 0xd8b89u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[1] = r; }
    // 0d8b8c  sub eax, ecx
    X86_AT(c, 0xd8b8cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0d8b8e  mov dword ptr [0xb443c], eax
    X86_AT(c, 0xd8b8eu);
    wr32((c.sbase[3] + (uint32_t)(0xB443Cu)), c.r[0]);
    // 0d8b93  mov eax, dword ptr [edx + 0x50]
    X86_AT(c, 0xd8b93u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x50u)));
    // 0d8b96  mov dword ptr [0xb4438], eax
    X86_AT(c, 0xd8b96u);
    wr32((c.sbase[3] + (uint32_t)(0xB4438u)), c.r[0]);
    // 0d8b9b  mov ecx, dword ptr [edx + 0x3c]
    X86_AT(c, 0xd8b9bu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x3Cu)));
    // 0d8b9e  shl ecx, 0xa
    X86_AT(c, 0xd8b9eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[1] = r; }
    // 0d8ba1  add eax, ecx
    X86_AT(c, 0xd8ba1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[1], 0, 4); }
    // 0d8ba3  mov dword ptr [0xb4440], eax
    X86_AT(c, 0xd8ba3u);
    wr32((c.sbase[3] + (uint32_t)(0xB4440u)), c.r[0]);
    // 0d8ba8  mov ebx, dword ptr [edx + 0x54]
    X86_AT(c, 0xd8ba8u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x54u)));
    // 0d8bab  sub ebx, dword ptr [edx + 0x10]
    X86_AT(c, 0xd8babu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u))), 0, 4); }
    // 0d8bae  shr ebx, 4
    X86_AT(c, 0xd8baeu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0d8bb1  inc ebx
    X86_AT(c, 0xd8bb1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0d8bb2  mov ah, 0x4a
    X86_AT(c, 0xd8bb2u);
    s8(c, 4, 0x4Au);
    // 0d8bb4  int 0x21
    X86_AT(c, 0xd8bb4u);
    x86_int(c, 0x21, 0xd8bb6u);
    X86_TICK(c, 12);
    // 0d8bb6  test byte ptr [edx + 0xb7], 1
    X86_AT(c, 0xd8bb6u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB7u))) & 0x1u, 1);
    // 0d8bbd  setne byte ptr [0xb4465]
    X86_AT(c, 0xd8bbdu);
    wr8((c.sbase[3] + (uint32_t)(0xB4465u)), x86_cc(c, 5) ? 1u : 0u);
L_d8bc4:
    X86_TICK(c, 11);
    // 0d8bc4  esc 0x1c, bl
    X86_AT(c, 0xd8bc4u);
    // 0d8bc6  xor eax, eax
    X86_AT(c, 0xd8bc6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0d8bc8  mov word ptr [0xb4461], ax
    X86_AT(c, 0xd8bc8u);
    wr16((c.sbase[3] + (uint32_t)(0xB4461u)), (c.r[0] & 0xFFFFu));
    // 0d8bce  sub ecx, ecx
    X86_AT(c, 0xd8bceu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0d8bd0  mov cl, 0xf
    X86_AT(c, 0xd8bd0u);
    s8(c, 1, 0xFu);
L_d8bd2:
    X86_TICK(c, 11);
    // 0d8bd2  loop 0xd8bd2
    X86_AT(c, 0xd8bd2u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xd8bd2u); goto L_d8bd2; }
    X86_TICK(c, 5);
    // 0d8bd4  esc 0xf, byte ptr [0xb4461]
    X86_AT(c, 0xd8bd4u);
    // 0d8bda  mov cl, 0xf
    X86_AT(c, 0xd8bdau);
    s8(c, 1, 0xFu);
L_d8bdc:
    X86_TICK(c, 11);
    // 0d8bdc  loop 0xd8bdc
    X86_AT(c, 0xd8bdcu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xd8bdcu); goto L_d8bdc; }
    X86_TICK(c, 19);
    // 0d8bde  and word ptr [0xb4461], 0xf3f
    X86_AT(c, 0xd8bdeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4461u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xF3Fu, 2)); }
    // 0d8be7  cmp word ptr [0xb4461], 0x33f
    X86_AT(c, 0xd8be7u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xB4461u))), 0x33Fu, 0, 2);
    // 0d8bf0  jne 0xd8c30
    X86_AT(c, 0xd8bf0u);
    if (x86_cc(c, 5)) { goto L_d8c30; }
    X86_TICK(c, 5);
    // 0d8bf2  esc 0x2f, byte ptr [0xb4461]
    X86_AT(c, 0xd8bf2u);
    // 0d8bf8  mov cl, 0xf
    X86_AT(c, 0xd8bf8u);
    s8(c, 1, 0xFu);
L_d8bfa:
    X86_TICK(c, 11);
    // 0d8bfa  loop 0xd8bfa
    X86_AT(c, 0xd8bfau);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xd8bfau); goto L_d8bfa; }
    X86_TICK(c, 12);
    // 0d8bfc  test word ptr [0xb4461], 0xb8bf
    X86_AT(c, 0xd8bfcu);
    (void)x86_logic(c, rd16((c.sbase[3] + (uint32_t)(0xB4461u))) & 0xB8BFu, 2);
    // 0d8c05  jne 0xd8c30
    X86_AT(c, 0xd8c05u);
    if (x86_cc(c, 5)) { goto L_d8c30; }
    X86_TICK(c, 51);
    // 0d8c07  wait 
    X86_AT(c, 0xd8c07u);
    // 0d8c08  esc 0xd, byte ptr cs:[0xd8ea4]
    X86_AT(c, 0xd8c08u);
    // 0d8c0f  mov byte ptr [0xb445f], 1
    X86_AT(c, 0xd8c0fu);
    wr8((c.sbase[3] + (uint32_t)(0xB445Fu)), 0x1u);
    // 0d8c16  esc 0xd, al
    X86_AT(c, 0xd8c16u);
    // 0d8c18  esc 0xd, dh
    X86_AT(c, 0xd8c18u);
    // 0d8c1a  esc 0x37, cl
    X86_AT(c, 0xd8c1au);
    // 0d8c1c  esc 8, al
    X86_AT(c, 0xd8c1cu);
    // 0d8c1e  esc 0xc, al
    X86_AT(c, 0xd8c1eu);
    // 0d8c20  esc 0x33, cl
    X86_AT(c, 0xd8c20u);
    // 0d8c22  wait 
    X86_AT(c, 0xd8c22u);
    // 0d8c23  esc 0x3c, al
    X86_AT(c, 0xd8c23u);
    // 0d8c25  wait 
    X86_AT(c, 0xd8c25u);
    // 0d8c26  sahf 
    X86_AT(c, 0xd8c26u);
    c.fl = (c.fl & ~0xD5u) | (g8(c, 4) & 0xD5u);
    // 0d8c27  je 0xd8c30
    X86_AT(c, 0xd8c27u);
    if (x86_cc(c, 4)) { goto L_d8c30; }
    X86_TICK(c, 2);
    // 0d8c29  mov byte ptr [0xb4463], 1
    X86_AT(c, 0xd8c29u);
    wr8((c.sbase[3] + (uint32_t)(0xB4463u)), 0x1u);
L_d8c30:
    X86_TICK(c, 28);
    // 0d8c30  push 0x3ff0000
    X86_AT(c, 0xd8c30u);
    { uint32_t v = 0x3FF0000u; push32(c, v); }
    // 0d8c35  push 0x30000000
    X86_AT(c, 0xd8c35u);
    { uint32_t v = 0x30000000u; push32(c, v); }
    // 0d8c3a  push 0xa0000000
    X86_AT(c, 0xd8c3au);
    { uint32_t v = 0xA0000000u; push32(c, v); }
    // 0d8c3f  push 0x64000000
    X86_AT(c, 0xd8c3fu);
    { uint32_t v = 0x64000000u; push32(c, v); }
    // 0d8c44  push 0x16000000
    X86_AT(c, 0xd8c44u);
    { uint32_t v = 0x16000000u; push32(c, v); }
    // 0d8c49  push 0x98000000
    X86_AT(c, 0xd8c49u);
    { uint32_t v = 0x98000000u; push32(c, v); }
    // 0d8c4e  push 0x56000000
    X86_AT(c, 0xd8c4eu);
    { uint32_t v = 0x56000000u; push32(c, v); }
    // 0d8c53  push 0xb8000000
    X86_AT(c, 0xd8c53u);
    { uint32_t v = 0xB8000000u; push32(c, v); }
    // 0d8c58  cmp byte ptr [0xb446e], 1
    X86_AT(c, 0xd8c58u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB446Eu))), 0x1u, 0, 1);
    // 0d8c5f  je 0xd8cb8
    X86_AT(c, 0xd8c5fu);
    if (x86_cc(c, 4)) { goto L_d8cb8; }
    X86_TICK(c, 11);
    // 0d8c61  mov eax, fs
    X86_AT(c, 0xd8c61u);
    c.r[0] = (uint32_t)c.sreg[4];
    // 0d8c63  mov ebx, ds
    X86_AT(c, 0xd8c63u);
    c.r[3] = (uint32_t)c.sreg[3];
    // 0d8c65  cmp ax, bx
    X86_AT(c, 0xd8c65u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 0d8c68  je 0xd8d09
    X86_AT(c, 0xd8c68u);
    if (x86_cc(c, 4)) { goto L_d8d09; }
    X86_TICK(c, 18);
    // 0d8c6e  mov word ptr [0xb4465], 1
    X86_AT(c, 0xd8c6eu);
    wr16((c.sbase[3] + (uint32_t)(0xB4465u)), 0x1u);
    // 0d8c77  pop dword ptr fs:[0xc000]
    X86_AT(c, 0xd8c77u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 0d8c7d  mov eax, dword ptr fs:[0xc400]
    X86_AT(c, 0xd8c7du);
    c.r[0] = rd32((c.sbase[4] + ((0xC400u) & 0xFFFFu)));
    // 0d8c82  and ah, 0x80
    X86_AT(c, 0xd8c82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & 0x80u, 1)); }
    // 0d8c85  jne 0xd8c91
    X86_AT(c, 0xd8c85u);
    if (x86_cc(c, 5)) { goto L_d8c91; }
    X86_TICK(c, 20);
    // 0d8c87  pop eax
    X86_AT(c, 0xd8c87u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0d8c88  pop eax
    X86_AT(c, 0xd8c88u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0d8c89  pop dword ptr fs:[0xc000]
    X86_AT(c, 0xd8c89u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 0d8c8f  jmp 0xd8c9e
    X86_AT(c, 0xd8c8fu);
    goto L_d8c9e;
L_d8c91:
    X86_TICK(c, 14);
    // 0d8c91  pop dword ptr fs:[0xc000]
    X86_AT(c, 0xd8c91u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 0d8c97  pop dword ptr fs:[0xc000]
    X86_AT(c, 0xd8c97u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 0d8c9d  pop eax
    X86_AT(c, 0xd8c9du);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_d8c9e:
    X86_TICK(c, 27);
    // 0d8c9e  pop dword ptr fs:[0xc000]
    X86_AT(c, 0xd8c9eu);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 0d8ca4  pop dword ptr fs:[0xc000]
    X86_AT(c, 0xd8ca4u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 0d8caa  pop dword ptr fs:[0xc000]
    X86_AT(c, 0xd8caau);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 0d8cb0  pop dword ptr fs:[0xc000]
    X86_AT(c, 0xd8cb0u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 0d8cb6  jmp 0xd8d0c
    X86_AT(c, 0xd8cb6u);
    goto L_d8d0c;
L_d8cb8:
    X86_TICK(c, 12);
    // 0d8cb8  cmp byte ptr [0xb4465], 1
    X86_AT(c, 0xd8cb8u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB4465u))), 0x1u, 0, 1);
    // 0d8cbf  jne 0xd8d09
    X86_AT(c, 0xd8cbfu);
    if (x86_cc(c, 5)) { goto L_d8d09; }
    X86_TICK(c, 17);
    // 0d8cc1  pop dword ptr [0xffc0c000]
    X86_AT(c, 0xd8cc1u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0d8cc7  pop dword ptr [0xffc0c400]
    X86_AT(c, 0xd8cc7u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C400u)), v); }
    // 0d8ccd  and ah, 0x80
    X86_AT(c, 0xd8ccdu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & 0x80u, 1)); }
    // 0d8cd0  jne 0xd8cdc
    X86_AT(c, 0xd8cd0u);
    if (x86_cc(c, 5)) { goto L_d8cdc; }
    X86_TICK(c, 20);
    // 0d8cd2  pop eax
    X86_AT(c, 0xd8cd2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0d8cd3  pop eax
    X86_AT(c, 0xd8cd3u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0d8cd4  pop dword ptr [0xffc0c000]
    X86_AT(c, 0xd8cd4u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0d8cda  jmp 0xd8ce9
    X86_AT(c, 0xd8cdau);
    goto L_d8ce9;
L_d8cdc:
    X86_TICK(c, 14);
    // 0d8cdc  pop dword ptr [0xffc0c000]
    X86_AT(c, 0xd8cdcu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0d8ce2  pop dword ptr [0xffc0c000]
    X86_AT(c, 0xd8ce2u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0d8ce8  pop eax
    X86_AT(c, 0xd8ce8u);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_d8ce9:
    X86_TICK(c, 32);
    // 0d8ce9  pop dword ptr [0xffc0c000]
    X86_AT(c, 0xd8ce9u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0d8cef  pop dword ptr [0xffc0c000]
    X86_AT(c, 0xd8cefu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0d8cf5  pop dword ptr [0xffc0c000]
    X86_AT(c, 0xd8cf5u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0d8cfb  pop dword ptr [0xffc0c000]
    X86_AT(c, 0xd8cfbu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0d8d01  pop dword ptr [0xffc0c000]
    X86_AT(c, 0xd8d01u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0d8d07  jmp 0xd8d0c
    X86_AT(c, 0xd8d07u);
    goto L_d8d0c;
L_d8d09:
    X86_TICK(c, 2);
    // 0d8d09  add esp, 0x20
    X86_AT(c, 0xd8d09u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_d8d0c:
    X86_TICK(c, 14);
    // 0d8d0c  cld 
    X86_AT(c, 0xd8d0cu);
    c.fl &= ~X86_DF;
    // 0d8d0d  cmp byte ptr [0xb446e], 2
    X86_AT(c, 0xd8d0du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB446Eu))), 0x2u, 0, 1);
    // 0d8d14  je 0xd8d56
    X86_AT(c, 0xd8d14u);
    if (x86_cc(c, 4)) { goto L_d8d56; }
    X86_TICK(c, 42);
    // 0d8d16  mov edi, dword ptr [edx + 0x10]
    X86_AT(c, 0xd8d16u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u)));
    // 0d8d19  mov word ptr [0xb444c], ds
    X86_AT(c, 0xd8d19u);
    wr16((c.sbase[3] + (uint32_t)(0xB444Cu)), (uint32_t)c.sreg[3]);
    // 0d8d1f  mov dword ptr [0xb4432], edi
    X86_AT(c, 0xd8d1fu);
    wr32((c.sbase[3] + (uint32_t)(0xB4432u)), c.r[7]);
    // 0d8d25  mov word ptr [0xb4436], ds
    X86_AT(c, 0xd8d25u);
    wr16((c.sbase[3] + (uint32_t)(0xB4436u)), (uint32_t)c.sreg[3]);
    // 0d8d2b  lea eax, [edi + 0x80]
    X86_AT(c, 0xd8d2bu);
    c.r[0] = (uint32_t)(c.r[7] + 0x80u);
    // 0d8d31  xor ebx, ebx
    X86_AT(c, 0xd8d31u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
    // 0d8d33  mov bl, byte ptr [eax]
    X86_AT(c, 0xd8d33u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0d8d35  mov dword ptr [0xb4454], ebx
    X86_AT(c, 0xd8d35u);
    wr32((c.sbase[3] + (uint32_t)(0xB4454u)), c.r[3]);
    // 0d8d3b  inc eax
    X86_AT(c, 0xd8d3bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d8d3c  mov dword ptr [0xb4448], eax
    X86_AT(c, 0xd8d3cu);
    wr32((c.sbase[3] + (uint32_t)(0xB4448u)), c.r[0]);
    // 0d8d41  mov bx, word ptr [edi + 0x2c]
    X86_AT(c, 0xd8d41u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu))));
    // 0d8d45  shl ebx, 4
    X86_AT(c, 0xd8d45u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0d8d48  mov dword ptr [0xb4458], ebx
    X86_AT(c, 0xd8d48u);
    wr32((c.sbase[3] + (uint32_t)(0xB4458u)), c.r[3]);
    // 0d8d4e  mov word ptr [0xb445c], ds
    X86_AT(c, 0xd8d4eu);
    wr16((c.sbase[3] + (uint32_t)(0xB445Cu)), (uint32_t)c.sreg[3]);
    // 0d8d54  jmp 0xd8da8
    X86_AT(c, 0xd8d54u);
    goto L_d8da8;
L_d8d56:
    X86_TICK(c, 81);
    // 0d8d56  mov ax, 0x24
    X86_AT(c, 0xd8d56u);
    s16(c, 0, 0x24u);
    // 0d8d5a  mov ebx, cs
    X86_AT(c, 0xd8d5au);
    c.r[3] = (uint32_t)c.sreg[1];
    // 0d8d5c  arpl ax, bx
    X86_AT(c, 0xd8d5cu);
    { uint32_t d = (c.r[0] & 0xFFFFu), s = (c.r[3] & 0xFFFFu); if ((d & 3) < (s & 3)) { s16(c, 0, (d & ~3u) | (s & 3)); c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 0d8d5e  mov es, eax
    X86_AT(c, 0xd8d5eu);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0d8d60  mov word ptr [0xb4436], ax
    X86_AT(c, 0xd8d60u);
    wr16((c.sbase[3] + (uint32_t)(0xB4436u)), (c.r[0] & 0xFFFFu));
    // 0d8d66  mov word ptr [0xb4436], ax
    X86_AT(c, 0xd8d66u);
    wr16((c.sbase[3] + (uint32_t)(0xB4436u)), (c.r[0] & 0xFFFFu));
    // 0d8d6c  mov ax, 0x2c
    X86_AT(c, 0xd8d6cu);
    s16(c, 0, 0x2Cu);
    // 0d8d70  arpl ax, bx
    X86_AT(c, 0xd8d70u);
    { uint32_t d = (c.r[0] & 0xFFFFu), s = (c.r[3] & 0xFFFFu); if ((d & 3) < (s & 3)) { s16(c, 0, (d & ~3u) | (s & 3)); c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 0d8d72  mov word ptr [0xb445c], ax
    X86_AT(c, 0xd8d72u);
    wr16((c.sbase[3] + (uint32_t)(0xB445Cu)), (c.r[0] & 0xFFFFu));
    // 0d8d78  xor eax, eax
    X86_AT(c, 0xd8d78u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0d8d7a  mov al, byte ptr es:[0x80]
    X86_AT(c, 0xd8d7au);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(0x80u))));
    // 0d8d80  mov dword ptr [0xb4454], eax
    X86_AT(c, 0xd8d80u);
    wr32((c.sbase[3] + (uint32_t)(0xB4454u)), c.r[0]);
    // 0d8d85  add eax, 3
    X86_AT(c, 0xd8d85u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x3u, 0, 4); }
    // 0d8d8a  and al, 0xfc
    X86_AT(c, 0xd8d8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFCu, 1)); }
    // 0d8d8c  sub esp, eax
    X86_AT(c, 0xd8d8cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d8d8e  mov edi, esp
    X86_AT(c, 0xd8d8eu);
    c.r[7] = c.r[4];
    // 0d8d90  mov dword ptr [0xb4448], edi
    X86_AT(c, 0xd8d90u);
    wr32((c.sbase[3] + (uint32_t)(0xB4448u)), c.r[7]);
    // 0d8d96  push edx
    X86_AT(c, 0xd8d96u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d8d97  mov ecx, eax
    X86_AT(c, 0xd8d97u);
    c.r[1] = c.r[0];
    // 0d8d99  push ds
    X86_AT(c, 0xd8d99u);
    push32(c, c.sreg[3]);
    // 0d8d9a  push es
    X86_AT(c, 0xd8d9au);
    push32(c, c.sreg[0]);
    // 0d8d9b  pop ds
    X86_AT(c, 0xd8d9bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0d8d9c  push es
    X86_AT(c, 0xd8d9cu);
    push32(c, c.sreg[0]);
    // 0d8d9d  push ss
    X86_AT(c, 0xd8d9du);
    push32(c, c.sreg[2]);
    // 0d8d9e  pop es
    X86_AT(c, 0xd8d9eu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0d8d9f  mov esi, 0x81
    X86_AT(c, 0xd8d9fu);
    c.r[6] = 0x81u;
    // 0d8da4  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xd8da4u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0d8da6  pop es
    X86_AT(c, 0xd8da6u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0d8da7  pop ds
    X86_AT(c, 0xd8da7u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_d8da8:
    X86_TICK(c, 41);
    // 0d8da8  sub eax, eax
    X86_AT(c, 0xd8da8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d8daa  mov ah, 0x30
    X86_AT(c, 0xd8daau);
    s8(c, 4, 0x30u);
    // 0d8dac  int 0x21
    X86_AT(c, 0xd8dacu);
    x86_int(c, 0x21, 0xd8daeu);
    X86_TICK(c, 14);
    // 0d8dae  mov word ptr [0xb446c], ax
    X86_AT(c, 0xd8daeu);
    wr16((c.sbase[3] + (uint32_t)(0xB446Cu)), (c.r[0] & 0xFFFFu));
    // 0d8db4  cmp byte ptr [0xb446e], 1
    X86_AT(c, 0xd8db4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB446Eu))), 0x1u, 0, 1);
    // 0d8dbb  je 0xd8e05
    X86_AT(c, 0xd8dbbu);
    if (x86_cc(c, 4)) { goto L_d8e05; }
    X86_TICK(c, 10);
    // 0d8dbd  shr eax, 0x10
    X86_AT(c, 0xd8dbdu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0d8dc0  cmp ax, 0x4458
    X86_AT(c, 0xd8dc0u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x4458u, 0, 2);
    // 0d8dc4  jne 0xd8dc8
    X86_AT(c, 0xd8dc4u);
    if (x86_cc(c, 5)) { goto L_d8dc8; }
    X86_TICK(c, 7);
    // 0d8dc6  jmp 0xd8e05
    X86_AT(c, 0xd8dc6u);
    goto L_d8e05;
L_d8dc8:
    X86_TICK(c, 13);
    // 0d8dc8  mov byte ptr [0xb446e], 3
    X86_AT(c, 0xd8dc8u);
    wr8((c.sbase[3] + (uint32_t)(0xB446Eu)), 0x3u);
    // 0d8dcf  mov ebx, dword ptr [0xb4438]
    X86_AT(c, 0xd8dcfu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xB4438u)));
    // 0d8dd5  jmp 0xd8e05
    X86_AT(c, 0xd8dd5u);
    goto L_d8e05;
L_d8e05:
    X86_TICK(c, 8);
    // 0d8e05  les edi, fword ptr [0xb4458]
    X86_AT(c, 0xd8e05u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4458u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 0d8e0b  xor eax, eax
    X86_AT(c, 0xd8e0bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_d8e0d:
    X86_TICK(c, 12);
    // 0d8e0d  cmp dword ptr es:[edi], 0x37384f4e
    X86_AT(c, 0xd8e0du);
    (void)x86_sub(c, rd32((c.sbase[0] + (uint32_t)(c.r[7]))), 0x37384F4Eu, 0, 4);
    // 0d8e14  jne 0xd8e60
    X86_AT(c, 0xd8e14u);
    if (x86_cc(c, 5)) { goto L_d8e60; }
    X86_TICK(c, 12);
    // 0d8e16  cmp byte ptr es:[edi + 4], 0x3d
    X86_AT(c, 0xd8e16u);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u))), 0x3Du, 0, 1);
    // 0d8e1b  jne 0xd8e60
    X86_AT(c, 0xd8e1bu);
    if (x86_cc(c, 5)) { goto L_d8e60; }
    X86_TICK(c, 16);
    // 0d8e1d  push eax
    X86_AT(c, 0xd8e1du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d8e1e  push edi
    X86_AT(c, 0xd8e1eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d8e1f  cmp word ptr [0xb445f], 0
    X86_AT(c, 0xd8e1fu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xB445Fu))), 0x0u, 0, 2);
    // 0d8e27  je 0xd8e5e
    X86_AT(c, 0xd8e27u);
    if (x86_cc(c, 4)) { goto L_d8e5e; }
    X86_TICK(c, 29);
    // 0d8e29  mov word ptr [0xb445f], 0
    X86_AT(c, 0xd8e29u);
    wr16((c.sbase[3] + (uint32_t)(0xB445Fu)), 0x0u);
    // 0d8e32  add edi, 5
    X86_AT(c, 0xd8e32u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x5u, 0, 4); }
    // 0d8e35  mov esi, edi
    X86_AT(c, 0xd8e35u);
    c.r[6] = c.r[7];
    // 0d8e37  mov al, 0x20
    X86_AT(c, 0xd8e37u);
    s8(c, 0, 0x20u);
    // 0d8e39  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xd8e39u);
    x86_string(c, 4, 1, 243, 4, 3);
    // 0d8e3b  dec edi
    X86_AT(c, 0xd8e3bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0d8e3c  cmp byte ptr es:[edi], 0
    X86_AT(c, 0xd8e3cu);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0d8e40  je 0xd8e5e
    X86_AT(c, 0xd8e40u);
    if (x86_cc(c, 4)) { goto L_d8e5e; }
    X86_TICK(c, 2);
    // 0d8e42  mov edi, esi
    X86_AT(c, 0xd8e42u);
    c.r[7] = c.r[6];
L_d8e44:
    X86_TICK(c, 11);
    // 0d8e44  mov dl, byte ptr es:[edi]
    X86_AT(c, 0xd8e44u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 0d8e47  and dl, dl
    X86_AT(c, 0xd8e47u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 2), 1)); }
    // 0d8e49  je 0xd8e52
    X86_AT(c, 0xd8e49u);
    if (x86_cc(c, 4)) { goto L_d8e52; }
    X86_TICK(c, 39);
    // 0d8e4b  mov ah, 6
    X86_AT(c, 0xd8e4bu);
    s8(c, 4, 0x6u);
    // 0d8e4d  int 0x21
    X86_AT(c, 0xd8e4du);
    x86_int(c, 0x21, 0xd8e4fu);
    X86_TICK(c, 9);
    // 0d8e4f  inc edi
    X86_AT(c, 0xd8e4fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d8e50  jmp 0xd8e44
    X86_AT(c, 0xd8e50u);
    X86_POLL(c, 0xd8e44u); goto L_d8e44;
L_d8e52:
    X86_TICK(c, 41);
    // 0d8e52  mov dl, 0xd
    X86_AT(c, 0xd8e52u);
    s8(c, 2, 0xDu);
    // 0d8e54  mov ah, 6
    X86_AT(c, 0xd8e54u);
    s8(c, 4, 0x6u);
    // 0d8e56  int 0x21
    X86_AT(c, 0xd8e56u);
    x86_int(c, 0x21, 0xd8e58u);
    X86_TICK(c, 41);
    // 0d8e58  mov dl, 0xa
    X86_AT(c, 0xd8e58u);
    s8(c, 2, 0xAu);
    // 0d8e5a  mov ah, 6
    X86_AT(c, 0xd8e5au);
    s8(c, 4, 0x6u);
    // 0d8e5c  int 0x21
    X86_AT(c, 0xd8e5cu);
    x86_int(c, 0x21, 0xd8e5eu);
L_d8e5e:
    X86_TICK(c, 8);
    // 0d8e5e  pop edi
    X86_AT(c, 0xd8e5eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d8e5f  pop eax
    X86_AT(c, 0xd8e5fu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_d8e60:
    X86_TICK(c, 21);
    // 0d8e60  mov ecx, 0xffffffff
    X86_AT(c, 0xd8e60u);
    c.r[1] = 0xFFFFFFFFu;
    // 0d8e65  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xd8e65u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0d8e67  cmp byte ptr es:[edi], 0
    X86_AT(c, 0xd8e67u);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0d8e6b  jne 0xd8e0d
    X86_AT(c, 0xd8e6bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd8e0du); goto L_d8e0d; }
    X86_TICK(c, 14);
    // 0d8e6d  add edi, 3
    X86_AT(c, 0xd8e6du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x3u, 0, 4); }
    // 0d8e70  cmp byte ptr [0xb446c], 3
    X86_AT(c, 0xd8e70u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB446Cu))), 0x3u, 0, 1);
    // 0d8e77  jb 0xd8e99
    X86_AT(c, 0xd8e77u);
    if (x86_cc(c, 2)) { goto L_d8e99; }
    X86_TICK(c, 12);
    // 0d8e79  cmp byte ptr [0xb446e], 1
    X86_AT(c, 0xd8e79u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB446Eu))), 0x1u, 0, 1);
    // 0d8e80  jne 0xd8ea6
    X86_AT(c, 0xd8e80u);
    if (x86_cc(c, 5)) { goto L_d8ea6; }
    X86_TICK(c, 12);
    // 0d8e82  cmp byte ptr [0xb446e], 3
    X86_AT(c, 0xd8e82u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB446Eu))), 0x3u, 0, 1);
    // 0d8e89  je 0xd8ea6
    X86_AT(c, 0xd8e89u);
    if (x86_cc(c, 4)) { goto L_d8ea6; }
    X86_TICK(c, 11);
    // 0d8e8b  mov dword ptr [0xb4468], edi
    X86_AT(c, 0xd8e8bu);
    wr32((c.sbase[3] + (uint32_t)(0xB4468u)), c.r[7]);
    // 0d8e91  mov word ptr [0xb446c], ds
    X86_AT(c, 0xd8e91u);
    wr16((c.sbase[3] + (uint32_t)(0xB446Cu)), (uint32_t)c.sreg[3]);
    // 0d8e97  jmp 0xd8ed8
    X86_AT(c, 0xd8e97u);
    goto L_d8ed8;
L_d8e99:
    X86_TICK(c, 13);
    // 0d8e99  xor edx, edx
    X86_AT(c, 0xd8e99u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0d8e9b  push edx
    X86_AT(c, 0xd8e9bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d8e9c  mov dword ptr [0xb4468], esp
    X86_AT(c, 0xd8e9cu);
    wr32((c.sbase[3] + (uint32_t)(0xB4468u)), c.r[4]);
    // 0d8ea2  jmp 0xd8ed8
    X86_AT(c, 0xd8ea2u);
    goto L_d8ed8;
L_d8ea6:
    X86_TICK(c, 62);
    // 0d8ea6  mov eax, es
    X86_AT(c, 0xd8ea6u);
    c.r[0] = (uint32_t)c.sreg[0];
    // 0d8ea8  lsl eax, eax
    X86_AT(c, 0xd8ea8u);
    { uint32_t v; if (x86_lsl(c, (c.r[0] & 0xFFFFu), v)) { c.r[0] = v; c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 0d8eab  xor eax, eax
    X86_AT(c, 0xd8eabu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0d8ead  sub ecx, ecx
    X86_AT(c, 0xd8eadu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0d8eaf  dec ecx
    X86_AT(c, 0xd8eafu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 0d8eb0  mov ebx, edi
    X86_AT(c, 0xd8eb0u);
    c.r[3] = c.r[7];
    // 0d8eb2  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xd8eb2u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0d8eb4  sub edi, ebx
    X86_AT(c, 0xd8eb4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0d8eb6  lea eax, [edi + 3]
    X86_AT(c, 0xd8eb6u);
    c.r[0] = (uint32_t)(c.r[7] + 0x3u);
    // 0d8eb9  and eax, 0xfffc
    X86_AT(c, 0xd8eb9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFCu, 4); }
    // 0d8ebe  sub esp, eax
    X86_AT(c, 0xd8ebeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d8ec0  mov dword ptr [0xb4468], esp
    X86_AT(c, 0xd8ec0u);
    wr32((c.sbase[3] + (uint32_t)(0xB4468u)), c.r[4]);
    // 0d8ec6  mov ecx, edi
    X86_AT(c, 0xd8ec6u);
    c.r[1] = c.r[7];
    // 0d8ec8  mov esi, ebx
    X86_AT(c, 0xd8ec8u);
    c.r[6] = c.r[3];
    // 0d8eca  mov edi, esp
    X86_AT(c, 0xd8ecau);
    c.r[7] = c.r[4];
    // 0d8ecc  push ds
    X86_AT(c, 0xd8eccu);
    push32(c, c.sreg[3]);
    // 0d8ecd  mov ds, word ptr [0xb445c]
    X86_AT(c, 0xd8ecdu);
    x86_load_seg(c, 3, rd16((c.sbase[3] + (uint32_t)(0xB445Cu))) & 0xFFFFu);
    // 0d8ed3  push ss
    X86_AT(c, 0xd8ed3u);
    push32(c, c.sreg[2]);
    // 0d8ed4  pop es
    X86_AT(c, 0xd8ed4u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0d8ed5  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xd8ed5u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0d8ed7  pop ds
    X86_AT(c, 0xd8ed7u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_d8ed8:
    X86_TICK(c, 33);
    // 0d8ed8  mov eax, dword ptr [0xb4454]
    X86_AT(c, 0xd8ed8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4454u)));
    // 0d8edd  inc eax
    X86_AT(c, 0xd8eddu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d8ede  shr eax, 1
    X86_AT(c, 0xd8edeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0d8ee0  inc eax
    X86_AT(c, 0xd8ee0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d8ee1  inc eax
    X86_AT(c, 0xd8ee1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d8ee2  shl eax, 2
    X86_AT(c, 0xd8ee2u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 0d8ee5  sub esp, eax
    X86_AT(c, 0xd8ee5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d8ee7  mov dword ptr [0xb444e], esp
    X86_AT(c, 0xd8ee7u);
    wr32((c.sbase[3] + (uint32_t)(0xB444Eu)), c.r[4]);
    // 0d8eed  push ds
    X86_AT(c, 0xd8eedu);
    push32(c, c.sreg[3]);
    // 0d8eee  pop es
    X86_AT(c, 0xd8eeeu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0d8eef  call 0xda0c4
    X86_AT(c, 0xd8eefu);
    push32(c, 0xd8ef4u); x86_call_known(c, 0xda0c4u, f_000da0c4); X86_RET(c, 0xd8ef4u);
    X86_TICK(c, 7);
    // 0d8ef4  call 0xd9f2c
    X86_AT(c, 0xd8ef4u);
    push32(c, 0xd8ef9u); x86_call_known(c, 0xd9f2cu, f_000d9f2c); X86_RET(c, 0xd8ef9u);
    X86_TICK(c, 14);
    // 0d8ef9  push dword ptr [0xb444e]
    X86_AT(c, 0xd8ef9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB444Eu))); push32(c, v); }
    // 0d8eff  sub eax, eax
    X86_AT(c, 0xd8effu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d8f01  call 0xd9fc8
    X86_AT(c, 0xd8f01u);
    push32(c, 0xd8f06u); x86_call_known(c, 0xd9fc8u, f_000d9fc8); X86_RET(c, 0xd8f06u);
    X86_TICK(c, 14);
    // 0d8f06  push eax
    X86_AT(c, 0xd8f06u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d8f07  cmp byte ptr [0xb4465], 1
    X86_AT(c, 0xd8f07u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB4465u))), 0x1u, 0, 1);
    // 0d8f0e  je 0xd8f30
    X86_AT(c, 0xd8f0eu);
    if (x86_cc(c, 4)) { goto L_d8f30; }
    X86_TICK(c, 12);
    // 0d8f10  cmp word ptr [0xb4473], 0xabcd
    X86_AT(c, 0xd8f10u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xB4473u))), 0xABCDu, 0, 2);
    // 0d8f19  jne 0xd8f30
    X86_AT(c, 0xd8f19u);
    if (x86_cc(c, 5)) { goto L_d8f30; }
    X86_TICK(c, 15);
    // 0d8f1b  mov eax, dword ptr [0xb4479]
    X86_AT(c, 0xd8f1bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4479u)));
    // 0d8f20  cmp eax, dword ptr [0xb4475]
    X86_AT(c, 0xd8f20u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xB4475u))), 0, 4);
    // 0d8f26  jne 0xd8f30
    X86_AT(c, 0xd8f26u);
    if (x86_cc(c, 5)) { goto L_d8f30; }
    X86_TICK(c, 11);
    // 0d8f28  mov edx, dword ptr [0xb4479]
    X86_AT(c, 0xd8f28u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB4479u)));
    // 0d8f2e  jmp 0xd8f57
    X86_AT(c, 0xd8f2eu);
    goto L_d8f57;
L_d8f30:
    X86_TICK(c, 12);
    // 0d8f30  cmp byte ptr [0xb445f], 1
    X86_AT(c, 0xd8f30u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB445Fu))), 0x1u, 0, 1);
    // 0d8f37  je 0xd8f60
    X86_AT(c, 0xd8f37u);
    if (x86_cc(c, 4)) { goto L_d8f60; }
    X86_TICK(c, 12);
    // 0d8f39  cmp word ptr [0xb447d], 0xabcd
    X86_AT(c, 0xd8f39u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xB447Du))), 0xABCDu, 0, 2);
    // 0d8f42  jne 0xd8f60
    X86_AT(c, 0xd8f42u);
    if (x86_cc(c, 5)) { goto L_d8f60; }
    X86_TICK(c, 15);
    // 0d8f44  mov eax, dword ptr [0xb4483]
    X86_AT(c, 0xd8f44u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4483u)));
    // 0d8f49  cmp eax, dword ptr [0xb447f]
    X86_AT(c, 0xd8f49u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xB447Fu))), 0, 4);
    // 0d8f4f  jne 0xd8f60
    X86_AT(c, 0xd8f4fu);
    if (x86_cc(c, 5)) { goto L_d8f60; }
    X86_TICK(c, 4);
    // 0d8f51  mov edx, dword ptr [0xb4483]
    X86_AT(c, 0xd8f51u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB4483u)));
L_d8f57:
    X86_TICK(c, 39);
    // 0d8f57  mov ah, 9
    X86_AT(c, 0xd8f57u);
    s8(c, 4, 0x9u);
    // 0d8f59  int 0x21
    X86_AT(c, 0xd8f59u);
    x86_int(c, 0x21, 0xd8f5bu);
    X86_TICK(c, 7);
    // 0d8f5b  jmp 0xd8ab7
    X86_AT(c, 0xd8f5bu);
    X86_POLL(c, 0xd8ab7u); goto L_d8ab7;
L_d8f60:
    X86_TICK(c, 12);
    // 0d8f60  cmp byte ptr [0xb4463], 1
    X86_AT(c, 0xd8f60u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB4463u))), 0x1u, 0, 1);
    // 0d8f67  je 0xd8f94
    X86_AT(c, 0xd8f67u);
    if (x86_cc(c, 4)) { goto L_d8f94; }
    X86_TICK(c, 12);
    // 0d8f69  cmp word ptr [0xb4487], 0xabcd
    X86_AT(c, 0xd8f69u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xB4487u))), 0xABCDu, 0, 2);
    // 0d8f72  jne 0xd8f94
    X86_AT(c, 0xd8f72u);
    if (x86_cc(c, 5)) { goto L_d8f94; }
    X86_TICK(c, 43);
    // 0d8f74  mov edx, dword ptr cs:[0xd8f90]
    X86_AT(c, 0xd8f74u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(0xD8F90u)));
    // 0d8f7b  mov ah, 9
    X86_AT(c, 0xd8f7bu);
    s8(c, 4, 0x9u);
    // 0d8f7d  int 0x21
    X86_AT(c, 0xd8f7du);
    x86_int(c, 0x21, 0xd8f7fu);
    X86_TICK(c, 13);
    // 0d8f7f  mov edx, dword ptr [0xb4483]
    X86_AT(c, 0xd8f7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB4483u)));
    // 0d8f85  add edx, 0xa
    X86_AT(c, 0xd8f85u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xAu, 0, 4); }
    // 0d8f88  jmp 0xd8f57
    X86_AT(c, 0xd8f88u);
    X86_POLL(c, 0xd8f57u); goto L_d8f57;
L_d8f94:
    X86_TICK(c, 7);
    // 0d8f94  jmp 0xd8ab2
    X86_AT(c, 0xd8f94u);
    X86_POLL(c, 0xd8ab2u); goto L_d8ab2;
    x86_fault(c, 0xd8ab0u, "ran off the end of a function");
}
void f_000d8ac1(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0d8ac1  ret 
    X86_AT(c, 0xd8ac1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd8ac1u, "ran off the end of a function");
}
void f_000d8f9a(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0d8f9a  mov eax, dword ptr [0xb4438]
    X86_AT(c, 0xd8f9au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4438u)));
    // 0d8f9f  add eax, 0x10
    X86_AT(c, 0xd8f9fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d8fa4  ret 
    X86_AT(c, 0xd8fa4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd8f9au, "ran off the end of a function");
}
void f_000d8fa6(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0d8fa6  mov eax, dword ptr [0xb4440]
    X86_AT(c, 0xd8fa6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4440u)));
    // 0d8fab  ret 
    X86_AT(c, 0xd8fabu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd8fa6u, "ran off the end of a function");
}
void f_000d8fac(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0d8fac  push ebx
    X86_AT(c, 0xd8facu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d8fad  cmp byte ptr [0xb446e], 2
    X86_AT(c, 0xd8fadu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB446Eu))), 0x2u, 0, 1);
    // 0d8fb4  je 0xd8ff1
    X86_AT(c, 0xd8fb4u);
    if (x86_cc(c, 4)) { goto L_d8ff1; }
    X86_TICK(c, 7);
    // 0d8fb6  jmp 0xd8ff1
    X86_AT(c, 0xd8fb6u);
    goto L_d8ff1;
L_d8ff1:
    X86_TICK(c, 14);
    // 0d8ff1  pop ebx
    X86_AT(c, 0xd8ff1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d8ff2  ret 4
    X86_AT(c, 0xd8ff2u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xd8facu, "ran off the end of a function");
}
void f_000d8ff5(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0d8ff5  ret 8
    X86_AT(c, 0xd8ff5u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xd8ff5u, "ran off the end of a function");
}
void f_000d9000(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0d9000  enter 0x10, 0
    X86_AT(c, 0xd9000u);
    x86_enter(c, 0x10u, 0x0u, 4);
    // 0d9004  push esi
    X86_AT(c, 0xd9004u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d9005  push edi
    X86_AT(c, 0xd9005u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d9006  cmp byte ptr [0xb445f], 0
    X86_AT(c, 0xd9006u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB445Fu))), 0x0u, 0, 1);
    // 0d900d  je 0xd902b
    X86_AT(c, 0xd900du);
    if (x86_cc(c, 4)) { goto L_d902b; }
    X86_TICK(c, 12);
    // 0d900f  push dword ptr [0xb4528]
    X86_AT(c, 0xd900fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB4528u))); push32(c, v); }
    // 0d9015  call 0xdab6e
    X86_AT(c, 0xd9015u);
    push32(c, 0xd901au); x86_call_known(c, 0xdab6eu, f_000dab6e); X86_RET(c, 0xd901au);
    X86_TICK(c, 14);
    // 0d901a  add dword ptr [0xb4528], 0xfffffff4
    X86_AT(c, 0xd901au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4528u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0d9021  call 0xdab91
    X86_AT(c, 0xd9021u);
    push32(c, 0xd9026u); x86_call_known(c, 0xdab91u, f_000dab91); X86_RET(c, 0xd9026u);
    X86_TICK(c, 7);
    // 0d9026  jmp 0xd90a1
    X86_AT(c, 0xd9026u);
    goto L_d90a1;
L_d902b:
    X86_TICK(c, 51);
    // 0d902b  mov eax, dword ptr [0xb4528]
    X86_AT(c, 0xd902bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4528u)));
    // 0d9030  lea edx, [ebp - 0x10]
    X86_AT(c, 0xd9030u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0d9033  push esi
    X86_AT(c, 0xd9033u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d9034  push edi
    X86_AT(c, 0xd9034u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d9035  mov esi, eax
    X86_AT(c, 0xd9035u);
    c.r[6] = c.r[0];
    // 0d9037  mov edi, edx
    X86_AT(c, 0xd9037u);
    c.r[7] = c.r[2];
    // 0d9039  mov ecx, 3
    X86_AT(c, 0xd9039u);
    c.r[1] = 0x3u;
    // 0d903e  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xd903eu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0d9040  pop edi
    X86_AT(c, 0xd9040u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d9041  pop esi
    X86_AT(c, 0xd9041u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d9042  add dword ptr [0xb4528], 0xfffffff4
    X86_AT(c, 0xd9042u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4528u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0d9049  mov di, word ptr [ebp - 8]
    X86_AT(c, 0xd9049u);
    s16(c, 7, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 0d904d  sub di, 0x3fff
    X86_AT(c, 0xd904du);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, 0x3FFFu, 0, 2)); }
    // 0d9052  cmp di, 0x20
    X86_AT(c, 0xd9052u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x20u, 0, 2);
    // 0d9056  jl 0xd905f
    X86_AT(c, 0xd9056u);
    if (x86_cc(c, 12)) { goto L_d905f; }
    X86_TICK(c, 9);
    // 0d9058  mov eax, 0xffffffff
    X86_AT(c, 0xd9058u);
    c.r[0] = 0xFFFFFFFFu;
    // 0d905d  jmp 0xd90a1
    X86_AT(c, 0xd905du);
    goto L_d90a1;
L_d905f:
    X86_TICK(c, 7);
    // 0d905f  and di, di
    X86_AT(c, 0xd905fu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & (c.r[7] & 0xFFFFu), 2)); }
    // 0d9062  jge 0xd9068
    X86_AT(c, 0xd9062u);
    if (x86_cc(c, 13)) { goto L_d9068; }
    X86_TICK(c, 9);
    // 0d9064  sub eax, eax
    X86_AT(c, 0xd9064u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d9066  jmp 0xd90a1
    X86_AT(c, 0xd9066u);
    goto L_d90a1;
L_d9068:
    X86_TICK(c, 13);
    // 0d9068  mov si, 0x20
    X86_AT(c, 0xd9068u);
    s16(c, 6, 0x20u);
    // 0d906c  sub esi, edi
    X86_AT(c, 0xd906cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0d906e  dec esi
    X86_AT(c, 0xd906eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0d906f  cmp si, 0x10
    X86_AT(c, 0xd906fu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x10u, 0, 2);
    // 0d9073  jb 0xd907d
    X86_AT(c, 0xd9073u);
    if (x86_cc(c, 2)) { goto L_d907d; }
    X86_TICK(c, 9);
    // 0d9075  shr dword ptr [ebp - 0xc], 0x10
    X86_AT(c, 0xd9075u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) wr32(ea, r); }
    // 0d9079  sub si, 0x10
    X86_AT(c, 0xd9079u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_sub(c, v, 0x10u, 0, 2)); }
L_d907d:
    X86_TICK(c, 7);
    // 0d907d  cmp si, 8
    X86_AT(c, 0xd907du);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x8u, 0, 2);
    // 0d9081  jb 0xd908b
    X86_AT(c, 0xd9081u);
    if (x86_cc(c, 2)) { goto L_d908b; }
    X86_TICK(c, 9);
    // 0d9083  shr dword ptr [ebp - 0xc], 8
    X86_AT(c, 0xd9083u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) wr32(ea, r); }
    // 0d9087  sub si, 8
    X86_AT(c, 0xd9087u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_sub(c, v, 0x8u, 0, 2)); }
L_d908b:
    X86_TICK(c, 23);
    // 0d908b  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd908bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0d908e  mov ecx, esi
    X86_AT(c, 0xd908eu);
    c.r[1] = c.r[6];
    // 0d9090  shr eax, cl
    X86_AT(c, 0xd9090u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 0d9092  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd9092u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d9095  cmp byte ptr [ebp - 6], 0
    X86_AT(c, 0xd9095u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))), 0x0u, 0, 1);
    // 0d9099  je 0xd909e
    X86_AT(c, 0xd9099u);
    if (x86_cc(c, 4)) { goto L_d909e; }
    X86_TICK(c, 6);
    // 0d909b  neg dword ptr [ebp - 4]
    X86_AT(c, 0xd909bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_neg(c, v, 4)); }
L_d909e:
    X86_TICK(c, 4);
    // 0d909e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd909eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_d90a1:
    X86_TICK(c, 24);
    // 0d90a1  pop edi
    X86_AT(c, 0xd90a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d90a2  pop esi
    X86_AT(c, 0xd90a2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d90a3  leave 
    X86_AT(c, 0xd90a3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d90a4  ret 
    X86_AT(c, 0xd90a4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd9000u, "ran off the end of a function");
}
void f_000d9124(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0d9124  push ebp
    X86_AT(c, 0xd9124u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d9125  mov ebp, esp
    X86_AT(c, 0xd9125u);
    c.r[5] = c.r[4];
    // 0d9127  call 0xdad10
    X86_AT(c, 0xd9127u);
    push32(c, 0xd912cu); x86_call_known(c, 0xdad10u, f_000dad10); X86_RET(c, 0xd912cu);
    X86_TICK(c, 12);
    // 0d912c  cmp byte ptr [0xb445f], 0
    X86_AT(c, 0xd912cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB445Fu))), 0x0u, 0, 1);
    // 0d9133  je 0xd914d
    X86_AT(c, 0xd9133u);
    if (x86_cc(c, 4)) { goto L_d914d; }
    X86_TICK(c, 17);
    // 0d9135  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xd9135u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0d9138  push dword ptr [ebp + 8]
    X86_AT(c, 0xd9138u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d913b  call 0xdab5d
    X86_AT(c, 0xd913bu);
    push32(c, 0xd9140u); x86_call_known(c, 0xdab5du, f_000dab5d); X86_RET(c, 0xd9140u);
    X86_TICK(c, 12);
    // 0d9140  push dword ptr [0xb4528]
    X86_AT(c, 0xd9140u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB4528u))); push32(c, v); }
    // 0d9146  call 0xdab64
    X86_AT(c, 0xd9146u);
    push32(c, 0xd914bu); x86_call_known(c, 0xdab64u, f_000dab64); X86_RET(c, 0xd914bu);
    X86_TICK(c, 7);
    // 0d914b  jmp 0xd915c
    X86_AT(c, 0xd914bu);
    goto L_d915c;
L_d914d:
    X86_TICK(c, 16);
    // 0d914d  lea eax, [ebp + 8]
    X86_AT(c, 0xd914du);
    c.r[0] = (uint32_t)(c.r[5] + 0x8u);
    // 0d9150  push eax
    X86_AT(c, 0xd9150u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d9151  push dword ptr [0xb4528]
    X86_AT(c, 0xd9151u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB4528u))); push32(c, v); }
    // 0d9157  call 0xdabf8
    X86_AT(c, 0xd9157u);
    push32(c, 0xd915cu); x86_call_known(c, 0xdabf8u, f_000dabf8); X86_RET(c, 0xd915cu);
L_d915c:
    X86_TICK(c, 16);
    // 0d915c  leave 
    X86_AT(c, 0xd915cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d915d  ret 8
    X86_AT(c, 0xd915du);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xd9124u, "ran off the end of a function");
}
void f_000d9167(X86Cpu& c) {
    X86_TICK(c, 57);
    // 0d9167  push ebp
    X86_AT(c, 0xd9167u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d9168  mov ebp, esp
    X86_AT(c, 0xd9168u);
    c.r[5] = c.r[4];
    // 0d916a  push esi
    X86_AT(c, 0xd916au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d916b  push edi
    X86_AT(c, 0xd916bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d916c  push ebx
    X86_AT(c, 0xd916cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d916d  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xd916du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d9170  mov al, 0
    X86_AT(c, 0xd9170u);
    s8(c, 0, 0x0u);
    // 0d9172  mov ah, 0x43
    X86_AT(c, 0xd9172u);
    s8(c, 4, 0x43u);
    // 0d9174  clc 
    X86_AT(c, 0xd9174u);
    c.fl &= ~X86_CF;
    // 0d9175  int 0x21
    X86_AT(c, 0xd9175u);
    x86_int(c, 0x21, 0xd9177u);
    X86_TICK(c, 5);
    // 0d9177  jb 0xd9195
    X86_AT(c, 0xd9177u);
    if (x86_cc(c, 2)) { goto L_d9195; }
    X86_TICK(c, 11);
    // 0d9179  mov bl, byte ptr [ebp + 0xc]
    X86_AT(c, 0xd9179u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0d917c  cmp bl, 0
    X86_AT(c, 0xd917cu);
    (void)x86_sub(c, g8(c, 3), 0x0u, 0, 1);
    // 0d917f  je 0xd918d
    X86_AT(c, 0xd917fu);
    if (x86_cc(c, 4)) { goto L_d918d; }
    X86_TICK(c, 7);
    // 0d9181  test cl, 1
    X86_AT(c, 0xd9181u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 0d9184  je 0xd918d
    X86_AT(c, 0xd9184u);
    if (x86_cc(c, 4)) { goto L_d918d; }
    X86_TICK(c, 7);
    // 0d9186  test bl, 2
    X86_AT(c, 0xd9186u);
    (void)x86_logic(c, g8(c, 3) & 0x2u, 1);
    // 0d9189  je 0xd918d
    X86_AT(c, 0xd9189u);
    if (x86_cc(c, 4)) { goto L_d918d; }
    X86_TICK(c, 7);
    // 0d918b  jmp 0xd9191
    X86_AT(c, 0xd918bu);
    goto L_d9191;
L_d918d:
    X86_TICK(c, 9);
    // 0d918d  xor eax, eax
    X86_AT(c, 0xd918du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0d918f  jmp 0xd91a4
    X86_AT(c, 0xd918fu);
    goto L_d91a4;
L_d9191:
    X86_TICK(c, 2);
    // 0d9191  mov ax, 0xc
    X86_AT(c, 0xd9191u);
    s16(c, 0, 0xCu);
L_d9195:
    X86_TICK(c, 6);
    // 0d9195  and eax, 0xffff
    X86_AT(c, 0xd9195u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 0d919a  mov dword ptr [0xb47e6], eax
    X86_AT(c, 0xd919au);
    wr32((c.sbase[3] + (uint32_t)(0xB47E6u)), c.r[0]);
    // 0d919f  mov eax, 0xffffffff
    X86_AT(c, 0xd919fu);
    c.r[0] = 0xFFFFFFFFu;
L_d91a4:
    X86_TICK(c, 28);
    // 0d91a4  pop ebx
    X86_AT(c, 0xd91a4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d91a5  pop edi
    X86_AT(c, 0xd91a5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d91a6  pop esi
    X86_AT(c, 0xd91a6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d91a7  mov esp, ebp
    X86_AT(c, 0xd91a7u);
    c.r[4] = c.r[5];
    // 0d91a9  pop ebp
    X86_AT(c, 0xd91a9u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0d91aa  ret 
    X86_AT(c, 0xd91aau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd9167u, "ran off the end of a function");
}
void f_000d91b7(X86Cpu& c) {
    X86_TICK(c, 61);
    // 0d91b7  push ebp
    X86_AT(c, 0xd91b7u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d91b8  mov ebp, esp
    X86_AT(c, 0xd91b8u);
    c.r[5] = c.r[4];
    // 0d91ba  push esi
    X86_AT(c, 0xd91bau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d91bb  push edi
    X86_AT(c, 0xd91bbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d91bc  push ebx
    X86_AT(c, 0xd91bcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d91bd  mov bx, word ptr [ebp + 8]
    X86_AT(c, 0xd91bdu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0d91c1  mov cx, 0
    X86_AT(c, 0xd91c1u);
    s16(c, 1, 0x0u);
    // 0d91c5  mov dx, 0
    X86_AT(c, 0xd91c5u);
    s16(c, 2, 0x0u);
    // 0d91c9  mov al, 1
    X86_AT(c, 0xd91c9u);
    s8(c, 0, 0x1u);
    // 0d91cb  mov ah, 0x42
    X86_AT(c, 0xd91cbu);
    s8(c, 4, 0x42u);
    // 0d91cd  clc 
    X86_AT(c, 0xd91cdu);
    c.fl &= ~X86_CF;
    // 0d91ce  int 0x21
    X86_AT(c, 0xd91ceu);
    x86_int(c, 0x21, 0xd91d0u);
    X86_TICK(c, 5);
    // 0d91d0  jb 0xd921f
    X86_AT(c, 0xd91d0u);
    if (x86_cc(c, 2)) { goto L_d921f; }
    X86_TICK(c, 57);
    // 0d91d2  mov ecx, 0xd9235
    X86_AT(c, 0xd91d2u);
    c.r[1] = 0xD9235u;
    // 0d91d7  mov word ptr [ecx + 2], dx
    X86_AT(c, 0xd91d7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1] + 0x2u)), (c.r[2] & 0xFFFFu));
    // 0d91db  mov word ptr [ecx], ax
    X86_AT(c, 0xd91dbu);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), (c.r[0] & 0xFFFFu));
    // 0d91de  mov bx, word ptr [ebp + 8]
    X86_AT(c, 0xd91deu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0d91e2  mov cx, 0
    X86_AT(c, 0xd91e2u);
    s16(c, 1, 0x0u);
    // 0d91e6  mov dx, 0
    X86_AT(c, 0xd91e6u);
    s16(c, 2, 0x0u);
    // 0d91ea  mov al, 2
    X86_AT(c, 0xd91eau);
    s8(c, 0, 0x2u);
    // 0d91ec  mov ah, 0x42
    X86_AT(c, 0xd91ecu);
    s8(c, 4, 0x42u);
    // 0d91ee  clc 
    X86_AT(c, 0xd91eeu);
    c.fl &= ~X86_CF;
    // 0d91ef  int 0x21
    X86_AT(c, 0xd91efu);
    x86_int(c, 0x21, 0xd91f1u);
    X86_TICK(c, 5);
    // 0d91f1  jb 0xd921f
    X86_AT(c, 0xd91f1u);
    if (x86_cc(c, 2)) { goto L_d921f; }
    X86_TICK(c, 63);
    // 0d91f3  mov ecx, 0xd9239
    X86_AT(c, 0xd91f3u);
    c.r[1] = 0xD9239u;
    // 0d91f8  mov word ptr [ecx + 2], dx
    X86_AT(c, 0xd91f8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1] + 0x2u)), (c.r[2] & 0xFFFFu));
    // 0d91fc  mov word ptr [ecx], ax
    X86_AT(c, 0xd91fcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), (c.r[0] & 0xFFFFu));
    // 0d91ff  mov bx, word ptr [ebp + 8]
    X86_AT(c, 0xd91ffu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0d9203  mov eax, 0xd9235
    X86_AT(c, 0xd9203u);
    c.r[0] = 0xD9235u;
    // 0d9208  mov cx, word ptr [eax + 2]
    X86_AT(c, 0xd9208u);
    s16(c, 1, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x2u))));
    // 0d920c  mov dx, word ptr [eax]
    X86_AT(c, 0xd920cu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0d920f  mov al, 0
    X86_AT(c, 0xd920fu);
    s8(c, 0, 0x0u);
    // 0d9211  mov ah, 0x42
    X86_AT(c, 0xd9211u);
    s8(c, 4, 0x42u);
    // 0d9213  clc 
    X86_AT(c, 0xd9213u);
    c.fl &= ~X86_CF;
    // 0d9214  int 0x21
    X86_AT(c, 0xd9214u);
    x86_int(c, 0x21, 0xd9216u);
    X86_TICK(c, 5);
    // 0d9216  jb 0xd921f
    X86_AT(c, 0xd9216u);
    if (x86_cc(c, 2)) { goto L_d921f; }
    X86_TICK(c, 11);
    // 0d9218  mov eax, dword ptr [0xd9239]
    X86_AT(c, 0xd9218u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD9239u)));
    // 0d921d  jmp 0xd922e
    X86_AT(c, 0xd921du);
    goto L_d922e;
L_d921f:
    X86_TICK(c, 6);
    // 0d921f  and eax, 0xffff
    X86_AT(c, 0xd921fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 0d9224  mov dword ptr [0xb47e6], eax
    X86_AT(c, 0xd9224u);
    wr32((c.sbase[3] + (uint32_t)(0xB47E6u)), c.r[0]);
    // 0d9229  mov eax, 0xffffffff
    X86_AT(c, 0xd9229u);
    c.r[0] = 0xFFFFFFFFu;
L_d922e:
    X86_TICK(c, 28);
    // 0d922e  pop ebx
    X86_AT(c, 0xd922eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d922f  pop edi
    X86_AT(c, 0xd922fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d9230  pop esi
    X86_AT(c, 0xd9230u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d9231  mov esp, ebp
    X86_AT(c, 0xd9231u);
    c.r[4] = c.r[5];
    // 0d9233  pop ebp
    X86_AT(c, 0xd9233u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0d9234  ret 
    X86_AT(c, 0xd9234u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd91b7u, "ran off the end of a function");
}
void f_000d9246(X86Cpu& c) {
    X86_TICK(c, 51);
    // 0d9246  push ebp
    X86_AT(c, 0xd9246u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d9247  mov ebp, esp
    X86_AT(c, 0xd9247u);
    c.r[5] = c.r[4];
    // 0d9249  push esi
    X86_AT(c, 0xd9249u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d924a  push edi
    X86_AT(c, 0xd924au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d924b  push ebx
    X86_AT(c, 0xd924bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d924c  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0xd924cu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0d924f  mov byte ptr [0xd926b], al
    X86_AT(c, 0xd924fu);
    wr8((c.sbase[3] + (uint32_t)(0xD926Bu)), g8(c, 0));
    // 0d9254  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd9254u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d9257  mov eax, dword ptr [esi]
    X86_AT(c, 0xd9257u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0d9259  mov ebx, dword ptr [esi + 4]
    X86_AT(c, 0xd9259u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 0d925c  mov ecx, dword ptr [esi + 8]
    X86_AT(c, 0xd925cu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 0d925f  mov edx, dword ptr [esi + 0xc]
    X86_AT(c, 0xd925fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)));
    // 0d9262  mov edi, dword ptr [esi + 0x14]
    X86_AT(c, 0xd9262u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)));
    // 0d9265  mov esi, dword ptr [esi + 0x10]
    X86_AT(c, 0xd9265u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)));
    // 0d9268  jmp 0xd926a
    X86_AT(c, 0xd9268u);
    goto L_d926a;
L_d926a:
    X86_TICK(c, 37);
    // 0d926a  int 0
    X86_AT(c, 0xd926au);
    x86_int(c, 0x0, 0xd926cu);
    X86_TICK(c, 67);
    // 0d926c  push edi
    X86_AT(c, 0xd926cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d926d  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xd926du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0d9270  mov dword ptr [edi], eax
    X86_AT(c, 0xd9270u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0d9272  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0xd9272u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 0d9275  mov dword ptr [edi + 8], ecx
    X86_AT(c, 0xd9275u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), c.r[1]);
    // 0d9278  mov dword ptr [edi + 0xc], edx
    X86_AT(c, 0xd9278u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), c.r[2]);
    // 0d927b  mov dword ptr [edi + 0x10], esi
    X86_AT(c, 0xd927bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u)), c.r[6]);
    // 0d927e  pushfd 
    X86_AT(c, 0xd927eu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0d927f  pop dword ptr [edi + 0x18]
    X86_AT(c, 0xd927fu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), v); }
    // 0d9282  and dword ptr [edi + 0x18], 1
    X86_AT(c, 0xd9282u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1u, 4)); }
    // 0d9286  pop dword ptr [edi + 0x14]
    X86_AT(c, 0xd9286u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u)), v); }
    // 0d9289  pop ebx
    X86_AT(c, 0xd9289u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d928a  pop edi
    X86_AT(c, 0xd928au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d928b  pop esi
    X86_AT(c, 0xd928bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d928c  mov esp, ebp
    X86_AT(c, 0xd928cu);
    c.r[4] = c.r[5];
    // 0d928e  pop ebp
    X86_AT(c, 0xd928eu);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0d928f  ret 
    X86_AT(c, 0xd928fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd9246u, "ran off the end of a function");
}
void f_000d92e2(X86Cpu& c) {
    X86_TICK(c, 75);
    // 0d92e2  push ebp
    X86_AT(c, 0xd92e2u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d92e3  mov ebp, esp
    X86_AT(c, 0xd92e3u);
    c.r[5] = c.r[4];
    // 0d92e5  push esi
    X86_AT(c, 0xd92e5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d92e6  push edi
    X86_AT(c, 0xd92e6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d92e7  push ebx
    X86_AT(c, 0xd92e7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d92e8  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0xd92e8u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d92eb  mov eax, dword ptr [esi]
    X86_AT(c, 0xd92ebu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0d92ed  mov ebx, dword ptr [esi + 4]
    X86_AT(c, 0xd92edu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 0d92f0  mov ecx, dword ptr [esi + 8]
    X86_AT(c, 0xd92f0u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 0d92f3  mov edx, dword ptr [esi + 0xc]
    X86_AT(c, 0xd92f3u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)));
    // 0d92f6  mov edi, dword ptr [esi + 0x14]
    X86_AT(c, 0xd92f6u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)));
    // 0d92f9  mov esi, dword ptr [esi + 0x10]
    X86_AT(c, 0xd92f9u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)));
    // 0d92fc  int 0x21
    X86_AT(c, 0xd92fcu);
    x86_int(c, 0x21, 0xd92feu);
    X86_TICK(c, 67);
    // 0d92fe  push edi
    X86_AT(c, 0xd92feu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d92ff  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd92ffu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d9302  mov dword ptr [edi], eax
    X86_AT(c, 0xd9302u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0d9304  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0xd9304u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 0d9307  mov dword ptr [edi + 8], ecx
    X86_AT(c, 0xd9307u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), c.r[1]);
    // 0d930a  mov dword ptr [edi + 0xc], edx
    X86_AT(c, 0xd930au);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), c.r[2]);
    // 0d930d  mov dword ptr [edi + 0x10], esi
    X86_AT(c, 0xd930du);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u)), c.r[6]);
    // 0d9310  pushfd 
    X86_AT(c, 0xd9310u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0d9311  pop dword ptr [edi + 0x18]
    X86_AT(c, 0xd9311u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), v); }
    // 0d9314  and dword ptr [edi + 0x18], 1
    X86_AT(c, 0xd9314u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1u, 4)); }
    // 0d9318  pop dword ptr [edi + 0x14]
    X86_AT(c, 0xd9318u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u)), v); }
    // 0d931b  pop ebx
    X86_AT(c, 0xd931bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d931c  pop edi
    X86_AT(c, 0xd931cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d931d  pop esi
    X86_AT(c, 0xd931du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d931e  mov esp, ebp
    X86_AT(c, 0xd931eu);
    c.r[4] = c.r[5];
    // 0d9320  pop ebp
    X86_AT(c, 0xd9320u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0d9321  ret 
    X86_AT(c, 0xd9321u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd92e2u, "ran off the end of a function");
}
void f_000d93a8(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0d93a8  push ebp
    X86_AT(c, 0xd93a8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d93a9  mov ebp, esp
    X86_AT(c, 0xd93a9u);
    c.r[5] = c.r[4];
    // 0d93ab  push ebx
    X86_AT(c, 0xd93abu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d93ac  push esi
    X86_AT(c, 0xd93acu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d93ad  push edi
    X86_AT(c, 0xd93adu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d93ae  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd93aeu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d93b1  mov esi, edi
    X86_AT(c, 0xd93b1u);
    c.r[6] = c.r[7];
    // 0d93b3  and byte ptr [esi + 0xc], 0x7f
    X86_AT(c, 0xd93b3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 0d93b7  mov eax, 0xb4588
    X86_AT(c, 0xd93b7u);
    c.r[0] = 0xB4588u;
    // 0d93bc  cmp eax, edi
    X86_AT(c, 0xd93bcu);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 0d93be  jne 0xd93d8
    X86_AT(c, 0xd93beu);
    if (x86_cc(c, 5)) { goto L_d93d8; }
    X86_TICK(c, 13);
    // 0d93c0  mov al, byte ptr [esi + 0xe]
    X86_AT(c, 0xd93c0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu))));
    // 0d93c3  push eax
    X86_AT(c, 0xd93c3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d93c4  call 0xda938
    X86_AT(c, 0xd93c4u);
    push32(c, 0xd93c9u); x86_call_known(c, 0xda938u, f_000da938); X86_RET(c, 0xd93c9u);
    X86_TICK(c, 10);
    // 0d93c9  xchg ebx, eax
    X86_AT(c, 0xd93c9u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d93ca  cmp bl, 1
    X86_AT(c, 0xd93cau);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d93cd  je 0xd93d8
    X86_AT(c, 0xd93cdu);
    if (x86_cc(c, 4)) { goto L_d93d8; }
    X86_TICK(c, 7);
    // 0d93cf  cmp bl, 2
    X86_AT(c, 0xd93cfu);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0d93d2  je 0xd93d8
    X86_AT(c, 0xd93d2u);
    if (x86_cc(c, 4)) { goto L_d93d8; }
    X86_TICK(c, 7);
    // 0d93d4  or byte ptr [esi + 0xc], 1
    X86_AT(c, 0xd93d4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
L_d93d8:
    X86_TICK(c, 9);
    // 0d93d8  mov eax, 0xb459c
    X86_AT(c, 0xd93d8u);
    c.r[0] = 0xB459Cu;
    // 0d93dd  cmp eax, edi
    X86_AT(c, 0xd93ddu);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 0d93df  jne 0xd93f8
    X86_AT(c, 0xd93dfu);
    if (x86_cc(c, 5)) { goto L_d93f8; }
    X86_TICK(c, 13);
    // 0d93e1  mov al, byte ptr [esi + 0xe]
    X86_AT(c, 0xd93e1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu))));
    // 0d93e4  push eax
    X86_AT(c, 0xd93e4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d93e5  call 0xda938
    X86_AT(c, 0xd93e5u);
    push32(c, 0xd93eau); x86_call_known(c, 0xda938u, f_000da938); X86_RET(c, 0xd93eau);
    X86_TICK(c, 7);
    // 0d93ea  cmp al, 2
    X86_AT(c, 0xd93eau);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0d93ec  jne 0xd93f4
    X86_AT(c, 0xd93ecu);
    if (x86_cc(c, 5)) { goto L_d93f4; }
    X86_TICK(c, 14);
    // 0d93ee  and byte ptr [esi + 0xc], 0xfe
    X86_AT(c, 0xd93eeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFEu, 1)); }
    // 0d93f2  jmp 0xd93f8
    X86_AT(c, 0xd93f2u);
    goto L_d93f8;
L_d93f4:
    X86_TICK(c, 7);
    // 0d93f4  or byte ptr [esi + 0xc], 1
    X86_AT(c, 0xd93f4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
L_d93f8:
    X86_TICK(c, 9);
    // 0d93f8  mov eax, 0xb45b0
    X86_AT(c, 0xd93f8u);
    c.r[0] = 0xB45B0u;
    // 0d93fd  cmp eax, edi
    X86_AT(c, 0xd93fdu);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 0d93ff  jne 0xd9405
    X86_AT(c, 0xd93ffu);
    if (x86_cc(c, 5)) { goto L_d9405; }
    X86_TICK(c, 7);
    // 0d9401  and byte ptr [esi + 0xc], 0xfe
    X86_AT(c, 0xd9401u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFEu, 1)); }
L_d9405:
    X86_TICK(c, 12);
    // 0d9405  test byte ptr [esi + 0xc], 1
    X86_AT(c, 0xd9405u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu))) & 0x1u, 1);
    // 0d9409  je 0xd942d
    X86_AT(c, 0xd9409u);
    if (x86_cc(c, 4)) { goto L_d942d; }
    X86_TICK(c, 9);
    // 0d940b  push 0x201
    X86_AT(c, 0xd940bu);
    { uint32_t v = 0x201u; push32(c, v); }
    // 0d9410  call 0xd8814
    X86_AT(c, 0xd9410u);
    push32(c, 0xd9415u); x86_call_known(c, 0xd8814u, f_000d8814); X86_RET(c, 0xd9415u);
    X86_TICK(c, 13);
    // 0d9415  mov dword ptr [esi + 8], eax
    X86_AT(c, 0xd9415u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 0d9418  pop ecx
    X86_AT(c, 0xd9418u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0d9419  and eax, eax
    X86_AT(c, 0xd9419u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d941b  jne 0xd9421
    X86_AT(c, 0xd941bu);
    if (x86_cc(c, 5)) { goto L_d9421; }
    X86_TICK(c, 7);
    // 0d941d  and byte ptr [esi + 0xc], 0xfe
    X86_AT(c, 0xd941du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFEu, 1)); }
L_d9421:
    X86_TICK(c, 8);
    // 0d9421  mov eax, dword ptr [esi + 8]
    X86_AT(c, 0xd9421u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 0d9424  mov dword ptr [esi], eax
    X86_AT(c, 0xd9424u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 0d9426  mov dword ptr [esi + 4], 0xffffffff
    X86_AT(c, 0xd9426u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), 0xFFFFFFFFu);
L_d942d:
    X86_TICK(c, 30);
    // 0d942d  mov word ptr [esi + 0x10], 0xffff
    X86_AT(c, 0xd942du);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0xFFFFu);
    // 0d9433  pop edi
    X86_AT(c, 0xd9433u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d9434  pop esi
    X86_AT(c, 0xd9434u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d9435  pop ebx
    X86_AT(c, 0xd9435u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d9436  leave 
    X86_AT(c, 0xd9436u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d9437  ret 4
    X86_AT(c, 0xd9437u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xd93a8u, "ran off the end of a function");
}
void f_000d9454(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0d9454  push ebp
    X86_AT(c, 0xd9454u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d9455  mov ebp, esp
    X86_AT(c, 0xd9455u);
    c.r[5] = c.r[4];
    // 0d9457  push ebx
    X86_AT(c, 0xd9457u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d9458  push esi
    X86_AT(c, 0xd9458u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d9459  push edi
    X86_AT(c, 0xd9459u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d945a  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd945au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d945d  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd945du);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d9460  jmp 0xd947e
    X86_AT(c, 0xd9460u);
    goto L_d947e;
L_d9462:
    X86_TICK(c, 9);
    // 0d9462  mov eax, 0xa
    X86_AT(c, 0xd9462u);
    c.r[0] = 0xAu;
    // 0d9467  cmp eax, esi
    X86_AT(c, 0xd9467u);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0d9469  jb 0xd946d
    X86_AT(c, 0xd9469u);
    if (x86_cc(c, 2)) { goto L_d946d; }
    X86_TICK(c, 2);
    // 0d946b  mov eax, esi
    X86_AT(c, 0xd946bu);
    c.r[0] = c.r[6];
L_d946d:
    X86_TICK(c, 18);
    // 0d946d  xchg ebx, eax
    X86_AT(c, 0xd946du);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d946e  push ebx
    X86_AT(c, 0xd946eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d946f  push edi
    X86_AT(c, 0xd946fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d9470  mov ecx, dword ptr [0xb4390]
    X86_AT(c, 0xd9470u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB4390u)));
    // 0d9476  call dword ptr [0xb438c]
    X86_AT(c, 0xd9476u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xB438Cu))); push32(c, 0xd947cu); x86_call(c, t); X86_RET(c, 0xd947cu); }
    X86_TICK(c, 2);
    // 0d947c  sub esi, ebx
    X86_AT(c, 0xd947cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[3], 0, 4); }
L_d947e:
    X86_TICK(c, 7);
    // 0d947e  and esi, esi
    X86_AT(c, 0xd947eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d9480  ja 0xd9462
    X86_AT(c, 0xd9480u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xd9462u); goto L_d9462; }
    X86_TICK(c, 28);
    // 0d9482  pop edi
    X86_AT(c, 0xd9482u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d9483  pop esi
    X86_AT(c, 0xd9483u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d9484  pop ebx
    X86_AT(c, 0xd9484u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d9485  leave 
    X86_AT(c, 0xd9485u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d9486  ret 8
    X86_AT(c, 0xd9486u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xd9454u, "ran off the end of a function");
}
void f_000d949c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0d949c  push ebp
    X86_AT(c, 0xd949cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d949d  mov ebp, esp
    X86_AT(c, 0xd949du);
    c.r[5] = c.r[4];
    // 0d949f  push esi
    X86_AT(c, 0xd949fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d94a0  push edi
    X86_AT(c, 0xd94a0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d94a1  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd94a1u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d94a4  mov eax, dword ptr [0xb437c]
    X86_AT(c, 0xd94a4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB437Cu)));
    // 0d94a9  cmp eax, 0xffff
    X86_AT(c, 0xd94a9u);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 0d94ae  je 0xd94e2
    X86_AT(c, 0xd94aeu);
    if (x86_cc(c, 4)) { goto L_d94e2; }
    X86_TICK(c, 7);
    // 0d94b0  cmp edi, eax
    X86_AT(c, 0xd94b0u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0d94b2  jae 0xd94e2
    X86_AT(c, 0xd94b2u);
    if (x86_cc(c, 3)) { goto L_d94e2; }
    X86_TICK(c, 24);
    // 0d94b4  xchg esi, eax
    X86_AT(c, 0xd94b4u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d94b5  sub esi, edi
    X86_AT(c, 0xd94b5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0d94b7  add dword ptr [0xb4388], esi
    X86_AT(c, 0xd94b7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4388u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0d94bd  test byte ptr [0xb4378], 0x10
    X86_AT(c, 0xd94bdu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4378u))) & 0x10u, 1);
    // 0d94c4  je 0xd94d7
    X86_AT(c, 0xd94c4u);
    if (x86_cc(c, 4)) { goto L_d94d7; }
    X86_TICK(c, 12);
    // 0d94c6  test byte ptr [0xb4378], 1
    X86_AT(c, 0xd94c6u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xB4378u))) & 0x1u, 1);
    // 0d94cd  jne 0xd94d7
    X86_AT(c, 0xd94cdu);
    if (x86_cc(c, 5)) { goto L_d94d7; }
    X86_TICK(c, 11);
    // 0d94cf  push esi
    X86_AT(c, 0xd94cfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d94d0  push 0xb4394
    X86_AT(c, 0xd94d0u);
    { uint32_t v = 0xB4394u; push32(c, v); }
    // 0d94d5  jmp 0xd94dd
    X86_AT(c, 0xd94d5u);
    goto L_d94dd;
L_d94d7:
    X86_TICK(c, 4);
    // 0d94d7  push esi
    X86_AT(c, 0xd94d7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d94d8  push 0xb439e
    X86_AT(c, 0xd94d8u);
    { uint32_t v = 0xB439Eu; push32(c, v); }
L_d94dd:
    X86_TICK(c, 7);
    // 0d94dd  call 0xd9454
    X86_AT(c, 0xd94ddu);
    push32(c, 0xd94e2u); x86_call_known(c, 0xd9454u, f_000d9454); X86_RET(c, 0xd94e2u);
L_d94e2:
    X86_TICK(c, 24);
    // 0d94e2  pop edi
    X86_AT(c, 0xd94e2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d94e3  pop esi
    X86_AT(c, 0xd94e3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d94e4  leave 
    X86_AT(c, 0xd94e4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d94e5  ret 4
    X86_AT(c, 0xd94e5u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xd949cu, "ran off the end of a function");
}
void f_000d9508(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0d9508  push ebp
    X86_AT(c, 0xd9508u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d9509  mov ebp, esp
    X86_AT(c, 0xd9509u);
    c.r[5] = c.r[4];
    // 0d950b  push ecx
    X86_AT(c, 0xd950bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d950c  sub esp, 8
    X86_AT(c, 0xd950cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0d950f  push ebx
    X86_AT(c, 0xd950fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d9510  mov eax, dword ptr [0xb47a4]
    X86_AT(c, 0xd9510u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB47A4u)));
    // 0d9515  mov bl, byte ptr [eax]
    X86_AT(c, 0xd9515u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0d9517  cmp bl, 0x2a
    X86_AT(c, 0xd9517u);
    (void)x86_sub(c, g8(c, 3), 0x2Au, 0, 1);
    // 0d951a  je 0xd953e
    X86_AT(c, 0xd951au);
    if (x86_cc(c, 4)) { goto L_d953e; }
    X86_TICK(c, 7);
    // 0d951c  cmp bl, 0x31
    X86_AT(c, 0xd951cu);
    (void)x86_sub(c, g8(c, 3), 0x31u, 0, 1);
    // 0d951f  jb 0xd9526
    X86_AT(c, 0xd951fu);
    if (x86_cc(c, 2)) { goto L_d9526; }
    X86_TICK(c, 7);
    // 0d9521  cmp bl, 0x39
    X86_AT(c, 0xd9521u);
    (void)x86_sub(c, g8(c, 3), 0x39u, 0, 1);
    // 0d9524  jbe 0xd953e
    X86_AT(c, 0xd9524u);
    if (x86_cc(c, 6)) { goto L_d953e; }
L_d9526:
    X86_TICK(c, 12);
    // 0d9526  cmp byte ptr [ebp + 0xc], 0
    X86_AT(c, 0xd9526u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x0u, 0, 1);
    // 0d952a  je 0xd95e4
    X86_AT(c, 0xd952au);
    if (x86_cc(c, 4)) { goto L_d95e4; }
    X86_TICK(c, 16);
    // 0d9530  mov eax, dword ptr [0xb47a4]
    X86_AT(c, 0xd9530u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB47A4u)));
    // 0d9535  cmp byte ptr [eax], 0x30
    X86_AT(c, 0xd9535u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x30u, 0, 1);
    // 0d9538  jne 0xd95e4
    X86_AT(c, 0xd9538u);
    if (x86_cc(c, 5)) { goto L_d95e4; }
L_d953e:
    X86_TICK(c, 17);
    // 0d953e  mov eax, dword ptr [0xb47a4]
    X86_AT(c, 0xd953eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB47A4u)));
    // 0d9543  mov al, byte ptr [eax]
    X86_AT(c, 0xd9543u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0d9545  mov byte ptr [ebp - 9], al
    X86_AT(c, 0xd9545u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
    // 0d9548  cmp al, 0x30
    X86_AT(c, 0xd9548u);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 0d954a  jb 0xd9593
    X86_AT(c, 0xd954au);
    if (x86_cc(c, 2)) { goto L_d9593; }
    X86_TICK(c, 7);
    // 0d954c  cmp al, 0x39
    X86_AT(c, 0xd954cu);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 0d954e  ja 0xd9593
    X86_AT(c, 0xd954eu);
    if (x86_cc(c, 7)) { goto L_d9593; }
    X86_TICK(c, 9);
    // 0d9550  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xd9550u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0d9557  jmp 0xd9578
    X86_AT(c, 0xd9557u);
    goto L_d9578;
L_d9559:
    X86_TICK(c, 30);
    // 0d9559  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd9559u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d955c  lea eax, [eax + eax*4]
    X86_AT(c, 0xd955cu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d955f  add eax, eax
    X86_AT(c, 0xd955fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d9561  mov edx, dword ptr [0xb47a4]
    X86_AT(c, 0xd9561u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB47A4u)));
    // 0d9567  movzx ecx, byte ptr [edx]
    X86_AT(c, 0xd9567u);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(c.r[2])));
    // 0d956a  add ecx, eax
    X86_AT(c, 0xd956au);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d956c  sub ecx, 0x30
    X86_AT(c, 0xd956cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x30u, 0, 4); }
    // 0d956f  mov dword ptr [ebp - 8], ecx
    X86_AT(c, 0xd956fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[1]);
    // 0d9572  inc dword ptr [0xb47a4]
    X86_AT(c, 0xd9572u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB47A4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_d9578:
    X86_TICK(c, 17);
    // 0d9578  mov eax, dword ptr [0xb47a4]
    X86_AT(c, 0xd9578u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB47A4u)));
    // 0d957d  mov al, byte ptr [eax]
    X86_AT(c, 0xd957du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0d957f  mov byte ptr [ebp - 0xa], al
    X86_AT(c, 0xd957fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), g8(c, 0));
    // 0d9582  cmp al, 0x30
    X86_AT(c, 0xd9582u);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 0d9584  jb 0xd95fa
    X86_AT(c, 0xd9584u);
    if (x86_cc(c, 2)) { goto L_d95fa; }
    X86_TICK(c, 7);
    // 0d958a  cmp al, 0x39
    X86_AT(c, 0xd958au);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 0d958c  jbe 0xd9559
    X86_AT(c, 0xd958cu);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xd9559u); goto L_d9559; }
    X86_TICK(c, 7);
    // 0d958e  jmp 0xd95fa
    X86_AT(c, 0xd958eu);
    goto L_d95fa;
L_d9593:
    X86_TICK(c, 16);
    // 0d9593  mov eax, dword ptr [0xb47a4]
    X86_AT(c, 0xd9593u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB47A4u)));
    // 0d9598  cmp byte ptr [eax], 0x2a
    X86_AT(c, 0xd9598u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x2Au, 0, 1);
    // 0d959b  jne 0xd95fa
    X86_AT(c, 0xd959bu);
    if (x86_cc(c, 5)) { goto L_d95fa; }
    X86_TICK(c, 16);
    // 0d959d  mov eax, dword ptr [0xb4790]
    X86_AT(c, 0xd959du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4790u)));
    // 0d95a2  cmp dword ptr [eax], 0
    X86_AT(c, 0xd95a2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 4);
    // 0d95a5  jge 0xd95cb
    X86_AT(c, 0xd95a5u);
    if (x86_cc(c, 13)) { goto L_d95cb; }
    X86_TICK(c, 12);
    // 0d95a7  cmp byte ptr [ebp + 8], 0x50
    X86_AT(c, 0xd95a7u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x50u, 0, 1);
    // 0d95ab  jne 0xd95b6
    X86_AT(c, 0xd95abu);
    if (x86_cc(c, 5)) { goto L_d95b6; }
    X86_TICK(c, 9);
    // 0d95ad  mov dword ptr [ebp - 8], 0xffff
    X86_AT(c, 0xd95adu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFFFFu);
    // 0d95b4  jmp 0xd95d5
    X86_AT(c, 0xd95b4u);
    goto L_d95d5;
L_d95b6:
    X86_TICK(c, 26);
    // 0d95b6  mov eax, dword ptr [0xb4790]
    X86_AT(c, 0xd95b6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4790u)));
    // 0d95bb  mov eax, dword ptr [eax]
    X86_AT(c, 0xd95bbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0d95bd  neg eax
    X86_AT(c, 0xd95bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0d95bf  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd95bfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d95c2  or byte ptr [0xb4378], 1
    X86_AT(c, 0xd95c2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4378u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
    // 0d95c9  jmp 0xd95d5
    X86_AT(c, 0xd95c9u);
    goto L_d95d5;
L_d95cb:
    X86_TICK(c, 10);
    // 0d95cb  mov eax, dword ptr [0xb4790]
    X86_AT(c, 0xd95cbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB4790u)));
    // 0d95d0  mov eax, dword ptr [eax]
    X86_AT(c, 0xd95d0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0d95d2  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd95d2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
L_d95d5:
    X86_TICK(c, 20);
    // 0d95d5  add dword ptr [0xb4790], 4
    X86_AT(c, 0xd95d5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4790u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0d95dc  inc dword ptr [0xb47a4]
    X86_AT(c, 0xd95dcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB47A4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d95e2  jmp 0xd95fa
    X86_AT(c, 0xd95e2u);
    goto L_d95fa;
L_d95e4:
    X86_TICK(c, 12);
    // 0d95e4  cmp byte ptr [ebp + 8], 0x50
    X86_AT(c, 0xd95e4u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x50u, 0, 1);
    // 0d95e8  jne 0xd95f3
    X86_AT(c, 0xd95e8u);
    if (x86_cc(c, 5)) { goto L_d95f3; }
    X86_TICK(c, 9);
    // 0d95ea  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xd95eau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0d95f1  jmp 0xd95fa
    X86_AT(c, 0xd95f1u);
    goto L_d95fa;
L_d95f3:
    X86_TICK(c, 2);
    // 0d95f3  mov dword ptr [ebp - 8], 0xffff
    X86_AT(c, 0xd95f3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFFFFu);
L_d95fa:
    X86_TICK(c, 24);
    // 0d95fa  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd95fau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d95fd  pop ebx
    X86_AT(c, 0xd95fdu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d95fe  leave 
    X86_AT(c, 0xd95feu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d95ff  ret 8
    X86_AT(c, 0xd95ffu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xd9508u, "ran off the end of a function");
}
void f_000d9618(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0d9618  push ebp
    X86_AT(c, 0xd9618u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d9619  mov ebp, esp
    X86_AT(c, 0xd9619u);
    c.r[5] = c.r[4];
    // 0d961b  push ecx
    X86_AT(c, 0xd961bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d961c  push eax
    X86_AT(c, 0xd961cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d961d  push ebx
    X86_AT(c, 0xd961du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d961e  push esi
    X86_AT(c, 0xd961eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d961f  push edi
    X86_AT(c, 0xd961fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d9620  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd9620u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d9623  mov dword ptr [0xb47a4], eax
    X86_AT(c, 0xd9623u);
    wr32((c.sbase[3] + (uint32_t)(0xB47A4u)), c.r[0]);
L_d9628:
    X86_TICK(c, 29);
    // 0d9628  sub eax, eax
    X86_AT(c, 0xd9628u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d962a  mov byte ptr [0xb4378], al
    X86_AT(c, 0xd962au);
    wr8((c.sbase[3] + (uint32_t)(0xB4378u)), g8(c, 0));
    // 0d962f  mov edx, 0xffff
    X86_AT(c, 0xd962fu);
    c.r[2] = 0xFFFFu;
    // 0d9634  mov dword ptr [0xb437c], edx
    X86_AT(c, 0xd9634u);
    wr32((c.sbase[3] + (uint32_t)(0xB437Cu)), c.r[2]);
    // 0d963a  mov dword ptr [0xb4380], edx
    X86_AT(c, 0xd963au);
    wr32((c.sbase[3] + (uint32_t)(0xB4380u)), c.r[2]);
    // 0d9640  mov byte ptr [0xb4384], 1
    X86_AT(c, 0xd9640u);
    wr8((c.sbase[3] + (uint32_t)(0xB4384u)), 0x1u);
    // 0d9647  mov edi, eax
    X86_AT(c, 0xd9647u);
    c.r[7] = c.r[0];
    // 0d9649  mov edx, dword ptr [0xb47a4]
    X86_AT(c, 0xd9649u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB47A4u)));
    // 0d964f  cmp al, byte ptr [edx]
    X86_AT(c, 0xd964fu);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[2]))), 0, 1);
    // 0d9651  je 0xd9800
    X86_AT(c, 0xd9651u);
    if (x86_cc(c, 4)) { goto L_d9800; }
    X86_TICK(c, 16);
    // 0d9657  mov eax, dword ptr [0xb47a4]
    X86_AT(c, 0xd9657u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB47A4u)));
    // 0d965c  cmp byte ptr [eax], 0x25
    X86_AT(c, 0xd965cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x25u, 0, 1);
    // 0d965f  je 0xd96a4
    X86_AT(c, 0xd965fu);
    if (x86_cc(c, 4)) { goto L_d96a4; }
    X86_TICK(c, 28);
    // 0d9661  mov edx, dword ptr [0xb479c]
    X86_AT(c, 0xd9661u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB479Cu)));
    // 0d9667  mov al, 0x25
    X86_AT(c, 0xd9667u);
    s8(c, 0, 0x25u);
    // 0d9669  mov ecx, dword ptr [0xb47a4]
    X86_AT(c, 0xd9669u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB47A4u)));
    // 0d966f  push edi
    X86_AT(c, 0xd966fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d9670  mov edi, ecx
    X86_AT(c, 0xd9670u);
    c.r[7] = c.r[1];
    // 0d9672  mov ecx, edx
    X86_AT(c, 0xd9672u);
    c.r[1] = c.r[2];
    // 0d9674  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xd9674u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0d9676  jne 0xd967b
    X86_AT(c, 0xd9676u);
    if (x86_cc(c, 5)) { goto L_d967b; }
    X86_TICK(c, 4);
    // 0d9678  inc ecx
    X86_AT(c, 0xd9678u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d9679  sub edx, ecx
    X86_AT(c, 0xd9679u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_d967b:
    X86_TICK(c, 41);
    // 0d967b  pop edi
    X86_AT(c, 0xd967bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d967c  mov edi, edx
    X86_AT(c, 0xd967cu);
    c.r[7] = c.r[2];
    // 0d967e  mov eax, dword ptr [0xb47a4]
    X86_AT(c, 0xd967eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB47A4u)));
    // 0d9683  mov dword ptr [0xb4794], eax
    X86_AT(c, 0xd9683u);
    wr32((c.sbase[3] + (uint32_t)(0xB4794u)), c.r[0]);
    // 0d9688  mov dword ptr [0xb4798], edi
    X86_AT(c, 0xd9688u);
    wr32((c.sbase[3] + (uint32_t)(0xB4798u)), c.r[7]);
    // 0d968e  add dword ptr [0xb47a4], edi
    X86_AT(c, 0xd968eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB47A4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 0d9694  sub dword ptr [0xb479c], edi
    X86_AT(c, 0xd9694u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB479Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 0d969a  push 0x30
    X86_AT(c, 0xd969au);
    { uint32_t v = 0x30u; push32(c, v); }
    // 0d969c  mov ecx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xd969cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0d969f  call dword ptr [ebp + 0xc]
    X86_AT(c, 0xd969fu);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, 0xd96a2u); x86_call(c, t); X86_RET(c, 0xd96a2u); }
    X86_TICK(c, 7);
    // 0d96a2  jmp 0xd9628
    X86_AT(c, 0xd96a2u);
    X86_POLL(c, 0xd9628u); goto L_d9628;
L_d96a4:
    X86_TICK(c, 6);
    // 0d96a4  mov esi, dword ptr [0xb47a4]
    X86_AT(c, 0xd96a4u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xB47A4u)));
    // 0d96aa  sub ebx, ebx
    X86_AT(c, 0xd96aau);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_d96ac:
    X86_TICK(c, 25);
    // 0d96ac  inc dword ptr [0xb47a4]
    X86_AT(c, 0xd96acu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB47A4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d96b2  mov eax, dword ptr [0xb47a4]
    X86_AT(c, 0xd96b2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB47A4u)));
    // 0d96b7  movzx eax, byte ptr [eax]
    X86_AT(c, 0xd96b7u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0d96ba  sub eax, 0x20
    X86_AT(c, 0xd96bau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x20u, 0, 4); }
    // 0d96bd  cmp eax, 0x10
    X86_AT(c, 0xd96bdu);
    (void)x86_sub(c, c.r[0], 0x10u, 0, 4);
    // 0d96c0  ja 0xd973f
    X86_AT(c, 0xd96c0u);
    if (x86_cc(c, 7)) { goto L_d973f; }
    X86_TICK(c, 7);
    // 0d96c6  jmp dword ptr cs:[eax*4 + 0xd96ce]
    X86_AT(c, 0xd96c6u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xD96CEu)));
      switch (t) {
      case 0xd9712u: goto L_d9712;
      case 0xd971bu: goto L_d971b;
      case 0xd9724u: goto L_d9724;
      case 0xd972du: goto L_d972d;
      case 0xd9736u: goto L_d9736;
      case 0xd973fu: goto L_d973f;
      default: x86_jump(c, t); return; } }
L_d9712:
    X86_TICK(c, 14);
    // 0d9712  or byte ptr [0xb4378], 1
    X86_AT(c, 0xd9712u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4378u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
    // 0d9719  jmp 0xd9741
    X86_AT(c, 0xd9719u);
    goto L_d9741;
L_d971b:
    X86_TICK(c, 14);
    // 0d971b  or byte ptr [0xb4378], 2
    X86_AT(c, 0xd971bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4378u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 0d9722  jmp 0xd9741
    X86_AT(c, 0xd9722u);
    goto L_d9741;
L_d9724:
    X86_TICK(c, 14);
    // 0d9724  or byte ptr [0xb4378], 4
    X86_AT(c, 0xd9724u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4378u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 0d972b  jmp 0xd9741
    X86_AT(c, 0xd972bu);
    goto L_d9741;
L_d972d:
    X86_TICK(c, 14);
    // 0d972d  or byte ptr [0xb4378], 8
    X86_AT(c, 0xd972du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4378u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x8u, 1)); }
    // 0d9734  jmp 0xd9741
    X86_AT(c, 0xd9734u);
    goto L_d9741;
L_d9736:
    X86_TICK(c, 14);
    // 0d9736  or byte ptr [0xb4378], 0x10
    X86_AT(c, 0xd9736u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB4378u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
    // 0d973d  jmp 0xd9741
    X86_AT(c, 0xd973du);
    goto L_d9741;
L_d973f:
    X86_TICK(c, 2);
    // 0d973f  mov bl, 1
    X86_AT(c, 0xd973fu);
    s8(c, 3, 0x1u);
L_d9741:
    X86_TICK(c, 7);
    // 0d9741  and bl, bl
    X86_AT(c, 0xd9741u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d9743  je 0xd96ac
    X86_AT(c, 0xd9743u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd96acu); goto L_d96ac; }
    X86_TICK(c, 13);
    // 0d9749  push 0
    X86_AT(c, 0xd9749u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d974b  push 0x46
    X86_AT(c, 0xd974bu);
    { uint32_t v = 0x46u; push32(c, v); }
    // 0d974d  mov ecx, ebp
    X86_AT(c, 0xd974du);
    c.r[1] = c.r[5];
    // 0d974f  call 0xd9508
    X86_AT(c, 0xd974fu);
    push32(c, 0xd9754u); x86_call_known(c, 0xd9508u, f_000d9508); X86_RET(c, 0xd9754u);
    X86_TICK(c, 18);
    // 0d9754  mov dword ptr [0xb437c], eax
    X86_AT(c, 0xd9754u);
    wr32((c.sbase[3] + (uint32_t)(0xB437Cu)), c.r[0]);
    // 0d9759  mov eax, dword ptr [0xb47a4]
    X86_AT(c, 0xd9759u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB47A4u)));
    // 0d975e  cmp byte ptr [eax], 0x2e
    X86_AT(c, 0xd975eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x2Eu, 0, 1);
    // 0d9761  jne 0xd979d
    X86_AT(c, 0xd9761u);
    if (x86_cc(c, 5)) { goto L_d979d; }
    X86_TICK(c, 22);
    // 0d9763  inc dword ptr [0xb47a4]
    X86_AT(c, 0xd9763u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB47A4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d9769  mov eax, dword ptr [0xb47a4]
    X86_AT(c, 0xd9769u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB47A4u)));
    // 0d976e  cmp byte ptr [eax], 0x2d
    X86_AT(c, 0xd976eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x2Du, 0, 1);
    // 0d9771  jne 0xd978d
    X86_AT(c, 0xd9771u);
    if (x86_cc(c, 5)) { goto L_d978d; }
L_d9773:
    X86_TICK(c, 23);
    // 0d9773  inc dword ptr [0xb47a4]
    X86_AT(c, 0xd9773u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB47A4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d9779  mov eax, dword ptr [0xb47a4]
    X86_AT(c, 0xd9779u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB47A4u)));
    // 0d977e  mov al, byte ptr [eax]
    X86_AT(c, 0xd977eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0d9780  mov byte ptr [ebp - 5], al
    X86_AT(c, 0xd9780u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
    // 0d9783  cmp al, 0x30
    X86_AT(c, 0xd9783u);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 0d9785  jb 0xd979d
    X86_AT(c, 0xd9785u);
    if (x86_cc(c, 2)) { goto L_d979d; }
    X86_TICK(c, 7);
    // 0d9787  cmp al, 0x39
    X86_AT(c, 0xd9787u);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 0d9789  jbe 0xd9773
    X86_AT(c, 0xd9789u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xd9773u); goto L_d9773; }
    X86_TICK(c, 7);
    // 0d978b  jmp 0xd979d
    X86_AT(c, 0xd978bu);
    goto L_d979d;
L_d978d:
    X86_TICK(c, 13);
    // 0d978d  push 1
    X86_AT(c, 0xd978du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d978f  push 0x50
    X86_AT(c, 0xd978fu);
    { uint32_t v = 0x50u; push32(c, v); }
    // 0d9791  mov ecx, ebp
    X86_AT(c, 0xd9791u);
    c.r[1] = c.r[5];
    // 0d9793  call 0xd9508
    X86_AT(c, 0xd9793u);
    push32(c, 0xd9798u); x86_call_known(c, 0xd9508u, f_000d9508); X86_RET(c, 0xd9798u);
    X86_TICK(c, 2);
    // 0d9798  mov dword ptr [0xb4380], eax
    X86_AT(c, 0xd9798u);
    wr32((c.sbase[3] + (uint32_t)(0xB4380u)), c.r[0]);
L_d979d:
    X86_TICK(c, 16);
    // 0d979d  mov eax, dword ptr [0xb47a4]
    X86_AT(c, 0xd979du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB47A4u)));
    // 0d97a2  cmp byte ptr [eax], 0x68
    X86_AT(c, 0xd97a2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x68u, 0, 1);
    // 0d97a5  jne 0xd97b0
    X86_AT(c, 0xd97a5u);
    if (x86_cc(c, 5)) { goto L_d97b0; }
    X86_TICK(c, 9);
    // 0d97a7  mov byte ptr [0xb4384], 0
    X86_AT(c, 0xd97a7u);
    wr8((c.sbase[3] + (uint32_t)(0xB4384u)), 0x0u);
    // 0d97ae  jmp 0xd97d4
    X86_AT(c, 0xd97aeu);
    goto L_d97d4;
L_d97b0:
    X86_TICK(c, 16);
    // 0d97b0  mov eax, dword ptr [0xb47a4]
    X86_AT(c, 0xd97b0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB47A4u)));
    // 0d97b5  cmp byte ptr [eax], 0x6c
    X86_AT(c, 0xd97b5u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x6Cu, 0, 1);
    // 0d97b8  jne 0xd97c3
    X86_AT(c, 0xd97b8u);
    if (x86_cc(c, 5)) { goto L_d97c3; }
    X86_TICK(c, 9);
    // 0d97ba  mov byte ptr [0xb4384], 2
    X86_AT(c, 0xd97bau);
    wr8((c.sbase[3] + (uint32_t)(0xB4384u)), 0x2u);
    // 0d97c1  jmp 0xd97d4
    X86_AT(c, 0xd97c1u);
    goto L_d97d4;
L_d97c3:
    X86_TICK(c, 16);
    // 0d97c3  mov eax, dword ptr [0xb47a4]
    X86_AT(c, 0xd97c3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB47A4u)));
    // 0d97c8  cmp byte ptr [eax], 0x4c
    X86_AT(c, 0xd97c8u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x4Cu, 0, 1);
    // 0d97cb  jne 0xd97da
    X86_AT(c, 0xd97cbu);
    if (x86_cc(c, 5)) { goto L_d97da; }
    X86_TICK(c, 2);
    // 0d97cd  mov byte ptr [0xb4384], 3
    X86_AT(c, 0xd97cdu);
    wr8((c.sbase[3] + (uint32_t)(0xB4384u)), 0x3u);
L_d97d4:
    X86_TICK(c, 6);
    // 0d97d4  inc dword ptr [0xb47a4]
    X86_AT(c, 0xd97d4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB47A4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_d97da:
    X86_TICK(c, 21);
    // 0d97da  mov eax, dword ptr [0xb47a4]
    X86_AT(c, 0xd97dau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB47A4u)));
    // 0d97df  mov al, byte ptr [eax]
    X86_AT(c, 0xd97dfu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0d97e1  push eax
    X86_AT(c, 0xd97e1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d97e2  mov ecx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xd97e2u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0d97e5  call dword ptr [ebp + 0xc]
    X86_AT(c, 0xd97e5u);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, 0xd97e8u); x86_call(c, t); X86_RET(c, 0xd97e8u); }
    X86_TICK(c, 26);
    // 0d97e8  inc dword ptr [0xb47a4]
    X86_AT(c, 0xd97e8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB47A4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d97ee  mov eax, dword ptr [0xb47a4]
    X86_AT(c, 0xd97eeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB47A4u)));
    // 0d97f3  sub eax, esi
    X86_AT(c, 0xd97f3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0d97f5  sub dword ptr [0xb479c], eax
    X86_AT(c, 0xd97f5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB479Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0d97fb  jmp 0xd9628
    X86_AT(c, 0xd97fbu);
    X86_POLL(c, 0xd9628u); goto L_d9628;
L_d9800:
    X86_TICK(c, 28);
    // 0d9800  pop edi
    X86_AT(c, 0xd9800u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d9801  pop esi
    X86_AT(c, 0xd9801u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d9802  pop ebx
    X86_AT(c, 0xd9802u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d9803  leave 
    X86_AT(c, 0xd9803u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d9804  ret 0xc
    X86_AT(c, 0xd9804u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xd9618u, "ran off the end of a function");
}
}
