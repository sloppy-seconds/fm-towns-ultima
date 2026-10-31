#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00001f4c(X86Cpu& c) {
    X86_TICK(c, 10);
    // 001f4c  ret 
    X86_AT(c, 0x1f4cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1f4cu, "ran off the end of a function");
}
void f_00001f50(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001f50  cmp al, 1
    X86_AT(c, 0x1f50u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001f52  ja 0x1f6a
    X86_AT(c, 0x1f52u);
    if (x86_cc(c, 7)) { goto L_1f6a; }
    X86_TICK(c, 17);
    // 001f54  movzx eax, al
    X86_AT(c, 0x1f54u);
    c.r[0] = g8(c, 0);
    // 001f57  mov word ptr gs:[ebp + eax*4 + 0x350], dx
    X86_AT(c, 0x1f57u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x350u)), (c.r[2] & 0xFFFFu));
    // 001f60  mov word ptr gs:[ebp + eax*4 + 0x352], bx
    X86_AT(c, 0x1f60u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x352u)), (c.r[3] & 0xFFFFu));
    // 001f69  ret 
    X86_AT(c, 0x1f69u);
    c.eip = pop32(c); return;
L_1f6a:
    X86_TICK(c, 12);
    // 001f6a  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x1f6au);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 001f6f  ret 
    X86_AT(c, 0x1f6fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1f50u, "ran off the end of a function");
}
void f_00001f70(X86Cpu& c) {
    X86_TICK(c, 12);
    // 001f70  mov word ptr gs:[ebp + 0x338], dx
    X86_AT(c, 0x1f70u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u)), (c.r[2] & 0xFFFFu));
    // 001f78  ret 
    X86_AT(c, 0x1f78u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1f70u, "ran off the end of a function");
}
void f_00001f78(X86Cpu& c) {
    X86_TICK(c, 10);
    // 001f78  ret 
    X86_AT(c, 0x1f78u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1f78u, "ran off the end of a function");
}
void f_00001f7c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 001f7c  test byte ptr gs:[ebp + 0x109], 0xc
    X86_AT(c, 0x1f7cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x109u))) & 0xCu, 1);
    // 001f84  je 0x1fac
    X86_AT(c, 0x1f84u);
    if (x86_cc(c, 4)) { goto L_1fac; }
L_1f86:
    X86_TICK(c, 25);
    // 001f86  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x1f86u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 001f8a  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x1f8au);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 001f8e  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1f8eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001f96  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1f96u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001f9a  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1f9au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 001f9e  call 0x1fd4
    X86_AT(c, 0x1f9eu);
    push32(c, 0x1fa3u); f_00001fd4(c); X86_RET(c, 0x1fa3u);
    X86_TICK(c, 20);
    // 001fa3  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x1fa3u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 001fa7  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x1fa7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
    // 001fab  ret 
    X86_AT(c, 0x1fabu);
    c.eip = pop32(c); return;
L_1fac:
    X86_TICK(c, 12);
    // 001fac  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x1facu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 001fb4  jne 0x1f86
    X86_AT(c, 0x1fb4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1f86u); goto L_1f86; }
    X86_TICK(c, 60);
    // 001fb6  les edi, fword ptr gs:[ebp]
    X86_AT(c, 0x1fb6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 001fba  mov eax, dword ptr gs:[ebp + 0x114]
    X86_AT(c, 0x1fbau);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x114u)));
    // 001fc1  movzx ecx, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1fc1u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001fc6  inc ecx
    X86_AT(c, 0x1fc6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 001fc7  imul ecx, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x1fc7u);
    c.r[1] = x86_imul2(c, c.r[1], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 001fcc  shr ecx, 2
    X86_AT(c, 0x1fccu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 001fcf  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x1fcfu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 001fd1  ret 
    X86_AT(c, 0x1fd1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1f7cu, "ran off the end of a function");
}
void f_00001f84(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001f84  je 0x1fac
    X86_AT(c, 0x1f84u);
    if (x86_cc(c, 4)) { goto L_1fac; }
L_1f86:
    X86_TICK(c, 25);
    // 001f86  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x1f86u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 001f8a  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x1f8au);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 001f8e  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1f8eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001f96  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1f96u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001f9a  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1f9au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 001f9e  call 0x1fd4
    X86_AT(c, 0x1f9eu);
    push32(c, 0x1fa3u); f_00001fd4(c); X86_RET(c, 0x1fa3u);
    X86_TICK(c, 20);
    // 001fa3  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x1fa3u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 001fa7  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x1fa7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
    // 001fab  ret 
    X86_AT(c, 0x1fabu);
    c.eip = pop32(c); return;
L_1fac:
    X86_TICK(c, 12);
    // 001fac  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x1facu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 001fb4  jne 0x1f86
    X86_AT(c, 0x1fb4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1f86u); goto L_1f86; }
    X86_TICK(c, 60);
    // 001fb6  les edi, fword ptr gs:[ebp]
    X86_AT(c, 0x1fb6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 001fba  mov eax, dword ptr gs:[ebp + 0x114]
    X86_AT(c, 0x1fbau);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x114u)));
    // 001fc1  movzx ecx, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1fc1u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001fc6  inc ecx
    X86_AT(c, 0x1fc6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 001fc7  imul ecx, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x1fc7u);
    c.r[1] = x86_imul2(c, c.r[1], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 001fcc  shr ecx, 2
    X86_AT(c, 0x1fccu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 001fcf  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x1fcfu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 001fd1  ret 
    X86_AT(c, 0x1fd1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1f84u, "ran off the end of a function");
}
void f_00001fac(X86Cpu& c) {
    goto L_1fac;
L_1f86:
    X86_TICK(c, 25);
    // 001f86  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x1f86u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 001f8a  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x1f8au);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 001f8e  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1f8eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001f96  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1f96u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001f9a  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1f9au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 001f9e  call 0x1fd4
    X86_AT(c, 0x1f9eu);
    push32(c, 0x1fa3u); f_00001fd4(c); X86_RET(c, 0x1fa3u);
    X86_TICK(c, 20);
    // 001fa3  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x1fa3u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 001fa7  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x1fa7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
    // 001fab  ret 
    X86_AT(c, 0x1fabu);
    c.eip = pop32(c); return;
L_1fac:
    X86_TICK(c, 12);
    // 001fac  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x1facu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 001fb4  jne 0x1f86
    X86_AT(c, 0x1fb4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1f86u); goto L_1f86; }
    X86_TICK(c, 60);
    // 001fb6  les edi, fword ptr gs:[ebp]
    X86_AT(c, 0x1fb6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 001fba  mov eax, dword ptr gs:[ebp + 0x114]
    X86_AT(c, 0x1fbau);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x114u)));
    // 001fc1  movzx ecx, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1fc1u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001fc6  inc ecx
    X86_AT(c, 0x1fc6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 001fc7  imul ecx, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x1fc7u);
    c.r[1] = x86_imul2(c, c.r[1], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 001fcc  shr ecx, 2
    X86_AT(c, 0x1fccu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 001fcf  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x1fcfu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 001fd1  ret 
    X86_AT(c, 0x1fd1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1facu, "ran off the end of a function");
}
void f_00001fb4(X86Cpu& c) {
    goto L_1fb4;
L_1f86:
    X86_TICK(c, 25);
    // 001f86  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x1f86u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 001f8a  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x1f8au);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 001f8e  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1f8eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001f96  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1f96u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001f9a  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1f9au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 001f9e  call 0x1fd4
    X86_AT(c, 0x1f9eu);
    push32(c, 0x1fa3u); f_00001fd4(c); X86_RET(c, 0x1fa3u);
    X86_TICK(c, 20);
    // 001fa3  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x1fa3u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 001fa7  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x1fa7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
    // 001fab  ret 
    X86_AT(c, 0x1fabu);
    c.eip = pop32(c); return;
L_1fb4:
    X86_TICK(c, 5);
    // 001fb4  jne 0x1f86
    X86_AT(c, 0x1fb4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1f86u); goto L_1f86; }
    X86_TICK(c, 60);
    // 001fb6  les edi, fword ptr gs:[ebp]
    X86_AT(c, 0x1fb6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 001fba  mov eax, dword ptr gs:[ebp + 0x114]
    X86_AT(c, 0x1fbau);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x114u)));
    // 001fc1  movzx ecx, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1fc1u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001fc6  inc ecx
    X86_AT(c, 0x1fc6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 001fc7  imul ecx, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x1fc7u);
    c.r[1] = x86_imul2(c, c.r[1], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 001fcc  shr ecx, 2
    X86_AT(c, 0x1fccu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 001fcf  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x1fcfu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 001fd1  ret 
    X86_AT(c, 0x1fd1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1fb4u, "ran off the end of a function");
}
void f_00001fb6(X86Cpu& c) {
    X86_TICK(c, 60);
    // 001fb6  les edi, fword ptr gs:[ebp]
    X86_AT(c, 0x1fb6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 001fba  mov eax, dword ptr gs:[ebp + 0x114]
    X86_AT(c, 0x1fbau);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x114u)));
    // 001fc1  movzx ecx, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1fc1u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001fc6  inc ecx
    X86_AT(c, 0x1fc6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 001fc7  imul ecx, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x1fc7u);
    c.r[1] = x86_imul2(c, c.r[1], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 001fcc  shr ecx, 2
    X86_AT(c, 0x1fccu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 001fcf  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x1fcfu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 001fd1  ret 
    X86_AT(c, 0x1fd1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1fb6u, "ran off the end of a function");
}
void f_00001fba(X86Cpu& c) {
    X86_TICK(c, 54);
    // 001fba  mov eax, dword ptr gs:[ebp + 0x114]
    X86_AT(c, 0x1fbau);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x114u)));
    // 001fc1  movzx ecx, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1fc1u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001fc6  inc ecx
    X86_AT(c, 0x1fc6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 001fc7  imul ecx, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x1fc7u);
    c.r[1] = x86_imul2(c, c.r[1], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 001fcc  shr ecx, 2
    X86_AT(c, 0x1fccu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 001fcf  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x1fcfu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 001fd1  ret 
    X86_AT(c, 0x1fd1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1fbau, "ran off the end of a function");
}
void f_00001fc1(X86Cpu& c) {
    X86_TICK(c, 50);
    // 001fc1  movzx ecx, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1fc1u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001fc6  inc ecx
    X86_AT(c, 0x1fc6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 001fc7  imul ecx, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x1fc7u);
    c.r[1] = x86_imul2(c, c.r[1], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 001fcc  shr ecx, 2
    X86_AT(c, 0x1fccu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 001fcf  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x1fcfu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 001fd1  ret 
    X86_AT(c, 0x1fd1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1fc1u, "ran off the end of a function");
}
void f_00001fc6(X86Cpu& c) {
    X86_TICK(c, 44);
    // 001fc6  inc ecx
    X86_AT(c, 0x1fc6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 001fc7  imul ecx, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x1fc7u);
    c.r[1] = x86_imul2(c, c.r[1], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 001fcc  shr ecx, 2
    X86_AT(c, 0x1fccu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 001fcf  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x1fcfu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 001fd1  ret 
    X86_AT(c, 0x1fd1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1fc6u, "ran off the end of a function");
}
void f_00001fc7(X86Cpu& c) {
    X86_TICK(c, 42);
    // 001fc7  imul ecx, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x1fc7u);
    c.r[1] = x86_imul2(c, c.r[1], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 001fcc  shr ecx, 2
    X86_AT(c, 0x1fccu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 001fcf  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x1fcfu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 001fd1  ret 
    X86_AT(c, 0x1fd1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1fc7u, "ran off the end of a function");
}
void f_00001fcc(X86Cpu& c) {
    X86_TICK(c, 20);
    // 001fcc  shr ecx, 2
    X86_AT(c, 0x1fccu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 001fcf  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x1fcfu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 001fd1  ret 
    X86_AT(c, 0x1fd1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1fccu, "ran off the end of a function");
}
void f_00001fcf(X86Cpu& c) {
    X86_TICK(c, 17);
    // 001fcf  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x1fcfu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 001fd1  ret 
    X86_AT(c, 0x1fd1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1fcfu, "ran off the end of a function");
}
void f_00001fd1(X86Cpu& c) {
    X86_TICK(c, 10);
    // 001fd1  ret 
    X86_AT(c, 0x1fd1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1fd1u, "ran off the end of a function");
}
void f_00001fd4(X86Cpu& c) {
    X86_TICK(c, 26);
    // 001fd4  mov eax, dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x1fd4u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)));
    // 001fd8  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0x1fd8u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 001fdf  mov eax, dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x1fdfu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)));
    // 001fe3  mov dword ptr gs:[ebp + 0x1c8], eax
    X86_AT(c, 0x1fe3u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[0]);
    // 001fea  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x1feau);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 001ff1  mov byte ptr gs:[ebp + 0x104], 1
    X86_AT(c, 0x1ff1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x1u);
    // 001ff9  call 0x36a0
    X86_AT(c, 0x1ff9u);
    push32(c, 0x1ffeu); f_000036a0(c); X86_RET(c, 0x1ffeu);
    X86_TICK(c, 7);
    // 001ffe  call 0x6120
    X86_AT(c, 0x1ffeu);
    push32(c, 0x2003u); f_00006120(c); X86_RET(c, 0x2003u);
    X86_TICK(c, 9);
    // 002003  mov byte ptr gs:[ebp + 0x220], 0x15
    X86_AT(c, 0x2003u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x15u);
    // 00200b  call 0x4026
    X86_AT(c, 0x200bu);
    push32(c, 0x2010u); f_00004026(c); X86_RET(c, 0x2010u);
    X86_TICK(c, 15);
    // 002010  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x2010u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 002017  ret 
    X86_AT(c, 0x2017u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1fd4u, "ran off the end of a function");
}
void f_00001fd8(X86Cpu& c) {
    X86_TICK(c, 22);
    // 001fd8  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0x1fd8u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 001fdf  mov eax, dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x1fdfu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)));
    // 001fe3  mov dword ptr gs:[ebp + 0x1c8], eax
    X86_AT(c, 0x1fe3u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[0]);
    // 001fea  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x1feau);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 001ff1  mov byte ptr gs:[ebp + 0x104], 1
    X86_AT(c, 0x1ff1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x1u);
    // 001ff9  call 0x36a0
    X86_AT(c, 0x1ff9u);
    push32(c, 0x1ffeu); f_000036a0(c); X86_RET(c, 0x1ffeu);
    X86_TICK(c, 7);
    // 001ffe  call 0x6120
    X86_AT(c, 0x1ffeu);
    push32(c, 0x2003u); f_00006120(c); X86_RET(c, 0x2003u);
    X86_TICK(c, 9);
    // 002003  mov byte ptr gs:[ebp + 0x220], 0x15
    X86_AT(c, 0x2003u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x15u);
    // 00200b  call 0x4026
    X86_AT(c, 0x200bu);
    push32(c, 0x2010u); f_00004026(c); X86_RET(c, 0x2010u);
    X86_TICK(c, 15);
    // 002010  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x2010u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 002017  ret 
    X86_AT(c, 0x2017u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1fd8u, "ran off the end of a function");
}
void f_00001fdf(X86Cpu& c) {
    X86_TICK(c, 20);
    // 001fdf  mov eax, dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x1fdfu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)));
    // 001fe3  mov dword ptr gs:[ebp + 0x1c8], eax
    X86_AT(c, 0x1fe3u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[0]);
    // 001fea  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x1feau);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 001ff1  mov byte ptr gs:[ebp + 0x104], 1
    X86_AT(c, 0x1ff1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x1u);
    // 001ff9  call 0x36a0
    X86_AT(c, 0x1ff9u);
    push32(c, 0x1ffeu); f_000036a0(c); X86_RET(c, 0x1ffeu);
    X86_TICK(c, 7);
    // 001ffe  call 0x6120
    X86_AT(c, 0x1ffeu);
    push32(c, 0x2003u); f_00006120(c); X86_RET(c, 0x2003u);
    X86_TICK(c, 9);
    // 002003  mov byte ptr gs:[ebp + 0x220], 0x15
    X86_AT(c, 0x2003u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x15u);
    // 00200b  call 0x4026
    X86_AT(c, 0x200bu);
    push32(c, 0x2010u); f_00004026(c); X86_RET(c, 0x2010u);
    X86_TICK(c, 15);
    // 002010  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x2010u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 002017  ret 
    X86_AT(c, 0x2017u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1fdfu, "ran off the end of a function");
}
void f_00001fe3(X86Cpu& c) {
    X86_TICK(c, 16);
    // 001fe3  mov dword ptr gs:[ebp + 0x1c8], eax
    X86_AT(c, 0x1fe3u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[0]);
    // 001fea  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x1feau);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 001ff1  mov byte ptr gs:[ebp + 0x104], 1
    X86_AT(c, 0x1ff1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x1u);
    // 001ff9  call 0x36a0
    X86_AT(c, 0x1ff9u);
    push32(c, 0x1ffeu); f_000036a0(c); X86_RET(c, 0x1ffeu);
    X86_TICK(c, 7);
    // 001ffe  call 0x6120
    X86_AT(c, 0x1ffeu);
    push32(c, 0x2003u); f_00006120(c); X86_RET(c, 0x2003u);
    X86_TICK(c, 9);
    // 002003  mov byte ptr gs:[ebp + 0x220], 0x15
    X86_AT(c, 0x2003u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x15u);
    // 00200b  call 0x4026
    X86_AT(c, 0x200bu);
    push32(c, 0x2010u); f_00004026(c); X86_RET(c, 0x2010u);
    X86_TICK(c, 15);
    // 002010  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x2010u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 002017  ret 
    X86_AT(c, 0x2017u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1fe3u, "ran off the end of a function");
}
void f_00001fea(X86Cpu& c) {
    X86_TICK(c, 14);
    // 001fea  push dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x1feau);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))); push32(c, v); }
    // 001ff1  mov byte ptr gs:[ebp + 0x104], 1
    X86_AT(c, 0x1ff1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x1u);
    // 001ff9  call 0x36a0
    X86_AT(c, 0x1ff9u);
    push32(c, 0x1ffeu); f_000036a0(c); X86_RET(c, 0x1ffeu);
    X86_TICK(c, 7);
    // 001ffe  call 0x6120
    X86_AT(c, 0x1ffeu);
    push32(c, 0x2003u); f_00006120(c); X86_RET(c, 0x2003u);
    X86_TICK(c, 9);
    // 002003  mov byte ptr gs:[ebp + 0x220], 0x15
    X86_AT(c, 0x2003u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x15u);
    // 00200b  call 0x4026
    X86_AT(c, 0x200bu);
    push32(c, 0x2010u); f_00004026(c); X86_RET(c, 0x2010u);
    X86_TICK(c, 15);
    // 002010  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x2010u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 002017  ret 
    X86_AT(c, 0x2017u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1feau, "ran off the end of a function");
}
void f_00001ff1(X86Cpu& c) {
    X86_TICK(c, 9);
    // 001ff1  mov byte ptr gs:[ebp + 0x104], 1
    X86_AT(c, 0x1ff1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), 0x1u);
    // 001ff9  call 0x36a0
    X86_AT(c, 0x1ff9u);
    push32(c, 0x1ffeu); f_000036a0(c); X86_RET(c, 0x1ffeu);
    X86_TICK(c, 7);
    // 001ffe  call 0x6120
    X86_AT(c, 0x1ffeu);
    push32(c, 0x2003u); f_00006120(c); X86_RET(c, 0x2003u);
    X86_TICK(c, 9);
    // 002003  mov byte ptr gs:[ebp + 0x220], 0x15
    X86_AT(c, 0x2003u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x15u);
    // 00200b  call 0x4026
    X86_AT(c, 0x200bu);
    push32(c, 0x2010u); f_00004026(c); X86_RET(c, 0x2010u);
    X86_TICK(c, 15);
    // 002010  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x2010u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 002017  ret 
    X86_AT(c, 0x2017u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1ff1u, "ran off the end of a function");
}
void f_00001ff9(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001ff9  call 0x36a0
    X86_AT(c, 0x1ff9u);
    push32(c, 0x1ffeu); f_000036a0(c); X86_RET(c, 0x1ffeu);
    X86_TICK(c, 7);
    // 001ffe  call 0x6120
    X86_AT(c, 0x1ffeu);
    push32(c, 0x2003u); f_00006120(c); X86_RET(c, 0x2003u);
    X86_TICK(c, 9);
    // 002003  mov byte ptr gs:[ebp + 0x220], 0x15
    X86_AT(c, 0x2003u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x15u);
    // 00200b  call 0x4026
    X86_AT(c, 0x200bu);
    push32(c, 0x2010u); f_00004026(c); X86_RET(c, 0x2010u);
    X86_TICK(c, 15);
    // 002010  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x2010u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 002017  ret 
    X86_AT(c, 0x2017u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1ff9u, "ran off the end of a function");
}
void f_00001ffe(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001ffe  call 0x6120
    X86_AT(c, 0x1ffeu);
    push32(c, 0x2003u); f_00006120(c); X86_RET(c, 0x2003u);
    X86_TICK(c, 9);
    // 002003  mov byte ptr gs:[ebp + 0x220], 0x15
    X86_AT(c, 0x2003u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x15u);
    // 00200b  call 0x4026
    X86_AT(c, 0x200bu);
    push32(c, 0x2010u); f_00004026(c); X86_RET(c, 0x2010u);
    X86_TICK(c, 15);
    // 002010  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x2010u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 002017  ret 
    X86_AT(c, 0x2017u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1ffeu, "ran off the end of a function");
}
void f_00002003(X86Cpu& c) {
    X86_TICK(c, 9);
    // 002003  mov byte ptr gs:[ebp + 0x220], 0x15
    X86_AT(c, 0x2003u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x15u);
    // 00200b  call 0x4026
    X86_AT(c, 0x200bu);
    push32(c, 0x2010u); f_00004026(c); X86_RET(c, 0x2010u);
    X86_TICK(c, 15);
    // 002010  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x2010u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 002017  ret 
    X86_AT(c, 0x2017u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2003u, "ran off the end of a function");
}
void f_0000200b(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00200b  call 0x4026
    X86_AT(c, 0x200bu);
    push32(c, 0x2010u); f_00004026(c); X86_RET(c, 0x2010u);
    X86_TICK(c, 15);
    // 002010  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x2010u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 002017  ret 
    X86_AT(c, 0x2017u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x200bu, "ran off the end of a function");
}
void f_00002010(X86Cpu& c) {
    X86_TICK(c, 15);
    // 002010  pop dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x2010u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), v); }
    // 002017  ret 
    X86_AT(c, 0x2017u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2010u, "ran off the end of a function");
}
void f_00002017(X86Cpu& c) {
    X86_TICK(c, 10);
    // 002017  ret 
    X86_AT(c, 0x2017u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2017u, "ran off the end of a function");
}
void f_00002018(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002018  call 0x22c4
    X86_AT(c, 0x2018u);
    push32(c, 0x201du); f_000022c4(c); X86_RET(c, 0x201du);
    X86_TICK(c, 43);
    // 00201d  add esi, 0xe
    X86_AT(c, 0x201du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xEu, 0, 4); }
    // 002020  mov dword ptr gs:[ebp + 0x444], esi
    X86_AT(c, 0x2020u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[6]);
    // 002027  mov word ptr gs:[ebp + 0x448], ds
    X86_AT(c, 0x2027u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), (uint32_t)c.sreg[3]);
    // 00202e  mov eax, dword ptr gs:[ebp + 0x14]
    X86_AT(c, 0x202eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)));
    // 002032  mov eax, dword ptr cs:[eax*4 + 0xbb10]
    X86_AT(c, 0x2032u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBB10u)));
    // 00203a  mov dword ptr gs:[ebp + 0x314], eax
    X86_AT(c, 0x203au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)), c.r[0]);
    // 002041  mov ebx, 0x40bc
    X86_AT(c, 0x2041u);
    c.r[3] = 0x40BCu;
    // 002046  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x2046u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 00204a  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x204au);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 00204e  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x204eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 002056  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x2056u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 00205a  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x205au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 00205e  call ebx
    X86_AT(c, 0x205eu);
    { uint32_t t = c.r[3]; push32(c, 0x2060u); x86_call(c, t); X86_RET(c, 0x2060u); }
    X86_TICK(c, 20);
    // 002060  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x2060u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 002064  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x2064u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
    // 002068  ret 
    X86_AT(c, 0x2068u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2018u, "ran off the end of a function");
}
void f_00002046(X86Cpu& c) {
    X86_TICK(c, 25);
    // 002046  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x2046u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 00204a  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x204au);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 00204e  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x204eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 002056  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x2056u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 00205a  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x205au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 00205e  call ebx
    X86_AT(c, 0x205eu);
    { uint32_t t = c.r[3]; push32(c, 0x2060u); x86_call(c, t); X86_RET(c, 0x2060u); }
    X86_TICK(c, 20);
    // 002060  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x2060u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 002064  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x2064u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
    // 002068  ret 
    X86_AT(c, 0x2068u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2046u, "ran off the end of a function");
}
void f_0000204a(X86Cpu& c) {
    X86_TICK(c, 20);
    // 00204a  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x204au);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 00204e  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x204eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 002056  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x2056u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 00205a  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x205au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 00205e  call ebx
    X86_AT(c, 0x205eu);
    { uint32_t t = c.r[3]; push32(c, 0x2060u); x86_call(c, t); X86_RET(c, 0x2060u); }
    X86_TICK(c, 20);
    // 002060  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x2060u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 002064  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x2064u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
    // 002068  ret 
    X86_AT(c, 0x2068u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x204au, "ran off the end of a function");
}
void f_0000204e(X86Cpu& c) {
    X86_TICK(c, 15);
    // 00204e  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x204eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 002056  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x2056u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 00205a  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x205au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 00205e  call ebx
    X86_AT(c, 0x205eu);
    { uint32_t t = c.r[3]; push32(c, 0x2060u); x86_call(c, t); X86_RET(c, 0x2060u); }
    X86_TICK(c, 20);
    // 002060  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x2060u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 002064  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x2064u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
    // 002068  ret 
    X86_AT(c, 0x2068u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x204eu, "ran off the end of a function");
}
void f_00002056(X86Cpu& c) {
    X86_TICK(c, 13);
    // 002056  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x2056u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 00205a  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x205au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 00205e  call ebx
    X86_AT(c, 0x205eu);
    { uint32_t t = c.r[3]; push32(c, 0x2060u); x86_call(c, t); X86_RET(c, 0x2060u); }
    X86_TICK(c, 20);
    // 002060  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x2060u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 002064  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x2064u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
    // 002068  ret 
    X86_AT(c, 0x2068u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2056u, "ran off the end of a function");
}
void f_0000205a(X86Cpu& c) {
    X86_TICK(c, 9);
    // 00205a  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x205au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 00205e  call ebx
    X86_AT(c, 0x205eu);
    { uint32_t t = c.r[3]; push32(c, 0x2060u); x86_call(c, t); X86_RET(c, 0x2060u); }
    X86_TICK(c, 20);
    // 002060  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x2060u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 002064  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x2064u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
    // 002068  ret 
    X86_AT(c, 0x2068u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x205au, "ran off the end of a function");
}
void f_0000205e(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00205e  call ebx
    X86_AT(c, 0x205eu);
    { uint32_t t = c.r[3]; push32(c, 0x2060u); x86_call(c, t); X86_RET(c, 0x2060u); }
    X86_TICK(c, 20);
    // 002060  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x2060u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 002064  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x2064u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
    // 002068  ret 
    X86_AT(c, 0x2068u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x205eu, "ran off the end of a function");
}
void f_00002060(X86Cpu& c) {
    X86_TICK(c, 20);
    // 002060  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x2060u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 002064  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x2064u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
    // 002068  ret 
    X86_AT(c, 0x2068u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2060u, "ran off the end of a function");
}
void f_00002064(X86Cpu& c) {
    X86_TICK(c, 15);
    // 002064  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x2064u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
    // 002068  ret 
    X86_AT(c, 0x2068u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2064u, "ran off the end of a function");
}
void f_00002068(X86Cpu& c) {
    X86_TICK(c, 10);
    // 002068  ret 
    X86_AT(c, 0x2068u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2068u, "ran off the end of a function");
}
void f_0000206c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00206c  test word ptr gs:[ebp + 0x108], 0xe
    X86_AT(c, 0x206cu);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xEu, 2);
    // 002076  je 0x20e5
    X86_AT(c, 0x2076u);
    if (x86_cc(c, 4)) { goto L_20e5; }
    X86_TICK(c, 24);
    // 002078  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x2078u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 00207f  push eax
    X86_AT(c, 0x207fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 002080  shr al, 1
    X86_AT(c, 0x2080u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 002082  and byte ptr gs:[ebp + 0x300], al
    X86_AT(c, 0x2082u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 0), 1)); }
    // 002089  call 0x36e4
    X86_AT(c, 0x2089u);
    push32(c, 0x208eu); f_000036e4(c); X86_RET(c, 0x208eu);
    X86_TICK(c, 7);
    // 00208e  call 0x6120
    X86_AT(c, 0x208eu);
    push32(c, 0x2093u); f_00006120(c); X86_RET(c, 0x2093u);
    X86_TICK(c, 7);
    // 002093  call 0x22c4
    X86_AT(c, 0x2093u);
    push32(c, 0x2098u); f_000022c4(c); X86_RET(c, 0x2098u);
    X86_TICK(c, 13);
    // 002098  pop eax
    X86_AT(c, 0x2098u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 002099  mov ebx, 0x4108
    X86_AT(c, 0x2099u);
    c.r[3] = 0x4108u;
    // 00209e  jmp 0x20b2
    X86_AT(c, 0x209eu);
    goto L_20b2;
L_20b2:
    X86_TICK(c, 7);
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 5);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
L_20e5:
    X86_TICK(c, 10);
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x206cu, "ran off the end of a function");
}
void f_00002076(X86Cpu& c) {
    X86_TICK(c, 5);
    // 002076  je 0x20e5
    X86_AT(c, 0x2076u);
    if (x86_cc(c, 4)) { goto L_20e5; }
    X86_TICK(c, 24);
    // 002078  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x2078u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 00207f  push eax
    X86_AT(c, 0x207fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 002080  shr al, 1
    X86_AT(c, 0x2080u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 002082  and byte ptr gs:[ebp + 0x300], al
    X86_AT(c, 0x2082u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 0), 1)); }
    // 002089  call 0x36e4
    X86_AT(c, 0x2089u);
    push32(c, 0x208eu); f_000036e4(c); X86_RET(c, 0x208eu);
    X86_TICK(c, 7);
    // 00208e  call 0x6120
    X86_AT(c, 0x208eu);
    push32(c, 0x2093u); f_00006120(c); X86_RET(c, 0x2093u);
    X86_TICK(c, 7);
    // 002093  call 0x22c4
    X86_AT(c, 0x2093u);
    push32(c, 0x2098u); f_000022c4(c); X86_RET(c, 0x2098u);
    X86_TICK(c, 13);
    // 002098  pop eax
    X86_AT(c, 0x2098u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 002099  mov ebx, 0x4108
    X86_AT(c, 0x2099u);
    c.r[3] = 0x4108u;
    // 00209e  jmp 0x20b2
    X86_AT(c, 0x209eu);
    goto L_20b2;
L_20b2:
    X86_TICK(c, 7);
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 5);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
L_20e5:
    X86_TICK(c, 10);
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2076u, "ran off the end of a function");
}
void f_00002078(X86Cpu& c) {
    X86_TICK(c, 24);
    // 002078  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x2078u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 00207f  push eax
    X86_AT(c, 0x207fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 002080  shr al, 1
    X86_AT(c, 0x2080u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 002082  and byte ptr gs:[ebp + 0x300], al
    X86_AT(c, 0x2082u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 0), 1)); }
    // 002089  call 0x36e4
    X86_AT(c, 0x2089u);
    push32(c, 0x208eu); f_000036e4(c); X86_RET(c, 0x208eu);
    X86_TICK(c, 7);
    // 00208e  call 0x6120
    X86_AT(c, 0x208eu);
    push32(c, 0x2093u); f_00006120(c); X86_RET(c, 0x2093u);
    X86_TICK(c, 7);
    // 002093  call 0x22c4
    X86_AT(c, 0x2093u);
    push32(c, 0x2098u); f_000022c4(c); X86_RET(c, 0x2098u);
    X86_TICK(c, 13);
    // 002098  pop eax
    X86_AT(c, 0x2098u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 002099  mov ebx, 0x4108
    X86_AT(c, 0x2099u);
    c.r[3] = 0x4108u;
    // 00209e  jmp 0x20b2
    X86_AT(c, 0x209eu);
    goto L_20b2;
L_20b2:
    X86_TICK(c, 7);
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2078u, "ran off the end of a function");
}
void f_0000207f(X86Cpu& c) {
    X86_TICK(c, 19);
    // 00207f  push eax
    X86_AT(c, 0x207fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 002080  shr al, 1
    X86_AT(c, 0x2080u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 002082  and byte ptr gs:[ebp + 0x300], al
    X86_AT(c, 0x2082u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 0), 1)); }
    // 002089  call 0x36e4
    X86_AT(c, 0x2089u);
    push32(c, 0x208eu); f_000036e4(c); X86_RET(c, 0x208eu);
    X86_TICK(c, 7);
    // 00208e  call 0x6120
    X86_AT(c, 0x208eu);
    push32(c, 0x2093u); f_00006120(c); X86_RET(c, 0x2093u);
    X86_TICK(c, 7);
    // 002093  call 0x22c4
    X86_AT(c, 0x2093u);
    push32(c, 0x2098u); f_000022c4(c); X86_RET(c, 0x2098u);
    X86_TICK(c, 13);
    // 002098  pop eax
    X86_AT(c, 0x2098u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 002099  mov ebx, 0x4108
    X86_AT(c, 0x2099u);
    c.r[3] = 0x4108u;
    // 00209e  jmp 0x20b2
    X86_AT(c, 0x209eu);
    goto L_20b2;
L_20b2:
    X86_TICK(c, 7);
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x207fu, "ran off the end of a function");
}
void f_00002080(X86Cpu& c) {
    X86_TICK(c, 17);
    // 002080  shr al, 1
    X86_AT(c, 0x2080u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 002082  and byte ptr gs:[ebp + 0x300], al
    X86_AT(c, 0x2082u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 0), 1)); }
    // 002089  call 0x36e4
    X86_AT(c, 0x2089u);
    push32(c, 0x208eu); f_000036e4(c); X86_RET(c, 0x208eu);
    X86_TICK(c, 7);
    // 00208e  call 0x6120
    X86_AT(c, 0x208eu);
    push32(c, 0x2093u); f_00006120(c); X86_RET(c, 0x2093u);
    X86_TICK(c, 7);
    // 002093  call 0x22c4
    X86_AT(c, 0x2093u);
    push32(c, 0x2098u); f_000022c4(c); X86_RET(c, 0x2098u);
    X86_TICK(c, 13);
    // 002098  pop eax
    X86_AT(c, 0x2098u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 002099  mov ebx, 0x4108
    X86_AT(c, 0x2099u);
    c.r[3] = 0x4108u;
    // 00209e  jmp 0x20b2
    X86_AT(c, 0x209eu);
    goto L_20b2;
L_20b2:
    X86_TICK(c, 7);
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2080u, "ran off the end of a function");
}
void f_00002082(X86Cpu& c) {
    X86_TICK(c, 14);
    // 002082  and byte ptr gs:[ebp + 0x300], al
    X86_AT(c, 0x2082u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 0), 1)); }
    // 002089  call 0x36e4
    X86_AT(c, 0x2089u);
    push32(c, 0x208eu); f_000036e4(c); X86_RET(c, 0x208eu);
    X86_TICK(c, 7);
    // 00208e  call 0x6120
    X86_AT(c, 0x208eu);
    push32(c, 0x2093u); f_00006120(c); X86_RET(c, 0x2093u);
    X86_TICK(c, 7);
    // 002093  call 0x22c4
    X86_AT(c, 0x2093u);
    push32(c, 0x2098u); f_000022c4(c); X86_RET(c, 0x2098u);
    X86_TICK(c, 13);
    // 002098  pop eax
    X86_AT(c, 0x2098u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 002099  mov ebx, 0x4108
    X86_AT(c, 0x2099u);
    c.r[3] = 0x4108u;
    // 00209e  jmp 0x20b2
    X86_AT(c, 0x209eu);
    goto L_20b2;
L_20b2:
    X86_TICK(c, 7);
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2082u, "ran off the end of a function");
}
void f_00002089(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002089  call 0x36e4
    X86_AT(c, 0x2089u);
    push32(c, 0x208eu); f_000036e4(c); X86_RET(c, 0x208eu);
    X86_TICK(c, 7);
    // 00208e  call 0x6120
    X86_AT(c, 0x208eu);
    push32(c, 0x2093u); f_00006120(c); X86_RET(c, 0x2093u);
    X86_TICK(c, 7);
    // 002093  call 0x22c4
    X86_AT(c, 0x2093u);
    push32(c, 0x2098u); f_000022c4(c); X86_RET(c, 0x2098u);
    X86_TICK(c, 13);
    // 002098  pop eax
    X86_AT(c, 0x2098u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 002099  mov ebx, 0x4108
    X86_AT(c, 0x2099u);
    c.r[3] = 0x4108u;
    // 00209e  jmp 0x20b2
    X86_AT(c, 0x209eu);
    goto L_20b2;
L_20b2:
    X86_TICK(c, 7);
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2089u, "ran off the end of a function");
}
void f_0000208e(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00208e  call 0x6120
    X86_AT(c, 0x208eu);
    push32(c, 0x2093u); f_00006120(c); X86_RET(c, 0x2093u);
    X86_TICK(c, 7);
    // 002093  call 0x22c4
    X86_AT(c, 0x2093u);
    push32(c, 0x2098u); f_000022c4(c); X86_RET(c, 0x2098u);
    X86_TICK(c, 13);
    // 002098  pop eax
    X86_AT(c, 0x2098u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 002099  mov ebx, 0x4108
    X86_AT(c, 0x2099u);
    c.r[3] = 0x4108u;
    // 00209e  jmp 0x20b2
    X86_AT(c, 0x209eu);
    goto L_20b2;
L_20b2:
    X86_TICK(c, 7);
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x208eu, "ran off the end of a function");
}
void f_00002093(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002093  call 0x22c4
    X86_AT(c, 0x2093u);
    push32(c, 0x2098u); f_000022c4(c); X86_RET(c, 0x2098u);
    X86_TICK(c, 13);
    // 002098  pop eax
    X86_AT(c, 0x2098u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 002099  mov ebx, 0x4108
    X86_AT(c, 0x2099u);
    c.r[3] = 0x4108u;
    // 00209e  jmp 0x20b2
    X86_AT(c, 0x209eu);
    goto L_20b2;
L_20b2:
    X86_TICK(c, 7);
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2093u, "ran off the end of a function");
}
void f_00002098(X86Cpu& c) {
    X86_TICK(c, 13);
    // 002098  pop eax
    X86_AT(c, 0x2098u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 002099  mov ebx, 0x4108
    X86_AT(c, 0x2099u);
    c.r[3] = 0x4108u;
    // 00209e  jmp 0x20b2
    X86_AT(c, 0x209eu);
    goto L_20b2;
L_20b2:
    X86_TICK(c, 7);
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2098u, "ran off the end of a function");
}
void f_00002099(X86Cpu& c) {
    X86_TICK(c, 9);
    // 002099  mov ebx, 0x4108
    X86_AT(c, 0x2099u);
    c.r[3] = 0x4108u;
    // 00209e  jmp 0x20b2
    X86_AT(c, 0x209eu);
    goto L_20b2;
L_20b2:
    X86_TICK(c, 7);
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2099u, "ran off the end of a function");
}
void f_0000209e(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00209e  jmp 0x20b2
    X86_AT(c, 0x209eu);
    goto L_20b2;
L_20b2:
    X86_TICK(c, 7);
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x209eu, "ran off the end of a function");
}
void f_000020a0(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x20a0u, "ran off the end of a function");
}
void f_000020a7(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x20a7u, "ran off the end of a function");
}
void f_000020a9(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x20a9u, "ran off the end of a function");
}
void f_000020ab(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x20abu, "ran off the end of a function");
}
void f_000020b2(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x20b2u, "ran off the end of a function");
}
void f_000020b4(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x20b4u, "ran off the end of a function");
}
void f_000020b6(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x20b6u, "ran off the end of a function");
}
void f_000020b8(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x20b8u, "ran off the end of a function");
}
void f_000020bc(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 25);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x20bcu, "ran off the end of a function");
}
void f_000020c0(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 25);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x20c0u, "ran off the end of a function");
}
void f_000020c4(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 25);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x20c4u, "ran off the end of a function");
}
void f_000020cc(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 25);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x20ccu, "ran off the end of a function");
}
void f_000020d0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 25);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x20d0u, "ran off the end of a function");
}
void f_000020d4(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 25);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x20d4u, "ran off the end of a function");
}
void f_000020d6(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x20d6u, "ran off the end of a function");
}
void f_000020da(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x20dau, "ran off the end of a function");
}
void f_000020de(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x20deu, "ran off the end of a function");
}
void f_000020e5(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x20e5u, "ran off the end of a function");
}
void f_000020e8(X86Cpu& c) {
    goto L_20e8;
L_2046:
    X86_TICK(c, 25);
    // 002046  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x2046u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 00204a  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x204au);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 00204e  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x204eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 002056  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x2056u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 00205a  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x205au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 00205e  call ebx
    X86_AT(c, 0x205eu);
    { uint32_t t = c.r[3]; push32(c, 0x2060u); x86_call(c, t); X86_RET(c, 0x2060u); }
    X86_TICK(c, 20);
    // 002060  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x2060u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 002064  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x2064u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
    // 002068  ret 
    X86_AT(c, 0x2068u);
    c.eip = pop32(c); return;
L_20e8:
    X86_TICK(c, 7);
    // 0020e8  call 0x22c4
    X86_AT(c, 0x20e8u);
    push32(c, 0x20edu); f_000022c4(c); X86_RET(c, 0x20edu);
    X86_TICK(c, 9);
    // 0020ed  mov ebx, 0x41c0
    X86_AT(c, 0x20edu);
    c.r[3] = 0x41C0u;
    // 0020f2  jmp 0x2046
    X86_AT(c, 0x20f2u);
    X86_POLL(c, 0x2046u); goto L_2046;
    x86_fault(c, 0x20e8u, "ran off the end of a function");
}
void f_000020ed(X86Cpu& c) {
    goto L_20ed;
L_2046:
    X86_TICK(c, 25);
    // 002046  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x2046u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 00204a  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x204au);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 00204e  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x204eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 002056  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x2056u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 00205a  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x205au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 00205e  call ebx
    X86_AT(c, 0x205eu);
    { uint32_t t = c.r[3]; push32(c, 0x2060u); x86_call(c, t); X86_RET(c, 0x2060u); }
    X86_TICK(c, 20);
    // 002060  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x2060u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 002064  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x2064u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
    // 002068  ret 
    X86_AT(c, 0x2068u);
    c.eip = pop32(c); return;
L_20ed:
    X86_TICK(c, 9);
    // 0020ed  mov ebx, 0x41c0
    X86_AT(c, 0x20edu);
    c.r[3] = 0x41C0u;
    // 0020f2  jmp 0x2046
    X86_AT(c, 0x20f2u);
    X86_POLL(c, 0x2046u); goto L_2046;
    x86_fault(c, 0x20edu, "ran off the end of a function");
}
void f_000020f2(X86Cpu& c) {
    goto L_20f2;
L_2046:
    X86_TICK(c, 25);
    // 002046  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x2046u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 00204a  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x204au);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 00204e  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x204eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 002056  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x2056u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 00205a  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x205au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 00205e  call ebx
    X86_AT(c, 0x205eu);
    { uint32_t t = c.r[3]; push32(c, 0x2060u); x86_call(c, t); X86_RET(c, 0x2060u); }
    X86_TICK(c, 20);
    // 002060  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x2060u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 002064  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x2064u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
    // 002068  ret 
    X86_AT(c, 0x2068u);
    c.eip = pop32(c); return;
L_20f2:
    X86_TICK(c, 7);
    // 0020f2  jmp 0x2046
    X86_AT(c, 0x20f2u);
    X86_POLL(c, 0x2046u); goto L_2046;
    x86_fault(c, 0x20f2u, "ran off the end of a function");
}
void f_000020f8(X86Cpu& c) {
    goto L_20f8;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_20f8:
    X86_TICK(c, 9);
    // 0020f8  push eax
    X86_AT(c, 0x20f8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0020f9  call 0x36e4
    X86_AT(c, 0x20f9u);
    push32(c, 0x20feu); f_000036e4(c); X86_RET(c, 0x20feu);
    X86_TICK(c, 7);
    // 0020fe  call 0x22c4
    X86_AT(c, 0x20feu);
    push32(c, 0x2103u); f_000022c4(c); X86_RET(c, 0x2103u);
    X86_TICK(c, 13);
    // 002103  pop eax
    X86_AT(c, 0x2103u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 002104  mov ebx, 0x4218
    X86_AT(c, 0x2104u);
    c.r[3] = 0x4218u;
    // 002109  jmp 0x20a0
    X86_AT(c, 0x2109u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
    x86_fault(c, 0x20f8u, "ran off the end of a function");
}
void f_000020f9(X86Cpu& c) {
    goto L_20f9;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_20f9:
    X86_TICK(c, 7);
    // 0020f9  call 0x36e4
    X86_AT(c, 0x20f9u);
    push32(c, 0x20feu); f_000036e4(c); X86_RET(c, 0x20feu);
    X86_TICK(c, 7);
    // 0020fe  call 0x22c4
    X86_AT(c, 0x20feu);
    push32(c, 0x2103u); f_000022c4(c); X86_RET(c, 0x2103u);
    X86_TICK(c, 13);
    // 002103  pop eax
    X86_AT(c, 0x2103u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 002104  mov ebx, 0x4218
    X86_AT(c, 0x2104u);
    c.r[3] = 0x4218u;
    // 002109  jmp 0x20a0
    X86_AT(c, 0x2109u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
    x86_fault(c, 0x20f9u, "ran off the end of a function");
}
void f_000020fe(X86Cpu& c) {
    goto L_20fe;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_20fe:
    X86_TICK(c, 7);
    // 0020fe  call 0x22c4
    X86_AT(c, 0x20feu);
    push32(c, 0x2103u); f_000022c4(c); X86_RET(c, 0x2103u);
    X86_TICK(c, 13);
    // 002103  pop eax
    X86_AT(c, 0x2103u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 002104  mov ebx, 0x4218
    X86_AT(c, 0x2104u);
    c.r[3] = 0x4218u;
    // 002109  jmp 0x20a0
    X86_AT(c, 0x2109u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
    x86_fault(c, 0x20feu, "ran off the end of a function");
}
void f_00002103(X86Cpu& c) {
    goto L_2103;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_2103:
    X86_TICK(c, 13);
    // 002103  pop eax
    X86_AT(c, 0x2103u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 002104  mov ebx, 0x4218
    X86_AT(c, 0x2104u);
    c.r[3] = 0x4218u;
    // 002109  jmp 0x20a0
    X86_AT(c, 0x2109u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
    x86_fault(c, 0x2103u, "ran off the end of a function");
}
void f_00002104(X86Cpu& c) {
    goto L_2104;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_2104:
    X86_TICK(c, 9);
    // 002104  mov ebx, 0x4218
    X86_AT(c, 0x2104u);
    c.r[3] = 0x4218u;
    // 002109  jmp 0x20a0
    X86_AT(c, 0x2109u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
    x86_fault(c, 0x2104u, "ran off the end of a function");
}
void f_00002109(X86Cpu& c) {
    goto L_2109;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_2109:
    X86_TICK(c, 7);
    // 002109  jmp 0x20a0
    X86_AT(c, 0x2109u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
    x86_fault(c, 0x2109u, "ran off the end of a function");
}
void f_0000210c(X86Cpu& c) {
    goto L_210c;
L_2046:
    X86_TICK(c, 25);
    // 002046  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x2046u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 00204a  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x204au);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 00204e  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x204eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 002056  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x2056u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 00205a  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x205au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 00205e  call ebx
    X86_AT(c, 0x205eu);
    { uint32_t t = c.r[3]; push32(c, 0x2060u); x86_call(c, t); X86_RET(c, 0x2060u); }
    X86_TICK(c, 10);
    // 002060  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x2060u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 002064  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x2064u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_2068:
    X86_TICK(c, 10);
    // 002068  ret 
    X86_AT(c, 0x2068u);
    c.eip = pop32(c); return;
L_210c:
    X86_TICK(c, 12);
    // 00210c  cmp word ptr [esi + 0xe], 0
    X86_AT(c, 0x210cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu))), 0x0u, 0, 2);
    // 002111  je 0x2068
    X86_AT(c, 0x2111u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x2068u); goto L_2068; }
    X86_TICK(c, 12);
    // 002117  cmp word ptr [esi + 0x10], 0
    X86_AT(c, 0x2117u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u))), 0x0u, 0, 2);
    // 00211c  je 0x2068
    X86_AT(c, 0x211cu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x2068u); goto L_2068; }
    X86_TICK(c, 7);
    // 002122  call 0x22c4
    X86_AT(c, 0x2122u);
    push32(c, 0x2127u); f_000022c4(c); X86_RET(c, 0x2127u);
    X86_TICK(c, 36);
    // 002127  mov eax, dword ptr [esi + 0xe]
    X86_AT(c, 0x2127u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu)));
    // 00212a  mov word ptr gs:[ebp + 0x428], ax
    X86_AT(c, 0x212au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x428u)), (c.r[0] & 0xFFFFu));
    // 002132  add ax, ax
    X86_AT(c, 0x2132u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 002135  mov word ptr gs:[ebp + 0x430], ax
    X86_AT(c, 0x2135u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x430u)), (c.r[0] & 0xFFFFu));
    // 00213d  shr eax, 0x10
    X86_AT(c, 0x213du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 002140  mov word ptr gs:[ebp + 0x42a], ax
    X86_AT(c, 0x2140u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x42Au)), (c.r[0] & 0xFFFFu));
    // 002148  add ax, ax
    X86_AT(c, 0x2148u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00214b  mov word ptr gs:[ebp + 0x432], ax
    X86_AT(c, 0x214bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x432u)), (c.r[0] & 0xFFFFu));
    // 002153  mov word ptr gs:[ebp + 0x43e], 0
    X86_AT(c, 0x2153u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Eu)), 0x0u);
    // 00215d  mov ax, word ptr gs:[ebp + 0x426]
    X86_AT(c, 0x215du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x426u))));
    // 002165  mov word ptr gs:[ebp + 0x436], ax
    X86_AT(c, 0x2165u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x436u)), (c.r[0] & 0xFFFFu));
    // 00216d  mov ebx, 0x4294
    X86_AT(c, 0x216du);
    c.r[3] = 0x4294u;
    // 002172  jmp 0x2046
    X86_AT(c, 0x2172u);
    X86_POLL(c, 0x2046u); goto L_2046;
    x86_fault(c, 0x210cu, "ran off the end of a function");
}
void f_00002178(X86Cpu& c) {
    goto L_2178;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 5);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
L_20e5:
    X86_TICK(c, 10);
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_2178:
    X86_TICK(c, 12);
    // 002178  cmp word ptr [esi + 0xe], 0
    X86_AT(c, 0x2178u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu))), 0x0u, 0, 2);
    // 00217d  je 0x20e5
    X86_AT(c, 0x217du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x20e5u); goto L_20e5; }
    X86_TICK(c, 12);
    // 002183  cmp word ptr [esi + 0x10], 0
    X86_AT(c, 0x2183u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u))), 0x0u, 0, 2);
    // 002188  je 0x20e5
    X86_AT(c, 0x2188u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x20e5u); goto L_20e5; }
    X86_TICK(c, 9);
    // 00218e  push eax
    X86_AT(c, 0x218eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00218f  call 0x36e4
    X86_AT(c, 0x218fu);
    push32(c, 0x2194u); f_000036e4(c); X86_RET(c, 0x2194u);
    X86_TICK(c, 7);
    // 002194  call 0x2380
    X86_AT(c, 0x2194u);
    push32(c, 0x2199u); f_00002380(c); X86_RET(c, 0x2199u);
    X86_TICK(c, 66);
    // 002199  mov eax, dword ptr [esi + 0xe]
    X86_AT(c, 0x2199u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu)));
    // 00219c  mov word ptr gs:[ebp + 0x428], ax
    X86_AT(c, 0x219cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x428u)), (c.r[0] & 0xFFFFu));
    // 0021a4  add ax, ax
    X86_AT(c, 0x21a4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0021a7  mov word ptr gs:[ebp + 0x430], ax
    X86_AT(c, 0x21a7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x430u)), (c.r[0] & 0xFFFFu));
    // 0021af  shr eax, 0x10
    X86_AT(c, 0x21afu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0021b2  mov word ptr gs:[ebp + 0x42a], ax
    X86_AT(c, 0x21b2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x42Au)), (c.r[0] & 0xFFFFu));
    // 0021ba  add ax, ax
    X86_AT(c, 0x21bau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0021bd  mov word ptr gs:[ebp + 0x432], ax
    X86_AT(c, 0x21bdu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x432u)), (c.r[0] & 0xFFFFu));
    // 0021c5  mov dword ptr gs:[ebp + 0x1c4], 0
    X86_AT(c, 0x21c5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), 0x0u);
    // 0021d0  mov eax, dword ptr gs:[ebp + 0x428]
    X86_AT(c, 0x21d0u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x428u)));
    // 0021d7  dec ax
    X86_AT(c, 0x21d7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0021d9  mov word ptr gs:[ebp + 0x1c8], ax
    X86_AT(c, 0x21d9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[0] & 0xFFFFu));
    // 0021e1  mov word ptr gs:[ebp + 0x222], 0
    X86_AT(c, 0x21e1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), 0x0u);
    // 0021eb  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0x21ebu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 0021f3  shr eax, 0x10
    X86_AT(c, 0x21f3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0021f6  movzx ecx, ax
    X86_AT(c, 0x21f6u);
    c.r[1] = (c.r[0] & 0xFFFFu);
    // 0021f9  dec ax
    X86_AT(c, 0x21f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 0021fb  mov word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0x21fbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[0] & 0xFFFFu));
    // 002203  mov word ptr gs:[ebp + 0x226], 0
    X86_AT(c, 0x2203u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), 0x0u);
    // 00220d  mov word ptr gs:[ebp + 0x43e], 0
    X86_AT(c, 0x220du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x43Eu)), 0x0u);
    // 002217  mov ax, word ptr gs:[ebp + 0x42a]
    X86_AT(c, 0x2217u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x42Au))));
    // 00221f  mov word ptr gs:[ebp + 0x436], ax
    X86_AT(c, 0x221fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x436u)), (c.r[0] & 0xFFFFu));
    // 002227  pop eax
    X86_AT(c, 0x2227u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 002228  mov ebx, 0x42dc
    X86_AT(c, 0x2228u);
    c.r[3] = 0x42DCu;
    // 00222d  jmp 0x20a0
    X86_AT(c, 0x222du);
    X86_POLL(c, 0x20a0u); goto L_20a0;
    x86_fault(c, 0x2178u, "ran off the end of a function");
}
void f_00002234(X86Cpu& c) {
    goto L_2234;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 5);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
L_20e5:
    X86_TICK(c, 10);
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_2234:
    X86_TICK(c, 25);
    // 002234  les edi, fword ptr [esi]
    X86_AT(c, 0x2234u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 002236  mov ebx, dword ptr [esi + 6]
    X86_AT(c, 0x2236u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)));
    // 002239  mov dword ptr gs:[ebp + 0x2f0], ebx
    X86_AT(c, 0x2239u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)), c.r[3]);
    // 002240  mov bx, word ptr es:[edi]
    X86_AT(c, 0x2240u);
    s16(c, 3, rd16((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 002244  dec bl
    X86_AT(c, 0x2244u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 002246  cmp bl, 3
    X86_AT(c, 0x2246u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 002249  ja 0x228e
    X86_AT(c, 0x2249u);
    if (x86_cc(c, 7)) { goto L_228e; }
    X86_TICK(c, 9);
    // 00224f  dec bh
    X86_AT(c, 0x224fu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 002251  cmp bh, 0x1f
    X86_AT(c, 0x2251u);
    (void)x86_sub(c, g8(c, 7), 0x1Fu, 0, 1);
    // 002254  ja 0x228e
    X86_AT(c, 0x2254u);
    if (x86_cc(c, 7)) { goto L_228e; }
    X86_TICK(c, 22);
    // 002256  add bx, 0x101
    X86_AT(c, 0x2256u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x101u, 0, 2)); }
    // 00225b  mov word ptr gs:[ebp + 0x2ee], bx
    X86_AT(c, 0x225bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)), (c.r[3] & 0xFFFFu));
    // 002263  add edi, 2
    X86_AT(c, 0x2263u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 002266  mov dword ptr gs:[ebp + 0x2e8], edi
    X86_AT(c, 0x2266u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)), c.r[7]);
    // 00226d  mov word ptr gs:[ebp + 0x2ec], es
    X86_AT(c, 0x226du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2ECu)), (uint32_t)c.sreg[0]);
    // 002274  test word ptr gs:[ebp + 0x108], 0xe
    X86_AT(c, 0x2274u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xEu, 2);
    // 00227e  je 0x20e5
    X86_AT(c, 0x227eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x20e5u); goto L_20e5; }
    X86_TICK(c, 9);
    // 002284  mov ebx, 0x49a8
    X86_AT(c, 0x2284u);
    c.r[3] = 0x49A8u;
    // 002289  jmp 0x20a0
    X86_AT(c, 0x2289u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
L_228e:
    X86_TICK(c, 12);
    // 00228e  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x228eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 002293  ret 
    X86_AT(c, 0x2293u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2234u, "ran off the end of a function");
}
void f_00002236(X86Cpu& c) {
    goto L_2236;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 5);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
L_20e5:
    X86_TICK(c, 10);
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_2236:
    X86_TICK(c, 19);
    // 002236  mov ebx, dword ptr [esi + 6]
    X86_AT(c, 0x2236u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)));
    // 002239  mov dword ptr gs:[ebp + 0x2f0], ebx
    X86_AT(c, 0x2239u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)), c.r[3]);
    // 002240  mov bx, word ptr es:[edi]
    X86_AT(c, 0x2240u);
    s16(c, 3, rd16((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 002244  dec bl
    X86_AT(c, 0x2244u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 002246  cmp bl, 3
    X86_AT(c, 0x2246u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 002249  ja 0x228e
    X86_AT(c, 0x2249u);
    if (x86_cc(c, 7)) { goto L_228e; }
    X86_TICK(c, 9);
    // 00224f  dec bh
    X86_AT(c, 0x224fu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 002251  cmp bh, 0x1f
    X86_AT(c, 0x2251u);
    (void)x86_sub(c, g8(c, 7), 0x1Fu, 0, 1);
    // 002254  ja 0x228e
    X86_AT(c, 0x2254u);
    if (x86_cc(c, 7)) { goto L_228e; }
    X86_TICK(c, 22);
    // 002256  add bx, 0x101
    X86_AT(c, 0x2256u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x101u, 0, 2)); }
    // 00225b  mov word ptr gs:[ebp + 0x2ee], bx
    X86_AT(c, 0x225bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)), (c.r[3] & 0xFFFFu));
    // 002263  add edi, 2
    X86_AT(c, 0x2263u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 002266  mov dword ptr gs:[ebp + 0x2e8], edi
    X86_AT(c, 0x2266u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)), c.r[7]);
    // 00226d  mov word ptr gs:[ebp + 0x2ec], es
    X86_AT(c, 0x226du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2ECu)), (uint32_t)c.sreg[0]);
    // 002274  test word ptr gs:[ebp + 0x108], 0xe
    X86_AT(c, 0x2274u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xEu, 2);
    // 00227e  je 0x20e5
    X86_AT(c, 0x227eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x20e5u); goto L_20e5; }
    X86_TICK(c, 9);
    // 002284  mov ebx, 0x49a8
    X86_AT(c, 0x2284u);
    c.r[3] = 0x49A8u;
    // 002289  jmp 0x20a0
    X86_AT(c, 0x2289u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
L_228e:
    X86_TICK(c, 12);
    // 00228e  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x228eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 002293  ret 
    X86_AT(c, 0x2293u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2236u, "ran off the end of a function");
}
void f_00002239(X86Cpu& c) {
    goto L_2239;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 5);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
L_20e5:
    X86_TICK(c, 10);
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_2239:
    X86_TICK(c, 15);
    // 002239  mov dword ptr gs:[ebp + 0x2f0], ebx
    X86_AT(c, 0x2239u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F0u)), c.r[3]);
    // 002240  mov bx, word ptr es:[edi]
    X86_AT(c, 0x2240u);
    s16(c, 3, rd16((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 002244  dec bl
    X86_AT(c, 0x2244u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 002246  cmp bl, 3
    X86_AT(c, 0x2246u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 002249  ja 0x228e
    X86_AT(c, 0x2249u);
    if (x86_cc(c, 7)) { goto L_228e; }
    X86_TICK(c, 9);
    // 00224f  dec bh
    X86_AT(c, 0x224fu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 002251  cmp bh, 0x1f
    X86_AT(c, 0x2251u);
    (void)x86_sub(c, g8(c, 7), 0x1Fu, 0, 1);
    // 002254  ja 0x228e
    X86_AT(c, 0x2254u);
    if (x86_cc(c, 7)) { goto L_228e; }
    X86_TICK(c, 22);
    // 002256  add bx, 0x101
    X86_AT(c, 0x2256u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x101u, 0, 2)); }
    // 00225b  mov word ptr gs:[ebp + 0x2ee], bx
    X86_AT(c, 0x225bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)), (c.r[3] & 0xFFFFu));
    // 002263  add edi, 2
    X86_AT(c, 0x2263u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 002266  mov dword ptr gs:[ebp + 0x2e8], edi
    X86_AT(c, 0x2266u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)), c.r[7]);
    // 00226d  mov word ptr gs:[ebp + 0x2ec], es
    X86_AT(c, 0x226du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2ECu)), (uint32_t)c.sreg[0]);
    // 002274  test word ptr gs:[ebp + 0x108], 0xe
    X86_AT(c, 0x2274u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xEu, 2);
    // 00227e  je 0x20e5
    X86_AT(c, 0x227eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x20e5u); goto L_20e5; }
    X86_TICK(c, 9);
    // 002284  mov ebx, 0x49a8
    X86_AT(c, 0x2284u);
    c.r[3] = 0x49A8u;
    // 002289  jmp 0x20a0
    X86_AT(c, 0x2289u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
L_228e:
    X86_TICK(c, 12);
    // 00228e  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x228eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 002293  ret 
    X86_AT(c, 0x2293u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2239u, "ran off the end of a function");
}
void f_00002240(X86Cpu& c) {
    goto L_2240;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 5);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
L_20e5:
    X86_TICK(c, 10);
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_2240:
    X86_TICK(c, 13);
    // 002240  mov bx, word ptr es:[edi]
    X86_AT(c, 0x2240u);
    s16(c, 3, rd16((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 002244  dec bl
    X86_AT(c, 0x2244u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 002246  cmp bl, 3
    X86_AT(c, 0x2246u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 002249  ja 0x228e
    X86_AT(c, 0x2249u);
    if (x86_cc(c, 7)) { goto L_228e; }
    X86_TICK(c, 9);
    // 00224f  dec bh
    X86_AT(c, 0x224fu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 002251  cmp bh, 0x1f
    X86_AT(c, 0x2251u);
    (void)x86_sub(c, g8(c, 7), 0x1Fu, 0, 1);
    // 002254  ja 0x228e
    X86_AT(c, 0x2254u);
    if (x86_cc(c, 7)) { goto L_228e; }
    X86_TICK(c, 22);
    // 002256  add bx, 0x101
    X86_AT(c, 0x2256u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x101u, 0, 2)); }
    // 00225b  mov word ptr gs:[ebp + 0x2ee], bx
    X86_AT(c, 0x225bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)), (c.r[3] & 0xFFFFu));
    // 002263  add edi, 2
    X86_AT(c, 0x2263u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 002266  mov dword ptr gs:[ebp + 0x2e8], edi
    X86_AT(c, 0x2266u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)), c.r[7]);
    // 00226d  mov word ptr gs:[ebp + 0x2ec], es
    X86_AT(c, 0x226du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2ECu)), (uint32_t)c.sreg[0]);
    // 002274  test word ptr gs:[ebp + 0x108], 0xe
    X86_AT(c, 0x2274u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xEu, 2);
    // 00227e  je 0x20e5
    X86_AT(c, 0x227eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x20e5u); goto L_20e5; }
    X86_TICK(c, 9);
    // 002284  mov ebx, 0x49a8
    X86_AT(c, 0x2284u);
    c.r[3] = 0x49A8u;
    // 002289  jmp 0x20a0
    X86_AT(c, 0x2289u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
L_228e:
    X86_TICK(c, 12);
    // 00228e  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x228eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 002293  ret 
    X86_AT(c, 0x2293u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2240u, "ran off the end of a function");
}
void f_00002244(X86Cpu& c) {
    goto L_2244;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 5);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
L_20e5:
    X86_TICK(c, 10);
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_2244:
    X86_TICK(c, 9);
    // 002244  dec bl
    X86_AT(c, 0x2244u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 002246  cmp bl, 3
    X86_AT(c, 0x2246u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 002249  ja 0x228e
    X86_AT(c, 0x2249u);
    if (x86_cc(c, 7)) { goto L_228e; }
    X86_TICK(c, 9);
    // 00224f  dec bh
    X86_AT(c, 0x224fu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 002251  cmp bh, 0x1f
    X86_AT(c, 0x2251u);
    (void)x86_sub(c, g8(c, 7), 0x1Fu, 0, 1);
    // 002254  ja 0x228e
    X86_AT(c, 0x2254u);
    if (x86_cc(c, 7)) { goto L_228e; }
    X86_TICK(c, 22);
    // 002256  add bx, 0x101
    X86_AT(c, 0x2256u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x101u, 0, 2)); }
    // 00225b  mov word ptr gs:[ebp + 0x2ee], bx
    X86_AT(c, 0x225bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)), (c.r[3] & 0xFFFFu));
    // 002263  add edi, 2
    X86_AT(c, 0x2263u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 002266  mov dword ptr gs:[ebp + 0x2e8], edi
    X86_AT(c, 0x2266u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)), c.r[7]);
    // 00226d  mov word ptr gs:[ebp + 0x2ec], es
    X86_AT(c, 0x226du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2ECu)), (uint32_t)c.sreg[0]);
    // 002274  test word ptr gs:[ebp + 0x108], 0xe
    X86_AT(c, 0x2274u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xEu, 2);
    // 00227e  je 0x20e5
    X86_AT(c, 0x227eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x20e5u); goto L_20e5; }
    X86_TICK(c, 9);
    // 002284  mov ebx, 0x49a8
    X86_AT(c, 0x2284u);
    c.r[3] = 0x49A8u;
    // 002289  jmp 0x20a0
    X86_AT(c, 0x2289u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
L_228e:
    X86_TICK(c, 12);
    // 00228e  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x228eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 002293  ret 
    X86_AT(c, 0x2293u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2244u, "ran off the end of a function");
}
void f_00002246(X86Cpu& c) {
    goto L_2246;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 5);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
L_20e5:
    X86_TICK(c, 10);
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_2246:
    X86_TICK(c, 7);
    // 002246  cmp bl, 3
    X86_AT(c, 0x2246u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 002249  ja 0x228e
    X86_AT(c, 0x2249u);
    if (x86_cc(c, 7)) { goto L_228e; }
    X86_TICK(c, 9);
    // 00224f  dec bh
    X86_AT(c, 0x224fu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 002251  cmp bh, 0x1f
    X86_AT(c, 0x2251u);
    (void)x86_sub(c, g8(c, 7), 0x1Fu, 0, 1);
    // 002254  ja 0x228e
    X86_AT(c, 0x2254u);
    if (x86_cc(c, 7)) { goto L_228e; }
    X86_TICK(c, 22);
    // 002256  add bx, 0x101
    X86_AT(c, 0x2256u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x101u, 0, 2)); }
    // 00225b  mov word ptr gs:[ebp + 0x2ee], bx
    X86_AT(c, 0x225bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)), (c.r[3] & 0xFFFFu));
    // 002263  add edi, 2
    X86_AT(c, 0x2263u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 002266  mov dword ptr gs:[ebp + 0x2e8], edi
    X86_AT(c, 0x2266u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)), c.r[7]);
    // 00226d  mov word ptr gs:[ebp + 0x2ec], es
    X86_AT(c, 0x226du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2ECu)), (uint32_t)c.sreg[0]);
    // 002274  test word ptr gs:[ebp + 0x108], 0xe
    X86_AT(c, 0x2274u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xEu, 2);
    // 00227e  je 0x20e5
    X86_AT(c, 0x227eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x20e5u); goto L_20e5; }
    X86_TICK(c, 9);
    // 002284  mov ebx, 0x49a8
    X86_AT(c, 0x2284u);
    c.r[3] = 0x49A8u;
    // 002289  jmp 0x20a0
    X86_AT(c, 0x2289u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
L_228e:
    X86_TICK(c, 12);
    // 00228e  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x228eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 002293  ret 
    X86_AT(c, 0x2293u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2246u, "ran off the end of a function");
}
void f_00002249(X86Cpu& c) {
    goto L_2249;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 5);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
L_20e5:
    X86_TICK(c, 10);
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_2249:
    X86_TICK(c, 5);
    // 002249  ja 0x228e
    X86_AT(c, 0x2249u);
    if (x86_cc(c, 7)) { goto L_228e; }
    X86_TICK(c, 9);
    // 00224f  dec bh
    X86_AT(c, 0x224fu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 002251  cmp bh, 0x1f
    X86_AT(c, 0x2251u);
    (void)x86_sub(c, g8(c, 7), 0x1Fu, 0, 1);
    // 002254  ja 0x228e
    X86_AT(c, 0x2254u);
    if (x86_cc(c, 7)) { goto L_228e; }
    X86_TICK(c, 22);
    // 002256  add bx, 0x101
    X86_AT(c, 0x2256u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x101u, 0, 2)); }
    // 00225b  mov word ptr gs:[ebp + 0x2ee], bx
    X86_AT(c, 0x225bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)), (c.r[3] & 0xFFFFu));
    // 002263  add edi, 2
    X86_AT(c, 0x2263u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 002266  mov dword ptr gs:[ebp + 0x2e8], edi
    X86_AT(c, 0x2266u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)), c.r[7]);
    // 00226d  mov word ptr gs:[ebp + 0x2ec], es
    X86_AT(c, 0x226du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2ECu)), (uint32_t)c.sreg[0]);
    // 002274  test word ptr gs:[ebp + 0x108], 0xe
    X86_AT(c, 0x2274u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xEu, 2);
    // 00227e  je 0x20e5
    X86_AT(c, 0x227eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x20e5u); goto L_20e5; }
    X86_TICK(c, 9);
    // 002284  mov ebx, 0x49a8
    X86_AT(c, 0x2284u);
    c.r[3] = 0x49A8u;
    // 002289  jmp 0x20a0
    X86_AT(c, 0x2289u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
L_228e:
    X86_TICK(c, 12);
    // 00228e  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x228eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 002293  ret 
    X86_AT(c, 0x2293u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2249u, "ran off the end of a function");
}
void f_0000224f(X86Cpu& c) {
    goto L_224f;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 5);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
L_20e5:
    X86_TICK(c, 10);
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_224f:
    X86_TICK(c, 9);
    // 00224f  dec bh
    X86_AT(c, 0x224fu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 002251  cmp bh, 0x1f
    X86_AT(c, 0x2251u);
    (void)x86_sub(c, g8(c, 7), 0x1Fu, 0, 1);
    // 002254  ja 0x228e
    X86_AT(c, 0x2254u);
    if (x86_cc(c, 7)) { goto L_228e; }
    X86_TICK(c, 22);
    // 002256  add bx, 0x101
    X86_AT(c, 0x2256u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x101u, 0, 2)); }
    // 00225b  mov word ptr gs:[ebp + 0x2ee], bx
    X86_AT(c, 0x225bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)), (c.r[3] & 0xFFFFu));
    // 002263  add edi, 2
    X86_AT(c, 0x2263u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 002266  mov dword ptr gs:[ebp + 0x2e8], edi
    X86_AT(c, 0x2266u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)), c.r[7]);
    // 00226d  mov word ptr gs:[ebp + 0x2ec], es
    X86_AT(c, 0x226du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2ECu)), (uint32_t)c.sreg[0]);
    // 002274  test word ptr gs:[ebp + 0x108], 0xe
    X86_AT(c, 0x2274u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xEu, 2);
    // 00227e  je 0x20e5
    X86_AT(c, 0x227eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x20e5u); goto L_20e5; }
    X86_TICK(c, 9);
    // 002284  mov ebx, 0x49a8
    X86_AT(c, 0x2284u);
    c.r[3] = 0x49A8u;
    // 002289  jmp 0x20a0
    X86_AT(c, 0x2289u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
L_228e:
    X86_TICK(c, 12);
    // 00228e  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x228eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 002293  ret 
    X86_AT(c, 0x2293u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x224fu, "ran off the end of a function");
}
void f_00002251(X86Cpu& c) {
    goto L_2251;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 5);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
L_20e5:
    X86_TICK(c, 10);
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_2251:
    X86_TICK(c, 7);
    // 002251  cmp bh, 0x1f
    X86_AT(c, 0x2251u);
    (void)x86_sub(c, g8(c, 7), 0x1Fu, 0, 1);
    // 002254  ja 0x228e
    X86_AT(c, 0x2254u);
    if (x86_cc(c, 7)) { goto L_228e; }
    X86_TICK(c, 22);
    // 002256  add bx, 0x101
    X86_AT(c, 0x2256u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x101u, 0, 2)); }
    // 00225b  mov word ptr gs:[ebp + 0x2ee], bx
    X86_AT(c, 0x225bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)), (c.r[3] & 0xFFFFu));
    // 002263  add edi, 2
    X86_AT(c, 0x2263u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 002266  mov dword ptr gs:[ebp + 0x2e8], edi
    X86_AT(c, 0x2266u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)), c.r[7]);
    // 00226d  mov word ptr gs:[ebp + 0x2ec], es
    X86_AT(c, 0x226du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2ECu)), (uint32_t)c.sreg[0]);
    // 002274  test word ptr gs:[ebp + 0x108], 0xe
    X86_AT(c, 0x2274u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xEu, 2);
    // 00227e  je 0x20e5
    X86_AT(c, 0x227eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x20e5u); goto L_20e5; }
    X86_TICK(c, 9);
    // 002284  mov ebx, 0x49a8
    X86_AT(c, 0x2284u);
    c.r[3] = 0x49A8u;
    // 002289  jmp 0x20a0
    X86_AT(c, 0x2289u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
L_228e:
    X86_TICK(c, 12);
    // 00228e  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x228eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 002293  ret 
    X86_AT(c, 0x2293u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2251u, "ran off the end of a function");
}
void f_00002254(X86Cpu& c) {
    goto L_2254;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 5);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
L_20e5:
    X86_TICK(c, 10);
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_2254:
    X86_TICK(c, 5);
    // 002254  ja 0x228e
    X86_AT(c, 0x2254u);
    if (x86_cc(c, 7)) { goto L_228e; }
    X86_TICK(c, 22);
    // 002256  add bx, 0x101
    X86_AT(c, 0x2256u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x101u, 0, 2)); }
    // 00225b  mov word ptr gs:[ebp + 0x2ee], bx
    X86_AT(c, 0x225bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)), (c.r[3] & 0xFFFFu));
    // 002263  add edi, 2
    X86_AT(c, 0x2263u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 002266  mov dword ptr gs:[ebp + 0x2e8], edi
    X86_AT(c, 0x2266u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)), c.r[7]);
    // 00226d  mov word ptr gs:[ebp + 0x2ec], es
    X86_AT(c, 0x226du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2ECu)), (uint32_t)c.sreg[0]);
    // 002274  test word ptr gs:[ebp + 0x108], 0xe
    X86_AT(c, 0x2274u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xEu, 2);
    // 00227e  je 0x20e5
    X86_AT(c, 0x227eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x20e5u); goto L_20e5; }
    X86_TICK(c, 9);
    // 002284  mov ebx, 0x49a8
    X86_AT(c, 0x2284u);
    c.r[3] = 0x49A8u;
    // 002289  jmp 0x20a0
    X86_AT(c, 0x2289u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
L_228e:
    X86_TICK(c, 12);
    // 00228e  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x228eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 002293  ret 
    X86_AT(c, 0x2293u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2254u, "ran off the end of a function");
}
void f_00002256(X86Cpu& c) {
    goto L_2256;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 5);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
L_20e5:
    X86_TICK(c, 10);
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_2256:
    X86_TICK(c, 22);
    // 002256  add bx, 0x101
    X86_AT(c, 0x2256u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x101u, 0, 2)); }
    // 00225b  mov word ptr gs:[ebp + 0x2ee], bx
    X86_AT(c, 0x225bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)), (c.r[3] & 0xFFFFu));
    // 002263  add edi, 2
    X86_AT(c, 0x2263u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 002266  mov dword ptr gs:[ebp + 0x2e8], edi
    X86_AT(c, 0x2266u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)), c.r[7]);
    // 00226d  mov word ptr gs:[ebp + 0x2ec], es
    X86_AT(c, 0x226du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2ECu)), (uint32_t)c.sreg[0]);
    // 002274  test word ptr gs:[ebp + 0x108], 0xe
    X86_AT(c, 0x2274u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xEu, 2);
    // 00227e  je 0x20e5
    X86_AT(c, 0x227eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x20e5u); goto L_20e5; }
    X86_TICK(c, 9);
    // 002284  mov ebx, 0x49a8
    X86_AT(c, 0x2284u);
    c.r[3] = 0x49A8u;
    // 002289  jmp 0x20a0
    X86_AT(c, 0x2289u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
    x86_fault(c, 0x2256u, "ran off the end of a function");
}
void f_0000225b(X86Cpu& c) {
    goto L_225b;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 5);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
L_20e5:
    X86_TICK(c, 10);
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_225b:
    X86_TICK(c, 20);
    // 00225b  mov word ptr gs:[ebp + 0x2ee], bx
    X86_AT(c, 0x225bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2EEu)), (c.r[3] & 0xFFFFu));
    // 002263  add edi, 2
    X86_AT(c, 0x2263u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 002266  mov dword ptr gs:[ebp + 0x2e8], edi
    X86_AT(c, 0x2266u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)), c.r[7]);
    // 00226d  mov word ptr gs:[ebp + 0x2ec], es
    X86_AT(c, 0x226du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2ECu)), (uint32_t)c.sreg[0]);
    // 002274  test word ptr gs:[ebp + 0x108], 0xe
    X86_AT(c, 0x2274u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xEu, 2);
    // 00227e  je 0x20e5
    X86_AT(c, 0x227eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x20e5u); goto L_20e5; }
    X86_TICK(c, 9);
    // 002284  mov ebx, 0x49a8
    X86_AT(c, 0x2284u);
    c.r[3] = 0x49A8u;
    // 002289  jmp 0x20a0
    X86_AT(c, 0x2289u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
    x86_fault(c, 0x225bu, "ran off the end of a function");
}
void f_00002263(X86Cpu& c) {
    goto L_2263;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 5);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
L_20e5:
    X86_TICK(c, 10);
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_2263:
    X86_TICK(c, 18);
    // 002263  add edi, 2
    X86_AT(c, 0x2263u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 002266  mov dword ptr gs:[ebp + 0x2e8], edi
    X86_AT(c, 0x2266u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)), c.r[7]);
    // 00226d  mov word ptr gs:[ebp + 0x2ec], es
    X86_AT(c, 0x226du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2ECu)), (uint32_t)c.sreg[0]);
    // 002274  test word ptr gs:[ebp + 0x108], 0xe
    X86_AT(c, 0x2274u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xEu, 2);
    // 00227e  je 0x20e5
    X86_AT(c, 0x227eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x20e5u); goto L_20e5; }
    X86_TICK(c, 9);
    // 002284  mov ebx, 0x49a8
    X86_AT(c, 0x2284u);
    c.r[3] = 0x49A8u;
    // 002289  jmp 0x20a0
    X86_AT(c, 0x2289u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
    x86_fault(c, 0x2263u, "ran off the end of a function");
}
void f_00002266(X86Cpu& c) {
    goto L_2266;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 5);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
L_20e5:
    X86_TICK(c, 10);
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_2266:
    X86_TICK(c, 16);
    // 002266  mov dword ptr gs:[ebp + 0x2e8], edi
    X86_AT(c, 0x2266u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2E8u)), c.r[7]);
    // 00226d  mov word ptr gs:[ebp + 0x2ec], es
    X86_AT(c, 0x226du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2ECu)), (uint32_t)c.sreg[0]);
    // 002274  test word ptr gs:[ebp + 0x108], 0xe
    X86_AT(c, 0x2274u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xEu, 2);
    // 00227e  je 0x20e5
    X86_AT(c, 0x227eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x20e5u); goto L_20e5; }
    X86_TICK(c, 9);
    // 002284  mov ebx, 0x49a8
    X86_AT(c, 0x2284u);
    c.r[3] = 0x49A8u;
    // 002289  jmp 0x20a0
    X86_AT(c, 0x2289u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
    x86_fault(c, 0x2266u, "ran off the end of a function");
}
void f_0000226d(X86Cpu& c) {
    goto L_226d;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 5);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
L_20e5:
    X86_TICK(c, 10);
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_226d:
    X86_TICK(c, 14);
    // 00226d  mov word ptr gs:[ebp + 0x2ec], es
    X86_AT(c, 0x226du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2ECu)), (uint32_t)c.sreg[0]);
    // 002274  test word ptr gs:[ebp + 0x108], 0xe
    X86_AT(c, 0x2274u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xEu, 2);
    // 00227e  je 0x20e5
    X86_AT(c, 0x227eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x20e5u); goto L_20e5; }
    X86_TICK(c, 9);
    // 002284  mov ebx, 0x49a8
    X86_AT(c, 0x2284u);
    c.r[3] = 0x49A8u;
    // 002289  jmp 0x20a0
    X86_AT(c, 0x2289u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
    x86_fault(c, 0x226du, "ran off the end of a function");
}
void f_00002274(X86Cpu& c) {
    goto L_2274;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 5);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
L_20e5:
    X86_TICK(c, 10);
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_2274:
    X86_TICK(c, 12);
    // 002274  test word ptr gs:[ebp + 0x108], 0xe
    X86_AT(c, 0x2274u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xEu, 2);
    // 00227e  je 0x20e5
    X86_AT(c, 0x227eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x20e5u); goto L_20e5; }
    X86_TICK(c, 9);
    // 002284  mov ebx, 0x49a8
    X86_AT(c, 0x2284u);
    c.r[3] = 0x49A8u;
    // 002289  jmp 0x20a0
    X86_AT(c, 0x2289u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
    x86_fault(c, 0x2274u, "ran off the end of a function");
}
void f_0000227e(X86Cpu& c) {
    goto L_227e;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 5);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
L_20e5:
    X86_TICK(c, 10);
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_227e:
    X86_TICK(c, 5);
    // 00227e  je 0x20e5
    X86_AT(c, 0x227eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x20e5u); goto L_20e5; }
    X86_TICK(c, 9);
    // 002284  mov ebx, 0x49a8
    X86_AT(c, 0x2284u);
    c.r[3] = 0x49A8u;
    // 002289  jmp 0x20a0
    X86_AT(c, 0x2289u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
    x86_fault(c, 0x227eu, "ran off the end of a function");
}
void f_00002284(X86Cpu& c) {
    goto L_2284;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_2284:
    X86_TICK(c, 9);
    // 002284  mov ebx, 0x49a8
    X86_AT(c, 0x2284u);
    c.r[3] = 0x49A8u;
    // 002289  jmp 0x20a0
    X86_AT(c, 0x2289u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
    x86_fault(c, 0x2284u, "ran off the end of a function");
}
void f_00002289(X86Cpu& c) {
    goto L_2289;
L_20a0:
    X86_TICK(c, 24);
    // 0020a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0020a7  mov dl, al
    X86_AT(c, 0x20a7u);
    s8(c, 2, g8(c, 0));
    // 0020a9  shr dl, 1
    X86_AT(c, 0x20a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0020ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x20abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_2289:
    X86_TICK(c, 7);
    // 002289  jmp 0x20a0
    X86_AT(c, 0x2289u);
    X86_POLL(c, 0x20a0u); goto L_20a0;
    x86_fault(c, 0x2289u, "ran off the end of a function");
}
void f_00002294(X86Cpu& c) {
    goto L_2294;
L_20b2:
    X86_TICK(c, 7);
    // 0020b2  test al, 1
    X86_AT(c, 0x20b2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0020b4  je 0x20bc
    X86_AT(c, 0x20b4u);
    if (x86_cc(c, 4)) { goto L_20bc; }
    X86_TICK(c, 7);
    // 0020b6  call ebx
    X86_AT(c, 0x20b6u);
    { uint32_t t = c.r[3]; push32(c, 0x20b8u); x86_call(c, t); X86_RET(c, 0x20b8u); }
    X86_TICK(c, 7);
    // 0020b8  jmp 0x20de
    X86_AT(c, 0x20b8u);
    goto L_20de;
L_20bc:
    X86_TICK(c, 25);
    // 0020bc  push dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20bcu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))); push32(c, v); }
    // 0020c0  push dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20c0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))); push32(c, v); }
    // 0020c4  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x20c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 0020cc  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x20ccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 0020d0  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x20d0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 0020d4  call ebx
    X86_AT(c, 0x20d4u);
    { uint32_t t = c.r[3]; push32(c, 0x20d6u); x86_call(c, t); X86_RET(c, 0x20d6u); }
    X86_TICK(c, 10);
    // 0020d6  pop dword ptr gs:[ebp + 0x2c]
    X86_AT(c, 0x20d6u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), v); }
    // 0020da  pop dword ptr gs:[ebp + 0x28]
    X86_AT(c, 0x20dau);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), v); }
L_20de:
    X86_TICK(c, 15);
    // 0020de  pop dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x20deu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), v); }
    // 0020e5  ret 
    X86_AT(c, 0x20e5u);
    c.eip = pop32(c); return;
L_2294:
    X86_TICK(c, 9);
    // 002294  push eax
    X86_AT(c, 0x2294u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 002295  call 0x36e4
    X86_AT(c, 0x2295u);
    push32(c, 0x229au); f_000036e4(c); X86_RET(c, 0x229au);
    X86_TICK(c, 7);
    // 00229a  call 0x22c4
    X86_AT(c, 0x229au);
    push32(c, 0x229fu); f_000022c4(c); X86_RET(c, 0x229fu);
    X86_TICK(c, 37);
    // 00229f  pop eax
    X86_AT(c, 0x229fu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0022a0  push dword ptr gs:[ebp + 0x300]
    X86_AT(c, 0x22a0u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))); push32(c, v); }
    // 0022a7  mov dl, al
    X86_AT(c, 0x22a7u);
    s8(c, 2, g8(c, 0));
    // 0022a9  shr dl, 1
    X86_AT(c, 0x22a9u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0022ab  and byte ptr gs:[ebp + 0x300], dl
    X86_AT(c, 0x22abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 2), 1)); }
    // 0022b2  or byte ptr gs:[ebp + 0x300], 2
    X86_AT(c, 0x22b2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 0022ba  mov ebx, 0x4324
    X86_AT(c, 0x22bau);
    c.r[3] = 0x4324u;
    // 0022bf  jmp 0x20b2
    X86_AT(c, 0x22bfu);
    X86_POLL(c, 0x20b2u); goto L_20b2;
    x86_fault(c, 0x2294u, "ran off the end of a function");
}
void f_000022c4(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0022c4  mov eax, dword ptr [esi]
    X86_AT(c, 0x22c4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0022c6  mov dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x22c6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)), c.r[0]);
    // 0022cd  mov ax, word ptr [esi + 4]
    X86_AT(c, 0x22cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))));
    // 0022d1  mov word ptr gs:[ebp + 0x404], ax
    X86_AT(c, 0x22d1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u)), (c.r[0] & 0xFFFFu));
    // 0022d9  mov eax, dword ptr [esi + 6]
    X86_AT(c, 0x22d9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)));
    // 0022dc  mov ebx, dword ptr [esi + 0xa]
    X86_AT(c, 0x22dcu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)));
    // 0022df  cmp ax, bx
    X86_AT(c, 0x22dfu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 0022e2  jle 0x22e6
    X86_AT(c, 0x22e2u);
    if (x86_cc(c, 14)) { goto L_22e6; }
    X86_TICK(c, 3);
    // 0022e4  xchg bx, ax
    X86_AT(c, 0x22e4u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_22e6:
    X86_TICK(c, 35);
    // 0022e6  mov word ptr gs:[ebp + 0x414], ax
    X86_AT(c, 0x22e6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), (c.r[0] & 0xFFFFu));
    // 0022ee  mov word ptr gs:[ebp + 0x418], bx
    X86_AT(c, 0x22eeu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), (c.r[3] & 0xFFFFu));
    // 0022f6  mov word ptr gs:[ebp + 0x1c4], ax
    X86_AT(c, 0x22f6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), (c.r[0] & 0xFFFFu));
    // 0022fe  mov word ptr gs:[ebp + 0x1c8], bx
    X86_AT(c, 0x22feu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[3] & 0xFFFFu));
    // 002306  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x2306u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00230e  mov word ptr gs:[ebp + 0x224], bx
    X86_AT(c, 0x230eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[3] & 0xFFFFu));
    // 002316  sub bx, ax
    X86_AT(c, 0x2316u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 002319  inc bx
    X86_AT(c, 0x2319u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 00231b  mov word ptr gs:[ebp + 0x424], bx
    X86_AT(c, 0x231bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), (c.r[3] & 0xFFFFu));
    // 002323  add bx, bx
    X86_AT(c, 0x2323u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 002326  mov word ptr gs:[ebp + 0x42c], bx
    X86_AT(c, 0x2326u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x42Cu)), (c.r[3] & 0xFFFFu));
    // 00232e  shr eax, 0x10
    X86_AT(c, 0x232eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 002331  shr ebx, 0x10
    X86_AT(c, 0x2331u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 002334  cmp ax, bx
    X86_AT(c, 0x2334u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 002337  jle 0x233b
    X86_AT(c, 0x2337u);
    if (x86_cc(c, 14)) { goto L_233b; }
    X86_TICK(c, 3);
    // 002339  xchg bx, ax
    X86_AT(c, 0x2339u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_233b:
    X86_TICK(c, 33);
    // 00233b  mov word ptr gs:[ebp + 0x416], ax
    X86_AT(c, 0x233bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x416u)), (c.r[0] & 0xFFFFu));
    // 002343  mov word ptr gs:[ebp + 0x41a], bx
    X86_AT(c, 0x2343u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Au)), (c.r[3] & 0xFFFFu));
    // 00234b  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x234bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 002353  mov word ptr gs:[ebp + 0x1ca], bx
    X86_AT(c, 0x2353u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[3] & 0xFFFFu));
    // 00235b  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x235bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 002363  sub bx, ax
    X86_AT(c, 0x2363u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 002366  inc bx
    X86_AT(c, 0x2366u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 002368  movzx ecx, bx
    X86_AT(c, 0x2368u);
    c.r[1] = (c.r[3] & 0xFFFFu);
    // 00236b  mov word ptr gs:[ebp + 0x426], bx
    X86_AT(c, 0x236bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x426u)), (c.r[3] & 0xFFFFu));
    // 002373  add bx, bx
    X86_AT(c, 0x2373u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 002376  mov word ptr gs:[ebp + 0x42e], bx
    X86_AT(c, 0x2376u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x42Eu)), (c.r[3] & 0xFFFFu));
    // 00237e  ret 
    X86_AT(c, 0x237eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x22c4u, "ran off the end of a function");
}
void f_000022c6(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0022c6  mov dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x22c6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)), c.r[0]);
    // 0022cd  mov ax, word ptr [esi + 4]
    X86_AT(c, 0x22cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))));
    // 0022d1  mov word ptr gs:[ebp + 0x404], ax
    X86_AT(c, 0x22d1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u)), (c.r[0] & 0xFFFFu));
    // 0022d9  mov eax, dword ptr [esi + 6]
    X86_AT(c, 0x22d9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)));
    // 0022dc  mov ebx, dword ptr [esi + 0xa]
    X86_AT(c, 0x22dcu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)));
    // 0022df  cmp ax, bx
    X86_AT(c, 0x22dfu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 0022e2  jle 0x22e6
    X86_AT(c, 0x22e2u);
    if (x86_cc(c, 14)) { goto L_22e6; }
    X86_TICK(c, 3);
    // 0022e4  xchg bx, ax
    X86_AT(c, 0x22e4u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_22e6:
    X86_TICK(c, 35);
    // 0022e6  mov word ptr gs:[ebp + 0x414], ax
    X86_AT(c, 0x22e6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), (c.r[0] & 0xFFFFu));
    // 0022ee  mov word ptr gs:[ebp + 0x418], bx
    X86_AT(c, 0x22eeu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), (c.r[3] & 0xFFFFu));
    // 0022f6  mov word ptr gs:[ebp + 0x1c4], ax
    X86_AT(c, 0x22f6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), (c.r[0] & 0xFFFFu));
    // 0022fe  mov word ptr gs:[ebp + 0x1c8], bx
    X86_AT(c, 0x22feu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[3] & 0xFFFFu));
    // 002306  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x2306u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00230e  mov word ptr gs:[ebp + 0x224], bx
    X86_AT(c, 0x230eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[3] & 0xFFFFu));
    // 002316  sub bx, ax
    X86_AT(c, 0x2316u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 002319  inc bx
    X86_AT(c, 0x2319u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 00231b  mov word ptr gs:[ebp + 0x424], bx
    X86_AT(c, 0x231bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), (c.r[3] & 0xFFFFu));
    // 002323  add bx, bx
    X86_AT(c, 0x2323u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 002326  mov word ptr gs:[ebp + 0x42c], bx
    X86_AT(c, 0x2326u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x42Cu)), (c.r[3] & 0xFFFFu));
    // 00232e  shr eax, 0x10
    X86_AT(c, 0x232eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 002331  shr ebx, 0x10
    X86_AT(c, 0x2331u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 002334  cmp ax, bx
    X86_AT(c, 0x2334u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 002337  jle 0x233b
    X86_AT(c, 0x2337u);
    if (x86_cc(c, 14)) { goto L_233b; }
    X86_TICK(c, 3);
    // 002339  xchg bx, ax
    X86_AT(c, 0x2339u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_233b:
    X86_TICK(c, 33);
    // 00233b  mov word ptr gs:[ebp + 0x416], ax
    X86_AT(c, 0x233bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x416u)), (c.r[0] & 0xFFFFu));
    // 002343  mov word ptr gs:[ebp + 0x41a], bx
    X86_AT(c, 0x2343u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Au)), (c.r[3] & 0xFFFFu));
    // 00234b  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x234bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 002353  mov word ptr gs:[ebp + 0x1ca], bx
    X86_AT(c, 0x2353u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[3] & 0xFFFFu));
    // 00235b  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x235bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 002363  sub bx, ax
    X86_AT(c, 0x2363u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 002366  inc bx
    X86_AT(c, 0x2366u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 002368  movzx ecx, bx
    X86_AT(c, 0x2368u);
    c.r[1] = (c.r[3] & 0xFFFFu);
    // 00236b  mov word ptr gs:[ebp + 0x426], bx
    X86_AT(c, 0x236bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x426u)), (c.r[3] & 0xFFFFu));
    // 002373  add bx, bx
    X86_AT(c, 0x2373u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 002376  mov word ptr gs:[ebp + 0x42e], bx
    X86_AT(c, 0x2376u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x42Eu)), (c.r[3] & 0xFFFFu));
    // 00237e  ret 
    X86_AT(c, 0x237eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x22c6u, "ran off the end of a function");
}
void f_000022cd(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0022cd  mov ax, word ptr [esi + 4]
    X86_AT(c, 0x22cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))));
    // 0022d1  mov word ptr gs:[ebp + 0x404], ax
    X86_AT(c, 0x22d1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u)), (c.r[0] & 0xFFFFu));
    // 0022d9  mov eax, dword ptr [esi + 6]
    X86_AT(c, 0x22d9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)));
    // 0022dc  mov ebx, dword ptr [esi + 0xa]
    X86_AT(c, 0x22dcu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)));
    // 0022df  cmp ax, bx
    X86_AT(c, 0x22dfu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 0022e2  jle 0x22e6
    X86_AT(c, 0x22e2u);
    if (x86_cc(c, 14)) { goto L_22e6; }
    X86_TICK(c, 3);
    // 0022e4  xchg bx, ax
    X86_AT(c, 0x22e4u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_22e6:
    X86_TICK(c, 35);
    // 0022e6  mov word ptr gs:[ebp + 0x414], ax
    X86_AT(c, 0x22e6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), (c.r[0] & 0xFFFFu));
    // 0022ee  mov word ptr gs:[ebp + 0x418], bx
    X86_AT(c, 0x22eeu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), (c.r[3] & 0xFFFFu));
    // 0022f6  mov word ptr gs:[ebp + 0x1c4], ax
    X86_AT(c, 0x22f6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), (c.r[0] & 0xFFFFu));
    // 0022fe  mov word ptr gs:[ebp + 0x1c8], bx
    X86_AT(c, 0x22feu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[3] & 0xFFFFu));
    // 002306  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x2306u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00230e  mov word ptr gs:[ebp + 0x224], bx
    X86_AT(c, 0x230eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[3] & 0xFFFFu));
    // 002316  sub bx, ax
    X86_AT(c, 0x2316u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 002319  inc bx
    X86_AT(c, 0x2319u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 00231b  mov word ptr gs:[ebp + 0x424], bx
    X86_AT(c, 0x231bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), (c.r[3] & 0xFFFFu));
    // 002323  add bx, bx
    X86_AT(c, 0x2323u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 002326  mov word ptr gs:[ebp + 0x42c], bx
    X86_AT(c, 0x2326u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x42Cu)), (c.r[3] & 0xFFFFu));
    // 00232e  shr eax, 0x10
    X86_AT(c, 0x232eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 002331  shr ebx, 0x10
    X86_AT(c, 0x2331u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 002334  cmp ax, bx
    X86_AT(c, 0x2334u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 002337  jle 0x233b
    X86_AT(c, 0x2337u);
    if (x86_cc(c, 14)) { goto L_233b; }
    X86_TICK(c, 3);
    // 002339  xchg bx, ax
    X86_AT(c, 0x2339u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_233b:
    X86_TICK(c, 33);
    // 00233b  mov word ptr gs:[ebp + 0x416], ax
    X86_AT(c, 0x233bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x416u)), (c.r[0] & 0xFFFFu));
    // 002343  mov word ptr gs:[ebp + 0x41a], bx
    X86_AT(c, 0x2343u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Au)), (c.r[3] & 0xFFFFu));
    // 00234b  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x234bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 002353  mov word ptr gs:[ebp + 0x1ca], bx
    X86_AT(c, 0x2353u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[3] & 0xFFFFu));
    // 00235b  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x235bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 002363  sub bx, ax
    X86_AT(c, 0x2363u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 002366  inc bx
    X86_AT(c, 0x2366u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 002368  movzx ecx, bx
    X86_AT(c, 0x2368u);
    c.r[1] = (c.r[3] & 0xFFFFu);
    // 00236b  mov word ptr gs:[ebp + 0x426], bx
    X86_AT(c, 0x236bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x426u)), (c.r[3] & 0xFFFFu));
    // 002373  add bx, bx
    X86_AT(c, 0x2373u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 002376  mov word ptr gs:[ebp + 0x42e], bx
    X86_AT(c, 0x2376u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x42Eu)), (c.r[3] & 0xFFFFu));
    // 00237e  ret 
    X86_AT(c, 0x237eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x22cdu, "ran off the end of a function");
}
void f_000022d1(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0022d1  mov word ptr gs:[ebp + 0x404], ax
    X86_AT(c, 0x22d1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u)), (c.r[0] & 0xFFFFu));
    // 0022d9  mov eax, dword ptr [esi + 6]
    X86_AT(c, 0x22d9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)));
    // 0022dc  mov ebx, dword ptr [esi + 0xa]
    X86_AT(c, 0x22dcu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)));
    // 0022df  cmp ax, bx
    X86_AT(c, 0x22dfu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 0022e2  jle 0x22e6
    X86_AT(c, 0x22e2u);
    if (x86_cc(c, 14)) { goto L_22e6; }
    X86_TICK(c, 3);
    // 0022e4  xchg bx, ax
    X86_AT(c, 0x22e4u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_22e6:
    X86_TICK(c, 35);
    // 0022e6  mov word ptr gs:[ebp + 0x414], ax
    X86_AT(c, 0x22e6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), (c.r[0] & 0xFFFFu));
    // 0022ee  mov word ptr gs:[ebp + 0x418], bx
    X86_AT(c, 0x22eeu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), (c.r[3] & 0xFFFFu));
    // 0022f6  mov word ptr gs:[ebp + 0x1c4], ax
    X86_AT(c, 0x22f6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), (c.r[0] & 0xFFFFu));
    // 0022fe  mov word ptr gs:[ebp + 0x1c8], bx
    X86_AT(c, 0x22feu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[3] & 0xFFFFu));
    // 002306  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x2306u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00230e  mov word ptr gs:[ebp + 0x224], bx
    X86_AT(c, 0x230eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[3] & 0xFFFFu));
    // 002316  sub bx, ax
    X86_AT(c, 0x2316u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 002319  inc bx
    X86_AT(c, 0x2319u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 00231b  mov word ptr gs:[ebp + 0x424], bx
    X86_AT(c, 0x231bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), (c.r[3] & 0xFFFFu));
    // 002323  add bx, bx
    X86_AT(c, 0x2323u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 002326  mov word ptr gs:[ebp + 0x42c], bx
    X86_AT(c, 0x2326u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x42Cu)), (c.r[3] & 0xFFFFu));
    // 00232e  shr eax, 0x10
    X86_AT(c, 0x232eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 002331  shr ebx, 0x10
    X86_AT(c, 0x2331u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 002334  cmp ax, bx
    X86_AT(c, 0x2334u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 002337  jle 0x233b
    X86_AT(c, 0x2337u);
    if (x86_cc(c, 14)) { goto L_233b; }
    X86_TICK(c, 3);
    // 002339  xchg bx, ax
    X86_AT(c, 0x2339u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_233b:
    X86_TICK(c, 33);
    // 00233b  mov word ptr gs:[ebp + 0x416], ax
    X86_AT(c, 0x233bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x416u)), (c.r[0] & 0xFFFFu));
    // 002343  mov word ptr gs:[ebp + 0x41a], bx
    X86_AT(c, 0x2343u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Au)), (c.r[3] & 0xFFFFu));
    // 00234b  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x234bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 002353  mov word ptr gs:[ebp + 0x1ca], bx
    X86_AT(c, 0x2353u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[3] & 0xFFFFu));
    // 00235b  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x235bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 002363  sub bx, ax
    X86_AT(c, 0x2363u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 002366  inc bx
    X86_AT(c, 0x2366u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 002368  movzx ecx, bx
    X86_AT(c, 0x2368u);
    c.r[1] = (c.r[3] & 0xFFFFu);
    // 00236b  mov word ptr gs:[ebp + 0x426], bx
    X86_AT(c, 0x236bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x426u)), (c.r[3] & 0xFFFFu));
    // 002373  add bx, bx
    X86_AT(c, 0x2373u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 002376  mov word ptr gs:[ebp + 0x42e], bx
    X86_AT(c, 0x2376u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x42Eu)), (c.r[3] & 0xFFFFu));
    // 00237e  ret 
    X86_AT(c, 0x237eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x22d1u, "ran off the end of a function");
}
void f_000022d9(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0022d9  mov eax, dword ptr [esi + 6]
    X86_AT(c, 0x22d9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)));
    // 0022dc  mov ebx, dword ptr [esi + 0xa]
    X86_AT(c, 0x22dcu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)));
    // 0022df  cmp ax, bx
    X86_AT(c, 0x22dfu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 0022e2  jle 0x22e6
    X86_AT(c, 0x22e2u);
    if (x86_cc(c, 14)) { goto L_22e6; }
    X86_TICK(c, 3);
    // 0022e4  xchg bx, ax
    X86_AT(c, 0x22e4u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_22e6:
    X86_TICK(c, 35);
    // 0022e6  mov word ptr gs:[ebp + 0x414], ax
    X86_AT(c, 0x22e6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), (c.r[0] & 0xFFFFu));
    // 0022ee  mov word ptr gs:[ebp + 0x418], bx
    X86_AT(c, 0x22eeu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), (c.r[3] & 0xFFFFu));
    // 0022f6  mov word ptr gs:[ebp + 0x1c4], ax
    X86_AT(c, 0x22f6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), (c.r[0] & 0xFFFFu));
    // 0022fe  mov word ptr gs:[ebp + 0x1c8], bx
    X86_AT(c, 0x22feu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[3] & 0xFFFFu));
    // 002306  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x2306u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 00230e  mov word ptr gs:[ebp + 0x224], bx
    X86_AT(c, 0x230eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[3] & 0xFFFFu));
    // 002316  sub bx, ax
    X86_AT(c, 0x2316u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 002319  inc bx
    X86_AT(c, 0x2319u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 00231b  mov word ptr gs:[ebp + 0x424], bx
    X86_AT(c, 0x231bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), (c.r[3] & 0xFFFFu));
    // 002323  add bx, bx
    X86_AT(c, 0x2323u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 002326  mov word ptr gs:[ebp + 0x42c], bx
    X86_AT(c, 0x2326u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x42Cu)), (c.r[3] & 0xFFFFu));
    // 00232e  shr eax, 0x10
    X86_AT(c, 0x232eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 002331  shr ebx, 0x10
    X86_AT(c, 0x2331u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 002334  cmp ax, bx
    X86_AT(c, 0x2334u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 002337  jle 0x233b
    X86_AT(c, 0x2337u);
    if (x86_cc(c, 14)) { goto L_233b; }
    X86_TICK(c, 3);
    // 002339  xchg bx, ax
    X86_AT(c, 0x2339u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_233b:
    X86_TICK(c, 33);
    // 00233b  mov word ptr gs:[ebp + 0x416], ax
    X86_AT(c, 0x233bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x416u)), (c.r[0] & 0xFFFFu));
    // 002343  mov word ptr gs:[ebp + 0x41a], bx
    X86_AT(c, 0x2343u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Au)), (c.r[3] & 0xFFFFu));
    // 00234b  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x234bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 002353  mov word ptr gs:[ebp + 0x1ca], bx
    X86_AT(c, 0x2353u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[3] & 0xFFFFu));
    // 00235b  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x235bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 002363  sub bx, ax
    X86_AT(c, 0x2363u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 002366  inc bx
    X86_AT(c, 0x2366u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 002368  movzx ecx, bx
    X86_AT(c, 0x2368u);
    c.r[1] = (c.r[3] & 0xFFFFu);
    // 00236b  mov word ptr gs:[ebp + 0x426], bx
    X86_AT(c, 0x236bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x426u)), (c.r[3] & 0xFFFFu));
    // 002373  add bx, bx
    X86_AT(c, 0x2373u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 002376  mov word ptr gs:[ebp + 0x42e], bx
    X86_AT(c, 0x2376u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x42Eu)), (c.r[3] & 0xFFFFu));
    // 00237e  ret 
    X86_AT(c, 0x237eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x22d9u, "ran off the end of a function");
}
}
