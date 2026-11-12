#include "p_game_funcs.h"
namespace p_game {
void f_0004d758(X86Cpu& c) {
    X86_TICK(c, 23);
    // 04d758  push ebp
    X86_AT(c, 0x4d758u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04d759  mov ebp, esp
    X86_AT(c, 0x4d759u);
    c.r[5] = c.r[4];
    // 04d75b  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0x4d75bu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04d75f  push eax
    X86_AT(c, 0x4d75fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04d760  push 1
    X86_AT(c, 0x4d760u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04d762  push 0x342dc
    X86_AT(c, 0x4d762u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d767  call 0x18e
    X86_AT(c, 0x4d767u);
    push32(c, 0x4d76cu); x86_call_known(c, 0x18eu, f_0000018e); X86_RET(c, 0x4d76cu);
    X86_TICK(c, 9);
    // 04d76c  push 0x342dc
    X86_AT(c, 0x4d76cu);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d771  call 0x498
    X86_AT(c, 0x4d771u);
    push32(c, 0x4d776u); x86_call_known(c, 0x498u, f_00000498); X86_RET(c, 0x4d776u);
    X86_TICK(c, 16);
    // 04d776  leave 
    X86_AT(c, 0x4d776u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04d777  ret 
    X86_AT(c, 0x4d777u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4d758u, "ran off the end of a function");
}
void f_0004d7ac(X86Cpu& c) {
    X86_TICK(c, 41);
    // 04d7ac  push ebp
    X86_AT(c, 0x4d7acu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04d7ad  mov ebp, esp
    X86_AT(c, 0x4d7adu);
    c.r[5] = c.r[4];
    // 04d7af  mov word ptr [0x348dc], 2
    X86_AT(c, 0x4d7afu);
    wr16((c.sbase[3] + (uint32_t)(0x348DCu)), 0x2u);
    // 04d7b8  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0x4d7b8u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 04d7bc  mov word ptr [0x348de], ax
    X86_AT(c, 0x4d7bcu);
    wr16((c.sbase[3] + (uint32_t)(0x348DEu)), (c.r[0] & 0xFFFFu));
    // 04d7c2  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0x4d7c2u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 04d7c6  mov word ptr [0x348e0], ax
    X86_AT(c, 0x4d7c6u);
    wr16((c.sbase[3] + (uint32_t)(0x348E0u)), (c.r[0] & 0xFFFFu));
    // 04d7cc  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0x4d7ccu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 04d7d0  mov word ptr [0x348e2], ax
    X86_AT(c, 0x4d7d0u);
    wr16((c.sbase[3] + (uint32_t)(0x348E2u)), (c.r[0] & 0xFFFFu));
    // 04d7d6  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0x4d7d6u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 04d7da  mov word ptr [0x348e4], ax
    X86_AT(c, 0x4d7dau);
    wr16((c.sbase[3] + (uint32_t)(0x348E4u)), (c.r[0] & 0xFFFFu));
    // 04d7e0  push 0x348dc
    X86_AT(c, 0x4d7e0u);
    { uint32_t v = 0x348DCu; push32(c, v); }
    // 04d7e5  push 0x342dc
    X86_AT(c, 0x4d7e5u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d7ea  call 0x789
    X86_AT(c, 0x4d7eau);
    push32(c, 0x4d7efu); x86_call_known(c, 0x789u, f_00000789); X86_RET(c, 0x4d7efu);
    X86_TICK(c, 16);
    // 04d7ef  leave 
    X86_AT(c, 0x4d7efu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04d7f0  ret 
    X86_AT(c, 0x4d7f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4d7acu, "ran off the end of a function");
}
void f_0004d8cc(X86Cpu& c) {
    X86_TICK(c, 24);
    // 04d8cc  push ebp
    X86_AT(c, 0x4d8ccu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04d8cd  mov ebp, esp
    X86_AT(c, 0x4d8cdu);
    c.r[5] = c.r[4];
    // 04d8cf  mov ax, word ptr [0x349e2]
    X86_AT(c, 0x4d8cfu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x349E2u))));
    // 04d8d5  or al, 0x20
    X86_AT(c, 0x4d8d5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 04d8d7  movsx eax, ax
    X86_AT(c, 0x4d8d7u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 04d8da  push eax
    X86_AT(c, 0x4d8dau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04d8db  push 0x342dc
    X86_AT(c, 0x4d8dbu);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d8e0  call 0x245
    X86_AT(c, 0x4d8e0u);
    push32(c, 0x4d8e5u); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x4d8e5u);
    X86_TICK(c, 35);
    // 04d8e5  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0x4d8e5u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 04d8e9  mov word ptr [0x348dc], ax
    X86_AT(c, 0x4d8e9u);
    wr16((c.sbase[3] + (uint32_t)(0x348DCu)), (c.r[0] & 0xFFFFu));
    // 04d8ef  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0x4d8efu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 04d8f3  mov word ptr [0x348de], ax
    X86_AT(c, 0x4d8f3u);
    wr16((c.sbase[3] + (uint32_t)(0x348DEu)), (c.r[0] & 0xFFFFu));
    // 04d8f9  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0x4d8f9u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 04d8fd  mov word ptr [0x348e0], ax
    X86_AT(c, 0x4d8fdu);
    wr16((c.sbase[3] + (uint32_t)(0x348E0u)), (c.r[0] & 0xFFFFu));
    // 04d903  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0x4d903u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 04d907  mov word ptr [0x348e2], ax
    X86_AT(c, 0x4d907u);
    wr16((c.sbase[3] + (uint32_t)(0x348E2u)), (c.r[0] & 0xFFFFu));
    // 04d90d  push 0x348dc
    X86_AT(c, 0x4d90du);
    { uint32_t v = 0x348DCu; push32(c, v); }
    // 04d912  push 0x342dc
    X86_AT(c, 0x4d912u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d917  call 0x83d
    X86_AT(c, 0x4d917u);
    push32(c, 0x4d91cu); x86_call_known(c, 0x83du, f_0000083d); X86_RET(c, 0x4d91cu);
    X86_TICK(c, 17);
    // 04d91c  movsx eax, word ptr [0x349e2]
    X86_AT(c, 0x4d91cu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x349E2u)));
    // 04d923  push eax
    X86_AT(c, 0x4d923u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04d924  push 0x342dc
    X86_AT(c, 0x4d924u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d929  call 0x245
    X86_AT(c, 0x4d929u);
    push32(c, 0x4d92eu); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x4d92eu);
    X86_TICK(c, 16);
    // 04d92e  leave 
    X86_AT(c, 0x4d92eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04d92f  ret 
    X86_AT(c, 0x4d92fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4d8ccu, "ran off the end of a function");
}
void f_0004d930(X86Cpu& c) {
    X86_TICK(c, 19);
    // 04d930  push ebp
    X86_AT(c, 0x4d930u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04d931  mov ebp, esp
    X86_AT(c, 0x4d931u);
    c.r[5] = c.r[4];
    // 04d933  push edi
    X86_AT(c, 0x4d933u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04d934  mov edi, dword ptr [ebp + 0x18]
    X86_AT(c, 0x4d934u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 04d937  push 0
    X86_AT(c, 0x4d937u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04d939  call 0x4d3a4
    X86_AT(c, 0x4d939u);
    push32(c, 0x4d93eu); x86_call_known(c, 0x4d3a4u, f_0004d3a4); X86_RET(c, 0x4d93eu);
    X86_TICK(c, 9);
    // 04d93e  push edi
    X86_AT(c, 0x4d93eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04d93f  call 0x4d234
    X86_AT(c, 0x4d93fu);
    push32(c, 0x4d944u); x86_call_known(c, 0x4d234u, f_0004d234); X86_RET(c, 0x4d944u);
    X86_TICK(c, 9);
    // 04d944  push edi
    X86_AT(c, 0x4d944u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04d945  call 0x4d264
    X86_AT(c, 0x4d945u);
    push32(c, 0x4d94au); x86_call_known(c, 0x4d264u, f_0004d264); X86_RET(c, 0x4d94au);
    X86_TICK(c, 35);
    // 04d94a  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0x4d94au);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 04d94e  mov word ptr [0x348dc], ax
    X86_AT(c, 0x4d94eu);
    wr16((c.sbase[3] + (uint32_t)(0x348DCu)), (c.r[0] & 0xFFFFu));
    // 04d954  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0x4d954u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 04d958  mov word ptr [0x348de], ax
    X86_AT(c, 0x4d958u);
    wr16((c.sbase[3] + (uint32_t)(0x348DEu)), (c.r[0] & 0xFFFFu));
    // 04d95e  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0x4d95eu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 04d962  mov word ptr [0x348e0], ax
    X86_AT(c, 0x4d962u);
    wr16((c.sbase[3] + (uint32_t)(0x348E0u)), (c.r[0] & 0xFFFFu));
    // 04d968  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0x4d968u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 04d96c  mov word ptr [0x348e2], ax
    X86_AT(c, 0x4d96cu);
    wr16((c.sbase[3] + (uint32_t)(0x348E2u)), (c.r[0] & 0xFFFFu));
    // 04d972  push 0x348dc
    X86_AT(c, 0x4d972u);
    { uint32_t v = 0x348DCu; push32(c, v); }
    // 04d977  push 0x342dc
    X86_AT(c, 0x4d977u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d97c  call 0x83d
    X86_AT(c, 0x4d97cu);
    push32(c, 0x4d981u); x86_call_known(c, 0x83du, f_0000083d); X86_RET(c, 0x4d981u);
    X86_TICK(c, 15);
    // 04d981  movsx eax, word ptr [0x349e0]
    X86_AT(c, 0x4d981u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x349E0u)));
    // 04d988  push eax
    X86_AT(c, 0x4d988u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04d989  call 0x4d3a4
    X86_AT(c, 0x4d989u);
    push32(c, 0x4d98eu); x86_call_known(c, 0x4d3a4u, f_0004d3a4); X86_RET(c, 0x4d98eu);
    X86_TICK(c, 17);
    // 04d98e  movsx eax, word ptr [0x349e2]
    X86_AT(c, 0x4d98eu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x349E2u)));
    // 04d995  push eax
    X86_AT(c, 0x4d995u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04d996  push 0x342dc
    X86_AT(c, 0x4d996u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04d99b  call 0x245
    X86_AT(c, 0x4d99bu);
    push32(c, 0x4d9a0u); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x4d9a0u);
    X86_TICK(c, 22);
    // 04d9a0  add esp, 0x20
    X86_AT(c, 0x4d9a0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 04d9a3  pop edi
    X86_AT(c, 0x4d9a3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04d9a4  leave 
    X86_AT(c, 0x4d9a4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04d9a5  ret 
    X86_AT(c, 0x4d9a5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4d930u, "ran off the end of a function");
}
void f_0004d9a8(X86Cpu& c) {
    X86_TICK(c, 33);
    // 04d9a8  push ebp
    X86_AT(c, 0x4d9a8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04d9a9  mov ebp, esp
    X86_AT(c, 0x4d9a9u);
    c.r[5] = c.r[4];
    // 04d9ab  sub esp, 0x24
    X86_AT(c, 0x4d9abu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x24u, 0, 4); }
    // 04d9ae  push ebx
    X86_AT(c, 0x4d9aeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04d9af  push esi
    X86_AT(c, 0x4d9afu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04d9b0  push edi
    X86_AT(c, 0x4d9b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04d9b1  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x4d9b1u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04d9b4  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x4d9b4u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 04d9b7  mov ebx, dword ptr [ebp + 0x14]
    X86_AT(c, 0x4d9b7u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 04d9ba  push 9
    X86_AT(c, 0x4d9bau);
    { uint32_t v = 0x9u; push32(c, v); }
    // 04d9bc  call 0x4d234
    X86_AT(c, 0x4d9bcu);
    push32(c, 0x4d9c1u); x86_call_known(c, 0x4d234u, f_0004d234); X86_RET(c, 0x4d9c1u);
    X86_TICK(c, 9);
    // 04d9c1  push 9
    X86_AT(c, 0x4d9c1u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 04d9c3  call 0x4d264
    X86_AT(c, 0x4d9c3u);
    push32(c, 0x4d9c8u); x86_call_known(c, 0x4d264u, f_0004d264); X86_RET(c, 0x4d9c8u);
    X86_TICK(c, 14);
    // 04d9c8  add esp, 8
    X86_AT(c, 0x4d9c8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04d9cb  cmp dword ptr [ebp + 0x18], 0
    X86_AT(c, 0x4d9cbu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0x0u, 0, 4);
    // 04d9cf  je 0x4d9e1
    X86_AT(c, 0x4d9cfu);
    if (x86_cc(c, 4)) { goto L_4d9e1; }
    X86_TICK(c, 29);
    // 04d9d1  lea eax, [ebx + esi*1]
    X86_AT(c, 0x4d9d1u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[6]);
    // 04d9d4  dec eax
    X86_AT(c, 0x4d9d4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04d9d5  push eax
    X86_AT(c, 0x4d9d5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04d9d6  mov eax, edi
    X86_AT(c, 0x4d9d6u);
    c.r[0] = c.r[7];
    // 04d9d8  add eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x4d9d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 04d9db  dec eax
    X86_AT(c, 0x4d9dbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04d9dc  push eax
    X86_AT(c, 0x4d9dcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04d9dd  push esi
    X86_AT(c, 0x4d9ddu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04d9de  push edi
    X86_AT(c, 0x4d9deu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04d9df  jmp 0x4d9ef
    X86_AT(c, 0x4d9dfu);
    goto L_4d9ef;
L_4d9e1:
    X86_TICK(c, 8);
    // 04d9e1  push 0x1df
    X86_AT(c, 0x4d9e1u);
    { uint32_t v = 0x1DFu; push32(c, v); }
    // 04d9e6  push 0x27f
    X86_AT(c, 0x4d9e6u);
    { uint32_t v = 0x27Fu; push32(c, v); }
    // 04d9eb  push 0
    X86_AT(c, 0x4d9ebu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04d9ed  push 0
    X86_AT(c, 0x4d9edu);
    { uint32_t v = 0x0u; push32(c, v); }
L_4d9ef:
    X86_TICK(c, 7);
    // 04d9ef  call 0x4d8cc
    X86_AT(c, 0x4d9efu);
    push32(c, 0x4d9f4u); x86_call_known(c, 0x4d8ccu, f_0004d8cc); X86_RET(c, 0x4d9f4u);
    X86_TICK(c, 14);
    // 04d9f4  add esp, 0x10
    X86_AT(c, 0x4d9f4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 04d9f7  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x4d9f7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 04d9fa  call 0x4d234
    X86_AT(c, 0x4d9fau);
    push32(c, 0x4d9ffu); x86_call_known(c, 0x4d234u, f_0004d234); X86_RET(c, 0x4d9ffu);
    X86_TICK(c, 12);
    // 04d9ff  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x4d9ffu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 04da02  call 0x4d264
    X86_AT(c, 0x4da02u);
    push32(c, 0x4da07u); x86_call_known(c, 0x4d264u, f_0004d264); X86_RET(c, 0x4da07u);
    X86_TICK(c, 20);
    // 04da07  mov ax, word ptr [0x349e2]
    X86_AT(c, 0x4da07u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x349E2u))));
    // 04da0d  or al, 0x20
    X86_AT(c, 0x4da0du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 04da0f  movsx eax, ax
    X86_AT(c, 0x4da0fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 04da12  push eax
    X86_AT(c, 0x4da12u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04da13  push 0x342dc
    X86_AT(c, 0x4da13u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04da18  call 0x245
    X86_AT(c, 0x4da18u);
    push32(c, 0x4da1du); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x4da1du);
    X86_TICK(c, 35);
    // 04da1d  mov eax, edi
    X86_AT(c, 0x4da1du);
    c.r[0] = c.r[7];
    // 04da1f  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x4da1fu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 04da23  add ax, 0xf
    X86_AT(c, 0x4da23u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xFu, 0, 2)); }
    // 04da27  mov word ptr [0x348dc], ax
    X86_AT(c, 0x4da27u);
    wr16((c.sbase[3] + (uint32_t)(0x348DCu)), (c.r[0] & 0xFFFFu));
    // 04da2d  lea eax, [esi + 0x10]
    X86_AT(c, 0x4da2du);
    c.r[0] = (uint32_t)(c.r[6] + 0x10u);
    // 04da30  mov word ptr [0x348de], ax
    X86_AT(c, 0x4da30u);
    wr16((c.sbase[3] + (uint32_t)(0x348DEu)), (c.r[0] & 0xFFFFu));
    // 04da36  mov word ptr [0x348e0], 0xfff0
    X86_AT(c, 0x4da36u);
    wr16((c.sbase[3] + (uint32_t)(0x348E0u)), 0xFFF0u);
    // 04da3f  mov word ptr [0x348e2], 0xfff0
    X86_AT(c, 0x4da3fu);
    wr16((c.sbase[3] + (uint32_t)(0x348E2u)), 0xFFF0u);
    // 04da48  mov word ptr [0x348e4], 0xfff0
    X86_AT(c, 0x4da48u);
    wr16((c.sbase[3] + (uint32_t)(0x348E4u)), 0xFFF0u);
    // 04da51  mov word ptr [0x348e6], 0xfff0
    X86_AT(c, 0x4da51u);
    wr16((c.sbase[3] + (uint32_t)(0x348E6u)), 0xFFF0u);
    // 04da5a  mov word ptr [0x348e8], 0x10
    X86_AT(c, 0x4da5au);
    wr16((c.sbase[3] + (uint32_t)(0x348E8u)), 0x10u);
    // 04da63  push 0x348dc
    X86_AT(c, 0x4da63u);
    { uint32_t v = 0x348DCu; push32(c, v); }
    // 04da68  push 0x342dc
    X86_AT(c, 0x4da68u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04da6d  mov word ptr [ebp - 8], ax
    X86_AT(c, 0x4da6du);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[0] & 0xFFFFu));
    // 04da71  call 0x8a9
    X86_AT(c, 0x4da71u);
    push32(c, 0x4da76u); x86_call_known(c, 0x8a9u, f_000008a9); X86_RET(c, 0x4da76u);
    X86_TICK(c, 9);
    // 04da76  push 0xf
    X86_AT(c, 0x4da76u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 04da78  call 0x4d234
    X86_AT(c, 0x4da78u);
    push32(c, 0x4da7du); x86_call_known(c, 0x4d234u, f_0004d234); X86_RET(c, 0x4da7du);
    X86_TICK(c, 11);
    // 04da7d  push 0x348dc
    X86_AT(c, 0x4da7du);
    { uint32_t v = 0x348DCu; push32(c, v); }
    // 04da82  push 0x342dc
    X86_AT(c, 0x4da82u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04da87  call 0x885
    X86_AT(c, 0x4da87u);
    push32(c, 0x4da8cu); x86_call_known(c, 0x885u, f_00000885); X86_RET(c, 0x4da8cu);
    X86_TICK(c, 12);
    // 04da8c  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x4da8cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 04da8f  call 0x4d234
    X86_AT(c, 0x4da8fu);
    push32(c, 0x4da94u); x86_call_known(c, 0x4d234u, f_0004d234); X86_RET(c, 0x4da94u);
    X86_TICK(c, 41);
    // 04da94  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0x4da94u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 04da98  add ax, word ptr [ebp + 0x10]
    X86_AT(c, 0x4da98u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 2)); }
    // 04da9c  sub ax, 0x10
    X86_AT(c, 0x4da9cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x10u, 0, 2)); }
    // 04daa0  mov word ptr [0x348dc], ax
    X86_AT(c, 0x4daa0u);
    wr16((c.sbase[3] + (uint32_t)(0x348DCu)), (c.r[0] & 0xFFFFu));
    // 04daa6  mov ax, word ptr [ebp - 8]
    X86_AT(c, 0x4daa6u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 04daaa  mov word ptr [0x348de], ax
    X86_AT(c, 0x4daaau);
    wr16((c.sbase[3] + (uint32_t)(0x348DEu)), (c.r[0] & 0xFFFFu));
    // 04dab0  sub eax, eax
    X86_AT(c, 0x4dab0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 04dab2  mov word ptr [0x348e0], ax
    X86_AT(c, 0x4dab2u);
    wr16((c.sbase[3] + (uint32_t)(0x348E0u)), (c.r[0] & 0xFFFFu));
    // 04dab8  mov word ptr [0x348e2], 0xfff0
    X86_AT(c, 0x4dab8u);
    wr16((c.sbase[3] + (uint32_t)(0x348E2u)), 0xFFF0u);
    // 04dac1  mov word ptr [0x348e4], 0x10
    X86_AT(c, 0x4dac1u);
    wr16((c.sbase[3] + (uint32_t)(0x348E4u)), 0x10u);
    // 04daca  mov word ptr [0x348e6], ax
    X86_AT(c, 0x4dacau);
    wr16((c.sbase[3] + (uint32_t)(0x348E6u)), (c.r[0] & 0xFFFFu));
    // 04dad0  push 0x348dc
    X86_AT(c, 0x4dad0u);
    { uint32_t v = 0x348DCu; push32(c, v); }
    // 04dad5  push 0x342dc
    X86_AT(c, 0x4dad5u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04dada  call 0x8a9
    X86_AT(c, 0x4dadau);
    push32(c, 0x4dadfu); x86_call_known(c, 0x8a9u, f_000008a9); X86_RET(c, 0x4dadfu);
    X86_TICK(c, 9);
    // 04dadf  push 0xf
    X86_AT(c, 0x4dadfu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 04dae1  call 0x4d234
    X86_AT(c, 0x4dae1u);
    push32(c, 0x4dae6u); x86_call_known(c, 0x4d234u, f_0004d234); X86_RET(c, 0x4dae6u);
    X86_TICK(c, 11);
    // 04dae6  push 0x348dc
    X86_AT(c, 0x4dae6u);
    { uint32_t v = 0x348DCu; push32(c, v); }
    // 04daeb  push 0x342dc
    X86_AT(c, 0x4daebu);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04daf0  call 0x885
    X86_AT(c, 0x4daf0u);
    push32(c, 0x4daf5u); x86_call_known(c, 0x885u, f_00000885); X86_RET(c, 0x4daf5u);
    X86_TICK(c, 14);
    // 04daf5  add esp, 0x3c
    X86_AT(c, 0x4daf5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 04daf8  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x4daf8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 04dafb  call 0x4d234
    X86_AT(c, 0x4dafbu);
    push32(c, 0x4db00u); x86_call_known(c, 0x4d234u, f_0004d234); X86_RET(c, 0x4db00u);
    X86_TICK(c, 47);
    // 04db00  mov eax, edi
    X86_AT(c, 0x4db00u);
    c.r[0] = c.r[7];
    // 04db02  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x4db02u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 04db06  add ax, word ptr [ebp + 0x10]
    X86_AT(c, 0x4db06u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 2)); }
    // 04db0a  sub ax, 0x10
    X86_AT(c, 0x4db0au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x10u, 0, 2)); }
    // 04db0e  mov word ptr [0x348dc], ax
    X86_AT(c, 0x4db0eu);
    wr16((c.sbase[3] + (uint32_t)(0x348DCu)), (c.r[0] & 0xFFFFu));
    // 04db14  mov eax, esi
    X86_AT(c, 0x4db14u);
    c.r[0] = c.r[6];
    // 04db16  lea edx, [ebx + eax*1]
    X86_AT(c, 0x4db16u);
    c.r[2] = (uint32_t)(c.r[3] + c.r[0]);
    // 04db19  sub dx, 0x11
    X86_AT(c, 0x4db19u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x11u, 0, 2)); }
    // 04db1d  mov word ptr [0x348de], dx
    X86_AT(c, 0x4db1du);
    wr16((c.sbase[3] + (uint32_t)(0x348DEu)), (c.r[2] & 0xFFFFu));
    // 04db24  mov word ptr [0x348e0], 0x10
    X86_AT(c, 0x4db24u);
    wr16((c.sbase[3] + (uint32_t)(0x348E0u)), 0x10u);
    // 04db2d  mov word ptr [0x348e2], 0
    X86_AT(c, 0x4db2du);
    wr16((c.sbase[3] + (uint32_t)(0x348E2u)), 0x0u);
    // 04db36  mov word ptr [0x348e4], 0
    X86_AT(c, 0x4db36u);
    wr16((c.sbase[3] + (uint32_t)(0x348E4u)), 0x0u);
    // 04db3f  mov word ptr [0x348e6], 0x10
    X86_AT(c, 0x4db3fu);
    wr16((c.sbase[3] + (uint32_t)(0x348E6u)), 0x10u);
    // 04db48  push 0x348dc
    X86_AT(c, 0x4db48u);
    { uint32_t v = 0x348DCu; push32(c, v); }
    // 04db4d  mov eax, 0x342d8
    X86_AT(c, 0x4db4du);
    c.r[0] = 0x342D8u;
    // 04db52  add eax, 4
    X86_AT(c, 0x4db52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 04db55  push eax
    X86_AT(c, 0x4db55u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04db56  mov word ptr [ebp - 8], dx
    X86_AT(c, 0x4db56u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[2] & 0xFFFFu));
    // 04db5a  call 0x8a9
    X86_AT(c, 0x4db5au);
    push32(c, 0x4db5fu); x86_call_known(c, 0x8a9u, f_000008a9); X86_RET(c, 0x4db5fu);
    X86_TICK(c, 9);
    // 04db5f  push 0xf
    X86_AT(c, 0x4db5fu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 04db61  call 0x4d234
    X86_AT(c, 0x4db61u);
    push32(c, 0x4db66u); x86_call_known(c, 0x4d234u, f_0004d234); X86_RET(c, 0x4db66u);
    X86_TICK(c, 13);
    // 04db66  push 0x348dc
    X86_AT(c, 0x4db66u);
    { uint32_t v = 0x348DCu; push32(c, v); }
    // 04db6b  mov eax, 0x342dc
    X86_AT(c, 0x4db6bu);
    c.r[0] = 0x342DCu;
    // 04db70  push eax
    X86_AT(c, 0x4db70u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04db71  call 0x885
    X86_AT(c, 0x4db71u);
    push32(c, 0x4db76u); x86_call_known(c, 0x885u, f_00000885); X86_RET(c, 0x4db76u);
    X86_TICK(c, 12);
    // 04db76  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x4db76u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 04db79  call 0x4d234
    X86_AT(c, 0x4db79u);
    push32(c, 0x4db7eu); x86_call_known(c, 0x4d234u, f_0004d234); X86_RET(c, 0x4db7eu);
    X86_TICK(c, 35);
    // 04db7e  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0x4db7eu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 04db82  add ax, 0xf
    X86_AT(c, 0x4db82u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0xFu, 0, 2)); }
    // 04db86  mov word ptr [0x348dc], ax
    X86_AT(c, 0x4db86u);
    wr16((c.sbase[3] + (uint32_t)(0x348DCu)), (c.r[0] & 0xFFFFu));
    // 04db8c  mov ax, word ptr [ebp - 8]
    X86_AT(c, 0x4db8cu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 04db90  mov word ptr [0x348de], ax
    X86_AT(c, 0x4db90u);
    wr16((c.sbase[3] + (uint32_t)(0x348DEu)), (c.r[0] & 0xFFFFu));
    // 04db96  mov word ptr [0x348e0], 0
    X86_AT(c, 0x4db96u);
    wr16((c.sbase[3] + (uint32_t)(0x348E0u)), 0x0u);
    // 04db9f  mov word ptr [0x348e2], 0x10
    X86_AT(c, 0x4db9fu);
    wr16((c.sbase[3] + (uint32_t)(0x348E2u)), 0x10u);
    // 04dba8  mov word ptr [0x348e4], 0xfff0
    X86_AT(c, 0x4dba8u);
    wr16((c.sbase[3] + (uint32_t)(0x348E4u)), 0xFFF0u);
    // 04dbb1  mov word ptr [0x348e6], 0
    X86_AT(c, 0x4dbb1u);
    wr16((c.sbase[3] + (uint32_t)(0x348E6u)), 0x0u);
    // 04dbba  push 0x348dc
    X86_AT(c, 0x4dbbau);
    { uint32_t v = 0x348DCu; push32(c, v); }
    // 04dbbf  mov eax, 0x342dc
    X86_AT(c, 0x4dbbfu);
    c.r[0] = 0x342DCu;
    // 04dbc4  push eax
    X86_AT(c, 0x4dbc4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04dbc5  call 0x8a9
    X86_AT(c, 0x4dbc5u);
    push32(c, 0x4dbcau); x86_call_known(c, 0x8a9u, f_000008a9); X86_RET(c, 0x4dbcau);
    X86_TICK(c, 9);
    // 04dbca  push 0xf
    X86_AT(c, 0x4dbcau);
    { uint32_t v = 0xFu; push32(c, v); }
    // 04dbcc  call 0x4d234
    X86_AT(c, 0x4dbccu);
    push32(c, 0x4dbd1u); x86_call_known(c, 0x4d234u, f_0004d234); X86_RET(c, 0x4dbd1u);
    X86_TICK(c, 13);
    // 04dbd1  push 0x348dc
    X86_AT(c, 0x4dbd1u);
    { uint32_t v = 0x348DCu; push32(c, v); }
    // 04dbd6  mov eax, 0x342dc
    X86_AT(c, 0x4dbd6u);
    c.r[0] = 0x342DCu;
    // 04dbdb  push eax
    X86_AT(c, 0x4dbdbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04dbdc  call 0x885
    X86_AT(c, 0x4dbdcu);
    push32(c, 0x4dbe1u); x86_call_known(c, 0x885u, f_00000885); X86_RET(c, 0x4dbe1u);
    X86_TICK(c, 12);
    // 04dbe1  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x4dbe1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 04dbe4  call 0x4d234
    X86_AT(c, 0x4dbe4u);
    push32(c, 0x4dbe9u); x86_call_known(c, 0x4d234u, f_0004d234); X86_RET(c, 0x4dbe9u);
    X86_TICK(c, 29);
    // 04dbe9  lea eax, [esi + 0xf]
    X86_AT(c, 0x4dbe9u);
    c.r[0] = (uint32_t)(c.r[6] + 0xFu);
    // 04dbec  push eax
    X86_AT(c, 0x4dbecu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04dbed  mov eax, edi
    X86_AT(c, 0x4dbedu);
    c.r[0] = c.r[7];
    // 04dbef  add eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x4dbefu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 04dbf2  sub eax, 0x11
    X86_AT(c, 0x4dbf2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x11u, 0, 4); }
    // 04dbf5  push eax
    X86_AT(c, 0x4dbf5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04dbf6  push esi
    X86_AT(c, 0x4dbf6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04dbf7  lea eax, [edi + 0x10]
    X86_AT(c, 0x4dbf7u);
    c.r[0] = (uint32_t)(c.r[7] + 0x10u);
    // 04dbfa  push eax
    X86_AT(c, 0x4dbfau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04dbfb  call 0x4d8cc
    X86_AT(c, 0x4dbfbu);
    push32(c, 0x4dc00u); x86_call_known(c, 0x4d8ccu, f_0004d8cc); X86_RET(c, 0x4dc00u);
    X86_TICK(c, 41);
    // 04dc00  add esp, 0x44
    X86_AT(c, 0x4dc00u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 04dc03  lea eax, [ebx + esi*1]
    X86_AT(c, 0x4dc03u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[6]);
    // 04dc06  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x4dc06u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 04dc09  sub eax, 0x11
    X86_AT(c, 0x4dc09u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x11u, 0, 4); }
    // 04dc0c  push eax
    X86_AT(c, 0x4dc0cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04dc0d  mov edx, edi
    X86_AT(c, 0x4dc0du);
    c.r[2] = c.r[7];
    // 04dc0f  add edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x4dc0fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 04dc12  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0x4dc12u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 04dc15  dec edx
    X86_AT(c, 0x4dc15u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 04dc16  push edx
    X86_AT(c, 0x4dc16u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 04dc17  lea ecx, [esi + 0x10]
    X86_AT(c, 0x4dc17u);
    c.r[1] = (uint32_t)(c.r[6] + 0x10u);
    // 04dc1a  push ecx
    X86_AT(c, 0x4dc1au);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 04dc1b  push edi
    X86_AT(c, 0x4dc1bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04dc1c  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x4dc1cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 04dc1f  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0x4dc1fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 04dc22  call 0x4d8cc
    X86_AT(c, 0x4dc22u);
    push32(c, 0x4dc27u); x86_call_known(c, 0x4d8ccu, f_0004d8cc); X86_RET(c, 0x4dc27u);
    X86_TICK(c, 38);
    // 04dc27  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x4dc27u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 04dc2a  dec eax
    X86_AT(c, 0x4dc2au);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04dc2b  push eax
    X86_AT(c, 0x4dc2bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04dc2c  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0x4dc2cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 04dc2f  sub edx, 0x11
    X86_AT(c, 0x4dc2fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x11u, 0, 4); }
    // 04dc32  push edx
    X86_AT(c, 0x4dc32u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 04dc33  push dword ptr [ebp - 0xc]
    X86_AT(c, 0x4dc33u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 04dc36  lea ecx, [edi + 0x10]
    X86_AT(c, 0x4dc36u);
    c.r[1] = (uint32_t)(c.r[7] + 0x10u);
    // 04dc39  push ecx
    X86_AT(c, 0x4dc39u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 04dc3a  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x4dc3au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 04dc3d  mov dword ptr [ebp - 0x18], ecx
    X86_AT(c, 0x4dc3du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[1]);
    // 04dc40  mov dword ptr [ebp - 0x1c], edx
    X86_AT(c, 0x4dc40u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[2]);
    // 04dc43  call 0x4d8cc
    X86_AT(c, 0x4dc43u);
    push32(c, 0x4dc48u); x86_call_known(c, 0x4d8ccu, f_0004d8cc); X86_RET(c, 0x4dc48u);
    X86_TICK(c, 9);
    // 04dc48  push 0xf
    X86_AT(c, 0x4dc48u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 04dc4a  call 0x4d234
    X86_AT(c, 0x4dc4au);
    push32(c, 0x4dc4fu); x86_call_known(c, 0x4d234u, f_0004d234); X86_RET(c, 0x4dc4fu);
    X86_TICK(c, 21);
    // 04dc4f  push esi
    X86_AT(c, 0x4dc4fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04dc50  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0x4dc50u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 04dc53  push esi
    X86_AT(c, 0x4dc53u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04dc54  push dword ptr [ebp - 0x18]
    X86_AT(c, 0x4dc54u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))); push32(c, v); }
    // 04dc57  call 0x4d7ac
    X86_AT(c, 0x4dc57u);
    push32(c, 0x4dc5cu); x86_call_known(c, 0x4d7acu, f_0004d7ac); X86_RET(c, 0x4dc5cu);
    X86_TICK(c, 33);
    // 04dc5c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x4dc5cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 04dc5f  sub eax, 0xe
    X86_AT(c, 0x4dc5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xEu, 0, 4); }
    // 04dc62  push eax
    X86_AT(c, 0x4dc62u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04dc63  push dword ptr [ebp - 0x10]
    X86_AT(c, 0x4dc63u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 04dc66  lea edx, [esi + 0xd]
    X86_AT(c, 0x4dc66u);
    c.r[2] = (uint32_t)(c.r[6] + 0xDu);
    // 04dc69  push edx
    X86_AT(c, 0x4dc69u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 04dc6a  push dword ptr [ebp - 0x10]
    X86_AT(c, 0x4dc6au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 04dc6d  mov dword ptr [ebp - 0x20], eax
    X86_AT(c, 0x4dc6du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[0]);
    // 04dc70  mov dword ptr [ebp - 0x24], edx
    X86_AT(c, 0x4dc70u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), c.r[2]);
    // 04dc73  call 0x4d7ac
    X86_AT(c, 0x4dc73u);
    push32(c, 0x4dc78u); x86_call_known(c, 0x4d7acu, f_0004d7ac); X86_RET(c, 0x4dc78u);
    X86_TICK(c, 29);
    // 04dc78  add esp, 0x44
    X86_AT(c, 0x4dc78u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 04dc7b  push dword ptr [ebp - 0x14]
    X86_AT(c, 0x4dc7bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 04dc7e  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0x4dc7eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 04dc81  push dword ptr [ebp - 0x14]
    X86_AT(c, 0x4dc81u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 04dc84  push dword ptr [ebp - 0x18]
    X86_AT(c, 0x4dc84u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))); push32(c, v); }
    // 04dc87  call 0x4d7ac
    X86_AT(c, 0x4dc87u);
    push32(c, 0x4dc8cu); x86_call_known(c, 0x4d7acu, f_0004d7ac); X86_RET(c, 0x4dc8cu);
    X86_TICK(c, 21);
    // 04dc8c  push dword ptr [ebp - 0x20]
    X86_AT(c, 0x4dc8cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))); push32(c, v); }
    // 04dc8f  push edi
    X86_AT(c, 0x4dc8fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04dc90  push dword ptr [ebp - 0x24]
    X86_AT(c, 0x4dc90u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))); push32(c, v); }
    // 04dc93  push edi
    X86_AT(c, 0x4dc93u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04dc94  call 0x4d7ac
    X86_AT(c, 0x4dc94u);
    push32(c, 0x4dc99u); x86_call_known(c, 0x4d7acu, f_0004d7ac); X86_RET(c, 0x4dc99u);
    X86_TICK(c, 14);
    // 04dc99  add esp, 0x20
    X86_AT(c, 0x4dc99u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 04dc9c  cmp dword ptr [ebp + 0x18], 0
    X86_AT(c, 0x4dc9cu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0x0u, 0, 4);
    // 04dca0  je 0x4dca6
    X86_AT(c, 0x4dca0u);
    if (x86_cc(c, 4)) { goto L_4dca6; }
    X86_TICK(c, 9);
    // 04dca2  push 0xf
    X86_AT(c, 0x4dca2u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 04dca4  jmp 0x4dca8
    X86_AT(c, 0x4dca4u);
    goto L_4dca8;
L_4dca6:
    X86_TICK(c, 2);
    // 04dca6  push 0
    X86_AT(c, 0x4dca6u);
    { uint32_t v = 0x0u; push32(c, v); }
L_4dca8:
    X86_TICK(c, 7);
    // 04dca8  call 0x4d234
    X86_AT(c, 0x4dca8u);
    push32(c, 0x4dcadu); x86_call_known(c, 0x4d234u, f_0004d234); X86_RET(c, 0x4dcadu);
    X86_TICK(c, 11);
    // 04dcad  add esp, 4
    X86_AT(c, 0x4dcadu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 04dcb0  push 0
    X86_AT(c, 0x4dcb0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04dcb2  call 0x4d264
    X86_AT(c, 0x4dcb2u);
    push32(c, 0x4dcb7u); x86_call_known(c, 0x4d264u, f_0004d264); X86_RET(c, 0x4dcb7u);
    X86_TICK(c, 15);
    // 04dcb7  push 0x18e
    X86_AT(c, 0x4dcb7u);
    { uint32_t v = 0x18Eu; push32(c, v); }
    // 04dcbc  push 0x169
    X86_AT(c, 0x4dcbcu);
    { uint32_t v = 0x169u; push32(c, v); }
    // 04dcc1  push 0x2f
    X86_AT(c, 0x4dcc1u);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 04dcc3  push 0xa
    X86_AT(c, 0x4dcc3u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 04dcc5  call 0x4d8cc
    X86_AT(c, 0x4dcc5u);
    push32(c, 0x4dccau); x86_call_known(c, 0x4d8ccu, f_0004d8cc); X86_RET(c, 0x4dccau);
    X86_TICK(c, 9);
    // 04dcca  push 0xf
    X86_AT(c, 0x4dccau);
    { uint32_t v = 0xFu; push32(c, v); }
    // 04dccc  call 0x4d234
    X86_AT(c, 0x4dcccu);
    push32(c, 0x4dcd1u); x86_call_known(c, 0x4d234u, f_0004d234); X86_RET(c, 0x4dcd1u);
    X86_TICK(c, 17);
    // 04dcd1  movsx eax, word ptr [0x349e2]
    X86_AT(c, 0x4dcd1u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x349E2u)));
    // 04dcd8  push eax
    X86_AT(c, 0x4dcd8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04dcd9  push 0x342dc
    X86_AT(c, 0x4dcd9u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04dcde  call 0x245
    X86_AT(c, 0x4dcdeu);
    push32(c, 0x4dce3u); x86_call_known(c, 0x245u, f_00000245); X86_RET(c, 0x4dce3u);
    X86_TICK(c, 30);
    // 04dce3  add esp, 0x20
    X86_AT(c, 0x4dce3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 04dce6  pop edi
    X86_AT(c, 0x4dce6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04dce7  pop esi
    X86_AT(c, 0x4dce7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 04dce8  pop ebx
    X86_AT(c, 0x4dce8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 04dce9  leave 
    X86_AT(c, 0x4dce9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04dcea  ret 
    X86_AT(c, 0x4dceau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4d9a8u, "ran off the end of a function");
}
void f_0004dd60(X86Cpu& c) {
    X86_TICK(c, 69);
    // 04dd60  push ebp
    X86_AT(c, 0x4dd60u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04dd61  mov ebp, esp
    X86_AT(c, 0x4dd61u);
    c.r[5] = c.r[4];
    // 04dd63  push esi
    X86_AT(c, 0x4dd63u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04dd64  push edi
    X86_AT(c, 0x4dd64u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04dd65  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x4dd65u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 04dd68  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x4dd68u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 04dd6b  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x4dd6bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04dd6e  mov dword ptr [0x348dc], eax
    X86_AT(c, 0x4dd6eu);
    wr32((c.sbase[3] + (uint32_t)(0x348DCu)), c.r[0]);
    // 04dd73  mov word ptr [0x348e0], 0x14
    X86_AT(c, 0x4dd73u);
    wr16((c.sbase[3] + (uint32_t)(0x348E0u)), 0x14u);
    // 04dd7c  mov eax, edi
    X86_AT(c, 0x4dd7cu);
    c.r[0] = c.r[7];
    // 04dd7e  mov word ptr [0x348e2], ax
    X86_AT(c, 0x4dd7eu);
    wr16((c.sbase[3] + (uint32_t)(0x348E2u)), (c.r[0] & 0xFFFFu));
    // 04dd84  mov eax, esi
    X86_AT(c, 0x4dd84u);
    c.r[0] = c.r[6];
    // 04dd86  mov word ptr [0x348e4], ax
    X86_AT(c, 0x4dd86u);
    wr16((c.sbase[3] + (uint32_t)(0x348E4u)), (c.r[0] & 0xFFFFu));
    // 04dd8c  mov eax, edi
    X86_AT(c, 0x4dd8cu);
    c.r[0] = c.r[7];
    // 04dd8e  add ax, word ptr [ebp + 0x14]
    X86_AT(c, 0x4dd8eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0, 2)); }
    // 04dd92  dec eax
    X86_AT(c, 0x4dd92u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04dd93  mov word ptr [0x348e6], ax
    X86_AT(c, 0x4dd93u);
    wr16((c.sbase[3] + (uint32_t)(0x348E6u)), (c.r[0] & 0xFFFFu));
    // 04dd99  mov eax, esi
    X86_AT(c, 0x4dd99u);
    c.r[0] = c.r[6];
    // 04dd9b  add ax, word ptr [ebp + 0x18]
    X86_AT(c, 0x4dd9bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0, 2)); }
    // 04dd9f  dec eax
    X86_AT(c, 0x4dd9fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04dda0  mov word ptr [0x348e8], ax
    X86_AT(c, 0x4dda0u);
    wr16((c.sbase[3] + (uint32_t)(0x348E8u)), (c.r[0] & 0xFFFFu));
    // 04dda6  push 0x348dc
    X86_AT(c, 0x4dda6u);
    { uint32_t v = 0x348DCu; push32(c, v); }
    // 04ddab  push 0
    X86_AT(c, 0x4ddabu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04ddad  push 0x342dc
    X86_AT(c, 0x4ddadu);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04ddb2  call 0x544
    X86_AT(c, 0x4ddb2u);
    push32(c, 0x4ddb7u); x86_call_known(c, 0x544u, f_00000544); X86_RET(c, 0x4ddb7u);
    X86_TICK(c, 26);
    // 04ddb7  add esp, 0xc
    X86_AT(c, 0x4ddb7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 04ddba  pop edi
    X86_AT(c, 0x4ddbau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04ddbb  pop esi
    X86_AT(c, 0x4ddbbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 04ddbc  leave 
    X86_AT(c, 0x4ddbcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04ddbd  ret 
    X86_AT(c, 0x4ddbdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4dd60u, "ran off the end of a function");
}
void f_0004ded4(X86Cpu& c) {
    X86_TICK(c, 34);
    // 04ded4  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x4ded4u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 04ded8  mov eax, dword ptr [ecx + 0x1e]
    X86_AT(c, 0x4ded8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x1Eu)));
    // 04dedb  mov edx, dword ptr [esp + 8]
    X86_AT(c, 0x4dedbu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 04dedf  mov dword ptr [edx], eax
    X86_AT(c, 0x4dedfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 04dee1  mov eax, dword ptr [ecx + 0x2a]
    X86_AT(c, 0x4dee1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x2Au)));
    // 04dee4  mov edx, dword ptr [esp + 0xc]
    X86_AT(c, 0x4dee4u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 04dee8  mov dword ptr [edx], eax
    X86_AT(c, 0x4dee8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 04deea  ret 
    X86_AT(c, 0x4deeau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4ded4u, "ran off the end of a function");
}
void f_0004deec(X86Cpu& c) {
    X86_TICK(c, 26);
    // 04deec  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x4deecu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 04def0  mov ax, word ptr [esp + 8]
    X86_AT(c, 0x4def0u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u))));
    // 04def5  mov word ptr [ecx + 0x1e], ax
    X86_AT(c, 0x4def5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1] + 0x1Eu)), (c.r[0] & 0xFFFFu));
    // 04def9  mov ax, word ptr [esp + 0xc]
    X86_AT(c, 0x4def9u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu))));
    // 04defe  mov word ptr [ecx + 0x2a], ax
    X86_AT(c, 0x4defeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[1] + 0x2Au)), (c.r[0] & 0xFFFFu));
    // 04df02  ret 
    X86_AT(c, 0x4df02u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4deecu, "ran off the end of a function");
}
void f_0004df04(X86Cpu& c) {
    X86_TICK(c, 20);
    // 04df04  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x4df04u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 04df08  movsx eax, word ptr [eax + 0x36]
    X86_AT(c, 0x4df08u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x36u)));
    // 04df0c  ret 
    X86_AT(c, 0x4df0cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4df04u, "ran off the end of a function");
}
void f_0004df10(X86Cpu& c) {
    X86_TICK(c, 25);
    // 04df10  push ebp
    X86_AT(c, 0x4df10u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04df11  mov ebp, esp
    X86_AT(c, 0x4df11u);
    c.r[5] = c.r[4];
    // 04df13  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x4df13u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 04df16  push 2
    X86_AT(c, 0x4df16u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 04df18  push 0x100
    X86_AT(c, 0x4df18u);
    { uint32_t v = 0x100u; push32(c, v); }
    // 04df1d  push dword ptr [ebp + 8]
    X86_AT(c, 0x4df1du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 04df20  call 0x53200
    X86_AT(c, 0x4df20u);
    push32(c, 0x4df25u); x86_call_known(c, 0x53200u, f_00053200); X86_RET(c, 0x4df25u);
    X86_TICK(c, 9);
    // 04df25  add esp, 0x10
    X86_AT(c, 0x4df25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 04df28  cmp eax, 2
    X86_AT(c, 0x4df28u);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 04df2b  jge 0x4df34
    X86_AT(c, 0x4df2bu);
    if (x86_cc(c, 13)) { goto L_4df34; }
    X86_TICK(c, 9);
    // 04df2d  mov eax, 0xffffffff
    X86_AT(c, 0x4df2du);
    c.r[0] = 0xFFFFFFFFu;
    // 04df32  jmp 0x4df36
    X86_AT(c, 0x4df32u);
    goto L_4df36;
L_4df34:
    X86_TICK(c, 2);
    // 04df34  sub eax, eax
    X86_AT(c, 0x4df34u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_4df36:
    X86_TICK(c, 16);
    // 04df36  leave 
    X86_AT(c, 0x4df36u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04df37  ret 
    X86_AT(c, 0x4df37u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4df10u, "ran off the end of a function");
}
void f_0004df38(X86Cpu& c) {
    X86_TICK(c, 26);
    // 04df38  push ebp
    X86_AT(c, 0x4df38u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04df39  mov ebp, esp
    X86_AT(c, 0x4df39u);
    c.r[5] = c.r[4];
    // 04df3b  sub esp, 0x204
    X86_AT(c, 0x4df3bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x204u, 0, 4); }
    // 04df41  push ebx
    X86_AT(c, 0x4df41u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04df42  push esi
    X86_AT(c, 0x4df42u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04df43  push edi
    X86_AT(c, 0x4df43u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04df44  push 0x1248
    X86_AT(c, 0x4df44u);
    { uint32_t v = 0x1248u; push32(c, v); }
    // 04df49  push dword ptr [ebp + 8]
    X86_AT(c, 0x4df49u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 04df4c  call 0x534dc
    X86_AT(c, 0x4df4cu);
    push32(c, 0x4df51u); x86_call_known(c, 0x534dcu, f_000534dc); X86_RET(c, 0x4df51u);
    X86_TICK(c, 12);
    // 04df51  add esp, 8
    X86_AT(c, 0x4df51u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04df54  xchg ebx, eax
    X86_AT(c, 0x4df54u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 04df55  and ebx, ebx
    X86_AT(c, 0x4df55u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 04df57  jne 0x4df63
    X86_AT(c, 0x4df57u);
    if (x86_cc(c, 5)) { goto L_4df63; }
    X86_TICK(c, 9);
    // 04df59  mov eax, 0xffffffff
    X86_AT(c, 0x4df59u);
    c.r[0] = 0xFFFFFFFFu;
    // 04df5e  jmp 0x4e02d
    X86_AT(c, 0x4df5eu);
    goto L_4e02d;
L_4df63:
    X86_TICK(c, 13);
    // 04df63  push ebx
    X86_AT(c, 0x4df63u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04df64  lea eax, [ebp - 0x200]
    X86_AT(c, 0x4df64u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFE00u);
    // 04df6a  push eax
    X86_AT(c, 0x4df6au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04df6b  call 0x4df10
    X86_AT(c, 0x4df6bu);
    push32(c, 0x4df70u); x86_call_known(c, 0x4df10u, f_0004df10); X86_RET(c, 0x4df70u);
    X86_TICK(c, 9);
    // 04df70  add esp, 8
    X86_AT(c, 0x4df70u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04df73  inc eax
    X86_AT(c, 0x4df73u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 04df74  je 0x4e015
    X86_AT(c, 0x4df74u);
    if (x86_cc(c, 4)) { goto L_4e015; }
    X86_TICK(c, 21);
    // 04df7a  push dword ptr [ebp + 0x18]
    X86_AT(c, 0x4df7au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 04df7d  push dword ptr [ebp + 0x14]
    X86_AT(c, 0x4df7du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))); push32(c, v); }
    // 04df80  lea eax, [ebp - 0x200]
    X86_AT(c, 0x4df80u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFE00u);
    // 04df86  push eax
    X86_AT(c, 0x4df86u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04df87  call 0x4ded4
    X86_AT(c, 0x4df87u);
    push32(c, 0x4df8cu); x86_call_known(c, 0x4ded4u, f_0004ded4); X86_RET(c, 0x4df8cu);
    X86_TICK(c, 11);
    // 04df8c  lea eax, [ebp - 0x200]
    X86_AT(c, 0x4df8cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFE00u);
    // 04df92  push eax
    X86_AT(c, 0x4df92u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04df93  call 0x4df04
    X86_AT(c, 0x4df93u);
    push32(c, 0x4df98u); x86_call_known(c, 0x4df04u, f_0004df04); X86_RET(c, 0x4df98u);
    X86_TICK(c, 21);
    // 04df98  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x4df98u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 04df9b  mov dword ptr [edx], eax
    X86_AT(c, 0x4df9bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 04df9d  movzx eax, byte ptr [ebx + 0xe]
    X86_AT(c, 0x4df9du);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu)));
    // 04dfa1  push eax
    X86_AT(c, 0x4dfa1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04dfa2  call 0x545ef
    X86_AT(c, 0x4dfa2u);
    push32(c, 0x4dfa7u); x86_call_known(c, 0x545efu, f_000545ef); X86_RET(c, 0x4dfa7u);
    X86_TICK(c, 14);
    // 04dfa7  xchg edi, eax
    X86_AT(c, 0x4dfa7u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 04dfa8  sub edi, 0x200
    X86_AT(c, 0x4dfa8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0x200u, 0, 4); }
    // 04dfae  add esp, 0x14
    X86_AT(c, 0x4dfaeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 04dfb1  cmp edi, 1
    X86_AT(c, 0x4dfb1u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 04dfb4  jl 0x4e015
    X86_AT(c, 0x4dfb4u);
    if (x86_cc(c, 12)) { goto L_4e015; }
    X86_TICK(c, 11);
    // 04dfb6  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x4dfb6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 04dfb9  cmp edi, eax
    X86_AT(c, 0x4dfb9u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 04dfbb  jle 0x4dfbe
    X86_AT(c, 0x4dfbbu);
    if (x86_cc(c, 14)) { goto L_4dfbe; }
    X86_TICK(c, 3);
    // 04dfbd  xchg edi, eax
    X86_AT(c, 0x4dfbdu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_4dfbe:
    X86_TICK(c, 7);
    // 04dfbe  cmp edi, 0x280
    X86_AT(c, 0x4dfbeu);
    (void)x86_sub(c, c.r[7], 0x280u, 0, 4);
    // 04dfc4  jle 0x4dfec
    X86_AT(c, 0x4dfc4u);
    if (x86_cc(c, 14)) { goto L_4dfec; }
    X86_TICK(c, 66);
    // 04dfc6  push ebx
    X86_AT(c, 0x4dfc6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04dfc7  mov eax, edi
    X86_AT(c, 0x4dfc7u);
    c.r[0] = c.r[7];
    // 04dfc9  cdq 
    X86_AT(c, 0x4dfc9u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 04dfca  mov ecx, 0x280
    X86_AT(c, 0x4dfcau);
    c.r[1] = 0x280u;
    // 04dfcf  idiv ecx
    X86_AT(c, 0x4dfcfu);
    x86_idiv(c, c.r[1], 4, 0x4dfcfu);
    // 04dfd1  push eax
    X86_AT(c, 0x4dfd1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04dfd2  push ecx
    X86_AT(c, 0x4dfd2u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 04dfd3  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x4dfd3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 04dfd6  mov dword ptr [ebp - 0x204], eax
    X86_AT(c, 0x4dfd6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDFCu)), c.r[0]);
    // 04dfdc  call 0x53200
    X86_AT(c, 0x4dfdcu);
    push32(c, 0x4dfe1u); x86_call_known(c, 0x53200u, f_00053200); X86_RET(c, 0x4dfe1u);
    X86_TICK(c, 13);
    // 04dfe1  add esp, 0x10
    X86_AT(c, 0x4dfe1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 04dfe4  cmp eax, dword ptr [ebp - 0x204]
    X86_AT(c, 0x4dfe4u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFDFCu))), 0, 4);
    // 04dfea  jl 0x4e015
    X86_AT(c, 0x4dfeau);
    if (x86_cc(c, 12)) { goto L_4e015; }
L_4dfec:
    X86_TICK(c, 55);
    // 04dfec  mov eax, edi
    X86_AT(c, 0x4dfecu);
    c.r[0] = c.r[7];
    // 04dfee  cdq 
    X86_AT(c, 0x4dfeeu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 04dfef  mov ecx, 0x280
    X86_AT(c, 0x4dfefu);
    c.r[1] = 0x280u;
    // 04dff4  idiv ecx
    X86_AT(c, 0x4dff4u);
    x86_idiv(c, c.r[1], 4, 0x4dff4u);
    // 04dff6  mov esi, edx
    X86_AT(c, 0x4dff6u);
    c.r[6] = c.r[2];
    // 04dff8  and esi, esi
    X86_AT(c, 0x4dff8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 04dffa  je 0x4e022
    X86_AT(c, 0x4dffau);
    if (x86_cc(c, 4)) { goto L_4e022; }
    X86_TICK(c, 27);
    // 04dffc  push ebx
    X86_AT(c, 0x4dffcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04dffd  push 1
    X86_AT(c, 0x4dffdu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04dfff  push esi
    X86_AT(c, 0x4dfffu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04e000  mov eax, edi
    X86_AT(c, 0x4e000u);
    c.r[0] = c.r[7];
    // 04e002  sub eax, esi
    X86_AT(c, 0x4e002u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 04e004  dec eax
    X86_AT(c, 0x4e004u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04e005  add eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x4e005u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 04e008  push eax
    X86_AT(c, 0x4e008u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e009  call 0x53200
    X86_AT(c, 0x4e009u);
    push32(c, 0x4e00eu); x86_call_known(c, 0x53200u, f_00053200); X86_RET(c, 0x4e00eu);
    X86_TICK(c, 9);
    // 04e00e  add esp, 0x10
    X86_AT(c, 0x4e00eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 04e011  cmp esi, eax
    X86_AT(c, 0x4e011u);
    (void)x86_sub(c, c.r[6], c.r[0], 0, 4);
    // 04e013  jle 0x4e022
    X86_AT(c, 0x4e013u);
    if (x86_cc(c, 14)) { goto L_4e022; }
L_4e015:
    X86_TICK(c, 9);
    // 04e015  push ebx
    X86_AT(c, 0x4e015u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04e016  call 0x539d8
    X86_AT(c, 0x4e016u);
    push32(c, 0x4e01bu); x86_call_known(c, 0x539d8u, f_000539d8); X86_RET(c, 0x4e01bu);
    X86_TICK(c, 9);
    // 04e01b  mov eax, 0xffffffff
    X86_AT(c, 0x4e01bu);
    c.r[0] = 0xFFFFFFFFu;
    // 04e020  jmp 0x4e02a
    X86_AT(c, 0x4e020u);
    goto L_4e02a;
L_4e022:
    X86_TICK(c, 9);
    // 04e022  push ebx
    X86_AT(c, 0x4e022u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04e023  call 0x539d8
    X86_AT(c, 0x4e023u);
    push32(c, 0x4e028u); x86_call_known(c, 0x539d8u, f_000539d8); X86_RET(c, 0x4e028u);
    X86_TICK(c, 2);
    // 04e028  mov eax, edi
    X86_AT(c, 0x4e028u);
    c.r[0] = c.r[7];
L_4e02a:
    X86_TICK(c, 2);
    // 04e02a  add esp, 4
    X86_AT(c, 0x4e02au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_4e02d:
    X86_TICK(c, 28);
    // 04e02d  pop edi
    X86_AT(c, 0x4e02du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04e02e  pop esi
    X86_AT(c, 0x4e02eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 04e02f  pop ebx
    X86_AT(c, 0x4e02fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 04e030  leave 
    X86_AT(c, 0x4e030u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04e031  ret 
    X86_AT(c, 0x4e031u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4df38u, "ran off the end of a function");
}
void f_0004e034(X86Cpu& c) {
    X86_TICK(c, 32);
    // 04e034  push ebp
    X86_AT(c, 0x4e034u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04e035  mov ebp, esp
    X86_AT(c, 0x4e035u);
    c.r[5] = c.r[4];
    // 04e037  sub esp, 0x281c
    X86_AT(c, 0x4e037u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x281Cu, 0, 4); }
    // 04e03d  push ebx
    X86_AT(c, 0x4e03du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04e03e  push esi
    X86_AT(c, 0x4e03eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04e03f  push edi
    X86_AT(c, 0x4e03fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04e040  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x4e040u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 04e043  mov dword ptr [ebp - 0x18], 0
    X86_AT(c, 0x4e043u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0x0u);
    // 04e04a  push 0x124c
    X86_AT(c, 0x4e04au);
    { uint32_t v = 0x124Cu; push32(c, v); }
    // 04e04f  push dword ptr [ebp + 8]
    X86_AT(c, 0x4e04fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 04e052  call 0x534dc
    X86_AT(c, 0x4e052u);
    push32(c, 0x4e057u); x86_call_known(c, 0x534dcu, f_000534dc); X86_RET(c, 0x4e057u);
    X86_TICK(c, 11);
    // 04e057  add esp, 8
    X86_AT(c, 0x4e057u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04e05a  mov dword ptr [ebp - 0x281c], eax
    X86_AT(c, 0x4e05au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u)), c.r[0]);
    // 04e060  and eax, eax
    X86_AT(c, 0x4e060u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 04e062  je 0x4e32d
    X86_AT(c, 0x4e062u);
    if (x86_cc(c, 4)) { goto L_4e32d; }
    X86_TICK(c, 16);
    // 04e068  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x4e068u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 04e06e  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x4e06eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 04e074  push eax
    X86_AT(c, 0x4e074u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e075  call 0x4df10
    X86_AT(c, 0x4e075u);
    push32(c, 0x4e07au); x86_call_known(c, 0x4df10u, f_0004df10); X86_RET(c, 0x4e07au);
    X86_TICK(c, 9);
    // 04e07a  add esp, 8
    X86_AT(c, 0x4e07au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04e07d  inc eax
    X86_AT(c, 0x4e07du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 04e07e  je 0x4e29d
    X86_AT(c, 0x4e07eu);
    if (x86_cc(c, 4)) { goto L_4e29d; }
    X86_TICK(c, 19);
    // 04e084  lea eax, [ebp - 0xc]
    X86_AT(c, 0x4e084u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 04e087  push eax
    X86_AT(c, 0x4e087u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e088  lea ecx, [ebp - 8]
    X86_AT(c, 0x4e088u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 04e08b  push ecx
    X86_AT(c, 0x4e08bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 04e08c  lea edx, [ebp - 0x2818]
    X86_AT(c, 0x4e08cu);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 04e092  push edx
    X86_AT(c, 0x4e092u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 04e093  call 0x4ded4
    X86_AT(c, 0x4e093u);
    push32(c, 0x4e098u); x86_call_known(c, 0x4ded4u, f_0004ded4); X86_RET(c, 0x4e098u);
    X86_TICK(c, 11);
    // 04e098  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x4e098u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 04e09e  push eax
    X86_AT(c, 0x4e09eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e09f  call 0x4df04
    X86_AT(c, 0x4e09fu);
    push32(c, 0x4e0a4u); x86_call_known(c, 0x4df04u, f_0004df04); X86_RET(c, 0x4e0a4u);
    X86_TICK(c, 21);
    // 04e0a4  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x4e0a4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 04e0a7  mov eax, dword ptr [ebp - 0x281c]
    X86_AT(c, 0x4e0a7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u)));
    // 04e0ad  movzx eax, byte ptr [eax + 0xe]
    X86_AT(c, 0x4e0adu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xEu)));
    // 04e0b1  push eax
    X86_AT(c, 0x4e0b1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e0b2  call 0x545ef
    X86_AT(c, 0x4e0b2u);
    push32(c, 0x4e0b7u); x86_call_known(c, 0x545efu, f_000545ef); X86_RET(c, 0x4e0b7u);
    X86_TICK(c, 14);
    // 04e0b7  xchg esi, eax
    X86_AT(c, 0x4e0b7u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 04e0b8  sub esi, 0x200
    X86_AT(c, 0x4e0b8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x200u, 0, 4); }
    // 04e0be  add esp, 0x14
    X86_AT(c, 0x4e0beu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 04e0c1  cmp esi, 1
    X86_AT(c, 0x4e0c1u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 04e0c4  jl 0x4e29d
    X86_AT(c, 0x4e0c4u);
    if (x86_cc(c, 12)) { goto L_4e29d; }
    X86_TICK(c, 12);
    // 04e0ca  cmp dword ptr [ebp - 8], 1
    X86_AT(c, 0x4e0cau);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x1u, 0, 4);
    // 04e0ce  jl 0x4e29d
    X86_AT(c, 0x4e0ceu);
    if (x86_cc(c, 12)) { goto L_4e29d; }
    X86_TICK(c, 12);
    // 04e0d4  cmp dword ptr [ebp - 0xc], 1
    X86_AT(c, 0x4e0d4u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x1u, 0, 4);
    // 04e0d8  jl 0x4e29d
    X86_AT(c, 0x4e0d8u);
    if (x86_cc(c, 12)) { goto L_4e29d; }
    X86_TICK(c, 13);
    // 04e0de  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x4e0deu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 04e0e1  dec edx
    X86_AT(c, 0x4e0e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 04e0e2  cmp edx, 0xf
    X86_AT(c, 0x4e0e2u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 04e0e5  ja 0x4e147
    X86_AT(c, 0x4e0e5u);
    if (x86_cc(c, 7)) { goto L_4e147; }
    X86_TICK(c, 7);
    // 04e0e7  jmp dword ptr cs:[edx*4 + 0x4e0ef]
    X86_AT(c, 0x4e0e7u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0x4E0EFu)));
      switch (t) {
      case 0x4e12fu: goto L_4e12f;
      case 0x4e13au: goto L_4e13a;
      case 0x4e13fu: goto L_4e13f;
      case 0x4e147u: goto L_4e147;
      default: x86_jump(c, t); return; } }
L_4e12f:
    X86_TICK(c, 20);
    // 04e12f  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x4e12fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 04e132  inc eax
    X86_AT(c, 0x4e132u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 04e133  cdq 
    X86_AT(c, 0x4e133u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 04e134  sub eax, edx
    X86_AT(c, 0x4e134u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 04e136  sar eax, 1
    X86_AT(c, 0x4e136u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 04e138  jmp 0x4e144
    X86_AT(c, 0x4e138u);
    goto L_4e144;
L_4e13a:
    X86_TICK(c, 11);
    // 04e13a  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x4e13au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 04e13d  jmp 0x4e144
    X86_AT(c, 0x4e13du);
    goto L_4e144;
L_4e13f:
    X86_TICK(c, 6);
    // 04e13f  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x4e13fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 04e142  add eax, eax
    X86_AT(c, 0x4e142u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
L_4e144:
    X86_TICK(c, 2);
    // 04e144  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0x4e144u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
L_4e147:
    X86_TICK(c, 33);
    // 04e147  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x4e147u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 04e14a  imul eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0x4e14au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 4);
    // 04e14e  cmp eax, esi
    X86_AT(c, 0x4e14eu);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 04e150  jge 0x4e153
    X86_AT(c, 0x4e150u);
    if (x86_cc(c, 13)) { goto L_4e153; }
    X86_TICK(c, 3);
    // 04e152  xchg esi, eax
    X86_AT(c, 0x4e152u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_4e153:
    X86_TICK(c, 33);
    // 04e153  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x4e153u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 04e156  imul eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0x4e156u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 4);
    // 04e15a  cmp eax, esi
    X86_AT(c, 0x4e15au);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 04e15c  jle 0x4e16c
    X86_AT(c, 0x4e15cu);
    if (x86_cc(c, 14)) { goto L_4e16c; }
    X86_TICK(c, 71);
    // 04e15e  mov eax, esi
    X86_AT(c, 0x4e15eu);
    c.r[0] = c.r[6];
    // 04e160  cdq 
    X86_AT(c, 0x4e160u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 04e161  idiv dword ptr [ebp - 0x10]
    X86_AT(c, 0x4e161u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4, 0x4e161u);
    // 04e164  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x4e164u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 04e167  imul eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x4e167u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4);
    // 04e16b  xchg esi, eax
    X86_AT(c, 0x4e16bu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_4e16c:
    X86_TICK(c, 7);
    // 04e16c  cmp esi, 0x2800
    X86_AT(c, 0x4e16cu);
    (void)x86_sub(c, c.r[6], 0x2800u, 0, 4);
    // 04e172  jg 0x4e202
    X86_AT(c, 0x4e172u);
    if (x86_cc(c, 15)) { goto L_4e202; }
    X86_TICK(c, 22);
    // 04e178  mov ebx, esi
    X86_AT(c, 0x4e178u);
    c.r[3] = c.r[6];
    // 04e17a  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x4e17au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 04e180  push 1
    X86_AT(c, 0x4e180u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04e182  push ebx
    X86_AT(c, 0x4e182u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04e183  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x4e183u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 04e189  push eax
    X86_AT(c, 0x4e189u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e18a  call 0x53200
    X86_AT(c, 0x4e18au);
    push32(c, 0x4e18fu); x86_call_known(c, 0x53200u, f_00053200); X86_RET(c, 0x4e18fu);
    X86_TICK(c, 9);
    // 04e18f  add esp, 0x10
    X86_AT(c, 0x4e18fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 04e192  dec eax
    X86_AT(c, 0x4e192u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04e193  jge 0x4e19c
    X86_AT(c, 0x4e193u);
    if (x86_cc(c, 13)) { goto L_4e19c; }
    X86_TICK(c, 2);
    // 04e195  mov dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0x4e195u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0xFFFFFFFFu);
L_4e19c:
    X86_TICK(c, 51);
    // 04e19c  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x4e19cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 04e1a2  mov dword ptr [0x348dc], eax
    X86_AT(c, 0x4e1a2u);
    wr32((c.sbase[3] + (uint32_t)(0x348DCu)), c.r[0]);
    // 04e1a7  mov word ptr [0x348e0], 0x14
    X86_AT(c, 0x4e1a7u);
    wr16((c.sbase[3] + (uint32_t)(0x348E0u)), 0x14u);
    // 04e1b0  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0x4e1b0u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 04e1b4  mov word ptr [0x348e2], ax
    X86_AT(c, 0x4e1b4u);
    wr16((c.sbase[3] + (uint32_t)(0x348E2u)), (c.r[0] & 0xFFFFu));
    // 04e1ba  mov edx, edi
    X86_AT(c, 0x4e1bau);
    c.r[2] = c.r[7];
    // 04e1bc  mov word ptr [0x348e4], dx
    X86_AT(c, 0x4e1bcu);
    wr16((c.sbase[3] + (uint32_t)(0x348E4u)), (c.r[2] & 0xFFFFu));
    // 04e1c3  add ax, word ptr [ebp - 8]
    X86_AT(c, 0x4e1c3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 2)); }
    // 04e1c7  dec eax
    X86_AT(c, 0x4e1c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04e1c8  mov word ptr [0x348e6], ax
    X86_AT(c, 0x4e1c8u);
    wr16((c.sbase[3] + (uint32_t)(0x348E6u)), (c.r[0] & 0xFFFFu));
    // 04e1ce  mov eax, edi
    X86_AT(c, 0x4e1ceu);
    c.r[0] = c.r[7];
    // 04e1d0  add ax, word ptr [ebp - 0xc]
    X86_AT(c, 0x4e1d0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 2)); }
    // 04e1d4  dec eax
    X86_AT(c, 0x4e1d4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04e1d5  mov word ptr [0x348e8], ax
    X86_AT(c, 0x4e1d5u);
    wr16((c.sbase[3] + (uint32_t)(0x348E8u)), (c.r[0] & 0xFFFFu));
    // 04e1db  push 0x348dc
    X86_AT(c, 0x4e1dbu);
    { uint32_t v = 0x348DCu; push32(c, v); }
    // 04e1e0  push 0
    X86_AT(c, 0x4e1e0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04e1e2  push 0x342dc
    X86_AT(c, 0x4e1e2u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04e1e7  call 0x544
    X86_AT(c, 0x4e1e7u);
    push32(c, 0x4e1ecu); x86_call_known(c, 0x544u, f_00000544); X86_RET(c, 0x4e1ecu);
    X86_TICK(c, 12);
    // 04e1ec  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x4e1ecu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 04e1f2  call 0x539d8
    X86_AT(c, 0x4e1f2u);
    push32(c, 0x4e1f7u); x86_call_known(c, 0x539d8u, f_000539d8); X86_RET(c, 0x4e1f7u);
    X86_TICK(c, 13);
    // 04e1f7  mov eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0x4e1f7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 04e1fa  add esp, 0x10
    X86_AT(c, 0x4e1fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 04e1fd  jmp 0x4e336
    X86_AT(c, 0x4e1fdu);
    goto L_4e336;
L_4e202:
    X86_TICK(c, 93);
    // 04e202  mov eax, 0x2800
    X86_AT(c, 0x4e202u);
    c.r[0] = 0x2800u;
    // 04e207  cdq 
    X86_AT(c, 0x4e207u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 04e208  idiv dword ptr [ebp - 0x10]
    X86_AT(c, 0x4e208u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4, 0x4e208u);
    // 04e20b  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x4e20bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 04e20e  imul eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x4e20eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4);
    // 04e212  xchg ebx, eax
    X86_AT(c, 0x4e212u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 04e213  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x4e213u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 04e219  mov dword ptr [0x348dc], eax
    X86_AT(c, 0x4e219u);
    wr32((c.sbase[3] + (uint32_t)(0x348DCu)), c.r[0]);
    // 04e21e  mov word ptr [0x348e0], 0x14
    X86_AT(c, 0x4e21eu);
    wr16((c.sbase[3] + (uint32_t)(0x348E0u)), 0x14u);
    // 04e227  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0x4e227u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 04e22b  mov word ptr [0x348e2], ax
    X86_AT(c, 0x4e22bu);
    wr16((c.sbase[3] + (uint32_t)(0x348E2u)), (c.r[0] & 0xFFFFu));
    // 04e231  add ax, word ptr [ebp - 8]
    X86_AT(c, 0x4e231u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 2)); }
    // 04e235  dec eax
    X86_AT(c, 0x4e235u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04e236  mov word ptr [0x348e6], ax
    X86_AT(c, 0x4e236u);
    wr16((c.sbase[3] + (uint32_t)(0x348E6u)), (c.r[0] & 0xFFFFu));
L_4e23c:
    X86_TICK(c, 7);
    // 04e23c  cmp ebx, esi
    X86_AT(c, 0x4e23cu);
    (void)x86_sub(c, c.r[3], c.r[6], 0, 4);
    // 04e23e  jge 0x4e298
    X86_AT(c, 0x4e23eu);
    if (x86_cc(c, 13)) { goto L_4e298; }
    X86_TICK(c, 20);
    // 04e240  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x4e240u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 04e246  push 1
    X86_AT(c, 0x4e246u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04e248  push ebx
    X86_AT(c, 0x4e248u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04e249  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x4e249u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 04e24f  push eax
    X86_AT(c, 0x4e24fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e250  call 0x53200
    X86_AT(c, 0x4e250u);
    push32(c, 0x4e255u); x86_call_known(c, 0x53200u, f_00053200); X86_RET(c, 0x4e255u);
    X86_TICK(c, 9);
    // 04e255  add esp, 0x10
    X86_AT(c, 0x4e255u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 04e258  dec eax
    X86_AT(c, 0x4e258u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04e259  jge 0x4e262
    X86_AT(c, 0x4e259u);
    if (x86_cc(c, 13)) { goto L_4e262; }
    X86_TICK(c, 2);
    // 04e25b  mov dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0x4e25bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0xFFFFFFFFu);
L_4e262:
    X86_TICK(c, 29);
    // 04e262  mov eax, edi
    X86_AT(c, 0x4e262u);
    c.r[0] = c.r[7];
    // 04e264  mov word ptr [0x348e4], ax
    X86_AT(c, 0x4e264u);
    wr16((c.sbase[3] + (uint32_t)(0x348E4u)), (c.r[0] & 0xFFFFu));
    // 04e26a  mov eax, edi
    X86_AT(c, 0x4e26au);
    c.r[0] = c.r[7];
    // 04e26c  add ax, word ptr [ebp - 0x14]
    X86_AT(c, 0x4e26cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 2)); }
    // 04e270  dec eax
    X86_AT(c, 0x4e270u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04e271  mov word ptr [0x348e8], ax
    X86_AT(c, 0x4e271u);
    wr16((c.sbase[3] + (uint32_t)(0x348E8u)), (c.r[0] & 0xFFFFu));
    // 04e277  push 0x348dc
    X86_AT(c, 0x4e277u);
    { uint32_t v = 0x348DCu; push32(c, v); }
    // 04e27c  push 0
    X86_AT(c, 0x4e27cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04e27e  push 0x342dc
    X86_AT(c, 0x4e27eu);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04e283  call 0x544
    X86_AT(c, 0x4e283u);
    push32(c, 0x4e288u); x86_call_known(c, 0x544u, f_00000544); X86_RET(c, 0x4e288u);
    X86_TICK(c, 22);
    // 04e288  add edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0x4e288u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 4); }
    // 04e28b  sub esi, ebx
    X86_AT(c, 0x4e28bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[3], 0, 4); }
    // 04e28d  add esp, 0xc
    X86_AT(c, 0x4e28du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 04e290  cmp dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0x4e290u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 0xFFFFFFFFu, 0, 4);
    // 04e294  jne 0x4e23c
    X86_AT(c, 0x4e294u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4e23cu); goto L_4e23c; }
    X86_TICK(c, 7);
    // 04e296  jmp 0x4e29d
    X86_AT(c, 0x4e296u);
    goto L_4e29d;
L_4e298:
    X86_TICK(c, 11);
    // 04e298  cmp esi, dword ptr [ebp - 0x10]
    X86_AT(c, 0x4e298u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4);
    // 04e29b  jge 0x4e2b5
    X86_AT(c, 0x4e29bu);
    if (x86_cc(c, 13)) { goto L_4e2b5; }
L_4e29d:
    X86_TICK(c, 12);
    // 04e29d  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x4e29du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 04e2a3  call 0x539d8
    X86_AT(c, 0x4e2a3u);
    push32(c, 0x4e2a8u); x86_call_known(c, 0x539d8u, f_000539d8); X86_RET(c, 0x4e2a8u);
    X86_TICK(c, 11);
    // 04e2a8  mov eax, 0xffffffff
    X86_AT(c, 0x4e2a8u);
    c.r[0] = 0xFFFFFFFFu;
    // 04e2ad  add esp, 4
    X86_AT(c, 0x4e2adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 04e2b0  jmp 0x4e336
    X86_AT(c, 0x4e2b0u);
    goto L_4e336;
L_4e2b5:
    X86_TICK(c, 88);
    // 04e2b5  mov eax, esi
    X86_AT(c, 0x4e2b5u);
    c.r[0] = c.r[6];
    // 04e2b7  cdq 
    X86_AT(c, 0x4e2b7u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 04e2b8  idiv dword ptr [ebp - 0x10]
    X86_AT(c, 0x4e2b8u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4, 0x4e2b8u);
    // 04e2bb  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x4e2bbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 04e2be  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x4e2beu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 04e2c4  push 1
    X86_AT(c, 0x4e2c4u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04e2c6  imul eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x4e2c6u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4);
    // 04e2ca  push eax
    X86_AT(c, 0x4e2cau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e2cb  lea eax, [ebp - 0x2818]
    X86_AT(c, 0x4e2cbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFD7E8u);
    // 04e2d1  push eax
    X86_AT(c, 0x4e2d1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e2d2  call 0x53200
    X86_AT(c, 0x4e2d2u);
    push32(c, 0x4e2d7u); x86_call_known(c, 0x53200u, f_00053200); X86_RET(c, 0x4e2d7u);
    X86_TICK(c, 9);
    // 04e2d7  add esp, 0x10
    X86_AT(c, 0x4e2d7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 04e2da  dec eax
    X86_AT(c, 0x4e2dau);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04e2db  jge 0x4e2e4
    X86_AT(c, 0x4e2dbu);
    if (x86_cc(c, 13)) { goto L_4e2e4; }
    X86_TICK(c, 2);
    // 04e2dd  mov dword ptr [ebp - 0x18], 0xffffffff
    X86_AT(c, 0x4e2ddu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0xFFFFFFFFu);
L_4e2e4:
    X86_TICK(c, 35);
    // 04e2e4  mov eax, edi
    X86_AT(c, 0x4e2e4u);
    c.r[0] = c.r[7];
    // 04e2e6  mov word ptr [0x348e4], ax
    X86_AT(c, 0x4e2e6u);
    wr16((c.sbase[3] + (uint32_t)(0x348E4u)), (c.r[0] & 0xFFFFu));
    // 04e2ec  mov eax, edi
    X86_AT(c, 0x4e2ecu);
    c.r[0] = c.r[7];
    // 04e2ee  add ax, word ptr [ebp - 0x14]
    X86_AT(c, 0x4e2eeu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 2)); }
    // 04e2f2  dec eax
    X86_AT(c, 0x4e2f2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04e2f3  mov word ptr [0x348e8], ax
    X86_AT(c, 0x4e2f3u);
    wr16((c.sbase[3] + (uint32_t)(0x348E8u)), (c.r[0] & 0xFFFFu));
    // 04e2f9  mov ax, word ptr [ebp - 0x14]
    X86_AT(c, 0x4e2f9u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))));
    // 04e2fd  mov word ptr [0x348ec], ax
    X86_AT(c, 0x4e2fdu);
    wr16((c.sbase[3] + (uint32_t)(0x348ECu)), (c.r[0] & 0xFFFFu));
    // 04e303  push 0x348dc
    X86_AT(c, 0x4e303u);
    { uint32_t v = 0x348DCu; push32(c, v); }
    // 04e308  push 0
    X86_AT(c, 0x4e308u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04e30a  push 0x342dc
    X86_AT(c, 0x4e30au);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04e30f  call 0x544
    X86_AT(c, 0x4e30fu);
    push32(c, 0x4e314u); x86_call_known(c, 0x544u, f_00000544); X86_RET(c, 0x4e314u);
    X86_TICK(c, 12);
    // 04e314  push dword ptr [ebp - 0x281c]
    X86_AT(c, 0x4e314u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFD7E4u))); push32(c, v); }
    // 04e31a  call 0x539d8
    X86_AT(c, 0x4e31au);
    push32(c, 0x4e31fu); x86_call_known(c, 0x539d8u, f_000539d8); X86_RET(c, 0x4e31fu);
    X86_TICK(c, 35);
    // 04e31f  add esp, 0x10
    X86_AT(c, 0x4e31fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 04e322  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x4e322u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 04e325  imul eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x4e325u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 4);
    // 04e329  cmp eax, esi
    X86_AT(c, 0x4e329u);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 04e32b  jge 0x4e334
    X86_AT(c, 0x4e32bu);
    if (x86_cc(c, 13)) { goto L_4e334; }
L_4e32d:
    X86_TICK(c, 9);
    // 04e32d  mov eax, 0xffffffff
    X86_AT(c, 0x4e32du);
    c.r[0] = 0xFFFFFFFFu;
    // 04e332  jmp 0x4e336
    X86_AT(c, 0x4e332u);
    goto L_4e336;
L_4e334:
    X86_TICK(c, 2);
    // 04e334  sub eax, eax
    X86_AT(c, 0x4e334u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_4e336:
    X86_TICK(c, 28);
    // 04e336  pop edi
    X86_AT(c, 0x4e336u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04e337  pop esi
    X86_AT(c, 0x4e337u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 04e338  pop ebx
    X86_AT(c, 0x4e338u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 04e339  leave 
    X86_AT(c, 0x4e339u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04e33a  ret 
    X86_AT(c, 0x4e33au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4e034u, "ran off the end of a function");
}
void f_0004e336(X86Cpu& c) {
    X86_TICK(c, 28);
    // 04e336  pop edi
    X86_AT(c, 0x4e336u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04e337  pop esi
    X86_AT(c, 0x4e337u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 04e338  pop ebx
    X86_AT(c, 0x4e338u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 04e339  leave 
    X86_AT(c, 0x4e339u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04e33a  ret 
    X86_AT(c, 0x4e33au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4e336u, "ran off the end of a function");
}
void f_0004e33c(X86Cpu& c) {
    X86_TICK(c, 56);
    // 04e33c  push ebp
    X86_AT(c, 0x4e33cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04e33d  mov ebp, esp
    X86_AT(c, 0x4e33du);
    c.r[5] = c.r[4];
    // 04e33f  push ebx
    X86_AT(c, 0x4e33fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04e340  push esi
    X86_AT(c, 0x4e340u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04e341  push edi
    X86_AT(c, 0x4e341u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04e342  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x4e342u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04e345  mov esi, dword ptr [ebp + 0x14]
    X86_AT(c, 0x4e345u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 04e348  mov ebx, dword ptr [ebp + 0x20]
    X86_AT(c, 0x4e348u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)));
    // 04e34b  lea eax, [esi - 6]
    X86_AT(c, 0x4e34bu);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFFAu);
    // 04e34e  cdq 
    X86_AT(c, 0x4e34eu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 04e34f  sub eax, edx
    X86_AT(c, 0x4e34fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 04e351  sar eax, 1
    X86_AT(c, 0x4e351u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 04e353  cdq 
    X86_AT(c, 0x4e353u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 04e354  sub eax, edx
    X86_AT(c, 0x4e354u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 04e356  sar eax, 1
    X86_AT(c, 0x4e356u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 04e358  cdq 
    X86_AT(c, 0x4e358u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 04e359  sub eax, edx
    X86_AT(c, 0x4e359u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 04e35b  sar eax, 1
    X86_AT(c, 0x4e35bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 04e35d  cmp eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x4e35du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))), 0, 4);
    // 04e360  jge 0x4e365
    X86_AT(c, 0x4e360u);
    if (x86_cc(c, 13)) { goto L_4e365; }
    X86_TICK(c, 2);
    // 04e362  mov dword ptr [ebp + 0x1c], eax
    X86_AT(c, 0x4e362u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
L_4e365:
    X86_TICK(c, 57);
    // 04e365  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0x4e365u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 04e368  sub eax, 4
    X86_AT(c, 0x4e368u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x4u, 0, 4); }
    // 04e36b  cdq 
    X86_AT(c, 0x4e36bu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 04e36c  mov ecx, 0x10
    X86_AT(c, 0x4e36cu);
    c.r[1] = 0x10u;
    // 04e371  idiv ecx
    X86_AT(c, 0x4e371u);
    x86_idiv(c, c.r[1], 4, 0x4e371u);
    // 04e373  cmp eax, ebx
    X86_AT(c, 0x4e373u);
    (void)x86_sub(c, c.r[0], c.r[3], 0, 4);
    // 04e375  jge 0x4e378
    X86_AT(c, 0x4e375u);
    if (x86_cc(c, 13)) { goto L_4e378; }
    X86_TICK(c, 3);
    // 04e377  xchg ebx, eax
    X86_AT(c, 0x4e377u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
L_4e378:
    X86_TICK(c, 100);
    // 04e378  mov eax, 0x342d8
    X86_AT(c, 0x4e378u);
    c.r[0] = 0x342D8u;
    // 04e37d  lea edx, [edi + edi*2]
    X86_AT(c, 0x4e37du);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 04e380  lea ecx, [edx + edx*8]
    X86_AT(c, 0x4e380u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 04e383  lea ecx, [edx + ecx*2]
    X86_AT(c, 0x4e383u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 04e386  mov byte ptr [eax + ecx*1 + 0x710], 0xff
    X86_AT(c, 0x4e386u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x710u)), 0xFFu);
    // 04e38e  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x4e38eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 04e391  mov dword ptr [eax + ecx*1 + 0x711], edx
    X86_AT(c, 0x4e391u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x711u)), c.r[2]);
    // 04e398  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x4e398u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 04e39b  mov dword ptr [eax + ecx*1 + 0x715], edx
    X86_AT(c, 0x4e39bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x715u)), c.r[2]);
    // 04e3a2  mov dword ptr [eax + ecx*1 + 0x719], esi
    X86_AT(c, 0x4e3a2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x719u)), c.r[6]);
    // 04e3a9  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0x4e3a9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 04e3ac  mov dword ptr [eax + ecx*1 + 0x71d], edx
    X86_AT(c, 0x4e3acu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x71Du)), c.r[2]);
    // 04e3b3  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x4e3b3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 04e3b6  mov dword ptr [eax + ecx*1 + 0x721], edx
    X86_AT(c, 0x4e3b6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x721u)), c.r[2]);
    // 04e3bd  mov dword ptr [eax + ecx*1 + 0x725], ebx
    X86_AT(c, 0x4e3bdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x725u)), c.r[3]);
    // 04e3c4  sub edx, edx
    X86_AT(c, 0x4e3c4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 04e3c6  mov dword ptr [eax + ecx*1 + 0x729], edx
    X86_AT(c, 0x4e3c6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x729u)), c.r[2]);
    // 04e3cd  mov dword ptr [eax + ecx*1 + 0x72d], edx
    X86_AT(c, 0x4e3cdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x72Du)), c.r[2]);
    // 04e3d4  mov edx, 0xffffffff
    X86_AT(c, 0x4e3d4u);
    c.r[2] = 0xFFFFFFFFu;
    // 04e3d9  mov dword ptr [eax + ecx*1 + 0x731], edx
    X86_AT(c, 0x4e3d9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x731u)), c.r[2]);
    // 04e3e0  mov edx, dword ptr [ebp + 0x24]
    X86_AT(c, 0x4e3e0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u)));
    // 04e3e3  mov dword ptr [eax + ecx*1 + 0x735], edx
    X86_AT(c, 0x4e3e3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x735u)), c.r[2]);
    // 04e3ea  mov dword ptr [eax + ecx*1 + 0x739], 0
    X86_AT(c, 0x4e3eau);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x739u)), 0x0u);
    // 04e3f5  mov edx, dword ptr [ebp + 0x28]
    X86_AT(c, 0x4e3f5u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x28u)));
    // 04e3f8  mov dword ptr [eax + ecx*1 + 0x73d], edx
    X86_AT(c, 0x4e3f8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x73Du)), c.r[2]);
    // 04e3ff  mov edx, dword ptr [ebp + 0x2c]
    X86_AT(c, 0x4e3ffu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x2Cu)));
    // 04e402  mov dword ptr [eax + ecx*1 + 0x741], edx
    X86_AT(c, 0x4e402u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x741u)), c.r[2]);
    // 04e409  mov dword ptr [eax + ecx*1 + 0x745], 0xffffffff
    X86_AT(c, 0x4e409u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x745u)), 0xFFFFFFFFu);
    // 04e414  lea eax, [eax + ecx*1 + 0x710]
    X86_AT(c, 0x4e414u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[1] + 0x710u);
    // 04e41b  pop edi
    X86_AT(c, 0x4e41bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04e41c  pop esi
    X86_AT(c, 0x4e41cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 04e41d  pop ebx
    X86_AT(c, 0x4e41du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 04e41e  leave 
    X86_AT(c, 0x4e41eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04e41f  ret 
    X86_AT(c, 0x4e41fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4e33cu, "ran off the end of a function");
}
void f_0004e420(X86Cpu& c) {
    X86_TICK(c, 38);
    // 04e420  push ebp
    X86_AT(c, 0x4e420u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04e421  mov ebp, esp
    X86_AT(c, 0x4e421u);
    c.r[5] = c.r[4];
    // 04e423  push ebx
    X86_AT(c, 0x4e423u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04e424  push esi
    X86_AT(c, 0x4e424u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04e425  push edi
    X86_AT(c, 0x4e425u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04e426  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x4e426u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04e429  mov eax, 0x342d8
    X86_AT(c, 0x4e429u);
    c.r[0] = 0x342D8u;
    // 04e42e  lea edx, [edi + edi*2]
    X86_AT(c, 0x4e42eu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 04e431  lea ecx, [edx + edx*8]
    X86_AT(c, 0x4e431u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 04e434  lea ecx, [edx + ecx*2]
    X86_AT(c, 0x4e434u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 04e437  push dword ptr [eax + ecx*1 + 0x735]
    X86_AT(c, 0x4e437u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x735u))); push32(c, v); }
    // 04e43e  mov ebx, eax
    X86_AT(c, 0x4e43eu);
    c.r[3] = c.r[0];
    // 04e440  mov esi, ecx
    X86_AT(c, 0x4e440u);
    c.r[6] = c.r[1];
    // 04e442  call 0x4d234
    X86_AT(c, 0x4e442u);
    push32(c, 0x4e447u); x86_call_known(c, 0x4d234u, f_0004d234); X86_RET(c, 0x4e447u);
    X86_TICK(c, 14);
    // 04e447  add esp, 4
    X86_AT(c, 0x4e447u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 04e44a  cmp dword ptr [ebx + esi*1 + 0x745], 0xffffffff
    X86_AT(c, 0x4e44au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] + 0x745u))), 0xFFFFFFFFu, 0, 4);
    // 04e452  jne 0x4e463
    X86_AT(c, 0x4e452u);
    if (x86_cc(c, 5)) { goto L_4e463; }
    X86_TICK(c, 12);
    // 04e454  push dword ptr [ebx + esi*1 + 0x741]
    X86_AT(c, 0x4e454u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] + 0x741u))); push32(c, v); }
    // 04e45b  call 0x4d24c
    X86_AT(c, 0x4e45bu);
    push32(c, 0x4e460u); x86_call_known(c, 0x4d24cu, f_0004d24c); X86_RET(c, 0x4e460u);
    X86_TICK(c, 2);
    // 04e460  add esp, 4
    X86_AT(c, 0x4e460u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_4e463:
    X86_TICK(c, 18);
    // 04e463  lea eax, [edi + edi*2]
    X86_AT(c, 0x4e463u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 04e466  lea edx, [eax + eax*8]
    X86_AT(c, 0x4e466u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 04e469  lea edx, [eax + edx*2]
    X86_AT(c, 0x4e469u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 04e46c  push dword ptr [edx + 0x34a11]
    X86_AT(c, 0x4e46cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x34A11u))); push32(c, v); }
    // 04e472  call 0x4d2fc
    X86_AT(c, 0x4e472u);
    push32(c, 0x4e477u); x86_call_known(c, 0x4d2fcu, f_0004d2fc); X86_RET(c, 0x4e477u);
    X86_TICK(c, 30);
    // 04e477  add esp, 4
    X86_AT(c, 0x4e477u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 04e47a  pop edi
    X86_AT(c, 0x4e47au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04e47b  pop esi
    X86_AT(c, 0x4e47bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 04e47c  pop ebx
    X86_AT(c, 0x4e47cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 04e47d  leave 
    X86_AT(c, 0x4e47du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04e47e  ret 
    X86_AT(c, 0x4e47eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4e420u, "ran off the end of a function");
}
void f_0004e480(X86Cpu& c) {
    X86_TICK(c, 74);
    // 04e480  push ebp
    X86_AT(c, 0x4e480u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04e481  mov ebp, esp
    X86_AT(c, 0x4e481u);
    c.r[5] = c.r[4];
    // 04e483  push edi
    X86_AT(c, 0x4e483u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04e484  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x4e484u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04e487  lea eax, [eax + eax*2]
    X86_AT(c, 0x4e487u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 04e48a  lea edx, [eax + eax*8]
    X86_AT(c, 0x4e48au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 04e48d  lea edx, [eax + edx*2]
    X86_AT(c, 0x4e48du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 04e490  lea edi, [edx + 0x349e8]
    X86_AT(c, 0x4e490u);
    c.r[7] = (uint32_t)(c.r[2] + 0x349E8u);
    // 04e496  push dword ptr [edi + 0x31]
    X86_AT(c, 0x4e496u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x31u))); push32(c, v); }
    // 04e499  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x4e499u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 04e49c  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0x4e49cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 04e49f  sub eax, 2
    X86_AT(c, 0x4e49fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 04e4a2  push eax
    X86_AT(c, 0x4e4a2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e4a3  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x4e4a3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 04e4a6  add eax, dword ptr [edi + 9]
    X86_AT(c, 0x4e4a6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 04e4a9  sub eax, 2
    X86_AT(c, 0x4e4a9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 04e4ac  push eax
    X86_AT(c, 0x4e4acu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e4ad  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x4e4adu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 04e4b0  inc eax
    X86_AT(c, 0x4e4b0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 04e4b1  push eax
    X86_AT(c, 0x4e4b1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e4b2  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x4e4b2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 04e4b5  inc eax
    X86_AT(c, 0x4e4b5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 04e4b6  push eax
    X86_AT(c, 0x4e4b6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e4b7  call 0x4d930
    X86_AT(c, 0x4e4b7u);
    push32(c, 0x4e4bcu); x86_call_known(c, 0x4d930u, f_0004d930); X86_RET(c, 0x4e4bcu);
    X86_TICK(c, 12);
    // 04e4bc  push dword ptr [edi + 0x2d]
    X86_AT(c, 0x4e4bcu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Du))); push32(c, v); }
    // 04e4bf  call 0x4d234
    X86_AT(c, 0x4e4bfu);
    push32(c, 0x4e4c4u); x86_call_known(c, 0x4d234u, f_0004d234); X86_RET(c, 0x4e4c4u);
    X86_TICK(c, 51);
    // 04e4c4  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x4e4c4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 04e4c7  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0x4e4c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 04e4ca  sub eax, 2
    X86_AT(c, 0x4e4cau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 04e4cd  push eax
    X86_AT(c, 0x4e4cdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e4ce  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x4e4ceu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 04e4d1  add eax, dword ptr [edi + 9]
    X86_AT(c, 0x4e4d1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 04e4d4  sub eax, 2
    X86_AT(c, 0x4e4d4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 04e4d7  push eax
    X86_AT(c, 0x4e4d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e4d8  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x4e4d8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 04e4db  inc eax
    X86_AT(c, 0x4e4dbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 04e4dc  push eax
    X86_AT(c, 0x4e4dcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e4dd  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x4e4ddu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 04e4e0  inc eax
    X86_AT(c, 0x4e4e0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 04e4e1  push eax
    X86_AT(c, 0x4e4e1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e4e2  call 0x4d8cc
    X86_AT(c, 0x4e4e2u);
    push32(c, 0x4e4e7u); x86_call_known(c, 0x4d8ccu, f_0004d8cc); X86_RET(c, 0x4e4e7u);
    X86_TICK(c, 39);
    // 04e4e7  push dword ptr [edi + 5]
    X86_AT(c, 0x4e4e7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))); push32(c, v); }
    // 04e4ea  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x4e4eau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 04e4ed  add eax, dword ptr [edi + 9]
    X86_AT(c, 0x4e4edu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 04e4f0  sub eax, 3
    X86_AT(c, 0x4e4f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 04e4f3  push eax
    X86_AT(c, 0x4e4f3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e4f4  push dword ptr [edi + 5]
    X86_AT(c, 0x4e4f4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))); push32(c, v); }
    // 04e4f7  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x4e4f7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 04e4fa  add eax, 2
    X86_AT(c, 0x4e4fau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 04e4fd  push eax
    X86_AT(c, 0x4e4fdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e4fe  call 0x4d7ac
    X86_AT(c, 0x4e4feu);
    push32(c, 0x4e503u); x86_call_known(c, 0x4d7acu, f_0004d7ac); X86_RET(c, 0x4e503u);
    X86_TICK(c, 45);
    // 04e503  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x4e503u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 04e506  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0x4e506u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 04e509  sub eax, 3
    X86_AT(c, 0x4e509u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 04e50c  push eax
    X86_AT(c, 0x4e50cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e50d  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x4e50du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 04e510  add eax, dword ptr [edi + 9]
    X86_AT(c, 0x4e510u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 04e513  dec eax
    X86_AT(c, 0x4e513u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04e514  push eax
    X86_AT(c, 0x4e514u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e515  mov edx, dword ptr [edi + 5]
    X86_AT(c, 0x4e515u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 04e518  add edx, 2
    X86_AT(c, 0x4e518u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x2u, 0, 4); }
    // 04e51b  push edx
    X86_AT(c, 0x4e51bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 04e51c  push eax
    X86_AT(c, 0x4e51cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e51d  call 0x4d7ac
    X86_AT(c, 0x4e51du);
    push32(c, 0x4e522u); x86_call_known(c, 0x4d7acu, f_0004d7ac); X86_RET(c, 0x4e522u);
    X86_TICK(c, 47);
    // 04e522  add esp, 0x48
    X86_AT(c, 0x4e522u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x48u, 0, 4); }
    // 04e525  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x4e525u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 04e528  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0x4e528u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 04e52b  dec eax
    X86_AT(c, 0x4e52bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 04e52c  push eax
    X86_AT(c, 0x4e52cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e52d  mov edx, dword ptr [edi + 1]
    X86_AT(c, 0x4e52du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 04e530  add edx, dword ptr [edi + 9]
    X86_AT(c, 0x4e530u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0, 4); }
    // 04e533  sub edx, 3
    X86_AT(c, 0x4e533u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x3u, 0, 4); }
    // 04e536  push edx
    X86_AT(c, 0x4e536u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 04e537  push eax
    X86_AT(c, 0x4e537u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e538  mov eax, dword ptr [edi + 1]
    X86_AT(c, 0x4e538u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u)));
    // 04e53b  add eax, 2
    X86_AT(c, 0x4e53bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 04e53e  push eax
    X86_AT(c, 0x4e53eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e53f  call 0x4d7ac
    X86_AT(c, 0x4e53fu);
    push32(c, 0x4e544u); x86_call_known(c, 0x4d7acu, f_0004d7ac); X86_RET(c, 0x4e544u);
    X86_TICK(c, 41);
    // 04e544  add esp, 0x10
    X86_AT(c, 0x4e544u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 04e547  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x4e547u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 04e54a  add eax, dword ptr [edi + 0xd]
    X86_AT(c, 0x4e54au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))), 0, 4); }
    // 04e54d  sub eax, 3
    X86_AT(c, 0x4e54du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x3u, 0, 4); }
    // 04e550  push eax
    X86_AT(c, 0x4e550u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e551  push dword ptr [edi + 1]
    X86_AT(c, 0x4e551u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))); push32(c, v); }
    // 04e554  mov eax, dword ptr [edi + 5]
    X86_AT(c, 0x4e554u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u)));
    // 04e557  add eax, 2
    X86_AT(c, 0x4e557u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 04e55a  push eax
    X86_AT(c, 0x4e55au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e55b  push dword ptr [edi + 1]
    X86_AT(c, 0x4e55bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))); push32(c, v); }
    // 04e55e  call 0x4d7ac
    X86_AT(c, 0x4e55eu);
    push32(c, 0x4e563u); x86_call_known(c, 0x4d7acu, f_0004d7ac); X86_RET(c, 0x4e563u);
    X86_TICK(c, 24);
    // 04e563  mov byte ptr [edi], 0
    X86_AT(c, 0x4e563u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 04e566  add esp, 0x10
    X86_AT(c, 0x4e566u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 04e569  pop edi
    X86_AT(c, 0x4e569u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04e56a  leave 
    X86_AT(c, 0x4e56au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04e56b  ret 
    X86_AT(c, 0x4e56bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4e480u, "ran off the end of a function");
}
void f_0004e56c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 04e56c  push ebp
    X86_AT(c, 0x4e56cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04e56d  mov ebp, esp
    X86_AT(c, 0x4e56du);
    c.r[5] = c.r[4];
    // 04e56f  sub esp, 0x40
    X86_AT(c, 0x4e56fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x40u, 0, 4); }
    // 04e572  push ebx
    X86_AT(c, 0x4e572u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04e573  push edi
    X86_AT(c, 0x4e573u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04e574  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x4e574u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 04e577  push 9
    X86_AT(c, 0x4e577u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 04e579  call 0x4d3a4
    X86_AT(c, 0x4e579u);
    push32(c, 0x4e57eu); x86_call_known(c, 0x4d3a4u, f_0004d3a4); X86_RET(c, 0x4e57eu);
    X86_TICK(c, 32);
    // 04e57e  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0x4e57eu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 04e582  mov word ptr [ebp - 0x40], ax
    X86_AT(c, 0x4e582u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC0u)), (c.r[0] & 0xFFFFu));
    // 04e586  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0x4e586u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 04e58a  mov word ptr [ebp - 0x3e], ax
    X86_AT(c, 0x4e58au);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC2u)), (c.r[0] & 0xFFFFu));
    // 04e58e  mov edx, 0xffff
    X86_AT(c, 0x4e58eu);
    c.r[2] = 0xFFFFu;
    // 04e593  sub eax, eax
    X86_AT(c, 0x4e593u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 04e595  push edi
    X86_AT(c, 0x4e595u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04e596  mov ecx, edx
    X86_AT(c, 0x4e596u);
    c.r[1] = c.r[2];
    // 04e598  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x4e598u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 04e59a  jne 0x4e59f
    X86_AT(c, 0x4e59au);
    if (x86_cc(c, 5)) { goto L_4e59f; }
    X86_TICK(c, 4);
    // 04e59c  inc ecx
    X86_AT(c, 0x4e59cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 04e59d  sub edx, ecx
    X86_AT(c, 0x4e59du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_4e59f:
    X86_TICK(c, 19);
    // 04e59f  pop edi
    X86_AT(c, 0x4e59fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04e5a0  mov word ptr [ebp - 0x3c], dx
    X86_AT(c, 0x4e5a0u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC4u)), (c.r[2] & 0xFFFFu));
    // 04e5a4  push edi
    X86_AT(c, 0x4e5a4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04e5a5  lea eax, [ebp - 0x3a]
    X86_AT(c, 0x4e5a5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC6u);
    // 04e5a8  push eax
    X86_AT(c, 0x4e5a8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e5a9  call 0x54014
    X86_AT(c, 0x4e5a9u);
    push32(c, 0x4e5aeu); x86_call_known(c, 0x54014u, f_00054014); X86_RET(c, 0x4e5aeu);
    X86_TICK(c, 15);
    // 04e5ae  lea ebx, [ebp - 0x40]
    X86_AT(c, 0x4e5aeu);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFC0u);
    // 04e5b1  push ebx
    X86_AT(c, 0x4e5b1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04e5b2  push 1
    X86_AT(c, 0x4e5b2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04e5b4  push 0x342dc
    X86_AT(c, 0x4e5b4u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04e5b9  call 0xa45
    X86_AT(c, 0x4e5b9u);
    push32(c, 0x4e5beu); x86_call_known(c, 0xa45u, f_00000a45); X86_RET(c, 0x4e5beu);
    X86_TICK(c, 15);
    // 04e5be  movsx eax, word ptr [0x349e0]
    X86_AT(c, 0x4e5beu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x349E0u)));
    // 04e5c5  push eax
    X86_AT(c, 0x4e5c5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04e5c6  call 0x4d3a4
    X86_AT(c, 0x4e5c6u);
    push32(c, 0x4e5cbu); x86_call_known(c, 0x4d3a4u, f_0004d3a4); X86_RET(c, 0x4e5cbu);
    X86_TICK(c, 26);
    // 04e5cb  add esp, 0x1c
    X86_AT(c, 0x4e5cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 04e5ce  pop edi
    X86_AT(c, 0x4e5ceu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04e5cf  pop ebx
    X86_AT(c, 0x4e5cfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 04e5d0  leave 
    X86_AT(c, 0x4e5d0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04e5d1  ret 
    X86_AT(c, 0x4e5d1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4e56cu, "ran off the end of a function");
}
void f_0004e6ac(X86Cpu& c) {
    X86_TICK(c, 32);
    // 04e6ac  push ebp
    X86_AT(c, 0x4e6acu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04e6ad  mov ebp, esp
    X86_AT(c, 0x4e6adu);
    c.r[5] = c.r[4];
    // 04e6af  push ebx
    X86_AT(c, 0x4e6afu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04e6b0  push edi
    X86_AT(c, 0x4e6b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04e6b1  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x4e6b1u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04e6b4  lea eax, [edi + edi*2]
    X86_AT(c, 0x4e6b4u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 04e6b7  lea edx, [eax + eax*8]
    X86_AT(c, 0x4e6b7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 04e6ba  lea edx, [eax + edx*2]
    X86_AT(c, 0x4e6bau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 04e6bd  push dword ptr [edx + 0x34a19]
    X86_AT(c, 0x4e6bdu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x34A19u))); push32(c, v); }
    // 04e6c3  mov ebx, edx
    X86_AT(c, 0x4e6c3u);
    c.r[3] = c.r[2];
    // 04e6c5  call 0x4d24c
    X86_AT(c, 0x4e6c5u);
    push32(c, 0x4e6cau); x86_call_known(c, 0x4d24cu, f_0004d24c); X86_RET(c, 0x4e6cau);
    X86_TICK(c, 61);
    // 04e6ca  mov ax, word ptr [ebx + 0x349e9]
    X86_AT(c, 0x4e6cau);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x349E9u))));
    // 04e6d1  add ax, 2
    X86_AT(c, 0x4e6d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 04e6d5  mov word ptr [0x348dc], ax
    X86_AT(c, 0x4e6d5u);
    wr16((c.sbase[3] + (uint32_t)(0x348DCu)), (c.r[0] & 0xFFFFu));
    // 04e6db  mov ax, word ptr [ebx + 0x349ed]
    X86_AT(c, 0x4e6dbu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x349EDu))));
    // 04e6e2  add ax, 2
    X86_AT(c, 0x4e6e2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x2u, 0, 2)); }
    // 04e6e6  mov word ptr [0x348de], ax
    X86_AT(c, 0x4e6e6u);
    wr16((c.sbase[3] + (uint32_t)(0x348DEu)), (c.r[0] & 0xFFFFu));
    // 04e6ec  mov ax, word ptr [ebx + 0x349e9]
    X86_AT(c, 0x4e6ecu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x349E9u))));
    // 04e6f3  add ax, word ptr [ebx + 0x349f1]
    X86_AT(c, 0x4e6f3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x349F1u))), 0, 2)); }
    // 04e6fa  sub ax, 3
    X86_AT(c, 0x4e6fau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3u, 0, 2)); }
    // 04e6fe  mov word ptr [0x348e0], ax
    X86_AT(c, 0x4e6feu);
    wr16((c.sbase[3] + (uint32_t)(0x348E0u)), (c.r[0] & 0xFFFFu));
    // 04e704  mov ax, word ptr [ebx + 0x349ed]
    X86_AT(c, 0x4e704u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x349EDu))));
    // 04e70b  add ax, word ptr [ebx + 0x349f5]
    X86_AT(c, 0x4e70bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x349F5u))), 0, 2)); }
    // 04e712  sub ax, 3
    X86_AT(c, 0x4e712u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3u, 0, 2)); }
    // 04e716  mov word ptr [0x348e2], ax
    X86_AT(c, 0x4e716u);
    wr16((c.sbase[3] + (uint32_t)(0x348E2u)), (c.r[0] & 0xFFFFu));
    // 04e71c  push 0x348dc
    X86_AT(c, 0x4e71cu);
    { uint32_t v = 0x348DCu; push32(c, v); }
    // 04e721  push 0xfffffff0
    X86_AT(c, 0x4e721u);
    { uint32_t v = 0xFFFFFFF0u; push32(c, v); }
    // 04e723  push 0
    X86_AT(c, 0x4e723u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04e725  push 1
    X86_AT(c, 0x4e725u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04e727  push 0x342dc
    X86_AT(c, 0x4e727u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04e72c  call 0x636
    X86_AT(c, 0x4e72cu);
    push32(c, 0x4e731u); x86_call_known(c, 0x636u, f_00000636); X86_RET(c, 0x4e731u);
    X86_TICK(c, 14);
    // 04e731  add esp, 0x18
    X86_AT(c, 0x4e731u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 04e734  cmp dword ptr [ebx + 0x34a1d], 0
    X86_AT(c, 0x4e734u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x34A1Du))), 0x0u, 0, 4);
    // 04e73b  jne 0x4e747
    X86_AT(c, 0x4e73bu);
    if (x86_cc(c, 5)) { goto L_4e747; }
    X86_TICK(c, 9);
    // 04e73d  push 0xb
    X86_AT(c, 0x4e73du);
    { uint32_t v = 0xBu; push32(c, v); }
    // 04e73f  call 0x4d24c
    X86_AT(c, 0x4e73fu);
    push32(c, 0x4e744u); x86_call_known(c, 0x4d24cu, f_0004d24c); X86_RET(c, 0x4e744u);
    X86_TICK(c, 2);
    // 04e744  add esp, 4
    X86_AT(c, 0x4e744u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_4e747:
    X86_TICK(c, 24);
    // 04e747  pop edi
    X86_AT(c, 0x4e747u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04e748  pop ebx
    X86_AT(c, 0x4e748u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 04e749  leave 
    X86_AT(c, 0x4e749u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04e74a  ret 
    X86_AT(c, 0x4e74au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4e6acu, "ran off the end of a function");
}
void f_0004e74c(X86Cpu& c) {
    X86_TICK(c, 33);
    // 04e74c  push ebp
    X86_AT(c, 0x4e74cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04e74d  mov ebp, esp
    X86_AT(c, 0x4e74du);
    c.r[5] = c.r[4];
    // 04e74f  push edi
    X86_AT(c, 0x4e74fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04e750  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x4e750u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04e753  lea eax, [edi + edi*2]
    X86_AT(c, 0x4e753u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 04e756  lea edx, [eax + eax*8]
    X86_AT(c, 0x4e756u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 04e759  lea edx, [eax + edx*2]
    X86_AT(c, 0x4e759u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 04e75c  mov dword ptr [edx + 0x34a01], 0
    X86_AT(c, 0x4e75cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x34A01u)), 0x0u);
    // 04e766  mov eax, dword ptr [edx + 0x34a05]
    X86_AT(c, 0x4e766u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x34A05u)));
    // 04e76c  cmp eax, dword ptr [edx + 0x349fd]
    X86_AT(c, 0x4e76cu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x349FDu))), 0, 4);
    // 04e772  jne 0x4e77f
    X86_AT(c, 0x4e772u);
    if (x86_cc(c, 5)) { goto L_4e77f; }
    X86_TICK(c, 9);
    // 04e774  push edi
    X86_AT(c, 0x4e774u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04e775  call 0x4e6ac
    X86_AT(c, 0x4e775u);
    push32(c, 0x4e77au); x86_call_known(c, 0x4e6acu, f_0004e6ac); X86_RET(c, 0x4e77au);
    X86_TICK(c, 9);
    // 04e77a  add esp, 4
    X86_AT(c, 0x4e77au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 04e77d  jmp 0x4e78e
    X86_AT(c, 0x4e77du);
    goto L_4e78e;
L_4e77f:
    X86_TICK(c, 12);
    // 04e77f  lea eax, [edi + edi*2]
    X86_AT(c, 0x4e77fu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 2);
    // 04e782  lea edx, [eax + eax*8]
    X86_AT(c, 0x4e782u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 04e785  lea edx, [eax + edx*2]
    X86_AT(c, 0x4e785u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 04e788  inc dword ptr [edx + 0x34a05]
    X86_AT(c, 0x4e788u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x34A05u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_4e78e:
    X86_TICK(c, 20);
    // 04e78e  pop edi
    X86_AT(c, 0x4e78eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04e78f  leave 
    X86_AT(c, 0x4e78fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04e790  ret 
    X86_AT(c, 0x4e790u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4e74cu, "ran off the end of a function");
}
void f_0004e794(X86Cpu& c) {
    X86_TICK(c, 28);
    // 04e794  push ebp
    X86_AT(c, 0x4e794u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04e795  mov ebp, esp
    X86_AT(c, 0x4e795u);
    c.r[5] = c.r[4];
    // 04e797  sub esp, 0xc
    X86_AT(c, 0x4e797u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 04e79a  push ebx
    X86_AT(c, 0x4e79au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04e79b  push esi
    X86_AT(c, 0x4e79bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04e79c  push edi
    X86_AT(c, 0x4e79cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04e79d  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x4e79du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 04e7a0  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x4e7a0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04e7a3  lea eax, [eax + eax*2]
    X86_AT(c, 0x4e7a3u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 04e7a6  lea edx, [eax + eax*8]
    X86_AT(c, 0x4e7a6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 04e7a9  lea edx, [eax + edx*2]
    X86_AT(c, 0x4e7a9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 04e7ac  lea ebx, [edx + 0x349e8]
    X86_AT(c, 0x4e7acu);
    c.r[3] = (uint32_t)(c.r[2] + 0x349E8u);
L_4e7b2:
    X86_TICK(c, 12);
    // 04e7b2  cmp byte ptr [edi], 0
    X86_AT(c, 0x4e7b2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 04e7b5  je 0x4e904
    X86_AT(c, 0x4e7b5u);
    if (x86_cc(c, 4)) { goto L_4e904; }
    X86_TICK(c, 52);
    // 04e7bb  mov dword ptr [ebp - 0xc], 0x34e8e
    X86_AT(c, 0x4e7bbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x34E8Eu);
    // 04e7c2  mov ax, word ptr [ebx + 1]
    X86_AT(c, 0x4e7c2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x1u))));
    // 04e7c6  add ax, 4
    X86_AT(c, 0x4e7c6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x4u, 0, 2)); }
    // 04e7ca  mov edx, dword ptr [ebx + 0x19]
    X86_AT(c, 0x4e7cau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 04e7cd  shl edx, 3
    X86_AT(c, 0x4e7cdu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 04e7d0  add edx, eax
    X86_AT(c, 0x4e7d0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 04e7d2  mov word ptr [0x34e88], dx
    X86_AT(c, 0x4e7d2u);
    wr16((c.sbase[3] + (uint32_t)(0x34E88u)), (c.r[2] & 0xFFFFu));
    // 04e7d9  mov ax, word ptr [ebx + 5]
    X86_AT(c, 0x4e7d9u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x5u))));
    // 04e7dd  add ax, 0x11
    X86_AT(c, 0x4e7ddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 04e7e1  mov edx, dword ptr [ebx + 0x1d]
    X86_AT(c, 0x4e7e1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 04e7e4  shl edx, 4
    X86_AT(c, 0x4e7e4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 04e7e7  add edx, eax
    X86_AT(c, 0x4e7e7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 04e7e9  mov word ptr [0x34e8a], dx
    X86_AT(c, 0x4e7e9u);
    wr16((c.sbase[3] + (uint32_t)(0x34E8Au)), (c.r[2] & 0xFFFFu));
    // 04e7f0  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x4e7f0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 04e7f7  mov esi, dword ptr [ebx + 0x11]
    X86_AT(c, 0x4e7f7u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x11u)));
    // 04e7fa  sub esi, dword ptr [ebx + 0x19]
    X86_AT(c, 0x4e7fau);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u))), 0, 4); }
    // 04e7fd  inc esi
    X86_AT(c, 0x4e7fdu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 04e7fe  mov dword ptr [ebp - 8], esi
    X86_AT(c, 0x4e7feu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[6]);
L_4e801:
    X86_TICK(c, 7);
    // 04e801  and esi, esi
    X86_AT(c, 0x4e801u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 04e803  jle 0x4e897
    X86_AT(c, 0x4e803u);
    if (x86_cc(c, 14)) { goto L_4e897; }
    X86_TICK(c, 17);
    // 04e809  mov al, byte ptr [edi]
    X86_AT(c, 0x4e809u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 04e80b  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0x4e80bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 04e80e  mov byte ptr [edx], al
    X86_AT(c, 0x4e80eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 04e810  cmp esi, 1
    X86_AT(c, 0x4e810u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 04e813  jne 0x4e874
    X86_AT(c, 0x4e813u);
    if (x86_cc(c, 5)) { goto L_4e874; }
    X86_TICK(c, 11);
    // 04e819  mov al, byte ptr [edi]
    X86_AT(c, 0x4e819u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 04e81b  cmp al, 0x81
    X86_AT(c, 0x4e81bu);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 04e81d  jb 0x4e823
    X86_AT(c, 0x4e81du);
    if (x86_cc(c, 2)) { goto L_4e823; }
    X86_TICK(c, 7);
    // 04e81f  cmp al, 0x9f
    X86_AT(c, 0x4e81fu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 04e821  jbe 0x4e831
    X86_AT(c, 0x4e821u);
    if (x86_cc(c, 6)) { goto L_4e831; }
L_4e823:
    X86_TICK(c, 11);
    // 04e823  mov al, byte ptr [edi]
    X86_AT(c, 0x4e823u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 04e825  cmp al, 0xe0
    X86_AT(c, 0x4e825u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 04e827  jb 0x4e874
    X86_AT(c, 0x4e827u);
    if (x86_cc(c, 2)) { goto L_4e874; }
    X86_TICK(c, 7);
    // 04e82d  cmp al, 0xfc
    X86_AT(c, 0x4e82du);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 04e82f  ja 0x4e874
    X86_AT(c, 0x4e82fu);
    if (x86_cc(c, 7)) { goto L_4e874; }
L_4e831:
    X86_TICK(c, 11);
    // 04e831  mov al, byte ptr [edi + 1]
    X86_AT(c, 0x4e831u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 04e834  cmp al, 0x40
    X86_AT(c, 0x4e834u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 04e836  jb 0x4e83c
    X86_AT(c, 0x4e836u);
    if (x86_cc(c, 2)) { goto L_4e83c; }
    X86_TICK(c, 7);
    // 04e838  cmp al, 0x7e
    X86_AT(c, 0x4e838u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 04e83a  jbe 0x4e847
    X86_AT(c, 0x4e83au);
    if (x86_cc(c, 6)) { goto L_4e847; }
L_4e83c:
    X86_TICK(c, 11);
    // 04e83c  mov al, byte ptr [edi + 1]
    X86_AT(c, 0x4e83cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 04e83f  cmp al, 0x80
    X86_AT(c, 0x4e83fu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 04e841  jb 0x4e874
    X86_AT(c, 0x4e841u);
    if (x86_cc(c, 2)) { goto L_4e874; }
    X86_TICK(c, 7);
    // 04e843  cmp al, 0xfc
    X86_AT(c, 0x4e843u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 04e845  ja 0x4e874
    X86_AT(c, 0x4e845u);
    if (x86_cc(c, 7)) { goto L_4e874; }
L_4e847:
    X86_TICK(c, 11);
    // 04e847  mov al, byte ptr [edi - 1]
    X86_AT(c, 0x4e847u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 04e84a  cmp al, 0x81
    X86_AT(c, 0x4e84au);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 04e84c  jb 0x4e852
    X86_AT(c, 0x4e84cu);
    if (x86_cc(c, 2)) { goto L_4e852; }
    X86_TICK(c, 7);
    // 04e84e  cmp al, 0x9f
    X86_AT(c, 0x4e84eu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 04e850  jbe 0x4e85d
    X86_AT(c, 0x4e850u);
    if (x86_cc(c, 6)) { goto L_4e85d; }
L_4e852:
    X86_TICK(c, 11);
    // 04e852  mov al, byte ptr [edi - 1]
    X86_AT(c, 0x4e852u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 04e855  cmp al, 0xe0
    X86_AT(c, 0x4e855u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 04e857  jb 0x4e897
    X86_AT(c, 0x4e857u);
    if (x86_cc(c, 2)) { goto L_4e897; }
    X86_TICK(c, 7);
    // 04e859  cmp al, 0xfc
    X86_AT(c, 0x4e859u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 04e85b  ja 0x4e897
    X86_AT(c, 0x4e85bu);
    if (x86_cc(c, 7)) { goto L_4e897; }
L_4e85d:
    X86_TICK(c, 11);
    // 04e85d  mov al, byte ptr [edi]
    X86_AT(c, 0x4e85du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 04e85f  cmp al, 0x40
    X86_AT(c, 0x4e85fu);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 04e861  jb 0x4e867
    X86_AT(c, 0x4e861u);
    if (x86_cc(c, 2)) { goto L_4e867; }
    X86_TICK(c, 7);
    // 04e863  cmp al, 0x7e
    X86_AT(c, 0x4e863u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 04e865  jbe 0x4e871
    X86_AT(c, 0x4e865u);
    if (x86_cc(c, 6)) { goto L_4e871; }
L_4e867:
    X86_TICK(c, 11);
    // 04e867  mov al, byte ptr [edi]
    X86_AT(c, 0x4e867u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 04e869  cmp al, 0x80
    X86_AT(c, 0x4e869u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 04e86b  jb 0x4e897
    X86_AT(c, 0x4e86bu);
    if (x86_cc(c, 2)) { goto L_4e897; }
    X86_TICK(c, 7);
    // 04e86d  cmp al, 0xfc
    X86_AT(c, 0x4e86du);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 04e86f  ja 0x4e897
    X86_AT(c, 0x4e86fu);
    if (x86_cc(c, 7)) { goto L_4e897; }
L_4e871:
    X86_TICK(c, 9);
    // 04e871  inc edi
    X86_AT(c, 0x4e871u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 04e872  jmp 0x4e897
    X86_AT(c, 0x4e872u);
    goto L_4e897;
L_4e874:
    X86_TICK(c, 12);
    // 04e874  cmp byte ptr [edi], 0xa
    X86_AT(c, 0x4e874u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xAu, 0, 1);
    // 04e877  jne 0x4e87f
    X86_AT(c, 0x4e877u);
    if (x86_cc(c, 5)) { goto L_4e87f; }
    X86_TICK(c, 15);
    // 04e879  inc edi
    X86_AT(c, 0x4e879u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 04e87a  dec dword ptr [ebp - 0xc]
    X86_AT(c, 0x4e87au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 04e87d  jmp 0x4e897
    X86_AT(c, 0x4e87du);
    goto L_4e897;
L_4e87f:
    X86_TICK(c, 12);
    // 04e87f  cmp byte ptr [edi], 0
    X86_AT(c, 0x4e87fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 04e882  jne 0x4e88d
    X86_AT(c, 0x4e882u);
    if (x86_cc(c, 5)) { goto L_4e88d; }
    X86_TICK(c, 9);
    // 04e884  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0x4e884u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 04e88b  jmp 0x4e897
    X86_AT(c, 0x4e88bu);
    goto L_4e897;
L_4e88d:
    X86_TICK(c, 17);
    // 04e88d  dec esi
    X86_AT(c, 0x4e88du);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 04e88e  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0x4e88eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 04e891  inc edi
    X86_AT(c, 0x4e891u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 04e892  jmp 0x4e801
    X86_AT(c, 0x4e892u);
    X86_POLL(c, 0x4e801u); goto L_4e801;
L_4e897:
    X86_TICK(c, 33);
    // 04e897  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0x4e897u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 04e89a  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0x4e89au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 04e89d  mov byte ptr [eax], 0
    X86_AT(c, 0x4e89du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
    // 04e8a0  mov eax, esi
    X86_AT(c, 0x4e8a0u);
    c.r[0] = c.r[6];
    // 04e8a2  mov dx, word ptr [ebp - 8]
    X86_AT(c, 0x4e8a2u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 04e8a6  sub edx, eax
    X86_AT(c, 0x4e8a6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 04e8a8  mov word ptr [0x34e8c], dx
    X86_AT(c, 0x4e8a8u);
    wr16((c.sbase[3] + (uint32_t)(0x34E8Cu)), (c.r[2] & 0xFFFFu));
    // 04e8af  push 0x34e88
    X86_AT(c, 0x4e8afu);
    { uint32_t v = 0x34E88u; push32(c, v); }
    // 04e8b4  push 0x342dc
    X86_AT(c, 0x4e8b4u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04e8b9  call 0x9fd
    X86_AT(c, 0x4e8b9u);
    push32(c, 0x4e8beu); x86_call_known(c, 0x9fdu, f_000009fd); X86_RET(c, 0x4e8beu);
    X86_TICK(c, 28);
    // 04e8be  mov eax, dword ptr [ebx + 0x19]
    X86_AT(c, 0x4e8beu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 04e8c1  add eax, dword ptr [ebp - 8]
    X86_AT(c, 0x4e8c1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 04e8c4  sub eax, esi
    X86_AT(c, 0x4e8c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 04e8c6  mov dword ptr [ebx + 0x19], eax
    X86_AT(c, 0x4e8c6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), c.r[0]);
    // 04e8c9  add esp, 8
    X86_AT(c, 0x4e8c9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04e8cc  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x4e8ccu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 04e8d0  jne 0x4e7b2
    X86_AT(c, 0x4e8d0u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4e7b2u); goto L_4e7b2; }
    X86_TICK(c, 15);
    // 04e8d6  mov eax, dword ptr [ebx + 0x1d]
    X86_AT(c, 0x4e8d6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 04e8d9  cmp eax, dword ptr [ebx + 0x15]
    X86_AT(c, 0x4e8d9u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x15u))), 0, 4);
    // 04e8dc  jne 0x4e8f5
    X86_AT(c, 0x4e8dcu);
    if (x86_cc(c, 5)) { goto L_4e8f5; }
    X86_TICK(c, 12);
    // 04e8de  push dword ptr [ebp + 8]
    X86_AT(c, 0x4e8deu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 04e8e1  call 0x4e6ac
    X86_AT(c, 0x4e8e1u);
    push32(c, 0x4e8e6u); x86_call_known(c, 0x4e6acu, f_0004e6ac); X86_RET(c, 0x4e8e6u);
    X86_TICK(c, 11);
    // 04e8e6  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0x4e8e6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 04e8ed  add esp, 4
    X86_AT(c, 0x4e8edu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 04e8f0  jmp 0x4e7b2
    X86_AT(c, 0x4e8f0u);
    X86_POLL(c, 0x4e7b2u); goto L_4e7b2;
L_4e8f5:
    X86_TICK(c, 15);
    // 04e8f5  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0x4e8f5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 04e8fc  inc dword ptr [ebx + 0x1d]
    X86_AT(c, 0x4e8fcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 04e8ff  jmp 0x4e7b2
    X86_AT(c, 0x4e8ffu);
    X86_POLL(c, 0x4e7b2u); goto L_4e7b2;
L_4e904:
    X86_TICK(c, 28);
    // 04e904  pop edi
    X86_AT(c, 0x4e904u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04e905  pop esi
    X86_AT(c, 0x4e905u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 04e906  pop ebx
    X86_AT(c, 0x4e906u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 04e907  leave 
    X86_AT(c, 0x4e907u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04e908  ret 
    X86_AT(c, 0x4e908u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4e794u, "ran off the end of a function");
}
void f_0004e7b2(X86Cpu& c) {
L_4e7b2:
    X86_TICK(c, 12);
    // 04e7b2  cmp byte ptr [edi], 0
    X86_AT(c, 0x4e7b2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 04e7b5  je 0x4e904
    X86_AT(c, 0x4e7b5u);
    if (x86_cc(c, 4)) { goto L_4e904; }
    X86_TICK(c, 52);
    // 04e7bb  mov dword ptr [ebp - 0xc], 0x34e8e
    X86_AT(c, 0x4e7bbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x34E8Eu);
    // 04e7c2  mov ax, word ptr [ebx + 1]
    X86_AT(c, 0x4e7c2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x1u))));
    // 04e7c6  add ax, 4
    X86_AT(c, 0x4e7c6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x4u, 0, 2)); }
    // 04e7ca  mov edx, dword ptr [ebx + 0x19]
    X86_AT(c, 0x4e7cau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 04e7cd  shl edx, 3
    X86_AT(c, 0x4e7cdu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 04e7d0  add edx, eax
    X86_AT(c, 0x4e7d0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 04e7d2  mov word ptr [0x34e88], dx
    X86_AT(c, 0x4e7d2u);
    wr16((c.sbase[3] + (uint32_t)(0x34E88u)), (c.r[2] & 0xFFFFu));
    // 04e7d9  mov ax, word ptr [ebx + 5]
    X86_AT(c, 0x4e7d9u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x5u))));
    // 04e7dd  add ax, 0x11
    X86_AT(c, 0x4e7ddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x11u, 0, 2)); }
    // 04e7e1  mov edx, dword ptr [ebx + 0x1d]
    X86_AT(c, 0x4e7e1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 04e7e4  shl edx, 4
    X86_AT(c, 0x4e7e4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 04e7e7  add edx, eax
    X86_AT(c, 0x4e7e7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 04e7e9  mov word ptr [0x34e8a], dx
    X86_AT(c, 0x4e7e9u);
    wr16((c.sbase[3] + (uint32_t)(0x34E8Au)), (c.r[2] & 0xFFFFu));
    // 04e7f0  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x4e7f0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 04e7f7  mov esi, dword ptr [ebx + 0x11]
    X86_AT(c, 0x4e7f7u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x11u)));
    // 04e7fa  sub esi, dword ptr [ebx + 0x19]
    X86_AT(c, 0x4e7fau);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u))), 0, 4); }
    // 04e7fd  inc esi
    X86_AT(c, 0x4e7fdu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 04e7fe  mov dword ptr [ebp - 8], esi
    X86_AT(c, 0x4e7feu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[6]);
L_4e801:
    X86_TICK(c, 7);
    // 04e801  and esi, esi
    X86_AT(c, 0x4e801u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 04e803  jle 0x4e897
    X86_AT(c, 0x4e803u);
    if (x86_cc(c, 14)) { goto L_4e897; }
    X86_TICK(c, 17);
    // 04e809  mov al, byte ptr [edi]
    X86_AT(c, 0x4e809u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 04e80b  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0x4e80bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 04e80e  mov byte ptr [edx], al
    X86_AT(c, 0x4e80eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 04e810  cmp esi, 1
    X86_AT(c, 0x4e810u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 04e813  jne 0x4e874
    X86_AT(c, 0x4e813u);
    if (x86_cc(c, 5)) { goto L_4e874; }
    X86_TICK(c, 11);
    // 04e819  mov al, byte ptr [edi]
    X86_AT(c, 0x4e819u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 04e81b  cmp al, 0x81
    X86_AT(c, 0x4e81bu);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 04e81d  jb 0x4e823
    X86_AT(c, 0x4e81du);
    if (x86_cc(c, 2)) { goto L_4e823; }
    X86_TICK(c, 7);
    // 04e81f  cmp al, 0x9f
    X86_AT(c, 0x4e81fu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 04e821  jbe 0x4e831
    X86_AT(c, 0x4e821u);
    if (x86_cc(c, 6)) { goto L_4e831; }
L_4e823:
    X86_TICK(c, 11);
    // 04e823  mov al, byte ptr [edi]
    X86_AT(c, 0x4e823u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 04e825  cmp al, 0xe0
    X86_AT(c, 0x4e825u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 04e827  jb 0x4e874
    X86_AT(c, 0x4e827u);
    if (x86_cc(c, 2)) { goto L_4e874; }
    X86_TICK(c, 7);
    // 04e82d  cmp al, 0xfc
    X86_AT(c, 0x4e82du);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 04e82f  ja 0x4e874
    X86_AT(c, 0x4e82fu);
    if (x86_cc(c, 7)) { goto L_4e874; }
L_4e831:
    X86_TICK(c, 11);
    // 04e831  mov al, byte ptr [edi + 1]
    X86_AT(c, 0x4e831u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 04e834  cmp al, 0x40
    X86_AT(c, 0x4e834u);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 04e836  jb 0x4e83c
    X86_AT(c, 0x4e836u);
    if (x86_cc(c, 2)) { goto L_4e83c; }
    X86_TICK(c, 7);
    // 04e838  cmp al, 0x7e
    X86_AT(c, 0x4e838u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 04e83a  jbe 0x4e847
    X86_AT(c, 0x4e83au);
    if (x86_cc(c, 6)) { goto L_4e847; }
L_4e83c:
    X86_TICK(c, 11);
    // 04e83c  mov al, byte ptr [edi + 1]
    X86_AT(c, 0x4e83cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 04e83f  cmp al, 0x80
    X86_AT(c, 0x4e83fu);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 04e841  jb 0x4e874
    X86_AT(c, 0x4e841u);
    if (x86_cc(c, 2)) { goto L_4e874; }
    X86_TICK(c, 7);
    // 04e843  cmp al, 0xfc
    X86_AT(c, 0x4e843u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 04e845  ja 0x4e874
    X86_AT(c, 0x4e845u);
    if (x86_cc(c, 7)) { goto L_4e874; }
L_4e847:
    X86_TICK(c, 11);
    // 04e847  mov al, byte ptr [edi - 1]
    X86_AT(c, 0x4e847u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 04e84a  cmp al, 0x81
    X86_AT(c, 0x4e84au);
    (void)x86_sub(c, g8(c, 0), 0x81u, 0, 1);
    // 04e84c  jb 0x4e852
    X86_AT(c, 0x4e84cu);
    if (x86_cc(c, 2)) { goto L_4e852; }
    X86_TICK(c, 7);
    // 04e84e  cmp al, 0x9f
    X86_AT(c, 0x4e84eu);
    (void)x86_sub(c, g8(c, 0), 0x9Fu, 0, 1);
    // 04e850  jbe 0x4e85d
    X86_AT(c, 0x4e850u);
    if (x86_cc(c, 6)) { goto L_4e85d; }
L_4e852:
    X86_TICK(c, 11);
    // 04e852  mov al, byte ptr [edi - 1]
    X86_AT(c, 0x4e852u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))));
    // 04e855  cmp al, 0xe0
    X86_AT(c, 0x4e855u);
    (void)x86_sub(c, g8(c, 0), 0xE0u, 0, 1);
    // 04e857  jb 0x4e897
    X86_AT(c, 0x4e857u);
    if (x86_cc(c, 2)) { goto L_4e897; }
    X86_TICK(c, 7);
    // 04e859  cmp al, 0xfc
    X86_AT(c, 0x4e859u);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 04e85b  ja 0x4e897
    X86_AT(c, 0x4e85bu);
    if (x86_cc(c, 7)) { goto L_4e897; }
L_4e85d:
    X86_TICK(c, 11);
    // 04e85d  mov al, byte ptr [edi]
    X86_AT(c, 0x4e85du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 04e85f  cmp al, 0x40
    X86_AT(c, 0x4e85fu);
    (void)x86_sub(c, g8(c, 0), 0x40u, 0, 1);
    // 04e861  jb 0x4e867
    X86_AT(c, 0x4e861u);
    if (x86_cc(c, 2)) { goto L_4e867; }
    X86_TICK(c, 7);
    // 04e863  cmp al, 0x7e
    X86_AT(c, 0x4e863u);
    (void)x86_sub(c, g8(c, 0), 0x7Eu, 0, 1);
    // 04e865  jbe 0x4e871
    X86_AT(c, 0x4e865u);
    if (x86_cc(c, 6)) { goto L_4e871; }
L_4e867:
    X86_TICK(c, 11);
    // 04e867  mov al, byte ptr [edi]
    X86_AT(c, 0x4e867u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 04e869  cmp al, 0x80
    X86_AT(c, 0x4e869u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 04e86b  jb 0x4e897
    X86_AT(c, 0x4e86bu);
    if (x86_cc(c, 2)) { goto L_4e897; }
    X86_TICK(c, 7);
    // 04e86d  cmp al, 0xfc
    X86_AT(c, 0x4e86du);
    (void)x86_sub(c, g8(c, 0), 0xFCu, 0, 1);
    // 04e86f  ja 0x4e897
    X86_AT(c, 0x4e86fu);
    if (x86_cc(c, 7)) { goto L_4e897; }
L_4e871:
    X86_TICK(c, 9);
    // 04e871  inc edi
    X86_AT(c, 0x4e871u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 04e872  jmp 0x4e897
    X86_AT(c, 0x4e872u);
    goto L_4e897;
L_4e874:
    X86_TICK(c, 12);
    // 04e874  cmp byte ptr [edi], 0xa
    X86_AT(c, 0x4e874u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0xAu, 0, 1);
    // 04e877  jne 0x4e87f
    X86_AT(c, 0x4e877u);
    if (x86_cc(c, 5)) { goto L_4e87f; }
    X86_TICK(c, 15);
    // 04e879  inc edi
    X86_AT(c, 0x4e879u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 04e87a  dec dword ptr [ebp - 0xc]
    X86_AT(c, 0x4e87au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 04e87d  jmp 0x4e897
    X86_AT(c, 0x4e87du);
    goto L_4e897;
L_4e87f:
    X86_TICK(c, 12);
    // 04e87f  cmp byte ptr [edi], 0
    X86_AT(c, 0x4e87fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 04e882  jne 0x4e88d
    X86_AT(c, 0x4e882u);
    if (x86_cc(c, 5)) { goto L_4e88d; }
    X86_TICK(c, 9);
    // 04e884  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0x4e884u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 04e88b  jmp 0x4e897
    X86_AT(c, 0x4e88bu);
    goto L_4e897;
L_4e88d:
    X86_TICK(c, 17);
    // 04e88d  dec esi
    X86_AT(c, 0x4e88du);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 04e88e  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0x4e88eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 04e891  inc edi
    X86_AT(c, 0x4e891u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 04e892  jmp 0x4e801
    X86_AT(c, 0x4e892u);
    X86_POLL(c, 0x4e801u); goto L_4e801;
L_4e897:
    X86_TICK(c, 33);
    // 04e897  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0x4e897u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 04e89a  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0x4e89au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 04e89d  mov byte ptr [eax], 0
    X86_AT(c, 0x4e89du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
    // 04e8a0  mov eax, esi
    X86_AT(c, 0x4e8a0u);
    c.r[0] = c.r[6];
    // 04e8a2  mov dx, word ptr [ebp - 8]
    X86_AT(c, 0x4e8a2u);
    s16(c, 2, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 04e8a6  sub edx, eax
    X86_AT(c, 0x4e8a6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 04e8a8  mov word ptr [0x34e8c], dx
    X86_AT(c, 0x4e8a8u);
    wr16((c.sbase[3] + (uint32_t)(0x34E8Cu)), (c.r[2] & 0xFFFFu));
    // 04e8af  push 0x34e88
    X86_AT(c, 0x4e8afu);
    { uint32_t v = 0x34E88u; push32(c, v); }
    // 04e8b4  push 0x342dc
    X86_AT(c, 0x4e8b4u);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04e8b9  call 0x9fd
    X86_AT(c, 0x4e8b9u);
    push32(c, 0x4e8beu); x86_call_known(c, 0x9fdu, f_000009fd); X86_RET(c, 0x4e8beu);
    X86_TICK(c, 28);
    // 04e8be  mov eax, dword ptr [ebx + 0x19]
    X86_AT(c, 0x4e8beu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)));
    // 04e8c1  add eax, dword ptr [ebp - 8]
    X86_AT(c, 0x4e8c1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 04e8c4  sub eax, esi
    X86_AT(c, 0x4e8c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 04e8c6  mov dword ptr [ebx + 0x19], eax
    X86_AT(c, 0x4e8c6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), c.r[0]);
    // 04e8c9  add esp, 8
    X86_AT(c, 0x4e8c9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 04e8cc  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x4e8ccu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 04e8d0  jne 0x4e7b2
    X86_AT(c, 0x4e8d0u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4e7b2u); goto L_4e7b2; }
    X86_TICK(c, 15);
    // 04e8d6  mov eax, dword ptr [ebx + 0x1d]
    X86_AT(c, 0x4e8d6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)));
    // 04e8d9  cmp eax, dword ptr [ebx + 0x15]
    X86_AT(c, 0x4e8d9u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x15u))), 0, 4);
    // 04e8dc  jne 0x4e8f5
    X86_AT(c, 0x4e8dcu);
    if (x86_cc(c, 5)) { goto L_4e8f5; }
    X86_TICK(c, 12);
    // 04e8de  push dword ptr [ebp + 8]
    X86_AT(c, 0x4e8deu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 04e8e1  call 0x4e6ac
    X86_AT(c, 0x4e8e1u);
    push32(c, 0x4e8e6u); x86_call_known(c, 0x4e6acu, f_0004e6ac); X86_RET(c, 0x4e8e6u);
    X86_TICK(c, 11);
    // 04e8e6  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0x4e8e6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 04e8ed  add esp, 4
    X86_AT(c, 0x4e8edu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 04e8f0  jmp 0x4e7b2
    X86_AT(c, 0x4e8f0u);
    X86_POLL(c, 0x4e7b2u); goto L_4e7b2;
L_4e8f5:
    X86_TICK(c, 15);
    // 04e8f5  mov dword ptr [ebx + 0x19], 0
    X86_AT(c, 0x4e8f5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x19u)), 0x0u);
    // 04e8fc  inc dword ptr [ebx + 0x1d]
    X86_AT(c, 0x4e8fcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x1Du)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 04e8ff  jmp 0x4e7b2
    X86_AT(c, 0x4e8ffu);
    X86_POLL(c, 0x4e7b2u); goto L_4e7b2;
L_4e904:
    X86_TICK(c, 28);
    // 04e904  pop edi
    X86_AT(c, 0x4e904u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04e905  pop esi
    X86_AT(c, 0x4e905u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 04e906  pop ebx
    X86_AT(c, 0x4e906u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 04e907  leave 
    X86_AT(c, 0x4e907u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04e908  ret 
    X86_AT(c, 0x4e908u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4e7b2u, "ran off the end of a function");
}
void f_0004e90c(X86Cpu& c) {
    X86_TICK(c, 27);
    // 04e90c  push ebp
    X86_AT(c, 0x4e90cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04e90d  mov ebp, esp
    X86_AT(c, 0x4e90du);
    c.r[5] = c.r[4];
    // 04e90f  push ebx
    X86_AT(c, 0x4e90fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04e910  push esi
    X86_AT(c, 0x4e910u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04e911  push edi
    X86_AT(c, 0x4e911u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04e912  sub esi, esi
    X86_AT(c, 0x4e912u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 04e914  movzx edx, byte ptr [ebp + 0xc]
    X86_AT(c, 0x4e914u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 04e918  sub edx, 0x20
    X86_AT(c, 0x4e918u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x20u, 0, 4); }
    // 04e91b  cmp edx, 0x3a
    X86_AT(c, 0x4e91bu);
    (void)x86_sub(c, c.r[2], 0x3Au, 0, 4);
    // 04e91e  ja 0x4eb5a
    X86_AT(c, 0x4e91eu);
    if (x86_cc(c, 7)) { goto L_4eb5a; }
    X86_TICK(c, 7);
    // 04e924  jmp dword ptr cs:[edx*4 + 0x4e92c]
    X86_AT(c, 0x4e924u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0x4E92Cu)));
      switch (t) {
      case 0x4ea18u: goto L_4ea18;
      case 0x4ea21u: goto L_4ea21;
      case 0x4ea2au: goto L_4ea2a;
      case 0x4ea33u: goto L_4ea33;
      case 0x4ea3cu: goto L_4ea3c;
      case 0x4ea45u: goto L_4ea45;
      case 0x4ea4eu: goto L_4ea4e;
      case 0x4ea57u: goto L_4ea57;
      case 0x4ea60u: goto L_4ea60;
      case 0x4ea69u: goto L_4ea69;
      case 0x4ea72u: goto L_4ea72;
      case 0x4ea7bu: goto L_4ea7b;
      case 0x4ea84u: goto L_4ea84;
      case 0x4ea8du: goto L_4ea8d;
      case 0x4ea96u: goto L_4ea96;
      case 0x4ea9fu: goto L_4ea9f;
      case 0x4eaa8u: goto L_4eaa8;
      case 0x4eab1u: goto L_4eab1;
      case 0x4eabau: goto L_4eaba;
      case 0x4eac3u: goto L_4eac3;
      case 0x4eaccu: goto L_4eacc;
      case 0x4ead5u: goto L_4ead5;
      case 0x4eadeu: goto L_4eade;
      case 0x4eae7u: goto L_4eae7;
      case 0x4eaf0u: goto L_4eaf0;
      case 0x4eaf9u: goto L_4eaf9;
      case 0x4eb02u: goto L_4eb02;
      case 0x4eb08u: goto L_4eb08;
      case 0x4eb0eu: goto L_4eb0e;
      case 0x4eb14u: goto L_4eb14;
      case 0x4eb1au: goto L_4eb1a;
      case 0x4eb20u: goto L_4eb20;
      case 0x4eb26u: goto L_4eb26;
      case 0x4eb2cu: goto L_4eb2c;
      case 0x4eb32u: goto L_4eb32;
      case 0x4eb38u: goto L_4eb38;
      case 0x4eb3eu: goto L_4eb3e;
      case 0x4eb44u: goto L_4eb44;
      case 0x4eb4au: goto L_4eb4a;
      case 0x4eb50u: goto L_4eb50;
      case 0x4eb56u: goto L_4eb56;
      case 0x4eb5au: goto L_4eb5a;
      default: x86_jump(c, t); return; } }
L_4ea18:
    X86_TICK(c, 9);
    // 04ea18  mov si, 0x4081
    X86_AT(c, 0x4ea18u);
    s16(c, 6, 0x4081u);
    // 04ea1c  jmp 0x4eb5a
    X86_AT(c, 0x4ea1cu);
    goto L_4eb5a;
L_4ea21:
    X86_TICK(c, 9);
    // 04ea21  mov si, 0x4681
    X86_AT(c, 0x4ea21u);
    s16(c, 6, 0x4681u);
    // 04ea25  jmp 0x4eb5a
    X86_AT(c, 0x4ea25u);
    goto L_4eb5a;
L_4ea2a:
    X86_TICK(c, 9);
    // 04ea2a  mov si, 0x75eb
    X86_AT(c, 0x4ea2au);
    s16(c, 6, 0x75EBu);
    // 04ea2e  jmp 0x4eb5a
    X86_AT(c, 0x4ea2eu);
    goto L_4eb5a;
L_4ea33:
    X86_TICK(c, 9);
    // 04ea33  mov si, 0x74eb
    X86_AT(c, 0x4ea33u);
    s16(c, 6, 0x74EBu);
    // 04ea37  jmp 0x4eb5a
    X86_AT(c, 0x4ea37u);
    goto L_4eb5a;
L_4ea3c:
    X86_TICK(c, 9);
    // 04ea3c  mov si, 0x5e81
    X86_AT(c, 0x4ea3cu);
    s16(c, 6, 0x5E81u);
    // 04ea40  jmp 0x4eb5a
    X86_AT(c, 0x4ea40u);
    goto L_4eb5a;
L_4ea45:
    X86_TICK(c, 9);
    // 04ea45  mov si, 0x80eb
    X86_AT(c, 0x4ea45u);
    s16(c, 6, 0x80EBu);
    // 04ea49  jmp 0x4eb5a
    X86_AT(c, 0x4ea49u);
    goto L_4eb5a;
L_4ea4e:
    X86_TICK(c, 9);
    // 04ea4e  mov si, 0x76eb
    X86_AT(c, 0x4ea4eu);
    s16(c, 6, 0x76EBu);
    // 04ea52  jmp 0x4eb5a
    X86_AT(c, 0x4ea52u);
    goto L_4eb5a;
L_4ea57:
    X86_TICK(c, 9);
    // 04ea57  mov si, 0x77eb
    X86_AT(c, 0x4ea57u);
    s16(c, 6, 0x77EBu);
    // 04ea5b  jmp 0x4eb5a
    X86_AT(c, 0x4ea5bu);
    goto L_4eb5a;
L_4ea60:
    X86_TICK(c, 9);
    // 04ea60  mov si, 0x78eb
    X86_AT(c, 0x4ea60u);
    s16(c, 6, 0x78EBu);
    // 04ea64  jmp 0x4eb5a
    X86_AT(c, 0x4ea64u);
    goto L_4eb5a;
L_4ea69:
    X86_TICK(c, 9);
    // 04ea69  mov si, 0x79eb
    X86_AT(c, 0x4ea69u);
    s16(c, 6, 0x79EBu);
    // 04ea6d  jmp 0x4eb5a
    X86_AT(c, 0x4ea6du);
    goto L_4eb5a;
L_4ea72:
    X86_TICK(c, 9);
    // 04ea72  mov si, 0x7aeb
    X86_AT(c, 0x4ea72u);
    s16(c, 6, 0x7AEBu);
    // 04ea76  jmp 0x4eb5a
    X86_AT(c, 0x4ea76u);
    goto L_4eb5a;
L_4ea7b:
    X86_TICK(c, 9);
    // 04ea7b  mov si, 0x7beb
    X86_AT(c, 0x4ea7bu);
    s16(c, 6, 0x7BEBu);
    // 04ea7f  jmp 0x4eb5a
    X86_AT(c, 0x4ea7fu);
    goto L_4eb5a;
L_4ea84:
    X86_TICK(c, 9);
    // 04ea84  mov si, 0x7ceb
    X86_AT(c, 0x4ea84u);
    s16(c, 6, 0x7CEBu);
    // 04ea88  jmp 0x4eb5a
    X86_AT(c, 0x4ea88u);
    goto L_4eb5a;
L_4ea8d:
    X86_TICK(c, 9);
    // 04ea8d  mov si, 0x7deb
    X86_AT(c, 0x4ea8du);
    s16(c, 6, 0x7DEBu);
    // 04ea91  jmp 0x4eb5a
    X86_AT(c, 0x4ea91u);
    goto L_4eb5a;
L_4ea96:
    X86_TICK(c, 9);
    // 04ea96  mov si, 0x7eeb
    X86_AT(c, 0x4ea96u);
    s16(c, 6, 0x7EEBu);
    // 04ea9a  jmp 0x4eb5a
    X86_AT(c, 0x4ea9au);
    goto L_4eb5a;
L_4ea9f:
    X86_TICK(c, 9);
    // 04ea9f  mov si, 0x40eb
    X86_AT(c, 0x4ea9fu);
    s16(c, 6, 0x40EBu);
    // 04eaa3  jmp 0x4eb5a
    X86_AT(c, 0x4eaa3u);
    goto L_4eb5a;
L_4eaa8:
    X86_TICK(c, 9);
    // 04eaa8  mov si, 0x41eb
    X86_AT(c, 0x4eaa8u);
    s16(c, 6, 0x41EBu);
    // 04eaac  jmp 0x4eb5a
    X86_AT(c, 0x4eaacu);
    goto L_4eb5a;
L_4eab1:
    X86_TICK(c, 9);
    // 04eab1  mov si, 0x42eb
    X86_AT(c, 0x4eab1u);
    s16(c, 6, 0x42EBu);
    // 04eab5  jmp 0x4eb5a
    X86_AT(c, 0x4eab5u);
    goto L_4eb5a;
L_4eaba:
    X86_TICK(c, 9);
    // 04eaba  mov si, 0x43eb
    X86_AT(c, 0x4eabau);
    s16(c, 6, 0x43EBu);
    // 04eabe  jmp 0x4eb5a
    X86_AT(c, 0x4eabeu);
    goto L_4eb5a;
L_4eac3:
    X86_TICK(c, 9);
    // 04eac3  mov si, 0x44eb
    X86_AT(c, 0x4eac3u);
    s16(c, 6, 0x44EBu);
    // 04eac7  jmp 0x4eb5a
    X86_AT(c, 0x4eac7u);
    goto L_4eb5a;
L_4eacc:
    X86_TICK(c, 9);
    // 04eacc  mov si, 0x45eb
    X86_AT(c, 0x4eaccu);
    s16(c, 6, 0x45EBu);
    // 04ead0  jmp 0x4eb5a
    X86_AT(c, 0x4ead0u);
    goto L_4eb5a;
L_4ead5:
    X86_TICK(c, 9);
    // 04ead5  mov si, 0x46eb
    X86_AT(c, 0x4ead5u);
    s16(c, 6, 0x46EBu);
    // 04ead9  jmp 0x4eb5a
    X86_AT(c, 0x4ead9u);
    goto L_4eb5a;
L_4eade:
    X86_TICK(c, 9);
    // 04eade  mov si, 0x47eb
    X86_AT(c, 0x4eadeu);
    s16(c, 6, 0x47EBu);
    // 04eae2  jmp 0x4eb5a
    X86_AT(c, 0x4eae2u);
    goto L_4eb5a;
L_4eae7:
    X86_TICK(c, 9);
    // 04eae7  mov si, 0x48eb
    X86_AT(c, 0x4eae7u);
    s16(c, 6, 0x48EBu);
    // 04eaeb  jmp 0x4eb5a
    X86_AT(c, 0x4eaebu);
    goto L_4eb5a;
L_4eaf0:
    X86_TICK(c, 9);
    // 04eaf0  mov si, 0x49eb
    X86_AT(c, 0x4eaf0u);
    s16(c, 6, 0x49EBu);
    // 04eaf4  jmp 0x4eb5a
    X86_AT(c, 0x4eaf4u);
    goto L_4eb5a;
L_4eaf9:
    X86_TICK(c, 9);
    // 04eaf9  mov si, 0x4aeb
    X86_AT(c, 0x4eaf9u);
    s16(c, 6, 0x4AEBu);
    // 04eafd  jmp 0x4eb5a
    X86_AT(c, 0x4eafdu);
    goto L_4eb5a;
L_4eb02:
    X86_TICK(c, 9);
    // 04eb02  mov si, 0x4beb
    X86_AT(c, 0x4eb02u);
    s16(c, 6, 0x4BEBu);
    // 04eb06  jmp 0x4eb5a
    X86_AT(c, 0x4eb06u);
    goto L_4eb5a;
L_4eb08:
    X86_TICK(c, 9);
    // 04eb08  mov si, 0x4ceb
    X86_AT(c, 0x4eb08u);
    s16(c, 6, 0x4CEBu);
    // 04eb0c  jmp 0x4eb5a
    X86_AT(c, 0x4eb0cu);
    goto L_4eb5a;
L_4eb0e:
    X86_TICK(c, 9);
    // 04eb0e  mov si, 0x4deb
    X86_AT(c, 0x4eb0eu);
    s16(c, 6, 0x4DEBu);
    // 04eb12  jmp 0x4eb5a
    X86_AT(c, 0x4eb12u);
    goto L_4eb5a;
L_4eb14:
    X86_TICK(c, 9);
    // 04eb14  mov si, 0x4eeb
    X86_AT(c, 0x4eb14u);
    s16(c, 6, 0x4EEBu);
    // 04eb18  jmp 0x4eb5a
    X86_AT(c, 0x4eb18u);
    goto L_4eb5a;
L_4eb1a:
    X86_TICK(c, 9);
    // 04eb1a  mov si, 0x4feb
    X86_AT(c, 0x4eb1au);
    s16(c, 6, 0x4FEBu);
    // 04eb1e  jmp 0x4eb5a
    X86_AT(c, 0x4eb1eu);
    goto L_4eb5a;
L_4eb20:
    X86_TICK(c, 9);
    // 04eb20  mov si, 0x50eb
    X86_AT(c, 0x4eb20u);
    s16(c, 6, 0x50EBu);
    // 04eb24  jmp 0x4eb5a
    X86_AT(c, 0x4eb24u);
    goto L_4eb5a;
L_4eb26:
    X86_TICK(c, 9);
    // 04eb26  mov si, 0x51eb
    X86_AT(c, 0x4eb26u);
    s16(c, 6, 0x51EBu);
    // 04eb2a  jmp 0x4eb5a
    X86_AT(c, 0x4eb2au);
    goto L_4eb5a;
L_4eb2c:
    X86_TICK(c, 9);
    // 04eb2c  mov si, 0x52eb
    X86_AT(c, 0x4eb2cu);
    s16(c, 6, 0x52EBu);
    // 04eb30  jmp 0x4eb5a
    X86_AT(c, 0x4eb30u);
    goto L_4eb5a;
L_4eb32:
    X86_TICK(c, 9);
    // 04eb32  mov si, 0x53eb
    X86_AT(c, 0x4eb32u);
    s16(c, 6, 0x53EBu);
    // 04eb36  jmp 0x4eb5a
    X86_AT(c, 0x4eb36u);
    goto L_4eb5a;
L_4eb38:
    X86_TICK(c, 9);
    // 04eb38  mov si, 0x54eb
    X86_AT(c, 0x4eb38u);
    s16(c, 6, 0x54EBu);
    // 04eb3c  jmp 0x4eb5a
    X86_AT(c, 0x4eb3cu);
    goto L_4eb5a;
L_4eb3e:
    X86_TICK(c, 9);
    // 04eb3e  mov si, 0x55eb
    X86_AT(c, 0x4eb3eu);
    s16(c, 6, 0x55EBu);
    // 04eb42  jmp 0x4eb5a
    X86_AT(c, 0x4eb42u);
    goto L_4eb5a;
L_4eb44:
    X86_TICK(c, 9);
    // 04eb44  mov si, 0x56eb
    X86_AT(c, 0x4eb44u);
    s16(c, 6, 0x56EBu);
    // 04eb48  jmp 0x4eb5a
    X86_AT(c, 0x4eb48u);
    goto L_4eb5a;
L_4eb4a:
    X86_TICK(c, 9);
    // 04eb4a  mov si, 0x57eb
    X86_AT(c, 0x4eb4au);
    s16(c, 6, 0x57EBu);
    // 04eb4e  jmp 0x4eb5a
    X86_AT(c, 0x4eb4eu);
    goto L_4eb5a;
L_4eb50:
    X86_TICK(c, 9);
    // 04eb50  mov si, 0x58eb
    X86_AT(c, 0x4eb50u);
    s16(c, 6, 0x58EBu);
    // 04eb54  jmp 0x4eb5a
    X86_AT(c, 0x4eb54u);
    goto L_4eb5a;
L_4eb56:
    X86_TICK(c, 2);
    // 04eb56  mov si, 0x59eb
    X86_AT(c, 0x4eb56u);
    s16(c, 6, 0x59EBu);
L_4eb5a:
    X86_TICK(c, 7);
    // 04eb5a  and si, si
    X86_AT(c, 0x4eb5au);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 04eb5d  je 0x4ebc8
    X86_AT(c, 0x4eb5du);
    if (x86_cc(c, 4)) { goto L_4ebc8; }
    X86_TICK(c, 67);
    // 04eb5f  mov eax, 0x342d8
    X86_AT(c, 0x4eb5fu);
    c.r[0] = 0x342D8u;
    // 04eb64  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x4eb64u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04eb67  lea edx, [edx + edx*2]
    X86_AT(c, 0x4eb67u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 04eb6a  lea ecx, [edx + edx*8]
    X86_AT(c, 0x4eb6au);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 04eb6d  lea ecx, [edx + ecx*2]
    X86_AT(c, 0x4eb6du);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 04eb70  lea edi, [eax + ecx*1 + 0x710]
    X86_AT(c, 0x4eb70u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[1] + 0x710u);
    // 04eb77  mov dx, word ptr [edi + 1]
    X86_AT(c, 0x4eb77u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 04eb7b  add dx, 4
    X86_AT(c, 0x4eb7bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x4u, 0, 2)); }
    // 04eb7f  mov ebx, dword ptr [edi + 0x19]
    X86_AT(c, 0x4eb7fu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x19u)));
    // 04eb82  shl ebx, 3
    X86_AT(c, 0x4eb82u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 04eb85  add ebx, edx
    X86_AT(c, 0x4eb85u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 04eb87  mov word ptr [eax + 0xd48], bx
    X86_AT(c, 0x4eb87u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD48u)), (c.r[3] & 0xFFFFu));
    // 04eb8e  mov dx, word ptr [edi + 5]
    X86_AT(c, 0x4eb8eu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 04eb92  add dx, 0x11
    X86_AT(c, 0x4eb92u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x11u, 0, 2)); }
    // 04eb96  mov ebx, dword ptr [edi + 0x1d]
    X86_AT(c, 0x4eb96u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 04eb99  shl ebx, 4
    X86_AT(c, 0x4eb99u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 04eb9c  add ebx, edx
    X86_AT(c, 0x4eb9cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 04eb9e  mov word ptr [eax + 0xd4a], bx
    X86_AT(c, 0x4eb9eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4Au)), (c.r[3] & 0xFFFFu));
    // 04eba5  mov word ptr [eax + 0xd4c], 2
    X86_AT(c, 0x4eba5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4Cu)), 0x2u);
    // 04ebae  mov word ptr [eax + 0xd4e], si
    X86_AT(c, 0x4ebaeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4Eu)), (c.r[6] & 0xFFFFu));
    // 04ebb5  lea edx, [eax + 0xd48]
    X86_AT(c, 0x4ebb5u);
    c.r[2] = (uint32_t)(c.r[0] + 0xD48u);
    // 04ebbb  push edx
    X86_AT(c, 0x4ebbbu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 04ebbc  add eax, 4
    X86_AT(c, 0x4ebbcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 04ebbf  push eax
    X86_AT(c, 0x4ebbfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04ebc0  call 0x9fd
    X86_AT(c, 0x4ebc0u);
    push32(c, 0x4ebc5u); x86_call_known(c, 0x9fdu, f_000009fd); X86_RET(c, 0x4ebc5u);
    X86_TICK(c, 2);
    // 04ebc5  add esp, 8
    X86_AT(c, 0x4ebc5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_4ebc8:
    X86_TICK(c, 28);
    // 04ebc8  pop edi
    X86_AT(c, 0x4ebc8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04ebc9  pop esi
    X86_AT(c, 0x4ebc9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 04ebca  pop ebx
    X86_AT(c, 0x4ebcau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 04ebcb  leave 
    X86_AT(c, 0x4ebcbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04ebcc  ret 
    X86_AT(c, 0x4ebccu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4e90cu, "ran off the end of a function");
}
void f_0004eb5a(X86Cpu& c) {
    X86_TICK(c, 7);
    // 04eb5a  and si, si
    X86_AT(c, 0x4eb5au);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 04eb5d  je 0x4ebc8
    X86_AT(c, 0x4eb5du);
    if (x86_cc(c, 4)) { goto L_4ebc8; }
    X86_TICK(c, 67);
    // 04eb5f  mov eax, 0x342d8
    X86_AT(c, 0x4eb5fu);
    c.r[0] = 0x342D8u;
    // 04eb64  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x4eb64u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04eb67  lea edx, [edx + edx*2]
    X86_AT(c, 0x4eb67u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 04eb6a  lea ecx, [edx + edx*8]
    X86_AT(c, 0x4eb6au);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 04eb6d  lea ecx, [edx + ecx*2]
    X86_AT(c, 0x4eb6du);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 04eb70  lea edi, [eax + ecx*1 + 0x710]
    X86_AT(c, 0x4eb70u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[1] + 0x710u);
    // 04eb77  mov dx, word ptr [edi + 1]
    X86_AT(c, 0x4eb77u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1u))));
    // 04eb7b  add dx, 4
    X86_AT(c, 0x4eb7bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x4u, 0, 2)); }
    // 04eb7f  mov ebx, dword ptr [edi + 0x19]
    X86_AT(c, 0x4eb7fu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x19u)));
    // 04eb82  shl ebx, 3
    X86_AT(c, 0x4eb82u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 04eb85  add ebx, edx
    X86_AT(c, 0x4eb85u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 04eb87  mov word ptr [eax + 0xd48], bx
    X86_AT(c, 0x4eb87u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD48u)), (c.r[3] & 0xFFFFu));
    // 04eb8e  mov dx, word ptr [edi + 5]
    X86_AT(c, 0x4eb8eu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5u))));
    // 04eb92  add dx, 0x11
    X86_AT(c, 0x4eb92u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x11u, 0, 2)); }
    // 04eb96  mov ebx, dword ptr [edi + 0x1d]
    X86_AT(c, 0x4eb96u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Du)));
    // 04eb99  shl ebx, 4
    X86_AT(c, 0x4eb99u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 04eb9c  add ebx, edx
    X86_AT(c, 0x4eb9cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], 0, 4); }
    // 04eb9e  mov word ptr [eax + 0xd4a], bx
    X86_AT(c, 0x4eb9eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4Au)), (c.r[3] & 0xFFFFu));
    // 04eba5  mov word ptr [eax + 0xd4c], 2
    X86_AT(c, 0x4eba5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4Cu)), 0x2u);
    // 04ebae  mov word ptr [eax + 0xd4e], si
    X86_AT(c, 0x4ebaeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0xD4Eu)), (c.r[6] & 0xFFFFu));
    // 04ebb5  lea edx, [eax + 0xd48]
    X86_AT(c, 0x4ebb5u);
    c.r[2] = (uint32_t)(c.r[0] + 0xD48u);
    // 04ebbb  push edx
    X86_AT(c, 0x4ebbbu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 04ebbc  add eax, 4
    X86_AT(c, 0x4ebbcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4u, 0, 4); }
    // 04ebbf  push eax
    X86_AT(c, 0x4ebbfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04ebc0  call 0x9fd
    X86_AT(c, 0x4ebc0u);
    push32(c, 0x4ebc5u); x86_call_known(c, 0x9fdu, f_000009fd); X86_RET(c, 0x4ebc5u);
    X86_TICK(c, 2);
    // 04ebc5  add esp, 8
    X86_AT(c, 0x4ebc5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_4ebc8:
    X86_TICK(c, 28);
    // 04ebc8  pop edi
    X86_AT(c, 0x4ebc8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04ebc9  pop esi
    X86_AT(c, 0x4ebc9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 04ebca  pop ebx
    X86_AT(c, 0x4ebcau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 04ebcb  leave 
    X86_AT(c, 0x4ebcbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04ebcc  ret 
    X86_AT(c, 0x4ebccu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4eb5au, "ran off the end of a function");
}
void f_0004efbc(X86Cpu& c) {
    X86_TICK(c, 31);
    // 04efbc  push ebp
    X86_AT(c, 0x4efbcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04efbd  mov ebp, esp
    X86_AT(c, 0x4efbdu);
    c.r[5] = c.r[4];
    // 04efbf  push edi
    X86_AT(c, 0x4efbfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04efc0  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x4efc0u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 04efc3  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x4efc3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04efc6  lea eax, [eax + eax*2]
    X86_AT(c, 0x4efc6u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 04efc9  lea edx, [eax + eax*8]
    X86_AT(c, 0x4efc9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 8);
    // 04efcc  lea edx, [eax + edx*2]
    X86_AT(c, 0x4efccu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 04efcf  mov dword ptr [edx + 0x34a0d], edi
    X86_AT(c, 0x4efcfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x34A0Du)), c.r[7]);
    // 04efd5  push edi
    X86_AT(c, 0x4efd5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04efd6  call 0x4d234
    X86_AT(c, 0x4efd6u);
    push32(c, 0x4efdbu); x86_call_known(c, 0x4d234u, f_0004d234); X86_RET(c, 0x4efdbu);
    X86_TICK(c, 22);
    // 04efdb  add esp, 4
    X86_AT(c, 0x4efdbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 04efde  pop edi
    X86_AT(c, 0x4efdeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04efdf  leave 
    X86_AT(c, 0x4efdfu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04efe0  ret 
    X86_AT(c, 0x4efe0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4efbcu, "ran off the end of a function");
}
void f_0004f094(X86Cpu& c) {
    X86_TICK(c, 18);
    // 04f094  push ebp
    X86_AT(c, 0x4f094u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04f095  mov ebp, esp
    X86_AT(c, 0x4f095u);
    c.r[5] = c.r[4];
    // 04f097  push dword ptr [ebp + 8]
    X86_AT(c, 0x4f097u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 04f09a  push 0x342dc
    X86_AT(c, 0x4f09au);
    { uint32_t v = 0x342DCu; push32(c, v); }
    // 04f09f  call 0x334
    X86_AT(c, 0x4f09fu);
    push32(c, 0x4f0a4u); x86_call_known(c, 0x334u, f_00000334); X86_RET(c, 0x4f0a4u);
    X86_TICK(c, 16);
    // 04f0a4  leave 
    X86_AT(c, 0x4f0a4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04f0a5  ret 
    X86_AT(c, 0x4f0a5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4f094u, "ran off the end of a function");
}
void f_0004f0dc(X86Cpu& c) {
    X86_TICK(c, 13);
    // 04f0dc  push ebp
    X86_AT(c, 0x4f0dcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04f0dd  mov ebp, esp
    X86_AT(c, 0x4f0ddu);
    c.r[5] = c.r[4];
    // 04f0df  push 2
    X86_AT(c, 0x4f0dfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 04f0e1  call 0x4e420
    X86_AT(c, 0x4f0e1u);
    push32(c, 0x4f0e6u); x86_call_known(c, 0x4e420u, f_0004e420); X86_RET(c, 0x4f0e6u);
    X86_TICK(c, 9);
    // 04f0e6  push 2
    X86_AT(c, 0x4f0e6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 04f0e8  call 0x4e74c
    X86_AT(c, 0x4f0e8u);
    push32(c, 0x4f0edu); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x4f0edu);
    X86_TICK(c, 14);
    // 04f0ed  push dword ptr [ebp + 8]
    X86_AT(c, 0x4f0edu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 04f0f0  push 2
    X86_AT(c, 0x4f0f0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 04f0f2  call 0x4e794
    X86_AT(c, 0x4f0f2u);
    push32(c, 0x4f0f7u); x86_call_known(c, 0x4e794u, f_0004e794); X86_RET(c, 0x4f0f7u);
    X86_TICK(c, 16);
    // 04f0f7  leave 
    X86_AT(c, 0x4f0f7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04f0f8  ret 
    X86_AT(c, 0x4f0f8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4f0dcu, "ran off the end of a function");
}
void f_0004fc54(X86Cpu& c) {
    X86_TICK(c, 22);
    // 04fc54  push ebp
    X86_AT(c, 0x4fc54u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04fc55  mov ebp, esp
    X86_AT(c, 0x4fc55u);
    c.r[5] = c.r[4];
    // 04fc57  push 0xffffffff
    X86_AT(c, 0x4fc57u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 04fc59  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x4fc59u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04fc5c  push dword ptr [eax*4 + 0x4a048]
    X86_AT(c, 0x4fc5cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0x4A048u))); push32(c, v); }
    // 04fc63  call 0x4c004
    X86_AT(c, 0x4fc63u);
    push32(c, 0x4fc68u); x86_call_known(c, 0x4c004u, f_0004c004); X86_RET(c, 0x4fc68u);
    X86_TICK(c, 16);
    // 04fc68  leave 
    X86_AT(c, 0x4fc68u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04fc69  ret 
    X86_AT(c, 0x4fc69u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4fc54u, "ran off the end of a function");
}
void f_0004fc6c(X86Cpu& c) {
    X86_TICK(c, 20);
    // 04fc6c  push ebp
    X86_AT(c, 0x4fc6cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04fc6d  mov ebp, esp
    X86_AT(c, 0x4fc6du);
    c.r[5] = c.r[4];
    // 04fc6f  push ebx
    X86_AT(c, 0x4fc6fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04fc70  push esi
    X86_AT(c, 0x4fc70u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04fc71  push edi
    X86_AT(c, 0x4fc71u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04fc72  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x4fc72u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04fc75  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x4fc75u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 04fc78  sub ebx, ebx
    X86_AT(c, 0x4fc78u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_4fc7a:
    X86_TICK(c, 12);
    // 04fc7a  cmp byte ptr [ebx*2 + 0x4a08a], 0
    X86_AT(c, 0x4fc7au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] * 2 + 0x4A08Au))), 0x0u, 0, 1);
    // 04fc82  je 0x4fcc8
    X86_AT(c, 0x4fc82u);
    if (x86_cc(c, 4)) { goto L_4fcc8; }
L_4fc84:
    X86_TICK(c, 11);
    // 04fc84  mov al, byte ptr [ebx*2 + 0x4a08a]
    X86_AT(c, 0x4fc84u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] * 2 + 0x4A08Au))));
    // 04fc8b  and al, al
    X86_AT(c, 0x4fc8bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 04fc8d  je 0x4fcc3
    X86_AT(c, 0x4fc8du);
    if (x86_cc(c, 4)) { goto L_4fcc3; }
    X86_TICK(c, 44);
    // 04fc8f  movzx edx, byte ptr [ebx*2 + 0x4a08b]
    X86_AT(c, 0x4fc8fu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[3] * 2 + 0x4A08Bu)));
    // 04fc97  add edx, esi
    X86_AT(c, 0x4fc97u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[6], 0, 4); }
    // 04fc99  push edx
    X86_AT(c, 0x4fc99u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 04fc9a  movzx eax, al
    X86_AT(c, 0x4fc9au);
    c.r[0] = g8(c, 0);
    // 04fc9d  add eax, edi
    X86_AT(c, 0x4fc9du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 04fc9f  push eax
    X86_AT(c, 0x4fc9fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04fca0  movzx eax, byte ptr [ebx*2 + 0x4a089]
    X86_AT(c, 0x4fca0u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[3] * 2 + 0x4A089u)));
    // 04fca8  lea edx, [esi + eax*1]
    X86_AT(c, 0x4fca8u);
    c.r[2] = (uint32_t)(c.r[6] + c.r[0]);
    // 04fcab  push edx
    X86_AT(c, 0x4fcabu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 04fcac  movzx eax, byte ptr [ebx*2 + 0x4a088]
    X86_AT(c, 0x4fcacu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[3] * 2 + 0x4A088u)));
    // 04fcb4  lea edx, [edi + eax*1]
    X86_AT(c, 0x4fcb4u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 04fcb7  push edx
    X86_AT(c, 0x4fcb7u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 04fcb8  call 0x4d7ac
    X86_AT(c, 0x4fcb8u);
    push32(c, 0x4fcbdu); x86_call_known(c, 0x4d7acu, f_0004d7ac); X86_RET(c, 0x4fcbdu);
    X86_TICK(c, 11);
    // 04fcbd  inc ebx
    X86_AT(c, 0x4fcbdu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 04fcbe  add esp, 0x10
    X86_AT(c, 0x4fcbeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 04fcc1  jmp 0x4fc84
    X86_AT(c, 0x4fcc1u);
    X86_POLL(c, 0x4fc84u); goto L_4fc84;
L_4fcc3:
    X86_TICK(c, 9);
    // 04fcc3  add ebx, 2
    X86_AT(c, 0x4fcc3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x2u, 0, 4); }
    // 04fcc6  jmp 0x4fc7a
    X86_AT(c, 0x4fcc6u);
    X86_POLL(c, 0x4fc7au); goto L_4fc7a;
L_4fcc8:
    X86_TICK(c, 28);
    // 04fcc8  pop edi
    X86_AT(c, 0x4fcc8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04fcc9  pop esi
    X86_AT(c, 0x4fcc9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 04fcca  pop ebx
    X86_AT(c, 0x4fccau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 04fccb  leave 
    X86_AT(c, 0x4fccbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04fccc  ret 
    X86_AT(c, 0x4fcccu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4fc6cu, "ran off the end of a function");
}
void f_0004fcd0(X86Cpu& c) {
    X86_TICK(c, 12);
    // 04fcd0  push ebp
    X86_AT(c, 0x4fcd0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04fcd1  mov ebp, esp
    X86_AT(c, 0x4fcd1u);
    c.r[5] = c.r[4];
    // 04fcd3  push edi
    X86_AT(c, 0x4fcd3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04fcd4  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x4fcd4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04fcd7  sub ecx, ecx
    X86_AT(c, 0x4fcd7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_4fcd9:
    X86_TICK(c, 21);
    // 04fcd9  mov eax, edi
    X86_AT(c, 0x4fcd9u);
    c.r[0] = c.r[7];
    // 04fcdb  mov edx, eax
    X86_AT(c, 0x4fcdbu);
    c.r[2] = c.r[0];
    // 04fcdd  shl edx, 5
    X86_AT(c, 0x4fcddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 04fce0  sub edx, eax
    X86_AT(c, 0x4fce0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 04fce2  lea edx, [eax + edx*4]
    X86_AT(c, 0x4fce2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 04fce5  shl edx, 8
    X86_AT(c, 0x4fce5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 04fce8  cmp edx, ecx
    X86_AT(c, 0x4fce8u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 04fcea  jle 0x4fcef
    X86_AT(c, 0x4fceau);
    if (x86_cc(c, 14)) { goto L_4fcef; }
    X86_TICK(c, 9);
    // 04fcec  inc ecx
    X86_AT(c, 0x4fcecu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 04fced  jmp 0x4fcd9
    X86_AT(c, 0x4fcedu);
    X86_POLL(c, 0x4fcd9u); goto L_4fcd9;
L_4fcef:
    X86_TICK(c, 20);
    // 04fcef  pop edi
    X86_AT(c, 0x4fcefu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04fcf0  leave 
    X86_AT(c, 0x4fcf0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04fcf1  ret 
    X86_AT(c, 0x4fcf1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4fcd0u, "ran off the end of a function");
}
void f_0004fcf4(X86Cpu& c) {
    X86_TICK(c, 23);
    // 04fcf4  push ebp
    X86_AT(c, 0x4fcf4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04fcf5  mov ebp, esp
    X86_AT(c, 0x4fcf5u);
    c.r[5] = c.r[4];
    // 04fcf7  push edi
    X86_AT(c, 0x4fcf7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04fcf8  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x4fcf8u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 04fcfb  push 0
    X86_AT(c, 0x4fcfbu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04fcfd  push 0
    X86_AT(c, 0x4fcfdu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04fcff  push 0x1288
    X86_AT(c, 0x4fcffu);
    { uint32_t v = 0x1288u; push32(c, v); }
    // 04fd04  call 0x4e034
    X86_AT(c, 0x4fd04u);
    push32(c, 0x4fd09u); x86_call_known(c, 0x4e034u, f_0004e034); X86_RET(c, 0x4fd09u);
    X86_TICK(c, 9);
    // 04fd09  push 0xe
    X86_AT(c, 0x4fd09u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 04fd0b  call 0x4d234
    X86_AT(c, 0x4fd0bu);
    push32(c, 0x4fd10u); x86_call_known(c, 0x4d234u, f_0004d234); X86_RET(c, 0x4fd10u);
    X86_TICK(c, 9);
    // 04fd10  push 0xb
    X86_AT(c, 0x4fd10u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 04fd12  call 0x4d24c
    X86_AT(c, 0x4fd12u);
    push32(c, 0x4fd17u); x86_call_known(c, 0x4d24cu, f_0004d24c); X86_RET(c, 0x4fd17u);
    X86_TICK(c, 9);
    // 04fd17  push 1
    X86_AT(c, 0x4fd17u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04fd19  call 0x4d2fc
    X86_AT(c, 0x4fd19u);
    push32(c, 0x4fd1eu); x86_call_known(c, 0x4d2fcu, f_0004d2fc); X86_RET(c, 0x4fd1eu);
    X86_TICK(c, 24);
    // 04fd1e  push edi
    X86_AT(c, 0x4fd1eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04fd1f  push 0x13
    X86_AT(c, 0x4fd1fu);
    { uint32_t v = 0x13u; push32(c, v); }
    // 04fd21  mov edx, 0xffffffff
    X86_AT(c, 0x4fd21u);
    c.r[2] = 0xFFFFFFFFu;
    // 04fd26  sub eax, eax
    X86_AT(c, 0x4fd26u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 04fd28  push edi
    X86_AT(c, 0x4fd28u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 04fd29  mov ecx, edx
    X86_AT(c, 0x4fd29u);
    c.r[1] = c.r[2];
    // 04fd2b  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x4fd2bu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 04fd2d  jne 0x4fd32
    X86_AT(c, 0x4fd2du);
    if (x86_cc(c, 5)) { goto L_4fd32; }
    X86_TICK(c, 4);
    // 04fd2f  inc ecx
    X86_AT(c, 0x4fd2fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 04fd30  sub edx, ecx
    X86_AT(c, 0x4fd30u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_4fd32:
    X86_TICK(c, 27);
    // 04fd32  pop edi
    X86_AT(c, 0x4fd32u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04fd33  shl edx, 3
    X86_AT(c, 0x4fd33u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 04fd36  mov eax, 0x280
    X86_AT(c, 0x4fd36u);
    c.r[0] = 0x280u;
    // 04fd3b  sub eax, edx
    X86_AT(c, 0x4fd3bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 04fd3d  cdq 
    X86_AT(c, 0x4fd3du);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 04fd3e  sub eax, edx
    X86_AT(c, 0x4fd3eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 04fd40  sar eax, 1
    X86_AT(c, 0x4fd40u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 04fd42  push eax
    X86_AT(c, 0x4fd42u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04fd43  call 0x4e56c
    X86_AT(c, 0x4fd43u);
    push32(c, 0x4fd48u); x86_call_known(c, 0x4e56cu, f_0004e56c); X86_RET(c, 0x4fd48u);
    X86_TICK(c, 9);
    // 04fd48  push 0
    X86_AT(c, 0x4fd48u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04fd4a  call 0x4d2fc
    X86_AT(c, 0x4fd4au);
    push32(c, 0x4fd4fu); x86_call_known(c, 0x4d2fcu, f_0004d2fc); X86_RET(c, 0x4fd4fu);
    X86_TICK(c, 22);
    // 04fd4f  add esp, 0x28
    X86_AT(c, 0x4fd4fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 04fd52  pop edi
    X86_AT(c, 0x4fd52u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 04fd53  leave 
    X86_AT(c, 0x4fd53u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04fd54  ret 
    X86_AT(c, 0x4fd54u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4fcf4u, "ran off the end of a function");
}
void f_0004fd58(X86Cpu& c) {
    X86_TICK(c, 17);
    // 04fd58  push 0xd
    X86_AT(c, 0x4fd58u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 04fd5a  push 0x190
    X86_AT(c, 0x4fd5au);
    { uint32_t v = 0x190u; push32(c, v); }
    // 04fd5f  push 0x280
    X86_AT(c, 0x4fd5fu);
    { uint32_t v = 0x280u; push32(c, v); }
    // 04fd64  push 0x18
    X86_AT(c, 0x4fd64u);
    { uint32_t v = 0x18u; push32(c, v); }
    // 04fd66  push 0
    X86_AT(c, 0x4fd66u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04fd68  call 0x4d9a8
    X86_AT(c, 0x4fd68u);
    push32(c, 0x4fd6du); x86_call_known(c, 0x4d9a8u, f_0004d9a8); X86_RET(c, 0x4fd6du);
    X86_TICK(c, 12);
    // 04fd6d  add esp, 0x14
    X86_AT(c, 0x4fd6du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 04fd70  ret 
    X86_AT(c, 0x4fd70u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4fd58u, "ran off the end of a function");
}
void f_0004fd74(X86Cpu& c) {
    X86_TICK(c, 38);
    // 04fd74  push ebp
    X86_AT(c, 0x4fd74u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04fd75  mov ebp, esp
    X86_AT(c, 0x4fd75u);
    c.r[5] = c.r[4];
    // 04fd77  sub esp, 0xc
    X86_AT(c, 0x4fd77u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 04fd7a  push ebx
    X86_AT(c, 0x4fd7au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04fd7b  push esi
    X86_AT(c, 0x4fd7bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04fd7c  lea eax, [ebp - 0xc]
    X86_AT(c, 0x4fd7cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 04fd7f  push eax
    X86_AT(c, 0x4fd7fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04fd80  lea ebx, [ebp - 8]
    X86_AT(c, 0x4fd80u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 04fd83  push ebx
    X86_AT(c, 0x4fd83u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04fd84  lea esi, [ebp - 4]
    X86_AT(c, 0x4fd84u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 04fd87  push esi
    X86_AT(c, 0x4fd87u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 04fd88  push 0x15000
    X86_AT(c, 0x4fd88u);
    { uint32_t v = 0x15000u; push32(c, v); }
    // 04fd8d  push 0x35048
    X86_AT(c, 0x4fd8du);
    { uint32_t v = 0x35048u; push32(c, v); }
    // 04fd92  push dword ptr [ebp + 8]
    X86_AT(c, 0x4fd92u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 04fd95  call 0x4df38
    X86_AT(c, 0x4fd95u);
    push32(c, 0x4fd9au); x86_call_known(c, 0x4df38u, f_0004df38); X86_RET(c, 0x4fd9au);
    X86_TICK(c, 9);
    // 04fd9a  push 0
    X86_AT(c, 0x4fd9au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04fd9c  call 0x4d3cc
    X86_AT(c, 0x4fd9cu);
    push32(c, 0x4fda1u); x86_call_known(c, 0x4d3ccu, f_0004d3cc); X86_RET(c, 0x4fda1u);
    X86_TICK(c, 9);
    // 04fda1  push 1
    X86_AT(c, 0x4fda1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04fda3  call 0x4d3b8
    X86_AT(c, 0x4fda3u);
    push32(c, 0x4fda8u); x86_call_known(c, 0x4d3b8u, f_0004d3b8); X86_RET(c, 0x4fda8u);
    X86_TICK(c, 32);
    // 04fda8  mov eax, dword ptr [ebx]
    X86_AT(c, 0x4fda8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 04fdaa  sub eax, 2
    X86_AT(c, 0x4fdaau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 04fdad  push eax
    X86_AT(c, 0x4fdadu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04fdae  push dword ptr [esi]
    X86_AT(c, 0x4fdaeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 04fdb0  push dword ptr [ebp + 0x10]
    X86_AT(c, 0x4fdb0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 04fdb3  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x4fdb3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 04fdb6  push 0x35048
    X86_AT(c, 0x4fdb6u);
    { uint32_t v = 0x35048u; push32(c, v); }
    // 04fdbb  call 0x4dd60
    X86_AT(c, 0x4fdbbu);
    push32(c, 0x4fdc0u); x86_call_known(c, 0x4dd60u, f_0004dd60); X86_RET(c, 0x4fdc0u);
    X86_TICK(c, 9);
    // 04fdc0  push 0
    X86_AT(c, 0x4fdc0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04fdc2  call 0x4d3b8
    X86_AT(c, 0x4fdc2u);
    push32(c, 0x4fdc7u); x86_call_known(c, 0x4d3b8u, f_0004d3b8); X86_RET(c, 0x4fdc7u);
    X86_TICK(c, 7);
    // 04fdc7  call 0x4d17c
    X86_AT(c, 0x4fdc7u);
    push32(c, 0x4fdccu); x86_call_known(c, 0x4d17cu, f_0004d17c); X86_RET(c, 0x4fdccu);
    X86_TICK(c, 26);
    // 04fdcc  add esp, 0x38
    X86_AT(c, 0x4fdccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 04fdcf  pop esi
    X86_AT(c, 0x4fdcfu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 04fdd0  pop ebx
    X86_AT(c, 0x4fdd0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 04fdd1  leave 
    X86_AT(c, 0x4fdd1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 04fdd2  ret 
    X86_AT(c, 0x4fdd2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4fd74u, "ran off the end of a function");
}
void f_0004fdd4(X86Cpu& c) {
    X86_TICK(c, 7);
    // 04fdd4  call 0x4d67c
    X86_AT(c, 0x4fdd4u);
    push32(c, 0x4fdd9u); x86_call_known(c, 0x4d67cu, f_0004d67c); X86_RET(c, 0x4fdd9u);
    X86_TICK(c, 9);
    // 04fdd9  push 3
    X86_AT(c, 0x4fdd9u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 04fddb  call 0x4d3cc
    X86_AT(c, 0x4fddbu);
    push32(c, 0x4fde0u); x86_call_known(c, 0x4d3ccu, f_0004d3cc); X86_RET(c, 0x4fde0u);
    X86_TICK(c, 9);
    // 04fde0  push 0
    X86_AT(c, 0x4fde0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04fde2  call 0x4d580
    X86_AT(c, 0x4fde2u);
    push32(c, 0x4fde7u); x86_call_known(c, 0x4d580u, f_0004d580); X86_RET(c, 0x4fde7u);
    X86_TICK(c, 9);
    // 04fde7  push 1
    X86_AT(c, 0x4fde7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04fde9  call 0x4d3f0
    X86_AT(c, 0x4fde9u);
    push32(c, 0x4fdeeu); x86_call_known(c, 0x4d3f0u, f_0004d3f0); X86_RET(c, 0x4fdeeu);
    X86_TICK(c, 9);
    // 04fdee  push 0
    X86_AT(c, 0x4fdeeu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04fdf0  call 0x4d3b8
    X86_AT(c, 0x4fdf0u);
    push32(c, 0x4fdf5u); x86_call_known(c, 0x4d3b8u, f_0004d3b8); X86_RET(c, 0x4fdf5u);
    X86_TICK(c, 7);
    // 04fdf5  call 0x4d17c
    X86_AT(c, 0x4fdf5u);
    push32(c, 0x4fdfau); x86_call_known(c, 0x4d17cu, f_0004d17c); X86_RET(c, 0x4fdfau);
    X86_TICK(c, 9);
    // 04fdfa  push 0x129c
    X86_AT(c, 0x4fdfau);
    { uint32_t v = 0x129Cu; push32(c, v); }
    // 04fdff  call 0x4fcf4
    X86_AT(c, 0x4fdffu);
    push32(c, 0x4fe04u); x86_call_known(c, 0x4fcf4u, f_0004fcf4); X86_RET(c, 0x4fe04u);
    X86_TICK(c, 7);
    // 04fe04  call 0x4fd58
    X86_AT(c, 0x4fe04u);
    push32(c, 0x4fe09u); x86_call_known(c, 0x4fd58u, f_0004fd58); X86_RET(c, 0x4fe09u);
    X86_TICK(c, 9);
    // 04fe09  push 2
    X86_AT(c, 0x4fe09u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 04fe0b  call 0x4d3cc
    X86_AT(c, 0x4fe0bu);
    push32(c, 0x4fe10u); x86_call_known(c, 0x4d3ccu, f_0004d3cc); X86_RET(c, 0x4fe10u);
    X86_TICK(c, 7);
    // 04fe10  call 0x4ce14
    X86_AT(c, 0x4fe10u);
    push32(c, 0x4fe15u); x86_call_known(c, 0x4ce14u, f_0004ce14); X86_RET(c, 0x4fe15u);
    X86_TICK(c, 7);
    // 04fe15  call 0x4bc34
    X86_AT(c, 0x4fe15u);
    push32(c, 0x4fe1au); x86_call_known(c, 0x4bc34u, f_0004bc34); X86_RET(c, 0x4fe1au);
    X86_TICK(c, 14);
    // 04fe1a  sub eax, eax
    X86_AT(c, 0x4fe1au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 04fe1c  add esp, 0x18
    X86_AT(c, 0x4fe1cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 04fe1f  ret 
    X86_AT(c, 0x4fe1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4fdd4u, "ran off the end of a function");
}
void f_0004fe20(X86Cpu& c) {
    X86_TICK(c, 9);
    // 04fe20  push 2
    X86_AT(c, 0x4fe20u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 04fe22  call 0x4d3cc
    X86_AT(c, 0x4fe22u);
    push32(c, 0x4fe27u); x86_call_known(c, 0x4d3ccu, f_0004d3cc); X86_RET(c, 0x4fe27u);
    X86_TICK(c, 7);
    // 04fe27  call 0x4d67c
    X86_AT(c, 0x4fe27u);
    push32(c, 0x4fe2cu); x86_call_known(c, 0x4d67cu, f_0004d67c); X86_RET(c, 0x4fe2cu);
    X86_TICK(c, 7);
    // 04fe2c  call 0x4c2b4
    X86_AT(c, 0x4fe2cu);
    push32(c, 0x4fe31u); x86_call_known(c, 0x4c2b4u, f_0004c2b4); X86_RET(c, 0x4fe31u);
    X86_TICK(c, 7);
    // 04fe31  call 0x4ce9c
    X86_AT(c, 0x4fe31u);
    push32(c, 0x4fe36u); x86_call_known(c, 0x4ce9cu, f_0004ce9c); X86_RET(c, 0x4fe36u);
    X86_TICK(c, 12);
    // 04fe36  add esp, 4
    X86_AT(c, 0x4fe36u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 04fe39  ret 
    X86_AT(c, 0x4fe39u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4fe20u, "ran off the end of a function");
}
void f_0004fe3c(X86Cpu& c) {
    X86_TICK(c, 17);
    // 04fe3c  push ebp
    X86_AT(c, 0x4fe3cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 04fe3d  mov ebp, esp
    X86_AT(c, 0x4fe3du);
    c.r[5] = c.r[4];
    // 04fe3f  push eax
    X86_AT(c, 0x4fe3fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 04fe40  push ebx
    X86_AT(c, 0x4fe40u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 04fe41  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x4fe41u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 04fe48  call 0x4fdd4
    X86_AT(c, 0x4fe48u);
    push32(c, 0x4fe4du); x86_call_known(c, 0x4fdd4u, f_0004fdd4); X86_RET(c, 0x4fe4du);
    X86_TICK(c, 13);
    // 04fe4d  push 0x20
    X86_AT(c, 0x4fe4du);
    { uint32_t v = 0x20u; push32(c, v); }
    // 04fe4f  push 0xc
    X86_AT(c, 0x4fe4fu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 04fe51  push 0x12b4
    X86_AT(c, 0x4fe51u);
    { uint32_t v = 0x12B4u; push32(c, v); }
    // 04fe56  call 0x4fd74
    X86_AT(c, 0x4fe56u);
    push32(c, 0x4fe5bu); x86_call_known(c, 0x4fd74u, f_0004fd74); X86_RET(c, 0x4fe5bu);
    X86_TICK(c, 27);
    // 04fe5b  push 0xa
    X86_AT(c, 0x4fe5bu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 04fe5d  push 0xf
    X86_AT(c, 0x4fe5du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 04fe5f  push 0xf
    X86_AT(c, 0x4fe5fu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 04fe61  push 0x17
    X86_AT(c, 0x4fe61u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 04fe63  push 0x21
    X86_AT(c, 0x4fe63u);
    { uint32_t v = 0x21u; push32(c, v); }
    // 04fe65  push 0x188
    X86_AT(c, 0x4fe65u);
    { uint32_t v = 0x188u; push32(c, v); }
    // 04fe6a  push 0x108
    X86_AT(c, 0x4fe6au);
    { uint32_t v = 0x108u; push32(c, v); }
    // 04fe6f  push 0x1d
    X86_AT(c, 0x4fe6fu);
    { uint32_t v = 0x1Du; push32(c, v); }
    // 04fe71  push 0x16f
    X86_AT(c, 0x4fe71u);
    { uint32_t v = 0x16Fu; push32(c, v); }
    // 04fe76  push 0
    X86_AT(c, 0x4fe76u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04fe78  call 0x4e33c
    X86_AT(c, 0x4fe78u);
    push32(c, 0x4fe7du); x86_call_known(c, 0x4e33cu, f_0004e33c); X86_RET(c, 0x4fe7du);
    X86_TICK(c, 9);
    // 04fe7d  push 0x12c8
    X86_AT(c, 0x4fe7du);
    { uint32_t v = 0x12C8u; push32(c, v); }
    // 04fe82  call 0x4fcf4
    X86_AT(c, 0x4fe82u);
    push32(c, 0x4fe87u); x86_call_known(c, 0x4fcf4u, f_0004fcf4); X86_RET(c, 0x4fe87u);
    X86_TICK(c, 9);
    // 04fe87  push 0
    X86_AT(c, 0x4fe87u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04fe89  call 0x4e480
    X86_AT(c, 0x4fe89u);
    push32(c, 0x4fe8eu); x86_call_known(c, 0x4e480u, f_0004e480); X86_RET(c, 0x4fe8eu);
    X86_TICK(c, 11);
    // 04fe8e  add esp, 0x3c
    X86_AT(c, 0x4fe8eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 04fe91  push 0
    X86_AT(c, 0x4fe91u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04fe93  call 0x4e420
    X86_AT(c, 0x4fe93u);
    push32(c, 0x4fe98u); x86_call_known(c, 0x4e420u, f_0004e420); X86_RET(c, 0x4fe98u);
    X86_TICK(c, 9);
    // 04fe98  push 2
    X86_AT(c, 0x4fe98u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 04fe9a  call 0x4d3cc
    X86_AT(c, 0x4fe9au);
    push32(c, 0x4fe9fu); x86_call_known(c, 0x4d3ccu, f_0004d3cc); X86_RET(c, 0x4fe9fu);
    X86_TICK(c, 9);
    // 04fe9f  push 0
    X86_AT(c, 0x4fe9fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04fea1  call 0x4e74c
    X86_AT(c, 0x4fea1u);
    push32(c, 0x4fea6u); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x4fea6u);
    X86_TICK(c, 9);
    // 04fea6  push 1
    X86_AT(c, 0x4fea6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 04fea8  call 0x4fc54
    X86_AT(c, 0x4fea8u);
    push32(c, 0x4feadu); x86_call_known(c, 0x4fc54u, f_0004fc54); X86_RET(c, 0x4feadu);
    X86_TICK(c, 9);
    // 04fead  push 0xa
    X86_AT(c, 0x4feadu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 04feaf  call 0x4fcd0
    X86_AT(c, 0x4feafu);
    push32(c, 0x4feb4u); x86_call_known(c, 0x4fcd0u, f_0004fcd0); X86_RET(c, 0x4feb4u);
    X86_TICK(c, 11);
    // 04feb4  push 0xe
    X86_AT(c, 0x4feb4u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 04feb6  push 0
    X86_AT(c, 0x4feb6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04feb8  call 0x4efbc
    X86_AT(c, 0x4feb8u);
    push32(c, 0x4febdu); x86_call_known(c, 0x4efbcu, f_0004efbc); X86_RET(c, 0x4febdu);
    X86_TICK(c, 11);
    // 04febd  push 0x12e4
    X86_AT(c, 0x4febdu);
    { uint32_t v = 0x12E4u; push32(c, v); }
    // 04fec2  push 0
    X86_AT(c, 0x4fec2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04fec4  call 0x4e794
    X86_AT(c, 0x4fec4u);
    push32(c, 0x4fec9u); x86_call_known(c, 0x4e794u, f_0004e794); X86_RET(c, 0x4fec9u);
    X86_TICK(c, 11);
    // 04fec9  push 0x1308
    X86_AT(c, 0x4fec9u);
    { uint32_t v = 0x1308u; push32(c, v); }
    // 04fece  push 0
    X86_AT(c, 0x4feceu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04fed0  call 0x4e794
    X86_AT(c, 0x4fed0u);
    push32(c, 0x4fed5u); x86_call_known(c, 0x4e794u, f_0004e794); X86_RET(c, 0x4fed5u);
    X86_TICK(c, 11);
    // 04fed5  push 0xf
    X86_AT(c, 0x4fed5u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 04fed7  push 0
    X86_AT(c, 0x4fed7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04fed9  call 0x4efbc
    X86_AT(c, 0x4fed9u);
    push32(c, 0x4fedeu); x86_call_known(c, 0x4efbcu, f_0004efbc); X86_RET(c, 0x4fedeu);
    X86_TICK(c, 9);
    // 04fede  push 0x28
    X86_AT(c, 0x4fedeu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 04fee0  call 0x4fcd0
    X86_AT(c, 0x4fee0u);
    push32(c, 0x4fee5u); x86_call_known(c, 0x4fcd0u, f_0004fcd0); X86_RET(c, 0x4fee5u);
    X86_TICK(c, 9);
    // 04fee5  push 0
    X86_AT(c, 0x4fee5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04fee7  call 0x4e74c
    X86_AT(c, 0x4fee7u);
    push32(c, 0x4feecu); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x4feecu);
    X86_TICK(c, 11);
    // 04feec  add esp, 0x3c
    X86_AT(c, 0x4feecu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 04feef  push 0
    X86_AT(c, 0x4feefu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04fef1  call 0x4e74c
    X86_AT(c, 0x4fef1u);
    push32(c, 0x4fef6u); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x4fef6u);
    X86_TICK(c, 11);
    // 04fef6  push 0x1328
    X86_AT(c, 0x4fef6u);
    { uint32_t v = 0x1328u; push32(c, v); }
    // 04fefb  push 0
    X86_AT(c, 0x4fefbu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04fefd  call 0x4e794
    X86_AT(c, 0x4fefdu);
    push32(c, 0x4ff02u); x86_call_known(c, 0x4e794u, f_0004e794); X86_RET(c, 0x4ff02u);
    X86_TICK(c, 9);
    // 04ff02  push 0x28
    X86_AT(c, 0x4ff02u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 04ff04  call 0x4fcd0
    X86_AT(c, 0x4ff04u);
    push32(c, 0x4ff09u); x86_call_known(c, 0x4fcd0u, f_0004fcd0); X86_RET(c, 0x4ff09u);
    X86_TICK(c, 9);
    // 04ff09  push 0
    X86_AT(c, 0x4ff09u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04ff0b  call 0x4e74c
    X86_AT(c, 0x4ff0bu);
    push32(c, 0x4ff10u); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x4ff10u);
    X86_TICK(c, 9);
    // 04ff10  push 0
    X86_AT(c, 0x4ff10u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04ff12  call 0x4e74c
    X86_AT(c, 0x4ff12u);
    push32(c, 0x4ff17u); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x4ff17u);
    X86_TICK(c, 11);
    // 04ff17  push 0x1378
    X86_AT(c, 0x4ff17u);
    { uint32_t v = 0x1378u; push32(c, v); }
    // 04ff1c  push 0
    X86_AT(c, 0x4ff1cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04ff1e  call 0x4e794
    X86_AT(c, 0x4ff1eu);
    push32(c, 0x4ff23u); x86_call_known(c, 0x4e794u, f_0004e794); X86_RET(c, 0x4ff23u);
    X86_TICK(c, 9);
    // 04ff23  push 0xa
    X86_AT(c, 0x4ff23u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 04ff25  call 0x4fcd0
    X86_AT(c, 0x4ff25u);
    push32(c, 0x4ff2au); x86_call_known(c, 0x4fcd0u, f_0004fcd0); X86_RET(c, 0x4ff2au);
    X86_TICK(c, 11);
    // 04ff2a  push 0x13e8
    X86_AT(c, 0x4ff2au);
    { uint32_t v = 0x13E8u; push32(c, v); }
    // 04ff2f  push 0
    X86_AT(c, 0x4ff2fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04ff31  call 0x4e794
    X86_AT(c, 0x4ff31u);
    push32(c, 0x4ff36u); x86_call_known(c, 0x4e794u, f_0004e794); X86_RET(c, 0x4ff36u);
    X86_TICK(c, 9);
    // 04ff36  push 0x1e
    X86_AT(c, 0x4ff36u);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 04ff38  call 0x4fcd0
    X86_AT(c, 0x4ff38u);
    push32(c, 0x4ff3du); x86_call_known(c, 0x4fcd0u, f_0004fcd0); X86_RET(c, 0x4ff3du);
    X86_TICK(c, 9);
    // 04ff3d  push 0
    X86_AT(c, 0x4ff3du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04ff3f  call 0x4e74c
    X86_AT(c, 0x4ff3fu);
    push32(c, 0x4ff44u); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x4ff44u);
    X86_TICK(c, 9);
    // 04ff44  push 0
    X86_AT(c, 0x4ff44u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04ff46  call 0x4e74c
    X86_AT(c, 0x4ff46u);
    push32(c, 0x4ff4bu); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x4ff4bu);
    X86_TICK(c, 11);
    // 04ff4b  push 0x1454
    X86_AT(c, 0x4ff4bu);
    { uint32_t v = 0x1454u; push32(c, v); }
    // 04ff50  push 0
    X86_AT(c, 0x4ff50u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04ff52  call 0x4e794
    X86_AT(c, 0x4ff52u);
    push32(c, 0x4ff57u); x86_call_known(c, 0x4e794u, f_0004e794); X86_RET(c, 0x4ff57u);
    X86_TICK(c, 11);
    // 04ff57  add esp, 0x40
    X86_AT(c, 0x4ff57u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 04ff5a  push 0x1e
    X86_AT(c, 0x4ff5au);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 04ff5c  call 0x4fcd0
    X86_AT(c, 0x4ff5cu);
    push32(c, 0x4ff61u); x86_call_known(c, 0x4fcd0u, f_0004fcd0); X86_RET(c, 0x4ff61u);
    X86_TICK(c, 11);
    // 04ff61  push 0x14a8
    X86_AT(c, 0x4ff61u);
    { uint32_t v = 0x14A8u; push32(c, v); }
    // 04ff66  push 0
    X86_AT(c, 0x4ff66u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04ff68  call 0x4e794
    X86_AT(c, 0x4ff68u);
    push32(c, 0x4ff6du); x86_call_known(c, 0x4e794u, f_0004e794); X86_RET(c, 0x4ff6du);
    X86_TICK(c, 9);
    // 04ff6d  push 0x1e
    X86_AT(c, 0x4ff6du);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 04ff6f  call 0x4fcd0
    X86_AT(c, 0x4ff6fu);
    push32(c, 0x4ff74u); x86_call_known(c, 0x4fcd0u, f_0004fcd0); X86_RET(c, 0x4ff74u);
    X86_TICK(c, 9);
    // 04ff74  push 0
    X86_AT(c, 0x4ff74u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04ff76  call 0x4e74c
    X86_AT(c, 0x4ff76u);
    push32(c, 0x4ff7bu); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x4ff7bu);
    X86_TICK(c, 9);
    // 04ff7b  push 0
    X86_AT(c, 0x4ff7bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04ff7d  call 0x4e74c
    X86_AT(c, 0x4ff7du);
    push32(c, 0x4ff82u); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x4ff82u);
    X86_TICK(c, 11);
    // 04ff82  push 0x150c
    X86_AT(c, 0x4ff82u);
    { uint32_t v = 0x150Cu; push32(c, v); }
    // 04ff87  push 0
    X86_AT(c, 0x4ff87u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04ff89  call 0x4e794
    X86_AT(c, 0x4ff89u);
    push32(c, 0x4ff8eu); x86_call_known(c, 0x4e794u, f_0004e794); X86_RET(c, 0x4ff8eu);
    X86_TICK(c, 11);
    // 04ff8e  push 0xb
    X86_AT(c, 0x4ff8eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 04ff90  push 0
    X86_AT(c, 0x4ff90u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04ff92  call 0x4efbc
    X86_AT(c, 0x4ff92u);
    push32(c, 0x4ff97u); x86_call_known(c, 0x4efbcu, f_0004efbc); X86_RET(c, 0x4ff97u);
    X86_TICK(c, 11);
    // 04ff97  push 0x153c
    X86_AT(c, 0x4ff97u);
    { uint32_t v = 0x153Cu; push32(c, v); }
    // 04ff9c  push 0
    X86_AT(c, 0x4ff9cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04ff9e  call 0x4e794
    X86_AT(c, 0x4ff9eu);
    push32(c, 0x4ffa3u); x86_call_known(c, 0x4e794u, f_0004e794); X86_RET(c, 0x4ffa3u);
    X86_TICK(c, 11);
    // 04ffa3  push 0xf
    X86_AT(c, 0x4ffa3u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 04ffa5  push 0
    X86_AT(c, 0x4ffa5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04ffa7  call 0x4efbc
    X86_AT(c, 0x4ffa7u);
    push32(c, 0x4ffacu); x86_call_known(c, 0x4efbcu, f_0004efbc); X86_RET(c, 0x4ffacu);
    X86_TICK(c, 13);
    // 04ffac  add esp, 0x38
    X86_AT(c, 0x4ffacu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 04ffaf  push 0x1550
    X86_AT(c, 0x4ffafu);
    { uint32_t v = 0x1550u; push32(c, v); }
    // 04ffb4  push 0
    X86_AT(c, 0x4ffb4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04ffb6  call 0x4e794
    X86_AT(c, 0x4ffb6u);
    push32(c, 0x4ffbbu); x86_call_known(c, 0x4e794u, f_0004e794); X86_RET(c, 0x4ffbbu);
    X86_TICK(c, 9);
    // 04ffbb  push 0x64
    X86_AT(c, 0x4ffbbu);
    { uint32_t v = 0x64u; push32(c, v); }
    // 04ffbd  call 0x4fcd0
    X86_AT(c, 0x4ffbdu);
    push32(c, 0x4ffc2u); x86_call_known(c, 0x4fcd0u, f_0004fcd0); X86_RET(c, 0x4ffc2u);
    X86_TICK(c, 9);
    // 04ffc2  push 0
    X86_AT(c, 0x4ffc2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04ffc4  call 0x4e74c
    X86_AT(c, 0x4ffc4u);
    push32(c, 0x4ffc9u); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x4ffc9u);
    X86_TICK(c, 9);
    // 04ffc9  push 0
    X86_AT(c, 0x4ffc9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04ffcb  call 0x4e74c
    X86_AT(c, 0x4ffcbu);
    push32(c, 0x4ffd0u); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x4ffd0u);
    X86_TICK(c, 9);
    // 04ffd0  push 0
    X86_AT(c, 0x4ffd0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04ffd2  call 0x4e74c
    X86_AT(c, 0x4ffd2u);
    push32(c, 0x4ffd7u); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x4ffd7u);
    X86_TICK(c, 11);
    // 04ffd7  push 0x1590
    X86_AT(c, 0x4ffd7u);
    { uint32_t v = 0x1590u; push32(c, v); }
    // 04ffdc  push 0
    X86_AT(c, 0x4ffdcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04ffde  call 0x4e794
    X86_AT(c, 0x4ffdeu);
    push32(c, 0x4ffe3u); x86_call_known(c, 0x4e794u, f_0004e794); X86_RET(c, 0x4ffe3u);
    X86_TICK(c, 9);
    // 04ffe3  push 0
    X86_AT(c, 0x4ffe3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04ffe5  call 0x4e74c
    X86_AT(c, 0x4ffe5u);
    push32(c, 0x4ffeau); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x4ffeau);
    X86_TICK(c, 11);
    // 04ffea  push 0x15b0
    X86_AT(c, 0x4ffeau);
    { uint32_t v = 0x15B0u; push32(c, v); }
    // 04ffef  push 0
    X86_AT(c, 0x4ffefu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04fff1  call 0x4e794
    X86_AT(c, 0x4fff1u);
    push32(c, 0x4fff6u); x86_call_known(c, 0x4e794u, f_0004e794); X86_RET(c, 0x4fff6u);
    X86_TICK(c, 9);
    // 04fff6  push 0
    X86_AT(c, 0x4fff6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04fff8  call 0x4e74c
    X86_AT(c, 0x4fff8u);
    push32(c, 0x4fffdu); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x4fffdu);
    X86_TICK(c, 9);
    // 04fffd  push 0
    X86_AT(c, 0x4fffdu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 04ffff  call 0x4e74c
    X86_AT(c, 0x4ffffu);
    push32(c, 0x50004u); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x50004u);
    X86_TICK(c, 11);
    // 050004  push 0x15cc
    X86_AT(c, 0x50004u);
    { uint32_t v = 0x15CCu; push32(c, v); }
    // 050009  push 0
    X86_AT(c, 0x50009u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 05000b  call 0x4e794
    X86_AT(c, 0x5000bu);
    push32(c, 0x50010u); x86_call_known(c, 0x4e794u, f_0004e794); X86_RET(c, 0x50010u);
    X86_TICK(c, 11);
    // 050010  add esp, 0x3c
    X86_AT(c, 0x50010u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 050013  push 0
    X86_AT(c, 0x50013u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 050015  call 0x4e74c
    X86_AT(c, 0x50015u);
    push32(c, 0x5001au); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x5001au);
    X86_TICK(c, 11);
    // 05001a  push 0x15e8
    X86_AT(c, 0x5001au);
    { uint32_t v = 0x15E8u; push32(c, v); }
    // 05001f  push 0
    X86_AT(c, 0x5001fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 050021  call 0x4e794
    X86_AT(c, 0x50021u);
    push32(c, 0x50026u); x86_call_known(c, 0x4e794u, f_0004e794); X86_RET(c, 0x50026u);
    X86_TICK(c, 9);
    // 050026  push 0
    X86_AT(c, 0x50026u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 050028  call 0x4e74c
    X86_AT(c, 0x50028u);
    push32(c, 0x5002du); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x5002du);
    X86_TICK(c, 11);
    // 05002d  push 0x1604
    X86_AT(c, 0x5002du);
    { uint32_t v = 0x1604u; push32(c, v); }
    // 050032  push 0
    X86_AT(c, 0x50032u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 050034  call 0x4e794
    X86_AT(c, 0x50034u);
    push32(c, 0x50039u); x86_call_known(c, 0x4e794u, f_0004e794); X86_RET(c, 0x50039u);
    X86_TICK(c, 9);
    // 050039  push 0
    X86_AT(c, 0x50039u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 05003b  call 0x4e74c
    X86_AT(c, 0x5003bu);
    push32(c, 0x50040u); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x50040u);
    X86_TICK(c, 9);
    // 050040  push 0
    X86_AT(c, 0x50040u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 050042  call 0x4e74c
    X86_AT(c, 0x50042u);
    push32(c, 0x50047u); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x50047u);
    X86_TICK(c, 11);
    // 050047  push 0x1618
    X86_AT(c, 0x50047u);
    { uint32_t v = 0x1618u; push32(c, v); }
    // 05004c  push 0
    X86_AT(c, 0x5004cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 05004e  call 0x4e794
    X86_AT(c, 0x5004eu);
    push32(c, 0x50053u); x86_call_known(c, 0x4e794u, f_0004e794); X86_RET(c, 0x50053u);
    X86_TICK(c, 9);
    // 050053  push 0
    X86_AT(c, 0x50053u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 050055  call 0x4e74c
    X86_AT(c, 0x50055u);
    push32(c, 0x5005au); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x5005au);
    X86_TICK(c, 11);
    // 05005a  push 0x1638
    X86_AT(c, 0x5005au);
    { uint32_t v = 0x1638u; push32(c, v); }
    // 05005f  push 0
    X86_AT(c, 0x5005fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 050061  call 0x4e794
    X86_AT(c, 0x50061u);
    push32(c, 0x50066u); x86_call_known(c, 0x4e794u, f_0004e794); X86_RET(c, 0x50066u);
    X86_TICK(c, 9);
    // 050066  push 0
    X86_AT(c, 0x50066u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 050068  call 0x4e74c
    X86_AT(c, 0x50068u);
    push32(c, 0x5006du); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x5006du);
    X86_TICK(c, 13);
    // 05006d  add esp, 0x38
    X86_AT(c, 0x5006du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 050070  push 0x1658
    X86_AT(c, 0x50070u);
    { uint32_t v = 0x1658u; push32(c, v); }
    // 050075  push 0
    X86_AT(c, 0x50075u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 050077  call 0x4e794
    X86_AT(c, 0x50077u);
    push32(c, 0x5007cu); x86_call_known(c, 0x4e794u, f_0004e794); X86_RET(c, 0x5007cu);
    X86_TICK(c, 9);
    // 05007c  push 0
    X86_AT(c, 0x5007cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 05007e  call 0x4e74c
    X86_AT(c, 0x5007eu);
    push32(c, 0x50083u); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x50083u);
    X86_TICK(c, 11);
    // 050083  push 0x1674
    X86_AT(c, 0x50083u);
    { uint32_t v = 0x1674u; push32(c, v); }
    // 050088  push 0
    X86_AT(c, 0x50088u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 05008a  call 0x4e794
    X86_AT(c, 0x5008au);
    push32(c, 0x5008fu); x86_call_known(c, 0x4e794u, f_0004e794); X86_RET(c, 0x5008fu);
    X86_TICK(c, 9);
    // 05008f  push 0
    X86_AT(c, 0x5008fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 050091  call 0x4e74c
    X86_AT(c, 0x50091u);
    push32(c, 0x50096u); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x50096u);
    X86_TICK(c, 9);
    // 050096  push 0
    X86_AT(c, 0x50096u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 050098  call 0x4e74c
    X86_AT(c, 0x50098u);
    push32(c, 0x5009du); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x5009du);
    X86_TICK(c, 11);
    // 05009d  push 0x1688
    X86_AT(c, 0x5009du);
    { uint32_t v = 0x1688u; push32(c, v); }
    // 0500a2  push 0
    X86_AT(c, 0x500a2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0500a4  call 0x4e794
    X86_AT(c, 0x500a4u);
    push32(c, 0x500a9u); x86_call_known(c, 0x4e794u, f_0004e794); X86_RET(c, 0x500a9u);
    X86_TICK(c, 9);
    // 0500a9  push 0
    X86_AT(c, 0x500a9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0500ab  call 0x4e74c
    X86_AT(c, 0x500abu);
    push32(c, 0x500b0u); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x500b0u);
    X86_TICK(c, 11);
    // 0500b0  push 0x16a8
    X86_AT(c, 0x500b0u);
    { uint32_t v = 0x16A8u; push32(c, v); }
    // 0500b5  push 0
    X86_AT(c, 0x500b5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0500b7  call 0x4e794
    X86_AT(c, 0x500b7u);
    push32(c, 0x500bcu); x86_call_known(c, 0x4e794u, f_0004e794); X86_RET(c, 0x500bcu);
    X86_TICK(c, 9);
    // 0500bc  push 0
    X86_AT(c, 0x500bcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0500be  call 0x4e74c
    X86_AT(c, 0x500beu);
    push32(c, 0x500c3u); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x500c3u);
    X86_TICK(c, 11);
    // 0500c3  push 0x16c8
    X86_AT(c, 0x500c3u);
    { uint32_t v = 0x16C8u; push32(c, v); }
    // 0500c8  push 0
    X86_AT(c, 0x500c8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0500ca  call 0x4e794
    X86_AT(c, 0x500cau);
    push32(c, 0x500cfu); x86_call_known(c, 0x4e794u, f_0004e794); X86_RET(c, 0x500cfu);
    X86_TICK(c, 11);
    // 0500cf  add esp, 0x3c
    X86_AT(c, 0x500cfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0500d2  push 0
    X86_AT(c, 0x500d2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0500d4  call 0x4e74c
    X86_AT(c, 0x500d4u);
    push32(c, 0x500d9u); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x500d9u);
    X86_TICK(c, 11);
    // 0500d9  push 0x16e8
    X86_AT(c, 0x500d9u);
    { uint32_t v = 0x16E8u; push32(c, v); }
    // 0500de  push 0
    X86_AT(c, 0x500deu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0500e0  call 0x4e794
    X86_AT(c, 0x500e0u);
    push32(c, 0x500e5u); x86_call_known(c, 0x4e794u, f_0004e794); X86_RET(c, 0x500e5u);
    X86_TICK(c, 9);
    // 0500e5  push 0
    X86_AT(c, 0x500e5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0500e7  call 0x4e74c
    X86_AT(c, 0x500e7u);
    push32(c, 0x500ecu); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x500ecu);
    X86_TICK(c, 9);
    // 0500ec  push 0
    X86_AT(c, 0x500ecu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0500ee  call 0x4e74c
    X86_AT(c, 0x500eeu);
    push32(c, 0x500f3u); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x500f3u);
    X86_TICK(c, 9);
    // 0500f3  push 0
    X86_AT(c, 0x500f3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0500f5  call 0x4e74c
    X86_AT(c, 0x500f5u);
    push32(c, 0x500fau); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x500fau);
    X86_TICK(c, 9);
    // 0500fa  push 0
    X86_AT(c, 0x500fau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0500fc  call 0x4e74c
    X86_AT(c, 0x500fcu);
    push32(c, 0x50101u); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x50101u);
    X86_TICK(c, 9);
    // 050101  push 0
    X86_AT(c, 0x50101u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 050103  call 0x4e74c
    X86_AT(c, 0x50103u);
    push32(c, 0x50108u); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x50108u);
    X86_TICK(c, 9);
    // 050108  push 0
    X86_AT(c, 0x50108u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 05010a  call 0x4e74c
    X86_AT(c, 0x5010au);
    push32(c, 0x5010fu); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x5010fu);
    X86_TICK(c, 9);
    // 05010f  push 0
    X86_AT(c, 0x5010fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 050111  call 0x4e74c
    X86_AT(c, 0x50111u);
    push32(c, 0x50116u); x86_call_known(c, 0x4e74cu, f_0004e74c); X86_RET(c, 0x50116u);
    X86_TICK(c, 9);
    // 050116  push 3
    X86_AT(c, 0x50116u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 050118  call 0x4f094
    X86_AT(c, 0x50118u);
    push32(c, 0x5011du); x86_call_known(c, 0x4f094u, f_0004f094); X86_RET(c, 0x5011du);
    X86_TICK(c, 11);
    // 05011d  push 0x12c
    X86_AT(c, 0x5011du);
    { uint32_t v = 0x12Cu; push32(c, v); }
    // 050122  push 0x38
    X86_AT(c, 0x50122u);
    { uint32_t v = 0x38u; push32(c, v); }
    // 050124  call 0x4fc6c
    X86_AT(c, 0x50124u);
    push32(c, 0x50129u); x86_call_known(c, 0x4fc6cu, f_0004fc6c); X86_RET(c, 0x50129u);
    X86_TICK(c, 9);
    // 050129  push 1
    X86_AT(c, 0x50129u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 05012b  call 0x4f094
    X86_AT(c, 0x5012bu);
    push32(c, 0x50130u); x86_call_known(c, 0x4f094u, f_0004f094); X86_RET(c, 0x50130u);
    X86_TICK(c, 9);
    // 050130  add esp, 0x38
    X86_AT(c, 0x50130u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x38u, 0, 4); }
    // 050133  call 0xb
    X86_AT(c, 0x50133u);
    push32(c, 0x50138u); x86_call_known(c, 0xbu, f_0000000b); X86_RET(c, 0x50138u);
L_50138:
    X86_TICK(c, 13);
    // 050138  lea ebx, [ebp - 4]
    X86_AT(c, 0x50138u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 05013b  push ebx
    X86_AT(c, 0x5013bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 05013c  push 1
    X86_AT(c, 0x5013cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 05013e  call 0x29
    X86_AT(c, 0x5013eu);
    push32(c, 0x50143u); x86_call_known(c, 0x29u, f_00000029); X86_RET(c, 0x50143u);
    X86_TICK(c, 15);
    // 050143  add esp, 8
    X86_AT(c, 0x50143u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 050146  mov eax, dword ptr [ebx]
    X86_AT(c, 0x50146u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 050148  and eax, 0xff00
    X86_AT(c, 0x50148u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFF00u, 4); }
    // 05014d  cmp eax, 0xff00
    X86_AT(c, 0x5014du);
    (void)x86_sub(c, c.r[0], 0xFF00u, 0, 4);
    // 050152  je 0x50138
    X86_AT(c, 0x50152u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x50138u); goto L_50138; }
    X86_TICK(c, 20);
    // 050154  pop ebx
    X86_AT(c, 0x50154u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 050155  leave 
    X86_AT(c, 0x50155u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 050156  ret 
    X86_AT(c, 0x50156u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4fe3cu, "ran off the end of a function");
}
}
