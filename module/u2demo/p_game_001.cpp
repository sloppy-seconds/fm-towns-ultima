#include "p_game_funcs.h"
namespace p_game {
void f_0008c8a8(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08c8a8  push ebp
    X86_AT(c, 0x8c8a8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c8a9  mov ebp, esp
    X86_AT(c, 0x8c8a9u);
    c.r[5] = c.r[4];
    // 08c8ab  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0x8c8abu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c8af  push eax
    X86_AT(c, 0x8c8afu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c8b0  push 1
    X86_AT(c, 0x8c8b0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c8b2  push 0x34628
    X86_AT(c, 0x8c8b2u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c8b7  call 0x18e
    X86_AT(c, 0x8c8b7u);
    push32(c, 0x8c8bcu); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c8bcu);
    X86_TICK(c, 9);
    // 08c8bc  push 0x34628
    X86_AT(c, 0x8c8bcu);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c8c1  call 0x498
    X86_AT(c, 0x8c8c1u);
    push32(c, 0x8c8c6u); x86_call_known(c, 0x498u, f_00000498); X86_RET(c, 0x8c8c6u);
    X86_TICK(c, 16);
    // 08c8c6  leave 
    X86_AT(c, 0x8c8c6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c8c7  ret 
    X86_AT(c, 0x8c8c7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c8a8u, "ran off the end of a function");
}
void f_0008c8fc(X86Cpu& c) {
    X86_TICK(c, 41);
    // 08c8fc  push ebp
    X86_AT(c, 0x8c8fcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c8fd  mov ebp, esp
    X86_AT(c, 0x8c8fdu);
    c.r[5] = c.r[4];
    // 08c8ff  mov word ptr [0x34c28], 2
    X86_AT(c, 0x8c8ffu);
    wr16((c.sbase[3] + (uint32_t)(0x34C28u)), 0x2u);
    // 08c908  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0x8c908u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08c90c  mov word ptr [0x34c2a], ax
    X86_AT(c, 0x8c90cu);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Au)), (c.r[0] & 0xFFFFu));
    // 08c912  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0x8c912u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08c916  mov word ptr [0x34c2c], ax
    X86_AT(c, 0x8c916u);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Cu)), (c.r[0] & 0xFFFFu));
    // 08c91c  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0x8c91cu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 08c920  mov word ptr [0x34c2e], ax
    X86_AT(c, 0x8c920u);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Eu)), (c.r[0] & 0xFFFFu));
    // 08c926  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0x8c926u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 08c92a  mov word ptr [0x34c30], ax
    X86_AT(c, 0x8c92au);
    wr16((c.sbase[3] + (uint32_t)(0x34C30u)), (c.r[0] & 0xFFFFu));
    // 08c930  push 0x34c28
    X86_AT(c, 0x8c930u);
    { uint32_t v = 0x34C28u; push32(c, v); }
    // 08c935  push 0x34628
    X86_AT(c, 0x8c935u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08c93a  call 0x789
    X86_AT(c, 0x8c93au);
    push32(c, 0x8c93fu); x86_call_known(c, 0x789u, f_00000789); X86_RET(c, 0x8c93fu);
    X86_TICK(c, 16);
    // 08c93f  leave 
    X86_AT(c, 0x8c93fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c940  ret 
    X86_AT(c, 0x8c940u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c8fcu, "ran off the end of a function");
}
void f_0008ca1c(X86Cpu& c) {
    X86_TICK(c, 24);
    // 08ca1c  push ebp
    X86_AT(c, 0x8ca1cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08ca1d  mov ebp, esp
    X86_AT(c, 0x8ca1du);
    c.r[5] = c.r[4];
    // 08ca1f  mov ax, word ptr [0x34d2e]
    X86_AT(c, 0x8ca1fu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x34D2Eu))));
    // 08ca25  or al, 0x20
    X86_AT(c, 0x8ca25u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 08ca27  movsx eax, ax
    X86_AT(c, 0x8ca27u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 08ca2a  push eax
    X86_AT(c, 0x8ca2au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ca2b  push 0x34628
    X86_AT(c, 0x8ca2bu);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08ca30  call 0x245
    X86_AT(c, 0x8ca30u);
    push32(c, 0x8ca35u); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8ca35u);
    X86_TICK(c, 35);
    // 08ca35  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0x8ca35u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08ca39  mov word ptr [0x34c28], ax
    X86_AT(c, 0x8ca39u);
    wr16((c.sbase[3] + (uint32_t)(0x34C28u)), (c.r[0] & 0xFFFFu));
    // 08ca3f  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0x8ca3fu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08ca43  mov word ptr [0x34c2a], ax
    X86_AT(c, 0x8ca43u);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Au)), (c.r[0] & 0xFFFFu));
    // 08ca49  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0x8ca49u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 08ca4d  mov word ptr [0x34c2c], ax
    X86_AT(c, 0x8ca4du);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Cu)), (c.r[0] & 0xFFFFu));
    // 08ca53  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0x8ca53u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 08ca57  mov word ptr [0x34c2e], ax
    X86_AT(c, 0x8ca57u);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Eu)), (c.r[0] & 0xFFFFu));
    // 08ca5d  push 0x34c28
    X86_AT(c, 0x8ca5du);
    { uint32_t v = 0x34C28u; push32(c, v); }
    // 08ca62  push 0x34628
    X86_AT(c, 0x8ca62u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08ca67  call 0x83d
    X86_AT(c, 0x8ca67u);
    push32(c, 0x8ca6cu); x86_call_known(c, 0x83du, f_0000083d); X86_RET(c, 0x8ca6cu);
    X86_TICK(c, 17);
    // 08ca6c  movsx eax, word ptr [0x34d2e]
    X86_AT(c, 0x8ca6cu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34D2Eu)));
    // 08ca73  push eax
    X86_AT(c, 0x8ca73u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ca74  push 0x34628
    X86_AT(c, 0x8ca74u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08ca79  call 0x245
    X86_AT(c, 0x8ca79u);
    push32(c, 0x8ca7eu); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8ca7eu);
    X86_TICK(c, 16);
    // 08ca7e  leave 
    X86_AT(c, 0x8ca7eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08ca7f  ret 
    X86_AT(c, 0x8ca7fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ca1cu, "ran off the end of a function");
}
void f_0008ca80(X86Cpu& c) {
    X86_TICK(c, 19);
    // 08ca80  push ebp
    X86_AT(c, 0x8ca80u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08ca81  mov ebp, esp
    X86_AT(c, 0x8ca81u);
    c.r[5] = c.r[4];
    // 08ca83  push edi
    X86_AT(c, 0x8ca83u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08ca84  mov edi, dword ptr [ebp + 0x18]
    X86_AT(c, 0x8ca84u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 08ca87  push 0
    X86_AT(c, 0x8ca87u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ca89  call 0x8c4f4
    X86_AT(c, 0x8ca89u);
    push32(c, 0x8ca8eu); x86_call_known(c, 0x8c4f4u, f_0008c4f4); X86_RET(c, 0x8ca8eu);
    X86_TICK(c, 9);
    // 08ca8e  push edi
    X86_AT(c, 0x8ca8eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08ca8f  call 0x8c384
    X86_AT(c, 0x8ca8fu);
    push32(c, 0x8ca94u); x86_call_known(c, 0x8c384u, f_0008c384); X86_RET(c, 0x8ca94u);
    X86_TICK(c, 9);
    // 08ca94  push edi
    X86_AT(c, 0x8ca94u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08ca95  call 0x8c3b4
    X86_AT(c, 0x8ca95u);
    push32(c, 0x8ca9au); x86_call_known(c, 0x8c3b4u, f_0008c3b4); X86_RET(c, 0x8ca9au);
    X86_TICK(c, 35);
    // 08ca9a  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0x8ca9au);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08ca9e  mov word ptr [0x34c28], ax
    X86_AT(c, 0x8ca9eu);
    wr16((c.sbase[3] + (uint32_t)(0x34C28u)), (c.r[0] & 0xFFFFu));
    // 08caa4  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0x8caa4u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08caa8  mov word ptr [0x34c2a], ax
    X86_AT(c, 0x8caa8u);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Au)), (c.r[0] & 0xFFFFu));
    // 08caae  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0x8caaeu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 08cab2  mov word ptr [0x34c2c], ax
    X86_AT(c, 0x8cab2u);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Cu)), (c.r[0] & 0xFFFFu));
    // 08cab8  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0x8cab8u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 08cabc  mov word ptr [0x34c2e], ax
    X86_AT(c, 0x8cabcu);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Eu)), (c.r[0] & 0xFFFFu));
    // 08cac2  push 0x34c28
    X86_AT(c, 0x8cac2u);
    { uint32_t v = 0x34C28u; push32(c, v); }
    // 08cac7  push 0x34628
    X86_AT(c, 0x8cac7u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08cacc  call 0x83d
    X86_AT(c, 0x8caccu);
    push32(c, 0x8cad1u); x86_call_known(c, 0x83du, f_0000083d); X86_RET(c, 0x8cad1u);
    X86_TICK(c, 15);
    // 08cad1  movsx eax, word ptr [0x34d2c]
    X86_AT(c, 0x8cad1u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34D2Cu)));
    // 08cad8  push eax
    X86_AT(c, 0x8cad8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cad9  call 0x8c4f4
    X86_AT(c, 0x8cad9u);
    push32(c, 0x8cadeu); x86_call_known(c, 0x8c4f4u, f_0008c4f4); X86_RET(c, 0x8cadeu);
    X86_TICK(c, 17);
    // 08cade  movsx eax, word ptr [0x34d2e]
    X86_AT(c, 0x8cadeu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34D2Eu)));
    // 08cae5  push eax
    X86_AT(c, 0x8cae5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cae6  push 0x34628
    X86_AT(c, 0x8cae6u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08caeb  call 0x245
    X86_AT(c, 0x8caebu);
    push32(c, 0x8caf0u); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8caf0u);
    X86_TICK(c, 22);
    // 08caf0  add esp, 0x20
    X86_AT(c, 0x8caf0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 08caf3  pop edi
    X86_AT(c, 0x8caf3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08caf4  leave 
    X86_AT(c, 0x8caf4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08caf5  ret 
    X86_AT(c, 0x8caf5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ca80u, "ran off the end of a function");
}
void f_0008caf8(X86Cpu& c) {
    X86_TICK(c, 33);
    // 08caf8  push ebp
    X86_AT(c, 0x8caf8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08caf9  mov ebp, esp
    X86_AT(c, 0x8caf9u);
    c.r[5] = c.r[4];
    // 08cafb  sub esp, 0x24
    X86_AT(c, 0x8cafbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x24u, 0, 4); }
    // 08cafe  push ebx
    X86_AT(c, 0x8cafeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08caff  push esi
    X86_AT(c, 0x8caffu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08cb00  push edi
    X86_AT(c, 0x8cb00u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08cb01  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8cb01u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08cb04  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8cb04u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08cb07  mov ebx, dword ptr [ebp + 0x14]
    X86_AT(c, 0x8cb07u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 08cb0a  push 9
    X86_AT(c, 0x8cb0au);
    { uint32_t v = 0x9u; push32(c, v); }
    // 08cb0c  call 0x8c384
    X86_AT(c, 0x8cb0cu);
    push32(c, 0x8cb11u); x86_call_known(c, 0x8c384u, f_0008c384); X86_RET(c, 0x8cb11u);
    X86_TICK(c, 9);
    // 08cb11  push 9
    X86_AT(c, 0x8cb11u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 08cb13  call 0x8c3b4
    X86_AT(c, 0x8cb13u);
    push32(c, 0x8cb18u); x86_call_known(c, 0x8c3b4u, f_0008c3b4); X86_RET(c, 0x8cb18u);
    X86_TICK(c, 14);
    // 08cb18  add esp, 8
    X86_AT(c, 0x8cb18u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08cb1b  cmp dword ptr [ebp + 0x18], 0
    X86_AT(c, 0x8cb1bu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0x0u, 0, 4);
    // 08cb1f  je 0x8cb31
    X86_AT(c, 0x8cb1fu);
    if (x86_cc(c, 4)) { goto L_8cb31; }
    X86_TICK(c, 29);
    // 08cb21  lea eax, [ebx + esi*1]
    X86_AT(c, 0x8cb21u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[6]);
    // 08cb24  dec eax
    X86_AT(c, 0x8cb24u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08cb25  push eax
    X86_AT(c, 0x8cb25u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cb26  mov eax, edi
    X86_AT(c, 0x8cb26u);
    c.r[0] = c.r[7];
    // 08cb28  add eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8cb28u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 08cb2b  dec eax
    X86_AT(c, 0x8cb2bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08cb2c  push eax
    X86_AT(c, 0x8cb2cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cb2d  push esi
    X86_AT(c, 0x8cb2du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08cb2e  push edi
    X86_AT(c, 0x8cb2eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08cb2f  jmp 0x8cb3f
    X86_AT(c, 0x8cb2fu);
    goto L_8cb3f;
L_8cb31:
    X86_TICK(c, 8);
    // 08cb31  push 0x1df
    X86_AT(c, 0x8cb31u);
    { uint32_t v = 0x1DFu; push32(c, v); }
    // 08cb36  push 0x27f
    X86_AT(c, 0x8cb36u);
    { uint32_t v = 0x27Fu; push32(c, v); }
    // 08cb3b  push 0
    X86_AT(c, 0x8cb3bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08cb3d  push 0
    X86_AT(c, 0x8cb3du);
    { uint32_t v = 0x0u; push32(c, v); }
L_8cb3f:
    X86_TICK(c, 7);
    // 08cb3f  call 0x8ca1c
    X86_AT(c, 0x8cb3fu);
    push32(c, 0x8cb44u); x86_call_known(c, 0x8ca1cu, f_0008ca1c); X86_RET(c, 0x8cb44u);
    X86_TICK(c, 14);
    // 08cb44  add esp, 0x10
    X86_AT(c, 0x8cb44u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08cb47  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x8cb47u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 08cb4a  call 0x8c384
    X86_AT(c, 0x8cb4au);
    push32(c, 0x8cb4fu); x86_call_known(c, 0x8c384u, f_0008c384); X86_RET(c, 0x8cb4fu);
    X86_TICK(c, 12);
    // 08cb4f  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x8cb4fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 08cb52  call 0x8c3b4
    X86_AT(c, 0x8cb52u);
    push32(c, 0x8cb57u); x86_call_known(c, 0x8c3b4u, f_0008c3b4); X86_RET(c, 0x8cb57u);
    X86_TICK(c, 20);
    // 08cb57  mov ax, word ptr [0x34d2e]
    X86_AT(c, 0x8cb57u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x34D2Eu))));
    // 08cb5d  or al, 0x20
    X86_AT(c, 0x8cb5du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 08cb5f  movsx eax, ax
    X86_AT(c, 0x8cb5fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 08cb62  push eax
    X86_AT(c, 0x8cb62u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cb63  push 0x34628
    X86_AT(c, 0x8cb63u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08cb68  call 0x245
    X86_AT(c, 0x8cb68u);
    push32(c, 0x8cb6du); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8cb6du);
    X86_TICK(c, 35);
    // 08cb6d  mov eax, edi
    X86_AT(c, 0x8cb6du);
    c.r[0] = c.r[7];
    // 08cb6f  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x8cb6fu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 08cb73  add ax, 0xf
    X86_AT(c, 0x8cb73u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xFu, 0, 2)); }
    // 08cb77  mov word ptr [0x34c28], ax
    X86_AT(c, 0x8cb77u);
    wr16((c.sbase[3] + (uint32_t)(0x34C28u)), (c.r[0] & 0xFFFFu));
    // 08cb7d  lea eax, [esi + 0x10]
    X86_AT(c, 0x8cb7du);
    c.r[0] = (uint32_t)(c.r[6] + 0x10u);
    // 08cb80  mov word ptr [0x34c2a], ax
    X86_AT(c, 0x8cb80u);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Au)), (c.r[0] & 0xFFFFu));
    // 08cb86  mov word ptr [0x34c2c], 0xfff0
    X86_AT(c, 0x8cb86u);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Cu)), 0xFFF0u);
    // 08cb8f  mov word ptr [0x34c2e], 0xfff0
    X86_AT(c, 0x8cb8fu);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Eu)), 0xFFF0u);
    // 08cb98  mov word ptr [0x34c30], 0xfff0
    X86_AT(c, 0x8cb98u);
    wr16((c.sbase[3] + (uint32_t)(0x34C30u)), 0xFFF0u);
    // 08cba1  mov word ptr [0x34c32], 0xfff0
    X86_AT(c, 0x8cba1u);
    wr16((c.sbase[3] + (uint32_t)(0x34C32u)), 0xFFF0u);
    // 08cbaa  mov word ptr [0x34c34], 0x10
    X86_AT(c, 0x8cbaau);
    wr16((c.sbase[3] + (uint32_t)(0x34C34u)), 0x10u);
    // 08cbb3  push 0x34c28
    X86_AT(c, 0x8cbb3u);
    { uint32_t v = 0x34C28u; push32(c, v); }
    // 08cbb8  push 0x34628
    X86_AT(c, 0x8cbb8u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08cbbd  mov word ptr [ebp - 8], ax
    X86_AT(c, 0x8cbbdu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[0] & 0xFFFFu));
    // 08cbc1  call 0x8a9
    X86_AT(c, 0x8cbc1u);
    push32(c, 0x8cbc6u); x86_call_known(c, 0x8a9u, f_000008a9); X86_RET(c, 0x8cbc6u);
    X86_TICK(c, 9);
    // 08cbc6  push 0xf
    X86_AT(c, 0x8cbc6u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08cbc8  call 0x8c384
    X86_AT(c, 0x8cbc8u);
    push32(c, 0x8cbcdu); x86_call_known(c, 0x8c384u, f_0008c384); X86_RET(c, 0x8cbcdu);
    X86_TICK(c, 11);
    // 08cbcd  push 0x34c28
    X86_AT(c, 0x8cbcdu);
    { uint32_t v = 0x34C28u; push32(c, v); }
    // 08cbd2  push 0x34628
    X86_AT(c, 0x8cbd2u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08cbd7  call 0x885
    X86_AT(c, 0x8cbd7u);
    push32(c, 0x8cbdcu); x86_call_known(c, 0x885u, f_00000885); X86_RET(c, 0x8cbdcu);
    X86_TICK(c, 12);
    // 08cbdc  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x8cbdcu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 08cbdf  call 0x8c384
    X86_AT(c, 0x8cbdfu);
    push32(c, 0x8cbe4u); x86_call_known(c, 0x8c384u, f_0008c384); X86_RET(c, 0x8cbe4u);
    X86_TICK(c, 41);
    // 08cbe4  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0x8cbe4u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 08cbe8  add ax, word ptr [ebp + 0x10]
    X86_AT(c, 0x8cbe8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 2)); }
    // 08cbec  sub ax, 0x10
    X86_AT(c, 0x8cbecu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x10u, 0, 2)); }
    // 08cbf0  mov word ptr [0x34c28], ax
    X86_AT(c, 0x8cbf0u);
    wr16((c.sbase[3] + (uint32_t)(0x34C28u)), (c.r[0] & 0xFFFFu));
    // 08cbf6  mov ax, word ptr [ebp - 8]
    X86_AT(c, 0x8cbf6u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 08cbfa  mov word ptr [0x34c2a], ax
    X86_AT(c, 0x8cbfau);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Au)), (c.r[0] & 0xFFFFu));
    // 08cc00  sub eax, eax
    X86_AT(c, 0x8cc00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08cc02  mov word ptr [0x34c2c], ax
    X86_AT(c, 0x8cc02u);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Cu)), (c.r[0] & 0xFFFFu));
    // 08cc08  mov word ptr [0x34c2e], 0xfff0
    X86_AT(c, 0x8cc08u);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Eu)), 0xFFF0u);
    // 08cc11  mov word ptr [0x34c30], 0x10
    X86_AT(c, 0x8cc11u);
    wr16((c.sbase[3] + (uint32_t)(0x34C30u)), 0x10u);
    // 08cc1a  mov word ptr [0x34c32], ax
    X86_AT(c, 0x8cc1au);
    wr16((c.sbase[3] + (uint32_t)(0x34C32u)), (c.r[0] & 0xFFFFu));
    // 08cc20  push 0x34c28
    X86_AT(c, 0x8cc20u);
    { uint32_t v = 0x34C28u; push32(c, v); }
    // 08cc25  push 0x34628
    X86_AT(c, 0x8cc25u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08cc2a  call 0x8a9
    X86_AT(c, 0x8cc2au);
    push32(c, 0x8cc2fu); x86_call_known(c, 0x8a9u, f_000008a9); X86_RET(c, 0x8cc2fu);
    X86_TICK(c, 9);
    // 08cc2f  push 0xf
    X86_AT(c, 0x8cc2fu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08cc31  call 0x8c384
    X86_AT(c, 0x8cc31u);
    push32(c, 0x8cc36u); x86_call_known(c, 0x8c384u, f_0008c384); X86_RET(c, 0x8cc36u);
    X86_TICK(c, 11);
    // 08cc36  push 0x34c28
    X86_AT(c, 0x8cc36u);
    { uint32_t v = 0x34C28u; push32(c, v); }
    // 08cc3b  push 0x34628
    X86_AT(c, 0x8cc3bu);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08cc40  call 0x885
    X86_AT(c, 0x8cc40u);
    push32(c, 0x8cc45u); x86_call_known(c, 0x885u, f_00000885); X86_RET(c, 0x8cc45u);
    X86_TICK(c, 14);
    // 08cc45  add esp, 0x3c
    X86_AT(c, 0x8cc45u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 08cc48  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x8cc48u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 08cc4b  call 0x8c384
    X86_AT(c, 0x8cc4bu);
    push32(c, 0x8cc50u); x86_call_known(c, 0x8c384u, f_0008c384); X86_RET(c, 0x8cc50u);
    X86_TICK(c, 47);
    // 08cc50  mov eax, edi
    X86_AT(c, 0x8cc50u);
    c.r[0] = c.r[7];
    // 08cc52  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x8cc52u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 08cc56  add ax, word ptr [ebp + 0x10]
    X86_AT(c, 0x8cc56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 2)); }
    // 08cc5a  sub ax, 0x10
    X86_AT(c, 0x8cc5au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x10u, 0, 2)); }
    // 08cc5e  mov word ptr [0x34c28], ax
    X86_AT(c, 0x8cc5eu);
    wr16((c.sbase[3] + (uint32_t)(0x34C28u)), (c.r[0] & 0xFFFFu));
    // 08cc64  mov eax, esi
    X86_AT(c, 0x8cc64u);
    c.r[0] = c.r[6];
    // 08cc66  lea edx, [ebx + eax*1]
    X86_AT(c, 0x8cc66u);
    c.r[2] = (uint32_t)(c.r[3] + c.r[0]);
    // 08cc69  sub dx, 0x11
    X86_AT(c, 0x8cc69u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x11u, 0, 2)); }
    // 08cc6d  mov word ptr [0x34c2a], dx
    X86_AT(c, 0x8cc6du);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Au)), (c.r[2] & 0xFFFFu));
    // 08cc74  mov word ptr [0x34c2c], 0x10
    X86_AT(c, 0x8cc74u);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Cu)), 0x10u);
    // 08cc7d  mov word ptr [0x34c2e], 0
    X86_AT(c, 0x8cc7du);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Eu)), 0x0u);
    // 08cc86  mov word ptr [0x34c30], 0
    X86_AT(c, 0x8cc86u);
    wr16((c.sbase[3] + (uint32_t)(0x34C30u)), 0x0u);
    // 08cc8f  mov word ptr [0x34c32], 0x10
    X86_AT(c, 0x8cc8fu);
    wr16((c.sbase[3] + (uint32_t)(0x34C32u)), 0x10u);
    // 08cc98  push 0x34c28
    X86_AT(c, 0x8cc98u);
    { uint32_t v = 0x34C28u; push32(c, v); }
    // 08cc9d  mov eax, 0x34624
    X86_AT(c, 0x8cc9du);
    c.r[0] = 0x34624u;
    // 08cca2  add eax, 4
    X86_AT(c, 0x8cca2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 08cca5  push eax
    X86_AT(c, 0x8cca5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cca6  mov word ptr [ebp - 8], dx
    X86_AT(c, 0x8cca6u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[2] & 0xFFFFu));
    // 08ccaa  call 0x8a9
    X86_AT(c, 0x8ccaau);
    push32(c, 0x8ccafu); x86_call_known(c, 0x8a9u, f_000008a9); X86_RET(c, 0x8ccafu);
    X86_TICK(c, 9);
    // 08ccaf  push 0xf
    X86_AT(c, 0x8ccafu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08ccb1  call 0x8c384
    X86_AT(c, 0x8ccb1u);
    push32(c, 0x8ccb6u); x86_call_known(c, 0x8c384u, f_0008c384); X86_RET(c, 0x8ccb6u);
    X86_TICK(c, 13);
    // 08ccb6  push 0x34c28
    X86_AT(c, 0x8ccb6u);
    { uint32_t v = 0x34C28u; push32(c, v); }
    // 08ccbb  mov eax, 0x34628
    X86_AT(c, 0x8ccbbu);
    c.r[0] = 0x34628u;
    // 08ccc0  push eax
    X86_AT(c, 0x8ccc0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ccc1  call 0x885
    X86_AT(c, 0x8ccc1u);
    push32(c, 0x8ccc6u); x86_call_known(c, 0x885u, f_00000885); X86_RET(c, 0x8ccc6u);
    X86_TICK(c, 12);
    // 08ccc6  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x8ccc6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 08ccc9  call 0x8c384
    X86_AT(c, 0x8ccc9u);
    push32(c, 0x8ccceu); x86_call_known(c, 0x8c384u, f_0008c384); X86_RET(c, 0x8ccceu);
    X86_TICK(c, 35);
    // 08ccce  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0x8ccceu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 08ccd2  add ax, 0xf
    X86_AT(c, 0x8ccd2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xFu, 0, 2)); }
    // 08ccd6  mov word ptr [0x34c28], ax
    X86_AT(c, 0x8ccd6u);
    wr16((c.sbase[3] + (uint32_t)(0x34C28u)), (c.r[0] & 0xFFFFu));
    // 08ccdc  mov ax, word ptr [ebp - 8]
    X86_AT(c, 0x8ccdcu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 08cce0  mov word ptr [0x34c2a], ax
    X86_AT(c, 0x8cce0u);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Au)), (c.r[0] & 0xFFFFu));
    // 08cce6  mov word ptr [0x34c2c], 0
    X86_AT(c, 0x8cce6u);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Cu)), 0x0u);
    // 08ccef  mov word ptr [0x34c2e], 0x10
    X86_AT(c, 0x8ccefu);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Eu)), 0x10u);
    // 08ccf8  mov word ptr [0x34c30], 0xfff0
    X86_AT(c, 0x8ccf8u);
    wr16((c.sbase[3] + (uint32_t)(0x34C30u)), 0xFFF0u);
    // 08cd01  mov word ptr [0x34c32], 0
    X86_AT(c, 0x8cd01u);
    wr16((c.sbase[3] + (uint32_t)(0x34C32u)), 0x0u);
    // 08cd0a  push 0x34c28
    X86_AT(c, 0x8cd0au);
    { uint32_t v = 0x34C28u; push32(c, v); }
    // 08cd0f  mov eax, 0x34628
    X86_AT(c, 0x8cd0fu);
    c.r[0] = 0x34628u;
    // 08cd14  push eax
    X86_AT(c, 0x8cd14u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cd15  call 0x8a9
    X86_AT(c, 0x8cd15u);
    push32(c, 0x8cd1au); x86_call_known(c, 0x8a9u, f_000008a9); X86_RET(c, 0x8cd1au);
    X86_TICK(c, 9);
    // 08cd1a  push 0xf
    X86_AT(c, 0x8cd1au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08cd1c  call 0x8c384
    X86_AT(c, 0x8cd1cu);
    push32(c, 0x8cd21u); x86_call_known(c, 0x8c384u, f_0008c384); X86_RET(c, 0x8cd21u);
    X86_TICK(c, 13);
    // 08cd21  push 0x34c28
    X86_AT(c, 0x8cd21u);
    { uint32_t v = 0x34C28u; push32(c, v); }
    // 08cd26  mov eax, 0x34628
    X86_AT(c, 0x8cd26u);
    c.r[0] = 0x34628u;
    // 08cd2b  push eax
    X86_AT(c, 0x8cd2bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cd2c  call 0x885
    X86_AT(c, 0x8cd2cu);
    push32(c, 0x8cd31u); x86_call_known(c, 0x885u, f_00000885); X86_RET(c, 0x8cd31u);
    X86_TICK(c, 12);
    // 08cd31  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x8cd31u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 08cd34  call 0x8c384
    X86_AT(c, 0x8cd34u);
    push32(c, 0x8cd39u); x86_call_known(c, 0x8c384u, f_0008c384); X86_RET(c, 0x8cd39u);
    X86_TICK(c, 29);
    // 08cd39  lea eax, [esi + 0xf]
    X86_AT(c, 0x8cd39u);
    c.r[0] = (uint32_t)(c.r[6] + 0xFu);
    // 08cd3c  push eax
    X86_AT(c, 0x8cd3cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cd3d  mov eax, edi
    X86_AT(c, 0x8cd3du);
    c.r[0] = c.r[7];
    // 08cd3f  add eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8cd3fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 08cd42  sub eax, 0x11
    X86_AT(c, 0x8cd42u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x11u, 0, 4); }
    // 08cd45  push eax
    X86_AT(c, 0x8cd45u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cd46  push esi
    X86_AT(c, 0x8cd46u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08cd47  lea eax, [edi + 0x10]
    X86_AT(c, 0x8cd47u);
    c.r[0] = (uint32_t)(c.r[7] + 0x10u);
    // 08cd4a  push eax
    X86_AT(c, 0x8cd4au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cd4b  call 0x8ca1c
    X86_AT(c, 0x8cd4bu);
    push32(c, 0x8cd50u); x86_call_known(c, 0x8ca1cu, f_0008ca1c); X86_RET(c, 0x8cd50u);
    X86_TICK(c, 41);
    // 08cd50  add esp, 0x44
    X86_AT(c, 0x8cd50u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 08cd53  lea eax, [ebx + esi*1]
    X86_AT(c, 0x8cd53u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[6]);
    // 08cd56  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x8cd56u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 08cd59  sub eax, 0x11
    X86_AT(c, 0x8cd59u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x11u, 0, 4); }
    // 08cd5c  push eax
    X86_AT(c, 0x8cd5cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cd5d  mov edx, edi
    X86_AT(c, 0x8cd5du);
    c.r[2] = c.r[7];
    // 08cd5f  add edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8cd5fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 08cd62  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0x8cd62u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 08cd65  dec edx
    X86_AT(c, 0x8cd65u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 08cd66  push edx
    X86_AT(c, 0x8cd66u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08cd67  lea ecx, [esi + 0x10]
    X86_AT(c, 0x8cd67u);
    c.r[1] = (uint32_t)(c.r[6] + 0x10u);
    // 08cd6a  push ecx
    X86_AT(c, 0x8cd6au);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 08cd6b  push edi
    X86_AT(c, 0x8cd6bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08cd6c  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x8cd6cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 08cd6f  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0x8cd6fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 08cd72  call 0x8ca1c
    X86_AT(c, 0x8cd72u);
    push32(c, 0x8cd77u); x86_call_known(c, 0x8ca1cu, f_0008ca1c); X86_RET(c, 0x8cd77u);
    X86_TICK(c, 38);
    // 08cd77  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x8cd77u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 08cd7a  dec eax
    X86_AT(c, 0x8cd7au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08cd7b  push eax
    X86_AT(c, 0x8cd7bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cd7c  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0x8cd7cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 08cd7f  sub edx, 0x11
    X86_AT(c, 0x8cd7fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x11u, 0, 4); }
    // 08cd82  push edx
    X86_AT(c, 0x8cd82u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08cd83  push dword ptr [ebp - 0xc]
    X86_AT(c, 0x8cd83u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 08cd86  lea ecx, [edi + 0x10]
    X86_AT(c, 0x8cd86u);
    c.r[1] = (uint32_t)(c.r[7] + 0x10u);
    // 08cd89  push ecx
    X86_AT(c, 0x8cd89u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 08cd8a  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x8cd8au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 08cd8d  mov dword ptr [ebp - 0x18], ecx
    X86_AT(c, 0x8cd8du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[1]);
    // 08cd90  mov dword ptr [ebp - 0x1c], edx
    X86_AT(c, 0x8cd90u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[2]);
    // 08cd93  call 0x8ca1c
    X86_AT(c, 0x8cd93u);
    push32(c, 0x8cd98u); x86_call_known(c, 0x8ca1cu, f_0008ca1c); X86_RET(c, 0x8cd98u);
    X86_TICK(c, 9);
    // 08cd98  push 0xf
    X86_AT(c, 0x8cd98u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08cd9a  call 0x8c384
    X86_AT(c, 0x8cd9au);
    push32(c, 0x8cd9fu); x86_call_known(c, 0x8c384u, f_0008c384); X86_RET(c, 0x8cd9fu);
    X86_TICK(c, 21);
    // 08cd9f  push esi
    X86_AT(c, 0x8cd9fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08cda0  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0x8cda0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 08cda3  push esi
    X86_AT(c, 0x8cda3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08cda4  push dword ptr [ebp - 0x18]
    X86_AT(c, 0x8cda4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))); push32(c, v); }
    // 08cda7  call 0x8c8fc
    X86_AT(c, 0x8cda7u);
    push32(c, 0x8cdacu); x86_call_known(c, 0x8c8fcu, f_0008c8fc); X86_RET(c, 0x8cdacu);
    X86_TICK(c, 33);
    // 08cdac  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x8cdacu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 08cdaf  sub eax, 0xe
    X86_AT(c, 0x8cdafu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xEu, 0, 4); }
    // 08cdb2  push eax
    X86_AT(c, 0x8cdb2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cdb3  push dword ptr [ebp - 0x10]
    X86_AT(c, 0x8cdb3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 08cdb6  lea edx, [esi + 0xd]
    X86_AT(c, 0x8cdb6u);
    c.r[2] = (uint32_t)(c.r[6] + 0xDu);
    // 08cdb9  push edx
    X86_AT(c, 0x8cdb9u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08cdba  push dword ptr [ebp - 0x10]
    X86_AT(c, 0x8cdbau);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 08cdbd  mov dword ptr [ebp - 0x20], eax
    X86_AT(c, 0x8cdbdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[0]);
    // 08cdc0  mov dword ptr [ebp - 0x24], edx
    X86_AT(c, 0x8cdc0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), c.r[2]);
    // 08cdc3  call 0x8c8fc
    X86_AT(c, 0x8cdc3u);
    push32(c, 0x8cdc8u); x86_call_known(c, 0x8c8fcu, f_0008c8fc); X86_RET(c, 0x8cdc8u);
    X86_TICK(c, 29);
    // 08cdc8  add esp, 0x44
    X86_AT(c, 0x8cdc8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 08cdcb  push dword ptr [ebp - 0x14]
    X86_AT(c, 0x8cdcbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 08cdce  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0x8cdceu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 08cdd1  push dword ptr [ebp - 0x14]
    X86_AT(c, 0x8cdd1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 08cdd4  push dword ptr [ebp - 0x18]
    X86_AT(c, 0x8cdd4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))); push32(c, v); }
    // 08cdd7  call 0x8c8fc
    X86_AT(c, 0x8cdd7u);
    push32(c, 0x8cddcu); x86_call_known(c, 0x8c8fcu, f_0008c8fc); X86_RET(c, 0x8cddcu);
    X86_TICK(c, 21);
    // 08cddc  push dword ptr [ebp - 0x20]
    X86_AT(c, 0x8cddcu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))); push32(c, v); }
    // 08cddf  push edi
    X86_AT(c, 0x8cddfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08cde0  push dword ptr [ebp - 0x24]
    X86_AT(c, 0x8cde0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))); push32(c, v); }
    // 08cde3  push edi
    X86_AT(c, 0x8cde3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08cde4  call 0x8c8fc
    X86_AT(c, 0x8cde4u);
    push32(c, 0x8cde9u); x86_call_known(c, 0x8c8fcu, f_0008c8fc); X86_RET(c, 0x8cde9u);
    X86_TICK(c, 14);
    // 08cde9  add esp, 0x20
    X86_AT(c, 0x8cde9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 08cdec  cmp dword ptr [ebp + 0x18], 0
    X86_AT(c, 0x8cdecu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0x0u, 0, 4);
    // 08cdf0  je 0x8cdf6
    X86_AT(c, 0x8cdf0u);
    if (x86_cc(c, 4)) { goto L_8cdf6; }
    X86_TICK(c, 9);
    // 08cdf2  push 0xf
    X86_AT(c, 0x8cdf2u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08cdf4  jmp 0x8cdf8
    X86_AT(c, 0x8cdf4u);
    goto L_8cdf8;
L_8cdf6:
    X86_TICK(c, 2);
    // 08cdf6  push 0
    X86_AT(c, 0x8cdf6u);
    { uint32_t v = 0x0u; push32(c, v); }
L_8cdf8:
    X86_TICK(c, 7);
    // 08cdf8  call 0x8c384
    X86_AT(c, 0x8cdf8u);
    push32(c, 0x8cdfdu); x86_call_known(c, 0x8c384u, f_0008c384); X86_RET(c, 0x8cdfdu);
    X86_TICK(c, 11);
    // 08cdfd  add esp, 4
    X86_AT(c, 0x8cdfdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08ce00  push 0
    X86_AT(c, 0x8ce00u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ce02  call 0x8c3b4
    X86_AT(c, 0x8ce02u);
    push32(c, 0x8ce07u); x86_call_known(c, 0x8c3b4u, f_0008c3b4); X86_RET(c, 0x8ce07u);
    X86_TICK(c, 15);
    // 08ce07  push 0x18e
    X86_AT(c, 0x8ce07u);
    { uint32_t v = 0x18Eu; push32(c, v); }
    // 08ce0c  push 0x169
    X86_AT(c, 0x8ce0cu);
    { uint32_t v = 0x169u; push32(c, v); }
    // 08ce11  push 0x2f
    X86_AT(c, 0x8ce11u);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 08ce13  push 0xa
    X86_AT(c, 0x8ce13u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 08ce15  call 0x8ca1c
    X86_AT(c, 0x8ce15u);
    push32(c, 0x8ce1au); x86_call_known(c, 0x8ca1cu, f_0008ca1c); X86_RET(c, 0x8ce1au);
    X86_TICK(c, 9);
    // 08ce1a  push 0xf
    X86_AT(c, 0x8ce1au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08ce1c  call 0x8c384
    X86_AT(c, 0x8ce1cu);
    push32(c, 0x8ce21u); x86_call_known(c, 0x8c384u, f_0008c384); X86_RET(c, 0x8ce21u);
    X86_TICK(c, 17);
    // 08ce21  movsx eax, word ptr [0x34d2e]
    X86_AT(c, 0x8ce21u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34D2Eu)));
    // 08ce28  push eax
    X86_AT(c, 0x8ce28u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ce29  push 0x34628
    X86_AT(c, 0x8ce29u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08ce2e  call 0x245
    X86_AT(c, 0x8ce2eu);
    push32(c, 0x8ce33u); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8ce33u);
    X86_TICK(c, 30);
    // 08ce33  add esp, 0x20
    X86_AT(c, 0x8ce33u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 08ce36  pop edi
    X86_AT(c, 0x8ce36u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08ce37  pop esi
    X86_AT(c, 0x8ce37u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08ce38  pop ebx
    X86_AT(c, 0x8ce38u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08ce39  leave 
    X86_AT(c, 0x8ce39u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08ce3a  ret 
    X86_AT(c, 0x8ce3au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8caf8u, "ran off the end of a function");
}
void f_0008ceb0(X86Cpu& c) {
    X86_TICK(c, 69);
    // 08ceb0  push ebp
    X86_AT(c, 0x8ceb0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08ceb1  mov ebp, esp
    X86_AT(c, 0x8ceb1u);
    c.r[5] = c.r[4];
    // 08ceb3  push esi
    X86_AT(c, 0x8ceb3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08ceb4  push edi
    X86_AT(c, 0x8ceb4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08ceb5  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8ceb5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08ceb8  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8ceb8u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08cebb  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8cebbu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08cebe  mov dword ptr [0x34c28], eax
    X86_AT(c, 0x8cebeu);
    wr32((c.sbase[3] + (uint32_t)(0x34C28u)), c.r[0]);
    // 08cec3  mov word ptr [0x34c2c], 0x14
    X86_AT(c, 0x8cec3u);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Cu)), 0x14u);
    // 08cecc  mov eax, edi
    X86_AT(c, 0x8ceccu);
    c.r[0] = c.r[7];
    // 08cece  mov word ptr [0x34c2e], ax
    X86_AT(c, 0x8ceceu);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Eu)), (c.r[0] & 0xFFFFu));
    // 08ced4  mov eax, esi
    X86_AT(c, 0x8ced4u);
    c.r[0] = c.r[6];
    // 08ced6  mov word ptr [0x34c30], ax
    X86_AT(c, 0x8ced6u);
    wr16((c.sbase[3] + (uint32_t)(0x34C30u)), (c.r[0] & 0xFFFFu));
    // 08cedc  mov eax, edi
    X86_AT(c, 0x8cedcu);
    c.r[0] = c.r[7];
    // 08cede  add ax, word ptr [ebp + 0x14]
    X86_AT(c, 0x8cedeu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0, 2)); }
    // 08cee2  dec eax
    X86_AT(c, 0x8cee2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08cee3  mov word ptr [0x34c32], ax
    X86_AT(c, 0x8cee3u);
    wr16((c.sbase[3] + (uint32_t)(0x34C32u)), (c.r[0] & 0xFFFFu));
    // 08cee9  mov eax, esi
    X86_AT(c, 0x8cee9u);
    c.r[0] = c.r[6];
    // 08ceeb  add ax, word ptr [ebp + 0x18]
    X86_AT(c, 0x8ceebu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0, 2)); }
    // 08ceef  dec eax
    X86_AT(c, 0x8ceefu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08cef0  mov word ptr [0x34c34], ax
    X86_AT(c, 0x8cef0u);
    wr16((c.sbase[3] + (uint32_t)(0x34C34u)), (c.r[0] & 0xFFFFu));
    // 08cef6  push 0x34c28
    X86_AT(c, 0x8cef6u);
    { uint32_t v = 0x34C28u; push32(c, v); }
    // 08cefb  push 0
    X86_AT(c, 0x8cefbu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08cefd  push 0x34628
    X86_AT(c, 0x8cefdu);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08cf02  call 0x544
    X86_AT(c, 0x8cf02u);
    push32(c, 0x8cf07u); x86_call_known(c, 0x544u, f_00000544); X86_RET(c, 0x8cf07u);
    X86_TICK(c, 26);
    // 08cf07  add esp, 0xc
    X86_AT(c, 0x8cf07u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 08cf0a  pop edi
    X86_AT(c, 0x8cf0au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08cf0b  pop esi
    X86_AT(c, 0x8cf0bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08cf0c  leave 
    X86_AT(c, 0x8cf0cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08cf0d  ret 
    X86_AT(c, 0x8cf0du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ceb0u, "ran off the end of a function");
}
void f_0008d024(X86Cpu& c) {
    X86_TICK(c, 34);
    // 08d024  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x8d024u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 08d028  mov eax, dword ptr [ecx + 0x1e]
    X86_AT(c, 0x8d028u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x1Eu)));
    // 08d02b  mov edx, dword ptr [esp + 8]
    X86_AT(c, 0x8d02bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 08d02f  mov dword ptr [edx], eax
    X86_AT(c, 0x8d02fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 08d031  mov eax, dword ptr [ecx + 0x2a]
    X86_AT(c, 0x8d031u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x2Au)));
    // 08d034  mov edx, dword ptr [esp + 0xc]
    X86_AT(c, 0x8d034u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 08d038  mov dword ptr [edx], eax
    X86_AT(c, 0x8d038u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 08d03a  ret 
    X86_AT(c, 0x8d03au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d024u, "ran off the end of a function");
}
void f_0008d03c(X86Cpu& c) {
    X86_TICK(c, 26);
    // 08d03c  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x8d03cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 08d040  mov ax, word ptr [esp + 8]
    X86_AT(c, 0x8d040u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u))));
    // 08d045  mov word ptr [ecx + 0x1e], ax
    X86_AT(c, 0x8d045u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1] + 0x1Eu)), (c.r[0] & 0xFFFFu));
    // 08d049  mov ax, word ptr [esp + 0xc]
    X86_AT(c, 0x8d049u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu))));
    // 08d04e  mov word ptr [ecx + 0x2a], ax
    X86_AT(c, 0x8d04eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[1] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 08d052  ret 
    X86_AT(c, 0x8d052u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d03cu, "ran off the end of a function");
}
void f_0008d054(X86Cpu& c) {
    X86_TICK(c, 20);
    // 08d054  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x8d054u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 08d058  movsx eax, word ptr [eax + 0x36]
    X86_AT(c, 0x8d058u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x36u)));
    // 08d05c  ret 
    X86_AT(c, 0x8d05cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d054u, "ran off the end of a function");
}
void f_0008d060(X86Cpu& c) {
    X86_TICK(c, 25);
    // 08d060  push ebp
    X86_AT(c, 0x8d060u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d061  mov ebp, esp
    X86_AT(c, 0x8d061u);
    c.r[5] = c.r[4];
    // 08d063  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x8d063u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 08d066  push 2
    X86_AT(c, 0x8d066u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08d068  push 0x100
    X86_AT(c, 0x8d068u);
    { uint32_t v = 0x100u; push32(c, v); }
    // 08d06d  push dword ptr [ebp + 8]
    X86_AT(c, 0x8d06du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08d070  call 0x92340
    X86_AT(c, 0x8d070u);
    push32(c, 0x8d075u); x86_call_known(c, 0x92340u, f_00092340); X86_RET(c, 0x8d075u);
    X86_TICK(c, 9);
    // 08d075  add esp, 0x10
    X86_AT(c, 0x8d075u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d078  cmp eax, 2
    X86_AT(c, 0x8d078u);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 08d07b  jge 0x8d084
    X86_AT(c, 0x8d07bu);
    if (x86_cc(c, 13)) { goto L_8d084; }
    X86_TICK(c, 9);
    // 08d07d  mov eax, 0xffffffff
    X86_AT(c, 0x8d07du);
    c.r[0] = 0xFFFFFFFFu;
    // 08d082  jmp 0x8d086
    X86_AT(c, 0x8d082u);
    goto L_8d086;
L_8d084:
    X86_TICK(c, 2);
    // 08d084  sub eax, eax
    X86_AT(c, 0x8d084u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8d086:
    X86_TICK(c, 16);
    // 08d086  leave 
    X86_AT(c, 0x8d086u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d087  ret 
    X86_AT(c, 0x8d087u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d060u, "ran off the end of a function");
}
void f_0008d088(X86Cpu& c) {
    X86_TICK(c, 26);
    // 08d088  push ebp
    X86_AT(c, 0x8d088u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d089  mov ebp, esp
    X86_AT(c, 0x8d089u);
    c.r[5] = c.r[4];
    // 08d08b  sub esp, 0x204
    X86_AT(c, 0x8d08bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x204u, 0, 4); }
    // 08d091  push ebx
    X86_AT(c, 0x8d091u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d092  push esi
    X86_AT(c, 0x8d092u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08d093  push edi
    X86_AT(c, 0x8d093u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d094  push 0x1248
    X86_AT(c, 0x8d094u);
    { uint32_t v = 0x1248u; push32(c, v); }
    // 08d099  push dword ptr [ebp + 8]
    X86_AT(c, 0x8d099u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08d09c  call 0x9261c
    X86_AT(c, 0x8d09cu);
    push32(c, 0x8d0a1u); x86_call_known(c, 0x9261cu, f_0009261c); X86_RET(c, 0x8d0a1u);
    X86_TICK(c, 12);
    // 08d0a1  add esp, 8
    X86_AT(c, 0x8d0a1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08d0a4  xchg ebx, eax
    X86_AT(c, 0x8d0a4u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 08d0a5  and ebx, ebx
    X86_AT(c, 0x8d0a5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 08d0a7  jne 0x8d0b3
    X86_AT(c, 0x8d0a7u);
    if (x86_cc(c, 5)) { goto L_8d0b3; }
    X86_TICK(c, 9);
    // 08d0a9  mov eax, 0xffffffff
    X86_AT(c, 0x8d0a9u);
    c.r[0] = 0xFFFFFFFFu;
    // 08d0ae  jmp 0x8d17d
    X86_AT(c, 0x8d0aeu);
    goto L_8d17d;
L_8d0b3:
    X86_TICK(c, 13);
    // 08d0b3  push ebx
    X86_AT(c, 0x8d0b3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d0b4  lea eax, [ebp - 0x200]
    X86_AT(c, 0x8d0b4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFE00u);
    // 08d0ba  push eax
    X86_AT(c, 0x8d0bau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d0bb  call 0x8d060
    X86_AT(c, 0x8d0bbu);
    push32(c, 0x8d0c0u); x86_call_known(c, 0x8d060u, f_0008d060); X86_RET(c, 0x8d0c0u);
    X86_TICK(c, 9);
    // 08d0c0  add esp, 8
    X86_AT(c, 0x8d0c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08d0c3  inc eax
    X86_AT(c, 0x8d0c3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 08d0c4  je 0x8d165
    X86_AT(c, 0x8d0c4u);
    if (x86_cc(c, 4)) { goto L_8d165; }
    X86_TICK(c, 21);
    // 08d0ca  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x8d0cau);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 08d0cd  push dword ptr [ebp + 0x14]
    X86_AT(c, 0x8d0cdu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))); push32(c, v); }
    // 08d0d0  lea eax, [ebp - 0x200]
    X86_AT(c, 0x8d0d0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFE00u);
    // 08d0d6  push eax
    X86_AT(c, 0x8d0d6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d0d7  call 0x8d024
    X86_AT(c, 0x8d0d7u);
    push32(c, 0x8d0dcu); x86_call_known(c, 0x8d024u, f_0008d024); X86_RET(c, 0x8d0dcu);
    X86_TICK(c, 11);
    // 08d0dc  lea eax, [ebp - 0x200]
    X86_AT(c, 0x8d0dcu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFE00u);
    // 08d0e2  push eax
    X86_AT(c, 0x8d0e2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d0e3  call 0x8d054
    X86_AT(c, 0x8d0e3u);
    push32(c, 0x8d0e8u); x86_call_known(c, 0x8d054u, f_0008d054); X86_RET(c, 0x8d0e8u);
    X86_TICK(c, 21);
    // 08d0e8  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x8d0e8u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 08d0eb  mov dword ptr [edx], eax
    X86_AT(c, 0x8d0ebu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 08d0ed  movzx eax, byte ptr [ebx + 0xe]
    X86_AT(c, 0x8d0edu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu)));
    // 08d0f1  push eax
    X86_AT(c, 0x8d0f1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d0f2  call 0x9372f
    X86_AT(c, 0x8d0f2u);
    push32(c, 0x8d0f7u); x86_call_known(c, 0x9372fu, f_0009372f); X86_RET(c, 0x8d0f7u);
    X86_TICK(c, 14);
    // 08d0f7  xchg edi, eax
    X86_AT(c, 0x8d0f7u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 08d0f8  sub edi, 0x200
    X86_AT(c, 0x8d0f8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0x200u, 0, 4); }
    // 08d0fe  add esp, 0x14
    X86_AT(c, 0x8d0feu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 08d101  cmp edi, 1
    X86_AT(c, 0x8d101u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 08d104  jl 0x8d165
    X86_AT(c, 0x8d104u);
    if (x86_cc(c, 12)) { goto L_8d165; }
    X86_TICK(c, 11);
    // 08d106  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8d106u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08d109  cmp edi, eax
    X86_AT(c, 0x8d109u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 08d10b  jle 0x8d10e
    X86_AT(c, 0x8d10bu);
    if (x86_cc(c, 14)) { goto L_8d10e; }
    X86_TICK(c, 3);
    // 08d10d  xchg edi, eax
    X86_AT(c, 0x8d10du);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_8d10e:
    X86_TICK(c, 7);
    // 08d10e  cmp edi, 0x280
    X86_AT(c, 0x8d10eu);
    (void)x86_sub(c, c.r[7], 0x280u, 0, 4);
    // 08d114  jle 0x8d13c
    X86_AT(c, 0x8d114u);
    if (x86_cc(c, 14)) { goto L_8d13c; }
    X86_TICK(c, 66);
    // 08d116  push ebx
    X86_AT(c, 0x8d116u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d117  mov eax, edi
    X86_AT(c, 0x8d117u);
    c.r[0] = c.r[7];
    // 08d119  cdq 
    X86_AT(c, 0x8d119u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d11a  mov ecx, 0x280
    X86_AT(c, 0x8d11au);
    c.r[1] = 0x280u;
    // 08d11f  idiv ecx
    X86_AT(c, 0x8d11fu);
    x86_idiv(c, c.r[1], 4, 0x8d11fu);
    // 08d121  push eax
    X86_AT(c, 0x8d121u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d122  push ecx
    X86_AT(c, 0x8d122u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 08d123  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x8d123u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 08d126  mov dword ptr [ebp - 0x204], eax
    X86_AT(c, 0x8d126u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDFCu)), c.r[0]);
    // 08d12c  call 0x92340
    X86_AT(c, 0x8d12cu);
    push32(c, 0x8d131u); x86_call_known(c, 0x92340u, f_00092340); X86_RET(c, 0x8d131u);
    X86_TICK(c, 13);
    // 08d131  add esp, 0x10
    X86_AT(c, 0x8d131u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d134  cmp eax, dword ptr [ebp - 0x204]
    X86_AT(c, 0x8d134u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDFCu))), 0, 4);
    // 08d13a  jl 0x8d165
    X86_AT(c, 0x8d13au);
    if (x86_cc(c, 12)) { goto L_8d165; }
L_8d13c:
    X86_TICK(c, 55);
    // 08d13c  mov eax, edi
    X86_AT(c, 0x8d13cu);
    c.r[0] = c.r[7];
    // 08d13e  cdq 
    X86_AT(c, 0x8d13eu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d13f  mov ecx, 0x280
    X86_AT(c, 0x8d13fu);
    c.r[1] = 0x280u;
    // 08d144  idiv ecx
    X86_AT(c, 0x8d144u);
    x86_idiv(c, c.r[1], 4, 0x8d144u);
    // 08d146  mov esi, edx
    X86_AT(c, 0x8d146u);
    c.r[6] = c.r[2];
    // 08d148  and esi, esi
    X86_AT(c, 0x8d148u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 08d14a  je 0x8d172
    X86_AT(c, 0x8d14au);
    if (x86_cc(c, 4)) { goto L_8d172; }
    X86_TICK(c, 27);
    // 08d14c  push ebx
    X86_AT(c, 0x8d14cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d14d  push 1
    X86_AT(c, 0x8d14du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08d14f  push esi
    X86_AT(c, 0x8d14fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08d150  mov eax, edi
    X86_AT(c, 0x8d150u);
    c.r[0] = c.r[7];
    // 08d152  sub eax, esi
    X86_AT(c, 0x8d152u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 08d154  dec eax
    X86_AT(c, 0x8d154u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d155  add eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8d155u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 08d158  push eax
    X86_AT(c, 0x8d158u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d159  call 0x92340
    X86_AT(c, 0x8d159u);
    push32(c, 0x8d15eu); x86_call_known(c, 0x92340u, f_00092340); X86_RET(c, 0x8d15eu);
    X86_TICK(c, 9);
    // 08d15e  add esp, 0x10
    X86_AT(c, 0x8d15eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d161  cmp esi, eax
    X86_AT(c, 0x8d161u);
    (void)x86_sub(c, c.r[6], c.r[0], 0, 4);
    // 08d163  jle 0x8d172
    X86_AT(c, 0x8d163u);
    if (x86_cc(c, 14)) { goto L_8d172; }
L_8d165:
    X86_TICK(c, 9);
    // 08d165  push ebx
    X86_AT(c, 0x8d165u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d166  call 0x92b18
    X86_AT(c, 0x8d166u);
    push32(c, 0x8d16bu); x86_call_known(c, 0x92b18u, f_00092b18); X86_RET(c, 0x8d16bu);
    X86_TICK(c, 9);
    // 08d16b  mov eax, 0xffffffff
    X86_AT(c, 0x8d16bu);
    c.r[0] = 0xFFFFFFFFu;
    // 08d170  jmp 0x8d17a
    X86_AT(c, 0x8d170u);
    goto L_8d17a;
L_8d172:
    X86_TICK(c, 9);
    // 08d172  push ebx
    X86_AT(c, 0x8d172u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d173  call 0x92b18
    X86_AT(c, 0x8d173u);
    push32(c, 0x8d178u); x86_call_known(c, 0x92b18u, f_00092b18); X86_RET(c, 0x8d178u);
    X86_TICK(c, 2);
    // 08d178  mov eax, edi
    X86_AT(c, 0x8d178u);
    c.r[0] = c.r[7];
L_8d17a:
    X86_TICK(c, 2);
    // 08d17a  add esp, 4
    X86_AT(c, 0x8d17au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8d17d:
    X86_TICK(c, 28);
    // 08d17d  pop edi
    X86_AT(c, 0x8d17du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d17e  pop esi
    X86_AT(c, 0x8d17eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08d17f  pop ebx
    X86_AT(c, 0x8d17fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08d180  leave 
    X86_AT(c, 0x8d180u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d181  ret 
    X86_AT(c, 0x8d181u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d088u, "ran off the end of a function");
}
void f_0008d184(X86Cpu& c) {
    X86_TICK(c, 32);
    // 08d184  push ebp
    X86_AT(c, 0x8d184u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d185  mov ebp, esp
    X86_AT(c, 0x8d185u);
    c.r[5] = c.r[4];
    // 08d187  sub esp, 0x281c
    X86_AT(c, 0x8d187u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x281Cu, 0, 4); }
    // 08d18d  push ebx
    X86_AT(c, 0x8d18du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d18e  push esi
    X86_AT(c, 0x8d18eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08d18f  push edi
    X86_AT(c, 0x8d18fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d190  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8d190u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08d193  mov dword ptr [ebp - 0x18], 0
    X86_AT(c, 0x8d193u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0x0u);
    // 08d19a  push 0x124c
    X86_AT(c, 0x8d19au);
    { uint32_t v = 0x124Cu; push32(c, v); }
    // 08d19f  push dword ptr [ebp + 8]
    X86_AT(c, 0x8d19fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08d1a2  call 0x9261c
    X86_AT(c, 0x8d1a2u);
    push32(c, 0x8d1a7u); x86_call_known(c, 0x9261cu, f_0009261c); X86_RET(c, 0x8d1a7u);
    X86_TICK(c, 11);
    // 08d1a7  add esp, 8
    X86_AT(c, 0x8d1a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08d1aa  mov dword ptr [ebp - 0x281c], eax
    X86_AT(c, 0x8d1aau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u)), c.r[0]);
    // 08d1b0  and eax, eax
    X86_AT(c, 0x8d1b0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 08d1b2  je 0x8d47d
    X86_AT(c, 0x8d1b2u);
    if (x86_cc(c, 4)) { goto L_8d47d; }
    X86_TICK(c, 16);
    // 08d1b8  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x8d1b8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 08d1be  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x8d1beu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 08d1c4  push eax
    X86_AT(c, 0x8d1c4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d1c5  call 0x8d060
    X86_AT(c, 0x8d1c5u);
    push32(c, 0x8d1cau); x86_call_known(c, 0x8d060u, f_0008d060); X86_RET(c, 0x8d1cau);
    X86_TICK(c, 9);
    // 08d1ca  add esp, 8
    X86_AT(c, 0x8d1cau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08d1cd  inc eax
    X86_AT(c, 0x8d1cdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 08d1ce  je 0x8d3ed
    X86_AT(c, 0x8d1ceu);
    if (x86_cc(c, 4)) { goto L_8d3ed; }
    X86_TICK(c, 19);
    // 08d1d4  lea eax, [ebp - 0xc]
    X86_AT(c, 0x8d1d4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 08d1d7  push eax
    X86_AT(c, 0x8d1d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d1d8  lea ecx, [ebp - 8]
    X86_AT(c, 0x8d1d8u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 08d1db  push ecx
    X86_AT(c, 0x8d1dbu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 08d1dc  lea edx, [ebp - 0x2818]
    X86_AT(c, 0x8d1dcu);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 08d1e2  push edx
    X86_AT(c, 0x8d1e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08d1e3  call 0x8d024
    X86_AT(c, 0x8d1e3u);
    push32(c, 0x8d1e8u); x86_call_known(c, 0x8d024u, f_0008d024); X86_RET(c, 0x8d1e8u);
    X86_TICK(c, 11);
    // 08d1e8  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x8d1e8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 08d1ee  push eax
    X86_AT(c, 0x8d1eeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d1ef  call 0x8d054
    X86_AT(c, 0x8d1efu);
    push32(c, 0x8d1f4u); x86_call_known(c, 0x8d054u, f_0008d054); X86_RET(c, 0x8d1f4u);
    X86_TICK(c, 21);
    // 08d1f4  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x8d1f4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 08d1f7  mov eax, dword ptr [ebp - 0x281c]
    X86_AT(c, 0x8d1f7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u)));
    // 08d1fd  movzx eax, byte ptr [eax + 0xe]
    X86_AT(c, 0x8d1fdu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xEu)));
    // 08d201  push eax
    X86_AT(c, 0x8d201u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d202  call 0x9372f
    X86_AT(c, 0x8d202u);
    push32(c, 0x8d207u); x86_call_known(c, 0x9372fu, f_0009372f); X86_RET(c, 0x8d207u);
    X86_TICK(c, 14);
    // 08d207  xchg esi, eax
    X86_AT(c, 0x8d207u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 08d208  sub esi, 0x200
    X86_AT(c, 0x8d208u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x200u, 0, 4); }
    // 08d20e  add esp, 0x14
    X86_AT(c, 0x8d20eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 08d211  cmp esi, 1
    X86_AT(c, 0x8d211u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 08d214  jl 0x8d3ed
    X86_AT(c, 0x8d214u);
    if (x86_cc(c, 12)) { goto L_8d3ed; }
    X86_TICK(c, 12);
    // 08d21a  cmp dword ptr [ebp - 8], 1
    X86_AT(c, 0x8d21au);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x1u, 0, 4);
    // 08d21e  jl 0x8d3ed
    X86_AT(c, 0x8d21eu);
    if (x86_cc(c, 12)) { goto L_8d3ed; }
    X86_TICK(c, 12);
    // 08d224  cmp dword ptr [ebp - 0xc], 1
    X86_AT(c, 0x8d224u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x1u, 0, 4);
    // 08d228  jl 0x8d3ed
    X86_AT(c, 0x8d228u);
    if (x86_cc(c, 12)) { goto L_8d3ed; }
    X86_TICK(c, 13);
    // 08d22e  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x8d22eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 08d231  dec edx
    X86_AT(c, 0x8d231u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 08d232  cmp edx, 0xf
    X86_AT(c, 0x8d232u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 08d235  ja 0x8d297
    X86_AT(c, 0x8d235u);
    if (x86_cc(c, 7)) { goto L_8d297; }
    X86_TICK(c, 7);
    // 08d237  jmp dword ptr cs:[edx*4 + 0x8d23f]
    X86_AT(c, 0x8d237u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0x8D23Fu)));
      switch (t) {
      case 0x8d27fu: goto L_8d27f;
      case 0x8d28au: goto L_8d28a;
      case 0x8d28fu: goto L_8d28f;
      case 0x8d297u: goto L_8d297;
      default: x86_jump(c, t); return; } }
L_8d27f:
    X86_TICK(c, 20);
    // 08d27f  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x8d27fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 08d282  inc eax
    X86_AT(c, 0x8d282u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 08d283  cdq 
    X86_AT(c, 0x8d283u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d284  sub eax, edx
    X86_AT(c, 0x8d284u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 08d286  sar eax, 1
    X86_AT(c, 0x8d286u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 08d288  jmp 0x8d294
    X86_AT(c, 0x8d288u);
    goto L_8d294;
L_8d28a:
    X86_TICK(c, 11);
    // 08d28a  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x8d28au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 08d28d  jmp 0x8d294
    X86_AT(c, 0x8d28du);
    goto L_8d294;
L_8d28f:
    X86_TICK(c, 6);
    // 08d28f  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x8d28fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 08d292  add eax, eax
    X86_AT(c, 0x8d292u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
L_8d294:
    X86_TICK(c, 2);
    // 08d294  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0x8d294u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
L_8d297:
    X86_TICK(c, 33);
    // 08d297  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d297u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 08d29a  imul eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d29au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 4);
    // 08d29e  cmp eax, esi
    X86_AT(c, 0x8d29eu);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 08d2a0  jge 0x8d2a3
    X86_AT(c, 0x8d2a0u);
    if (x86_cc(c, 13)) { goto L_8d2a3; }
    X86_TICK(c, 3);
    // 08d2a2  xchg esi, eax
    X86_AT(c, 0x8d2a2u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_8d2a3:
    X86_TICK(c, 33);
    // 08d2a3  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d2a3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 08d2a6  imul eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d2a6u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 4);
    // 08d2aa  cmp eax, esi
    X86_AT(c, 0x8d2aau);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 08d2ac  jle 0x8d2bc
    X86_AT(c, 0x8d2acu);
    if (x86_cc(c, 14)) { goto L_8d2bc; }
    X86_TICK(c, 71);
    // 08d2ae  mov eax, esi
    X86_AT(c, 0x8d2aeu);
    c.r[0] = c.r[6];
    // 08d2b0  cdq 
    X86_AT(c, 0x8d2b0u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d2b1  idiv dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d2b1u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4, 0x8d2b1u);
    // 08d2b4  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x8d2b4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 08d2b7  imul eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d2b7u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4);
    // 08d2bb  xchg esi, eax
    X86_AT(c, 0x8d2bbu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_8d2bc:
    X86_TICK(c, 7);
    // 08d2bc  cmp esi, 0x2800
    X86_AT(c, 0x8d2bcu);
    (void)x86_sub(c, c.r[6], 0x2800u, 0, 4);
    // 08d2c2  jg 0x8d352
    X86_AT(c, 0x8d2c2u);
    if (x86_cc(c, 15)) { goto L_8d352; }
    X86_TICK(c, 22);
    // 08d2c8  mov ebx, esi
    X86_AT(c, 0x8d2c8u);
    c.r[3] = c.r[6];
    // 08d2ca  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x8d2cau);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 08d2d0  push 1
    X86_AT(c, 0x8d2d0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08d2d2  push ebx
    X86_AT(c, 0x8d2d2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d2d3  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x8d2d3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 08d2d9  push eax
    X86_AT(c, 0x8d2d9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d2da  call 0x92340
    X86_AT(c, 0x8d2dau);
    push32(c, 0x8d2dfu); x86_call_known(c, 0x92340u, f_00092340); X86_RET(c, 0x8d2dfu);
    X86_TICK(c, 9);
    // 08d2df  add esp, 0x10
    X86_AT(c, 0x8d2dfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d2e2  dec eax
    X86_AT(c, 0x8d2e2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d2e3  jge 0x8d2ec
    X86_AT(c, 0x8d2e3u);
    if (x86_cc(c, 13)) { goto L_8d2ec; }
    X86_TICK(c, 2);
    // 08d2e5  mov dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0x8d2e5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0xFFFFFFFFu);
L_8d2ec:
    X86_TICK(c, 51);
    // 08d2ec  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x8d2ecu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 08d2f2  mov dword ptr [0x34c28], eax
    X86_AT(c, 0x8d2f2u);
    wr32((c.sbase[3] + (uint32_t)(0x34C28u)), c.r[0]);
    // 08d2f7  mov word ptr [0x34c2c], 0x14
    X86_AT(c, 0x8d2f7u);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Cu)), 0x14u);
    // 08d300  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0x8d300u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08d304  mov word ptr [0x34c2e], ax
    X86_AT(c, 0x8d304u);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Eu)), (c.r[0] & 0xFFFFu));
    // 08d30a  mov edx, edi
    X86_AT(c, 0x8d30au);
    c.r[2] = c.r[7];
    // 08d30c  mov word ptr [0x34c30], dx
    X86_AT(c, 0x8d30cu);
    wr16((c.sbase[3] + (uint32_t)(0x34C30u)), (c.r[2] & 0xFFFFu));
    // 08d313  add ax, word ptr [ebp - 8]
    X86_AT(c, 0x8d313u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 2)); }
    // 08d317  dec eax
    X86_AT(c, 0x8d317u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d318  mov word ptr [0x34c32], ax
    X86_AT(c, 0x8d318u);
    wr16((c.sbase[3] + (uint32_t)(0x34C32u)), (c.r[0] & 0xFFFFu));
    // 08d31e  mov eax, edi
    X86_AT(c, 0x8d31eu);
    c.r[0] = c.r[7];
    // 08d320  add ax, word ptr [ebp - 0xc]
    X86_AT(c, 0x8d320u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 2)); }
    // 08d324  dec eax
    X86_AT(c, 0x8d324u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d325  mov word ptr [0x34c34], ax
    X86_AT(c, 0x8d325u);
    wr16((c.sbase[3] + (uint32_t)(0x34C34u)), (c.r[0] & 0xFFFFu));
    // 08d32b  push 0x34c28
    X86_AT(c, 0x8d32bu);
    { uint32_t v = 0x34C28u; push32(c, v); }
    // 08d330  push 0
    X86_AT(c, 0x8d330u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08d332  push 0x34628
    X86_AT(c, 0x8d332u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08d337  call 0x544
    X86_AT(c, 0x8d337u);
    push32(c, 0x8d33cu); x86_call_known(c, 0x544u, f_00000544); X86_RET(c, 0x8d33cu);
    X86_TICK(c, 12);
    // 08d33c  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x8d33cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 08d342  call 0x92b18
    X86_AT(c, 0x8d342u);
    push32(c, 0x8d347u); x86_call_known(c, 0x92b18u, f_00092b18); X86_RET(c, 0x8d347u);
    X86_TICK(c, 13);
    // 08d347  mov eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0x8d347u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 08d34a  add esp, 0x10
    X86_AT(c, 0x8d34au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d34d  jmp 0x8d486
    X86_AT(c, 0x8d34du);
    goto L_8d486;
L_8d352:
    X86_TICK(c, 93);
    // 08d352  mov eax, 0x2800
    X86_AT(c, 0x8d352u);
    c.r[0] = 0x2800u;
    // 08d357  cdq 
    X86_AT(c, 0x8d357u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d358  idiv dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d358u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4, 0x8d358u);
    // 08d35b  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x8d35bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 08d35e  imul eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d35eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4);
    // 08d362  xchg ebx, eax
    X86_AT(c, 0x8d362u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 08d363  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x8d363u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 08d369  mov dword ptr [0x34c28], eax
    X86_AT(c, 0x8d369u);
    wr32((c.sbase[3] + (uint32_t)(0x34C28u)), c.r[0]);
    // 08d36e  mov word ptr [0x34c2c], 0x14
    X86_AT(c, 0x8d36eu);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Cu)), 0x14u);
    // 08d377  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0x8d377u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08d37b  mov word ptr [0x34c2e], ax
    X86_AT(c, 0x8d37bu);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Eu)), (c.r[0] & 0xFFFFu));
    // 08d381  add ax, word ptr [ebp - 8]
    X86_AT(c, 0x8d381u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 2)); }
    // 08d385  dec eax
    X86_AT(c, 0x8d385u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d386  mov word ptr [0x34c32], ax
    X86_AT(c, 0x8d386u);
    wr16((c.sbase[3] + (uint32_t)(0x34C32u)), (c.r[0] & 0xFFFFu));
L_8d38c:
    X86_TICK(c, 7);
    // 08d38c  cmp ebx, esi
    X86_AT(c, 0x8d38cu);
    (void)x86_sub(c, c.r[3], c.r[6], 0, 4);
    // 08d38e  jge 0x8d3e8
    X86_AT(c, 0x8d38eu);
    if (x86_cc(c, 13)) { goto L_8d3e8; }
    X86_TICK(c, 20);
    // 08d390  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x8d390u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 08d396  push 1
    X86_AT(c, 0x8d396u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08d398  push ebx
    X86_AT(c, 0x8d398u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d399  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x8d399u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 08d39f  push eax
    X86_AT(c, 0x8d39fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d3a0  call 0x92340
    X86_AT(c, 0x8d3a0u);
    push32(c, 0x8d3a5u); x86_call_known(c, 0x92340u, f_00092340); X86_RET(c, 0x8d3a5u);
    X86_TICK(c, 9);
    // 08d3a5  add esp, 0x10
    X86_AT(c, 0x8d3a5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d3a8  dec eax
    X86_AT(c, 0x8d3a8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d3a9  jge 0x8d3b2
    X86_AT(c, 0x8d3a9u);
    if (x86_cc(c, 13)) { goto L_8d3b2; }
    X86_TICK(c, 2);
    // 08d3ab  mov dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0x8d3abu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0xFFFFFFFFu);
L_8d3b2:
    X86_TICK(c, 29);
    // 08d3b2  mov eax, edi
    X86_AT(c, 0x8d3b2u);
    c.r[0] = c.r[7];
    // 08d3b4  mov word ptr [0x34c30], ax
    X86_AT(c, 0x8d3b4u);
    wr16((c.sbase[3] + (uint32_t)(0x34C30u)), (c.r[0] & 0xFFFFu));
    // 08d3ba  mov eax, edi
    X86_AT(c, 0x8d3bau);
    c.r[0] = c.r[7];
    // 08d3bc  add ax, word ptr [ebp - 0x14]
    X86_AT(c, 0x8d3bcu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 2)); }
    // 08d3c0  dec eax
    X86_AT(c, 0x8d3c0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d3c1  mov word ptr [0x34c34], ax
    X86_AT(c, 0x8d3c1u);
    wr16((c.sbase[3] + (uint32_t)(0x34C34u)), (c.r[0] & 0xFFFFu));
    // 08d3c7  push 0x34c28
    X86_AT(c, 0x8d3c7u);
    { uint32_t v = 0x34C28u; push32(c, v); }
    // 08d3cc  push 0
    X86_AT(c, 0x8d3ccu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08d3ce  push 0x34628
    X86_AT(c, 0x8d3ceu);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08d3d3  call 0x544
    X86_AT(c, 0x8d3d3u);
    push32(c, 0x8d3d8u); x86_call_known(c, 0x544u, f_00000544); X86_RET(c, 0x8d3d8u);
    X86_TICK(c, 22);
    // 08d3d8  add edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0x8d3d8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 4); }
    // 08d3db  sub esi, ebx
    X86_AT(c, 0x8d3dbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[3], 0, 4); }
    // 08d3dd  add esp, 0xc
    X86_AT(c, 0x8d3ddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 08d3e0  cmp dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0x8d3e0u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 0xFFFFFFFFu, 0, 4);
    // 08d3e4  jne 0x8d38c
    X86_AT(c, 0x8d3e4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8d38cu); goto L_8d38c; }
    X86_TICK(c, 7);
    // 08d3e6  jmp 0x8d3ed
    X86_AT(c, 0x8d3e6u);
    goto L_8d3ed;
L_8d3e8:
    X86_TICK(c, 11);
    // 08d3e8  cmp esi, dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d3e8u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4);
    // 08d3eb  jge 0x8d405
    X86_AT(c, 0x8d3ebu);
    if (x86_cc(c, 13)) { goto L_8d405; }
L_8d3ed:
    X86_TICK(c, 12);
    // 08d3ed  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x8d3edu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 08d3f3  call 0x92b18
    X86_AT(c, 0x8d3f3u);
    push32(c, 0x8d3f8u); x86_call_known(c, 0x92b18u, f_00092b18); X86_RET(c, 0x8d3f8u);
    X86_TICK(c, 11);
    // 08d3f8  mov eax, 0xffffffff
    X86_AT(c, 0x8d3f8u);
    c.r[0] = 0xFFFFFFFFu;
    // 08d3fd  add esp, 4
    X86_AT(c, 0x8d3fdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08d400  jmp 0x8d486
    X86_AT(c, 0x8d400u);
    goto L_8d486;
L_8d405:
    X86_TICK(c, 88);
    // 08d405  mov eax, esi
    X86_AT(c, 0x8d405u);
    c.r[0] = c.r[6];
    // 08d407  cdq 
    X86_AT(c, 0x8d407u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d408  idiv dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d408u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4, 0x8d408u);
    // 08d40b  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x8d40bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 08d40e  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x8d40eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 08d414  push 1
    X86_AT(c, 0x8d414u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08d416  imul eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d416u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4);
    // 08d41a  push eax
    X86_AT(c, 0x8d41au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d41b  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x8d41bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 08d421  push eax
    X86_AT(c, 0x8d421u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d422  call 0x92340
    X86_AT(c, 0x8d422u);
    push32(c, 0x8d427u); x86_call_known(c, 0x92340u, f_00092340); X86_RET(c, 0x8d427u);
    X86_TICK(c, 9);
    // 08d427  add esp, 0x10
    X86_AT(c, 0x8d427u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d42a  dec eax
    X86_AT(c, 0x8d42au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d42b  jge 0x8d434
    X86_AT(c, 0x8d42bu);
    if (x86_cc(c, 13)) { goto L_8d434; }
    X86_TICK(c, 2);
    // 08d42d  mov dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0x8d42du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0xFFFFFFFFu);
L_8d434:
    X86_TICK(c, 35);
    // 08d434  mov eax, edi
    X86_AT(c, 0x8d434u);
    c.r[0] = c.r[7];
    // 08d436  mov word ptr [0x34c30], ax
    X86_AT(c, 0x8d436u);
    wr16((c.sbase[3] + (uint32_t)(0x34C30u)), (c.r[0] & 0xFFFFu));
    // 08d43c  mov eax, edi
    X86_AT(c, 0x8d43cu);
    c.r[0] = c.r[7];
    // 08d43e  add ax, word ptr [ebp - 0x14]
    X86_AT(c, 0x8d43eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 2)); }
    // 08d442  dec eax
    X86_AT(c, 0x8d442u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d443  mov word ptr [0x34c34], ax
    X86_AT(c, 0x8d443u);
    wr16((c.sbase[3] + (uint32_t)(0x34C34u)), (c.r[0] & 0xFFFFu));
    // 08d449  mov ax, word ptr [ebp - 0x14]
    X86_AT(c, 0x8d449u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))));
    // 08d44d  mov word ptr [0x34c38], ax
    X86_AT(c, 0x8d44du);
    wr16((c.sbase[3] + (uint32_t)(0x34C38u)), (c.r[0] & 0xFFFFu));
    // 08d453  push 0x34c28
    X86_AT(c, 0x8d453u);
    { uint32_t v = 0x34C28u; push32(c, v); }
    // 08d458  push 0
    X86_AT(c, 0x8d458u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08d45a  push 0x34628
    X86_AT(c, 0x8d45au);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08d45f  call 0x544
    X86_AT(c, 0x8d45fu);
    push32(c, 0x8d464u); x86_call_known(c, 0x544u, f_00000544); X86_RET(c, 0x8d464u);
    X86_TICK(c, 12);
    // 08d464  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x8d464u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 08d46a  call 0x92b18
    X86_AT(c, 0x8d46au);
    push32(c, 0x8d46fu); x86_call_known(c, 0x92b18u, f_00092b18); X86_RET(c, 0x8d46fu);
    X86_TICK(c, 35);
    // 08d46f  add esp, 0x10
    X86_AT(c, 0x8d46fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d472  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d472u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 08d475  imul eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x8d475u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 4);
    // 08d479  cmp eax, esi
    X86_AT(c, 0x8d479u);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 08d47b  jge 0x8d484
    X86_AT(c, 0x8d47bu);
    if (x86_cc(c, 13)) { goto L_8d484; }
L_8d47d:
    X86_TICK(c, 9);
    // 08d47d  mov eax, 0xffffffff
    X86_AT(c, 0x8d47du);
    c.r[0] = 0xFFFFFFFFu;
    // 08d482  jmp 0x8d486
    X86_AT(c, 0x8d482u);
    goto L_8d486;
L_8d484:
    X86_TICK(c, 2);
    // 08d484  sub eax, eax
    X86_AT(c, 0x8d484u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8d486:
    X86_TICK(c, 28);
    // 08d486  pop edi
    X86_AT(c, 0x8d486u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d487  pop esi
    X86_AT(c, 0x8d487u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08d488  pop ebx
    X86_AT(c, 0x8d488u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08d489  leave 
    X86_AT(c, 0x8d489u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d48a  ret 
    X86_AT(c, 0x8d48au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d184u, "ran off the end of a function");
}
void f_0008d486(X86Cpu& c) {
    X86_TICK(c, 28);
    // 08d486  pop edi
    X86_AT(c, 0x8d486u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d487  pop esi
    X86_AT(c, 0x8d487u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08d488  pop ebx
    X86_AT(c, 0x8d488u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08d489  leave 
    X86_AT(c, 0x8d489u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d48a  ret 
    X86_AT(c, 0x8d48au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d486u, "ran off the end of a function");
}
void f_0008d48c(X86Cpu& c) {
    X86_TICK(c, 56);
    // 08d48c  push ebp
    X86_AT(c, 0x8d48cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d48d  mov ebp, esp
    X86_AT(c, 0x8d48du);
    c.r[5] = c.r[4];
    // 08d48f  push ebx
    X86_AT(c, 0x8d48fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d490  push esi
    X86_AT(c, 0x8d490u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08d491  push edi
    X86_AT(c, 0x8d491u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d492  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8d492u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08d495  mov esi, dword ptr [ebp + 0x14]
    X86_AT(c, 0x8d495u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 08d498  mov ebx, dword ptr [ebp + 0x20]
    X86_AT(c, 0x8d498u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)));
    // 08d49b  lea eax, [esi - 6]
    X86_AT(c, 0x8d49bu);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFFAu);
    // 08d49e  cdq 
    X86_AT(c, 0x8d49eu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d49f  sub eax, edx
    X86_AT(c, 0x8d49fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 08d4a1  sar eax, 1
    X86_AT(c, 0x8d4a1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 08d4a3  cdq 
    X86_AT(c, 0x8d4a3u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d4a4  sub eax, edx
    X86_AT(c, 0x8d4a4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 08d4a6  sar eax, 1
    X86_AT(c, 0x8d4a6u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 08d4a8  cdq 
    X86_AT(c, 0x8d4a8u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d4a9  sub eax, edx
    X86_AT(c, 0x8d4a9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 08d4ab  sar eax, 1
    X86_AT(c, 0x8d4abu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 08d4ad  cmp eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x8d4adu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))), 0, 4);
    // 08d4b0  jge 0x8d4b5
    X86_AT(c, 0x8d4b0u);
    if (x86_cc(c, 13)) { goto L_8d4b5; }
    X86_TICK(c, 2);
    // 08d4b2  mov dword ptr [ebp + 0x1c], eax
    X86_AT(c, 0x8d4b2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
L_8d4b5:
    X86_TICK(c, 57);
    // 08d4b5  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0x8d4b5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 08d4b8  sub eax, 4
    X86_AT(c, 0x8d4b8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x4u, 0, 4); }
    // 08d4bb  cdq 
    X86_AT(c, 0x8d4bbu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d4bc  mov ecx, 0x10
    X86_AT(c, 0x8d4bcu);
    c.r[1] = 0x10u;
    // 08d4c1  idiv ecx
    X86_AT(c, 0x8d4c1u);
    x86_idiv(c, c.r[1], 4, 0x8d4c1u);
    // 08d4c3  cmp eax, ebx
    X86_AT(c, 0x8d4c3u);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 08d4c5  jge 0x8d4c8
    X86_AT(c, 0x8d4c5u);
    if (x86_cc(c, 13)) { goto L_8d4c8; }
    X86_TICK(c, 3);
    // 08d4c7  xchg ebx, eax
    X86_AT(c, 0x8d4c7u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
L_8d4c8:
    X86_TICK(c, 100);
    // 08d4c8  mov eax, 0x34624
    X86_AT(c, 0x8d4c8u);
    c.r[0] = 0x34624u;
    // 08d4cd  lea edx, [edi + edi*2]
    X86_AT(c, 0x8d4cdu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08d4d0  lea ecx, [edx + edx*8]
    X86_AT(c, 0x8d4d0u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 08d4d3  lea ecx, [edx + ecx*2]
    X86_AT(c, 0x8d4d3u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 08d4d6  mov byte ptr [eax + ecx*1 + 0x710], 0xff
    X86_AT(c, 0x8d4d6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x710u)), 0xFFu);
    // 08d4de  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8d4deu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08d4e1  mov dword ptr [eax + ecx*1 + 0x711], edx
    X86_AT(c, 0x8d4e1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x711u)), c.r[2]);
    // 08d4e8  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8d4e8u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08d4eb  mov dword ptr [eax + ecx*1 + 0x715], edx
    X86_AT(c, 0x8d4ebu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x715u)), c.r[2]);
    // 08d4f2  mov dword ptr [eax + ecx*1 + 0x719], esi
    X86_AT(c, 0x8d4f2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x719u)), c.r[6]);
    // 08d4f9  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0x8d4f9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 08d4fc  mov dword ptr [eax + ecx*1 + 0x71d], edx
    X86_AT(c, 0x8d4fcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x71Du)), c.r[2]);
    // 08d503  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x8d503u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 08d506  mov dword ptr [eax + ecx*1 + 0x721], edx
    X86_AT(c, 0x8d506u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x721u)), c.r[2]);
    // 08d50d  mov dword ptr [eax + ecx*1 + 0x725], ebx
    X86_AT(c, 0x8d50du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x725u)), c.r[3]);
    // 08d514  sub edx, edx
    X86_AT(c, 0x8d514u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 08d516  mov dword ptr [eax + ecx*1 + 0x729], edx
    X86_AT(c, 0x8d516u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x729u)), c.r[2]);
    // 08d51d  mov dword ptr [eax + ecx*1 + 0x72d], edx
    X86_AT(c, 0x8d51du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x72Du)), c.r[2]);
    // 08d524  mov edx, 0xffffffff
    X86_AT(c, 0x8d524u);
    c.r[2] = 0xFFFFFFFFu;
    // 08d529  mov dword ptr [eax + ecx*1 + 0x731], edx
    X86_AT(c, 0x8d529u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x731u)), c.r[2]);
    // 08d530  mov edx, dword ptr [ebp + 0x24]
    X86_AT(c, 0x8d530u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u)));
    // 08d533  mov dword ptr [eax + ecx*1 + 0x735], edx
    X86_AT(c, 0x8d533u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x735u)), c.r[2]);
    // 08d53a  mov dword ptr [eax + ecx*1 + 0x739], 0
    X86_AT(c, 0x8d53au);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x739u)), 0x0u);
    // 08d545  mov edx, dword ptr [ebp + 0x28]
    X86_AT(c, 0x8d545u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x28u)));
    // 08d548  mov dword ptr [eax + ecx*1 + 0x73d], edx
    X86_AT(c, 0x8d548u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x73Du)), c.r[2]);
    // 08d54f  mov edx, dword ptr [ebp + 0x2c]
    X86_AT(c, 0x8d54fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x2Cu)));
    // 08d552  mov dword ptr [eax + ecx*1 + 0x741], edx
    X86_AT(c, 0x8d552u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x741u)), c.r[2]);
    // 08d559  mov dword ptr [eax + ecx*1 + 0x745], 0xffffffff
    X86_AT(c, 0x8d559u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x745u)), 0xFFFFFFFFu);
    // 08d564  lea eax, [eax + ecx*1 + 0x710]
    X86_AT(c, 0x8d564u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[1] + 0x710u);
    // 08d56b  pop edi
    X86_AT(c, 0x8d56bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d56c  pop esi
    X86_AT(c, 0x8d56cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08d56d  pop ebx
    X86_AT(c, 0x8d56du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08d56e  leave 
    X86_AT(c, 0x8d56eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d56f  ret 
    X86_AT(c, 0x8d56fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d48cu, "ran off the end of a function");
}
void f_0008d570(X86Cpu& c) {
    X86_TICK(c, 38);
    // 08d570  push ebp
    X86_AT(c, 0x8d570u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d571  mov ebp, esp
    X86_AT(c, 0x8d571u);
    c.r[5] = c.r[4];
    // 08d573  push ebx
    X86_AT(c, 0x8d573u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d574  push esi
    X86_AT(c, 0x8d574u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08d575  push edi
    X86_AT(c, 0x8d575u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d576  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8d576u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08d579  mov eax, 0x34624
    X86_AT(c, 0x8d579u);
    c.r[0] = 0x34624u;
    // 08d57e  lea edx, [edi + edi*2]
    X86_AT(c, 0x8d57eu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08d581  lea ecx, [edx + edx*8]
    X86_AT(c, 0x8d581u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 08d584  lea ecx, [edx + ecx*2]
    X86_AT(c, 0x8d584u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 08d587  push dword ptr [eax + ecx*1 + 0x735]
    X86_AT(c, 0x8d587u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x735u))); push32(c, v); }
    // 08d58e  mov ebx, eax
    X86_AT(c, 0x8d58eu);
    c.r[3] = c.r[0];
    // 08d590  mov esi, ecx
    X86_AT(c, 0x8d590u);
    c.r[6] = c.r[1];
    // 08d592  call 0x8c384
    X86_AT(c, 0x8d592u);
    push32(c, 0x8d597u); x86_call_known(c, 0x8c384u, f_0008c384); X86_RET(c, 0x8d597u);
    X86_TICK(c, 14);
    // 08d597  add esp, 4
    X86_AT(c, 0x8d597u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08d59a  cmp dword ptr [ebx + esi*1 + 0x745], 0xffffffff
    X86_AT(c, 0x8d59au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] + 0x745u))), 0xFFFFFFFFu, 0, 4);
    // 08d5a2  jne 0x8d5b3
    X86_AT(c, 0x8d5a2u);
    if (x86_cc(c, 5)) { goto L_8d5b3; }
    X86_TICK(c, 12);
    // 08d5a4  push dword ptr [ebx + esi*1 + 0x741]
    X86_AT(c, 0x8d5a4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] + 0x741u))); push32(c, v); }
    // 08d5ab  call 0x8c39c
    X86_AT(c, 0x8d5abu);
    push32(c, 0x8d5b0u); x86_call_known(c, 0x8c39cu, f_0008c39c); X86_RET(c, 0x8d5b0u);
    X86_TICK(c, 2);
    // 08d5b0  add esp, 4
    X86_AT(c, 0x8d5b0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8d5b3:
    X86_TICK(c, 18);
    // 08d5b3  lea eax, [edi + edi*2]
    X86_AT(c, 0x8d5b3u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08d5b6  lea edx, [eax + eax*8]
    X86_AT(c, 0x8d5b6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 08d5b9  lea edx, [eax + edx*2]
    X86_AT(c, 0x8d5b9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 08d5bc  push dword ptr [edx + 0x34d5d]
    X86_AT(c, 0x8d5bcu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x34D5Du))); push32(c, v); }
    // 08d5c2  call 0x8c44c
    X86_AT(c, 0x8d5c2u);
    push32(c, 0x8d5c7u); x86_call_known(c, 0x8c44cu, f_0008c44c); X86_RET(c, 0x8d5c7u);
    X86_TICK(c, 30);
    // 08d5c7  add esp, 4
    X86_AT(c, 0x8d5c7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08d5ca  pop edi
    X86_AT(c, 0x8d5cau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d5cb  pop esi
    X86_AT(c, 0x8d5cbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08d5cc  pop ebx
    X86_AT(c, 0x8d5ccu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08d5cd  leave 
    X86_AT(c, 0x8d5cdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d5ce  ret 
    X86_AT(c, 0x8d5ceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d570u, "ran off the end of a function");
}
void f_0008d5d0(X86Cpu& c) {
    X86_TICK(c, 74);
    // 08d5d0  push ebp
    X86_AT(c, 0x8d5d0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d5d1  mov ebp, esp
    X86_AT(c, 0x8d5d1u);
    c.r[5] = c.r[4];
    // 08d5d3  push edi
    X86_AT(c, 0x8d5d3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d5d4  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8d5d4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08d5d7  lea eax, [eax + eax*2]
    X86_AT(c, 0x8d5d7u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 08d5da  lea edx, [eax + eax*8]
    X86_AT(c, 0x8d5dau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 08d5dd  lea edx, [eax + edx*2]
    X86_AT(c, 0x8d5ddu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 08d5e0  lea edi, [edx + 0x34d34]
    X86_AT(c, 0x8d5e0u);
    c.r[7] = (uint32_t)(c.r[2] + 0x34D34u);
    // 08d5e6  push dword ptr [edi + 0x31]
    X86_AT(c, 0x8d5e6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
    // 08d5e9  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d5e9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d5ec  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0x8d5ecu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 08d5ef  sub eax, 2
    X86_AT(c, 0x8d5efu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 08d5f2  push eax
    X86_AT(c, 0x8d5f2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d5f3  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d5f3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d5f6  add eax, dword ptr [edi + 9]
    X86_AT(c, 0x8d5f6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 08d5f9  sub eax, 2
    X86_AT(c, 0x8d5f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 08d5fc  push eax
    X86_AT(c, 0x8d5fcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d5fd  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d5fdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d600  inc eax
    X86_AT(c, 0x8d600u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 08d601  push eax
    X86_AT(c, 0x8d601u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d602  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d602u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d605  inc eax
    X86_AT(c, 0x8d605u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 08d606  push eax
    X86_AT(c, 0x8d606u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d607  call 0x8ca80
    X86_AT(c, 0x8d607u);
    push32(c, 0x8d60cu); x86_call_known(c, 0x8ca80u, f_0008ca80); X86_RET(c, 0x8d60cu);
    X86_TICK(c, 12);
    // 08d60c  push dword ptr [edi + 0x2d]
    X86_AT(c, 0x8d60cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Du))); push32(c, v); }
    // 08d60f  call 0x8c384
    X86_AT(c, 0x8d60fu);
    push32(c, 0x8d614u); x86_call_known(c, 0x8c384u, f_0008c384); X86_RET(c, 0x8d614u);
    X86_TICK(c, 51);
    // 08d614  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d614u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d617  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0x8d617u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 08d61a  sub eax, 2
    X86_AT(c, 0x8d61au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 08d61d  push eax
    X86_AT(c, 0x8d61du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d61e  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d61eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d621  add eax, dword ptr [edi + 9]
    X86_AT(c, 0x8d621u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 08d624  sub eax, 2
    X86_AT(c, 0x8d624u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 08d627  push eax
    X86_AT(c, 0x8d627u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d628  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d628u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d62b  inc eax
    X86_AT(c, 0x8d62bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 08d62c  push eax
    X86_AT(c, 0x8d62cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d62d  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d62du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d630  inc eax
    X86_AT(c, 0x8d630u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 08d631  push eax
    X86_AT(c, 0x8d631u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d632  call 0x8ca1c
    X86_AT(c, 0x8d632u);
    push32(c, 0x8d637u); x86_call_known(c, 0x8ca1cu, f_0008ca1c); X86_RET(c, 0x8d637u);
    X86_TICK(c, 39);
    // 08d637  push dword ptr [edi + 5]
    X86_AT(c, 0x8d637u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))); push32(c, v); }
    // 08d63a  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d63au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d63d  add eax, dword ptr [edi + 9]
    X86_AT(c, 0x8d63du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 08d640  sub eax, 3
    X86_AT(c, 0x8d640u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 08d643  push eax
    X86_AT(c, 0x8d643u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d644  push dword ptr [edi + 5]
    X86_AT(c, 0x8d644u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))); push32(c, v); }
    // 08d647  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d647u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d64a  add eax, 2
    X86_AT(c, 0x8d64au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 08d64d  push eax
    X86_AT(c, 0x8d64du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d64e  call 0x8c8fc
    X86_AT(c, 0x8d64eu);
    push32(c, 0x8d653u); x86_call_known(c, 0x8c8fcu, f_0008c8fc); X86_RET(c, 0x8d653u);
    X86_TICK(c, 45);
    // 08d653  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d653u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d656  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0x8d656u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 08d659  sub eax, 3
    X86_AT(c, 0x8d659u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 08d65c  push eax
    X86_AT(c, 0x8d65cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d65d  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d65du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d660  add eax, dword ptr [edi + 9]
    X86_AT(c, 0x8d660u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 08d663  dec eax
    X86_AT(c, 0x8d663u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d664  push eax
    X86_AT(c, 0x8d664u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d665  mov edx, dword ptr [edi + 5]
    X86_AT(c, 0x8d665u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d668  add edx, 2
    X86_AT(c, 0x8d668u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x2u, 0, 4); }
    // 08d66b  push edx
    X86_AT(c, 0x8d66bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08d66c  push eax
    X86_AT(c, 0x8d66cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d66d  call 0x8c8fc
    X86_AT(c, 0x8d66du);
    push32(c, 0x8d672u); x86_call_known(c, 0x8c8fcu, f_0008c8fc); X86_RET(c, 0x8d672u);
    X86_TICK(c, 47);
    // 08d672  add esp, 0x48
    X86_AT(c, 0x8d672u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 08d675  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d675u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d678  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0x8d678u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 08d67b  dec eax
    X86_AT(c, 0x8d67bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d67c  push eax
    X86_AT(c, 0x8d67cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d67d  mov edx, dword ptr [edi + 1]
    X86_AT(c, 0x8d67du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d680  add edx, dword ptr [edi + 9]
    X86_AT(c, 0x8d680u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 08d683  sub edx, 3
    X86_AT(c, 0x8d683u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x3u, 0, 4); }
    // 08d686  push edx
    X86_AT(c, 0x8d686u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08d687  push eax
    X86_AT(c, 0x8d687u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d688  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d688u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d68b  add eax, 2
    X86_AT(c, 0x8d68bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 08d68e  push eax
    X86_AT(c, 0x8d68eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d68f  call 0x8c8fc
    X86_AT(c, 0x8d68fu);
    push32(c, 0x8d694u); x86_call_known(c, 0x8c8fcu, f_0008c8fc); X86_RET(c, 0x8d694u);
    X86_TICK(c, 41);
    // 08d694  add esp, 0x10
    X86_AT(c, 0x8d694u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d697  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d697u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d69a  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0x8d69au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 08d69d  sub eax, 3
    X86_AT(c, 0x8d69du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 08d6a0  push eax
    X86_AT(c, 0x8d6a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d6a1  push dword ptr [edi + 1]
    X86_AT(c, 0x8d6a1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))); push32(c, v); }
    // 08d6a4  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d6a4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d6a7  add eax, 2
    X86_AT(c, 0x8d6a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 08d6aa  push eax
    X86_AT(c, 0x8d6aau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d6ab  push dword ptr [edi + 1]
    X86_AT(c, 0x8d6abu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))); push32(c, v); }
    // 08d6ae  call 0x8c8fc
    X86_AT(c, 0x8d6aeu);
    push32(c, 0x8d6b3u); x86_call_known(c, 0x8c8fcu, f_0008c8fc); X86_RET(c, 0x8d6b3u);
    X86_TICK(c, 24);
    // 08d6b3  mov byte ptr [edi], 0
    X86_AT(c, 0x8d6b3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 08d6b6  add esp, 0x10
    X86_AT(c, 0x8d6b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d6b9  pop edi
    X86_AT(c, 0x8d6b9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d6ba  leave 
    X86_AT(c, 0x8d6bau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d6bb  ret 
    X86_AT(c, 0x8d6bbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d5d0u, "ran off the end of a function");
}
void f_0008d6bc(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08d6bc  push ebp
    X86_AT(c, 0x8d6bcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d6bd  mov ebp, esp
    X86_AT(c, 0x8d6bdu);
    c.r[5] = c.r[4];
    // 08d6bf  sub esp, 0x40
    X86_AT(c, 0x8d6bfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x40u, 0, 4); }
    // 08d6c2  push ebx
    X86_AT(c, 0x8d6c2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d6c3  push edi
    X86_AT(c, 0x8d6c3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d6c4  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8d6c4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08d6c7  push 9
    X86_AT(c, 0x8d6c7u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 08d6c9  call 0x8c4f4
    X86_AT(c, 0x8d6c9u);
    push32(c, 0x8d6ceu); x86_call_known(c, 0x8c4f4u, f_0008c4f4); X86_RET(c, 0x8d6ceu);
    X86_TICK(c, 32);
    // 08d6ce  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0x8d6ceu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08d6d2  mov word ptr [ebp - 0x40], ax
    X86_AT(c, 0x8d6d2u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC0u)), (c.r[0] & 0xFFFFu));
    // 08d6d6  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0x8d6d6u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08d6da  mov word ptr [ebp - 0x3e], ax
    X86_AT(c, 0x8d6dau);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC2u)), (c.r[0] & 0xFFFFu));
    // 08d6de  mov edx, 0xffff
    X86_AT(c, 0x8d6deu);
    c.r[2] = 0xFFFFu;
    // 08d6e3  sub eax, eax
    X86_AT(c, 0x8d6e3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08d6e5  push edi
    X86_AT(c, 0x8d6e5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d6e6  mov ecx, edx
    X86_AT(c, 0x8d6e6u);
    c.r[1] = c.r[2];
    // 08d6e8  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x8d6e8u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 08d6ea  jne 0x8d6ef
    X86_AT(c, 0x8d6eau);
    if (x86_cc(c, 5)) { goto L_8d6ef; }
    X86_TICK(c, 4);
    // 08d6ec  inc ecx
    X86_AT(c, 0x8d6ecu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 08d6ed  sub edx, ecx
    X86_AT(c, 0x8d6edu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_8d6ef:
    X86_TICK(c, 19);
    // 08d6ef  pop edi
    X86_AT(c, 0x8d6efu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d6f0  mov word ptr [ebp - 0x3c], dx
    X86_AT(c, 0x8d6f0u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC4u)), (c.r[2] & 0xFFFFu));
    // 08d6f4  push edi
    X86_AT(c, 0x8d6f4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d6f5  lea eax, [ebp - 0x3a]
    X86_AT(c, 0x8d6f5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC6u);
    // 08d6f8  push eax
    X86_AT(c, 0x8d6f8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d6f9  call 0x93154
    X86_AT(c, 0x8d6f9u);
    push32(c, 0x8d6feu); x86_call_known(c, 0x93154u, f_00093154); X86_RET(c, 0x8d6feu);
    X86_TICK(c, 15);
    // 08d6fe  lea ebx, [ebp - 0x40]
    X86_AT(c, 0x8d6feu);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFC0u);
    // 08d701  push ebx
    X86_AT(c, 0x8d701u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d702  push 1
    X86_AT(c, 0x8d702u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08d704  push 0x34628
    X86_AT(c, 0x8d704u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08d709  call 0xa45
    X86_AT(c, 0x8d709u);
    push32(c, 0x8d70eu); x86_call_known(c, 0xa45u, f_00000a45); X86_RET(c, 0x8d70eu);
    X86_TICK(c, 15);
    // 08d70e  movsx eax, word ptr [0x34d2c]
    X86_AT(c, 0x8d70eu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34D2Cu)));
    // 08d715  push eax
    X86_AT(c, 0x8d715u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d716  call 0x8c4f4
    X86_AT(c, 0x8d716u);
    push32(c, 0x8d71bu); x86_call_known(c, 0x8c4f4u, f_0008c4f4); X86_RET(c, 0x8d71bu);
    X86_TICK(c, 26);
    // 08d71b  add esp, 0x1c
    X86_AT(c, 0x8d71bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 08d71e  pop edi
    X86_AT(c, 0x8d71eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d71f  pop ebx
    X86_AT(c, 0x8d71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08d720  leave 
    X86_AT(c, 0x8d720u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d721  ret 
    X86_AT(c, 0x8d721u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d6bcu, "ran off the end of a function");
}
void f_0008d724(X86Cpu& c) {
    X86_TICK(c, 74);
    // 08d724  push ebp
    X86_AT(c, 0x8d724u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d725  mov ebp, esp
    X86_AT(c, 0x8d725u);
    c.r[5] = c.r[4];
    // 08d727  push edi
    X86_AT(c, 0x8d727u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d728  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8d728u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08d72b  lea eax, [eax + eax*2]
    X86_AT(c, 0x8d72bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 08d72e  lea edx, [eax + eax*8]
    X86_AT(c, 0x8d72eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 08d731  lea edx, [eax + edx*2]
    X86_AT(c, 0x8d731u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 08d734  lea edi, [edx + 0x34d34]
    X86_AT(c, 0x8d734u);
    c.r[7] = (uint32_t)(c.r[2] + 0x34D34u);
    // 08d73a  push dword ptr [edi + 0x31]
    X86_AT(c, 0x8d73au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
    // 08d73d  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d73du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d740  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0x8d740u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 08d743  sub eax, 3
    X86_AT(c, 0x8d743u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 08d746  push eax
    X86_AT(c, 0x8d746u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d747  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d747u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d74a  add eax, dword ptr [edi + 9]
    X86_AT(c, 0x8d74au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 08d74d  sub eax, 3
    X86_AT(c, 0x8d74du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 08d750  push eax
    X86_AT(c, 0x8d750u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d751  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d751u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d754  add eax, 2
    X86_AT(c, 0x8d754u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 08d757  push eax
    X86_AT(c, 0x8d757u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d758  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d758u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d75b  add eax, 2
    X86_AT(c, 0x8d75bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 08d75e  push eax
    X86_AT(c, 0x8d75eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d75f  call 0x8ca80
    X86_AT(c, 0x8d75fu);
    push32(c, 0x8d764u); x86_call_known(c, 0x8ca80u, f_0008ca80); X86_RET(c, 0x8d764u);
    X86_TICK(c, 12);
    // 08d764  push dword ptr [edi + 0x25]
    X86_AT(c, 0x8d764u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x25u))); push32(c, v); }
    // 08d767  call 0x8c384
    X86_AT(c, 0x8d767u);
    push32(c, 0x8d76cu); x86_call_known(c, 0x8c384u, f_0008c384); X86_RET(c, 0x8d76cu);
    X86_TICK(c, 12);
    // 08d76c  push dword ptr [edi + 0x31]
    X86_AT(c, 0x8d76cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
    // 08d76f  call 0x8c3b4
    X86_AT(c, 0x8d76fu);
    push32(c, 0x8d774u); x86_call_known(c, 0x8c3b4u, f_0008c3b4); X86_RET(c, 0x8d774u);
    X86_TICK(c, 14);
    // 08d774  add esp, 0x1c
    X86_AT(c, 0x8d774u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 08d777  cmp dword ptr [edi + 0x35], 0
    X86_AT(c, 0x8d777u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x35u))), 0x0u, 0, 4);
    // 08d77b  jne 0x8d781
    X86_AT(c, 0x8d77bu);
    if (x86_cc(c, 5)) { goto L_8d781; }
    X86_TICK(c, 9);
    // 08d77d  push 0xb
    X86_AT(c, 0x8d77du);
    { uint32_t v = 0xBu; push32(c, v); }
    // 08d77f  jmp 0x8d784
    X86_AT(c, 0x8d77fu);
    goto L_8d784;
L_8d781:
    X86_TICK(c, 5);
    // 08d781  push dword ptr [edi + 0x31]
    X86_AT(c, 0x8d781u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
L_8d784:
    X86_TICK(c, 7);
    // 08d784  call 0x8c39c
    X86_AT(c, 0x8d784u);
    push32(c, 0x8d789u); x86_call_known(c, 0x8c39cu, f_0008c39c); X86_RET(c, 0x8d789u);
    X86_TICK(c, 19);
    // 08d789  add esp, 4
    X86_AT(c, 0x8d789u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08d78c  movsx eax, word ptr [0x34d2e]
    X86_AT(c, 0x8d78cu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34D2Eu)));
    // 08d793  push eax
    X86_AT(c, 0x8d793u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d794  push 0x34628
    X86_AT(c, 0x8d794u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08d799  call 0x245
    X86_AT(c, 0x8d799u);
    push32(c, 0x8d79eu); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8d79eu);
    X86_TICK(c, 22);
    // 08d79e  add esp, 8
    X86_AT(c, 0x8d79eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08d7a1  pop edi
    X86_AT(c, 0x8d7a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d7a2  leave 
    X86_AT(c, 0x8d7a2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d7a3  ret 
    X86_AT(c, 0x8d7a3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d724u, "ran off the end of a function");
}
void f_0008d7fc(X86Cpu& c) {
    X86_TICK(c, 32);
    // 08d7fc  push ebp
    X86_AT(c, 0x8d7fcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d7fd  mov ebp, esp
    X86_AT(c, 0x8d7fdu);
    c.r[5] = c.r[4];
    // 08d7ff  push ebx
    X86_AT(c, 0x8d7ffu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d800  push edi
    X86_AT(c, 0x8d800u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d801  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8d801u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08d804  lea eax, [edi + edi*2]
    X86_AT(c, 0x8d804u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08d807  lea edx, [eax + eax*8]
    X86_AT(c, 0x8d807u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 08d80a  lea edx, [eax + edx*2]
    X86_AT(c, 0x8d80au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 08d80d  push dword ptr [edx + 0x34d65]
    X86_AT(c, 0x8d80du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x34D65u))); push32(c, v); }
    // 08d813  mov ebx, edx
    X86_AT(c, 0x8d813u);
    c.r[3] = c.r[2];
    // 08d815  call 0x8c39c
    X86_AT(c, 0x8d815u);
    push32(c, 0x8d81au); x86_call_known(c, 0x8c39cu, f_0008c39c); X86_RET(c, 0x8d81au);
    X86_TICK(c, 61);
    // 08d81a  mov ax, word ptr [ebx + 0x34d35]
    X86_AT(c, 0x8d81au);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x34D35u))));
    // 08d821  add ax, 2
    X86_AT(c, 0x8d821u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 08d825  mov word ptr [0x34c28], ax
    X86_AT(c, 0x8d825u);
    wr16((c.sbase[3] + (uint32_t)(0x34C28u)), (c.r[0] & 0xFFFFu));
    // 08d82b  mov ax, word ptr [ebx + 0x34d39]
    X86_AT(c, 0x8d82bu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x34D39u))));
    // 08d832  add ax, 2
    X86_AT(c, 0x8d832u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 08d836  mov word ptr [0x34c2a], ax
    X86_AT(c, 0x8d836u);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Au)), (c.r[0] & 0xFFFFu));
    // 08d83c  mov ax, word ptr [ebx + 0x34d35]
    X86_AT(c, 0x8d83cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x34D35u))));
    // 08d843  add ax, word ptr [ebx + 0x34d3d]
    X86_AT(c, 0x8d843u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x34D3Du))), 0, 2)); }
    // 08d84a  sub ax, 3
    X86_AT(c, 0x8d84au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3u, 0, 2)); }
    // 08d84e  mov word ptr [0x34c2c], ax
    X86_AT(c, 0x8d84eu);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Cu)), (c.r[0] & 0xFFFFu));
    // 08d854  mov ax, word ptr [ebx + 0x34d39]
    X86_AT(c, 0x8d854u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x34D39u))));
    // 08d85b  add ax, word ptr [ebx + 0x34d41]
    X86_AT(c, 0x8d85bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x34D41u))), 0, 2)); }
    // 08d862  sub ax, 3
    X86_AT(c, 0x8d862u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3u, 0, 2)); }
    // 08d866  mov word ptr [0x34c2e], ax
    X86_AT(c, 0x8d866u);
    wr16((c.sbase[3] + (uint32_t)(0x34C2Eu)), (c.r[0] & 0xFFFFu));
    // 08d86c  push 0x34c28
    X86_AT(c, 0x8d86cu);
    { uint32_t v = 0x34C28u; push32(c, v); }
    // 08d871  push 0xfffffff0
    X86_AT(c, 0x8d871u);
    { uint32_t v = 0xFFFFFFF0u; push32(c, v); }
    // 08d873  push 0
    X86_AT(c, 0x8d873u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08d875  push 1
    X86_AT(c, 0x8d875u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08d877  push 0x34628
    X86_AT(c, 0x8d877u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08d87c  call 0x636
    X86_AT(c, 0x8d87cu);
    push32(c, 0x8d881u); x86_call_known(c, 0x636u, f_00000636); X86_RET(c, 0x8d881u);
    X86_TICK(c, 14);
    // 08d881  add esp, 0x18
    X86_AT(c, 0x8d881u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 08d884  cmp dword ptr [ebx + 0x34d69], 0
    X86_AT(c, 0x8d884u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x34D69u))), 0x0u, 0, 4);
    // 08d88b  jne 0x8d897
    X86_AT(c, 0x8d88bu);
    if (x86_cc(c, 5)) { goto L_8d897; }
    X86_TICK(c, 9);
    // 08d88d  push 0xb
    X86_AT(c, 0x8d88du);
    { uint32_t v = 0xBu; push32(c, v); }
    // 08d88f  call 0x8c39c
    X86_AT(c, 0x8d88fu);
    push32(c, 0x8d894u); x86_call_known(c, 0x8c39cu, f_0008c39c); X86_RET(c, 0x8d894u);
    X86_TICK(c, 2);
    // 08d894  add esp, 4
    X86_AT(c, 0x8d894u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8d897:
    X86_TICK(c, 24);
    // 08d897  pop edi
    X86_AT(c, 0x8d897u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d898  pop ebx
    X86_AT(c, 0x8d898u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08d899  leave 
    X86_AT(c, 0x8d899u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d89a  ret 
    X86_AT(c, 0x8d89au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d7fcu, "ran off the end of a function");
}
void f_0008d89c(X86Cpu& c) {
    X86_TICK(c, 33);
    // 08d89c  push ebp
    X86_AT(c, 0x8d89cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d89d  mov ebp, esp
    X86_AT(c, 0x8d89du);
    c.r[5] = c.r[4];
    // 08d89f  push edi
    X86_AT(c, 0x8d89fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d8a0  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8d8a0u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08d8a3  lea eax, [edi + edi*2]
    X86_AT(c, 0x8d8a3u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08d8a6  lea edx, [eax + eax*8]
    X86_AT(c, 0x8d8a6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 08d8a9  lea edx, [eax + edx*2]
    X86_AT(c, 0x8d8a9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 08d8ac  mov dword ptr [edx + 0x34d4d], 0
    X86_AT(c, 0x8d8acu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x34D4Du)), 0x0u);
    // 08d8b6  mov eax, dword ptr [edx + 0x34d51]
    X86_AT(c, 0x8d8b6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x34D51u)));
    // 08d8bc  cmp eax, dword ptr [edx + 0x34d49]
    X86_AT(c, 0x8d8bcu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x34D49u))), 0, 4);
    // 08d8c2  jne 0x8d8cf
    X86_AT(c, 0x8d8c2u);
    if (x86_cc(c, 5)) { goto L_8d8cf; }
    X86_TICK(c, 9);
    // 08d8c4  push edi
    X86_AT(c, 0x8d8c4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d8c5  call 0x8d7fc
    X86_AT(c, 0x8d8c5u);
    push32(c, 0x8d8cau); x86_call_known(c, 0x8d7fcu, f_0008d7fc); X86_RET(c, 0x8d8cau);
    X86_TICK(c, 9);
    // 08d8ca  add esp, 4
    X86_AT(c, 0x8d8cau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08d8cd  jmp 0x8d8de
    X86_AT(c, 0x8d8cdu);
    goto L_8d8de;
L_8d8cf:
    X86_TICK(c, 12);
    // 08d8cf  lea eax, [edi + edi*2]
    X86_AT(c, 0x8d8cfu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08d8d2  lea edx, [eax + eax*8]
    X86_AT(c, 0x8d8d2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 08d8d5  lea edx, [eax + edx*2]
    X86_AT(c, 0x8d8d5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 08d8d8  inc dword ptr [edx + 0x34d51]
    X86_AT(c, 0x8d8d8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x34D51u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_8d8de:
    X86_TICK(c, 20);
    // 08d8de  pop edi
    X86_AT(c, 0x8d8deu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d8df  leave 
    X86_AT(c, 0x8d8dfu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d8e0  ret 
    X86_AT(c, 0x8d8e0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d89cu, "ran off the end of a function");
}
void f_0008d8e4(X86Cpu& c) {
    X86_TICK(c, 28);
    // 08d8e4  push ebp
    X86_AT(c, 0x8d8e4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d8e5  mov ebp, esp
    X86_AT(c, 0x8d8e5u);
    c.r[5] = c.r[4];
    // 08d8e7  sub esp, 0xc
    X86_AT(c, 0x8d8e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 08d8ea  push ebx
    X86_AT(c, 0x8d8eau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d8eb  push esi
    X86_AT(c, 0x8d8ebu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08d8ec  push edi
    X86_AT(c, 0x8d8ecu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d8ed  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8d8edu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08d8f0  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8d8f0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08d8f3  lea eax, [eax + eax*2]
    X86_AT(c, 0x8d8f3u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 08d8f6  lea edx, [eax + eax*8]
    X86_AT(c, 0x8d8f6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 08d8f9  lea edx, [eax + edx*2]
    X86_AT(c, 0x8d8f9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 08d8fc  lea ebx, [edx + 0x34d34]
    X86_AT(c, 0x8d8fcu);
    c.r[3] = (uint32_t)(c.r[2] + 0x34D34u);
L_8d902:
    X86_TICK(c, 12);
    // 08d902  cmp byte ptr [edi], 0
    X86_AT(c, 0x8d902u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 08d905  je 0x8da54
    X86_AT(c, 0x8d905u);
    if (x86_cc(c, 4)) { goto L_8da54; }
    X86_TICK(c, 52);
    // 08d90b  mov dword ptr [ebp - 0xc], 0x351da
    X86_AT(c, 0x8d90bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x351DAu);
    // 08d912  mov ax, word ptr [ebx + 1]
    X86_AT(c, 0x8d912u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x1u))));
    // 08d916  add ax, 4
    X86_AT(c, 0x8d916u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x4u, 0, 2)); }
    // 08d91a  mov edx, dword ptr [ebx + 0x19]
    X86_AT(c, 0x8d91au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 08d91d  shl edx, 3
    X86_AT(c, 0x8d91du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 08d920  add edx, eax
    X86_AT(c, 0x8d920u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 08d922  mov word ptr [0x351d4], dx
    X86_AT(c, 0x8d922u);
    wr16((c.sbase[3] + (uint32_t)(0x351D4u)), (c.r[2] & 0xFFFFu));
    // 08d929  mov ax, word ptr [ebx + 5]
    X86_AT(c, 0x8d929u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x5u))));
    // 08d92d  add ax, 0x11
    X86_AT(c, 0x8d92du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 08d931  mov edx, dword ptr [ebx + 0x1d]
    X86_AT(c, 0x8d931u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 08d934  shl edx, 4
    X86_AT(c, 0x8d934u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 08d937  add edx, eax
    X86_AT(c, 0x8d937u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 08d939  mov word ptr [0x351d6], dx
    X86_AT(c, 0x8d939u);
    wr16((c.sbase[3] + (uint32_t)(0x351D6u)), (c.r[2] & 0xFFFFu));
    // 08d940  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x8d940u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 08d947  mov esi, dword ptr [ebx + 0x11]
    X86_AT(c, 0x8d947u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x11u)));
    // 08d94a  sub esi, dword ptr [ebx + 0x19]
    X86_AT(c, 0x8d94au);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u))), 0, 4); }
    // 08d94d  inc esi
    X86_AT(c, 0x8d94du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08d94e  mov dword ptr [ebp - 8], esi
    X86_AT(c, 0x8d94eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[6]);
L_8d951:
    X86_TICK(c, 7);
    // 08d951  and esi, esi
    X86_AT(c, 0x8d951u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 08d953  jle 0x8d9e7
    X86_AT(c, 0x8d953u);
    if (x86_cc(c, 14)) { goto L_8d9e7; }
    X86_TICK(c, 17);
    // 08d959  mov al, byte ptr [edi]
    X86_AT(c, 0x8d959u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08d95b  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d95bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 08d95e  mov byte ptr [edx], al
    X86_AT(c, 0x8d95eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 08d960  cmp esi, 1
    X86_AT(c, 0x8d960u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 08d963  jne 0x8d9c4
    X86_AT(c, 0x8d963u);
    if (x86_cc(c, 5)) { goto L_8d9c4; }
    X86_TICK(c, 11);
    // 08d969  mov al, byte ptr [edi]
    X86_AT(c, 0x8d969u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08d96b  cmp al, 0x81
    X86_AT(c, 0x8d96bu);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 08d96d  jb 0x8d973
    X86_AT(c, 0x8d96du);
    if (x86_cc(c, 2)) { goto L_8d973; }
    X86_TICK(c, 7);
    // 08d96f  cmp al, 0x9f
    X86_AT(c, 0x8d96fu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 08d971  jbe 0x8d981
    X86_AT(c, 0x8d971u);
    if (x86_cc(c, 6)) { goto L_8d981; }
L_8d973:
    X86_TICK(c, 11);
    // 08d973  mov al, byte ptr [edi]
    X86_AT(c, 0x8d973u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08d975  cmp al, 0xe0
    X86_AT(c, 0x8d975u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 08d977  jb 0x8d9c4
    X86_AT(c, 0x8d977u);
    if (x86_cc(c, 2)) { goto L_8d9c4; }
    X86_TICK(c, 7);
    // 08d97d  cmp al, 0xfc
    X86_AT(c, 0x8d97du);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 08d97f  ja 0x8d9c4
    X86_AT(c, 0x8d97fu);
    if (x86_cc(c, 7)) { goto L_8d9c4; }
L_8d981:
    X86_TICK(c, 11);
    // 08d981  mov al, byte ptr [edi + 1]
    X86_AT(c, 0x8d981u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 08d984  cmp al, 0x40
    X86_AT(c, 0x8d984u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 08d986  jb 0x8d98c
    X86_AT(c, 0x8d986u);
    if (x86_cc(c, 2)) { goto L_8d98c; }
    X86_TICK(c, 7);
    // 08d988  cmp al, 0x7e
    X86_AT(c, 0x8d988u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 08d98a  jbe 0x8d997
    X86_AT(c, 0x8d98au);
    if (x86_cc(c, 6)) { goto L_8d997; }
L_8d98c:
    X86_TICK(c, 11);
    // 08d98c  mov al, byte ptr [edi + 1]
    X86_AT(c, 0x8d98cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 08d98f  cmp al, 0x80
    X86_AT(c, 0x8d98fu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 08d991  jb 0x8d9c4
    X86_AT(c, 0x8d991u);
    if (x86_cc(c, 2)) { goto L_8d9c4; }
    X86_TICK(c, 7);
    // 08d993  cmp al, 0xfc
    X86_AT(c, 0x8d993u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 08d995  ja 0x8d9c4
    X86_AT(c, 0x8d995u);
    if (x86_cc(c, 7)) { goto L_8d9c4; }
L_8d997:
    X86_TICK(c, 11);
    // 08d997  mov al, byte ptr [edi - 1]
    X86_AT(c, 0x8d997u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 08d99a  cmp al, 0x81
    X86_AT(c, 0x8d99au);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 08d99c  jb 0x8d9a2
    X86_AT(c, 0x8d99cu);
    if (x86_cc(c, 2)) { goto L_8d9a2; }
    X86_TICK(c, 7);
    // 08d99e  cmp al, 0x9f
    X86_AT(c, 0x8d99eu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 08d9a0  jbe 0x8d9ad
    X86_AT(c, 0x8d9a0u);
    if (x86_cc(c, 6)) { goto L_8d9ad; }
L_8d9a2:
    X86_TICK(c, 11);
    // 08d9a2  mov al, byte ptr [edi - 1]
    X86_AT(c, 0x8d9a2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 08d9a5  cmp al, 0xe0
    X86_AT(c, 0x8d9a5u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 08d9a7  jb 0x8d9e7
    X86_AT(c, 0x8d9a7u);
    if (x86_cc(c, 2)) { goto L_8d9e7; }
    X86_TICK(c, 7);
    // 08d9a9  cmp al, 0xfc
    X86_AT(c, 0x8d9a9u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 08d9ab  ja 0x8d9e7
    X86_AT(c, 0x8d9abu);
    if (x86_cc(c, 7)) { goto L_8d9e7; }
L_8d9ad:
    X86_TICK(c, 11);
    // 08d9ad  mov al, byte ptr [edi]
    X86_AT(c, 0x8d9adu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08d9af  cmp al, 0x40
    X86_AT(c, 0x8d9afu);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 08d9b1  jb 0x8d9b7
    X86_AT(c, 0x8d9b1u);
    if (x86_cc(c, 2)) { goto L_8d9b7; }
    X86_TICK(c, 7);
    // 08d9b3  cmp al, 0x7e
    X86_AT(c, 0x8d9b3u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 08d9b5  jbe 0x8d9c1
    X86_AT(c, 0x8d9b5u);
    if (x86_cc(c, 6)) { goto L_8d9c1; }
L_8d9b7:
    X86_TICK(c, 11);
    // 08d9b7  mov al, byte ptr [edi]
    X86_AT(c, 0x8d9b7u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08d9b9  cmp al, 0x80
    X86_AT(c, 0x8d9b9u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 08d9bb  jb 0x8d9e7
    X86_AT(c, 0x8d9bbu);
    if (x86_cc(c, 2)) { goto L_8d9e7; }
    X86_TICK(c, 7);
    // 08d9bd  cmp al, 0xfc
    X86_AT(c, 0x8d9bdu);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 08d9bf  ja 0x8d9e7
    X86_AT(c, 0x8d9bfu);
    if (x86_cc(c, 7)) { goto L_8d9e7; }
L_8d9c1:
    X86_TICK(c, 9);
    // 08d9c1  inc edi
    X86_AT(c, 0x8d9c1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08d9c2  jmp 0x8d9e7
    X86_AT(c, 0x8d9c2u);
    goto L_8d9e7;
L_8d9c4:
    X86_TICK(c, 12);
    // 08d9c4  cmp byte ptr [edi], 0xa
    X86_AT(c, 0x8d9c4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xAu, 0, 1);
    // 08d9c7  jne 0x8d9cf
    X86_AT(c, 0x8d9c7u);
    if (x86_cc(c, 5)) { goto L_8d9cf; }
    X86_TICK(c, 15);
    // 08d9c9  inc edi
    X86_AT(c, 0x8d9c9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08d9ca  dec dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d9cau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 08d9cd  jmp 0x8d9e7
    X86_AT(c, 0x8d9cdu);
    goto L_8d9e7;
L_8d9cf:
    X86_TICK(c, 12);
    // 08d9cf  cmp byte ptr [edi], 0
    X86_AT(c, 0x8d9cfu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 08d9d2  jne 0x8d9dd
    X86_AT(c, 0x8d9d2u);
    if (x86_cc(c, 5)) { goto L_8d9dd; }
    X86_TICK(c, 9);
    // 08d9d4  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0x8d9d4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 08d9db  jmp 0x8d9e7
    X86_AT(c, 0x8d9dbu);
    goto L_8d9e7;
L_8d9dd:
    X86_TICK(c, 17);
    // 08d9dd  dec esi
    X86_AT(c, 0x8d9ddu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 08d9de  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d9deu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 08d9e1  inc edi
    X86_AT(c, 0x8d9e1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08d9e2  jmp 0x8d951
    X86_AT(c, 0x8d9e2u);
    X86_POLL(c, 0x8d951u); goto L_8d951;
L_8d9e7:
    X86_TICK(c, 33);
    // 08d9e7  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d9e7u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 08d9ea  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d9eau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 08d9ed  mov byte ptr [eax], 0
    X86_AT(c, 0x8d9edu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
    // 08d9f0  mov eax, esi
    X86_AT(c, 0x8d9f0u);
    c.r[0] = c.r[6];
    // 08d9f2  mov dx, word ptr [ebp - 8]
    X86_AT(c, 0x8d9f2u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 08d9f6  sub edx, eax
    X86_AT(c, 0x8d9f6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08d9f8  mov word ptr [0x351d8], dx
    X86_AT(c, 0x8d9f8u);
    wr16((c.sbase[3] + (uint32_t)(0x351D8u)), (c.r[2] & 0xFFFFu));
    // 08d9ff  push 0x351d4
    X86_AT(c, 0x8d9ffu);
    { uint32_t v = 0x351D4u; push32(c, v); }
    // 08da04  push 0x34628
    X86_AT(c, 0x8da04u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08da09  call 0x9fd
    X86_AT(c, 0x8da09u);
    push32(c, 0x8da0eu); x86_call_known(c, 0x9fdu, f_000009fd); X86_RET(c, 0x8da0eu);
    X86_TICK(c, 28);
    // 08da0e  mov eax, dword ptr [ebx + 0x19]
    X86_AT(c, 0x8da0eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 08da11  add eax, dword ptr [ebp - 8]
    X86_AT(c, 0x8da11u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 08da14  sub eax, esi
    X86_AT(c, 0x8da14u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 08da16  mov dword ptr [ebx + 0x19], eax
    X86_AT(c, 0x8da16u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), c.r[0]);
    // 08da19  add esp, 8
    X86_AT(c, 0x8da19u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08da1c  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x8da1cu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 08da20  jne 0x8d902
    X86_AT(c, 0x8da20u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8d902u); goto L_8d902; }
    X86_TICK(c, 15);
    // 08da26  mov eax, dword ptr [ebx + 0x1d]
    X86_AT(c, 0x8da26u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 08da29  cmp eax, dword ptr [ebx + 0x15]
    X86_AT(c, 0x8da29u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x15u))), 0, 4);
    // 08da2c  jne 0x8da45
    X86_AT(c, 0x8da2cu);
    if (x86_cc(c, 5)) { goto L_8da45; }
    X86_TICK(c, 12);
    // 08da2e  push dword ptr [ebp + 8]
    X86_AT(c, 0x8da2eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08da31  call 0x8d7fc
    X86_AT(c, 0x8da31u);
    push32(c, 0x8da36u); x86_call_known(c, 0x8d7fcu, f_0008d7fc); X86_RET(c, 0x8da36u);
    X86_TICK(c, 11);
    // 08da36  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0x8da36u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 08da3d  add esp, 4
    X86_AT(c, 0x8da3du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08da40  jmp 0x8d902
    X86_AT(c, 0x8da40u);
    X86_POLL(c, 0x8d902u); goto L_8d902;
L_8da45:
    X86_TICK(c, 15);
    // 08da45  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0x8da45u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 08da4c  inc dword ptr [ebx + 0x1d]
    X86_AT(c, 0x8da4cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 08da4f  jmp 0x8d902
    X86_AT(c, 0x8da4fu);
    X86_POLL(c, 0x8d902u); goto L_8d902;
L_8da54:
    X86_TICK(c, 28);
    // 08da54  pop edi
    X86_AT(c, 0x8da54u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08da55  pop esi
    X86_AT(c, 0x8da55u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08da56  pop ebx
    X86_AT(c, 0x8da56u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08da57  leave 
    X86_AT(c, 0x8da57u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08da58  ret 
    X86_AT(c, 0x8da58u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d8e4u, "ran off the end of a function");
}
void f_0008d902(X86Cpu& c) {
L_8d902:
    X86_TICK(c, 12);
    // 08d902  cmp byte ptr [edi], 0
    X86_AT(c, 0x8d902u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 08d905  je 0x8da54
    X86_AT(c, 0x8d905u);
    if (x86_cc(c, 4)) { goto L_8da54; }
    X86_TICK(c, 52);
    // 08d90b  mov dword ptr [ebp - 0xc], 0x351da
    X86_AT(c, 0x8d90bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x351DAu);
    // 08d912  mov ax, word ptr [ebx + 1]
    X86_AT(c, 0x8d912u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x1u))));
    // 08d916  add ax, 4
    X86_AT(c, 0x8d916u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x4u, 0, 2)); }
    // 08d91a  mov edx, dword ptr [ebx + 0x19]
    X86_AT(c, 0x8d91au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 08d91d  shl edx, 3
    X86_AT(c, 0x8d91du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 08d920  add edx, eax
    X86_AT(c, 0x8d920u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 08d922  mov word ptr [0x351d4], dx
    X86_AT(c, 0x8d922u);
    wr16((c.sbase[3] + (uint32_t)(0x351D4u)), (c.r[2] & 0xFFFFu));
    // 08d929  mov ax, word ptr [ebx + 5]
    X86_AT(c, 0x8d929u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x5u))));
    // 08d92d  add ax, 0x11
    X86_AT(c, 0x8d92du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 08d931  mov edx, dword ptr [ebx + 0x1d]
    X86_AT(c, 0x8d931u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 08d934  shl edx, 4
    X86_AT(c, 0x8d934u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 08d937  add edx, eax
    X86_AT(c, 0x8d937u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 08d939  mov word ptr [0x351d6], dx
    X86_AT(c, 0x8d939u);
    wr16((c.sbase[3] + (uint32_t)(0x351D6u)), (c.r[2] & 0xFFFFu));
    // 08d940  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x8d940u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 08d947  mov esi, dword ptr [ebx + 0x11]
    X86_AT(c, 0x8d947u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x11u)));
    // 08d94a  sub esi, dword ptr [ebx + 0x19]
    X86_AT(c, 0x8d94au);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u))), 0, 4); }
    // 08d94d  inc esi
    X86_AT(c, 0x8d94du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08d94e  mov dword ptr [ebp - 8], esi
    X86_AT(c, 0x8d94eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[6]);
L_8d951:
    X86_TICK(c, 7);
    // 08d951  and esi, esi
    X86_AT(c, 0x8d951u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 08d953  jle 0x8d9e7
    X86_AT(c, 0x8d953u);
    if (x86_cc(c, 14)) { goto L_8d9e7; }
    X86_TICK(c, 17);
    // 08d959  mov al, byte ptr [edi]
    X86_AT(c, 0x8d959u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08d95b  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d95bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 08d95e  mov byte ptr [edx], al
    X86_AT(c, 0x8d95eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 08d960  cmp esi, 1
    X86_AT(c, 0x8d960u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 08d963  jne 0x8d9c4
    X86_AT(c, 0x8d963u);
    if (x86_cc(c, 5)) { goto L_8d9c4; }
    X86_TICK(c, 11);
    // 08d969  mov al, byte ptr [edi]
    X86_AT(c, 0x8d969u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08d96b  cmp al, 0x81
    X86_AT(c, 0x8d96bu);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 08d96d  jb 0x8d973
    X86_AT(c, 0x8d96du);
    if (x86_cc(c, 2)) { goto L_8d973; }
    X86_TICK(c, 7);
    // 08d96f  cmp al, 0x9f
    X86_AT(c, 0x8d96fu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 08d971  jbe 0x8d981
    X86_AT(c, 0x8d971u);
    if (x86_cc(c, 6)) { goto L_8d981; }
L_8d973:
    X86_TICK(c, 11);
    // 08d973  mov al, byte ptr [edi]
    X86_AT(c, 0x8d973u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08d975  cmp al, 0xe0
    X86_AT(c, 0x8d975u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 08d977  jb 0x8d9c4
    X86_AT(c, 0x8d977u);
    if (x86_cc(c, 2)) { goto L_8d9c4; }
    X86_TICK(c, 7);
    // 08d97d  cmp al, 0xfc
    X86_AT(c, 0x8d97du);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 08d97f  ja 0x8d9c4
    X86_AT(c, 0x8d97fu);
    if (x86_cc(c, 7)) { goto L_8d9c4; }
L_8d981:
    X86_TICK(c, 11);
    // 08d981  mov al, byte ptr [edi + 1]
    X86_AT(c, 0x8d981u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 08d984  cmp al, 0x40
    X86_AT(c, 0x8d984u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 08d986  jb 0x8d98c
    X86_AT(c, 0x8d986u);
    if (x86_cc(c, 2)) { goto L_8d98c; }
    X86_TICK(c, 7);
    // 08d988  cmp al, 0x7e
    X86_AT(c, 0x8d988u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 08d98a  jbe 0x8d997
    X86_AT(c, 0x8d98au);
    if (x86_cc(c, 6)) { goto L_8d997; }
L_8d98c:
    X86_TICK(c, 11);
    // 08d98c  mov al, byte ptr [edi + 1]
    X86_AT(c, 0x8d98cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 08d98f  cmp al, 0x80
    X86_AT(c, 0x8d98fu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 08d991  jb 0x8d9c4
    X86_AT(c, 0x8d991u);
    if (x86_cc(c, 2)) { goto L_8d9c4; }
    X86_TICK(c, 7);
    // 08d993  cmp al, 0xfc
    X86_AT(c, 0x8d993u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 08d995  ja 0x8d9c4
    X86_AT(c, 0x8d995u);
    if (x86_cc(c, 7)) { goto L_8d9c4; }
L_8d997:
    X86_TICK(c, 11);
    // 08d997  mov al, byte ptr [edi - 1]
    X86_AT(c, 0x8d997u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 08d99a  cmp al, 0x81
    X86_AT(c, 0x8d99au);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 08d99c  jb 0x8d9a2
    X86_AT(c, 0x8d99cu);
    if (x86_cc(c, 2)) { goto L_8d9a2; }
    X86_TICK(c, 7);
    // 08d99e  cmp al, 0x9f
    X86_AT(c, 0x8d99eu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 08d9a0  jbe 0x8d9ad
    X86_AT(c, 0x8d9a0u);
    if (x86_cc(c, 6)) { goto L_8d9ad; }
L_8d9a2:
    X86_TICK(c, 11);
    // 08d9a2  mov al, byte ptr [edi - 1]
    X86_AT(c, 0x8d9a2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 08d9a5  cmp al, 0xe0
    X86_AT(c, 0x8d9a5u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 08d9a7  jb 0x8d9e7
    X86_AT(c, 0x8d9a7u);
    if (x86_cc(c, 2)) { goto L_8d9e7; }
    X86_TICK(c, 7);
    // 08d9a9  cmp al, 0xfc
    X86_AT(c, 0x8d9a9u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 08d9ab  ja 0x8d9e7
    X86_AT(c, 0x8d9abu);
    if (x86_cc(c, 7)) { goto L_8d9e7; }
L_8d9ad:
    X86_TICK(c, 11);
    // 08d9ad  mov al, byte ptr [edi]
    X86_AT(c, 0x8d9adu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08d9af  cmp al, 0x40
    X86_AT(c, 0x8d9afu);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 08d9b1  jb 0x8d9b7
    X86_AT(c, 0x8d9b1u);
    if (x86_cc(c, 2)) { goto L_8d9b7; }
    X86_TICK(c, 7);
    // 08d9b3  cmp al, 0x7e
    X86_AT(c, 0x8d9b3u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 08d9b5  jbe 0x8d9c1
    X86_AT(c, 0x8d9b5u);
    if (x86_cc(c, 6)) { goto L_8d9c1; }
L_8d9b7:
    X86_TICK(c, 11);
    // 08d9b7  mov al, byte ptr [edi]
    X86_AT(c, 0x8d9b7u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08d9b9  cmp al, 0x80
    X86_AT(c, 0x8d9b9u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 08d9bb  jb 0x8d9e7
    X86_AT(c, 0x8d9bbu);
    if (x86_cc(c, 2)) { goto L_8d9e7; }
    X86_TICK(c, 7);
    // 08d9bd  cmp al, 0xfc
    X86_AT(c, 0x8d9bdu);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 08d9bf  ja 0x8d9e7
    X86_AT(c, 0x8d9bfu);
    if (x86_cc(c, 7)) { goto L_8d9e7; }
L_8d9c1:
    X86_TICK(c, 9);
    // 08d9c1  inc edi
    X86_AT(c, 0x8d9c1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08d9c2  jmp 0x8d9e7
    X86_AT(c, 0x8d9c2u);
    goto L_8d9e7;
L_8d9c4:
    X86_TICK(c, 12);
    // 08d9c4  cmp byte ptr [edi], 0xa
    X86_AT(c, 0x8d9c4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xAu, 0, 1);
    // 08d9c7  jne 0x8d9cf
    X86_AT(c, 0x8d9c7u);
    if (x86_cc(c, 5)) { goto L_8d9cf; }
    X86_TICK(c, 15);
    // 08d9c9  inc edi
    X86_AT(c, 0x8d9c9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08d9ca  dec dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d9cau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 08d9cd  jmp 0x8d9e7
    X86_AT(c, 0x8d9cdu);
    goto L_8d9e7;
L_8d9cf:
    X86_TICK(c, 12);
    // 08d9cf  cmp byte ptr [edi], 0
    X86_AT(c, 0x8d9cfu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 08d9d2  jne 0x8d9dd
    X86_AT(c, 0x8d9d2u);
    if (x86_cc(c, 5)) { goto L_8d9dd; }
    X86_TICK(c, 9);
    // 08d9d4  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0x8d9d4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 08d9db  jmp 0x8d9e7
    X86_AT(c, 0x8d9dbu);
    goto L_8d9e7;
L_8d9dd:
    X86_TICK(c, 17);
    // 08d9dd  dec esi
    X86_AT(c, 0x8d9ddu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 08d9de  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d9deu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 08d9e1  inc edi
    X86_AT(c, 0x8d9e1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08d9e2  jmp 0x8d951
    X86_AT(c, 0x8d9e2u);
    X86_POLL(c, 0x8d951u); goto L_8d951;
L_8d9e7:
    X86_TICK(c, 33);
    // 08d9e7  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d9e7u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 08d9ea  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d9eau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 08d9ed  mov byte ptr [eax], 0
    X86_AT(c, 0x8d9edu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
    // 08d9f0  mov eax, esi
    X86_AT(c, 0x8d9f0u);
    c.r[0] = c.r[6];
    // 08d9f2  mov dx, word ptr [ebp - 8]
    X86_AT(c, 0x8d9f2u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 08d9f6  sub edx, eax
    X86_AT(c, 0x8d9f6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08d9f8  mov word ptr [0x351d8], dx
    X86_AT(c, 0x8d9f8u);
    wr16((c.sbase[3] + (uint32_t)(0x351D8u)), (c.r[2] & 0xFFFFu));
    // 08d9ff  push 0x351d4
    X86_AT(c, 0x8d9ffu);
    { uint32_t v = 0x351D4u; push32(c, v); }
    // 08da04  push 0x34628
    X86_AT(c, 0x8da04u);
    { uint32_t v = 0x34628u; push32(c, v); }
    // 08da09  call 0x9fd
    X86_AT(c, 0x8da09u);
    push32(c, 0x8da0eu); x86_call_known(c, 0x9fdu, f_000009fd); X86_RET(c, 0x8da0eu);
    X86_TICK(c, 28);
    // 08da0e  mov eax, dword ptr [ebx + 0x19]
    X86_AT(c, 0x8da0eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 08da11  add eax, dword ptr [ebp - 8]
    X86_AT(c, 0x8da11u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 08da14  sub eax, esi
    X86_AT(c, 0x8da14u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 08da16  mov dword ptr [ebx + 0x19], eax
    X86_AT(c, 0x8da16u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), c.r[0]);
    // 08da19  add esp, 8
    X86_AT(c, 0x8da19u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08da1c  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x8da1cu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 08da20  jne 0x8d902
    X86_AT(c, 0x8da20u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8d902u); goto L_8d902; }
    X86_TICK(c, 15);
    // 08da26  mov eax, dword ptr [ebx + 0x1d]
    X86_AT(c, 0x8da26u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 08da29  cmp eax, dword ptr [ebx + 0x15]
    X86_AT(c, 0x8da29u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x15u))), 0, 4);
    // 08da2c  jne 0x8da45
    X86_AT(c, 0x8da2cu);
    if (x86_cc(c, 5)) { goto L_8da45; }
    X86_TICK(c, 12);
    // 08da2e  push dword ptr [ebp + 8]
    X86_AT(c, 0x8da2eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08da31  call 0x8d7fc
    X86_AT(c, 0x8da31u);
    push32(c, 0x8da36u); x86_call_known(c, 0x8d7fcu, f_0008d7fc); X86_RET(c, 0x8da36u);
    X86_TICK(c, 11);
    // 08da36  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0x8da36u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 08da3d  add esp, 4
    X86_AT(c, 0x8da3du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08da40  jmp 0x8d902
    X86_AT(c, 0x8da40u);
    X86_POLL(c, 0x8d902u); goto L_8d902;
L_8da45:
    X86_TICK(c, 15);
    // 08da45  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0x8da45u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 08da4c  inc dword ptr [ebx + 0x1d]
    X86_AT(c, 0x8da4cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 08da4f  jmp 0x8d902
    X86_AT(c, 0x8da4fu);
    X86_POLL(c, 0x8d902u); goto L_8d902;
L_8da54:
    X86_TICK(c, 28);
    // 08da54  pop edi
    X86_AT(c, 0x8da54u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08da55  pop esi
    X86_AT(c, 0x8da55u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08da56  pop ebx
    X86_AT(c, 0x8da56u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08da57  leave 
    X86_AT(c, 0x8da57u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08da58  ret 
    X86_AT(c, 0x8da58u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d902u, "ran off the end of a function");
}
void f_0008da5c(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08da5c  push ebp
    X86_AT(c, 0x8da5cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08da5d  mov ebp, esp
    X86_AT(c, 0x8da5du);
    c.r[5] = c.r[4];
    // 08da5f  push ebx
    X86_AT(c, 0x8da5fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08da60  push esi
    X86_AT(c, 0x8da60u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08da61  push edi
    X86_AT(c, 0x8da61u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08da62  sub esi, esi
    X86_AT(c, 0x8da62u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 08da64  movzx edx, byte ptr [ebp + 0xc]
    X86_AT(c, 0x8da64u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08da68  sub edx, 0x20
    X86_AT(c, 0x8da68u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x20u, 0, 4); }
    // 08da6b  cmp edx, 0x3a
    X86_AT(c, 0x8da6bu);
    (void)x86_sub(c, c.r[2], 0x3Au, 0, 4);
    // 08da6e  ja 0x8dcaa
    X86_AT(c, 0x8da6eu);
    if (x86_cc(c, 7)) { goto L_8dcaa; }
    X86_TICK(c, 7);
    // 08da74  jmp dword ptr cs:[edx*4 + 0x8da7c]
    X86_AT(c, 0x8da74u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0x8DA7Cu)));
      switch (t) {
      case 0x8db68u: goto L_8db68;
      case 0x8db71u: goto L_8db71;
      case 0x8db7au: goto L_8db7a;
      case 0x8db83u: goto L_8db83;
      case 0x8db8cu: goto L_8db8c;
      case 0x8db95u: goto L_8db95;
      case 0x8db9eu: goto L_8db9e;
      case 0x8dba7u: goto L_8dba7;
      case 0x8dbb0u: goto L_8dbb0;
      case 0x8dbb9u: goto L_8dbb9;
      case 0x8dbc2u: goto L_8dbc2;
      case 0x8dbcbu: goto L_8dbcb;
      case 0x8dbd4u: goto L_8dbd4;
      case 0x8dbddu: goto L_8dbdd;
      case 0x8dbe6u: goto L_8dbe6;
      case 0x8dbefu: goto L_8dbef;
      case 0x8dbf8u: goto L_8dbf8;
      case 0x8dc01u: goto L_8dc01;
      case 0x8dc0au: goto L_8dc0a;
      case 0x8dc13u: goto L_8dc13;
      case 0x8dc1cu: goto L_8dc1c;
      case 0x8dc25u: goto L_8dc25;
      case 0x8dc2eu: goto L_8dc2e;
      case 0x8dc37u: goto L_8dc37;
      case 0x8dc40u: goto L_8dc40;
      case 0x8dc49u: goto L_8dc49;
      case 0x8dc52u: goto L_8dc52;
      case 0x8dc58u: goto L_8dc58;
      case 0x8dc5eu: goto L_8dc5e;
      case 0x8dc64u: goto L_8dc64;
      case 0x8dc6au: goto L_8dc6a;
      case 0x8dc70u: goto L_8dc70;
      case 0x8dc76u: goto L_8dc76;
      case 0x8dc7cu: goto L_8dc7c;
      case 0x8dc82u: goto L_8dc82;
      case 0x8dc88u: goto L_8dc88;
      case 0x8dc8eu: goto L_8dc8e;
      case 0x8dc94u: goto L_8dc94;
      case 0x8dc9au: goto L_8dc9a;
      case 0x8dca0u: goto L_8dca0;
      case 0x8dca6u: goto L_8dca6;
      case 0x8dcaau: goto L_8dcaa;
      default: x86_jump(c, t); return; } }
L_8db68:
    X86_TICK(c, 9);
    // 08db68  mov si, 0x4081
    X86_AT(c, 0x8db68u);
    s16(c, 6, 0x4081u);
    // 08db6c  jmp 0x8dcaa
    X86_AT(c, 0x8db6cu);
    goto L_8dcaa;
L_8db71:
    X86_TICK(c, 9);
    // 08db71  mov si, 0x4681
    X86_AT(c, 0x8db71u);
    s16(c, 6, 0x4681u);
    // 08db75  jmp 0x8dcaa
    X86_AT(c, 0x8db75u);
    goto L_8dcaa;
L_8db7a:
    X86_TICK(c, 9);
    // 08db7a  mov si, 0x75eb
    X86_AT(c, 0x8db7au);
    s16(c, 6, 0x75EBu);
    // 08db7e  jmp 0x8dcaa
    X86_AT(c, 0x8db7eu);
    goto L_8dcaa;
L_8db83:
    X86_TICK(c, 9);
    // 08db83  mov si, 0x74eb
    X86_AT(c, 0x8db83u);
    s16(c, 6, 0x74EBu);
    // 08db87  jmp 0x8dcaa
    X86_AT(c, 0x8db87u);
    goto L_8dcaa;
L_8db8c:
    X86_TICK(c, 9);
    // 08db8c  mov si, 0x5e81
    X86_AT(c, 0x8db8cu);
    s16(c, 6, 0x5E81u);
    // 08db90  jmp 0x8dcaa
    X86_AT(c, 0x8db90u);
    goto L_8dcaa;
L_8db95:
    X86_TICK(c, 9);
    // 08db95  mov si, 0x80eb
    X86_AT(c, 0x8db95u);
    s16(c, 6, 0x80EBu);
    // 08db99  jmp 0x8dcaa
    X86_AT(c, 0x8db99u);
    goto L_8dcaa;
L_8db9e:
    X86_TICK(c, 9);
    // 08db9e  mov si, 0x76eb
    X86_AT(c, 0x8db9eu);
    s16(c, 6, 0x76EBu);
    // 08dba2  jmp 0x8dcaa
    X86_AT(c, 0x8dba2u);
    goto L_8dcaa;
L_8dba7:
    X86_TICK(c, 9);
    // 08dba7  mov si, 0x77eb
    X86_AT(c, 0x8dba7u);
    s16(c, 6, 0x77EBu);
    // 08dbab  jmp 0x8dcaa
    X86_AT(c, 0x8dbabu);
    goto L_8dcaa;
L_8dbb0:
    X86_TICK(c, 9);
    // 08dbb0  mov si, 0x78eb
    X86_AT(c, 0x8dbb0u);
    s16(c, 6, 0x78EBu);
    // 08dbb4  jmp 0x8dcaa
    X86_AT(c, 0x8dbb4u);
    goto L_8dcaa;
L_8dbb9:
    X86_TICK(c, 9);
    // 08dbb9  mov si, 0x79eb
    X86_AT(c, 0x8dbb9u);
    s16(c, 6, 0x79EBu);
    // 08dbbd  jmp 0x8dcaa
    X86_AT(c, 0x8dbbdu);
    goto L_8dcaa;
L_8dbc2:
    X86_TICK(c, 9);
    // 08dbc2  mov si, 0x7aeb
    X86_AT(c, 0x8dbc2u);
    s16(c, 6, 0x7AEBu);
    // 08dbc6  jmp 0x8dcaa
    X86_AT(c, 0x8dbc6u);
    goto L_8dcaa;
L_8dbcb:
    X86_TICK(c, 9);
    // 08dbcb  mov si, 0x7beb
    X86_AT(c, 0x8dbcbu);
    s16(c, 6, 0x7BEBu);
    // 08dbcf  jmp 0x8dcaa
    X86_AT(c, 0x8dbcfu);
    goto L_8dcaa;
L_8dbd4:
    X86_TICK(c, 9);
    // 08dbd4  mov si, 0x7ceb
    X86_AT(c, 0x8dbd4u);
    s16(c, 6, 0x7CEBu);
    // 08dbd8  jmp 0x8dcaa
    X86_AT(c, 0x8dbd8u);
    goto L_8dcaa;
L_8dbdd:
    X86_TICK(c, 9);
    // 08dbdd  mov si, 0x7deb
    X86_AT(c, 0x8dbddu);
    s16(c, 6, 0x7DEBu);
    // 08dbe1  jmp 0x8dcaa
    X86_AT(c, 0x8dbe1u);
    goto L_8dcaa;
L_8dbe6:
    X86_TICK(c, 9);
    // 08dbe6  mov si, 0x7eeb
    X86_AT(c, 0x8dbe6u);
    s16(c, 6, 0x7EEBu);
    // 08dbea  jmp 0x8dcaa
    X86_AT(c, 0x8dbeau);
    goto L_8dcaa;
L_8dbef:
    X86_TICK(c, 9);
    // 08dbef  mov si, 0x40eb
    X86_AT(c, 0x8dbefu);
    s16(c, 6, 0x40EBu);
    // 08dbf3  jmp 0x8dcaa
    X86_AT(c, 0x8dbf3u);
    goto L_8dcaa;
L_8dbf8:
    X86_TICK(c, 9);
    // 08dbf8  mov si, 0x41eb
    X86_AT(c, 0x8dbf8u);
    s16(c, 6, 0x41EBu);
    // 08dbfc  jmp 0x8dcaa
    X86_AT(c, 0x8dbfcu);
    goto L_8dcaa;
L_8dc01:
    X86_TICK(c, 9);
    // 08dc01  mov si, 0x42eb
    X86_AT(c, 0x8dc01u);
    s16(c, 6, 0x42EBu);
    // 08dc05  jmp 0x8dcaa
    X86_AT(c, 0x8dc05u);
    goto L_8dcaa;
L_8dc0a:
    X86_TICK(c, 9);
    // 08dc0a  mov si, 0x43eb
    X86_AT(c, 0x8dc0au);
    s16(c, 6, 0x43EBu);
    // 08dc0e  jmp 0x8dcaa
    X86_AT(c, 0x8dc0eu);
    goto L_8dcaa;
L_8dc13:
    X86_TICK(c, 9);
    // 08dc13  mov si, 0x44eb
    X86_AT(c, 0x8dc13u);
    s16(c, 6, 0x44EBu);
    // 08dc17  jmp 0x8dcaa
    X86_AT(c, 0x8dc17u);
    goto L_8dcaa;
L_8dc1c:
    X86_TICK(c, 9);
    // 08dc1c  mov si, 0x45eb
    X86_AT(c, 0x8dc1cu);
    s16(c, 6, 0x45EBu);
    // 08dc20  jmp 0x8dcaa
    X86_AT(c, 0x8dc20u);
    goto L_8dcaa;
L_8dc25:
    X86_TICK(c, 9);
    // 08dc25  mov si, 0x46eb
    X86_AT(c, 0x8dc25u);
    s16(c, 6, 0x46EBu);
    // 08dc29  jmp 0x8dcaa
    X86_AT(c, 0x8dc29u);
    goto L_8dcaa;
L_8dc2e:
    X86_TICK(c, 9);
    // 08dc2e  mov si, 0x47eb
    X86_AT(c, 0x8dc2eu);
    s16(c, 6, 0x47EBu);
    // 08dc32  jmp 0x8dcaa
    X86_AT(c, 0x8dc32u);
    goto L_8dcaa;
L_8dc37:
    X86_TICK(c, 9);
    // 08dc37  mov si, 0x48eb
    X86_AT(c, 0x8dc37u);
    s16(c, 6, 0x48EBu);
    // 08dc3b  jmp 0x8dcaa
    X86_AT(c, 0x8dc3bu);
    goto L_8dcaa;
L_8dc40:
    X86_TICK(c, 9);
    // 08dc40  mov si, 0x49eb
    X86_AT(c, 0x8dc40u);
    s16(c, 6, 0x49EBu);
    // 08dc44  jmp 0x8dcaa
    X86_AT(c, 0x8dc44u);
    goto L_8dcaa;
L_8dc49:
    X86_TICK(c, 9);
    // 08dc49  mov si, 0x4aeb
    X86_AT(c, 0x8dc49u);
    s16(c, 6, 0x4AEBu);
    // 08dc4d  jmp 0x8dcaa
    X86_AT(c, 0x8dc4du);
    goto L_8dcaa;
L_8dc52:
    X86_TICK(c, 9);
    // 08dc52  mov si, 0x4beb
    X86_AT(c, 0x8dc52u);
    s16(c, 6, 0x4BEBu);
    // 08dc56  jmp 0x8dcaa
    X86_AT(c, 0x8dc56u);
    goto L_8dcaa;
L_8dc58:
    X86_TICK(c, 9);
    // 08dc58  mov si, 0x4ceb
    X86_AT(c, 0x8dc58u);
    s16(c, 6, 0x4CEBu);
    // 08dc5c  jmp 0x8dcaa
    X86_AT(c, 0x8dc5cu);
    goto L_8dcaa;
L_8dc5e:
    X86_TICK(c, 9);
    // 08dc5e  mov si, 0x4deb
    X86_AT(c, 0x8dc5eu);
    s16(c, 6, 0x4DEBu);
    // 08dc62  jmp 0x8dcaa
    X86_AT(c, 0x8dc62u);
    goto L_8dcaa;
L_8dc64:
    X86_TICK(c, 9);
    // 08dc64  mov si, 0x4eeb
    X86_AT(c, 0x8dc64u);
    s16(c, 6, 0x4EEBu);
    // 08dc68  jmp 0x8dcaa
    X86_AT(c, 0x8dc68u);
    goto L_8dcaa;
L_8dc6a:
    X86_TICK(c, 9);
    // 08dc6a  mov si, 0x4feb
    X86_AT(c, 0x8dc6au);
    s16(c, 6, 0x4FEBu);
    // 08dc6e  jmp 0x8dcaa
    X86_AT(c, 0x8dc6eu);
    goto L_8dcaa;
L_8dc70:
    X86_TICK(c, 9);
    // 08dc70  mov si, 0x50eb
    X86_AT(c, 0x8dc70u);
    s16(c, 6, 0x50EBu);
    // 08dc74  jmp 0x8dcaa
    X86_AT(c, 0x8dc74u);
    goto L_8dcaa;
L_8dc76:
    X86_TICK(c, 9);
    // 08dc76  mov si, 0x51eb
    X86_AT(c, 0x8dc76u);
    s16(c, 6, 0x51EBu);
    // 08dc7a  jmp 0x8dcaa
    X86_AT(c, 0x8dc7au);
    goto L_8dcaa;
L_8dc7c:
    X86_TICK(c, 9);
    // 08dc7c  mov si, 0x52eb
    X86_AT(c, 0x8dc7cu);
    s16(c, 6, 0x52EBu);
    // 08dc80  jmp 0x8dcaa
    X86_AT(c, 0x8dc80u);
    goto L_8dcaa;
L_8dc82:
    X86_TICK(c, 9);
    // 08dc82  mov si, 0x53eb
    X86_AT(c, 0x8dc82u);
    s16(c, 6, 0x53EBu);
    // 08dc86  jmp 0x8dcaa
    X86_AT(c, 0x8dc86u);
    goto L_8dcaa;
L_8dc88:
    X86_TICK(c, 9);
    // 08dc88  mov si, 0x54eb
    X86_AT(c, 0x8dc88u);
    s16(c, 6, 0x54EBu);
    // 08dc8c  jmp 0x8dcaa
    X86_AT(c, 0x8dc8cu);
    goto L_8dcaa;
L_8dc8e:
    X86_TICK(c, 9);
    // 08dc8e  mov si, 0x55eb
    X86_AT(c, 0x8dc8eu);
    s16(c, 6, 0x55EBu);
    // 08dc92  jmp 0x8dcaa
    X86_AT(c, 0x8dc92u);
    goto L_8dcaa;
L_8dc94:
    X86_TICK(c, 9);
    // 08dc94  mov si, 0x56eb
    X86_AT(c, 0x8dc94u);
    s16(c, 6, 0x56EBu);
    // 08dc98  jmp 0x8dcaa
    X86_AT(c, 0x8dc98u);
    goto L_8dcaa;
L_8dc9a:
    X86_TICK(c, 9);
    // 08dc9a  mov si, 0x57eb
    X86_AT(c, 0x8dc9au);
    s16(c, 6, 0x57EBu);
    // 08dc9e  jmp 0x8dcaa
    X86_AT(c, 0x8dc9eu);
    goto L_8dcaa;
L_8dca0:
    X86_TICK(c, 9);
    // 08dca0  mov si, 0x58eb
    X86_AT(c, 0x8dca0u);
    s16(c, 6, 0x58EBu);
    // 08dca4  jmp 0x8dcaa
    X86_AT(c, 0x8dca4u);
    goto L_8dcaa;
L_8dca6:
    X86_TICK(c, 2);
    // 08dca6  mov si, 0x59eb
    X86_AT(c, 0x8dca6u);
    s16(c, 6, 0x59EBu);
L_8dcaa:
    X86_TICK(c, 7);
    // 08dcaa  and si, si
    X86_AT(c, 0x8dcaau);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 08dcad  je 0x8dd18
    X86_AT(c, 0x8dcadu);
    if (x86_cc(c, 4)) { goto L_8dd18; }
    X86_TICK(c, 67);
    // 08dcaf  mov eax, 0x34624
    X86_AT(c, 0x8dcafu);
    c.r[0] = 0x34624u;
    // 08dcb4  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x8dcb4u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08dcb7  lea edx, [edx + edx*2]
    X86_AT(c, 0x8dcb7u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 08dcba  lea ecx, [edx + edx*8]
    X86_AT(c, 0x8dcbau);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 08dcbd  lea ecx, [edx + ecx*2]
    X86_AT(c, 0x8dcbdu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 08dcc0  lea edi, [eax + ecx*1 + 0x710]
    X86_AT(c, 0x8dcc0u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[1] + 0x710u);
    // 08dcc7  mov dx, word ptr [edi + 1]
    X86_AT(c, 0x8dcc7u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 08dccb  add dx, 4
    X86_AT(c, 0x8dccbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x4u, 0, 2)); }
    // 08dccf  mov ebx, dword ptr [edi + 0x19]
    X86_AT(c, 0x8dccfu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x19u)));
    // 08dcd2  shl ebx, 3
    X86_AT(c, 0x8dcd2u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 08dcd5  add ebx, edx
    X86_AT(c, 0x8dcd5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 08dcd7  mov word ptr [eax + 0xd48], bx
    X86_AT(c, 0x8dcd7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD48u)), (c.r[3] & 0xFFFFu));
    // 08dcde  mov dx, word ptr [edi + 5]
    X86_AT(c, 0x8dcdeu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 08dce2  add dx, 0x11
    X86_AT(c, 0x8dce2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x11u, 0, 2)); }
    // 08dce6  mov ebx, dword ptr [edi + 0x1d]
    X86_AT(c, 0x8dce6u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 08dce9  shl ebx, 4
    X86_AT(c, 0x8dce9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 08dcec  add ebx, edx
    X86_AT(c, 0x8dcecu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 08dcee  mov word ptr [eax + 0xd4a], bx
    X86_AT(c, 0x8dceeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4Au)), (c.r[3] & 0xFFFFu));
    // 08dcf5  mov word ptr [eax + 0xd4c], 2
    X86_AT(c, 0x8dcf5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4Cu)), 0x2u);
    // 08dcfe  mov word ptr [eax + 0xd4e], si
    X86_AT(c, 0x8dcfeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4Eu)), (c.r[6] & 0xFFFFu));
    // 08dd05  lea edx, [eax + 0xd48]
    X86_AT(c, 0x8dd05u);
    c.r[2] = (uint32_t)(c.r[0] + 0xD48u);
    // 08dd0b  push edx
    X86_AT(c, 0x8dd0bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08dd0c  add eax, 4
    X86_AT(c, 0x8dd0cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 08dd0f  push eax
    X86_AT(c, 0x8dd0fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08dd10  call 0x9fd
    X86_AT(c, 0x8dd10u);
    push32(c, 0x8dd15u); x86_call_known(c, 0x9fdu, f_000009fd); X86_RET(c, 0x8dd15u);
    X86_TICK(c, 2);
    // 08dd15  add esp, 8
    X86_AT(c, 0x8dd15u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_8dd18:
    X86_TICK(c, 28);
    // 08dd18  pop edi
    X86_AT(c, 0x8dd18u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08dd19  pop esi
    X86_AT(c, 0x8dd19u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08dd1a  pop ebx
    X86_AT(c, 0x8dd1au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08dd1b  leave 
    X86_AT(c, 0x8dd1bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08dd1c  ret 
    X86_AT(c, 0x8dd1cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8da5cu, "ran off the end of a function");
}
void f_0008dcaa(X86Cpu& c) {
    X86_TICK(c, 7);
    // 08dcaa  and si, si
    X86_AT(c, 0x8dcaau);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 08dcad  je 0x8dd18
    X86_AT(c, 0x8dcadu);
    if (x86_cc(c, 4)) { goto L_8dd18; }
    X86_TICK(c, 67);
    // 08dcaf  mov eax, 0x34624
    X86_AT(c, 0x8dcafu);
    c.r[0] = 0x34624u;
    // 08dcb4  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x8dcb4u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08dcb7  lea edx, [edx + edx*2]
    X86_AT(c, 0x8dcb7u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 08dcba  lea ecx, [edx + edx*8]
    X86_AT(c, 0x8dcbau);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 08dcbd  lea ecx, [edx + ecx*2]
    X86_AT(c, 0x8dcbdu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 08dcc0  lea edi, [eax + ecx*1 + 0x710]
    X86_AT(c, 0x8dcc0u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[1] + 0x710u);
    // 08dcc7  mov dx, word ptr [edi + 1]
    X86_AT(c, 0x8dcc7u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 08dccb  add dx, 4
    X86_AT(c, 0x8dccbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x4u, 0, 2)); }
    // 08dccf  mov ebx, dword ptr [edi + 0x19]
    X86_AT(c, 0x8dccfu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x19u)));
    // 08dcd2  shl ebx, 3
    X86_AT(c, 0x8dcd2u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 08dcd5  add ebx, edx
    X86_AT(c, 0x8dcd5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 08dcd7  mov word ptr [eax + 0xd48], bx
    X86_AT(c, 0x8dcd7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD48u)), (c.r[3] & 0xFFFFu));
    // 08dcde  mov dx, word ptr [edi + 5]
    X86_AT(c, 0x8dcdeu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 08dce2  add dx, 0x11
    X86_AT(c, 0x8dce2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x11u, 0, 2)); }
    // 08dce6  mov ebx, dword ptr [edi + 0x1d]
    X86_AT(c, 0x8dce6u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 08dce9  shl ebx, 4
    X86_AT(c, 0x8dce9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 08dcec  add ebx, edx
    X86_AT(c, 0x8dcecu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 08dcee  mov word ptr [eax + 0xd4a], bx
    X86_AT(c, 0x8dceeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4Au)), (c.r[3] & 0xFFFFu));
    // 08dcf5  mov word ptr [eax + 0xd4c], 2
    X86_AT(c, 0x8dcf5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4Cu)), 0x2u);
    // 08dcfe  mov word ptr [eax + 0xd4e], si
    X86_AT(c, 0x8dcfeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4Eu)), (c.r[6] & 0xFFFFu));
    // 08dd05  lea edx, [eax + 0xd48]
    X86_AT(c, 0x8dd05u);
    c.r[2] = (uint32_t)(c.r[0] + 0xD48u);
    // 08dd0b  push edx
    X86_AT(c, 0x8dd0bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08dd0c  add eax, 4
    X86_AT(c, 0x8dd0cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 08dd0f  push eax
    X86_AT(c, 0x8dd0fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08dd10  call 0x9fd
    X86_AT(c, 0x8dd10u);
    push32(c, 0x8dd15u); x86_call_known(c, 0x9fdu, f_000009fd); X86_RET(c, 0x8dd15u);
    X86_TICK(c, 2);
    // 08dd15  add esp, 8
    X86_AT(c, 0x8dd15u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_8dd18:
    X86_TICK(c, 28);
    // 08dd18  pop edi
    X86_AT(c, 0x8dd18u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08dd19  pop esi
    X86_AT(c, 0x8dd19u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08dd1a  pop ebx
    X86_AT(c, 0x8dd1au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08dd1b  leave 
    X86_AT(c, 0x8dd1bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08dd1c  ret 
    X86_AT(c, 0x8dd1cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8dcaau, "ran off the end of a function");
}
void f_0008de94(X86Cpu& c) {
    X86_TICK(c, 29);
    // 08de94  push ebp
    X86_AT(c, 0x8de94u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08de95  mov ebp, esp
    X86_AT(c, 0x8de95u);
    c.r[5] = c.r[4];
    // 08de97  push ebx
    X86_AT(c, 0x8de97u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08de98  push esi
    X86_AT(c, 0x8de98u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08de99  push edi
    X86_AT(c, 0x8de99u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08de9a  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8de9au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08de9d  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8de9du);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08dea0  mov ebx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8dea0u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08dea3  and esi, esi
    X86_AT(c, 0x8dea3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 08dea5  jl 0x8ded9
    X86_AT(c, 0x8dea5u);
    if (x86_cc(c, 12)) { goto L_8ded9; }
    X86_TICK(c, 19);
    // 08dea7  mov eax, 0x34624
    X86_AT(c, 0x8dea7u);
    c.r[0] = 0x34624u;
    // 08deac  lea edx, [edi + edi*2]
    X86_AT(c, 0x8deacu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08deaf  lea ecx, [edx + edx*8]
    X86_AT(c, 0x8deafu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 08deb2  lea ecx, [edx + ecx*2]
    X86_AT(c, 0x8deb2u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 08deb5  cmp esi, dword ptr [eax + ecx*1 + 0x721]
    X86_AT(c, 0x8deb5u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x721u))), 0, 4);
    // 08debc  jg 0x8ded9
    X86_AT(c, 0x8debcu);
    if (x86_cc(c, 15)) { goto L_8ded9; }
    X86_TICK(c, 7);
    // 08debe  and ebx, ebx
    X86_AT(c, 0x8debeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 08dec0  jl 0x8ded9
    X86_AT(c, 0x8dec0u);
    if (x86_cc(c, 12)) { goto L_8ded9; }
    X86_TICK(c, 11);
    // 08dec2  cmp ebx, dword ptr [eax + ecx*1 + 0x725]
    X86_AT(c, 0x8dec2u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x725u))), 0, 4);
    // 08dec9  jg 0x8ded9
    X86_AT(c, 0x8dec9u);
    if (x86_cc(c, 15)) { goto L_8ded9; }
    X86_TICK(c, 4);
    // 08decb  mov dword ptr [eax + ecx*1 + 0x729], esi
    X86_AT(c, 0x8decbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x729u)), c.r[6]);
    // 08ded2  mov dword ptr [eax + ecx*1 + 0x72d], ebx
    X86_AT(c, 0x8ded2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x72Du)), c.r[3]);
L_8ded9:
    X86_TICK(c, 28);
    // 08ded9  pop edi
    X86_AT(c, 0x8ded9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08deda  pop esi
    X86_AT(c, 0x8dedau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08dedb  pop ebx
    X86_AT(c, 0x8dedbu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08dedc  leave 
    X86_AT(c, 0x8dedcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08dedd  ret 
    X86_AT(c, 0x8deddu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8de94u, "ran off the end of a function");
}
void f_0008e22c(X86Cpu& c) {
    X86_TICK(c, 13);
    // 08e22c  push ebp
    X86_AT(c, 0x8e22cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08e22d  mov ebp, esp
    X86_AT(c, 0x8e22du);
    c.r[5] = c.r[4];
    // 08e22f  push 2
    X86_AT(c, 0x8e22fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08e231  call 0x8d570
    X86_AT(c, 0x8e231u);
    push32(c, 0x8e236u); x86_call_known(c, 0x8d570u, f_0008d570); X86_RET(c, 0x8e236u);
    X86_TICK(c, 9);
    // 08e236  push 2
    X86_AT(c, 0x8e236u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08e238  call 0x8d89c
    X86_AT(c, 0x8e238u);
    push32(c, 0x8e23du); x86_call_known(c, 0x8d89cu, f_0008d89c); X86_RET(c, 0x8e23du);
    X86_TICK(c, 14);
    // 08e23d  push dword ptr [ebp + 8]
    X86_AT(c, 0x8e23du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08e240  push 2
    X86_AT(c, 0x8e240u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08e242  call 0x8d8e4
    X86_AT(c, 0x8e242u);
    push32(c, 0x8e247u); x86_call_known(c, 0x8d8e4u, f_0008d8e4); X86_RET(c, 0x8e247u);
    X86_TICK(c, 16);
    // 08e247  leave 
    X86_AT(c, 0x8e247u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08e248  ret 
    X86_AT(c, 0x8e248u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8e22cu, "ran off the end of a function");
}
void f_0008eda4(X86Cpu& c) {
    X86_TICK(c, 22);
    // 08eda4  push ebp
    X86_AT(c, 0x8eda4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08eda5  mov ebp, esp
    X86_AT(c, 0x8eda5u);
    c.r[5] = c.r[4];
    // 08eda7  push 0xffffffff
    X86_AT(c, 0x8eda7u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 08eda9  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8eda9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08edac  push dword ptr [eax*4 + 0x35394]
    X86_AT(c, 0x8edacu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x35394u))); push32(c, v); }
    // 08edb3  call 0x8b154
    X86_AT(c, 0x8edb3u);
    push32(c, 0x8edb8u); x86_call_known(c, 0x8b154u, f_0008b154); X86_RET(c, 0x8edb8u);
    X86_TICK(c, 16);
    // 08edb8  leave 
    X86_AT(c, 0x8edb8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08edb9  ret 
    X86_AT(c, 0x8edb9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8eda4u, "ran off the end of a function");
}
void f_0008edbc(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08edbc  push 1
    X86_AT(c, 0x8edbcu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08edbe  call 0x8c508
    X86_AT(c, 0x8edbeu);
    push32(c, 0x8edc3u); x86_call_known(c, 0x8c508u, f_0008c508); X86_RET(c, 0x8edc3u);
    X86_TICK(c, 9);
    // 08edc3  push 0
    X86_AT(c, 0x8edc3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08edc5  call 0x8c8a8
    X86_AT(c, 0x8edc5u);
    push32(c, 0x8edcau); x86_call_known(c, 0x8c8a8u, f_0008c8a8); X86_RET(c, 0x8edcau);
    X86_TICK(c, 9);
    // 08edca  push 0
    X86_AT(c, 0x8edcau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08edcc  call 0x8c508
    X86_AT(c, 0x8edccu);
    push32(c, 0x8edd1u); x86_call_known(c, 0x8c508u, f_0008c508); X86_RET(c, 0x8edd1u);
    X86_TICK(c, 9);
    // 08edd1  push 0
    X86_AT(c, 0x8edd1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08edd3  call 0x8c8a8
    X86_AT(c, 0x8edd3u);
    push32(c, 0x8edd8u); x86_call_known(c, 0x8c8a8u, f_0008c8a8); X86_RET(c, 0x8edd8u);
    X86_TICK(c, 9);
    // 08edd8  push 2
    X86_AT(c, 0x8edd8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08edda  call 0x8c51c
    X86_AT(c, 0x8eddau);
    push32(c, 0x8eddfu); x86_call_known(c, 0x8c51cu, f_0008c51c); X86_RET(c, 0x8eddfu);
    X86_TICK(c, 7);
    // 08eddf  call 0x8c7cc
    X86_AT(c, 0x8eddfu);
    push32(c, 0x8ede4u); x86_call_known(c, 0x8c7ccu, f_0008c7cc); X86_RET(c, 0x8ede4u);
    X86_TICK(c, 7);
    // 08ede4  call 0x8b404
    X86_AT(c, 0x8ede4u);
    push32(c, 0x8ede9u); x86_call_known(c, 0x8b404u, f_0008b404); X86_RET(c, 0x8ede9u);
    X86_TICK(c, 7);
    // 08ede9  call 0x8bfec
    X86_AT(c, 0x8ede9u);
    push32(c, 0x8edeeu); x86_call_known(c, 0x8bfecu, f_0008bfec); X86_RET(c, 0x8edeeu);
    X86_TICK(c, 9);
    // 08edee  push 0
    X86_AT(c, 0x8edeeu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08edf0  call 0x93198
    X86_AT(c, 0x8edf0u);
    push32(c, 0x8edf5u); x86_call_known(c, 0x93198u, f_00093198); X86_RET(c, 0x8edf5u);
    X86_TICK(c, 12);
    // 08edf5  add esp, 0x18
    X86_AT(c, 0x8edf5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 08edf8  ret 
    X86_AT(c, 0x8edf8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8edbcu, "ran off the end of a function");
}
void f_0008edfc(X86Cpu& c) {
    X86_TICK(c, 25);
    // 08edfc  push ebp
    X86_AT(c, 0x8edfcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08edfd  mov ebp, esp
    X86_AT(c, 0x8edfdu);
    c.r[5] = c.r[4];
    // 08edff  push eax
    X86_AT(c, 0x8edffu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ee00  push ebx
    X86_AT(c, 0x8ee00u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08ee01  push esi
    X86_AT(c, 0x8ee01u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08ee02  push edi
    X86_AT(c, 0x8ee02u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08ee03  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8ee03u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08ee06  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x8ee06u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 08ee0d  call 0xb
    X86_AT(c, 0x8ee0du);
    push32(c, 0x8ee12u); x86_call_known(c, 0xbu, f_0000000b); X86_RET(c, 0x8ee12u);
    X86_TICK(c, 2);
    // 08ee12  sub esi, esi
    X86_AT(c, 0x8ee12u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_8ee14:
    X86_TICK(c, 21);
    // 08ee14  mov eax, edi
    X86_AT(c, 0x8ee14u);
    c.r[0] = c.r[7];
    // 08ee16  mov edx, eax
    X86_AT(c, 0x8ee16u);
    c.r[2] = c.r[0];
    // 08ee18  shl edx, 5
    X86_AT(c, 0x8ee18u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 08ee1b  sub edx, eax
    X86_AT(c, 0x8ee1bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08ee1d  lea edx, [eax + edx*4]
    X86_AT(c, 0x8ee1du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 08ee20  shl edx, 2
    X86_AT(c, 0x8ee20u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 08ee23  cmp edx, esi
    X86_AT(c, 0x8ee23u);
    (void)x86_sub(c, c.r[2], c.r[6], 0, 4);
    // 08ee25  jle 0x8ee4b
    X86_AT(c, 0x8ee25u);
    if (x86_cc(c, 14)) { goto L_8ee4b; }
    X86_TICK(c, 13);
    // 08ee27  lea ebx, [ebp - 4]
    X86_AT(c, 0x8ee27u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 08ee2a  push ebx
    X86_AT(c, 0x8ee2au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08ee2b  push 1
    X86_AT(c, 0x8ee2bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08ee2d  call 0x29
    X86_AT(c, 0x8ee2du);
    push32(c, 0x8ee32u); x86_call_known(c, 0x29u, f_00000029); X86_RET(c, 0x8ee32u);
    X86_TICK(c, 15);
    // 08ee32  add esp, 8
    X86_AT(c, 0x8ee32u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08ee35  mov eax, dword ptr [ebx]
    X86_AT(c, 0x8ee35u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 08ee37  and eax, 0xff00
    X86_AT(c, 0x8ee37u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFF00u, 4); }
    // 08ee3c  cmp eax, 0xff00
    X86_AT(c, 0x8ee3cu);
    (void)x86_sub(c, c.r[0], 0xFF00u, 0, 4);
    // 08ee41  je 0x8ee48
    X86_AT(c, 0x8ee41u);
    if (x86_cc(c, 4)) { goto L_8ee48; }
    X86_TICK(c, 7);
    // 08ee43  call 0x8edbc
    X86_AT(c, 0x8ee43u);
    push32(c, 0x8ee48u); x86_call_known(c, 0x8edbcu, f_0008edbc); X86_RET(c, 0x8ee48u);
L_8ee48:
    X86_TICK(c, 9);
    // 08ee48  inc esi
    X86_AT(c, 0x8ee48u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08ee49  jmp 0x8ee14
    X86_AT(c, 0x8ee49u);
    X86_POLL(c, 0x8ee14u); goto L_8ee14;
L_8ee4b:
    X86_TICK(c, 28);
    // 08ee4b  pop edi
    X86_AT(c, 0x8ee4bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08ee4c  pop esi
    X86_AT(c, 0x8ee4cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08ee4d  pop ebx
    X86_AT(c, 0x8ee4du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08ee4e  leave 
    X86_AT(c, 0x8ee4eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08ee4f  ret 
    X86_AT(c, 0x8ee4fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8edfcu, "ran off the end of a function");
}
void f_0008ee50(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08ee50  push ebp
    X86_AT(c, 0x8ee50u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08ee51  mov ebp, esp
    X86_AT(c, 0x8ee51u);
    c.r[5] = c.r[4];
    // 08ee53  push edi
    X86_AT(c, 0x8ee53u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08ee54  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8ee54u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08ee57  push 0
    X86_AT(c, 0x8ee57u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ee59  push 0
    X86_AT(c, 0x8ee59u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ee5b  push 0x1288
    X86_AT(c, 0x8ee5bu);
    { uint32_t v = 0x1288u; push32(c, v); }
    // 08ee60  call 0x8d184
    X86_AT(c, 0x8ee60u);
    push32(c, 0x8ee65u); x86_call_known(c, 0x8d184u, f_0008d184); X86_RET(c, 0x8ee65u);
    X86_TICK(c, 9);
    // 08ee65  push 0xe
    X86_AT(c, 0x8ee65u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 08ee67  call 0x8c384
    X86_AT(c, 0x8ee67u);
    push32(c, 0x8ee6cu); x86_call_known(c, 0x8c384u, f_0008c384); X86_RET(c, 0x8ee6cu);
    X86_TICK(c, 9);
    // 08ee6c  push 0xb
    X86_AT(c, 0x8ee6cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 08ee6e  call 0x8c39c
    X86_AT(c, 0x8ee6eu);
    push32(c, 0x8ee73u); x86_call_known(c, 0x8c39cu, f_0008c39c); X86_RET(c, 0x8ee73u);
    X86_TICK(c, 9);
    // 08ee73  push 1
    X86_AT(c, 0x8ee73u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08ee75  call 0x8c44c
    X86_AT(c, 0x8ee75u);
    push32(c, 0x8ee7au); x86_call_known(c, 0x8c44cu, f_0008c44c); X86_RET(c, 0x8ee7au);
    X86_TICK(c, 24);
    // 08ee7a  push edi
    X86_AT(c, 0x8ee7au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08ee7b  push 0x13
    X86_AT(c, 0x8ee7bu);
    { uint32_t v = 0x13u; push32(c, v); }
    // 08ee7d  mov edx, 0xffffffff
    X86_AT(c, 0x8ee7du);
    c.r[2] = 0xFFFFFFFFu;
    // 08ee82  sub eax, eax
    X86_AT(c, 0x8ee82u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08ee84  push edi
    X86_AT(c, 0x8ee84u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08ee85  mov ecx, edx
    X86_AT(c, 0x8ee85u);
    c.r[1] = c.r[2];
    // 08ee87  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x8ee87u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 08ee89  jne 0x8ee8e
    X86_AT(c, 0x8ee89u);
    if (x86_cc(c, 5)) { goto L_8ee8e; }
    X86_TICK(c, 4);
    // 08ee8b  inc ecx
    X86_AT(c, 0x8ee8bu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 08ee8c  sub edx, ecx
    X86_AT(c, 0x8ee8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_8ee8e:
    X86_TICK(c, 27);
    // 08ee8e  pop edi
    X86_AT(c, 0x8ee8eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08ee8f  shl edx, 3
    X86_AT(c, 0x8ee8fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 08ee92  mov eax, 0x280
    X86_AT(c, 0x8ee92u);
    c.r[0] = 0x280u;
    // 08ee97  sub eax, edx
    X86_AT(c, 0x8ee97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 08ee99  cdq 
    X86_AT(c, 0x8ee99u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08ee9a  sub eax, edx
    X86_AT(c, 0x8ee9au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 08ee9c  sar eax, 1
    X86_AT(c, 0x8ee9cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 08ee9e  push eax
    X86_AT(c, 0x8ee9eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ee9f  call 0x8d6bc
    X86_AT(c, 0x8ee9fu);
    push32(c, 0x8eea4u); x86_call_known(c, 0x8d6bcu, f_0008d6bc); X86_RET(c, 0x8eea4u);
    X86_TICK(c, 9);
    // 08eea4  push 0
    X86_AT(c, 0x8eea4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08eea6  call 0x8c44c
    X86_AT(c, 0x8eea6u);
    push32(c, 0x8eeabu); x86_call_known(c, 0x8c44cu, f_0008c44c); X86_RET(c, 0x8eeabu);
    X86_TICK(c, 22);
    // 08eeab  add esp, 0x28
    X86_AT(c, 0x8eeabu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 08eeae  pop edi
    X86_AT(c, 0x8eeaeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08eeaf  leave 
    X86_AT(c, 0x8eeafu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08eeb0  ret 
    X86_AT(c, 0x8eeb0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ee50u, "ran off the end of a function");
}
void f_0008eeb4(X86Cpu& c) {
    X86_TICK(c, 17);
    // 08eeb4  push 0
    X86_AT(c, 0x8eeb4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08eeb6  push 0x190
    X86_AT(c, 0x8eeb6u);
    { uint32_t v = 0x190u; push32(c, v); }
    // 08eebb  push 0x280
    X86_AT(c, 0x8eebbu);
    { uint32_t v = 0x280u; push32(c, v); }
    // 08eec0  push 0x18
    X86_AT(c, 0x8eec0u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 08eec2  push 0
    X86_AT(c, 0x8eec2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08eec4  call 0x8caf8
    X86_AT(c, 0x8eec4u);
    push32(c, 0x8eec9u); x86_call_known(c, 0x8caf8u, f_0008caf8); X86_RET(c, 0x8eec9u);
    X86_TICK(c, 12);
    // 08eec9  add esp, 0x14
    X86_AT(c, 0x8eec9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 08eecc  ret 
    X86_AT(c, 0x8eeccu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8eeb4u, "ran off the end of a function");
}
void f_0008eed0(X86Cpu& c) {
    X86_TICK(c, 43);
    // 08eed0  push ebp
    X86_AT(c, 0x8eed0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08eed1  mov ebp, esp
    X86_AT(c, 0x8eed1u);
    c.r[5] = c.r[4];
    // 08eed3  push eax
    X86_AT(c, 0x8eed3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08eed4  lea eax, [ebp - 4]
    X86_AT(c, 0x8eed4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 08eed7  push eax
    X86_AT(c, 0x8eed7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08eed8  push 0x893d8
    X86_AT(c, 0x8eed8u);
    { uint32_t v = 0x893D8u; push32(c, v); }
    // 08eedd  push 0x893d4
    X86_AT(c, 0x8eeddu);
    { uint32_t v = 0x893D4u; push32(c, v); }
    // 08eee2  push 0x15000
    X86_AT(c, 0x8eee2u);
    { uint32_t v = 0x15000u; push32(c, v); }
    // 08eee7  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8eee7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08eeea  lea edx, [eax + eax*4]
    X86_AT(c, 0x8eeeau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 08eeed  lea edx, [eax + edx*4]
    X86_AT(c, 0x8eeedu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 08eef0  shl edx, 0xc
    X86_AT(c, 0x8eef0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 08eef3  add edx, 0x353d4
    X86_AT(c, 0x8eef3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x353D4u, 0, 4); }
    // 08eef9  push edx
    X86_AT(c, 0x8eef9u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08eefa  push dword ptr [ebp + 8]
    X86_AT(c, 0x8eefau);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08eefd  call 0x8d088
    X86_AT(c, 0x8eefdu);
    push32(c, 0x8ef02u); x86_call_known(c, 0x8d088u, f_0008d088); X86_RET(c, 0x8ef02u);
    X86_TICK(c, 16);
    // 08ef02  leave 
    X86_AT(c, 0x8ef02u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08ef03  ret 
    X86_AT(c, 0x8ef03u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8eed0u, "ran off the end of a function");
}
void f_0008ef04(X86Cpu& c) {
    X86_TICK(c, 7);
    // 08ef04  call 0x8c7cc
    X86_AT(c, 0x8ef04u);
    push32(c, 0x8ef09u); x86_call_known(c, 0x8c7ccu, f_0008c7cc); X86_RET(c, 0x8ef09u);
    X86_TICK(c, 9);
    // 08ef09  push 3
    X86_AT(c, 0x8ef09u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08ef0b  call 0x8c51c
    X86_AT(c, 0x8ef0bu);
    push32(c, 0x8ef10u); x86_call_known(c, 0x8c51cu, f_0008c51c); X86_RET(c, 0x8ef10u);
    X86_TICK(c, 9);
    // 08ef10  push 0
    X86_AT(c, 0x8ef10u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ef12  call 0x8c6d0
    X86_AT(c, 0x8ef12u);
    push32(c, 0x8ef17u); x86_call_known(c, 0x8c6d0u, f_0008c6d0); X86_RET(c, 0x8ef17u);
    X86_TICK(c, 9);
    // 08ef17  push 1
    X86_AT(c, 0x8ef17u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08ef19  call 0x8c508
    X86_AT(c, 0x8ef19u);
    push32(c, 0x8ef1eu); x86_call_known(c, 0x8c508u, f_0008c508); X86_RET(c, 0x8ef1eu);
    X86_TICK(c, 9);
    // 08ef1e  push 1
    X86_AT(c, 0x8ef1eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08ef20  call 0x8c540
    X86_AT(c, 0x8ef20u);
    push32(c, 0x8ef25u); x86_call_known(c, 0x8c540u, f_0008c540); X86_RET(c, 0x8ef25u);
    X86_TICK(c, 9);
    // 08ef25  push 0
    X86_AT(c, 0x8ef25u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ef27  call 0x8c508
    X86_AT(c, 0x8ef27u);
    push32(c, 0x8ef2cu); x86_call_known(c, 0x8c508u, f_0008c508); X86_RET(c, 0x8ef2cu);
    X86_TICK(c, 7);
    // 08ef2c  call 0x8c2cc
    X86_AT(c, 0x8ef2cu);
    push32(c, 0x8ef31u); x86_call_known(c, 0x8c2ccu, f_0008c2cc); X86_RET(c, 0x8ef31u);
    X86_TICK(c, 9);
    // 08ef31  push 0x129c
    X86_AT(c, 0x8ef31u);
    { uint32_t v = 0x129Cu; push32(c, v); }
    // 08ef36  call 0x8ee50
    X86_AT(c, 0x8ef36u);
    push32(c, 0x8ef3bu); x86_call_known(c, 0x8ee50u, f_0008ee50); X86_RET(c, 0x8ef3bu);
    X86_TICK(c, 7);
    // 08ef3b  call 0x8eeb4
    X86_AT(c, 0x8ef3bu);
    push32(c, 0x8ef40u); x86_call_known(c, 0x8eeb4u, f_0008eeb4); X86_RET(c, 0x8ef40u);
    X86_TICK(c, 9);
    // 08ef40  push 2
    X86_AT(c, 0x8ef40u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08ef42  call 0x8c51c
    X86_AT(c, 0x8ef42u);
    push32(c, 0x8ef47u); x86_call_known(c, 0x8c51cu, f_0008c51c); X86_RET(c, 0x8ef47u);
    X86_TICK(c, 7);
    // 08ef47  call 0x8bf64
    X86_AT(c, 0x8ef47u);
    push32(c, 0x8ef4cu); x86_call_known(c, 0x8bf64u, f_0008bf64); X86_RET(c, 0x8ef4cu);
    X86_TICK(c, 7);
    // 08ef4c  call 0x8ad84
    X86_AT(c, 0x8ef4cu);
    push32(c, 0x8ef51u); x86_call_known(c, 0x8ad84u, f_0008ad84); X86_RET(c, 0x8ef51u);
    X86_TICK(c, 14);
    // 08ef51  sub eax, eax
    X86_AT(c, 0x8ef51u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08ef53  add esp, 0x1c
    X86_AT(c, 0x8ef53u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 08ef56  ret 
    X86_AT(c, 0x8ef56u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ef04u, "ran off the end of a function");
}
void f_0008ef58(X86Cpu& c) {
    X86_TICK(c, 13);
    // 08ef58  push ebp
    X86_AT(c, 0x8ef58u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08ef59  mov ebp, esp
    X86_AT(c, 0x8ef59u);
    c.r[5] = c.r[4];
    // 08ef5b  push 0
    X86_AT(c, 0x8ef5bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ef5d  call 0x8c51c
    X86_AT(c, 0x8ef5du);
    push32(c, 0x8ef62u); x86_call_known(c, 0x8c51cu, f_0008c51c); X86_RET(c, 0x8ef62u);
    X86_TICK(c, 9);
    // 08ef62  push 1
    X86_AT(c, 0x8ef62u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08ef64  call 0x8c508
    X86_AT(c, 0x8ef64u);
    push32(c, 0x8ef69u); x86_call_known(c, 0x8c508u, f_0008c508); X86_RET(c, 0x8ef69u);
    X86_TICK(c, 36);
    // 08ef69  push dword ptr [0x893d8]
    X86_AT(c, 0x8ef69u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x893D8u))); push32(c, v); }
    // 08ef6f  push dword ptr [0x893d4]
    X86_AT(c, 0x8ef6fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x893D4u))); push32(c, v); }
    // 08ef75  push 0x10
    X86_AT(c, 0x8ef75u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 08ef77  push 0x1f
    X86_AT(c, 0x8ef77u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 08ef79  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8ef79u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08ef7c  lea edx, [eax + eax*4]
    X86_AT(c, 0x8ef7cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 08ef7f  lea edx, [eax + edx*4]
    X86_AT(c, 0x8ef7fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 08ef82  shl edx, 0xc
    X86_AT(c, 0x8ef82u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 08ef85  add edx, 0x353d4
    X86_AT(c, 0x8ef85u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x353D4u, 0, 4); }
    // 08ef8b  push edx
    X86_AT(c, 0x8ef8bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08ef8c  call 0x8ceb0
    X86_AT(c, 0x8ef8cu);
    push32(c, 0x8ef91u); x86_call_known(c, 0x8ceb0u, f_0008ceb0); X86_RET(c, 0x8ef91u);
    X86_TICK(c, 9);
    // 08ef91  push 0
    X86_AT(c, 0x8ef91u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ef93  call 0x8c508
    X86_AT(c, 0x8ef93u);
    push32(c, 0x8ef98u); x86_call_known(c, 0x8c508u, f_0008c508); X86_RET(c, 0x8ef98u);
    X86_TICK(c, 7);
    // 08ef98  call 0x8c2cc
    X86_AT(c, 0x8ef98u);
    push32(c, 0x8ef9du); x86_call_known(c, 0x8c2ccu, f_0008c2cc); X86_RET(c, 0x8ef9du);
    X86_TICK(c, 16);
    // 08ef9d  leave 
    X86_AT(c, 0x8ef9du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08ef9e  ret 
    X86_AT(c, 0x8ef9eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ef58u, "ran off the end of a function");
}
void f_0008efa0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08efa0  push 0
    X86_AT(c, 0x8efa0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08efa2  call 0x8ef58
    X86_AT(c, 0x8efa2u);
    push32(c, 0x8efa7u); x86_call_known(c, 0x8ef58u, f_0008ef58); X86_RET(c, 0x8efa7u);
    X86_TICK(c, 9);
    // 08efa7  push 0
    X86_AT(c, 0x8efa7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08efa9  call 0x8d570
    X86_AT(c, 0x8efa9u);
    push32(c, 0x8efaeu); x86_call_known(c, 0x8d570u, f_0008d570); X86_RET(c, 0x8efaeu);
    X86_TICK(c, 9);
    // 08efae  push 2
    X86_AT(c, 0x8efaeu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08efb0  call 0x8c51c
    X86_AT(c, 0x8efb0u);
    push32(c, 0x8efb5u); x86_call_known(c, 0x8c51cu, f_0008c51c); X86_RET(c, 0x8efb5u);
    X86_TICK(c, 9);
    // 08efb5  push 0
    X86_AT(c, 0x8efb5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08efb7  call 0x8d724
    X86_AT(c, 0x8efb7u);
    push32(c, 0x8efbcu); x86_call_known(c, 0x8d724u, f_0008d724); X86_RET(c, 0x8efbcu);
    X86_TICK(c, 13);
    // 08efbc  push 0
    X86_AT(c, 0x8efbcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08efbe  push 0
    X86_AT(c, 0x8efbeu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08efc0  push 0
    X86_AT(c, 0x8efc0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08efc2  call 0x8de94
    X86_AT(c, 0x8efc2u);
    push32(c, 0x8efc7u); x86_call_known(c, 0x8de94u, f_0008de94); X86_RET(c, 0x8efc7u);
    X86_TICK(c, 11);
    // 08efc7  push 0x12b4
    X86_AT(c, 0x8efc7u);
    { uint32_t v = 0x12B4u; push32(c, v); }
    // 08efcc  push 0
    X86_AT(c, 0x8efccu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08efce  call 0x8d8e4
    X86_AT(c, 0x8efceu);
    push32(c, 0x8efd3u); x86_call_known(c, 0x8d8e4u, f_0008d8e4); X86_RET(c, 0x8efd3u);
    X86_TICK(c, 9);
    // 08efd3  push 0x32
    X86_AT(c, 0x8efd3u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08efd5  call 0x8edfc
    X86_AT(c, 0x8efd5u);
    push32(c, 0x8efdau); x86_call_known(c, 0x8edfcu, f_0008edfc); X86_RET(c, 0x8efdau);
    X86_TICK(c, 9);
    // 08efda  push 0
    X86_AT(c, 0x8efdau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08efdc  call 0x8d89c
    X86_AT(c, 0x8efdcu);
    push32(c, 0x8efe1u); x86_call_known(c, 0x8d89cu, f_0008d89c); X86_RET(c, 0x8efe1u);
    X86_TICK(c, 11);
    // 08efe1  push 0x1314
    X86_AT(c, 0x8efe1u);
    { uint32_t v = 0x1314u; push32(c, v); }
    // 08efe6  push 0
    X86_AT(c, 0x8efe6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08efe8  call 0x8d8e4
    X86_AT(c, 0x8efe8u);
    push32(c, 0x8efedu); x86_call_known(c, 0x8d8e4u, f_0008d8e4); X86_RET(c, 0x8efedu);
    X86_TICK(c, 9);
    // 08efed  push 0x32
    X86_AT(c, 0x8efedu);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08efef  call 0x8edfc
    X86_AT(c, 0x8efefu);
    push32(c, 0x8eff4u); x86_call_known(c, 0x8edfcu, f_0008edfc); X86_RET(c, 0x8eff4u);
    X86_TICK(c, 9);
    // 08eff4  push 0
    X86_AT(c, 0x8eff4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08eff6  call 0x8d89c
    X86_AT(c, 0x8eff6u);
    push32(c, 0x8effbu); x86_call_known(c, 0x8d89cu, f_0008d89c); X86_RET(c, 0x8effbu);
    X86_TICK(c, 13);
    // 08effb  add esp, 0x3c
    X86_AT(c, 0x8effbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 08effe  push 0x1358
    X86_AT(c, 0x8effeu);
    { uint32_t v = 0x1358u; push32(c, v); }
    // 08f003  push 0
    X86_AT(c, 0x8f003u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f005  call 0x8d8e4
    X86_AT(c, 0x8f005u);
    push32(c, 0x8f00au); x86_call_known(c, 0x8d8e4u, f_0008d8e4); X86_RET(c, 0x8f00au);
    X86_TICK(c, 9);
    // 08f00a  push 0x32
    X86_AT(c, 0x8f00au);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08f00c  call 0x8edfc
    X86_AT(c, 0x8f00cu);
    push32(c, 0x8f011u); x86_call_known(c, 0x8edfcu, f_0008edfc); X86_RET(c, 0x8f011u);
    X86_TICK(c, 9);
    // 08f011  push 0
    X86_AT(c, 0x8f011u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f013  call 0x8d89c
    X86_AT(c, 0x8f013u);
    push32(c, 0x8f018u); x86_call_known(c, 0x8d89cu, f_0008d89c); X86_RET(c, 0x8f018u);
    X86_TICK(c, 11);
    // 08f018  push 0x1390
    X86_AT(c, 0x8f018u);
    { uint32_t v = 0x1390u; push32(c, v); }
    // 08f01d  push 0
    X86_AT(c, 0x8f01du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f01f  call 0x8d8e4
    X86_AT(c, 0x8f01fu);
    push32(c, 0x8f024u); x86_call_known(c, 0x8d8e4u, f_0008d8e4); X86_RET(c, 0x8f024u);
    X86_TICK(c, 9);
    // 08f024  push 0x32
    X86_AT(c, 0x8f024u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08f026  call 0x8edfc
    X86_AT(c, 0x8f026u);
    push32(c, 0x8f02bu); x86_call_known(c, 0x8edfcu, f_0008edfc); X86_RET(c, 0x8f02bu);
    X86_TICK(c, 9);
    // 08f02b  push 0
    X86_AT(c, 0x8f02bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f02d  call 0x8d89c
    X86_AT(c, 0x8f02du);
    push32(c, 0x8f032u); x86_call_known(c, 0x8d89cu, f_0008d89c); X86_RET(c, 0x8f032u);
    X86_TICK(c, 9);
    // 08f032  push 0
    X86_AT(c, 0x8f032u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f034  call 0x8d89c
    X86_AT(c, 0x8f034u);
    push32(c, 0x8f039u); x86_call_known(c, 0x8d89cu, f_0008d89c); X86_RET(c, 0x8f039u);
    X86_TICK(c, 11);
    // 08f039  push 0x1400
    X86_AT(c, 0x8f039u);
    { uint32_t v = 0x1400u; push32(c, v); }
    // 08f03e  push 0
    X86_AT(c, 0x8f03eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f040  call 0x8d8e4
    X86_AT(c, 0x8f040u);
    push32(c, 0x8f045u); x86_call_known(c, 0x8d8e4u, f_0008d8e4); X86_RET(c, 0x8f045u);
    X86_TICK(c, 11);
    // 08f045  push 0x1474
    X86_AT(c, 0x8f045u);
    { uint32_t v = 0x1474u; push32(c, v); }
    // 08f04a  push 0
    X86_AT(c, 0x8f04au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f04c  call 0x8d8e4
    X86_AT(c, 0x8f04cu);
    push32(c, 0x8f051u); x86_call_known(c, 0x8d8e4u, f_0008d8e4); X86_RET(c, 0x8f051u);
    X86_TICK(c, 9);
    // 08f051  push 0x64
    X86_AT(c, 0x8f051u);
    { uint32_t v = 0x64u; push32(c, v); }
    // 08f053  call 0x8edfc
    X86_AT(c, 0x8f053u);
    push32(c, 0x8f058u); x86_call_known(c, 0x8edfcu, f_0008edfc); X86_RET(c, 0x8f058u);
    X86_TICK(c, 11);
    // 08f058  add esp, 0x38
    X86_AT(c, 0x8f058u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 08f05b  push 1
    X86_AT(c, 0x8f05bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08f05d  call 0x8ef58
    X86_AT(c, 0x8f05du);
    push32(c, 0x8f062u); x86_call_known(c, 0x8ef58u, f_0008ef58); X86_RET(c, 0x8f062u);
    X86_TICK(c, 9);
    // 08f062  push 0
    X86_AT(c, 0x8f062u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f064  call 0x8d724
    X86_AT(c, 0x8f064u);
    push32(c, 0x8f069u); x86_call_known(c, 0x8d724u, f_0008d724); X86_RET(c, 0x8f069u);
    X86_TICK(c, 13);
    // 08f069  push 0
    X86_AT(c, 0x8f069u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f06b  push 0
    X86_AT(c, 0x8f06bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f06d  push 0
    X86_AT(c, 0x8f06du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f06f  call 0x8de94
    X86_AT(c, 0x8f06fu);
    push32(c, 0x8f074u); x86_call_known(c, 0x8de94u, f_0008de94); X86_RET(c, 0x8f074u);
    X86_TICK(c, 9);
    // 08f074  push 2
    X86_AT(c, 0x8f074u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08f076  call 0x8c51c
    X86_AT(c, 0x8f076u);
    push32(c, 0x8f07bu); x86_call_known(c, 0x8c51cu, f_0008c51c); X86_RET(c, 0x8f07bu);
    X86_TICK(c, 11);
    // 08f07b  push 0x14d0
    X86_AT(c, 0x8f07bu);
    { uint32_t v = 0x14D0u; push32(c, v); }
    // 08f080  push 0
    X86_AT(c, 0x8f080u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f082  call 0x8d8e4
    X86_AT(c, 0x8f082u);
    push32(c, 0x8f087u); x86_call_known(c, 0x8d8e4u, f_0008d8e4); X86_RET(c, 0x8f087u);
    X86_TICK(c, 9);
    // 08f087  push 0x32
    X86_AT(c, 0x8f087u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08f089  call 0x8edfc
    X86_AT(c, 0x8f089u);
    push32(c, 0x8f08eu); x86_call_known(c, 0x8edfcu, f_0008edfc); X86_RET(c, 0x8f08eu);
    X86_TICK(c, 9);
    // 08f08e  push 0
    X86_AT(c, 0x8f08eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f090  call 0x8d89c
    X86_AT(c, 0x8f090u);
    push32(c, 0x8f095u); x86_call_known(c, 0x8d89cu, f_0008d89c); X86_RET(c, 0x8f095u);
    X86_TICK(c, 11);
    // 08f095  push 0x1530
    X86_AT(c, 0x8f095u);
    { uint32_t v = 0x1530u; push32(c, v); }
    // 08f09a  push 0
    X86_AT(c, 0x8f09au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f09c  call 0x8d8e4
    X86_AT(c, 0x8f09cu);
    push32(c, 0x8f0a1u); x86_call_known(c, 0x8d8e4u, f_0008d8e4); X86_RET(c, 0x8f0a1u);
    X86_TICK(c, 9);
    // 08f0a1  push 0
    X86_AT(c, 0x8f0a1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f0a3  call 0x8d89c
    X86_AT(c, 0x8f0a3u);
    push32(c, 0x8f0a8u); x86_call_known(c, 0x8d89cu, f_0008d89c); X86_RET(c, 0x8f0a8u);
    X86_TICK(c, 9);
    // 08f0a8  push 0x32
    X86_AT(c, 0x8f0a8u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08f0aa  call 0x8edfc
    X86_AT(c, 0x8f0aau);
    push32(c, 0x8f0afu); x86_call_known(c, 0x8edfcu, f_0008edfc); X86_RET(c, 0x8f0afu);
    X86_TICK(c, 9);
    // 08f0af  push 0
    X86_AT(c, 0x8f0afu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f0b1  call 0x8d89c
    X86_AT(c, 0x8f0b1u);
    push32(c, 0x8f0b6u); x86_call_known(c, 0x8d89cu, f_0008d89c); X86_RET(c, 0x8f0b6u);
    X86_TICK(c, 13);
    // 08f0b6  add esp, 0x3c
    X86_AT(c, 0x8f0b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 08f0b9  push 0x158c
    X86_AT(c, 0x8f0b9u);
    { uint32_t v = 0x158Cu; push32(c, v); }
    // 08f0be  push 0
    X86_AT(c, 0x8f0beu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f0c0  call 0x8d8e4
    X86_AT(c, 0x8f0c0u);
    push32(c, 0x8f0c5u); x86_call_known(c, 0x8d8e4u, f_0008d8e4); X86_RET(c, 0x8f0c5u);
    X86_TICK(c, 9);
    // 08f0c5  push 0
    X86_AT(c, 0x8f0c5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f0c7  call 0x8d89c
    X86_AT(c, 0x8f0c7u);
    push32(c, 0x8f0ccu); x86_call_known(c, 0x8d89cu, f_0008d89c); X86_RET(c, 0x8f0ccu);
    X86_TICK(c, 9);
    // 08f0cc  push 0x32
    X86_AT(c, 0x8f0ccu);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08f0ce  call 0x8edfc
    X86_AT(c, 0x8f0ceu);
    push32(c, 0x8f0d3u); x86_call_known(c, 0x8edfcu, f_0008edfc); X86_RET(c, 0x8f0d3u);
    X86_TICK(c, 11);
    // 08f0d3  push 0x15e4
    X86_AT(c, 0x8f0d3u);
    { uint32_t v = 0x15E4u; push32(c, v); }
    // 08f0d8  push 0
    X86_AT(c, 0x8f0d8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f0da  call 0x8d8e4
    X86_AT(c, 0x8f0dau);
    push32(c, 0x8f0dfu); x86_call_known(c, 0x8d8e4u, f_0008d8e4); X86_RET(c, 0x8f0dfu);
    X86_TICK(c, 9);
    // 08f0df  push 0
    X86_AT(c, 0x8f0dfu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f0e1  call 0x8d89c
    X86_AT(c, 0x8f0e1u);
    push32(c, 0x8f0e6u); x86_call_known(c, 0x8d89cu, f_0008d89c); X86_RET(c, 0x8f0e6u);
    X86_TICK(c, 9);
    // 08f0e6  push 0x64
    X86_AT(c, 0x8f0e6u);
    { uint32_t v = 0x64u; push32(c, v); }
    // 08f0e8  call 0x8edfc
    X86_AT(c, 0x8f0e8u);
    push32(c, 0x8f0edu); x86_call_known(c, 0x8edfcu, f_0008edfc); X86_RET(c, 0x8f0edu);
    X86_TICK(c, 9);
    // 08f0ed  push 2
    X86_AT(c, 0x8f0edu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08f0ef  call 0x8ef58
    X86_AT(c, 0x8f0efu);
    push32(c, 0x8f0f4u); x86_call_known(c, 0x8ef58u, f_0008ef58); X86_RET(c, 0x8f0f4u);
    X86_TICK(c, 9);
    // 08f0f4  push 0
    X86_AT(c, 0x8f0f4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f0f6  call 0x8d724
    X86_AT(c, 0x8f0f6u);
    push32(c, 0x8f0fbu); x86_call_known(c, 0x8d724u, f_0008d724); X86_RET(c, 0x8f0fbu);
    X86_TICK(c, 13);
    // 08f0fb  push 0
    X86_AT(c, 0x8f0fbu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f0fd  push 0
    X86_AT(c, 0x8f0fdu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f0ff  push 0
    X86_AT(c, 0x8f0ffu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f101  call 0x8de94
    X86_AT(c, 0x8f101u);
    push32(c, 0x8f106u); x86_call_known(c, 0x8de94u, f_0008de94); X86_RET(c, 0x8f106u);
    X86_TICK(c, 9);
    // 08f106  push 2
    X86_AT(c, 0x8f106u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08f108  call 0x8c51c
    X86_AT(c, 0x8f108u);
    push32(c, 0x8f10du); x86_call_known(c, 0x8c51cu, f_0008c51c); X86_RET(c, 0x8f10du);
    X86_TICK(c, 11);
    // 08f10d  push 0x1644
    X86_AT(c, 0x8f10du);
    { uint32_t v = 0x1644u; push32(c, v); }
    // 08f112  push 0
    X86_AT(c, 0x8f112u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f114  call 0x8d8e4
    X86_AT(c, 0x8f114u);
    push32(c, 0x8f119u); x86_call_known(c, 0x8d8e4u, f_0008d8e4); X86_RET(c, 0x8f119u);
    X86_TICK(c, 11);
    // 08f119  add esp, 0x40
    X86_AT(c, 0x8f119u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 08f11c  push 0x32
    X86_AT(c, 0x8f11cu);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08f11e  call 0x8edfc
    X86_AT(c, 0x8f11eu);
    push32(c, 0x8f123u); x86_call_known(c, 0x8edfcu, f_0008edfc); X86_RET(c, 0x8f123u);
    X86_TICK(c, 9);
    // 08f123  push 0
    X86_AT(c, 0x8f123u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f125  call 0x8d89c
    X86_AT(c, 0x8f125u);
    push32(c, 0x8f12au); x86_call_known(c, 0x8d89cu, f_0008d89c); X86_RET(c, 0x8f12au);
    X86_TICK(c, 11);
    // 08f12a  push 0x1678
    X86_AT(c, 0x8f12au);
    { uint32_t v = 0x1678u; push32(c, v); }
    // 08f12f  push 0
    X86_AT(c, 0x8f12fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f131  call 0x8d8e4
    X86_AT(c, 0x8f131u);
    push32(c, 0x8f136u); x86_call_known(c, 0x8d8e4u, f_0008d8e4); X86_RET(c, 0x8f136u);
    X86_TICK(c, 9);
    // 08f136  push 0
    X86_AT(c, 0x8f136u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f138  call 0x8d89c
    X86_AT(c, 0x8f138u);
    push32(c, 0x8f13du); x86_call_known(c, 0x8d89cu, f_0008d89c); X86_RET(c, 0x8f13du);
    X86_TICK(c, 9);
    // 08f13d  push 0x32
    X86_AT(c, 0x8f13du);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08f13f  call 0x8edfc
    X86_AT(c, 0x8f13fu);
    push32(c, 0x8f144u); x86_call_known(c, 0x8edfcu, f_0008edfc); X86_RET(c, 0x8f144u);
    X86_TICK(c, 11);
    // 08f144  push 0x16d4
    X86_AT(c, 0x8f144u);
    { uint32_t v = 0x16D4u; push32(c, v); }
    // 08f149  push 0
    X86_AT(c, 0x8f149u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f14b  call 0x8d8e4
    X86_AT(c, 0x8f14bu);
    push32(c, 0x8f150u); x86_call_known(c, 0x8d8e4u, f_0008d8e4); X86_RET(c, 0x8f150u);
    X86_TICK(c, 9);
    // 08f150  push 0
    X86_AT(c, 0x8f150u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f152  call 0x8d89c
    X86_AT(c, 0x8f152u);
    push32(c, 0x8f157u); x86_call_known(c, 0x8d89cu, f_0008d89c); X86_RET(c, 0x8f157u);
    X86_TICK(c, 9);
    // 08f157  push 0x32
    X86_AT(c, 0x8f157u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08f159  call 0x8edfc
    X86_AT(c, 0x8f159u);
    push32(c, 0x8f15eu); x86_call_known(c, 0x8edfcu, f_0008edfc); X86_RET(c, 0x8f15eu);
    X86_TICK(c, 11);
    // 08f15e  push 0x1728
    X86_AT(c, 0x8f15eu);
    { uint32_t v = 0x1728u; push32(c, v); }
    // 08f163  push 0
    X86_AT(c, 0x8f163u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f165  call 0x8d8e4
    X86_AT(c, 0x8f165u);
    push32(c, 0x8f16au); x86_call_known(c, 0x8d8e4u, f_0008d8e4); X86_RET(c, 0x8f16au);
    X86_TICK(c, 9);
    // 08f16a  push 0
    X86_AT(c, 0x8f16au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f16c  call 0x8d89c
    X86_AT(c, 0x8f16cu);
    push32(c, 0x8f171u); x86_call_known(c, 0x8d89cu, f_0008d89c); X86_RET(c, 0x8f171u);
    X86_TICK(c, 9);
    // 08f171  push 0x32
    X86_AT(c, 0x8f171u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08f173  call 0x8edfc
    X86_AT(c, 0x8f173u);
    push32(c, 0x8f178u); x86_call_known(c, 0x8edfcu, f_0008edfc); X86_RET(c, 0x8f178u);
    X86_TICK(c, 11);
    // 08f178  push 0x17a8
    X86_AT(c, 0x8f178u);
    { uint32_t v = 0x17A8u; push32(c, v); }
    // 08f17d  push 0
    X86_AT(c, 0x8f17du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f17f  call 0x8d8e4
    X86_AT(c, 0x8f17fu);
    push32(c, 0x8f184u); x86_call_known(c, 0x8d8e4u, f_0008d8e4); X86_RET(c, 0x8f184u);
    X86_TICK(c, 11);
    // 08f184  add esp, 0x40
    X86_AT(c, 0x8f184u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 08f187  push 0
    X86_AT(c, 0x8f187u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f189  call 0x8d89c
    X86_AT(c, 0x8f189u);
    push32(c, 0x8f18eu); x86_call_known(c, 0x8d89cu, f_0008d89c); X86_RET(c, 0x8f18eu);
    X86_TICK(c, 9);
    // 08f18e  push 0x32
    X86_AT(c, 0x8f18eu);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08f190  call 0x8edfc
    X86_AT(c, 0x8f190u);
    push32(c, 0x8f195u); x86_call_known(c, 0x8edfcu, f_0008edfc); X86_RET(c, 0x8f195u);
    X86_TICK(c, 11);
    // 08f195  push 0x17fc
    X86_AT(c, 0x8f195u);
    { uint32_t v = 0x17FCu; push32(c, v); }
    // 08f19a  push 0
    X86_AT(c, 0x8f19au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f19c  call 0x8d8e4
    X86_AT(c, 0x8f19cu);
    push32(c, 0x8f1a1u); x86_call_known(c, 0x8d8e4u, f_0008d8e4); X86_RET(c, 0x8f1a1u);
    X86_TICK(c, 9);
    // 08f1a1  push 0
    X86_AT(c, 0x8f1a1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f1a3  call 0x8d89c
    X86_AT(c, 0x8f1a3u);
    push32(c, 0x8f1a8u); x86_call_known(c, 0x8d89cu, f_0008d89c); X86_RET(c, 0x8f1a8u);
    X86_TICK(c, 9);
    // 08f1a8  push 0x64
    X86_AT(c, 0x8f1a8u);
    { uint32_t v = 0x64u; push32(c, v); }
    // 08f1aa  call 0x8edfc
    X86_AT(c, 0x8f1aau);
    push32(c, 0x8f1afu); x86_call_known(c, 0x8edfcu, f_0008edfc); X86_RET(c, 0x8f1afu);
    X86_TICK(c, 9);
    // 08f1af  push 3
    X86_AT(c, 0x8f1afu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08f1b1  call 0x8ef58
    X86_AT(c, 0x8f1b1u);
    push32(c, 0x8f1b6u); x86_call_known(c, 0x8ef58u, f_0008ef58); X86_RET(c, 0x8f1b6u);
    X86_TICK(c, 9);
    // 08f1b6  push 0
    X86_AT(c, 0x8f1b6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f1b8  call 0x8d724
    X86_AT(c, 0x8f1b8u);
    push32(c, 0x8f1bdu); x86_call_known(c, 0x8d724u, f_0008d724); X86_RET(c, 0x8f1bdu);
    X86_TICK(c, 13);
    // 08f1bd  push 0
    X86_AT(c, 0x8f1bdu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f1bf  push 0
    X86_AT(c, 0x8f1bfu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f1c1  push 0
    X86_AT(c, 0x8f1c1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f1c3  call 0x8de94
    X86_AT(c, 0x8f1c3u);
    push32(c, 0x8f1c8u); x86_call_known(c, 0x8de94u, f_0008de94); X86_RET(c, 0x8f1c8u);
    X86_TICK(c, 9);
    // 08f1c8  push 2
    X86_AT(c, 0x8f1c8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08f1ca  call 0x8c51c
    X86_AT(c, 0x8f1cau);
    push32(c, 0x8f1cfu); x86_call_known(c, 0x8c51cu, f_0008c51c); X86_RET(c, 0x8f1cfu);
    X86_TICK(c, 11);
    // 08f1cf  push 0x1874
    X86_AT(c, 0x8f1cfu);
    { uint32_t v = 0x1874u; push32(c, v); }
    // 08f1d4  push 0
    X86_AT(c, 0x8f1d4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f1d6  call 0x8d8e4
    X86_AT(c, 0x8f1d6u);
    push32(c, 0x8f1dbu); x86_call_known(c, 0x8d8e4u, f_0008d8e4); X86_RET(c, 0x8f1dbu);
    X86_TICK(c, 11);
    // 08f1db  add esp, 0x38
    X86_AT(c, 0x8f1dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 08f1de  push 0x32
    X86_AT(c, 0x8f1deu);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08f1e0  call 0x8edfc
    X86_AT(c, 0x8f1e0u);
    push32(c, 0x8f1e5u); x86_call_known(c, 0x8edfcu, f_0008edfc); X86_RET(c, 0x8f1e5u);
    X86_TICK(c, 9);
    // 08f1e5  push 0
    X86_AT(c, 0x8f1e5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f1e7  call 0x8d89c
    X86_AT(c, 0x8f1e7u);
    push32(c, 0x8f1ecu); x86_call_known(c, 0x8d89cu, f_0008d89c); X86_RET(c, 0x8f1ecu);
    X86_TICK(c, 11);
    // 08f1ec  push 0x18cc
    X86_AT(c, 0x8f1ecu);
    { uint32_t v = 0x18CCu; push32(c, v); }
    // 08f1f1  push 0
    X86_AT(c, 0x8f1f1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f1f3  call 0x8d8e4
    X86_AT(c, 0x8f1f3u);
    push32(c, 0x8f1f8u); x86_call_known(c, 0x8d8e4u, f_0008d8e4); X86_RET(c, 0x8f1f8u);
    X86_TICK(c, 9);
    // 08f1f8  push 0
    X86_AT(c, 0x8f1f8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f1fa  call 0x8d89c
    X86_AT(c, 0x8f1fau);
    push32(c, 0x8f1ffu); x86_call_known(c, 0x8d89cu, f_0008d89c); X86_RET(c, 0x8f1ffu);
    X86_TICK(c, 9);
    // 08f1ff  push 0x32
    X86_AT(c, 0x8f1ffu);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08f201  call 0x8edfc
    X86_AT(c, 0x8f201u);
    push32(c, 0x8f206u); x86_call_known(c, 0x8edfcu, f_0008edfc); X86_RET(c, 0x8f206u);
    X86_TICK(c, 9);
    // 08f206  push 0
    X86_AT(c, 0x8f206u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f208  call 0x8d89c
    X86_AT(c, 0x8f208u);
    push32(c, 0x8f20du); x86_call_known(c, 0x8d89cu, f_0008d89c); X86_RET(c, 0x8f20du);
    X86_TICK(c, 11);
    // 08f20d  push 0x1948
    X86_AT(c, 0x8f20du);
    { uint32_t v = 0x1948u; push32(c, v); }
    // 08f212  push 0
    X86_AT(c, 0x8f212u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f214  call 0x8d8e4
    X86_AT(c, 0x8f214u);
    push32(c, 0x8f219u); x86_call_known(c, 0x8d8e4u, f_0008d8e4); X86_RET(c, 0x8f219u);
    X86_TICK(c, 9);
    // 08f219  push 0x14
    X86_AT(c, 0x8f219u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 08f21b  call 0x8edfc
    X86_AT(c, 0x8f21bu);
    push32(c, 0x8f220u); x86_call_known(c, 0x8edfcu, f_0008edfc); X86_RET(c, 0x8f220u);
    X86_TICK(c, 9);
    // 08f220  push 0
    X86_AT(c, 0x8f220u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f222  call 0x8d89c
    X86_AT(c, 0x8f222u);
    push32(c, 0x8f227u); x86_call_known(c, 0x8d89cu, f_0008d89c); X86_RET(c, 0x8f227u);
    X86_TICK(c, 11);
    // 08f227  push 0x1970
    X86_AT(c, 0x8f227u);
    { uint32_t v = 0x1970u; push32(c, v); }
    // 08f22c  push 0
    X86_AT(c, 0x8f22cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f22e  call 0x8d8e4
    X86_AT(c, 0x8f22eu);
    push32(c, 0x8f233u); x86_call_known(c, 0x8d8e4u, f_0008d8e4); X86_RET(c, 0x8f233u);
    X86_TICK(c, 9);
    // 08f233  push 0xc8
    X86_AT(c, 0x8f233u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 08f238  call 0x8edfc
    X86_AT(c, 0x8f238u);
    push32(c, 0x8f23du); x86_call_known(c, 0x8edfcu, f_0008edfc); X86_RET(c, 0x8f23du);
    X86_TICK(c, 9);
    // 08f23d  push 0
    X86_AT(c, 0x8f23du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f23f  call 0x8d89c
    X86_AT(c, 0x8f23fu);
    push32(c, 0x8f244u); x86_call_known(c, 0x8d89cu, f_0008d89c); X86_RET(c, 0x8f244u);
    X86_TICK(c, 12);
    // 08f244  add esp, 0x3c
    X86_AT(c, 0x8f244u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 08f247  ret 
    X86_AT(c, 0x8f247u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8efa0u, "ran off the end of a function");
}
}
