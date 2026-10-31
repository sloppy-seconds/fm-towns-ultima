#include "p_game_funcs.h"
namespace p_game {
void f_000fb075(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0fb075  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0xfb075u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 0fb078  pop esi
    X86_AT(c, 0xfb078u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fb079  pop ebx
    X86_AT(c, 0xfb079u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fb07a  leave 
    X86_AT(c, 0xfb07au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fb07b  ret 
    X86_AT(c, 0xfb07bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfb075u, "ran off the end of a function");
}
void f_000fb07c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0fb07c  push 7
    X86_AT(c, 0xfb07cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb07e  call 0xe693c
    X86_AT(c, 0xfb07eu);
    push32(c, 0xfb083u); f_000e693c(c); X86_RET(c, 0xfb083u);
    X86_TICK(c, 9);
    // 0fb083  push 3
    X86_AT(c, 0xfb083u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0fb085  call 0xe1944
    X86_AT(c, 0xfb085u);
    push32(c, 0xfb08au); f_000e1944(c); X86_RET(c, 0xfb08au);
    X86_TICK(c, 11);
    // 0fb08a  push 0xb448
    X86_AT(c, 0xfb08au);
    { uint32_t v = 0xB448u; push32(c, v); }
    // 0fb08f  push 7
    X86_AT(c, 0xfb08fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb091  call 0xe5654
    X86_AT(c, 0xfb091u);
    push32(c, 0xfb096u); f_000e5654(c); X86_RET(c, 0xfb096u);
    X86_TICK(c, 9);
    // 0fb096  push 7
    X86_AT(c, 0xfb096u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb098  call 0xe6c68
    X86_AT(c, 0xfb098u);
    push32(c, 0xfb09du); f_000e6c68(c); X86_RET(c, 0xfb09du);
    X86_TICK(c, 9);
    // 0fb09d  push 2
    X86_AT(c, 0xfb09du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0fb09f  call 0xe9740
    X86_AT(c, 0xfb09fu);
    push32(c, 0xfb0a4u); f_000e9740(c); X86_RET(c, 0xfb0a4u);
    X86_TICK(c, 12);
    // 0fb0a4  add esp, 0x18
    X86_AT(c, 0xfb0a4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0fb0a7  ret 
    X86_AT(c, 0xfb0a7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfb07cu, "ran off the end of a function");
}
void f_000fb0a8(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0fb0a8  push ebp
    X86_AT(c, 0xfb0a8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fb0a9  mov ebp, esp
    X86_AT(c, 0xfb0a9u);
    c.r[5] = c.r[4];
    // 0fb0ab  push eax
    X86_AT(c, 0xfb0abu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fb0ac  push 7
    X86_AT(c, 0xfb0acu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb0ae  call 0xe693c
    X86_AT(c, 0xfb0aeu);
    push32(c, 0xfb0b3u); f_000e693c(c); X86_RET(c, 0xfb0b3u);
    X86_TICK(c, 11);
    // 0fb0b3  push 0xb480
    X86_AT(c, 0xfb0b3u);
    { uint32_t v = 0xB480u; push32(c, v); }
    // 0fb0b8  push 7
    X86_AT(c, 0xfb0b8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb0ba  call 0xe5654
    X86_AT(c, 0xfb0bau);
    push32(c, 0xfb0bfu); f_000e5654(c); X86_RET(c, 0xfb0bfu);
    X86_TICK(c, 34);
    // 0fb0bf  lea eax, [ebp - 1]
    X86_AT(c, 0xfb0bfu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0fb0c2  push eax
    X86_AT(c, 0xfb0c2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fb0c3  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfb0c3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fb0c8  lea edx, [eax + eax*4]
    X86_AT(c, 0xfb0c8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fb0cb  lea edx, [eax + edx*2]
    X86_AT(c, 0xfb0cbu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fb0ce  shl edx, 5
    X86_AT(c, 0xfb0ceu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fb0d1  sub edx, eax
    X86_AT(c, 0xfb0d1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fb0d3  mov al, byte ptr [edx + 0xcdebe]
    X86_AT(c, 0xfb0d3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBEu))));
    // 0fb0d9  push eax
    X86_AT(c, 0xfb0d9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fb0da  push 0xa
    X86_AT(c, 0xfb0dau);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0fb0dc  push 0xcfbe8
    X86_AT(c, 0xfb0dcu);
    { uint32_t v = 0xCFBE8u; push32(c, v); }
    // 0fb0e1  call 0xe53e0
    X86_AT(c, 0xfb0e1u);
    push32(c, 0xfb0e6u); f_000e53e0(c); X86_RET(c, 0xfb0e6u);
    X86_TICK(c, 11);
    // 0fb0e6  push eax
    X86_AT(c, 0xfb0e6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fb0e7  push 7
    X86_AT(c, 0xfb0e7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb0e9  call 0xe6cb0
    X86_AT(c, 0xfb0e9u);
    push32(c, 0xfb0eeu); f_000e6cb0(c); X86_RET(c, 0xfb0eeu);
    X86_TICK(c, 11);
    // 0fb0ee  push 0xb4a0
    X86_AT(c, 0xfb0eeu);
    { uint32_t v = 0xB4A0u; push32(c, v); }
    // 0fb0f3  push 7
    X86_AT(c, 0xfb0f3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb0f5  call 0xe5654
    X86_AT(c, 0xfb0f5u);
    push32(c, 0xfb0fau); f_000e5654(c); X86_RET(c, 0xfb0fau);
    X86_TICK(c, 9);
    // 0fb0fa  push 7
    X86_AT(c, 0xfb0fau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb0fc  call 0xe6c68
    X86_AT(c, 0xfb0fcu);
    push32(c, 0xfb101u); f_000e6c68(c); X86_RET(c, 0xfb101u);
    X86_TICK(c, 7);
    // 0fb101  call 0xfcd90
    X86_AT(c, 0xfb101u);
    push32(c, 0xfb106u); f_000fcd90(c); X86_RET(c, 0xfb106u);
    X86_TICK(c, 9);
    // 0fb106  push 0x200
    X86_AT(c, 0xfb106u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 0fb10b  call 0xe1a7c
    X86_AT(c, 0xfb10bu);
    push32(c, 0xfb110u); f_000e1a7c(c); X86_RET(c, 0xfb110u);
    X86_TICK(c, 9);
    // 0fb110  add esp, 0x34
    X86_AT(c, 0xfb110u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0fb113  and eax, eax
    X86_AT(c, 0xfb113u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0fb115  jne 0xfb177
    X86_AT(c, 0xfb115u);
    if (x86_cc(c, 5)) { goto L_fb177; }
    X86_TICK(c, 25);
    // 0fb117  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfb117u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fb11c  lea edx, [eax + eax*4]
    X86_AT(c, 0xfb11cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fb11f  lea edx, [eax + edx*2]
    X86_AT(c, 0xfb11fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fb122  shl edx, 5
    X86_AT(c, 0xfb122u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fb125  sub edx, eax
    X86_AT(c, 0xfb125u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fb127  cmp byte ptr [edx + 0xcdebe], 0x41
    X86_AT(c, 0xfb127u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBEu))), 0x41u, 0, 1);
    // 0fb12e  je 0xfb177
    X86_AT(c, 0xfb12eu);
    if (x86_cc(c, 4)) { goto L_fb177; }
    X86_TICK(c, 9);
    // 0fb130  push 0
    X86_AT(c, 0xfb130u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0fb132  call 0xe1944
    X86_AT(c, 0xfb132u);
    push32(c, 0xfb137u); f_000e1944(c); X86_RET(c, 0xfb137u);
    X86_TICK(c, 11);
    // 0fb137  push 0xb4b4
    X86_AT(c, 0xfb137u);
    { uint32_t v = 0xB4B4u; push32(c, v); }
    // 0fb13c  push 7
    X86_AT(c, 0xfb13cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb13e  call 0xe5654
    X86_AT(c, 0xfb13eu);
    push32(c, 0xfb143u); f_000e5654(c); X86_RET(c, 0xfb143u);
    X86_TICK(c, 9);
    // 0fb143  push 7
    X86_AT(c, 0xfb143u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb145  call 0xe6c68
    X86_AT(c, 0xfb145u);
    push32(c, 0xfb14au); f_000e6c68(c); X86_RET(c, 0xfb14au);
    X86_TICK(c, 34);
    // 0fb14a  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfb14au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fb14f  lea edx, [eax + eax*4]
    X86_AT(c, 0xfb14fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fb152  lea edx, [eax + edx*2]
    X86_AT(c, 0xfb152u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fb155  shl edx, 5
    X86_AT(c, 0xfb155u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fb158  sub edx, eax
    X86_AT(c, 0xfb158u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fb15a  movzx eax, byte ptr [edx + 0xcdebe]
    X86_AT(c, 0xfb15au);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBEu)));
    // 0fb161  dec dword ptr [edx + eax*4 + 0xcddbb]
    X86_AT(c, 0xfb161u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xCDDBBu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0fb168  mov byte ptr [edx + 0xcdebe], 0x41
    X86_AT(c, 0xfb168u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBEu)), 0x41u);
    // 0fb16f  call 0xe1e18
    X86_AT(c, 0xfb16fu);
    push32(c, 0xfb174u); f_000e1e18(c); X86_RET(c, 0xfb174u);
    X86_TICK(c, 2);
    // 0fb174  add esp, 0x10
    X86_AT(c, 0xfb174u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_fb177:
    X86_TICK(c, 16);
    // 0fb177  leave 
    X86_AT(c, 0xfb177u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fb178  ret 
    X86_AT(c, 0xfb178u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfb0a8u, "ran off the end of a function");
}
void f_000fb17c(X86Cpu& c) {
    X86_TICK(c, 4);
    // 0fb17c  mov ecx, 0xbe578
    X86_AT(c, 0xfb17cu);
    c.r[1] = 0xBE578u;
    // 0fb181  sub eax, eax
    X86_AT(c, 0xfb181u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_fb183:
    X86_TICK(c, 7);
    // 0fb183  cmp eax, 0xb
    X86_AT(c, 0xfb183u);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0fb186  jge 0xfb18f
    X86_AT(c, 0xfb186u);
    if (x86_cc(c, 13)) { goto L_fb18f; }
    X86_TICK(c, 13);
    // 0fb188  mov byte ptr [ecx], 0x26
    X86_AT(c, 0xfb188u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x26u);
    // 0fb18b  inc ecx
    X86_AT(c, 0xfb18bu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0fb18c  inc eax
    X86_AT(c, 0xfb18cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0fb18d  jmp 0xfb183
    X86_AT(c, 0xfb18du);
    X86_POLL(c, 0xfb183u); goto L_fb183;
L_fb18f:
    X86_TICK(c, 2);
    // 0fb18f  sub eax, eax
    X86_AT(c, 0xfb18fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_fb191:
    X86_TICK(c, 7);
    // 0fb191  cmp eax, 0xb
    X86_AT(c, 0xfb191u);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0fb194  jge 0xfb19d
    X86_AT(c, 0xfb194u);
    if (x86_cc(c, 13)) { goto L_fb19d; }
    X86_TICK(c, 13);
    // 0fb196  mov byte ptr [ecx], 0x27
    X86_AT(c, 0xfb196u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x27u);
    // 0fb199  inc ecx
    X86_AT(c, 0xfb199u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0fb19a  inc eax
    X86_AT(c, 0xfb19au);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0fb19b  jmp 0xfb191
    X86_AT(c, 0xfb19bu);
    X86_POLL(c, 0xfb191u); goto L_fb191;
L_fb19d:
    X86_TICK(c, 2);
    // 0fb19d  sub eax, eax
    X86_AT(c, 0xfb19du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_fb19f:
    X86_TICK(c, 7);
    // 0fb19f  cmp eax, 0xb
    X86_AT(c, 0xfb19fu);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0fb1a2  jge 0xfb1ab
    X86_AT(c, 0xfb1a2u);
    if (x86_cc(c, 13)) { goto L_fb1ab; }
    X86_TICK(c, 13);
    // 0fb1a4  mov byte ptr [ecx], 0x37
    X86_AT(c, 0xfb1a4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x37u);
    // 0fb1a7  inc ecx
    X86_AT(c, 0xfb1a7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0fb1a8  inc eax
    X86_AT(c, 0xfb1a8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0fb1a9  jmp 0xfb19f
    X86_AT(c, 0xfb1a9u);
    X86_POLL(c, 0xfb19fu); goto L_fb19f;
L_fb1ab:
    X86_TICK(c, 2);
    // 0fb1ab  sub eax, eax
    X86_AT(c, 0xfb1abu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_fb1ad:
    X86_TICK(c, 7);
    // 0fb1ad  cmp eax, 0xb
    X86_AT(c, 0xfb1adu);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0fb1b0  jge 0xfb1b9
    X86_AT(c, 0xfb1b0u);
    if (x86_cc(c, 13)) { goto L_fb1b9; }
    X86_TICK(c, 13);
    // 0fb1b2  mov byte ptr [ecx], 0
    X86_AT(c, 0xfb1b2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x0u);
    // 0fb1b5  inc ecx
    X86_AT(c, 0xfb1b5u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0fb1b6  inc eax
    X86_AT(c, 0xfb1b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0fb1b7  jmp 0xfb1ad
    X86_AT(c, 0xfb1b7u);
    X86_POLL(c, 0xfb1adu); goto L_fb1ad;
L_fb1b9:
    X86_TICK(c, 2);
    // 0fb1b9  sub eax, eax
    X86_AT(c, 0xfb1b9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_fb1bb:
    X86_TICK(c, 7);
    // 0fb1bb  cmp eax, 0xb
    X86_AT(c, 0xfb1bbu);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0fb1be  jge 0xfb1c7
    X86_AT(c, 0xfb1beu);
    if (x86_cc(c, 13)) { goto L_fb1c7; }
    X86_TICK(c, 13);
    // 0fb1c0  mov byte ptr [ecx], 0
    X86_AT(c, 0xfb1c0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x0u);
    // 0fb1c3  inc ecx
    X86_AT(c, 0xfb1c3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0fb1c4  inc eax
    X86_AT(c, 0xfb1c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0fb1c5  jmp 0xfb1bb
    X86_AT(c, 0xfb1c5u);
    X86_POLL(c, 0xfb1bbu); goto L_fb1bb;
L_fb1c7:
    X86_TICK(c, 2);
    // 0fb1c7  sub eax, eax
    X86_AT(c, 0xfb1c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_fb1c9:
    X86_TICK(c, 7);
    // 0fb1c9  cmp eax, 0xb
    X86_AT(c, 0xfb1c9u);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0fb1cc  jge 0xfb1d5
    X86_AT(c, 0xfb1ccu);
    if (x86_cc(c, 13)) { goto L_fb1d5; }
    X86_TICK(c, 13);
    // 0fb1ce  mov byte ptr [ecx], 0
    X86_AT(c, 0xfb1ceu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x0u);
    // 0fb1d1  inc ecx
    X86_AT(c, 0xfb1d1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0fb1d2  inc eax
    X86_AT(c, 0xfb1d2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0fb1d3  jmp 0xfb1c9
    X86_AT(c, 0xfb1d3u);
    X86_POLL(c, 0xfb1c9u); goto L_fb1c9;
L_fb1d5:
    X86_TICK(c, 2);
    // 0fb1d5  sub eax, eax
    X86_AT(c, 0xfb1d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_fb1d7:
    X86_TICK(c, 7);
    // 0fb1d7  cmp eax, 0xb
    X86_AT(c, 0xfb1d7u);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0fb1da  jge 0xfb1e3
    X86_AT(c, 0xfb1dau);
    if (x86_cc(c, 13)) { goto L_fb1e3; }
    X86_TICK(c, 13);
    // 0fb1dc  mov byte ptr [ecx], 7
    X86_AT(c, 0xfb1dcu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x7u);
    // 0fb1df  inc ecx
    X86_AT(c, 0xfb1dfu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0fb1e0  inc eax
    X86_AT(c, 0xfb1e0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0fb1e1  jmp 0xfb1d7
    X86_AT(c, 0xfb1e1u);
    X86_POLL(c, 0xfb1d7u); goto L_fb1d7;
L_fb1e3:
    X86_TICK(c, 2);
    // 0fb1e3  sub eax, eax
    X86_AT(c, 0xfb1e3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_fb1e5:
    X86_TICK(c, 7);
    // 0fb1e5  cmp eax, 0xb
    X86_AT(c, 0xfb1e5u);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0fb1e8  jge 0xfb1f1
    X86_AT(c, 0xfb1e8u);
    if (x86_cc(c, 13)) { goto L_fb1f1; }
    X86_TICK(c, 13);
    // 0fb1ea  mov byte ptr [ecx], 6
    X86_AT(c, 0xfb1eau);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x6u);
    // 0fb1ed  inc ecx
    X86_AT(c, 0xfb1edu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0fb1ee  inc eax
    X86_AT(c, 0xfb1eeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0fb1ef  jmp 0xfb1e5
    X86_AT(c, 0xfb1efu);
    X86_POLL(c, 0xfb1e5u); goto L_fb1e5;
L_fb1f1:
    X86_TICK(c, 2);
    // 0fb1f1  sub eax, eax
    X86_AT(c, 0xfb1f1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_fb1f3:
    X86_TICK(c, 7);
    // 0fb1f3  cmp eax, 0xb
    X86_AT(c, 0xfb1f3u);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0fb1f6  jge 0xfb1ff
    X86_AT(c, 0xfb1f6u);
    if (x86_cc(c, 13)) { goto L_fb1ff; }
    X86_TICK(c, 13);
    // 0fb1f8  mov byte ptr [ecx], 5
    X86_AT(c, 0xfb1f8u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x5u);
    // 0fb1fb  inc ecx
    X86_AT(c, 0xfb1fbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0fb1fc  inc eax
    X86_AT(c, 0xfb1fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0fb1fd  jmp 0xfb1f3
    X86_AT(c, 0xfb1fdu);
    X86_POLL(c, 0xfb1f3u); goto L_fb1f3;
L_fb1ff:
    X86_TICK(c, 2);
    // 0fb1ff  sub eax, eax
    X86_AT(c, 0xfb1ffu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_fb201:
    X86_TICK(c, 7);
    // 0fb201  cmp eax, 0xb
    X86_AT(c, 0xfb201u);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0fb204  jge 0xfb20d
    X86_AT(c, 0xfb204u);
    if (x86_cc(c, 13)) { goto L_fb20d; }
    X86_TICK(c, 13);
    // 0fb206  mov byte ptr [ecx], 4
    X86_AT(c, 0xfb206u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x4u);
    // 0fb209  inc ecx
    X86_AT(c, 0xfb209u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0fb20a  inc eax
    X86_AT(c, 0xfb20au);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0fb20b  jmp 0xfb201
    X86_AT(c, 0xfb20bu);
    X86_POLL(c, 0xfb201u); goto L_fb201;
L_fb20d:
    X86_TICK(c, 2);
    // 0fb20d  sub eax, eax
    X86_AT(c, 0xfb20du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_fb20f:
    X86_TICK(c, 7);
    // 0fb20f  cmp eax, 0xb
    X86_AT(c, 0xfb20fu);
    (void)x86_sub(c, c.r[0], 0xBu, 0, 4);
    // 0fb212  jge 0xfb21b
    X86_AT(c, 0xfb212u);
    if (x86_cc(c, 13)) { goto L_fb21b; }
    X86_TICK(c, 13);
    // 0fb214  mov byte ptr [ecx], 2
    X86_AT(c, 0xfb214u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), 0x2u);
    // 0fb217  inc ecx
    X86_AT(c, 0xfb217u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0fb218  inc eax
    X86_AT(c, 0xfb218u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0fb219  jmp 0xfb20f
    X86_AT(c, 0xfb219u);
    X86_POLL(c, 0xfb20fu); goto L_fb20f;
L_fb21b:
    X86_TICK(c, 10);
    // 0fb21b  ret 
    X86_AT(c, 0xfb21bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfb17cu, "ran off the end of a function");
}
void f_000fb21c(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0fb21c  push ebp
    X86_AT(c, 0xfb21cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fb21d  mov ebp, esp
    X86_AT(c, 0xfb21du);
    c.r[5] = c.r[4];
    // 0fb21f  push edi
    X86_AT(c, 0xfb21fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fb220  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xfb220u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0fb223  mov ecx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xfb223u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0fb226  mov eax, edi
    X86_AT(c, 0xfb226u);
    c.r[0] = c.r[7];
    // 0fb228  shl eax, 8
    X86_AT(c, 0xfb228u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fb22b  mov edx, ecx
    X86_AT(c, 0xfb22bu);
    c.r[2] = c.r[1];
    // 0fb22d  shl edx, 4
    X86_AT(c, 0xfb22du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fb230  add edx, eax
    X86_AT(c, 0xfb230u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fb232  mov eax, dword ptr [edx + 0xd4a7c]
    X86_AT(c, 0xfb232u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A7Cu)));
    // 0fb238  and eax, eax
    X86_AT(c, 0xfb238u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0fb23a  jne 0xfb265
    X86_AT(c, 0xfb23au);
    if (x86_cc(c, 5)) { goto L_fb265; }
    X86_TICK(c, 23);
    // 0fb23c  mov eax, edi
    X86_AT(c, 0xfb23cu);
    c.r[0] = c.r[7];
    // 0fb23e  shl eax, 8
    X86_AT(c, 0xfb23eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fb241  mov edx, ecx
    X86_AT(c, 0xfb241u);
    c.r[2] = c.r[1];
    // 0fb243  shl edx, 4
    X86_AT(c, 0xfb243u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fb246  add edx, eax
    X86_AT(c, 0xfb246u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fb248  mov eax, dword ptr [edx + 0xd4a78]
    X86_AT(c, 0xfb248u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A78u)));
    // 0fb24e  cmp eax, 0xffffffff
    X86_AT(c, 0xfb24eu);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFFu, 0, 4);
    // 0fb251  jne 0xfb265
    X86_AT(c, 0xfb251u);
    if (x86_cc(c, 5)) { goto L_fb265; }
    X86_TICK(c, 16);
    // 0fb253  mov eax, edi
    X86_AT(c, 0xfb253u);
    c.r[0] = c.r[7];
    // 0fb255  shl eax, 8
    X86_AT(c, 0xfb255u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fb258  mov edx, ecx
    X86_AT(c, 0xfb258u);
    c.r[2] = c.r[1];
    // 0fb25a  shl edx, 4
    X86_AT(c, 0xfb25au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fb25d  add edx, eax
    X86_AT(c, 0xfb25du);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fb25f  mov eax, dword ptr [edx + 0xd4a74]
    X86_AT(c, 0xfb25fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A74u)));
L_fb265:
    X86_TICK(c, 20);
    // 0fb265  pop edi
    X86_AT(c, 0xfb265u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fb266  leave 
    X86_AT(c, 0xfb266u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fb267  ret 
    X86_AT(c, 0xfb267u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfb21cu, "ran off the end of a function");
}
void f_000fb280(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0fb280  mov eax, dword ptr [esp + 0xc]
    X86_AT(c, 0xfb280u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0fb284  shl eax, 8
    X86_AT(c, 0xfb284u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fb287  mov edx, dword ptr [esp + 0x10]
    X86_AT(c, 0xfb287u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u)));
    // 0fb28b  shl edx, 4
    X86_AT(c, 0xfb28bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fb28e  add edx, eax
    X86_AT(c, 0xfb28eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fb290  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xfb290u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0fb294  mov dword ptr [edx + 0xd4a7c], eax
    X86_AT(c, 0xfb294u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A7Cu)), c.r[0]);
    // 0fb29a  ret 
    X86_AT(c, 0xfb29au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfb280u, "ran off the end of a function");
}
void f_000fb29c(X86Cpu& c) {
    X86_TICK(c, 64);
    // 0fb29c  push ebp
    X86_AT(c, 0xfb29cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fb29d  mov ebp, esp
    X86_AT(c, 0xfb29du);
    c.r[5] = c.r[4];
    // 0fb29f  push esi
    X86_AT(c, 0xfb29fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fb2a0  push edi
    X86_AT(c, 0xfb2a0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fb2a1  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xfb2a1u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0fb2a4  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xfb2a4u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0fb2a7  mov ecx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xfb2a7u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0fb2aa  mov eax, ecx
    X86_AT(c, 0xfb2aau);
    c.r[0] = c.r[1];
    // 0fb2ac  shl eax, 4
    X86_AT(c, 0xfb2acu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0fb2af  mov edx, esi
    X86_AT(c, 0xfb2afu);
    c.r[2] = c.r[6];
    // 0fb2b1  shl edx, 8
    X86_AT(c, 0xfb2b1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 0fb2b4  add edx, eax
    X86_AT(c, 0xfb2b4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fb2b6  mov dword ptr [edx + 0xd4a74], edi
    X86_AT(c, 0xfb2b6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A74u)), c.r[7]);
    // 0fb2bc  lea edx, [esi + eax*1]
    X86_AT(c, 0xfb2bcu);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 0fb2bf  mov eax, edi
    X86_AT(c, 0xfb2bfu);
    c.r[0] = c.r[7];
    // 0fb2c1  mov byte ptr [edx + 0xd5a74], al
    X86_AT(c, 0xfb2c1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xD5A74u)), g8(c, 0));
    // 0fb2c7  pop edi
    X86_AT(c, 0xfb2c7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fb2c8  pop esi
    X86_AT(c, 0xfb2c8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fb2c9  leave 
    X86_AT(c, 0xfb2c9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fb2ca  ret 
    X86_AT(c, 0xfb2cau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfb29cu, "ran off the end of a function");
}
void f_000fb2cc(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0fb2cc  mov eax, dword ptr [esp + 0xc]
    X86_AT(c, 0xfb2ccu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0fb2d0  shl eax, 8
    X86_AT(c, 0xfb2d0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fb2d3  mov edx, dword ptr [esp + 0x10]
    X86_AT(c, 0xfb2d3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x10u)));
    // 0fb2d7  shl edx, 4
    X86_AT(c, 0xfb2d7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fb2da  add edx, eax
    X86_AT(c, 0xfb2dau);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fb2dc  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xfb2dcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0fb2e0  mov dword ptr [edx + 0xd4a78], eax
    X86_AT(c, 0xfb2e0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A78u)), c.r[0]);
    // 0fb2e6  ret 
    X86_AT(c, 0xfb2e6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfb2ccu, "ran off the end of a function");
}
void f_000fb2e8(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0fb2e8  push ebp
    X86_AT(c, 0xfb2e8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fb2e9  mov ebp, esp
    X86_AT(c, 0xfb2e9u);
    c.r[5] = c.r[4];
    // 0fb2eb  sub esp, 0xc
    X86_AT(c, 0xfb2ebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0fb2ee  push ebx
    X86_AT(c, 0xfb2eeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fb2ef  push esi
    X86_AT(c, 0xfb2efu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fb2f0  push edi
    X86_AT(c, 0xfb2f0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fb2f1  push 7
    X86_AT(c, 0xfb2f1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb2f3  call 0xe693c
    X86_AT(c, 0xfb2f3u);
    push32(c, 0xfb2f8u); f_000e693c(c); X86_RET(c, 0xfb2f8u);
    X86_TICK(c, 14);
    // 0fb2f8  push dword ptr [ebp + 8]
    X86_AT(c, 0xfb2f8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0fb2fb  push 7
    X86_AT(c, 0xfb2fbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb2fd  call 0xe5654
    X86_AT(c, 0xfb2fdu);
    push32(c, 0xfb302u); f_000e5654(c); X86_RET(c, 0xfb302u);
    X86_TICK(c, 9);
    // 0fb302  push 7
    X86_AT(c, 0xfb302u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb304  call 0xe6c68
    X86_AT(c, 0xfb304u);
    push32(c, 0xfb309u); f_000e6c68(c); X86_RET(c, 0xfb309u);
    X86_TICK(c, 7);
    // 0fb309  call 0xe8470
    X86_AT(c, 0xfb309u);
    push32(c, 0xfb30eu); f_000e8470(c); X86_RET(c, 0xfb30eu);
    X86_TICK(c, 19);
    // 0fb30e  mov eax, dword ptr [0xd4a68]
    X86_AT(c, 0xfb30eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A68u)));
    // 0fb313  dec eax
    X86_AT(c, 0xfb313u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0fb314  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xfb314u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0fb317  sub eax, eax
    X86_AT(c, 0xfb317u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fb319  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xfb319u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0fb31c  xchg ebx, eax
    X86_AT(c, 0xfb31cu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0fb31d  mov esi, ebx
    X86_AT(c, 0xfb31du);
    c.r[6] = c.r[3];
    // 0fb31f  add esp, 0x10
    X86_AT(c, 0xfb31fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_fb322:
    X86_TICK(c, 7);
    // 0fb322  cmp esi, 0x11
    X86_AT(c, 0xfb322u);
    (void)x86_sub(c, c.r[6], 0x11u, 0, 4);
    // 0fb325  jge 0xfb431
    X86_AT(c, 0xfb325u);
    if (x86_cc(c, 13)) { goto L_fb431; }
    X86_TICK(c, 9);
    // 0fb32b  mov dword ptr [ebp - 0xc], esi
    X86_AT(c, 0xfb32bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[6]);
    // 0fb32e  cmp esi, 0x10
    X86_AT(c, 0xfb32eu);
    (void)x86_sub(c, c.r[6], 0x10u, 0, 4);
    // 0fb331  jne 0xfb33a
    X86_AT(c, 0xfb331u);
    if (x86_cc(c, 5)) { goto L_fb33a; }
    X86_TICK(c, 2);
    // 0fb333  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xfb333u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_fb33a:
    X86_TICK(c, 2);
    // 0fb33a  sub edi, edi
    X86_AT(c, 0xfb33au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_fb33c:
    X86_TICK(c, 7);
    // 0fb33c  cmp edi, 0x11
    X86_AT(c, 0xfb33cu);
    (void)x86_sub(c, c.r[7], 0x11u, 0, 4);
    // 0fb33f  jge 0xfb42b
    X86_AT(c, 0xfb33fu);
    if (x86_cc(c, 13)) { goto L_fb42b; }
    X86_TICK(c, 7);
    // 0fb345  cmp edi, 0x10
    X86_AT(c, 0xfb345u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0fb348  je 0xfb35f
    X86_AT(c, 0xfb348u);
    if (x86_cc(c, 4)) { goto L_fb35f; }
    X86_TICK(c, 25);
    // 0fb34a  mov eax, edi
    X86_AT(c, 0xfb34au);
    c.r[0] = c.r[7];
    // 0fb34c  shl eax, 8
    X86_AT(c, 0xfb34cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fb34f  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xfb34fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0fb352  shl edx, 4
    X86_AT(c, 0xfb352u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fb355  add edx, eax
    X86_AT(c, 0xfb355u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fb357  mov eax, dword ptr [edx + 0xd4a74]
    X86_AT(c, 0xfb357u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A74u)));
    // 0fb35d  jmp 0xfb36b
    X86_AT(c, 0xfb35du);
    goto L_fb36b;
L_fb35f:
    X86_TICK(c, 11);
    // 0fb35f  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xfb35fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0fb362  shl eax, 4
    X86_AT(c, 0xfb362u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0fb365  mov eax, dword ptr [eax + 0xd4a74]
    X86_AT(c, 0xfb365u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4A74u)));
L_fb36b:
    X86_TICK(c, 10);
    // 0fb36b  xchg edx, eax
    X86_AT(c, 0xfb36bu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0fb36c  cmp edx, 0xf
    X86_AT(c, 0xfb36cu);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0fb36f  ja 0xfb3e4
    X86_AT(c, 0xfb36fu);
    if (x86_cc(c, 7)) { goto L_fb3e4; }
    X86_TICK(c, 7);
    // 0fb375  jmp dword ptr cs:[edx*4 + 0xfb37d]
    X86_AT(c, 0xfb375u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xFB37Du)));
      switch (t) {
      case 0xfb3bdu: goto L_fb3bd;
      case 0xfb3c1u: goto L_fb3c1;
      case 0xfb3c8u: goto L_fb3c8;
      case 0xfb3cfu: goto L_fb3cf;
      case 0xfb3d6u: goto L_fb3d6;
      case 0xfb3ddu: goto L_fb3dd;
      case 0xfb3e4u: goto L_fb3e4;
      default: x86_jump(c, t); return; } }
L_fb3bd:
    X86_TICK(c, 9);
    // 0fb3bd  sub ebx, ebx
    X86_AT(c, 0xfb3bdu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0fb3bf  jmp 0xfb3e9
    X86_AT(c, 0xfb3bfu);
    goto L_fb3e9;
L_fb3c1:
    X86_TICK(c, 9);
    // 0fb3c1  mov ebx, 1
    X86_AT(c, 0xfb3c1u);
    c.r[3] = 0x1u;
    // 0fb3c6  jmp 0xfb3e9
    X86_AT(c, 0xfb3c6u);
    goto L_fb3e9;
L_fb3c8:
    X86_TICK(c, 9);
    // 0fb3c8  mov ebx, 2
    X86_AT(c, 0xfb3c8u);
    c.r[3] = 0x2u;
    // 0fb3cd  jmp 0xfb3e9
    X86_AT(c, 0xfb3cdu);
    goto L_fb3e9;
L_fb3cf:
    X86_TICK(c, 9);
    // 0fb3cf  mov ebx, 5
    X86_AT(c, 0xfb3cfu);
    c.r[3] = 0x5u;
    // 0fb3d4  jmp 0xfb3e9
    X86_AT(c, 0xfb3d4u);
    goto L_fb3e9;
L_fb3d6:
    X86_TICK(c, 9);
    // 0fb3d6  mov ebx, 4
    X86_AT(c, 0xfb3d6u);
    c.r[3] = 0x4u;
    // 0fb3db  jmp 0xfb3e9
    X86_AT(c, 0xfb3dbu);
    goto L_fb3e9;
L_fb3dd:
    X86_TICK(c, 9);
    // 0fb3dd  mov ebx, 6
    X86_AT(c, 0xfb3ddu);
    c.r[3] = 0x6u;
    // 0fb3e2  jmp 0xfb3e9
    X86_AT(c, 0xfb3e2u);
    goto L_fb3e9;
L_fb3e4:
    X86_TICK(c, 2);
    // 0fb3e4  mov ebx, 3
    X86_AT(c, 0xfb3e4u);
    c.r[3] = 0x3u;
L_fb3e9:
    X86_TICK(c, 38);
    // 0fb3e9  push 0x10
    X86_AT(c, 0xfb3e9u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0fb3eb  push 0x10
    X86_AT(c, 0xfb3ebu);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0fb3ed  mov eax, esi
    X86_AT(c, 0xfb3edu);
    c.r[0] = c.r[6];
    // 0fb3ef  shl eax, 4
    X86_AT(c, 0xfb3efu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0fb3f2  add eax, 0x57
    X86_AT(c, 0xfb3f2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x57u, 0, 4); }
    // 0fb3f5  push eax
    X86_AT(c, 0xfb3f5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fb3f6  mov eax, edi
    X86_AT(c, 0xfb3f6u);
    c.r[0] = c.r[7];
    // 0fb3f8  shl eax, 4
    X86_AT(c, 0xfb3f8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0fb3fb  add eax, 0x32
    X86_AT(c, 0xfb3fbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x32u, 0, 4); }
    // 0fb3fe  push eax
    X86_AT(c, 0xfb3feu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fb3ff  mov eax, ebx
    X86_AT(c, 0xfb3ffu);
    c.r[0] = c.r[3];
    // 0fb401  shl eax, 7
    X86_AT(c, 0xfb401u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0fb404  add eax, 0xd7160
    X86_AT(c, 0xfb404u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xD7160u, 0, 4); }
    // 0fb409  push eax
    X86_AT(c, 0xfb409u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fb40a  call 0xe6288
    X86_AT(c, 0xfb40au);
    push32(c, 0xfb40fu); f_000e6288(c); X86_RET(c, 0xfb40fu);
    X86_TICK(c, 13);
    // 0fb40f  add esp, 0x14
    X86_AT(c, 0xfb40fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0fb412  cmp esi, dword ptr [0xd4a50]
    X86_AT(c, 0xfb412u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xD4A50u))), 0, 4);
    // 0fb418  jne 0xfb425
    X86_AT(c, 0xfb418u);
    if (x86_cc(c, 5)) { goto L_fb425; }
    X86_TICK(c, 11);
    // 0fb41a  cmp edi, dword ptr [0xd4a4c]
    X86_AT(c, 0xfb41au);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu))), 0, 4);
    // 0fb420  jne 0xfb425
    X86_AT(c, 0xfb420u);
    if (x86_cc(c, 5)) { goto L_fb425; }
    X86_TICK(c, 2);
    // 0fb422  mov dword ptr [ebp - 4], ebx
    X86_AT(c, 0xfb422u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[3]);
L_fb425:
    X86_TICK(c, 9);
    // 0fb425  inc edi
    X86_AT(c, 0xfb425u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0fb426  jmp 0xfb33c
    X86_AT(c, 0xfb426u);
    X86_POLL(c, 0xfb33cu); goto L_fb33c;
L_fb42b:
    X86_TICK(c, 9);
    // 0fb42b  inc esi
    X86_AT(c, 0xfb42bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0fb42c  jmp 0xfb322
    X86_AT(c, 0xfb42cu);
    X86_POLL(c, 0xfb322u); goto L_fb322;
L_fb431:
    X86_TICK(c, 9);
    // 0fb431  push 0xb500
    X86_AT(c, 0xfb431u);
    { uint32_t v = 0xB500u; push32(c, v); }
    // 0fb436  call 0xe75f8
    X86_AT(c, 0xfb436u);
    push32(c, 0xfb43bu); f_000e75f8(c); X86_RET(c, 0xfb43bu);
    X86_TICK(c, 4);
    // 0fb43b  sub ebx, ebx
    X86_AT(c, 0xfb43bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0fb43d  add esp, 4
    X86_AT(c, 0xfb43du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_fb440:
    X86_TICK(c, 9);
    // 0fb440  push 7
    X86_AT(c, 0xfb440u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb442  call 0xe4b60
    X86_AT(c, 0xfb442u);
    push32(c, 0xfb447u); f_000e4b60(c); X86_RET(c, 0xfb447u);
    X86_TICK(c, 9);
    // 0fb447  add esp, 4
    X86_AT(c, 0xfb447u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0fb44a  and al, al
    X86_AT(c, 0xfb44au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0fb44c  jne 0xfb4cd
    X86_AT(c, 0xfb44cu);
    if (x86_cc(c, 5)) { goto L_fb4cd; }
    X86_TICK(c, 7);
    // 0fb452  and ebx, ebx
    X86_AT(c, 0xfb452u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0fb454  jne 0xfb489
    X86_AT(c, 0xfb454u);
    if (x86_cc(c, 5)) { goto L_fb489; }
    X86_TICK(c, 46);
    // 0fb456  push 0x10
    X86_AT(c, 0xfb456u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0fb458  push 0x10
    X86_AT(c, 0xfb458u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0fb45a  mov eax, 0xd4a48
    X86_AT(c, 0xfb45au);
    c.r[0] = 0xD4A48u;
    // 0fb45f  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0xfb45fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 0fb462  shl edx, 4
    X86_AT(c, 0xfb462u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fb465  add edx, 0x57
    X86_AT(c, 0xfb465u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x57u, 0, 4); }
    // 0fb468  push edx
    X86_AT(c, 0xfb468u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fb469  mov edx, dword ptr [eax + 4]
    X86_AT(c, 0xfb469u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 0fb46c  shl edx, 4
    X86_AT(c, 0xfb46cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fb46f  add edx, 0x32
    X86_AT(c, 0xfb46fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x32u, 0, 4); }
    // 0fb472  push edx
    X86_AT(c, 0xfb472u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fb473  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xfb473u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0fb476  shl edx, 7
    X86_AT(c, 0xfb476u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[2] = r; }
    // 0fb479  lea eax, [eax + edx*1 + 0x2718]
    X86_AT(c, 0xfb479u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0x2718u);
    // 0fb480  push eax
    X86_AT(c, 0xfb480u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fb481  call 0xe6288
    X86_AT(c, 0xfb481u);
    push32(c, 0xfb486u); f_000e6288(c); X86_RET(c, 0xfb486u);
    X86_TICK(c, 2);
    // 0fb486  add esp, 0x14
    X86_AT(c, 0xfb486u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_fb489:
    X86_TICK(c, 7);
    // 0fb489  cmp ebx, 0x64
    X86_AT(c, 0xfb489u);
    (void)x86_sub(c, c.r[3], 0x64u, 0, 4);
    // 0fb48c  jne 0xfb4b9
    X86_AT(c, 0xfb48cu);
    if (x86_cc(c, 5)) { goto L_fb4b9; }
    X86_TICK(c, 39);
    // 0fb48e  push 0x10
    X86_AT(c, 0xfb48eu);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0fb490  push 0x10
    X86_AT(c, 0xfb490u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0fb492  mov eax, 0xd4a48
    X86_AT(c, 0xfb492u);
    c.r[0] = 0xD4A48u;
    // 0fb497  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0xfb497u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 0fb49a  shl edx, 4
    X86_AT(c, 0xfb49au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fb49d  add edx, 0x57
    X86_AT(c, 0xfb49du);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x57u, 0, 4); }
    // 0fb4a0  push edx
    X86_AT(c, 0xfb4a0u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fb4a1  mov edx, dword ptr [eax + 4]
    X86_AT(c, 0xfb4a1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 0fb4a4  shl edx, 4
    X86_AT(c, 0xfb4a4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fb4a7  add edx, 0x32
    X86_AT(c, 0xfb4a7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x32u, 0, 4); }
    // 0fb4aa  push edx
    X86_AT(c, 0xfb4aau);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fb4ab  add eax, 0x2a98
    X86_AT(c, 0xfb4abu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2A98u, 0, 4); }
    // 0fb4b0  push eax
    X86_AT(c, 0xfb4b0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fb4b1  call 0xe6288
    X86_AT(c, 0xfb4b1u);
    push32(c, 0xfb4b6u); f_000e6288(c); X86_RET(c, 0xfb4b6u);
    X86_TICK(c, 2);
    // 0fb4b6  add esp, 0x14
    X86_AT(c, 0xfb4b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_fb4b9:
    X86_TICK(c, 9);
    // 0fb4b9  inc ebx
    X86_AT(c, 0xfb4b9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0fb4ba  cmp ebx, 0xc8
    X86_AT(c, 0xfb4bau);
    (void)x86_sub(c, c.r[3], 0xC8u, 0, 4);
    // 0fb4c0  jne 0xfb440
    X86_AT(c, 0xfb4c0u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfb440u); goto L_fb440; }
    X86_TICK(c, 9);
    // 0fb4c6  sub ebx, ebx
    X86_AT(c, 0xfb4c6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0fb4c8  jmp 0xfb440
    X86_AT(c, 0xfb4c8u);
    X86_POLL(c, 0xfb440u); goto L_fb440;
L_fb4cd:
    X86_TICK(c, 9);
    // 0fb4cd  push 2
    X86_AT(c, 0xfb4cdu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0fb4cf  call 0xe6c68
    X86_AT(c, 0xfb4cfu);
    push32(c, 0xfb4d4u); f_000e6c68(c); X86_RET(c, 0xfb4d4u);
    X86_TICK(c, 7);
    // 0fb4d4  call 0xe8470
    X86_AT(c, 0xfb4d4u);
    push32(c, 0xfb4d9u); f_000e8470(c); X86_RET(c, 0xfb4d9u);
    X86_TICK(c, 30);
    // 0fb4d9  add esp, 4
    X86_AT(c, 0xfb4d9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0fb4dc  pop edi
    X86_AT(c, 0xfb4dcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fb4dd  pop esi
    X86_AT(c, 0xfb4ddu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fb4de  pop ebx
    X86_AT(c, 0xfb4deu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fb4df  leave 
    X86_AT(c, 0xfb4dfu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fb4e0  ret 
    X86_AT(c, 0xfb4e0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfb2e8u, "ran off the end of a function");
}
void f_000fb4e4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0fb4e4  push esi
    X86_AT(c, 0xfb4e4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fb4e5  call 0xfba20
    X86_AT(c, 0xfb4e5u);
    push32(c, 0xfb4eau); f_000fba20(c); X86_RET(c, 0xfb4eau);
    X86_TICK(c, 25);
    // 0fb4ea  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfb4eau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fb4ef  lea edx, [eax + eax*4]
    X86_AT(c, 0xfb4efu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fb4f2  lea edx, [eax + edx*2]
    X86_AT(c, 0xfb4f2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fb4f5  shl edx, 5
    X86_AT(c, 0xfb4f5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fb4f8  sub edx, eax
    X86_AT(c, 0xfb4f8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fb4fa  cmp dword ptr [edx + 0xcdf57], 5
    X86_AT(c, 0xfb4fau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x5u, 0, 4);
    // 0fb501  jne 0xfb50b
    X86_AT(c, 0xfb501u);
    if (x86_cc(c, 5)) { goto L_fb50b; }
    X86_TICK(c, 13);
    // 0fb503  dec dword ptr [0xd4a68]
    X86_AT(c, 0xfb503u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xD4A68u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0fb509  jmp 0xfb511
    X86_AT(c, 0xfb509u);
    goto L_fb511;
L_fb50b:
    X86_TICK(c, 6);
    // 0fb50b  inc dword ptr [0xd4a68]
    X86_AT(c, 0xfb50bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xD4A68u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_fb511:
    X86_TICK(c, 12);
    // 0fb511  cmp dword ptr [0xd4a68], 0
    X86_AT(c, 0xfb511u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD4A68u))), 0x0u, 0, 4);
    // 0fb518  jne 0xfb528
    X86_AT(c, 0xfb518u);
    if (x86_cc(c, 5)) { goto L_fb528; }
    X86_TICK(c, 9);
    // 0fb51a  mov word ptr [0xd4a48], 0
    X86_AT(c, 0xfb51au);
    wr16((c.sbase[3] + (uint32_t)(0xD4A48u)), 0x0u);
    // 0fb523  jmp 0xfb5a8
    X86_AT(c, 0xfb523u);
    goto L_fb5a8;
L_fb528:
    X86_TICK(c, 7);
    // 0fb528  call 0xfb83c
    X86_AT(c, 0xfb528u);
    push32(c, 0xfb52du); f_000fb83c(c); X86_RET(c, 0xfb52du);
    X86_TICK(c, 30);
    // 0fb52d  push 1
    X86_AT(c, 0xfb52du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0fb52f  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfb52fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fb534  lea edx, [eax + eax*4]
    X86_AT(c, 0xfb534u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fb537  lea edx, [eax + edx*2]
    X86_AT(c, 0xfb537u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fb53a  shl edx, 5
    X86_AT(c, 0xfb53au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fb53d  sub edx, eax
    X86_AT(c, 0xfb53du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fb53f  lea eax, [edx + 0xcdf67]
    X86_AT(c, 0xfb53fu);
    c.r[0] = (uint32_t)(c.r[2] + 0xCDF67u);
    // 0fb545  push eax
    X86_AT(c, 0xfb545u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fb546  add edx, 0xcdf63
    X86_AT(c, 0xfb546u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xCDF63u, 0, 4); }
    // 0fb54c  push edx
    X86_AT(c, 0xfb54cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fb54d  call 0xfbae0
    X86_AT(c, 0xfb54du);
    push32(c, 0xfb552u); f_000fbae0(c); X86_RET(c, 0xfb552u);
    X86_TICK(c, 50);
    // 0fb552  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfb552u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fb557  lea edx, [eax + eax*4]
    X86_AT(c, 0xfb557u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fb55a  lea edx, [eax + edx*2]
    X86_AT(c, 0xfb55au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fb55d  shl edx, 5
    X86_AT(c, 0xfb55du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fb560  sub edx, eax
    X86_AT(c, 0xfb560u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fb562  mov eax, 0xd4a48
    X86_AT(c, 0xfb562u);
    c.r[0] = 0xD4A48u;
    // 0fb567  mov ecx, dword ptr [edx + 0xcdf63]
    X86_AT(c, 0xfb567u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF63u)));
    // 0fb56d  mov dword ptr [eax + 4], ecx
    X86_AT(c, 0xfb56du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), c.r[1]);
    // 0fb570  mov edx, dword ptr [edx + 0xcdf67]
    X86_AT(c, 0xfb570u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF67u)));
    // 0fb576  mov dword ptr [eax + 8], edx
    X86_AT(c, 0xfb576u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)), c.r[2]);
    // 0fb579  mov esi, ecx
    X86_AT(c, 0xfb579u);
    c.r[6] = c.r[1];
    // 0fb57b  shl esi, 8
    X86_AT(c, 0xfb57bu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[6] = r; }
    // 0fb57e  shl edx, 4
    X86_AT(c, 0xfb57eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fb581  add edx, esi
    X86_AT(c, 0xfb581u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[6], 0, 4); }
    // 0fb583  mov dword ptr [eax + edx*1 + 0x30], 0xffffffff
    X86_AT(c, 0xfb583u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x30u)), 0xFFFFFFFFu);
    // 0fb58b  push 0xb534
    X86_AT(c, 0xfb58bu);
    { uint32_t v = 0xB534u; push32(c, v); }
    // 0fb590  push 7
    X86_AT(c, 0xfb590u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb592  call 0xe5654
    X86_AT(c, 0xfb592u);
    push32(c, 0xfb597u); f_000e5654(c); X86_RET(c, 0xfb597u);
    X86_TICK(c, 9);
    // 0fb597  push 7
    X86_AT(c, 0xfb597u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb599  call 0xe6c68
    X86_AT(c, 0xfb599u);
    push32(c, 0xfb59eu); f_000e6c68(c); X86_RET(c, 0xfb59eu);
    X86_TICK(c, 9);
    // 0fb59e  push 2
    X86_AT(c, 0xfb59eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0fb5a0  call 0xe3188
    X86_AT(c, 0xfb5a0u);
    push32(c, 0xfb5a5u); f_000e3188(c); X86_RET(c, 0xfb5a5u);
    X86_TICK(c, 2);
    // 0fb5a5  add esp, 0x1c
    X86_AT(c, 0xfb5a5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_fb5a8:
    X86_TICK(c, 14);
    // 0fb5a8  pop esi
    X86_AT(c, 0xfb5a8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fb5a9  ret 
    X86_AT(c, 0xfb5a9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfb4e4u, "ran off the end of a function");
}
void f_000fb5ac(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0fb5ac  call 0xfba20
    X86_AT(c, 0xfb5acu);
    push32(c, 0xfb5b1u); f_000fba20(c); X86_RET(c, 0xfb5b1u);
    X86_TICK(c, 25);
    // 0fb5b1  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfb5b1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fb5b6  lea edx, [eax + eax*4]
    X86_AT(c, 0xfb5b6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fb5b9  lea edx, [eax + edx*2]
    X86_AT(c, 0xfb5b9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fb5bc  shl edx, 5
    X86_AT(c, 0xfb5bcu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fb5bf  sub edx, eax
    X86_AT(c, 0xfb5bfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fb5c1  cmp dword ptr [edx + 0xcdf57], 5
    X86_AT(c, 0xfb5c1u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x5u, 0, 4);
    // 0fb5c8  jne 0xfb5d2
    X86_AT(c, 0xfb5c8u);
    if (x86_cc(c, 5)) { goto L_fb5d2; }
    X86_TICK(c, 13);
    // 0fb5ca  inc dword ptr [0xd4a68]
    X86_AT(c, 0xfb5cau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xD4A68u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fb5d0  jmp 0xfb5d8
    X86_AT(c, 0xfb5d0u);
    goto L_fb5d8;
L_fb5d2:
    X86_TICK(c, 6);
    // 0fb5d2  dec dword ptr [0xd4a68]
    X86_AT(c, 0xfb5d2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xD4A68u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_fb5d8:
    X86_TICK(c, 9);
    // 0fb5d8  push 7
    X86_AT(c, 0xfb5d8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb5da  call 0xe6c68
    X86_AT(c, 0xfb5dau);
    push32(c, 0xfb5dfu); f_000e6c68(c); X86_RET(c, 0xfb5dfu);
    X86_TICK(c, 14);
    // 0fb5df  add esp, 4
    X86_AT(c, 0xfb5dfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0fb5e2  cmp dword ptr [0xd4a68], 0
    X86_AT(c, 0xfb5e2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD4A68u))), 0x0u, 0, 4);
    // 0fb5e9  jne 0xfb5f6
    X86_AT(c, 0xfb5e9u);
    if (x86_cc(c, 5)) { goto L_fb5f6; }
    X86_TICK(c, 9);
    // 0fb5eb  mov word ptr [0xd4a48], 0
    X86_AT(c, 0xfb5ebu);
    wr16((c.sbase[3] + (uint32_t)(0xD4A48u)), 0x0u);
    // 0fb5f4  jmp 0xfb663
    X86_AT(c, 0xfb5f4u);
    goto L_fb663;
L_fb5f6:
    X86_TICK(c, 7);
    // 0fb5f6  call 0xfb83c
    X86_AT(c, 0xfb5f6u);
    push32(c, 0xfb5fbu); f_000fb83c(c); X86_RET(c, 0xfb5fbu);
    X86_TICK(c, 30);
    // 0fb5fb  push 0
    X86_AT(c, 0xfb5fbu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0fb5fd  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfb5fdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fb602  lea edx, [eax + eax*4]
    X86_AT(c, 0xfb602u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fb605  lea edx, [eax + edx*2]
    X86_AT(c, 0xfb605u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fb608  shl edx, 5
    X86_AT(c, 0xfb608u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fb60b  sub edx, eax
    X86_AT(c, 0xfb60bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fb60d  lea eax, [edx + 0xcdf67]
    X86_AT(c, 0xfb60du);
    c.r[0] = (uint32_t)(c.r[2] + 0xCDF67u);
    // 0fb613  push eax
    X86_AT(c, 0xfb613u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fb614  add edx, 0xcdf63
    X86_AT(c, 0xfb614u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xCDF63u, 0, 4); }
    // 0fb61a  push edx
    X86_AT(c, 0xfb61au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fb61b  call 0xfbae0
    X86_AT(c, 0xfb61bu);
    push32(c, 0xfb620u); f_000fbae0(c); X86_RET(c, 0xfb620u);
    X86_TICK(c, 34);
    // 0fb620  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfb620u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fb625  lea edx, [eax + eax*4]
    X86_AT(c, 0xfb625u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fb628  lea edx, [eax + edx*2]
    X86_AT(c, 0xfb628u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fb62b  shl edx, 5
    X86_AT(c, 0xfb62bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fb62e  sub edx, eax
    X86_AT(c, 0xfb62eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fb630  mov eax, dword ptr [edx + 0xcdf63]
    X86_AT(c, 0xfb630u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF63u)));
    // 0fb636  mov dword ptr [0xd4a4c], eax
    X86_AT(c, 0xfb636u);
    wr32((c.sbase[3] + (uint32_t)(0xD4A4Cu)), c.r[0]);
    // 0fb63b  mov eax, dword ptr [edx + 0xcdf67]
    X86_AT(c, 0xfb63bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF67u)));
    // 0fb641  mov dword ptr [0xd4a50], eax
    X86_AT(c, 0xfb641u);
    wr32((c.sbase[3] + (uint32_t)(0xD4A50u)), c.r[0]);
    // 0fb646  push 2
    X86_AT(c, 0xfb646u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0fb648  call 0xe3188
    X86_AT(c, 0xfb648u);
    push32(c, 0xfb64du); f_000e3188(c); X86_RET(c, 0xfb64du);
    X86_TICK(c, 11);
    // 0fb64d  push 0xb55c
    X86_AT(c, 0xfb64du);
    { uint32_t v = 0xB55Cu; push32(c, v); }
    // 0fb652  push 7
    X86_AT(c, 0xfb652u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb654  call 0xe5654
    X86_AT(c, 0xfb654u);
    push32(c, 0xfb659u); f_000e5654(c); X86_RET(c, 0xfb659u);
    X86_TICK(c, 9);
    // 0fb659  push 7
    X86_AT(c, 0xfb659u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb65b  call 0xe6c68
    X86_AT(c, 0xfb65bu);
    push32(c, 0xfb660u); f_000e6c68(c); X86_RET(c, 0xfb660u);
    X86_TICK(c, 2);
    // 0fb660  add esp, 0x1c
    X86_AT(c, 0xfb660u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_fb663:
    X86_TICK(c, 10);
    // 0fb663  ret 
    X86_AT(c, 0xfb663u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfb5acu, "ran off the end of a function");
}
void f_000fb664(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0fb664  push edi
    X86_AT(c, 0xfb664u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fb665  push 7
    X86_AT(c, 0xfb665u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb667  call 0xe693c
    X86_AT(c, 0xfb667u);
    push32(c, 0xfb66cu); f_000e693c(c); X86_RET(c, 0xfb66cu);
    X86_TICK(c, 11);
    // 0fb66c  push 0xb588
    X86_AT(c, 0xfb66cu);
    { uint32_t v = 0xB588u; push32(c, v); }
    // 0fb671  push 7
    X86_AT(c, 0xfb671u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb673  call 0xe5654
    X86_AT(c, 0xfb673u);
    push32(c, 0xfb678u); f_000e5654(c); X86_RET(c, 0xfb678u);
    X86_TICK(c, 9);
    // 0fb678  push 7
    X86_AT(c, 0xfb678u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb67a  call 0xe6c68
    X86_AT(c, 0xfb67au);
    push32(c, 0xfb67fu); f_000e6c68(c); X86_RET(c, 0xfb67fu);
    X86_TICK(c, 14);
    // 0fb67f  add esp, 0x10
    X86_AT(c, 0xfb67fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0fb682  cmp dword ptr [0xd6e64], 3
    X86_AT(c, 0xfb682u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD6E64u))), 0x3u, 0, 4);
    // 0fb689  je 0xfb6a8
    X86_AT(c, 0xfb689u);
    if (x86_cc(c, 4)) { goto L_fb6a8; }
    X86_TICK(c, 11);
    // 0fb68b  push 0xb5a4
    X86_AT(c, 0xfb68bu);
    { uint32_t v = 0xB5A4u; push32(c, v); }
    // 0fb690  push 7
    X86_AT(c, 0xfb690u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb692  call 0xe5654
    X86_AT(c, 0xfb692u);
    push32(c, 0xfb697u); f_000e5654(c); X86_RET(c, 0xfb697u);
    X86_TICK(c, 9);
    // 0fb697  push 7
    X86_AT(c, 0xfb697u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb699  call 0xe6c68
    X86_AT(c, 0xfb699u);
    push32(c, 0xfb69eu); f_000e6c68(c); X86_RET(c, 0xfb69eu);
    X86_TICK(c, 9);
    // 0fb69e  push 1
    X86_AT(c, 0xfb69eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0fb6a0  call 0xe1944
    X86_AT(c, 0xfb6a0u);
    push32(c, 0xfb6a5u); f_000e1944(c); X86_RET(c, 0xfb6a5u);
    X86_TICK(c, 2);
    // 0fb6a5  add esp, 0x10
    X86_AT(c, 0xfb6a5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_fb6a8:
    X86_TICK(c, 27);
    // 0fb6a8  mov eax, 0xd4a48
    X86_AT(c, 0xfb6a8u);
    c.r[0] = 0xD4A48u;
    // 0fb6ad  push dword ptr [eax + 8]
    X86_AT(c, 0xfb6adu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))); push32(c, v); }
    // 0fb6b0  push dword ptr [eax + 4]
    X86_AT(c, 0xfb6b0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))); push32(c, v); }
    // 0fb6b3  mov eax, dword ptr [eax + 0x20]
    X86_AT(c, 0xfb6b3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x20u)));
    // 0fb6b6  dec eax
    X86_AT(c, 0xfb6b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0fb6b7  push eax
    X86_AT(c, 0xfb6b7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fb6b8  call 0xfb21c
    X86_AT(c, 0xfb6b8u);
    push32(c, 0xfb6bdu); f_000fb21c(c); X86_RET(c, 0xfb6bdu);
    X86_TICK(c, 12);
    // 0fb6bd  xchg edi, eax
    X86_AT(c, 0xfb6bdu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0fb6be  add esp, 0xc
    X86_AT(c, 0xfb6beu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0fb6c1  cmp edi, 0xf
    X86_AT(c, 0xfb6c1u);
    (void)x86_sub(c, c.r[7], 0xFu, 0, 4);
    // 0fb6c4  je 0xfb6cb
    X86_AT(c, 0xfb6c4u);
    if (x86_cc(c, 4)) { goto L_fb6cb; }
    X86_TICK(c, 7);
    // 0fb6c6  cmp edi, 0xa
    X86_AT(c, 0xfb6c6u);
    (void)x86_sub(c, c.r[7], 0xAu, 0, 4);
    // 0fb6c9  jne 0xfb6d2
    X86_AT(c, 0xfb6c9u);
    if (x86_cc(c, 5)) { goto L_fb6d2; }
L_fb6cb:
    X86_TICK(c, 7);
    // 0fb6cb  call 0xfb4e4
    X86_AT(c, 0xfb6cbu);
    push32(c, 0xfb6d0u); f_000fb4e4(c); X86_RET(c, 0xfb6d0u);
    X86_TICK(c, 7);
    // 0fb6d0  jmp 0xfb6f6
    X86_AT(c, 0xfb6d0u);
    goto L_fb6f6;
L_fb6d2:
    X86_TICK(c, 9);
    // 0fb6d2  push 3
    X86_AT(c, 0xfb6d2u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0fb6d4  call 0xe1944
    X86_AT(c, 0xfb6d4u);
    push32(c, 0xfb6d9u); f_000e1944(c); X86_RET(c, 0xfb6d9u);
    X86_TICK(c, 9);
    // 0fb6d9  push 2
    X86_AT(c, 0xfb6d9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0fb6db  call 0xe9740
    X86_AT(c, 0xfb6dbu);
    push32(c, 0xfb6e0u); f_000e9740(c); X86_RET(c, 0xfb6e0u);
    X86_TICK(c, 11);
    // 0fb6e0  push 0xb5ac
    X86_AT(c, 0xfb6e0u);
    { uint32_t v = 0xB5ACu; push32(c, v); }
    // 0fb6e5  push 7
    X86_AT(c, 0xfb6e5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb6e7  call 0xe5654
    X86_AT(c, 0xfb6e7u);
    push32(c, 0xfb6ecu); f_000e5654(c); X86_RET(c, 0xfb6ecu);
    X86_TICK(c, 9);
    // 0fb6ec  push 7
    X86_AT(c, 0xfb6ecu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb6ee  call 0xe6c68
    X86_AT(c, 0xfb6eeu);
    push32(c, 0xfb6f3u); f_000e6c68(c); X86_RET(c, 0xfb6f3u);
    X86_TICK(c, 2);
    // 0fb6f3  add esp, 0x14
    X86_AT(c, 0xfb6f3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_fb6f6:
    X86_TICK(c, 14);
    // 0fb6f6  pop edi
    X86_AT(c, 0xfb6f6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fb6f7  ret 
    X86_AT(c, 0xfb6f7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfb664u, "ran off the end of a function");
}
void f_000fb6f8(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0fb6f8  push edi
    X86_AT(c, 0xfb6f8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fb6f9  push 7
    X86_AT(c, 0xfb6f9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb6fb  call 0xe693c
    X86_AT(c, 0xfb6fbu);
    push32(c, 0xfb700u); f_000e693c(c); X86_RET(c, 0xfb700u);
    X86_TICK(c, 11);
    // 0fb700  push 0xb5d4
    X86_AT(c, 0xfb700u);
    { uint32_t v = 0xB5D4u; push32(c, v); }
    // 0fb705  push 7
    X86_AT(c, 0xfb705u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb707  call 0xe5654
    X86_AT(c, 0xfb707u);
    push32(c, 0xfb70cu); f_000e5654(c); X86_RET(c, 0xfb70cu);
    X86_TICK(c, 9);
    // 0fb70c  push 7
    X86_AT(c, 0xfb70cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb70e  call 0xe6c68
    X86_AT(c, 0xfb70eu);
    push32(c, 0xfb713u); f_000e6c68(c); X86_RET(c, 0xfb713u);
    X86_TICK(c, 14);
    // 0fb713  add esp, 0x10
    X86_AT(c, 0xfb713u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0fb716  cmp dword ptr [0xd6e64], 3
    X86_AT(c, 0xfb716u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD6E64u))), 0x3u, 0, 4);
    // 0fb71d  je 0xfb73c
    X86_AT(c, 0xfb71du);
    if (x86_cc(c, 4)) { goto L_fb73c; }
    X86_TICK(c, 11);
    // 0fb71f  push 0xb5f4
    X86_AT(c, 0xfb71fu);
    { uint32_t v = 0xB5F4u; push32(c, v); }
    // 0fb724  push 7
    X86_AT(c, 0xfb724u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb726  call 0xe5654
    X86_AT(c, 0xfb726u);
    push32(c, 0xfb72bu); f_000e5654(c); X86_RET(c, 0xfb72bu);
    X86_TICK(c, 9);
    // 0fb72b  push 7
    X86_AT(c, 0xfb72bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb72d  call 0xe6c68
    X86_AT(c, 0xfb72du);
    push32(c, 0xfb732u); f_000e6c68(c); X86_RET(c, 0xfb732u);
    X86_TICK(c, 9);
    // 0fb732  push 1
    X86_AT(c, 0xfb732u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0fb734  call 0xe1944
    X86_AT(c, 0xfb734u);
    push32(c, 0xfb739u); f_000e1944(c); X86_RET(c, 0xfb739u);
    X86_TICK(c, 2);
    // 0fb739  add esp, 0x10
    X86_AT(c, 0xfb739u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_fb73c:
    X86_TICK(c, 27);
    // 0fb73c  mov eax, 0xd4a48
    X86_AT(c, 0xfb73cu);
    c.r[0] = 0xD4A48u;
    // 0fb741  push dword ptr [eax + 8]
    X86_AT(c, 0xfb741u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))); push32(c, v); }
    // 0fb744  push dword ptr [eax + 4]
    X86_AT(c, 0xfb744u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))); push32(c, v); }
    // 0fb747  mov eax, dword ptr [eax + 0x20]
    X86_AT(c, 0xfb747u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x20u)));
    // 0fb74a  dec eax
    X86_AT(c, 0xfb74au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0fb74b  push eax
    X86_AT(c, 0xfb74bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fb74c  call 0xfb21c
    X86_AT(c, 0xfb74cu);
    push32(c, 0xfb751u); f_000fb21c(c); X86_RET(c, 0xfb751u);
    X86_TICK(c, 12);
    // 0fb751  xchg edi, eax
    X86_AT(c, 0xfb751u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0fb752  add esp, 0xc
    X86_AT(c, 0xfb752u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0fb755  cmp edi, 0xe
    X86_AT(c, 0xfb755u);
    (void)x86_sub(c, c.r[7], 0xEu, 0, 4);
    // 0fb758  je 0xfb75f
    X86_AT(c, 0xfb758u);
    if (x86_cc(c, 4)) { goto L_fb75f; }
    X86_TICK(c, 7);
    // 0fb75a  cmp edi, 0xa
    X86_AT(c, 0xfb75au);
    (void)x86_sub(c, c.r[7], 0xAu, 0, 4);
    // 0fb75d  jne 0xfb766
    X86_AT(c, 0xfb75du);
    if (x86_cc(c, 5)) { goto L_fb766; }
L_fb75f:
    X86_TICK(c, 7);
    // 0fb75f  call 0xfb5ac
    X86_AT(c, 0xfb75fu);
    push32(c, 0xfb764u); f_000fb5ac(c); X86_RET(c, 0xfb764u);
    X86_TICK(c, 7);
    // 0fb764  jmp 0xfb78a
    X86_AT(c, 0xfb764u);
    goto L_fb78a;
L_fb766:
    X86_TICK(c, 9);
    // 0fb766  push 3
    X86_AT(c, 0xfb766u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0fb768  call 0xe1944
    X86_AT(c, 0xfb768u);
    push32(c, 0xfb76du); f_000e1944(c); X86_RET(c, 0xfb76du);
    X86_TICK(c, 9);
    // 0fb76d  push 2
    X86_AT(c, 0xfb76du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0fb76f  call 0xe9740
    X86_AT(c, 0xfb76fu);
    push32(c, 0xfb774u); f_000e9740(c); X86_RET(c, 0xfb774u);
    X86_TICK(c, 11);
    // 0fb774  push 0xb5fc
    X86_AT(c, 0xfb774u);
    { uint32_t v = 0xB5FCu; push32(c, v); }
    // 0fb779  push 7
    X86_AT(c, 0xfb779u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb77b  call 0xe5654
    X86_AT(c, 0xfb77bu);
    push32(c, 0xfb780u); f_000e5654(c); X86_RET(c, 0xfb780u);
    X86_TICK(c, 9);
    // 0fb780  push 7
    X86_AT(c, 0xfb780u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fb782  call 0xe6c68
    X86_AT(c, 0xfb782u);
    push32(c, 0xfb787u); f_000e6c68(c); X86_RET(c, 0xfb787u);
    X86_TICK(c, 2);
    // 0fb787  add esp, 0x14
    X86_AT(c, 0xfb787u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_fb78a:
    X86_TICK(c, 14);
    // 0fb78a  pop edi
    X86_AT(c, 0xfb78au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fb78b  ret 
    X86_AT(c, 0xfb78bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfb6f8u, "ran off the end of a function");
}
void f_000fb78c(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0fb78c  push esi
    X86_AT(c, 0xfb78cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fb78d  mov esi, 0xbd578
    X86_AT(c, 0xfb78du);
    c.r[6] = 0xBD578u;
    // 0fb792  mov ecx, 0xd5be4
    X86_AT(c, 0xfb792u);
    c.r[1] = 0xD5BE4u;
    // 0fb797  sub edx, edx
    X86_AT(c, 0xfb797u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
L_fb799:
    X86_TICK(c, 7);
    // 0fb799  cmp edx, 0x1000
    X86_AT(c, 0xfb799u);
    (void)x86_sub(c, c.r[2], 0x1000u, 0, 4);
    // 0fb79f  jge 0xfb7a8
    X86_AT(c, 0xfb79fu);
    if (x86_cc(c, 13)) { goto L_fb7a8; }
    X86_TICK(c, 20);
    // 0fb7a1  lodsb al, byte ptr [esi]
    X86_AT(c, 0xfb7a1u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 0fb7a2  mov byte ptr [ecx], al
    X86_AT(c, 0xfb7a2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1])), g8(c, 0));
    // 0fb7a4  inc ecx
    X86_AT(c, 0xfb7a4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0fb7a5  inc edx
    X86_AT(c, 0xfb7a5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0fb7a6  jmp 0xfb799
    X86_AT(c, 0xfb7a6u);
    X86_POLL(c, 0xfb799u); goto L_fb799;
L_fb7a8:
    X86_TICK(c, 14);
    // 0fb7a8  pop esi
    X86_AT(c, 0xfb7a8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fb7a9  ret 
    X86_AT(c, 0xfb7a9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfb78cu, "ran off the end of a function");
}
void f_000fb7ac(X86Cpu& c) {
    X86_TICK(c, 6);
    // 0fb7ac  push esi
    X86_AT(c, 0xfb7acu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fb7ad  push edi
    X86_AT(c, 0xfb7adu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fb7ae  sub edi, edi
    X86_AT(c, 0xfb7aeu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_fb7b0:
    X86_TICK(c, 7);
    // 0fb7b0  cmp edi, 0xf
    X86_AT(c, 0xfb7b0u);
    (void)x86_sub(c, c.r[7], 0xFu, 0, 4);
    // 0fb7b3  jg 0xfb838
    X86_AT(c, 0xfb7b3u);
    if (x86_cc(c, 15)) { goto L_fb838; }
    X86_TICK(c, 2);
    // 0fb7b9  sub esi, esi
    X86_AT(c, 0xfb7b9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_fb7bb:
    X86_TICK(c, 7);
    // 0fb7bb  cmp esi, 0xf
    X86_AT(c, 0xfb7bbu);
    (void)x86_sub(c, c.r[6], 0xFu, 0, 4);
    // 0fb7be  jg 0xfb832
    X86_AT(c, 0xfb7beu);
    if (x86_cc(c, 15)) { goto L_fb832; }
    X86_TICK(c, 40);
    // 0fb7c0  mov eax, 0xd4a48
    X86_AT(c, 0xfb7c0u);
    c.r[0] = 0xD4A48u;
    // 0fb7c5  mov edx, esi
    X86_AT(c, 0xfb7c5u);
    c.r[2] = c.r[6];
    // 0fb7c7  shl edx, 4
    X86_AT(c, 0xfb7c7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fb7ca  mov ecx, dword ptr [eax + 0x20]
    X86_AT(c, 0xfb7cau);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x20u)));
    // 0fb7cd  shl ecx, 8
    X86_AT(c, 0xfb7cdu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[1] = r; }
    // 0fb7d0  add ecx, edx
    X86_AT(c, 0xfb7d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0fb7d2  add ecx, edi
    X86_AT(c, 0xfb7d2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[7], 0, 4); }
    // 0fb7d4  mov eax, edi
    X86_AT(c, 0xfb7d4u);
    c.r[0] = c.r[7];
    // 0fb7d6  shl eax, 8
    X86_AT(c, 0xfb7d6u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fb7d9  add edx, eax
    X86_AT(c, 0xfb7d9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fb7db  movzx eax, byte ptr [ecx + 0xd5ae4]
    X86_AT(c, 0xfb7dbu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[1] + 0xD5AE4u)));
    // 0fb7e2  mov dword ptr [edx + 0xd4a74], eax
    X86_AT(c, 0xfb7e2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A74u)), c.r[0]);
    // 0fb7e8  cmp eax, 4
    X86_AT(c, 0xfb7e8u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0fb7eb  jne 0xfb7f9
    X86_AT(c, 0xfb7ebu);
    if (x86_cc(c, 5)) { goto L_fb7f9; }
    X86_TICK(c, 9);
    // 0fb7ed  mov dword ptr [edx + 0xd4a7c], 4
    X86_AT(c, 0xfb7edu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A7Cu)), 0x4u);
    // 0fb7f7  jmp 0xfb80f
    X86_AT(c, 0xfb7f7u);
    goto L_fb80f;
L_fb7f9:
    X86_TICK(c, 14);
    // 0fb7f9  mov eax, edi
    X86_AT(c, 0xfb7f9u);
    c.r[0] = c.r[7];
    // 0fb7fb  shl eax, 8
    X86_AT(c, 0xfb7fbu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fb7fe  mov edx, esi
    X86_AT(c, 0xfb7feu);
    c.r[2] = c.r[6];
    // 0fb800  shl edx, 4
    X86_AT(c, 0xfb800u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fb803  add edx, eax
    X86_AT(c, 0xfb803u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fb805  mov dword ptr [edx + 0xd4a7c], 0
    X86_AT(c, 0xfb805u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A7Cu)), 0x0u);
L_fb80f:
    X86_TICK(c, 25);
    // 0fb80f  mov eax, edi
    X86_AT(c, 0xfb80fu);
    c.r[0] = c.r[7];
    // 0fb811  shl eax, 8
    X86_AT(c, 0xfb811u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fb814  mov edx, esi
    X86_AT(c, 0xfb814u);
    c.r[2] = c.r[6];
    // 0fb816  shl edx, 4
    X86_AT(c, 0xfb816u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fb819  add edx, eax
    X86_AT(c, 0xfb819u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fb81b  mov dword ptr [edx + 0xd4a78], 0xffffffff
    X86_AT(c, 0xfb81bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A78u)), 0xFFFFFFFFu);
    // 0fb825  mov dword ptr [edx + 0xd4a80], 0
    X86_AT(c, 0xfb825u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A80u)), 0x0u);
    // 0fb82f  inc esi
    X86_AT(c, 0xfb82fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0fb830  jmp 0xfb7bb
    X86_AT(c, 0xfb830u);
    X86_POLL(c, 0xfb7bbu); goto L_fb7bb;
L_fb832:
    X86_TICK(c, 9);
    // 0fb832  inc edi
    X86_AT(c, 0xfb832u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0fb833  jmp 0xfb7b0
    X86_AT(c, 0xfb833u);
    X86_POLL(c, 0xfb7b0u); goto L_fb7b0;
L_fb838:
    X86_TICK(c, 18);
    // 0fb838  pop edi
    X86_AT(c, 0xfb838u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fb839  pop esi
    X86_AT(c, 0xfb839u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fb83a  ret 
    X86_AT(c, 0xfb83au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfb7acu, "ran off the end of a function");
}
void f_000fb83c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0fb83c  push ebp
    X86_AT(c, 0xfb83cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fb83d  mov ebp, esp
    X86_AT(c, 0xfb83du);
    c.r[5] = c.r[4];
    // 0fb83f  sub esp, 8
    X86_AT(c, 0xfb83fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0fb842  push ebx
    X86_AT(c, 0xfb842u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fb843  push esi
    X86_AT(c, 0xfb843u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fb844  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xfb844u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_fb84b:
    X86_TICK(c, 12);
    // 0fb84b  cmp dword ptr [ebp - 4], 0xf
    X86_AT(c, 0xfb84bu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0xFu, 0, 4);
    // 0fb84f  jg 0xfb96f
    X86_AT(c, 0xfb84fu);
    if (x86_cc(c, 15)) { goto L_fb96f; }
    X86_TICK(c, 2);
    // 0fb855  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xfb855u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_fb85c:
    X86_TICK(c, 11);
    // 0fb85c  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xfb85cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0fb85f  cmp eax, 0xf
    X86_AT(c, 0xfb85fu);
    (void)x86_sub(c, c.r[0], 0xFu, 0, 4);
    // 0fb862  jg 0xfb967
    X86_AT(c, 0xfb862u);
    if (x86_cc(c, 15)) { goto L_fb967; }
    X86_TICK(c, 62);
    // 0fb868  mov edx, 0xd4a48
    X86_AT(c, 0xfb868u);
    c.r[2] = 0xD4A48u;
    // 0fb86d  shl eax, 4
    X86_AT(c, 0xfb86du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0fb870  mov esi, dword ptr [edx + 0x20]
    X86_AT(c, 0xfb870u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x20u)));
    // 0fb873  shl esi, 8
    X86_AT(c, 0xfb873u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[6] = r; }
    // 0fb876  add esi, eax
    X86_AT(c, 0xfb876u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fb878  add esi, dword ptr [ebp - 4]
    X86_AT(c, 0xfb878u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0fb87b  mov ebx, dword ptr [ebp - 4]
    X86_AT(c, 0xfb87bu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0fb87e  shl ebx, 8
    X86_AT(c, 0xfb87eu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[3] = r; }
    // 0fb881  add eax, ebx
    X86_AT(c, 0xfb881u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[3], 0, 4); }
    // 0fb883  movzx ecx, byte ptr [edx + esi*1 + 0x109c]
    X86_AT(c, 0xfb883u);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] + 0x109Cu)));
    // 0fb88b  mov dword ptr [edx + eax*1 + 0x2c], ecx
    X86_AT(c, 0xfb88bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] + 0x2Cu)), c.r[1]);
    // 0fb88f  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfb88fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fb894  lea ecx, [eax + eax*4]
    X86_AT(c, 0xfb894u);
    c.r[1] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fb897  lea ecx, [eax + ecx*2]
    X86_AT(c, 0xfb897u);
    c.r[1] = (uint32_t)(c.r[0] + c.r[1] * 2);
    // 0fb89a  shl ecx, 5
    X86_AT(c, 0xfb89au);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0fb89d  sub ecx, eax
    X86_AT(c, 0xfb89du);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fb89f  cmp dword ptr [ecx + 0xcdf57], 5
    X86_AT(c, 0xfb89fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDF57u))), 0x5u, 0, 4);
    // 0fb8a6  jne 0xfb902
    X86_AT(c, 0xfb8a6u);
    if (x86_cc(c, 5)) { goto L_fb902; }
    X86_TICK(c, 12);
    // 0fb8a8  cmp dword ptr [ecx + 0xcde99], 0xc
    X86_AT(c, 0xfb8a8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE99u))), 0xCu, 0, 4);
    // 0fb8af  jne 0xfb902
    X86_AT(c, 0xfb8afu);
    if (x86_cc(c, 5)) { goto L_fb902; }
    X86_TICK(c, 11);
    // 0fb8b1  mov eax, dword ptr [edx + 0x20]
    X86_AT(c, 0xfb8b1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x20u)));
    // 0fb8b4  cmp eax, 0xf
    X86_AT(c, 0xfb8b4u);
    (void)x86_sub(c, c.r[0], 0xFu, 0, 4);
    // 0fb8b7  je 0xfb8be
    X86_AT(c, 0xfb8b7u);
    if (x86_cc(c, 4)) { goto L_fb8be; }
    X86_TICK(c, 7);
    // 0fb8b9  cmp eax, 0x10
    X86_AT(c, 0xfb8b9u);
    (void)x86_sub(c, c.r[0], 0x10u, 0, 4);
    // 0fb8bc  jne 0xfb902
    X86_AT(c, 0xfb8bcu);
    if (x86_cc(c, 5)) { goto L_fb902; }
L_fb8be:
    X86_TICK(c, 28);
    // 0fb8be  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xfb8beu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0fb8c1  shl eax, 8
    X86_AT(c, 0xfb8c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fb8c4  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xfb8c4u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0fb8c7  shl edx, 4
    X86_AT(c, 0xfb8c7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fb8ca  add edx, eax
    X86_AT(c, 0xfb8cau);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fb8cc  cmp dword ptr [edx + 0xd4a74], 0xf
    X86_AT(c, 0xfb8ccu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A74u))), 0xFu, 0, 4);
    // 0fb8d3  jne 0xfb8e1
    X86_AT(c, 0xfb8d3u);
    if (x86_cc(c, 5)) { goto L_fb8e1; }
    X86_TICK(c, 9);
    // 0fb8d5  mov dword ptr [edx + 0xd4a74], 0xe
    X86_AT(c, 0xfb8d5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A74u)), 0xEu);
    // 0fb8df  jmp 0xfb902
    X86_AT(c, 0xfb8dfu);
    goto L_fb902;
L_fb8e1:
    X86_TICK(c, 28);
    // 0fb8e1  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xfb8e1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0fb8e4  shl eax, 8
    X86_AT(c, 0xfb8e4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fb8e7  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xfb8e7u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0fb8ea  shl edx, 4
    X86_AT(c, 0xfb8eau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fb8ed  add edx, eax
    X86_AT(c, 0xfb8edu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fb8ef  cmp dword ptr [edx + 0xd4a74], 0xe
    X86_AT(c, 0xfb8efu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A74u))), 0xEu, 0, 4);
    // 0fb8f6  jne 0xfb902
    X86_AT(c, 0xfb8f6u);
    if (x86_cc(c, 5)) { goto L_fb902; }
    X86_TICK(c, 2);
    // 0fb8f8  mov dword ptr [edx + 0xd4a74], 0xf
    X86_AT(c, 0xfb8f8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A74u)), 0xFu);
L_fb902:
    X86_TICK(c, 28);
    // 0fb902  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xfb902u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0fb905  shl eax, 8
    X86_AT(c, 0xfb905u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fb908  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xfb908u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0fb90b  shl edx, 4
    X86_AT(c, 0xfb90bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fb90e  add edx, eax
    X86_AT(c, 0xfb90eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fb910  cmp dword ptr [edx + 0xd4a74], 4
    X86_AT(c, 0xfb910u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A74u))), 0x4u, 0, 4);
    // 0fb917  jne 0xfb925
    X86_AT(c, 0xfb917u);
    if (x86_cc(c, 5)) { goto L_fb925; }
    X86_TICK(c, 9);
    // 0fb919  mov dword ptr [edx + 0xd4a7c], 4
    X86_AT(c, 0xfb919u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A7Cu)), 0x4u);
    // 0fb923  jmp 0xfb93d
    X86_AT(c, 0xfb923u);
    goto L_fb93d;
L_fb925:
    X86_TICK(c, 18);
    // 0fb925  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xfb925u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0fb928  shl eax, 8
    X86_AT(c, 0xfb928u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fb92b  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xfb92bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0fb92e  shl edx, 4
    X86_AT(c, 0xfb92eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fb931  add edx, eax
    X86_AT(c, 0xfb931u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fb933  mov dword ptr [edx + 0xd4a7c], 0
    X86_AT(c, 0xfb933u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A7Cu)), 0x0u);
L_fb93d:
    X86_TICK(c, 33);
    // 0fb93d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xfb93du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0fb940  shl eax, 8
    X86_AT(c, 0xfb940u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fb943  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xfb943u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0fb946  shl edx, 4
    X86_AT(c, 0xfb946u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fb949  add edx, eax
    X86_AT(c, 0xfb949u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fb94b  mov dword ptr [edx + 0xd4a78], 0xffffffff
    X86_AT(c, 0xfb94bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A78u)), 0xFFFFFFFFu);
    // 0fb955  mov dword ptr [edx + 0xd4a80], 0
    X86_AT(c, 0xfb955u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A80u)), 0x0u);
    // 0fb95f  inc dword ptr [ebp - 8]
    X86_AT(c, 0xfb95fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fb962  jmp 0xfb85c
    X86_AT(c, 0xfb962u);
    X86_POLL(c, 0xfb85cu); goto L_fb85c;
L_fb967:
    X86_TICK(c, 13);
    // 0fb967  inc dword ptr [ebp - 4]
    X86_AT(c, 0xfb967u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fb96a  jmp 0xfb84b
    X86_AT(c, 0xfb96au);
    X86_POLL(c, 0xfb84bu); goto L_fb84b;
L_fb96f:
    X86_TICK(c, 9);
    // 0fb96f  mov dword ptr [0xd4a5c], 0
    X86_AT(c, 0xfb96fu);
    wr32((c.sbase[3] + (uint32_t)(0xD4A5Cu)), 0x0u);
    // 0fb979  call 0xfab68
    X86_AT(c, 0xfb979u);
    push32(c, 0xfb97eu); f_000fab68(c); X86_RET(c, 0xfb97eu);
    X86_TICK(c, 7);
    // 0fb97e  call 0xfab68
    X86_AT(c, 0xfb97eu);
    push32(c, 0xfb983u); f_000fab68(c); X86_RET(c, 0xfb983u);
    X86_TICK(c, 7);
    // 0fb983  call 0xfab68
    X86_AT(c, 0xfb983u);
    push32(c, 0xfb988u); f_000fab68(c); X86_RET(c, 0xfb988u);
    X86_TICK(c, 12);
    // 0fb988  cmp dword ptr [0xd4a68], 9
    X86_AT(c, 0xfb988u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD4A68u))), 0x9u, 0, 4);
    // 0fb98f  jle 0xfb99b
    X86_AT(c, 0xfb98fu);
    if (x86_cc(c, 14)) { goto L_fb99b; }
    X86_TICK(c, 7);
    // 0fb991  call 0xfab68
    X86_AT(c, 0xfb991u);
    push32(c, 0xfb996u); f_000fab68(c); X86_RET(c, 0xfb996u);
    X86_TICK(c, 7);
    // 0fb996  call 0xfab68
    X86_AT(c, 0xfb996u);
    push32(c, 0xfb99bu); f_000fab68(c); X86_RET(c, 0xfb99bu);
L_fb99b:
    X86_TICK(c, 2);
    // 0fb99b  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xfb99bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_fb9a2:
    X86_TICK(c, 12);
    // 0fb9a2  cmp dword ptr [ebp - 8], 0x10
    X86_AT(c, 0xfb9a2u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x10u, 0, 4);
    // 0fb9a6  jge 0xfb9db
    X86_AT(c, 0xfb9a6u);
    if (x86_cc(c, 13)) { goto L_fb9db; }
    X86_TICK(c, 2);
    // 0fb9a8  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xfb9a8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_fb9af:
    X86_TICK(c, 11);
    // 0fb9af  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xfb9afu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0fb9b2  cmp eax, 0x10
    X86_AT(c, 0xfb9b2u);
    (void)x86_sub(c, c.r[0], 0x10u, 0, 4);
    // 0fb9b5  jge 0xfb9d6
    X86_AT(c, 0xfb9b5u);
    if (x86_cc(c, 13)) { goto L_fb9d6; }
    X86_TICK(c, 37);
    // 0fb9b7  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xfb9b7u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0fb9ba  shl edx, 4
    X86_AT(c, 0xfb9bau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fb9bd  shl eax, 8
    X86_AT(c, 0xfb9bdu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fb9c0  add eax, edx
    X86_AT(c, 0xfb9c0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0fb9c2  add edx, dword ptr [ebp - 4]
    X86_AT(c, 0xfb9c2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0fb9c5  mov al, byte ptr [eax + 0xd4a74]
    X86_AT(c, 0xfb9c5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4A74u))));
    // 0fb9cb  mov byte ptr [edx + 0xd5a74], al
    X86_AT(c, 0xfb9cbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xD5A74u)), g8(c, 0));
    // 0fb9d1  inc dword ptr [ebp - 4]
    X86_AT(c, 0xfb9d1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fb9d4  jmp 0xfb9af
    X86_AT(c, 0xfb9d4u);
    X86_POLL(c, 0xfb9afu); goto L_fb9af;
L_fb9d6:
    X86_TICK(c, 13);
    // 0fb9d6  inc dword ptr [ebp - 8]
    X86_AT(c, 0xfb9d6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fb9d9  jmp 0xfb9a2
    X86_AT(c, 0xfb9d9u);
    X86_POLL(c, 0xfb9a2u); goto L_fb9a2;
L_fb9db:
    X86_TICK(c, 41);
    // 0fb9db  mov eax, 0xd4a48
    X86_AT(c, 0xfb9dbu);
    c.r[0] = 0xD4A48u;
    // 0fb9e0  mov edx, dword ptr [eax + 4]
    X86_AT(c, 0xfb9e0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 0fb9e3  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xfb9e3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0fb9e6  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0xfb9e6u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 0fb9e9  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xfb9e9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0fb9ec  lea edx, [ebp - 8]
    X86_AT(c, 0xfb9ecu);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0fb9ef  push edx
    X86_AT(c, 0xfb9efu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fb9f0  lea edx, [ebp - 4]
    X86_AT(c, 0xfb9f0u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0fb9f3  push edx
    X86_AT(c, 0xfb9f3u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fb9f4  movsx edx, word ptr [eax + 0x2420]
    X86_AT(c, 0xfb9f4u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x2420u)));
    // 0fb9fb  push edx
    X86_AT(c, 0xfb9fbu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0fb9fc  add eax, 0x102c
    X86_AT(c, 0xfb9fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x102Cu, 0, 4); }
    // 0fba01  push eax
    X86_AT(c, 0xfba01u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fba02  call 0xf9f30
    X86_AT(c, 0xfba02u);
    push32(c, 0xfba07u); f_000f9f30(c); X86_RET(c, 0xfba07u);
    X86_TICK(c, 7);
    // 0fba07  call 0xfaa94
    X86_AT(c, 0xfba07u);
    push32(c, 0xfba0cu); f_000faa94(c); X86_RET(c, 0xfba0cu);
    X86_TICK(c, 7);
    // 0fba0c  call 0xfaa14
    X86_AT(c, 0xfba0cu);
    push32(c, 0xfba11u); f_000faa14(c); X86_RET(c, 0xfba11u);
    X86_TICK(c, 9);
    // 0fba11  push 7
    X86_AT(c, 0xfba11u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fba13  call 0xe693c
    X86_AT(c, 0xfba13u);
    push32(c, 0xfba18u); f_000e693c(c); X86_RET(c, 0xfba18u);
    X86_TICK(c, 26);
    // 0fba18  add esp, 0x14
    X86_AT(c, 0xfba18u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0fba1b  pop esi
    X86_AT(c, 0xfba1bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fba1c  pop ebx
    X86_AT(c, 0xfba1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fba1d  leave 
    X86_AT(c, 0xfba1du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fba1e  ret 
    X86_AT(c, 0xfba1eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfb83cu, "ran off the end of a function");
}
void f_000fba20(X86Cpu& c) {
    X86_TICK(c, 6);
    // 0fba20  push esi
    X86_AT(c, 0xfba20u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fba21  push edi
    X86_AT(c, 0xfba21u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fba22  sub edi, edi
    X86_AT(c, 0xfba22u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_fba24:
    X86_TICK(c, 7);
    // 0fba24  cmp edi, 0xf
    X86_AT(c, 0xfba24u);
    (void)x86_sub(c, c.r[7], 0xFu, 0, 4);
    // 0fba27  jg 0xfbadd
    X86_AT(c, 0xfba27u);
    if (x86_cc(c, 15)) { goto L_fbadd; }
    X86_TICK(c, 2);
    // 0fba2d  sub esi, esi
    X86_AT(c, 0xfba2du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_fba2f:
    X86_TICK(c, 7);
    // 0fba2f  cmp esi, 0xf
    X86_AT(c, 0xfba2fu);
    (void)x86_sub(c, c.r[6], 0xFu, 0, 4);
    // 0fba32  jg 0xfbad7
    X86_AT(c, 0xfba32u);
    if (x86_cc(c, 15)) { goto L_fbad7; }
    X86_TICK(c, 25);
    // 0fba38  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfba38u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fba3d  lea edx, [eax + eax*4]
    X86_AT(c, 0xfba3du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fba40  lea edx, [eax + edx*2]
    X86_AT(c, 0xfba40u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fba43  shl edx, 5
    X86_AT(c, 0xfba43u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fba46  sub edx, eax
    X86_AT(c, 0xfba46u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fba48  cmp dword ptr [edx + 0xcdf57], 5
    X86_AT(c, 0xfba48u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x5u, 0, 4);
    // 0fba4f  jne 0xfbaa9
    X86_AT(c, 0xfba4fu);
    if (x86_cc(c, 5)) { goto L_fbaa9; }
    X86_TICK(c, 12);
    // 0fba51  cmp dword ptr [edx + 0xcde99], 0xc
    X86_AT(c, 0xfba51u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE99u))), 0xCu, 0, 4);
    // 0fba58  jne 0xfbaa9
    X86_AT(c, 0xfba58u);
    if (x86_cc(c, 5)) { goto L_fbaa9; }
    X86_TICK(c, 11);
    // 0fba5a  mov eax, dword ptr [0xd4a68]
    X86_AT(c, 0xfba5au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A68u)));
    // 0fba5f  cmp eax, 0xf
    X86_AT(c, 0xfba5fu);
    (void)x86_sub(c, c.r[0], 0xFu, 0, 4);
    // 0fba62  je 0xfba69
    X86_AT(c, 0xfba62u);
    if (x86_cc(c, 4)) { goto L_fba69; }
    X86_TICK(c, 7);
    // 0fba64  cmp eax, 0x10
    X86_AT(c, 0xfba64u);
    (void)x86_sub(c, c.r[0], 0x10u, 0, 4);
    // 0fba67  jne 0xfbaa9
    X86_AT(c, 0xfba67u);
    if (x86_cc(c, 5)) { goto L_fbaa9; }
L_fba69:
    X86_TICK(c, 24);
    // 0fba69  mov eax, edi
    X86_AT(c, 0xfba69u);
    c.r[0] = c.r[7];
    // 0fba6b  shl eax, 8
    X86_AT(c, 0xfba6bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fba6e  mov edx, esi
    X86_AT(c, 0xfba6eu);
    c.r[2] = c.r[6];
    // 0fba70  shl edx, 4
    X86_AT(c, 0xfba70u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fba73  add edx, eax
    X86_AT(c, 0xfba73u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fba75  cmp dword ptr [edx + 0xd4a74], 0xf
    X86_AT(c, 0xfba75u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A74u))), 0xFu, 0, 4);
    // 0fba7c  jne 0xfba8a
    X86_AT(c, 0xfba7cu);
    if (x86_cc(c, 5)) { goto L_fba8a; }
    X86_TICK(c, 9);
    // 0fba7e  mov dword ptr [edx + 0xd4a74], 0xe
    X86_AT(c, 0xfba7eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A74u)), 0xEu);
    // 0fba88  jmp 0xfbaa9
    X86_AT(c, 0xfba88u);
    goto L_fbaa9;
L_fba8a:
    X86_TICK(c, 24);
    // 0fba8a  mov eax, edi
    X86_AT(c, 0xfba8au);
    c.r[0] = c.r[7];
    // 0fba8c  shl eax, 8
    X86_AT(c, 0xfba8cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fba8f  mov edx, esi
    X86_AT(c, 0xfba8fu);
    c.r[2] = c.r[6];
    // 0fba91  shl edx, 4
    X86_AT(c, 0xfba91u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fba94  add edx, eax
    X86_AT(c, 0xfba94u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fba96  cmp dword ptr [edx + 0xd4a74], 0xe
    X86_AT(c, 0xfba96u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A74u))), 0xEu, 0, 4);
    // 0fba9d  jne 0xfbaa9
    X86_AT(c, 0xfba9du);
    if (x86_cc(c, 5)) { goto L_fbaa9; }
    X86_TICK(c, 2);
    // 0fba9f  mov dword ptr [edx + 0xd4a74], 0xf
    X86_AT(c, 0xfba9fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A74u)), 0xFu);
L_fbaa9:
    X86_TICK(c, 40);
    // 0fbaa9  mov eax, 0xd4a48
    X86_AT(c, 0xfbaa9u);
    c.r[0] = 0xD4A48u;
    // 0fbaae  mov edx, esi
    X86_AT(c, 0xfbaaeu);
    c.r[2] = c.r[6];
    // 0fbab0  shl edx, 4
    X86_AT(c, 0xfbab0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fbab3  mov ecx, edi
    X86_AT(c, 0xfbab3u);
    c.r[1] = c.r[7];
    // 0fbab5  shl ecx, 8
    X86_AT(c, 0xfbab5u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[1] = r; }
    // 0fbab8  add ecx, edx
    X86_AT(c, 0xfbab8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0fbaba  mov eax, dword ptr [eax + 0x20]
    X86_AT(c, 0xfbabau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x20u)));
    // 0fbabd  shl eax, 8
    X86_AT(c, 0xfbabdu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fbac0  add edx, eax
    X86_AT(c, 0xfbac0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fbac2  lea eax, [edi + edx*1]
    X86_AT(c, 0xfbac2u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[2]);
    // 0fbac5  mov dl, byte ptr [ecx + 0xd4a74]
    X86_AT(c, 0xfbac5u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[1] + 0xD4A74u))));
    // 0fbacb  mov byte ptr [eax + 0xd5ae4], dl
    X86_AT(c, 0xfbacbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xD5AE4u)), g8(c, 2));
    // 0fbad1  inc esi
    X86_AT(c, 0xfbad1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0fbad2  jmp 0xfba2f
    X86_AT(c, 0xfbad2u);
    X86_POLL(c, 0xfba2fu); goto L_fba2f;
L_fbad7:
    X86_TICK(c, 9);
    // 0fbad7  inc edi
    X86_AT(c, 0xfbad7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0fbad8  jmp 0xfba24
    X86_AT(c, 0xfbad8u);
    X86_POLL(c, 0xfba24u); goto L_fba24;
L_fbadd:
    X86_TICK(c, 18);
    // 0fbadd  pop edi
    X86_AT(c, 0xfbaddu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fbade  pop esi
    X86_AT(c, 0xfbadeu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fbadf  ret 
    X86_AT(c, 0xfbadfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfba20u, "ran off the end of a function");
}
void f_000fbae0(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0fbae0  push ebp
    X86_AT(c, 0xfbae0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fbae1  mov ebp, esp
    X86_AT(c, 0xfbae1u);
    c.r[5] = c.r[4];
    // 0fbae3  push esi
    X86_AT(c, 0xfbae3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fbae4  push edi
    X86_AT(c, 0xfbae4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fbae5  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xfbae5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0fbae8  jmp 0xfbb3e
    X86_AT(c, 0xfbae8u);
    goto L_fbb3e;
L_fbb3e:
    X86_TICK(c, 24);
    // 0fbb3e  pop edi
    X86_AT(c, 0xfbb3eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fbb3f  pop esi
    X86_AT(c, 0xfbb3fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fbb40  leave 
    X86_AT(c, 0xfbb40u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fbb41  ret 
    X86_AT(c, 0xfbb41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfbae0u, "ran off the end of a function");
}
void f_000fbb44(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0fbb44  push ebp
    X86_AT(c, 0xfbb44u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fbb45  mov ebp, esp
    X86_AT(c, 0xfbb45u);
    c.r[5] = c.r[4];
    // 0fbb47  sub esp, 0xc
    X86_AT(c, 0xfbb47u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0fbb4a  push ebx
    X86_AT(c, 0xfbb4au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fbb4b  push esi
    X86_AT(c, 0xfbb4bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fbb4c  push edi
    X86_AT(c, 0xfbb4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fbb4d  sub eax, eax
    X86_AT(c, 0xfbb4du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fbb4f  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xfbb4fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0fbb52  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xfbb52u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0fbb55  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xfbb55u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0fbb58  cmp eax, dword ptr [0xd7750]
    X86_AT(c, 0xfbb58u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xD7750u))), 0, 4);
    // 0fbb5e  jne 0xfbb6f
    X86_AT(c, 0xfbb5eu);
    if (x86_cc(c, 5)) { goto L_fbb6f; }
    X86_TICK(c, 9);
    // 0fbb60  push 0xb624
    X86_AT(c, 0xfbb60u);
    { uint32_t v = 0xB624u; push32(c, v); }
    // 0fbb65  call 0xe75f8
    X86_AT(c, 0xfbb65u);
    push32(c, 0xfbb6au); f_000e75f8(c); X86_RET(c, 0xfbb6au);
    X86_TICK(c, 9);
    // 0fbb6a  add esp, 4
    X86_AT(c, 0xfbb6au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0fbb6d  jmp 0xfbbe1
    X86_AT(c, 0xfbb6du);
    goto L_fbbe1;
L_fbb6f:
    X86_TICK(c, 42);
    // 0fbb6f  mov eax, dword ptr [0xd7750]
    X86_AT(c, 0xfbb6fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD7750u)));
    // 0fbb74  mov dword ptr [0xd7744], eax
    X86_AT(c, 0xfbb74u);
    wr32((c.sbase[3] + (uint32_t)(0xD7744u)), c.r[0]);
    // 0fbb79  add eax, 0x32000
    X86_AT(c, 0xfbb79u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x32000u, 0, 4); }
    // 0fbb7e  mov dword ptr [0xd7748], eax
    X86_AT(c, 0xfbb7eu);
    wr32((c.sbase[3] + (uint32_t)(0xD7748u)), c.r[0]);
    // 0fbb83  add eax, 0xc800
    X86_AT(c, 0xfbb83u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xC800u, 0, 4); }
    // 0fbb88  mov dword ptr [0xd774c], eax
    X86_AT(c, 0xfbb88u);
    wr32((c.sbase[3] + (uint32_t)(0xD774Cu)), c.r[0]);
    // 0fbb8d  lea ebx, [ebp - 0xc]
    X86_AT(c, 0xfbb8du);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0fbb90  push ebx
    X86_AT(c, 0xfbb90u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fbb91  lea esi, [ebp - 8]
    X86_AT(c, 0xfbb91u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0fbb94  push esi
    X86_AT(c, 0xfbb94u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fbb95  lea edi, [ebp - 4]
    X86_AT(c, 0xfbb95u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0fbb98  push edi
    X86_AT(c, 0xfbb98u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fbb99  push 0x32000
    X86_AT(c, 0xfbb99u);
    { uint32_t v = 0x32000u; push32(c, v); }
    // 0fbb9e  push dword ptr [0xd7744]
    X86_AT(c, 0xfbb9eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xD7744u))); push32(c, v); }
    // 0fbba4  push 0xb680
    X86_AT(c, 0xfbba4u);
    { uint32_t v = 0xB680u; push32(c, v); }
    // 0fbba9  call 0xe6460
    X86_AT(c, 0xfbba9u);
    push32(c, 0xfbbaeu); f_000e6460(c); X86_RET(c, 0xfbbaeu);
    X86_TICK(c, 22);
    // 0fbbae  push ebx
    X86_AT(c, 0xfbbaeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fbbaf  push esi
    X86_AT(c, 0xfbbafu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fbbb0  push edi
    X86_AT(c, 0xfbbb0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fbbb1  push 0xc800
    X86_AT(c, 0xfbbb1u);
    { uint32_t v = 0xC800u; push32(c, v); }
    // 0fbbb6  push dword ptr [0xd7748]
    X86_AT(c, 0xfbbb6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xD7748u))); push32(c, v); }
    // 0fbbbc  push 0xb698
    X86_AT(c, 0xfbbbcu);
    { uint32_t v = 0xB698u; push32(c, v); }
    // 0fbbc1  call 0xe6460
    X86_AT(c, 0xfbbc1u);
    push32(c, 0xfbbc6u); f_000e6460(c); X86_RET(c, 0xfbbc6u);
    X86_TICK(c, 22);
    // 0fbbc6  push ebx
    X86_AT(c, 0xfbbc6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fbbc7  push esi
    X86_AT(c, 0xfbbc7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fbbc8  push edi
    X86_AT(c, 0xfbbc8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fbbc9  push 0x3200
    X86_AT(c, 0xfbbc9u);
    { uint32_t v = 0x3200u; push32(c, v); }
    // 0fbbce  push dword ptr [0xd774c]
    X86_AT(c, 0xfbbceu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xD774Cu))); push32(c, v); }
    // 0fbbd4  push 0xb6b0
    X86_AT(c, 0xfbbd4u);
    { uint32_t v = 0xB6B0u; push32(c, v); }
    // 0fbbd9  call 0xe6460
    X86_AT(c, 0xfbbd9u);
    push32(c, 0xfbbdeu); f_000e6460(c); X86_RET(c, 0xfbbdeu);
    X86_TICK(c, 2);
    // 0fbbde  add esp, 0x48
    X86_AT(c, 0xfbbdeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
L_fbbe1:
    X86_TICK(c, 28);
    // 0fbbe1  pop edi
    X86_AT(c, 0xfbbe1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fbbe2  pop esi
    X86_AT(c, 0xfbbe2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fbbe3  pop ebx
    X86_AT(c, 0xfbbe3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fbbe4  leave 
    X86_AT(c, 0xfbbe4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fbbe5  ret 
    X86_AT(c, 0xfbbe5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfbb44u, "ran off the end of a function");
}
void f_000fbbe8(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0fbbe8  push ebp
    X86_AT(c, 0xfbbe8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fbbe9  mov ebp, esp
    X86_AT(c, 0xfbbe9u);
    c.r[5] = c.r[4];
    // 0fbbeb  sub esp, 0x1c
    X86_AT(c, 0xfbbebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x1Cu, 0, 4); }
    // 0fbbee  push ebx
    X86_AT(c, 0xfbbeeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fbbef  push esi
    X86_AT(c, 0xfbbefu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fbbf0  push edi
    X86_AT(c, 0xfbbf0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fbbf1  cmp word ptr [0xd7754], 0
    X86_AT(c, 0xfbbf1u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xD7754u))), 0x0u, 0, 2);
    // 0fbbf9  jne 0xfbd09
    X86_AT(c, 0xfbbf9u);
    if (x86_cc(c, 5)) { goto L_fbd09; }
    X86_TICK(c, 2);
    // 0fbbff  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xfbbffu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_fbc06:
    X86_TICK(c, 12);
    // 0fbc06  cmp dword ptr [ebp - 8], 4
    X86_AT(c, 0xfbc06u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x4u, 0, 4);
    // 0fbc0a  jge 0xfbd09
    X86_AT(c, 0xfbc0au);
    if (x86_cc(c, 13)) { goto L_fbd09; }
    X86_TICK(c, 2);
    // 0fbc10  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xfbc10u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_fbc17:
    X86_TICK(c, 12);
    // 0fbc17  cmp dword ptr [ebp - 0xc], 0xb
    X86_AT(c, 0xfbc17u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0xBu, 0, 4);
    // 0fbc1b  jge 0xfbcf6
    X86_AT(c, 0xfbc1bu);
    if (x86_cc(c, 13)) { goto L_fbcf6; }
    X86_TICK(c, 2);
    // 0fbc21  sub esi, esi
    X86_AT(c, 0xfbc21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_fbc23:
    X86_TICK(c, 7);
    // 0fbc23  cmp esi, 0xb
    X86_AT(c, 0xfbc23u);
    (void)x86_sub(c, c.r[6], 0xBu, 0, 4);
    // 0fbc26  jge 0xfbcee
    X86_AT(c, 0xfbc26u);
    if (x86_cc(c, 13)) { goto L_fbcee; }
    X86_TICK(c, 33);
    // 0fbc2c  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xfbc2cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0fbc2f  lea edx, [eax + eax*4]
    X86_AT(c, 0xfbc2fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fbc32  lea edx, [edx + edx*2]
    X86_AT(c, 0xfbc32u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0fbc35  lea edx, [eax + edx*8]
    X86_AT(c, 0xfbc35u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 0fbc38  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xfbc38u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0fbc3b  lea ecx, [eax + eax*8]
    X86_AT(c, 0xfbc3bu);
    c.r[1] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0fbc3e  lea eax, [ecx + eax*2]
    X86_AT(c, 0xfbc3eu);
    c.r[0] = (uint32_t)(c.r[1] + c.r[0] * 2);
    // 0fbc41  add eax, edx
    X86_AT(c, 0xfbc41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0fbc43  add eax, esi
    X86_AT(c, 0xfbc43u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 0fbc45  mov al, byte ptr [eax + 0xd7560]
    X86_AT(c, 0xfbc45u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xD7560u))));
    // 0fbc4b  and al, al
    X86_AT(c, 0xfbc4bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0fbc4d  je 0xfbce8
    X86_AT(c, 0xfbc4du);
    if (x86_cc(c, 4)) { goto L_fbce8; }
    X86_TICK(c, 60);
    // 0fbc53  mov edx, esi
    X86_AT(c, 0xfbc53u);
    c.r[2] = c.r[6];
    // 0fbc55  shl edx, 5
    X86_AT(c, 0xfbc55u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fbc58  mov byte ptr [ebp - 0x18], al
    X86_AT(c, 0xfbc58u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), g8(c, 0));
    // 0fbc5b  xchg edx, eax
    X86_AT(c, 0xfbc5bu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0fbc5c  cdq 
    X86_AT(c, 0xfbc5cu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0fbc5d  sub eax, edx
    X86_AT(c, 0xfbc5du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0fbc5f  sar eax, 1
    X86_AT(c, 0xfbc5fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0fbc61  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xfbc61u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0fbc64  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xfbc64u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0fbc67  lea eax, [edx + edx*4]
    X86_AT(c, 0xfbc67u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0fbc6a  lea eax, [edx + eax*2]
    X86_AT(c, 0xfbc6au);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0fbc6d  shl eax, 0xa
    X86_AT(c, 0xfbc6du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[0] = r; }
    // 0fbc70  cdq 
    X86_AT(c, 0xfbc70u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0fbc71  sub eax, edx
    X86_AT(c, 0xfbc71u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0fbc73  sar eax, 1
    X86_AT(c, 0xfbc73u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0fbc75  add eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xfbc75u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0, 4); }
    // 0fbc78  lea ebx, [eax*1 + 0xbe5f4]
    X86_AT(c, 0xfbc78u);
    c.r[3] = (uint32_t)(c.r[0] + 0xBE5F4u);
    // 0fbc7f  movzx eax, byte ptr [ebp - 0x18]
    X86_AT(c, 0xfbc7fu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0fbc83  shl eax, 9
    X86_AT(c, 0xfbc83u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0fbc86  add eax, 0xab378
    X86_AT(c, 0xfbc86u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xAB378u, 0, 4); }
    // 0fbc8b  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xfbc8bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0fbc8e  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xfbc8eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_fbc95:
    X86_TICK(c, 12);
    // 0fbc95  cmp dword ptr [ebp - 4], 0x20
    X86_AT(c, 0xfbc95u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x20u, 0, 4);
    // 0fbc99  jge 0xfbce8
    X86_AT(c, 0xfbc99u);
    if (x86_cc(c, 13)) { goto L_fbce8; }
    X86_TICK(c, 2);
    // 0fbc9b  sub edi, edi
    X86_AT(c, 0xfbc9bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_fbc9d:
    X86_TICK(c, 7);
    // 0fbc9d  cmp edi, 0x10
    X86_AT(c, 0xfbc9du);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0fbca0  jge 0xfbcdd
    X86_AT(c, 0xfbca0u);
    if (x86_cc(c, 13)) { goto L_fbcdd; }
    X86_TICK(c, 19);
    // 0fbca2  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xfbca2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0fbca5  mov al, byte ptr [eax]
    X86_AT(c, 0xfbca5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0fbca7  and al, 0xf
    X86_AT(c, 0xfbca7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0fbca9  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xfbca9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
    // 0fbcac  and al, al
    X86_AT(c, 0xfbcacu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0fbcae  jne 0xfbcb8
    X86_AT(c, 0xfbcaeu);
    if (x86_cc(c, 5)) { goto L_fbcb8; }
    X86_TICK(c, 8);
    // 0fbcb0  mov al, byte ptr [ebx + edi*1]
    X86_AT(c, 0xfbcb0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + c.r[7]))));
    // 0fbcb3  and al, 0xf
    X86_AT(c, 0xfbcb3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0fbcb5  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xfbcb5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
L_fbcb8:
    X86_TICK(c, 25);
    // 0fbcb8  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xfbcb8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0fbcbb  inc dword ptr [ebp - 0x14]
    X86_AT(c, 0xfbcbbu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fbcbe  mov al, byte ptr [eax]
    X86_AT(c, 0xfbcbeu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0fbcc0  and al, 0xf0
    X86_AT(c, 0xfbcc0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0fbcc2  mov byte ptr [ebp - 0xe], al
    X86_AT(c, 0xfbcc2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), g8(c, 0));
    // 0fbcc5  and al, al
    X86_AT(c, 0xfbcc5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0fbcc7  jne 0xfbcd1
    X86_AT(c, 0xfbcc7u);
    if (x86_cc(c, 5)) { goto L_fbcd1; }
    X86_TICK(c, 8);
    // 0fbcc9  mov al, byte ptr [ebx + edi*1]
    X86_AT(c, 0xfbcc9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + c.r[7]))));
    // 0fbccc  and al, 0xf0
    X86_AT(c, 0xfbcccu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0fbcce  mov byte ptr [ebp - 0xe], al
    X86_AT(c, 0xfbcceu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), g8(c, 0));
L_fbcd1:
    X86_TICK(c, 21);
    // 0fbcd1  mov al, byte ptr [ebp - 0xd]
    X86_AT(c, 0xfbcd1u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))));
    // 0fbcd4  add al, byte ptr [ebp - 0xe]
    X86_AT(c, 0xfbcd4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0, 1)); }
    // 0fbcd7  mov byte ptr [ebx + edi*1], al
    X86_AT(c, 0xfbcd7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + c.r[7])), g8(c, 0));
    // 0fbcda  inc edi
    X86_AT(c, 0xfbcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0fbcdb  jmp 0xfbc9d
    X86_AT(c, 0xfbcdbu);
    X86_POLL(c, 0xfbc9du); goto L_fbc9d;
L_fbcdd:
    X86_TICK(c, 15);
    // 0fbcdd  inc dword ptr [ebp - 4]
    X86_AT(c, 0xfbcddu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fbce0  add ebx, 0xb0
    X86_AT(c, 0xfbce0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0xB0u, 0, 4); }
    // 0fbce6  jmp 0xfbc95
    X86_AT(c, 0xfbce6u);
    X86_POLL(c, 0xfbc95u); goto L_fbc95;
L_fbce8:
    X86_TICK(c, 9);
    // 0fbce8  inc esi
    X86_AT(c, 0xfbce8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0fbce9  jmp 0xfbc23
    X86_AT(c, 0xfbce9u);
    X86_POLL(c, 0xfbc23u); goto L_fbc23;
L_fbcee:
    X86_TICK(c, 13);
    // 0fbcee  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xfbceeu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fbcf1  jmp 0xfbc17
    X86_AT(c, 0xfbcf1u);
    X86_POLL(c, 0xfbc17u); goto L_fbc17;
L_fbcf6:
    X86_TICK(c, 12);
    // 0fbcf6  push dword ptr [ebp - 8]
    X86_AT(c, 0xfbcf6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0fbcf9  call 0xfbd10
    X86_AT(c, 0xfbcf9u);
    push32(c, 0xfbcfeu); f_000fbd10(c); X86_RET(c, 0xfbcfeu);
    X86_TICK(c, 15);
    // 0fbcfe  inc dword ptr [ebp - 8]
    X86_AT(c, 0xfbcfeu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fbd01  add esp, 4
    X86_AT(c, 0xfbd01u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0fbd04  jmp 0xfbc06
    X86_AT(c, 0xfbd04u);
    X86_POLL(c, 0xfbc06u); goto L_fbc06;
L_fbd09:
    X86_TICK(c, 28);
    // 0fbd09  pop edi
    X86_AT(c, 0xfbd09u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fbd0a  pop esi
    X86_AT(c, 0xfbd0au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fbd0b  pop ebx
    X86_AT(c, 0xfbd0bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fbd0c  leave 
    X86_AT(c, 0xfbd0cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fbd0d  ret 
    X86_AT(c, 0xfbd0du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfbbe8u, "ran off the end of a function");
}
void f_000fbd10(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0fbd10  push ebp
    X86_AT(c, 0xfbd10u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fbd11  mov ebp, esp
    X86_AT(c, 0xfbd11u);
    c.r[5] = c.r[4];
    // 0fbd13  sub esp, 0xc
    X86_AT(c, 0xfbd13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0fbd16  push esi
    X86_AT(c, 0xfbd16u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fbd17  push edi
    X86_AT(c, 0xfbd17u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fbd18  mov eax, dword ptr [0xd5b78]
    X86_AT(c, 0xfbd18u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD5B78u)));
    // 0fbd1d  and eax, eax
    X86_AT(c, 0xfbd1du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0fbd1f  je 0xfbe9e
    X86_AT(c, 0xfbd1fu);
    if (x86_cc(c, 4)) { goto L_fbe9e; }
    X86_TICK(c, 15);
    // 0fbd25  mov edx, 3
    X86_AT(c, 0xfbd25u);
    c.r[2] = 0x3u;
    // 0fbd2a  sub edx, dword ptr [ebp + 8]
    X86_AT(c, 0xfbd2au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 0fbd2d  cmp edx, eax
    X86_AT(c, 0xfbd2du);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0fbd2f  jne 0xfbe9e
    X86_AT(c, 0xfbd2fu);
    if (x86_cc(c, 5)) { goto L_fbe9e; }
    X86_TICK(c, 10);
    // 0fbd35  xchg edx, eax
    X86_AT(c, 0xfbd35u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0fbd36  cmp edx, 1
    X86_AT(c, 0xfbd36u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0fbd39  je 0xfbd52
    X86_AT(c, 0xfbd39u);
    if (x86_cc(c, 4)) { goto L_fbd52; }
    X86_TICK(c, 7);
    // 0fbd3b  cmp edx, 2
    X86_AT(c, 0xfbd3bu);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0fbd3e  je 0xfbdc4
    X86_AT(c, 0xfbd3eu);
    if (x86_cc(c, 4)) { goto L_fbdc4; }
    X86_TICK(c, 7);
    // 0fbd44  cmp edx, 3
    X86_AT(c, 0xfbd44u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0fbd47  je 0xfbe33
    X86_AT(c, 0xfbd47u);
    if (x86_cc(c, 4)) { goto L_fbe33; }
    X86_TICK(c, 7);
    // 0fbd4d  jmp 0xfbe9e
    X86_AT(c, 0xfbd4du);
    goto L_fbe9e;
L_fbd52:
    X86_TICK(c, 19);
    // 0fbd52  mov esi, 0xc3328
    X86_AT(c, 0xfbd52u);
    c.r[6] = 0xC3328u;
    // 0fbd57  mov eax, dword ptr [0xd5b74]
    X86_AT(c, 0xfbd57u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD5B74u)));
    // 0fbd5c  shl eax, 0xd
    X86_AT(c, 0xfbd5cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xDu, 4, w); if (w) c.r[0] = r; }
    // 0fbd5f  add eax, dword ptr [0xd7744]
    X86_AT(c, 0xfbd5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xD7744u))), 0, 4); }
    // 0fbd65  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xfbd65u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0fbd68  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xfbd68u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_fbd6f:
    X86_TICK(c, 12);
    // 0fbd6f  cmp dword ptr [ebp - 4], 0x80
    X86_AT(c, 0xfbd6fu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x80u, 0, 4);
    // 0fbd76  jge 0xfbe9e
    X86_AT(c, 0xfbd76u);
    if (x86_cc(c, 13)) { goto L_fbe9e; }
    X86_TICK(c, 2);
    // 0fbd7c  sub edi, edi
    X86_AT(c, 0xfbd7cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_fbd7e:
    X86_TICK(c, 7);
    // 0fbd7e  cmp edi, 0x40
    X86_AT(c, 0xfbd7eu);
    (void)x86_sub(c, c.r[7], 0x40u, 0, 4);
    // 0fbd81  jge 0xfbdb9
    X86_AT(c, 0xfbd81u);
    if (x86_cc(c, 13)) { goto L_fbdb9; }
    X86_TICK(c, 17);
    // 0fbd83  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xfbd83u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0fbd86  mov cl, byte ptr [eax]
    X86_AT(c, 0xfbd86u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0fbd88  and cl, 0xf
    X86_AT(c, 0xfbd88u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 0fbd8b  and cl, cl
    X86_AT(c, 0xfbd8bu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 0fbd8d  jne 0xfbd95
    X86_AT(c, 0xfbd8du);
    if (x86_cc(c, 5)) { goto L_fbd95; }
    X86_TICK(c, 6);
    // 0fbd8f  mov cl, byte ptr [esi + edi*1]
    X86_AT(c, 0xfbd8fu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0fbd92  and cl, 0xf
    X86_AT(c, 0xfbd92u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
L_fbd95:
    X86_TICK(c, 25);
    // 0fbd95  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xfbd95u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0fbd98  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xfbd98u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fbd9b  mov al, byte ptr [eax]
    X86_AT(c, 0xfbd9bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0fbd9d  and al, 0xf0
    X86_AT(c, 0xfbd9du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0fbd9f  mov byte ptr [ebp - 5], al
    X86_AT(c, 0xfbd9fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
    // 0fbda2  and al, al
    X86_AT(c, 0xfbda2u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0fbda4  jne 0xfbdae
    X86_AT(c, 0xfbda4u);
    if (x86_cc(c, 5)) { goto L_fbdae; }
    X86_TICK(c, 8);
    // 0fbda6  mov al, byte ptr [esi + edi*1]
    X86_AT(c, 0xfbda6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0fbda9  and al, 0xf0
    X86_AT(c, 0xfbda9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0fbdab  mov byte ptr [ebp - 5], al
    X86_AT(c, 0xfbdabu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
L_fbdae:
    X86_TICK(c, 19);
    // 0fbdae  mov eax, ecx
    X86_AT(c, 0xfbdaeu);
    c.r[0] = c.r[1];
    // 0fbdb0  add al, byte ptr [ebp - 5]
    X86_AT(c, 0xfbdb0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0, 1)); }
    // 0fbdb3  mov byte ptr [esi + edi*1], al
    X86_AT(c, 0xfbdb3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7])), g8(c, 0));
    // 0fbdb6  inc edi
    X86_AT(c, 0xfbdb6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0fbdb7  jmp 0xfbd7e
    X86_AT(c, 0xfbdb7u);
    X86_POLL(c, 0xfbd7eu); goto L_fbd7e;
L_fbdb9:
    X86_TICK(c, 15);
    // 0fbdb9  inc dword ptr [ebp - 4]
    X86_AT(c, 0xfbdb9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fbdbc  add esi, 0xb0
    X86_AT(c, 0xfbdbcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xB0u, 0, 4); }
    // 0fbdc2  jmp 0xfbd6f
    X86_AT(c, 0xfbdc2u);
    X86_POLL(c, 0xfbd6fu); goto L_fbd6f;
L_fbdc4:
    X86_TICK(c, 19);
    // 0fbdc4  mov esi, 0xc4938
    X86_AT(c, 0xfbdc4u);
    c.r[6] = 0xC4938u;
    // 0fbdc9  mov eax, dword ptr [0xd5b74]
    X86_AT(c, 0xfbdc9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD5B74u)));
    // 0fbdce  shl eax, 0xb
    X86_AT(c, 0xfbdceu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0xBu, 4, w); if (w) c.r[0] = r; }
    // 0fbdd1  add eax, dword ptr [0xd7748]
    X86_AT(c, 0xfbdd1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xD7748u))), 0, 4); }
    // 0fbdd7  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xfbdd7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0fbdda  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xfbddau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_fbde1:
    X86_TICK(c, 12);
    // 0fbde1  cmp dword ptr [ebp - 4], 0x40
    X86_AT(c, 0xfbde1u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x40u, 0, 4);
    // 0fbde5  jge 0xfbe9e
    X86_AT(c, 0xfbde5u);
    if (x86_cc(c, 13)) { goto L_fbe9e; }
    X86_TICK(c, 2);
    // 0fbdeb  sub edi, edi
    X86_AT(c, 0xfbdebu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_fbded:
    X86_TICK(c, 7);
    // 0fbded  cmp edi, 0x20
    X86_AT(c, 0xfbdedu);
    (void)x86_sub(c, c.r[7], 0x20u, 0, 4);
    // 0fbdf0  jge 0xfbe28
    X86_AT(c, 0xfbdf0u);
    if (x86_cc(c, 13)) { goto L_fbe28; }
    X86_TICK(c, 17);
    // 0fbdf2  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xfbdf2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0fbdf5  mov cl, byte ptr [eax]
    X86_AT(c, 0xfbdf5u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0fbdf7  and cl, 0xf
    X86_AT(c, 0xfbdf7u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 0fbdfa  and cl, cl
    X86_AT(c, 0xfbdfau);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 0fbdfc  jne 0xfbe04
    X86_AT(c, 0xfbdfcu);
    if (x86_cc(c, 5)) { goto L_fbe04; }
    X86_TICK(c, 6);
    // 0fbdfe  mov cl, byte ptr [esi + edi*1]
    X86_AT(c, 0xfbdfeu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0fbe01  and cl, 0xf
    X86_AT(c, 0xfbe01u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
L_fbe04:
    X86_TICK(c, 25);
    // 0fbe04  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xfbe04u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0fbe07  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xfbe07u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fbe0a  mov al, byte ptr [eax]
    X86_AT(c, 0xfbe0au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0fbe0c  and al, 0xf0
    X86_AT(c, 0xfbe0cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0fbe0e  mov byte ptr [ebp - 5], al
    X86_AT(c, 0xfbe0eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
    // 0fbe11  and al, al
    X86_AT(c, 0xfbe11u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0fbe13  jne 0xfbe1d
    X86_AT(c, 0xfbe13u);
    if (x86_cc(c, 5)) { goto L_fbe1d; }
    X86_TICK(c, 8);
    // 0fbe15  mov al, byte ptr [esi + edi*1]
    X86_AT(c, 0xfbe15u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0fbe18  and al, 0xf0
    X86_AT(c, 0xfbe18u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0fbe1a  mov byte ptr [ebp - 5], al
    X86_AT(c, 0xfbe1au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
L_fbe1d:
    X86_TICK(c, 19);
    // 0fbe1d  mov eax, ecx
    X86_AT(c, 0xfbe1du);
    c.r[0] = c.r[1];
    // 0fbe1f  add al, byte ptr [ebp - 5]
    X86_AT(c, 0xfbe1fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0, 1)); }
    // 0fbe22  mov byte ptr [esi + edi*1], al
    X86_AT(c, 0xfbe22u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7])), g8(c, 0));
    // 0fbe25  inc edi
    X86_AT(c, 0xfbe25u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0fbe26  jmp 0xfbded
    X86_AT(c, 0xfbe26u);
    X86_POLL(c, 0xfbdedu); goto L_fbded;
L_fbe28:
    X86_TICK(c, 15);
    // 0fbe28  inc dword ptr [ebp - 4]
    X86_AT(c, 0xfbe28u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fbe2b  add esi, 0xb0
    X86_AT(c, 0xfbe2bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xB0u, 0, 4); }
    // 0fbe31  jmp 0xfbde1
    X86_AT(c, 0xfbe31u);
    X86_POLL(c, 0xfbde1u); goto L_fbde1;
L_fbe33:
    X86_TICK(c, 19);
    // 0fbe33  mov esi, 0xc5444
    X86_AT(c, 0xfbe33u);
    c.r[6] = 0xC5444u;
    // 0fbe38  mov eax, dword ptr [0xd5b74]
    X86_AT(c, 0xfbe38u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD5B74u)));
    // 0fbe3d  shl eax, 9
    X86_AT(c, 0xfbe3du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0fbe40  add eax, dword ptr [0xd774c]
    X86_AT(c, 0xfbe40u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xD774Cu))), 0, 4); }
    // 0fbe46  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xfbe46u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0fbe49  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xfbe49u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_fbe50:
    X86_TICK(c, 12);
    // 0fbe50  cmp dword ptr [ebp - 4], 0x20
    X86_AT(c, 0xfbe50u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x20u, 0, 4);
    // 0fbe54  jge 0xfbe9e
    X86_AT(c, 0xfbe54u);
    if (x86_cc(c, 13)) { goto L_fbe9e; }
    X86_TICK(c, 2);
    // 0fbe56  sub edi, edi
    X86_AT(c, 0xfbe56u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_fbe58:
    X86_TICK(c, 7);
    // 0fbe58  cmp edi, 0x10
    X86_AT(c, 0xfbe58u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0fbe5b  jge 0xfbe93
    X86_AT(c, 0xfbe5bu);
    if (x86_cc(c, 13)) { goto L_fbe93; }
    X86_TICK(c, 17);
    // 0fbe5d  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xfbe5du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0fbe60  mov cl, byte ptr [eax]
    X86_AT(c, 0xfbe60u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0fbe62  and cl, 0xf
    X86_AT(c, 0xfbe62u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 0fbe65  and cl, cl
    X86_AT(c, 0xfbe65u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 0fbe67  jne 0xfbe6f
    X86_AT(c, 0xfbe67u);
    if (x86_cc(c, 5)) { goto L_fbe6f; }
    X86_TICK(c, 6);
    // 0fbe69  mov cl, byte ptr [esi + edi*1]
    X86_AT(c, 0xfbe69u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0fbe6c  and cl, 0xf
    X86_AT(c, 0xfbe6cu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
L_fbe6f:
    X86_TICK(c, 25);
    // 0fbe6f  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xfbe6fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0fbe72  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xfbe72u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fbe75  mov al, byte ptr [eax]
    X86_AT(c, 0xfbe75u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0fbe77  and al, 0xf0
    X86_AT(c, 0xfbe77u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0fbe79  mov byte ptr [ebp - 5], al
    X86_AT(c, 0xfbe79u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
    // 0fbe7c  and al, al
    X86_AT(c, 0xfbe7cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0fbe7e  jne 0xfbe88
    X86_AT(c, 0xfbe7eu);
    if (x86_cc(c, 5)) { goto L_fbe88; }
    X86_TICK(c, 8);
    // 0fbe80  mov al, byte ptr [esi + edi*1]
    X86_AT(c, 0xfbe80u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7]))));
    // 0fbe83  and al, 0xf0
    X86_AT(c, 0xfbe83u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xF0u, 1)); }
    // 0fbe85  mov byte ptr [ebp - 5], al
    X86_AT(c, 0xfbe85u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
L_fbe88:
    X86_TICK(c, 19);
    // 0fbe88  mov eax, ecx
    X86_AT(c, 0xfbe88u);
    c.r[0] = c.r[1];
    // 0fbe8a  add al, byte ptr [ebp - 5]
    X86_AT(c, 0xfbe8au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0, 1)); }
    // 0fbe8d  mov byte ptr [esi + edi*1], al
    X86_AT(c, 0xfbe8du);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[7])), g8(c, 0));
    // 0fbe90  inc edi
    X86_AT(c, 0xfbe90u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0fbe91  jmp 0xfbe58
    X86_AT(c, 0xfbe91u);
    X86_POLL(c, 0xfbe58u); goto L_fbe58;
L_fbe93:
    X86_TICK(c, 15);
    // 0fbe93  inc dword ptr [ebp - 4]
    X86_AT(c, 0xfbe93u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fbe96  add esi, 0xb0
    X86_AT(c, 0xfbe96u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xB0u, 0, 4); }
    // 0fbe9c  jmp 0xfbe50
    X86_AT(c, 0xfbe9cu);
    X86_POLL(c, 0xfbe50u); goto L_fbe50;
L_fbe9e:
    X86_TICK(c, 24);
    // 0fbe9e  pop edi
    X86_AT(c, 0xfbe9eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fbe9f  pop esi
    X86_AT(c, 0xfbe9fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fbea0  leave 
    X86_AT(c, 0xfbea0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fbea1  ret 
    X86_AT(c, 0xfbea1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfbd10u, "ran off the end of a function");
}
void f_000fbea4(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0fbea4  push ebp
    X86_AT(c, 0xfbea4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fbea5  mov ebp, esp
    X86_AT(c, 0xfbea5u);
    c.r[5] = c.r[4];
    // 0fbea7  sub esp, 0x24
    X86_AT(c, 0xfbea7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x24u, 0, 4); }
    // 0fbeaa  push ebx
    X86_AT(c, 0xfbeaau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fbeab  push esi
    X86_AT(c, 0xfbeabu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fbeac  push edi
    X86_AT(c, 0xfbeacu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fbead  mov dword ptr [ebp - 0x24], 0xffffffff
    X86_AT(c, 0xfbeadu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0xFFFFFFFFu);
    // 0fbeb4  sub ebx, ebx
    X86_AT(c, 0xfbeb4u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_fbeb6:
    X86_TICK(c, 7);
    // 0fbeb6  cmp ebx, 4
    X86_AT(c, 0xfbeb6u);
    (void)x86_sub(c, c.r[3], 0x4u, 0, 4);
    // 0fbeb9  jge 0xfbfdc
    X86_AT(c, 0xfbeb9u);
    if (x86_cc(c, 13)) { goto L_fbfdc; }
    X86_TICK(c, 2);
    // 0fbebf  sub esi, esi
    X86_AT(c, 0xfbebfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_fbec1:
    X86_TICK(c, 7);
    // 0fbec1  cmp esi, 5
    X86_AT(c, 0xfbec1u);
    (void)x86_sub(c, c.r[6], 0x5u, 0, 4);
    // 0fbec4  jge 0xfbfd6
    X86_AT(c, 0xfbec4u);
    if (x86_cc(c, 13)) { goto L_fbfd6; }
    X86_TICK(c, 22);
    // 0fbeca  lea eax, [ebx + ebx*4]
    X86_AT(c, 0xfbecau);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 4);
    // 0fbecd  lea edx, [esi + eax*1]
    X86_AT(c, 0xfbecdu);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 0fbed0  mov al, byte ptr [edx + 0xd6be4]
    X86_AT(c, 0xfbed0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xD6BE4u))));
    // 0fbed6  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xfbed6u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0fbed9  movzx edx, al
    X86_AT(c, 0xfbed9u);
    c.r[2] = g8(c, 0);
    // 0fbedc  sub edx, 4
    X86_AT(c, 0xfbedcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x4u, 0, 4); }
    // 0fbedf  cmp edx, 0xb
    X86_AT(c, 0xfbedfu);
    (void)x86_sub(c, c.r[2], 0xBu, 0, 4);
    // 0fbee2  ja 0xfbfd0
    X86_AT(c, 0xfbee2u);
    if (x86_cc(c, 7)) { goto L_fbfd0; }
    X86_TICK(c, 7);
    // 0fbee8  jmp dword ptr cs:[edx*4 + 0xfbef0]
    X86_AT(c, 0xfbee8u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xFBEF0u)));
      switch (t) {
      case 0xfbf20u: goto L_fbf20;
      case 0xfbf2fu: goto L_fbf2f;
      case 0xfbf3eu: goto L_fbf3e;
      case 0xfbf4du: goto L_fbf4d;
      case 0xfbfd0u: goto L_fbfd0;
      default: x86_jump(c, t); return; } }
L_fbf20:
    X86_TICK(c, 15);
    // 0fbf20  lea eax, [ebx + ebx*4]
    X86_AT(c, 0xfbf20u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 4);
    // 0fbf23  lea edx, [esi + eax*1]
    X86_AT(c, 0xfbf23u);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 0fbf26  mov edi, dword ptr [edx*4 + 0xd77e0]
    X86_AT(c, 0xfbf26u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] * 4 + 0xD77E0u)));
    // 0fbf2d  jmp 0xfbf5a
    X86_AT(c, 0xfbf2du);
    goto L_fbf5a;
L_fbf2f:
    X86_TICK(c, 15);
    // 0fbf2f  lea eax, [ebx + ebx*4]
    X86_AT(c, 0xfbf2fu);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 4);
    // 0fbf32  lea edx, [esi + eax*1]
    X86_AT(c, 0xfbf32u);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 0fbf35  mov edi, dword ptr [edx*4 + 0xd78b4]
    X86_AT(c, 0xfbf35u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] * 4 + 0xD78B4u)));
    // 0fbf3c  jmp 0xfbf5a
    X86_AT(c, 0xfbf3cu);
    goto L_fbf5a;
L_fbf3e:
    X86_TICK(c, 15);
    // 0fbf3e  lea eax, [ebx + ebx*4]
    X86_AT(c, 0xfbf3eu);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 4);
    // 0fbf41  lea edx, [esi + eax*1]
    X86_AT(c, 0xfbf41u);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 0fbf44  mov edi, dword ptr [edx*4 + 0xd7988]
    X86_AT(c, 0xfbf44u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] * 4 + 0xD7988u)));
    // 0fbf4b  jmp 0xfbf5a
    X86_AT(c, 0xfbf4bu);
    goto L_fbf5a;
L_fbf4d:
    X86_TICK(c, 8);
    // 0fbf4d  lea eax, [ebx + ebx*4]
    X86_AT(c, 0xfbf4du);
    c.r[0] = (uint32_t)(c.r[3] + c.r[3] * 4);
    // 0fbf50  lea edx, [esi + eax*1]
    X86_AT(c, 0xfbf50u);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 0fbf53  mov edi, dword ptr [edx*4 + 0xd7a80]
    X86_AT(c, 0xfbf53u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] * 4 + 0xD7A80u)));
L_fbf5a:
    X86_TICK(c, 52);
    // 0fbf5a  mov dword ptr [ebp - 0x24], 0
    X86_AT(c, 0xfbf5au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0x0u);
    // 0fbf61  movzx eax, byte ptr [edi]
    X86_AT(c, 0xfbf61u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0fbf64  inc edi
    X86_AT(c, 0xfbf64u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0fbf65  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xfbf65u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0fbf68  movzx eax, byte ptr [edi]
    X86_AT(c, 0xfbf68u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0fbf6b  inc edi
    X86_AT(c, 0xfbf6bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0fbf6c  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xfbf6cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0fbf6f  movzx eax, byte ptr [edi]
    X86_AT(c, 0xfbf6fu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0fbf72  inc edi
    X86_AT(c, 0xfbf72u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0fbf73  mov dword ptr [ebp - 0x18], eax
    X86_AT(c, 0xfbf73u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[0]);
    // 0fbf76  movzx eax, byte ptr [edi]
    X86_AT(c, 0xfbf76u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0fbf79  inc edi
    X86_AT(c, 0xfbf79u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0fbf7a  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xfbf7au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0fbf7d  movzx eax, byte ptr [edi]
    X86_AT(c, 0xfbf7du);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0fbf80  inc edi
    X86_AT(c, 0xfbf80u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0fbf81  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xfbf81u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
L_fbf84:
    X86_TICK(c, 12);
    // 0fbf84  cmp dword ptr [ebp - 0x10], 0
    X86_AT(c, 0xfbf84u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0x0u, 0, 4);
    // 0fbf88  jle 0xfbfd0
    X86_AT(c, 0xfbf88u);
    if (x86_cc(c, 14)) { goto L_fbfd0; }
    X86_TICK(c, 12);
    // 0fbf8a  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xfbf8au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0fbf8d  mov dword ptr [ebp - 0x20], eax
    X86_AT(c, 0xfbf8du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[0]);
    // 0fbf90  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xfbf90u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0fbf93  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xfbf93u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
L_fbf96:
    X86_TICK(c, 11);
    // 0fbf96  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0xfbf96u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0fbf99  and eax, eax
    X86_AT(c, 0xfbf99u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0fbf9b  jle 0xfbfc8
    X86_AT(c, 0xfbf9bu);
    if (x86_cc(c, 14)) { goto L_fbfc8; }
    X86_TICK(c, 53);
    // 0fbf9d  mov edx, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xfbf9du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0fbfa0  lea ecx, [edx + edx*4]
    X86_AT(c, 0xfbfa0u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0fbfa3  lea ecx, [ecx + ecx*2]
    X86_AT(c, 0xfbfa3u);
    c.r[1] = (uint32_t)(c.r[1] + c.r[1] * 2);
    // 0fbfa6  lea ecx, [edx + ecx*8]
    X86_AT(c, 0xfbfa6u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 8);
    // 0fbfa9  mov edx, dword ptr [ebp - 0x18]
    X86_AT(c, 0xfbfa9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0fbfac  lea eax, [edx + edx*8]
    X86_AT(c, 0xfbfacu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0fbfaf  lea edx, [eax + edx*2]
    X86_AT(c, 0xfbfafu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fbfb2  add edx, ecx
    X86_AT(c, 0xfbfb2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
    // 0fbfb4  add edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xfbfb4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 4); }
    // 0fbfb7  mov al, byte ptr [edi]
    X86_AT(c, 0xfbfb7u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0fbfb9  inc edi
    X86_AT(c, 0xfbfb9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0fbfba  mov byte ptr [edx + 0xd7560], al
    X86_AT(c, 0xfbfbau);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xD7560u)), g8(c, 0));
    // 0fbfc0  inc dword ptr [ebp - 0x14]
    X86_AT(c, 0xfbfc0u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fbfc3  dec dword ptr [ebp - 0x20]
    X86_AT(c, 0xfbfc3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0fbfc6  jmp 0xfbf96
    X86_AT(c, 0xfbfc6u);
    X86_POLL(c, 0xfbf96u); goto L_fbf96;
L_fbfc8:
    X86_TICK(c, 19);
    // 0fbfc8  dec dword ptr [ebp - 0x10]
    X86_AT(c, 0xfbfc8u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0fbfcb  inc dword ptr [ebp - 0x18]
    X86_AT(c, 0xfbfcbu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fbfce  jmp 0xfbf84
    X86_AT(c, 0xfbfceu);
    X86_POLL(c, 0xfbf84u); goto L_fbf84;
L_fbfd0:
    X86_TICK(c, 9);
    // 0fbfd0  inc esi
    X86_AT(c, 0xfbfd0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0fbfd1  jmp 0xfbec1
    X86_AT(c, 0xfbfd1u);
    X86_POLL(c, 0xfbec1u); goto L_fbec1;
L_fbfd6:
    X86_TICK(c, 9);
    // 0fbfd6  inc ebx
    X86_AT(c, 0xfbfd6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0fbfd7  jmp 0xfbeb6
    X86_AT(c, 0xfbfd7u);
    X86_POLL(c, 0xfbeb6u); goto L_fbeb6;
L_fbfdc:
    X86_TICK(c, 7);
    // 0fbfdc  call 0xfccb4
    X86_AT(c, 0xfbfdcu);
    push32(c, 0xfbfe1u); f_000fccb4(c); X86_RET(c, 0xfbfe1u);
    X86_TICK(c, 7);
    // 0fbfe1  and eax, eax
    X86_AT(c, 0xfbfe1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0fbfe3  jne 0xfbfec
    X86_AT(c, 0xfbfe3u);
    if (x86_cc(c, 5)) { goto L_fbfec; }
    X86_TICK(c, 2);
    // 0fbfe5  mov dword ptr [ebp - 0x24], 0
    X86_AT(c, 0xfbfe5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0x0u);
L_fbfec:
    X86_TICK(c, 32);
    // 0fbfec  mov eax, dword ptr [ebp - 0x24]
    X86_AT(c, 0xfbfecu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)));
    // 0fbfef  pop edi
    X86_AT(c, 0xfbfefu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fbff0  pop esi
    X86_AT(c, 0xfbff0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fbff1  pop ebx
    X86_AT(c, 0xfbff1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fbff2  leave 
    X86_AT(c, 0xfbff2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fbff3  ret 
    X86_AT(c, 0xfbff3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfbea4u, "ran off the end of a function");
}
void f_000fbff4(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0fbff4  push ebp
    X86_AT(c, 0xfbff4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fbff5  mov ebp, esp
    X86_AT(c, 0xfbff5u);
    c.r[5] = c.r[4];
    // 0fbff7  sub esp, 0x10
    X86_AT(c, 0xfbff7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0fbffa  push ebx
    X86_AT(c, 0xfbffau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fbffb  push esi
    X86_AT(c, 0xfbffbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fbffc  push edi
    X86_AT(c, 0xfbffcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fbffd  mov ebx, 0xd7560
    X86_AT(c, 0xfbffdu);
    c.r[3] = 0xD7560u;
    // 0fc002  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xfc002u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_fc009:
    X86_TICK(c, 11);
    // 0fc009  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xfc009u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0fc00c  cmp eax, 0x1e4
    X86_AT(c, 0xfc00cu);
    (void)x86_sub(c, c.r[0], 0x1E4u, 0, 4);
    // 0fc011  jge 0xfc01c
    X86_AT(c, 0xfc011u);
    if (x86_cc(c, 13)) { goto L_fc01c; }
    X86_TICK(c, 17);
    // 0fc013  mov byte ptr [ebx], 0
    X86_AT(c, 0xfc013u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3])), 0x0u);
    // 0fc016  inc ebx
    X86_AT(c, 0xfc016u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0fc017  inc dword ptr [ebp - 4]
    X86_AT(c, 0xfc017u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fc01a  jmp 0xfc009
    X86_AT(c, 0xfc01au);
    X86_POLL(c, 0xfc009u); goto L_fc009;
L_fc01c:
    X86_TICK(c, 9);
    // 0fc01c  mov word ptr [0xd7754], 0xffff
    X86_AT(c, 0xfc01cu);
    wr16((c.sbase[3] + (uint32_t)(0xD7754u)), 0xFFFFu);
    // 0fc025  call 0xfbea4
    X86_AT(c, 0xfc025u);
    push32(c, 0xfc02au); f_000fbea4(c); X86_RET(c, 0xfc02au);
    X86_TICK(c, 7);
    // 0fc02a  and eax, eax
    X86_AT(c, 0xfc02au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0fc02c  jne 0xfc037
    X86_AT(c, 0xfc02cu);
    if (x86_cc(c, 5)) { goto L_fc037; }
    X86_TICK(c, 2);
    // 0fc02e  mov word ptr [0xd7754], 0
    X86_AT(c, 0xfc02eu);
    wr16((c.sbase[3] + (uint32_t)(0xD7754u)), 0x0u);
L_fc037:
    X86_TICK(c, 19);
    // 0fc037  mov al, byte ptr [0xd6be5]
    X86_AT(c, 0xfc037u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xD6BE5u))));
    // 0fc03c  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xfc03cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
    // 0fc03f  mov dl, byte ptr [0xd6be7]
    X86_AT(c, 0xfc03fu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(0xD6BE7u))));
    // 0fc045  mov byte ptr [ebp - 0xe], dl
    X86_AT(c, 0xfc045u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), g8(c, 2));
    // 0fc048  dec al
    X86_AT(c, 0xfc048u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0fc04a  jne 0xfc059
    X86_AT(c, 0xfc04au);
    if (x86_cc(c, 5)) { goto L_fc059; }
    X86_TICK(c, 7);
    // 0fc04c  dec dl
    X86_AT(c, 0xfc04cu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 0fc04e  jne 0xfc059
    X86_AT(c, 0xfc04eu);
    if (x86_cc(c, 5)) { goto L_fc059; }
    X86_TICK(c, 9);
    // 0fc050  mov byte ptr [ebp - 0xf], 0x43
    X86_AT(c, 0xfc050u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x43u);
    // 0fc054  jmp 0xfc14b
    X86_AT(c, 0xfc054u);
    goto L_fc14b;
L_fc059:
    X86_TICK(c, 12);
    // 0fc059  cmp byte ptr [ebp - 0xd], 1
    X86_AT(c, 0xfc059u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x1u, 0, 1);
    // 0fc05d  jne 0xfc069
    X86_AT(c, 0xfc05du);
    if (x86_cc(c, 5)) { goto L_fc069; }
    X86_TICK(c, 12);
    // 0fc05f  cmp byte ptr [ebp - 0xe], 2
    X86_AT(c, 0xfc05fu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x2u, 0, 1);
    // 0fc063  je 0xfc12f
    X86_AT(c, 0xfc063u);
    if (x86_cc(c, 4)) { goto L_fc12f; }
L_fc069:
    X86_TICK(c, 12);
    // 0fc069  cmp byte ptr [ebp - 0xd], 2
    X86_AT(c, 0xfc069u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x2u, 0, 1);
    // 0fc06d  jne 0xfc079
    X86_AT(c, 0xfc06du);
    if (x86_cc(c, 5)) { goto L_fc079; }
    X86_TICK(c, 12);
    // 0fc06f  cmp byte ptr [ebp - 0xe], 1
    X86_AT(c, 0xfc06fu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x1u, 0, 1);
    // 0fc073  je 0xfc141
    X86_AT(c, 0xfc073u);
    if (x86_cc(c, 4)) { goto L_fc141; }
L_fc079:
    X86_TICK(c, 12);
    // 0fc079  cmp byte ptr [ebp - 0xd], 2
    X86_AT(c, 0xfc079u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x2u, 0, 1);
    // 0fc07d  jne 0xfc089
    X86_AT(c, 0xfc07du);
    if (x86_cc(c, 5)) { goto L_fc089; }
    X86_TICK(c, 12);
    // 0fc07f  cmp byte ptr [ebp - 0xe], 2
    X86_AT(c, 0xfc07fu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x2u, 0, 1);
    // 0fc083  je 0xfc11d
    X86_AT(c, 0xfc083u);
    if (x86_cc(c, 4)) { goto L_fc11d; }
L_fc089:
    X86_TICK(c, 12);
    // 0fc089  cmp byte ptr [ebp - 0xd], 0
    X86_AT(c, 0xfc089u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x0u, 0, 1);
    // 0fc08d  jne 0xfc099
    X86_AT(c, 0xfc08du);
    if (x86_cc(c, 5)) { goto L_fc099; }
    X86_TICK(c, 12);
    // 0fc08f  cmp byte ptr [ebp - 0xe], 2
    X86_AT(c, 0xfc08fu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x2u, 0, 1);
    // 0fc093  je 0xfc0f0
    X86_AT(c, 0xfc093u);
    if (x86_cc(c, 4)) { goto L_fc0f0; }
L_fc099:
    X86_TICK(c, 12);
    // 0fc099  cmp byte ptr [ebp - 0xd], 2
    X86_AT(c, 0xfc099u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x2u, 0, 1);
    // 0fc09d  jne 0xfc0ae
    X86_AT(c, 0xfc09du);
    if (x86_cc(c, 5)) { goto L_fc0ae; }
    X86_TICK(c, 12);
    // 0fc09f  cmp byte ptr [ebp - 0xe], 0
    X86_AT(c, 0xfc09fu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x0u, 0, 1);
    // 0fc0a3  jne 0xfc0ae
    X86_AT(c, 0xfc0a3u);
    if (x86_cc(c, 5)) { goto L_fc0ae; }
    X86_TICK(c, 9);
    // 0fc0a5  mov byte ptr [ebp - 0xf], 0x2d
    X86_AT(c, 0xfc0a5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x2Du);
    // 0fc0a9  jmp 0xfc14b
    X86_AT(c, 0xfc0a9u);
    goto L_fc14b;
L_fc0ae:
    X86_TICK(c, 12);
    // 0fc0ae  cmp byte ptr [ebp - 0xd], 0
    X86_AT(c, 0xfc0aeu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x0u, 0, 1);
    // 0fc0b2  jne 0xfc0c3
    X86_AT(c, 0xfc0b2u);
    if (x86_cc(c, 5)) { goto L_fc0c3; }
    X86_TICK(c, 12);
    // 0fc0b4  cmp byte ptr [ebp - 0xe], 1
    X86_AT(c, 0xfc0b4u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x1u, 0, 1);
    // 0fc0b8  jne 0xfc0c3
    X86_AT(c, 0xfc0b8u);
    if (x86_cc(c, 5)) { goto L_fc0c3; }
    X86_TICK(c, 9);
    // 0fc0ba  mov byte ptr [ebp - 0xf], 0x4b
    X86_AT(c, 0xfc0bau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x4Bu);
    // 0fc0be  jmp 0xfc14b
    X86_AT(c, 0xfc0beu);
    goto L_fc14b;
L_fc0c3:
    X86_TICK(c, 12);
    // 0fc0c3  cmp byte ptr [ebp - 0xd], 1
    X86_AT(c, 0xfc0c3u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x1u, 0, 1);
    // 0fc0c7  jne 0xfc0d8
    X86_AT(c, 0xfc0c7u);
    if (x86_cc(c, 5)) { goto L_fc0d8; }
    X86_TICK(c, 12);
    // 0fc0c9  cmp byte ptr [ebp - 0xe], 0
    X86_AT(c, 0xfc0c9u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x0u, 0, 1);
    // 0fc0cd  jne 0xfc0d8
    X86_AT(c, 0xfc0cdu);
    if (x86_cc(c, 5)) { goto L_fc0d8; }
    X86_TICK(c, 9);
    // 0fc0cf  mov byte ptr [ebp - 0xf], 0x4a
    X86_AT(c, 0xfc0cfu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x4Au);
    // 0fc0d3  jmp 0xfc14b
    X86_AT(c, 0xfc0d3u);
    goto L_fc14b;
L_fc0d8:
    X86_TICK(c, 12);
    // 0fc0d8  cmp byte ptr [ebp - 0xd], 3
    X86_AT(c, 0xfc0d8u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x3u, 0, 1);
    // 0fc0dc  jne 0xfc0e4
    X86_AT(c, 0xfc0dcu);
    if (x86_cc(c, 5)) { goto L_fc0e4; }
    X86_TICK(c, 12);
    // 0fc0de  cmp byte ptr [ebp - 0xe], 0
    X86_AT(c, 0xfc0deu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x0u, 0, 1);
    // 0fc0e2  je 0xfc11d
    X86_AT(c, 0xfc0e2u);
    if (x86_cc(c, 4)) { goto L_fc11d; }
L_fc0e4:
    X86_TICK(c, 12);
    // 0fc0e4  cmp byte ptr [ebp - 0xd], 0
    X86_AT(c, 0xfc0e4u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x0u, 0, 1);
    // 0fc0e8  jne 0xfc0f9
    X86_AT(c, 0xfc0e8u);
    if (x86_cc(c, 5)) { goto L_fc0f9; }
    X86_TICK(c, 12);
    // 0fc0ea  cmp byte ptr [ebp - 0xe], 3
    X86_AT(c, 0xfc0eau);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x3u, 0, 1);
    // 0fc0ee  jne 0xfc0f9
    X86_AT(c, 0xfc0eeu);
    if (x86_cc(c, 5)) { goto L_fc0f9; }
L_fc0f0:
    X86_TICK(c, 9);
    // 0fc0f0  mov byte ptr [ebp - 0xf], 0x2e
    X86_AT(c, 0xfc0f0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x2Eu);
    // 0fc0f4  jmp 0xfc14b
    X86_AT(c, 0xfc0f4u);
    goto L_fc14b;
L_fc0f9:
    X86_TICK(c, 12);
    // 0fc0f9  cmp byte ptr [ebp - 0xd], 3
    X86_AT(c, 0xfc0f9u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x3u, 0, 1);
    // 0fc0fd  jne 0xfc105
    X86_AT(c, 0xfc0fdu);
    if (x86_cc(c, 5)) { goto L_fc105; }
    X86_TICK(c, 12);
    // 0fc0ff  cmp byte ptr [ebp - 0xe], 2
    X86_AT(c, 0xfc0ffu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x2u, 0, 1);
    // 0fc103  je 0xfc11d
    X86_AT(c, 0xfc103u);
    if (x86_cc(c, 4)) { goto L_fc11d; }
L_fc105:
    X86_TICK(c, 12);
    // 0fc105  cmp byte ptr [ebp - 0xd], 2
    X86_AT(c, 0xfc105u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x2u, 0, 1);
    // 0fc109  jne 0xfc111
    X86_AT(c, 0xfc109u);
    if (x86_cc(c, 5)) { goto L_fc111; }
    X86_TICK(c, 12);
    // 0fc10b  cmp byte ptr [ebp - 0xe], 3
    X86_AT(c, 0xfc10bu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x3u, 0, 1);
    // 0fc10f  je 0xfc11d
    X86_AT(c, 0xfc10fu);
    if (x86_cc(c, 4)) { goto L_fc11d; }
L_fc111:
    X86_TICK(c, 12);
    // 0fc111  cmp byte ptr [ebp - 0xd], 3
    X86_AT(c, 0xfc111u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x3u, 0, 1);
    // 0fc115  jne 0xfc123
    X86_AT(c, 0xfc115u);
    if (x86_cc(c, 5)) { goto L_fc123; }
    X86_TICK(c, 12);
    // 0fc117  cmp byte ptr [ebp - 0xe], 3
    X86_AT(c, 0xfc117u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x3u, 0, 1);
    // 0fc11b  jne 0xfc123
    X86_AT(c, 0xfc11bu);
    if (x86_cc(c, 5)) { goto L_fc123; }
L_fc11d:
    X86_TICK(c, 9);
    // 0fc11d  mov byte ptr [ebp - 0xf], 0x2f
    X86_AT(c, 0xfc11du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x2Fu);
    // 0fc121  jmp 0xfc14b
    X86_AT(c, 0xfc121u);
    goto L_fc14b;
L_fc123:
    X86_TICK(c, 12);
    // 0fc123  cmp byte ptr [ebp - 0xd], 1
    X86_AT(c, 0xfc123u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x1u, 0, 1);
    // 0fc127  jne 0xfc135
    X86_AT(c, 0xfc127u);
    if (x86_cc(c, 5)) { goto L_fc135; }
    X86_TICK(c, 12);
    // 0fc129  cmp byte ptr [ebp - 0xe], 3
    X86_AT(c, 0xfc129u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x3u, 0, 1);
    // 0fc12d  jne 0xfc135
    X86_AT(c, 0xfc12du);
    if (x86_cc(c, 5)) { goto L_fc135; }
L_fc12f:
    X86_TICK(c, 9);
    // 0fc12f  mov byte ptr [ebp - 0xf], 0x75
    X86_AT(c, 0xfc12fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x75u);
    // 0fc133  jmp 0xfc14b
    X86_AT(c, 0xfc133u);
    goto L_fc14b;
L_fc135:
    X86_TICK(c, 12);
    // 0fc135  cmp byte ptr [ebp - 0xd], 3
    X86_AT(c, 0xfc135u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))), 0x3u, 0, 1);
    // 0fc139  jne 0xfc147
    X86_AT(c, 0xfc139u);
    if (x86_cc(c, 5)) { goto L_fc147; }
    X86_TICK(c, 12);
    // 0fc13b  cmp byte ptr [ebp - 0xe], 1
    X86_AT(c, 0xfc13bu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))), 0x1u, 0, 1);
    // 0fc13f  jne 0xfc147
    X86_AT(c, 0xfc13fu);
    if (x86_cc(c, 5)) { goto L_fc147; }
L_fc141:
    X86_TICK(c, 9);
    // 0fc141  mov byte ptr [ebp - 0xf], 0x7d
    X86_AT(c, 0xfc141u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x7Du);
    // 0fc145  jmp 0xfc14b
    X86_AT(c, 0xfc145u);
    goto L_fc14b;
L_fc147:
    X86_TICK(c, 2);
    // 0fc147  mov byte ptr [ebp - 0xf], 0
    X86_AT(c, 0xfc147u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u)), 0x0u);
L_fc14b:
    X86_TICK(c, 8);
    // 0fc14b  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0xfc14bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 0fc14e  mov byte ptr [0xbe5b4], al
    X86_AT(c, 0xfc14eu);
    wr8((c.sbase[3] + (uint32_t)(0xBE5B4u)), g8(c, 0));
    // 0fc153  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xfc153u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_fc15a:
    X86_TICK(c, 12);
    // 0fc15a  cmp dword ptr [ebp - 0xc], 4
    X86_AT(c, 0xfc15au);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x4u, 0, 4);
    // 0fc15e  jge 0xfc315
    X86_AT(c, 0xfc15eu);
    if (x86_cc(c, 13)) { goto L_fc315; }
    X86_TICK(c, 2);
    // 0fc164  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xfc164u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_fc16b:
    X86_TICK(c, 11);
    // 0fc16b  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xfc16bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0fc16e  cmp eax, 5
    X86_AT(c, 0xfc16eu);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0fc171  jge 0xfc30d
    X86_AT(c, 0xfc171u);
    if (x86_cc(c, 13)) { goto L_fc30d; }
    X86_TICK(c, 28);
    // 0fc177  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xfc177u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0fc17a  lea edx, [edx + edx*4]
    X86_AT(c, 0xfc17au);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0fc17d  add edx, dword ptr [eax*4 + 0xd7758]
    X86_AT(c, 0xfc17du);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xD7758u))), 0, 4); }
    // 0fc184  mov al, byte ptr [edx + 0xd6be4]
    X86_AT(c, 0xfc184u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xD6BE4u))));
    // 0fc18a  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xfc18au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
    // 0fc18d  movzx edx, al
    X86_AT(c, 0xfc18du);
    c.r[2] = g8(c, 0);
    // 0fc190  cmp edx, 1
    X86_AT(c, 0xfc190u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0fc193  je 0xfc1b5
    X86_AT(c, 0xfc193u);
    if (x86_cc(c, 4)) { goto L_fc1b5; }
    X86_TICK(c, 7);
    // 0fc195  cmp edx, 2
    X86_AT(c, 0xfc195u);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0fc198  je 0xfc1a3
    X86_AT(c, 0xfc198u);
    if (x86_cc(c, 4)) { goto L_fc1a3; }
    X86_TICK(c, 7);
    // 0fc19a  cmp edx, 3
    X86_AT(c, 0xfc19au);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0fc19d  jne 0xfc305
    X86_AT(c, 0xfc19du);
    if (x86_cc(c, 5)) { goto L_fc305; }
L_fc1a3:
    X86_TICK(c, 23);
    // 0fc1a3  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xfc1a3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0fc1a6  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xfc1a6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0fc1a9  lea edx, [edx + edx*4]
    X86_AT(c, 0xfc1a9u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0fc1ac  add edx, dword ptr [eax*4 + 0xd7758]
    X86_AT(c, 0xfc1acu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xD7758u))), 0, 4); }
    // 0fc1b3  jmp 0xfc1c8
    X86_AT(c, 0xfc1b3u);
    goto L_fc1c8;
L_fc1b5:
    X86_TICK(c, 18);
    // 0fc1b5  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xfc1b5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0fc1b8  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xfc1b8u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0fc1bb  lea edx, [edx + edx*4]
    X86_AT(c, 0xfc1bbu);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0fc1be  add edx, dword ptr [eax*4 + 0xd7758]
    X86_AT(c, 0xfc1beu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xD7758u))), 0, 4); }
    // 0fc1c5  add edx, 0x14
    X86_AT(c, 0xfc1c5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x14u, 0, 4); }
L_fc1c8:
    X86_TICK(c, 12);
    // 0fc1c8  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xfc1c8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0fc1cb  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xfc1cbu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0fc1ce  mov ebx, dword ptr [eax*4 + 0xd8cbc]
    X86_AT(c, 0xfc1ceu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xD8CBCu)));
    // 0fc1d5  sub esi, esi
    X86_AT(c, 0xfc1d5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_fc1d7:
    X86_TICK(c, 7);
    // 0fc1d7  cmp esi, 0xb
    X86_AT(c, 0xfc1d7u);
    (void)x86_sub(c, c.r[6], 0xBu, 0, 4);
    // 0fc1da  jge 0xfc305
    X86_AT(c, 0xfc1dau);
    if (x86_cc(c, 13)) { goto L_fc305; }
    X86_TICK(c, 2);
    // 0fc1e0  sub edi, edi
    X86_AT(c, 0xfc1e0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_fc1e2:
    X86_TICK(c, 7);
    // 0fc1e2  cmp edi, 0xb
    X86_AT(c, 0xfc1e2u);
    (void)x86_sub(c, c.r[7], 0xBu, 0, 4);
    // 0fc1e5  jge 0xfc2ff
    X86_AT(c, 0xfc1e5u);
    if (x86_cc(c, 13)) { goto L_fc2ff; }
    X86_TICK(c, 11);
    // 0fc1eb  mov al, byte ptr [ebx]
    X86_AT(c, 0xfc1ebu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3]))));
    // 0fc1ed  and al, al
    X86_AT(c, 0xfc1edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0fc1ef  je 0xfc2f8
    X86_AT(c, 0xfc1efu);
    if (x86_cc(c, 4)) { goto L_fc2f8; }
    X86_TICK(c, 20);
    // 0fc1f5  mov edx, esi
    X86_AT(c, 0xfc1f5u);
    c.r[2] = c.r[6];
    // 0fc1f7  lea ecx, [edx + edx*8]
    X86_AT(c, 0xfc1f7u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0fc1fa  lea edx, [ecx + edx*2]
    X86_AT(c, 0xfc1fau);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0fc1fd  lea ecx, [edi + edx*1]
    X86_AT(c, 0xfc1fdu);
    c.r[1] = (uint32_t)(c.r[7] + c.r[2]);
    // 0fc200  mov byte ptr [ecx + 0xbe578], al
    X86_AT(c, 0xfc200u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xBE578u)), g8(c, 0));
    // 0fc206  movzx edx, al
    X86_AT(c, 0xfc206u);
    c.r[2] = g8(c, 0);
    // 0fc209  cmp edx, 0x42
    X86_AT(c, 0xfc209u);
    (void)x86_sub(c, c.r[2], 0x42u, 0, 4);
    // 0fc20c  ja 0xfc240
    X86_AT(c, 0xfc20cu);
    if (x86_cc(c, 7)) { goto L_fc240; }
    X86_TICK(c, 7);
    // 0fc20e  cmp edx, 0x42
    X86_AT(c, 0xfc20eu);
    (void)x86_sub(c, c.r[2], 0x42u, 0, 4);
    // 0fc211  je 0xfc2f8
    X86_AT(c, 0xfc211u);
    if (x86_cc(c, 4)) { goto L_fc2f8; }
    X86_TICK(c, 7);
    // 0fc217  cmp edx, 1
    X86_AT(c, 0xfc217u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0fc21a  je 0xfc2f8
    X86_AT(c, 0xfc21au);
    if (x86_cc(c, 4)) { goto L_fc2f8; }
    X86_TICK(c, 7);
    // 0fc220  cmp edx, 3
    X86_AT(c, 0xfc220u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0fc223  je 0xfc2f8
    X86_AT(c, 0xfc223u);
    if (x86_cc(c, 4)) { goto L_fc2f8; }
    X86_TICK(c, 7);
    // 0fc229  cmp edx, 0xc
    X86_AT(c, 0xfc229u);
    (void)x86_sub(c, c.r[2], 0xCu, 0, 4);
    // 0fc22c  je 0xfc2f8
    X86_AT(c, 0xfc22cu);
    if (x86_cc(c, 4)) { goto L_fc2f8; }
    X86_TICK(c, 7);
    // 0fc232  cmp edx, 0xd
    X86_AT(c, 0xfc232u);
    (void)x86_sub(c, c.r[2], 0xDu, 0, 4);
    // 0fc235  je 0xfc2f8
    X86_AT(c, 0xfc235u);
    if (x86_cc(c, 4)) { goto L_fc2f8; }
    X86_TICK(c, 9);
    // 0fc23b  cmp edx, 0x36
    X86_AT(c, 0xfc23bu);
    (void)x86_sub(c, c.r[2], 0x36u, 0, 4);
    // 0fc23e  jmp 0xfc25a
    X86_AT(c, 0xfc23eu);
    goto L_fc25a;
L_fc240:
    X86_TICK(c, 7);
    // 0fc240  cmp edx, 0x58
    X86_AT(c, 0xfc240u);
    (void)x86_sub(c, c.r[2], 0x58u, 0, 4);
    // 0fc243  ja 0xfc262
    X86_AT(c, 0xfc243u);
    if (x86_cc(c, 7)) { goto L_fc262; }
    X86_TICK(c, 7);
    // 0fc245  cmp edx, 0x58
    X86_AT(c, 0xfc245u);
    (void)x86_sub(c, c.r[2], 0x58u, 0, 4);
    // 0fc248  je 0xfc2f8
    X86_AT(c, 0xfc248u);
    if (x86_cc(c, 4)) { goto L_fc2f8; }
    X86_TICK(c, 7);
    // 0fc24e  cmp edx, 0x4a
    X86_AT(c, 0xfc24eu);
    (void)x86_sub(c, c.r[2], 0x4Au, 0, 4);
    // 0fc251  je 0xfc2f8
    X86_AT(c, 0xfc251u);
    if (x86_cc(c, 4)) { goto L_fc2f8; }
    X86_TICK(c, 2);
    // 0fc257  cmp edx, 0x51
    X86_AT(c, 0xfc257u);
    (void)x86_sub(c, c.r[2], 0x51u, 0, 4);
L_fc25a:
    X86_TICK(c, 5);
    // 0fc25a  je 0xfc2f8
    X86_AT(c, 0xfc25au);
    if (x86_cc(c, 4)) { goto L_fc2f8; }
    X86_TICK(c, 7);
    // 0fc260  jmp 0xfc290
    X86_AT(c, 0xfc260u);
    goto L_fc290;
L_fc262:
    X86_TICK(c, 7);
    // 0fc262  cmp edx, 0x59
    X86_AT(c, 0xfc262u);
    (void)x86_sub(c, c.r[2], 0x59u, 0, 4);
    // 0fc265  je 0xfc2f8
    X86_AT(c, 0xfc265u);
    if (x86_cc(c, 4)) { goto L_fc2f8; }
    X86_TICK(c, 7);
    // 0fc26b  cmp edx, 0x61
    X86_AT(c, 0xfc26bu);
    (void)x86_sub(c, c.r[2], 0x61u, 0, 4);
    // 0fc26e  je 0xfc2f8
    X86_AT(c, 0xfc26eu);
    if (x86_cc(c, 4)) { goto L_fc2f8; }
    X86_TICK(c, 7);
    // 0fc274  cmp edx, 0x80
    X86_AT(c, 0xfc274u);
    (void)x86_sub(c, c.r[2], 0x80u, 0, 4);
    // 0fc27a  jne 0xfc290
    X86_AT(c, 0xfc27au);
    if (x86_cc(c, 5)) { goto L_fc290; }
    X86_TICK(c, 17);
    // 0fc27c  mov eax, esi
    X86_AT(c, 0xfc27cu);
    c.r[0] = c.r[6];
    // 0fc27e  lea edx, [eax + eax*8]
    X86_AT(c, 0xfc27eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0fc281  lea eax, [edx + eax*2]
    X86_AT(c, 0xfc281u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0fc284  lea edx, [edi + eax*1]
    X86_AT(c, 0xfc284u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0fc287  mov byte ptr [edx + 0xbe578], 0x2c
    X86_AT(c, 0xfc287u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBE578u)), 0x2Cu);
    // 0fc28e  jmp 0xfc2f8
    X86_AT(c, 0xfc28eu);
    goto L_fc2f8;
L_fc290:
    X86_TICK(c, 11);
    // 0fc290  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xfc290u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0fc293  cmp edx, 3
    X86_AT(c, 0xfc293u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0fc296  ja 0xfc2f8
    X86_AT(c, 0xfc296u);
    if (x86_cc(c, 7)) { goto L_fc2f8; }
    X86_TICK(c, 7);
    // 0fc298  jmp dword ptr cs:[edx*4 + 0xfc2a0]
    X86_AT(c, 0xfc298u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xFC2A0u)));
      switch (t) {
      case 0xfc2b0u: goto L_fc2b0;
      case 0xfc2c2u: goto L_fc2c2;
      case 0xfc2d4u: goto L_fc2d4;
      case 0xfc2e6u: goto L_fc2e6;
      default: x86_jump(c, t); return; } }
L_fc2b0:
    X86_TICK(c, 10);
    // 0fc2b0  mov eax, esi
    X86_AT(c, 0xfc2b0u);
    c.r[0] = c.r[6];
    // 0fc2b2  lea edx, [eax + eax*8]
    X86_AT(c, 0xfc2b2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0fc2b5  lea eax, [edx + eax*2]
    X86_AT(c, 0xfc2b5u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0fc2b8  lea edx, [edi + eax*1]
    X86_AT(c, 0xfc2b8u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0fc2bb  mov byte ptr [edx + 0xd76cb], 0
    X86_AT(c, 0xfc2bbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xD76CBu)), 0x0u);
L_fc2c2:
    X86_TICK(c, 10);
    // 0fc2c2  mov eax, esi
    X86_AT(c, 0xfc2c2u);
    c.r[0] = c.r[6];
    // 0fc2c4  lea edx, [eax + eax*8]
    X86_AT(c, 0xfc2c4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0fc2c7  lea eax, [edx + eax*2]
    X86_AT(c, 0xfc2c7u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0fc2ca  lea edx, [edi + eax*1]
    X86_AT(c, 0xfc2cau);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0fc2cd  mov byte ptr [edx + 0xd7652], 0
    X86_AT(c, 0xfc2cdu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xD7652u)), 0x0u);
L_fc2d4:
    X86_TICK(c, 10);
    // 0fc2d4  mov eax, esi
    X86_AT(c, 0xfc2d4u);
    c.r[0] = c.r[6];
    // 0fc2d6  lea edx, [eax + eax*8]
    X86_AT(c, 0xfc2d6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0fc2d9  lea eax, [edx + eax*2]
    X86_AT(c, 0xfc2d9u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0fc2dc  lea edx, [edi + eax*1]
    X86_AT(c, 0xfc2dcu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0fc2df  mov byte ptr [edx + 0xd75d9], 0
    X86_AT(c, 0xfc2dfu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xD75D9u)), 0x0u);
L_fc2e6:
    X86_TICK(c, 10);
    // 0fc2e6  mov eax, esi
    X86_AT(c, 0xfc2e6u);
    c.r[0] = c.r[6];
    // 0fc2e8  lea edx, [eax + eax*8]
    X86_AT(c, 0xfc2e8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0fc2eb  lea eax, [edx + eax*2]
    X86_AT(c, 0xfc2ebu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0fc2ee  lea edx, [edi + eax*1]
    X86_AT(c, 0xfc2eeu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0fc2f1  mov byte ptr [edx + 0xd7560], 0
    X86_AT(c, 0xfc2f1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xD7560u)), 0x0u);
L_fc2f8:
    X86_TICK(c, 11);
    // 0fc2f8  inc ebx
    X86_AT(c, 0xfc2f8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0fc2f9  inc edi
    X86_AT(c, 0xfc2f9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0fc2fa  jmp 0xfc1e2
    X86_AT(c, 0xfc2fau);
    X86_POLL(c, 0xfc1e2u); goto L_fc1e2;
L_fc2ff:
    X86_TICK(c, 9);
    // 0fc2ff  inc esi
    X86_AT(c, 0xfc2ffu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0fc300  jmp 0xfc1d7
    X86_AT(c, 0xfc300u);
    X86_POLL(c, 0xfc1d7u); goto L_fc1d7;
L_fc305:
    X86_TICK(c, 13);
    // 0fc305  inc dword ptr [ebp - 8]
    X86_AT(c, 0xfc305u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fc308  jmp 0xfc16b
    X86_AT(c, 0xfc308u);
    X86_POLL(c, 0xfc16bu); goto L_fc16b;
L_fc30d:
    X86_TICK(c, 13);
    // 0fc30d  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xfc30du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fc310  jmp 0xfc15a
    X86_AT(c, 0xfc310u);
    X86_POLL(c, 0xfc15au); goto L_fc15a;
L_fc315:
    X86_TICK(c, 28);
    // 0fc315  pop edi
    X86_AT(c, 0xfc315u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fc316  pop esi
    X86_AT(c, 0xfc316u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fc317  pop ebx
    X86_AT(c, 0xfc317u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fc318  leave 
    X86_AT(c, 0xfc318u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fc319  ret 
    X86_AT(c, 0xfc319u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfbff4u, "ran off the end of a function");
}
void f_000fc14b(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0fc14b  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0xfc14bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 0fc14e  mov byte ptr [0xbe5b4], al
    X86_AT(c, 0xfc14eu);
    wr8((c.sbase[3] + (uint32_t)(0xBE5B4u)), g8(c, 0));
    // 0fc153  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xfc153u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_fc15a:
    X86_TICK(c, 12);
    // 0fc15a  cmp dword ptr [ebp - 0xc], 4
    X86_AT(c, 0xfc15au);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x4u, 0, 4);
    // 0fc15e  jge 0xfc315
    X86_AT(c, 0xfc15eu);
    if (x86_cc(c, 13)) { goto L_fc315; }
    X86_TICK(c, 2);
    // 0fc164  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xfc164u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_fc16b:
    X86_TICK(c, 11);
    // 0fc16b  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xfc16bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0fc16e  cmp eax, 5
    X86_AT(c, 0xfc16eu);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0fc171  jge 0xfc30d
    X86_AT(c, 0xfc171u);
    if (x86_cc(c, 13)) { goto L_fc30d; }
    X86_TICK(c, 28);
    // 0fc177  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xfc177u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0fc17a  lea edx, [edx + edx*4]
    X86_AT(c, 0xfc17au);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0fc17d  add edx, dword ptr [eax*4 + 0xd7758]
    X86_AT(c, 0xfc17du);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xD7758u))), 0, 4); }
    // 0fc184  mov al, byte ptr [edx + 0xd6be4]
    X86_AT(c, 0xfc184u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xD6BE4u))));
    // 0fc18a  mov byte ptr [ebp - 0xd], al
    X86_AT(c, 0xfc18au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 0));
    // 0fc18d  movzx edx, al
    X86_AT(c, 0xfc18du);
    c.r[2] = g8(c, 0);
    // 0fc190  cmp edx, 1
    X86_AT(c, 0xfc190u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0fc193  je 0xfc1b5
    X86_AT(c, 0xfc193u);
    if (x86_cc(c, 4)) { goto L_fc1b5; }
    X86_TICK(c, 7);
    // 0fc195  cmp edx, 2
    X86_AT(c, 0xfc195u);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0fc198  je 0xfc1a3
    X86_AT(c, 0xfc198u);
    if (x86_cc(c, 4)) { goto L_fc1a3; }
    X86_TICK(c, 7);
    // 0fc19a  cmp edx, 3
    X86_AT(c, 0xfc19au);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0fc19d  jne 0xfc305
    X86_AT(c, 0xfc19du);
    if (x86_cc(c, 5)) { goto L_fc305; }
L_fc1a3:
    X86_TICK(c, 23);
    // 0fc1a3  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xfc1a3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0fc1a6  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xfc1a6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0fc1a9  lea edx, [edx + edx*4]
    X86_AT(c, 0xfc1a9u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0fc1ac  add edx, dword ptr [eax*4 + 0xd7758]
    X86_AT(c, 0xfc1acu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xD7758u))), 0, 4); }
    // 0fc1b3  jmp 0xfc1c8
    X86_AT(c, 0xfc1b3u);
    goto L_fc1c8;
L_fc1b5:
    X86_TICK(c, 18);
    // 0fc1b5  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xfc1b5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0fc1b8  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xfc1b8u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0fc1bb  lea edx, [edx + edx*4]
    X86_AT(c, 0xfc1bbu);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0fc1be  add edx, dword ptr [eax*4 + 0xd7758]
    X86_AT(c, 0xfc1beu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xD7758u))), 0, 4); }
    // 0fc1c5  add edx, 0x14
    X86_AT(c, 0xfc1c5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x14u, 0, 4); }
L_fc1c8:
    X86_TICK(c, 12);
    // 0fc1c8  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xfc1c8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0fc1cb  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xfc1cbu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0fc1ce  mov ebx, dword ptr [eax*4 + 0xd8cbc]
    X86_AT(c, 0xfc1ceu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xD8CBCu)));
    // 0fc1d5  sub esi, esi
    X86_AT(c, 0xfc1d5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_fc1d7:
    X86_TICK(c, 7);
    // 0fc1d7  cmp esi, 0xb
    X86_AT(c, 0xfc1d7u);
    (void)x86_sub(c, c.r[6], 0xBu, 0, 4);
    // 0fc1da  jge 0xfc305
    X86_AT(c, 0xfc1dau);
    if (x86_cc(c, 13)) { goto L_fc305; }
    X86_TICK(c, 2);
    // 0fc1e0  sub edi, edi
    X86_AT(c, 0xfc1e0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_fc1e2:
    X86_TICK(c, 7);
    // 0fc1e2  cmp edi, 0xb
    X86_AT(c, 0xfc1e2u);
    (void)x86_sub(c, c.r[7], 0xBu, 0, 4);
    // 0fc1e5  jge 0xfc2ff
    X86_AT(c, 0xfc1e5u);
    if (x86_cc(c, 13)) { goto L_fc2ff; }
    X86_TICK(c, 11);
    // 0fc1eb  mov al, byte ptr [ebx]
    X86_AT(c, 0xfc1ebu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3]))));
    // 0fc1ed  and al, al
    X86_AT(c, 0xfc1edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0fc1ef  je 0xfc2f8
    X86_AT(c, 0xfc1efu);
    if (x86_cc(c, 4)) { goto L_fc2f8; }
    X86_TICK(c, 20);
    // 0fc1f5  mov edx, esi
    X86_AT(c, 0xfc1f5u);
    c.r[2] = c.r[6];
    // 0fc1f7  lea ecx, [edx + edx*8]
    X86_AT(c, 0xfc1f7u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0fc1fa  lea edx, [ecx + edx*2]
    X86_AT(c, 0xfc1fau);
    c.r[2] = (uint32_t)(c.r[1] + c.r[2] * 2);
    // 0fc1fd  lea ecx, [edi + edx*1]
    X86_AT(c, 0xfc1fdu);
    c.r[1] = (uint32_t)(c.r[7] + c.r[2]);
    // 0fc200  mov byte ptr [ecx + 0xbe578], al
    X86_AT(c, 0xfc200u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + 0xBE578u)), g8(c, 0));
    // 0fc206  movzx edx, al
    X86_AT(c, 0xfc206u);
    c.r[2] = g8(c, 0);
    // 0fc209  cmp edx, 0x42
    X86_AT(c, 0xfc209u);
    (void)x86_sub(c, c.r[2], 0x42u, 0, 4);
    // 0fc20c  ja 0xfc240
    X86_AT(c, 0xfc20cu);
    if (x86_cc(c, 7)) { goto L_fc240; }
    X86_TICK(c, 7);
    // 0fc20e  cmp edx, 0x42
    X86_AT(c, 0xfc20eu);
    (void)x86_sub(c, c.r[2], 0x42u, 0, 4);
    // 0fc211  je 0xfc2f8
    X86_AT(c, 0xfc211u);
    if (x86_cc(c, 4)) { goto L_fc2f8; }
    X86_TICK(c, 7);
    // 0fc217  cmp edx, 1
    X86_AT(c, 0xfc217u);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0fc21a  je 0xfc2f8
    X86_AT(c, 0xfc21au);
    if (x86_cc(c, 4)) { goto L_fc2f8; }
    X86_TICK(c, 7);
    // 0fc220  cmp edx, 3
    X86_AT(c, 0xfc220u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0fc223  je 0xfc2f8
    X86_AT(c, 0xfc223u);
    if (x86_cc(c, 4)) { goto L_fc2f8; }
    X86_TICK(c, 7);
    // 0fc229  cmp edx, 0xc
    X86_AT(c, 0xfc229u);
    (void)x86_sub(c, c.r[2], 0xCu, 0, 4);
    // 0fc22c  je 0xfc2f8
    X86_AT(c, 0xfc22cu);
    if (x86_cc(c, 4)) { goto L_fc2f8; }
    X86_TICK(c, 7);
    // 0fc232  cmp edx, 0xd
    X86_AT(c, 0xfc232u);
    (void)x86_sub(c, c.r[2], 0xDu, 0, 4);
    // 0fc235  je 0xfc2f8
    X86_AT(c, 0xfc235u);
    if (x86_cc(c, 4)) { goto L_fc2f8; }
    X86_TICK(c, 9);
    // 0fc23b  cmp edx, 0x36
    X86_AT(c, 0xfc23bu);
    (void)x86_sub(c, c.r[2], 0x36u, 0, 4);
    // 0fc23e  jmp 0xfc25a
    X86_AT(c, 0xfc23eu);
    goto L_fc25a;
L_fc240:
    X86_TICK(c, 7);
    // 0fc240  cmp edx, 0x58
    X86_AT(c, 0xfc240u);
    (void)x86_sub(c, c.r[2], 0x58u, 0, 4);
    // 0fc243  ja 0xfc262
    X86_AT(c, 0xfc243u);
    if (x86_cc(c, 7)) { goto L_fc262; }
    X86_TICK(c, 7);
    // 0fc245  cmp edx, 0x58
    X86_AT(c, 0xfc245u);
    (void)x86_sub(c, c.r[2], 0x58u, 0, 4);
    // 0fc248  je 0xfc2f8
    X86_AT(c, 0xfc248u);
    if (x86_cc(c, 4)) { goto L_fc2f8; }
    X86_TICK(c, 7);
    // 0fc24e  cmp edx, 0x4a
    X86_AT(c, 0xfc24eu);
    (void)x86_sub(c, c.r[2], 0x4Au, 0, 4);
    // 0fc251  je 0xfc2f8
    X86_AT(c, 0xfc251u);
    if (x86_cc(c, 4)) { goto L_fc2f8; }
    X86_TICK(c, 2);
    // 0fc257  cmp edx, 0x51
    X86_AT(c, 0xfc257u);
    (void)x86_sub(c, c.r[2], 0x51u, 0, 4);
L_fc25a:
    X86_TICK(c, 5);
    // 0fc25a  je 0xfc2f8
    X86_AT(c, 0xfc25au);
    if (x86_cc(c, 4)) { goto L_fc2f8; }
    X86_TICK(c, 7);
    // 0fc260  jmp 0xfc290
    X86_AT(c, 0xfc260u);
    goto L_fc290;
L_fc262:
    X86_TICK(c, 7);
    // 0fc262  cmp edx, 0x59
    X86_AT(c, 0xfc262u);
    (void)x86_sub(c, c.r[2], 0x59u, 0, 4);
    // 0fc265  je 0xfc2f8
    X86_AT(c, 0xfc265u);
    if (x86_cc(c, 4)) { goto L_fc2f8; }
    X86_TICK(c, 7);
    // 0fc26b  cmp edx, 0x61
    X86_AT(c, 0xfc26bu);
    (void)x86_sub(c, c.r[2], 0x61u, 0, 4);
    // 0fc26e  je 0xfc2f8
    X86_AT(c, 0xfc26eu);
    if (x86_cc(c, 4)) { goto L_fc2f8; }
    X86_TICK(c, 7);
    // 0fc274  cmp edx, 0x80
    X86_AT(c, 0xfc274u);
    (void)x86_sub(c, c.r[2], 0x80u, 0, 4);
    // 0fc27a  jne 0xfc290
    X86_AT(c, 0xfc27au);
    if (x86_cc(c, 5)) { goto L_fc290; }
    X86_TICK(c, 17);
    // 0fc27c  mov eax, esi
    X86_AT(c, 0xfc27cu);
    c.r[0] = c.r[6];
    // 0fc27e  lea edx, [eax + eax*8]
    X86_AT(c, 0xfc27eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0fc281  lea eax, [edx + eax*2]
    X86_AT(c, 0xfc281u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0fc284  lea edx, [edi + eax*1]
    X86_AT(c, 0xfc284u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0fc287  mov byte ptr [edx + 0xbe578], 0x2c
    X86_AT(c, 0xfc287u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBE578u)), 0x2Cu);
    // 0fc28e  jmp 0xfc2f8
    X86_AT(c, 0xfc28eu);
    goto L_fc2f8;
L_fc290:
    X86_TICK(c, 11);
    // 0fc290  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xfc290u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0fc293  cmp edx, 3
    X86_AT(c, 0xfc293u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0fc296  ja 0xfc2f8
    X86_AT(c, 0xfc296u);
    if (x86_cc(c, 7)) { goto L_fc2f8; }
    X86_TICK(c, 7);
    // 0fc298  jmp dword ptr cs:[edx*4 + 0xfc2a0]
    X86_AT(c, 0xfc298u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xFC2A0u)));
      switch (t) {
      case 0xfc2b0u: goto L_fc2b0;
      case 0xfc2c2u: goto L_fc2c2;
      case 0xfc2d4u: goto L_fc2d4;
      case 0xfc2e6u: goto L_fc2e6;
      default: x86_jump(c, t); return; } }
L_fc2b0:
    X86_TICK(c, 10);
    // 0fc2b0  mov eax, esi
    X86_AT(c, 0xfc2b0u);
    c.r[0] = c.r[6];
    // 0fc2b2  lea edx, [eax + eax*8]
    X86_AT(c, 0xfc2b2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0fc2b5  lea eax, [edx + eax*2]
    X86_AT(c, 0xfc2b5u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0fc2b8  lea edx, [edi + eax*1]
    X86_AT(c, 0xfc2b8u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0fc2bb  mov byte ptr [edx + 0xd76cb], 0
    X86_AT(c, 0xfc2bbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xD76CBu)), 0x0u);
L_fc2c2:
    X86_TICK(c, 10);
    // 0fc2c2  mov eax, esi
    X86_AT(c, 0xfc2c2u);
    c.r[0] = c.r[6];
    // 0fc2c4  lea edx, [eax + eax*8]
    X86_AT(c, 0xfc2c4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0fc2c7  lea eax, [edx + eax*2]
    X86_AT(c, 0xfc2c7u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0fc2ca  lea edx, [edi + eax*1]
    X86_AT(c, 0xfc2cau);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0fc2cd  mov byte ptr [edx + 0xd7652], 0
    X86_AT(c, 0xfc2cdu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xD7652u)), 0x0u);
L_fc2d4:
    X86_TICK(c, 10);
    // 0fc2d4  mov eax, esi
    X86_AT(c, 0xfc2d4u);
    c.r[0] = c.r[6];
    // 0fc2d6  lea edx, [eax + eax*8]
    X86_AT(c, 0xfc2d6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0fc2d9  lea eax, [edx + eax*2]
    X86_AT(c, 0xfc2d9u);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0fc2dc  lea edx, [edi + eax*1]
    X86_AT(c, 0xfc2dcu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0fc2df  mov byte ptr [edx + 0xd75d9], 0
    X86_AT(c, 0xfc2dfu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xD75D9u)), 0x0u);
L_fc2e6:
    X86_TICK(c, 10);
    // 0fc2e6  mov eax, esi
    X86_AT(c, 0xfc2e6u);
    c.r[0] = c.r[6];
    // 0fc2e8  lea edx, [eax + eax*8]
    X86_AT(c, 0xfc2e8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 0fc2eb  lea eax, [edx + eax*2]
    X86_AT(c, 0xfc2ebu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[0] * 2);
    // 0fc2ee  lea edx, [edi + eax*1]
    X86_AT(c, 0xfc2eeu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0fc2f1  mov byte ptr [edx + 0xd7560], 0
    X86_AT(c, 0xfc2f1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xD7560u)), 0x0u);
L_fc2f8:
    X86_TICK(c, 11);
    // 0fc2f8  inc ebx
    X86_AT(c, 0xfc2f8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0fc2f9  inc edi
    X86_AT(c, 0xfc2f9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0fc2fa  jmp 0xfc1e2
    X86_AT(c, 0xfc2fau);
    X86_POLL(c, 0xfc1e2u); goto L_fc1e2;
L_fc2ff:
    X86_TICK(c, 9);
    // 0fc2ff  inc esi
    X86_AT(c, 0xfc2ffu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0fc300  jmp 0xfc1d7
    X86_AT(c, 0xfc300u);
    X86_POLL(c, 0xfc1d7u); goto L_fc1d7;
L_fc305:
    X86_TICK(c, 13);
    // 0fc305  inc dword ptr [ebp - 8]
    X86_AT(c, 0xfc305u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fc308  jmp 0xfc16b
    X86_AT(c, 0xfc308u);
    X86_POLL(c, 0xfc16bu); goto L_fc16b;
L_fc30d:
    X86_TICK(c, 13);
    // 0fc30d  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xfc30du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0fc310  jmp 0xfc15a
    X86_AT(c, 0xfc310u);
    X86_POLL(c, 0xfc15au); goto L_fc15a;
L_fc315:
    X86_TICK(c, 28);
    // 0fc315  pop edi
    X86_AT(c, 0xfc315u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fc316  pop esi
    X86_AT(c, 0xfc316u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fc317  pop ebx
    X86_AT(c, 0xfc317u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fc318  leave 
    X86_AT(c, 0xfc318u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fc319  ret 
    X86_AT(c, 0xfc319u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc14bu, "ran off the end of a function");
}
void f_000fc31c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0fc31c  push ebp
    X86_AT(c, 0xfc31cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0fc31d  mov ebp, esp
    X86_AT(c, 0xfc31du);
    c.r[5] = c.r[4];
    // 0fc31f  sub esp, 0x10
    X86_AT(c, 0xfc31fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0fc322  push ebx
    X86_AT(c, 0xfc322u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0fc323  push esi
    X86_AT(c, 0xfc323u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0fc324  push edi
    X86_AT(c, 0xfc324u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fc325  mov dword ptr [ebp - 0xc], 0xffffffff
    X86_AT(c, 0xfc325u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0xFFFFFFFFu);
    // 0fc32c  push 7
    X86_AT(c, 0xfc32cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc32e  call 0xe693c
    X86_AT(c, 0xfc32eu);
    push32(c, 0xfc333u); f_000e693c(c); X86_RET(c, 0xfc333u);
    X86_TICK(c, 29);
    // 0fc333  mov eax, dword ptr [0xd4a4c]
    X86_AT(c, 0xfc333u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu)));
    // 0fc338  shl eax, 8
    X86_AT(c, 0xfc338u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fc33b  mov edx, dword ptr [0xd4a50]
    X86_AT(c, 0xfc33bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xD4A50u)));
    // 0fc341  shl edx, 4
    X86_AT(c, 0xfc341u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fc344  add edx, eax
    X86_AT(c, 0xfc344u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fc346  add esp, 4
    X86_AT(c, 0xfc346u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0fc349  mov eax, dword ptr [edx + 0xd4a74]
    X86_AT(c, 0xfc349u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A74u)));
    // 0fc34f  cmp eax, 8
    X86_AT(c, 0xfc34fu);
    (void)x86_sub(c, c.r[0], 0x8u, 0, 4);
    // 0fc352  je 0xfc6e0
    X86_AT(c, 0xfc352u);
    if (x86_cc(c, 4)) { goto L_fc6e0; }
    X86_TICK(c, 45);
    // 0fc358  mov edx, dword ptr [0xd4a4c]
    X86_AT(c, 0xfc358u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu)));
    // 0fc35e  sub edx, dword ptr [ebp + 8]
    X86_AT(c, 0xfc35eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 0fc361  shl edx, 8
    X86_AT(c, 0xfc361u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 0fc364  mov ecx, dword ptr [0xd4a50]
    X86_AT(c, 0xfc364u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xD4A50u)));
    // 0fc36a  sub ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xfc36au);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0fc36d  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xfc36du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0fc370  xchg ecx, eax
    X86_AT(c, 0xfc370u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0fc371  shl eax, 4
    X86_AT(c, 0xfc371u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 0fc374  add eax, edx
    X86_AT(c, 0xfc374u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0fc376  cmp dword ptr [eax + 0xd4a74], 1
    X86_AT(c, 0xfc376u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4A74u))), 0x1u, 0, 4);
    // 0fc37d  jne 0xfc39d
    X86_AT(c, 0xfc37du);
    if (x86_cc(c, 5)) { goto L_fc39d; }
    X86_TICK(c, 11);
    // 0fc37f  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xfc37fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0fc382  cmp eax, 1
    X86_AT(c, 0xfc382u);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 0fc385  je 0xfc6e0
    X86_AT(c, 0xfc385u);
    if (x86_cc(c, 4)) { goto L_fc6e0; }
    X86_TICK(c, 7);
    // 0fc38b  cmp eax, 2
    X86_AT(c, 0xfc38bu);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0fc38e  je 0xfc6e0
    X86_AT(c, 0xfc38eu);
    if (x86_cc(c, 4)) { goto L_fc6e0; }
    X86_TICK(c, 7);
    // 0fc394  cmp eax, 3
    X86_AT(c, 0xfc394u);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0fc397  je 0xfc6e0
    X86_AT(c, 0xfc397u);
    if (x86_cc(c, 4)) { goto L_fc6e0; }
L_fc39d:
    X86_TICK(c, 41);
    // 0fc39d  mov eax, dword ptr [0xd4a4c]
    X86_AT(c, 0xfc39du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu)));
    // 0fc3a2  sub eax, dword ptr [ebp + 8]
    X86_AT(c, 0xfc3a2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 0fc3a5  shl eax, 8
    X86_AT(c, 0xfc3a5u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0fc3a8  mov edx, dword ptr [0xd4a50]
    X86_AT(c, 0xfc3a8u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xD4A50u)));
    // 0fc3ae  sub edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xfc3aeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0fc3b1  shl edx, 4
    X86_AT(c, 0xfc3b1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 0fc3b4  add edx, eax
    X86_AT(c, 0xfc3b4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fc3b6  mov edi, dword ptr [edx + 0xd4a78]
    X86_AT(c, 0xfc3b6u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xD4A78u)));
    // 0fc3bc  push 7
    X86_AT(c, 0xfc3bcu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc3be  call 0xe1944
    X86_AT(c, 0xfc3beu);
    push32(c, 0xfc3c3u); f_000e1944(c); X86_RET(c, 0xfc3c3u);
    X86_TICK(c, 9);
    // 0fc3c3  push edi
    X86_AT(c, 0xfc3c3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0fc3c4  call 0xfcec8
    X86_AT(c, 0xfc3c4u);
    push32(c, 0xfc3c9u); f_000fcec8(c); X86_RET(c, 0xfc3c9u);
    X86_TICK(c, 11);
    // 0fc3c9  push 0xb6c8
    X86_AT(c, 0xfc3c9u);
    { uint32_t v = 0xB6C8u; push32(c, v); }
    // 0fc3ce  push 7
    X86_AT(c, 0xfc3ceu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc3d0  call 0xe5654
    X86_AT(c, 0xfc3d0u);
    push32(c, 0xfc3d5u); f_000e5654(c); X86_RET(c, 0xfc3d5u);
    X86_TICK(c, 9);
    // 0fc3d5  push 7
    X86_AT(c, 0xfc3d5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc3d7  call 0xe6c68
    X86_AT(c, 0xfc3d7u);
    push32(c, 0xfc3dcu); f_000e6c68(c); X86_RET(c, 0xfc3dcu);
    X86_TICK(c, 9);
    // 0fc3dc  push 2
    X86_AT(c, 0xfc3dcu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0fc3de  call 0xe9740
    X86_AT(c, 0xfc3deu);
    push32(c, 0xfc3e3u); f_000e9740(c); X86_RET(c, 0xfc3e3u);
    X86_TICK(c, 14);
    // 0fc3e3  add esp, 0x18
    X86_AT(c, 0xfc3e3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0fc3e6  cmp dword ptr [0xcde44], 2
    X86_AT(c, 0xfc3e6u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x2u, 0, 4);
    // 0fc3ed  jne 0xfc3f6
    X86_AT(c, 0xfc3edu);
    if (x86_cc(c, 5)) { goto L_fc3f6; }
    X86_TICK(c, 9);
    // 0fc3ef  mov esi, 0x3e8
    X86_AT(c, 0xfc3efu);
    c.r[6] = 0x3E8u;
    // 0fc3f4  jmp 0xfc435
    X86_AT(c, 0xfc3f4u);
    goto L_fc435;
L_fc3f6:
    X86_TICK(c, 54);
    // 0fc3f6  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfc3f6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fc3fb  lea edx, [eax + eax*4]
    X86_AT(c, 0xfc3fbu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fc3fe  lea edx, [eax + edx*2]
    X86_AT(c, 0xfc3feu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fc401  shl edx, 5
    X86_AT(c, 0xfc401u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fc404  sub edx, eax
    X86_AT(c, 0xfc404u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fc406  mov eax, dword ptr [edx + 0xcde6a]
    X86_AT(c, 0xfc406u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE6Au)));
    // 0fc40c  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0xfc40cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 0fc40f  cdq 
    X86_AT(c, 0xfc40fu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0fc410  sub eax, edx
    X86_AT(c, 0xfc410u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0fc412  sar eax, 1
    X86_AT(c, 0xfc412u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0fc414  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xfc414u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0fc417  movzx esi, byte ptr [edx + 0xcdea1]
    X86_AT(c, 0xfc417u);
    c.r[6] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEA1u)));
    // 0fc41e  shl esi, 3
    X86_AT(c, 0xfc41eu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0fc421  movzx esi, si
    X86_AT(c, 0xfc421u);
    c.r[6] = (c.r[6] & 0xFFFFu);
    // 0fc424  sub esi, 0x208
    X86_AT(c, 0xfc424u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x208u, 0, 4); }
    // 0fc42a  add esi, eax
    X86_AT(c, 0xfc42au);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0fc42c  add esi, 0x28
    X86_AT(c, 0xfc42cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x28u, 0, 4); }
    // 0fc42f  sub esi, dword ptr [0xd4a68]
    X86_AT(c, 0xfc42fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xD4A68u))), 0, 4); }
L_fc435:
    X86_TICK(c, 11);
    // 0fc435  push 0xff
    X86_AT(c, 0xfc435u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0fc43a  push 1
    X86_AT(c, 0xfc43au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0fc43c  call 0xe3b6c
    X86_AT(c, 0xfc43cu);
    push32(c, 0xfc441u); f_000e3b6c(c); X86_RET(c, 0xfc441u);
    X86_TICK(c, 9);
    // 0fc441  add esp, 8
    X86_AT(c, 0xfc441u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0fc444  cmp esi, eax
    X86_AT(c, 0xfc444u);
    (void)x86_sub(c, c.r[6], c.r[0], 0, 4);
    // 0fc446  jl 0xfc46a
    X86_AT(c, 0xfc446u);
    if (x86_cc(c, 12)) { goto L_fc46a; }
    X86_TICK(c, 11);
    // 0fc448  push 0xb6e4
    X86_AT(c, 0xfc448u);
    { uint32_t v = 0xB6E4u; push32(c, v); }
    // 0fc44d  push 7
    X86_AT(c, 0xfc44du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc44f  call 0xe5654
    X86_AT(c, 0xfc44fu);
    push32(c, 0xfc454u); f_000e5654(c); X86_RET(c, 0xfc454u);
    X86_TICK(c, 9);
    // 0fc454  push 7
    X86_AT(c, 0xfc454u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc456  call 0xe6c68
    X86_AT(c, 0xfc456u);
    push32(c, 0xfc45bu); f_000e6c68(c); X86_RET(c, 0xfc45bu);
    X86_TICK(c, 11);
    // 0fc45b  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xfc45bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
    // 0fc462  add esp, 0xc
    X86_AT(c, 0xfc462u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0fc465  jmp 0xfc63d
    X86_AT(c, 0xfc465u);
    goto L_fc63d;
L_fc46a:
    X86_TICK(c, 11);
    // 0fc46a  push 0xff
    X86_AT(c, 0xfc46au);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0fc46f  push 1
    X86_AT(c, 0xfc46fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0fc471  call 0xe3b6c
    X86_AT(c, 0xfc471u);
    push32(c, 0xfc476u); f_000e3b6c(c); X86_RET(c, 0xfc476u);
    X86_TICK(c, 12);
    // 0fc476  xchg esi, eax
    X86_AT(c, 0xfc476u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0fc477  push 8
    X86_AT(c, 0xfc477u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0fc479  call 0xe1a7c
    X86_AT(c, 0xfc479u);
    push32(c, 0xfc47eu); f_000e1a7c(c); X86_RET(c, 0xfc47eu);
    X86_TICK(c, 21);
    // 0fc47e  mov edx, dword ptr [0xd4a68]
    X86_AT(c, 0xfc47eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xD4A68u)));
    // 0fc484  add edx, edi
    X86_AT(c, 0xfc484u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[7], 0, 4); }
    // 0fc486  add edx, edx
    X86_AT(c, 0xfc486u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[2], 0, 4); }
    // 0fc488  add eax, edx
    X86_AT(c, 0xfc488u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0fc48a  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xfc48au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0fc48d  add esp, 0xc
    X86_AT(c, 0xfc48du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0fc490  cmp edi, 9
    X86_AT(c, 0xfc490u);
    (void)x86_sub(c, c.r[7], 0x9u, 0, 4);
    // 0fc493  jne 0xfc506
    X86_AT(c, 0xfc493u);
    if (x86_cc(c, 5)) { goto L_fc506; }
    X86_TICK(c, 25);
    // 0fc495  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfc495u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fc49a  lea edx, [eax + eax*4]
    X86_AT(c, 0xfc49au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fc49d  lea edx, [eax + edx*2]
    X86_AT(c, 0xfc49du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fc4a0  shl edx, 5
    X86_AT(c, 0xfc4a0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fc4a3  sub edx, eax
    X86_AT(c, 0xfc4a3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fc4a5  cmp byte ptr [edx + 0xcdea1], 0x41
    X86_AT(c, 0xfc4a5u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEA1u))), 0x41u, 0, 1);
    // 0fc4ac  je 0xfc506
    X86_AT(c, 0xfc4acu);
    if (x86_cc(c, 4)) { goto L_fc506; }
    X86_TICK(c, 7);
    // 0fc4ae  cmp esi, 0x20
    X86_AT(c, 0xfc4aeu);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 0fc4b1  jge 0xfc506
    X86_AT(c, 0xfc4b1u);
    if (x86_cc(c, 13)) { goto L_fc506; }
    X86_TICK(c, 9);
    // 0fc4b3  push 0
    X86_AT(c, 0xfc4b3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0fc4b5  call 0xe1944
    X86_AT(c, 0xfc4b5u);
    push32(c, 0xfc4bau); f_000e1944(c); X86_RET(c, 0xfc4bau);
    X86_TICK(c, 11);
    // 0fc4ba  push 0xb6fc
    X86_AT(c, 0xfc4bau);
    { uint32_t v = 0xB6FCu; push32(c, v); }
    // 0fc4bf  push 7
    X86_AT(c, 0xfc4bfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc4c1  call 0xe5654
    X86_AT(c, 0xfc4c1u);
    push32(c, 0xfc4c6u); f_000e5654(c); X86_RET(c, 0xfc4c6u);
    X86_TICK(c, 9);
    // 0fc4c6  push 7
    X86_AT(c, 0xfc4c6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc4c8  call 0xe6c68
    X86_AT(c, 0xfc4c8u);
    push32(c, 0xfc4cdu); f_000e6c68(c); X86_RET(c, 0xfc4cdu);
    X86_TICK(c, 34);
    // 0fc4cd  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfc4cdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fc4d2  lea edx, [eax + eax*4]
    X86_AT(c, 0xfc4d2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fc4d5  lea edx, [eax + edx*2]
    X86_AT(c, 0xfc4d5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fc4d8  shl edx, 5
    X86_AT(c, 0xfc4d8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fc4db  sub edx, eax
    X86_AT(c, 0xfc4dbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fc4dd  movzx eax, byte ptr [edx + 0xcdea1]
    X86_AT(c, 0xfc4ddu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEA1u)));
    // 0fc4e4  dec dword ptr [edx + eax*4 + 0xcdd9e]
    X86_AT(c, 0xfc4e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[0] * 4 + 0xCDD9Eu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0fc4eb  mov byte ptr [edx + 0xcdea1], 0x41
    X86_AT(c, 0xfc4ebu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEA1u)), 0x41u);
    // 0fc4f2  call 0xe1e18
    X86_AT(c, 0xfc4f2u);
    push32(c, 0xfc4f7u); f_000e1e18(c); X86_RET(c, 0xfc4f7u);
    X86_TICK(c, 11);
    // 0fc4f7  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xfc4f7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
    // 0fc4fe  add esp, 0x10
    X86_AT(c, 0xfc4feu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0fc501  jmp 0xfc5a9
    X86_AT(c, 0xfc501u);
    goto L_fc5a9;
L_fc506:
    X86_TICK(c, 7);
    // 0fc506  cmp edi, 0x10
    X86_AT(c, 0xfc506u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0fc509  jne 0xfc54c
    X86_AT(c, 0xfc509u);
    if (x86_cc(c, 5)) { goto L_fc54c; }
    X86_TICK(c, 11);
    // 0fc50b  push 0xb748
    X86_AT(c, 0xfc50bu);
    { uint32_t v = 0xB748u; push32(c, v); }
    // 0fc510  push 7
    X86_AT(c, 0xfc510u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc512  call 0xe5654
    X86_AT(c, 0xfc512u);
    push32(c, 0xfc517u); f_000e5654(c); X86_RET(c, 0xfc517u);
    X86_TICK(c, 9);
    // 0fc517  push 7
    X86_AT(c, 0xfc517u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc519  call 0xe6c68
    X86_AT(c, 0xfc519u);
    push32(c, 0xfc51eu); f_000e6c68(c); X86_RET(c, 0xfc51eu);
    X86_TICK(c, 39);
    // 0fc51e  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfc51eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fc523  lea edx, [eax + eax*4]
    X86_AT(c, 0xfc523u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fc526  lea edx, [eax + edx*2]
    X86_AT(c, 0xfc526u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fc529  shl edx, 5
    X86_AT(c, 0xfc529u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fc52c  sub edx, eax
    X86_AT(c, 0xfc52cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fc52e  mov eax, dword ptr [edx + 0xcde8d]
    X86_AT(c, 0xfc52eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE8Du)));
    // 0fc534  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0xfc534u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 0fc537  cdq 
    X86_AT(c, 0xfc537u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0fc538  sub eax, edx
    X86_AT(c, 0xfc538u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0fc53a  sar eax, 1
    X86_AT(c, 0xfc53au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0fc53c  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xfc53cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0fc53f  mov dword ptr [edx + 0xcde8d], eax
    X86_AT(c, 0xfc53fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE8Du)), c.r[0]);
    // 0fc545  call 0xe9010
    X86_AT(c, 0xfc545u);
    push32(c, 0xfc54au); f_000e9010(c); X86_RET(c, 0xfc54au);
    X86_TICK(c, 7);
    // 0fc54a  jmp 0xfc59f
    X86_AT(c, 0xfc54au);
    goto L_fc59f;
L_fc54c:
    X86_TICK(c, 7);
    // 0fc54c  cmp edi, 0x15
    X86_AT(c, 0xfc54cu);
    (void)x86_sub(c, c.r[7], 0x15u, 0, 4);
    // 0fc54f  jne 0xfc5a9
    X86_AT(c, 0xfc54fu);
    if (x86_cc(c, 5)) { goto L_fc5a9; }
    X86_TICK(c, 7);
    // 0fc551  cmp esi, 0x80
    X86_AT(c, 0xfc551u);
    (void)x86_sub(c, c.r[6], 0x80u, 0, 4);
    // 0fc557  jge 0xfc5a9
    X86_AT(c, 0xfc557u);
    if (x86_cc(c, 13)) { goto L_fc5a9; }
    X86_TICK(c, 11);
    // 0fc559  push 0xb794
    X86_AT(c, 0xfc559u);
    { uint32_t v = 0xB794u; push32(c, v); }
    // 0fc55e  push 7
    X86_AT(c, 0xfc55eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc560  call 0xe5654
    X86_AT(c, 0xfc560u);
    push32(c, 0xfc565u); f_000e5654(c); X86_RET(c, 0xfc565u);
    X86_TICK(c, 9);
    // 0fc565  push 7
    X86_AT(c, 0xfc565u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc567  call 0xe6c68
    X86_AT(c, 0xfc567u);
    push32(c, 0xfc56cu); f_000e6c68(c); X86_RET(c, 0xfc56cu);
    X86_TICK(c, 46);
    // 0fc56c  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfc56cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fc571  lea edx, [eax + eax*4]
    X86_AT(c, 0xfc571u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fc574  lea edx, [eax + edx*2]
    X86_AT(c, 0xfc574u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fc577  shl edx, 5
    X86_AT(c, 0xfc577u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fc57a  sub edx, eax
    X86_AT(c, 0xfc57au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fc57c  mov eax, dword ptr [edx + 0xcde76]
    X86_AT(c, 0xfc57cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE76u)));
    // 0fc582  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0xfc582u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 0fc585  cdq 
    X86_AT(c, 0xfc585u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0fc586  sub eax, edx
    X86_AT(c, 0xfc586u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0fc588  sar eax, 1
    X86_AT(c, 0xfc588u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0fc58a  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xfc58au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0fc58d  mov dword ptr [edx + 0xcde76], eax
    X86_AT(c, 0xfc58du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE76u)), c.r[0]);
    // 0fc593  add dword ptr [edx + 0xcde76], 5
    X86_AT(c, 0xfc593u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE76u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x5u, 0, 4)); }
    // 0fc59a  call 0xe1e18
    X86_AT(c, 0xfc59au);
    push32(c, 0xfc59fu); f_000e1e18(c); X86_RET(c, 0xfc59fu);
L_fc59f:
    X86_TICK(c, 4);
    // 0fc59f  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xfc59fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
    // 0fc5a6  add esp, 0xc
    X86_AT(c, 0xfc5a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_fc5a9:
    X86_TICK(c, 7);
    // 0fc5a9  cmp edi, 2
    X86_AT(c, 0xfc5a9u);
    (void)x86_sub(c, c.r[7], 0x2u, 0, 4);
    // 0fc5ac  jne 0xfc63d
    X86_AT(c, 0xfc5acu);
    if (x86_cc(c, 5)) { goto L_fc63d; }
    X86_TICK(c, 2);
    // 0fc5b2  mov ebx, 1
    X86_AT(c, 0xfc5b2u);
    c.r[3] = 0x1u;
L_fc5b7:
    X86_TICK(c, 7);
    // 0fc5b7  cmp ebx, 9
    X86_AT(c, 0xfc5b7u);
    (void)x86_sub(c, c.r[3], 0x9u, 0, 4);
    // 0fc5ba  jg 0xfc63d
    X86_AT(c, 0xfc5bau);
    if (x86_cc(c, 15)) { goto L_fc63d; }
    X86_TICK(c, 25);
    // 0fc5c0  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfc5c0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fc5c5  lea edx, [eax + eax*4]
    X86_AT(c, 0xfc5c5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fc5c8  lea edx, [eax + edx*2]
    X86_AT(c, 0xfc5c8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fc5cb  shl edx, 5
    X86_AT(c, 0xfc5cbu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fc5ce  sub edx, eax
    X86_AT(c, 0xfc5ceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fc5d0  cmp dword ptr [edx + ebx*4 + 0xcdebf], 0
    X86_AT(c, 0xfc5d0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[3] * 4 + 0xCDEBFu))), 0x0u, 0, 4);
    // 0fc5d8  je 0xfc637
    X86_AT(c, 0xfc5d8u);
    if (x86_cc(c, 4)) { goto L_fc637; }
    X86_TICK(c, 15);
    // 0fc5da  movzx eax, byte ptr [edx + 0xcdebe]
    X86_AT(c, 0xfc5dau);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEBEu)));
    // 0fc5e1  sub eax, 0x41
    X86_AT(c, 0xfc5e1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x41u, 0, 4); }
    // 0fc5e4  cmp eax, ebx
    X86_AT(c, 0xfc5e4u);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 0fc5e6  je 0xfc637
    X86_AT(c, 0xfc5e6u);
    if (x86_cc(c, 4)) { goto L_fc637; }
    X86_TICK(c, 21);
    // 0fc5e8  lea eax, [ebp - 1]
    X86_AT(c, 0xfc5e8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0fc5eb  push eax
    X86_AT(c, 0xfc5ebu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fc5ec  mov eax, ebx
    X86_AT(c, 0xfc5ecu);
    c.r[0] = c.r[3];
    // 0fc5ee  add al, 0x41
    X86_AT(c, 0xfc5eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0fc5f0  push eax
    X86_AT(c, 0xfc5f0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fc5f1  push 0xa
    X86_AT(c, 0xfc5f1u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0fc5f3  push 0xcfbe8
    X86_AT(c, 0xfc5f3u);
    { uint32_t v = 0xCFBE8u; push32(c, v); }
    // 0fc5f8  call 0xe53e0
    X86_AT(c, 0xfc5f8u);
    push32(c, 0xfc5fdu); f_000e53e0(c); X86_RET(c, 0xfc5fdu);
    X86_TICK(c, 11);
    // 0fc5fd  push eax
    X86_AT(c, 0xfc5fdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0fc5fe  push 7
    X86_AT(c, 0xfc5feu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc600  call 0xe6cb0
    X86_AT(c, 0xfc600u);
    push32(c, 0xfc605u); f_000e6cb0(c); X86_RET(c, 0xfc605u);
    X86_TICK(c, 11);
    // 0fc605  push 0xb7bc
    X86_AT(c, 0xfc605u);
    { uint32_t v = 0xB7BCu; push32(c, v); }
    // 0fc60a  push 7
    X86_AT(c, 0xfc60au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc60c  call 0xe5654
    X86_AT(c, 0xfc60cu);
    push32(c, 0xfc611u); f_000e5654(c); X86_RET(c, 0xfc611u);
    X86_TICK(c, 9);
    // 0fc611  push 7
    X86_AT(c, 0xfc611u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc613  call 0xe6c68
    X86_AT(c, 0xfc613u);
    push32(c, 0xfc618u); f_000e6c68(c); X86_RET(c, 0xfc618u);
    X86_TICK(c, 23);
    // 0fc618  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xfc618u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0fc61d  lea edx, [eax + eax*4]
    X86_AT(c, 0xfc61du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0fc620  lea edx, [eax + edx*2]
    X86_AT(c, 0xfc620u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0fc623  shl edx, 5
    X86_AT(c, 0xfc623u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0fc626  sub edx, eax
    X86_AT(c, 0xfc626u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0fc628  dec dword ptr [edx + ebx*4 + 0xcdebf]
    X86_AT(c, 0xfc628u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[3] * 4 + 0xCDEBFu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0fc62f  mov ebx, 0xa
    X86_AT(c, 0xfc62fu);
    c.r[3] = 0xAu;
    // 0fc634  add esp, 0x24
    X86_AT(c, 0xfc634u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
L_fc637:
    X86_TICK(c, 9);
    // 0fc637  inc ebx
    X86_AT(c, 0xfc637u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0fc638  jmp 0xfc5b7
    X86_AT(c, 0xfc638u);
    X86_POLL(c, 0xfc5b7u); goto L_fc5b7;
L_fc63d:
    X86_TICK(c, 7);
    // 0fc63d  cmp edi, 5
    X86_AT(c, 0xfc63du);
    (void)x86_sub(c, c.r[7], 0x5u, 0, 4);
    // 0fc640  je 0xfc656
    X86_AT(c, 0xfc640u);
    if (x86_cc(c, 4)) { goto L_fc656; }
    X86_TICK(c, 7);
    // 0fc642  cmp edi, 6
    X86_AT(c, 0xfc642u);
    (void)x86_sub(c, c.r[7], 0x6u, 0, 4);
    // 0fc645  je 0xfc656
    X86_AT(c, 0xfc645u);
    if (x86_cc(c, 4)) { goto L_fc656; }
    X86_TICK(c, 7);
    // 0fc647  cmp edi, 0x11
    X86_AT(c, 0xfc647u);
    (void)x86_sub(c, c.r[7], 0x11u, 0, 4);
    // 0fc64a  je 0xfc656
    X86_AT(c, 0xfc64au);
    if (x86_cc(c, 4)) { goto L_fc656; }
    X86_TICK(c, 7);
    // 0fc64c  cmp edi, 0x17
    X86_AT(c, 0xfc64cu);
    (void)x86_sub(c, c.r[7], 0x17u, 0, 4);
    // 0fc64f  je 0xfc656
    X86_AT(c, 0xfc64fu);
    if (x86_cc(c, 4)) { goto L_fc656; }
    X86_TICK(c, 7);
    // 0fc651  cmp edi, 0x18
    X86_AT(c, 0xfc651u);
    (void)x86_sub(c, c.r[7], 0x18u, 0, 4);
    // 0fc654  jne 0xfc691
    X86_AT(c, 0xfc654u);
    if (x86_cc(c, 5)) { goto L_fc691; }
L_fc656:
    X86_TICK(c, 7);
    // 0fc656  cmp esi, 0x20
    X86_AT(c, 0xfc656u);
    (void)x86_sub(c, c.r[6], 0x20u, 0, 4);
    // 0fc659  jge 0xfc691
    X86_AT(c, 0xfc659u);
    if (x86_cc(c, 13)) { goto L_fc691; }
    X86_TICK(c, 12);
    // 0fc65b  cmp dword ptr [0xd4a70], 0
    X86_AT(c, 0xfc65bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD4A70u))), 0x0u, 0, 4);
    // 0fc662  jle 0xfc691
    X86_AT(c, 0xfc662u);
    if (x86_cc(c, 14)) { goto L_fc691; }
    X86_TICK(c, 11);
    // 0fc664  push 0xb7e8
    X86_AT(c, 0xfc664u);
    { uint32_t v = 0xB7E8u; push32(c, v); }
    // 0fc669  push 7
    X86_AT(c, 0xfc669u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc66b  call 0xe5654
    X86_AT(c, 0xfc66bu);
    push32(c, 0xfc670u); f_000e5654(c); X86_RET(c, 0xfc670u);
    X86_TICK(c, 9);
    // 0fc670  push 7
    X86_AT(c, 0xfc670u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc672  call 0xe6c68
    X86_AT(c, 0xfc672u);
    push32(c, 0xfc677u); f_000e6c68(c); X86_RET(c, 0xfc677u);
    X86_TICK(c, 54);
    // 0fc677  mov eax, edi
    X86_AT(c, 0xfc677u);
    c.r[0] = c.r[7];
    // 0fc679  cdq 
    X86_AT(c, 0xfc679u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0fc67a  mov ecx, 5
    X86_AT(c, 0xfc67au);
    c.r[1] = 0x5u;
    // 0fc67f  idiv ecx
    X86_AT(c, 0xfc67fu);
    x86_idiv(c, c.r[1], 4, 0xfc67fu);
    // 0fc681  inc eax
    X86_AT(c, 0xfc681u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0fc682  mov dword ptr [0xd4a70], eax
    X86_AT(c, 0xfc682u);
    wr32((c.sbase[3] + (uint32_t)(0xD4A70u)), c.r[0]);
    // 0fc687  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xfc687u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
    // 0fc68e  add esp, 0xc
    X86_AT(c, 0xfc68eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_fc691:
    X86_TICK(c, 12);
    // 0fc691  cmp dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xfc691u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x0u, 0, 4);
    // 0fc695  je 0xfc6e0
    X86_AT(c, 0xfc695u);
    if (x86_cc(c, 4)) { goto L_fc6e0; }
    X86_TICK(c, 9);
    // 0fc697  push 0
    X86_AT(c, 0xfc697u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0fc699  call 0xe1944
    X86_AT(c, 0xfc699u);
    push32(c, 0xfc69eu); f_000e1944(c); X86_RET(c, 0xfc69eu);
    X86_TICK(c, 11);
    // 0fc69e  push 0xb814
    X86_AT(c, 0xfc69eu);
    { uint32_t v = 0xB814u; push32(c, v); }
    // 0fc6a3  push 7
    X86_AT(c, 0xfc6a3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc6a5  call 0xe5654
    X86_AT(c, 0xfc6a5u);
    push32(c, 0xfc6aau); f_000e5654(c); X86_RET(c, 0xfc6aau);
    X86_TICK(c, 9);
    // 0fc6aa  push 7
    X86_AT(c, 0xfc6aau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc6ac  call 0xe6c68
    X86_AT(c, 0xfc6acu);
    push32(c, 0xfc6b1u); f_000e6c68(c); X86_RET(c, 0xfc6b1u);
    X86_TICK(c, 16);
    // 0fc6b1  push 5
    X86_AT(c, 0xfc6b1u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0fc6b3  push dword ptr [ebp - 8]
    X86_AT(c, 0xfc6b3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0fc6b6  push 7
    X86_AT(c, 0xfc6b6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc6b8  call 0xe5630
    X86_AT(c, 0xfc6b8u);
    push32(c, 0xfc6bdu); f_000e5630(c); X86_RET(c, 0xfc6bdu);
    X86_TICK(c, 11);
    // 0fc6bd  push 0xb824
    X86_AT(c, 0xfc6bdu);
    { uint32_t v = 0xB824u; push32(c, v); }
    // 0fc6c2  push 7
    X86_AT(c, 0xfc6c2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc6c4  call 0xe5654
    X86_AT(c, 0xfc6c4u);
    push32(c, 0xfc6c9u); f_000e5654(c); X86_RET(c, 0xfc6c9u);
    X86_TICK(c, 9);
    // 0fc6c9  push 7
    X86_AT(c, 0xfc6c9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0fc6cb  call 0xe6c68
    X86_AT(c, 0xfc6cbu);
    push32(c, 0xfc6d0u); f_000e6c68(c); X86_RET(c, 0xfc6d0u);
    X86_TICK(c, 12);
    // 0fc6d0  push dword ptr [ebp - 8]
    X86_AT(c, 0xfc6d0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0fc6d3  call 0xeff44
    X86_AT(c, 0xfc6d3u);
    push32(c, 0xfc6d8u); f_000eff44(c); X86_RET(c, 0xfc6d8u);
    X86_TICK(c, 7);
    // 0fc6d8  call 0xe9010
    X86_AT(c, 0xfc6d8u);
    push32(c, 0xfc6ddu); f_000e9010(c); X86_RET(c, 0xfc6ddu);
    X86_TICK(c, 2);
    // 0fc6dd  add esp, 0x2c
    X86_AT(c, 0xfc6ddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
L_fc6e0:
    X86_TICK(c, 28);
    // 0fc6e0  pop edi
    X86_AT(c, 0xfc6e0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0fc6e1  pop esi
    X86_AT(c, 0xfc6e1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0fc6e2  pop ebx
    X86_AT(c, 0xfc6e2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0fc6e3  leave 
    X86_AT(c, 0xfc6e3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0fc6e4  ret 
    X86_AT(c, 0xfc6e4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc31cu, "ran off the end of a function");
}
}
