#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00008158(X86Cpu& c) {
    goto L_8158;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_8158:
    X86_TICK(c, 19);
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x8158u, "ran off the end of a function");
}
void f_00008160(X86Cpu& c) {
    goto L_8160;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_8160:
    X86_TICK(c, 15);
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x8160u, "ran off the end of a function");
}
void f_00008163(X86Cpu& c) {
    goto L_8163;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_8163:
    X86_TICK(c, 13);
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x8163u, "ran off the end of a function");
}
void f_0000816b(X86Cpu& c) {
    goto L_816b;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_816b:
    X86_TICK(c, 7);
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x816bu, "ran off the end of a function");
}
void f_00008170(X86Cpu& c) {
    X86_TICK(c, 7);
    // 008170  call 0xb930
    X86_AT(c, 0x8170u);
    push32(c, 0x8175u); f_0000b930(c); X86_RET(c, 0x8175u);
    X86_TICK(c, 5);
    // 008175  jae 0x8180
    X86_AT(c, 0x8175u);
    if (x86_cc(c, 3)) { goto L_8180; }
    X86_TICK(c, 10);
    // 008177  ret 
    X86_AT(c, 0x8177u);
    c.eip = pop32(c); return;
L_8180:
    X86_TICK(c, 58);
    // 008180  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x8180u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 008184  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8184u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00818c  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x818cu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 008191  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x8191u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 008195  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x8195u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00819c  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x819cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 0081a3  and bx, 0xffe0
    X86_AT(c, 0x81a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081a8  shld eax, ebx, 0x10
    X86_AT(c, 0x81a8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0081ac  and ax, 0xffe0
    X86_AT(c, 0x81acu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081b0  cmp bx, ax
    X86_AT(c, 0x81b0u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0081b3  je 0x824c
    X86_AT(c, 0x81b3u);
    if (x86_cc(c, 4)) { goto L_824c; }
    X86_TICK(c, 25);
    // 0081b9  push eax
    X86_AT(c, 0x81b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0081ba  push ebx
    X86_AT(c, 0x81bau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0081bb  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81bbu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0081c3  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x81c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_824c:
    X86_TICK(c, 32);
    // 00824c  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x824cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008254  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8254u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00825b  shld edx, ecx, 0x10
    X86_AT(c, 0x825bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00825f  and eax, 0x1f
    X86_AT(c, 0x825fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x8170u, "ran off the end of a function");
}
void f_00008175(X86Cpu& c) {
    X86_TICK(c, 5);
    // 008175  jae 0x8180
    X86_AT(c, 0x8175u);
    if (x86_cc(c, 3)) { goto L_8180; }
    X86_TICK(c, 10);
    // 008177  ret 
    X86_AT(c, 0x8177u);
    c.eip = pop32(c); return;
L_8180:
    X86_TICK(c, 58);
    // 008180  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x8180u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 008184  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8184u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00818c  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x818cu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 008191  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x8191u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 008195  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x8195u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00819c  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x819cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 0081a3  and bx, 0xffe0
    X86_AT(c, 0x81a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081a8  shld eax, ebx, 0x10
    X86_AT(c, 0x81a8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0081ac  and ax, 0xffe0
    X86_AT(c, 0x81acu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081b0  cmp bx, ax
    X86_AT(c, 0x81b0u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0081b3  je 0x824c
    X86_AT(c, 0x81b3u);
    if (x86_cc(c, 4)) { goto L_824c; }
    X86_TICK(c, 25);
    // 0081b9  push eax
    X86_AT(c, 0x81b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0081ba  push ebx
    X86_AT(c, 0x81bau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0081bb  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81bbu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0081c3  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x81c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_824c:
    X86_TICK(c, 32);
    // 00824c  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x824cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008254  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8254u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00825b  shld edx, ecx, 0x10
    X86_AT(c, 0x825bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00825f  and eax, 0x1f
    X86_AT(c, 0x825fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x8175u, "ran off the end of a function");
}
void f_00008177(X86Cpu& c) {
    X86_TICK(c, 10);
    // 008177  ret 
    X86_AT(c, 0x8177u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8177u, "ran off the end of a function");
}
void f_00008178(X86Cpu& c) {
    X86_TICK(c, 7);
    // 008178  call 0xb930
    X86_AT(c, 0x8178u);
    push32(c, 0x817du); f_0000b930(c); X86_RET(c, 0x817du);
    X86_TICK(c, 5);
    // 00817d  jae 0x819c
    X86_AT(c, 0x817du);
    if (x86_cc(c, 3)) { goto L_819c; }
    X86_TICK(c, 10);
    // 00817f  ret 
    X86_AT(c, 0x817fu);
    c.eip = pop32(c); return;
L_819c:
    X86_TICK(c, 18);
    // 00819c  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x819cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 0081a3  and bx, 0xffe0
    X86_AT(c, 0x81a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081a8  shld eax, ebx, 0x10
    X86_AT(c, 0x81a8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0081ac  and ax, 0xffe0
    X86_AT(c, 0x81acu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081b0  cmp bx, ax
    X86_AT(c, 0x81b0u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0081b3  je 0x824c
    X86_AT(c, 0x81b3u);
    if (x86_cc(c, 4)) { goto L_824c; }
    X86_TICK(c, 25);
    // 0081b9  push eax
    X86_AT(c, 0x81b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0081ba  push ebx
    X86_AT(c, 0x81bau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0081bb  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81bbu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0081c3  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x81c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_824c:
    X86_TICK(c, 32);
    // 00824c  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x824cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008254  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8254u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00825b  shld edx, ecx, 0x10
    X86_AT(c, 0x825bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00825f  and eax, 0x1f
    X86_AT(c, 0x825fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x8178u, "ran off the end of a function");
}
void f_0000817d(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00817d  jae 0x819c
    X86_AT(c, 0x817du);
    if (x86_cc(c, 3)) { goto L_819c; }
    X86_TICK(c, 10);
    // 00817f  ret 
    X86_AT(c, 0x817fu);
    c.eip = pop32(c); return;
L_819c:
    X86_TICK(c, 18);
    // 00819c  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x819cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 0081a3  and bx, 0xffe0
    X86_AT(c, 0x81a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081a8  shld eax, ebx, 0x10
    X86_AT(c, 0x81a8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0081ac  and ax, 0xffe0
    X86_AT(c, 0x81acu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081b0  cmp bx, ax
    X86_AT(c, 0x81b0u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0081b3  je 0x824c
    X86_AT(c, 0x81b3u);
    if (x86_cc(c, 4)) { goto L_824c; }
    X86_TICK(c, 25);
    // 0081b9  push eax
    X86_AT(c, 0x81b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0081ba  push ebx
    X86_AT(c, 0x81bau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0081bb  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81bbu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0081c3  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x81c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_824c:
    X86_TICK(c, 32);
    // 00824c  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x824cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008254  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8254u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00825b  shld edx, ecx, 0x10
    X86_AT(c, 0x825bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00825f  and eax, 0x1f
    X86_AT(c, 0x825fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x817du, "ran off the end of a function");
}
void f_0000817f(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00817f  ret 
    X86_AT(c, 0x817fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x817fu, "ran off the end of a function");
}
void f_00008180(X86Cpu& c) {
    X86_TICK(c, 58);
    // 008180  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x8180u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 008184  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8184u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00818c  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x818cu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 008191  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x8191u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 008195  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x8195u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00819c  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x819cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 0081a3  and bx, 0xffe0
    X86_AT(c, 0x81a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081a8  shld eax, ebx, 0x10
    X86_AT(c, 0x81a8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0081ac  and ax, 0xffe0
    X86_AT(c, 0x81acu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081b0  cmp bx, ax
    X86_AT(c, 0x81b0u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0081b3  je 0x824c
    X86_AT(c, 0x81b3u);
    if (x86_cc(c, 4)) { goto L_824c; }
    X86_TICK(c, 25);
    // 0081b9  push eax
    X86_AT(c, 0x81b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0081ba  push ebx
    X86_AT(c, 0x81bau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0081bb  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81bbu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0081c3  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x81c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_824c:
    X86_TICK(c, 32);
    // 00824c  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x824cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008254  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8254u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00825b  shld edx, ecx, 0x10
    X86_AT(c, 0x825bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00825f  and eax, 0x1f
    X86_AT(c, 0x825fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x8180u, "ran off the end of a function");
}
void f_00008184(X86Cpu& c) {
    X86_TICK(c, 54);
    // 008184  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8184u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00818c  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x818cu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 008191  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x8191u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 008195  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x8195u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00819c  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x819cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 0081a3  and bx, 0xffe0
    X86_AT(c, 0x81a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081a8  shld eax, ebx, 0x10
    X86_AT(c, 0x81a8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0081ac  and ax, 0xffe0
    X86_AT(c, 0x81acu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081b0  cmp bx, ax
    X86_AT(c, 0x81b0u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0081b3  je 0x824c
    X86_AT(c, 0x81b3u);
    if (x86_cc(c, 4)) { goto L_824c; }
    X86_TICK(c, 25);
    // 0081b9  push eax
    X86_AT(c, 0x81b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0081ba  push ebx
    X86_AT(c, 0x81bau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0081bb  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81bbu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0081c3  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x81c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_824c:
    X86_TICK(c, 32);
    // 00824c  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x824cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008254  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8254u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00825b  shld edx, ecx, 0x10
    X86_AT(c, 0x825bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00825f  and eax, 0x1f
    X86_AT(c, 0x825fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x8184u, "ran off the end of a function");
}
void f_0000818c(X86Cpu& c) {
    X86_TICK(c, 48);
    // 00818c  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x818cu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 008191  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x8191u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 008195  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x8195u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00819c  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x819cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 0081a3  and bx, 0xffe0
    X86_AT(c, 0x81a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081a8  shld eax, ebx, 0x10
    X86_AT(c, 0x81a8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0081ac  and ax, 0xffe0
    X86_AT(c, 0x81acu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081b0  cmp bx, ax
    X86_AT(c, 0x81b0u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0081b3  je 0x824c
    X86_AT(c, 0x81b3u);
    if (x86_cc(c, 4)) { goto L_824c; }
    X86_TICK(c, 25);
    // 0081b9  push eax
    X86_AT(c, 0x81b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0081ba  push ebx
    X86_AT(c, 0x81bau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0081bb  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81bbu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0081c3  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x81c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_824c:
    X86_TICK(c, 32);
    // 00824c  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x824cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008254  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8254u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00825b  shld edx, ecx, 0x10
    X86_AT(c, 0x825bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00825f  and eax, 0x1f
    X86_AT(c, 0x825fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x818cu, "ran off the end of a function");
}
void f_00008191(X86Cpu& c) {
    X86_TICK(c, 26);
    // 008191  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x8191u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 008195  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x8195u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00819c  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x819cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 0081a3  and bx, 0xffe0
    X86_AT(c, 0x81a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081a8  shld eax, ebx, 0x10
    X86_AT(c, 0x81a8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0081ac  and ax, 0xffe0
    X86_AT(c, 0x81acu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081b0  cmp bx, ax
    X86_AT(c, 0x81b0u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0081b3  je 0x824c
    X86_AT(c, 0x81b3u);
    if (x86_cc(c, 4)) { goto L_824c; }
    X86_TICK(c, 25);
    // 0081b9  push eax
    X86_AT(c, 0x81b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0081ba  push ebx
    X86_AT(c, 0x81bau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0081bb  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81bbu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0081c3  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x81c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_824c:
    X86_TICK(c, 32);
    // 00824c  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x824cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008254  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8254u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00825b  shld edx, ecx, 0x10
    X86_AT(c, 0x825bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00825f  and eax, 0x1f
    X86_AT(c, 0x825fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x8191u, "ran off the end of a function");
}
void f_00008195(X86Cpu& c) {
    X86_TICK(c, 20);
    // 008195  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x8195u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00819c  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x819cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 0081a3  and bx, 0xffe0
    X86_AT(c, 0x81a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081a8  shld eax, ebx, 0x10
    X86_AT(c, 0x81a8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0081ac  and ax, 0xffe0
    X86_AT(c, 0x81acu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081b0  cmp bx, ax
    X86_AT(c, 0x81b0u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0081b3  je 0x824c
    X86_AT(c, 0x81b3u);
    if (x86_cc(c, 4)) { goto L_824c; }
    X86_TICK(c, 25);
    // 0081b9  push eax
    X86_AT(c, 0x81b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0081ba  push ebx
    X86_AT(c, 0x81bau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0081bb  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81bbu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0081c3  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x81c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_824c:
    X86_TICK(c, 32);
    // 00824c  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x824cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008254  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8254u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00825b  shld edx, ecx, 0x10
    X86_AT(c, 0x825bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00825f  and eax, 0x1f
    X86_AT(c, 0x825fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x8195u, "ran off the end of a function");
}
void f_0000819c(X86Cpu& c) {
    X86_TICK(c, 18);
    // 00819c  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x819cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 0081a3  and bx, 0xffe0
    X86_AT(c, 0x81a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081a8  shld eax, ebx, 0x10
    X86_AT(c, 0x81a8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0081ac  and ax, 0xffe0
    X86_AT(c, 0x81acu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081b0  cmp bx, ax
    X86_AT(c, 0x81b0u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0081b3  je 0x824c
    X86_AT(c, 0x81b3u);
    if (x86_cc(c, 4)) { goto L_824c; }
    X86_TICK(c, 25);
    // 0081b9  push eax
    X86_AT(c, 0x81b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0081ba  push ebx
    X86_AT(c, 0x81bau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0081bb  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81bbu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0081c3  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x81c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_824c:
    X86_TICK(c, 32);
    // 00824c  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x824cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008254  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8254u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00825b  shld edx, ecx, 0x10
    X86_AT(c, 0x825bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00825f  and eax, 0x1f
    X86_AT(c, 0x825fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x819cu, "ran off the end of a function");
}
void f_000081a3(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0081a3  and bx, 0xffe0
    X86_AT(c, 0x81a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081a8  shld eax, ebx, 0x10
    X86_AT(c, 0x81a8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0081ac  and ax, 0xffe0
    X86_AT(c, 0x81acu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081b0  cmp bx, ax
    X86_AT(c, 0x81b0u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0081b3  je 0x824c
    X86_AT(c, 0x81b3u);
    if (x86_cc(c, 4)) { goto L_824c; }
    X86_TICK(c, 25);
    // 0081b9  push eax
    X86_AT(c, 0x81b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0081ba  push ebx
    X86_AT(c, 0x81bau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0081bb  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81bbu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0081c3  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x81c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_824c:
    X86_TICK(c, 32);
    // 00824c  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x824cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008254  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8254u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00825b  shld edx, ecx, 0x10
    X86_AT(c, 0x825bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00825f  and eax, 0x1f
    X86_AT(c, 0x825fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x81a3u, "ran off the end of a function");
}
void f_000081a8(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0081a8  shld eax, ebx, 0x10
    X86_AT(c, 0x81a8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0081ac  and ax, 0xffe0
    X86_AT(c, 0x81acu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081b0  cmp bx, ax
    X86_AT(c, 0x81b0u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0081b3  je 0x824c
    X86_AT(c, 0x81b3u);
    if (x86_cc(c, 4)) { goto L_824c; }
    X86_TICK(c, 25);
    // 0081b9  push eax
    X86_AT(c, 0x81b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0081ba  push ebx
    X86_AT(c, 0x81bau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0081bb  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81bbu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0081c3  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x81c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_824c:
    X86_TICK(c, 32);
    // 00824c  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x824cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008254  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8254u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00825b  shld edx, ecx, 0x10
    X86_AT(c, 0x825bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00825f  and eax, 0x1f
    X86_AT(c, 0x825fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x81a8u, "ran off the end of a function");
}
void f_000081ac(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0081ac  and ax, 0xffe0
    X86_AT(c, 0x81acu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081b0  cmp bx, ax
    X86_AT(c, 0x81b0u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0081b3  je 0x824c
    X86_AT(c, 0x81b3u);
    if (x86_cc(c, 4)) { goto L_824c; }
    X86_TICK(c, 25);
    // 0081b9  push eax
    X86_AT(c, 0x81b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0081ba  push ebx
    X86_AT(c, 0x81bau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0081bb  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81bbu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0081c3  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x81c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_824c:
    X86_TICK(c, 32);
    // 00824c  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x824cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008254  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8254u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00825b  shld edx, ecx, 0x10
    X86_AT(c, 0x825bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00825f  and eax, 0x1f
    X86_AT(c, 0x825fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x81acu, "ran off the end of a function");
}
void f_000081b0(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0081b0  cmp bx, ax
    X86_AT(c, 0x81b0u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0081b3  je 0x824c
    X86_AT(c, 0x81b3u);
    if (x86_cc(c, 4)) { goto L_824c; }
    X86_TICK(c, 25);
    // 0081b9  push eax
    X86_AT(c, 0x81b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0081ba  push ebx
    X86_AT(c, 0x81bau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0081bb  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81bbu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0081c3  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x81c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_824c:
    X86_TICK(c, 32);
    // 00824c  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x824cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008254  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8254u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00825b  shld edx, ecx, 0x10
    X86_AT(c, 0x825bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00825f  and eax, 0x1f
    X86_AT(c, 0x825fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x81b0u, "ran off the end of a function");
}
void f_000081b3(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0081b3  je 0x824c
    X86_AT(c, 0x81b3u);
    if (x86_cc(c, 4)) { goto L_824c; }
    X86_TICK(c, 25);
    // 0081b9  push eax
    X86_AT(c, 0x81b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0081ba  push ebx
    X86_AT(c, 0x81bau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0081bb  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81bbu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0081c3  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x81c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_824c:
    X86_TICK(c, 32);
    // 00824c  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x824cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008254  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8254u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00825b  shld edx, ecx, 0x10
    X86_AT(c, 0x825bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00825f  and eax, 0x1f
    X86_AT(c, 0x825fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x81b3u, "ran off the end of a function");
}
void f_000081b9(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0081b9  push eax
    X86_AT(c, 0x81b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0081ba  push ebx
    X86_AT(c, 0x81bau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0081bb  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81bbu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0081c3  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x81c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x81b9u, "ran off the end of a function");
}
void f_000081ba(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0081ba  push ebx
    X86_AT(c, 0x81bau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0081bb  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81bbu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0081c3  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x81c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x81bau, "ran off the end of a function");
}
void f_000081bb(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0081bb  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81bbu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0081c3  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x81c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x81bbu, "ran off the end of a function");
}
void f_000081c3(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0081c3  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x81c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x81c3u, "ran off the end of a function");
}
void f_000081cb(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x81cbu, "ran off the end of a function");
}
void f_000081d0(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x81d0u, "ran off the end of a function");
}
void f_000081d8(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x81d8u, "ran off the end of a function");
}
void f_000081df(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x81dfu, "ran off the end of a function");
}
void f_000081e0(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x81e0u, "ran off the end of a function");
}
void f_000081e4(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x81e4u, "ran off the end of a function");
}
void f_000081e8(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x81e8u, "ran off the end of a function");
}
void f_000081ea(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
    x86_fault(c, 0x81eau, "ran off the end of a function");
}
void f_000081f4(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0081f4  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x81f4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_81fc:
    X86_TICK(c, 15);
    // 0081fc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81fcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008204  mov eax, 0xffffffff
    X86_AT(c, 0x8204u);
    c.r[0] = 0xFFFFFFFFu;
    // 008209  push ebx
    X86_AT(c, 0x8209u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00820a  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x820au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8211u); x86_call(c, t); X86_RET(c, 0x8211u); }
    X86_TICK(c, 18);
    // 008211  pop ebx
    X86_AT(c, 0x8211u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008212  add bx, 0x20
    X86_AT(c, 0x8212u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008216  cmp word ptr [esp], bx
    X86_AT(c, 0x8216u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00821a  jne 0x81fc
    X86_AT(c, 0x821au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x81fcu); goto L_81fc; }
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x81f4u, "ran off the end of a function");
}
void f_000081fc(X86Cpu& c) {
L_81fc:
    X86_TICK(c, 15);
    // 0081fc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81fcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008204  mov eax, 0xffffffff
    X86_AT(c, 0x8204u);
    c.r[0] = 0xFFFFFFFFu;
    // 008209  push ebx
    X86_AT(c, 0x8209u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00820a  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x820au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8211u); x86_call(c, t); X86_RET(c, 0x8211u); }
    X86_TICK(c, 18);
    // 008211  pop ebx
    X86_AT(c, 0x8211u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008212  add bx, 0x20
    X86_AT(c, 0x8212u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008216  cmp word ptr [esp], bx
    X86_AT(c, 0x8216u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00821a  jne 0x81fc
    X86_AT(c, 0x821au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x81fcu); goto L_81fc; }
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x81fcu, "ran off the end of a function");
}
void f_00008204(X86Cpu& c) {
    goto L_8204;
L_81fc:
    X86_TICK(c, 4);
    // 0081fc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81fcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
L_8204:
    X86_TICK(c, 11);
    // 008204  mov eax, 0xffffffff
    X86_AT(c, 0x8204u);
    c.r[0] = 0xFFFFFFFFu;
    // 008209  push ebx
    X86_AT(c, 0x8209u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00820a  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x820au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8211u); x86_call(c, t); X86_RET(c, 0x8211u); }
    X86_TICK(c, 18);
    // 008211  pop ebx
    X86_AT(c, 0x8211u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008212  add bx, 0x20
    X86_AT(c, 0x8212u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008216  cmp word ptr [esp], bx
    X86_AT(c, 0x8216u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00821a  jne 0x81fc
    X86_AT(c, 0x821au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x81fcu); goto L_81fc; }
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8204u, "ran off the end of a function");
}
void f_00008209(X86Cpu& c) {
    goto L_8209;
L_81fc:
    X86_TICK(c, 6);
    // 0081fc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81fcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008204  mov eax, 0xffffffff
    X86_AT(c, 0x8204u);
    c.r[0] = 0xFFFFFFFFu;
L_8209:
    X86_TICK(c, 9);
    // 008209  push ebx
    X86_AT(c, 0x8209u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00820a  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x820au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8211u); x86_call(c, t); X86_RET(c, 0x8211u); }
    X86_TICK(c, 18);
    // 008211  pop ebx
    X86_AT(c, 0x8211u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008212  add bx, 0x20
    X86_AT(c, 0x8212u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008216  cmp word ptr [esp], bx
    X86_AT(c, 0x8216u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00821a  jne 0x81fc
    X86_AT(c, 0x821au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x81fcu); goto L_81fc; }
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8209u, "ran off the end of a function");
}
void f_0000820a(X86Cpu& c) {
    goto L_820a;
L_81fc:
    X86_TICK(c, 8);
    // 0081fc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81fcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008204  mov eax, 0xffffffff
    X86_AT(c, 0x8204u);
    c.r[0] = 0xFFFFFFFFu;
    // 008209  push ebx
    X86_AT(c, 0x8209u);
    { uint32_t v = c.r[3]; push32(c, v); }
L_820a:
    X86_TICK(c, 7);
    // 00820a  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x820au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8211u); x86_call(c, t); X86_RET(c, 0x8211u); }
    X86_TICK(c, 18);
    // 008211  pop ebx
    X86_AT(c, 0x8211u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008212  add bx, 0x20
    X86_AT(c, 0x8212u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008216  cmp word ptr [esp], bx
    X86_AT(c, 0x8216u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00821a  jne 0x81fc
    X86_AT(c, 0x821au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x81fcu); goto L_81fc; }
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x820au, "ran off the end of a function");
}
void f_00008211(X86Cpu& c) {
    goto L_8211;
L_81fc:
    X86_TICK(c, 15);
    // 0081fc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81fcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008204  mov eax, 0xffffffff
    X86_AT(c, 0x8204u);
    c.r[0] = 0xFFFFFFFFu;
    // 008209  push ebx
    X86_AT(c, 0x8209u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00820a  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x820au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8211u); x86_call(c, t); X86_RET(c, 0x8211u); }
L_8211:
    X86_TICK(c, 18);
    // 008211  pop ebx
    X86_AT(c, 0x8211u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008212  add bx, 0x20
    X86_AT(c, 0x8212u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008216  cmp word ptr [esp], bx
    X86_AT(c, 0x8216u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00821a  jne 0x81fc
    X86_AT(c, 0x821au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x81fcu); goto L_81fc; }
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8211u, "ran off the end of a function");
}
void f_00008212(X86Cpu& c) {
    goto L_8212;
L_81fc:
    X86_TICK(c, 15);
    // 0081fc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81fcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008204  mov eax, 0xffffffff
    X86_AT(c, 0x8204u);
    c.r[0] = 0xFFFFFFFFu;
    // 008209  push ebx
    X86_AT(c, 0x8209u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00820a  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x820au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8211u); x86_call(c, t); X86_RET(c, 0x8211u); }
    X86_TICK(c, 4);
    // 008211  pop ebx
    X86_AT(c, 0x8211u);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_8212:
    X86_TICK(c, 14);
    // 008212  add bx, 0x20
    X86_AT(c, 0x8212u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008216  cmp word ptr [esp], bx
    X86_AT(c, 0x8216u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00821a  jne 0x81fc
    X86_AT(c, 0x821au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x81fcu); goto L_81fc; }
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8212u, "ran off the end of a function");
}
void f_00008216(X86Cpu& c) {
    goto L_8216;
L_81fc:
    X86_TICK(c, 15);
    // 0081fc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81fcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008204  mov eax, 0xffffffff
    X86_AT(c, 0x8204u);
    c.r[0] = 0xFFFFFFFFu;
    // 008209  push ebx
    X86_AT(c, 0x8209u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00820a  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x820au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8211u); x86_call(c, t); X86_RET(c, 0x8211u); }
    X86_TICK(c, 6);
    // 008211  pop ebx
    X86_AT(c, 0x8211u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008212  add bx, 0x20
    X86_AT(c, 0x8212u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
L_8216:
    X86_TICK(c, 12);
    // 008216  cmp word ptr [esp], bx
    X86_AT(c, 0x8216u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00821a  jne 0x81fc
    X86_AT(c, 0x821au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x81fcu); goto L_81fc; }
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8216u, "ran off the end of a function");
}
void f_0000821a(X86Cpu& c) {
    goto L_821a;
L_81fc:
    X86_TICK(c, 15);
    // 0081fc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81fcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008204  mov eax, 0xffffffff
    X86_AT(c, 0x8204u);
    c.r[0] = 0xFFFFFFFFu;
    // 008209  push ebx
    X86_AT(c, 0x8209u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00820a  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x820au);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8211u); x86_call(c, t); X86_RET(c, 0x8211u); }
    X86_TICK(c, 13);
    // 008211  pop ebx
    X86_AT(c, 0x8211u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008212  add bx, 0x20
    X86_AT(c, 0x8212u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008216  cmp word ptr [esp], bx
    X86_AT(c, 0x8216u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
L_821a:
    X86_TICK(c, 5);
    // 00821a  jne 0x81fc
    X86_AT(c, 0x821au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x81fcu); goto L_81fc; }
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x821au, "ran off the end of a function");
}
void f_0000821c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x821cu, "ran off the end of a function");
}
void f_0000821f(X86Cpu& c) {
    X86_TICK(c, 21);
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x821fu, "ran off the end of a function");
}
void f_00008227(X86Cpu& c) {
    X86_TICK(c, 17);
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8227u, "ran off the end of a function");
}
void f_0000822f(X86Cpu& c) {
    X86_TICK(c, 13);
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x822fu, "ran off the end of a function");
}
void f_00008234(X86Cpu& c) {
    X86_TICK(c, 11);
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8234u, "ran off the end of a function");
}
void f_0000823c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x823cu, "ran off the end of a function");
}
void f_00008243(X86Cpu& c) {
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8243u, "ran off the end of a function");
}
void f_0000824b(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x824bu, "ran off the end of a function");
}
void f_0000824c(X86Cpu& c) {
    X86_TICK(c, 32);
    // 00824c  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x824cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008254  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8254u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00825b  shld edx, ecx, 0x10
    X86_AT(c, 0x825bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00825f  and eax, 0x1f
    X86_AT(c, 0x825fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x824cu, "ran off the end of a function");
}
void f_00008254(X86Cpu& c) {
    X86_TICK(c, 28);
    // 008254  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8254u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00825b  shld edx, ecx, 0x10
    X86_AT(c, 0x825bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00825f  and eax, 0x1f
    X86_AT(c, 0x825fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x8254u, "ran off the end of a function");
}
void f_0000825b(X86Cpu& c) {
    X86_TICK(c, 24);
    // 00825b  shld edx, ecx, 0x10
    X86_AT(c, 0x825bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00825f  and eax, 0x1f
    X86_AT(c, 0x825fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x825bu, "ran off the end of a function");
}
void f_0000825f(X86Cpu& c) {
    X86_TICK(c, 21);
    // 00825f  and eax, 0x1f
    X86_AT(c, 0x825fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x825fu, "ran off the end of a function");
}
void f_00008264(X86Cpu& c) {
    X86_TICK(c, 19);
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x8264u, "ran off the end of a function");
}
void f_0000826c(X86Cpu& c) {
    X86_TICK(c, 15);
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x826cu, "ran off the end of a function");
}
void f_0000826f(X86Cpu& c) {
    X86_TICK(c, 13);
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x826fu, "ran off the end of a function");
}
void f_00008277(X86Cpu& c) {
    X86_TICK(c, 7);
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
    x86_fault(c, 0x8277u, "ran off the end of a function");
}
void f_000082bc(X86Cpu& c) {
    goto L_82bc;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_82bc:
    X86_TICK(c, 46);
    // 0082bc  movzx edi, bx
    X86_AT(c, 0x82bcu);
    c.r[7] = (c.r[3] & 0xFFFFu);
    // 0082bf  shr edi, 1
    X86_AT(c, 0x82bfu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[7] = r; }
    // 0082c1  add edi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x82c1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 0082c8  mov ax, word ptr [esp]
    X86_AT(c, 0x82c8u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[4]))));
    // 0082cc  movzx ecx, ax
    X86_AT(c, 0x82ccu);
    c.r[1] = (c.r[0] & 0xFFFFu);
    // 0082cf  sub cx, bx
    X86_AT(c, 0x82cfu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0082d2  shr ecx, 5
    X86_AT(c, 0x82d2u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0082d5  mov bx, ax
    X86_AT(c, 0x82d5u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 0082d8  lea ecx, [ecx*4]
    X86_AT(c, 0x82d8u);
    c.r[1] = (uint32_t)(c.r[1] * 4);
    // 0082df  mov eax, dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x82dfu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)));
    // 0082e6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x82e6u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0082e8  jmp 0x821c
    X86_AT(c, 0x82e8u);
    X86_POLL(c, 0x821cu); goto L_821c;
    x86_fault(c, 0x82bcu, "ran off the end of a function");
}
void f_000082bf(X86Cpu& c) {
    goto L_82bf;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_82bf:
    X86_TICK(c, 43);
    // 0082bf  shr edi, 1
    X86_AT(c, 0x82bfu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[7] = r; }
    // 0082c1  add edi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x82c1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 0082c8  mov ax, word ptr [esp]
    X86_AT(c, 0x82c8u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[4]))));
    // 0082cc  movzx ecx, ax
    X86_AT(c, 0x82ccu);
    c.r[1] = (c.r[0] & 0xFFFFu);
    // 0082cf  sub cx, bx
    X86_AT(c, 0x82cfu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0082d2  shr ecx, 5
    X86_AT(c, 0x82d2u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0082d5  mov bx, ax
    X86_AT(c, 0x82d5u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 0082d8  lea ecx, [ecx*4]
    X86_AT(c, 0x82d8u);
    c.r[1] = (uint32_t)(c.r[1] * 4);
    // 0082df  mov eax, dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x82dfu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)));
    // 0082e6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x82e6u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0082e8  jmp 0x821c
    X86_AT(c, 0x82e8u);
    X86_POLL(c, 0x821cu); goto L_821c;
    x86_fault(c, 0x82bfu, "ran off the end of a function");
}
void f_000082c1(X86Cpu& c) {
    goto L_82c1;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_82c1:
    X86_TICK(c, 40);
    // 0082c1  add edi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x82c1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 0082c8  mov ax, word ptr [esp]
    X86_AT(c, 0x82c8u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[4]))));
    // 0082cc  movzx ecx, ax
    X86_AT(c, 0x82ccu);
    c.r[1] = (c.r[0] & 0xFFFFu);
    // 0082cf  sub cx, bx
    X86_AT(c, 0x82cfu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0082d2  shr ecx, 5
    X86_AT(c, 0x82d2u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0082d5  mov bx, ax
    X86_AT(c, 0x82d5u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 0082d8  lea ecx, [ecx*4]
    X86_AT(c, 0x82d8u);
    c.r[1] = (uint32_t)(c.r[1] * 4);
    // 0082df  mov eax, dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x82dfu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)));
    // 0082e6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x82e6u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0082e8  jmp 0x821c
    X86_AT(c, 0x82e8u);
    X86_POLL(c, 0x821cu); goto L_821c;
    x86_fault(c, 0x82c1u, "ran off the end of a function");
}
void f_000082c8(X86Cpu& c) {
    goto L_82c8;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_82c8:
    X86_TICK(c, 34);
    // 0082c8  mov ax, word ptr [esp]
    X86_AT(c, 0x82c8u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[4]))));
    // 0082cc  movzx ecx, ax
    X86_AT(c, 0x82ccu);
    c.r[1] = (c.r[0] & 0xFFFFu);
    // 0082cf  sub cx, bx
    X86_AT(c, 0x82cfu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0082d2  shr ecx, 5
    X86_AT(c, 0x82d2u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0082d5  mov bx, ax
    X86_AT(c, 0x82d5u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 0082d8  lea ecx, [ecx*4]
    X86_AT(c, 0x82d8u);
    c.r[1] = (uint32_t)(c.r[1] * 4);
    // 0082df  mov eax, dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x82dfu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)));
    // 0082e6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x82e6u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0082e8  jmp 0x821c
    X86_AT(c, 0x82e8u);
    X86_POLL(c, 0x821cu); goto L_821c;
    x86_fault(c, 0x82c8u, "ran off the end of a function");
}
void f_000082cc(X86Cpu& c) {
    goto L_82cc;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_82cc:
    X86_TICK(c, 30);
    // 0082cc  movzx ecx, ax
    X86_AT(c, 0x82ccu);
    c.r[1] = (c.r[0] & 0xFFFFu);
    // 0082cf  sub cx, bx
    X86_AT(c, 0x82cfu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0082d2  shr ecx, 5
    X86_AT(c, 0x82d2u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0082d5  mov bx, ax
    X86_AT(c, 0x82d5u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 0082d8  lea ecx, [ecx*4]
    X86_AT(c, 0x82d8u);
    c.r[1] = (uint32_t)(c.r[1] * 4);
    // 0082df  mov eax, dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x82dfu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)));
    // 0082e6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x82e6u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0082e8  jmp 0x821c
    X86_AT(c, 0x82e8u);
    X86_POLL(c, 0x821cu); goto L_821c;
    x86_fault(c, 0x82ccu, "ran off the end of a function");
}
void f_000082cf(X86Cpu& c) {
    goto L_82cf;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_82cf:
    X86_TICK(c, 27);
    // 0082cf  sub cx, bx
    X86_AT(c, 0x82cfu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0082d2  shr ecx, 5
    X86_AT(c, 0x82d2u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0082d5  mov bx, ax
    X86_AT(c, 0x82d5u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 0082d8  lea ecx, [ecx*4]
    X86_AT(c, 0x82d8u);
    c.r[1] = (uint32_t)(c.r[1] * 4);
    // 0082df  mov eax, dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x82dfu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)));
    // 0082e6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x82e6u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0082e8  jmp 0x821c
    X86_AT(c, 0x82e8u);
    X86_POLL(c, 0x821cu); goto L_821c;
    x86_fault(c, 0x82cfu, "ran off the end of a function");
}
void f_000082d2(X86Cpu& c) {
    goto L_82d2;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_82d2:
    X86_TICK(c, 25);
    // 0082d2  shr ecx, 5
    X86_AT(c, 0x82d2u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0082d5  mov bx, ax
    X86_AT(c, 0x82d5u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 0082d8  lea ecx, [ecx*4]
    X86_AT(c, 0x82d8u);
    c.r[1] = (uint32_t)(c.r[1] * 4);
    // 0082df  mov eax, dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x82dfu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)));
    // 0082e6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x82e6u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0082e8  jmp 0x821c
    X86_AT(c, 0x82e8u);
    X86_POLL(c, 0x821cu); goto L_821c;
    x86_fault(c, 0x82d2u, "ran off the end of a function");
}
void f_000082d5(X86Cpu& c) {
    goto L_82d5;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_82d5:
    X86_TICK(c, 22);
    // 0082d5  mov bx, ax
    X86_AT(c, 0x82d5u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 0082d8  lea ecx, [ecx*4]
    X86_AT(c, 0x82d8u);
    c.r[1] = (uint32_t)(c.r[1] * 4);
    // 0082df  mov eax, dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x82dfu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)));
    // 0082e6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x82e6u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0082e8  jmp 0x821c
    X86_AT(c, 0x82e8u);
    X86_POLL(c, 0x821cu); goto L_821c;
    x86_fault(c, 0x82d5u, "ran off the end of a function");
}
void f_000082d8(X86Cpu& c) {
    goto L_82d8;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_82d8:
    X86_TICK(c, 20);
    // 0082d8  lea ecx, [ecx*4]
    X86_AT(c, 0x82d8u);
    c.r[1] = (uint32_t)(c.r[1] * 4);
    // 0082df  mov eax, dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x82dfu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)));
    // 0082e6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x82e6u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0082e8  jmp 0x821c
    X86_AT(c, 0x82e8u);
    X86_POLL(c, 0x821cu); goto L_821c;
    x86_fault(c, 0x82d8u, "ran off the end of a function");
}
void f_000082df(X86Cpu& c) {
    goto L_82df;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_82df:
    X86_TICK(c, 18);
    // 0082df  mov eax, dword ptr gs:[ebp + 0x10c]
    X86_AT(c, 0x82dfu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Cu)));
    // 0082e6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x82e6u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0082e8  jmp 0x821c
    X86_AT(c, 0x82e8u);
    X86_POLL(c, 0x821cu); goto L_821c;
    x86_fault(c, 0x82dfu, "ran off the end of a function");
}
void f_000082e6(X86Cpu& c) {
    goto L_82e6;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_82e6:
    X86_TICK(c, 14);
    // 0082e6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x82e6u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0082e8  jmp 0x821c
    X86_AT(c, 0x82e8u);
    X86_POLL(c, 0x821cu); goto L_821c;
    x86_fault(c, 0x82e6u, "ran off the end of a function");
}
void f_000082e8(X86Cpu& c) {
    goto L_82e8;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_82e8:
    X86_TICK(c, 7);
    // 0082e8  jmp 0x821c
    X86_AT(c, 0x82e8u);
    X86_POLL(c, 0x821cu); goto L_821c;
    x86_fault(c, 0x82e8u, "ran off the end of a function");
}
void f_00008380(X86Cpu& c) {
    X86_TICK(c, 82);
    // 008380  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x8380u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 008384  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8384u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00838c  mul dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x838cu);
    x86_mul(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 008390  movzx edi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8390u);
    c.r[7] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008398  add edi, eax
    X86_AT(c, 0x8398u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 00839a  add edi, dword ptr gs:[ebp]
    X86_AT(c, 0x839au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 00839e  movzx ecx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x839eu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 0083a6  sub cx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x83a6u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))), 0, 2)); }
    // 0083ae  inc ecx
    X86_AT(c, 0x83aeu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0083af  lea edx, [ecx + ecx*2 + 6]
    X86_AT(c, 0x83afu);
    c.r[2] = (uint32_t)(c.r[1] + c.r[1] * 2 + 0x6u);
    // 0083b3  mov byte ptr gs:[ebp + 0x30a], 0xb
    X86_AT(c, 0x83b3u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Au)), 0xBu);
    // 0083bb  lds esi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x83bbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0083c2  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x83c2u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 0083ca  jne 0x83dc
    X86_AT(c, 0x83cau);
    if (x86_cc(c, 5)) { goto L_83dc; }
L_83cc:
    X86_TICK(c, 7);
    // 0083cc  call 0x8430
    X86_AT(c, 0x83ccu);
    push32(c, 0x83d1u); f_00008430(c); X86_RET(c, 0x83d1u);
    X86_TICK(c, 11);
    // 0083d1  add esi, 3
    X86_AT(c, 0x83d1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x3u, 0, 4); }
    // 0083d4  inc edi
    X86_AT(c, 0x83d4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0083d5  dec ecx
    X86_AT(c, 0x83d5u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 0083d6  jne 0x83cc
    X86_AT(c, 0x83d6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x83ccu); goto L_83cc; }
    X86_TICK(c, 10);
    // 0083d8  ret 
    X86_AT(c, 0x83d8u);
    c.eip = pop32(c); return;
L_83dc:
    X86_TICK(c, 21);
    // 0083dc  push ecx
    X86_AT(c, 0x83dcu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0083dd  push edx
    X86_AT(c, 0x83ddu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0083de  push edi
    X86_AT(c, 0x83deu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0083df  mov bx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x83dfu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0083e7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x83e7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0083ef  call 0x7ed8
    X86_AT(c, 0x83efu);
    push32(c, 0x83f4u); f_00007ed8(c); X86_RET(c, 0x83f4u);
    X86_TICK(c, 27);
    // 0083f4  mov ebx, edi
    X86_AT(c, 0x83f4u);
    c.r[3] = c.r[7];
    // 0083f6  mov cx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x83f6u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0083fe  and cl, 0x1f
    X86_AT(c, 0x83feu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x1Fu, 1)); }
    // 008401  mov eax, 0x80000000
    X86_AT(c, 0x8401u);
    c.r[0] = 0x80000000u;
    // 008406  shr eax, cl
    X86_AT(c, 0x8406u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008408  mov dword ptr gs:[ebp + 0x41c], eax
    X86_AT(c, 0x8408u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), c.r[0]);
    // 00840f  pop edi
    X86_AT(c, 0x840fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 008410  pop edx
    X86_AT(c, 0x8410u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008411  pop ecx
    X86_AT(c, 0x8411u);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_8412:
    X86_TICK(c, 11);
    // 008412  push edx
    X86_AT(c, 0x8412u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008413  mov edx, ebx
    X86_AT(c, 0x8413u);
    c.r[2] = c.r[3];
    // 008415  call 0x7f38
    X86_AT(c, 0x8415u);
    push32(c, 0x841au); f_00007f38(c); X86_RET(c, 0x841au);
    X86_TICK(c, 11);
    // 00841a  mov ebx, edx
    X86_AT(c, 0x841au);
    c.r[3] = c.r[2];
    // 00841c  pop edx
    X86_AT(c, 0x841cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00841d  jne 0x8426
    X86_AT(c, 0x841du);
    if (x86_cc(c, 5)) { goto L_8426; }
    X86_TICK(c, 9);
    // 00841f  push ebx
    X86_AT(c, 0x841fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008420  call 0x8430
    X86_AT(c, 0x8420u);
    push32(c, 0x8425u); f_00008430(c); X86_RET(c, 0x8425u);
    X86_TICK(c, 4);
    // 008425  pop ebx
    X86_AT(c, 0x8425u);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_8426:
    X86_TICK(c, 11);
    // 008426  add esi, 3
    X86_AT(c, 0x8426u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x3u, 0, 4); }
    // 008429  inc edi
    X86_AT(c, 0x8429u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00842a  dec ecx
    X86_AT(c, 0x842au);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00842b  jne 0x8412
    X86_AT(c, 0x842bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8412u); goto L_8412; }
    X86_TICK(c, 10);
    // 00842d  ret 
    X86_AT(c, 0x842du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8380u, "ran off the end of a function");
}
void f_00008430(X86Cpu& c) {
    X86_TICK(c, 315);
    // 008430  movzx ax, byte ptr [esi]
    X86_AT(c, 0x8430u);
    s16(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 008434  add al, byte ptr [esi + 3]
    X86_AT(c, 0x8434u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x3u))), 0, 1)); }
    // 008437  add al, byte ptr [esi + 6]
    X86_AT(c, 0x8437u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u))), 0, 1)); }
    // 00843a  add al, byte ptr [esi + edx*1]
    X86_AT(c, 0x843au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2]))), 0, 1)); }
    // 00843d  add al, byte ptr [esi + edx*1 + 6]
    X86_AT(c, 0x843du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] + 0x6u))), 0, 1)); }
    // 008441  add al, byte ptr [esi + edx*2]
    X86_AT(c, 0x8441u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2))), 0, 1)); }
    // 008444  add al, byte ptr [esi + edx*2 + 3]
    X86_AT(c, 0x8444u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2 + 0x3u))), 0, 1)); }
    // 008448  add al, byte ptr [esi + edx*2 + 6]
    X86_AT(c, 0x8448u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2 + 0x6u))), 0, 1)); }
    // 00844c  mov bl, byte ptr [esi + edx*1 + 3]
    X86_AT(c, 0x844cu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] + 0x3u))));
    // 008450  add al, bl
    X86_AT(c, 0x8450u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 008452  add al, bl
    X86_AT(c, 0x8452u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 008454  add al, bl
    X86_AT(c, 0x8454u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 008456  div byte ptr gs:[ebp + 0x30a]
    X86_AT(c, 0x8456u);
    x86_div(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Au))), 1, 0x8456u);
    // 00845d  shrd bx, ax, 2
    X86_AT(c, 0x845du);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[0] & 0xFFFFu), 0x2u, 2, w); if (w) s16(c, 3, r); }
    // 008462  movzx ax, byte ptr [esi + 1]
    X86_AT(c, 0x8462u);
    s16(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1u))));
    // 008467  add al, byte ptr [esi + 4]
    X86_AT(c, 0x8467u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))), 0, 1)); }
    // 00846a  add al, byte ptr [esi + 7]
    X86_AT(c, 0x846au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x7u))), 0, 1)); }
    // 00846d  add al, byte ptr [esi + edx*1 + 1]
    X86_AT(c, 0x846du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] + 0x1u))), 0, 1)); }
    // 008471  add al, byte ptr [esi + edx*1 + 7]
    X86_AT(c, 0x8471u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] + 0x7u))), 0, 1)); }
    // 008475  add al, byte ptr [esi + edx*2 + 1]
    X86_AT(c, 0x8475u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2 + 0x1u))), 0, 1)); }
    // 008479  add al, byte ptr [esi + edx*2 + 4]
    X86_AT(c, 0x8479u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2 + 0x4u))), 0, 1)); }
    // 00847d  add al, byte ptr [esi + edx*2 + 7]
    X86_AT(c, 0x847du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2 + 0x7u))), 0, 1)); }
    // 008481  mov bl, byte ptr [esi + edx*1 + 4]
    X86_AT(c, 0x8481u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] + 0x4u))));
    // 008485  add al, bl
    X86_AT(c, 0x8485u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 008487  add al, bl
    X86_AT(c, 0x8487u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 008489  add al, bl
    X86_AT(c, 0x8489u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 00848b  div byte ptr gs:[ebp + 0x30a]
    X86_AT(c, 0x848bu);
    x86_div(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Au))), 1, 0x848bu);
    // 008492  shrd bx, ax, 3
    X86_AT(c, 0x8492u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[0] & 0xFFFFu), 0x3u, 2, w); if (w) s16(c, 3, r); }
    // 008497  movzx ax, byte ptr [esi + 2]
    X86_AT(c, 0x8497u);
    s16(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u))));
    // 00849c  add al, byte ptr [esi + 5]
    X86_AT(c, 0x849cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x5u))), 0, 1)); }
    // 00849f  add al, byte ptr [esi + 8]
    X86_AT(c, 0x849fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))), 0, 1)); }
    // 0084a2  add al, byte ptr [esi + edx*1 + 2]
    X86_AT(c, 0x84a2u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] + 0x2u))), 0, 1)); }
    // 0084a6  add al, byte ptr [esi + edx*1 + 8]
    X86_AT(c, 0x84a6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] + 0x8u))), 0, 1)); }
    // 0084aa  add al, byte ptr [esi + edx*2 + 2]
    X86_AT(c, 0x84aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2 + 0x2u))), 0, 1)); }
    // 0084ae  add al, byte ptr [esi + edx*2 + 5]
    X86_AT(c, 0x84aeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2 + 0x5u))), 0, 1)); }
    // 0084b2  add al, byte ptr [esi + edx*2 + 8]
    X86_AT(c, 0x84b2u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2 + 0x8u))), 0, 1)); }
    // 0084b6  mov bl, byte ptr [esi + edx*1 + 5]
    X86_AT(c, 0x84b6u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] + 0x5u))));
    // 0084ba  add al, bl
    X86_AT(c, 0x84bau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0084bc  add al, bl
    X86_AT(c, 0x84bcu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0084be  add al, bl
    X86_AT(c, 0x84beu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0084c0  div byte ptr gs:[ebp + 0x30a]
    X86_AT(c, 0x84c0u);
    x86_div(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Au))), 1, 0x84c0u);
    // 0084c7  shrd bx, ax, 3
    X86_AT(c, 0x84c7u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[0] & 0xFFFFu), 0x3u, 2, w); if (w) s16(c, 3, r); }
    // 0084cc  mov byte ptr es:[edi], bh
    X86_AT(c, 0x84ccu);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 7));
    // 0084cf  ret 
    X86_AT(c, 0x84cfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8430u, "ran off the end of a function");
}
void f_000084d0(X86Cpu& c) {
    X86_TICK(c, 82);
    // 0084d0  mov es, word ptr gs:[ebp + 0x2c8]
    X86_AT(c, 0x84d0u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2C8u))) & 0xFFFFu);
    // 0084d7  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x84d7u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 0084df  mul dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x84dfu);
    x86_mul(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 0084e3  movzx edi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x84e3u);
    c.r[7] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 0084eb  add edi, eax
    X86_AT(c, 0x84ebu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 0084ed  add edi, dword ptr gs:[ebp + 0x2c4]
    X86_AT(c, 0x84edu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2C4u))), 0, 4); }
    // 0084f4  movzx ecx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x84f4u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 0084fc  sub cx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x84fcu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))), 0, 2)); }
    // 008504  inc ecx
    X86_AT(c, 0x8504u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008505  lds esi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x8505u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00850c  mov ax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x850cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008514  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x8514u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 008519  jne 0x8522
    X86_AT(c, 0x8519u);
    if (x86_cc(c, 5)) { goto L_8522; }
    X86_TICK(c, 7);
    // 00851b  call 0x8554
    X86_AT(c, 0x851bu);
    push32(c, 0x8520u); f_00008554(c); X86_RET(c, 0x8520u);
    X86_TICK(c, 7);
    // 008520  jmp 0x852f
    X86_AT(c, 0x8520u);
    goto L_852f;
L_8522:
    X86_TICK(c, 13);
    // 008522  sub edi, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x8522u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 0, 4); }
    // 008526  call 0x8554
    X86_AT(c, 0x8526u);
    push32(c, 0x852bu); f_00008554(c); X86_RET(c, 0x852bu);
    X86_TICK(c, 6);
    // 00852b  add edi, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x852bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 0, 4); }
L_852f:
    X86_TICK(c, 7);
    // 00852f  call 0x8554
    X86_AT(c, 0x852fu);
    push32(c, 0x8534u); f_00008554(c); X86_RET(c, 0x8534u);
    X86_TICK(c, 16);
    // 008534  mov ax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8534u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00853c  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x853cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 008541  jne 0x854a
    X86_AT(c, 0x8541u);
    if (x86_cc(c, 5)) { goto L_854a; }
    X86_TICK(c, 7);
    // 008543  call 0x8554
    X86_AT(c, 0x8543u);
    push32(c, 0x8548u); f_00008554(c); X86_RET(c, 0x8548u);
    X86_TICK(c, 7);
    // 008548  jmp 0x8553
    X86_AT(c, 0x8548u);
    goto L_8553;
L_854a:
    X86_TICK(c, 13);
    // 00854a  add edi, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x854au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 0, 4); }
    // 00854e  call 0x8554
    X86_AT(c, 0x854eu);
    push32(c, 0x8553u); f_00008554(c); X86_RET(c, 0x8553u);
L_8553:
    X86_TICK(c, 10);
    // 008553  ret 
    X86_AT(c, 0x8553u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x84d0u, "ran off the end of a function");
}
void f_00008554(X86Cpu& c) {
    X86_TICK(c, 8);
    // 008554  push edi
    X86_AT(c, 0x8554u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008555  push ecx
    X86_AT(c, 0x8555u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008556  mov edx, esi
    X86_AT(c, 0x8556u);
    c.r[2] = c.r[6];
    // 008558  add esi, 3
    X86_AT(c, 0x8558u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x3u, 0, 4); }
L_855b:
    X86_TICK(c, 37);
    // 00855b  mov al, byte ptr es:[edi]
    X86_AT(c, 0x855bu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 00855e  mov bl, al
    X86_AT(c, 0x855eu);
    s8(c, 3, g8(c, 0));
    // 008560  and bl, 3
    X86_AT(c, 0x8560u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0x3u, 1)); }
    // 008563  mov byte ptr [esi], bl
    X86_AT(c, 0x8563u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 3));
    // 008565  mov bl, al
    X86_AT(c, 0x8565u);
    s8(c, 3, g8(c, 0));
    // 008567  shr bl, 2
    X86_AT(c, 0x8567u);
    { uint32_t v = g8(c, 3); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 1, w); if (w) s8(c, 3, r); }
    // 00856a  and bl, 7
    X86_AT(c, 0x856au);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0x7u, 1)); }
    // 00856d  mov byte ptr [esi + 1], bl
    X86_AT(c, 0x856du);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1u)), g8(c, 3));
    // 008570  mov bl, al
    X86_AT(c, 0x8570u);
    s8(c, 3, g8(c, 0));
    // 008572  shr bl, 5
    X86_AT(c, 0x8572u);
    { uint32_t v = g8(c, 3); bool w; uint32_t r = x86_shift(c, 5, v, 0x5u, 1, w); if (w) s8(c, 3, r); }
    // 008575  mov byte ptr [esi + 2], bl
    X86_AT(c, 0x8575u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u)), g8(c, 3));
    // 008578  add esi, 3
    X86_AT(c, 0x8578u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x3u, 0, 4); }
    // 00857b  inc edi
    X86_AT(c, 0x857bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00857c  dec ecx
    X86_AT(c, 0x857cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00857d  jne 0x855b
    X86_AT(c, 0x857du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x855bu); goto L_855b; }
    X86_TICK(c, 44);
    // 00857f  mov ax, word ptr [edx + 3]
    X86_AT(c, 0x857fu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[2] + 0x3u))));
    // 008583  mov word ptr [edx], ax
    X86_AT(c, 0x8583u);
    wr16((c.sbase[3] + (uint32_t)(c.r[2])), (c.r[0] & 0xFFFFu));
    // 008586  mov al, byte ptr [edx + 5]
    X86_AT(c, 0x8586u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x5u))));
    // 008589  mov byte ptr [edx + 2], al
    X86_AT(c, 0x8589u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0x2u)), g8(c, 0));
    // 00858c  mov ax, word ptr [esi - 3]
    X86_AT(c, 0x858cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFDu))));
    // 008590  mov word ptr [esi], ax
    X86_AT(c, 0x8590u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 008593  mov al, byte ptr [esi - 1]
    X86_AT(c, 0x8593u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFFu))));
    // 008596  mov byte ptr [esi + 2], al
    X86_AT(c, 0x8596u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u)), g8(c, 0));
    // 008599  add esi, 3
    X86_AT(c, 0x8599u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x3u, 0, 4); }
    // 00859c  pop ecx
    X86_AT(c, 0x859cu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00859d  pop edi
    X86_AT(c, 0x859du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00859e  ret 
    X86_AT(c, 0x859eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8554u, "ran off the end of a function");
}
void f_000085ac(X86Cpu& c) {
    X86_TICK(c, 82);
    // 0085ac  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x85acu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 0085b0  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x85b0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 0085b8  mul dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x85b8u);
    x86_mul(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 0085bc  movzx edi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x85bcu);
    c.r[7] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 0085c4  lea edi, [eax + edi*2]
    X86_AT(c, 0x85c4u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[7] * 2);
    // 0085c7  add edi, dword ptr gs:[ebp]
    X86_AT(c, 0x85c7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 0085cb  movzx ecx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x85cbu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 0085d3  sub cx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x85d3u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))), 0, 2)); }
    // 0085db  inc ecx
    X86_AT(c, 0x85dbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0085dc  lea edx, [ecx + ecx*2 + 6]
    X86_AT(c, 0x85dcu);
    c.r[2] = (uint32_t)(c.r[1] + c.r[1] * 2 + 0x6u);
    // 0085e0  mov byte ptr gs:[ebp + 0x30a], 0xb
    X86_AT(c, 0x85e0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Au)), 0xBu);
    // 0085e8  lds esi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x85e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 0085ef  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x85efu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 0085f7  jne 0x8608
    X86_AT(c, 0x85f7u);
    if (x86_cc(c, 5)) { goto L_8608; }
L_85f9:
    X86_TICK(c, 7);
    // 0085f9  call 0x865c
    X86_AT(c, 0x85f9u);
    push32(c, 0x85feu); f_0000865c(c); X86_RET(c, 0x85feu);
    X86_TICK(c, 11);
    // 0085fe  add esi, 3
    X86_AT(c, 0x85feu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x3u, 0, 4); }
    // 008601  add edi, 2
    X86_AT(c, 0x8601u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 008604  dec ecx
    X86_AT(c, 0x8604u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 008605  jne 0x85f9
    X86_AT(c, 0x8605u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x85f9u); goto L_85f9; }
    X86_TICK(c, 10);
    // 008607  ret 
    X86_AT(c, 0x8607u);
    c.eip = pop32(c); return;
L_8608:
    X86_TICK(c, 21);
    // 008608  push ecx
    X86_AT(c, 0x8608u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008609  push edx
    X86_AT(c, 0x8609u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00860a  push edi
    X86_AT(c, 0x860au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00860b  mov bx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x860bu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008613  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8613u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00861b  call 0x7ed8
    X86_AT(c, 0x861bu);
    push32(c, 0x8620u); f_00007ed8(c); X86_RET(c, 0x8620u);
    X86_TICK(c, 27);
    // 008620  mov ebx, edi
    X86_AT(c, 0x8620u);
    c.r[3] = c.r[7];
    // 008622  mov cx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8622u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00862a  and cl, 0x1f
    X86_AT(c, 0x862au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x1Fu, 1)); }
    // 00862d  mov eax, 0x80000000
    X86_AT(c, 0x862du);
    c.r[0] = 0x80000000u;
    // 008632  shr eax, cl
    X86_AT(c, 0x8632u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008634  mov dword ptr gs:[ebp + 0x41c], eax
    X86_AT(c, 0x8634u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), c.r[0]);
    // 00863b  pop edi
    X86_AT(c, 0x863bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00863c  pop edx
    X86_AT(c, 0x863cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00863d  pop ecx
    X86_AT(c, 0x863du);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_863e:
    X86_TICK(c, 11);
    // 00863e  push edx
    X86_AT(c, 0x863eu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00863f  mov edx, ebx
    X86_AT(c, 0x863fu);
    c.r[2] = c.r[3];
    // 008641  call 0x7f38
    X86_AT(c, 0x8641u);
    push32(c, 0x8646u); f_00007f38(c); X86_RET(c, 0x8646u);
    X86_TICK(c, 11);
    // 008646  mov ebx, edx
    X86_AT(c, 0x8646u);
    c.r[3] = c.r[2];
    // 008648  pop edx
    X86_AT(c, 0x8648u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008649  jne 0x8652
    X86_AT(c, 0x8649u);
    if (x86_cc(c, 5)) { goto L_8652; }
    X86_TICK(c, 9);
    // 00864b  push ebx
    X86_AT(c, 0x864bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00864c  call 0x865c
    X86_AT(c, 0x864cu);
    push32(c, 0x8651u); f_0000865c(c); X86_RET(c, 0x8651u);
    X86_TICK(c, 4);
    // 008651  pop ebx
    X86_AT(c, 0x8651u);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_8652:
    X86_TICK(c, 11);
    // 008652  add esi, 3
    X86_AT(c, 0x8652u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x3u, 0, 4); }
    // 008655  add edi, 2
    X86_AT(c, 0x8655u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 008658  dec ecx
    X86_AT(c, 0x8658u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 008659  jne 0x863e
    X86_AT(c, 0x8659u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x863eu); goto L_863e; }
    X86_TICK(c, 10);
    // 00865b  ret 
    X86_AT(c, 0x865bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x85acu, "ran off the end of a function");
}
void f_0000865c(X86Cpu& c) {
    X86_TICK(c, 368);
    // 00865c  movzx ax, byte ptr [esi]
    X86_AT(c, 0x865cu);
    s16(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 008660  add al, byte ptr [esi + 3]
    X86_AT(c, 0x8660u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x3u))), 0, 1)); }
    // 008663  add al, byte ptr [esi + 6]
    X86_AT(c, 0x8663u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u))), 0, 1)); }
    // 008666  add al, byte ptr [esi + edx*1]
    X86_AT(c, 0x8666u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2]))), 0, 1)); }
    // 008669  add al, byte ptr [esi + edx*1 + 6]
    X86_AT(c, 0x8669u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] + 0x6u))), 0, 1)); }
    // 00866d  add al, byte ptr [esi + edx*2]
    X86_AT(c, 0x866du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2))), 0, 1)); }
    // 008670  add al, byte ptr [esi + edx*2 + 3]
    X86_AT(c, 0x8670u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2 + 0x3u))), 0, 1)); }
    // 008674  add al, byte ptr [esi + edx*2 + 6]
    X86_AT(c, 0x8674u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2 + 0x6u))), 0, 1)); }
    // 008678  add al, byte ptr [esi + edx*1 + 3]
    X86_AT(c, 0x8678u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] + 0x3u))), 0, 1)); }
    // 00867c  adc ah, 0
    X86_AT(c, 0x867cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x0u, c.fl & 1, 1)); }
    // 00867f  add al, byte ptr [esi + edx*1 + 3]
    X86_AT(c, 0x867fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] + 0x3u))), 0, 1)); }
    // 008683  adc ah, 0
    X86_AT(c, 0x8683u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x0u, c.fl & 1, 1)); }
    // 008686  add al, byte ptr [esi + edx*1 + 3]
    X86_AT(c, 0x8686u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] + 0x3u))), 0, 1)); }
    // 00868a  adc ah, 0
    X86_AT(c, 0x868au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x0u, c.fl & 1, 1)); }
    // 00868d  div byte ptr gs:[ebp + 0x30a]
    X86_AT(c, 0x868du);
    x86_div(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Au))), 1, 0x868du);
    // 008694  shrd bx, ax, 5
    X86_AT(c, 0x8694u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[0] & 0xFFFFu), 0x5u, 2, w); if (w) s16(c, 3, r); }
    // 008699  movzx ax, byte ptr [esi + 1]
    X86_AT(c, 0x8699u);
    s16(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1u))));
    // 00869e  add al, byte ptr [esi + 4]
    X86_AT(c, 0x869eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))), 0, 1)); }
    // 0086a1  add al, byte ptr [esi + 7]
    X86_AT(c, 0x86a1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x7u))), 0, 1)); }
    // 0086a4  add al, byte ptr [esi + edx*1 + 1]
    X86_AT(c, 0x86a4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] + 0x1u))), 0, 1)); }
    // 0086a8  add al, byte ptr [esi + edx*1 + 7]
    X86_AT(c, 0x86a8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] + 0x7u))), 0, 1)); }
    // 0086ac  add al, byte ptr [esi + edx*2 + 1]
    X86_AT(c, 0x86acu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2 + 0x1u))), 0, 1)); }
    // 0086b0  add al, byte ptr [esi + edx*2 + 4]
    X86_AT(c, 0x86b0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2 + 0x4u))), 0, 1)); }
    // 0086b4  add al, byte ptr [esi + edx*2 + 7]
    X86_AT(c, 0x86b4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2 + 0x7u))), 0, 1)); }
    // 0086b8  add al, byte ptr [esi + edx*1 + 4]
    X86_AT(c, 0x86b8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] + 0x4u))), 0, 1)); }
    // 0086bc  adc ah, 0
    X86_AT(c, 0x86bcu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x0u, c.fl & 1, 1)); }
    // 0086bf  add al, byte ptr [esi + edx*1 + 4]
    X86_AT(c, 0x86bfu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] + 0x4u))), 0, 1)); }
    // 0086c3  adc ah, 0
    X86_AT(c, 0x86c3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x0u, c.fl & 1, 1)); }
    // 0086c6  add al, byte ptr [esi + edx*1 + 4]
    X86_AT(c, 0x86c6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] + 0x4u))), 0, 1)); }
    // 0086ca  adc ah, 0
    X86_AT(c, 0x86cau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x0u, c.fl & 1, 1)); }
    // 0086cd  div byte ptr gs:[ebp + 0x30a]
    X86_AT(c, 0x86cdu);
    x86_div(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Au))), 1, 0x86cdu);
    // 0086d4  shrd bx, ax, 5
    X86_AT(c, 0x86d4u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[0] & 0xFFFFu), 0x5u, 2, w); if (w) s16(c, 3, r); }
    // 0086d9  movzx ax, byte ptr [esi + 2]
    X86_AT(c, 0x86d9u);
    s16(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u))));
    // 0086de  add al, byte ptr [esi + 5]
    X86_AT(c, 0x86deu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x5u))), 0, 1)); }
    // 0086e1  add al, byte ptr [esi + 8]
    X86_AT(c, 0x86e1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))), 0, 1)); }
    // 0086e4  add al, byte ptr [esi + edx*1 + 2]
    X86_AT(c, 0x86e4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] + 0x2u))), 0, 1)); }
    // 0086e8  add al, byte ptr [esi + edx*1 + 8]
    X86_AT(c, 0x86e8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] + 0x8u))), 0, 1)); }
    // 0086ec  add al, byte ptr [esi + edx*2 + 2]
    X86_AT(c, 0x86ecu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2 + 0x2u))), 0, 1)); }
    // 0086f0  add al, byte ptr [esi + edx*2 + 5]
    X86_AT(c, 0x86f0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2 + 0x5u))), 0, 1)); }
    // 0086f4  add al, byte ptr [esi + edx*2 + 8]
    X86_AT(c, 0x86f4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2 + 0x8u))), 0, 1)); }
    // 0086f8  add al, byte ptr [esi + edx*1 + 5]
    X86_AT(c, 0x86f8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] + 0x5u))), 0, 1)); }
    // 0086fc  adc ah, 0
    X86_AT(c, 0x86fcu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x0u, c.fl & 1, 1)); }
    // 0086ff  add al, byte ptr [esi + edx*1 + 5]
    X86_AT(c, 0x86ffu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] + 0x5u))), 0, 1)); }
    // 008703  adc ah, 0
    X86_AT(c, 0x8703u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x0u, c.fl & 1, 1)); }
    // 008706  add al, byte ptr [esi + edx*1 + 5]
    X86_AT(c, 0x8706u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] + 0x5u))), 0, 1)); }
    // 00870a  adc ah, 0
    X86_AT(c, 0x870au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x0u, c.fl & 1, 1)); }
    // 00870d  div byte ptr gs:[ebp + 0x30a]
    X86_AT(c, 0x870du);
    x86_div(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Au))), 1, 0x870du);
    // 008714  shrd bx, ax, 5
    X86_AT(c, 0x8714u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[0] & 0xFFFFu), 0x5u, 2, w); if (w) s16(c, 3, r); }
    // 008719  shr bx, 1
    X86_AT(c, 0x8719u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00871c  mov ax, word ptr es:[edi]
    X86_AT(c, 0x871cu);
    s16(c, 0, rd16((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 008720  and ax, 0x8000
    X86_AT(c, 0x8720u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x8000u, 2)); }
    // 008724  or ax, bx
    X86_AT(c, 0x8724u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | (c.r[3] & 0xFFFFu), 2)); }
    // 008727  mov word ptr es:[edi], ax
    X86_AT(c, 0x8727u);
    wr16((c.sbase[0] + (uint32_t)(c.r[7])), (c.r[0] & 0xFFFFu));
    // 00872b  ret 
    X86_AT(c, 0x872bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x865cu, "ran off the end of a function");
}
void f_0000872c(X86Cpu& c) {
    X86_TICK(c, 82);
    // 00872c  mov es, word ptr gs:[ebp + 0x2c8]
    X86_AT(c, 0x872cu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2C8u))) & 0xFFFFu);
    // 008733  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8733u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00873b  mul dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x873bu);
    x86_mul(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00873f  movzx edi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x873fu);
    c.r[7] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008747  lea edi, [eax + edi*2]
    X86_AT(c, 0x8747u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[7] * 2);
    // 00874a  add edi, dword ptr gs:[ebp + 0x2c4]
    X86_AT(c, 0x874au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2C4u))), 0, 4); }
    // 008751  movzx ecx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8751u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008759  sub cx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8759u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))), 0, 2)); }
    // 008761  inc ecx
    X86_AT(c, 0x8761u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008762  lds esi, fword ptr gs:[ebp + 0x398]
    X86_AT(c, 0x8762u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x398u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 008769  mov ax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8769u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008771  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0x8771u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 008776  jne 0x877f
    X86_AT(c, 0x8776u);
    if (x86_cc(c, 5)) { goto L_877f; }
    X86_TICK(c, 7);
    // 008778  call 0x87b4
    X86_AT(c, 0x8778u);
    push32(c, 0x877du); f_000087b4(c); X86_RET(c, 0x877du);
    X86_TICK(c, 7);
    // 00877d  jmp 0x878c
    X86_AT(c, 0x877du);
    goto L_878c;
L_877f:
    X86_TICK(c, 13);
    // 00877f  sub edi, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x877fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 0, 4); }
    // 008783  call 0x87b4
    X86_AT(c, 0x8783u);
    push32(c, 0x8788u); f_000087b4(c); X86_RET(c, 0x8788u);
    X86_TICK(c, 6);
    // 008788  add edi, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x8788u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 0, 4); }
L_878c:
    X86_TICK(c, 7);
    // 00878c  call 0x87b4
    X86_AT(c, 0x878cu);
    push32(c, 0x8791u); f_000087b4(c); X86_RET(c, 0x8791u);
    X86_TICK(c, 16);
    // 008791  mov ax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8791u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008799  cmp word ptr gs:[ebp + 0x2e], ax
    X86_AT(c, 0x8799u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00879e  jne 0x87a7
    X86_AT(c, 0x879eu);
    if (x86_cc(c, 5)) { goto L_87a7; }
    X86_TICK(c, 7);
    // 0087a0  call 0x87b4
    X86_AT(c, 0x87a0u);
    push32(c, 0x87a5u); f_000087b4(c); X86_RET(c, 0x87a5u);
    X86_TICK(c, 7);
    // 0087a5  jmp 0x87b0
    X86_AT(c, 0x87a5u);
    goto L_87b0;
L_87a7:
    X86_TICK(c, 13);
    // 0087a7  add edi, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x87a7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 0, 4); }
    // 0087ab  call 0x87b4
    X86_AT(c, 0x87abu);
    push32(c, 0x87b0u); f_000087b4(c); X86_RET(c, 0x87b0u);
L_87b0:
    X86_TICK(c, 10);
    // 0087b0  ret 
    X86_AT(c, 0x87b0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x872cu, "ran off the end of a function");
}
void f_000087b4(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0087b4  push edi
    X86_AT(c, 0x87b4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0087b5  push ecx
    X86_AT(c, 0x87b5u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0087b6  mov edx, esi
    X86_AT(c, 0x87b6u);
    c.r[2] = c.r[6];
    // 0087b8  add esi, 3
    X86_AT(c, 0x87b8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x3u, 0, 4); }
L_87bb:
    X86_TICK(c, 39);
    // 0087bb  mov ax, word ptr es:[edi]
    X86_AT(c, 0x87bbu);
    s16(c, 0, rd16((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 0087bf  mov bx, ax
    X86_AT(c, 0x87bfu);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 0087c2  and bl, 0x1f
    X86_AT(c, 0x87c2u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0x1Fu, 1)); }
    // 0087c5  mov byte ptr [esi], bl
    X86_AT(c, 0x87c5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 3));
    // 0087c7  mov bx, ax
    X86_AT(c, 0x87c7u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 0087ca  shr bx, 5
    X86_AT(c, 0x87cau);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x5u, 2, w); if (w) s16(c, 3, r); }
    // 0087ce  and bl, 0x1f
    X86_AT(c, 0x87ceu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0x1Fu, 1)); }
    // 0087d1  mov byte ptr [esi + 1], bl
    X86_AT(c, 0x87d1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x1u)), g8(c, 3));
    // 0087d4  mov bx, ax
    X86_AT(c, 0x87d4u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 0087d7  shr bx, 0xa
    X86_AT(c, 0x87d7u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0xAu, 2, w); if (w) s16(c, 3, r); }
    // 0087db  and bl, 0x1f
    X86_AT(c, 0x87dbu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & 0x1Fu, 1)); }
    // 0087de  mov byte ptr [esi + 2], bl
    X86_AT(c, 0x87deu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u)), g8(c, 3));
    // 0087e1  add esi, 3
    X86_AT(c, 0x87e1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x3u, 0, 4); }
    // 0087e4  add edi, 2
    X86_AT(c, 0x87e4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 0087e7  dec ecx
    X86_AT(c, 0x87e7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 0087e8  jne 0x87bb
    X86_AT(c, 0x87e8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x87bbu); goto L_87bb; }
    X86_TICK(c, 44);
    // 0087ea  mov ax, word ptr [edx + 3]
    X86_AT(c, 0x87eau);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[2] + 0x3u))));
    // 0087ee  mov word ptr [edx], ax
    X86_AT(c, 0x87eeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[2])), (c.r[0] & 0xFFFFu));
    // 0087f1  mov al, byte ptr [edx + 5]
    X86_AT(c, 0x87f1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x5u))));
    // 0087f4  mov byte ptr [edx + 2], al
    X86_AT(c, 0x87f4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0x2u)), g8(c, 0));
    // 0087f7  mov ax, word ptr [esi - 3]
    X86_AT(c, 0x87f7u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFDu))));
    // 0087fb  mov word ptr [esi], ax
    X86_AT(c, 0x87fbu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6])), (c.r[0] & 0xFFFFu));
    // 0087fe  mov al, byte ptr [esi - 1]
    X86_AT(c, 0x87feu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFFu))));
    // 008801  mov byte ptr [esi + 2], al
    X86_AT(c, 0x8801u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0x2u)), g8(c, 0));
    // 008804  add esi, 3
    X86_AT(c, 0x8804u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x3u, 0, 4); }
    // 008807  pop ecx
    X86_AT(c, 0x8807u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 008808  pop edi
    X86_AT(c, 0x8808u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 008809  ret 
    X86_AT(c, 0x8809u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x87b4u, "ran off the end of a function");
}
void f_00008903(X86Cpu& c) {
    X86_TICK(c, 51);
    // 008903  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8903u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 00890b  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x890bu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008913  inc ecx
    X86_AT(c, 0x8913u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008914  mov edx, ecx
    X86_AT(c, 0x8914u);
    c.r[2] = c.r[1];
    // 008916  shr ecx, 3
    X86_AT(c, 0x8916u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 008919  mov ebx, ecx
    X86_AT(c, 0x8919u);
    c.r[3] = c.r[1];
    // 00891b  shr ecx, 2
    X86_AT(c, 0x891bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00891e  sub eax, eax
    X86_AT(c, 0x891eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008920  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8920u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008922  mov ecx, ebx
    X86_AT(c, 0x8922u);
    c.r[1] = c.r[3];
    // 008924  and ecx, 3
    X86_AT(c, 0x8924u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 008927  stosb byte ptr es:[edi], al
    X86_AT(c, 0x8927u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 008929  and edx, 7
    X86_AT(c, 0x8929u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 00892c  je 0x8939
    X86_AT(c, 0x892cu);
    if (x86_cc(c, 4)) { goto L_8939; }
    X86_TICK(c, 13);
    // 00892e  mov al, byte ptr cs:[edx + 0xc3dc]
    X86_AT(c, 0x892eu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[2] + 0xC3DCu))));
    // 008935  and byte ptr es:[edi], al
    X86_AT(c, 0x8935u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 0), 1)); }
    // 008938  inc edi
    X86_AT(c, 0x8938u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_8939:
    X86_TICK(c, 10);
    // 008939  ret 
    X86_AT(c, 0x8939u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8903u, "ran off the end of a function");
}
void f_00008947(X86Cpu& c) {
    X86_TICK(c, 49);
    // 008947  mov esi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x8947u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 00894e  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x894eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008956  and eax, 0xffe0
    X86_AT(c, 0x8956u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFE0u, 4); }
    // 00895b  mov bx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x895bu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))));
    // 008963  and bx, 0xffe0
    X86_AT(c, 0x8963u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 008968  sub ax, bx
    X86_AT(c, 0x8968u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00896b  shr eax, 3
    X86_AT(c, 0x896bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00896e  add esi, eax
    X86_AT(c, 0x896eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 008970  mov cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8970u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))));
    // 008978  and cl, 0x1f
    X86_AT(c, 0x8978u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x1Fu, 1)); }
    // 00897b  mov byte ptr gs:[ebp + 0x22b], cl
    X86_AT(c, 0x897bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu)), g8(c, 1));
    // 008982  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8982u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008989  and bx, 0xffe0
    X86_AT(c, 0x8989u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 00898e  shld eax, ebx, 0x10
    X86_AT(c, 0x898eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008992  and ax, 0xffe0
    X86_AT(c, 0x8992u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 008996  cmp bx, ax
    X86_AT(c, 0x8996u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 008999  je 0x8aac
    X86_AT(c, 0x8999u);
    if (x86_cc(c, 4)) { goto L_8aac; }
    X86_TICK(c, 57);
    // 00899f  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x899fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0089a7  and eax, 0x1f
    X86_AT(c, 0x89a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0089ac  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x89acu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0089b4  push edx
    X86_AT(c, 0x89b4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0089b5  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x89b5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 0089b8  xchg dl, dh
    X86_AT(c, 0x89b8u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 0089ba  rol edx, 0x10
    X86_AT(c, 0x89bau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0089bd  xchg dl, dh
    X86_AT(c, 0x89bdu);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 0089bf  mov eax, dword ptr [esi]
    X86_AT(c, 0x89bfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0089c1  xchg al, ah
    X86_AT(c, 0x89c1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0089c3  rol eax, 0x10
    X86_AT(c, 0x89c3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0089c6  xchg al, ah
    X86_AT(c, 0x89c6u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0089c8  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x89c8u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 0089cf  shrd eax, edx, cl
    X86_AT(c, 0x89cfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 0089d2  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x89d2u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 0089da  jne 0x89de
    X86_AT(c, 0x89dau);
    if (x86_cc(c, 5)) { goto L_89de; }
    X86_TICK(c, 2);
    // 0089dc  not eax
    X86_AT(c, 0x89dcu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_89de:
    X86_TICK(c, 21);
    // 0089de  pop edx
    X86_AT(c, 0x89deu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0089df  and eax, edx
    X86_AT(c, 0x89dfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 0089e1  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x89e1u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0089e9  push ebx
    X86_AT(c, 0x89e9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0089ea  push esi
    X86_AT(c, 0x89eau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0089eb  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x89ebu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x89f2u); x86_call(c, t); X86_RET(c, 0x89f2u); }
    X86_TICK(c, 22);
    // 0089f2  pop esi
    X86_AT(c, 0x89f2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0089f3  pop ebx
    X86_AT(c, 0x89f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0089f4  add esi, 4
    X86_AT(c, 0x89f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
L_8aac:
    X86_TICK(c, 68);
    // 008aac  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8aacu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008ab3  shld ecx, eax, 0x10
    X86_AT(c, 0x8ab3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 008ab7  and eax, 0x1f
    X86_AT(c, 0x8ab7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008abc  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8abcu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008ac4  and ecx, 0x1f
    X86_AT(c, 0x8ac4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008ac7  and edx, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8ac7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008acf  push edx
    X86_AT(c, 0x8acfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008ad0  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8ad0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008ad3  xchg dl, dh
    X86_AT(c, 0x8ad3u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ad5  rol edx, 0x10
    X86_AT(c, 0x8ad5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008ad8  xchg dl, dh
    X86_AT(c, 0x8ad8u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ada  mov eax, dword ptr [esi]
    X86_AT(c, 0x8adau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008adc  xchg al, ah
    X86_AT(c, 0x8adcu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ade  rol eax, 0x10
    X86_AT(c, 0x8adeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008ae1  xchg al, ah
    X86_AT(c, 0x8ae1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ae3  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8ae3u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008aea  shrd eax, edx, cl
    X86_AT(c, 0x8aeau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008aed  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8aedu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008af5  jne 0x8af9
    X86_AT(c, 0x8af5u);
    if (x86_cc(c, 5)) { goto L_8af9; }
    X86_TICK(c, 2);
    // 008af7  not eax
    X86_AT(c, 0x8af7u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8af9:
    X86_TICK(c, 17);
    // 008af9  pop edx
    X86_AT(c, 0x8af9u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008afa  and eax, edx
    X86_AT(c, 0x8afau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008afc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8afcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008b04  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8b04u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8b0bu); x86_call(c, t); X86_RET(c, 0x8b0bu); }
    X86_TICK(c, 10);
    // 008b0b  ret 
    X86_AT(c, 0x8b0bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8947u, "ran off the end of a function");
}
void f_0000894e(X86Cpu& c) {
    X86_TICK(c, 45);
    // 00894e  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x894eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008956  and eax, 0xffe0
    X86_AT(c, 0x8956u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFE0u, 4); }
    // 00895b  mov bx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x895bu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))));
    // 008963  and bx, 0xffe0
    X86_AT(c, 0x8963u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 008968  sub ax, bx
    X86_AT(c, 0x8968u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00896b  shr eax, 3
    X86_AT(c, 0x896bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00896e  add esi, eax
    X86_AT(c, 0x896eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 008970  mov cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8970u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))));
    // 008978  and cl, 0x1f
    X86_AT(c, 0x8978u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x1Fu, 1)); }
    // 00897b  mov byte ptr gs:[ebp + 0x22b], cl
    X86_AT(c, 0x897bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu)), g8(c, 1));
    // 008982  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8982u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008989  and bx, 0xffe0
    X86_AT(c, 0x8989u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 00898e  shld eax, ebx, 0x10
    X86_AT(c, 0x898eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008992  and ax, 0xffe0
    X86_AT(c, 0x8992u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 008996  cmp bx, ax
    X86_AT(c, 0x8996u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 008999  je 0x8aac
    X86_AT(c, 0x8999u);
    if (x86_cc(c, 4)) { goto L_8aac; }
    X86_TICK(c, 57);
    // 00899f  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x899fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0089a7  and eax, 0x1f
    X86_AT(c, 0x89a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0089ac  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x89acu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0089b4  push edx
    X86_AT(c, 0x89b4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0089b5  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x89b5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 0089b8  xchg dl, dh
    X86_AT(c, 0x89b8u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 0089ba  rol edx, 0x10
    X86_AT(c, 0x89bau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0089bd  xchg dl, dh
    X86_AT(c, 0x89bdu);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 0089bf  mov eax, dword ptr [esi]
    X86_AT(c, 0x89bfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0089c1  xchg al, ah
    X86_AT(c, 0x89c1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0089c3  rol eax, 0x10
    X86_AT(c, 0x89c3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0089c6  xchg al, ah
    X86_AT(c, 0x89c6u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0089c8  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x89c8u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 0089cf  shrd eax, edx, cl
    X86_AT(c, 0x89cfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 0089d2  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x89d2u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 0089da  jne 0x89de
    X86_AT(c, 0x89dau);
    if (x86_cc(c, 5)) { goto L_89de; }
    X86_TICK(c, 2);
    // 0089dc  not eax
    X86_AT(c, 0x89dcu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_89de:
    X86_TICK(c, 21);
    // 0089de  pop edx
    X86_AT(c, 0x89deu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0089df  and eax, edx
    X86_AT(c, 0x89dfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 0089e1  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x89e1u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0089e9  push ebx
    X86_AT(c, 0x89e9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0089ea  push esi
    X86_AT(c, 0x89eau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0089eb  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x89ebu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x89f2u); x86_call(c, t); X86_RET(c, 0x89f2u); }
    X86_TICK(c, 22);
    // 0089f2  pop esi
    X86_AT(c, 0x89f2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0089f3  pop ebx
    X86_AT(c, 0x89f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0089f4  add esi, 4
    X86_AT(c, 0x89f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
L_8aac:
    X86_TICK(c, 68);
    // 008aac  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8aacu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008ab3  shld ecx, eax, 0x10
    X86_AT(c, 0x8ab3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 008ab7  and eax, 0x1f
    X86_AT(c, 0x8ab7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008abc  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8abcu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008ac4  and ecx, 0x1f
    X86_AT(c, 0x8ac4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008ac7  and edx, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8ac7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008acf  push edx
    X86_AT(c, 0x8acfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008ad0  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8ad0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008ad3  xchg dl, dh
    X86_AT(c, 0x8ad3u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ad5  rol edx, 0x10
    X86_AT(c, 0x8ad5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008ad8  xchg dl, dh
    X86_AT(c, 0x8ad8u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ada  mov eax, dword ptr [esi]
    X86_AT(c, 0x8adau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008adc  xchg al, ah
    X86_AT(c, 0x8adcu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ade  rol eax, 0x10
    X86_AT(c, 0x8adeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008ae1  xchg al, ah
    X86_AT(c, 0x8ae1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ae3  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8ae3u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008aea  shrd eax, edx, cl
    X86_AT(c, 0x8aeau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008aed  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8aedu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008af5  jne 0x8af9
    X86_AT(c, 0x8af5u);
    if (x86_cc(c, 5)) { goto L_8af9; }
    X86_TICK(c, 2);
    // 008af7  not eax
    X86_AT(c, 0x8af7u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8af9:
    X86_TICK(c, 17);
    // 008af9  pop edx
    X86_AT(c, 0x8af9u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008afa  and eax, edx
    X86_AT(c, 0x8afau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008afc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8afcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008b04  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8b04u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8b0bu); x86_call(c, t); X86_RET(c, 0x8b0bu); }
    X86_TICK(c, 10);
    // 008b0b  ret 
    X86_AT(c, 0x8b0bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x894eu, "ran off the end of a function");
}
void f_00008956(X86Cpu& c) {
    X86_TICK(c, 41);
    // 008956  and eax, 0xffe0
    X86_AT(c, 0x8956u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFE0u, 4); }
    // 00895b  mov bx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x895bu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))));
    // 008963  and bx, 0xffe0
    X86_AT(c, 0x8963u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 008968  sub ax, bx
    X86_AT(c, 0x8968u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00896b  shr eax, 3
    X86_AT(c, 0x896bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00896e  add esi, eax
    X86_AT(c, 0x896eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 008970  mov cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8970u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))));
    // 008978  and cl, 0x1f
    X86_AT(c, 0x8978u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x1Fu, 1)); }
    // 00897b  mov byte ptr gs:[ebp + 0x22b], cl
    X86_AT(c, 0x897bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu)), g8(c, 1));
    // 008982  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8982u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008989  and bx, 0xffe0
    X86_AT(c, 0x8989u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 00898e  shld eax, ebx, 0x10
    X86_AT(c, 0x898eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008992  and ax, 0xffe0
    X86_AT(c, 0x8992u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 008996  cmp bx, ax
    X86_AT(c, 0x8996u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 008999  je 0x8aac
    X86_AT(c, 0x8999u);
    if (x86_cc(c, 4)) { goto L_8aac; }
    X86_TICK(c, 57);
    // 00899f  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x899fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0089a7  and eax, 0x1f
    X86_AT(c, 0x89a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0089ac  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x89acu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0089b4  push edx
    X86_AT(c, 0x89b4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0089b5  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x89b5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 0089b8  xchg dl, dh
    X86_AT(c, 0x89b8u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 0089ba  rol edx, 0x10
    X86_AT(c, 0x89bau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0089bd  xchg dl, dh
    X86_AT(c, 0x89bdu);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 0089bf  mov eax, dword ptr [esi]
    X86_AT(c, 0x89bfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0089c1  xchg al, ah
    X86_AT(c, 0x89c1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0089c3  rol eax, 0x10
    X86_AT(c, 0x89c3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0089c6  xchg al, ah
    X86_AT(c, 0x89c6u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0089c8  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x89c8u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 0089cf  shrd eax, edx, cl
    X86_AT(c, 0x89cfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 0089d2  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x89d2u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 0089da  jne 0x89de
    X86_AT(c, 0x89dau);
    if (x86_cc(c, 5)) { goto L_89de; }
    X86_TICK(c, 2);
    // 0089dc  not eax
    X86_AT(c, 0x89dcu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_89de:
    X86_TICK(c, 21);
    // 0089de  pop edx
    X86_AT(c, 0x89deu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0089df  and eax, edx
    X86_AT(c, 0x89dfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 0089e1  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x89e1u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0089e9  push ebx
    X86_AT(c, 0x89e9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0089ea  push esi
    X86_AT(c, 0x89eau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0089eb  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x89ebu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x89f2u); x86_call(c, t); X86_RET(c, 0x89f2u); }
    X86_TICK(c, 22);
    // 0089f2  pop esi
    X86_AT(c, 0x89f2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0089f3  pop ebx
    X86_AT(c, 0x89f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0089f4  add esi, 4
    X86_AT(c, 0x89f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
L_8aac:
    X86_TICK(c, 68);
    // 008aac  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8aacu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008ab3  shld ecx, eax, 0x10
    X86_AT(c, 0x8ab3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 008ab7  and eax, 0x1f
    X86_AT(c, 0x8ab7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008abc  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8abcu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008ac4  and ecx, 0x1f
    X86_AT(c, 0x8ac4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008ac7  and edx, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8ac7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008acf  push edx
    X86_AT(c, 0x8acfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008ad0  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8ad0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008ad3  xchg dl, dh
    X86_AT(c, 0x8ad3u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ad5  rol edx, 0x10
    X86_AT(c, 0x8ad5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008ad8  xchg dl, dh
    X86_AT(c, 0x8ad8u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ada  mov eax, dword ptr [esi]
    X86_AT(c, 0x8adau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008adc  xchg al, ah
    X86_AT(c, 0x8adcu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ade  rol eax, 0x10
    X86_AT(c, 0x8adeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008ae1  xchg al, ah
    X86_AT(c, 0x8ae1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ae3  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8ae3u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008aea  shrd eax, edx, cl
    X86_AT(c, 0x8aeau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008aed  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8aedu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008af5  jne 0x8af9
    X86_AT(c, 0x8af5u);
    if (x86_cc(c, 5)) { goto L_8af9; }
    X86_TICK(c, 2);
    // 008af7  not eax
    X86_AT(c, 0x8af7u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8af9:
    X86_TICK(c, 17);
    // 008af9  pop edx
    X86_AT(c, 0x8af9u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008afa  and eax, edx
    X86_AT(c, 0x8afau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008afc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8afcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008b04  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8b04u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8b0bu); x86_call(c, t); X86_RET(c, 0x8b0bu); }
    X86_TICK(c, 10);
    // 008b0b  ret 
    X86_AT(c, 0x8b0bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8956u, "ran off the end of a function");
}
}
