#include "p_game_funcs.h"
namespace p_game {
void f_0008c9f8(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08c9f8  push ebp
    X86_AT(c, 0x8c9f8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c9f9  mov ebp, esp
    X86_AT(c, 0x8c9f9u);
    c.r[5] = c.r[4];
    // 08c9fb  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0x8c9fbu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c9ff  push eax
    X86_AT(c, 0x8c9ffu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ca00  push 1
    X86_AT(c, 0x8ca00u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08ca02  push 0x34780
    X86_AT(c, 0x8ca02u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08ca07  call 0x18e
    X86_AT(c, 0x8ca07u);
    push32(c, 0x8ca0cu); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8ca0cu);
    X86_TICK(c, 9);
    // 08ca0c  push 0x34780
    X86_AT(c, 0x8ca0cu);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08ca11  call 0x498
    X86_AT(c, 0x8ca11u);
    push32(c, 0x8ca16u); x86_call_known(c, 0x498u, f_00000498); X86_RET(c, 0x8ca16u);
    X86_TICK(c, 16);
    // 08ca16  leave 
    X86_AT(c, 0x8ca16u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08ca17  ret 
    X86_AT(c, 0x8ca17u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c9f8u, "ran off the end of a function");
}
void f_0008ca4c(X86Cpu& c) {
    X86_TICK(c, 41);
    // 08ca4c  push ebp
    X86_AT(c, 0x8ca4cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08ca4d  mov ebp, esp
    X86_AT(c, 0x8ca4du);
    c.r[5] = c.r[4];
    // 08ca4f  mov word ptr [0x34d80], 2
    X86_AT(c, 0x8ca4fu);
    wr16((c.sbase[3] + (uint32_t)(0x34D80u)), 0x2u);
    // 08ca58  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0x8ca58u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08ca5c  mov word ptr [0x34d82], ax
    X86_AT(c, 0x8ca5cu);
    wr16((c.sbase[3] + (uint32_t)(0x34D82u)), (c.r[0] & 0xFFFFu));
    // 08ca62  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0x8ca62u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08ca66  mov word ptr [0x34d84], ax
    X86_AT(c, 0x8ca66u);
    wr16((c.sbase[3] + (uint32_t)(0x34D84u)), (c.r[0] & 0xFFFFu));
    // 08ca6c  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0x8ca6cu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 08ca70  mov word ptr [0x34d86], ax
    X86_AT(c, 0x8ca70u);
    wr16((c.sbase[3] + (uint32_t)(0x34D86u)), (c.r[0] & 0xFFFFu));
    // 08ca76  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0x8ca76u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 08ca7a  mov word ptr [0x34d88], ax
    X86_AT(c, 0x8ca7au);
    wr16((c.sbase[3] + (uint32_t)(0x34D88u)), (c.r[0] & 0xFFFFu));
    // 08ca80  push 0x34d80
    X86_AT(c, 0x8ca80u);
    { uint32_t v = 0x34D80u; push32(c, v); }
    // 08ca85  push 0x34780
    X86_AT(c, 0x8ca85u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08ca8a  call 0x789
    X86_AT(c, 0x8ca8au);
    push32(c, 0x8ca8fu); x86_call_known(c, 0x789u, f_00000789); X86_RET(c, 0x8ca8fu);
    X86_TICK(c, 16);
    // 08ca8f  leave 
    X86_AT(c, 0x8ca8fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08ca90  ret 
    X86_AT(c, 0x8ca90u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ca4cu, "ran off the end of a function");
}
void f_0008cb6c(X86Cpu& c) {
    X86_TICK(c, 24);
    // 08cb6c  push ebp
    X86_AT(c, 0x8cb6cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08cb6d  mov ebp, esp
    X86_AT(c, 0x8cb6du);
    c.r[5] = c.r[4];
    // 08cb6f  mov ax, word ptr [0x34e86]
    X86_AT(c, 0x8cb6fu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x34E86u))));
    // 08cb75  or al, 0x20
    X86_AT(c, 0x8cb75u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 08cb77  movsx eax, ax
    X86_AT(c, 0x8cb77u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 08cb7a  push eax
    X86_AT(c, 0x8cb7au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cb7b  push 0x34780
    X86_AT(c, 0x8cb7bu);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08cb80  call 0x245
    X86_AT(c, 0x8cb80u);
    push32(c, 0x8cb85u); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8cb85u);
    X86_TICK(c, 35);
    // 08cb85  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0x8cb85u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08cb89  mov word ptr [0x34d80], ax
    X86_AT(c, 0x8cb89u);
    wr16((c.sbase[3] + (uint32_t)(0x34D80u)), (c.r[0] & 0xFFFFu));
    // 08cb8f  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0x8cb8fu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08cb93  mov word ptr [0x34d82], ax
    X86_AT(c, 0x8cb93u);
    wr16((c.sbase[3] + (uint32_t)(0x34D82u)), (c.r[0] & 0xFFFFu));
    // 08cb99  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0x8cb99u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 08cb9d  mov word ptr [0x34d84], ax
    X86_AT(c, 0x8cb9du);
    wr16((c.sbase[3] + (uint32_t)(0x34D84u)), (c.r[0] & 0xFFFFu));
    // 08cba3  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0x8cba3u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 08cba7  mov word ptr [0x34d86], ax
    X86_AT(c, 0x8cba7u);
    wr16((c.sbase[3] + (uint32_t)(0x34D86u)), (c.r[0] & 0xFFFFu));
    // 08cbad  push 0x34d80
    X86_AT(c, 0x8cbadu);
    { uint32_t v = 0x34D80u; push32(c, v); }
    // 08cbb2  push 0x34780
    X86_AT(c, 0x8cbb2u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08cbb7  call 0x83d
    X86_AT(c, 0x8cbb7u);
    push32(c, 0x8cbbcu); x86_call_known(c, 0x83du, f_0000083d); X86_RET(c, 0x8cbbcu);
    X86_TICK(c, 17);
    // 08cbbc  movsx eax, word ptr [0x34e86]
    X86_AT(c, 0x8cbbcu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34E86u)));
    // 08cbc3  push eax
    X86_AT(c, 0x8cbc3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cbc4  push 0x34780
    X86_AT(c, 0x8cbc4u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08cbc9  call 0x245
    X86_AT(c, 0x8cbc9u);
    push32(c, 0x8cbceu); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8cbceu);
    X86_TICK(c, 16);
    // 08cbce  leave 
    X86_AT(c, 0x8cbceu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08cbcf  ret 
    X86_AT(c, 0x8cbcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8cb6cu, "ran off the end of a function");
}
void f_0008cbd0(X86Cpu& c) {
    X86_TICK(c, 19);
    // 08cbd0  push ebp
    X86_AT(c, 0x8cbd0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08cbd1  mov ebp, esp
    X86_AT(c, 0x8cbd1u);
    c.r[5] = c.r[4];
    // 08cbd3  push edi
    X86_AT(c, 0x8cbd3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08cbd4  mov edi, dword ptr [ebp + 0x18]
    X86_AT(c, 0x8cbd4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 08cbd7  push 0
    X86_AT(c, 0x8cbd7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08cbd9  call 0x8c644
    X86_AT(c, 0x8cbd9u);
    push32(c, 0x8cbdeu); x86_call_known(c, 0x8c644u, f_0008c644); X86_RET(c, 0x8cbdeu);
    X86_TICK(c, 9);
    // 08cbde  push edi
    X86_AT(c, 0x8cbdeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08cbdf  call 0x8c4d4
    X86_AT(c, 0x8cbdfu);
    push32(c, 0x8cbe4u); x86_call_known(c, 0x8c4d4u, f_0008c4d4); X86_RET(c, 0x8cbe4u);
    X86_TICK(c, 9);
    // 08cbe4  push edi
    X86_AT(c, 0x8cbe4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08cbe5  call 0x8c504
    X86_AT(c, 0x8cbe5u);
    push32(c, 0x8cbeau); x86_call_known(c, 0x8c504u, f_0008c504); X86_RET(c, 0x8cbeau);
    X86_TICK(c, 35);
    // 08cbea  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0x8cbeau);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08cbee  mov word ptr [0x34d80], ax
    X86_AT(c, 0x8cbeeu);
    wr16((c.sbase[3] + (uint32_t)(0x34D80u)), (c.r[0] & 0xFFFFu));
    // 08cbf4  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0x8cbf4u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08cbf8  mov word ptr [0x34d82], ax
    X86_AT(c, 0x8cbf8u);
    wr16((c.sbase[3] + (uint32_t)(0x34D82u)), (c.r[0] & 0xFFFFu));
    // 08cbfe  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0x8cbfeu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 08cc02  mov word ptr [0x34d84], ax
    X86_AT(c, 0x8cc02u);
    wr16((c.sbase[3] + (uint32_t)(0x34D84u)), (c.r[0] & 0xFFFFu));
    // 08cc08  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0x8cc08u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 08cc0c  mov word ptr [0x34d86], ax
    X86_AT(c, 0x8cc0cu);
    wr16((c.sbase[3] + (uint32_t)(0x34D86u)), (c.r[0] & 0xFFFFu));
    // 08cc12  push 0x34d80
    X86_AT(c, 0x8cc12u);
    { uint32_t v = 0x34D80u; push32(c, v); }
    // 08cc17  push 0x34780
    X86_AT(c, 0x8cc17u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08cc1c  call 0x83d
    X86_AT(c, 0x8cc1cu);
    push32(c, 0x8cc21u); x86_call_known(c, 0x83du, f_0000083d); X86_RET(c, 0x8cc21u);
    X86_TICK(c, 15);
    // 08cc21  movsx eax, word ptr [0x34e84]
    X86_AT(c, 0x8cc21u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34E84u)));
    // 08cc28  push eax
    X86_AT(c, 0x8cc28u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cc29  call 0x8c644
    X86_AT(c, 0x8cc29u);
    push32(c, 0x8cc2eu); x86_call_known(c, 0x8c644u, f_0008c644); X86_RET(c, 0x8cc2eu);
    X86_TICK(c, 17);
    // 08cc2e  movsx eax, word ptr [0x34e86]
    X86_AT(c, 0x8cc2eu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34E86u)));
    // 08cc35  push eax
    X86_AT(c, 0x8cc35u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cc36  push 0x34780
    X86_AT(c, 0x8cc36u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08cc3b  call 0x245
    X86_AT(c, 0x8cc3bu);
    push32(c, 0x8cc40u); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8cc40u);
    X86_TICK(c, 22);
    // 08cc40  add esp, 0x20
    X86_AT(c, 0x8cc40u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 08cc43  pop edi
    X86_AT(c, 0x8cc43u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08cc44  leave 
    X86_AT(c, 0x8cc44u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08cc45  ret 
    X86_AT(c, 0x8cc45u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8cbd0u, "ran off the end of a function");
}
void f_0008cc48(X86Cpu& c) {
    X86_TICK(c, 33);
    // 08cc48  push ebp
    X86_AT(c, 0x8cc48u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08cc49  mov ebp, esp
    X86_AT(c, 0x8cc49u);
    c.r[5] = c.r[4];
    // 08cc4b  sub esp, 0x24
    X86_AT(c, 0x8cc4bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x24u, 0, 4); }
    // 08cc4e  push ebx
    X86_AT(c, 0x8cc4eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08cc4f  push esi
    X86_AT(c, 0x8cc4fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08cc50  push edi
    X86_AT(c, 0x8cc50u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08cc51  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8cc51u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08cc54  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8cc54u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08cc57  mov ebx, dword ptr [ebp + 0x14]
    X86_AT(c, 0x8cc57u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 08cc5a  push 9
    X86_AT(c, 0x8cc5au);
    { uint32_t v = 0x9u; push32(c, v); }
    // 08cc5c  call 0x8c4d4
    X86_AT(c, 0x8cc5cu);
    push32(c, 0x8cc61u); x86_call_known(c, 0x8c4d4u, f_0008c4d4); X86_RET(c, 0x8cc61u);
    X86_TICK(c, 9);
    // 08cc61  push 9
    X86_AT(c, 0x8cc61u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 08cc63  call 0x8c504
    X86_AT(c, 0x8cc63u);
    push32(c, 0x8cc68u); x86_call_known(c, 0x8c504u, f_0008c504); X86_RET(c, 0x8cc68u);
    X86_TICK(c, 14);
    // 08cc68  add esp, 8
    X86_AT(c, 0x8cc68u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08cc6b  cmp dword ptr [ebp + 0x18], 0
    X86_AT(c, 0x8cc6bu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0x0u, 0, 4);
    // 08cc6f  je 0x8cc81
    X86_AT(c, 0x8cc6fu);
    if (x86_cc(c, 4)) { goto L_8cc81; }
    X86_TICK(c, 29);
    // 08cc71  lea eax, [ebx + esi*1]
    X86_AT(c, 0x8cc71u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[6]);
    // 08cc74  dec eax
    X86_AT(c, 0x8cc74u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08cc75  push eax
    X86_AT(c, 0x8cc75u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cc76  mov eax, edi
    X86_AT(c, 0x8cc76u);
    c.r[0] = c.r[7];
    // 08cc78  add eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8cc78u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 08cc7b  dec eax
    X86_AT(c, 0x8cc7bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08cc7c  push eax
    X86_AT(c, 0x8cc7cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cc7d  push esi
    X86_AT(c, 0x8cc7du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08cc7e  push edi
    X86_AT(c, 0x8cc7eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08cc7f  jmp 0x8cc8f
    X86_AT(c, 0x8cc7fu);
    goto L_8cc8f;
L_8cc81:
    X86_TICK(c, 8);
    // 08cc81  push 0x1df
    X86_AT(c, 0x8cc81u);
    { uint32_t v = 0x1DFu; push32(c, v); }
    // 08cc86  push 0x27f
    X86_AT(c, 0x8cc86u);
    { uint32_t v = 0x27Fu; push32(c, v); }
    // 08cc8b  push 0
    X86_AT(c, 0x8cc8bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08cc8d  push 0
    X86_AT(c, 0x8cc8du);
    { uint32_t v = 0x0u; push32(c, v); }
L_8cc8f:
    X86_TICK(c, 7);
    // 08cc8f  call 0x8cb6c
    X86_AT(c, 0x8cc8fu);
    push32(c, 0x8cc94u); x86_call_known(c, 0x8cb6cu, f_0008cb6c); X86_RET(c, 0x8cc94u);
    X86_TICK(c, 14);
    // 08cc94  add esp, 0x10
    X86_AT(c, 0x8cc94u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08cc97  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x8cc97u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 08cc9a  call 0x8c4d4
    X86_AT(c, 0x8cc9au);
    push32(c, 0x8cc9fu); x86_call_known(c, 0x8c4d4u, f_0008c4d4); X86_RET(c, 0x8cc9fu);
    X86_TICK(c, 12);
    // 08cc9f  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x8cc9fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 08cca2  call 0x8c504
    X86_AT(c, 0x8cca2u);
    push32(c, 0x8cca7u); x86_call_known(c, 0x8c504u, f_0008c504); X86_RET(c, 0x8cca7u);
    X86_TICK(c, 20);
    // 08cca7  mov ax, word ptr [0x34e86]
    X86_AT(c, 0x8cca7u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x34E86u))));
    // 08ccad  or al, 0x20
    X86_AT(c, 0x8ccadu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 08ccaf  movsx eax, ax
    X86_AT(c, 0x8ccafu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 08ccb2  push eax
    X86_AT(c, 0x8ccb2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ccb3  push 0x34780
    X86_AT(c, 0x8ccb3u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08ccb8  call 0x245
    X86_AT(c, 0x8ccb8u);
    push32(c, 0x8ccbdu); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8ccbdu);
    X86_TICK(c, 35);
    // 08ccbd  mov eax, edi
    X86_AT(c, 0x8ccbdu);
    c.r[0] = c.r[7];
    // 08ccbf  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x8ccbfu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 08ccc3  add ax, 0xf
    X86_AT(c, 0x8ccc3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xFu, 0, 2)); }
    // 08ccc7  mov word ptr [0x34d80], ax
    X86_AT(c, 0x8ccc7u);
    wr16((c.sbase[3] + (uint32_t)(0x34D80u)), (c.r[0] & 0xFFFFu));
    // 08cccd  lea eax, [esi + 0x10]
    X86_AT(c, 0x8cccdu);
    c.r[0] = (uint32_t)(c.r[6] + 0x10u);
    // 08ccd0  mov word ptr [0x34d82], ax
    X86_AT(c, 0x8ccd0u);
    wr16((c.sbase[3] + (uint32_t)(0x34D82u)), (c.r[0] & 0xFFFFu));
    // 08ccd6  mov word ptr [0x34d84], 0xfff0
    X86_AT(c, 0x8ccd6u);
    wr16((c.sbase[3] + (uint32_t)(0x34D84u)), 0xFFF0u);
    // 08ccdf  mov word ptr [0x34d86], 0xfff0
    X86_AT(c, 0x8ccdfu);
    wr16((c.sbase[3] + (uint32_t)(0x34D86u)), 0xFFF0u);
    // 08cce8  mov word ptr [0x34d88], 0xfff0
    X86_AT(c, 0x8cce8u);
    wr16((c.sbase[3] + (uint32_t)(0x34D88u)), 0xFFF0u);
    // 08ccf1  mov word ptr [0x34d8a], 0xfff0
    X86_AT(c, 0x8ccf1u);
    wr16((c.sbase[3] + (uint32_t)(0x34D8Au)), 0xFFF0u);
    // 08ccfa  mov word ptr [0x34d8c], 0x10
    X86_AT(c, 0x8ccfau);
    wr16((c.sbase[3] + (uint32_t)(0x34D8Cu)), 0x10u);
    // 08cd03  push 0x34d80
    X86_AT(c, 0x8cd03u);
    { uint32_t v = 0x34D80u; push32(c, v); }
    // 08cd08  push 0x34780
    X86_AT(c, 0x8cd08u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08cd0d  mov word ptr [ebp - 8], ax
    X86_AT(c, 0x8cd0du);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[0] & 0xFFFFu));
    // 08cd11  call 0x8a9
    X86_AT(c, 0x8cd11u);
    push32(c, 0x8cd16u); x86_call_known(c, 0x8a9u, f_000008a9); X86_RET(c, 0x8cd16u);
    X86_TICK(c, 9);
    // 08cd16  push 0xf
    X86_AT(c, 0x8cd16u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08cd18  call 0x8c4d4
    X86_AT(c, 0x8cd18u);
    push32(c, 0x8cd1du); x86_call_known(c, 0x8c4d4u, f_0008c4d4); X86_RET(c, 0x8cd1du);
    X86_TICK(c, 11);
    // 08cd1d  push 0x34d80
    X86_AT(c, 0x8cd1du);
    { uint32_t v = 0x34D80u; push32(c, v); }
    // 08cd22  push 0x34780
    X86_AT(c, 0x8cd22u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08cd27  call 0x885
    X86_AT(c, 0x8cd27u);
    push32(c, 0x8cd2cu); x86_call_known(c, 0x885u, f_00000885); X86_RET(c, 0x8cd2cu);
    X86_TICK(c, 12);
    // 08cd2c  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x8cd2cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 08cd2f  call 0x8c4d4
    X86_AT(c, 0x8cd2fu);
    push32(c, 0x8cd34u); x86_call_known(c, 0x8c4d4u, f_0008c4d4); X86_RET(c, 0x8cd34u);
    X86_TICK(c, 41);
    // 08cd34  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0x8cd34u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 08cd38  add ax, word ptr [ebp + 0x10]
    X86_AT(c, 0x8cd38u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 2)); }
    // 08cd3c  sub ax, 0x10
    X86_AT(c, 0x8cd3cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x10u, 0, 2)); }
    // 08cd40  mov word ptr [0x34d80], ax
    X86_AT(c, 0x8cd40u);
    wr16((c.sbase[3] + (uint32_t)(0x34D80u)), (c.r[0] & 0xFFFFu));
    // 08cd46  mov ax, word ptr [ebp - 8]
    X86_AT(c, 0x8cd46u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 08cd4a  mov word ptr [0x34d82], ax
    X86_AT(c, 0x8cd4au);
    wr16((c.sbase[3] + (uint32_t)(0x34D82u)), (c.r[0] & 0xFFFFu));
    // 08cd50  sub eax, eax
    X86_AT(c, 0x8cd50u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08cd52  mov word ptr [0x34d84], ax
    X86_AT(c, 0x8cd52u);
    wr16((c.sbase[3] + (uint32_t)(0x34D84u)), (c.r[0] & 0xFFFFu));
    // 08cd58  mov word ptr [0x34d86], 0xfff0
    X86_AT(c, 0x8cd58u);
    wr16((c.sbase[3] + (uint32_t)(0x34D86u)), 0xFFF0u);
    // 08cd61  mov word ptr [0x34d88], 0x10
    X86_AT(c, 0x8cd61u);
    wr16((c.sbase[3] + (uint32_t)(0x34D88u)), 0x10u);
    // 08cd6a  mov word ptr [0x34d8a], ax
    X86_AT(c, 0x8cd6au);
    wr16((c.sbase[3] + (uint32_t)(0x34D8Au)), (c.r[0] & 0xFFFFu));
    // 08cd70  push 0x34d80
    X86_AT(c, 0x8cd70u);
    { uint32_t v = 0x34D80u; push32(c, v); }
    // 08cd75  push 0x34780
    X86_AT(c, 0x8cd75u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08cd7a  call 0x8a9
    X86_AT(c, 0x8cd7au);
    push32(c, 0x8cd7fu); x86_call_known(c, 0x8a9u, f_000008a9); X86_RET(c, 0x8cd7fu);
    X86_TICK(c, 9);
    // 08cd7f  push 0xf
    X86_AT(c, 0x8cd7fu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08cd81  call 0x8c4d4
    X86_AT(c, 0x8cd81u);
    push32(c, 0x8cd86u); x86_call_known(c, 0x8c4d4u, f_0008c4d4); X86_RET(c, 0x8cd86u);
    X86_TICK(c, 11);
    // 08cd86  push 0x34d80
    X86_AT(c, 0x8cd86u);
    { uint32_t v = 0x34D80u; push32(c, v); }
    // 08cd8b  push 0x34780
    X86_AT(c, 0x8cd8bu);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08cd90  call 0x885
    X86_AT(c, 0x8cd90u);
    push32(c, 0x8cd95u); x86_call_known(c, 0x885u, f_00000885); X86_RET(c, 0x8cd95u);
    X86_TICK(c, 14);
    // 08cd95  add esp, 0x3c
    X86_AT(c, 0x8cd95u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 08cd98  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x8cd98u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 08cd9b  call 0x8c4d4
    X86_AT(c, 0x8cd9bu);
    push32(c, 0x8cda0u); x86_call_known(c, 0x8c4d4u, f_0008c4d4); X86_RET(c, 0x8cda0u);
    X86_TICK(c, 47);
    // 08cda0  mov eax, edi
    X86_AT(c, 0x8cda0u);
    c.r[0] = c.r[7];
    // 08cda2  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x8cda2u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 08cda6  add ax, word ptr [ebp + 0x10]
    X86_AT(c, 0x8cda6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 2)); }
    // 08cdaa  sub ax, 0x10
    X86_AT(c, 0x8cdaau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x10u, 0, 2)); }
    // 08cdae  mov word ptr [0x34d80], ax
    X86_AT(c, 0x8cdaeu);
    wr16((c.sbase[3] + (uint32_t)(0x34D80u)), (c.r[0] & 0xFFFFu));
    // 08cdb4  mov eax, esi
    X86_AT(c, 0x8cdb4u);
    c.r[0] = c.r[6];
    // 08cdb6  lea edx, [ebx + eax*1]
    X86_AT(c, 0x8cdb6u);
    c.r[2] = (uint32_t)(c.r[3] + c.r[0]);
    // 08cdb9  sub dx, 0x11
    X86_AT(c, 0x8cdb9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x11u, 0, 2)); }
    // 08cdbd  mov word ptr [0x34d82], dx
    X86_AT(c, 0x8cdbdu);
    wr16((c.sbase[3] + (uint32_t)(0x34D82u)), (c.r[2] & 0xFFFFu));
    // 08cdc4  mov word ptr [0x34d84], 0x10
    X86_AT(c, 0x8cdc4u);
    wr16((c.sbase[3] + (uint32_t)(0x34D84u)), 0x10u);
    // 08cdcd  mov word ptr [0x34d86], 0
    X86_AT(c, 0x8cdcdu);
    wr16((c.sbase[3] + (uint32_t)(0x34D86u)), 0x0u);
    // 08cdd6  mov word ptr [0x34d88], 0
    X86_AT(c, 0x8cdd6u);
    wr16((c.sbase[3] + (uint32_t)(0x34D88u)), 0x0u);
    // 08cddf  mov word ptr [0x34d8a], 0x10
    X86_AT(c, 0x8cddfu);
    wr16((c.sbase[3] + (uint32_t)(0x34D8Au)), 0x10u);
    // 08cde8  push 0x34d80
    X86_AT(c, 0x8cde8u);
    { uint32_t v = 0x34D80u; push32(c, v); }
    // 08cded  mov eax, 0x3477c
    X86_AT(c, 0x8cdedu);
    c.r[0] = 0x3477Cu;
    // 08cdf2  add eax, 4
    X86_AT(c, 0x8cdf2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 08cdf5  push eax
    X86_AT(c, 0x8cdf5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cdf6  mov word ptr [ebp - 8], dx
    X86_AT(c, 0x8cdf6u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[2] & 0xFFFFu));
    // 08cdfa  call 0x8a9
    X86_AT(c, 0x8cdfau);
    push32(c, 0x8cdffu); x86_call_known(c, 0x8a9u, f_000008a9); X86_RET(c, 0x8cdffu);
    X86_TICK(c, 9);
    // 08cdff  push 0xf
    X86_AT(c, 0x8cdffu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08ce01  call 0x8c4d4
    X86_AT(c, 0x8ce01u);
    push32(c, 0x8ce06u); x86_call_known(c, 0x8c4d4u, f_0008c4d4); X86_RET(c, 0x8ce06u);
    X86_TICK(c, 13);
    // 08ce06  push 0x34d80
    X86_AT(c, 0x8ce06u);
    { uint32_t v = 0x34D80u; push32(c, v); }
    // 08ce0b  mov eax, 0x34780
    X86_AT(c, 0x8ce0bu);
    c.r[0] = 0x34780u;
    // 08ce10  push eax
    X86_AT(c, 0x8ce10u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ce11  call 0x885
    X86_AT(c, 0x8ce11u);
    push32(c, 0x8ce16u); x86_call_known(c, 0x885u, f_00000885); X86_RET(c, 0x8ce16u);
    X86_TICK(c, 12);
    // 08ce16  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x8ce16u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 08ce19  call 0x8c4d4
    X86_AT(c, 0x8ce19u);
    push32(c, 0x8ce1eu); x86_call_known(c, 0x8c4d4u, f_0008c4d4); X86_RET(c, 0x8ce1eu);
    X86_TICK(c, 35);
    // 08ce1e  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0x8ce1eu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 08ce22  add ax, 0xf
    X86_AT(c, 0x8ce22u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xFu, 0, 2)); }
    // 08ce26  mov word ptr [0x34d80], ax
    X86_AT(c, 0x8ce26u);
    wr16((c.sbase[3] + (uint32_t)(0x34D80u)), (c.r[0] & 0xFFFFu));
    // 08ce2c  mov ax, word ptr [ebp - 8]
    X86_AT(c, 0x8ce2cu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 08ce30  mov word ptr [0x34d82], ax
    X86_AT(c, 0x8ce30u);
    wr16((c.sbase[3] + (uint32_t)(0x34D82u)), (c.r[0] & 0xFFFFu));
    // 08ce36  mov word ptr [0x34d84], 0
    X86_AT(c, 0x8ce36u);
    wr16((c.sbase[3] + (uint32_t)(0x34D84u)), 0x0u);
    // 08ce3f  mov word ptr [0x34d86], 0x10
    X86_AT(c, 0x8ce3fu);
    wr16((c.sbase[3] + (uint32_t)(0x34D86u)), 0x10u);
    // 08ce48  mov word ptr [0x34d88], 0xfff0
    X86_AT(c, 0x8ce48u);
    wr16((c.sbase[3] + (uint32_t)(0x34D88u)), 0xFFF0u);
    // 08ce51  mov word ptr [0x34d8a], 0
    X86_AT(c, 0x8ce51u);
    wr16((c.sbase[3] + (uint32_t)(0x34D8Au)), 0x0u);
    // 08ce5a  push 0x34d80
    X86_AT(c, 0x8ce5au);
    { uint32_t v = 0x34D80u; push32(c, v); }
    // 08ce5f  mov eax, 0x34780
    X86_AT(c, 0x8ce5fu);
    c.r[0] = 0x34780u;
    // 08ce64  push eax
    X86_AT(c, 0x8ce64u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ce65  call 0x8a9
    X86_AT(c, 0x8ce65u);
    push32(c, 0x8ce6au); x86_call_known(c, 0x8a9u, f_000008a9); X86_RET(c, 0x8ce6au);
    X86_TICK(c, 9);
    // 08ce6a  push 0xf
    X86_AT(c, 0x8ce6au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08ce6c  call 0x8c4d4
    X86_AT(c, 0x8ce6cu);
    push32(c, 0x8ce71u); x86_call_known(c, 0x8c4d4u, f_0008c4d4); X86_RET(c, 0x8ce71u);
    X86_TICK(c, 13);
    // 08ce71  push 0x34d80
    X86_AT(c, 0x8ce71u);
    { uint32_t v = 0x34D80u; push32(c, v); }
    // 08ce76  mov eax, 0x34780
    X86_AT(c, 0x8ce76u);
    c.r[0] = 0x34780u;
    // 08ce7b  push eax
    X86_AT(c, 0x8ce7bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ce7c  call 0x885
    X86_AT(c, 0x8ce7cu);
    push32(c, 0x8ce81u); x86_call_known(c, 0x885u, f_00000885); X86_RET(c, 0x8ce81u);
    X86_TICK(c, 12);
    // 08ce81  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x8ce81u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 08ce84  call 0x8c4d4
    X86_AT(c, 0x8ce84u);
    push32(c, 0x8ce89u); x86_call_known(c, 0x8c4d4u, f_0008c4d4); X86_RET(c, 0x8ce89u);
    X86_TICK(c, 29);
    // 08ce89  lea eax, [esi + 0xf]
    X86_AT(c, 0x8ce89u);
    c.r[0] = (uint32_t)(c.r[6] + 0xFu);
    // 08ce8c  push eax
    X86_AT(c, 0x8ce8cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ce8d  mov eax, edi
    X86_AT(c, 0x8ce8du);
    c.r[0] = c.r[7];
    // 08ce8f  add eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8ce8fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 08ce92  sub eax, 0x11
    X86_AT(c, 0x8ce92u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x11u, 0, 4); }
    // 08ce95  push eax
    X86_AT(c, 0x8ce95u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ce96  push esi
    X86_AT(c, 0x8ce96u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08ce97  lea eax, [edi + 0x10]
    X86_AT(c, 0x8ce97u);
    c.r[0] = (uint32_t)(c.r[7] + 0x10u);
    // 08ce9a  push eax
    X86_AT(c, 0x8ce9au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ce9b  call 0x8cb6c
    X86_AT(c, 0x8ce9bu);
    push32(c, 0x8cea0u); x86_call_known(c, 0x8cb6cu, f_0008cb6c); X86_RET(c, 0x8cea0u);
    X86_TICK(c, 41);
    // 08cea0  add esp, 0x44
    X86_AT(c, 0x8cea0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 08cea3  lea eax, [ebx + esi*1]
    X86_AT(c, 0x8cea3u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[6]);
    // 08cea6  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x8cea6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 08cea9  sub eax, 0x11
    X86_AT(c, 0x8cea9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x11u, 0, 4); }
    // 08ceac  push eax
    X86_AT(c, 0x8ceacu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cead  mov edx, edi
    X86_AT(c, 0x8ceadu);
    c.r[2] = c.r[7];
    // 08ceaf  add edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8ceafu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 08ceb2  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0x8ceb2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 08ceb5  dec edx
    X86_AT(c, 0x8ceb5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 08ceb6  push edx
    X86_AT(c, 0x8ceb6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08ceb7  lea ecx, [esi + 0x10]
    X86_AT(c, 0x8ceb7u);
    c.r[1] = (uint32_t)(c.r[6] + 0x10u);
    // 08ceba  push ecx
    X86_AT(c, 0x8cebau);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 08cebb  push edi
    X86_AT(c, 0x8cebbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08cebc  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x8cebcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 08cebf  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0x8cebfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 08cec2  call 0x8cb6c
    X86_AT(c, 0x8cec2u);
    push32(c, 0x8cec7u); x86_call_known(c, 0x8cb6cu, f_0008cb6c); X86_RET(c, 0x8cec7u);
    X86_TICK(c, 38);
    // 08cec7  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x8cec7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 08ceca  dec eax
    X86_AT(c, 0x8cecau);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08cecb  push eax
    X86_AT(c, 0x8cecbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cecc  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0x8ceccu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 08cecf  sub edx, 0x11
    X86_AT(c, 0x8cecfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x11u, 0, 4); }
    // 08ced2  push edx
    X86_AT(c, 0x8ced2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08ced3  push dword ptr [ebp - 0xc]
    X86_AT(c, 0x8ced3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 08ced6  lea ecx, [edi + 0x10]
    X86_AT(c, 0x8ced6u);
    c.r[1] = (uint32_t)(c.r[7] + 0x10u);
    // 08ced9  push ecx
    X86_AT(c, 0x8ced9u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 08ceda  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x8cedau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 08cedd  mov dword ptr [ebp - 0x18], ecx
    X86_AT(c, 0x8ceddu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[1]);
    // 08cee0  mov dword ptr [ebp - 0x1c], edx
    X86_AT(c, 0x8cee0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[2]);
    // 08cee3  call 0x8cb6c
    X86_AT(c, 0x8cee3u);
    push32(c, 0x8cee8u); x86_call_known(c, 0x8cb6cu, f_0008cb6c); X86_RET(c, 0x8cee8u);
    X86_TICK(c, 9);
    // 08cee8  push 0xf
    X86_AT(c, 0x8cee8u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08ceea  call 0x8c4d4
    X86_AT(c, 0x8ceeau);
    push32(c, 0x8ceefu); x86_call_known(c, 0x8c4d4u, f_0008c4d4); X86_RET(c, 0x8ceefu);
    X86_TICK(c, 21);
    // 08ceef  push esi
    X86_AT(c, 0x8ceefu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08cef0  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0x8cef0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 08cef3  push esi
    X86_AT(c, 0x8cef3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08cef4  push dword ptr [ebp - 0x18]
    X86_AT(c, 0x8cef4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))); push32(c, v); }
    // 08cef7  call 0x8ca4c
    X86_AT(c, 0x8cef7u);
    push32(c, 0x8cefcu); x86_call_known(c, 0x8ca4cu, f_0008ca4c); X86_RET(c, 0x8cefcu);
    X86_TICK(c, 33);
    // 08cefc  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x8cefcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 08ceff  sub eax, 0xe
    X86_AT(c, 0x8ceffu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xEu, 0, 4); }
    // 08cf02  push eax
    X86_AT(c, 0x8cf02u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cf03  push dword ptr [ebp - 0x10]
    X86_AT(c, 0x8cf03u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 08cf06  lea edx, [esi + 0xd]
    X86_AT(c, 0x8cf06u);
    c.r[2] = (uint32_t)(c.r[6] + 0xDu);
    // 08cf09  push edx
    X86_AT(c, 0x8cf09u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08cf0a  push dword ptr [ebp - 0x10]
    X86_AT(c, 0x8cf0au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 08cf0d  mov dword ptr [ebp - 0x20], eax
    X86_AT(c, 0x8cf0du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[0]);
    // 08cf10  mov dword ptr [ebp - 0x24], edx
    X86_AT(c, 0x8cf10u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), c.r[2]);
    // 08cf13  call 0x8ca4c
    X86_AT(c, 0x8cf13u);
    push32(c, 0x8cf18u); x86_call_known(c, 0x8ca4cu, f_0008ca4c); X86_RET(c, 0x8cf18u);
    X86_TICK(c, 29);
    // 08cf18  add esp, 0x44
    X86_AT(c, 0x8cf18u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 08cf1b  push dword ptr [ebp - 0x14]
    X86_AT(c, 0x8cf1bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 08cf1e  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0x8cf1eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 08cf21  push dword ptr [ebp - 0x14]
    X86_AT(c, 0x8cf21u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 08cf24  push dword ptr [ebp - 0x18]
    X86_AT(c, 0x8cf24u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))); push32(c, v); }
    // 08cf27  call 0x8ca4c
    X86_AT(c, 0x8cf27u);
    push32(c, 0x8cf2cu); x86_call_known(c, 0x8ca4cu, f_0008ca4c); X86_RET(c, 0x8cf2cu);
    X86_TICK(c, 21);
    // 08cf2c  push dword ptr [ebp - 0x20]
    X86_AT(c, 0x8cf2cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))); push32(c, v); }
    // 08cf2f  push edi
    X86_AT(c, 0x8cf2fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08cf30  push dword ptr [ebp - 0x24]
    X86_AT(c, 0x8cf30u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))); push32(c, v); }
    // 08cf33  push edi
    X86_AT(c, 0x8cf33u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08cf34  call 0x8ca4c
    X86_AT(c, 0x8cf34u);
    push32(c, 0x8cf39u); x86_call_known(c, 0x8ca4cu, f_0008ca4c); X86_RET(c, 0x8cf39u);
    X86_TICK(c, 14);
    // 08cf39  add esp, 0x20
    X86_AT(c, 0x8cf39u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 08cf3c  cmp dword ptr [ebp + 0x18], 0
    X86_AT(c, 0x8cf3cu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0x0u, 0, 4);
    // 08cf40  je 0x8cf46
    X86_AT(c, 0x8cf40u);
    if (x86_cc(c, 4)) { goto L_8cf46; }
    X86_TICK(c, 9);
    // 08cf42  push 0xf
    X86_AT(c, 0x8cf42u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08cf44  jmp 0x8cf48
    X86_AT(c, 0x8cf44u);
    goto L_8cf48;
L_8cf46:
    X86_TICK(c, 2);
    // 08cf46  push 0
    X86_AT(c, 0x8cf46u);
    { uint32_t v = 0x0u; push32(c, v); }
L_8cf48:
    X86_TICK(c, 7);
    // 08cf48  call 0x8c4d4
    X86_AT(c, 0x8cf48u);
    push32(c, 0x8cf4du); x86_call_known(c, 0x8c4d4u, f_0008c4d4); X86_RET(c, 0x8cf4du);
    X86_TICK(c, 11);
    // 08cf4d  add esp, 4
    X86_AT(c, 0x8cf4du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08cf50  push 0
    X86_AT(c, 0x8cf50u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08cf52  call 0x8c504
    X86_AT(c, 0x8cf52u);
    push32(c, 0x8cf57u); x86_call_known(c, 0x8c504u, f_0008c504); X86_RET(c, 0x8cf57u);
    X86_TICK(c, 15);
    // 08cf57  push 0x18e
    X86_AT(c, 0x8cf57u);
    { uint32_t v = 0x18Eu; push32(c, v); }
    // 08cf5c  push 0x169
    X86_AT(c, 0x8cf5cu);
    { uint32_t v = 0x169u; push32(c, v); }
    // 08cf61  push 0x2f
    X86_AT(c, 0x8cf61u);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 08cf63  push 0xa
    X86_AT(c, 0x8cf63u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 08cf65  call 0x8cb6c
    X86_AT(c, 0x8cf65u);
    push32(c, 0x8cf6au); x86_call_known(c, 0x8cb6cu, f_0008cb6c); X86_RET(c, 0x8cf6au);
    X86_TICK(c, 9);
    // 08cf6a  push 0xf
    X86_AT(c, 0x8cf6au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08cf6c  call 0x8c4d4
    X86_AT(c, 0x8cf6cu);
    push32(c, 0x8cf71u); x86_call_known(c, 0x8c4d4u, f_0008c4d4); X86_RET(c, 0x8cf71u);
    X86_TICK(c, 17);
    // 08cf71  movsx eax, word ptr [0x34e86]
    X86_AT(c, 0x8cf71u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34E86u)));
    // 08cf78  push eax
    X86_AT(c, 0x8cf78u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cf79  push 0x34780
    X86_AT(c, 0x8cf79u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08cf7e  call 0x245
    X86_AT(c, 0x8cf7eu);
    push32(c, 0x8cf83u); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8cf83u);
    X86_TICK(c, 30);
    // 08cf83  add esp, 0x20
    X86_AT(c, 0x8cf83u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 08cf86  pop edi
    X86_AT(c, 0x8cf86u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08cf87  pop esi
    X86_AT(c, 0x8cf87u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08cf88  pop ebx
    X86_AT(c, 0x8cf88u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08cf89  leave 
    X86_AT(c, 0x8cf89u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08cf8a  ret 
    X86_AT(c, 0x8cf8au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8cc48u, "ran off the end of a function");
}
void f_0008d000(X86Cpu& c) {
    X86_TICK(c, 69);
    // 08d000  push ebp
    X86_AT(c, 0x8d000u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d001  mov ebp, esp
    X86_AT(c, 0x8d001u);
    c.r[5] = c.r[4];
    // 08d003  push esi
    X86_AT(c, 0x8d003u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08d004  push edi
    X86_AT(c, 0x8d004u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d005  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8d005u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08d008  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8d008u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08d00b  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8d00bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08d00e  mov dword ptr [0x34d80], eax
    X86_AT(c, 0x8d00eu);
    wr32((c.sbase[3] + (uint32_t)(0x34D80u)), c.r[0]);
    // 08d013  mov word ptr [0x34d84], 0x14
    X86_AT(c, 0x8d013u);
    wr16((c.sbase[3] + (uint32_t)(0x34D84u)), 0x14u);
    // 08d01c  mov eax, edi
    X86_AT(c, 0x8d01cu);
    c.r[0] = c.r[7];
    // 08d01e  mov word ptr [0x34d86], ax
    X86_AT(c, 0x8d01eu);
    wr16((c.sbase[3] + (uint32_t)(0x34D86u)), (c.r[0] & 0xFFFFu));
    // 08d024  mov eax, esi
    X86_AT(c, 0x8d024u);
    c.r[0] = c.r[6];
    // 08d026  mov word ptr [0x34d88], ax
    X86_AT(c, 0x8d026u);
    wr16((c.sbase[3] + (uint32_t)(0x34D88u)), (c.r[0] & 0xFFFFu));
    // 08d02c  mov eax, edi
    X86_AT(c, 0x8d02cu);
    c.r[0] = c.r[7];
    // 08d02e  add ax, word ptr [ebp + 0x14]
    X86_AT(c, 0x8d02eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0, 2)); }
    // 08d032  dec eax
    X86_AT(c, 0x8d032u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d033  mov word ptr [0x34d8a], ax
    X86_AT(c, 0x8d033u);
    wr16((c.sbase[3] + (uint32_t)(0x34D8Au)), (c.r[0] & 0xFFFFu));
    // 08d039  mov eax, esi
    X86_AT(c, 0x8d039u);
    c.r[0] = c.r[6];
    // 08d03b  add ax, word ptr [ebp + 0x18]
    X86_AT(c, 0x8d03bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0, 2)); }
    // 08d03f  dec eax
    X86_AT(c, 0x8d03fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d040  mov word ptr [0x34d8c], ax
    X86_AT(c, 0x8d040u);
    wr16((c.sbase[3] + (uint32_t)(0x34D8Cu)), (c.r[0] & 0xFFFFu));
    // 08d046  push 0x34d80
    X86_AT(c, 0x8d046u);
    { uint32_t v = 0x34D80u; push32(c, v); }
    // 08d04b  push 0
    X86_AT(c, 0x8d04bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08d04d  push 0x34780
    X86_AT(c, 0x8d04du);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08d052  call 0x544
    X86_AT(c, 0x8d052u);
    push32(c, 0x8d057u); x86_call_known(c, 0x544u, f_00000544); X86_RET(c, 0x8d057u);
    X86_TICK(c, 26);
    // 08d057  add esp, 0xc
    X86_AT(c, 0x8d057u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 08d05a  pop edi
    X86_AT(c, 0x8d05au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d05b  pop esi
    X86_AT(c, 0x8d05bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08d05c  leave 
    X86_AT(c, 0x8d05cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d05d  ret 
    X86_AT(c, 0x8d05du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d000u, "ran off the end of a function");
}
void f_0008d174(X86Cpu& c) {
    X86_TICK(c, 34);
    // 08d174  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x8d174u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 08d178  mov eax, dword ptr [ecx + 0x1e]
    X86_AT(c, 0x8d178u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x1Eu)));
    // 08d17b  mov edx, dword ptr [esp + 8]
    X86_AT(c, 0x8d17bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 08d17f  mov dword ptr [edx], eax
    X86_AT(c, 0x8d17fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 08d181  mov eax, dword ptr [ecx + 0x2a]
    X86_AT(c, 0x8d181u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x2Au)));
    // 08d184  mov edx, dword ptr [esp + 0xc]
    X86_AT(c, 0x8d184u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 08d188  mov dword ptr [edx], eax
    X86_AT(c, 0x8d188u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 08d18a  ret 
    X86_AT(c, 0x8d18au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d174u, "ran off the end of a function");
}
void f_0008d18c(X86Cpu& c) {
    X86_TICK(c, 26);
    // 08d18c  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x8d18cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 08d190  mov ax, word ptr [esp + 8]
    X86_AT(c, 0x8d190u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u))));
    // 08d195  mov word ptr [ecx + 0x1e], ax
    X86_AT(c, 0x8d195u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1] + 0x1Eu)), (c.r[0] & 0xFFFFu));
    // 08d199  mov ax, word ptr [esp + 0xc]
    X86_AT(c, 0x8d199u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu))));
    // 08d19e  mov word ptr [ecx + 0x2a], ax
    X86_AT(c, 0x8d19eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[1] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 08d1a2  ret 
    X86_AT(c, 0x8d1a2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d18cu, "ran off the end of a function");
}
void f_0008d1a4(X86Cpu& c) {
    X86_TICK(c, 20);
    // 08d1a4  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x8d1a4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 08d1a8  movsx eax, word ptr [eax + 0x36]
    X86_AT(c, 0x8d1a8u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x36u)));
    // 08d1ac  ret 
    X86_AT(c, 0x8d1acu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d1a4u, "ran off the end of a function");
}
void f_0008d1b0(X86Cpu& c) {
    X86_TICK(c, 25);
    // 08d1b0  push ebp
    X86_AT(c, 0x8d1b0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d1b1  mov ebp, esp
    X86_AT(c, 0x8d1b1u);
    c.r[5] = c.r[4];
    // 08d1b3  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x8d1b3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 08d1b6  push 2
    X86_AT(c, 0x8d1b6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08d1b8  push 0x100
    X86_AT(c, 0x8d1b8u);
    { uint32_t v = 0x100u; push32(c, v); }
    // 08d1bd  push dword ptr [ebp + 8]
    X86_AT(c, 0x8d1bdu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08d1c0  call 0x92500
    X86_AT(c, 0x8d1c0u);
    push32(c, 0x8d1c5u); x86_call_known(c, 0x92500u, f_00092500); X86_RET(c, 0x8d1c5u);
    X86_TICK(c, 9);
    // 08d1c5  add esp, 0x10
    X86_AT(c, 0x8d1c5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d1c8  cmp eax, 2
    X86_AT(c, 0x8d1c8u);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 08d1cb  jge 0x8d1d4
    X86_AT(c, 0x8d1cbu);
    if (x86_cc(c, 13)) { goto L_8d1d4; }
    X86_TICK(c, 9);
    // 08d1cd  mov eax, 0xffffffff
    X86_AT(c, 0x8d1cdu);
    c.r[0] = 0xFFFFFFFFu;
    // 08d1d2  jmp 0x8d1d6
    X86_AT(c, 0x8d1d2u);
    goto L_8d1d6;
L_8d1d4:
    X86_TICK(c, 2);
    // 08d1d4  sub eax, eax
    X86_AT(c, 0x8d1d4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8d1d6:
    X86_TICK(c, 16);
    // 08d1d6  leave 
    X86_AT(c, 0x8d1d6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d1d7  ret 
    X86_AT(c, 0x8d1d7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d1b0u, "ran off the end of a function");
}
void f_0008d1d8(X86Cpu& c) {
    X86_TICK(c, 26);
    // 08d1d8  push ebp
    X86_AT(c, 0x8d1d8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d1d9  mov ebp, esp
    X86_AT(c, 0x8d1d9u);
    c.r[5] = c.r[4];
    // 08d1db  sub esp, 0x204
    X86_AT(c, 0x8d1dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x204u, 0, 4); }
    // 08d1e1  push ebx
    X86_AT(c, 0x8d1e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d1e2  push esi
    X86_AT(c, 0x8d1e2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08d1e3  push edi
    X86_AT(c, 0x8d1e3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d1e4  push 0x1248
    X86_AT(c, 0x8d1e4u);
    { uint32_t v = 0x1248u; push32(c, v); }
    // 08d1e9  push dword ptr [ebp + 8]
    X86_AT(c, 0x8d1e9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08d1ec  call 0x927dc
    X86_AT(c, 0x8d1ecu);
    push32(c, 0x8d1f1u); x86_call_known(c, 0x927dcu, f_000927dc); X86_RET(c, 0x8d1f1u);
    X86_TICK(c, 12);
    // 08d1f1  add esp, 8
    X86_AT(c, 0x8d1f1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08d1f4  xchg ebx, eax
    X86_AT(c, 0x8d1f4u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 08d1f5  and ebx, ebx
    X86_AT(c, 0x8d1f5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 08d1f7  jne 0x8d203
    X86_AT(c, 0x8d1f7u);
    if (x86_cc(c, 5)) { goto L_8d203; }
    X86_TICK(c, 9);
    // 08d1f9  mov eax, 0xffffffff
    X86_AT(c, 0x8d1f9u);
    c.r[0] = 0xFFFFFFFFu;
    // 08d1fe  jmp 0x8d2cd
    X86_AT(c, 0x8d1feu);
    goto L_8d2cd;
L_8d203:
    X86_TICK(c, 13);
    // 08d203  push ebx
    X86_AT(c, 0x8d203u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d204  lea eax, [ebp - 0x200]
    X86_AT(c, 0x8d204u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFE00u);
    // 08d20a  push eax
    X86_AT(c, 0x8d20au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d20b  call 0x8d1b0
    X86_AT(c, 0x8d20bu);
    push32(c, 0x8d210u); x86_call_known(c, 0x8d1b0u, f_0008d1b0); X86_RET(c, 0x8d210u);
    X86_TICK(c, 9);
    // 08d210  add esp, 8
    X86_AT(c, 0x8d210u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08d213  inc eax
    X86_AT(c, 0x8d213u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 08d214  je 0x8d2b5
    X86_AT(c, 0x8d214u);
    if (x86_cc(c, 4)) { goto L_8d2b5; }
    X86_TICK(c, 21);
    // 08d21a  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x8d21au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 08d21d  push dword ptr [ebp + 0x14]
    X86_AT(c, 0x8d21du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))); push32(c, v); }
    // 08d220  lea eax, [ebp - 0x200]
    X86_AT(c, 0x8d220u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFE00u);
    // 08d226  push eax
    X86_AT(c, 0x8d226u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d227  call 0x8d174
    X86_AT(c, 0x8d227u);
    push32(c, 0x8d22cu); x86_call_known(c, 0x8d174u, f_0008d174); X86_RET(c, 0x8d22cu);
    X86_TICK(c, 11);
    // 08d22c  lea eax, [ebp - 0x200]
    X86_AT(c, 0x8d22cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFE00u);
    // 08d232  push eax
    X86_AT(c, 0x8d232u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d233  call 0x8d1a4
    X86_AT(c, 0x8d233u);
    push32(c, 0x8d238u); x86_call_known(c, 0x8d1a4u, f_0008d1a4); X86_RET(c, 0x8d238u);
    X86_TICK(c, 21);
    // 08d238  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x8d238u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 08d23b  mov dword ptr [edx], eax
    X86_AT(c, 0x8d23bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 08d23d  movzx eax, byte ptr [ebx + 0xe]
    X86_AT(c, 0x8d23du);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu)));
    // 08d241  push eax
    X86_AT(c, 0x8d241u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d242  call 0x938ef
    X86_AT(c, 0x8d242u);
    push32(c, 0x8d247u); x86_call_known(c, 0x938efu, f_000938ef); X86_RET(c, 0x8d247u);
    X86_TICK(c, 14);
    // 08d247  xchg edi, eax
    X86_AT(c, 0x8d247u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 08d248  sub edi, 0x200
    X86_AT(c, 0x8d248u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0x200u, 0, 4); }
    // 08d24e  add esp, 0x14
    X86_AT(c, 0x8d24eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 08d251  cmp edi, 1
    X86_AT(c, 0x8d251u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 08d254  jl 0x8d2b5
    X86_AT(c, 0x8d254u);
    if (x86_cc(c, 12)) { goto L_8d2b5; }
    X86_TICK(c, 11);
    // 08d256  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8d256u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08d259  cmp edi, eax
    X86_AT(c, 0x8d259u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 08d25b  jle 0x8d25e
    X86_AT(c, 0x8d25bu);
    if (x86_cc(c, 14)) { goto L_8d25e; }
    X86_TICK(c, 3);
    // 08d25d  xchg edi, eax
    X86_AT(c, 0x8d25du);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_8d25e:
    X86_TICK(c, 7);
    // 08d25e  cmp edi, 0x280
    X86_AT(c, 0x8d25eu);
    (void)x86_sub(c, c.r[7], 0x280u, 0, 4);
    // 08d264  jle 0x8d28c
    X86_AT(c, 0x8d264u);
    if (x86_cc(c, 14)) { goto L_8d28c; }
    X86_TICK(c, 66);
    // 08d266  push ebx
    X86_AT(c, 0x8d266u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d267  mov eax, edi
    X86_AT(c, 0x8d267u);
    c.r[0] = c.r[7];
    // 08d269  cdq 
    X86_AT(c, 0x8d269u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d26a  mov ecx, 0x280
    X86_AT(c, 0x8d26au);
    c.r[1] = 0x280u;
    // 08d26f  idiv ecx
    X86_AT(c, 0x8d26fu);
    x86_idiv(c, c.r[1], 4, 0x8d26fu);
    // 08d271  push eax
    X86_AT(c, 0x8d271u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d272  push ecx
    X86_AT(c, 0x8d272u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 08d273  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x8d273u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 08d276  mov dword ptr [ebp - 0x204], eax
    X86_AT(c, 0x8d276u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDFCu)), c.r[0]);
    // 08d27c  call 0x92500
    X86_AT(c, 0x8d27cu);
    push32(c, 0x8d281u); x86_call_known(c, 0x92500u, f_00092500); X86_RET(c, 0x8d281u);
    X86_TICK(c, 13);
    // 08d281  add esp, 0x10
    X86_AT(c, 0x8d281u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d284  cmp eax, dword ptr [ebp - 0x204]
    X86_AT(c, 0x8d284u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDFCu))), 0, 4);
    // 08d28a  jl 0x8d2b5
    X86_AT(c, 0x8d28au);
    if (x86_cc(c, 12)) { goto L_8d2b5; }
L_8d28c:
    X86_TICK(c, 55);
    // 08d28c  mov eax, edi
    X86_AT(c, 0x8d28cu);
    c.r[0] = c.r[7];
    // 08d28e  cdq 
    X86_AT(c, 0x8d28eu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d28f  mov ecx, 0x280
    X86_AT(c, 0x8d28fu);
    c.r[1] = 0x280u;
    // 08d294  idiv ecx
    X86_AT(c, 0x8d294u);
    x86_idiv(c, c.r[1], 4, 0x8d294u);
    // 08d296  mov esi, edx
    X86_AT(c, 0x8d296u);
    c.r[6] = c.r[2];
    // 08d298  and esi, esi
    X86_AT(c, 0x8d298u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 08d29a  je 0x8d2c2
    X86_AT(c, 0x8d29au);
    if (x86_cc(c, 4)) { goto L_8d2c2; }
    X86_TICK(c, 27);
    // 08d29c  push ebx
    X86_AT(c, 0x8d29cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d29d  push 1
    X86_AT(c, 0x8d29du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08d29f  push esi
    X86_AT(c, 0x8d29fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08d2a0  mov eax, edi
    X86_AT(c, 0x8d2a0u);
    c.r[0] = c.r[7];
    // 08d2a2  sub eax, esi
    X86_AT(c, 0x8d2a2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 08d2a4  dec eax
    X86_AT(c, 0x8d2a4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d2a5  add eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8d2a5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 08d2a8  push eax
    X86_AT(c, 0x8d2a8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d2a9  call 0x92500
    X86_AT(c, 0x8d2a9u);
    push32(c, 0x8d2aeu); x86_call_known(c, 0x92500u, f_00092500); X86_RET(c, 0x8d2aeu);
    X86_TICK(c, 9);
    // 08d2ae  add esp, 0x10
    X86_AT(c, 0x8d2aeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d2b1  cmp esi, eax
    X86_AT(c, 0x8d2b1u);
    (void)x86_sub(c, c.r[6], c.r[0], 0, 4);
    // 08d2b3  jle 0x8d2c2
    X86_AT(c, 0x8d2b3u);
    if (x86_cc(c, 14)) { goto L_8d2c2; }
L_8d2b5:
    X86_TICK(c, 9);
    // 08d2b5  push ebx
    X86_AT(c, 0x8d2b5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d2b6  call 0x92cd8
    X86_AT(c, 0x8d2b6u);
    push32(c, 0x8d2bbu); x86_call_known(c, 0x92cd8u, f_00092cd8); X86_RET(c, 0x8d2bbu);
    X86_TICK(c, 9);
    // 08d2bb  mov eax, 0xffffffff
    X86_AT(c, 0x8d2bbu);
    c.r[0] = 0xFFFFFFFFu;
    // 08d2c0  jmp 0x8d2ca
    X86_AT(c, 0x8d2c0u);
    goto L_8d2ca;
L_8d2c2:
    X86_TICK(c, 9);
    // 08d2c2  push ebx
    X86_AT(c, 0x8d2c2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d2c3  call 0x92cd8
    X86_AT(c, 0x8d2c3u);
    push32(c, 0x8d2c8u); x86_call_known(c, 0x92cd8u, f_00092cd8); X86_RET(c, 0x8d2c8u);
    X86_TICK(c, 2);
    // 08d2c8  mov eax, edi
    X86_AT(c, 0x8d2c8u);
    c.r[0] = c.r[7];
L_8d2ca:
    X86_TICK(c, 2);
    // 08d2ca  add esp, 4
    X86_AT(c, 0x8d2cau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8d2cd:
    X86_TICK(c, 28);
    // 08d2cd  pop edi
    X86_AT(c, 0x8d2cdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d2ce  pop esi
    X86_AT(c, 0x8d2ceu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08d2cf  pop ebx
    X86_AT(c, 0x8d2cfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08d2d0  leave 
    X86_AT(c, 0x8d2d0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d2d1  ret 
    X86_AT(c, 0x8d2d1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d1d8u, "ran off the end of a function");
}
void f_0008d2d4(X86Cpu& c) {
    X86_TICK(c, 32);
    // 08d2d4  push ebp
    X86_AT(c, 0x8d2d4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d2d5  mov ebp, esp
    X86_AT(c, 0x8d2d5u);
    c.r[5] = c.r[4];
    // 08d2d7  sub esp, 0x281c
    X86_AT(c, 0x8d2d7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x281Cu, 0, 4); }
    // 08d2dd  push ebx
    X86_AT(c, 0x8d2ddu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d2de  push esi
    X86_AT(c, 0x8d2deu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08d2df  push edi
    X86_AT(c, 0x8d2dfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d2e0  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8d2e0u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08d2e3  mov dword ptr [ebp - 0x18], 0
    X86_AT(c, 0x8d2e3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0x0u);
    // 08d2ea  push 0x124c
    X86_AT(c, 0x8d2eau);
    { uint32_t v = 0x124Cu; push32(c, v); }
    // 08d2ef  push dword ptr [ebp + 8]
    X86_AT(c, 0x8d2efu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08d2f2  call 0x927dc
    X86_AT(c, 0x8d2f2u);
    push32(c, 0x8d2f7u); x86_call_known(c, 0x927dcu, f_000927dc); X86_RET(c, 0x8d2f7u);
    X86_TICK(c, 11);
    // 08d2f7  add esp, 8
    X86_AT(c, 0x8d2f7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08d2fa  mov dword ptr [ebp - 0x281c], eax
    X86_AT(c, 0x8d2fau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u)), c.r[0]);
    // 08d300  and eax, eax
    X86_AT(c, 0x8d300u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 08d302  je 0x8d5cd
    X86_AT(c, 0x8d302u);
    if (x86_cc(c, 4)) { goto L_8d5cd; }
    X86_TICK(c, 16);
    // 08d308  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x8d308u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 08d30e  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x8d30eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 08d314  push eax
    X86_AT(c, 0x8d314u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d315  call 0x8d1b0
    X86_AT(c, 0x8d315u);
    push32(c, 0x8d31au); x86_call_known(c, 0x8d1b0u, f_0008d1b0); X86_RET(c, 0x8d31au);
    X86_TICK(c, 9);
    // 08d31a  add esp, 8
    X86_AT(c, 0x8d31au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08d31d  inc eax
    X86_AT(c, 0x8d31du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 08d31e  je 0x8d53d
    X86_AT(c, 0x8d31eu);
    if (x86_cc(c, 4)) { goto L_8d53d; }
    X86_TICK(c, 19);
    // 08d324  lea eax, [ebp - 0xc]
    X86_AT(c, 0x8d324u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 08d327  push eax
    X86_AT(c, 0x8d327u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d328  lea ecx, [ebp - 8]
    X86_AT(c, 0x8d328u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 08d32b  push ecx
    X86_AT(c, 0x8d32bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 08d32c  lea edx, [ebp - 0x2818]
    X86_AT(c, 0x8d32cu);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 08d332  push edx
    X86_AT(c, 0x8d332u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08d333  call 0x8d174
    X86_AT(c, 0x8d333u);
    push32(c, 0x8d338u); x86_call_known(c, 0x8d174u, f_0008d174); X86_RET(c, 0x8d338u);
    X86_TICK(c, 11);
    // 08d338  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x8d338u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 08d33e  push eax
    X86_AT(c, 0x8d33eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d33f  call 0x8d1a4
    X86_AT(c, 0x8d33fu);
    push32(c, 0x8d344u); x86_call_known(c, 0x8d1a4u, f_0008d1a4); X86_RET(c, 0x8d344u);
    X86_TICK(c, 21);
    // 08d344  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x8d344u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 08d347  mov eax, dword ptr [ebp - 0x281c]
    X86_AT(c, 0x8d347u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u)));
    // 08d34d  movzx eax, byte ptr [eax + 0xe]
    X86_AT(c, 0x8d34du);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xEu)));
    // 08d351  push eax
    X86_AT(c, 0x8d351u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d352  call 0x938ef
    X86_AT(c, 0x8d352u);
    push32(c, 0x8d357u); x86_call_known(c, 0x938efu, f_000938ef); X86_RET(c, 0x8d357u);
    X86_TICK(c, 14);
    // 08d357  xchg esi, eax
    X86_AT(c, 0x8d357u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 08d358  sub esi, 0x200
    X86_AT(c, 0x8d358u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x200u, 0, 4); }
    // 08d35e  add esp, 0x14
    X86_AT(c, 0x8d35eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 08d361  cmp esi, 1
    X86_AT(c, 0x8d361u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 08d364  jl 0x8d53d
    X86_AT(c, 0x8d364u);
    if (x86_cc(c, 12)) { goto L_8d53d; }
    X86_TICK(c, 12);
    // 08d36a  cmp dword ptr [ebp - 8], 1
    X86_AT(c, 0x8d36au);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x1u, 0, 4);
    // 08d36e  jl 0x8d53d
    X86_AT(c, 0x8d36eu);
    if (x86_cc(c, 12)) { goto L_8d53d; }
    X86_TICK(c, 12);
    // 08d374  cmp dword ptr [ebp - 0xc], 1
    X86_AT(c, 0x8d374u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x1u, 0, 4);
    // 08d378  jl 0x8d53d
    X86_AT(c, 0x8d378u);
    if (x86_cc(c, 12)) { goto L_8d53d; }
    X86_TICK(c, 13);
    // 08d37e  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x8d37eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 08d381  dec edx
    X86_AT(c, 0x8d381u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 08d382  cmp edx, 0xf
    X86_AT(c, 0x8d382u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 08d385  ja 0x8d3e7
    X86_AT(c, 0x8d385u);
    if (x86_cc(c, 7)) { goto L_8d3e7; }
    X86_TICK(c, 7);
    // 08d387  jmp dword ptr cs:[edx*4 + 0x8d38f]
    X86_AT(c, 0x8d387u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0x8D38Fu)));
      switch (t) {
      case 0x8d3cfu: goto L_8d3cf;
      case 0x8d3dau: goto L_8d3da;
      case 0x8d3dfu: goto L_8d3df;
      case 0x8d3e7u: goto L_8d3e7;
      default: x86_jump(c, t); return; } }
L_8d3cf:
    X86_TICK(c, 20);
    // 08d3cf  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x8d3cfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 08d3d2  inc eax
    X86_AT(c, 0x8d3d2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 08d3d3  cdq 
    X86_AT(c, 0x8d3d3u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d3d4  sub eax, edx
    X86_AT(c, 0x8d3d4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 08d3d6  sar eax, 1
    X86_AT(c, 0x8d3d6u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 08d3d8  jmp 0x8d3e4
    X86_AT(c, 0x8d3d8u);
    goto L_8d3e4;
L_8d3da:
    X86_TICK(c, 11);
    // 08d3da  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x8d3dau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 08d3dd  jmp 0x8d3e4
    X86_AT(c, 0x8d3ddu);
    goto L_8d3e4;
L_8d3df:
    X86_TICK(c, 6);
    // 08d3df  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x8d3dfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 08d3e2  add eax, eax
    X86_AT(c, 0x8d3e2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
L_8d3e4:
    X86_TICK(c, 2);
    // 08d3e4  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0x8d3e4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
L_8d3e7:
    X86_TICK(c, 33);
    // 08d3e7  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d3e7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 08d3ea  imul eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d3eau);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 4);
    // 08d3ee  cmp eax, esi
    X86_AT(c, 0x8d3eeu);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 08d3f0  jge 0x8d3f3
    X86_AT(c, 0x8d3f0u);
    if (x86_cc(c, 13)) { goto L_8d3f3; }
    X86_TICK(c, 3);
    // 08d3f2  xchg esi, eax
    X86_AT(c, 0x8d3f2u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_8d3f3:
    X86_TICK(c, 33);
    // 08d3f3  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d3f3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 08d3f6  imul eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d3f6u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 4);
    // 08d3fa  cmp eax, esi
    X86_AT(c, 0x8d3fau);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 08d3fc  jle 0x8d40c
    X86_AT(c, 0x8d3fcu);
    if (x86_cc(c, 14)) { goto L_8d40c; }
    X86_TICK(c, 71);
    // 08d3fe  mov eax, esi
    X86_AT(c, 0x8d3feu);
    c.r[0] = c.r[6];
    // 08d400  cdq 
    X86_AT(c, 0x8d400u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d401  idiv dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d401u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4, 0x8d401u);
    // 08d404  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x8d404u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 08d407  imul eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d407u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4);
    // 08d40b  xchg esi, eax
    X86_AT(c, 0x8d40bu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_8d40c:
    X86_TICK(c, 7);
    // 08d40c  cmp esi, 0x2800
    X86_AT(c, 0x8d40cu);
    (void)x86_sub(c, c.r[6], 0x2800u, 0, 4);
    // 08d412  jg 0x8d4a2
    X86_AT(c, 0x8d412u);
    if (x86_cc(c, 15)) { goto L_8d4a2; }
    X86_TICK(c, 22);
    // 08d418  mov ebx, esi
    X86_AT(c, 0x8d418u);
    c.r[3] = c.r[6];
    // 08d41a  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x8d41au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 08d420  push 1
    X86_AT(c, 0x8d420u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08d422  push ebx
    X86_AT(c, 0x8d422u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d423  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x8d423u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 08d429  push eax
    X86_AT(c, 0x8d429u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d42a  call 0x92500
    X86_AT(c, 0x8d42au);
    push32(c, 0x8d42fu); x86_call_known(c, 0x92500u, f_00092500); X86_RET(c, 0x8d42fu);
    X86_TICK(c, 9);
    // 08d42f  add esp, 0x10
    X86_AT(c, 0x8d42fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d432  dec eax
    X86_AT(c, 0x8d432u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d433  jge 0x8d43c
    X86_AT(c, 0x8d433u);
    if (x86_cc(c, 13)) { goto L_8d43c; }
    X86_TICK(c, 2);
    // 08d435  mov dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0x8d435u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0xFFFFFFFFu);
L_8d43c:
    X86_TICK(c, 51);
    // 08d43c  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x8d43cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 08d442  mov dword ptr [0x34d80], eax
    X86_AT(c, 0x8d442u);
    wr32((c.sbase[3] + (uint32_t)(0x34D80u)), c.r[0]);
    // 08d447  mov word ptr [0x34d84], 0x14
    X86_AT(c, 0x8d447u);
    wr16((c.sbase[3] + (uint32_t)(0x34D84u)), 0x14u);
    // 08d450  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0x8d450u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08d454  mov word ptr [0x34d86], ax
    X86_AT(c, 0x8d454u);
    wr16((c.sbase[3] + (uint32_t)(0x34D86u)), (c.r[0] & 0xFFFFu));
    // 08d45a  mov edx, edi
    X86_AT(c, 0x8d45au);
    c.r[2] = c.r[7];
    // 08d45c  mov word ptr [0x34d88], dx
    X86_AT(c, 0x8d45cu);
    wr16((c.sbase[3] + (uint32_t)(0x34D88u)), (c.r[2] & 0xFFFFu));
    // 08d463  add ax, word ptr [ebp - 8]
    X86_AT(c, 0x8d463u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 2)); }
    // 08d467  dec eax
    X86_AT(c, 0x8d467u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d468  mov word ptr [0x34d8a], ax
    X86_AT(c, 0x8d468u);
    wr16((c.sbase[3] + (uint32_t)(0x34D8Au)), (c.r[0] & 0xFFFFu));
    // 08d46e  mov eax, edi
    X86_AT(c, 0x8d46eu);
    c.r[0] = c.r[7];
    // 08d470  add ax, word ptr [ebp - 0xc]
    X86_AT(c, 0x8d470u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 2)); }
    // 08d474  dec eax
    X86_AT(c, 0x8d474u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d475  mov word ptr [0x34d8c], ax
    X86_AT(c, 0x8d475u);
    wr16((c.sbase[3] + (uint32_t)(0x34D8Cu)), (c.r[0] & 0xFFFFu));
    // 08d47b  push 0x34d80
    X86_AT(c, 0x8d47bu);
    { uint32_t v = 0x34D80u; push32(c, v); }
    // 08d480  push 0
    X86_AT(c, 0x8d480u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08d482  push 0x34780
    X86_AT(c, 0x8d482u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08d487  call 0x544
    X86_AT(c, 0x8d487u);
    push32(c, 0x8d48cu); x86_call_known(c, 0x544u, f_00000544); X86_RET(c, 0x8d48cu);
    X86_TICK(c, 12);
    // 08d48c  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x8d48cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 08d492  call 0x92cd8
    X86_AT(c, 0x8d492u);
    push32(c, 0x8d497u); x86_call_known(c, 0x92cd8u, f_00092cd8); X86_RET(c, 0x8d497u);
    X86_TICK(c, 13);
    // 08d497  mov eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0x8d497u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 08d49a  add esp, 0x10
    X86_AT(c, 0x8d49au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d49d  jmp 0x8d5d6
    X86_AT(c, 0x8d49du);
    goto L_8d5d6;
L_8d4a2:
    X86_TICK(c, 93);
    // 08d4a2  mov eax, 0x2800
    X86_AT(c, 0x8d4a2u);
    c.r[0] = 0x2800u;
    // 08d4a7  cdq 
    X86_AT(c, 0x8d4a7u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d4a8  idiv dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d4a8u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4, 0x8d4a8u);
    // 08d4ab  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x8d4abu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 08d4ae  imul eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d4aeu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4);
    // 08d4b2  xchg ebx, eax
    X86_AT(c, 0x8d4b2u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 08d4b3  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x8d4b3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 08d4b9  mov dword ptr [0x34d80], eax
    X86_AT(c, 0x8d4b9u);
    wr32((c.sbase[3] + (uint32_t)(0x34D80u)), c.r[0]);
    // 08d4be  mov word ptr [0x34d84], 0x14
    X86_AT(c, 0x8d4beu);
    wr16((c.sbase[3] + (uint32_t)(0x34D84u)), 0x14u);
    // 08d4c7  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0x8d4c7u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08d4cb  mov word ptr [0x34d86], ax
    X86_AT(c, 0x8d4cbu);
    wr16((c.sbase[3] + (uint32_t)(0x34D86u)), (c.r[0] & 0xFFFFu));
    // 08d4d1  add ax, word ptr [ebp - 8]
    X86_AT(c, 0x8d4d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 2)); }
    // 08d4d5  dec eax
    X86_AT(c, 0x8d4d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d4d6  mov word ptr [0x34d8a], ax
    X86_AT(c, 0x8d4d6u);
    wr16((c.sbase[3] + (uint32_t)(0x34D8Au)), (c.r[0] & 0xFFFFu));
L_8d4dc:
    X86_TICK(c, 7);
    // 08d4dc  cmp ebx, esi
    X86_AT(c, 0x8d4dcu);
    (void)x86_sub(c, c.r[3], c.r[6], 0, 4);
    // 08d4de  jge 0x8d538
    X86_AT(c, 0x8d4deu);
    if (x86_cc(c, 13)) { goto L_8d538; }
    X86_TICK(c, 20);
    // 08d4e0  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x8d4e0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 08d4e6  push 1
    X86_AT(c, 0x8d4e6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08d4e8  push ebx
    X86_AT(c, 0x8d4e8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d4e9  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x8d4e9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 08d4ef  push eax
    X86_AT(c, 0x8d4efu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d4f0  call 0x92500
    X86_AT(c, 0x8d4f0u);
    push32(c, 0x8d4f5u); x86_call_known(c, 0x92500u, f_00092500); X86_RET(c, 0x8d4f5u);
    X86_TICK(c, 9);
    // 08d4f5  add esp, 0x10
    X86_AT(c, 0x8d4f5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d4f8  dec eax
    X86_AT(c, 0x8d4f8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d4f9  jge 0x8d502
    X86_AT(c, 0x8d4f9u);
    if (x86_cc(c, 13)) { goto L_8d502; }
    X86_TICK(c, 2);
    // 08d4fb  mov dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0x8d4fbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0xFFFFFFFFu);
L_8d502:
    X86_TICK(c, 29);
    // 08d502  mov eax, edi
    X86_AT(c, 0x8d502u);
    c.r[0] = c.r[7];
    // 08d504  mov word ptr [0x34d88], ax
    X86_AT(c, 0x8d504u);
    wr16((c.sbase[3] + (uint32_t)(0x34D88u)), (c.r[0] & 0xFFFFu));
    // 08d50a  mov eax, edi
    X86_AT(c, 0x8d50au);
    c.r[0] = c.r[7];
    // 08d50c  add ax, word ptr [ebp - 0x14]
    X86_AT(c, 0x8d50cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 2)); }
    // 08d510  dec eax
    X86_AT(c, 0x8d510u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d511  mov word ptr [0x34d8c], ax
    X86_AT(c, 0x8d511u);
    wr16((c.sbase[3] + (uint32_t)(0x34D8Cu)), (c.r[0] & 0xFFFFu));
    // 08d517  push 0x34d80
    X86_AT(c, 0x8d517u);
    { uint32_t v = 0x34D80u; push32(c, v); }
    // 08d51c  push 0
    X86_AT(c, 0x8d51cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08d51e  push 0x34780
    X86_AT(c, 0x8d51eu);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08d523  call 0x544
    X86_AT(c, 0x8d523u);
    push32(c, 0x8d528u); x86_call_known(c, 0x544u, f_00000544); X86_RET(c, 0x8d528u);
    X86_TICK(c, 22);
    // 08d528  add edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0x8d528u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 4); }
    // 08d52b  sub esi, ebx
    X86_AT(c, 0x8d52bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[3], 0, 4); }
    // 08d52d  add esp, 0xc
    X86_AT(c, 0x8d52du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 08d530  cmp dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0x8d530u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 0xFFFFFFFFu, 0, 4);
    // 08d534  jne 0x8d4dc
    X86_AT(c, 0x8d534u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8d4dcu); goto L_8d4dc; }
    X86_TICK(c, 7);
    // 08d536  jmp 0x8d53d
    X86_AT(c, 0x8d536u);
    goto L_8d53d;
L_8d538:
    X86_TICK(c, 11);
    // 08d538  cmp esi, dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d538u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4);
    // 08d53b  jge 0x8d555
    X86_AT(c, 0x8d53bu);
    if (x86_cc(c, 13)) { goto L_8d555; }
L_8d53d:
    X86_TICK(c, 12);
    // 08d53d  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x8d53du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 08d543  call 0x92cd8
    X86_AT(c, 0x8d543u);
    push32(c, 0x8d548u); x86_call_known(c, 0x92cd8u, f_00092cd8); X86_RET(c, 0x8d548u);
    X86_TICK(c, 11);
    // 08d548  mov eax, 0xffffffff
    X86_AT(c, 0x8d548u);
    c.r[0] = 0xFFFFFFFFu;
    // 08d54d  add esp, 4
    X86_AT(c, 0x8d54du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08d550  jmp 0x8d5d6
    X86_AT(c, 0x8d550u);
    goto L_8d5d6;
L_8d555:
    X86_TICK(c, 88);
    // 08d555  mov eax, esi
    X86_AT(c, 0x8d555u);
    c.r[0] = c.r[6];
    // 08d557  cdq 
    X86_AT(c, 0x8d557u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d558  idiv dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d558u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4, 0x8d558u);
    // 08d55b  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x8d55bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 08d55e  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x8d55eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 08d564  push 1
    X86_AT(c, 0x8d564u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08d566  imul eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d566u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4);
    // 08d56a  push eax
    X86_AT(c, 0x8d56au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d56b  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x8d56bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 08d571  push eax
    X86_AT(c, 0x8d571u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d572  call 0x92500
    X86_AT(c, 0x8d572u);
    push32(c, 0x8d577u); x86_call_known(c, 0x92500u, f_00092500); X86_RET(c, 0x8d577u);
    X86_TICK(c, 9);
    // 08d577  add esp, 0x10
    X86_AT(c, 0x8d577u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d57a  dec eax
    X86_AT(c, 0x8d57au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d57b  jge 0x8d584
    X86_AT(c, 0x8d57bu);
    if (x86_cc(c, 13)) { goto L_8d584; }
    X86_TICK(c, 2);
    // 08d57d  mov dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0x8d57du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0xFFFFFFFFu);
L_8d584:
    X86_TICK(c, 35);
    // 08d584  mov eax, edi
    X86_AT(c, 0x8d584u);
    c.r[0] = c.r[7];
    // 08d586  mov word ptr [0x34d88], ax
    X86_AT(c, 0x8d586u);
    wr16((c.sbase[3] + (uint32_t)(0x34D88u)), (c.r[0] & 0xFFFFu));
    // 08d58c  mov eax, edi
    X86_AT(c, 0x8d58cu);
    c.r[0] = c.r[7];
    // 08d58e  add ax, word ptr [ebp - 0x14]
    X86_AT(c, 0x8d58eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 2)); }
    // 08d592  dec eax
    X86_AT(c, 0x8d592u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d593  mov word ptr [0x34d8c], ax
    X86_AT(c, 0x8d593u);
    wr16((c.sbase[3] + (uint32_t)(0x34D8Cu)), (c.r[0] & 0xFFFFu));
    // 08d599  mov ax, word ptr [ebp - 0x14]
    X86_AT(c, 0x8d599u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))));
    // 08d59d  mov word ptr [0x34d90], ax
    X86_AT(c, 0x8d59du);
    wr16((c.sbase[3] + (uint32_t)(0x34D90u)), (c.r[0] & 0xFFFFu));
    // 08d5a3  push 0x34d80
    X86_AT(c, 0x8d5a3u);
    { uint32_t v = 0x34D80u; push32(c, v); }
    // 08d5a8  push 0
    X86_AT(c, 0x8d5a8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08d5aa  push 0x34780
    X86_AT(c, 0x8d5aau);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08d5af  call 0x544
    X86_AT(c, 0x8d5afu);
    push32(c, 0x8d5b4u); x86_call_known(c, 0x544u, f_00000544); X86_RET(c, 0x8d5b4u);
    X86_TICK(c, 12);
    // 08d5b4  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x8d5b4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 08d5ba  call 0x92cd8
    X86_AT(c, 0x8d5bau);
    push32(c, 0x8d5bfu); x86_call_known(c, 0x92cd8u, f_00092cd8); X86_RET(c, 0x8d5bfu);
    X86_TICK(c, 35);
    // 08d5bf  add esp, 0x10
    X86_AT(c, 0x8d5bfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d5c2  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d5c2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 08d5c5  imul eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x8d5c5u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 4);
    // 08d5c9  cmp eax, esi
    X86_AT(c, 0x8d5c9u);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 08d5cb  jge 0x8d5d4
    X86_AT(c, 0x8d5cbu);
    if (x86_cc(c, 13)) { goto L_8d5d4; }
L_8d5cd:
    X86_TICK(c, 9);
    // 08d5cd  mov eax, 0xffffffff
    X86_AT(c, 0x8d5cdu);
    c.r[0] = 0xFFFFFFFFu;
    // 08d5d2  jmp 0x8d5d6
    X86_AT(c, 0x8d5d2u);
    goto L_8d5d6;
L_8d5d4:
    X86_TICK(c, 2);
    // 08d5d4  sub eax, eax
    X86_AT(c, 0x8d5d4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8d5d6:
    X86_TICK(c, 28);
    // 08d5d6  pop edi
    X86_AT(c, 0x8d5d6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d5d7  pop esi
    X86_AT(c, 0x8d5d7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08d5d8  pop ebx
    X86_AT(c, 0x8d5d8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08d5d9  leave 
    X86_AT(c, 0x8d5d9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d5da  ret 
    X86_AT(c, 0x8d5dau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d2d4u, "ran off the end of a function");
}
void f_0008d5d6(X86Cpu& c) {
    X86_TICK(c, 28);
    // 08d5d6  pop edi
    X86_AT(c, 0x8d5d6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d5d7  pop esi
    X86_AT(c, 0x8d5d7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08d5d8  pop ebx
    X86_AT(c, 0x8d5d8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08d5d9  leave 
    X86_AT(c, 0x8d5d9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d5da  ret 
    X86_AT(c, 0x8d5dau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d5d6u, "ran off the end of a function");
}
void f_0008d5dc(X86Cpu& c) {
    X86_TICK(c, 56);
    // 08d5dc  push ebp
    X86_AT(c, 0x8d5dcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d5dd  mov ebp, esp
    X86_AT(c, 0x8d5ddu);
    c.r[5] = c.r[4];
    // 08d5df  push ebx
    X86_AT(c, 0x8d5dfu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d5e0  push esi
    X86_AT(c, 0x8d5e0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08d5e1  push edi
    X86_AT(c, 0x8d5e1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d5e2  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8d5e2u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08d5e5  mov esi, dword ptr [ebp + 0x14]
    X86_AT(c, 0x8d5e5u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 08d5e8  mov ebx, dword ptr [ebp + 0x20]
    X86_AT(c, 0x8d5e8u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)));
    // 08d5eb  lea eax, [esi - 6]
    X86_AT(c, 0x8d5ebu);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFFAu);
    // 08d5ee  cdq 
    X86_AT(c, 0x8d5eeu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d5ef  sub eax, edx
    X86_AT(c, 0x8d5efu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 08d5f1  sar eax, 1
    X86_AT(c, 0x8d5f1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 08d5f3  cdq 
    X86_AT(c, 0x8d5f3u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d5f4  sub eax, edx
    X86_AT(c, 0x8d5f4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 08d5f6  sar eax, 1
    X86_AT(c, 0x8d5f6u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 08d5f8  cdq 
    X86_AT(c, 0x8d5f8u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d5f9  sub eax, edx
    X86_AT(c, 0x8d5f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 08d5fb  sar eax, 1
    X86_AT(c, 0x8d5fbu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 08d5fd  cmp eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x8d5fdu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))), 0, 4);
    // 08d600  jge 0x8d605
    X86_AT(c, 0x8d600u);
    if (x86_cc(c, 13)) { goto L_8d605; }
    X86_TICK(c, 2);
    // 08d602  mov dword ptr [ebp + 0x1c], eax
    X86_AT(c, 0x8d602u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
L_8d605:
    X86_TICK(c, 57);
    // 08d605  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0x8d605u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 08d608  sub eax, 4
    X86_AT(c, 0x8d608u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x4u, 0, 4); }
    // 08d60b  cdq 
    X86_AT(c, 0x8d60bu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d60c  mov ecx, 0x10
    X86_AT(c, 0x8d60cu);
    c.r[1] = 0x10u;
    // 08d611  idiv ecx
    X86_AT(c, 0x8d611u);
    x86_idiv(c, c.r[1], 4, 0x8d611u);
    // 08d613  cmp eax, ebx
    X86_AT(c, 0x8d613u);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 08d615  jge 0x8d618
    X86_AT(c, 0x8d615u);
    if (x86_cc(c, 13)) { goto L_8d618; }
    X86_TICK(c, 3);
    // 08d617  xchg ebx, eax
    X86_AT(c, 0x8d617u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
L_8d618:
    X86_TICK(c, 100);
    // 08d618  mov eax, 0x3477c
    X86_AT(c, 0x8d618u);
    c.r[0] = 0x3477Cu;
    // 08d61d  lea edx, [edi + edi*2]
    X86_AT(c, 0x8d61du);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08d620  lea ecx, [edx + edx*8]
    X86_AT(c, 0x8d620u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 08d623  lea ecx, [edx + ecx*2]
    X86_AT(c, 0x8d623u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 08d626  mov byte ptr [eax + ecx*1 + 0x710], 0xff
    X86_AT(c, 0x8d626u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x710u)), 0xFFu);
    // 08d62e  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8d62eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08d631  mov dword ptr [eax + ecx*1 + 0x711], edx
    X86_AT(c, 0x8d631u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x711u)), c.r[2]);
    // 08d638  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8d638u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08d63b  mov dword ptr [eax + ecx*1 + 0x715], edx
    X86_AT(c, 0x8d63bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x715u)), c.r[2]);
    // 08d642  mov dword ptr [eax + ecx*1 + 0x719], esi
    X86_AT(c, 0x8d642u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x719u)), c.r[6]);
    // 08d649  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0x8d649u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 08d64c  mov dword ptr [eax + ecx*1 + 0x71d], edx
    X86_AT(c, 0x8d64cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x71Du)), c.r[2]);
    // 08d653  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x8d653u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 08d656  mov dword ptr [eax + ecx*1 + 0x721], edx
    X86_AT(c, 0x8d656u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x721u)), c.r[2]);
    // 08d65d  mov dword ptr [eax + ecx*1 + 0x725], ebx
    X86_AT(c, 0x8d65du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x725u)), c.r[3]);
    // 08d664  sub edx, edx
    X86_AT(c, 0x8d664u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 08d666  mov dword ptr [eax + ecx*1 + 0x729], edx
    X86_AT(c, 0x8d666u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x729u)), c.r[2]);
    // 08d66d  mov dword ptr [eax + ecx*1 + 0x72d], edx
    X86_AT(c, 0x8d66du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x72Du)), c.r[2]);
    // 08d674  mov edx, 0xffffffff
    X86_AT(c, 0x8d674u);
    c.r[2] = 0xFFFFFFFFu;
    // 08d679  mov dword ptr [eax + ecx*1 + 0x731], edx
    X86_AT(c, 0x8d679u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x731u)), c.r[2]);
    // 08d680  mov edx, dword ptr [ebp + 0x24]
    X86_AT(c, 0x8d680u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u)));
    // 08d683  mov dword ptr [eax + ecx*1 + 0x735], edx
    X86_AT(c, 0x8d683u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x735u)), c.r[2]);
    // 08d68a  mov dword ptr [eax + ecx*1 + 0x739], 0
    X86_AT(c, 0x8d68au);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x739u)), 0x0u);
    // 08d695  mov edx, dword ptr [ebp + 0x28]
    X86_AT(c, 0x8d695u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x28u)));
    // 08d698  mov dword ptr [eax + ecx*1 + 0x73d], edx
    X86_AT(c, 0x8d698u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x73Du)), c.r[2]);
    // 08d69f  mov edx, dword ptr [ebp + 0x2c]
    X86_AT(c, 0x8d69fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x2Cu)));
    // 08d6a2  mov dword ptr [eax + ecx*1 + 0x741], edx
    X86_AT(c, 0x8d6a2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x741u)), c.r[2]);
    // 08d6a9  mov dword ptr [eax + ecx*1 + 0x745], 0xffffffff
    X86_AT(c, 0x8d6a9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x745u)), 0xFFFFFFFFu);
    // 08d6b4  lea eax, [eax + ecx*1 + 0x710]
    X86_AT(c, 0x8d6b4u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[1] + 0x710u);
    // 08d6bb  pop edi
    X86_AT(c, 0x8d6bbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d6bc  pop esi
    X86_AT(c, 0x8d6bcu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08d6bd  pop ebx
    X86_AT(c, 0x8d6bdu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08d6be  leave 
    X86_AT(c, 0x8d6beu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d6bf  ret 
    X86_AT(c, 0x8d6bfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d5dcu, "ran off the end of a function");
}
void f_0008d6c0(X86Cpu& c) {
    X86_TICK(c, 38);
    // 08d6c0  push ebp
    X86_AT(c, 0x8d6c0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d6c1  mov ebp, esp
    X86_AT(c, 0x8d6c1u);
    c.r[5] = c.r[4];
    // 08d6c3  push ebx
    X86_AT(c, 0x8d6c3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d6c4  push esi
    X86_AT(c, 0x8d6c4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08d6c5  push edi
    X86_AT(c, 0x8d6c5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d6c6  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8d6c6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08d6c9  mov eax, 0x3477c
    X86_AT(c, 0x8d6c9u);
    c.r[0] = 0x3477Cu;
    // 08d6ce  lea edx, [edi + edi*2]
    X86_AT(c, 0x8d6ceu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08d6d1  lea ecx, [edx + edx*8]
    X86_AT(c, 0x8d6d1u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 08d6d4  lea ecx, [edx + ecx*2]
    X86_AT(c, 0x8d6d4u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 08d6d7  push dword ptr [eax + ecx*1 + 0x735]
    X86_AT(c, 0x8d6d7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x735u))); push32(c, v); }
    // 08d6de  mov ebx, eax
    X86_AT(c, 0x8d6deu);
    c.r[3] = c.r[0];
    // 08d6e0  mov esi, ecx
    X86_AT(c, 0x8d6e0u);
    c.r[6] = c.r[1];
    // 08d6e2  call 0x8c4d4
    X86_AT(c, 0x8d6e2u);
    push32(c, 0x8d6e7u); x86_call_known(c, 0x8c4d4u, f_0008c4d4); X86_RET(c, 0x8d6e7u);
    X86_TICK(c, 14);
    // 08d6e7  add esp, 4
    X86_AT(c, 0x8d6e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08d6ea  cmp dword ptr [ebx + esi*1 + 0x745], 0xffffffff
    X86_AT(c, 0x8d6eau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] + 0x745u))), 0xFFFFFFFFu, 0, 4);
    // 08d6f2  jne 0x8d703
    X86_AT(c, 0x8d6f2u);
    if (x86_cc(c, 5)) { goto L_8d703; }
    X86_TICK(c, 12);
    // 08d6f4  push dword ptr [ebx + esi*1 + 0x741]
    X86_AT(c, 0x8d6f4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] + 0x741u))); push32(c, v); }
    // 08d6fb  call 0x8c4ec
    X86_AT(c, 0x8d6fbu);
    push32(c, 0x8d700u); x86_call_known(c, 0x8c4ecu, f_0008c4ec); X86_RET(c, 0x8d700u);
    X86_TICK(c, 2);
    // 08d700  add esp, 4
    X86_AT(c, 0x8d700u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8d703:
    X86_TICK(c, 18);
    // 08d703  lea eax, [edi + edi*2]
    X86_AT(c, 0x8d703u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08d706  lea edx, [eax + eax*8]
    X86_AT(c, 0x8d706u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 08d709  lea edx, [eax + edx*2]
    X86_AT(c, 0x8d709u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 08d70c  push dword ptr [edx + 0x34eb5]
    X86_AT(c, 0x8d70cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x34EB5u))); push32(c, v); }
    // 08d712  call 0x8c59c
    X86_AT(c, 0x8d712u);
    push32(c, 0x8d717u); x86_call_known(c, 0x8c59cu, f_0008c59c); X86_RET(c, 0x8d717u);
    X86_TICK(c, 30);
    // 08d717  add esp, 4
    X86_AT(c, 0x8d717u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08d71a  pop edi
    X86_AT(c, 0x8d71au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d71b  pop esi
    X86_AT(c, 0x8d71bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08d71c  pop ebx
    X86_AT(c, 0x8d71cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08d71d  leave 
    X86_AT(c, 0x8d71du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d71e  ret 
    X86_AT(c, 0x8d71eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d6c0u, "ran off the end of a function");
}
void f_0008d720(X86Cpu& c) {
    X86_TICK(c, 74);
    // 08d720  push ebp
    X86_AT(c, 0x8d720u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d721  mov ebp, esp
    X86_AT(c, 0x8d721u);
    c.r[5] = c.r[4];
    // 08d723  push edi
    X86_AT(c, 0x8d723u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d724  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8d724u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08d727  lea eax, [eax + eax*2]
    X86_AT(c, 0x8d727u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 08d72a  lea edx, [eax + eax*8]
    X86_AT(c, 0x8d72au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 08d72d  lea edx, [eax + edx*2]
    X86_AT(c, 0x8d72du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 08d730  lea edi, [edx + 0x34e8c]
    X86_AT(c, 0x8d730u);
    c.r[7] = (uint32_t)(c.r[2] + 0x34E8Cu);
    // 08d736  push dword ptr [edi + 0x31]
    X86_AT(c, 0x8d736u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
    // 08d739  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d739u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d73c  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0x8d73cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 08d73f  sub eax, 2
    X86_AT(c, 0x8d73fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 08d742  push eax
    X86_AT(c, 0x8d742u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d743  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d743u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d746  add eax, dword ptr [edi + 9]
    X86_AT(c, 0x8d746u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 08d749  sub eax, 2
    X86_AT(c, 0x8d749u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 08d74c  push eax
    X86_AT(c, 0x8d74cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d74d  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d74du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d750  inc eax
    X86_AT(c, 0x8d750u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 08d751  push eax
    X86_AT(c, 0x8d751u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d752  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d752u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d755  inc eax
    X86_AT(c, 0x8d755u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 08d756  push eax
    X86_AT(c, 0x8d756u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d757  call 0x8cbd0
    X86_AT(c, 0x8d757u);
    push32(c, 0x8d75cu); x86_call_known(c, 0x8cbd0u, f_0008cbd0); X86_RET(c, 0x8d75cu);
    X86_TICK(c, 12);
    // 08d75c  push dword ptr [edi + 0x2d]
    X86_AT(c, 0x8d75cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Du))); push32(c, v); }
    // 08d75f  call 0x8c4d4
    X86_AT(c, 0x8d75fu);
    push32(c, 0x8d764u); x86_call_known(c, 0x8c4d4u, f_0008c4d4); X86_RET(c, 0x8d764u);
    X86_TICK(c, 51);
    // 08d764  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d764u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d767  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0x8d767u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 08d76a  sub eax, 2
    X86_AT(c, 0x8d76au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 08d76d  push eax
    X86_AT(c, 0x8d76du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d76e  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d76eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d771  add eax, dword ptr [edi + 9]
    X86_AT(c, 0x8d771u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 08d774  sub eax, 2
    X86_AT(c, 0x8d774u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 08d777  push eax
    X86_AT(c, 0x8d777u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d778  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d778u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d77b  inc eax
    X86_AT(c, 0x8d77bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 08d77c  push eax
    X86_AT(c, 0x8d77cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d77d  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d77du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d780  inc eax
    X86_AT(c, 0x8d780u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 08d781  push eax
    X86_AT(c, 0x8d781u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d782  call 0x8cb6c
    X86_AT(c, 0x8d782u);
    push32(c, 0x8d787u); x86_call_known(c, 0x8cb6cu, f_0008cb6c); X86_RET(c, 0x8d787u);
    X86_TICK(c, 39);
    // 08d787  push dword ptr [edi + 5]
    X86_AT(c, 0x8d787u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))); push32(c, v); }
    // 08d78a  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d78au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d78d  add eax, dword ptr [edi + 9]
    X86_AT(c, 0x8d78du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 08d790  sub eax, 3
    X86_AT(c, 0x8d790u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 08d793  push eax
    X86_AT(c, 0x8d793u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d794  push dword ptr [edi + 5]
    X86_AT(c, 0x8d794u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))); push32(c, v); }
    // 08d797  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d797u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d79a  add eax, 2
    X86_AT(c, 0x8d79au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 08d79d  push eax
    X86_AT(c, 0x8d79du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d79e  call 0x8ca4c
    X86_AT(c, 0x8d79eu);
    push32(c, 0x8d7a3u); x86_call_known(c, 0x8ca4cu, f_0008ca4c); X86_RET(c, 0x8d7a3u);
    X86_TICK(c, 45);
    // 08d7a3  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d7a3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d7a6  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0x8d7a6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 08d7a9  sub eax, 3
    X86_AT(c, 0x8d7a9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 08d7ac  push eax
    X86_AT(c, 0x8d7acu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d7ad  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d7adu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d7b0  add eax, dword ptr [edi + 9]
    X86_AT(c, 0x8d7b0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 08d7b3  dec eax
    X86_AT(c, 0x8d7b3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d7b4  push eax
    X86_AT(c, 0x8d7b4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d7b5  mov edx, dword ptr [edi + 5]
    X86_AT(c, 0x8d7b5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d7b8  add edx, 2
    X86_AT(c, 0x8d7b8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x2u, 0, 4); }
    // 08d7bb  push edx
    X86_AT(c, 0x8d7bbu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08d7bc  push eax
    X86_AT(c, 0x8d7bcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d7bd  call 0x8ca4c
    X86_AT(c, 0x8d7bdu);
    push32(c, 0x8d7c2u); x86_call_known(c, 0x8ca4cu, f_0008ca4c); X86_RET(c, 0x8d7c2u);
    X86_TICK(c, 47);
    // 08d7c2  add esp, 0x48
    X86_AT(c, 0x8d7c2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 08d7c5  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d7c5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d7c8  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0x8d7c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 08d7cb  dec eax
    X86_AT(c, 0x8d7cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d7cc  push eax
    X86_AT(c, 0x8d7ccu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d7cd  mov edx, dword ptr [edi + 1]
    X86_AT(c, 0x8d7cdu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d7d0  add edx, dword ptr [edi + 9]
    X86_AT(c, 0x8d7d0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 08d7d3  sub edx, 3
    X86_AT(c, 0x8d7d3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x3u, 0, 4); }
    // 08d7d6  push edx
    X86_AT(c, 0x8d7d6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08d7d7  push eax
    X86_AT(c, 0x8d7d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d7d8  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d7d8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d7db  add eax, 2
    X86_AT(c, 0x8d7dbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 08d7de  push eax
    X86_AT(c, 0x8d7deu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d7df  call 0x8ca4c
    X86_AT(c, 0x8d7dfu);
    push32(c, 0x8d7e4u); x86_call_known(c, 0x8ca4cu, f_0008ca4c); X86_RET(c, 0x8d7e4u);
    X86_TICK(c, 41);
    // 08d7e4  add esp, 0x10
    X86_AT(c, 0x8d7e4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d7e7  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d7e7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d7ea  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0x8d7eau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 08d7ed  sub eax, 3
    X86_AT(c, 0x8d7edu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 08d7f0  push eax
    X86_AT(c, 0x8d7f0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d7f1  push dword ptr [edi + 1]
    X86_AT(c, 0x8d7f1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))); push32(c, v); }
    // 08d7f4  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d7f4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d7f7  add eax, 2
    X86_AT(c, 0x8d7f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 08d7fa  push eax
    X86_AT(c, 0x8d7fau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d7fb  push dword ptr [edi + 1]
    X86_AT(c, 0x8d7fbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))); push32(c, v); }
    // 08d7fe  call 0x8ca4c
    X86_AT(c, 0x8d7feu);
    push32(c, 0x8d803u); x86_call_known(c, 0x8ca4cu, f_0008ca4c); X86_RET(c, 0x8d803u);
    X86_TICK(c, 24);
    // 08d803  mov byte ptr [edi], 0
    X86_AT(c, 0x8d803u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 08d806  add esp, 0x10
    X86_AT(c, 0x8d806u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d809  pop edi
    X86_AT(c, 0x8d809u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d80a  leave 
    X86_AT(c, 0x8d80au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d80b  ret 
    X86_AT(c, 0x8d80bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d720u, "ran off the end of a function");
}
void f_0008d80c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08d80c  push ebp
    X86_AT(c, 0x8d80cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d80d  mov ebp, esp
    X86_AT(c, 0x8d80du);
    c.r[5] = c.r[4];
    // 08d80f  sub esp, 0x40
    X86_AT(c, 0x8d80fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x40u, 0, 4); }
    // 08d812  push ebx
    X86_AT(c, 0x8d812u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d813  push edi
    X86_AT(c, 0x8d813u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d814  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8d814u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08d817  push 9
    X86_AT(c, 0x8d817u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 08d819  call 0x8c644
    X86_AT(c, 0x8d819u);
    push32(c, 0x8d81eu); x86_call_known(c, 0x8c644u, f_0008c644); X86_RET(c, 0x8d81eu);
    X86_TICK(c, 32);
    // 08d81e  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0x8d81eu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08d822  mov word ptr [ebp - 0x40], ax
    X86_AT(c, 0x8d822u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC0u)), (c.r[0] & 0xFFFFu));
    // 08d826  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0x8d826u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08d82a  mov word ptr [ebp - 0x3e], ax
    X86_AT(c, 0x8d82au);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC2u)), (c.r[0] & 0xFFFFu));
    // 08d82e  mov edx, 0xffff
    X86_AT(c, 0x8d82eu);
    c.r[2] = 0xFFFFu;
    // 08d833  sub eax, eax
    X86_AT(c, 0x8d833u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08d835  push edi
    X86_AT(c, 0x8d835u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d836  mov ecx, edx
    X86_AT(c, 0x8d836u);
    c.r[1] = c.r[2];
    // 08d838  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x8d838u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 08d83a  jne 0x8d83f
    X86_AT(c, 0x8d83au);
    if (x86_cc(c, 5)) { goto L_8d83f; }
    X86_TICK(c, 4);
    // 08d83c  inc ecx
    X86_AT(c, 0x8d83cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 08d83d  sub edx, ecx
    X86_AT(c, 0x8d83du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_8d83f:
    X86_TICK(c, 19);
    // 08d83f  pop edi
    X86_AT(c, 0x8d83fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d840  mov word ptr [ebp - 0x3c], dx
    X86_AT(c, 0x8d840u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC4u)), (c.r[2] & 0xFFFFu));
    // 08d844  push edi
    X86_AT(c, 0x8d844u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d845  lea eax, [ebp - 0x3a]
    X86_AT(c, 0x8d845u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC6u);
    // 08d848  push eax
    X86_AT(c, 0x8d848u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d849  call 0x93314
    X86_AT(c, 0x8d849u);
    push32(c, 0x8d84eu); x86_call_known(c, 0x93314u, f_00093314); X86_RET(c, 0x8d84eu);
    X86_TICK(c, 15);
    // 08d84e  lea ebx, [ebp - 0x40]
    X86_AT(c, 0x8d84eu);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFC0u);
    // 08d851  push ebx
    X86_AT(c, 0x8d851u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d852  push 1
    X86_AT(c, 0x8d852u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08d854  push 0x34780
    X86_AT(c, 0x8d854u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08d859  call 0xa45
    X86_AT(c, 0x8d859u);
    push32(c, 0x8d85eu); x86_call_known(c, 0xa45u, f_00000a45); X86_RET(c, 0x8d85eu);
    X86_TICK(c, 15);
    // 08d85e  movsx eax, word ptr [0x34e84]
    X86_AT(c, 0x8d85eu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34E84u)));
    // 08d865  push eax
    X86_AT(c, 0x8d865u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d866  call 0x8c644
    X86_AT(c, 0x8d866u);
    push32(c, 0x8d86bu); x86_call_known(c, 0x8c644u, f_0008c644); X86_RET(c, 0x8d86bu);
    X86_TICK(c, 26);
    // 08d86b  add esp, 0x1c
    X86_AT(c, 0x8d86bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 08d86e  pop edi
    X86_AT(c, 0x8d86eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d86f  pop ebx
    X86_AT(c, 0x8d86fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08d870  leave 
    X86_AT(c, 0x8d870u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d871  ret 
    X86_AT(c, 0x8d871u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d80cu, "ran off the end of a function");
}
void f_0008d874(X86Cpu& c) {
    X86_TICK(c, 74);
    // 08d874  push ebp
    X86_AT(c, 0x8d874u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d875  mov ebp, esp
    X86_AT(c, 0x8d875u);
    c.r[5] = c.r[4];
    // 08d877  push edi
    X86_AT(c, 0x8d877u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d878  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8d878u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08d87b  lea eax, [eax + eax*2]
    X86_AT(c, 0x8d87bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 08d87e  lea edx, [eax + eax*8]
    X86_AT(c, 0x8d87eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 08d881  lea edx, [eax + edx*2]
    X86_AT(c, 0x8d881u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 08d884  lea edi, [edx + 0x34e8c]
    X86_AT(c, 0x8d884u);
    c.r[7] = (uint32_t)(c.r[2] + 0x34E8Cu);
    // 08d88a  push dword ptr [edi + 0x31]
    X86_AT(c, 0x8d88au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
    // 08d88d  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d88du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d890  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0x8d890u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 08d893  sub eax, 3
    X86_AT(c, 0x8d893u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 08d896  push eax
    X86_AT(c, 0x8d896u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d897  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d897u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d89a  add eax, dword ptr [edi + 9]
    X86_AT(c, 0x8d89au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 08d89d  sub eax, 3
    X86_AT(c, 0x8d89du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 08d8a0  push eax
    X86_AT(c, 0x8d8a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d8a1  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d8a1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d8a4  add eax, 2
    X86_AT(c, 0x8d8a4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 08d8a7  push eax
    X86_AT(c, 0x8d8a7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d8a8  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d8a8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d8ab  add eax, 2
    X86_AT(c, 0x8d8abu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 08d8ae  push eax
    X86_AT(c, 0x8d8aeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d8af  call 0x8cbd0
    X86_AT(c, 0x8d8afu);
    push32(c, 0x8d8b4u); x86_call_known(c, 0x8cbd0u, f_0008cbd0); X86_RET(c, 0x8d8b4u);
    X86_TICK(c, 12);
    // 08d8b4  push dword ptr [edi + 0x25]
    X86_AT(c, 0x8d8b4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x25u))); push32(c, v); }
    // 08d8b7  call 0x8c4d4
    X86_AT(c, 0x8d8b7u);
    push32(c, 0x8d8bcu); x86_call_known(c, 0x8c4d4u, f_0008c4d4); X86_RET(c, 0x8d8bcu);
    X86_TICK(c, 12);
    // 08d8bc  push dword ptr [edi + 0x31]
    X86_AT(c, 0x8d8bcu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
    // 08d8bf  call 0x8c504
    X86_AT(c, 0x8d8bfu);
    push32(c, 0x8d8c4u); x86_call_known(c, 0x8c504u, f_0008c504); X86_RET(c, 0x8d8c4u);
    X86_TICK(c, 14);
    // 08d8c4  add esp, 0x1c
    X86_AT(c, 0x8d8c4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 08d8c7  cmp dword ptr [edi + 0x35], 0
    X86_AT(c, 0x8d8c7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x35u))), 0x0u, 0, 4);
    // 08d8cb  jne 0x8d8d1
    X86_AT(c, 0x8d8cbu);
    if (x86_cc(c, 5)) { goto L_8d8d1; }
    X86_TICK(c, 9);
    // 08d8cd  push 0xb
    X86_AT(c, 0x8d8cdu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 08d8cf  jmp 0x8d8d4
    X86_AT(c, 0x8d8cfu);
    goto L_8d8d4;
L_8d8d1:
    X86_TICK(c, 5);
    // 08d8d1  push dword ptr [edi + 0x31]
    X86_AT(c, 0x8d8d1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
L_8d8d4:
    X86_TICK(c, 7);
    // 08d8d4  call 0x8c4ec
    X86_AT(c, 0x8d8d4u);
    push32(c, 0x8d8d9u); x86_call_known(c, 0x8c4ecu, f_0008c4ec); X86_RET(c, 0x8d8d9u);
    X86_TICK(c, 19);
    // 08d8d9  add esp, 4
    X86_AT(c, 0x8d8d9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08d8dc  movsx eax, word ptr [0x34e86]
    X86_AT(c, 0x8d8dcu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34E86u)));
    // 08d8e3  push eax
    X86_AT(c, 0x8d8e3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d8e4  push 0x34780
    X86_AT(c, 0x8d8e4u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08d8e9  call 0x245
    X86_AT(c, 0x8d8e9u);
    push32(c, 0x8d8eeu); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8d8eeu);
    X86_TICK(c, 22);
    // 08d8ee  add esp, 8
    X86_AT(c, 0x8d8eeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08d8f1  pop edi
    X86_AT(c, 0x8d8f1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d8f2  leave 
    X86_AT(c, 0x8d8f2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d8f3  ret 
    X86_AT(c, 0x8d8f3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d874u, "ran off the end of a function");
}
void f_0008d94c(X86Cpu& c) {
    X86_TICK(c, 32);
    // 08d94c  push ebp
    X86_AT(c, 0x8d94cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d94d  mov ebp, esp
    X86_AT(c, 0x8d94du);
    c.r[5] = c.r[4];
    // 08d94f  push ebx
    X86_AT(c, 0x8d94fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d950  push edi
    X86_AT(c, 0x8d950u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d951  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8d951u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08d954  lea eax, [edi + edi*2]
    X86_AT(c, 0x8d954u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08d957  lea edx, [eax + eax*8]
    X86_AT(c, 0x8d957u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 08d95a  lea edx, [eax + edx*2]
    X86_AT(c, 0x8d95au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 08d95d  push dword ptr [edx + 0x34ebd]
    X86_AT(c, 0x8d95du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x34EBDu))); push32(c, v); }
    // 08d963  mov ebx, edx
    X86_AT(c, 0x8d963u);
    c.r[3] = c.r[2];
    // 08d965  call 0x8c4ec
    X86_AT(c, 0x8d965u);
    push32(c, 0x8d96au); x86_call_known(c, 0x8c4ecu, f_0008c4ec); X86_RET(c, 0x8d96au);
    X86_TICK(c, 61);
    // 08d96a  mov ax, word ptr [ebx + 0x34e8d]
    X86_AT(c, 0x8d96au);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x34E8Du))));
    // 08d971  add ax, 2
    X86_AT(c, 0x8d971u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 08d975  mov word ptr [0x34d80], ax
    X86_AT(c, 0x8d975u);
    wr16((c.sbase[3] + (uint32_t)(0x34D80u)), (c.r[0] & 0xFFFFu));
    // 08d97b  mov ax, word ptr [ebx + 0x34e91]
    X86_AT(c, 0x8d97bu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x34E91u))));
    // 08d982  add ax, 2
    X86_AT(c, 0x8d982u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 08d986  mov word ptr [0x34d82], ax
    X86_AT(c, 0x8d986u);
    wr16((c.sbase[3] + (uint32_t)(0x34D82u)), (c.r[0] & 0xFFFFu));
    // 08d98c  mov ax, word ptr [ebx + 0x34e8d]
    X86_AT(c, 0x8d98cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x34E8Du))));
    // 08d993  add ax, word ptr [ebx + 0x34e95]
    X86_AT(c, 0x8d993u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x34E95u))), 0, 2)); }
    // 08d99a  sub ax, 3
    X86_AT(c, 0x8d99au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3u, 0, 2)); }
    // 08d99e  mov word ptr [0x34d84], ax
    X86_AT(c, 0x8d99eu);
    wr16((c.sbase[3] + (uint32_t)(0x34D84u)), (c.r[0] & 0xFFFFu));
    // 08d9a4  mov ax, word ptr [ebx + 0x34e91]
    X86_AT(c, 0x8d9a4u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x34E91u))));
    // 08d9ab  add ax, word ptr [ebx + 0x34e99]
    X86_AT(c, 0x8d9abu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x34E99u))), 0, 2)); }
    // 08d9b2  sub ax, 3
    X86_AT(c, 0x8d9b2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3u, 0, 2)); }
    // 08d9b6  mov word ptr [0x34d86], ax
    X86_AT(c, 0x8d9b6u);
    wr16((c.sbase[3] + (uint32_t)(0x34D86u)), (c.r[0] & 0xFFFFu));
    // 08d9bc  push 0x34d80
    X86_AT(c, 0x8d9bcu);
    { uint32_t v = 0x34D80u; push32(c, v); }
    // 08d9c1  push 0xfffffff0
    X86_AT(c, 0x8d9c1u);
    { uint32_t v = 0xFFFFFFF0u; push32(c, v); }
    // 08d9c3  push 0
    X86_AT(c, 0x8d9c3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08d9c5  push 1
    X86_AT(c, 0x8d9c5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08d9c7  push 0x34780
    X86_AT(c, 0x8d9c7u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08d9cc  call 0x636
    X86_AT(c, 0x8d9ccu);
    push32(c, 0x8d9d1u); x86_call_known(c, 0x636u, f_00000636); X86_RET(c, 0x8d9d1u);
    X86_TICK(c, 14);
    // 08d9d1  add esp, 0x18
    X86_AT(c, 0x8d9d1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 08d9d4  cmp dword ptr [ebx + 0x34ec1], 0
    X86_AT(c, 0x8d9d4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x34EC1u))), 0x0u, 0, 4);
    // 08d9db  jne 0x8d9e7
    X86_AT(c, 0x8d9dbu);
    if (x86_cc(c, 5)) { goto L_8d9e7; }
    X86_TICK(c, 9);
    // 08d9dd  push 0xb
    X86_AT(c, 0x8d9ddu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 08d9df  call 0x8c4ec
    X86_AT(c, 0x8d9dfu);
    push32(c, 0x8d9e4u); x86_call_known(c, 0x8c4ecu, f_0008c4ec); X86_RET(c, 0x8d9e4u);
    X86_TICK(c, 2);
    // 08d9e4  add esp, 4
    X86_AT(c, 0x8d9e4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8d9e7:
    X86_TICK(c, 24);
    // 08d9e7  pop edi
    X86_AT(c, 0x8d9e7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d9e8  pop ebx
    X86_AT(c, 0x8d9e8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08d9e9  leave 
    X86_AT(c, 0x8d9e9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d9ea  ret 
    X86_AT(c, 0x8d9eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d94cu, "ran off the end of a function");
}
void f_0008d9ec(X86Cpu& c) {
    X86_TICK(c, 33);
    // 08d9ec  push ebp
    X86_AT(c, 0x8d9ecu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d9ed  mov ebp, esp
    X86_AT(c, 0x8d9edu);
    c.r[5] = c.r[4];
    // 08d9ef  push edi
    X86_AT(c, 0x8d9efu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d9f0  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8d9f0u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08d9f3  lea eax, [edi + edi*2]
    X86_AT(c, 0x8d9f3u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08d9f6  lea edx, [eax + eax*8]
    X86_AT(c, 0x8d9f6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 08d9f9  lea edx, [eax + edx*2]
    X86_AT(c, 0x8d9f9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 08d9fc  mov dword ptr [edx + 0x34ea5], 0
    X86_AT(c, 0x8d9fcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x34EA5u)), 0x0u);
    // 08da06  mov eax, dword ptr [edx + 0x34ea9]
    X86_AT(c, 0x8da06u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x34EA9u)));
    // 08da0c  cmp eax, dword ptr [edx + 0x34ea1]
    X86_AT(c, 0x8da0cu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x34EA1u))), 0, 4);
    // 08da12  jne 0x8da1f
    X86_AT(c, 0x8da12u);
    if (x86_cc(c, 5)) { goto L_8da1f; }
    X86_TICK(c, 9);
    // 08da14  push edi
    X86_AT(c, 0x8da14u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08da15  call 0x8d94c
    X86_AT(c, 0x8da15u);
    push32(c, 0x8da1au); x86_call_known(c, 0x8d94cu, f_0008d94c); X86_RET(c, 0x8da1au);
    X86_TICK(c, 9);
    // 08da1a  add esp, 4
    X86_AT(c, 0x8da1au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08da1d  jmp 0x8da2e
    X86_AT(c, 0x8da1du);
    goto L_8da2e;
L_8da1f:
    X86_TICK(c, 12);
    // 08da1f  lea eax, [edi + edi*2]
    X86_AT(c, 0x8da1fu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08da22  lea edx, [eax + eax*8]
    X86_AT(c, 0x8da22u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 08da25  lea edx, [eax + edx*2]
    X86_AT(c, 0x8da25u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 08da28  inc dword ptr [edx + 0x34ea9]
    X86_AT(c, 0x8da28u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x34EA9u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_8da2e:
    X86_TICK(c, 20);
    // 08da2e  pop edi
    X86_AT(c, 0x8da2eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08da2f  leave 
    X86_AT(c, 0x8da2fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08da30  ret 
    X86_AT(c, 0x8da30u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d9ecu, "ran off the end of a function");
}
void f_0008da34(X86Cpu& c) {
    X86_TICK(c, 28);
    // 08da34  push ebp
    X86_AT(c, 0x8da34u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08da35  mov ebp, esp
    X86_AT(c, 0x8da35u);
    c.r[5] = c.r[4];
    // 08da37  sub esp, 0xc
    X86_AT(c, 0x8da37u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 08da3a  push ebx
    X86_AT(c, 0x8da3au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08da3b  push esi
    X86_AT(c, 0x8da3bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08da3c  push edi
    X86_AT(c, 0x8da3cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08da3d  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8da3du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08da40  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8da40u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08da43  lea eax, [eax + eax*2]
    X86_AT(c, 0x8da43u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 08da46  lea edx, [eax + eax*8]
    X86_AT(c, 0x8da46u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 08da49  lea edx, [eax + edx*2]
    X86_AT(c, 0x8da49u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 08da4c  lea ebx, [edx + 0x34e8c]
    X86_AT(c, 0x8da4cu);
    c.r[3] = (uint32_t)(c.r[2] + 0x34E8Cu);
L_8da52:
    X86_TICK(c, 12);
    // 08da52  cmp byte ptr [edi], 0
    X86_AT(c, 0x8da52u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 08da55  je 0x8dba4
    X86_AT(c, 0x8da55u);
    if (x86_cc(c, 4)) { goto L_8dba4; }
    X86_TICK(c, 52);
    // 08da5b  mov dword ptr [ebp - 0xc], 0x35332
    X86_AT(c, 0x8da5bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x35332u);
    // 08da62  mov ax, word ptr [ebx + 1]
    X86_AT(c, 0x8da62u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x1u))));
    // 08da66  add ax, 4
    X86_AT(c, 0x8da66u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x4u, 0, 2)); }
    // 08da6a  mov edx, dword ptr [ebx + 0x19]
    X86_AT(c, 0x8da6au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 08da6d  shl edx, 3
    X86_AT(c, 0x8da6du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 08da70  add edx, eax
    X86_AT(c, 0x8da70u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 08da72  mov word ptr [0x3532c], dx
    X86_AT(c, 0x8da72u);
    wr16((c.sbase[3] + (uint32_t)(0x3532Cu)), (c.r[2] & 0xFFFFu));
    // 08da79  mov ax, word ptr [ebx + 5]
    X86_AT(c, 0x8da79u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x5u))));
    // 08da7d  add ax, 0x11
    X86_AT(c, 0x8da7du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 08da81  mov edx, dword ptr [ebx + 0x1d]
    X86_AT(c, 0x8da81u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 08da84  shl edx, 4
    X86_AT(c, 0x8da84u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 08da87  add edx, eax
    X86_AT(c, 0x8da87u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 08da89  mov word ptr [0x3532e], dx
    X86_AT(c, 0x8da89u);
    wr16((c.sbase[3] + (uint32_t)(0x3532Eu)), (c.r[2] & 0xFFFFu));
    // 08da90  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x8da90u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 08da97  mov esi, dword ptr [ebx + 0x11]
    X86_AT(c, 0x8da97u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x11u)));
    // 08da9a  sub esi, dword ptr [ebx + 0x19]
    X86_AT(c, 0x8da9au);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u))), 0, 4); }
    // 08da9d  inc esi
    X86_AT(c, 0x8da9du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08da9e  mov dword ptr [ebp - 8], esi
    X86_AT(c, 0x8da9eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[6]);
L_8daa1:
    X86_TICK(c, 7);
    // 08daa1  and esi, esi
    X86_AT(c, 0x8daa1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 08daa3  jle 0x8db37
    X86_AT(c, 0x8daa3u);
    if (x86_cc(c, 14)) { goto L_8db37; }
    X86_TICK(c, 17);
    // 08daa9  mov al, byte ptr [edi]
    X86_AT(c, 0x8daa9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08daab  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0x8daabu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 08daae  mov byte ptr [edx], al
    X86_AT(c, 0x8daaeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 08dab0  cmp esi, 1
    X86_AT(c, 0x8dab0u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 08dab3  jne 0x8db14
    X86_AT(c, 0x8dab3u);
    if (x86_cc(c, 5)) { goto L_8db14; }
    X86_TICK(c, 11);
    // 08dab9  mov al, byte ptr [edi]
    X86_AT(c, 0x8dab9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08dabb  cmp al, 0x81
    X86_AT(c, 0x8dabbu);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 08dabd  jb 0x8dac3
    X86_AT(c, 0x8dabdu);
    if (x86_cc(c, 2)) { goto L_8dac3; }
    X86_TICK(c, 7);
    // 08dabf  cmp al, 0x9f
    X86_AT(c, 0x8dabfu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 08dac1  jbe 0x8dad1
    X86_AT(c, 0x8dac1u);
    if (x86_cc(c, 6)) { goto L_8dad1; }
L_8dac3:
    X86_TICK(c, 11);
    // 08dac3  mov al, byte ptr [edi]
    X86_AT(c, 0x8dac3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08dac5  cmp al, 0xe0
    X86_AT(c, 0x8dac5u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 08dac7  jb 0x8db14
    X86_AT(c, 0x8dac7u);
    if (x86_cc(c, 2)) { goto L_8db14; }
    X86_TICK(c, 7);
    // 08dacd  cmp al, 0xfc
    X86_AT(c, 0x8dacdu);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 08dacf  ja 0x8db14
    X86_AT(c, 0x8dacfu);
    if (x86_cc(c, 7)) { goto L_8db14; }
L_8dad1:
    X86_TICK(c, 11);
    // 08dad1  mov al, byte ptr [edi + 1]
    X86_AT(c, 0x8dad1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 08dad4  cmp al, 0x40
    X86_AT(c, 0x8dad4u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 08dad6  jb 0x8dadc
    X86_AT(c, 0x8dad6u);
    if (x86_cc(c, 2)) { goto L_8dadc; }
    X86_TICK(c, 7);
    // 08dad8  cmp al, 0x7e
    X86_AT(c, 0x8dad8u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 08dada  jbe 0x8dae7
    X86_AT(c, 0x8dadau);
    if (x86_cc(c, 6)) { goto L_8dae7; }
L_8dadc:
    X86_TICK(c, 11);
    // 08dadc  mov al, byte ptr [edi + 1]
    X86_AT(c, 0x8dadcu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 08dadf  cmp al, 0x80
    X86_AT(c, 0x8dadfu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 08dae1  jb 0x8db14
    X86_AT(c, 0x8dae1u);
    if (x86_cc(c, 2)) { goto L_8db14; }
    X86_TICK(c, 7);
    // 08dae3  cmp al, 0xfc
    X86_AT(c, 0x8dae3u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 08dae5  ja 0x8db14
    X86_AT(c, 0x8dae5u);
    if (x86_cc(c, 7)) { goto L_8db14; }
L_8dae7:
    X86_TICK(c, 11);
    // 08dae7  mov al, byte ptr [edi - 1]
    X86_AT(c, 0x8dae7u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 08daea  cmp al, 0x81
    X86_AT(c, 0x8daeau);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 08daec  jb 0x8daf2
    X86_AT(c, 0x8daecu);
    if (x86_cc(c, 2)) { goto L_8daf2; }
    X86_TICK(c, 7);
    // 08daee  cmp al, 0x9f
    X86_AT(c, 0x8daeeu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 08daf0  jbe 0x8dafd
    X86_AT(c, 0x8daf0u);
    if (x86_cc(c, 6)) { goto L_8dafd; }
L_8daf2:
    X86_TICK(c, 11);
    // 08daf2  mov al, byte ptr [edi - 1]
    X86_AT(c, 0x8daf2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 08daf5  cmp al, 0xe0
    X86_AT(c, 0x8daf5u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 08daf7  jb 0x8db37
    X86_AT(c, 0x8daf7u);
    if (x86_cc(c, 2)) { goto L_8db37; }
    X86_TICK(c, 7);
    // 08daf9  cmp al, 0xfc
    X86_AT(c, 0x8daf9u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 08dafb  ja 0x8db37
    X86_AT(c, 0x8dafbu);
    if (x86_cc(c, 7)) { goto L_8db37; }
L_8dafd:
    X86_TICK(c, 11);
    // 08dafd  mov al, byte ptr [edi]
    X86_AT(c, 0x8dafdu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08daff  cmp al, 0x40
    X86_AT(c, 0x8daffu);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 08db01  jb 0x8db07
    X86_AT(c, 0x8db01u);
    if (x86_cc(c, 2)) { goto L_8db07; }
    X86_TICK(c, 7);
    // 08db03  cmp al, 0x7e
    X86_AT(c, 0x8db03u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 08db05  jbe 0x8db11
    X86_AT(c, 0x8db05u);
    if (x86_cc(c, 6)) { goto L_8db11; }
L_8db07:
    X86_TICK(c, 11);
    // 08db07  mov al, byte ptr [edi]
    X86_AT(c, 0x8db07u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08db09  cmp al, 0x80
    X86_AT(c, 0x8db09u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 08db0b  jb 0x8db37
    X86_AT(c, 0x8db0bu);
    if (x86_cc(c, 2)) { goto L_8db37; }
    X86_TICK(c, 7);
    // 08db0d  cmp al, 0xfc
    X86_AT(c, 0x8db0du);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 08db0f  ja 0x8db37
    X86_AT(c, 0x8db0fu);
    if (x86_cc(c, 7)) { goto L_8db37; }
L_8db11:
    X86_TICK(c, 9);
    // 08db11  inc edi
    X86_AT(c, 0x8db11u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08db12  jmp 0x8db37
    X86_AT(c, 0x8db12u);
    goto L_8db37;
L_8db14:
    X86_TICK(c, 12);
    // 08db14  cmp byte ptr [edi], 0xa
    X86_AT(c, 0x8db14u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xAu, 0, 1);
    // 08db17  jne 0x8db1f
    X86_AT(c, 0x8db17u);
    if (x86_cc(c, 5)) { goto L_8db1f; }
    X86_TICK(c, 15);
    // 08db19  inc edi
    X86_AT(c, 0x8db19u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08db1a  dec dword ptr [ebp - 0xc]
    X86_AT(c, 0x8db1au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 08db1d  jmp 0x8db37
    X86_AT(c, 0x8db1du);
    goto L_8db37;
L_8db1f:
    X86_TICK(c, 12);
    // 08db1f  cmp byte ptr [edi], 0
    X86_AT(c, 0x8db1fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 08db22  jne 0x8db2d
    X86_AT(c, 0x8db22u);
    if (x86_cc(c, 5)) { goto L_8db2d; }
    X86_TICK(c, 9);
    // 08db24  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0x8db24u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 08db2b  jmp 0x8db37
    X86_AT(c, 0x8db2bu);
    goto L_8db37;
L_8db2d:
    X86_TICK(c, 17);
    // 08db2d  dec esi
    X86_AT(c, 0x8db2du);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 08db2e  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0x8db2eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 08db31  inc edi
    X86_AT(c, 0x8db31u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08db32  jmp 0x8daa1
    X86_AT(c, 0x8db32u);
    X86_POLL(c, 0x8daa1u); goto L_8daa1;
L_8db37:
    X86_TICK(c, 33);
    // 08db37  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0x8db37u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 08db3a  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0x8db3au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 08db3d  mov byte ptr [eax], 0
    X86_AT(c, 0x8db3du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
    // 08db40  mov eax, esi
    X86_AT(c, 0x8db40u);
    c.r[0] = c.r[6];
    // 08db42  mov dx, word ptr [ebp - 8]
    X86_AT(c, 0x8db42u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 08db46  sub edx, eax
    X86_AT(c, 0x8db46u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08db48  mov word ptr [0x35330], dx
    X86_AT(c, 0x8db48u);
    wr16((c.sbase[3] + (uint32_t)(0x35330u)), (c.r[2] & 0xFFFFu));
    // 08db4f  push 0x3532c
    X86_AT(c, 0x8db4fu);
    { uint32_t v = 0x3532Cu; push32(c, v); }
    // 08db54  push 0x34780
    X86_AT(c, 0x8db54u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08db59  call 0x9fd
    X86_AT(c, 0x8db59u);
    push32(c, 0x8db5eu); x86_call_known(c, 0x9fdu, f_000009fd); X86_RET(c, 0x8db5eu);
    X86_TICK(c, 28);
    // 08db5e  mov eax, dword ptr [ebx + 0x19]
    X86_AT(c, 0x8db5eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 08db61  add eax, dword ptr [ebp - 8]
    X86_AT(c, 0x8db61u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 08db64  sub eax, esi
    X86_AT(c, 0x8db64u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 08db66  mov dword ptr [ebx + 0x19], eax
    X86_AT(c, 0x8db66u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), c.r[0]);
    // 08db69  add esp, 8
    X86_AT(c, 0x8db69u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08db6c  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x8db6cu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 08db70  jne 0x8da52
    X86_AT(c, 0x8db70u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8da52u); goto L_8da52; }
    X86_TICK(c, 15);
    // 08db76  mov eax, dword ptr [ebx + 0x1d]
    X86_AT(c, 0x8db76u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 08db79  cmp eax, dword ptr [ebx + 0x15]
    X86_AT(c, 0x8db79u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x15u))), 0, 4);
    // 08db7c  jne 0x8db95
    X86_AT(c, 0x8db7cu);
    if (x86_cc(c, 5)) { goto L_8db95; }
    X86_TICK(c, 12);
    // 08db7e  push dword ptr [ebp + 8]
    X86_AT(c, 0x8db7eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08db81  call 0x8d94c
    X86_AT(c, 0x8db81u);
    push32(c, 0x8db86u); x86_call_known(c, 0x8d94cu, f_0008d94c); X86_RET(c, 0x8db86u);
    X86_TICK(c, 11);
    // 08db86  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0x8db86u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 08db8d  add esp, 4
    X86_AT(c, 0x8db8du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08db90  jmp 0x8da52
    X86_AT(c, 0x8db90u);
    X86_POLL(c, 0x8da52u); goto L_8da52;
L_8db95:
    X86_TICK(c, 15);
    // 08db95  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0x8db95u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 08db9c  inc dword ptr [ebx + 0x1d]
    X86_AT(c, 0x8db9cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 08db9f  jmp 0x8da52
    X86_AT(c, 0x8db9fu);
    X86_POLL(c, 0x8da52u); goto L_8da52;
L_8dba4:
    X86_TICK(c, 28);
    // 08dba4  pop edi
    X86_AT(c, 0x8dba4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08dba5  pop esi
    X86_AT(c, 0x8dba5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08dba6  pop ebx
    X86_AT(c, 0x8dba6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08dba7  leave 
    X86_AT(c, 0x8dba7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08dba8  ret 
    X86_AT(c, 0x8dba8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8da34u, "ran off the end of a function");
}
void f_0008da52(X86Cpu& c) {
L_8da52:
    X86_TICK(c, 12);
    // 08da52  cmp byte ptr [edi], 0
    X86_AT(c, 0x8da52u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 08da55  je 0x8dba4
    X86_AT(c, 0x8da55u);
    if (x86_cc(c, 4)) { goto L_8dba4; }
    X86_TICK(c, 52);
    // 08da5b  mov dword ptr [ebp - 0xc], 0x35332
    X86_AT(c, 0x8da5bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x35332u);
    // 08da62  mov ax, word ptr [ebx + 1]
    X86_AT(c, 0x8da62u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x1u))));
    // 08da66  add ax, 4
    X86_AT(c, 0x8da66u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x4u, 0, 2)); }
    // 08da6a  mov edx, dword ptr [ebx + 0x19]
    X86_AT(c, 0x8da6au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 08da6d  shl edx, 3
    X86_AT(c, 0x8da6du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 08da70  add edx, eax
    X86_AT(c, 0x8da70u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 08da72  mov word ptr [0x3532c], dx
    X86_AT(c, 0x8da72u);
    wr16((c.sbase[3] + (uint32_t)(0x3532Cu)), (c.r[2] & 0xFFFFu));
    // 08da79  mov ax, word ptr [ebx + 5]
    X86_AT(c, 0x8da79u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x5u))));
    // 08da7d  add ax, 0x11
    X86_AT(c, 0x8da7du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 08da81  mov edx, dword ptr [ebx + 0x1d]
    X86_AT(c, 0x8da81u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 08da84  shl edx, 4
    X86_AT(c, 0x8da84u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 08da87  add edx, eax
    X86_AT(c, 0x8da87u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 08da89  mov word ptr [0x3532e], dx
    X86_AT(c, 0x8da89u);
    wr16((c.sbase[3] + (uint32_t)(0x3532Eu)), (c.r[2] & 0xFFFFu));
    // 08da90  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x8da90u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 08da97  mov esi, dword ptr [ebx + 0x11]
    X86_AT(c, 0x8da97u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x11u)));
    // 08da9a  sub esi, dword ptr [ebx + 0x19]
    X86_AT(c, 0x8da9au);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u))), 0, 4); }
    // 08da9d  inc esi
    X86_AT(c, 0x8da9du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08da9e  mov dword ptr [ebp - 8], esi
    X86_AT(c, 0x8da9eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[6]);
L_8daa1:
    X86_TICK(c, 7);
    // 08daa1  and esi, esi
    X86_AT(c, 0x8daa1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 08daa3  jle 0x8db37
    X86_AT(c, 0x8daa3u);
    if (x86_cc(c, 14)) { goto L_8db37; }
    X86_TICK(c, 17);
    // 08daa9  mov al, byte ptr [edi]
    X86_AT(c, 0x8daa9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08daab  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0x8daabu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 08daae  mov byte ptr [edx], al
    X86_AT(c, 0x8daaeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 08dab0  cmp esi, 1
    X86_AT(c, 0x8dab0u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 08dab3  jne 0x8db14
    X86_AT(c, 0x8dab3u);
    if (x86_cc(c, 5)) { goto L_8db14; }
    X86_TICK(c, 11);
    // 08dab9  mov al, byte ptr [edi]
    X86_AT(c, 0x8dab9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08dabb  cmp al, 0x81
    X86_AT(c, 0x8dabbu);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 08dabd  jb 0x8dac3
    X86_AT(c, 0x8dabdu);
    if (x86_cc(c, 2)) { goto L_8dac3; }
    X86_TICK(c, 7);
    // 08dabf  cmp al, 0x9f
    X86_AT(c, 0x8dabfu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 08dac1  jbe 0x8dad1
    X86_AT(c, 0x8dac1u);
    if (x86_cc(c, 6)) { goto L_8dad1; }
L_8dac3:
    X86_TICK(c, 11);
    // 08dac3  mov al, byte ptr [edi]
    X86_AT(c, 0x8dac3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08dac5  cmp al, 0xe0
    X86_AT(c, 0x8dac5u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 08dac7  jb 0x8db14
    X86_AT(c, 0x8dac7u);
    if (x86_cc(c, 2)) { goto L_8db14; }
    X86_TICK(c, 7);
    // 08dacd  cmp al, 0xfc
    X86_AT(c, 0x8dacdu);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 08dacf  ja 0x8db14
    X86_AT(c, 0x8dacfu);
    if (x86_cc(c, 7)) { goto L_8db14; }
L_8dad1:
    X86_TICK(c, 11);
    // 08dad1  mov al, byte ptr [edi + 1]
    X86_AT(c, 0x8dad1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 08dad4  cmp al, 0x40
    X86_AT(c, 0x8dad4u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 08dad6  jb 0x8dadc
    X86_AT(c, 0x8dad6u);
    if (x86_cc(c, 2)) { goto L_8dadc; }
    X86_TICK(c, 7);
    // 08dad8  cmp al, 0x7e
    X86_AT(c, 0x8dad8u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 08dada  jbe 0x8dae7
    X86_AT(c, 0x8dadau);
    if (x86_cc(c, 6)) { goto L_8dae7; }
L_8dadc:
    X86_TICK(c, 11);
    // 08dadc  mov al, byte ptr [edi + 1]
    X86_AT(c, 0x8dadcu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 08dadf  cmp al, 0x80
    X86_AT(c, 0x8dadfu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 08dae1  jb 0x8db14
    X86_AT(c, 0x8dae1u);
    if (x86_cc(c, 2)) { goto L_8db14; }
    X86_TICK(c, 7);
    // 08dae3  cmp al, 0xfc
    X86_AT(c, 0x8dae3u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 08dae5  ja 0x8db14
    X86_AT(c, 0x8dae5u);
    if (x86_cc(c, 7)) { goto L_8db14; }
L_8dae7:
    X86_TICK(c, 11);
    // 08dae7  mov al, byte ptr [edi - 1]
    X86_AT(c, 0x8dae7u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 08daea  cmp al, 0x81
    X86_AT(c, 0x8daeau);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 08daec  jb 0x8daf2
    X86_AT(c, 0x8daecu);
    if (x86_cc(c, 2)) { goto L_8daf2; }
    X86_TICK(c, 7);
    // 08daee  cmp al, 0x9f
    X86_AT(c, 0x8daeeu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 08daf0  jbe 0x8dafd
    X86_AT(c, 0x8daf0u);
    if (x86_cc(c, 6)) { goto L_8dafd; }
L_8daf2:
    X86_TICK(c, 11);
    // 08daf2  mov al, byte ptr [edi - 1]
    X86_AT(c, 0x8daf2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 08daf5  cmp al, 0xe0
    X86_AT(c, 0x8daf5u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 08daf7  jb 0x8db37
    X86_AT(c, 0x8daf7u);
    if (x86_cc(c, 2)) { goto L_8db37; }
    X86_TICK(c, 7);
    // 08daf9  cmp al, 0xfc
    X86_AT(c, 0x8daf9u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 08dafb  ja 0x8db37
    X86_AT(c, 0x8dafbu);
    if (x86_cc(c, 7)) { goto L_8db37; }
L_8dafd:
    X86_TICK(c, 11);
    // 08dafd  mov al, byte ptr [edi]
    X86_AT(c, 0x8dafdu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08daff  cmp al, 0x40
    X86_AT(c, 0x8daffu);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 08db01  jb 0x8db07
    X86_AT(c, 0x8db01u);
    if (x86_cc(c, 2)) { goto L_8db07; }
    X86_TICK(c, 7);
    // 08db03  cmp al, 0x7e
    X86_AT(c, 0x8db03u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 08db05  jbe 0x8db11
    X86_AT(c, 0x8db05u);
    if (x86_cc(c, 6)) { goto L_8db11; }
L_8db07:
    X86_TICK(c, 11);
    // 08db07  mov al, byte ptr [edi]
    X86_AT(c, 0x8db07u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08db09  cmp al, 0x80
    X86_AT(c, 0x8db09u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 08db0b  jb 0x8db37
    X86_AT(c, 0x8db0bu);
    if (x86_cc(c, 2)) { goto L_8db37; }
    X86_TICK(c, 7);
    // 08db0d  cmp al, 0xfc
    X86_AT(c, 0x8db0du);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 08db0f  ja 0x8db37
    X86_AT(c, 0x8db0fu);
    if (x86_cc(c, 7)) { goto L_8db37; }
L_8db11:
    X86_TICK(c, 9);
    // 08db11  inc edi
    X86_AT(c, 0x8db11u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08db12  jmp 0x8db37
    X86_AT(c, 0x8db12u);
    goto L_8db37;
L_8db14:
    X86_TICK(c, 12);
    // 08db14  cmp byte ptr [edi], 0xa
    X86_AT(c, 0x8db14u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xAu, 0, 1);
    // 08db17  jne 0x8db1f
    X86_AT(c, 0x8db17u);
    if (x86_cc(c, 5)) { goto L_8db1f; }
    X86_TICK(c, 15);
    // 08db19  inc edi
    X86_AT(c, 0x8db19u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08db1a  dec dword ptr [ebp - 0xc]
    X86_AT(c, 0x8db1au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 08db1d  jmp 0x8db37
    X86_AT(c, 0x8db1du);
    goto L_8db37;
L_8db1f:
    X86_TICK(c, 12);
    // 08db1f  cmp byte ptr [edi], 0
    X86_AT(c, 0x8db1fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 08db22  jne 0x8db2d
    X86_AT(c, 0x8db22u);
    if (x86_cc(c, 5)) { goto L_8db2d; }
    X86_TICK(c, 9);
    // 08db24  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0x8db24u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 08db2b  jmp 0x8db37
    X86_AT(c, 0x8db2bu);
    goto L_8db37;
L_8db2d:
    X86_TICK(c, 17);
    // 08db2d  dec esi
    X86_AT(c, 0x8db2du);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 08db2e  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0x8db2eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 08db31  inc edi
    X86_AT(c, 0x8db31u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08db32  jmp 0x8daa1
    X86_AT(c, 0x8db32u);
    X86_POLL(c, 0x8daa1u); goto L_8daa1;
L_8db37:
    X86_TICK(c, 33);
    // 08db37  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0x8db37u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 08db3a  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0x8db3au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 08db3d  mov byte ptr [eax], 0
    X86_AT(c, 0x8db3du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
    // 08db40  mov eax, esi
    X86_AT(c, 0x8db40u);
    c.r[0] = c.r[6];
    // 08db42  mov dx, word ptr [ebp - 8]
    X86_AT(c, 0x8db42u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 08db46  sub edx, eax
    X86_AT(c, 0x8db46u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08db48  mov word ptr [0x35330], dx
    X86_AT(c, 0x8db48u);
    wr16((c.sbase[3] + (uint32_t)(0x35330u)), (c.r[2] & 0xFFFFu));
    // 08db4f  push 0x3532c
    X86_AT(c, 0x8db4fu);
    { uint32_t v = 0x3532Cu; push32(c, v); }
    // 08db54  push 0x34780
    X86_AT(c, 0x8db54u);
    { uint32_t v = 0x34780u; push32(c, v); }
    // 08db59  call 0x9fd
    X86_AT(c, 0x8db59u);
    push32(c, 0x8db5eu); x86_call_known(c, 0x9fdu, f_000009fd); X86_RET(c, 0x8db5eu);
    X86_TICK(c, 28);
    // 08db5e  mov eax, dword ptr [ebx + 0x19]
    X86_AT(c, 0x8db5eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 08db61  add eax, dword ptr [ebp - 8]
    X86_AT(c, 0x8db61u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 08db64  sub eax, esi
    X86_AT(c, 0x8db64u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 08db66  mov dword ptr [ebx + 0x19], eax
    X86_AT(c, 0x8db66u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), c.r[0]);
    // 08db69  add esp, 8
    X86_AT(c, 0x8db69u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08db6c  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x8db6cu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 08db70  jne 0x8da52
    X86_AT(c, 0x8db70u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8da52u); goto L_8da52; }
    X86_TICK(c, 15);
    // 08db76  mov eax, dword ptr [ebx + 0x1d]
    X86_AT(c, 0x8db76u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 08db79  cmp eax, dword ptr [ebx + 0x15]
    X86_AT(c, 0x8db79u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x15u))), 0, 4);
    // 08db7c  jne 0x8db95
    X86_AT(c, 0x8db7cu);
    if (x86_cc(c, 5)) { goto L_8db95; }
    X86_TICK(c, 12);
    // 08db7e  push dword ptr [ebp + 8]
    X86_AT(c, 0x8db7eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08db81  call 0x8d94c
    X86_AT(c, 0x8db81u);
    push32(c, 0x8db86u); x86_call_known(c, 0x8d94cu, f_0008d94c); X86_RET(c, 0x8db86u);
    X86_TICK(c, 11);
    // 08db86  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0x8db86u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 08db8d  add esp, 4
    X86_AT(c, 0x8db8du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08db90  jmp 0x8da52
    X86_AT(c, 0x8db90u);
    X86_POLL(c, 0x8da52u); goto L_8da52;
L_8db95:
    X86_TICK(c, 15);
    // 08db95  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0x8db95u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 08db9c  inc dword ptr [ebx + 0x1d]
    X86_AT(c, 0x8db9cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 08db9f  jmp 0x8da52
    X86_AT(c, 0x8db9fu);
    X86_POLL(c, 0x8da52u); goto L_8da52;
L_8dba4:
    X86_TICK(c, 28);
    // 08dba4  pop edi
    X86_AT(c, 0x8dba4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08dba5  pop esi
    X86_AT(c, 0x8dba5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08dba6  pop ebx
    X86_AT(c, 0x8dba6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08dba7  leave 
    X86_AT(c, 0x8dba7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08dba8  ret 
    X86_AT(c, 0x8dba8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8da52u, "ran off the end of a function");
}
void f_0008dbac(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08dbac  push ebp
    X86_AT(c, 0x8dbacu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08dbad  mov ebp, esp
    X86_AT(c, 0x8dbadu);
    c.r[5] = c.r[4];
    // 08dbaf  push ebx
    X86_AT(c, 0x8dbafu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08dbb0  push esi
    X86_AT(c, 0x8dbb0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08dbb1  push edi
    X86_AT(c, 0x8dbb1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08dbb2  sub esi, esi
    X86_AT(c, 0x8dbb2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 08dbb4  movzx edx, byte ptr [ebp + 0xc]
    X86_AT(c, 0x8dbb4u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08dbb8  sub edx, 0x20
    X86_AT(c, 0x8dbb8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x20u, 0, 4); }
    // 08dbbb  cmp edx, 0x3a
    X86_AT(c, 0x8dbbbu);
    (void)x86_sub(c, c.r[2], 0x3Au, 0, 4);
    // 08dbbe  ja 0x8ddfa
    X86_AT(c, 0x8dbbeu);
    if (x86_cc(c, 7)) { goto L_8ddfa; }
    X86_TICK(c, 7);
    // 08dbc4  jmp dword ptr cs:[edx*4 + 0x8dbcc]
    X86_AT(c, 0x8dbc4u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0x8DBCCu)));
      switch (t) {
      case 0x8dcb8u: goto L_8dcb8;
      case 0x8dcc1u: goto L_8dcc1;
      case 0x8dccau: goto L_8dcca;
      case 0x8dcd3u: goto L_8dcd3;
      case 0x8dcdcu: goto L_8dcdc;
      case 0x8dce5u: goto L_8dce5;
      case 0x8dceeu: goto L_8dcee;
      case 0x8dcf7u: goto L_8dcf7;
      case 0x8dd00u: goto L_8dd00;
      case 0x8dd09u: goto L_8dd09;
      case 0x8dd12u: goto L_8dd12;
      case 0x8dd1bu: goto L_8dd1b;
      case 0x8dd24u: goto L_8dd24;
      case 0x8dd2du: goto L_8dd2d;
      case 0x8dd36u: goto L_8dd36;
      case 0x8dd3fu: goto L_8dd3f;
      case 0x8dd48u: goto L_8dd48;
      case 0x8dd51u: goto L_8dd51;
      case 0x8dd5au: goto L_8dd5a;
      case 0x8dd63u: goto L_8dd63;
      case 0x8dd6cu: goto L_8dd6c;
      case 0x8dd75u: goto L_8dd75;
      case 0x8dd7eu: goto L_8dd7e;
      case 0x8dd87u: goto L_8dd87;
      case 0x8dd90u: goto L_8dd90;
      case 0x8dd99u: goto L_8dd99;
      case 0x8dda2u: goto L_8dda2;
      case 0x8dda8u: goto L_8dda8;
      case 0x8ddaeu: goto L_8ddae;
      case 0x8ddb4u: goto L_8ddb4;
      case 0x8ddbau: goto L_8ddba;
      case 0x8ddc0u: goto L_8ddc0;
      case 0x8ddc6u: goto L_8ddc6;
      case 0x8ddccu: goto L_8ddcc;
      case 0x8ddd2u: goto L_8ddd2;
      case 0x8ddd8u: goto L_8ddd8;
      case 0x8dddeu: goto L_8ddde;
      case 0x8dde4u: goto L_8dde4;
      case 0x8ddeau: goto L_8ddea;
      case 0x8ddf0u: goto L_8ddf0;
      case 0x8ddf6u: goto L_8ddf6;
      case 0x8ddfau: goto L_8ddfa;
      default: x86_jump(c, t); return; } }
L_8dcb8:
    X86_TICK(c, 9);
    // 08dcb8  mov si, 0x4081
    X86_AT(c, 0x8dcb8u);
    s16(c, 6, 0x4081u);
    // 08dcbc  jmp 0x8ddfa
    X86_AT(c, 0x8dcbcu);
    goto L_8ddfa;
L_8dcc1:
    X86_TICK(c, 9);
    // 08dcc1  mov si, 0x4681
    X86_AT(c, 0x8dcc1u);
    s16(c, 6, 0x4681u);
    // 08dcc5  jmp 0x8ddfa
    X86_AT(c, 0x8dcc5u);
    goto L_8ddfa;
L_8dcca:
    X86_TICK(c, 9);
    // 08dcca  mov si, 0x75eb
    X86_AT(c, 0x8dccau);
    s16(c, 6, 0x75EBu);
    // 08dcce  jmp 0x8ddfa
    X86_AT(c, 0x8dcceu);
    goto L_8ddfa;
L_8dcd3:
    X86_TICK(c, 9);
    // 08dcd3  mov si, 0x74eb
    X86_AT(c, 0x8dcd3u);
    s16(c, 6, 0x74EBu);
    // 08dcd7  jmp 0x8ddfa
    X86_AT(c, 0x8dcd7u);
    goto L_8ddfa;
L_8dcdc:
    X86_TICK(c, 9);
    // 08dcdc  mov si, 0x5e81
    X86_AT(c, 0x8dcdcu);
    s16(c, 6, 0x5E81u);
    // 08dce0  jmp 0x8ddfa
    X86_AT(c, 0x8dce0u);
    goto L_8ddfa;
L_8dce5:
    X86_TICK(c, 9);
    // 08dce5  mov si, 0x80eb
    X86_AT(c, 0x8dce5u);
    s16(c, 6, 0x80EBu);
    // 08dce9  jmp 0x8ddfa
    X86_AT(c, 0x8dce9u);
    goto L_8ddfa;
L_8dcee:
    X86_TICK(c, 9);
    // 08dcee  mov si, 0x76eb
    X86_AT(c, 0x8dceeu);
    s16(c, 6, 0x76EBu);
    // 08dcf2  jmp 0x8ddfa
    X86_AT(c, 0x8dcf2u);
    goto L_8ddfa;
L_8dcf7:
    X86_TICK(c, 9);
    // 08dcf7  mov si, 0x77eb
    X86_AT(c, 0x8dcf7u);
    s16(c, 6, 0x77EBu);
    // 08dcfb  jmp 0x8ddfa
    X86_AT(c, 0x8dcfbu);
    goto L_8ddfa;
L_8dd00:
    X86_TICK(c, 9);
    // 08dd00  mov si, 0x78eb
    X86_AT(c, 0x8dd00u);
    s16(c, 6, 0x78EBu);
    // 08dd04  jmp 0x8ddfa
    X86_AT(c, 0x8dd04u);
    goto L_8ddfa;
L_8dd09:
    X86_TICK(c, 9);
    // 08dd09  mov si, 0x79eb
    X86_AT(c, 0x8dd09u);
    s16(c, 6, 0x79EBu);
    // 08dd0d  jmp 0x8ddfa
    X86_AT(c, 0x8dd0du);
    goto L_8ddfa;
L_8dd12:
    X86_TICK(c, 9);
    // 08dd12  mov si, 0x7aeb
    X86_AT(c, 0x8dd12u);
    s16(c, 6, 0x7AEBu);
    // 08dd16  jmp 0x8ddfa
    X86_AT(c, 0x8dd16u);
    goto L_8ddfa;
L_8dd1b:
    X86_TICK(c, 9);
    // 08dd1b  mov si, 0x7beb
    X86_AT(c, 0x8dd1bu);
    s16(c, 6, 0x7BEBu);
    // 08dd1f  jmp 0x8ddfa
    X86_AT(c, 0x8dd1fu);
    goto L_8ddfa;
L_8dd24:
    X86_TICK(c, 9);
    // 08dd24  mov si, 0x7ceb
    X86_AT(c, 0x8dd24u);
    s16(c, 6, 0x7CEBu);
    // 08dd28  jmp 0x8ddfa
    X86_AT(c, 0x8dd28u);
    goto L_8ddfa;
L_8dd2d:
    X86_TICK(c, 9);
    // 08dd2d  mov si, 0x7deb
    X86_AT(c, 0x8dd2du);
    s16(c, 6, 0x7DEBu);
    // 08dd31  jmp 0x8ddfa
    X86_AT(c, 0x8dd31u);
    goto L_8ddfa;
L_8dd36:
    X86_TICK(c, 9);
    // 08dd36  mov si, 0x7eeb
    X86_AT(c, 0x8dd36u);
    s16(c, 6, 0x7EEBu);
    // 08dd3a  jmp 0x8ddfa
    X86_AT(c, 0x8dd3au);
    goto L_8ddfa;
L_8dd3f:
    X86_TICK(c, 9);
    // 08dd3f  mov si, 0x40eb
    X86_AT(c, 0x8dd3fu);
    s16(c, 6, 0x40EBu);
    // 08dd43  jmp 0x8ddfa
    X86_AT(c, 0x8dd43u);
    goto L_8ddfa;
L_8dd48:
    X86_TICK(c, 9);
    // 08dd48  mov si, 0x41eb
    X86_AT(c, 0x8dd48u);
    s16(c, 6, 0x41EBu);
    // 08dd4c  jmp 0x8ddfa
    X86_AT(c, 0x8dd4cu);
    goto L_8ddfa;
L_8dd51:
    X86_TICK(c, 9);
    // 08dd51  mov si, 0x42eb
    X86_AT(c, 0x8dd51u);
    s16(c, 6, 0x42EBu);
    // 08dd55  jmp 0x8ddfa
    X86_AT(c, 0x8dd55u);
    goto L_8ddfa;
L_8dd5a:
    X86_TICK(c, 9);
    // 08dd5a  mov si, 0x43eb
    X86_AT(c, 0x8dd5au);
    s16(c, 6, 0x43EBu);
    // 08dd5e  jmp 0x8ddfa
    X86_AT(c, 0x8dd5eu);
    goto L_8ddfa;
L_8dd63:
    X86_TICK(c, 9);
    // 08dd63  mov si, 0x44eb
    X86_AT(c, 0x8dd63u);
    s16(c, 6, 0x44EBu);
    // 08dd67  jmp 0x8ddfa
    X86_AT(c, 0x8dd67u);
    goto L_8ddfa;
L_8dd6c:
    X86_TICK(c, 9);
    // 08dd6c  mov si, 0x45eb
    X86_AT(c, 0x8dd6cu);
    s16(c, 6, 0x45EBu);
    // 08dd70  jmp 0x8ddfa
    X86_AT(c, 0x8dd70u);
    goto L_8ddfa;
L_8dd75:
    X86_TICK(c, 9);
    // 08dd75  mov si, 0x46eb
    X86_AT(c, 0x8dd75u);
    s16(c, 6, 0x46EBu);
    // 08dd79  jmp 0x8ddfa
    X86_AT(c, 0x8dd79u);
    goto L_8ddfa;
L_8dd7e:
    X86_TICK(c, 9);
    // 08dd7e  mov si, 0x47eb
    X86_AT(c, 0x8dd7eu);
    s16(c, 6, 0x47EBu);
    // 08dd82  jmp 0x8ddfa
    X86_AT(c, 0x8dd82u);
    goto L_8ddfa;
L_8dd87:
    X86_TICK(c, 9);
    // 08dd87  mov si, 0x48eb
    X86_AT(c, 0x8dd87u);
    s16(c, 6, 0x48EBu);
    // 08dd8b  jmp 0x8ddfa
    X86_AT(c, 0x8dd8bu);
    goto L_8ddfa;
L_8dd90:
    X86_TICK(c, 9);
    // 08dd90  mov si, 0x49eb
    X86_AT(c, 0x8dd90u);
    s16(c, 6, 0x49EBu);
    // 08dd94  jmp 0x8ddfa
    X86_AT(c, 0x8dd94u);
    goto L_8ddfa;
L_8dd99:
    X86_TICK(c, 9);
    // 08dd99  mov si, 0x4aeb
    X86_AT(c, 0x8dd99u);
    s16(c, 6, 0x4AEBu);
    // 08dd9d  jmp 0x8ddfa
    X86_AT(c, 0x8dd9du);
    goto L_8ddfa;
L_8dda2:
    X86_TICK(c, 9);
    // 08dda2  mov si, 0x4beb
    X86_AT(c, 0x8dda2u);
    s16(c, 6, 0x4BEBu);
    // 08dda6  jmp 0x8ddfa
    X86_AT(c, 0x8dda6u);
    goto L_8ddfa;
L_8dda8:
    X86_TICK(c, 9);
    // 08dda8  mov si, 0x4ceb
    X86_AT(c, 0x8dda8u);
    s16(c, 6, 0x4CEBu);
    // 08ddac  jmp 0x8ddfa
    X86_AT(c, 0x8ddacu);
    goto L_8ddfa;
L_8ddae:
    X86_TICK(c, 9);
    // 08ddae  mov si, 0x4deb
    X86_AT(c, 0x8ddaeu);
    s16(c, 6, 0x4DEBu);
    // 08ddb2  jmp 0x8ddfa
    X86_AT(c, 0x8ddb2u);
    goto L_8ddfa;
L_8ddb4:
    X86_TICK(c, 9);
    // 08ddb4  mov si, 0x4eeb
    X86_AT(c, 0x8ddb4u);
    s16(c, 6, 0x4EEBu);
    // 08ddb8  jmp 0x8ddfa
    X86_AT(c, 0x8ddb8u);
    goto L_8ddfa;
L_8ddba:
    X86_TICK(c, 9);
    // 08ddba  mov si, 0x4feb
    X86_AT(c, 0x8ddbau);
    s16(c, 6, 0x4FEBu);
    // 08ddbe  jmp 0x8ddfa
    X86_AT(c, 0x8ddbeu);
    goto L_8ddfa;
L_8ddc0:
    X86_TICK(c, 9);
    // 08ddc0  mov si, 0x50eb
    X86_AT(c, 0x8ddc0u);
    s16(c, 6, 0x50EBu);
    // 08ddc4  jmp 0x8ddfa
    X86_AT(c, 0x8ddc4u);
    goto L_8ddfa;
L_8ddc6:
    X86_TICK(c, 9);
    // 08ddc6  mov si, 0x51eb
    X86_AT(c, 0x8ddc6u);
    s16(c, 6, 0x51EBu);
    // 08ddca  jmp 0x8ddfa
    X86_AT(c, 0x8ddcau);
    goto L_8ddfa;
L_8ddcc:
    X86_TICK(c, 9);
    // 08ddcc  mov si, 0x52eb
    X86_AT(c, 0x8ddccu);
    s16(c, 6, 0x52EBu);
    // 08ddd0  jmp 0x8ddfa
    X86_AT(c, 0x8ddd0u);
    goto L_8ddfa;
L_8ddd2:
    X86_TICK(c, 9);
    // 08ddd2  mov si, 0x53eb
    X86_AT(c, 0x8ddd2u);
    s16(c, 6, 0x53EBu);
    // 08ddd6  jmp 0x8ddfa
    X86_AT(c, 0x8ddd6u);
    goto L_8ddfa;
L_8ddd8:
    X86_TICK(c, 9);
    // 08ddd8  mov si, 0x54eb
    X86_AT(c, 0x8ddd8u);
    s16(c, 6, 0x54EBu);
    // 08dddc  jmp 0x8ddfa
    X86_AT(c, 0x8dddcu);
    goto L_8ddfa;
L_8ddde:
    X86_TICK(c, 9);
    // 08ddde  mov si, 0x55eb
    X86_AT(c, 0x8dddeu);
    s16(c, 6, 0x55EBu);
    // 08dde2  jmp 0x8ddfa
    X86_AT(c, 0x8dde2u);
    goto L_8ddfa;
L_8dde4:
    X86_TICK(c, 9);
    // 08dde4  mov si, 0x56eb
    X86_AT(c, 0x8dde4u);
    s16(c, 6, 0x56EBu);
    // 08dde8  jmp 0x8ddfa
    X86_AT(c, 0x8dde8u);
    goto L_8ddfa;
L_8ddea:
    X86_TICK(c, 9);
    // 08ddea  mov si, 0x57eb
    X86_AT(c, 0x8ddeau);
    s16(c, 6, 0x57EBu);
    // 08ddee  jmp 0x8ddfa
    X86_AT(c, 0x8ddeeu);
    goto L_8ddfa;
L_8ddf0:
    X86_TICK(c, 9);
    // 08ddf0  mov si, 0x58eb
    X86_AT(c, 0x8ddf0u);
    s16(c, 6, 0x58EBu);
    // 08ddf4  jmp 0x8ddfa
    X86_AT(c, 0x8ddf4u);
    goto L_8ddfa;
L_8ddf6:
    X86_TICK(c, 2);
    // 08ddf6  mov si, 0x59eb
    X86_AT(c, 0x8ddf6u);
    s16(c, 6, 0x59EBu);
L_8ddfa:
    X86_TICK(c, 7);
    // 08ddfa  and si, si
    X86_AT(c, 0x8ddfau);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 08ddfd  je 0x8de68
    X86_AT(c, 0x8ddfdu);
    if (x86_cc(c, 4)) { goto L_8de68; }
    X86_TICK(c, 67);
    // 08ddff  mov eax, 0x3477c
    X86_AT(c, 0x8ddffu);
    c.r[0] = 0x3477Cu;
    // 08de04  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x8de04u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08de07  lea edx, [edx + edx*2]
    X86_AT(c, 0x8de07u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 08de0a  lea ecx, [edx + edx*8]
    X86_AT(c, 0x8de0au);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 08de0d  lea ecx, [edx + ecx*2]
    X86_AT(c, 0x8de0du);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 08de10  lea edi, [eax + ecx*1 + 0x710]
    X86_AT(c, 0x8de10u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[1] + 0x710u);
    // 08de17  mov dx, word ptr [edi + 1]
    X86_AT(c, 0x8de17u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 08de1b  add dx, 4
    X86_AT(c, 0x8de1bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x4u, 0, 2)); }
    // 08de1f  mov ebx, dword ptr [edi + 0x19]
    X86_AT(c, 0x8de1fu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x19u)));
    // 08de22  shl ebx, 3
    X86_AT(c, 0x8de22u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 08de25  add ebx, edx
    X86_AT(c, 0x8de25u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 08de27  mov word ptr [eax + 0xd48], bx
    X86_AT(c, 0x8de27u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD48u)), (c.r[3] & 0xFFFFu));
    // 08de2e  mov dx, word ptr [edi + 5]
    X86_AT(c, 0x8de2eu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 08de32  add dx, 0x11
    X86_AT(c, 0x8de32u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x11u, 0, 2)); }
    // 08de36  mov ebx, dword ptr [edi + 0x1d]
    X86_AT(c, 0x8de36u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 08de39  shl ebx, 4
    X86_AT(c, 0x8de39u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 08de3c  add ebx, edx
    X86_AT(c, 0x8de3cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 08de3e  mov word ptr [eax + 0xd4a], bx
    X86_AT(c, 0x8de3eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4Au)), (c.r[3] & 0xFFFFu));
    // 08de45  mov word ptr [eax + 0xd4c], 2
    X86_AT(c, 0x8de45u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4Cu)), 0x2u);
    // 08de4e  mov word ptr [eax + 0xd4e], si
    X86_AT(c, 0x8de4eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4Eu)), (c.r[6] & 0xFFFFu));
    // 08de55  lea edx, [eax + 0xd48]
    X86_AT(c, 0x8de55u);
    c.r[2] = (uint32_t)(c.r[0] + 0xD48u);
    // 08de5b  push edx
    X86_AT(c, 0x8de5bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08de5c  add eax, 4
    X86_AT(c, 0x8de5cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 08de5f  push eax
    X86_AT(c, 0x8de5fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08de60  call 0x9fd
    X86_AT(c, 0x8de60u);
    push32(c, 0x8de65u); x86_call_known(c, 0x9fdu, f_000009fd); X86_RET(c, 0x8de65u);
    X86_TICK(c, 2);
    // 08de65  add esp, 8
    X86_AT(c, 0x8de65u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_8de68:
    X86_TICK(c, 28);
    // 08de68  pop edi
    X86_AT(c, 0x8de68u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08de69  pop esi
    X86_AT(c, 0x8de69u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08de6a  pop ebx
    X86_AT(c, 0x8de6au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08de6b  leave 
    X86_AT(c, 0x8de6bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08de6c  ret 
    X86_AT(c, 0x8de6cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8dbacu, "ran off the end of a function");
}
void f_0008ddfa(X86Cpu& c) {
    X86_TICK(c, 7);
    // 08ddfa  and si, si
    X86_AT(c, 0x8ddfau);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 08ddfd  je 0x8de68
    X86_AT(c, 0x8ddfdu);
    if (x86_cc(c, 4)) { goto L_8de68; }
    X86_TICK(c, 67);
    // 08ddff  mov eax, 0x3477c
    X86_AT(c, 0x8ddffu);
    c.r[0] = 0x3477Cu;
    // 08de04  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x8de04u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08de07  lea edx, [edx + edx*2]
    X86_AT(c, 0x8de07u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 08de0a  lea ecx, [edx + edx*8]
    X86_AT(c, 0x8de0au);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 08de0d  lea ecx, [edx + ecx*2]
    X86_AT(c, 0x8de0du);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 08de10  lea edi, [eax + ecx*1 + 0x710]
    X86_AT(c, 0x8de10u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[1] + 0x710u);
    // 08de17  mov dx, word ptr [edi + 1]
    X86_AT(c, 0x8de17u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 08de1b  add dx, 4
    X86_AT(c, 0x8de1bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x4u, 0, 2)); }
    // 08de1f  mov ebx, dword ptr [edi + 0x19]
    X86_AT(c, 0x8de1fu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x19u)));
    // 08de22  shl ebx, 3
    X86_AT(c, 0x8de22u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 08de25  add ebx, edx
    X86_AT(c, 0x8de25u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 08de27  mov word ptr [eax + 0xd48], bx
    X86_AT(c, 0x8de27u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD48u)), (c.r[3] & 0xFFFFu));
    // 08de2e  mov dx, word ptr [edi + 5]
    X86_AT(c, 0x8de2eu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 08de32  add dx, 0x11
    X86_AT(c, 0x8de32u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x11u, 0, 2)); }
    // 08de36  mov ebx, dword ptr [edi + 0x1d]
    X86_AT(c, 0x8de36u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 08de39  shl ebx, 4
    X86_AT(c, 0x8de39u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 08de3c  add ebx, edx
    X86_AT(c, 0x8de3cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 08de3e  mov word ptr [eax + 0xd4a], bx
    X86_AT(c, 0x8de3eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4Au)), (c.r[3] & 0xFFFFu));
    // 08de45  mov word ptr [eax + 0xd4c], 2
    X86_AT(c, 0x8de45u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4Cu)), 0x2u);
    // 08de4e  mov word ptr [eax + 0xd4e], si
    X86_AT(c, 0x8de4eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4Eu)), (c.r[6] & 0xFFFFu));
    // 08de55  lea edx, [eax + 0xd48]
    X86_AT(c, 0x8de55u);
    c.r[2] = (uint32_t)(c.r[0] + 0xD48u);
    // 08de5b  push edx
    X86_AT(c, 0x8de5bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08de5c  add eax, 4
    X86_AT(c, 0x8de5cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 08de5f  push eax
    X86_AT(c, 0x8de5fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08de60  call 0x9fd
    X86_AT(c, 0x8de60u);
    push32(c, 0x8de65u); x86_call_known(c, 0x9fdu, f_000009fd); X86_RET(c, 0x8de65u);
    X86_TICK(c, 2);
    // 08de65  add esp, 8
    X86_AT(c, 0x8de65u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_8de68:
    X86_TICK(c, 28);
    // 08de68  pop edi
    X86_AT(c, 0x8de68u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08de69  pop esi
    X86_AT(c, 0x8de69u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08de6a  pop ebx
    X86_AT(c, 0x8de6au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08de6b  leave 
    X86_AT(c, 0x8de6bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08de6c  ret 
    X86_AT(c, 0x8de6cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ddfau, "ran off the end of a function");
}
void f_0008dfe4(X86Cpu& c) {
    X86_TICK(c, 29);
    // 08dfe4  push ebp
    X86_AT(c, 0x8dfe4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08dfe5  mov ebp, esp
    X86_AT(c, 0x8dfe5u);
    c.r[5] = c.r[4];
    // 08dfe7  push ebx
    X86_AT(c, 0x8dfe7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08dfe8  push esi
    X86_AT(c, 0x8dfe8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08dfe9  push edi
    X86_AT(c, 0x8dfe9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08dfea  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8dfeau);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08dfed  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8dfedu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08dff0  mov ebx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8dff0u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08dff3  and esi, esi
    X86_AT(c, 0x8dff3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 08dff5  jl 0x8e029
    X86_AT(c, 0x8dff5u);
    if (x86_cc(c, 12)) { goto L_8e029; }
    X86_TICK(c, 19);
    // 08dff7  mov eax, 0x3477c
    X86_AT(c, 0x8dff7u);
    c.r[0] = 0x3477Cu;
    // 08dffc  lea edx, [edi + edi*2]
    X86_AT(c, 0x8dffcu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08dfff  lea ecx, [edx + edx*8]
    X86_AT(c, 0x8dfffu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 08e002  lea ecx, [edx + ecx*2]
    X86_AT(c, 0x8e002u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 08e005  cmp esi, dword ptr [eax + ecx*1 + 0x721]
    X86_AT(c, 0x8e005u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x721u))), 0, 4);
    // 08e00c  jg 0x8e029
    X86_AT(c, 0x8e00cu);
    if (x86_cc(c, 15)) { goto L_8e029; }
    X86_TICK(c, 7);
    // 08e00e  and ebx, ebx
    X86_AT(c, 0x8e00eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 08e010  jl 0x8e029
    X86_AT(c, 0x8e010u);
    if (x86_cc(c, 12)) { goto L_8e029; }
    X86_TICK(c, 11);
    // 08e012  cmp ebx, dword ptr [eax + ecx*1 + 0x725]
    X86_AT(c, 0x8e012u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x725u))), 0, 4);
    // 08e019  jg 0x8e029
    X86_AT(c, 0x8e019u);
    if (x86_cc(c, 15)) { goto L_8e029; }
    X86_TICK(c, 4);
    // 08e01b  mov dword ptr [eax + ecx*1 + 0x729], esi
    X86_AT(c, 0x8e01bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x729u)), c.r[6]);
    // 08e022  mov dword ptr [eax + ecx*1 + 0x72d], ebx
    X86_AT(c, 0x8e022u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x72Du)), c.r[3]);
L_8e029:
    X86_TICK(c, 28);
    // 08e029  pop edi
    X86_AT(c, 0x8e029u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08e02a  pop esi
    X86_AT(c, 0x8e02au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08e02b  pop ebx
    X86_AT(c, 0x8e02bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08e02c  leave 
    X86_AT(c, 0x8e02cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08e02d  ret 
    X86_AT(c, 0x8e02du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8dfe4u, "ran off the end of a function");
}
void f_0008e37c(X86Cpu& c) {
    X86_TICK(c, 13);
    // 08e37c  push ebp
    X86_AT(c, 0x8e37cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08e37d  mov ebp, esp
    X86_AT(c, 0x8e37du);
    c.r[5] = c.r[4];
    // 08e37f  push 2
    X86_AT(c, 0x8e37fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08e381  call 0x8d6c0
    X86_AT(c, 0x8e381u);
    push32(c, 0x8e386u); x86_call_known(c, 0x8d6c0u, f_0008d6c0); X86_RET(c, 0x8e386u);
    X86_TICK(c, 9);
    // 08e386  push 2
    X86_AT(c, 0x8e386u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08e388  call 0x8d9ec
    X86_AT(c, 0x8e388u);
    push32(c, 0x8e38du); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8e38du);
    X86_TICK(c, 14);
    // 08e38d  push dword ptr [ebp + 8]
    X86_AT(c, 0x8e38du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08e390  push 2
    X86_AT(c, 0x8e390u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08e392  call 0x8da34
    X86_AT(c, 0x8e392u);
    push32(c, 0x8e397u); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8e397u);
    X86_TICK(c, 16);
    // 08e397  leave 
    X86_AT(c, 0x8e397u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08e398  ret 
    X86_AT(c, 0x8e398u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8e37cu, "ran off the end of a function");
}
void f_0008eef4(X86Cpu& c) {
    X86_TICK(c, 22);
    // 08eef4  push ebp
    X86_AT(c, 0x8eef4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08eef5  mov ebp, esp
    X86_AT(c, 0x8eef5u);
    c.r[5] = c.r[4];
    // 08eef7  push 0xffffffff
    X86_AT(c, 0x8eef7u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 08eef9  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8eef9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08eefc  push dword ptr [eax*4 + 0x354ec]
    X86_AT(c, 0x8eefcu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x354ECu))); push32(c, v); }
    // 08ef03  call 0x8b2a4
    X86_AT(c, 0x8ef03u);
    push32(c, 0x8ef08u); x86_call_known(c, 0x8b2a4u, f_0008b2a4); X86_RET(c, 0x8ef08u);
    X86_TICK(c, 16);
    // 08ef08  leave 
    X86_AT(c, 0x8ef08u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08ef09  ret 
    X86_AT(c, 0x8ef09u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8eef4u, "ran off the end of a function");
}
void f_0008ef0c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08ef0c  push 1
    X86_AT(c, 0x8ef0cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08ef0e  call 0x8c658
    X86_AT(c, 0x8ef0eu);
    push32(c, 0x8ef13u); x86_call_known(c, 0x8c658u, f_0008c658); X86_RET(c, 0x8ef13u);
    X86_TICK(c, 9);
    // 08ef13  push 0
    X86_AT(c, 0x8ef13u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ef15  call 0x8c9f8
    X86_AT(c, 0x8ef15u);
    push32(c, 0x8ef1au); x86_call_known(c, 0x8c9f8u, f_0008c9f8); X86_RET(c, 0x8ef1au);
    X86_TICK(c, 9);
    // 08ef1a  push 0
    X86_AT(c, 0x8ef1au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ef1c  call 0x8c658
    X86_AT(c, 0x8ef1cu);
    push32(c, 0x8ef21u); x86_call_known(c, 0x8c658u, f_0008c658); X86_RET(c, 0x8ef21u);
    X86_TICK(c, 9);
    // 08ef21  push 0
    X86_AT(c, 0x8ef21u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ef23  call 0x8c9f8
    X86_AT(c, 0x8ef23u);
    push32(c, 0x8ef28u); x86_call_known(c, 0x8c9f8u, f_0008c9f8); X86_RET(c, 0x8ef28u);
    X86_TICK(c, 9);
    // 08ef28  push 2
    X86_AT(c, 0x8ef28u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08ef2a  call 0x8c66c
    X86_AT(c, 0x8ef2au);
    push32(c, 0x8ef2fu); x86_call_known(c, 0x8c66cu, f_0008c66c); X86_RET(c, 0x8ef2fu);
    X86_TICK(c, 7);
    // 08ef2f  call 0x8c91c
    X86_AT(c, 0x8ef2fu);
    push32(c, 0x8ef34u); x86_call_known(c, 0x8c91cu, f_0008c91c); X86_RET(c, 0x8ef34u);
    X86_TICK(c, 7);
    // 08ef34  call 0x8b554
    X86_AT(c, 0x8ef34u);
    push32(c, 0x8ef39u); x86_call_known(c, 0x8b554u, f_0008b554); X86_RET(c, 0x8ef39u);
    X86_TICK(c, 7);
    // 08ef39  call 0x8c13c
    X86_AT(c, 0x8ef39u);
    push32(c, 0x8ef3eu); x86_call_known(c, 0x8c13cu, f_0008c13c); X86_RET(c, 0x8ef3eu);
    X86_TICK(c, 9);
    // 08ef3e  push 0
    X86_AT(c, 0x8ef3eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ef40  call 0x93358
    X86_AT(c, 0x8ef40u);
    push32(c, 0x8ef45u); x86_call_known(c, 0x93358u, f_00093358); X86_RET(c, 0x8ef45u);
    X86_TICK(c, 12);
    // 08ef45  add esp, 0x18
    X86_AT(c, 0x8ef45u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 08ef48  ret 
    X86_AT(c, 0x8ef48u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ef0cu, "ran off the end of a function");
}
void f_0008ef4c(X86Cpu& c) {
    X86_TICK(c, 25);
    // 08ef4c  push ebp
    X86_AT(c, 0x8ef4cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08ef4d  mov ebp, esp
    X86_AT(c, 0x8ef4du);
    c.r[5] = c.r[4];
    // 08ef4f  push eax
    X86_AT(c, 0x8ef4fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ef50  push ebx
    X86_AT(c, 0x8ef50u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08ef51  push esi
    X86_AT(c, 0x8ef51u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08ef52  push edi
    X86_AT(c, 0x8ef52u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08ef53  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8ef53u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08ef56  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x8ef56u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 08ef5d  call 0xb
    X86_AT(c, 0x8ef5du);
    push32(c, 0x8ef62u); x86_call_known(c, 0xbu, f_0000000b); X86_RET(c, 0x8ef62u);
    X86_TICK(c, 2);
    // 08ef62  sub esi, esi
    X86_AT(c, 0x8ef62u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_8ef64:
    X86_TICK(c, 21);
    // 08ef64  mov eax, edi
    X86_AT(c, 0x8ef64u);
    c.r[0] = c.r[7];
    // 08ef66  mov edx, eax
    X86_AT(c, 0x8ef66u);
    c.r[2] = c.r[0];
    // 08ef68  shl edx, 5
    X86_AT(c, 0x8ef68u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 08ef6b  sub edx, eax
    X86_AT(c, 0x8ef6bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08ef6d  lea edx, [eax + edx*4]
    X86_AT(c, 0x8ef6du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 08ef70  shl edx, 2
    X86_AT(c, 0x8ef70u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 08ef73  cmp edx, esi
    X86_AT(c, 0x8ef73u);
    (void)x86_sub(c, c.r[2], c.r[6], 0, 4);
    // 08ef75  jle 0x8ef9b
    X86_AT(c, 0x8ef75u);
    if (x86_cc(c, 14)) { goto L_8ef9b; }
    X86_TICK(c, 13);
    // 08ef77  lea ebx, [ebp - 4]
    X86_AT(c, 0x8ef77u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 08ef7a  push ebx
    X86_AT(c, 0x8ef7au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08ef7b  push 1
    X86_AT(c, 0x8ef7bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08ef7d  call 0x29
    X86_AT(c, 0x8ef7du);
    push32(c, 0x8ef82u); x86_call_known(c, 0x29u, f_00000029); X86_RET(c, 0x8ef82u);
    X86_TICK(c, 15);
    // 08ef82  add esp, 8
    X86_AT(c, 0x8ef82u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08ef85  mov eax, dword ptr [ebx]
    X86_AT(c, 0x8ef85u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 08ef87  and eax, 0xff00
    X86_AT(c, 0x8ef87u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFF00u, 4); }
    // 08ef8c  cmp eax, 0xff00
    X86_AT(c, 0x8ef8cu);
    (void)x86_sub(c, c.r[0], 0xFF00u, 0, 4);
    // 08ef91  je 0x8ef98
    X86_AT(c, 0x8ef91u);
    if (x86_cc(c, 4)) { goto L_8ef98; }
    X86_TICK(c, 7);
    // 08ef93  call 0x8ef0c
    X86_AT(c, 0x8ef93u);
    push32(c, 0x8ef98u); x86_call_known(c, 0x8ef0cu, f_0008ef0c); X86_RET(c, 0x8ef98u);
L_8ef98:
    X86_TICK(c, 9);
    // 08ef98  inc esi
    X86_AT(c, 0x8ef98u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08ef99  jmp 0x8ef64
    X86_AT(c, 0x8ef99u);
    X86_POLL(c, 0x8ef64u); goto L_8ef64;
L_8ef9b:
    X86_TICK(c, 28);
    // 08ef9b  pop edi
    X86_AT(c, 0x8ef9bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08ef9c  pop esi
    X86_AT(c, 0x8ef9cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08ef9d  pop ebx
    X86_AT(c, 0x8ef9du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08ef9e  leave 
    X86_AT(c, 0x8ef9eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08ef9f  ret 
    X86_AT(c, 0x8ef9fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ef4cu, "ran off the end of a function");
}
void f_0008efa0(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08efa0  push ebp
    X86_AT(c, 0x8efa0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08efa1  mov ebp, esp
    X86_AT(c, 0x8efa1u);
    c.r[5] = c.r[4];
    // 08efa3  push edi
    X86_AT(c, 0x8efa3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08efa4  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8efa4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08efa7  push 0
    X86_AT(c, 0x8efa7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08efa9  push 0
    X86_AT(c, 0x8efa9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08efab  push 0x1288
    X86_AT(c, 0x8efabu);
    { uint32_t v = 0x1288u; push32(c, v); }
    // 08efb0  call 0x8d2d4
    X86_AT(c, 0x8efb0u);
    push32(c, 0x8efb5u); x86_call_known(c, 0x8d2d4u, f_0008d2d4); X86_RET(c, 0x8efb5u);
    X86_TICK(c, 9);
    // 08efb5  push 0xe
    X86_AT(c, 0x8efb5u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 08efb7  call 0x8c4d4
    X86_AT(c, 0x8efb7u);
    push32(c, 0x8efbcu); x86_call_known(c, 0x8c4d4u, f_0008c4d4); X86_RET(c, 0x8efbcu);
    X86_TICK(c, 9);
    // 08efbc  push 0xb
    X86_AT(c, 0x8efbcu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 08efbe  call 0x8c4ec
    X86_AT(c, 0x8efbeu);
    push32(c, 0x8efc3u); x86_call_known(c, 0x8c4ecu, f_0008c4ec); X86_RET(c, 0x8efc3u);
    X86_TICK(c, 9);
    // 08efc3  push 1
    X86_AT(c, 0x8efc3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08efc5  call 0x8c59c
    X86_AT(c, 0x8efc5u);
    push32(c, 0x8efcau); x86_call_known(c, 0x8c59cu, f_0008c59c); X86_RET(c, 0x8efcau);
    X86_TICK(c, 24);
    // 08efca  push edi
    X86_AT(c, 0x8efcau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08efcb  push 0x13
    X86_AT(c, 0x8efcbu);
    { uint32_t v = 0x13u; push32(c, v); }
    // 08efcd  mov edx, 0xffffffff
    X86_AT(c, 0x8efcdu);
    c.r[2] = 0xFFFFFFFFu;
    // 08efd2  sub eax, eax
    X86_AT(c, 0x8efd2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08efd4  push edi
    X86_AT(c, 0x8efd4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08efd5  mov ecx, edx
    X86_AT(c, 0x8efd5u);
    c.r[1] = c.r[2];
    // 08efd7  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x8efd7u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 08efd9  jne 0x8efde
    X86_AT(c, 0x8efd9u);
    if (x86_cc(c, 5)) { goto L_8efde; }
    X86_TICK(c, 4);
    // 08efdb  inc ecx
    X86_AT(c, 0x8efdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 08efdc  sub edx, ecx
    X86_AT(c, 0x8efdcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_8efde:
    X86_TICK(c, 27);
    // 08efde  pop edi
    X86_AT(c, 0x8efdeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08efdf  shl edx, 3
    X86_AT(c, 0x8efdfu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 08efe2  mov eax, 0x280
    X86_AT(c, 0x8efe2u);
    c.r[0] = 0x280u;
    // 08efe7  sub eax, edx
    X86_AT(c, 0x8efe7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 08efe9  cdq 
    X86_AT(c, 0x8efe9u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08efea  sub eax, edx
    X86_AT(c, 0x8efeau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 08efec  sar eax, 1
    X86_AT(c, 0x8efecu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 08efee  push eax
    X86_AT(c, 0x8efeeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08efef  call 0x8d80c
    X86_AT(c, 0x8efefu);
    push32(c, 0x8eff4u); x86_call_known(c, 0x8d80cu, f_0008d80c); X86_RET(c, 0x8eff4u);
    X86_TICK(c, 9);
    // 08eff4  push 0
    X86_AT(c, 0x8eff4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08eff6  call 0x8c59c
    X86_AT(c, 0x8eff6u);
    push32(c, 0x8effbu); x86_call_known(c, 0x8c59cu, f_0008c59c); X86_RET(c, 0x8effbu);
    X86_TICK(c, 22);
    // 08effb  add esp, 0x28
    X86_AT(c, 0x8effbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 08effe  pop edi
    X86_AT(c, 0x8effeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08efff  leave 
    X86_AT(c, 0x8efffu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f000  ret 
    X86_AT(c, 0x8f000u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8efa0u, "ran off the end of a function");
}
void f_0008f004(X86Cpu& c) {
    X86_TICK(c, 17);
    // 08f004  push 0
    X86_AT(c, 0x8f004u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f006  push 0x190
    X86_AT(c, 0x8f006u);
    { uint32_t v = 0x190u; push32(c, v); }
    // 08f00b  push 0x280
    X86_AT(c, 0x8f00bu);
    { uint32_t v = 0x280u; push32(c, v); }
    // 08f010  push 0x18
    X86_AT(c, 0x8f010u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 08f012  push 0
    X86_AT(c, 0x8f012u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f014  call 0x8cc48
    X86_AT(c, 0x8f014u);
    push32(c, 0x8f019u); x86_call_known(c, 0x8cc48u, f_0008cc48); X86_RET(c, 0x8f019u);
    X86_TICK(c, 12);
    // 08f019  add esp, 0x14
    X86_AT(c, 0x8f019u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 08f01c  ret 
    X86_AT(c, 0x8f01cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f004u, "ran off the end of a function");
}
void f_0008f020(X86Cpu& c) {
    X86_TICK(c, 43);
    // 08f020  push ebp
    X86_AT(c, 0x8f020u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08f021  mov ebp, esp
    X86_AT(c, 0x8f021u);
    c.r[5] = c.r[4];
    // 08f023  push eax
    X86_AT(c, 0x8f023u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08f024  lea eax, [ebp - 4]
    X86_AT(c, 0x8f024u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 08f027  push eax
    X86_AT(c, 0x8f027u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08f028  push 0x89530
    X86_AT(c, 0x8f028u);
    { uint32_t v = 0x89530u; push32(c, v); }
    // 08f02d  push 0x8952c
    X86_AT(c, 0x8f02du);
    { uint32_t v = 0x8952Cu; push32(c, v); }
    // 08f032  push 0x15000
    X86_AT(c, 0x8f032u);
    { uint32_t v = 0x15000u; push32(c, v); }
    // 08f037  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8f037u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08f03a  lea edx, [eax + eax*4]
    X86_AT(c, 0x8f03au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 08f03d  lea edx, [eax + edx*4]
    X86_AT(c, 0x8f03du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 08f040  shl edx, 0xc
    X86_AT(c, 0x8f040u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 08f043  add edx, 0x3552c
    X86_AT(c, 0x8f043u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x3552Cu, 0, 4); }
    // 08f049  push edx
    X86_AT(c, 0x8f049u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f04a  push dword ptr [ebp + 8]
    X86_AT(c, 0x8f04au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08f04d  call 0x8d1d8
    X86_AT(c, 0x8f04du);
    push32(c, 0x8f052u); x86_call_known(c, 0x8d1d8u, f_0008d1d8); X86_RET(c, 0x8f052u);
    X86_TICK(c, 16);
    // 08f052  leave 
    X86_AT(c, 0x8f052u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f053  ret 
    X86_AT(c, 0x8f053u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f020u, "ran off the end of a function");
}
void f_0008f054(X86Cpu& c) {
    X86_TICK(c, 7);
    // 08f054  call 0x8c91c
    X86_AT(c, 0x8f054u);
    push32(c, 0x8f059u); x86_call_known(c, 0x8c91cu, f_0008c91c); X86_RET(c, 0x8f059u);
    X86_TICK(c, 9);
    // 08f059  push 3
    X86_AT(c, 0x8f059u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08f05b  call 0x8c66c
    X86_AT(c, 0x8f05bu);
    push32(c, 0x8f060u); x86_call_known(c, 0x8c66cu, f_0008c66c); X86_RET(c, 0x8f060u);
    X86_TICK(c, 9);
    // 08f060  push 0
    X86_AT(c, 0x8f060u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f062  call 0x8c820
    X86_AT(c, 0x8f062u);
    push32(c, 0x8f067u); x86_call_known(c, 0x8c820u, f_0008c820); X86_RET(c, 0x8f067u);
    X86_TICK(c, 9);
    // 08f067  push 1
    X86_AT(c, 0x8f067u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08f069  call 0x8c658
    X86_AT(c, 0x8f069u);
    push32(c, 0x8f06eu); x86_call_known(c, 0x8c658u, f_0008c658); X86_RET(c, 0x8f06eu);
    X86_TICK(c, 9);
    // 08f06e  push 1
    X86_AT(c, 0x8f06eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08f070  call 0x8c690
    X86_AT(c, 0x8f070u);
    push32(c, 0x8f075u); x86_call_known(c, 0x8c690u, f_0008c690); X86_RET(c, 0x8f075u);
    X86_TICK(c, 9);
    // 08f075  push 0
    X86_AT(c, 0x8f075u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f077  call 0x8c658
    X86_AT(c, 0x8f077u);
    push32(c, 0x8f07cu); x86_call_known(c, 0x8c658u, f_0008c658); X86_RET(c, 0x8f07cu);
    X86_TICK(c, 7);
    // 08f07c  call 0x8c41c
    X86_AT(c, 0x8f07cu);
    push32(c, 0x8f081u); x86_call_known(c, 0x8c41cu, f_0008c41c); X86_RET(c, 0x8f081u);
    X86_TICK(c, 9);
    // 08f081  push 0x129c
    X86_AT(c, 0x8f081u);
    { uint32_t v = 0x129Cu; push32(c, v); }
    // 08f086  call 0x8efa0
    X86_AT(c, 0x8f086u);
    push32(c, 0x8f08bu); x86_call_known(c, 0x8efa0u, f_0008efa0); X86_RET(c, 0x8f08bu);
    X86_TICK(c, 7);
    // 08f08b  call 0x8f004
    X86_AT(c, 0x8f08bu);
    push32(c, 0x8f090u); x86_call_known(c, 0x8f004u, f_0008f004); X86_RET(c, 0x8f090u);
    X86_TICK(c, 9);
    // 08f090  push 2
    X86_AT(c, 0x8f090u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08f092  call 0x8c66c
    X86_AT(c, 0x8f092u);
    push32(c, 0x8f097u); x86_call_known(c, 0x8c66cu, f_0008c66c); X86_RET(c, 0x8f097u);
    X86_TICK(c, 7);
    // 08f097  call 0x8c0b4
    X86_AT(c, 0x8f097u);
    push32(c, 0x8f09cu); x86_call_known(c, 0x8c0b4u, f_0008c0b4); X86_RET(c, 0x8f09cu);
    X86_TICK(c, 7);
    // 08f09c  call 0x8aed4
    X86_AT(c, 0x8f09cu);
    push32(c, 0x8f0a1u); x86_call_known(c, 0x8aed4u, f_0008aed4); X86_RET(c, 0x8f0a1u);
    X86_TICK(c, 14);
    // 08f0a1  sub eax, eax
    X86_AT(c, 0x8f0a1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08f0a3  add esp, 0x1c
    X86_AT(c, 0x8f0a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 08f0a6  ret 
    X86_AT(c, 0x8f0a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f054u, "ran off the end of a function");
}
void f_0008f0a8(X86Cpu& c) {
    X86_TICK(c, 13);
    // 08f0a8  push ebp
    X86_AT(c, 0x8f0a8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08f0a9  mov ebp, esp
    X86_AT(c, 0x8f0a9u);
    c.r[5] = c.r[4];
    // 08f0ab  push 0
    X86_AT(c, 0x8f0abu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f0ad  call 0x8c66c
    X86_AT(c, 0x8f0adu);
    push32(c, 0x8f0b2u); x86_call_known(c, 0x8c66cu, f_0008c66c); X86_RET(c, 0x8f0b2u);
    X86_TICK(c, 9);
    // 08f0b2  push 1
    X86_AT(c, 0x8f0b2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08f0b4  call 0x8c658
    X86_AT(c, 0x8f0b4u);
    push32(c, 0x8f0b9u); x86_call_known(c, 0x8c658u, f_0008c658); X86_RET(c, 0x8f0b9u);
    X86_TICK(c, 36);
    // 08f0b9  push dword ptr [0x89530]
    X86_AT(c, 0x8f0b9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x89530u))); push32(c, v); }
    // 08f0bf  push dword ptr [0x8952c]
    X86_AT(c, 0x8f0bfu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8952Cu))); push32(c, v); }
    // 08f0c5  push 0x10
    X86_AT(c, 0x8f0c5u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 08f0c7  push 0x1f
    X86_AT(c, 0x8f0c7u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 08f0c9  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8f0c9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08f0cc  lea edx, [eax + eax*4]
    X86_AT(c, 0x8f0ccu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 08f0cf  lea edx, [eax + edx*4]
    X86_AT(c, 0x8f0cfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 08f0d2  shl edx, 0xc
    X86_AT(c, 0x8f0d2u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 08f0d5  add edx, 0x3552c
    X86_AT(c, 0x8f0d5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x3552Cu, 0, 4); }
    // 08f0db  push edx
    X86_AT(c, 0x8f0dbu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08f0dc  call 0x8d000
    X86_AT(c, 0x8f0dcu);
    push32(c, 0x8f0e1u); x86_call_known(c, 0x8d000u, f_0008d000); X86_RET(c, 0x8f0e1u);
    X86_TICK(c, 9);
    // 08f0e1  push 0
    X86_AT(c, 0x8f0e1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f0e3  call 0x8c658
    X86_AT(c, 0x8f0e3u);
    push32(c, 0x8f0e8u); x86_call_known(c, 0x8c658u, f_0008c658); X86_RET(c, 0x8f0e8u);
    X86_TICK(c, 7);
    // 08f0e8  call 0x8c41c
    X86_AT(c, 0x8f0e8u);
    push32(c, 0x8f0edu); x86_call_known(c, 0x8c41cu, f_0008c41c); X86_RET(c, 0x8f0edu);
    X86_TICK(c, 16);
    // 08f0ed  leave 
    X86_AT(c, 0x8f0edu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08f0ee  ret 
    X86_AT(c, 0x8f0eeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f0a8u, "ran off the end of a function");
}
void f_0008f0f0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08f0f0  push 0
    X86_AT(c, 0x8f0f0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f0f2  call 0x8f0a8
    X86_AT(c, 0x8f0f2u);
    push32(c, 0x8f0f7u); x86_call_known(c, 0x8f0a8u, f_0008f0a8); X86_RET(c, 0x8f0f7u);
    X86_TICK(c, 9);
    // 08f0f7  push 0
    X86_AT(c, 0x8f0f7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f0f9  call 0x8d6c0
    X86_AT(c, 0x8f0f9u);
    push32(c, 0x8f0feu); x86_call_known(c, 0x8d6c0u, f_0008d6c0); X86_RET(c, 0x8f0feu);
    X86_TICK(c, 9);
    // 08f0fe  push 2
    X86_AT(c, 0x8f0feu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08f100  call 0x8c66c
    X86_AT(c, 0x8f100u);
    push32(c, 0x8f105u); x86_call_known(c, 0x8c66cu, f_0008c66c); X86_RET(c, 0x8f105u);
    X86_TICK(c, 9);
    // 08f105  push 0
    X86_AT(c, 0x8f105u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f107  call 0x8d874
    X86_AT(c, 0x8f107u);
    push32(c, 0x8f10cu); x86_call_known(c, 0x8d874u, f_0008d874); X86_RET(c, 0x8f10cu);
    X86_TICK(c, 13);
    // 08f10c  push 0
    X86_AT(c, 0x8f10cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f10e  push 0
    X86_AT(c, 0x8f10eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f110  push 0
    X86_AT(c, 0x8f110u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f112  call 0x8dfe4
    X86_AT(c, 0x8f112u);
    push32(c, 0x8f117u); x86_call_known(c, 0x8dfe4u, f_0008dfe4); X86_RET(c, 0x8f117u);
    X86_TICK(c, 11);
    // 08f117  push 0x12b4
    X86_AT(c, 0x8f117u);
    { uint32_t v = 0x12B4u; push32(c, v); }
    // 08f11c  push 0
    X86_AT(c, 0x8f11cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f11e  call 0x8da34
    X86_AT(c, 0x8f11eu);
    push32(c, 0x8f123u); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8f123u);
    X86_TICK(c, 9);
    // 08f123  push 0x32
    X86_AT(c, 0x8f123u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08f125  call 0x8ef4c
    X86_AT(c, 0x8f125u);
    push32(c, 0x8f12au); x86_call_known(c, 0x8ef4cu, f_0008ef4c); X86_RET(c, 0x8f12au);
    X86_TICK(c, 9);
    // 08f12a  push 0
    X86_AT(c, 0x8f12au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f12c  call 0x8d9ec
    X86_AT(c, 0x8f12cu);
    push32(c, 0x8f131u); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f131u);
    X86_TICK(c, 11);
    // 08f131  push 0x130c
    X86_AT(c, 0x8f131u);
    { uint32_t v = 0x130Cu; push32(c, v); }
    // 08f136  push 0
    X86_AT(c, 0x8f136u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f138  call 0x8da34
    X86_AT(c, 0x8f138u);
    push32(c, 0x8f13du); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8f13du);
    X86_TICK(c, 9);
    // 08f13d  push 0
    X86_AT(c, 0x8f13du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f13f  call 0x8d9ec
    X86_AT(c, 0x8f13fu);
    push32(c, 0x8f144u); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f144u);
    X86_TICK(c, 9);
    // 08f144  push 0x32
    X86_AT(c, 0x8f144u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08f146  call 0x8ef4c
    X86_AT(c, 0x8f146u);
    push32(c, 0x8f14bu); x86_call_known(c, 0x8ef4cu, f_0008ef4c); X86_RET(c, 0x8f14bu);
    X86_TICK(c, 13);
    // 08f14b  add esp, 0x3c
    X86_AT(c, 0x8f14bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 08f14e  push 0x1390
    X86_AT(c, 0x8f14eu);
    { uint32_t v = 0x1390u; push32(c, v); }
    // 08f153  push 0
    X86_AT(c, 0x8f153u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f155  call 0x8da34
    X86_AT(c, 0x8f155u);
    push32(c, 0x8f15au); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8f15au);
    X86_TICK(c, 9);
    // 08f15a  push 0
    X86_AT(c, 0x8f15au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f15c  call 0x8d9ec
    X86_AT(c, 0x8f15cu);
    push32(c, 0x8f161u); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f161u);
    X86_TICK(c, 9);
    // 08f161  push 0x32
    X86_AT(c, 0x8f161u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08f163  call 0x8ef4c
    X86_AT(c, 0x8f163u);
    push32(c, 0x8f168u); x86_call_known(c, 0x8ef4cu, f_0008ef4c); X86_RET(c, 0x8f168u);
    X86_TICK(c, 11);
    // 08f168  push 0x1404
    X86_AT(c, 0x8f168u);
    { uint32_t v = 0x1404u; push32(c, v); }
    // 08f16d  push 0
    X86_AT(c, 0x8f16du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f16f  call 0x8da34
    X86_AT(c, 0x8f16fu);
    push32(c, 0x8f174u); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8f174u);
    X86_TICK(c, 9);
    // 08f174  push 0
    X86_AT(c, 0x8f174u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f176  call 0x8d9ec
    X86_AT(c, 0x8f176u);
    push32(c, 0x8f17bu); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f17bu);
    X86_TICK(c, 9);
    // 08f17b  push 0x32
    X86_AT(c, 0x8f17bu);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08f17d  call 0x8ef4c
    X86_AT(c, 0x8f17du);
    push32(c, 0x8f182u); x86_call_known(c, 0x8ef4cu, f_0008ef4c); X86_RET(c, 0x8f182u);
    X86_TICK(c, 11);
    // 08f182  push 0x1488
    X86_AT(c, 0x8f182u);
    { uint32_t v = 0x1488u; push32(c, v); }
    // 08f187  push 0
    X86_AT(c, 0x8f187u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f189  call 0x8da34
    X86_AT(c, 0x8f189u);
    push32(c, 0x8f18eu); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8f18eu);
    X86_TICK(c, 9);
    // 08f18e  push 0
    X86_AT(c, 0x8f18eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f190  call 0x8d9ec
    X86_AT(c, 0x8f190u);
    push32(c, 0x8f195u); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f195u);
    X86_TICK(c, 9);
    // 08f195  push 0x4b
    X86_AT(c, 0x8f195u);
    { uint32_t v = 0x4Bu; push32(c, v); }
    // 08f197  call 0x8ef4c
    X86_AT(c, 0x8f197u);
    push32(c, 0x8f19cu); x86_call_known(c, 0x8ef4cu, f_0008ef4c); X86_RET(c, 0x8f19cu);
    X86_TICK(c, 9);
    // 08f19c  push 1
    X86_AT(c, 0x8f19cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08f19e  call 0x8f0a8
    X86_AT(c, 0x8f19eu);
    push32(c, 0x8f1a3u); x86_call_known(c, 0x8f0a8u, f_0008f0a8); X86_RET(c, 0x8f1a3u);
    X86_TICK(c, 11);
    // 08f1a3  add esp, 0x34
    X86_AT(c, 0x8f1a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 08f1a6  push 0
    X86_AT(c, 0x8f1a6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f1a8  call 0x8d874
    X86_AT(c, 0x8f1a8u);
    push32(c, 0x8f1adu); x86_call_known(c, 0x8d874u, f_0008d874); X86_RET(c, 0x8f1adu);
    X86_TICK(c, 13);
    // 08f1ad  push 0
    X86_AT(c, 0x8f1adu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f1af  push 0
    X86_AT(c, 0x8f1afu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f1b1  push 0
    X86_AT(c, 0x8f1b1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f1b3  call 0x8dfe4
    X86_AT(c, 0x8f1b3u);
    push32(c, 0x8f1b8u); x86_call_known(c, 0x8dfe4u, f_0008dfe4); X86_RET(c, 0x8f1b8u);
    X86_TICK(c, 9);
    // 08f1b8  push 2
    X86_AT(c, 0x8f1b8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08f1ba  call 0x8c66c
    X86_AT(c, 0x8f1bau);
    push32(c, 0x8f1bfu); x86_call_known(c, 0x8c66cu, f_0008c66c); X86_RET(c, 0x8f1bfu);
    X86_TICK(c, 11);
    // 08f1bf  push 0x14fc
    X86_AT(c, 0x8f1bfu);
    { uint32_t v = 0x14FCu; push32(c, v); }
    // 08f1c4  push 0
    X86_AT(c, 0x8f1c4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f1c6  call 0x8da34
    X86_AT(c, 0x8f1c6u);
    push32(c, 0x8f1cbu); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8f1cbu);
    X86_TICK(c, 9);
    // 08f1cb  push 0x1e
    X86_AT(c, 0x8f1cbu);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 08f1cd  call 0x8ef4c
    X86_AT(c, 0x8f1cdu);
    push32(c, 0x8f1d2u); x86_call_known(c, 0x8ef4cu, f_0008ef4c); X86_RET(c, 0x8f1d2u);
    X86_TICK(c, 9);
    // 08f1d2  push 0
    X86_AT(c, 0x8f1d2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f1d4  call 0x8d9ec
    X86_AT(c, 0x8f1d4u);
    push32(c, 0x8f1d9u); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f1d9u);
    X86_TICK(c, 11);
    // 08f1d9  push 0x1520
    X86_AT(c, 0x8f1d9u);
    { uint32_t v = 0x1520u; push32(c, v); }
    // 08f1de  push 0
    X86_AT(c, 0x8f1deu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f1e0  call 0x8da34
    X86_AT(c, 0x8f1e0u);
    push32(c, 0x8f1e5u); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8f1e5u);
    X86_TICK(c, 9);
    // 08f1e5  push 0x32
    X86_AT(c, 0x8f1e5u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08f1e7  call 0x8ef4c
    X86_AT(c, 0x8f1e7u);
    push32(c, 0x8f1ecu); x86_call_known(c, 0x8ef4cu, f_0008ef4c); X86_RET(c, 0x8f1ecu);
    X86_TICK(c, 9);
    // 08f1ec  push 0
    X86_AT(c, 0x8f1ecu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f1ee  call 0x8d9ec
    X86_AT(c, 0x8f1eeu);
    push32(c, 0x8f1f3u); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f1f3u);
    X86_TICK(c, 11);
    // 08f1f3  push 0x1574
    X86_AT(c, 0x8f1f3u);
    { uint32_t v = 0x1574u; push32(c, v); }
    // 08f1f8  push 0
    X86_AT(c, 0x8f1f8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f1fa  call 0x8da34
    X86_AT(c, 0x8f1fau);
    push32(c, 0x8f1ffu); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8f1ffu);
    X86_TICK(c, 11);
    // 08f1ff  add esp, 0x3c
    X86_AT(c, 0x8f1ffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 08f202  push 0
    X86_AT(c, 0x8f202u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f204  call 0x8d9ec
    X86_AT(c, 0x8f204u);
    push32(c, 0x8f209u); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f209u);
    X86_TICK(c, 9);
    // 08f209  push 0x32
    X86_AT(c, 0x8f209u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08f20b  call 0x8ef4c
    X86_AT(c, 0x8f20bu);
    push32(c, 0x8f210u); x86_call_known(c, 0x8ef4cu, f_0008ef4c); X86_RET(c, 0x8f210u);
    X86_TICK(c, 11);
    // 08f210  push 0x15d0
    X86_AT(c, 0x8f210u);
    { uint32_t v = 0x15D0u; push32(c, v); }
    // 08f215  push 0
    X86_AT(c, 0x8f215u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f217  call 0x8da34
    X86_AT(c, 0x8f217u);
    push32(c, 0x8f21cu); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8f21cu);
    X86_TICK(c, 9);
    // 08f21c  push 0
    X86_AT(c, 0x8f21cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f21e  call 0x8d9ec
    X86_AT(c, 0x8f21eu);
    push32(c, 0x8f223u); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f223u);
    X86_TICK(c, 9);
    // 08f223  push 0
    X86_AT(c, 0x8f223u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f225  call 0x8d9ec
    X86_AT(c, 0x8f225u);
    push32(c, 0x8f22au); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f22au);
    X86_TICK(c, 9);
    // 08f22a  push 0x1e
    X86_AT(c, 0x8f22au);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 08f22c  call 0x8ef4c
    X86_AT(c, 0x8f22cu);
    push32(c, 0x8f231u); x86_call_known(c, 0x8ef4cu, f_0008ef4c); X86_RET(c, 0x8f231u);
    X86_TICK(c, 11);
    // 08f231  push 0x1614
    X86_AT(c, 0x8f231u);
    { uint32_t v = 0x1614u; push32(c, v); }
    // 08f236  push 0
    X86_AT(c, 0x8f236u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f238  call 0x8da34
    X86_AT(c, 0x8f238u);
    push32(c, 0x8f23du); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8f23du);
    X86_TICK(c, 9);
    // 08f23d  push 0x32
    X86_AT(c, 0x8f23du);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08f23f  call 0x8ef4c
    X86_AT(c, 0x8f23fu);
    push32(c, 0x8f244u); x86_call_known(c, 0x8ef4cu, f_0008ef4c); X86_RET(c, 0x8f244u);
    X86_TICK(c, 9);
    // 08f244  push 0
    X86_AT(c, 0x8f244u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f246  call 0x8d9ec
    X86_AT(c, 0x8f246u);
    push32(c, 0x8f24bu); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f24bu);
    X86_TICK(c, 11);
    // 08f24b  push 0x16ac
    X86_AT(c, 0x8f24bu);
    { uint32_t v = 0x16ACu; push32(c, v); }
    // 08f250  push 0
    X86_AT(c, 0x8f250u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f252  call 0x8da34
    X86_AT(c, 0x8f252u);
    push32(c, 0x8f257u); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8f257u);
    X86_TICK(c, 9);
    // 08f257  push 0
    X86_AT(c, 0x8f257u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f259  call 0x8d9ec
    X86_AT(c, 0x8f259u);
    push32(c, 0x8f25eu); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f25eu);
    X86_TICK(c, 11);
    // 08f25e  add esp, 0x38
    X86_AT(c, 0x8f25eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 08f261  push 0
    X86_AT(c, 0x8f261u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f263  call 0x8d9ec
    X86_AT(c, 0x8f263u);
    push32(c, 0x8f268u); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f268u);
    X86_TICK(c, 9);
    // 08f268  push 0x19
    X86_AT(c, 0x8f268u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 08f26a  call 0x8ef4c
    X86_AT(c, 0x8f26au);
    push32(c, 0x8f26fu); x86_call_known(c, 0x8ef4cu, f_0008ef4c); X86_RET(c, 0x8f26fu);
    X86_TICK(c, 11);
    // 08f26f  push 0x16e4
    X86_AT(c, 0x8f26fu);
    { uint32_t v = 0x16E4u; push32(c, v); }
    // 08f274  push 0
    X86_AT(c, 0x8f274u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f276  call 0x8da34
    X86_AT(c, 0x8f276u);
    push32(c, 0x8f27bu); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8f27bu);
    X86_TICK(c, 9);
    // 08f27b  push 0
    X86_AT(c, 0x8f27bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f27d  call 0x8d9ec
    X86_AT(c, 0x8f27du);
    push32(c, 0x8f282u); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f282u);
    X86_TICK(c, 9);
    // 08f282  push 0x4b
    X86_AT(c, 0x8f282u);
    { uint32_t v = 0x4Bu; push32(c, v); }
    // 08f284  call 0x8ef4c
    X86_AT(c, 0x8f284u);
    push32(c, 0x8f289u); x86_call_known(c, 0x8ef4cu, f_0008ef4c); X86_RET(c, 0x8f289u);
    X86_TICK(c, 9);
    // 08f289  push 2
    X86_AT(c, 0x8f289u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08f28b  call 0x8f0a8
    X86_AT(c, 0x8f28bu);
    push32(c, 0x8f290u); x86_call_known(c, 0x8f0a8u, f_0008f0a8); X86_RET(c, 0x8f290u);
    X86_TICK(c, 9);
    // 08f290  push 0
    X86_AT(c, 0x8f290u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f292  call 0x8d874
    X86_AT(c, 0x8f292u);
    push32(c, 0x8f297u); x86_call_known(c, 0x8d874u, f_0008d874); X86_RET(c, 0x8f297u);
    X86_TICK(c, 13);
    // 08f297  push 0
    X86_AT(c, 0x8f297u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f299  push 0
    X86_AT(c, 0x8f299u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f29b  push 0
    X86_AT(c, 0x8f29bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f29d  call 0x8dfe4
    X86_AT(c, 0x8f29du);
    push32(c, 0x8f2a2u); x86_call_known(c, 0x8dfe4u, f_0008dfe4); X86_RET(c, 0x8f2a2u);
    X86_TICK(c, 9);
    // 08f2a2  push 2
    X86_AT(c, 0x8f2a2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08f2a4  call 0x8c66c
    X86_AT(c, 0x8f2a4u);
    push32(c, 0x8f2a9u); x86_call_known(c, 0x8c66cu, f_0008c66c); X86_RET(c, 0x8f2a9u);
    X86_TICK(c, 11);
    // 08f2a9  push 0x173c
    X86_AT(c, 0x8f2a9u);
    { uint32_t v = 0x173Cu; push32(c, v); }
    // 08f2ae  push 0
    X86_AT(c, 0x8f2aeu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f2b0  call 0x8da34
    X86_AT(c, 0x8f2b0u);
    push32(c, 0x8f2b5u); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8f2b5u);
    X86_TICK(c, 9);
    // 08f2b5  push 0x32
    X86_AT(c, 0x8f2b5u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08f2b7  call 0x8ef4c
    X86_AT(c, 0x8f2b7u);
    push32(c, 0x8f2bcu); x86_call_known(c, 0x8ef4cu, f_0008ef4c); X86_RET(c, 0x8f2bcu);
    X86_TICK(c, 11);
    // 08f2bc  add esp, 0x3c
    X86_AT(c, 0x8f2bcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 08f2bf  push 0
    X86_AT(c, 0x8f2bfu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f2c1  call 0x8d9ec
    X86_AT(c, 0x8f2c1u);
    push32(c, 0x8f2c6u); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f2c6u);
    X86_TICK(c, 11);
    // 08f2c6  push 0x1794
    X86_AT(c, 0x8f2c6u);
    { uint32_t v = 0x1794u; push32(c, v); }
    // 08f2cb  push 0
    X86_AT(c, 0x8f2cbu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f2cd  call 0x8da34
    X86_AT(c, 0x8f2cdu);
    push32(c, 0x8f2d2u); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8f2d2u);
    X86_TICK(c, 9);
    // 08f2d2  push 0
    X86_AT(c, 0x8f2d2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f2d4  call 0x8d9ec
    X86_AT(c, 0x8f2d4u);
    push32(c, 0x8f2d9u); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f2d9u);
    X86_TICK(c, 9);
    // 08f2d9  push 0x32
    X86_AT(c, 0x8f2d9u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08f2db  call 0x8ef4c
    X86_AT(c, 0x8f2dbu);
    push32(c, 0x8f2e0u); x86_call_known(c, 0x8ef4cu, f_0008ef4c); X86_RET(c, 0x8f2e0u);
    X86_TICK(c, 11);
    // 08f2e0  push 0x17f0
    X86_AT(c, 0x8f2e0u);
    { uint32_t v = 0x17F0u; push32(c, v); }
    // 08f2e5  push 0
    X86_AT(c, 0x8f2e5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f2e7  call 0x8da34
    X86_AT(c, 0x8f2e7u);
    push32(c, 0x8f2ecu); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8f2ecu);
    X86_TICK(c, 9);
    // 08f2ec  push 0
    X86_AT(c, 0x8f2ecu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f2ee  call 0x8d9ec
    X86_AT(c, 0x8f2eeu);
    push32(c, 0x8f2f3u); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f2f3u);
    X86_TICK(c, 9);
    // 08f2f3  push 0x32
    X86_AT(c, 0x8f2f3u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08f2f5  call 0x8ef4c
    X86_AT(c, 0x8f2f5u);
    push32(c, 0x8f2fau); x86_call_known(c, 0x8ef4cu, f_0008ef4c); X86_RET(c, 0x8f2fau);
    X86_TICK(c, 11);
    // 08f2fa  push 0x1858
    X86_AT(c, 0x8f2fau);
    { uint32_t v = 0x1858u; push32(c, v); }
    // 08f2ff  push 0
    X86_AT(c, 0x8f2ffu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f301  call 0x8da34
    X86_AT(c, 0x8f301u);
    push32(c, 0x8f306u); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8f306u);
    X86_TICK(c, 9);
    // 08f306  push 0
    X86_AT(c, 0x8f306u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f308  call 0x8d9ec
    X86_AT(c, 0x8f308u);
    push32(c, 0x8f30du); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f30du);
    X86_TICK(c, 9);
    // 08f30d  push 0
    X86_AT(c, 0x8f30du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f30f  call 0x8d9ec
    X86_AT(c, 0x8f30fu);
    push32(c, 0x8f314u); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f314u);
    X86_TICK(c, 9);
    // 08f314  push 0x1e
    X86_AT(c, 0x8f314u);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 08f316  call 0x8ef4c
    X86_AT(c, 0x8f316u);
    push32(c, 0x8f31bu); x86_call_known(c, 0x8ef4cu, f_0008ef4c); X86_RET(c, 0x8f31bu);
    X86_TICK(c, 13);
    // 08f31b  add esp, 0x38
    X86_AT(c, 0x8f31bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 08f31e  push 0x189c
    X86_AT(c, 0x8f31eu);
    { uint32_t v = 0x189Cu; push32(c, v); }
    // 08f323  push 0
    X86_AT(c, 0x8f323u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f325  call 0x8da34
    X86_AT(c, 0x8f325u);
    push32(c, 0x8f32au); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8f32au);
    X86_TICK(c, 9);
    // 08f32a  push 0
    X86_AT(c, 0x8f32au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f32c  call 0x8d9ec
    X86_AT(c, 0x8f32cu);
    push32(c, 0x8f331u); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f331u);
    X86_TICK(c, 11);
    // 08f331  push 0x18dc
    X86_AT(c, 0x8f331u);
    { uint32_t v = 0x18DCu; push32(c, v); }
    // 08f336  push 0
    X86_AT(c, 0x8f336u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f338  call 0x8da34
    X86_AT(c, 0x8f338u);
    push32(c, 0x8f33du); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8f33du);
    X86_TICK(c, 9);
    // 08f33d  push 0x4b
    X86_AT(c, 0x8f33du);
    { uint32_t v = 0x4Bu; push32(c, v); }
    // 08f33f  call 0x8ef4c
    X86_AT(c, 0x8f33fu);
    push32(c, 0x8f344u); x86_call_known(c, 0x8ef4cu, f_0008ef4c); X86_RET(c, 0x8f344u);
    X86_TICK(c, 9);
    // 08f344  push 3
    X86_AT(c, 0x8f344u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08f346  call 0x8f0a8
    X86_AT(c, 0x8f346u);
    push32(c, 0x8f34bu); x86_call_known(c, 0x8f0a8u, f_0008f0a8); X86_RET(c, 0x8f34bu);
    X86_TICK(c, 9);
    // 08f34b  push 0
    X86_AT(c, 0x8f34bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f34d  call 0x8d874
    X86_AT(c, 0x8f34du);
    push32(c, 0x8f352u); x86_call_known(c, 0x8d874u, f_0008d874); X86_RET(c, 0x8f352u);
    X86_TICK(c, 13);
    // 08f352  push 0
    X86_AT(c, 0x8f352u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f354  push 0
    X86_AT(c, 0x8f354u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f356  push 0
    X86_AT(c, 0x8f356u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f358  call 0x8dfe4
    X86_AT(c, 0x8f358u);
    push32(c, 0x8f35du); x86_call_known(c, 0x8dfe4u, f_0008dfe4); X86_RET(c, 0x8f35du);
    X86_TICK(c, 9);
    // 08f35d  push 2
    X86_AT(c, 0x8f35du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08f35f  call 0x8c66c
    X86_AT(c, 0x8f35fu);
    push32(c, 0x8f364u); x86_call_known(c, 0x8c66cu, f_0008c66c); X86_RET(c, 0x8f364u);
    X86_TICK(c, 11);
    // 08f364  push 0x1960
    X86_AT(c, 0x8f364u);
    { uint32_t v = 0x1960u; push32(c, v); }
    // 08f369  push 0
    X86_AT(c, 0x8f369u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f36b  call 0x8da34
    X86_AT(c, 0x8f36bu);
    push32(c, 0x8f370u); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8f370u);
    X86_TICK(c, 9);
    // 08f370  push 0x28
    X86_AT(c, 0x8f370u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 08f372  call 0x8ef4c
    X86_AT(c, 0x8f372u);
    push32(c, 0x8f377u); x86_call_known(c, 0x8ef4cu, f_0008ef4c); X86_RET(c, 0x8f377u);
    X86_TICK(c, 11);
    // 08f377  add esp, 0x3c
    X86_AT(c, 0x8f377u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 08f37a  push 0
    X86_AT(c, 0x8f37au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f37c  call 0x8d9ec
    X86_AT(c, 0x8f37cu);
    push32(c, 0x8f381u); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f381u);
    X86_TICK(c, 11);
    // 08f381  push 0x19bc
    X86_AT(c, 0x8f381u);
    { uint32_t v = 0x19BCu; push32(c, v); }
    // 08f386  push 0
    X86_AT(c, 0x8f386u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f388  call 0x8da34
    X86_AT(c, 0x8f388u);
    push32(c, 0x8f38du); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8f38du);
    X86_TICK(c, 9);
    // 08f38d  push 0
    X86_AT(c, 0x8f38du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f38f  call 0x8d9ec
    X86_AT(c, 0x8f38fu);
    push32(c, 0x8f394u); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f394u);
    X86_TICK(c, 11);
    // 08f394  push 0x19f4
    X86_AT(c, 0x8f394u);
    { uint32_t v = 0x19F4u; push32(c, v); }
    // 08f399  push 0
    X86_AT(c, 0x8f399u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f39b  call 0x8da34
    X86_AT(c, 0x8f39bu);
    push32(c, 0x8f3a0u); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8f3a0u);
    X86_TICK(c, 9);
    // 08f3a0  push 0x32
    X86_AT(c, 0x8f3a0u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08f3a2  call 0x8ef4c
    X86_AT(c, 0x8f3a2u);
    push32(c, 0x8f3a7u); x86_call_known(c, 0x8ef4cu, f_0008ef4c); X86_RET(c, 0x8f3a7u);
    X86_TICK(c, 9);
    // 08f3a7  push 0
    X86_AT(c, 0x8f3a7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f3a9  call 0x8d9ec
    X86_AT(c, 0x8f3a9u);
    push32(c, 0x8f3aeu); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f3aeu);
    X86_TICK(c, 11);
    // 08f3ae  push 0x1a54
    X86_AT(c, 0x8f3aeu);
    { uint32_t v = 0x1A54u; push32(c, v); }
    // 08f3b3  push 0
    X86_AT(c, 0x8f3b3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f3b5  call 0x8da34
    X86_AT(c, 0x8f3b5u);
    push32(c, 0x8f3bau); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8f3bau);
    X86_TICK(c, 9);
    // 08f3ba  push 0
    X86_AT(c, 0x8f3bau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f3bc  call 0x8d9ec
    X86_AT(c, 0x8f3bcu);
    push32(c, 0x8f3c1u); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f3c1u);
    X86_TICK(c, 9);
    // 08f3c1  push 0
    X86_AT(c, 0x8f3c1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f3c3  call 0x8d9ec
    X86_AT(c, 0x8f3c3u);
    push32(c, 0x8f3c8u); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f3c8u);
    X86_TICK(c, 9);
    // 08f3c8  push 0x1e
    X86_AT(c, 0x8f3c8u);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 08f3ca  call 0x8ef4c
    X86_AT(c, 0x8f3cau);
    push32(c, 0x8f3cfu); x86_call_known(c, 0x8ef4cu, f_0008ef4c); X86_RET(c, 0x8f3cfu);
    X86_TICK(c, 11);
    // 08f3cf  push 0x1a84
    X86_AT(c, 0x8f3cfu);
    { uint32_t v = 0x1A84u; push32(c, v); }
    // 08f3d4  push 0
    X86_AT(c, 0x8f3d4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f3d6  call 0x8da34
    X86_AT(c, 0x8f3d6u);
    push32(c, 0x8f3dbu); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8f3dbu);
    X86_TICK(c, 11);
    // 08f3db  add esp, 0x3c
    X86_AT(c, 0x8f3dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 08f3de  push 0x1e
    X86_AT(c, 0x8f3deu);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 08f3e0  call 0x8ef4c
    X86_AT(c, 0x8f3e0u);
    push32(c, 0x8f3e5u); x86_call_known(c, 0x8ef4cu, f_0008ef4c); X86_RET(c, 0x8f3e5u);
    X86_TICK(c, 9);
    // 08f3e5  push 0
    X86_AT(c, 0x8f3e5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f3e7  call 0x8d9ec
    X86_AT(c, 0x8f3e7u);
    push32(c, 0x8f3ecu); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f3ecu);
    X86_TICK(c, 11);
    // 08f3ec  push 0x1aa8
    X86_AT(c, 0x8f3ecu);
    { uint32_t v = 0x1AA8u; push32(c, v); }
    // 08f3f1  push 0
    X86_AT(c, 0x8f3f1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f3f3  call 0x8da34
    X86_AT(c, 0x8f3f3u);
    push32(c, 0x8f3f8u); x86_call_known(c, 0x8da34u, f_0008da34); X86_RET(c, 0x8f3f8u);
    X86_TICK(c, 9);
    // 08f3f8  push 0xc8
    X86_AT(c, 0x8f3f8u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 08f3fd  call 0x8ef4c
    X86_AT(c, 0x8f3fdu);
    push32(c, 0x8f402u); x86_call_known(c, 0x8ef4cu, f_0008ef4c); X86_RET(c, 0x8f402u);
    X86_TICK(c, 9);
    // 08f402  push 0
    X86_AT(c, 0x8f402u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f404  call 0x8d9ec
    X86_AT(c, 0x8f404u);
    push32(c, 0x8f409u); x86_call_known(c, 0x8d9ecu, f_0008d9ec); X86_RET(c, 0x8f409u);
    X86_TICK(c, 12);
    // 08f409  add esp, 0x18
    X86_AT(c, 0x8f409u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 08f40c  ret 
    X86_AT(c, 0x8f40cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f0f0u, "ran off the end of a function");
}
}
