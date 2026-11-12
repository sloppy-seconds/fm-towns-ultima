#include "p_game_funcs.h"
namespace p_game {
void f_0008c718(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08c718  push ebp
    X86_AT(c, 0x8c718u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c719  mov ebp, esp
    X86_AT(c, 0x8c719u);
    c.r[5] = c.r[4];
    // 08c71b  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0x8c71bu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c71f  push eax
    X86_AT(c, 0x8c71fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c720  push 1
    X86_AT(c, 0x8c720u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08c722  push 0x34494
    X86_AT(c, 0x8c722u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c727  call 0x18e
    X86_AT(c, 0x8c727u);
    push32(c, 0x8c72cu); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x8c72cu);
    X86_TICK(c, 9);
    // 08c72c  push 0x34494
    X86_AT(c, 0x8c72cu);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c731  call 0x498
    X86_AT(c, 0x8c731u);
    push32(c, 0x8c736u); x86_call_known(c, 0x498u, f_00000498); X86_RET(c, 0x8c736u);
    X86_TICK(c, 16);
    // 08c736  leave 
    X86_AT(c, 0x8c736u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c737  ret 
    X86_AT(c, 0x8c737u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c718u, "ran off the end of a function");
}
void f_0008c76c(X86Cpu& c) {
    X86_TICK(c, 41);
    // 08c76c  push ebp
    X86_AT(c, 0x8c76cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c76d  mov ebp, esp
    X86_AT(c, 0x8c76du);
    c.r[5] = c.r[4];
    // 08c76f  mov word ptr [0x34a94], 2
    X86_AT(c, 0x8c76fu);
    wr16((c.sbase[3] + (uint32_t)(0x34A94u)), 0x2u);
    // 08c778  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0x8c778u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08c77c  mov word ptr [0x34a96], ax
    X86_AT(c, 0x8c77cu);
    wr16((c.sbase[3] + (uint32_t)(0x34A96u)), (c.r[0] & 0xFFFFu));
    // 08c782  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0x8c782u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08c786  mov word ptr [0x34a98], ax
    X86_AT(c, 0x8c786u);
    wr16((c.sbase[3] + (uint32_t)(0x34A98u)), (c.r[0] & 0xFFFFu));
    // 08c78c  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0x8c78cu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 08c790  mov word ptr [0x34a9a], ax
    X86_AT(c, 0x8c790u);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Au)), (c.r[0] & 0xFFFFu));
    // 08c796  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0x8c796u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 08c79a  mov word ptr [0x34a9c], ax
    X86_AT(c, 0x8c79au);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Cu)), (c.r[0] & 0xFFFFu));
    // 08c7a0  push 0x34a94
    X86_AT(c, 0x8c7a0u);
    { uint32_t v = 0x34A94u; push32(c, v); }
    // 08c7a5  push 0x34494
    X86_AT(c, 0x8c7a5u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c7aa  call 0x789
    X86_AT(c, 0x8c7aau);
    push32(c, 0x8c7afu); x86_call_known(c, 0x789u, f_00000789); X86_RET(c, 0x8c7afu);
    X86_TICK(c, 16);
    // 08c7af  leave 
    X86_AT(c, 0x8c7afu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c7b0  ret 
    X86_AT(c, 0x8c7b0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c76cu, "ran off the end of a function");
}
void f_0008c88c(X86Cpu& c) {
    X86_TICK(c, 24);
    // 08c88c  push ebp
    X86_AT(c, 0x8c88cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c88d  mov ebp, esp
    X86_AT(c, 0x8c88du);
    c.r[5] = c.r[4];
    // 08c88f  mov ax, word ptr [0x34b9a]
    X86_AT(c, 0x8c88fu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x34B9Au))));
    // 08c895  or al, 0x20
    X86_AT(c, 0x8c895u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 08c897  movsx eax, ax
    X86_AT(c, 0x8c897u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 08c89a  push eax
    X86_AT(c, 0x8c89au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c89b  push 0x34494
    X86_AT(c, 0x8c89bu);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c8a0  call 0x245
    X86_AT(c, 0x8c8a0u);
    push32(c, 0x8c8a5u); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8c8a5u);
    X86_TICK(c, 35);
    // 08c8a5  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0x8c8a5u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08c8a9  mov word ptr [0x34a94], ax
    X86_AT(c, 0x8c8a9u);
    wr16((c.sbase[3] + (uint32_t)(0x34A94u)), (c.r[0] & 0xFFFFu));
    // 08c8af  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0x8c8afu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08c8b3  mov word ptr [0x34a96], ax
    X86_AT(c, 0x8c8b3u);
    wr16((c.sbase[3] + (uint32_t)(0x34A96u)), (c.r[0] & 0xFFFFu));
    // 08c8b9  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0x8c8b9u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 08c8bd  mov word ptr [0x34a98], ax
    X86_AT(c, 0x8c8bdu);
    wr16((c.sbase[3] + (uint32_t)(0x34A98u)), (c.r[0] & 0xFFFFu));
    // 08c8c3  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0x8c8c3u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 08c8c7  mov word ptr [0x34a9a], ax
    X86_AT(c, 0x8c8c7u);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Au)), (c.r[0] & 0xFFFFu));
    // 08c8cd  push 0x34a94
    X86_AT(c, 0x8c8cdu);
    { uint32_t v = 0x34A94u; push32(c, v); }
    // 08c8d2  push 0x34494
    X86_AT(c, 0x8c8d2u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c8d7  call 0x83d
    X86_AT(c, 0x8c8d7u);
    push32(c, 0x8c8dcu); x86_call_known(c, 0x83du, f_0000083d); X86_RET(c, 0x8c8dcu);
    X86_TICK(c, 17);
    // 08c8dc  movsx eax, word ptr [0x34b9a]
    X86_AT(c, 0x8c8dcu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34B9Au)));
    // 08c8e3  push eax
    X86_AT(c, 0x8c8e3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c8e4  push 0x34494
    X86_AT(c, 0x8c8e4u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c8e9  call 0x245
    X86_AT(c, 0x8c8e9u);
    push32(c, 0x8c8eeu); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8c8eeu);
    X86_TICK(c, 16);
    // 08c8ee  leave 
    X86_AT(c, 0x8c8eeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c8ef  ret 
    X86_AT(c, 0x8c8efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c88cu, "ran off the end of a function");
}
void f_0008c8f0(X86Cpu& c) {
    X86_TICK(c, 19);
    // 08c8f0  push ebp
    X86_AT(c, 0x8c8f0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c8f1  mov ebp, esp
    X86_AT(c, 0x8c8f1u);
    c.r[5] = c.r[4];
    // 08c8f3  push edi
    X86_AT(c, 0x8c8f3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c8f4  mov edi, dword ptr [ebp + 0x18]
    X86_AT(c, 0x8c8f4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 08c8f7  push 0
    X86_AT(c, 0x8c8f7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c8f9  call 0x8c364
    X86_AT(c, 0x8c8f9u);
    push32(c, 0x8c8feu); x86_call_known(c, 0x8c364u, f_0008c364); X86_RET(c, 0x8c8feu);
    X86_TICK(c, 9);
    // 08c8fe  push edi
    X86_AT(c, 0x8c8feu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c8ff  call 0x8c1f4
    X86_AT(c, 0x8c8ffu);
    push32(c, 0x8c904u); x86_call_known(c, 0x8c1f4u, f_0008c1f4); X86_RET(c, 0x8c904u);
    X86_TICK(c, 9);
    // 08c904  push edi
    X86_AT(c, 0x8c904u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c905  call 0x8c224
    X86_AT(c, 0x8c905u);
    push32(c, 0x8c90au); x86_call_known(c, 0x8c224u, f_0008c224); X86_RET(c, 0x8c90au);
    X86_TICK(c, 35);
    // 08c90a  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0x8c90au);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08c90e  mov word ptr [0x34a94], ax
    X86_AT(c, 0x8c90eu);
    wr16((c.sbase[3] + (uint32_t)(0x34A94u)), (c.r[0] & 0xFFFFu));
    // 08c914  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0x8c914u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08c918  mov word ptr [0x34a96], ax
    X86_AT(c, 0x8c918u);
    wr16((c.sbase[3] + (uint32_t)(0x34A96u)), (c.r[0] & 0xFFFFu));
    // 08c91e  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0x8c91eu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 08c922  mov word ptr [0x34a98], ax
    X86_AT(c, 0x8c922u);
    wr16((c.sbase[3] + (uint32_t)(0x34A98u)), (c.r[0] & 0xFFFFu));
    // 08c928  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0x8c928u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 08c92c  mov word ptr [0x34a9a], ax
    X86_AT(c, 0x8c92cu);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Au)), (c.r[0] & 0xFFFFu));
    // 08c932  push 0x34a94
    X86_AT(c, 0x8c932u);
    { uint32_t v = 0x34A94u; push32(c, v); }
    // 08c937  push 0x34494
    X86_AT(c, 0x8c937u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c93c  call 0x83d
    X86_AT(c, 0x8c93cu);
    push32(c, 0x8c941u); x86_call_known(c, 0x83du, f_0000083d); X86_RET(c, 0x8c941u);
    X86_TICK(c, 15);
    // 08c941  movsx eax, word ptr [0x34b98]
    X86_AT(c, 0x8c941u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34B98u)));
    // 08c948  push eax
    X86_AT(c, 0x8c948u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c949  call 0x8c364
    X86_AT(c, 0x8c949u);
    push32(c, 0x8c94eu); x86_call_known(c, 0x8c364u, f_0008c364); X86_RET(c, 0x8c94eu);
    X86_TICK(c, 17);
    // 08c94e  movsx eax, word ptr [0x34b9a]
    X86_AT(c, 0x8c94eu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34B9Au)));
    // 08c955  push eax
    X86_AT(c, 0x8c955u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c956  push 0x34494
    X86_AT(c, 0x8c956u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c95b  call 0x245
    X86_AT(c, 0x8c95bu);
    push32(c, 0x8c960u); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8c960u);
    X86_TICK(c, 22);
    // 08c960  add esp, 0x20
    X86_AT(c, 0x8c960u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 08c963  pop edi
    X86_AT(c, 0x8c963u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08c964  leave 
    X86_AT(c, 0x8c964u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08c965  ret 
    X86_AT(c, 0x8c965u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c8f0u, "ran off the end of a function");
}
void f_0008c968(X86Cpu& c) {
    X86_TICK(c, 33);
    // 08c968  push ebp
    X86_AT(c, 0x8c968u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08c969  mov ebp, esp
    X86_AT(c, 0x8c969u);
    c.r[5] = c.r[4];
    // 08c96b  sub esp, 0x24
    X86_AT(c, 0x8c96bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x24u, 0, 4); }
    // 08c96e  push ebx
    X86_AT(c, 0x8c96eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08c96f  push esi
    X86_AT(c, 0x8c96fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08c970  push edi
    X86_AT(c, 0x8c970u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c971  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8c971u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08c974  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8c974u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08c977  mov ebx, dword ptr [ebp + 0x14]
    X86_AT(c, 0x8c977u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 08c97a  push 9
    X86_AT(c, 0x8c97au);
    { uint32_t v = 0x9u; push32(c, v); }
    // 08c97c  call 0x8c1f4
    X86_AT(c, 0x8c97cu);
    push32(c, 0x8c981u); x86_call_known(c, 0x8c1f4u, f_0008c1f4); X86_RET(c, 0x8c981u);
    X86_TICK(c, 9);
    // 08c981  push 9
    X86_AT(c, 0x8c981u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 08c983  call 0x8c224
    X86_AT(c, 0x8c983u);
    push32(c, 0x8c988u); x86_call_known(c, 0x8c224u, f_0008c224); X86_RET(c, 0x8c988u);
    X86_TICK(c, 14);
    // 08c988  add esp, 8
    X86_AT(c, 0x8c988u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08c98b  cmp dword ptr [ebp + 0x18], 0
    X86_AT(c, 0x8c98bu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0x0u, 0, 4);
    // 08c98f  je 0x8c9a1
    X86_AT(c, 0x8c98fu);
    if (x86_cc(c, 4)) { goto L_8c9a1; }
    X86_TICK(c, 29);
    // 08c991  lea eax, [ebx + esi*1]
    X86_AT(c, 0x8c991u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[6]);
    // 08c994  dec eax
    X86_AT(c, 0x8c994u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08c995  push eax
    X86_AT(c, 0x8c995u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c996  mov eax, edi
    X86_AT(c, 0x8c996u);
    c.r[0] = c.r[7];
    // 08c998  add eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8c998u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 08c99b  dec eax
    X86_AT(c, 0x8c99bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08c99c  push eax
    X86_AT(c, 0x8c99cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c99d  push esi
    X86_AT(c, 0x8c99du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08c99e  push edi
    X86_AT(c, 0x8c99eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08c99f  jmp 0x8c9af
    X86_AT(c, 0x8c99fu);
    goto L_8c9af;
L_8c9a1:
    X86_TICK(c, 8);
    // 08c9a1  push 0x1df
    X86_AT(c, 0x8c9a1u);
    { uint32_t v = 0x1DFu; push32(c, v); }
    // 08c9a6  push 0x27f
    X86_AT(c, 0x8c9a6u);
    { uint32_t v = 0x27Fu; push32(c, v); }
    // 08c9ab  push 0
    X86_AT(c, 0x8c9abu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08c9ad  push 0
    X86_AT(c, 0x8c9adu);
    { uint32_t v = 0x0u; push32(c, v); }
L_8c9af:
    X86_TICK(c, 7);
    // 08c9af  call 0x8c88c
    X86_AT(c, 0x8c9afu);
    push32(c, 0x8c9b4u); x86_call_known(c, 0x8c88cu, f_0008c88c); X86_RET(c, 0x8c9b4u);
    X86_TICK(c, 14);
    // 08c9b4  add esp, 0x10
    X86_AT(c, 0x8c9b4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08c9b7  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x8c9b7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 08c9ba  call 0x8c1f4
    X86_AT(c, 0x8c9bau);
    push32(c, 0x8c9bfu); x86_call_known(c, 0x8c1f4u, f_0008c1f4); X86_RET(c, 0x8c9bfu);
    X86_TICK(c, 12);
    // 08c9bf  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x8c9bfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 08c9c2  call 0x8c224
    X86_AT(c, 0x8c9c2u);
    push32(c, 0x8c9c7u); x86_call_known(c, 0x8c224u, f_0008c224); X86_RET(c, 0x8c9c7u);
    X86_TICK(c, 20);
    // 08c9c7  mov ax, word ptr [0x34b9a]
    X86_AT(c, 0x8c9c7u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x34B9Au))));
    // 08c9cd  or al, 0x20
    X86_AT(c, 0x8c9cdu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 08c9cf  movsx eax, ax
    X86_AT(c, 0x8c9cfu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 08c9d2  push eax
    X86_AT(c, 0x8c9d2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08c9d3  push 0x34494
    X86_AT(c, 0x8c9d3u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08c9d8  call 0x245
    X86_AT(c, 0x8c9d8u);
    push32(c, 0x8c9ddu); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8c9ddu);
    X86_TICK(c, 35);
    // 08c9dd  mov eax, edi
    X86_AT(c, 0x8c9ddu);
    c.r[0] = c.r[7];
    // 08c9df  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x8c9dfu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 08c9e3  add ax, 0xf
    X86_AT(c, 0x8c9e3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xFu, 0, 2)); }
    // 08c9e7  mov word ptr [0x34a94], ax
    X86_AT(c, 0x8c9e7u);
    wr16((c.sbase[3] + (uint32_t)(0x34A94u)), (c.r[0] & 0xFFFFu));
    // 08c9ed  lea eax, [esi + 0x10]
    X86_AT(c, 0x8c9edu);
    c.r[0] = (uint32_t)(c.r[6] + 0x10u);
    // 08c9f0  mov word ptr [0x34a96], ax
    X86_AT(c, 0x8c9f0u);
    wr16((c.sbase[3] + (uint32_t)(0x34A96u)), (c.r[0] & 0xFFFFu));
    // 08c9f6  mov word ptr [0x34a98], 0xfff0
    X86_AT(c, 0x8c9f6u);
    wr16((c.sbase[3] + (uint32_t)(0x34A98u)), 0xFFF0u);
    // 08c9ff  mov word ptr [0x34a9a], 0xfff0
    X86_AT(c, 0x8c9ffu);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Au)), 0xFFF0u);
    // 08ca08  mov word ptr [0x34a9c], 0xfff0
    X86_AT(c, 0x8ca08u);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Cu)), 0xFFF0u);
    // 08ca11  mov word ptr [0x34a9e], 0xfff0
    X86_AT(c, 0x8ca11u);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Eu)), 0xFFF0u);
    // 08ca1a  mov word ptr [0x34aa0], 0x10
    X86_AT(c, 0x8ca1au);
    wr16((c.sbase[3] + (uint32_t)(0x34AA0u)), 0x10u);
    // 08ca23  push 0x34a94
    X86_AT(c, 0x8ca23u);
    { uint32_t v = 0x34A94u; push32(c, v); }
    // 08ca28  push 0x34494
    X86_AT(c, 0x8ca28u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08ca2d  mov word ptr [ebp - 8], ax
    X86_AT(c, 0x8ca2du);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[0] & 0xFFFFu));
    // 08ca31  call 0x8a9
    X86_AT(c, 0x8ca31u);
    push32(c, 0x8ca36u); x86_call_known(c, 0x8a9u, f_000008a9); X86_RET(c, 0x8ca36u);
    X86_TICK(c, 9);
    // 08ca36  push 0xf
    X86_AT(c, 0x8ca36u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08ca38  call 0x8c1f4
    X86_AT(c, 0x8ca38u);
    push32(c, 0x8ca3du); x86_call_known(c, 0x8c1f4u, f_0008c1f4); X86_RET(c, 0x8ca3du);
    X86_TICK(c, 11);
    // 08ca3d  push 0x34a94
    X86_AT(c, 0x8ca3du);
    { uint32_t v = 0x34A94u; push32(c, v); }
    // 08ca42  push 0x34494
    X86_AT(c, 0x8ca42u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08ca47  call 0x885
    X86_AT(c, 0x8ca47u);
    push32(c, 0x8ca4cu); x86_call_known(c, 0x885u, f_00000885); X86_RET(c, 0x8ca4cu);
    X86_TICK(c, 12);
    // 08ca4c  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x8ca4cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 08ca4f  call 0x8c1f4
    X86_AT(c, 0x8ca4fu);
    push32(c, 0x8ca54u); x86_call_known(c, 0x8c1f4u, f_0008c1f4); X86_RET(c, 0x8ca54u);
    X86_TICK(c, 41);
    // 08ca54  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0x8ca54u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 08ca58  add ax, word ptr [ebp + 0x10]
    X86_AT(c, 0x8ca58u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 2)); }
    // 08ca5c  sub ax, 0x10
    X86_AT(c, 0x8ca5cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x10u, 0, 2)); }
    // 08ca60  mov word ptr [0x34a94], ax
    X86_AT(c, 0x8ca60u);
    wr16((c.sbase[3] + (uint32_t)(0x34A94u)), (c.r[0] & 0xFFFFu));
    // 08ca66  mov ax, word ptr [ebp - 8]
    X86_AT(c, 0x8ca66u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 08ca6a  mov word ptr [0x34a96], ax
    X86_AT(c, 0x8ca6au);
    wr16((c.sbase[3] + (uint32_t)(0x34A96u)), (c.r[0] & 0xFFFFu));
    // 08ca70  sub eax, eax
    X86_AT(c, 0x8ca70u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08ca72  mov word ptr [0x34a98], ax
    X86_AT(c, 0x8ca72u);
    wr16((c.sbase[3] + (uint32_t)(0x34A98u)), (c.r[0] & 0xFFFFu));
    // 08ca78  mov word ptr [0x34a9a], 0xfff0
    X86_AT(c, 0x8ca78u);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Au)), 0xFFF0u);
    // 08ca81  mov word ptr [0x34a9c], 0x10
    X86_AT(c, 0x8ca81u);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Cu)), 0x10u);
    // 08ca8a  mov word ptr [0x34a9e], ax
    X86_AT(c, 0x8ca8au);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Eu)), (c.r[0] & 0xFFFFu));
    // 08ca90  push 0x34a94
    X86_AT(c, 0x8ca90u);
    { uint32_t v = 0x34A94u; push32(c, v); }
    // 08ca95  push 0x34494
    X86_AT(c, 0x8ca95u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08ca9a  call 0x8a9
    X86_AT(c, 0x8ca9au);
    push32(c, 0x8ca9fu); x86_call_known(c, 0x8a9u, f_000008a9); X86_RET(c, 0x8ca9fu);
    X86_TICK(c, 9);
    // 08ca9f  push 0xf
    X86_AT(c, 0x8ca9fu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08caa1  call 0x8c1f4
    X86_AT(c, 0x8caa1u);
    push32(c, 0x8caa6u); x86_call_known(c, 0x8c1f4u, f_0008c1f4); X86_RET(c, 0x8caa6u);
    X86_TICK(c, 11);
    // 08caa6  push 0x34a94
    X86_AT(c, 0x8caa6u);
    { uint32_t v = 0x34A94u; push32(c, v); }
    // 08caab  push 0x34494
    X86_AT(c, 0x8caabu);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08cab0  call 0x885
    X86_AT(c, 0x8cab0u);
    push32(c, 0x8cab5u); x86_call_known(c, 0x885u, f_00000885); X86_RET(c, 0x8cab5u);
    X86_TICK(c, 14);
    // 08cab5  add esp, 0x3c
    X86_AT(c, 0x8cab5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 08cab8  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x8cab8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 08cabb  call 0x8c1f4
    X86_AT(c, 0x8cabbu);
    push32(c, 0x8cac0u); x86_call_known(c, 0x8c1f4u, f_0008c1f4); X86_RET(c, 0x8cac0u);
    X86_TICK(c, 47);
    // 08cac0  mov eax, edi
    X86_AT(c, 0x8cac0u);
    c.r[0] = c.r[7];
    // 08cac2  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x8cac2u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 08cac6  add ax, word ptr [ebp + 0x10]
    X86_AT(c, 0x8cac6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 2)); }
    // 08caca  sub ax, 0x10
    X86_AT(c, 0x8cacau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x10u, 0, 2)); }
    // 08cace  mov word ptr [0x34a94], ax
    X86_AT(c, 0x8caceu);
    wr16((c.sbase[3] + (uint32_t)(0x34A94u)), (c.r[0] & 0xFFFFu));
    // 08cad4  mov eax, esi
    X86_AT(c, 0x8cad4u);
    c.r[0] = c.r[6];
    // 08cad6  lea edx, [ebx + eax*1]
    X86_AT(c, 0x8cad6u);
    c.r[2] = (uint32_t)(c.r[3] + c.r[0]);
    // 08cad9  sub dx, 0x11
    X86_AT(c, 0x8cad9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x11u, 0, 2)); }
    // 08cadd  mov word ptr [0x34a96], dx
    X86_AT(c, 0x8caddu);
    wr16((c.sbase[3] + (uint32_t)(0x34A96u)), (c.r[2] & 0xFFFFu));
    // 08cae4  mov word ptr [0x34a98], 0x10
    X86_AT(c, 0x8cae4u);
    wr16((c.sbase[3] + (uint32_t)(0x34A98u)), 0x10u);
    // 08caed  mov word ptr [0x34a9a], 0
    X86_AT(c, 0x8caedu);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Au)), 0x0u);
    // 08caf6  mov word ptr [0x34a9c], 0
    X86_AT(c, 0x8caf6u);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Cu)), 0x0u);
    // 08caff  mov word ptr [0x34a9e], 0x10
    X86_AT(c, 0x8caffu);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Eu)), 0x10u);
    // 08cb08  push 0x34a94
    X86_AT(c, 0x8cb08u);
    { uint32_t v = 0x34A94u; push32(c, v); }
    // 08cb0d  mov eax, 0x34490
    X86_AT(c, 0x8cb0du);
    c.r[0] = 0x34490u;
    // 08cb12  add eax, 4
    X86_AT(c, 0x8cb12u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 08cb15  push eax
    X86_AT(c, 0x8cb15u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cb16  mov word ptr [ebp - 8], dx
    X86_AT(c, 0x8cb16u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[2] & 0xFFFFu));
    // 08cb1a  call 0x8a9
    X86_AT(c, 0x8cb1au);
    push32(c, 0x8cb1fu); x86_call_known(c, 0x8a9u, f_000008a9); X86_RET(c, 0x8cb1fu);
    X86_TICK(c, 9);
    // 08cb1f  push 0xf
    X86_AT(c, 0x8cb1fu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08cb21  call 0x8c1f4
    X86_AT(c, 0x8cb21u);
    push32(c, 0x8cb26u); x86_call_known(c, 0x8c1f4u, f_0008c1f4); X86_RET(c, 0x8cb26u);
    X86_TICK(c, 13);
    // 08cb26  push 0x34a94
    X86_AT(c, 0x8cb26u);
    { uint32_t v = 0x34A94u; push32(c, v); }
    // 08cb2b  mov eax, 0x34494
    X86_AT(c, 0x8cb2bu);
    c.r[0] = 0x34494u;
    // 08cb30  push eax
    X86_AT(c, 0x8cb30u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cb31  call 0x885
    X86_AT(c, 0x8cb31u);
    push32(c, 0x8cb36u); x86_call_known(c, 0x885u, f_00000885); X86_RET(c, 0x8cb36u);
    X86_TICK(c, 12);
    // 08cb36  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x8cb36u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 08cb39  call 0x8c1f4
    X86_AT(c, 0x8cb39u);
    push32(c, 0x8cb3eu); x86_call_known(c, 0x8c1f4u, f_0008c1f4); X86_RET(c, 0x8cb3eu);
    X86_TICK(c, 35);
    // 08cb3e  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0x8cb3eu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 08cb42  add ax, 0xf
    X86_AT(c, 0x8cb42u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xFu, 0, 2)); }
    // 08cb46  mov word ptr [0x34a94], ax
    X86_AT(c, 0x8cb46u);
    wr16((c.sbase[3] + (uint32_t)(0x34A94u)), (c.r[0] & 0xFFFFu));
    // 08cb4c  mov ax, word ptr [ebp - 8]
    X86_AT(c, 0x8cb4cu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 08cb50  mov word ptr [0x34a96], ax
    X86_AT(c, 0x8cb50u);
    wr16((c.sbase[3] + (uint32_t)(0x34A96u)), (c.r[0] & 0xFFFFu));
    // 08cb56  mov word ptr [0x34a98], 0
    X86_AT(c, 0x8cb56u);
    wr16((c.sbase[3] + (uint32_t)(0x34A98u)), 0x0u);
    // 08cb5f  mov word ptr [0x34a9a], 0x10
    X86_AT(c, 0x8cb5fu);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Au)), 0x10u);
    // 08cb68  mov word ptr [0x34a9c], 0xfff0
    X86_AT(c, 0x8cb68u);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Cu)), 0xFFF0u);
    // 08cb71  mov word ptr [0x34a9e], 0
    X86_AT(c, 0x8cb71u);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Eu)), 0x0u);
    // 08cb7a  push 0x34a94
    X86_AT(c, 0x8cb7au);
    { uint32_t v = 0x34A94u; push32(c, v); }
    // 08cb7f  mov eax, 0x34494
    X86_AT(c, 0x8cb7fu);
    c.r[0] = 0x34494u;
    // 08cb84  push eax
    X86_AT(c, 0x8cb84u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cb85  call 0x8a9
    X86_AT(c, 0x8cb85u);
    push32(c, 0x8cb8au); x86_call_known(c, 0x8a9u, f_000008a9); X86_RET(c, 0x8cb8au);
    X86_TICK(c, 9);
    // 08cb8a  push 0xf
    X86_AT(c, 0x8cb8au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08cb8c  call 0x8c1f4
    X86_AT(c, 0x8cb8cu);
    push32(c, 0x8cb91u); x86_call_known(c, 0x8c1f4u, f_0008c1f4); X86_RET(c, 0x8cb91u);
    X86_TICK(c, 13);
    // 08cb91  push 0x34a94
    X86_AT(c, 0x8cb91u);
    { uint32_t v = 0x34A94u; push32(c, v); }
    // 08cb96  mov eax, 0x34494
    X86_AT(c, 0x8cb96u);
    c.r[0] = 0x34494u;
    // 08cb9b  push eax
    X86_AT(c, 0x8cb9bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cb9c  call 0x885
    X86_AT(c, 0x8cb9cu);
    push32(c, 0x8cba1u); x86_call_known(c, 0x885u, f_00000885); X86_RET(c, 0x8cba1u);
    X86_TICK(c, 12);
    // 08cba1  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x8cba1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 08cba4  call 0x8c1f4
    X86_AT(c, 0x8cba4u);
    push32(c, 0x8cba9u); x86_call_known(c, 0x8c1f4u, f_0008c1f4); X86_RET(c, 0x8cba9u);
    X86_TICK(c, 29);
    // 08cba9  lea eax, [esi + 0xf]
    X86_AT(c, 0x8cba9u);
    c.r[0] = (uint32_t)(c.r[6] + 0xFu);
    // 08cbac  push eax
    X86_AT(c, 0x8cbacu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cbad  mov eax, edi
    X86_AT(c, 0x8cbadu);
    c.r[0] = c.r[7];
    // 08cbaf  add eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8cbafu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 08cbb2  sub eax, 0x11
    X86_AT(c, 0x8cbb2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x11u, 0, 4); }
    // 08cbb5  push eax
    X86_AT(c, 0x8cbb5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cbb6  push esi
    X86_AT(c, 0x8cbb6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08cbb7  lea eax, [edi + 0x10]
    X86_AT(c, 0x8cbb7u);
    c.r[0] = (uint32_t)(c.r[7] + 0x10u);
    // 08cbba  push eax
    X86_AT(c, 0x8cbbau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cbbb  call 0x8c88c
    X86_AT(c, 0x8cbbbu);
    push32(c, 0x8cbc0u); x86_call_known(c, 0x8c88cu, f_0008c88c); X86_RET(c, 0x8cbc0u);
    X86_TICK(c, 41);
    // 08cbc0  add esp, 0x44
    X86_AT(c, 0x8cbc0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 08cbc3  lea eax, [ebx + esi*1]
    X86_AT(c, 0x8cbc3u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[6]);
    // 08cbc6  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x8cbc6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 08cbc9  sub eax, 0x11
    X86_AT(c, 0x8cbc9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x11u, 0, 4); }
    // 08cbcc  push eax
    X86_AT(c, 0x8cbccu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cbcd  mov edx, edi
    X86_AT(c, 0x8cbcdu);
    c.r[2] = c.r[7];
    // 08cbcf  add edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8cbcfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 08cbd2  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0x8cbd2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 08cbd5  dec edx
    X86_AT(c, 0x8cbd5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 08cbd6  push edx
    X86_AT(c, 0x8cbd6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08cbd7  lea ecx, [esi + 0x10]
    X86_AT(c, 0x8cbd7u);
    c.r[1] = (uint32_t)(c.r[6] + 0x10u);
    // 08cbda  push ecx
    X86_AT(c, 0x8cbdau);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 08cbdb  push edi
    X86_AT(c, 0x8cbdbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08cbdc  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x8cbdcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 08cbdf  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0x8cbdfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 08cbe2  call 0x8c88c
    X86_AT(c, 0x8cbe2u);
    push32(c, 0x8cbe7u); x86_call_known(c, 0x8c88cu, f_0008c88c); X86_RET(c, 0x8cbe7u);
    X86_TICK(c, 38);
    // 08cbe7  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x8cbe7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 08cbea  dec eax
    X86_AT(c, 0x8cbeau);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08cbeb  push eax
    X86_AT(c, 0x8cbebu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cbec  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0x8cbecu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 08cbef  sub edx, 0x11
    X86_AT(c, 0x8cbefu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x11u, 0, 4); }
    // 08cbf2  push edx
    X86_AT(c, 0x8cbf2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08cbf3  push dword ptr [ebp - 0xc]
    X86_AT(c, 0x8cbf3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 08cbf6  lea ecx, [edi + 0x10]
    X86_AT(c, 0x8cbf6u);
    c.r[1] = (uint32_t)(c.r[7] + 0x10u);
    // 08cbf9  push ecx
    X86_AT(c, 0x8cbf9u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 08cbfa  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x8cbfau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 08cbfd  mov dword ptr [ebp - 0x18], ecx
    X86_AT(c, 0x8cbfdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[1]);
    // 08cc00  mov dword ptr [ebp - 0x1c], edx
    X86_AT(c, 0x8cc00u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[2]);
    // 08cc03  call 0x8c88c
    X86_AT(c, 0x8cc03u);
    push32(c, 0x8cc08u); x86_call_known(c, 0x8c88cu, f_0008c88c); X86_RET(c, 0x8cc08u);
    X86_TICK(c, 9);
    // 08cc08  push 0xf
    X86_AT(c, 0x8cc08u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08cc0a  call 0x8c1f4
    X86_AT(c, 0x8cc0au);
    push32(c, 0x8cc0fu); x86_call_known(c, 0x8c1f4u, f_0008c1f4); X86_RET(c, 0x8cc0fu);
    X86_TICK(c, 21);
    // 08cc0f  push esi
    X86_AT(c, 0x8cc0fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08cc10  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0x8cc10u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 08cc13  push esi
    X86_AT(c, 0x8cc13u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08cc14  push dword ptr [ebp - 0x18]
    X86_AT(c, 0x8cc14u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))); push32(c, v); }
    // 08cc17  call 0x8c76c
    X86_AT(c, 0x8cc17u);
    push32(c, 0x8cc1cu); x86_call_known(c, 0x8c76cu, f_0008c76c); X86_RET(c, 0x8cc1cu);
    X86_TICK(c, 33);
    // 08cc1c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x8cc1cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 08cc1f  sub eax, 0xe
    X86_AT(c, 0x8cc1fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xEu, 0, 4); }
    // 08cc22  push eax
    X86_AT(c, 0x8cc22u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cc23  push dword ptr [ebp - 0x10]
    X86_AT(c, 0x8cc23u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 08cc26  lea edx, [esi + 0xd]
    X86_AT(c, 0x8cc26u);
    c.r[2] = (uint32_t)(c.r[6] + 0xDu);
    // 08cc29  push edx
    X86_AT(c, 0x8cc29u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08cc2a  push dword ptr [ebp - 0x10]
    X86_AT(c, 0x8cc2au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 08cc2d  mov dword ptr [ebp - 0x20], eax
    X86_AT(c, 0x8cc2du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[0]);
    // 08cc30  mov dword ptr [ebp - 0x24], edx
    X86_AT(c, 0x8cc30u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), c.r[2]);
    // 08cc33  call 0x8c76c
    X86_AT(c, 0x8cc33u);
    push32(c, 0x8cc38u); x86_call_known(c, 0x8c76cu, f_0008c76c); X86_RET(c, 0x8cc38u);
    X86_TICK(c, 29);
    // 08cc38  add esp, 0x44
    X86_AT(c, 0x8cc38u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 08cc3b  push dword ptr [ebp - 0x14]
    X86_AT(c, 0x8cc3bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 08cc3e  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0x8cc3eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 08cc41  push dword ptr [ebp - 0x14]
    X86_AT(c, 0x8cc41u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 08cc44  push dword ptr [ebp - 0x18]
    X86_AT(c, 0x8cc44u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))); push32(c, v); }
    // 08cc47  call 0x8c76c
    X86_AT(c, 0x8cc47u);
    push32(c, 0x8cc4cu); x86_call_known(c, 0x8c76cu, f_0008c76c); X86_RET(c, 0x8cc4cu);
    X86_TICK(c, 21);
    // 08cc4c  push dword ptr [ebp - 0x20]
    X86_AT(c, 0x8cc4cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))); push32(c, v); }
    // 08cc4f  push edi
    X86_AT(c, 0x8cc4fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08cc50  push dword ptr [ebp - 0x24]
    X86_AT(c, 0x8cc50u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))); push32(c, v); }
    // 08cc53  push edi
    X86_AT(c, 0x8cc53u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08cc54  call 0x8c76c
    X86_AT(c, 0x8cc54u);
    push32(c, 0x8cc59u); x86_call_known(c, 0x8c76cu, f_0008c76c); X86_RET(c, 0x8cc59u);
    X86_TICK(c, 14);
    // 08cc59  add esp, 0x20
    X86_AT(c, 0x8cc59u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 08cc5c  cmp dword ptr [ebp + 0x18], 0
    X86_AT(c, 0x8cc5cu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0x0u, 0, 4);
    // 08cc60  je 0x8cc66
    X86_AT(c, 0x8cc60u);
    if (x86_cc(c, 4)) { goto L_8cc66; }
    X86_TICK(c, 9);
    // 08cc62  push 0xf
    X86_AT(c, 0x8cc62u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08cc64  jmp 0x8cc68
    X86_AT(c, 0x8cc64u);
    goto L_8cc68;
L_8cc66:
    X86_TICK(c, 2);
    // 08cc66  push 0
    X86_AT(c, 0x8cc66u);
    { uint32_t v = 0x0u; push32(c, v); }
L_8cc68:
    X86_TICK(c, 7);
    // 08cc68  call 0x8c1f4
    X86_AT(c, 0x8cc68u);
    push32(c, 0x8cc6du); x86_call_known(c, 0x8c1f4u, f_0008c1f4); X86_RET(c, 0x8cc6du);
    X86_TICK(c, 11);
    // 08cc6d  add esp, 4
    X86_AT(c, 0x8cc6du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08cc70  push 0
    X86_AT(c, 0x8cc70u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08cc72  call 0x8c224
    X86_AT(c, 0x8cc72u);
    push32(c, 0x8cc77u); x86_call_known(c, 0x8c224u, f_0008c224); X86_RET(c, 0x8cc77u);
    X86_TICK(c, 15);
    // 08cc77  push 0x18e
    X86_AT(c, 0x8cc77u);
    { uint32_t v = 0x18Eu; push32(c, v); }
    // 08cc7c  push 0x169
    X86_AT(c, 0x8cc7cu);
    { uint32_t v = 0x169u; push32(c, v); }
    // 08cc81  push 0x2f
    X86_AT(c, 0x8cc81u);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 08cc83  push 0xa
    X86_AT(c, 0x8cc83u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 08cc85  call 0x8c88c
    X86_AT(c, 0x8cc85u);
    push32(c, 0x8cc8au); x86_call_known(c, 0x8c88cu, f_0008c88c); X86_RET(c, 0x8cc8au);
    X86_TICK(c, 9);
    // 08cc8a  push 0xf
    X86_AT(c, 0x8cc8au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08cc8c  call 0x8c1f4
    X86_AT(c, 0x8cc8cu);
    push32(c, 0x8cc91u); x86_call_known(c, 0x8c1f4u, f_0008c1f4); X86_RET(c, 0x8cc91u);
    X86_TICK(c, 17);
    // 08cc91  movsx eax, word ptr [0x34b9a]
    X86_AT(c, 0x8cc91u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34B9Au)));
    // 08cc98  push eax
    X86_AT(c, 0x8cc98u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cc99  push 0x34494
    X86_AT(c, 0x8cc99u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08cc9e  call 0x245
    X86_AT(c, 0x8cc9eu);
    push32(c, 0x8cca3u); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8cca3u);
    X86_TICK(c, 30);
    // 08cca3  add esp, 0x20
    X86_AT(c, 0x8cca3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 08cca6  pop edi
    X86_AT(c, 0x8cca6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08cca7  pop esi
    X86_AT(c, 0x8cca7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08cca8  pop ebx
    X86_AT(c, 0x8cca8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08cca9  leave 
    X86_AT(c, 0x8cca9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08ccaa  ret 
    X86_AT(c, 0x8ccaau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c968u, "ran off the end of a function");
}
void f_0008cd20(X86Cpu& c) {
    X86_TICK(c, 69);
    // 08cd20  push ebp
    X86_AT(c, 0x8cd20u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08cd21  mov ebp, esp
    X86_AT(c, 0x8cd21u);
    c.r[5] = c.r[4];
    // 08cd23  push esi
    X86_AT(c, 0x8cd23u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08cd24  push edi
    X86_AT(c, 0x8cd24u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08cd25  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8cd25u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08cd28  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8cd28u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08cd2b  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8cd2bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08cd2e  mov dword ptr [0x34a94], eax
    X86_AT(c, 0x8cd2eu);
    wr32((c.sbase[3] + (uint32_t)(0x34A94u)), c.r[0]);
    // 08cd33  mov word ptr [0x34a98], 0x14
    X86_AT(c, 0x8cd33u);
    wr16((c.sbase[3] + (uint32_t)(0x34A98u)), 0x14u);
    // 08cd3c  mov eax, edi
    X86_AT(c, 0x8cd3cu);
    c.r[0] = c.r[7];
    // 08cd3e  mov word ptr [0x34a9a], ax
    X86_AT(c, 0x8cd3eu);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Au)), (c.r[0] & 0xFFFFu));
    // 08cd44  mov eax, esi
    X86_AT(c, 0x8cd44u);
    c.r[0] = c.r[6];
    // 08cd46  mov word ptr [0x34a9c], ax
    X86_AT(c, 0x8cd46u);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Cu)), (c.r[0] & 0xFFFFu));
    // 08cd4c  mov eax, edi
    X86_AT(c, 0x8cd4cu);
    c.r[0] = c.r[7];
    // 08cd4e  add ax, word ptr [ebp + 0x14]
    X86_AT(c, 0x8cd4eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0, 2)); }
    // 08cd52  dec eax
    X86_AT(c, 0x8cd52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08cd53  mov word ptr [0x34a9e], ax
    X86_AT(c, 0x8cd53u);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Eu)), (c.r[0] & 0xFFFFu));
    // 08cd59  mov eax, esi
    X86_AT(c, 0x8cd59u);
    c.r[0] = c.r[6];
    // 08cd5b  add ax, word ptr [ebp + 0x18]
    X86_AT(c, 0x8cd5bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0, 2)); }
    // 08cd5f  dec eax
    X86_AT(c, 0x8cd5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08cd60  mov word ptr [0x34aa0], ax
    X86_AT(c, 0x8cd60u);
    wr16((c.sbase[3] + (uint32_t)(0x34AA0u)), (c.r[0] & 0xFFFFu));
    // 08cd66  push 0x34a94
    X86_AT(c, 0x8cd66u);
    { uint32_t v = 0x34A94u; push32(c, v); }
    // 08cd6b  push 0
    X86_AT(c, 0x8cd6bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08cd6d  push 0x34494
    X86_AT(c, 0x8cd6du);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08cd72  call 0x544
    X86_AT(c, 0x8cd72u);
    push32(c, 0x8cd77u); x86_call_known(c, 0x544u, f_00000544); X86_RET(c, 0x8cd77u);
    X86_TICK(c, 26);
    // 08cd77  add esp, 0xc
    X86_AT(c, 0x8cd77u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 08cd7a  pop edi
    X86_AT(c, 0x8cd7au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08cd7b  pop esi
    X86_AT(c, 0x8cd7bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08cd7c  leave 
    X86_AT(c, 0x8cd7cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08cd7d  ret 
    X86_AT(c, 0x8cd7du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8cd20u, "ran off the end of a function");
}
void f_0008ce94(X86Cpu& c) {
    X86_TICK(c, 34);
    // 08ce94  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x8ce94u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 08ce98  mov eax, dword ptr [ecx + 0x1e]
    X86_AT(c, 0x8ce98u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x1Eu)));
    // 08ce9b  mov edx, dword ptr [esp + 8]
    X86_AT(c, 0x8ce9bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 08ce9f  mov dword ptr [edx], eax
    X86_AT(c, 0x8ce9fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 08cea1  mov eax, dword ptr [ecx + 0x2a]
    X86_AT(c, 0x8cea1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x2Au)));
    // 08cea4  mov edx, dword ptr [esp + 0xc]
    X86_AT(c, 0x8cea4u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 08cea8  mov dword ptr [edx], eax
    X86_AT(c, 0x8cea8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 08ceaa  ret 
    X86_AT(c, 0x8ceaau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ce94u, "ran off the end of a function");
}
void f_0008ceac(X86Cpu& c) {
    X86_TICK(c, 26);
    // 08ceac  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x8ceacu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 08ceb0  mov ax, word ptr [esp + 8]
    X86_AT(c, 0x8ceb0u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u))));
    // 08ceb5  mov word ptr [ecx + 0x1e], ax
    X86_AT(c, 0x8ceb5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1] + 0x1Eu)), (c.r[0] & 0xFFFFu));
    // 08ceb9  mov ax, word ptr [esp + 0xc]
    X86_AT(c, 0x8ceb9u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu))));
    // 08cebe  mov word ptr [ecx + 0x2a], ax
    X86_AT(c, 0x8cebeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[1] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 08cec2  ret 
    X86_AT(c, 0x8cec2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ceacu, "ran off the end of a function");
}
void f_0008cec4(X86Cpu& c) {
    X86_TICK(c, 20);
    // 08cec4  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x8cec4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 08cec8  movsx eax, word ptr [eax + 0x36]
    X86_AT(c, 0x8cec8u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x36u)));
    // 08cecc  ret 
    X86_AT(c, 0x8ceccu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8cec4u, "ran off the end of a function");
}
void f_0008ced0(X86Cpu& c) {
    X86_TICK(c, 25);
    // 08ced0  push ebp
    X86_AT(c, 0x8ced0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08ced1  mov ebp, esp
    X86_AT(c, 0x8ced1u);
    c.r[5] = c.r[4];
    // 08ced3  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x8ced3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 08ced6  push 2
    X86_AT(c, 0x8ced6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08ced8  push 0x100
    X86_AT(c, 0x8ced8u);
    { uint32_t v = 0x100u; push32(c, v); }
    // 08cedd  push dword ptr [ebp + 8]
    X86_AT(c, 0x8ceddu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08cee0  call 0x921a0
    X86_AT(c, 0x8cee0u);
    push32(c, 0x8cee5u); x86_call_known(c, 0x921a0u, f_000921a0); X86_RET(c, 0x8cee5u);
    X86_TICK(c, 9);
    // 08cee5  add esp, 0x10
    X86_AT(c, 0x8cee5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08cee8  cmp eax, 2
    X86_AT(c, 0x8cee8u);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 08ceeb  jge 0x8cef4
    X86_AT(c, 0x8ceebu);
    if (x86_cc(c, 13)) { goto L_8cef4; }
    X86_TICK(c, 9);
    // 08ceed  mov eax, 0xffffffff
    X86_AT(c, 0x8ceedu);
    c.r[0] = 0xFFFFFFFFu;
    // 08cef2  jmp 0x8cef6
    X86_AT(c, 0x8cef2u);
    goto L_8cef6;
L_8cef4:
    X86_TICK(c, 2);
    // 08cef4  sub eax, eax
    X86_AT(c, 0x8cef4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8cef6:
    X86_TICK(c, 16);
    // 08cef6  leave 
    X86_AT(c, 0x8cef6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08cef7  ret 
    X86_AT(c, 0x8cef7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ced0u, "ran off the end of a function");
}
void f_0008cef8(X86Cpu& c) {
    X86_TICK(c, 26);
    // 08cef8  push ebp
    X86_AT(c, 0x8cef8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08cef9  mov ebp, esp
    X86_AT(c, 0x8cef9u);
    c.r[5] = c.r[4];
    // 08cefb  sub esp, 0x204
    X86_AT(c, 0x8cefbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x204u, 0, 4); }
    // 08cf01  push ebx
    X86_AT(c, 0x8cf01u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08cf02  push esi
    X86_AT(c, 0x8cf02u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08cf03  push edi
    X86_AT(c, 0x8cf03u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08cf04  push 0x1248
    X86_AT(c, 0x8cf04u);
    { uint32_t v = 0x1248u; push32(c, v); }
    // 08cf09  push dword ptr [ebp + 8]
    X86_AT(c, 0x8cf09u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08cf0c  call 0x9247c
    X86_AT(c, 0x8cf0cu);
    push32(c, 0x8cf11u); x86_call_known(c, 0x9247cu, f_0009247c); X86_RET(c, 0x8cf11u);
    X86_TICK(c, 12);
    // 08cf11  add esp, 8
    X86_AT(c, 0x8cf11u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08cf14  xchg ebx, eax
    X86_AT(c, 0x8cf14u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 08cf15  and ebx, ebx
    X86_AT(c, 0x8cf15u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 08cf17  jne 0x8cf23
    X86_AT(c, 0x8cf17u);
    if (x86_cc(c, 5)) { goto L_8cf23; }
    X86_TICK(c, 9);
    // 08cf19  mov eax, 0xffffffff
    X86_AT(c, 0x8cf19u);
    c.r[0] = 0xFFFFFFFFu;
    // 08cf1e  jmp 0x8cfed
    X86_AT(c, 0x8cf1eu);
    goto L_8cfed;
L_8cf23:
    X86_TICK(c, 13);
    // 08cf23  push ebx
    X86_AT(c, 0x8cf23u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08cf24  lea eax, [ebp - 0x200]
    X86_AT(c, 0x8cf24u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFE00u);
    // 08cf2a  push eax
    X86_AT(c, 0x8cf2au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cf2b  call 0x8ced0
    X86_AT(c, 0x8cf2bu);
    push32(c, 0x8cf30u); x86_call_known(c, 0x8ced0u, f_0008ced0); X86_RET(c, 0x8cf30u);
    X86_TICK(c, 9);
    // 08cf30  add esp, 8
    X86_AT(c, 0x8cf30u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08cf33  inc eax
    X86_AT(c, 0x8cf33u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 08cf34  je 0x8cfd5
    X86_AT(c, 0x8cf34u);
    if (x86_cc(c, 4)) { goto L_8cfd5; }
    X86_TICK(c, 21);
    // 08cf3a  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x8cf3au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 08cf3d  push dword ptr [ebp + 0x14]
    X86_AT(c, 0x8cf3du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))); push32(c, v); }
    // 08cf40  lea eax, [ebp - 0x200]
    X86_AT(c, 0x8cf40u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFE00u);
    // 08cf46  push eax
    X86_AT(c, 0x8cf46u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cf47  call 0x8ce94
    X86_AT(c, 0x8cf47u);
    push32(c, 0x8cf4cu); x86_call_known(c, 0x8ce94u, f_0008ce94); X86_RET(c, 0x8cf4cu);
    X86_TICK(c, 11);
    // 08cf4c  lea eax, [ebp - 0x200]
    X86_AT(c, 0x8cf4cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFE00u);
    // 08cf52  push eax
    X86_AT(c, 0x8cf52u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cf53  call 0x8cec4
    X86_AT(c, 0x8cf53u);
    push32(c, 0x8cf58u); x86_call_known(c, 0x8cec4u, f_0008cec4); X86_RET(c, 0x8cf58u);
    X86_TICK(c, 21);
    // 08cf58  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x8cf58u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 08cf5b  mov dword ptr [edx], eax
    X86_AT(c, 0x8cf5bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 08cf5d  movzx eax, byte ptr [ebx + 0xe]
    X86_AT(c, 0x8cf5du);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu)));
    // 08cf61  push eax
    X86_AT(c, 0x8cf61u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cf62  call 0x9358f
    X86_AT(c, 0x8cf62u);
    push32(c, 0x8cf67u); x86_call_known(c, 0x9358fu, f_0009358f); X86_RET(c, 0x8cf67u);
    X86_TICK(c, 14);
    // 08cf67  xchg edi, eax
    X86_AT(c, 0x8cf67u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 08cf68  sub edi, 0x200
    X86_AT(c, 0x8cf68u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0x200u, 0, 4); }
    // 08cf6e  add esp, 0x14
    X86_AT(c, 0x8cf6eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 08cf71  cmp edi, 1
    X86_AT(c, 0x8cf71u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 08cf74  jl 0x8cfd5
    X86_AT(c, 0x8cf74u);
    if (x86_cc(c, 12)) { goto L_8cfd5; }
    X86_TICK(c, 11);
    // 08cf76  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8cf76u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08cf79  cmp edi, eax
    X86_AT(c, 0x8cf79u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 08cf7b  jle 0x8cf7e
    X86_AT(c, 0x8cf7bu);
    if (x86_cc(c, 14)) { goto L_8cf7e; }
    X86_TICK(c, 3);
    // 08cf7d  xchg edi, eax
    X86_AT(c, 0x8cf7du);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_8cf7e:
    X86_TICK(c, 7);
    // 08cf7e  cmp edi, 0x280
    X86_AT(c, 0x8cf7eu);
    (void)x86_sub(c, c.r[7], 0x280u, 0, 4);
    // 08cf84  jle 0x8cfac
    X86_AT(c, 0x8cf84u);
    if (x86_cc(c, 14)) { goto L_8cfac; }
    X86_TICK(c, 66);
    // 08cf86  push ebx
    X86_AT(c, 0x8cf86u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08cf87  mov eax, edi
    X86_AT(c, 0x8cf87u);
    c.r[0] = c.r[7];
    // 08cf89  cdq 
    X86_AT(c, 0x8cf89u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08cf8a  mov ecx, 0x280
    X86_AT(c, 0x8cf8au);
    c.r[1] = 0x280u;
    // 08cf8f  idiv ecx
    X86_AT(c, 0x8cf8fu);
    x86_idiv(c, c.r[1], 4, 0x8cf8fu);
    // 08cf91  push eax
    X86_AT(c, 0x8cf91u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cf92  push ecx
    X86_AT(c, 0x8cf92u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 08cf93  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x8cf93u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 08cf96  mov dword ptr [ebp - 0x204], eax
    X86_AT(c, 0x8cf96u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDFCu)), c.r[0]);
    // 08cf9c  call 0x921a0
    X86_AT(c, 0x8cf9cu);
    push32(c, 0x8cfa1u); x86_call_known(c, 0x921a0u, f_000921a0); X86_RET(c, 0x8cfa1u);
    X86_TICK(c, 13);
    // 08cfa1  add esp, 0x10
    X86_AT(c, 0x8cfa1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08cfa4  cmp eax, dword ptr [ebp - 0x204]
    X86_AT(c, 0x8cfa4u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDFCu))), 0, 4);
    // 08cfaa  jl 0x8cfd5
    X86_AT(c, 0x8cfaau);
    if (x86_cc(c, 12)) { goto L_8cfd5; }
L_8cfac:
    X86_TICK(c, 55);
    // 08cfac  mov eax, edi
    X86_AT(c, 0x8cfacu);
    c.r[0] = c.r[7];
    // 08cfae  cdq 
    X86_AT(c, 0x8cfaeu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08cfaf  mov ecx, 0x280
    X86_AT(c, 0x8cfafu);
    c.r[1] = 0x280u;
    // 08cfb4  idiv ecx
    X86_AT(c, 0x8cfb4u);
    x86_idiv(c, c.r[1], 4, 0x8cfb4u);
    // 08cfb6  mov esi, edx
    X86_AT(c, 0x8cfb6u);
    c.r[6] = c.r[2];
    // 08cfb8  and esi, esi
    X86_AT(c, 0x8cfb8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 08cfba  je 0x8cfe2
    X86_AT(c, 0x8cfbau);
    if (x86_cc(c, 4)) { goto L_8cfe2; }
    X86_TICK(c, 27);
    // 08cfbc  push ebx
    X86_AT(c, 0x8cfbcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08cfbd  push 1
    X86_AT(c, 0x8cfbdu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08cfbf  push esi
    X86_AT(c, 0x8cfbfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08cfc0  mov eax, edi
    X86_AT(c, 0x8cfc0u);
    c.r[0] = c.r[7];
    // 08cfc2  sub eax, esi
    X86_AT(c, 0x8cfc2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 08cfc4  dec eax
    X86_AT(c, 0x8cfc4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08cfc5  add eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8cfc5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 08cfc8  push eax
    X86_AT(c, 0x8cfc8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08cfc9  call 0x921a0
    X86_AT(c, 0x8cfc9u);
    push32(c, 0x8cfceu); x86_call_known(c, 0x921a0u, f_000921a0); X86_RET(c, 0x8cfceu);
    X86_TICK(c, 9);
    // 08cfce  add esp, 0x10
    X86_AT(c, 0x8cfceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08cfd1  cmp esi, eax
    X86_AT(c, 0x8cfd1u);
    (void)x86_sub(c, c.r[6], c.r[0], 0, 4);
    // 08cfd3  jle 0x8cfe2
    X86_AT(c, 0x8cfd3u);
    if (x86_cc(c, 14)) { goto L_8cfe2; }
L_8cfd5:
    X86_TICK(c, 9);
    // 08cfd5  push ebx
    X86_AT(c, 0x8cfd5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08cfd6  call 0x92978
    X86_AT(c, 0x8cfd6u);
    push32(c, 0x8cfdbu); x86_call_known(c, 0x92978u, f_00092978); X86_RET(c, 0x8cfdbu);
    X86_TICK(c, 9);
    // 08cfdb  mov eax, 0xffffffff
    X86_AT(c, 0x8cfdbu);
    c.r[0] = 0xFFFFFFFFu;
    // 08cfe0  jmp 0x8cfea
    X86_AT(c, 0x8cfe0u);
    goto L_8cfea;
L_8cfe2:
    X86_TICK(c, 9);
    // 08cfe2  push ebx
    X86_AT(c, 0x8cfe2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08cfe3  call 0x92978
    X86_AT(c, 0x8cfe3u);
    push32(c, 0x8cfe8u); x86_call_known(c, 0x92978u, f_00092978); X86_RET(c, 0x8cfe8u);
    X86_TICK(c, 2);
    // 08cfe8  mov eax, edi
    X86_AT(c, 0x8cfe8u);
    c.r[0] = c.r[7];
L_8cfea:
    X86_TICK(c, 2);
    // 08cfea  add esp, 4
    X86_AT(c, 0x8cfeau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8cfed:
    X86_TICK(c, 28);
    // 08cfed  pop edi
    X86_AT(c, 0x8cfedu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08cfee  pop esi
    X86_AT(c, 0x8cfeeu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08cfef  pop ebx
    X86_AT(c, 0x8cfefu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08cff0  leave 
    X86_AT(c, 0x8cff0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08cff1  ret 
    X86_AT(c, 0x8cff1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8cef8u, "ran off the end of a function");
}
void f_0008cff4(X86Cpu& c) {
    X86_TICK(c, 32);
    // 08cff4  push ebp
    X86_AT(c, 0x8cff4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08cff5  mov ebp, esp
    X86_AT(c, 0x8cff5u);
    c.r[5] = c.r[4];
    // 08cff7  sub esp, 0x281c
    X86_AT(c, 0x8cff7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x281Cu, 0, 4); }
    // 08cffd  push ebx
    X86_AT(c, 0x8cffdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08cffe  push esi
    X86_AT(c, 0x8cffeu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08cfff  push edi
    X86_AT(c, 0x8cfffu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d000  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8d000u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08d003  mov dword ptr [ebp - 0x18], 0
    X86_AT(c, 0x8d003u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0x0u);
    // 08d00a  push 0x124c
    X86_AT(c, 0x8d00au);
    { uint32_t v = 0x124Cu; push32(c, v); }
    // 08d00f  push dword ptr [ebp + 8]
    X86_AT(c, 0x8d00fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08d012  call 0x9247c
    X86_AT(c, 0x8d012u);
    push32(c, 0x8d017u); x86_call_known(c, 0x9247cu, f_0009247c); X86_RET(c, 0x8d017u);
    X86_TICK(c, 11);
    // 08d017  add esp, 8
    X86_AT(c, 0x8d017u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08d01a  mov dword ptr [ebp - 0x281c], eax
    X86_AT(c, 0x8d01au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u)), c.r[0]);
    // 08d020  and eax, eax
    X86_AT(c, 0x8d020u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 08d022  je 0x8d2ed
    X86_AT(c, 0x8d022u);
    if (x86_cc(c, 4)) { goto L_8d2ed; }
    X86_TICK(c, 16);
    // 08d028  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x8d028u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 08d02e  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x8d02eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 08d034  push eax
    X86_AT(c, 0x8d034u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d035  call 0x8ced0
    X86_AT(c, 0x8d035u);
    push32(c, 0x8d03au); x86_call_known(c, 0x8ced0u, f_0008ced0); X86_RET(c, 0x8d03au);
    X86_TICK(c, 9);
    // 08d03a  add esp, 8
    X86_AT(c, 0x8d03au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08d03d  inc eax
    X86_AT(c, 0x8d03du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 08d03e  je 0x8d25d
    X86_AT(c, 0x8d03eu);
    if (x86_cc(c, 4)) { goto L_8d25d; }
    X86_TICK(c, 19);
    // 08d044  lea eax, [ebp - 0xc]
    X86_AT(c, 0x8d044u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 08d047  push eax
    X86_AT(c, 0x8d047u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d048  lea ecx, [ebp - 8]
    X86_AT(c, 0x8d048u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 08d04b  push ecx
    X86_AT(c, 0x8d04bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 08d04c  lea edx, [ebp - 0x2818]
    X86_AT(c, 0x8d04cu);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 08d052  push edx
    X86_AT(c, 0x8d052u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08d053  call 0x8ce94
    X86_AT(c, 0x8d053u);
    push32(c, 0x8d058u); x86_call_known(c, 0x8ce94u, f_0008ce94); X86_RET(c, 0x8d058u);
    X86_TICK(c, 11);
    // 08d058  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x8d058u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 08d05e  push eax
    X86_AT(c, 0x8d05eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d05f  call 0x8cec4
    X86_AT(c, 0x8d05fu);
    push32(c, 0x8d064u); x86_call_known(c, 0x8cec4u, f_0008cec4); X86_RET(c, 0x8d064u);
    X86_TICK(c, 21);
    // 08d064  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x8d064u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 08d067  mov eax, dword ptr [ebp - 0x281c]
    X86_AT(c, 0x8d067u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u)));
    // 08d06d  movzx eax, byte ptr [eax + 0xe]
    X86_AT(c, 0x8d06du);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xEu)));
    // 08d071  push eax
    X86_AT(c, 0x8d071u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d072  call 0x9358f
    X86_AT(c, 0x8d072u);
    push32(c, 0x8d077u); x86_call_known(c, 0x9358fu, f_0009358f); X86_RET(c, 0x8d077u);
    X86_TICK(c, 14);
    // 08d077  xchg esi, eax
    X86_AT(c, 0x8d077u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 08d078  sub esi, 0x200
    X86_AT(c, 0x8d078u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x200u, 0, 4); }
    // 08d07e  add esp, 0x14
    X86_AT(c, 0x8d07eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 08d081  cmp esi, 1
    X86_AT(c, 0x8d081u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 08d084  jl 0x8d25d
    X86_AT(c, 0x8d084u);
    if (x86_cc(c, 12)) { goto L_8d25d; }
    X86_TICK(c, 12);
    // 08d08a  cmp dword ptr [ebp - 8], 1
    X86_AT(c, 0x8d08au);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x1u, 0, 4);
    // 08d08e  jl 0x8d25d
    X86_AT(c, 0x8d08eu);
    if (x86_cc(c, 12)) { goto L_8d25d; }
    X86_TICK(c, 12);
    // 08d094  cmp dword ptr [ebp - 0xc], 1
    X86_AT(c, 0x8d094u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x1u, 0, 4);
    // 08d098  jl 0x8d25d
    X86_AT(c, 0x8d098u);
    if (x86_cc(c, 12)) { goto L_8d25d; }
    X86_TICK(c, 13);
    // 08d09e  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x8d09eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 08d0a1  dec edx
    X86_AT(c, 0x8d0a1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 08d0a2  cmp edx, 0xf
    X86_AT(c, 0x8d0a2u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 08d0a5  ja 0x8d107
    X86_AT(c, 0x8d0a5u);
    if (x86_cc(c, 7)) { goto L_8d107; }
    X86_TICK(c, 7);
    // 08d0a7  jmp dword ptr cs:[edx*4 + 0x8d0af]
    X86_AT(c, 0x8d0a7u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0x8D0AFu)));
      switch (t) {
      case 0x8d0efu: goto L_8d0ef;
      case 0x8d0fau: goto L_8d0fa;
      case 0x8d0ffu: goto L_8d0ff;
      case 0x8d107u: goto L_8d107;
      default: x86_jump(c, t); return; } }
L_8d0ef:
    X86_TICK(c, 20);
    // 08d0ef  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x8d0efu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 08d0f2  inc eax
    X86_AT(c, 0x8d0f2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 08d0f3  cdq 
    X86_AT(c, 0x8d0f3u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d0f4  sub eax, edx
    X86_AT(c, 0x8d0f4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 08d0f6  sar eax, 1
    X86_AT(c, 0x8d0f6u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 08d0f8  jmp 0x8d104
    X86_AT(c, 0x8d0f8u);
    goto L_8d104;
L_8d0fa:
    X86_TICK(c, 11);
    // 08d0fa  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x8d0fau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 08d0fd  jmp 0x8d104
    X86_AT(c, 0x8d0fdu);
    goto L_8d104;
L_8d0ff:
    X86_TICK(c, 6);
    // 08d0ff  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x8d0ffu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 08d102  add eax, eax
    X86_AT(c, 0x8d102u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
L_8d104:
    X86_TICK(c, 2);
    // 08d104  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0x8d104u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
L_8d107:
    X86_TICK(c, 33);
    // 08d107  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d107u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 08d10a  imul eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d10au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 4);
    // 08d10e  cmp eax, esi
    X86_AT(c, 0x8d10eu);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 08d110  jge 0x8d113
    X86_AT(c, 0x8d110u);
    if (x86_cc(c, 13)) { goto L_8d113; }
    X86_TICK(c, 3);
    // 08d112  xchg esi, eax
    X86_AT(c, 0x8d112u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_8d113:
    X86_TICK(c, 33);
    // 08d113  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d113u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 08d116  imul eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d116u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 4);
    // 08d11a  cmp eax, esi
    X86_AT(c, 0x8d11au);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 08d11c  jle 0x8d12c
    X86_AT(c, 0x8d11cu);
    if (x86_cc(c, 14)) { goto L_8d12c; }
    X86_TICK(c, 71);
    // 08d11e  mov eax, esi
    X86_AT(c, 0x8d11eu);
    c.r[0] = c.r[6];
    // 08d120  cdq 
    X86_AT(c, 0x8d120u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d121  idiv dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d121u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4, 0x8d121u);
    // 08d124  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x8d124u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 08d127  imul eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d127u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4);
    // 08d12b  xchg esi, eax
    X86_AT(c, 0x8d12bu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_8d12c:
    X86_TICK(c, 7);
    // 08d12c  cmp esi, 0x2800
    X86_AT(c, 0x8d12cu);
    (void)x86_sub(c, c.r[6], 0x2800u, 0, 4);
    // 08d132  jg 0x8d1c2
    X86_AT(c, 0x8d132u);
    if (x86_cc(c, 15)) { goto L_8d1c2; }
    X86_TICK(c, 22);
    // 08d138  mov ebx, esi
    X86_AT(c, 0x8d138u);
    c.r[3] = c.r[6];
    // 08d13a  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x8d13au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 08d140  push 1
    X86_AT(c, 0x8d140u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08d142  push ebx
    X86_AT(c, 0x8d142u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d143  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x8d143u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 08d149  push eax
    X86_AT(c, 0x8d149u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d14a  call 0x921a0
    X86_AT(c, 0x8d14au);
    push32(c, 0x8d14fu); x86_call_known(c, 0x921a0u, f_000921a0); X86_RET(c, 0x8d14fu);
    X86_TICK(c, 9);
    // 08d14f  add esp, 0x10
    X86_AT(c, 0x8d14fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d152  dec eax
    X86_AT(c, 0x8d152u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d153  jge 0x8d15c
    X86_AT(c, 0x8d153u);
    if (x86_cc(c, 13)) { goto L_8d15c; }
    X86_TICK(c, 2);
    // 08d155  mov dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0x8d155u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0xFFFFFFFFu);
L_8d15c:
    X86_TICK(c, 51);
    // 08d15c  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x8d15cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 08d162  mov dword ptr [0x34a94], eax
    X86_AT(c, 0x8d162u);
    wr32((c.sbase[3] + (uint32_t)(0x34A94u)), c.r[0]);
    // 08d167  mov word ptr [0x34a98], 0x14
    X86_AT(c, 0x8d167u);
    wr16((c.sbase[3] + (uint32_t)(0x34A98u)), 0x14u);
    // 08d170  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0x8d170u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08d174  mov word ptr [0x34a9a], ax
    X86_AT(c, 0x8d174u);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Au)), (c.r[0] & 0xFFFFu));
    // 08d17a  mov edx, edi
    X86_AT(c, 0x8d17au);
    c.r[2] = c.r[7];
    // 08d17c  mov word ptr [0x34a9c], dx
    X86_AT(c, 0x8d17cu);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Cu)), (c.r[2] & 0xFFFFu));
    // 08d183  add ax, word ptr [ebp - 8]
    X86_AT(c, 0x8d183u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 2)); }
    // 08d187  dec eax
    X86_AT(c, 0x8d187u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d188  mov word ptr [0x34a9e], ax
    X86_AT(c, 0x8d188u);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Eu)), (c.r[0] & 0xFFFFu));
    // 08d18e  mov eax, edi
    X86_AT(c, 0x8d18eu);
    c.r[0] = c.r[7];
    // 08d190  add ax, word ptr [ebp - 0xc]
    X86_AT(c, 0x8d190u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 2)); }
    // 08d194  dec eax
    X86_AT(c, 0x8d194u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d195  mov word ptr [0x34aa0], ax
    X86_AT(c, 0x8d195u);
    wr16((c.sbase[3] + (uint32_t)(0x34AA0u)), (c.r[0] & 0xFFFFu));
    // 08d19b  push 0x34a94
    X86_AT(c, 0x8d19bu);
    { uint32_t v = 0x34A94u; push32(c, v); }
    // 08d1a0  push 0
    X86_AT(c, 0x8d1a0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08d1a2  push 0x34494
    X86_AT(c, 0x8d1a2u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08d1a7  call 0x544
    X86_AT(c, 0x8d1a7u);
    push32(c, 0x8d1acu); x86_call_known(c, 0x544u, f_00000544); X86_RET(c, 0x8d1acu);
    X86_TICK(c, 12);
    // 08d1ac  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x8d1acu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 08d1b2  call 0x92978
    X86_AT(c, 0x8d1b2u);
    push32(c, 0x8d1b7u); x86_call_known(c, 0x92978u, f_00092978); X86_RET(c, 0x8d1b7u);
    X86_TICK(c, 13);
    // 08d1b7  mov eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0x8d1b7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 08d1ba  add esp, 0x10
    X86_AT(c, 0x8d1bau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d1bd  jmp 0x8d2f6
    X86_AT(c, 0x8d1bdu);
    goto L_8d2f6;
L_8d1c2:
    X86_TICK(c, 93);
    // 08d1c2  mov eax, 0x2800
    X86_AT(c, 0x8d1c2u);
    c.r[0] = 0x2800u;
    // 08d1c7  cdq 
    X86_AT(c, 0x8d1c7u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d1c8  idiv dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d1c8u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4, 0x8d1c8u);
    // 08d1cb  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x8d1cbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 08d1ce  imul eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d1ceu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4);
    // 08d1d2  xchg ebx, eax
    X86_AT(c, 0x8d1d2u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 08d1d3  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x8d1d3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 08d1d9  mov dword ptr [0x34a94], eax
    X86_AT(c, 0x8d1d9u);
    wr32((c.sbase[3] + (uint32_t)(0x34A94u)), c.r[0]);
    // 08d1de  mov word ptr [0x34a98], 0x14
    X86_AT(c, 0x8d1deu);
    wr16((c.sbase[3] + (uint32_t)(0x34A98u)), 0x14u);
    // 08d1e7  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0x8d1e7u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08d1eb  mov word ptr [0x34a9a], ax
    X86_AT(c, 0x8d1ebu);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Au)), (c.r[0] & 0xFFFFu));
    // 08d1f1  add ax, word ptr [ebp - 8]
    X86_AT(c, 0x8d1f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 2)); }
    // 08d1f5  dec eax
    X86_AT(c, 0x8d1f5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d1f6  mov word ptr [0x34a9e], ax
    X86_AT(c, 0x8d1f6u);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Eu)), (c.r[0] & 0xFFFFu));
L_8d1fc:
    X86_TICK(c, 7);
    // 08d1fc  cmp ebx, esi
    X86_AT(c, 0x8d1fcu);
    (void)x86_sub(c, c.r[3], c.r[6], 0, 4);
    // 08d1fe  jge 0x8d258
    X86_AT(c, 0x8d1feu);
    if (x86_cc(c, 13)) { goto L_8d258; }
    X86_TICK(c, 20);
    // 08d200  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x8d200u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 08d206  push 1
    X86_AT(c, 0x8d206u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08d208  push ebx
    X86_AT(c, 0x8d208u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d209  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x8d209u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 08d20f  push eax
    X86_AT(c, 0x8d20fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d210  call 0x921a0
    X86_AT(c, 0x8d210u);
    push32(c, 0x8d215u); x86_call_known(c, 0x921a0u, f_000921a0); X86_RET(c, 0x8d215u);
    X86_TICK(c, 9);
    // 08d215  add esp, 0x10
    X86_AT(c, 0x8d215u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d218  dec eax
    X86_AT(c, 0x8d218u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d219  jge 0x8d222
    X86_AT(c, 0x8d219u);
    if (x86_cc(c, 13)) { goto L_8d222; }
    X86_TICK(c, 2);
    // 08d21b  mov dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0x8d21bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0xFFFFFFFFu);
L_8d222:
    X86_TICK(c, 29);
    // 08d222  mov eax, edi
    X86_AT(c, 0x8d222u);
    c.r[0] = c.r[7];
    // 08d224  mov word ptr [0x34a9c], ax
    X86_AT(c, 0x8d224u);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Cu)), (c.r[0] & 0xFFFFu));
    // 08d22a  mov eax, edi
    X86_AT(c, 0x8d22au);
    c.r[0] = c.r[7];
    // 08d22c  add ax, word ptr [ebp - 0x14]
    X86_AT(c, 0x8d22cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 2)); }
    // 08d230  dec eax
    X86_AT(c, 0x8d230u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d231  mov word ptr [0x34aa0], ax
    X86_AT(c, 0x8d231u);
    wr16((c.sbase[3] + (uint32_t)(0x34AA0u)), (c.r[0] & 0xFFFFu));
    // 08d237  push 0x34a94
    X86_AT(c, 0x8d237u);
    { uint32_t v = 0x34A94u; push32(c, v); }
    // 08d23c  push 0
    X86_AT(c, 0x8d23cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08d23e  push 0x34494
    X86_AT(c, 0x8d23eu);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08d243  call 0x544
    X86_AT(c, 0x8d243u);
    push32(c, 0x8d248u); x86_call_known(c, 0x544u, f_00000544); X86_RET(c, 0x8d248u);
    X86_TICK(c, 22);
    // 08d248  add edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0x8d248u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 4); }
    // 08d24b  sub esi, ebx
    X86_AT(c, 0x8d24bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[3], 0, 4); }
    // 08d24d  add esp, 0xc
    X86_AT(c, 0x8d24du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 08d250  cmp dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0x8d250u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 0xFFFFFFFFu, 0, 4);
    // 08d254  jne 0x8d1fc
    X86_AT(c, 0x8d254u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8d1fcu); goto L_8d1fc; }
    X86_TICK(c, 7);
    // 08d256  jmp 0x8d25d
    X86_AT(c, 0x8d256u);
    goto L_8d25d;
L_8d258:
    X86_TICK(c, 11);
    // 08d258  cmp esi, dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d258u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4);
    // 08d25b  jge 0x8d275
    X86_AT(c, 0x8d25bu);
    if (x86_cc(c, 13)) { goto L_8d275; }
L_8d25d:
    X86_TICK(c, 12);
    // 08d25d  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x8d25du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 08d263  call 0x92978
    X86_AT(c, 0x8d263u);
    push32(c, 0x8d268u); x86_call_known(c, 0x92978u, f_00092978); X86_RET(c, 0x8d268u);
    X86_TICK(c, 11);
    // 08d268  mov eax, 0xffffffff
    X86_AT(c, 0x8d268u);
    c.r[0] = 0xFFFFFFFFu;
    // 08d26d  add esp, 4
    X86_AT(c, 0x8d26du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08d270  jmp 0x8d2f6
    X86_AT(c, 0x8d270u);
    goto L_8d2f6;
L_8d275:
    X86_TICK(c, 88);
    // 08d275  mov eax, esi
    X86_AT(c, 0x8d275u);
    c.r[0] = c.r[6];
    // 08d277  cdq 
    X86_AT(c, 0x8d277u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d278  idiv dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d278u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4, 0x8d278u);
    // 08d27b  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x8d27bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 08d27e  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x8d27eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 08d284  push 1
    X86_AT(c, 0x8d284u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08d286  imul eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d286u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4);
    // 08d28a  push eax
    X86_AT(c, 0x8d28au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d28b  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x8d28bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 08d291  push eax
    X86_AT(c, 0x8d291u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d292  call 0x921a0
    X86_AT(c, 0x8d292u);
    push32(c, 0x8d297u); x86_call_known(c, 0x921a0u, f_000921a0); X86_RET(c, 0x8d297u);
    X86_TICK(c, 9);
    // 08d297  add esp, 0x10
    X86_AT(c, 0x8d297u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d29a  dec eax
    X86_AT(c, 0x8d29au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d29b  jge 0x8d2a4
    X86_AT(c, 0x8d29bu);
    if (x86_cc(c, 13)) { goto L_8d2a4; }
    X86_TICK(c, 2);
    // 08d29d  mov dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0x8d29du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0xFFFFFFFFu);
L_8d2a4:
    X86_TICK(c, 35);
    // 08d2a4  mov eax, edi
    X86_AT(c, 0x8d2a4u);
    c.r[0] = c.r[7];
    // 08d2a6  mov word ptr [0x34a9c], ax
    X86_AT(c, 0x8d2a6u);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Cu)), (c.r[0] & 0xFFFFu));
    // 08d2ac  mov eax, edi
    X86_AT(c, 0x8d2acu);
    c.r[0] = c.r[7];
    // 08d2ae  add ax, word ptr [ebp - 0x14]
    X86_AT(c, 0x8d2aeu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 2)); }
    // 08d2b2  dec eax
    X86_AT(c, 0x8d2b2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d2b3  mov word ptr [0x34aa0], ax
    X86_AT(c, 0x8d2b3u);
    wr16((c.sbase[3] + (uint32_t)(0x34AA0u)), (c.r[0] & 0xFFFFu));
    // 08d2b9  mov ax, word ptr [ebp - 0x14]
    X86_AT(c, 0x8d2b9u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))));
    // 08d2bd  mov word ptr [0x34aa4], ax
    X86_AT(c, 0x8d2bdu);
    wr16((c.sbase[3] + (uint32_t)(0x34AA4u)), (c.r[0] & 0xFFFFu));
    // 08d2c3  push 0x34a94
    X86_AT(c, 0x8d2c3u);
    { uint32_t v = 0x34A94u; push32(c, v); }
    // 08d2c8  push 0
    X86_AT(c, 0x8d2c8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08d2ca  push 0x34494
    X86_AT(c, 0x8d2cau);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08d2cf  call 0x544
    X86_AT(c, 0x8d2cfu);
    push32(c, 0x8d2d4u); x86_call_known(c, 0x544u, f_00000544); X86_RET(c, 0x8d2d4u);
    X86_TICK(c, 12);
    // 08d2d4  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x8d2d4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 08d2da  call 0x92978
    X86_AT(c, 0x8d2dau);
    push32(c, 0x8d2dfu); x86_call_known(c, 0x92978u, f_00092978); X86_RET(c, 0x8d2dfu);
    X86_TICK(c, 35);
    // 08d2df  add esp, 0x10
    X86_AT(c, 0x8d2dfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d2e2  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x8d2e2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 08d2e5  imul eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x8d2e5u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 4);
    // 08d2e9  cmp eax, esi
    X86_AT(c, 0x8d2e9u);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 08d2eb  jge 0x8d2f4
    X86_AT(c, 0x8d2ebu);
    if (x86_cc(c, 13)) { goto L_8d2f4; }
L_8d2ed:
    X86_TICK(c, 9);
    // 08d2ed  mov eax, 0xffffffff
    X86_AT(c, 0x8d2edu);
    c.r[0] = 0xFFFFFFFFu;
    // 08d2f2  jmp 0x8d2f6
    X86_AT(c, 0x8d2f2u);
    goto L_8d2f6;
L_8d2f4:
    X86_TICK(c, 2);
    // 08d2f4  sub eax, eax
    X86_AT(c, 0x8d2f4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_8d2f6:
    X86_TICK(c, 28);
    // 08d2f6  pop edi
    X86_AT(c, 0x8d2f6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d2f7  pop esi
    X86_AT(c, 0x8d2f7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08d2f8  pop ebx
    X86_AT(c, 0x8d2f8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08d2f9  leave 
    X86_AT(c, 0x8d2f9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d2fa  ret 
    X86_AT(c, 0x8d2fau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8cff4u, "ran off the end of a function");
}
void f_0008d2f6(X86Cpu& c) {
    X86_TICK(c, 28);
    // 08d2f6  pop edi
    X86_AT(c, 0x8d2f6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d2f7  pop esi
    X86_AT(c, 0x8d2f7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08d2f8  pop ebx
    X86_AT(c, 0x8d2f8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08d2f9  leave 
    X86_AT(c, 0x8d2f9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d2fa  ret 
    X86_AT(c, 0x8d2fau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d2f6u, "ran off the end of a function");
}
void f_0008d2fc(X86Cpu& c) {
    X86_TICK(c, 56);
    // 08d2fc  push ebp
    X86_AT(c, 0x8d2fcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d2fd  mov ebp, esp
    X86_AT(c, 0x8d2fdu);
    c.r[5] = c.r[4];
    // 08d2ff  push ebx
    X86_AT(c, 0x8d2ffu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d300  push esi
    X86_AT(c, 0x8d300u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08d301  push edi
    X86_AT(c, 0x8d301u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d302  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8d302u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08d305  mov esi, dword ptr [ebp + 0x14]
    X86_AT(c, 0x8d305u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 08d308  mov ebx, dword ptr [ebp + 0x20]
    X86_AT(c, 0x8d308u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)));
    // 08d30b  lea eax, [esi - 6]
    X86_AT(c, 0x8d30bu);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFFAu);
    // 08d30e  cdq 
    X86_AT(c, 0x8d30eu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d30f  sub eax, edx
    X86_AT(c, 0x8d30fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 08d311  sar eax, 1
    X86_AT(c, 0x8d311u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 08d313  cdq 
    X86_AT(c, 0x8d313u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d314  sub eax, edx
    X86_AT(c, 0x8d314u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 08d316  sar eax, 1
    X86_AT(c, 0x8d316u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 08d318  cdq 
    X86_AT(c, 0x8d318u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d319  sub eax, edx
    X86_AT(c, 0x8d319u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 08d31b  sar eax, 1
    X86_AT(c, 0x8d31bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 08d31d  cmp eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x8d31du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))), 0, 4);
    // 08d320  jge 0x8d325
    X86_AT(c, 0x8d320u);
    if (x86_cc(c, 13)) { goto L_8d325; }
    X86_TICK(c, 2);
    // 08d322  mov dword ptr [ebp + 0x1c], eax
    X86_AT(c, 0x8d322u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
L_8d325:
    X86_TICK(c, 57);
    // 08d325  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0x8d325u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 08d328  sub eax, 4
    X86_AT(c, 0x8d328u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x4u, 0, 4); }
    // 08d32b  cdq 
    X86_AT(c, 0x8d32bu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08d32c  mov ecx, 0x10
    X86_AT(c, 0x8d32cu);
    c.r[1] = 0x10u;
    // 08d331  idiv ecx
    X86_AT(c, 0x8d331u);
    x86_idiv(c, c.r[1], 4, 0x8d331u);
    // 08d333  cmp eax, ebx
    X86_AT(c, 0x8d333u);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 08d335  jge 0x8d338
    X86_AT(c, 0x8d335u);
    if (x86_cc(c, 13)) { goto L_8d338; }
    X86_TICK(c, 3);
    // 08d337  xchg ebx, eax
    X86_AT(c, 0x8d337u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
L_8d338:
    X86_TICK(c, 100);
    // 08d338  mov eax, 0x34490
    X86_AT(c, 0x8d338u);
    c.r[0] = 0x34490u;
    // 08d33d  lea edx, [edi + edi*2]
    X86_AT(c, 0x8d33du);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08d340  lea ecx, [edx + edx*8]
    X86_AT(c, 0x8d340u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 08d343  lea ecx, [edx + ecx*2]
    X86_AT(c, 0x8d343u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 08d346  mov byte ptr [eax + ecx*1 + 0x710], 0xff
    X86_AT(c, 0x8d346u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x710u)), 0xFFu);
    // 08d34e  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8d34eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08d351  mov dword ptr [eax + ecx*1 + 0x711], edx
    X86_AT(c, 0x8d351u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x711u)), c.r[2]);
    // 08d358  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8d358u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08d35b  mov dword ptr [eax + ecx*1 + 0x715], edx
    X86_AT(c, 0x8d35bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x715u)), c.r[2]);
    // 08d362  mov dword ptr [eax + ecx*1 + 0x719], esi
    X86_AT(c, 0x8d362u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x719u)), c.r[6]);
    // 08d369  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0x8d369u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 08d36c  mov dword ptr [eax + ecx*1 + 0x71d], edx
    X86_AT(c, 0x8d36cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x71Du)), c.r[2]);
    // 08d373  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x8d373u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 08d376  mov dword ptr [eax + ecx*1 + 0x721], edx
    X86_AT(c, 0x8d376u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x721u)), c.r[2]);
    // 08d37d  mov dword ptr [eax + ecx*1 + 0x725], ebx
    X86_AT(c, 0x8d37du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x725u)), c.r[3]);
    // 08d384  sub edx, edx
    X86_AT(c, 0x8d384u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 08d386  mov dword ptr [eax + ecx*1 + 0x729], edx
    X86_AT(c, 0x8d386u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x729u)), c.r[2]);
    // 08d38d  mov dword ptr [eax + ecx*1 + 0x72d], edx
    X86_AT(c, 0x8d38du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x72Du)), c.r[2]);
    // 08d394  mov edx, 0xffffffff
    X86_AT(c, 0x8d394u);
    c.r[2] = 0xFFFFFFFFu;
    // 08d399  mov dword ptr [eax + ecx*1 + 0x731], edx
    X86_AT(c, 0x8d399u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x731u)), c.r[2]);
    // 08d3a0  mov edx, dword ptr [ebp + 0x24]
    X86_AT(c, 0x8d3a0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u)));
    // 08d3a3  mov dword ptr [eax + ecx*1 + 0x735], edx
    X86_AT(c, 0x8d3a3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x735u)), c.r[2]);
    // 08d3aa  mov dword ptr [eax + ecx*1 + 0x739], 0
    X86_AT(c, 0x8d3aau);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x739u)), 0x0u);
    // 08d3b5  mov edx, dword ptr [ebp + 0x28]
    X86_AT(c, 0x8d3b5u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x28u)));
    // 08d3b8  mov dword ptr [eax + ecx*1 + 0x73d], edx
    X86_AT(c, 0x8d3b8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x73Du)), c.r[2]);
    // 08d3bf  mov edx, dword ptr [ebp + 0x2c]
    X86_AT(c, 0x8d3bfu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x2Cu)));
    // 08d3c2  mov dword ptr [eax + ecx*1 + 0x741], edx
    X86_AT(c, 0x8d3c2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x741u)), c.r[2]);
    // 08d3c9  mov dword ptr [eax + ecx*1 + 0x745], 0xffffffff
    X86_AT(c, 0x8d3c9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x745u)), 0xFFFFFFFFu);
    // 08d3d4  lea eax, [eax + ecx*1 + 0x710]
    X86_AT(c, 0x8d3d4u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[1] + 0x710u);
    // 08d3db  pop edi
    X86_AT(c, 0x8d3dbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d3dc  pop esi
    X86_AT(c, 0x8d3dcu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08d3dd  pop ebx
    X86_AT(c, 0x8d3ddu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08d3de  leave 
    X86_AT(c, 0x8d3deu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d3df  ret 
    X86_AT(c, 0x8d3dfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d2fcu, "ran off the end of a function");
}
void f_0008d3e0(X86Cpu& c) {
    X86_TICK(c, 38);
    // 08d3e0  push ebp
    X86_AT(c, 0x8d3e0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d3e1  mov ebp, esp
    X86_AT(c, 0x8d3e1u);
    c.r[5] = c.r[4];
    // 08d3e3  push ebx
    X86_AT(c, 0x8d3e3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d3e4  push esi
    X86_AT(c, 0x8d3e4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08d3e5  push edi
    X86_AT(c, 0x8d3e5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d3e6  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8d3e6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08d3e9  mov eax, 0x34490
    X86_AT(c, 0x8d3e9u);
    c.r[0] = 0x34490u;
    // 08d3ee  lea edx, [edi + edi*2]
    X86_AT(c, 0x8d3eeu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08d3f1  lea ecx, [edx + edx*8]
    X86_AT(c, 0x8d3f1u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 08d3f4  lea ecx, [edx + ecx*2]
    X86_AT(c, 0x8d3f4u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 08d3f7  push dword ptr [eax + ecx*1 + 0x735]
    X86_AT(c, 0x8d3f7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x735u))); push32(c, v); }
    // 08d3fe  mov ebx, eax
    X86_AT(c, 0x8d3feu);
    c.r[3] = c.r[0];
    // 08d400  mov esi, ecx
    X86_AT(c, 0x8d400u);
    c.r[6] = c.r[1];
    // 08d402  call 0x8c1f4
    X86_AT(c, 0x8d402u);
    push32(c, 0x8d407u); x86_call_known(c, 0x8c1f4u, f_0008c1f4); X86_RET(c, 0x8d407u);
    X86_TICK(c, 14);
    // 08d407  add esp, 4
    X86_AT(c, 0x8d407u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08d40a  cmp dword ptr [ebx + esi*1 + 0x745], 0xffffffff
    X86_AT(c, 0x8d40au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] + 0x745u))), 0xFFFFFFFFu, 0, 4);
    // 08d412  jne 0x8d423
    X86_AT(c, 0x8d412u);
    if (x86_cc(c, 5)) { goto L_8d423; }
    X86_TICK(c, 12);
    // 08d414  push dword ptr [ebx + esi*1 + 0x741]
    X86_AT(c, 0x8d414u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] + 0x741u))); push32(c, v); }
    // 08d41b  call 0x8c20c
    X86_AT(c, 0x8d41bu);
    push32(c, 0x8d420u); x86_call_known(c, 0x8c20cu, f_0008c20c); X86_RET(c, 0x8d420u);
    X86_TICK(c, 2);
    // 08d420  add esp, 4
    X86_AT(c, 0x8d420u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8d423:
    X86_TICK(c, 18);
    // 08d423  lea eax, [edi + edi*2]
    X86_AT(c, 0x8d423u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08d426  lea edx, [eax + eax*8]
    X86_AT(c, 0x8d426u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 08d429  lea edx, [eax + edx*2]
    X86_AT(c, 0x8d429u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 08d42c  push dword ptr [edx + 0x34bc9]
    X86_AT(c, 0x8d42cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x34BC9u))); push32(c, v); }
    // 08d432  call 0x8c2bc
    X86_AT(c, 0x8d432u);
    push32(c, 0x8d437u); x86_call_known(c, 0x8c2bcu, f_0008c2bc); X86_RET(c, 0x8d437u);
    X86_TICK(c, 30);
    // 08d437  add esp, 4
    X86_AT(c, 0x8d437u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08d43a  pop edi
    X86_AT(c, 0x8d43au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d43b  pop esi
    X86_AT(c, 0x8d43bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08d43c  pop ebx
    X86_AT(c, 0x8d43cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08d43d  leave 
    X86_AT(c, 0x8d43du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d43e  ret 
    X86_AT(c, 0x8d43eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d3e0u, "ran off the end of a function");
}
void f_0008d440(X86Cpu& c) {
    X86_TICK(c, 74);
    // 08d440  push ebp
    X86_AT(c, 0x8d440u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d441  mov ebp, esp
    X86_AT(c, 0x8d441u);
    c.r[5] = c.r[4];
    // 08d443  push edi
    X86_AT(c, 0x8d443u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d444  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8d444u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08d447  lea eax, [eax + eax*2]
    X86_AT(c, 0x8d447u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 08d44a  lea edx, [eax + eax*8]
    X86_AT(c, 0x8d44au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 08d44d  lea edx, [eax + edx*2]
    X86_AT(c, 0x8d44du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 08d450  lea edi, [edx + 0x34ba0]
    X86_AT(c, 0x8d450u);
    c.r[7] = (uint32_t)(c.r[2] + 0x34BA0u);
    // 08d456  push dword ptr [edi + 0x31]
    X86_AT(c, 0x8d456u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
    // 08d459  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d459u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d45c  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0x8d45cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 08d45f  sub eax, 2
    X86_AT(c, 0x8d45fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 08d462  push eax
    X86_AT(c, 0x8d462u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d463  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d463u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d466  add eax, dword ptr [edi + 9]
    X86_AT(c, 0x8d466u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 08d469  sub eax, 2
    X86_AT(c, 0x8d469u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 08d46c  push eax
    X86_AT(c, 0x8d46cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d46d  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d46du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d470  inc eax
    X86_AT(c, 0x8d470u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 08d471  push eax
    X86_AT(c, 0x8d471u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d472  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d472u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d475  inc eax
    X86_AT(c, 0x8d475u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 08d476  push eax
    X86_AT(c, 0x8d476u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d477  call 0x8c8f0
    X86_AT(c, 0x8d477u);
    push32(c, 0x8d47cu); x86_call_known(c, 0x8c8f0u, f_0008c8f0); X86_RET(c, 0x8d47cu);
    X86_TICK(c, 12);
    // 08d47c  push dword ptr [edi + 0x2d]
    X86_AT(c, 0x8d47cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Du))); push32(c, v); }
    // 08d47f  call 0x8c1f4
    X86_AT(c, 0x8d47fu);
    push32(c, 0x8d484u); x86_call_known(c, 0x8c1f4u, f_0008c1f4); X86_RET(c, 0x8d484u);
    X86_TICK(c, 51);
    // 08d484  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d484u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d487  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0x8d487u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 08d48a  sub eax, 2
    X86_AT(c, 0x8d48au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 08d48d  push eax
    X86_AT(c, 0x8d48du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d48e  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d48eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d491  add eax, dword ptr [edi + 9]
    X86_AT(c, 0x8d491u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 08d494  sub eax, 2
    X86_AT(c, 0x8d494u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 08d497  push eax
    X86_AT(c, 0x8d497u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d498  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d498u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d49b  inc eax
    X86_AT(c, 0x8d49bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 08d49c  push eax
    X86_AT(c, 0x8d49cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d49d  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d49du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d4a0  inc eax
    X86_AT(c, 0x8d4a0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 08d4a1  push eax
    X86_AT(c, 0x8d4a1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d4a2  call 0x8c88c
    X86_AT(c, 0x8d4a2u);
    push32(c, 0x8d4a7u); x86_call_known(c, 0x8c88cu, f_0008c88c); X86_RET(c, 0x8d4a7u);
    X86_TICK(c, 39);
    // 08d4a7  push dword ptr [edi + 5]
    X86_AT(c, 0x8d4a7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))); push32(c, v); }
    // 08d4aa  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d4aau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d4ad  add eax, dword ptr [edi + 9]
    X86_AT(c, 0x8d4adu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 08d4b0  sub eax, 3
    X86_AT(c, 0x8d4b0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 08d4b3  push eax
    X86_AT(c, 0x8d4b3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d4b4  push dword ptr [edi + 5]
    X86_AT(c, 0x8d4b4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))); push32(c, v); }
    // 08d4b7  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d4b7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d4ba  add eax, 2
    X86_AT(c, 0x8d4bau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 08d4bd  push eax
    X86_AT(c, 0x8d4bdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d4be  call 0x8c76c
    X86_AT(c, 0x8d4beu);
    push32(c, 0x8d4c3u); x86_call_known(c, 0x8c76cu, f_0008c76c); X86_RET(c, 0x8d4c3u);
    X86_TICK(c, 45);
    // 08d4c3  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d4c3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d4c6  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0x8d4c6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 08d4c9  sub eax, 3
    X86_AT(c, 0x8d4c9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 08d4cc  push eax
    X86_AT(c, 0x8d4ccu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d4cd  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d4cdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d4d0  add eax, dword ptr [edi + 9]
    X86_AT(c, 0x8d4d0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 08d4d3  dec eax
    X86_AT(c, 0x8d4d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d4d4  push eax
    X86_AT(c, 0x8d4d4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d4d5  mov edx, dword ptr [edi + 5]
    X86_AT(c, 0x8d4d5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d4d8  add edx, 2
    X86_AT(c, 0x8d4d8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x2u, 0, 4); }
    // 08d4db  push edx
    X86_AT(c, 0x8d4dbu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08d4dc  push eax
    X86_AT(c, 0x8d4dcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d4dd  call 0x8c76c
    X86_AT(c, 0x8d4ddu);
    push32(c, 0x8d4e2u); x86_call_known(c, 0x8c76cu, f_0008c76c); X86_RET(c, 0x8d4e2u);
    X86_TICK(c, 47);
    // 08d4e2  add esp, 0x48
    X86_AT(c, 0x8d4e2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 08d4e5  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d4e5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d4e8  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0x8d4e8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 08d4eb  dec eax
    X86_AT(c, 0x8d4ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 08d4ec  push eax
    X86_AT(c, 0x8d4ecu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d4ed  mov edx, dword ptr [edi + 1]
    X86_AT(c, 0x8d4edu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d4f0  add edx, dword ptr [edi + 9]
    X86_AT(c, 0x8d4f0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 08d4f3  sub edx, 3
    X86_AT(c, 0x8d4f3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x3u, 0, 4); }
    // 08d4f6  push edx
    X86_AT(c, 0x8d4f6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08d4f7  push eax
    X86_AT(c, 0x8d4f7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d4f8  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d4f8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d4fb  add eax, 2
    X86_AT(c, 0x8d4fbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 08d4fe  push eax
    X86_AT(c, 0x8d4feu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d4ff  call 0x8c76c
    X86_AT(c, 0x8d4ffu);
    push32(c, 0x8d504u); x86_call_known(c, 0x8c76cu, f_0008c76c); X86_RET(c, 0x8d504u);
    X86_TICK(c, 41);
    // 08d504  add esp, 0x10
    X86_AT(c, 0x8d504u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d507  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d507u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d50a  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0x8d50au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 08d50d  sub eax, 3
    X86_AT(c, 0x8d50du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 08d510  push eax
    X86_AT(c, 0x8d510u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d511  push dword ptr [edi + 1]
    X86_AT(c, 0x8d511u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))); push32(c, v); }
    // 08d514  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d514u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d517  add eax, 2
    X86_AT(c, 0x8d517u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 08d51a  push eax
    X86_AT(c, 0x8d51au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d51b  push dword ptr [edi + 1]
    X86_AT(c, 0x8d51bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))); push32(c, v); }
    // 08d51e  call 0x8c76c
    X86_AT(c, 0x8d51eu);
    push32(c, 0x8d523u); x86_call_known(c, 0x8c76cu, f_0008c76c); X86_RET(c, 0x8d523u);
    X86_TICK(c, 24);
    // 08d523  mov byte ptr [edi], 0
    X86_AT(c, 0x8d523u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 08d526  add esp, 0x10
    X86_AT(c, 0x8d526u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 08d529  pop edi
    X86_AT(c, 0x8d529u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d52a  leave 
    X86_AT(c, 0x8d52au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d52b  ret 
    X86_AT(c, 0x8d52bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d440u, "ran off the end of a function");
}
void f_0008d52c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08d52c  push ebp
    X86_AT(c, 0x8d52cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d52d  mov ebp, esp
    X86_AT(c, 0x8d52du);
    c.r[5] = c.r[4];
    // 08d52f  sub esp, 0x40
    X86_AT(c, 0x8d52fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x40u, 0, 4); }
    // 08d532  push ebx
    X86_AT(c, 0x8d532u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d533  push edi
    X86_AT(c, 0x8d533u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d534  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8d534u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08d537  push 9
    X86_AT(c, 0x8d537u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 08d539  call 0x8c364
    X86_AT(c, 0x8d539u);
    push32(c, 0x8d53eu); x86_call_known(c, 0x8c364u, f_0008c364); X86_RET(c, 0x8d53eu);
    X86_TICK(c, 32);
    // 08d53e  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0x8d53eu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 08d542  mov word ptr [ebp - 0x40], ax
    X86_AT(c, 0x8d542u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC0u)), (c.r[0] & 0xFFFFu));
    // 08d546  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0x8d546u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 08d54a  mov word ptr [ebp - 0x3e], ax
    X86_AT(c, 0x8d54au);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC2u)), (c.r[0] & 0xFFFFu));
    // 08d54e  mov edx, 0xffff
    X86_AT(c, 0x8d54eu);
    c.r[2] = 0xFFFFu;
    // 08d553  sub eax, eax
    X86_AT(c, 0x8d553u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08d555  push edi
    X86_AT(c, 0x8d555u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d556  mov ecx, edx
    X86_AT(c, 0x8d556u);
    c.r[1] = c.r[2];
    // 08d558  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x8d558u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 08d55a  jne 0x8d55f
    X86_AT(c, 0x8d55au);
    if (x86_cc(c, 5)) { goto L_8d55f; }
    X86_TICK(c, 4);
    // 08d55c  inc ecx
    X86_AT(c, 0x8d55cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 08d55d  sub edx, ecx
    X86_AT(c, 0x8d55du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_8d55f:
    X86_TICK(c, 19);
    // 08d55f  pop edi
    X86_AT(c, 0x8d55fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d560  mov word ptr [ebp - 0x3c], dx
    X86_AT(c, 0x8d560u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC4u)), (c.r[2] & 0xFFFFu));
    // 08d564  push edi
    X86_AT(c, 0x8d564u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d565  lea eax, [ebp - 0x3a]
    X86_AT(c, 0x8d565u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC6u);
    // 08d568  push eax
    X86_AT(c, 0x8d568u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d569  call 0x92fb4
    X86_AT(c, 0x8d569u);
    push32(c, 0x8d56eu); x86_call_known(c, 0x92fb4u, f_00092fb4); X86_RET(c, 0x8d56eu);
    X86_TICK(c, 15);
    // 08d56e  lea ebx, [ebp - 0x40]
    X86_AT(c, 0x8d56eu);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFC0u);
    // 08d571  push ebx
    X86_AT(c, 0x8d571u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d572  push 1
    X86_AT(c, 0x8d572u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08d574  push 0x34494
    X86_AT(c, 0x8d574u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08d579  call 0xa45
    X86_AT(c, 0x8d579u);
    push32(c, 0x8d57eu); x86_call_known(c, 0xa45u, f_00000a45); X86_RET(c, 0x8d57eu);
    X86_TICK(c, 15);
    // 08d57e  movsx eax, word ptr [0x34b98]
    X86_AT(c, 0x8d57eu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34B98u)));
    // 08d585  push eax
    X86_AT(c, 0x8d585u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d586  call 0x8c364
    X86_AT(c, 0x8d586u);
    push32(c, 0x8d58bu); x86_call_known(c, 0x8c364u, f_0008c364); X86_RET(c, 0x8d58bu);
    X86_TICK(c, 26);
    // 08d58b  add esp, 0x1c
    X86_AT(c, 0x8d58bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 08d58e  pop edi
    X86_AT(c, 0x8d58eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d58f  pop ebx
    X86_AT(c, 0x8d58fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08d590  leave 
    X86_AT(c, 0x8d590u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d591  ret 
    X86_AT(c, 0x8d591u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d52cu, "ran off the end of a function");
}
void f_0008d594(X86Cpu& c) {
    X86_TICK(c, 74);
    // 08d594  push ebp
    X86_AT(c, 0x8d594u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d595  mov ebp, esp
    X86_AT(c, 0x8d595u);
    c.r[5] = c.r[4];
    // 08d597  push edi
    X86_AT(c, 0x8d597u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d598  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8d598u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08d59b  lea eax, [eax + eax*2]
    X86_AT(c, 0x8d59bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 08d59e  lea edx, [eax + eax*8]
    X86_AT(c, 0x8d59eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 08d5a1  lea edx, [eax + edx*2]
    X86_AT(c, 0x8d5a1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 08d5a4  lea edi, [edx + 0x34ba0]
    X86_AT(c, 0x8d5a4u);
    c.r[7] = (uint32_t)(c.r[2] + 0x34BA0u);
    // 08d5aa  push dword ptr [edi + 0x31]
    X86_AT(c, 0x8d5aau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
    // 08d5ad  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d5adu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d5b0  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0x8d5b0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 08d5b3  sub eax, 3
    X86_AT(c, 0x8d5b3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 08d5b6  push eax
    X86_AT(c, 0x8d5b6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d5b7  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d5b7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d5ba  add eax, dword ptr [edi + 9]
    X86_AT(c, 0x8d5bau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 08d5bd  sub eax, 3
    X86_AT(c, 0x8d5bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 08d5c0  push eax
    X86_AT(c, 0x8d5c0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d5c1  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x8d5c1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 08d5c4  add eax, 2
    X86_AT(c, 0x8d5c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 08d5c7  push eax
    X86_AT(c, 0x8d5c7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d5c8  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x8d5c8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 08d5cb  add eax, 2
    X86_AT(c, 0x8d5cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 08d5ce  push eax
    X86_AT(c, 0x8d5ceu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d5cf  call 0x8c8f0
    X86_AT(c, 0x8d5cfu);
    push32(c, 0x8d5d4u); x86_call_known(c, 0x8c8f0u, f_0008c8f0); X86_RET(c, 0x8d5d4u);
    X86_TICK(c, 12);
    // 08d5d4  push dword ptr [edi + 0x25]
    X86_AT(c, 0x8d5d4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x25u))); push32(c, v); }
    // 08d5d7  call 0x8c1f4
    X86_AT(c, 0x8d5d7u);
    push32(c, 0x8d5dcu); x86_call_known(c, 0x8c1f4u, f_0008c1f4); X86_RET(c, 0x8d5dcu);
    X86_TICK(c, 12);
    // 08d5dc  push dword ptr [edi + 0x31]
    X86_AT(c, 0x8d5dcu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
    // 08d5df  call 0x8c224
    X86_AT(c, 0x8d5dfu);
    push32(c, 0x8d5e4u); x86_call_known(c, 0x8c224u, f_0008c224); X86_RET(c, 0x8d5e4u);
    X86_TICK(c, 14);
    // 08d5e4  add esp, 0x1c
    X86_AT(c, 0x8d5e4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 08d5e7  cmp dword ptr [edi + 0x35], 0
    X86_AT(c, 0x8d5e7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x35u))), 0x0u, 0, 4);
    // 08d5eb  jne 0x8d5f1
    X86_AT(c, 0x8d5ebu);
    if (x86_cc(c, 5)) { goto L_8d5f1; }
    X86_TICK(c, 9);
    // 08d5ed  push 0xb
    X86_AT(c, 0x8d5edu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 08d5ef  jmp 0x8d5f4
    X86_AT(c, 0x8d5efu);
    goto L_8d5f4;
L_8d5f1:
    X86_TICK(c, 5);
    // 08d5f1  push dword ptr [edi + 0x31]
    X86_AT(c, 0x8d5f1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
L_8d5f4:
    X86_TICK(c, 7);
    // 08d5f4  call 0x8c20c
    X86_AT(c, 0x8d5f4u);
    push32(c, 0x8d5f9u); x86_call_known(c, 0x8c20cu, f_0008c20c); X86_RET(c, 0x8d5f9u);
    X86_TICK(c, 19);
    // 08d5f9  add esp, 4
    X86_AT(c, 0x8d5f9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08d5fc  movsx eax, word ptr [0x34b9a]
    X86_AT(c, 0x8d5fcu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x34B9Au)));
    // 08d603  push eax
    X86_AT(c, 0x8d603u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08d604  push 0x34494
    X86_AT(c, 0x8d604u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08d609  call 0x245
    X86_AT(c, 0x8d609u);
    push32(c, 0x8d60eu); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x8d60eu);
    X86_TICK(c, 22);
    // 08d60e  add esp, 8
    X86_AT(c, 0x8d60eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08d611  pop edi
    X86_AT(c, 0x8d611u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d612  leave 
    X86_AT(c, 0x8d612u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d613  ret 
    X86_AT(c, 0x8d613u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d594u, "ran off the end of a function");
}
void f_0008d66c(X86Cpu& c) {
    X86_TICK(c, 32);
    // 08d66c  push ebp
    X86_AT(c, 0x8d66cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d66d  mov ebp, esp
    X86_AT(c, 0x8d66du);
    c.r[5] = c.r[4];
    // 08d66f  push ebx
    X86_AT(c, 0x8d66fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d670  push edi
    X86_AT(c, 0x8d670u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d671  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8d671u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08d674  lea eax, [edi + edi*2]
    X86_AT(c, 0x8d674u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08d677  lea edx, [eax + eax*8]
    X86_AT(c, 0x8d677u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 08d67a  lea edx, [eax + edx*2]
    X86_AT(c, 0x8d67au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 08d67d  push dword ptr [edx + 0x34bd1]
    X86_AT(c, 0x8d67du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x34BD1u))); push32(c, v); }
    // 08d683  mov ebx, edx
    X86_AT(c, 0x8d683u);
    c.r[3] = c.r[2];
    // 08d685  call 0x8c20c
    X86_AT(c, 0x8d685u);
    push32(c, 0x8d68au); x86_call_known(c, 0x8c20cu, f_0008c20c); X86_RET(c, 0x8d68au);
    X86_TICK(c, 61);
    // 08d68a  mov ax, word ptr [ebx + 0x34ba1]
    X86_AT(c, 0x8d68au);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x34BA1u))));
    // 08d691  add ax, 2
    X86_AT(c, 0x8d691u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 08d695  mov word ptr [0x34a94], ax
    X86_AT(c, 0x8d695u);
    wr16((c.sbase[3] + (uint32_t)(0x34A94u)), (c.r[0] & 0xFFFFu));
    // 08d69b  mov ax, word ptr [ebx + 0x34ba5]
    X86_AT(c, 0x8d69bu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x34BA5u))));
    // 08d6a2  add ax, 2
    X86_AT(c, 0x8d6a2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 08d6a6  mov word ptr [0x34a96], ax
    X86_AT(c, 0x8d6a6u);
    wr16((c.sbase[3] + (uint32_t)(0x34A96u)), (c.r[0] & 0xFFFFu));
    // 08d6ac  mov ax, word ptr [ebx + 0x34ba1]
    X86_AT(c, 0x8d6acu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x34BA1u))));
    // 08d6b3  add ax, word ptr [ebx + 0x34ba9]
    X86_AT(c, 0x8d6b3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x34BA9u))), 0, 2)); }
    // 08d6ba  sub ax, 3
    X86_AT(c, 0x8d6bau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3u, 0, 2)); }
    // 08d6be  mov word ptr [0x34a98], ax
    X86_AT(c, 0x8d6beu);
    wr16((c.sbase[3] + (uint32_t)(0x34A98u)), (c.r[0] & 0xFFFFu));
    // 08d6c4  mov ax, word ptr [ebx + 0x34ba5]
    X86_AT(c, 0x8d6c4u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x34BA5u))));
    // 08d6cb  add ax, word ptr [ebx + 0x34bad]
    X86_AT(c, 0x8d6cbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x34BADu))), 0, 2)); }
    // 08d6d2  sub ax, 3
    X86_AT(c, 0x8d6d2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3u, 0, 2)); }
    // 08d6d6  mov word ptr [0x34a9a], ax
    X86_AT(c, 0x8d6d6u);
    wr16((c.sbase[3] + (uint32_t)(0x34A9Au)), (c.r[0] & 0xFFFFu));
    // 08d6dc  push 0x34a94
    X86_AT(c, 0x8d6dcu);
    { uint32_t v = 0x34A94u; push32(c, v); }
    // 08d6e1  push 0xfffffff0
    X86_AT(c, 0x8d6e1u);
    { uint32_t v = 0xFFFFFFF0u; push32(c, v); }
    // 08d6e3  push 0
    X86_AT(c, 0x8d6e3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08d6e5  push 1
    X86_AT(c, 0x8d6e5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08d6e7  push 0x34494
    X86_AT(c, 0x8d6e7u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08d6ec  call 0x636
    X86_AT(c, 0x8d6ecu);
    push32(c, 0x8d6f1u); x86_call_known(c, 0x636u, f_00000636); X86_RET(c, 0x8d6f1u);
    X86_TICK(c, 14);
    // 08d6f1  add esp, 0x18
    X86_AT(c, 0x8d6f1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 08d6f4  cmp dword ptr [ebx + 0x34bd5], 0
    X86_AT(c, 0x8d6f4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x34BD5u))), 0x0u, 0, 4);
    // 08d6fb  jne 0x8d707
    X86_AT(c, 0x8d6fbu);
    if (x86_cc(c, 5)) { goto L_8d707; }
    X86_TICK(c, 9);
    // 08d6fd  push 0xb
    X86_AT(c, 0x8d6fdu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 08d6ff  call 0x8c20c
    X86_AT(c, 0x8d6ffu);
    push32(c, 0x8d704u); x86_call_known(c, 0x8c20cu, f_0008c20c); X86_RET(c, 0x8d704u);
    X86_TICK(c, 2);
    // 08d704  add esp, 4
    X86_AT(c, 0x8d704u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8d707:
    X86_TICK(c, 24);
    // 08d707  pop edi
    X86_AT(c, 0x8d707u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d708  pop ebx
    X86_AT(c, 0x8d708u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08d709  leave 
    X86_AT(c, 0x8d709u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d70a  ret 
    X86_AT(c, 0x8d70au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d66cu, "ran off the end of a function");
}
void f_0008d70c(X86Cpu& c) {
    X86_TICK(c, 33);
    // 08d70c  push ebp
    X86_AT(c, 0x8d70cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d70d  mov ebp, esp
    X86_AT(c, 0x8d70du);
    c.r[5] = c.r[4];
    // 08d70f  push edi
    X86_AT(c, 0x8d70fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d710  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8d710u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08d713  lea eax, [edi + edi*2]
    X86_AT(c, 0x8d713u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08d716  lea edx, [eax + eax*8]
    X86_AT(c, 0x8d716u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 08d719  lea edx, [eax + edx*2]
    X86_AT(c, 0x8d719u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 08d71c  mov dword ptr [edx + 0x34bb9], 0
    X86_AT(c, 0x8d71cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x34BB9u)), 0x0u);
    // 08d726  mov eax, dword ptr [edx + 0x34bbd]
    X86_AT(c, 0x8d726u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x34BBDu)));
    // 08d72c  cmp eax, dword ptr [edx + 0x34bb5]
    X86_AT(c, 0x8d72cu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x34BB5u))), 0, 4);
    // 08d732  jne 0x8d73f
    X86_AT(c, 0x8d732u);
    if (x86_cc(c, 5)) { goto L_8d73f; }
    X86_TICK(c, 9);
    // 08d734  push edi
    X86_AT(c, 0x8d734u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d735  call 0x8d66c
    X86_AT(c, 0x8d735u);
    push32(c, 0x8d73au); x86_call_known(c, 0x8d66cu, f_0008d66c); X86_RET(c, 0x8d73au);
    X86_TICK(c, 9);
    // 08d73a  add esp, 4
    X86_AT(c, 0x8d73au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08d73d  jmp 0x8d74e
    X86_AT(c, 0x8d73du);
    goto L_8d74e;
L_8d73f:
    X86_TICK(c, 12);
    // 08d73f  lea eax, [edi + edi*2]
    X86_AT(c, 0x8d73fu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08d742  lea edx, [eax + eax*8]
    X86_AT(c, 0x8d742u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 08d745  lea edx, [eax + edx*2]
    X86_AT(c, 0x8d745u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 08d748  inc dword ptr [edx + 0x34bbd]
    X86_AT(c, 0x8d748u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x34BBDu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_8d74e:
    X86_TICK(c, 20);
    // 08d74e  pop edi
    X86_AT(c, 0x8d74eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d74f  leave 
    X86_AT(c, 0x8d74fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d750  ret 
    X86_AT(c, 0x8d750u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d70cu, "ran off the end of a function");
}
void f_0008d754(X86Cpu& c) {
    X86_TICK(c, 28);
    // 08d754  push ebp
    X86_AT(c, 0x8d754u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d755  mov ebp, esp
    X86_AT(c, 0x8d755u);
    c.r[5] = c.r[4];
    // 08d757  sub esp, 0xc
    X86_AT(c, 0x8d757u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 08d75a  push ebx
    X86_AT(c, 0x8d75au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d75b  push esi
    X86_AT(c, 0x8d75bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08d75c  push edi
    X86_AT(c, 0x8d75cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d75d  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8d75du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08d760  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8d760u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08d763  lea eax, [eax + eax*2]
    X86_AT(c, 0x8d763u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 08d766  lea edx, [eax + eax*8]
    X86_AT(c, 0x8d766u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 08d769  lea edx, [eax + edx*2]
    X86_AT(c, 0x8d769u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 08d76c  lea ebx, [edx + 0x34ba0]
    X86_AT(c, 0x8d76cu);
    c.r[3] = (uint32_t)(c.r[2] + 0x34BA0u);
L_8d772:
    X86_TICK(c, 12);
    // 08d772  cmp byte ptr [edi], 0
    X86_AT(c, 0x8d772u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 08d775  je 0x8d8c4
    X86_AT(c, 0x8d775u);
    if (x86_cc(c, 4)) { goto L_8d8c4; }
    X86_TICK(c, 52);
    // 08d77b  mov dword ptr [ebp - 0xc], 0x35046
    X86_AT(c, 0x8d77bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x35046u);
    // 08d782  mov ax, word ptr [ebx + 1]
    X86_AT(c, 0x8d782u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x1u))));
    // 08d786  add ax, 4
    X86_AT(c, 0x8d786u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x4u, 0, 2)); }
    // 08d78a  mov edx, dword ptr [ebx + 0x19]
    X86_AT(c, 0x8d78au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 08d78d  shl edx, 3
    X86_AT(c, 0x8d78du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 08d790  add edx, eax
    X86_AT(c, 0x8d790u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 08d792  mov word ptr [0x35040], dx
    X86_AT(c, 0x8d792u);
    wr16((c.sbase[3] + (uint32_t)(0x35040u)), (c.r[2] & 0xFFFFu));
    // 08d799  mov ax, word ptr [ebx + 5]
    X86_AT(c, 0x8d799u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x5u))));
    // 08d79d  add ax, 0x11
    X86_AT(c, 0x8d79du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 08d7a1  mov edx, dword ptr [ebx + 0x1d]
    X86_AT(c, 0x8d7a1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 08d7a4  shl edx, 4
    X86_AT(c, 0x8d7a4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 08d7a7  add edx, eax
    X86_AT(c, 0x8d7a7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 08d7a9  mov word ptr [0x35042], dx
    X86_AT(c, 0x8d7a9u);
    wr16((c.sbase[3] + (uint32_t)(0x35042u)), (c.r[2] & 0xFFFFu));
    // 08d7b0  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x8d7b0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 08d7b7  mov esi, dword ptr [ebx + 0x11]
    X86_AT(c, 0x8d7b7u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x11u)));
    // 08d7ba  sub esi, dword ptr [ebx + 0x19]
    X86_AT(c, 0x8d7bau);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u))), 0, 4); }
    // 08d7bd  inc esi
    X86_AT(c, 0x8d7bdu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08d7be  mov dword ptr [ebp - 8], esi
    X86_AT(c, 0x8d7beu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[6]);
L_8d7c1:
    X86_TICK(c, 7);
    // 08d7c1  and esi, esi
    X86_AT(c, 0x8d7c1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 08d7c3  jle 0x8d857
    X86_AT(c, 0x8d7c3u);
    if (x86_cc(c, 14)) { goto L_8d857; }
    X86_TICK(c, 17);
    // 08d7c9  mov al, byte ptr [edi]
    X86_AT(c, 0x8d7c9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08d7cb  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d7cbu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 08d7ce  mov byte ptr [edx], al
    X86_AT(c, 0x8d7ceu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 08d7d0  cmp esi, 1
    X86_AT(c, 0x8d7d0u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 08d7d3  jne 0x8d834
    X86_AT(c, 0x8d7d3u);
    if (x86_cc(c, 5)) { goto L_8d834; }
    X86_TICK(c, 11);
    // 08d7d9  mov al, byte ptr [edi]
    X86_AT(c, 0x8d7d9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08d7db  cmp al, 0x81
    X86_AT(c, 0x8d7dbu);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 08d7dd  jb 0x8d7e3
    X86_AT(c, 0x8d7ddu);
    if (x86_cc(c, 2)) { goto L_8d7e3; }
    X86_TICK(c, 7);
    // 08d7df  cmp al, 0x9f
    X86_AT(c, 0x8d7dfu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 08d7e1  jbe 0x8d7f1
    X86_AT(c, 0x8d7e1u);
    if (x86_cc(c, 6)) { goto L_8d7f1; }
L_8d7e3:
    X86_TICK(c, 11);
    // 08d7e3  mov al, byte ptr [edi]
    X86_AT(c, 0x8d7e3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08d7e5  cmp al, 0xe0
    X86_AT(c, 0x8d7e5u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 08d7e7  jb 0x8d834
    X86_AT(c, 0x8d7e7u);
    if (x86_cc(c, 2)) { goto L_8d834; }
    X86_TICK(c, 7);
    // 08d7ed  cmp al, 0xfc
    X86_AT(c, 0x8d7edu);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 08d7ef  ja 0x8d834
    X86_AT(c, 0x8d7efu);
    if (x86_cc(c, 7)) { goto L_8d834; }
L_8d7f1:
    X86_TICK(c, 11);
    // 08d7f1  mov al, byte ptr [edi + 1]
    X86_AT(c, 0x8d7f1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 08d7f4  cmp al, 0x40
    X86_AT(c, 0x8d7f4u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 08d7f6  jb 0x8d7fc
    X86_AT(c, 0x8d7f6u);
    if (x86_cc(c, 2)) { goto L_8d7fc; }
    X86_TICK(c, 7);
    // 08d7f8  cmp al, 0x7e
    X86_AT(c, 0x8d7f8u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 08d7fa  jbe 0x8d807
    X86_AT(c, 0x8d7fau);
    if (x86_cc(c, 6)) { goto L_8d807; }
L_8d7fc:
    X86_TICK(c, 11);
    // 08d7fc  mov al, byte ptr [edi + 1]
    X86_AT(c, 0x8d7fcu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 08d7ff  cmp al, 0x80
    X86_AT(c, 0x8d7ffu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 08d801  jb 0x8d834
    X86_AT(c, 0x8d801u);
    if (x86_cc(c, 2)) { goto L_8d834; }
    X86_TICK(c, 7);
    // 08d803  cmp al, 0xfc
    X86_AT(c, 0x8d803u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 08d805  ja 0x8d834
    X86_AT(c, 0x8d805u);
    if (x86_cc(c, 7)) { goto L_8d834; }
L_8d807:
    X86_TICK(c, 11);
    // 08d807  mov al, byte ptr [edi - 1]
    X86_AT(c, 0x8d807u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 08d80a  cmp al, 0x81
    X86_AT(c, 0x8d80au);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 08d80c  jb 0x8d812
    X86_AT(c, 0x8d80cu);
    if (x86_cc(c, 2)) { goto L_8d812; }
    X86_TICK(c, 7);
    // 08d80e  cmp al, 0x9f
    X86_AT(c, 0x8d80eu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 08d810  jbe 0x8d81d
    X86_AT(c, 0x8d810u);
    if (x86_cc(c, 6)) { goto L_8d81d; }
L_8d812:
    X86_TICK(c, 11);
    // 08d812  mov al, byte ptr [edi - 1]
    X86_AT(c, 0x8d812u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 08d815  cmp al, 0xe0
    X86_AT(c, 0x8d815u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 08d817  jb 0x8d857
    X86_AT(c, 0x8d817u);
    if (x86_cc(c, 2)) { goto L_8d857; }
    X86_TICK(c, 7);
    // 08d819  cmp al, 0xfc
    X86_AT(c, 0x8d819u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 08d81b  ja 0x8d857
    X86_AT(c, 0x8d81bu);
    if (x86_cc(c, 7)) { goto L_8d857; }
L_8d81d:
    X86_TICK(c, 11);
    // 08d81d  mov al, byte ptr [edi]
    X86_AT(c, 0x8d81du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08d81f  cmp al, 0x40
    X86_AT(c, 0x8d81fu);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 08d821  jb 0x8d827
    X86_AT(c, 0x8d821u);
    if (x86_cc(c, 2)) { goto L_8d827; }
    X86_TICK(c, 7);
    // 08d823  cmp al, 0x7e
    X86_AT(c, 0x8d823u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 08d825  jbe 0x8d831
    X86_AT(c, 0x8d825u);
    if (x86_cc(c, 6)) { goto L_8d831; }
L_8d827:
    X86_TICK(c, 11);
    // 08d827  mov al, byte ptr [edi]
    X86_AT(c, 0x8d827u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08d829  cmp al, 0x80
    X86_AT(c, 0x8d829u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 08d82b  jb 0x8d857
    X86_AT(c, 0x8d82bu);
    if (x86_cc(c, 2)) { goto L_8d857; }
    X86_TICK(c, 7);
    // 08d82d  cmp al, 0xfc
    X86_AT(c, 0x8d82du);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 08d82f  ja 0x8d857
    X86_AT(c, 0x8d82fu);
    if (x86_cc(c, 7)) { goto L_8d857; }
L_8d831:
    X86_TICK(c, 9);
    // 08d831  inc edi
    X86_AT(c, 0x8d831u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08d832  jmp 0x8d857
    X86_AT(c, 0x8d832u);
    goto L_8d857;
L_8d834:
    X86_TICK(c, 12);
    // 08d834  cmp byte ptr [edi], 0xa
    X86_AT(c, 0x8d834u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xAu, 0, 1);
    // 08d837  jne 0x8d83f
    X86_AT(c, 0x8d837u);
    if (x86_cc(c, 5)) { goto L_8d83f; }
    X86_TICK(c, 15);
    // 08d839  inc edi
    X86_AT(c, 0x8d839u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08d83a  dec dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d83au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 08d83d  jmp 0x8d857
    X86_AT(c, 0x8d83du);
    goto L_8d857;
L_8d83f:
    X86_TICK(c, 12);
    // 08d83f  cmp byte ptr [edi], 0
    X86_AT(c, 0x8d83fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 08d842  jne 0x8d84d
    X86_AT(c, 0x8d842u);
    if (x86_cc(c, 5)) { goto L_8d84d; }
    X86_TICK(c, 9);
    // 08d844  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0x8d844u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 08d84b  jmp 0x8d857
    X86_AT(c, 0x8d84bu);
    goto L_8d857;
L_8d84d:
    X86_TICK(c, 17);
    // 08d84d  dec esi
    X86_AT(c, 0x8d84du);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 08d84e  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d84eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 08d851  inc edi
    X86_AT(c, 0x8d851u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08d852  jmp 0x8d7c1
    X86_AT(c, 0x8d852u);
    X86_POLL(c, 0x8d7c1u); goto L_8d7c1;
L_8d857:
    X86_TICK(c, 33);
    // 08d857  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d857u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 08d85a  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d85au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 08d85d  mov byte ptr [eax], 0
    X86_AT(c, 0x8d85du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
    // 08d860  mov eax, esi
    X86_AT(c, 0x8d860u);
    c.r[0] = c.r[6];
    // 08d862  mov dx, word ptr [ebp - 8]
    X86_AT(c, 0x8d862u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 08d866  sub edx, eax
    X86_AT(c, 0x8d866u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08d868  mov word ptr [0x35044], dx
    X86_AT(c, 0x8d868u);
    wr16((c.sbase[3] + (uint32_t)(0x35044u)), (c.r[2] & 0xFFFFu));
    // 08d86f  push 0x35040
    X86_AT(c, 0x8d86fu);
    { uint32_t v = 0x35040u; push32(c, v); }
    // 08d874  push 0x34494
    X86_AT(c, 0x8d874u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08d879  call 0x9fd
    X86_AT(c, 0x8d879u);
    push32(c, 0x8d87eu); x86_call_known(c, 0x9fdu, f_000009fd); X86_RET(c, 0x8d87eu);
    X86_TICK(c, 28);
    // 08d87e  mov eax, dword ptr [ebx + 0x19]
    X86_AT(c, 0x8d87eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 08d881  add eax, dword ptr [ebp - 8]
    X86_AT(c, 0x8d881u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 08d884  sub eax, esi
    X86_AT(c, 0x8d884u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 08d886  mov dword ptr [ebx + 0x19], eax
    X86_AT(c, 0x8d886u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), c.r[0]);
    // 08d889  add esp, 8
    X86_AT(c, 0x8d889u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08d88c  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x8d88cu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 08d890  jne 0x8d772
    X86_AT(c, 0x8d890u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8d772u); goto L_8d772; }
    X86_TICK(c, 15);
    // 08d896  mov eax, dword ptr [ebx + 0x1d]
    X86_AT(c, 0x8d896u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 08d899  cmp eax, dword ptr [ebx + 0x15]
    X86_AT(c, 0x8d899u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x15u))), 0, 4);
    // 08d89c  jne 0x8d8b5
    X86_AT(c, 0x8d89cu);
    if (x86_cc(c, 5)) { goto L_8d8b5; }
    X86_TICK(c, 12);
    // 08d89e  push dword ptr [ebp + 8]
    X86_AT(c, 0x8d89eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08d8a1  call 0x8d66c
    X86_AT(c, 0x8d8a1u);
    push32(c, 0x8d8a6u); x86_call_known(c, 0x8d66cu, f_0008d66c); X86_RET(c, 0x8d8a6u);
    X86_TICK(c, 11);
    // 08d8a6  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0x8d8a6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 08d8ad  add esp, 4
    X86_AT(c, 0x8d8adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08d8b0  jmp 0x8d772
    X86_AT(c, 0x8d8b0u);
    X86_POLL(c, 0x8d772u); goto L_8d772;
L_8d8b5:
    X86_TICK(c, 15);
    // 08d8b5  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0x8d8b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 08d8bc  inc dword ptr [ebx + 0x1d]
    X86_AT(c, 0x8d8bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 08d8bf  jmp 0x8d772
    X86_AT(c, 0x8d8bfu);
    X86_POLL(c, 0x8d772u); goto L_8d772;
L_8d8c4:
    X86_TICK(c, 28);
    // 08d8c4  pop edi
    X86_AT(c, 0x8d8c4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d8c5  pop esi
    X86_AT(c, 0x8d8c5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08d8c6  pop ebx
    X86_AT(c, 0x8d8c6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08d8c7  leave 
    X86_AT(c, 0x8d8c7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d8c8  ret 
    X86_AT(c, 0x8d8c8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d754u, "ran off the end of a function");
}
void f_0008d772(X86Cpu& c) {
L_8d772:
    X86_TICK(c, 12);
    // 08d772  cmp byte ptr [edi], 0
    X86_AT(c, 0x8d772u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 08d775  je 0x8d8c4
    X86_AT(c, 0x8d775u);
    if (x86_cc(c, 4)) { goto L_8d8c4; }
    X86_TICK(c, 52);
    // 08d77b  mov dword ptr [ebp - 0xc], 0x35046
    X86_AT(c, 0x8d77bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x35046u);
    // 08d782  mov ax, word ptr [ebx + 1]
    X86_AT(c, 0x8d782u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x1u))));
    // 08d786  add ax, 4
    X86_AT(c, 0x8d786u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x4u, 0, 2)); }
    // 08d78a  mov edx, dword ptr [ebx + 0x19]
    X86_AT(c, 0x8d78au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 08d78d  shl edx, 3
    X86_AT(c, 0x8d78du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 08d790  add edx, eax
    X86_AT(c, 0x8d790u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 08d792  mov word ptr [0x35040], dx
    X86_AT(c, 0x8d792u);
    wr16((c.sbase[3] + (uint32_t)(0x35040u)), (c.r[2] & 0xFFFFu));
    // 08d799  mov ax, word ptr [ebx + 5]
    X86_AT(c, 0x8d799u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x5u))));
    // 08d79d  add ax, 0x11
    X86_AT(c, 0x8d79du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 08d7a1  mov edx, dword ptr [ebx + 0x1d]
    X86_AT(c, 0x8d7a1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 08d7a4  shl edx, 4
    X86_AT(c, 0x8d7a4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 08d7a7  add edx, eax
    X86_AT(c, 0x8d7a7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 08d7a9  mov word ptr [0x35042], dx
    X86_AT(c, 0x8d7a9u);
    wr16((c.sbase[3] + (uint32_t)(0x35042u)), (c.r[2] & 0xFFFFu));
    // 08d7b0  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x8d7b0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 08d7b7  mov esi, dword ptr [ebx + 0x11]
    X86_AT(c, 0x8d7b7u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x11u)));
    // 08d7ba  sub esi, dword ptr [ebx + 0x19]
    X86_AT(c, 0x8d7bau);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u))), 0, 4); }
    // 08d7bd  inc esi
    X86_AT(c, 0x8d7bdu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08d7be  mov dword ptr [ebp - 8], esi
    X86_AT(c, 0x8d7beu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[6]);
L_8d7c1:
    X86_TICK(c, 7);
    // 08d7c1  and esi, esi
    X86_AT(c, 0x8d7c1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 08d7c3  jle 0x8d857
    X86_AT(c, 0x8d7c3u);
    if (x86_cc(c, 14)) { goto L_8d857; }
    X86_TICK(c, 17);
    // 08d7c9  mov al, byte ptr [edi]
    X86_AT(c, 0x8d7c9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08d7cb  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d7cbu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 08d7ce  mov byte ptr [edx], al
    X86_AT(c, 0x8d7ceu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 08d7d0  cmp esi, 1
    X86_AT(c, 0x8d7d0u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 08d7d3  jne 0x8d834
    X86_AT(c, 0x8d7d3u);
    if (x86_cc(c, 5)) { goto L_8d834; }
    X86_TICK(c, 11);
    // 08d7d9  mov al, byte ptr [edi]
    X86_AT(c, 0x8d7d9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08d7db  cmp al, 0x81
    X86_AT(c, 0x8d7dbu);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 08d7dd  jb 0x8d7e3
    X86_AT(c, 0x8d7ddu);
    if (x86_cc(c, 2)) { goto L_8d7e3; }
    X86_TICK(c, 7);
    // 08d7df  cmp al, 0x9f
    X86_AT(c, 0x8d7dfu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 08d7e1  jbe 0x8d7f1
    X86_AT(c, 0x8d7e1u);
    if (x86_cc(c, 6)) { goto L_8d7f1; }
L_8d7e3:
    X86_TICK(c, 11);
    // 08d7e3  mov al, byte ptr [edi]
    X86_AT(c, 0x8d7e3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08d7e5  cmp al, 0xe0
    X86_AT(c, 0x8d7e5u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 08d7e7  jb 0x8d834
    X86_AT(c, 0x8d7e7u);
    if (x86_cc(c, 2)) { goto L_8d834; }
    X86_TICK(c, 7);
    // 08d7ed  cmp al, 0xfc
    X86_AT(c, 0x8d7edu);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 08d7ef  ja 0x8d834
    X86_AT(c, 0x8d7efu);
    if (x86_cc(c, 7)) { goto L_8d834; }
L_8d7f1:
    X86_TICK(c, 11);
    // 08d7f1  mov al, byte ptr [edi + 1]
    X86_AT(c, 0x8d7f1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 08d7f4  cmp al, 0x40
    X86_AT(c, 0x8d7f4u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 08d7f6  jb 0x8d7fc
    X86_AT(c, 0x8d7f6u);
    if (x86_cc(c, 2)) { goto L_8d7fc; }
    X86_TICK(c, 7);
    // 08d7f8  cmp al, 0x7e
    X86_AT(c, 0x8d7f8u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 08d7fa  jbe 0x8d807
    X86_AT(c, 0x8d7fau);
    if (x86_cc(c, 6)) { goto L_8d807; }
L_8d7fc:
    X86_TICK(c, 11);
    // 08d7fc  mov al, byte ptr [edi + 1]
    X86_AT(c, 0x8d7fcu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 08d7ff  cmp al, 0x80
    X86_AT(c, 0x8d7ffu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 08d801  jb 0x8d834
    X86_AT(c, 0x8d801u);
    if (x86_cc(c, 2)) { goto L_8d834; }
    X86_TICK(c, 7);
    // 08d803  cmp al, 0xfc
    X86_AT(c, 0x8d803u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 08d805  ja 0x8d834
    X86_AT(c, 0x8d805u);
    if (x86_cc(c, 7)) { goto L_8d834; }
L_8d807:
    X86_TICK(c, 11);
    // 08d807  mov al, byte ptr [edi - 1]
    X86_AT(c, 0x8d807u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 08d80a  cmp al, 0x81
    X86_AT(c, 0x8d80au);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 08d80c  jb 0x8d812
    X86_AT(c, 0x8d80cu);
    if (x86_cc(c, 2)) { goto L_8d812; }
    X86_TICK(c, 7);
    // 08d80e  cmp al, 0x9f
    X86_AT(c, 0x8d80eu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 08d810  jbe 0x8d81d
    X86_AT(c, 0x8d810u);
    if (x86_cc(c, 6)) { goto L_8d81d; }
L_8d812:
    X86_TICK(c, 11);
    // 08d812  mov al, byte ptr [edi - 1]
    X86_AT(c, 0x8d812u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 08d815  cmp al, 0xe0
    X86_AT(c, 0x8d815u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 08d817  jb 0x8d857
    X86_AT(c, 0x8d817u);
    if (x86_cc(c, 2)) { goto L_8d857; }
    X86_TICK(c, 7);
    // 08d819  cmp al, 0xfc
    X86_AT(c, 0x8d819u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 08d81b  ja 0x8d857
    X86_AT(c, 0x8d81bu);
    if (x86_cc(c, 7)) { goto L_8d857; }
L_8d81d:
    X86_TICK(c, 11);
    // 08d81d  mov al, byte ptr [edi]
    X86_AT(c, 0x8d81du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08d81f  cmp al, 0x40
    X86_AT(c, 0x8d81fu);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 08d821  jb 0x8d827
    X86_AT(c, 0x8d821u);
    if (x86_cc(c, 2)) { goto L_8d827; }
    X86_TICK(c, 7);
    // 08d823  cmp al, 0x7e
    X86_AT(c, 0x8d823u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 08d825  jbe 0x8d831
    X86_AT(c, 0x8d825u);
    if (x86_cc(c, 6)) { goto L_8d831; }
L_8d827:
    X86_TICK(c, 11);
    // 08d827  mov al, byte ptr [edi]
    X86_AT(c, 0x8d827u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 08d829  cmp al, 0x80
    X86_AT(c, 0x8d829u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 08d82b  jb 0x8d857
    X86_AT(c, 0x8d82bu);
    if (x86_cc(c, 2)) { goto L_8d857; }
    X86_TICK(c, 7);
    // 08d82d  cmp al, 0xfc
    X86_AT(c, 0x8d82du);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 08d82f  ja 0x8d857
    X86_AT(c, 0x8d82fu);
    if (x86_cc(c, 7)) { goto L_8d857; }
L_8d831:
    X86_TICK(c, 9);
    // 08d831  inc edi
    X86_AT(c, 0x8d831u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08d832  jmp 0x8d857
    X86_AT(c, 0x8d832u);
    goto L_8d857;
L_8d834:
    X86_TICK(c, 12);
    // 08d834  cmp byte ptr [edi], 0xa
    X86_AT(c, 0x8d834u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xAu, 0, 1);
    // 08d837  jne 0x8d83f
    X86_AT(c, 0x8d837u);
    if (x86_cc(c, 5)) { goto L_8d83f; }
    X86_TICK(c, 15);
    // 08d839  inc edi
    X86_AT(c, 0x8d839u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08d83a  dec dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d83au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 08d83d  jmp 0x8d857
    X86_AT(c, 0x8d83du);
    goto L_8d857;
L_8d83f:
    X86_TICK(c, 12);
    // 08d83f  cmp byte ptr [edi], 0
    X86_AT(c, 0x8d83fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 08d842  jne 0x8d84d
    X86_AT(c, 0x8d842u);
    if (x86_cc(c, 5)) { goto L_8d84d; }
    X86_TICK(c, 9);
    // 08d844  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0x8d844u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 08d84b  jmp 0x8d857
    X86_AT(c, 0x8d84bu);
    goto L_8d857;
L_8d84d:
    X86_TICK(c, 17);
    // 08d84d  dec esi
    X86_AT(c, 0x8d84du);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 08d84e  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d84eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 08d851  inc edi
    X86_AT(c, 0x8d851u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 08d852  jmp 0x8d7c1
    X86_AT(c, 0x8d852u);
    X86_POLL(c, 0x8d7c1u); goto L_8d7c1;
L_8d857:
    X86_TICK(c, 33);
    // 08d857  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d857u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 08d85a  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0x8d85au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 08d85d  mov byte ptr [eax], 0
    X86_AT(c, 0x8d85du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
    // 08d860  mov eax, esi
    X86_AT(c, 0x8d860u);
    c.r[0] = c.r[6];
    // 08d862  mov dx, word ptr [ebp - 8]
    X86_AT(c, 0x8d862u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 08d866  sub edx, eax
    X86_AT(c, 0x8d866u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08d868  mov word ptr [0x35044], dx
    X86_AT(c, 0x8d868u);
    wr16((c.sbase[3] + (uint32_t)(0x35044u)), (c.r[2] & 0xFFFFu));
    // 08d86f  push 0x35040
    X86_AT(c, 0x8d86fu);
    { uint32_t v = 0x35040u; push32(c, v); }
    // 08d874  push 0x34494
    X86_AT(c, 0x8d874u);
    { uint32_t v = 0x34494u; push32(c, v); }
    // 08d879  call 0x9fd
    X86_AT(c, 0x8d879u);
    push32(c, 0x8d87eu); x86_call_known(c, 0x9fdu, f_000009fd); X86_RET(c, 0x8d87eu);
    X86_TICK(c, 28);
    // 08d87e  mov eax, dword ptr [ebx + 0x19]
    X86_AT(c, 0x8d87eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 08d881  add eax, dword ptr [ebp - 8]
    X86_AT(c, 0x8d881u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 08d884  sub eax, esi
    X86_AT(c, 0x8d884u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 08d886  mov dword ptr [ebx + 0x19], eax
    X86_AT(c, 0x8d886u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), c.r[0]);
    // 08d889  add esp, 8
    X86_AT(c, 0x8d889u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08d88c  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x8d88cu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 08d890  jne 0x8d772
    X86_AT(c, 0x8d890u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8d772u); goto L_8d772; }
    X86_TICK(c, 15);
    // 08d896  mov eax, dword ptr [ebx + 0x1d]
    X86_AT(c, 0x8d896u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 08d899  cmp eax, dword ptr [ebx + 0x15]
    X86_AT(c, 0x8d899u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x15u))), 0, 4);
    // 08d89c  jne 0x8d8b5
    X86_AT(c, 0x8d89cu);
    if (x86_cc(c, 5)) { goto L_8d8b5; }
    X86_TICK(c, 12);
    // 08d89e  push dword ptr [ebp + 8]
    X86_AT(c, 0x8d89eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08d8a1  call 0x8d66c
    X86_AT(c, 0x8d8a1u);
    push32(c, 0x8d8a6u); x86_call_known(c, 0x8d66cu, f_0008d66c); X86_RET(c, 0x8d8a6u);
    X86_TICK(c, 11);
    // 08d8a6  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0x8d8a6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 08d8ad  add esp, 4
    X86_AT(c, 0x8d8adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08d8b0  jmp 0x8d772
    X86_AT(c, 0x8d8b0u);
    X86_POLL(c, 0x8d772u); goto L_8d772;
L_8d8b5:
    X86_TICK(c, 15);
    // 08d8b5  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0x8d8b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 08d8bc  inc dword ptr [ebx + 0x1d]
    X86_AT(c, 0x8d8bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 08d8bf  jmp 0x8d772
    X86_AT(c, 0x8d8bfu);
    X86_POLL(c, 0x8d772u); goto L_8d772;
L_8d8c4:
    X86_TICK(c, 28);
    // 08d8c4  pop edi
    X86_AT(c, 0x8d8c4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08d8c5  pop esi
    X86_AT(c, 0x8d8c5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08d8c6  pop ebx
    X86_AT(c, 0x8d8c6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08d8c7  leave 
    X86_AT(c, 0x8d8c7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08d8c8  ret 
    X86_AT(c, 0x8d8c8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d772u, "ran off the end of a function");
}
void f_0008d8cc(X86Cpu& c) {
    X86_TICK(c, 27);
    // 08d8cc  push ebp
    X86_AT(c, 0x8d8ccu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08d8cd  mov ebp, esp
    X86_AT(c, 0x8d8cdu);
    c.r[5] = c.r[4];
    // 08d8cf  push ebx
    X86_AT(c, 0x8d8cfu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08d8d0  push esi
    X86_AT(c, 0x8d8d0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08d8d1  push edi
    X86_AT(c, 0x8d8d1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08d8d2  sub esi, esi
    X86_AT(c, 0x8d8d2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 08d8d4  movzx edx, byte ptr [ebp + 0xc]
    X86_AT(c, 0x8d8d4u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08d8d8  sub edx, 0x20
    X86_AT(c, 0x8d8d8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x20u, 0, 4); }
    // 08d8db  cmp edx, 0x3a
    X86_AT(c, 0x8d8dbu);
    (void)x86_sub(c, c.r[2], 0x3Au, 0, 4);
    // 08d8de  ja 0x8db1a
    X86_AT(c, 0x8d8deu);
    if (x86_cc(c, 7)) { goto L_8db1a; }
    X86_TICK(c, 7);
    // 08d8e4  jmp dword ptr cs:[edx*4 + 0x8d8ec]
    X86_AT(c, 0x8d8e4u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0x8D8ECu)));
      switch (t) {
      case 0x8d9d8u: goto L_8d9d8;
      case 0x8d9e1u: goto L_8d9e1;
      case 0x8d9eau: goto L_8d9ea;
      case 0x8d9f3u: goto L_8d9f3;
      case 0x8d9fcu: goto L_8d9fc;
      case 0x8da05u: goto L_8da05;
      case 0x8da0eu: goto L_8da0e;
      case 0x8da17u: goto L_8da17;
      case 0x8da20u: goto L_8da20;
      case 0x8da29u: goto L_8da29;
      case 0x8da32u: goto L_8da32;
      case 0x8da3bu: goto L_8da3b;
      case 0x8da44u: goto L_8da44;
      case 0x8da4du: goto L_8da4d;
      case 0x8da56u: goto L_8da56;
      case 0x8da5fu: goto L_8da5f;
      case 0x8da68u: goto L_8da68;
      case 0x8da71u: goto L_8da71;
      case 0x8da7au: goto L_8da7a;
      case 0x8da83u: goto L_8da83;
      case 0x8da8cu: goto L_8da8c;
      case 0x8da95u: goto L_8da95;
      case 0x8da9eu: goto L_8da9e;
      case 0x8daa7u: goto L_8daa7;
      case 0x8dab0u: goto L_8dab0;
      case 0x8dab9u: goto L_8dab9;
      case 0x8dac2u: goto L_8dac2;
      case 0x8dac8u: goto L_8dac8;
      case 0x8daceu: goto L_8dace;
      case 0x8dad4u: goto L_8dad4;
      case 0x8dadau: goto L_8dada;
      case 0x8dae0u: goto L_8dae0;
      case 0x8dae6u: goto L_8dae6;
      case 0x8daecu: goto L_8daec;
      case 0x8daf2u: goto L_8daf2;
      case 0x8daf8u: goto L_8daf8;
      case 0x8dafeu: goto L_8dafe;
      case 0x8db04u: goto L_8db04;
      case 0x8db0au: goto L_8db0a;
      case 0x8db10u: goto L_8db10;
      case 0x8db16u: goto L_8db16;
      case 0x8db1au: goto L_8db1a;
      default: x86_jump(c, t); return; } }
L_8d9d8:
    X86_TICK(c, 9);
    // 08d9d8  mov si, 0x4081
    X86_AT(c, 0x8d9d8u);
    s16(c, 6, 0x4081u);
    // 08d9dc  jmp 0x8db1a
    X86_AT(c, 0x8d9dcu);
    goto L_8db1a;
L_8d9e1:
    X86_TICK(c, 9);
    // 08d9e1  mov si, 0x4681
    X86_AT(c, 0x8d9e1u);
    s16(c, 6, 0x4681u);
    // 08d9e5  jmp 0x8db1a
    X86_AT(c, 0x8d9e5u);
    goto L_8db1a;
L_8d9ea:
    X86_TICK(c, 9);
    // 08d9ea  mov si, 0x75eb
    X86_AT(c, 0x8d9eau);
    s16(c, 6, 0x75EBu);
    // 08d9ee  jmp 0x8db1a
    X86_AT(c, 0x8d9eeu);
    goto L_8db1a;
L_8d9f3:
    X86_TICK(c, 9);
    // 08d9f3  mov si, 0x74eb
    X86_AT(c, 0x8d9f3u);
    s16(c, 6, 0x74EBu);
    // 08d9f7  jmp 0x8db1a
    X86_AT(c, 0x8d9f7u);
    goto L_8db1a;
L_8d9fc:
    X86_TICK(c, 9);
    // 08d9fc  mov si, 0x5e81
    X86_AT(c, 0x8d9fcu);
    s16(c, 6, 0x5E81u);
    // 08da00  jmp 0x8db1a
    X86_AT(c, 0x8da00u);
    goto L_8db1a;
L_8da05:
    X86_TICK(c, 9);
    // 08da05  mov si, 0x80eb
    X86_AT(c, 0x8da05u);
    s16(c, 6, 0x80EBu);
    // 08da09  jmp 0x8db1a
    X86_AT(c, 0x8da09u);
    goto L_8db1a;
L_8da0e:
    X86_TICK(c, 9);
    // 08da0e  mov si, 0x76eb
    X86_AT(c, 0x8da0eu);
    s16(c, 6, 0x76EBu);
    // 08da12  jmp 0x8db1a
    X86_AT(c, 0x8da12u);
    goto L_8db1a;
L_8da17:
    X86_TICK(c, 9);
    // 08da17  mov si, 0x77eb
    X86_AT(c, 0x8da17u);
    s16(c, 6, 0x77EBu);
    // 08da1b  jmp 0x8db1a
    X86_AT(c, 0x8da1bu);
    goto L_8db1a;
L_8da20:
    X86_TICK(c, 9);
    // 08da20  mov si, 0x78eb
    X86_AT(c, 0x8da20u);
    s16(c, 6, 0x78EBu);
    // 08da24  jmp 0x8db1a
    X86_AT(c, 0x8da24u);
    goto L_8db1a;
L_8da29:
    X86_TICK(c, 9);
    // 08da29  mov si, 0x79eb
    X86_AT(c, 0x8da29u);
    s16(c, 6, 0x79EBu);
    // 08da2d  jmp 0x8db1a
    X86_AT(c, 0x8da2du);
    goto L_8db1a;
L_8da32:
    X86_TICK(c, 9);
    // 08da32  mov si, 0x7aeb
    X86_AT(c, 0x8da32u);
    s16(c, 6, 0x7AEBu);
    // 08da36  jmp 0x8db1a
    X86_AT(c, 0x8da36u);
    goto L_8db1a;
L_8da3b:
    X86_TICK(c, 9);
    // 08da3b  mov si, 0x7beb
    X86_AT(c, 0x8da3bu);
    s16(c, 6, 0x7BEBu);
    // 08da3f  jmp 0x8db1a
    X86_AT(c, 0x8da3fu);
    goto L_8db1a;
L_8da44:
    X86_TICK(c, 9);
    // 08da44  mov si, 0x7ceb
    X86_AT(c, 0x8da44u);
    s16(c, 6, 0x7CEBu);
    // 08da48  jmp 0x8db1a
    X86_AT(c, 0x8da48u);
    goto L_8db1a;
L_8da4d:
    X86_TICK(c, 9);
    // 08da4d  mov si, 0x7deb
    X86_AT(c, 0x8da4du);
    s16(c, 6, 0x7DEBu);
    // 08da51  jmp 0x8db1a
    X86_AT(c, 0x8da51u);
    goto L_8db1a;
L_8da56:
    X86_TICK(c, 9);
    // 08da56  mov si, 0x7eeb
    X86_AT(c, 0x8da56u);
    s16(c, 6, 0x7EEBu);
    // 08da5a  jmp 0x8db1a
    X86_AT(c, 0x8da5au);
    goto L_8db1a;
L_8da5f:
    X86_TICK(c, 9);
    // 08da5f  mov si, 0x40eb
    X86_AT(c, 0x8da5fu);
    s16(c, 6, 0x40EBu);
    // 08da63  jmp 0x8db1a
    X86_AT(c, 0x8da63u);
    goto L_8db1a;
L_8da68:
    X86_TICK(c, 9);
    // 08da68  mov si, 0x41eb
    X86_AT(c, 0x8da68u);
    s16(c, 6, 0x41EBu);
    // 08da6c  jmp 0x8db1a
    X86_AT(c, 0x8da6cu);
    goto L_8db1a;
L_8da71:
    X86_TICK(c, 9);
    // 08da71  mov si, 0x42eb
    X86_AT(c, 0x8da71u);
    s16(c, 6, 0x42EBu);
    // 08da75  jmp 0x8db1a
    X86_AT(c, 0x8da75u);
    goto L_8db1a;
L_8da7a:
    X86_TICK(c, 9);
    // 08da7a  mov si, 0x43eb
    X86_AT(c, 0x8da7au);
    s16(c, 6, 0x43EBu);
    // 08da7e  jmp 0x8db1a
    X86_AT(c, 0x8da7eu);
    goto L_8db1a;
L_8da83:
    X86_TICK(c, 9);
    // 08da83  mov si, 0x44eb
    X86_AT(c, 0x8da83u);
    s16(c, 6, 0x44EBu);
    // 08da87  jmp 0x8db1a
    X86_AT(c, 0x8da87u);
    goto L_8db1a;
L_8da8c:
    X86_TICK(c, 9);
    // 08da8c  mov si, 0x45eb
    X86_AT(c, 0x8da8cu);
    s16(c, 6, 0x45EBu);
    // 08da90  jmp 0x8db1a
    X86_AT(c, 0x8da90u);
    goto L_8db1a;
L_8da95:
    X86_TICK(c, 9);
    // 08da95  mov si, 0x46eb
    X86_AT(c, 0x8da95u);
    s16(c, 6, 0x46EBu);
    // 08da99  jmp 0x8db1a
    X86_AT(c, 0x8da99u);
    goto L_8db1a;
L_8da9e:
    X86_TICK(c, 9);
    // 08da9e  mov si, 0x47eb
    X86_AT(c, 0x8da9eu);
    s16(c, 6, 0x47EBu);
    // 08daa2  jmp 0x8db1a
    X86_AT(c, 0x8daa2u);
    goto L_8db1a;
L_8daa7:
    X86_TICK(c, 9);
    // 08daa7  mov si, 0x48eb
    X86_AT(c, 0x8daa7u);
    s16(c, 6, 0x48EBu);
    // 08daab  jmp 0x8db1a
    X86_AT(c, 0x8daabu);
    goto L_8db1a;
L_8dab0:
    X86_TICK(c, 9);
    // 08dab0  mov si, 0x49eb
    X86_AT(c, 0x8dab0u);
    s16(c, 6, 0x49EBu);
    // 08dab4  jmp 0x8db1a
    X86_AT(c, 0x8dab4u);
    goto L_8db1a;
L_8dab9:
    X86_TICK(c, 9);
    // 08dab9  mov si, 0x4aeb
    X86_AT(c, 0x8dab9u);
    s16(c, 6, 0x4AEBu);
    // 08dabd  jmp 0x8db1a
    X86_AT(c, 0x8dabdu);
    goto L_8db1a;
L_8dac2:
    X86_TICK(c, 9);
    // 08dac2  mov si, 0x4beb
    X86_AT(c, 0x8dac2u);
    s16(c, 6, 0x4BEBu);
    // 08dac6  jmp 0x8db1a
    X86_AT(c, 0x8dac6u);
    goto L_8db1a;
L_8dac8:
    X86_TICK(c, 9);
    // 08dac8  mov si, 0x4ceb
    X86_AT(c, 0x8dac8u);
    s16(c, 6, 0x4CEBu);
    // 08dacc  jmp 0x8db1a
    X86_AT(c, 0x8daccu);
    goto L_8db1a;
L_8dace:
    X86_TICK(c, 9);
    // 08dace  mov si, 0x4deb
    X86_AT(c, 0x8daceu);
    s16(c, 6, 0x4DEBu);
    // 08dad2  jmp 0x8db1a
    X86_AT(c, 0x8dad2u);
    goto L_8db1a;
L_8dad4:
    X86_TICK(c, 9);
    // 08dad4  mov si, 0x4eeb
    X86_AT(c, 0x8dad4u);
    s16(c, 6, 0x4EEBu);
    // 08dad8  jmp 0x8db1a
    X86_AT(c, 0x8dad8u);
    goto L_8db1a;
L_8dada:
    X86_TICK(c, 9);
    // 08dada  mov si, 0x4feb
    X86_AT(c, 0x8dadau);
    s16(c, 6, 0x4FEBu);
    // 08dade  jmp 0x8db1a
    X86_AT(c, 0x8dadeu);
    goto L_8db1a;
L_8dae0:
    X86_TICK(c, 9);
    // 08dae0  mov si, 0x50eb
    X86_AT(c, 0x8dae0u);
    s16(c, 6, 0x50EBu);
    // 08dae4  jmp 0x8db1a
    X86_AT(c, 0x8dae4u);
    goto L_8db1a;
L_8dae6:
    X86_TICK(c, 9);
    // 08dae6  mov si, 0x51eb
    X86_AT(c, 0x8dae6u);
    s16(c, 6, 0x51EBu);
    // 08daea  jmp 0x8db1a
    X86_AT(c, 0x8daeau);
    goto L_8db1a;
L_8daec:
    X86_TICK(c, 9);
    // 08daec  mov si, 0x52eb
    X86_AT(c, 0x8daecu);
    s16(c, 6, 0x52EBu);
    // 08daf0  jmp 0x8db1a
    X86_AT(c, 0x8daf0u);
    goto L_8db1a;
L_8daf2:
    X86_TICK(c, 9);
    // 08daf2  mov si, 0x53eb
    X86_AT(c, 0x8daf2u);
    s16(c, 6, 0x53EBu);
    // 08daf6  jmp 0x8db1a
    X86_AT(c, 0x8daf6u);
    goto L_8db1a;
L_8daf8:
    X86_TICK(c, 9);
    // 08daf8  mov si, 0x54eb
    X86_AT(c, 0x8daf8u);
    s16(c, 6, 0x54EBu);
    // 08dafc  jmp 0x8db1a
    X86_AT(c, 0x8dafcu);
    goto L_8db1a;
L_8dafe:
    X86_TICK(c, 9);
    // 08dafe  mov si, 0x55eb
    X86_AT(c, 0x8dafeu);
    s16(c, 6, 0x55EBu);
    // 08db02  jmp 0x8db1a
    X86_AT(c, 0x8db02u);
    goto L_8db1a;
L_8db04:
    X86_TICK(c, 9);
    // 08db04  mov si, 0x56eb
    X86_AT(c, 0x8db04u);
    s16(c, 6, 0x56EBu);
    // 08db08  jmp 0x8db1a
    X86_AT(c, 0x8db08u);
    goto L_8db1a;
L_8db0a:
    X86_TICK(c, 9);
    // 08db0a  mov si, 0x57eb
    X86_AT(c, 0x8db0au);
    s16(c, 6, 0x57EBu);
    // 08db0e  jmp 0x8db1a
    X86_AT(c, 0x8db0eu);
    goto L_8db1a;
L_8db10:
    X86_TICK(c, 9);
    // 08db10  mov si, 0x58eb
    X86_AT(c, 0x8db10u);
    s16(c, 6, 0x58EBu);
    // 08db14  jmp 0x8db1a
    X86_AT(c, 0x8db14u);
    goto L_8db1a;
L_8db16:
    X86_TICK(c, 2);
    // 08db16  mov si, 0x59eb
    X86_AT(c, 0x8db16u);
    s16(c, 6, 0x59EBu);
L_8db1a:
    X86_TICK(c, 7);
    // 08db1a  and si, si
    X86_AT(c, 0x8db1au);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 08db1d  je 0x8db88
    X86_AT(c, 0x8db1du);
    if (x86_cc(c, 4)) { goto L_8db88; }
    X86_TICK(c, 67);
    // 08db1f  mov eax, 0x34490
    X86_AT(c, 0x8db1fu);
    c.r[0] = 0x34490u;
    // 08db24  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x8db24u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08db27  lea edx, [edx + edx*2]
    X86_AT(c, 0x8db27u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 08db2a  lea ecx, [edx + edx*8]
    X86_AT(c, 0x8db2au);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 08db2d  lea ecx, [edx + ecx*2]
    X86_AT(c, 0x8db2du);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 08db30  lea edi, [eax + ecx*1 + 0x710]
    X86_AT(c, 0x8db30u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[1] + 0x710u);
    // 08db37  mov dx, word ptr [edi + 1]
    X86_AT(c, 0x8db37u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 08db3b  add dx, 4
    X86_AT(c, 0x8db3bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x4u, 0, 2)); }
    // 08db3f  mov ebx, dword ptr [edi + 0x19]
    X86_AT(c, 0x8db3fu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x19u)));
    // 08db42  shl ebx, 3
    X86_AT(c, 0x8db42u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 08db45  add ebx, edx
    X86_AT(c, 0x8db45u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 08db47  mov word ptr [eax + 0xd48], bx
    X86_AT(c, 0x8db47u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD48u)), (c.r[3] & 0xFFFFu));
    // 08db4e  mov dx, word ptr [edi + 5]
    X86_AT(c, 0x8db4eu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 08db52  add dx, 0x11
    X86_AT(c, 0x8db52u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x11u, 0, 2)); }
    // 08db56  mov ebx, dword ptr [edi + 0x1d]
    X86_AT(c, 0x8db56u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 08db59  shl ebx, 4
    X86_AT(c, 0x8db59u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 08db5c  add ebx, edx
    X86_AT(c, 0x8db5cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 08db5e  mov word ptr [eax + 0xd4a], bx
    X86_AT(c, 0x8db5eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4Au)), (c.r[3] & 0xFFFFu));
    // 08db65  mov word ptr [eax + 0xd4c], 2
    X86_AT(c, 0x8db65u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4Cu)), 0x2u);
    // 08db6e  mov word ptr [eax + 0xd4e], si
    X86_AT(c, 0x8db6eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4Eu)), (c.r[6] & 0xFFFFu));
    // 08db75  lea edx, [eax + 0xd48]
    X86_AT(c, 0x8db75u);
    c.r[2] = (uint32_t)(c.r[0] + 0xD48u);
    // 08db7b  push edx
    X86_AT(c, 0x8db7bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08db7c  add eax, 4
    X86_AT(c, 0x8db7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 08db7f  push eax
    X86_AT(c, 0x8db7fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08db80  call 0x9fd
    X86_AT(c, 0x8db80u);
    push32(c, 0x8db85u); x86_call_known(c, 0x9fdu, f_000009fd); X86_RET(c, 0x8db85u);
    X86_TICK(c, 2);
    // 08db85  add esp, 8
    X86_AT(c, 0x8db85u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_8db88:
    X86_TICK(c, 28);
    // 08db88  pop edi
    X86_AT(c, 0x8db88u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08db89  pop esi
    X86_AT(c, 0x8db89u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08db8a  pop ebx
    X86_AT(c, 0x8db8au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08db8b  leave 
    X86_AT(c, 0x8db8bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08db8c  ret 
    X86_AT(c, 0x8db8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d8ccu, "ran off the end of a function");
}
void f_0008db1a(X86Cpu& c) {
    X86_TICK(c, 7);
    // 08db1a  and si, si
    X86_AT(c, 0x8db1au);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 08db1d  je 0x8db88
    X86_AT(c, 0x8db1du);
    if (x86_cc(c, 4)) { goto L_8db88; }
    X86_TICK(c, 67);
    // 08db1f  mov eax, 0x34490
    X86_AT(c, 0x8db1fu);
    c.r[0] = 0x34490u;
    // 08db24  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x8db24u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08db27  lea edx, [edx + edx*2]
    X86_AT(c, 0x8db27u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 08db2a  lea ecx, [edx + edx*8]
    X86_AT(c, 0x8db2au);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 08db2d  lea ecx, [edx + ecx*2]
    X86_AT(c, 0x8db2du);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 08db30  lea edi, [eax + ecx*1 + 0x710]
    X86_AT(c, 0x8db30u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[1] + 0x710u);
    // 08db37  mov dx, word ptr [edi + 1]
    X86_AT(c, 0x8db37u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 08db3b  add dx, 4
    X86_AT(c, 0x8db3bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x4u, 0, 2)); }
    // 08db3f  mov ebx, dword ptr [edi + 0x19]
    X86_AT(c, 0x8db3fu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x19u)));
    // 08db42  shl ebx, 3
    X86_AT(c, 0x8db42u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 08db45  add ebx, edx
    X86_AT(c, 0x8db45u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 08db47  mov word ptr [eax + 0xd48], bx
    X86_AT(c, 0x8db47u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD48u)), (c.r[3] & 0xFFFFu));
    // 08db4e  mov dx, word ptr [edi + 5]
    X86_AT(c, 0x8db4eu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 08db52  add dx, 0x11
    X86_AT(c, 0x8db52u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x11u, 0, 2)); }
    // 08db56  mov ebx, dword ptr [edi + 0x1d]
    X86_AT(c, 0x8db56u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 08db59  shl ebx, 4
    X86_AT(c, 0x8db59u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 08db5c  add ebx, edx
    X86_AT(c, 0x8db5cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 08db5e  mov word ptr [eax + 0xd4a], bx
    X86_AT(c, 0x8db5eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4Au)), (c.r[3] & 0xFFFFu));
    // 08db65  mov word ptr [eax + 0xd4c], 2
    X86_AT(c, 0x8db65u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4Cu)), 0x2u);
    // 08db6e  mov word ptr [eax + 0xd4e], si
    X86_AT(c, 0x8db6eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4Eu)), (c.r[6] & 0xFFFFu));
    // 08db75  lea edx, [eax + 0xd48]
    X86_AT(c, 0x8db75u);
    c.r[2] = (uint32_t)(c.r[0] + 0xD48u);
    // 08db7b  push edx
    X86_AT(c, 0x8db7bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08db7c  add eax, 4
    X86_AT(c, 0x8db7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 08db7f  push eax
    X86_AT(c, 0x8db7fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08db80  call 0x9fd
    X86_AT(c, 0x8db80u);
    push32(c, 0x8db85u); x86_call_known(c, 0x9fdu, f_000009fd); X86_RET(c, 0x8db85u);
    X86_TICK(c, 2);
    // 08db85  add esp, 8
    X86_AT(c, 0x8db85u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_8db88:
    X86_TICK(c, 28);
    // 08db88  pop edi
    X86_AT(c, 0x8db88u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08db89  pop esi
    X86_AT(c, 0x8db89u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08db8a  pop ebx
    X86_AT(c, 0x8db8au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08db8b  leave 
    X86_AT(c, 0x8db8bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08db8c  ret 
    X86_AT(c, 0x8db8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8db1au, "ran off the end of a function");
}
void f_0008dd04(X86Cpu& c) {
    X86_TICK(c, 29);
    // 08dd04  push ebp
    X86_AT(c, 0x8dd04u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08dd05  mov ebp, esp
    X86_AT(c, 0x8dd05u);
    c.r[5] = c.r[4];
    // 08dd07  push ebx
    X86_AT(c, 0x8dd07u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08dd08  push esi
    X86_AT(c, 0x8dd08u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08dd09  push edi
    X86_AT(c, 0x8dd09u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08dd0a  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8dd0au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08dd0d  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8dd0du);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08dd10  mov ebx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x8dd10u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 08dd13  and esi, esi
    X86_AT(c, 0x8dd13u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 08dd15  jl 0x8dd49
    X86_AT(c, 0x8dd15u);
    if (x86_cc(c, 12)) { goto L_8dd49; }
    X86_TICK(c, 19);
    // 08dd17  mov eax, 0x34490
    X86_AT(c, 0x8dd17u);
    c.r[0] = 0x34490u;
    // 08dd1c  lea edx, [edi + edi*2]
    X86_AT(c, 0x8dd1cu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 08dd1f  lea ecx, [edx + edx*8]
    X86_AT(c, 0x8dd1fu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 08dd22  lea ecx, [edx + ecx*2]
    X86_AT(c, 0x8dd22u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 08dd25  cmp esi, dword ptr [eax + ecx*1 + 0x721]
    X86_AT(c, 0x8dd25u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x721u))), 0, 4);
    // 08dd2c  jg 0x8dd49
    X86_AT(c, 0x8dd2cu);
    if (x86_cc(c, 15)) { goto L_8dd49; }
    X86_TICK(c, 7);
    // 08dd2e  and ebx, ebx
    X86_AT(c, 0x8dd2eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 08dd30  jl 0x8dd49
    X86_AT(c, 0x8dd30u);
    if (x86_cc(c, 12)) { goto L_8dd49; }
    X86_TICK(c, 11);
    // 08dd32  cmp ebx, dword ptr [eax + ecx*1 + 0x725]
    X86_AT(c, 0x8dd32u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x725u))), 0, 4);
    // 08dd39  jg 0x8dd49
    X86_AT(c, 0x8dd39u);
    if (x86_cc(c, 15)) { goto L_8dd49; }
    X86_TICK(c, 4);
    // 08dd3b  mov dword ptr [eax + ecx*1 + 0x729], esi
    X86_AT(c, 0x8dd3bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x729u)), c.r[6]);
    // 08dd42  mov dword ptr [eax + ecx*1 + 0x72d], ebx
    X86_AT(c, 0x8dd42u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x72Du)), c.r[3]);
L_8dd49:
    X86_TICK(c, 28);
    // 08dd49  pop edi
    X86_AT(c, 0x8dd49u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08dd4a  pop esi
    X86_AT(c, 0x8dd4au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08dd4b  pop ebx
    X86_AT(c, 0x8dd4bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08dd4c  leave 
    X86_AT(c, 0x8dd4cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08dd4d  ret 
    X86_AT(c, 0x8dd4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8dd04u, "ran off the end of a function");
}
void f_0008e09c(X86Cpu& c) {
    X86_TICK(c, 13);
    // 08e09c  push ebp
    X86_AT(c, 0x8e09cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08e09d  mov ebp, esp
    X86_AT(c, 0x8e09du);
    c.r[5] = c.r[4];
    // 08e09f  push 2
    X86_AT(c, 0x8e09fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08e0a1  call 0x8d3e0
    X86_AT(c, 0x8e0a1u);
    push32(c, 0x8e0a6u); x86_call_known(c, 0x8d3e0u, f_0008d3e0); X86_RET(c, 0x8e0a6u);
    X86_TICK(c, 9);
    // 08e0a6  push 2
    X86_AT(c, 0x8e0a6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08e0a8  call 0x8d70c
    X86_AT(c, 0x8e0a8u);
    push32(c, 0x8e0adu); x86_call_known(c, 0x8d70cu, f_0008d70c); X86_RET(c, 0x8e0adu);
    X86_TICK(c, 14);
    // 08e0ad  push dword ptr [ebp + 8]
    X86_AT(c, 0x8e0adu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08e0b0  push 2
    X86_AT(c, 0x8e0b0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08e0b2  call 0x8d754
    X86_AT(c, 0x8e0b2u);
    push32(c, 0x8e0b7u); x86_call_known(c, 0x8d754u, f_0008d754); X86_RET(c, 0x8e0b7u);
    X86_TICK(c, 16);
    // 08e0b7  leave 
    X86_AT(c, 0x8e0b7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08e0b8  ret 
    X86_AT(c, 0x8e0b8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8e09cu, "ran off the end of a function");
}
void f_0008ec14(X86Cpu& c) {
    X86_TICK(c, 22);
    // 08ec14  push ebp
    X86_AT(c, 0x8ec14u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08ec15  mov ebp, esp
    X86_AT(c, 0x8ec15u);
    c.r[5] = c.r[4];
    // 08ec17  push 0xffffffff
    X86_AT(c, 0x8ec17u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 08ec19  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8ec19u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08ec1c  push dword ptr [eax*4 + 0x35200]
    X86_AT(c, 0x8ec1cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x35200u))); push32(c, v); }
    // 08ec23  call 0x8afc4
    X86_AT(c, 0x8ec23u);
    push32(c, 0x8ec28u); x86_call_known(c, 0x8afc4u, f_0008afc4); X86_RET(c, 0x8ec28u);
    X86_TICK(c, 16);
    // 08ec28  leave 
    X86_AT(c, 0x8ec28u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08ec29  ret 
    X86_AT(c, 0x8ec29u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ec14u, "ran off the end of a function");
}
void f_0008ec2c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08ec2c  push 1
    X86_AT(c, 0x8ec2cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08ec2e  call 0x8c378
    X86_AT(c, 0x8ec2eu);
    push32(c, 0x8ec33u); x86_call_known(c, 0x8c378u, f_0008c378); X86_RET(c, 0x8ec33u);
    X86_TICK(c, 9);
    // 08ec33  push 0
    X86_AT(c, 0x8ec33u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ec35  call 0x8c718
    X86_AT(c, 0x8ec35u);
    push32(c, 0x8ec3au); x86_call_known(c, 0x8c718u, f_0008c718); X86_RET(c, 0x8ec3au);
    X86_TICK(c, 9);
    // 08ec3a  push 0
    X86_AT(c, 0x8ec3au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ec3c  call 0x8c378
    X86_AT(c, 0x8ec3cu);
    push32(c, 0x8ec41u); x86_call_known(c, 0x8c378u, f_0008c378); X86_RET(c, 0x8ec41u);
    X86_TICK(c, 9);
    // 08ec41  push 0
    X86_AT(c, 0x8ec41u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ec43  call 0x8c718
    X86_AT(c, 0x8ec43u);
    push32(c, 0x8ec48u); x86_call_known(c, 0x8c718u, f_0008c718); X86_RET(c, 0x8ec48u);
    X86_TICK(c, 9);
    // 08ec48  push 2
    X86_AT(c, 0x8ec48u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08ec4a  call 0x8c38c
    X86_AT(c, 0x8ec4au);
    push32(c, 0x8ec4fu); x86_call_known(c, 0x8c38cu, f_0008c38c); X86_RET(c, 0x8ec4fu);
    X86_TICK(c, 7);
    // 08ec4f  call 0x8c63c
    X86_AT(c, 0x8ec4fu);
    push32(c, 0x8ec54u); x86_call_known(c, 0x8c63cu, f_0008c63c); X86_RET(c, 0x8ec54u);
    X86_TICK(c, 7);
    // 08ec54  call 0x8b274
    X86_AT(c, 0x8ec54u);
    push32(c, 0x8ec59u); x86_call_known(c, 0x8b274u, f_0008b274); X86_RET(c, 0x8ec59u);
    X86_TICK(c, 7);
    // 08ec59  call 0x8be5c
    X86_AT(c, 0x8ec59u);
    push32(c, 0x8ec5eu); x86_call_known(c, 0x8be5cu, f_0008be5c); X86_RET(c, 0x8ec5eu);
    X86_TICK(c, 9);
    // 08ec5e  push 0
    X86_AT(c, 0x8ec5eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ec60  call 0x92ff8
    X86_AT(c, 0x8ec60u);
    push32(c, 0x8ec65u); x86_call_known(c, 0x92ff8u, f_00092ff8); X86_RET(c, 0x8ec65u);
    X86_TICK(c, 12);
    // 08ec65  add esp, 0x18
    X86_AT(c, 0x8ec65u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 08ec68  ret 
    X86_AT(c, 0x8ec68u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ec2cu, "ran off the end of a function");
}
void f_0008ec6c(X86Cpu& c) {
    X86_TICK(c, 25);
    // 08ec6c  push ebp
    X86_AT(c, 0x8ec6cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08ec6d  mov ebp, esp
    X86_AT(c, 0x8ec6du);
    c.r[5] = c.r[4];
    // 08ec6f  push eax
    X86_AT(c, 0x8ec6fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ec70  push ebx
    X86_AT(c, 0x8ec70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08ec71  push esi
    X86_AT(c, 0x8ec71u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 08ec72  push edi
    X86_AT(c, 0x8ec72u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08ec73  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8ec73u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08ec76  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x8ec76u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 08ec7d  call 0xb
    X86_AT(c, 0x8ec7du);
    push32(c, 0x8ec82u); x86_call_known(c, 0xbu, f_0000000b); X86_RET(c, 0x8ec82u);
    X86_TICK(c, 2);
    // 08ec82  sub esi, esi
    X86_AT(c, 0x8ec82u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_8ec84:
    X86_TICK(c, 21);
    // 08ec84  mov eax, edi
    X86_AT(c, 0x8ec84u);
    c.r[0] = c.r[7];
    // 08ec86  mov edx, eax
    X86_AT(c, 0x8ec86u);
    c.r[2] = c.r[0];
    // 08ec88  shl edx, 5
    X86_AT(c, 0x8ec88u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 08ec8b  sub edx, eax
    X86_AT(c, 0x8ec8bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08ec8d  lea edx, [eax + edx*4]
    X86_AT(c, 0x8ec8du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 08ec90  shl edx, 2
    X86_AT(c, 0x8ec90u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[2] = r; }
    // 08ec93  cmp edx, esi
    X86_AT(c, 0x8ec93u);
    (void)x86_sub(c, c.r[2], c.r[6], 0, 4);
    // 08ec95  jle 0x8ecbb
    X86_AT(c, 0x8ec95u);
    if (x86_cc(c, 14)) { goto L_8ecbb; }
    X86_TICK(c, 13);
    // 08ec97  lea ebx, [ebp - 4]
    X86_AT(c, 0x8ec97u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 08ec9a  push ebx
    X86_AT(c, 0x8ec9au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 08ec9b  push 1
    X86_AT(c, 0x8ec9bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08ec9d  call 0x29
    X86_AT(c, 0x8ec9du);
    push32(c, 0x8eca2u); x86_call_known(c, 0x29u, f_00000029); X86_RET(c, 0x8eca2u);
    X86_TICK(c, 15);
    // 08eca2  add esp, 8
    X86_AT(c, 0x8eca2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 08eca5  mov eax, dword ptr [ebx]
    X86_AT(c, 0x8eca5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 08eca7  and eax, 0xff00
    X86_AT(c, 0x8eca7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFF00u, 4); }
    // 08ecac  cmp eax, 0xff00
    X86_AT(c, 0x8ecacu);
    (void)x86_sub(c, c.r[0], 0xFF00u, 0, 4);
    // 08ecb1  je 0x8ecb8
    X86_AT(c, 0x8ecb1u);
    if (x86_cc(c, 4)) { goto L_8ecb8; }
    X86_TICK(c, 7);
    // 08ecb3  call 0x8ec2c
    X86_AT(c, 0x8ecb3u);
    push32(c, 0x8ecb8u); x86_call_known(c, 0x8ec2cu, f_0008ec2c); X86_RET(c, 0x8ecb8u);
L_8ecb8:
    X86_TICK(c, 9);
    // 08ecb8  inc esi
    X86_AT(c, 0x8ecb8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 08ecb9  jmp 0x8ec84
    X86_AT(c, 0x8ecb9u);
    X86_POLL(c, 0x8ec84u); goto L_8ec84;
L_8ecbb:
    X86_TICK(c, 28);
    // 08ecbb  pop edi
    X86_AT(c, 0x8ecbbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08ecbc  pop esi
    X86_AT(c, 0x8ecbcu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 08ecbd  pop ebx
    X86_AT(c, 0x8ecbdu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 08ecbe  leave 
    X86_AT(c, 0x8ecbeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08ecbf  ret 
    X86_AT(c, 0x8ecbfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ec6cu, "ran off the end of a function");
}
void f_0008ecc0(X86Cpu& c) {
    X86_TICK(c, 23);
    // 08ecc0  push ebp
    X86_AT(c, 0x8ecc0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08ecc1  mov ebp, esp
    X86_AT(c, 0x8ecc1u);
    c.r[5] = c.r[4];
    // 08ecc3  push edi
    X86_AT(c, 0x8ecc3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08ecc4  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x8ecc4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08ecc7  push 0
    X86_AT(c, 0x8ecc7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ecc9  push 0
    X86_AT(c, 0x8ecc9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08eccb  push 0x1288
    X86_AT(c, 0x8eccbu);
    { uint32_t v = 0x1288u; push32(c, v); }
    // 08ecd0  call 0x8cff4
    X86_AT(c, 0x8ecd0u);
    push32(c, 0x8ecd5u); x86_call_known(c, 0x8cff4u, f_0008cff4); X86_RET(c, 0x8ecd5u);
    X86_TICK(c, 9);
    // 08ecd5  push 0xe
    X86_AT(c, 0x8ecd5u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 08ecd7  call 0x8c1f4
    X86_AT(c, 0x8ecd7u);
    push32(c, 0x8ecdcu); x86_call_known(c, 0x8c1f4u, f_0008c1f4); X86_RET(c, 0x8ecdcu);
    X86_TICK(c, 9);
    // 08ecdc  push 0xb
    X86_AT(c, 0x8ecdcu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 08ecde  call 0x8c20c
    X86_AT(c, 0x8ecdeu);
    push32(c, 0x8ece3u); x86_call_known(c, 0x8c20cu, f_0008c20c); X86_RET(c, 0x8ece3u);
    X86_TICK(c, 9);
    // 08ece3  push 1
    X86_AT(c, 0x8ece3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08ece5  call 0x8c2bc
    X86_AT(c, 0x8ece5u);
    push32(c, 0x8eceau); x86_call_known(c, 0x8c2bcu, f_0008c2bc); X86_RET(c, 0x8eceau);
    X86_TICK(c, 24);
    // 08ecea  push edi
    X86_AT(c, 0x8eceau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08eceb  push 0x13
    X86_AT(c, 0x8ecebu);
    { uint32_t v = 0x13u; push32(c, v); }
    // 08eced  mov edx, 0xffffffff
    X86_AT(c, 0x8ecedu);
    c.r[2] = 0xFFFFFFFFu;
    // 08ecf2  sub eax, eax
    X86_AT(c, 0x8ecf2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08ecf4  push edi
    X86_AT(c, 0x8ecf4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 08ecf5  mov ecx, edx
    X86_AT(c, 0x8ecf5u);
    c.r[1] = c.r[2];
    // 08ecf7  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x8ecf7u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 08ecf9  jne 0x8ecfe
    X86_AT(c, 0x8ecf9u);
    if (x86_cc(c, 5)) { goto L_8ecfe; }
    X86_TICK(c, 4);
    // 08ecfb  inc ecx
    X86_AT(c, 0x8ecfbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 08ecfc  sub edx, ecx
    X86_AT(c, 0x8ecfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_8ecfe:
    X86_TICK(c, 27);
    // 08ecfe  pop edi
    X86_AT(c, 0x8ecfeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08ecff  shl edx, 3
    X86_AT(c, 0x8ecffu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 08ed02  mov eax, 0x280
    X86_AT(c, 0x8ed02u);
    c.r[0] = 0x280u;
    // 08ed07  sub eax, edx
    X86_AT(c, 0x8ed07u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 08ed09  cdq 
    X86_AT(c, 0x8ed09u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 08ed0a  sub eax, edx
    X86_AT(c, 0x8ed0au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 08ed0c  sar eax, 1
    X86_AT(c, 0x8ed0cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 08ed0e  push eax
    X86_AT(c, 0x8ed0eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ed0f  call 0x8d52c
    X86_AT(c, 0x8ed0fu);
    push32(c, 0x8ed14u); x86_call_known(c, 0x8d52cu, f_0008d52c); X86_RET(c, 0x8ed14u);
    X86_TICK(c, 9);
    // 08ed14  push 0
    X86_AT(c, 0x8ed14u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ed16  call 0x8c2bc
    X86_AT(c, 0x8ed16u);
    push32(c, 0x8ed1bu); x86_call_known(c, 0x8c2bcu, f_0008c2bc); X86_RET(c, 0x8ed1bu);
    X86_TICK(c, 22);
    // 08ed1b  add esp, 0x28
    X86_AT(c, 0x8ed1bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 08ed1e  pop edi
    X86_AT(c, 0x8ed1eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 08ed1f  leave 
    X86_AT(c, 0x8ed1fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08ed20  ret 
    X86_AT(c, 0x8ed20u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ecc0u, "ran off the end of a function");
}
void f_0008ed24(X86Cpu& c) {
    X86_TICK(c, 17);
    // 08ed24  push 0
    X86_AT(c, 0x8ed24u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ed26  push 0x190
    X86_AT(c, 0x8ed26u);
    { uint32_t v = 0x190u; push32(c, v); }
    // 08ed2b  push 0x280
    X86_AT(c, 0x8ed2bu);
    { uint32_t v = 0x280u; push32(c, v); }
    // 08ed30  push 0x18
    X86_AT(c, 0x8ed30u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 08ed32  push 0
    X86_AT(c, 0x8ed32u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ed34  call 0x8c968
    X86_AT(c, 0x8ed34u);
    push32(c, 0x8ed39u); x86_call_known(c, 0x8c968u, f_0008c968); X86_RET(c, 0x8ed39u);
    X86_TICK(c, 12);
    // 08ed39  add esp, 0x14
    X86_AT(c, 0x8ed39u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 08ed3c  ret 
    X86_AT(c, 0x8ed3cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ed24u, "ran off the end of a function");
}
void f_0008ed40(X86Cpu& c) {
    X86_TICK(c, 43);
    // 08ed40  push ebp
    X86_AT(c, 0x8ed40u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08ed41  mov ebp, esp
    X86_AT(c, 0x8ed41u);
    c.r[5] = c.r[4];
    // 08ed43  push eax
    X86_AT(c, 0x8ed43u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ed44  lea eax, [ebp - 4]
    X86_AT(c, 0x8ed44u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 08ed47  push eax
    X86_AT(c, 0x8ed47u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 08ed48  push 0x89244
    X86_AT(c, 0x8ed48u);
    { uint32_t v = 0x89244u; push32(c, v); }
    // 08ed4d  push 0x89240
    X86_AT(c, 0x8ed4du);
    { uint32_t v = 0x89240u; push32(c, v); }
    // 08ed52  push 0x15000
    X86_AT(c, 0x8ed52u);
    { uint32_t v = 0x15000u; push32(c, v); }
    // 08ed57  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x8ed57u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 08ed5a  lea edx, [eax + eax*4]
    X86_AT(c, 0x8ed5au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 08ed5d  lea edx, [eax + edx*4]
    X86_AT(c, 0x8ed5du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 08ed60  shl edx, 0xc
    X86_AT(c, 0x8ed60u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 08ed63  add edx, 0x35240
    X86_AT(c, 0x8ed63u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x35240u, 0, 4); }
    // 08ed69  push edx
    X86_AT(c, 0x8ed69u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08ed6a  push dword ptr [ebp + 8]
    X86_AT(c, 0x8ed6au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 08ed6d  call 0x8cef8
    X86_AT(c, 0x8ed6du);
    push32(c, 0x8ed72u); x86_call_known(c, 0x8cef8u, f_0008cef8); X86_RET(c, 0x8ed72u);
    X86_TICK(c, 16);
    // 08ed72  leave 
    X86_AT(c, 0x8ed72u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08ed73  ret 
    X86_AT(c, 0x8ed73u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ed40u, "ran off the end of a function");
}
void f_0008ed74(X86Cpu& c) {
    X86_TICK(c, 7);
    // 08ed74  call 0x8c63c
    X86_AT(c, 0x8ed74u);
    push32(c, 0x8ed79u); x86_call_known(c, 0x8c63cu, f_0008c63c); X86_RET(c, 0x8ed79u);
    X86_TICK(c, 9);
    // 08ed79  push 3
    X86_AT(c, 0x8ed79u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08ed7b  call 0x8c38c
    X86_AT(c, 0x8ed7bu);
    push32(c, 0x8ed80u); x86_call_known(c, 0x8c38cu, f_0008c38c); X86_RET(c, 0x8ed80u);
    X86_TICK(c, 9);
    // 08ed80  push 0
    X86_AT(c, 0x8ed80u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ed82  call 0x8c540
    X86_AT(c, 0x8ed82u);
    push32(c, 0x8ed87u); x86_call_known(c, 0x8c540u, f_0008c540); X86_RET(c, 0x8ed87u);
    X86_TICK(c, 9);
    // 08ed87  push 1
    X86_AT(c, 0x8ed87u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08ed89  call 0x8c378
    X86_AT(c, 0x8ed89u);
    push32(c, 0x8ed8eu); x86_call_known(c, 0x8c378u, f_0008c378); X86_RET(c, 0x8ed8eu);
    X86_TICK(c, 9);
    // 08ed8e  push 1
    X86_AT(c, 0x8ed8eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08ed90  call 0x8c3b0
    X86_AT(c, 0x8ed90u);
    push32(c, 0x8ed95u); x86_call_known(c, 0x8c3b0u, f_0008c3b0); X86_RET(c, 0x8ed95u);
    X86_TICK(c, 9);
    // 08ed95  push 0
    X86_AT(c, 0x8ed95u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ed97  call 0x8c378
    X86_AT(c, 0x8ed97u);
    push32(c, 0x8ed9cu); x86_call_known(c, 0x8c378u, f_0008c378); X86_RET(c, 0x8ed9cu);
    X86_TICK(c, 7);
    // 08ed9c  call 0x8c13c
    X86_AT(c, 0x8ed9cu);
    push32(c, 0x8eda1u); x86_call_known(c, 0x8c13cu, f_0008c13c); X86_RET(c, 0x8eda1u);
    X86_TICK(c, 9);
    // 08eda1  push 0x129c
    X86_AT(c, 0x8eda1u);
    { uint32_t v = 0x129Cu; push32(c, v); }
    // 08eda6  call 0x8ecc0
    X86_AT(c, 0x8eda6u);
    push32(c, 0x8edabu); x86_call_known(c, 0x8ecc0u, f_0008ecc0); X86_RET(c, 0x8edabu);
    X86_TICK(c, 7);
    // 08edab  call 0x8ed24
    X86_AT(c, 0x8edabu);
    push32(c, 0x8edb0u); x86_call_known(c, 0x8ed24u, f_0008ed24); X86_RET(c, 0x8edb0u);
    X86_TICK(c, 9);
    // 08edb0  push 2
    X86_AT(c, 0x8edb0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08edb2  call 0x8c38c
    X86_AT(c, 0x8edb2u);
    push32(c, 0x8edb7u); x86_call_known(c, 0x8c38cu, f_0008c38c); X86_RET(c, 0x8edb7u);
    X86_TICK(c, 7);
    // 08edb7  call 0x8bdd4
    X86_AT(c, 0x8edb7u);
    push32(c, 0x8edbcu); x86_call_known(c, 0x8bdd4u, f_0008bdd4); X86_RET(c, 0x8edbcu);
    X86_TICK(c, 7);
    // 08edbc  call 0x8abf4
    X86_AT(c, 0x8edbcu);
    push32(c, 0x8edc1u); x86_call_known(c, 0x8abf4u, f_0008abf4); X86_RET(c, 0x8edc1u);
    X86_TICK(c, 14);
    // 08edc1  sub eax, eax
    X86_AT(c, 0x8edc1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08edc3  add esp, 0x1c
    X86_AT(c, 0x8edc3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 08edc6  ret 
    X86_AT(c, 0x8edc6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ed74u, "ran off the end of a function");
}
void f_0008edc8(X86Cpu& c) {
    X86_TICK(c, 13);
    // 08edc8  push ebp
    X86_AT(c, 0x8edc8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 08edc9  mov ebp, esp
    X86_AT(c, 0x8edc9u);
    c.r[5] = c.r[4];
    // 08edcb  push 0
    X86_AT(c, 0x8edcbu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08edcd  call 0x8c38c
    X86_AT(c, 0x8edcdu);
    push32(c, 0x8edd2u); x86_call_known(c, 0x8c38cu, f_0008c38c); X86_RET(c, 0x8edd2u);
    X86_TICK(c, 9);
    // 08edd2  push 1
    X86_AT(c, 0x8edd2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08edd4  call 0x8c378
    X86_AT(c, 0x8edd4u);
    push32(c, 0x8edd9u); x86_call_known(c, 0x8c378u, f_0008c378); X86_RET(c, 0x8edd9u);
    X86_TICK(c, 36);
    // 08edd9  push dword ptr [0x89244]
    X86_AT(c, 0x8edd9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x89244u))); push32(c, v); }
    // 08eddf  push dword ptr [0x89240]
    X86_AT(c, 0x8eddfu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x89240u))); push32(c, v); }
    // 08ede5  push 0x10
    X86_AT(c, 0x8ede5u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 08ede7  push 0x1f
    X86_AT(c, 0x8ede7u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 08ede9  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x8ede9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 08edec  lea edx, [eax + eax*4]
    X86_AT(c, 0x8edecu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 08edef  lea edx, [eax + edx*4]
    X86_AT(c, 0x8edefu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 08edf2  shl edx, 0xc
    X86_AT(c, 0x8edf2u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 08edf5  add edx, 0x35240
    X86_AT(c, 0x8edf5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x35240u, 0, 4); }
    // 08edfb  push edx
    X86_AT(c, 0x8edfbu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 08edfc  call 0x8cd20
    X86_AT(c, 0x8edfcu);
    push32(c, 0x8ee01u); x86_call_known(c, 0x8cd20u, f_0008cd20); X86_RET(c, 0x8ee01u);
    X86_TICK(c, 9);
    // 08ee01  push 0
    X86_AT(c, 0x8ee01u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ee03  call 0x8c378
    X86_AT(c, 0x8ee03u);
    push32(c, 0x8ee08u); x86_call_known(c, 0x8c378u, f_0008c378); X86_RET(c, 0x8ee08u);
    X86_TICK(c, 7);
    // 08ee08  call 0x8c13c
    X86_AT(c, 0x8ee08u);
    push32(c, 0x8ee0du); x86_call_known(c, 0x8c13cu, f_0008c13c); X86_RET(c, 0x8ee0du);
    X86_TICK(c, 16);
    // 08ee0d  leave 
    X86_AT(c, 0x8ee0du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 08ee0e  ret 
    X86_AT(c, 0x8ee0eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8edc8u, "ran off the end of a function");
}
void f_0008ee10(X86Cpu& c) {
    X86_TICK(c, 9);
    // 08ee10  push 0
    X86_AT(c, 0x8ee10u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ee12  call 0x8edc8
    X86_AT(c, 0x8ee12u);
    push32(c, 0x8ee17u); x86_call_known(c, 0x8edc8u, f_0008edc8); X86_RET(c, 0x8ee17u);
    X86_TICK(c, 9);
    // 08ee17  push 0
    X86_AT(c, 0x8ee17u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ee19  call 0x8d3e0
    X86_AT(c, 0x8ee19u);
    push32(c, 0x8ee1eu); x86_call_known(c, 0x8d3e0u, f_0008d3e0); X86_RET(c, 0x8ee1eu);
    X86_TICK(c, 9);
    // 08ee1e  push 2
    X86_AT(c, 0x8ee1eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08ee20  call 0x8c38c
    X86_AT(c, 0x8ee20u);
    push32(c, 0x8ee25u); x86_call_known(c, 0x8c38cu, f_0008c38c); X86_RET(c, 0x8ee25u);
    X86_TICK(c, 9);
    // 08ee25  push 0
    X86_AT(c, 0x8ee25u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ee27  call 0x8d594
    X86_AT(c, 0x8ee27u);
    push32(c, 0x8ee2cu); x86_call_known(c, 0x8d594u, f_0008d594); X86_RET(c, 0x8ee2cu);
    X86_TICK(c, 11);
    // 08ee2c  push 0x12b4
    X86_AT(c, 0x8ee2cu);
    { uint32_t v = 0x12B4u; push32(c, v); }
    // 08ee31  push 0
    X86_AT(c, 0x8ee31u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ee33  call 0x8d754
    X86_AT(c, 0x8ee33u);
    push32(c, 0x8ee38u); x86_call_known(c, 0x8d754u, f_0008d754); X86_RET(c, 0x8ee38u);
    X86_TICK(c, 9);
    // 08ee38  push 0
    X86_AT(c, 0x8ee38u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ee3a  call 0x8d70c
    X86_AT(c, 0x8ee3au);
    push32(c, 0x8ee3fu); x86_call_known(c, 0x8d70cu, f_0008d70c); X86_RET(c, 0x8ee3fu);
    X86_TICK(c, 9);
    // 08ee3f  push 0x14
    X86_AT(c, 0x8ee3fu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 08ee41  call 0x8ec6c
    X86_AT(c, 0x8ee41u);
    push32(c, 0x8ee46u); x86_call_known(c, 0x8ec6cu, f_0008ec6c); X86_RET(c, 0x8ee46u);
    X86_TICK(c, 11);
    // 08ee46  push 0x12c8
    X86_AT(c, 0x8ee46u);
    { uint32_t v = 0x12C8u; push32(c, v); }
    // 08ee4b  push 0
    X86_AT(c, 0x8ee4bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ee4d  call 0x8d754
    X86_AT(c, 0x8ee4du);
    push32(c, 0x8ee52u); x86_call_known(c, 0x8d754u, f_0008d754); X86_RET(c, 0x8ee52u);
    X86_TICK(c, 9);
    // 08ee52  push 0
    X86_AT(c, 0x8ee52u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ee54  call 0x8d70c
    X86_AT(c, 0x8ee54u);
    push32(c, 0x8ee59u); x86_call_known(c, 0x8d70cu, f_0008d70c); X86_RET(c, 0x8ee59u);
    X86_TICK(c, 11);
    // 08ee59  push 0x12f8
    X86_AT(c, 0x8ee59u);
    { uint32_t v = 0x12F8u; push32(c, v); }
    // 08ee5e  push 0
    X86_AT(c, 0x8ee5eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ee60  call 0x8d754
    X86_AT(c, 0x8ee60u);
    push32(c, 0x8ee65u); x86_call_known(c, 0x8d754u, f_0008d754); X86_RET(c, 0x8ee65u);
    X86_TICK(c, 9);
    // 08ee65  push 0
    X86_AT(c, 0x8ee65u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ee67  call 0x8d70c
    X86_AT(c, 0x8ee67u);
    push32(c, 0x8ee6cu); x86_call_known(c, 0x8d70cu, f_0008d70c); X86_RET(c, 0x8ee6cu);
    X86_TICK(c, 9);
    // 08ee6c  push 0x32
    X86_AT(c, 0x8ee6cu);
    { uint32_t v = 0x32u; push32(c, v); }
    // 08ee6e  call 0x8ec6c
    X86_AT(c, 0x8ee6eu);
    push32(c, 0x8ee73u); x86_call_known(c, 0x8ec6cu, f_0008ec6c); X86_RET(c, 0x8ee73u);
    X86_TICK(c, 13);
    // 08ee73  add esp, 0x3c
    X86_AT(c, 0x8ee73u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 08ee76  push 0x132c
    X86_AT(c, 0x8ee76u);
    { uint32_t v = 0x132Cu; push32(c, v); }
    // 08ee7b  push 0
    X86_AT(c, 0x8ee7bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ee7d  call 0x8d754
    X86_AT(c, 0x8ee7du);
    push32(c, 0x8ee82u); x86_call_known(c, 0x8d754u, f_0008d754); X86_RET(c, 0x8ee82u);
    X86_TICK(c, 9);
    // 08ee82  push 0
    X86_AT(c, 0x8ee82u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ee84  call 0x8d70c
    X86_AT(c, 0x8ee84u);
    push32(c, 0x8ee89u); x86_call_known(c, 0x8d70cu, f_0008d70c); X86_RET(c, 0x8ee89u);
    X86_TICK(c, 9);
    // 08ee89  push 0x46
    X86_AT(c, 0x8ee89u);
    { uint32_t v = 0x46u; push32(c, v); }
    // 08ee8b  call 0x8ec6c
    X86_AT(c, 0x8ee8bu);
    push32(c, 0x8ee90u); x86_call_known(c, 0x8ec6cu, f_0008ec6c); X86_RET(c, 0x8ee90u);
    X86_TICK(c, 11);
    // 08ee90  push 0x1380
    X86_AT(c, 0x8ee90u);
    { uint32_t v = 0x1380u; push32(c, v); }
    // 08ee95  push 0
    X86_AT(c, 0x8ee95u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ee97  call 0x8d754
    X86_AT(c, 0x8ee97u);
    push32(c, 0x8ee9cu); x86_call_known(c, 0x8d754u, f_0008d754); X86_RET(c, 0x8ee9cu);
    X86_TICK(c, 9);
    // 08ee9c  push 0xf
    X86_AT(c, 0x8ee9cu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 08ee9e  call 0x8ec6c
    X86_AT(c, 0x8ee9eu);
    push32(c, 0x8eea3u); x86_call_known(c, 0x8ec6cu, f_0008ec6c); X86_RET(c, 0x8eea3u);
    X86_TICK(c, 11);
    // 08eea3  push 0x13a8
    X86_AT(c, 0x8eea3u);
    { uint32_t v = 0x13A8u; push32(c, v); }
    // 08eea8  push 0
    X86_AT(c, 0x8eea8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08eeaa  call 0x8d754
    X86_AT(c, 0x8eeaau);
    push32(c, 0x8eeafu); x86_call_known(c, 0x8d754u, f_0008d754); X86_RET(c, 0x8eeafu);
    X86_TICK(c, 9);
    // 08eeaf  push 0x28
    X86_AT(c, 0x8eeafu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 08eeb1  call 0x8ec6c
    X86_AT(c, 0x8eeb1u);
    push32(c, 0x8eeb6u); x86_call_known(c, 0x8ec6cu, f_0008ec6c); X86_RET(c, 0x8eeb6u);
    X86_TICK(c, 9);
    // 08eeb6  push 1
    X86_AT(c, 0x8eeb6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 08eeb8  call 0x8edc8
    X86_AT(c, 0x8eeb8u);
    push32(c, 0x8eebdu); x86_call_known(c, 0x8edc8u, f_0008edc8); X86_RET(c, 0x8eebdu);
    X86_TICK(c, 11);
    // 08eebd  add esp, 0x2c
    X86_AT(c, 0x8eebdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 08eec0  push 0
    X86_AT(c, 0x8eec0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08eec2  call 0x8d594
    X86_AT(c, 0x8eec2u);
    push32(c, 0x8eec7u); x86_call_known(c, 0x8d594u, f_0008d594); X86_RET(c, 0x8eec7u);
    X86_TICK(c, 13);
    // 08eec7  push 0
    X86_AT(c, 0x8eec7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08eec9  push 0
    X86_AT(c, 0x8eec9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08eecb  push 0
    X86_AT(c, 0x8eecbu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08eecd  call 0x8dd04
    X86_AT(c, 0x8eecdu);
    push32(c, 0x8eed2u); x86_call_known(c, 0x8dd04u, f_0008dd04); X86_RET(c, 0x8eed2u);
    X86_TICK(c, 9);
    // 08eed2  push 2
    X86_AT(c, 0x8eed2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08eed4  call 0x8c38c
    X86_AT(c, 0x8eed4u);
    push32(c, 0x8eed9u); x86_call_known(c, 0x8c38cu, f_0008c38c); X86_RET(c, 0x8eed9u);
    X86_TICK(c, 11);
    // 08eed9  push 0x13e0
    X86_AT(c, 0x8eed9u);
    { uint32_t v = 0x13E0u; push32(c, v); }
    // 08eede  push 0
    X86_AT(c, 0x8eedeu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08eee0  call 0x8d754
    X86_AT(c, 0x8eee0u);
    push32(c, 0x8eee5u); x86_call_known(c, 0x8d754u, f_0008d754); X86_RET(c, 0x8eee5u);
    X86_TICK(c, 9);
    // 08eee5  push 0
    X86_AT(c, 0x8eee5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08eee7  call 0x8d70c
    X86_AT(c, 0x8eee7u);
    push32(c, 0x8eeecu); x86_call_known(c, 0x8d70cu, f_0008d70c); X86_RET(c, 0x8eeecu);
    X86_TICK(c, 9);
    // 08eeec  push 0x1e
    X86_AT(c, 0x8eeecu);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 08eeee  call 0x8ec6c
    X86_AT(c, 0x8eeeeu);
    push32(c, 0x8eef3u); x86_call_known(c, 0x8ec6cu, f_0008ec6c); X86_RET(c, 0x8eef3u);
    X86_TICK(c, 11);
    // 08eef3  push 0x1410
    X86_AT(c, 0x8eef3u);
    { uint32_t v = 0x1410u; push32(c, v); }
    // 08eef8  push 0
    X86_AT(c, 0x8eef8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08eefa  call 0x8d754
    X86_AT(c, 0x8eefau);
    push32(c, 0x8eeffu); x86_call_known(c, 0x8d754u, f_0008d754); X86_RET(c, 0x8eeffu);
    X86_TICK(c, 9);
    // 08eeff  push 0
    X86_AT(c, 0x8eeffu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ef01  call 0x8d70c
    X86_AT(c, 0x8ef01u);
    push32(c, 0x8ef06u); x86_call_known(c, 0x8d70cu, f_0008d70c); X86_RET(c, 0x8ef06u);
    X86_TICK(c, 9);
    // 08ef06  push 0x1e
    X86_AT(c, 0x8ef06u);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 08ef08  call 0x8ec6c
    X86_AT(c, 0x8ef08u);
    push32(c, 0x8ef0du); x86_call_known(c, 0x8ec6cu, f_0008ec6c); X86_RET(c, 0x8ef0du);
    X86_TICK(c, 11);
    // 08ef0d  push 0x1484
    X86_AT(c, 0x8ef0du);
    { uint32_t v = 0x1484u; push32(c, v); }
    // 08ef12  push 0
    X86_AT(c, 0x8ef12u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ef14  call 0x8d754
    X86_AT(c, 0x8ef14u);
    push32(c, 0x8ef19u); x86_call_known(c, 0x8d754u, f_0008d754); X86_RET(c, 0x8ef19u);
    X86_TICK(c, 11);
    // 08ef19  add esp, 0x3c
    X86_AT(c, 0x8ef19u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 08ef1c  push 0x1e
    X86_AT(c, 0x8ef1cu);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 08ef1e  call 0x8ec6c
    X86_AT(c, 0x8ef1eu);
    push32(c, 0x8ef23u); x86_call_known(c, 0x8ec6cu, f_0008ec6c); X86_RET(c, 0x8ef23u);
    X86_TICK(c, 11);
    // 08ef23  push 0x14d0
    X86_AT(c, 0x8ef23u);
    { uint32_t v = 0x14D0u; push32(c, v); }
    // 08ef28  push 0
    X86_AT(c, 0x8ef28u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ef2a  call 0x8d754
    X86_AT(c, 0x8ef2au);
    push32(c, 0x8ef2fu); x86_call_known(c, 0x8d754u, f_0008d754); X86_RET(c, 0x8ef2fu);
    X86_TICK(c, 9);
    // 08ef2f  push 0
    X86_AT(c, 0x8ef2fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ef31  call 0x8d70c
    X86_AT(c, 0x8ef31u);
    push32(c, 0x8ef36u); x86_call_known(c, 0x8d70cu, f_0008d70c); X86_RET(c, 0x8ef36u);
    X86_TICK(c, 9);
    // 08ef36  push 0x1e
    X86_AT(c, 0x8ef36u);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 08ef38  call 0x8ec6c
    X86_AT(c, 0x8ef38u);
    push32(c, 0x8ef3du); x86_call_known(c, 0x8ec6cu, f_0008ec6c); X86_RET(c, 0x8ef3du);
    X86_TICK(c, 11);
    // 08ef3d  push 0x1504
    X86_AT(c, 0x8ef3du);
    { uint32_t v = 0x1504u; push32(c, v); }
    // 08ef42  push 0
    X86_AT(c, 0x8ef42u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ef44  call 0x8d754
    X86_AT(c, 0x8ef44u);
    push32(c, 0x8ef49u); x86_call_known(c, 0x8d754u, f_0008d754); X86_RET(c, 0x8ef49u);
    X86_TICK(c, 9);
    // 08ef49  push 0
    X86_AT(c, 0x8ef49u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ef4b  call 0x8d70c
    X86_AT(c, 0x8ef4bu);
    push32(c, 0x8ef50u); x86_call_known(c, 0x8d70cu, f_0008d70c); X86_RET(c, 0x8ef50u);
    X86_TICK(c, 9);
    // 08ef50  push 0x28
    X86_AT(c, 0x8ef50u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 08ef52  call 0x8ec6c
    X86_AT(c, 0x8ef52u);
    push32(c, 0x8ef57u); x86_call_known(c, 0x8ec6cu, f_0008ec6c); X86_RET(c, 0x8ef57u);
    X86_TICK(c, 9);
    // 08ef57  push 0
    X86_AT(c, 0x8ef57u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ef59  call 0x8d594
    X86_AT(c, 0x8ef59u);
    push32(c, 0x8ef5eu); x86_call_known(c, 0x8d594u, f_0008d594); X86_RET(c, 0x8ef5eu);
    X86_TICK(c, 13);
    // 08ef5e  push 0
    X86_AT(c, 0x8ef5eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ef60  push 0
    X86_AT(c, 0x8ef60u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ef62  push 0
    X86_AT(c, 0x8ef62u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ef64  call 0x8dd04
    X86_AT(c, 0x8ef64u);
    push32(c, 0x8ef69u); x86_call_known(c, 0x8dd04u, f_0008dd04); X86_RET(c, 0x8ef69u);
    X86_TICK(c, 11);
    // 08ef69  push 0x154c
    X86_AT(c, 0x8ef69u);
    { uint32_t v = 0x154Cu; push32(c, v); }
    // 08ef6e  push 0
    X86_AT(c, 0x8ef6eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ef70  call 0x8d754
    X86_AT(c, 0x8ef70u);
    push32(c, 0x8ef75u); x86_call_known(c, 0x8d754u, f_0008d754); X86_RET(c, 0x8ef75u);
    X86_TICK(c, 11);
    // 08ef75  add esp, 0x3c
    X86_AT(c, 0x8ef75u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 08ef78  push 8
    X86_AT(c, 0x8ef78u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 08ef7a  call 0x8ec6c
    X86_AT(c, 0x8ef7au);
    push32(c, 0x8ef7fu); x86_call_known(c, 0x8ec6cu, f_0008ec6c); X86_RET(c, 0x8ef7fu);
    X86_TICK(c, 13);
    // 08ef7f  add esp, 4
    X86_AT(c, 0x8ef7fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08ef82  push 0x1578
    X86_AT(c, 0x8ef82u);
    { uint32_t v = 0x1578u; push32(c, v); }
    // 08ef87  push 0
    X86_AT(c, 0x8ef87u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ef89  call 0x8d754
    X86_AT(c, 0x8ef89u);
    push32(c, 0x8ef8eu); x86_call_known(c, 0x8d754u, f_0008d754); X86_RET(c, 0x8ef8eu);
    X86_TICK(c, 9);
    // 08ef8e  push 0
    X86_AT(c, 0x8ef8eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ef90  call 0x8d70c
    X86_AT(c, 0x8ef90u);
    push32(c, 0x8ef95u); x86_call_known(c, 0x8d70cu, f_0008d70c); X86_RET(c, 0x8ef95u);
    X86_TICK(c, 9);
    // 08ef95  push 0
    X86_AT(c, 0x8ef95u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08ef97  call 0x8d70c
    X86_AT(c, 0x8ef97u);
    push32(c, 0x8ef9cu); x86_call_known(c, 0x8d70cu, f_0008d70c); X86_RET(c, 0x8ef9cu);
    X86_TICK(c, 9);
    // 08ef9c  push 0x1e
    X86_AT(c, 0x8ef9cu);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 08ef9e  call 0x8ec6c
    X86_AT(c, 0x8ef9eu);
    push32(c, 0x8efa3u); x86_call_known(c, 0x8ec6cu, f_0008ec6c); X86_RET(c, 0x8efa3u);
    X86_TICK(c, 11);
    // 08efa3  push 0x1584
    X86_AT(c, 0x8efa3u);
    { uint32_t v = 0x1584u; push32(c, v); }
    // 08efa8  push 0
    X86_AT(c, 0x8efa8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08efaa  call 0x8d754
    X86_AT(c, 0x8efaau);
    push32(c, 0x8efafu); x86_call_known(c, 0x8d754u, f_0008d754); X86_RET(c, 0x8efafu);
    X86_TICK(c, 9);
    // 08efaf  push 0
    X86_AT(c, 0x8efafu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08efb1  call 0x8d70c
    X86_AT(c, 0x8efb1u);
    push32(c, 0x8efb6u); x86_call_known(c, 0x8d70cu, f_0008d70c); X86_RET(c, 0x8efb6u);
    X86_TICK(c, 9);
    // 08efb6  push 0x19
    X86_AT(c, 0x8efb6u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 08efb8  call 0x8ec6c
    X86_AT(c, 0x8efb8u);
    push32(c, 0x8efbdu); x86_call_known(c, 0x8ec6cu, f_0008ec6c); X86_RET(c, 0x8efbdu);
    X86_TICK(c, 9);
    // 08efbd  push 2
    X86_AT(c, 0x8efbdu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08efbf  call 0x8edc8
    X86_AT(c, 0x8efbfu);
    push32(c, 0x8efc4u); x86_call_known(c, 0x8edc8u, f_0008edc8); X86_RET(c, 0x8efc4u);
    X86_TICK(c, 9);
    // 08efc4  push 2
    X86_AT(c, 0x8efc4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08efc6  call 0x8c38c
    X86_AT(c, 0x8efc6u);
    push32(c, 0x8efcbu); x86_call_known(c, 0x8c38cu, f_0008c38c); X86_RET(c, 0x8efcbu);
    X86_TICK(c, 9);
    // 08efcb  push 0
    X86_AT(c, 0x8efcbu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08efcd  call 0x8d594
    X86_AT(c, 0x8efcdu);
    push32(c, 0x8efd2u); x86_call_known(c, 0x8d594u, f_0008d594); X86_RET(c, 0x8efd2u);
    X86_TICK(c, 13);
    // 08efd2  push 0
    X86_AT(c, 0x8efd2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08efd4  push 0
    X86_AT(c, 0x8efd4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08efd6  push 0
    X86_AT(c, 0x8efd6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08efd8  call 0x8dd04
    X86_AT(c, 0x8efd8u);
    push32(c, 0x8efddu); x86_call_known(c, 0x8dd04u, f_0008dd04); X86_RET(c, 0x8efddu);
    X86_TICK(c, 13);
    // 08efdd  add esp, 0x3c
    X86_AT(c, 0x8efddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 08efe0  push 0x15ec
    X86_AT(c, 0x8efe0u);
    { uint32_t v = 0x15ECu; push32(c, v); }
    // 08efe5  push 0
    X86_AT(c, 0x8efe5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08efe7  call 0x8d754
    X86_AT(c, 0x8efe7u);
    push32(c, 0x8efecu); x86_call_known(c, 0x8d754u, f_0008d754); X86_RET(c, 0x8efecu);
    X86_TICK(c, 9);
    // 08efec  push 0
    X86_AT(c, 0x8efecu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08efee  call 0x8d70c
    X86_AT(c, 0x8efeeu);
    push32(c, 0x8eff3u); x86_call_known(c, 0x8d70cu, f_0008d70c); X86_RET(c, 0x8eff3u);
    X86_TICK(c, 9);
    // 08eff3  push 0x28
    X86_AT(c, 0x8eff3u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 08eff5  call 0x8ec6c
    X86_AT(c, 0x8eff5u);
    push32(c, 0x8effau); x86_call_known(c, 0x8ec6cu, f_0008ec6c); X86_RET(c, 0x8effau);
    X86_TICK(c, 11);
    // 08effa  push 0x1658
    X86_AT(c, 0x8effau);
    { uint32_t v = 0x1658u; push32(c, v); }
    // 08efff  push 0
    X86_AT(c, 0x8efffu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f001  call 0x8d754
    X86_AT(c, 0x8f001u);
    push32(c, 0x8f006u); x86_call_known(c, 0x8d754u, f_0008d754); X86_RET(c, 0x8f006u);
    X86_TICK(c, 9);
    // 08f006  push 0
    X86_AT(c, 0x8f006u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f008  call 0x8d70c
    X86_AT(c, 0x8f008u);
    push32(c, 0x8f00du); x86_call_known(c, 0x8d70cu, f_0008d70c); X86_RET(c, 0x8f00du);
    X86_TICK(c, 9);
    // 08f00d  push 0x28
    X86_AT(c, 0x8f00du);
    { uint32_t v = 0x28u; push32(c, v); }
    // 08f00f  call 0x8ec6c
    X86_AT(c, 0x8f00fu);
    push32(c, 0x8f014u); x86_call_known(c, 0x8ec6cu, f_0008ec6c); X86_RET(c, 0x8f014u);
    X86_TICK(c, 11);
    // 08f014  push 0x16bc
    X86_AT(c, 0x8f014u);
    { uint32_t v = 0x16BCu; push32(c, v); }
    // 08f019  push 0
    X86_AT(c, 0x8f019u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f01b  call 0x8d754
    X86_AT(c, 0x8f01bu);
    push32(c, 0x8f020u); x86_call_known(c, 0x8d754u, f_0008d754); X86_RET(c, 0x8f020u);
    X86_TICK(c, 9);
    // 08f020  push 0
    X86_AT(c, 0x8f020u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f022  call 0x8d70c
    X86_AT(c, 0x8f022u);
    push32(c, 0x8f027u); x86_call_known(c, 0x8d70cu, f_0008d70c); X86_RET(c, 0x8f027u);
    X86_TICK(c, 9);
    // 08f027  push 0x28
    X86_AT(c, 0x8f027u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 08f029  call 0x8ec6c
    X86_AT(c, 0x8f029u);
    push32(c, 0x8f02eu); x86_call_known(c, 0x8ec6cu, f_0008ec6c); X86_RET(c, 0x8f02eu);
    X86_TICK(c, 11);
    // 08f02e  push 0x1734
    X86_AT(c, 0x8f02eu);
    { uint32_t v = 0x1734u; push32(c, v); }
    // 08f033  push 0
    X86_AT(c, 0x8f033u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f035  call 0x8d754
    X86_AT(c, 0x8f035u);
    push32(c, 0x8f03au); x86_call_known(c, 0x8d754u, f_0008d754); X86_RET(c, 0x8f03au);
    X86_TICK(c, 11);
    // 08f03a  add esp, 0x38
    X86_AT(c, 0x8f03au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 08f03d  push 0
    X86_AT(c, 0x8f03du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f03f  call 0x8d70c
    X86_AT(c, 0x8f03fu);
    push32(c, 0x8f044u); x86_call_known(c, 0x8d70cu, f_0008d70c); X86_RET(c, 0x8f044u);
    X86_TICK(c, 11);
    // 08f044  push 0x176c
    X86_AT(c, 0x8f044u);
    { uint32_t v = 0x176Cu; push32(c, v); }
    // 08f049  push 0
    X86_AT(c, 0x8f049u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f04b  call 0x8d754
    X86_AT(c, 0x8f04bu);
    push32(c, 0x8f050u); x86_call_known(c, 0x8d754u, f_0008d754); X86_RET(c, 0x8f050u);
    X86_TICK(c, 9);
    // 08f050  push 0x28
    X86_AT(c, 0x8f050u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 08f052  call 0x8ec6c
    X86_AT(c, 0x8f052u);
    push32(c, 0x8f057u); x86_call_known(c, 0x8ec6cu, f_0008ec6c); X86_RET(c, 0x8f057u);
    X86_TICK(c, 9);
    // 08f057  push 3
    X86_AT(c, 0x8f057u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 08f059  call 0x8edc8
    X86_AT(c, 0x8f059u);
    push32(c, 0x8f05eu); x86_call_known(c, 0x8edc8u, f_0008edc8); X86_RET(c, 0x8f05eu);
    X86_TICK(c, 9);
    // 08f05e  push 2
    X86_AT(c, 0x8f05eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 08f060  call 0x8c38c
    X86_AT(c, 0x8f060u);
    push32(c, 0x8f065u); x86_call_known(c, 0x8c38cu, f_0008c38c); X86_RET(c, 0x8f065u);
    X86_TICK(c, 9);
    // 08f065  push 0
    X86_AT(c, 0x8f065u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f067  call 0x8d594
    X86_AT(c, 0x8f067u);
    push32(c, 0x8f06cu); x86_call_known(c, 0x8d594u, f_0008d594); X86_RET(c, 0x8f06cu);
    X86_TICK(c, 13);
    // 08f06c  push 0
    X86_AT(c, 0x8f06cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f06e  push 0
    X86_AT(c, 0x8f06eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f070  push 0
    X86_AT(c, 0x8f070u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f072  call 0x8dd04
    X86_AT(c, 0x8f072u);
    push32(c, 0x8f077u); x86_call_known(c, 0x8dd04u, f_0008dd04); X86_RET(c, 0x8f077u);
    X86_TICK(c, 11);
    // 08f077  push 0x17b8
    X86_AT(c, 0x8f077u);
    { uint32_t v = 0x17B8u; push32(c, v); }
    // 08f07c  push 0
    X86_AT(c, 0x8f07cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f07e  call 0x8d754
    X86_AT(c, 0x8f07eu);
    push32(c, 0x8f083u); x86_call_known(c, 0x8d754u, f_0008d754); X86_RET(c, 0x8f083u);
    X86_TICK(c, 11);
    // 08f083  push 0x17f0
    X86_AT(c, 0x8f083u);
    { uint32_t v = 0x17F0u; push32(c, v); }
    // 08f088  push 0
    X86_AT(c, 0x8f088u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f08a  call 0x8d754
    X86_AT(c, 0x8f08au);
    push32(c, 0x8f08fu); x86_call_known(c, 0x8d754u, f_0008d754); X86_RET(c, 0x8f08fu);
    X86_TICK(c, 9);
    // 08f08f  push 0
    X86_AT(c, 0x8f08fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 08f091  call 0x8d70c
    X86_AT(c, 0x8f091u);
    push32(c, 0x8f096u); x86_call_known(c, 0x8d70cu, f_0008d70c); X86_RET(c, 0x8f096u);
    X86_TICK(c, 11);
    // 08f096  add esp, 0x3c
    X86_AT(c, 0x8f096u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 08f099  push 0xc8
    X86_AT(c, 0x8f099u);
    { uint32_t v = 0xC8u; push32(c, v); }
    // 08f09e  call 0x8ec6c
    X86_AT(c, 0x8f09eu);
    push32(c, 0x8f0a3u); x86_call_known(c, 0x8ec6cu, f_0008ec6c); X86_RET(c, 0x8f0a3u);
    X86_TICK(c, 14);
    // 08f0a3  sub eax, eax
    X86_AT(c, 0x8f0a3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 08f0a5  add esp, 4
    X86_AT(c, 0x8f0a5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 08f0a8  ret 
    X86_AT(c, 0x8f0a8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ee10u, "ran off the end of a function");
}
}
