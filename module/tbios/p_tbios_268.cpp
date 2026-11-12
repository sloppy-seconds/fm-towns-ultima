#include "p_tbios_funcs.h"
namespace p_tbios {
void f_0000fc3f(X86Cpu& c) {
    X86_TICK(c, 42);
    // 00fc3f  sub cx, bx
    X86_AT(c, 0xfc3fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fc42  inc ecx
    X86_AT(c, 0xfc42u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00fc43  push ecx
    X86_AT(c, 0xfc43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00fc44  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc44u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00fc4c  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc4cu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00fc51  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0xfc51u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 00fc55  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc55u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
L_fc5c:
    X86_TICK(c, 7);
    // 00fc5c  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xfc5cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xfc63u); x86_call(c, t); X86_RET(c, 0xfc63u); }
    X86_TICK(c, 28);
    // 00fc63  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc63u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fc6b  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc6bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 00fc6f  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc6fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00fc76  dec dword ptr [esp]
    X86_AT(c, 0xfc76u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00fc79  jne 0xfc5c
    X86_AT(c, 0xfc79u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfc5cu); goto L_fc5c; }
    X86_TICK(c, 12);
    // 00fc7b  add esp, 4
    X86_AT(c, 0xfc7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00fc7e  ret 
    X86_AT(c, 0xfc7eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc3fu, "ran off the end of a function");
}
void f_0000fc42(X86Cpu& c) {
    X86_TICK(c, 40);
    // 00fc42  inc ecx
    X86_AT(c, 0xfc42u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00fc43  push ecx
    X86_AT(c, 0xfc43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00fc44  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc44u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00fc4c  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc4cu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00fc51  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0xfc51u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 00fc55  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc55u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
L_fc5c:
    X86_TICK(c, 7);
    // 00fc5c  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xfc5cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xfc63u); x86_call(c, t); X86_RET(c, 0xfc63u); }
    X86_TICK(c, 28);
    // 00fc63  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc63u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fc6b  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc6bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 00fc6f  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc6fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00fc76  dec dword ptr [esp]
    X86_AT(c, 0xfc76u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00fc79  jne 0xfc5c
    X86_AT(c, 0xfc79u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfc5cu); goto L_fc5c; }
    X86_TICK(c, 12);
    // 00fc7b  add esp, 4
    X86_AT(c, 0xfc7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00fc7e  ret 
    X86_AT(c, 0xfc7eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc42u, "ran off the end of a function");
}
void f_0000fc43(X86Cpu& c) {
    X86_TICK(c, 38);
    // 00fc43  push ecx
    X86_AT(c, 0xfc43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00fc44  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc44u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00fc4c  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc4cu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00fc51  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0xfc51u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 00fc55  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc55u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
L_fc5c:
    X86_TICK(c, 7);
    // 00fc5c  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xfc5cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xfc63u); x86_call(c, t); X86_RET(c, 0xfc63u); }
    X86_TICK(c, 28);
    // 00fc63  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc63u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fc6b  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc6bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 00fc6f  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc6fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00fc76  dec dword ptr [esp]
    X86_AT(c, 0xfc76u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00fc79  jne 0xfc5c
    X86_AT(c, 0xfc79u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfc5cu); goto L_fc5c; }
    X86_TICK(c, 12);
    // 00fc7b  add esp, 4
    X86_AT(c, 0xfc7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00fc7e  ret 
    X86_AT(c, 0xfc7eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc43u, "ran off the end of a function");
}
void f_0000fc44(X86Cpu& c) {
    X86_TICK(c, 36);
    // 00fc44  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc44u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00fc4c  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc4cu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00fc51  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0xfc51u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 00fc55  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc55u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
L_fc5c:
    X86_TICK(c, 7);
    // 00fc5c  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xfc5cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xfc63u); x86_call(c, t); X86_RET(c, 0xfc63u); }
    X86_TICK(c, 28);
    // 00fc63  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc63u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fc6b  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc6bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 00fc6f  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc6fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00fc76  dec dword ptr [esp]
    X86_AT(c, 0xfc76u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00fc79  jne 0xfc5c
    X86_AT(c, 0xfc79u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfc5cu); goto L_fc5c; }
    X86_TICK(c, 12);
    // 00fc7b  add esp, 4
    X86_AT(c, 0xfc7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00fc7e  ret 
    X86_AT(c, 0xfc7eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc44u, "ran off the end of a function");
}
void f_0000fc4c(X86Cpu& c) {
    X86_TICK(c, 30);
    // 00fc4c  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc4cu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00fc51  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0xfc51u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 00fc55  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc55u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
L_fc5c:
    X86_TICK(c, 7);
    // 00fc5c  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xfc5cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xfc63u); x86_call(c, t); X86_RET(c, 0xfc63u); }
    X86_TICK(c, 28);
    // 00fc63  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc63u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fc6b  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc6bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 00fc6f  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc6fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00fc76  dec dword ptr [esp]
    X86_AT(c, 0xfc76u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00fc79  jne 0xfc5c
    X86_AT(c, 0xfc79u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfc5cu); goto L_fc5c; }
    X86_TICK(c, 12);
    // 00fc7b  add esp, 4
    X86_AT(c, 0xfc7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00fc7e  ret 
    X86_AT(c, 0xfc7eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc4cu, "ran off the end of a function");
}
void f_0000fc51(X86Cpu& c) {
    X86_TICK(c, 8);
    // 00fc51  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0xfc51u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 00fc55  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc55u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
L_fc5c:
    X86_TICK(c, 7);
    // 00fc5c  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xfc5cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xfc63u); x86_call(c, t); X86_RET(c, 0xfc63u); }
    X86_TICK(c, 28);
    // 00fc63  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc63u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fc6b  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc6bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 00fc6f  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc6fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00fc76  dec dword ptr [esp]
    X86_AT(c, 0xfc76u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00fc79  jne 0xfc5c
    X86_AT(c, 0xfc79u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfc5cu); goto L_fc5c; }
    X86_TICK(c, 12);
    // 00fc7b  add esp, 4
    X86_AT(c, 0xfc7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00fc7e  ret 
    X86_AT(c, 0xfc7eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc51u, "ran off the end of a function");
}
void f_0000fc55(X86Cpu& c) {
    X86_TICK(c, 2);
    // 00fc55  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc55u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
L_fc5c:
    X86_TICK(c, 7);
    // 00fc5c  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xfc5cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xfc63u); x86_call(c, t); X86_RET(c, 0xfc63u); }
    X86_TICK(c, 28);
    // 00fc63  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc63u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fc6b  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc6bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 00fc6f  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc6fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00fc76  dec dword ptr [esp]
    X86_AT(c, 0xfc76u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00fc79  jne 0xfc5c
    X86_AT(c, 0xfc79u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfc5cu); goto L_fc5c; }
    X86_TICK(c, 12);
    // 00fc7b  add esp, 4
    X86_AT(c, 0xfc7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00fc7e  ret 
    X86_AT(c, 0xfc7eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc55u, "ran off the end of a function");
}
void f_0000fc5c(X86Cpu& c) {
L_fc5c:
    X86_TICK(c, 7);
    // 00fc5c  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xfc5cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xfc63u); x86_call(c, t); X86_RET(c, 0xfc63u); }
    X86_TICK(c, 28);
    // 00fc63  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc63u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fc6b  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc6bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 00fc6f  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc6fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00fc76  dec dword ptr [esp]
    X86_AT(c, 0xfc76u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00fc79  jne 0xfc5c
    X86_AT(c, 0xfc79u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfc5cu); goto L_fc5c; }
    X86_TICK(c, 12);
    // 00fc7b  add esp, 4
    X86_AT(c, 0xfc7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00fc7e  ret 
    X86_AT(c, 0xfc7eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc5cu, "ran off the end of a function");
}
void f_0000fc63(X86Cpu& c) {
    goto L_fc63;
L_fc5c:
    X86_TICK(c, 7);
    // 00fc5c  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xfc5cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xfc63u); x86_call(c, t); X86_RET(c, 0xfc63u); }
L_fc63:
    X86_TICK(c, 28);
    // 00fc63  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc63u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fc6b  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc6bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 00fc6f  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc6fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00fc76  dec dword ptr [esp]
    X86_AT(c, 0xfc76u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00fc79  jne 0xfc5c
    X86_AT(c, 0xfc79u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfc5cu); goto L_fc5c; }
    X86_TICK(c, 12);
    // 00fc7b  add esp, 4
    X86_AT(c, 0xfc7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00fc7e  ret 
    X86_AT(c, 0xfc7eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc63u, "ran off the end of a function");
}
void f_0000fc6b(X86Cpu& c) {
    goto L_fc6b;
L_fc5c:
    X86_TICK(c, 7);
    // 00fc5c  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xfc5cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xfc63u); x86_call(c, t); X86_RET(c, 0xfc63u); }
    X86_TICK(c, 6);
    // 00fc63  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc63u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_fc6b:
    X86_TICK(c, 22);
    // 00fc6b  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc6bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 00fc6f  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc6fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00fc76  dec dword ptr [esp]
    X86_AT(c, 0xfc76u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00fc79  jne 0xfc5c
    X86_AT(c, 0xfc79u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfc5cu); goto L_fc5c; }
    X86_TICK(c, 12);
    // 00fc7b  add esp, 4
    X86_AT(c, 0xfc7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00fc7e  ret 
    X86_AT(c, 0xfc7eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc6bu, "ran off the end of a function");
}
void f_0000fc6f(X86Cpu& c) {
    goto L_fc6f;
L_fc5c:
    X86_TICK(c, 7);
    // 00fc5c  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xfc5cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xfc63u); x86_call(c, t); X86_RET(c, 0xfc63u); }
    X86_TICK(c, 10);
    // 00fc63  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc63u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fc6b  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc6bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
L_fc6f:
    X86_TICK(c, 18);
    // 00fc6f  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc6fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00fc76  dec dword ptr [esp]
    X86_AT(c, 0xfc76u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00fc79  jne 0xfc5c
    X86_AT(c, 0xfc79u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfc5cu); goto L_fc5c; }
    X86_TICK(c, 12);
    // 00fc7b  add esp, 4
    X86_AT(c, 0xfc7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00fc7e  ret 
    X86_AT(c, 0xfc7eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc6fu, "ran off the end of a function");
}
void f_0000fc76(X86Cpu& c) {
    goto L_fc76;
L_fc5c:
    X86_TICK(c, 7);
    // 00fc5c  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xfc5cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xfc63u); x86_call(c, t); X86_RET(c, 0xfc63u); }
    X86_TICK(c, 17);
    // 00fc63  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc63u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fc6b  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc6bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 00fc6f  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc6fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
L_fc76:
    X86_TICK(c, 11);
    // 00fc76  dec dword ptr [esp]
    X86_AT(c, 0xfc76u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00fc79  jne 0xfc5c
    X86_AT(c, 0xfc79u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfc5cu); goto L_fc5c; }
    X86_TICK(c, 12);
    // 00fc7b  add esp, 4
    X86_AT(c, 0xfc7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00fc7e  ret 
    X86_AT(c, 0xfc7eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc76u, "ran off the end of a function");
}
void f_0000fc79(X86Cpu& c) {
    goto L_fc79;
L_fc5c:
    X86_TICK(c, 7);
    // 00fc5c  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xfc5cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xfc63u); x86_call(c, t); X86_RET(c, 0xfc63u); }
    X86_TICK(c, 23);
    // 00fc63  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc63u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fc6b  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc6bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 00fc6f  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc6fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00fc76  dec dword ptr [esp]
    X86_AT(c, 0xfc76u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_fc79:
    X86_TICK(c, 5);
    // 00fc79  jne 0xfc5c
    X86_AT(c, 0xfc79u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfc5cu); goto L_fc5c; }
    X86_TICK(c, 12);
    // 00fc7b  add esp, 4
    X86_AT(c, 0xfc7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00fc7e  ret 
    X86_AT(c, 0xfc7eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc79u, "ran off the end of a function");
}
void f_0000fc7b(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00fc7b  add esp, 4
    X86_AT(c, 0xfc7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00fc7e  ret 
    X86_AT(c, 0xfc7eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc7bu, "ran off the end of a function");
}
void f_0000fc7e(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00fc7e  ret 
    X86_AT(c, 0xfc7eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc7eu, "ran off the end of a function");
}
void f_0000fc90(X86Cpu& c) {
    X86_TICK(c, 71);
    // 00fc90  mov cx, dx
    X86_AT(c, 0xfc90u);
    s16(c, 1, (c.r[2] & 0xFFFFu));
    // 00fc93  mov ax, bx
    X86_AT(c, 0xfc93u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 00fc96  sub cx, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xfc96u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))), 0, 2)); }
    // 00fc9e  sub cx, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xfc9eu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))), 0, 2)); }
    // 00fca6  sub cx, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xfca6u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))), 0, 2)); }
    // 00fcae  sub ax, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xfcaeu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))), 0, 2)); }
    // 00fcb6  add dx, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xfcb6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00fcbe  add dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfcbeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))), 0, 2)); }
    // 00fcc6  add dx, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xfcc6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00fcce  add bx, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xfcceu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00fcd6  add bx, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xfcd6u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 2)); }
    // 00fcde  add bx, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xfcdeu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00fce6  jmp 0xfdf7
    X86_AT(c, 0xfce6u);
    goto L_fdf7;
L_fdf7:
    X86_TICK(c, 12);
    // 00fdf7  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0xfdf7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 00fdfc  jg 0xfe44
    X86_AT(c, 0xfdfcu);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fdfe  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0xfdfeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00fe03  jl 0xfe44
    X86_AT(c, 0xfe03u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe05  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0xfe05u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00fe0a  jg 0xfe44
    X86_AT(c, 0xfe0au);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe0c  cmp word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0xfe0cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00fe11  jl 0xfe44
    X86_AT(c, 0xfe11u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
L_fe44:
    X86_TICK(c, 12);
    // 00fe44  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe44u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe4c  jne 0xfe5e
    X86_AT(c, 0xfe4cu);
    if (x86_cc(c, 5)) { goto L_fe5e; }
    X86_TICK(c, 12);
    // 00fe52  mov dword ptr gs:[ebp + 0x324], 0x804c
    X86_AT(c, 0xfe52u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x804Cu);
    // 00fe5d  ret 
    X86_AT(c, 0xfe5du);
    c.eip = pop32(c); return;
L_fe5e:
    X86_TICK(c, 14);
    // 00fe5e  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0xfe5eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 00fe69  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0xfe69u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 00fe74  ret 
    X86_AT(c, 0xfe74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc90u, "ran off the end of a function");
}
void f_0000fc93(X86Cpu& c) {
    X86_TICK(c, 69);
    // 00fc93  mov ax, bx
    X86_AT(c, 0xfc93u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 00fc96  sub cx, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xfc96u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))), 0, 2)); }
    // 00fc9e  sub cx, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xfc9eu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))), 0, 2)); }
    // 00fca6  sub cx, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xfca6u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))), 0, 2)); }
    // 00fcae  sub ax, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xfcaeu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))), 0, 2)); }
    // 00fcb6  add dx, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xfcb6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00fcbe  add dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfcbeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))), 0, 2)); }
    // 00fcc6  add dx, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xfcc6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00fcce  add bx, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xfcceu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00fcd6  add bx, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xfcd6u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 2)); }
    // 00fcde  add bx, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xfcdeu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00fce6  jmp 0xfdf7
    X86_AT(c, 0xfce6u);
    goto L_fdf7;
L_fdf7:
    X86_TICK(c, 12);
    // 00fdf7  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0xfdf7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 00fdfc  jg 0xfe44
    X86_AT(c, 0xfdfcu);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fdfe  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0xfdfeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00fe03  jl 0xfe44
    X86_AT(c, 0xfe03u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe05  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0xfe05u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00fe0a  jg 0xfe44
    X86_AT(c, 0xfe0au);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe0c  cmp word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0xfe0cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00fe11  jl 0xfe44
    X86_AT(c, 0xfe11u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
L_fe44:
    X86_TICK(c, 12);
    // 00fe44  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe44u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe4c  jne 0xfe5e
    X86_AT(c, 0xfe4cu);
    if (x86_cc(c, 5)) { goto L_fe5e; }
    X86_TICK(c, 12);
    // 00fe52  mov dword ptr gs:[ebp + 0x324], 0x804c
    X86_AT(c, 0xfe52u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x804Cu);
    // 00fe5d  ret 
    X86_AT(c, 0xfe5du);
    c.eip = pop32(c); return;
L_fe5e:
    X86_TICK(c, 14);
    // 00fe5e  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0xfe5eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 00fe69  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0xfe69u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 00fe74  ret 
    X86_AT(c, 0xfe74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc93u, "ran off the end of a function");
}
void f_0000fc96(X86Cpu& c) {
    X86_TICK(c, 67);
    // 00fc96  sub cx, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xfc96u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))), 0, 2)); }
    // 00fc9e  sub cx, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xfc9eu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))), 0, 2)); }
    // 00fca6  sub cx, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xfca6u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))), 0, 2)); }
    // 00fcae  sub ax, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xfcaeu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))), 0, 2)); }
    // 00fcb6  add dx, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xfcb6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00fcbe  add dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfcbeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))), 0, 2)); }
    // 00fcc6  add dx, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xfcc6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00fcce  add bx, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xfcceu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00fcd6  add bx, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xfcd6u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 2)); }
    // 00fcde  add bx, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xfcdeu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00fce6  jmp 0xfdf7
    X86_AT(c, 0xfce6u);
    goto L_fdf7;
L_fdf7:
    X86_TICK(c, 12);
    // 00fdf7  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0xfdf7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 00fdfc  jg 0xfe44
    X86_AT(c, 0xfdfcu);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fdfe  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0xfdfeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00fe03  jl 0xfe44
    X86_AT(c, 0xfe03u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe05  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0xfe05u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00fe0a  jg 0xfe44
    X86_AT(c, 0xfe0au);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe0c  cmp word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0xfe0cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00fe11  jl 0xfe44
    X86_AT(c, 0xfe11u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
L_fe44:
    X86_TICK(c, 12);
    // 00fe44  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe44u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe4c  jne 0xfe5e
    X86_AT(c, 0xfe4cu);
    if (x86_cc(c, 5)) { goto L_fe5e; }
    X86_TICK(c, 12);
    // 00fe52  mov dword ptr gs:[ebp + 0x324], 0x804c
    X86_AT(c, 0xfe52u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x804Cu);
    // 00fe5d  ret 
    X86_AT(c, 0xfe5du);
    c.eip = pop32(c); return;
L_fe5e:
    X86_TICK(c, 14);
    // 00fe5e  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0xfe5eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 00fe69  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0xfe69u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 00fe74  ret 
    X86_AT(c, 0xfe74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc96u, "ran off the end of a function");
}
void f_0000fc9e(X86Cpu& c) {
    X86_TICK(c, 61);
    // 00fc9e  sub cx, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xfc9eu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))), 0, 2)); }
    // 00fca6  sub cx, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xfca6u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))), 0, 2)); }
    // 00fcae  sub ax, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xfcaeu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))), 0, 2)); }
    // 00fcb6  add dx, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xfcb6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00fcbe  add dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfcbeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))), 0, 2)); }
    // 00fcc6  add dx, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xfcc6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00fcce  add bx, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xfcceu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00fcd6  add bx, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xfcd6u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 2)); }
    // 00fcde  add bx, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xfcdeu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00fce6  jmp 0xfdf7
    X86_AT(c, 0xfce6u);
    goto L_fdf7;
L_fdf7:
    X86_TICK(c, 12);
    // 00fdf7  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0xfdf7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 00fdfc  jg 0xfe44
    X86_AT(c, 0xfdfcu);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fdfe  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0xfdfeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00fe03  jl 0xfe44
    X86_AT(c, 0xfe03u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe05  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0xfe05u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00fe0a  jg 0xfe44
    X86_AT(c, 0xfe0au);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe0c  cmp word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0xfe0cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00fe11  jl 0xfe44
    X86_AT(c, 0xfe11u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
L_fe44:
    X86_TICK(c, 12);
    // 00fe44  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe44u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe4c  jne 0xfe5e
    X86_AT(c, 0xfe4cu);
    if (x86_cc(c, 5)) { goto L_fe5e; }
    X86_TICK(c, 12);
    // 00fe52  mov dword ptr gs:[ebp + 0x324], 0x804c
    X86_AT(c, 0xfe52u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x804Cu);
    // 00fe5d  ret 
    X86_AT(c, 0xfe5du);
    c.eip = pop32(c); return;
L_fe5e:
    X86_TICK(c, 14);
    // 00fe5e  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0xfe5eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 00fe69  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0xfe69u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 00fe74  ret 
    X86_AT(c, 0xfe74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc9eu, "ran off the end of a function");
}
void f_0000fca6(X86Cpu& c) {
    X86_TICK(c, 55);
    // 00fca6  sub cx, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xfca6u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))), 0, 2)); }
    // 00fcae  sub ax, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xfcaeu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))), 0, 2)); }
    // 00fcb6  add dx, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xfcb6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00fcbe  add dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfcbeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))), 0, 2)); }
    // 00fcc6  add dx, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xfcc6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00fcce  add bx, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xfcceu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00fcd6  add bx, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xfcd6u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 2)); }
    // 00fcde  add bx, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xfcdeu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00fce6  jmp 0xfdf7
    X86_AT(c, 0xfce6u);
    goto L_fdf7;
L_fdf7:
    X86_TICK(c, 12);
    // 00fdf7  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0xfdf7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 00fdfc  jg 0xfe44
    X86_AT(c, 0xfdfcu);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fdfe  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0xfdfeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00fe03  jl 0xfe44
    X86_AT(c, 0xfe03u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe05  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0xfe05u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00fe0a  jg 0xfe44
    X86_AT(c, 0xfe0au);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe0c  cmp word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0xfe0cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00fe11  jl 0xfe44
    X86_AT(c, 0xfe11u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
L_fe44:
    X86_TICK(c, 12);
    // 00fe44  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe44u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe4c  jne 0xfe5e
    X86_AT(c, 0xfe4cu);
    if (x86_cc(c, 5)) { goto L_fe5e; }
    X86_TICK(c, 12);
    // 00fe52  mov dword ptr gs:[ebp + 0x324], 0x804c
    X86_AT(c, 0xfe52u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x804Cu);
    // 00fe5d  ret 
    X86_AT(c, 0xfe5du);
    c.eip = pop32(c); return;
L_fe5e:
    X86_TICK(c, 14);
    // 00fe5e  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0xfe5eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 00fe69  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0xfe69u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 00fe74  ret 
    X86_AT(c, 0xfe74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfca6u, "ran off the end of a function");
}
void f_0000fcae(X86Cpu& c) {
    X86_TICK(c, 49);
    // 00fcae  sub ax, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xfcaeu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))), 0, 2)); }
    // 00fcb6  add dx, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xfcb6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00fcbe  add dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfcbeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))), 0, 2)); }
    // 00fcc6  add dx, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xfcc6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00fcce  add bx, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xfcceu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00fcd6  add bx, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xfcd6u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 2)); }
    // 00fcde  add bx, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xfcdeu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00fce6  jmp 0xfdf7
    X86_AT(c, 0xfce6u);
    goto L_fdf7;
L_fdf7:
    X86_TICK(c, 12);
    // 00fdf7  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0xfdf7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 00fdfc  jg 0xfe44
    X86_AT(c, 0xfdfcu);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fdfe  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0xfdfeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00fe03  jl 0xfe44
    X86_AT(c, 0xfe03u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe05  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0xfe05u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00fe0a  jg 0xfe44
    X86_AT(c, 0xfe0au);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe0c  cmp word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0xfe0cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00fe11  jl 0xfe44
    X86_AT(c, 0xfe11u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
L_fe44:
    X86_TICK(c, 12);
    // 00fe44  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe44u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe4c  jne 0xfe5e
    X86_AT(c, 0xfe4cu);
    if (x86_cc(c, 5)) { goto L_fe5e; }
    X86_TICK(c, 12);
    // 00fe52  mov dword ptr gs:[ebp + 0x324], 0x804c
    X86_AT(c, 0xfe52u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x804Cu);
    // 00fe5d  ret 
    X86_AT(c, 0xfe5du);
    c.eip = pop32(c); return;
L_fe5e:
    X86_TICK(c, 14);
    // 00fe5e  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0xfe5eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 00fe69  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0xfe69u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 00fe74  ret 
    X86_AT(c, 0xfe74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfcaeu, "ran off the end of a function");
}
void f_0000fcb6(X86Cpu& c) {
    X86_TICK(c, 43);
    // 00fcb6  add dx, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xfcb6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00fcbe  add dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfcbeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))), 0, 2)); }
    // 00fcc6  add dx, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xfcc6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00fcce  add bx, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xfcceu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00fcd6  add bx, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xfcd6u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 2)); }
    // 00fcde  add bx, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xfcdeu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00fce6  jmp 0xfdf7
    X86_AT(c, 0xfce6u);
    goto L_fdf7;
L_fdf7:
    X86_TICK(c, 12);
    // 00fdf7  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0xfdf7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 00fdfc  jg 0xfe44
    X86_AT(c, 0xfdfcu);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fdfe  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0xfdfeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00fe03  jl 0xfe44
    X86_AT(c, 0xfe03u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe05  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0xfe05u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00fe0a  jg 0xfe44
    X86_AT(c, 0xfe0au);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe0c  cmp word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0xfe0cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00fe11  jl 0xfe44
    X86_AT(c, 0xfe11u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
L_fe44:
    X86_TICK(c, 12);
    // 00fe44  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe44u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe4c  jne 0xfe5e
    X86_AT(c, 0xfe4cu);
    if (x86_cc(c, 5)) { goto L_fe5e; }
    X86_TICK(c, 12);
    // 00fe52  mov dword ptr gs:[ebp + 0x324], 0x804c
    X86_AT(c, 0xfe52u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x804Cu);
    // 00fe5d  ret 
    X86_AT(c, 0xfe5du);
    c.eip = pop32(c); return;
L_fe5e:
    X86_TICK(c, 14);
    // 00fe5e  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0xfe5eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 00fe69  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0xfe69u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 00fe74  ret 
    X86_AT(c, 0xfe74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfcb6u, "ran off the end of a function");
}
void f_0000fcbe(X86Cpu& c) {
    X86_TICK(c, 37);
    // 00fcbe  add dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfcbeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))), 0, 2)); }
    // 00fcc6  add dx, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xfcc6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00fcce  add bx, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xfcceu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00fcd6  add bx, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xfcd6u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 2)); }
    // 00fcde  add bx, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xfcdeu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00fce6  jmp 0xfdf7
    X86_AT(c, 0xfce6u);
    goto L_fdf7;
L_fdf7:
    X86_TICK(c, 12);
    // 00fdf7  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0xfdf7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 00fdfc  jg 0xfe44
    X86_AT(c, 0xfdfcu);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fdfe  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0xfdfeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00fe03  jl 0xfe44
    X86_AT(c, 0xfe03u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe05  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0xfe05u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00fe0a  jg 0xfe44
    X86_AT(c, 0xfe0au);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe0c  cmp word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0xfe0cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00fe11  jl 0xfe44
    X86_AT(c, 0xfe11u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
L_fe44:
    X86_TICK(c, 12);
    // 00fe44  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe44u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe4c  jne 0xfe5e
    X86_AT(c, 0xfe4cu);
    if (x86_cc(c, 5)) { goto L_fe5e; }
    X86_TICK(c, 12);
    // 00fe52  mov dword ptr gs:[ebp + 0x324], 0x804c
    X86_AT(c, 0xfe52u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x804Cu);
    // 00fe5d  ret 
    X86_AT(c, 0xfe5du);
    c.eip = pop32(c); return;
L_fe5e:
    X86_TICK(c, 14);
    // 00fe5e  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0xfe5eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 00fe69  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0xfe69u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 00fe74  ret 
    X86_AT(c, 0xfe74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfcbeu, "ran off the end of a function");
}
void f_0000fcc6(X86Cpu& c) {
    X86_TICK(c, 31);
    // 00fcc6  add dx, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xfcc6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00fcce  add bx, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xfcceu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00fcd6  add bx, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xfcd6u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 2)); }
    // 00fcde  add bx, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xfcdeu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00fce6  jmp 0xfdf7
    X86_AT(c, 0xfce6u);
    goto L_fdf7;
L_fdf7:
    X86_TICK(c, 12);
    // 00fdf7  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0xfdf7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 00fdfc  jg 0xfe44
    X86_AT(c, 0xfdfcu);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fdfe  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0xfdfeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00fe03  jl 0xfe44
    X86_AT(c, 0xfe03u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe05  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0xfe05u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00fe0a  jg 0xfe44
    X86_AT(c, 0xfe0au);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe0c  cmp word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0xfe0cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00fe11  jl 0xfe44
    X86_AT(c, 0xfe11u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
L_fe44:
    X86_TICK(c, 12);
    // 00fe44  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe44u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe4c  jne 0xfe5e
    X86_AT(c, 0xfe4cu);
    if (x86_cc(c, 5)) { goto L_fe5e; }
    X86_TICK(c, 12);
    // 00fe52  mov dword ptr gs:[ebp + 0x324], 0x804c
    X86_AT(c, 0xfe52u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x804Cu);
    // 00fe5d  ret 
    X86_AT(c, 0xfe5du);
    c.eip = pop32(c); return;
L_fe5e:
    X86_TICK(c, 14);
    // 00fe5e  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0xfe5eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 00fe69  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0xfe69u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 00fe74  ret 
    X86_AT(c, 0xfe74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfcc6u, "ran off the end of a function");
}
void f_0000fcce(X86Cpu& c) {
    X86_TICK(c, 25);
    // 00fcce  add bx, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xfcceu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00fcd6  add bx, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xfcd6u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 2)); }
    // 00fcde  add bx, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xfcdeu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00fce6  jmp 0xfdf7
    X86_AT(c, 0xfce6u);
    goto L_fdf7;
L_fdf7:
    X86_TICK(c, 12);
    // 00fdf7  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0xfdf7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 00fdfc  jg 0xfe44
    X86_AT(c, 0xfdfcu);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fdfe  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0xfdfeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00fe03  jl 0xfe44
    X86_AT(c, 0xfe03u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe05  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0xfe05u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00fe0a  jg 0xfe44
    X86_AT(c, 0xfe0au);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe0c  cmp word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0xfe0cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00fe11  jl 0xfe44
    X86_AT(c, 0xfe11u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
L_fe44:
    X86_TICK(c, 12);
    // 00fe44  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe44u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe4c  jne 0xfe5e
    X86_AT(c, 0xfe4cu);
    if (x86_cc(c, 5)) { goto L_fe5e; }
    X86_TICK(c, 12);
    // 00fe52  mov dword ptr gs:[ebp + 0x324], 0x804c
    X86_AT(c, 0xfe52u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x804Cu);
    // 00fe5d  ret 
    X86_AT(c, 0xfe5du);
    c.eip = pop32(c); return;
L_fe5e:
    X86_TICK(c, 14);
    // 00fe5e  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0xfe5eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 00fe69  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0xfe69u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 00fe74  ret 
    X86_AT(c, 0xfe74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfcceu, "ran off the end of a function");
}
void f_0000fcd6(X86Cpu& c) {
    X86_TICK(c, 19);
    // 00fcd6  add bx, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xfcd6u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 2)); }
    // 00fcde  add bx, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xfcdeu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00fce6  jmp 0xfdf7
    X86_AT(c, 0xfce6u);
    goto L_fdf7;
L_fdf7:
    X86_TICK(c, 12);
    // 00fdf7  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0xfdf7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 00fdfc  jg 0xfe44
    X86_AT(c, 0xfdfcu);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fdfe  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0xfdfeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00fe03  jl 0xfe44
    X86_AT(c, 0xfe03u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe05  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0xfe05u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00fe0a  jg 0xfe44
    X86_AT(c, 0xfe0au);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe0c  cmp word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0xfe0cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00fe11  jl 0xfe44
    X86_AT(c, 0xfe11u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
L_fe44:
    X86_TICK(c, 12);
    // 00fe44  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe44u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe4c  jne 0xfe5e
    X86_AT(c, 0xfe4cu);
    if (x86_cc(c, 5)) { goto L_fe5e; }
    X86_TICK(c, 12);
    // 00fe52  mov dword ptr gs:[ebp + 0x324], 0x804c
    X86_AT(c, 0xfe52u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x804Cu);
    // 00fe5d  ret 
    X86_AT(c, 0xfe5du);
    c.eip = pop32(c); return;
L_fe5e:
    X86_TICK(c, 14);
    // 00fe5e  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0xfe5eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 00fe69  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0xfe69u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 00fe74  ret 
    X86_AT(c, 0xfe74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfcd6u, "ran off the end of a function");
}
void f_0000fcde(X86Cpu& c) {
    X86_TICK(c, 13);
    // 00fcde  add bx, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xfcdeu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00fce6  jmp 0xfdf7
    X86_AT(c, 0xfce6u);
    goto L_fdf7;
L_fdf7:
    X86_TICK(c, 12);
    // 00fdf7  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0xfdf7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 00fdfc  jg 0xfe44
    X86_AT(c, 0xfdfcu);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fdfe  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0xfdfeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00fe03  jl 0xfe44
    X86_AT(c, 0xfe03u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe05  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0xfe05u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00fe0a  jg 0xfe44
    X86_AT(c, 0xfe0au);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe0c  cmp word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0xfe0cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00fe11  jl 0xfe44
    X86_AT(c, 0xfe11u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
L_fe44:
    X86_TICK(c, 12);
    // 00fe44  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe44u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe4c  jne 0xfe5e
    X86_AT(c, 0xfe4cu);
    if (x86_cc(c, 5)) { goto L_fe5e; }
    X86_TICK(c, 12);
    // 00fe52  mov dword ptr gs:[ebp + 0x324], 0x804c
    X86_AT(c, 0xfe52u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x804Cu);
    // 00fe5d  ret 
    X86_AT(c, 0xfe5du);
    c.eip = pop32(c); return;
L_fe5e:
    X86_TICK(c, 14);
    // 00fe5e  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0xfe5eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 00fe69  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0xfe69u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 00fe74  ret 
    X86_AT(c, 0xfe74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfcdeu, "ran off the end of a function");
}
void f_0000fce6(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00fce6  jmp 0xfdf7
    X86_AT(c, 0xfce6u);
    goto L_fdf7;
L_fdf7:
    X86_TICK(c, 12);
    // 00fdf7  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0xfdf7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 00fdfc  jg 0xfe44
    X86_AT(c, 0xfdfcu);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fdfe  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0xfdfeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00fe03  jl 0xfe44
    X86_AT(c, 0xfe03u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe05  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0xfe05u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00fe0a  jg 0xfe44
    X86_AT(c, 0xfe0au);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe0c  cmp word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0xfe0cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00fe11  jl 0xfe44
    X86_AT(c, 0xfe11u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
L_fe44:
    X86_TICK(c, 12);
    // 00fe44  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe44u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe4c  jne 0xfe5e
    X86_AT(c, 0xfe4cu);
    if (x86_cc(c, 5)) { goto L_fe5e; }
    X86_TICK(c, 12);
    // 00fe52  mov dword ptr gs:[ebp + 0x324], 0x804c
    X86_AT(c, 0xfe52u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x804Cu);
    // 00fe5d  ret 
    X86_AT(c, 0xfe5du);
    c.eip = pop32(c); return;
L_fe5e:
    X86_TICK(c, 14);
    // 00fe5e  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0xfe5eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 00fe69  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0xfe69u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 00fe74  ret 
    X86_AT(c, 0xfe74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfce6u, "ran off the end of a function");
}
void f_0000fceb(X86Cpu& c) {
    X86_TICK(c, 71);
    // 00fceb  mov cx, dx
    X86_AT(c, 0xfcebu);
    s16(c, 1, (c.r[2] & 0xFFFFu));
    // 00fcee  mov ax, bx
    X86_AT(c, 0xfceeu);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 00fcf1  sub cx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xfcf1u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))), 0, 2)); }
    // 00fcf9  sub ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xfcf9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00fd01  sub ax, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfd01u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))), 0, 2)); }
    // 00fd09  sub ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xfd09u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00fd11  add dx, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xfd11u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00fd19  add dx, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xfd19u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 2)); }
    // 00fd21  add dx, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xfd21u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00fd29  add bx, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xfd29u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))), 0, 2)); }
    // 00fd31  add bx, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xfd31u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))), 0, 2)); }
    // 00fd39  add bx, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xfd39u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))), 0, 2)); }
    // 00fd41  jmp 0xfdf7
    X86_AT(c, 0xfd41u);
    goto L_fdf7;
L_fdf7:
    X86_TICK(c, 12);
    // 00fdf7  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0xfdf7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 00fdfc  jg 0xfe44
    X86_AT(c, 0xfdfcu);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fdfe  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0xfdfeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00fe03  jl 0xfe44
    X86_AT(c, 0xfe03u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe05  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0xfe05u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00fe0a  jg 0xfe44
    X86_AT(c, 0xfe0au);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe0c  cmp word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0xfe0cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00fe11  jl 0xfe44
    X86_AT(c, 0xfe11u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
L_fe44:
    X86_TICK(c, 12);
    // 00fe44  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe44u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe4c  jne 0xfe5e
    X86_AT(c, 0xfe4cu);
    if (x86_cc(c, 5)) { goto L_fe5e; }
    X86_TICK(c, 12);
    // 00fe52  mov dword ptr gs:[ebp + 0x324], 0x804c
    X86_AT(c, 0xfe52u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x804Cu);
    // 00fe5d  ret 
    X86_AT(c, 0xfe5du);
    c.eip = pop32(c); return;
L_fe5e:
    X86_TICK(c, 14);
    // 00fe5e  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0xfe5eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 00fe69  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0xfe69u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 00fe74  ret 
    X86_AT(c, 0xfe74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfcebu, "ran off the end of a function");
}
void f_0000fd46(X86Cpu& c) {
    X86_TICK(c, 71);
    // 00fd46  mov cx, dx
    X86_AT(c, 0xfd46u);
    s16(c, 1, (c.r[2] & 0xFFFFu));
    // 00fd49  mov ax, bx
    X86_AT(c, 0xfd49u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 00fd4c  add dx, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xfd4cu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))), 0, 2)); }
    // 00fd54  add dx, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xfd54u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))), 0, 2)); }
    // 00fd5c  add dx, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xfd5cu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))), 0, 2)); }
    // 00fd64  add bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xfd64u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))), 0, 2)); }
    // 00fd6c  sub cx, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xfd6cu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00fd74  sub cx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfd74u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))), 0, 2)); }
    // 00fd7c  sub cx, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xfd7cu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00fd84  sub ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xfd84u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00fd8c  sub ax, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xfd8cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 2)); }
    // 00fd94  sub ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xfd94u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00fd9c  jmp 0xfdf7
    X86_AT(c, 0xfd9cu);
    goto L_fdf7;
L_fdf7:
    X86_TICK(c, 12);
    // 00fdf7  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0xfdf7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 00fdfc  jg 0xfe44
    X86_AT(c, 0xfdfcu);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fdfe  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0xfdfeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00fe03  jl 0xfe44
    X86_AT(c, 0xfe03u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe05  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0xfe05u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00fe0a  jg 0xfe44
    X86_AT(c, 0xfe0au);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe0c  cmp word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0xfe0cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00fe11  jl 0xfe44
    X86_AT(c, 0xfe11u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
L_fe44:
    X86_TICK(c, 12);
    // 00fe44  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe44u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe4c  jne 0xfe5e
    X86_AT(c, 0xfe4cu);
    if (x86_cc(c, 5)) { goto L_fe5e; }
    X86_TICK(c, 12);
    // 00fe52  mov dword ptr gs:[ebp + 0x324], 0x804c
    X86_AT(c, 0xfe52u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x804Cu);
    // 00fe5d  ret 
    X86_AT(c, 0xfe5du);
    c.eip = pop32(c); return;
L_fe5e:
    X86_TICK(c, 14);
    // 00fe5e  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0xfe5eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 00fe69  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0xfe69u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 00fe74  ret 
    X86_AT(c, 0xfe74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfd46u, "ran off the end of a function");
}
void f_0000fda1(X86Cpu& c) {
    X86_TICK(c, 76);
    // 00fda1  mov cx, dx
    X86_AT(c, 0xfda1u);
    s16(c, 1, (c.r[2] & 0xFFFFu));
    // 00fda4  mov ax, bx
    X86_AT(c, 0xfda4u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 00fda7  sub cx, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xfda7u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))), 0, 2)); }
    // 00fdaf  sub cx, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xfdafu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 2)); }
    // 00fdb7  sub cx, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xfdb7u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00fdbf  sub ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xfdbfu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))), 0, 2)); }
    // 00fdc7  sub ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xfdc7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))), 0, 2)); }
    // 00fdcf  sub ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xfdcfu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))), 0, 2)); }
    // 00fdd7  add dx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xfdd7u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))), 0, 2)); }
    // 00fddf  add bx, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xfddfu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))), 0, 2)); }
    // 00fde7  add bx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfde7u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))), 0, 2)); }
    // 00fdef  add bx, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xfdefu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00fdf7  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0xfdf7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 00fdfc  jg 0xfe44
    X86_AT(c, 0xfdfcu);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fdfe  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0xfdfeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00fe03  jl 0xfe44
    X86_AT(c, 0xfe03u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe05  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0xfe05u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00fe0a  jg 0xfe44
    X86_AT(c, 0xfe0au);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe0c  cmp word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0xfe0cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00fe11  jl 0xfe44
    X86_AT(c, 0xfe11u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
L_fe44:
    X86_TICK(c, 12);
    // 00fe44  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe44u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe4c  jne 0xfe5e
    X86_AT(c, 0xfe4cu);
    if (x86_cc(c, 5)) { goto L_fe5e; }
    X86_TICK(c, 12);
    // 00fe52  mov dword ptr gs:[ebp + 0x324], 0x804c
    X86_AT(c, 0xfe52u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x804Cu);
    // 00fe5d  ret 
    X86_AT(c, 0xfe5du);
    c.eip = pop32(c); return;
L_fe5e:
    X86_TICK(c, 14);
    // 00fe5e  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0xfe5eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 00fe69  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0xfe69u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 00fe74  ret 
    X86_AT(c, 0xfe74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfda1u, "ran off the end of a function");
}
void f_0000fdf7(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00fdf7  cmp word ptr gs:[ebp + 0x28], cx
    X86_AT(c, 0xfdf7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[1] & 0xFFFFu), 0, 2);
    // 00fdfc  jg 0xfe44
    X86_AT(c, 0xfdfcu);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fdfe  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0xfdfeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00fe03  jl 0xfe44
    X86_AT(c, 0xfe03u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe05  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0xfe05u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00fe0a  jg 0xfe44
    X86_AT(c, 0xfe0au);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe0c  cmp word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0xfe0cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00fe11  jl 0xfe44
    X86_AT(c, 0xfe11u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
L_fe44:
    X86_TICK(c, 12);
    // 00fe44  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe44u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe4c  jne 0xfe5e
    X86_AT(c, 0xfe4cu);
    if (x86_cc(c, 5)) { goto L_fe5e; }
    X86_TICK(c, 12);
    // 00fe52  mov dword ptr gs:[ebp + 0x324], 0x804c
    X86_AT(c, 0xfe52u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x804Cu);
    // 00fe5d  ret 
    X86_AT(c, 0xfe5du);
    c.eip = pop32(c); return;
L_fe5e:
    X86_TICK(c, 14);
    // 00fe5e  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0xfe5eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 00fe69  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0xfe69u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 00fe74  ret 
    X86_AT(c, 0xfe74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdf7u, "ran off the end of a function");
}
void f_0000fdfc(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00fdfc  jg 0xfe44
    X86_AT(c, 0xfdfcu);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fdfe  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0xfdfeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00fe03  jl 0xfe44
    X86_AT(c, 0xfe03u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe05  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0xfe05u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00fe0a  jg 0xfe44
    X86_AT(c, 0xfe0au);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe0c  cmp word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0xfe0cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00fe11  jl 0xfe44
    X86_AT(c, 0xfe11u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
L_fe44:
    X86_TICK(c, 12);
    // 00fe44  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe44u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe4c  jne 0xfe5e
    X86_AT(c, 0xfe4cu);
    if (x86_cc(c, 5)) { goto L_fe5e; }
    X86_TICK(c, 12);
    // 00fe52  mov dword ptr gs:[ebp + 0x324], 0x804c
    X86_AT(c, 0xfe52u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x804Cu);
    // 00fe5d  ret 
    X86_AT(c, 0xfe5du);
    c.eip = pop32(c); return;
L_fe5e:
    X86_TICK(c, 14);
    // 00fe5e  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0xfe5eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 00fe69  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0xfe69u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 00fe74  ret 
    X86_AT(c, 0xfe74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdfcu, "ran off the end of a function");
}
void f_0000fdfe(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00fdfe  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0xfdfeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00fe03  jl 0xfe44
    X86_AT(c, 0xfe03u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe05  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0xfe05u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00fe0a  jg 0xfe44
    X86_AT(c, 0xfe0au);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe0c  cmp word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0xfe0cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00fe11  jl 0xfe44
    X86_AT(c, 0xfe11u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
L_fe44:
    X86_TICK(c, 12);
    // 00fe44  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe44u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe4c  jne 0xfe5e
    X86_AT(c, 0xfe4cu);
    if (x86_cc(c, 5)) { goto L_fe5e; }
    X86_TICK(c, 12);
    // 00fe52  mov dword ptr gs:[ebp + 0x324], 0x804c
    X86_AT(c, 0xfe52u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x804Cu);
    // 00fe5d  ret 
    X86_AT(c, 0xfe5du);
    c.eip = pop32(c); return;
L_fe5e:
    X86_TICK(c, 14);
    // 00fe5e  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0xfe5eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 00fe69  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0xfe69u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 00fe74  ret 
    X86_AT(c, 0xfe74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfdfeu, "ran off the end of a function");
}
void f_0000fe03(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00fe03  jl 0xfe44
    X86_AT(c, 0xfe03u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe05  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0xfe05u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00fe0a  jg 0xfe44
    X86_AT(c, 0xfe0au);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe0c  cmp word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0xfe0cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00fe11  jl 0xfe44
    X86_AT(c, 0xfe11u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
L_fe44:
    X86_TICK(c, 12);
    // 00fe44  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe44u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe4c  jne 0xfe5e
    X86_AT(c, 0xfe4cu);
    if (x86_cc(c, 5)) { goto L_fe5e; }
    X86_TICK(c, 12);
    // 00fe52  mov dword ptr gs:[ebp + 0x324], 0x804c
    X86_AT(c, 0xfe52u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x804Cu);
    // 00fe5d  ret 
    X86_AT(c, 0xfe5du);
    c.eip = pop32(c); return;
L_fe5e:
    X86_TICK(c, 14);
    // 00fe5e  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0xfe5eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 00fe69  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0xfe69u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 00fe74  ret 
    X86_AT(c, 0xfe74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe03u, "ran off the end of a function");
}
void f_0000fe05(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00fe05  cmp word ptr gs:[ebp + 0x2a], ax
    X86_AT(c, 0xfe05u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00fe0a  jg 0xfe44
    X86_AT(c, 0xfe0au);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe0c  cmp word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0xfe0cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00fe11  jl 0xfe44
    X86_AT(c, 0xfe11u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
L_fe44:
    X86_TICK(c, 12);
    // 00fe44  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe44u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe4c  jne 0xfe5e
    X86_AT(c, 0xfe4cu);
    if (x86_cc(c, 5)) { goto L_fe5e; }
    X86_TICK(c, 12);
    // 00fe52  mov dword ptr gs:[ebp + 0x324], 0x804c
    X86_AT(c, 0xfe52u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x804Cu);
    // 00fe5d  ret 
    X86_AT(c, 0xfe5du);
    c.eip = pop32(c); return;
L_fe5e:
    X86_TICK(c, 14);
    // 00fe5e  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0xfe5eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 00fe69  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0xfe69u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 00fe74  ret 
    X86_AT(c, 0xfe74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe05u, "ran off the end of a function");
}
void f_0000fe0a(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00fe0a  jg 0xfe44
    X86_AT(c, 0xfe0au);
    if (x86_cc(c, 15)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe0c  cmp word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0xfe0cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00fe11  jl 0xfe44
    X86_AT(c, 0xfe11u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
L_fe44:
    X86_TICK(c, 12);
    // 00fe44  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe44u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe4c  jne 0xfe5e
    X86_AT(c, 0xfe4cu);
    if (x86_cc(c, 5)) { goto L_fe5e; }
    X86_TICK(c, 12);
    // 00fe52  mov dword ptr gs:[ebp + 0x324], 0x804c
    X86_AT(c, 0xfe52u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x804Cu);
    // 00fe5d  ret 
    X86_AT(c, 0xfe5du);
    c.eip = pop32(c); return;
L_fe5e:
    X86_TICK(c, 14);
    // 00fe5e  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0xfe5eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 00fe69  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0xfe69u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 00fe74  ret 
    X86_AT(c, 0xfe74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe0au, "ran off the end of a function");
}
void f_0000fe0c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00fe0c  cmp word ptr gs:[ebp + 0x2e], bx
    X86_AT(c, 0xfe0cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00fe11  jl 0xfe44
    X86_AT(c, 0xfe11u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
L_fe44:
    X86_TICK(c, 12);
    // 00fe44  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe44u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe4c  jne 0xfe5e
    X86_AT(c, 0xfe4cu);
    if (x86_cc(c, 5)) { goto L_fe5e; }
    X86_TICK(c, 12);
    // 00fe52  mov dword ptr gs:[ebp + 0x324], 0x804c
    X86_AT(c, 0xfe52u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x804Cu);
    // 00fe5d  ret 
    X86_AT(c, 0xfe5du);
    c.eip = pop32(c); return;
L_fe5e:
    X86_TICK(c, 14);
    // 00fe5e  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0xfe5eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 00fe69  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0xfe69u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 00fe74  ret 
    X86_AT(c, 0xfe74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe0cu, "ran off the end of a function");
}
void f_0000fe11(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00fe11  jl 0xfe44
    X86_AT(c, 0xfe11u);
    if (x86_cc(c, 12)) { goto L_fe44; }
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
L_fe44:
    X86_TICK(c, 12);
    // 00fe44  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe44u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe4c  jne 0xfe5e
    X86_AT(c, 0xfe4cu);
    if (x86_cc(c, 5)) { goto L_fe5e; }
    X86_TICK(c, 12);
    // 00fe52  mov dword ptr gs:[ebp + 0x324], 0x804c
    X86_AT(c, 0xfe52u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x804Cu);
    // 00fe5d  ret 
    X86_AT(c, 0xfe5du);
    c.eip = pop32(c); return;
L_fe5e:
    X86_TICK(c, 14);
    // 00fe5e  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0xfe5eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 00fe69  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0xfe69u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 00fe74  ret 
    X86_AT(c, 0xfe74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe11u, "ran off the end of a function");
}
void f_0000fe13(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00fe13  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfe13u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe13u, "ran off the end of a function");
}
void f_0000fe1b(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00fe1b  jne 0xfe2d
    X86_AT(c, 0xfe1bu);
    if (x86_cc(c, 5)) { goto L_fe2d; }
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
L_fe2d:
    X86_TICK(c, 14);
    // 00fe2d  mov dword ptr gs:[ebp + 0x324], 0x8054
    X86_AT(c, 0xfe2du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8054u);
    // 00fe38  mov dword ptr gs:[ebp + 0x310], 0x6325
    X86_AT(c, 0xfe38u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6325u);
    // 00fe43  ret 
    X86_AT(c, 0xfe43u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe1bu, "ran off the end of a function");
}
void f_0000fe21(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00fe21  mov dword ptr gs:[ebp + 0x324], 0x8070
    X86_AT(c, 0xfe21u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8070u);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe21u, "ran off the end of a function");
}
void f_0000fe2c(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00fe2c  ret 
    X86_AT(c, 0xfe2cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfe2cu, "ran off the end of a function");
}
void f_00010094(X86Cpu& c) {
    X86_TICK(c, 27);
    // 010094  mov ax, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x10094u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 01009c  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x1009cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 0100a4  mov bx, word ptr gs:[ebp + 0x36e]
    X86_AT(c, 0x100a4u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu))));
    // 0100ac  add word ptr gs:[ebp + 0x226], bx
    X86_AT(c, 0x100acu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0100b4  ret 
    X86_AT(c, 0x100b4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10094u, "ran off the end of a function");
}
void f_000100b8(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0100b8  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x100b8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 0100c0  mov word ptr gs:[ebp + 0x390], ax
    X86_AT(c, 0x100c0u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x390u)), (c.r[0] & 0xFFFFu));
    // 0100c8  mov bx, word ptr gs:[ebp + 0x36e]
    X86_AT(c, 0x100c8u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu))));
    // 0100d0  add word ptr gs:[ebp + 0x390], bx
    X86_AT(c, 0x100d0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x390u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0100d8  ret 
    X86_AT(c, 0x100d8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x100b8u, "ran off the end of a function");
}
void f_000100dc(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0100dc  mov ax, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x100dcu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 0100e4  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x100e4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 0100ec  mov bx, word ptr gs:[ebp + 0x36e]
    X86_AT(c, 0x100ecu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu))));
    // 0100f4  sub word ptr gs:[ebp + 0x226], bx
    X86_AT(c, 0x100f4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0100fc  ret 
    X86_AT(c, 0x100fcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x100dcu, "ran off the end of a function");
}
void f_00010100(X86Cpu& c) {
    X86_TICK(c, 27);
    // 010100  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x10100u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 010108  mov word ptr gs:[ebp + 0x390], ax
    X86_AT(c, 0x10108u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x390u)), (c.r[0] & 0xFFFFu));
    // 010110  mov bx, word ptr gs:[ebp + 0x36e]
    X86_AT(c, 0x10110u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu))));
    // 010118  sub word ptr gs:[ebp + 0x390], bx
    X86_AT(c, 0x10118u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x390u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 010120  ret 
    X86_AT(c, 0x10120u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10100u, "ran off the end of a function");
}
void f_00010160(X86Cpu& c) {
    X86_TICK(c, 15);
    // 010160  dec ax
    X86_AT(c, 0x10160u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 010162  movzx ebx, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10162u);
    c.r[3] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 01016a  jmp dword ptr cs:[ebx*4 + 0x10174]
    X86_AT(c, 0x1016au);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0x10174u)));
      switch (t) {
      case 0x10184u: goto L_10184;
      case 0x10190u: goto L_10190;
      case 0x1019cu: goto L_1019c;
      case 0x101a8u: goto L_101a8;
      default: x86_jump(c, t); return; } }
L_10184:
    X86_TICK(c, 17);
    // 010184  sub word ptr gs:[ebp + 0x346], ax
    X86_AT(c, 0x10184u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x346u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 01018c  ret 
    X86_AT(c, 0x1018cu);
    c.eip = pop32(c); return;
L_10190:
    X86_TICK(c, 17);
    // 010190  sub word ptr gs:[ebp + 0x344], ax
    X86_AT(c, 0x10190u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 010198  ret 
    X86_AT(c, 0x10198u);
    c.eip = pop32(c); return;
L_1019c:
    X86_TICK(c, 17);
    // 01019c  add word ptr gs:[ebp + 0x346], ax
    X86_AT(c, 0x1019cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x346u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0101a4  ret 
    X86_AT(c, 0x101a4u);
    c.eip = pop32(c); return;
L_101a8:
    X86_TICK(c, 17);
    // 0101a8  add word ptr gs:[ebp + 0x344], ax
    X86_AT(c, 0x101a8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0101b0  ret 
    X86_AT(c, 0x101b0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10160u, "ran off the end of a function");
}
void f_00010162(X86Cpu& c) {
    X86_TICK(c, 13);
    // 010162  movzx ebx, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10162u);
    c.r[3] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 01016a  jmp dword ptr cs:[ebx*4 + 0x10174]
    X86_AT(c, 0x1016au);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0x10174u)));
      switch (t) {
      case 0x10184u: goto L_10184;
      case 0x10190u: goto L_10190;
      case 0x1019cu: goto L_1019c;
      case 0x101a8u: goto L_101a8;
      default: x86_jump(c, t); return; } }
L_10184:
    X86_TICK(c, 17);
    // 010184  sub word ptr gs:[ebp + 0x346], ax
    X86_AT(c, 0x10184u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x346u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 01018c  ret 
    X86_AT(c, 0x1018cu);
    c.eip = pop32(c); return;
L_10190:
    X86_TICK(c, 17);
    // 010190  sub word ptr gs:[ebp + 0x344], ax
    X86_AT(c, 0x10190u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 010198  ret 
    X86_AT(c, 0x10198u);
    c.eip = pop32(c); return;
L_1019c:
    X86_TICK(c, 17);
    // 01019c  add word ptr gs:[ebp + 0x346], ax
    X86_AT(c, 0x1019cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x346u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0101a4  ret 
    X86_AT(c, 0x101a4u);
    c.eip = pop32(c); return;
L_101a8:
    X86_TICK(c, 17);
    // 0101a8  add word ptr gs:[ebp + 0x344], ax
    X86_AT(c, 0x101a8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0101b0  ret 
    X86_AT(c, 0x101b0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10162u, "ran off the end of a function");
}
void f_0001016a(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01016a  jmp dword ptr cs:[ebx*4 + 0x10174]
    X86_AT(c, 0x1016au);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0x10174u)));
      switch (t) {
      case 0x10184u: goto L_10184;
      case 0x10190u: goto L_10190;
      case 0x1019cu: goto L_1019c;
      case 0x101a8u: goto L_101a8;
      default: x86_jump(c, t); return; } }
L_10184:
    X86_TICK(c, 17);
    // 010184  sub word ptr gs:[ebp + 0x346], ax
    X86_AT(c, 0x10184u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x346u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 01018c  ret 
    X86_AT(c, 0x1018cu);
    c.eip = pop32(c); return;
L_10190:
    X86_TICK(c, 17);
    // 010190  sub word ptr gs:[ebp + 0x344], ax
    X86_AT(c, 0x10190u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 010198  ret 
    X86_AT(c, 0x10198u);
    c.eip = pop32(c); return;
L_1019c:
    X86_TICK(c, 17);
    // 01019c  add word ptr gs:[ebp + 0x346], ax
    X86_AT(c, 0x1019cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x346u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0101a4  ret 
    X86_AT(c, 0x101a4u);
    c.eip = pop32(c); return;
L_101a8:
    X86_TICK(c, 17);
    // 0101a8  add word ptr gs:[ebp + 0x344], ax
    X86_AT(c, 0x101a8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0101b0  ret 
    X86_AT(c, 0x101b0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1016au, "ran off the end of a function");
}
void f_00010184(X86Cpu& c) {
    X86_TICK(c, 17);
    // 010184  sub word ptr gs:[ebp + 0x346], ax
    X86_AT(c, 0x10184u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x346u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 01018c  ret 
    X86_AT(c, 0x1018cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10184u, "ran off the end of a function");
}
void f_0001018c(X86Cpu& c) {
    X86_TICK(c, 10);
    // 01018c  ret 
    X86_AT(c, 0x1018cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1018cu, "ran off the end of a function");
}
void f_000101b4(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0101b4  cmp ah, 0xe0
    X86_AT(c, 0x101b4u);
    (void)x86_sub(c, g8(c, 4), 0xE0u, 0, 1);
    // 0101b7  jb 0x101bc
    X86_AT(c, 0x101b7u);
    if (x86_cc(c, 2)) { goto L_101bc; }
    X86_TICK(c, 2);
    // 0101b9  sub ah, 0x40
    X86_AT(c, 0x101b9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, 0x40u, 0, 1)); }
L_101bc:
    X86_TICK(c, 11);
    // 0101bc  sub ah, 0x80
    X86_AT(c, 0x101bcu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0101bf  add ah, ah
    X86_AT(c, 0x101bfu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0101c1  cmp al, 0x9e
    X86_AT(c, 0x101c1u);
    (void)x86_sub(c, g8(c, 0), 0x9Eu, 0, 1);
    // 0101c3  jbe 0x101c9
    X86_AT(c, 0x101c3u);
    if (x86_cc(c, 6)) { goto L_101c9; }
    X86_TICK(c, 9);
    // 0101c5  sub al, 0x7e
    X86_AT(c, 0x101c5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x7Eu, 0, 1)); }
    // 0101c7  jmp 0x101d0
    X86_AT(c, 0x101c7u);
    goto L_101d0;
L_101c9:
    X86_TICK(c, 8);
    // 0101c9  dec ah
    X86_AT(c, 0x101c9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 0101cb  cmp al, 0x7f
    X86_AT(c, 0x101cbu);
    (void)x86_sub(c, g8(c, 0), 0x7Fu, 0, 1);
    // 0101cd  cmc 
    X86_AT(c, 0x101cdu);
    c.fl ^= X86_CF;
    // 0101ce  sbb al, 0x1f
    X86_AT(c, 0x101ceu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x1Fu, c.fl & 1, 1)); }
L_101d0:
    X86_TICK(c, 12);
    // 0101d0  add ah, 0x20
    X86_AT(c, 0x101d0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x20u, 0, 1)); }
    // 0101d3  ret 
    X86_AT(c, 0x101d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101b4u, "ran off the end of a function");
}
void f_000101b7(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0101b7  jb 0x101bc
    X86_AT(c, 0x101b7u);
    if (x86_cc(c, 2)) { goto L_101bc; }
    X86_TICK(c, 2);
    // 0101b9  sub ah, 0x40
    X86_AT(c, 0x101b9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, 0x40u, 0, 1)); }
L_101bc:
    X86_TICK(c, 11);
    // 0101bc  sub ah, 0x80
    X86_AT(c, 0x101bcu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0101bf  add ah, ah
    X86_AT(c, 0x101bfu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0101c1  cmp al, 0x9e
    X86_AT(c, 0x101c1u);
    (void)x86_sub(c, g8(c, 0), 0x9Eu, 0, 1);
    // 0101c3  jbe 0x101c9
    X86_AT(c, 0x101c3u);
    if (x86_cc(c, 6)) { goto L_101c9; }
    X86_TICK(c, 9);
    // 0101c5  sub al, 0x7e
    X86_AT(c, 0x101c5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x7Eu, 0, 1)); }
    // 0101c7  jmp 0x101d0
    X86_AT(c, 0x101c7u);
    goto L_101d0;
L_101c9:
    X86_TICK(c, 8);
    // 0101c9  dec ah
    X86_AT(c, 0x101c9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 0101cb  cmp al, 0x7f
    X86_AT(c, 0x101cbu);
    (void)x86_sub(c, g8(c, 0), 0x7Fu, 0, 1);
    // 0101cd  cmc 
    X86_AT(c, 0x101cdu);
    c.fl ^= X86_CF;
    // 0101ce  sbb al, 0x1f
    X86_AT(c, 0x101ceu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x1Fu, c.fl & 1, 1)); }
L_101d0:
    X86_TICK(c, 12);
    // 0101d0  add ah, 0x20
    X86_AT(c, 0x101d0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x20u, 0, 1)); }
    // 0101d3  ret 
    X86_AT(c, 0x101d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101b7u, "ran off the end of a function");
}
void f_000101b9(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0101b9  sub ah, 0x40
    X86_AT(c, 0x101b9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, 0x40u, 0, 1)); }
    // 0101bc  sub ah, 0x80
    X86_AT(c, 0x101bcu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0101bf  add ah, ah
    X86_AT(c, 0x101bfu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0101c1  cmp al, 0x9e
    X86_AT(c, 0x101c1u);
    (void)x86_sub(c, g8(c, 0), 0x9Eu, 0, 1);
    // 0101c3  jbe 0x101c9
    X86_AT(c, 0x101c3u);
    if (x86_cc(c, 6)) { goto L_101c9; }
    X86_TICK(c, 9);
    // 0101c5  sub al, 0x7e
    X86_AT(c, 0x101c5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x7Eu, 0, 1)); }
    // 0101c7  jmp 0x101d0
    X86_AT(c, 0x101c7u);
    goto L_101d0;
L_101c9:
    X86_TICK(c, 8);
    // 0101c9  dec ah
    X86_AT(c, 0x101c9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 0101cb  cmp al, 0x7f
    X86_AT(c, 0x101cbu);
    (void)x86_sub(c, g8(c, 0), 0x7Fu, 0, 1);
    // 0101cd  cmc 
    X86_AT(c, 0x101cdu);
    c.fl ^= X86_CF;
    // 0101ce  sbb al, 0x1f
    X86_AT(c, 0x101ceu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x1Fu, c.fl & 1, 1)); }
L_101d0:
    X86_TICK(c, 12);
    // 0101d0  add ah, 0x20
    X86_AT(c, 0x101d0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x20u, 0, 1)); }
    // 0101d3  ret 
    X86_AT(c, 0x101d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101b9u, "ran off the end of a function");
}
void f_000101bc(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0101bc  sub ah, 0x80
    X86_AT(c, 0x101bcu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0101bf  add ah, ah
    X86_AT(c, 0x101bfu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0101c1  cmp al, 0x9e
    X86_AT(c, 0x101c1u);
    (void)x86_sub(c, g8(c, 0), 0x9Eu, 0, 1);
    // 0101c3  jbe 0x101c9
    X86_AT(c, 0x101c3u);
    if (x86_cc(c, 6)) { goto L_101c9; }
    X86_TICK(c, 9);
    // 0101c5  sub al, 0x7e
    X86_AT(c, 0x101c5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x7Eu, 0, 1)); }
    // 0101c7  jmp 0x101d0
    X86_AT(c, 0x101c7u);
    goto L_101d0;
L_101c9:
    X86_TICK(c, 8);
    // 0101c9  dec ah
    X86_AT(c, 0x101c9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 0101cb  cmp al, 0x7f
    X86_AT(c, 0x101cbu);
    (void)x86_sub(c, g8(c, 0), 0x7Fu, 0, 1);
    // 0101cd  cmc 
    X86_AT(c, 0x101cdu);
    c.fl ^= X86_CF;
    // 0101ce  sbb al, 0x1f
    X86_AT(c, 0x101ceu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x1Fu, c.fl & 1, 1)); }
L_101d0:
    X86_TICK(c, 12);
    // 0101d0  add ah, 0x20
    X86_AT(c, 0x101d0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x20u, 0, 1)); }
    // 0101d3  ret 
    X86_AT(c, 0x101d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101bcu, "ran off the end of a function");
}
void f_000101bf(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0101bf  add ah, ah
    X86_AT(c, 0x101bfu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0101c1  cmp al, 0x9e
    X86_AT(c, 0x101c1u);
    (void)x86_sub(c, g8(c, 0), 0x9Eu, 0, 1);
    // 0101c3  jbe 0x101c9
    X86_AT(c, 0x101c3u);
    if (x86_cc(c, 6)) { goto L_101c9; }
    X86_TICK(c, 9);
    // 0101c5  sub al, 0x7e
    X86_AT(c, 0x101c5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x7Eu, 0, 1)); }
    // 0101c7  jmp 0x101d0
    X86_AT(c, 0x101c7u);
    goto L_101d0;
L_101c9:
    X86_TICK(c, 8);
    // 0101c9  dec ah
    X86_AT(c, 0x101c9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 0101cb  cmp al, 0x7f
    X86_AT(c, 0x101cbu);
    (void)x86_sub(c, g8(c, 0), 0x7Fu, 0, 1);
    // 0101cd  cmc 
    X86_AT(c, 0x101cdu);
    c.fl ^= X86_CF;
    // 0101ce  sbb al, 0x1f
    X86_AT(c, 0x101ceu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x1Fu, c.fl & 1, 1)); }
L_101d0:
    X86_TICK(c, 12);
    // 0101d0  add ah, 0x20
    X86_AT(c, 0x101d0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x20u, 0, 1)); }
    // 0101d3  ret 
    X86_AT(c, 0x101d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101bfu, "ran off the end of a function");
}
void f_000101c1(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0101c1  cmp al, 0x9e
    X86_AT(c, 0x101c1u);
    (void)x86_sub(c, g8(c, 0), 0x9Eu, 0, 1);
    // 0101c3  jbe 0x101c9
    X86_AT(c, 0x101c3u);
    if (x86_cc(c, 6)) { goto L_101c9; }
    X86_TICK(c, 9);
    // 0101c5  sub al, 0x7e
    X86_AT(c, 0x101c5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x7Eu, 0, 1)); }
    // 0101c7  jmp 0x101d0
    X86_AT(c, 0x101c7u);
    goto L_101d0;
L_101c9:
    X86_TICK(c, 8);
    // 0101c9  dec ah
    X86_AT(c, 0x101c9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 0101cb  cmp al, 0x7f
    X86_AT(c, 0x101cbu);
    (void)x86_sub(c, g8(c, 0), 0x7Fu, 0, 1);
    // 0101cd  cmc 
    X86_AT(c, 0x101cdu);
    c.fl ^= X86_CF;
    // 0101ce  sbb al, 0x1f
    X86_AT(c, 0x101ceu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x1Fu, c.fl & 1, 1)); }
L_101d0:
    X86_TICK(c, 12);
    // 0101d0  add ah, 0x20
    X86_AT(c, 0x101d0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x20u, 0, 1)); }
    // 0101d3  ret 
    X86_AT(c, 0x101d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101c1u, "ran off the end of a function");
}
void f_000101c3(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0101c3  jbe 0x101c9
    X86_AT(c, 0x101c3u);
    if (x86_cc(c, 6)) { goto L_101c9; }
    X86_TICK(c, 9);
    // 0101c5  sub al, 0x7e
    X86_AT(c, 0x101c5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x7Eu, 0, 1)); }
    // 0101c7  jmp 0x101d0
    X86_AT(c, 0x101c7u);
    goto L_101d0;
L_101c9:
    X86_TICK(c, 8);
    // 0101c9  dec ah
    X86_AT(c, 0x101c9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 0101cb  cmp al, 0x7f
    X86_AT(c, 0x101cbu);
    (void)x86_sub(c, g8(c, 0), 0x7Fu, 0, 1);
    // 0101cd  cmc 
    X86_AT(c, 0x101cdu);
    c.fl ^= X86_CF;
    // 0101ce  sbb al, 0x1f
    X86_AT(c, 0x101ceu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x1Fu, c.fl & 1, 1)); }
L_101d0:
    X86_TICK(c, 12);
    // 0101d0  add ah, 0x20
    X86_AT(c, 0x101d0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x20u, 0, 1)); }
    // 0101d3  ret 
    X86_AT(c, 0x101d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101c3u, "ran off the end of a function");
}
void f_000101c5(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0101c5  sub al, 0x7e
    X86_AT(c, 0x101c5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x7Eu, 0, 1)); }
    // 0101c7  jmp 0x101d0
    X86_AT(c, 0x101c7u);
    goto L_101d0;
L_101d0:
    X86_TICK(c, 12);
    // 0101d0  add ah, 0x20
    X86_AT(c, 0x101d0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x20u, 0, 1)); }
    // 0101d3  ret 
    X86_AT(c, 0x101d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101c5u, "ran off the end of a function");
}
void f_000101c7(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0101c7  jmp 0x101d0
    X86_AT(c, 0x101c7u);
    goto L_101d0;
L_101d0:
    X86_TICK(c, 12);
    // 0101d0  add ah, 0x20
    X86_AT(c, 0x101d0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x20u, 0, 1)); }
    // 0101d3  ret 
    X86_AT(c, 0x101d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101c7u, "ran off the end of a function");
}
void f_000101c9(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0101c9  dec ah
    X86_AT(c, 0x101c9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 0101cb  cmp al, 0x7f
    X86_AT(c, 0x101cbu);
    (void)x86_sub(c, g8(c, 0), 0x7Fu, 0, 1);
    // 0101cd  cmc 
    X86_AT(c, 0x101cdu);
    c.fl ^= X86_CF;
    // 0101ce  sbb al, 0x1f
    X86_AT(c, 0x101ceu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x1Fu, c.fl & 1, 1)); }
    // 0101d0  add ah, 0x20
    X86_AT(c, 0x101d0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x20u, 0, 1)); }
    // 0101d3  ret 
    X86_AT(c, 0x101d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101c9u, "ran off the end of a function");
}
void f_000101cb(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0101cb  cmp al, 0x7f
    X86_AT(c, 0x101cbu);
    (void)x86_sub(c, g8(c, 0), 0x7Fu, 0, 1);
    // 0101cd  cmc 
    X86_AT(c, 0x101cdu);
    c.fl ^= X86_CF;
    // 0101ce  sbb al, 0x1f
    X86_AT(c, 0x101ceu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x1Fu, c.fl & 1, 1)); }
    // 0101d0  add ah, 0x20
    X86_AT(c, 0x101d0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x20u, 0, 1)); }
    // 0101d3  ret 
    X86_AT(c, 0x101d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101cbu, "ran off the end of a function");
}
void f_000101cd(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0101cd  cmc 
    X86_AT(c, 0x101cdu);
    c.fl ^= X86_CF;
    // 0101ce  sbb al, 0x1f
    X86_AT(c, 0x101ceu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x1Fu, c.fl & 1, 1)); }
    // 0101d0  add ah, 0x20
    X86_AT(c, 0x101d0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x20u, 0, 1)); }
    // 0101d3  ret 
    X86_AT(c, 0x101d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101cdu, "ran off the end of a function");
}
void f_000101ce(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0101ce  sbb al, 0x1f
    X86_AT(c, 0x101ceu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x1Fu, c.fl & 1, 1)); }
    // 0101d0  add ah, 0x20
    X86_AT(c, 0x101d0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x20u, 0, 1)); }
    // 0101d3  ret 
    X86_AT(c, 0x101d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101ceu, "ran off the end of a function");
}
void f_000101d0(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0101d0  add ah, 0x20
    X86_AT(c, 0x101d0u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x20u, 0, 1)); }
    // 0101d3  ret 
    X86_AT(c, 0x101d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101d0u, "ran off the end of a function");
}
void f_000101d3(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0101d3  ret 
    X86_AT(c, 0x101d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101d3u, "ran off the end of a function");
}
void f_000101d4(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0101d4  shr ah, 1
    X86_AT(c, 0x101d4u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 0101d6  jb 0x101df
    X86_AT(c, 0x101d6u);
    if (x86_cc(c, 2)) { goto L_101df; }
    X86_TICK(c, 11);
    // 0101d8  add ah, 0x70
    X86_AT(c, 0x101d8u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x70u, 0, 1)); }
    // 0101db  add al, 0x7e
    X86_AT(c, 0x101dbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x7Eu, 0, 1)); }
    // 0101dd  jmp 0x101e7
    X86_AT(c, 0x101ddu);
    goto L_101e7;
L_101df:
    X86_TICK(c, 8);
    // 0101df  add ah, 0x71
    X86_AT(c, 0x101dfu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x71u, 0, 1)); }
    // 0101e2  cmp al, 0x60
    X86_AT(c, 0x101e2u);
    (void)x86_sub(c, g8(c, 0), 0x60u, 0, 1);
    // 0101e4  cmc 
    X86_AT(c, 0x101e4u);
    c.fl ^= X86_CF;
    // 0101e5  adc al, 0x1f
    X86_AT(c, 0x101e5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x1Fu, c.fl & 1, 1)); }
L_101e7:
    X86_TICK(c, 7);
    // 0101e7  cmp ah, 0xa0
    X86_AT(c, 0x101e7u);
    (void)x86_sub(c, g8(c, 4), 0xA0u, 0, 1);
    // 0101ea  jb 0x101ef
    X86_AT(c, 0x101eau);
    if (x86_cc(c, 2)) { goto L_101ef; }
    X86_TICK(c, 2);
    // 0101ec  add ah, 0x40
    X86_AT(c, 0x101ecu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x40u, 0, 1)); }
L_101ef:
    X86_TICK(c, 10);
    // 0101ef  ret 
    X86_AT(c, 0x101efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101d4u, "ran off the end of a function");
}
void f_00010210(X86Cpu& c) {
    X86_TICK(c, 43);
    // 010210  push gs
    X86_AT(c, 0x10210u);
    push32(c, c.sreg[5]);
    // 010212  push fs
    X86_AT(c, 0x10212u);
    push32(c, c.sreg[4]);
    // 010214  push es
    X86_AT(c, 0x10214u);
    push32(c, c.sreg[0]);
    // 010215  push ds
    X86_AT(c, 0x10215u);
    push32(c, c.sreg[3]);
    // 010216  pushal 
    X86_AT(c, 0x10216u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 010217  pushfd 
    X86_AT(c, 0x10217u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010218  mov ebp, esp
    X86_AT(c, 0x10218u);
    c.r[5] = c.r[4];
    // 01021a  mov byte ptr [ebp + 0x21], 0
    X86_AT(c, 0x1021au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0x0u);
    // 01021e  cmp ah, 0x10
    X86_AT(c, 0x1021eu);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 010221  ja 0x1029f
    X86_AT(c, 0x10221u);
    if (x86_cc(c, 7)) { goto L_1029f; }
    X86_TICK(c, 10);
    // 010223  movzx ecx, ah
    X86_AT(c, 0x10223u);
    c.r[1] = g8(c, 4);
    // 010226  test ecx, ecx
    X86_AT(c, 0x10226u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 010228  jne 0x1025c
    X86_AT(c, 0x10228u);
    if (x86_cc(c, 5)) { goto L_1025c; }
    X86_TICK(c, 112);
    // 01022a  push eax
    X86_AT(c, 0x1022au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01022b  push edx
    X86_AT(c, 0x1022bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01022c  mov eax, edi
    X86_AT(c, 0x1022cu);
    c.r[0] = c.r[7];
    // 01022e  mov dx, 0x3ad0
    X86_AT(c, 0x1022eu);
    s16(c, 2, 0x3AD0u);
    // 010232  out dx, al
    X86_AT(c, 0x10232u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010233  shr eax, 8
    X86_AT(c, 0x10233u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010236  add dx, 2
    X86_AT(c, 0x10236u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01023a  out dx, al
    X86_AT(c, 0x1023au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01023b  shr eax, 8
    X86_AT(c, 0x1023bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01023e  add dx, 2
    X86_AT(c, 0x1023eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010242  out dx, al
    X86_AT(c, 0x10242u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_1025c:
    X86_TICK(c, 119);
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
L_10296:
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
L_1029f:
    X86_TICK(c, 9);
    // 01029f  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x1029fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 0102a3  jmp 0x10296
    X86_AT(c, 0x102a3u);
    X86_POLL(c, 0x10296u); goto L_10296;
    x86_fault(c, 0x10210u, "ran off the end of a function");
}
void f_00010212(X86Cpu& c) {
    X86_TICK(c, 41);
    // 010212  push fs
    X86_AT(c, 0x10212u);
    push32(c, c.sreg[4]);
    // 010214  push es
    X86_AT(c, 0x10214u);
    push32(c, c.sreg[0]);
    // 010215  push ds
    X86_AT(c, 0x10215u);
    push32(c, c.sreg[3]);
    // 010216  pushal 
    X86_AT(c, 0x10216u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 010217  pushfd 
    X86_AT(c, 0x10217u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010218  mov ebp, esp
    X86_AT(c, 0x10218u);
    c.r[5] = c.r[4];
    // 01021a  mov byte ptr [ebp + 0x21], 0
    X86_AT(c, 0x1021au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0x0u);
    // 01021e  cmp ah, 0x10
    X86_AT(c, 0x1021eu);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 010221  ja 0x1029f
    X86_AT(c, 0x10221u);
    if (x86_cc(c, 7)) { goto L_1029f; }
    X86_TICK(c, 10);
    // 010223  movzx ecx, ah
    X86_AT(c, 0x10223u);
    c.r[1] = g8(c, 4);
    // 010226  test ecx, ecx
    X86_AT(c, 0x10226u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 010228  jne 0x1025c
    X86_AT(c, 0x10228u);
    if (x86_cc(c, 5)) { goto L_1025c; }
    X86_TICK(c, 112);
    // 01022a  push eax
    X86_AT(c, 0x1022au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01022b  push edx
    X86_AT(c, 0x1022bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01022c  mov eax, edi
    X86_AT(c, 0x1022cu);
    c.r[0] = c.r[7];
    // 01022e  mov dx, 0x3ad0
    X86_AT(c, 0x1022eu);
    s16(c, 2, 0x3AD0u);
    // 010232  out dx, al
    X86_AT(c, 0x10232u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010233  shr eax, 8
    X86_AT(c, 0x10233u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010236  add dx, 2
    X86_AT(c, 0x10236u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01023a  out dx, al
    X86_AT(c, 0x1023au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01023b  shr eax, 8
    X86_AT(c, 0x1023bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01023e  add dx, 2
    X86_AT(c, 0x1023eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010242  out dx, al
    X86_AT(c, 0x10242u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_1025c:
    X86_TICK(c, 119);
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
L_10296:
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
L_1029f:
    X86_TICK(c, 9);
    // 01029f  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x1029fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 0102a3  jmp 0x10296
    X86_AT(c, 0x102a3u);
    X86_POLL(c, 0x10296u); goto L_10296;
    x86_fault(c, 0x10212u, "ran off the end of a function");
}
void f_00010214(X86Cpu& c) {
    X86_TICK(c, 39);
    // 010214  push es
    X86_AT(c, 0x10214u);
    push32(c, c.sreg[0]);
    // 010215  push ds
    X86_AT(c, 0x10215u);
    push32(c, c.sreg[3]);
    // 010216  pushal 
    X86_AT(c, 0x10216u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 010217  pushfd 
    X86_AT(c, 0x10217u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010218  mov ebp, esp
    X86_AT(c, 0x10218u);
    c.r[5] = c.r[4];
    // 01021a  mov byte ptr [ebp + 0x21], 0
    X86_AT(c, 0x1021au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0x0u);
    // 01021e  cmp ah, 0x10
    X86_AT(c, 0x1021eu);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 010221  ja 0x1029f
    X86_AT(c, 0x10221u);
    if (x86_cc(c, 7)) { goto L_1029f; }
    X86_TICK(c, 10);
    // 010223  movzx ecx, ah
    X86_AT(c, 0x10223u);
    c.r[1] = g8(c, 4);
    // 010226  test ecx, ecx
    X86_AT(c, 0x10226u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 010228  jne 0x1025c
    X86_AT(c, 0x10228u);
    if (x86_cc(c, 5)) { goto L_1025c; }
    X86_TICK(c, 112);
    // 01022a  push eax
    X86_AT(c, 0x1022au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01022b  push edx
    X86_AT(c, 0x1022bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01022c  mov eax, edi
    X86_AT(c, 0x1022cu);
    c.r[0] = c.r[7];
    // 01022e  mov dx, 0x3ad0
    X86_AT(c, 0x1022eu);
    s16(c, 2, 0x3AD0u);
    // 010232  out dx, al
    X86_AT(c, 0x10232u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010233  shr eax, 8
    X86_AT(c, 0x10233u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010236  add dx, 2
    X86_AT(c, 0x10236u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01023a  out dx, al
    X86_AT(c, 0x1023au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01023b  shr eax, 8
    X86_AT(c, 0x1023bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01023e  add dx, 2
    X86_AT(c, 0x1023eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010242  out dx, al
    X86_AT(c, 0x10242u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_1025c:
    X86_TICK(c, 119);
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
L_10296:
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
L_1029f:
    X86_TICK(c, 9);
    // 01029f  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x1029fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 0102a3  jmp 0x10296
    X86_AT(c, 0x102a3u);
    X86_POLL(c, 0x10296u); goto L_10296;
    x86_fault(c, 0x10214u, "ran off the end of a function");
}
void f_00010215(X86Cpu& c) {
    X86_TICK(c, 37);
    // 010215  push ds
    X86_AT(c, 0x10215u);
    push32(c, c.sreg[3]);
    // 010216  pushal 
    X86_AT(c, 0x10216u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 010217  pushfd 
    X86_AT(c, 0x10217u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010218  mov ebp, esp
    X86_AT(c, 0x10218u);
    c.r[5] = c.r[4];
    // 01021a  mov byte ptr [ebp + 0x21], 0
    X86_AT(c, 0x1021au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0x0u);
    // 01021e  cmp ah, 0x10
    X86_AT(c, 0x1021eu);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 010221  ja 0x1029f
    X86_AT(c, 0x10221u);
    if (x86_cc(c, 7)) { goto L_1029f; }
    X86_TICK(c, 10);
    // 010223  movzx ecx, ah
    X86_AT(c, 0x10223u);
    c.r[1] = g8(c, 4);
    // 010226  test ecx, ecx
    X86_AT(c, 0x10226u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 010228  jne 0x1025c
    X86_AT(c, 0x10228u);
    if (x86_cc(c, 5)) { goto L_1025c; }
    X86_TICK(c, 112);
    // 01022a  push eax
    X86_AT(c, 0x1022au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01022b  push edx
    X86_AT(c, 0x1022bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01022c  mov eax, edi
    X86_AT(c, 0x1022cu);
    c.r[0] = c.r[7];
    // 01022e  mov dx, 0x3ad0
    X86_AT(c, 0x1022eu);
    s16(c, 2, 0x3AD0u);
    // 010232  out dx, al
    X86_AT(c, 0x10232u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010233  shr eax, 8
    X86_AT(c, 0x10233u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010236  add dx, 2
    X86_AT(c, 0x10236u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01023a  out dx, al
    X86_AT(c, 0x1023au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01023b  shr eax, 8
    X86_AT(c, 0x1023bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01023e  add dx, 2
    X86_AT(c, 0x1023eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010242  out dx, al
    X86_AT(c, 0x10242u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_1025c:
    X86_TICK(c, 119);
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
L_10296:
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
L_1029f:
    X86_TICK(c, 9);
    // 01029f  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x1029fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 0102a3  jmp 0x10296
    X86_AT(c, 0x102a3u);
    X86_POLL(c, 0x10296u); goto L_10296;
    x86_fault(c, 0x10215u, "ran off the end of a function");
}
void f_00010216(X86Cpu& c) {
    X86_TICK(c, 35);
    // 010216  pushal 
    X86_AT(c, 0x10216u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 010217  pushfd 
    X86_AT(c, 0x10217u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010218  mov ebp, esp
    X86_AT(c, 0x10218u);
    c.r[5] = c.r[4];
    // 01021a  mov byte ptr [ebp + 0x21], 0
    X86_AT(c, 0x1021au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0x0u);
    // 01021e  cmp ah, 0x10
    X86_AT(c, 0x1021eu);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 010221  ja 0x1029f
    X86_AT(c, 0x10221u);
    if (x86_cc(c, 7)) { goto L_1029f; }
    X86_TICK(c, 10);
    // 010223  movzx ecx, ah
    X86_AT(c, 0x10223u);
    c.r[1] = g8(c, 4);
    // 010226  test ecx, ecx
    X86_AT(c, 0x10226u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 010228  jne 0x1025c
    X86_AT(c, 0x10228u);
    if (x86_cc(c, 5)) { goto L_1025c; }
    X86_TICK(c, 112);
    // 01022a  push eax
    X86_AT(c, 0x1022au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01022b  push edx
    X86_AT(c, 0x1022bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01022c  mov eax, edi
    X86_AT(c, 0x1022cu);
    c.r[0] = c.r[7];
    // 01022e  mov dx, 0x3ad0
    X86_AT(c, 0x1022eu);
    s16(c, 2, 0x3AD0u);
    // 010232  out dx, al
    X86_AT(c, 0x10232u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010233  shr eax, 8
    X86_AT(c, 0x10233u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010236  add dx, 2
    X86_AT(c, 0x10236u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01023a  out dx, al
    X86_AT(c, 0x1023au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01023b  shr eax, 8
    X86_AT(c, 0x1023bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01023e  add dx, 2
    X86_AT(c, 0x1023eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010242  out dx, al
    X86_AT(c, 0x10242u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_1025c:
    X86_TICK(c, 119);
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
L_10296:
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
L_1029f:
    X86_TICK(c, 9);
    // 01029f  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x1029fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 0102a3  jmp 0x10296
    X86_AT(c, 0x102a3u);
    X86_POLL(c, 0x10296u); goto L_10296;
    x86_fault(c, 0x10216u, "ran off the end of a function");
}
void f_00010217(X86Cpu& c) {
    X86_TICK(c, 17);
    // 010217  pushfd 
    X86_AT(c, 0x10217u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010218  mov ebp, esp
    X86_AT(c, 0x10218u);
    c.r[5] = c.r[4];
    // 01021a  mov byte ptr [ebp + 0x21], 0
    X86_AT(c, 0x1021au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0x0u);
    // 01021e  cmp ah, 0x10
    X86_AT(c, 0x1021eu);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 010221  ja 0x1029f
    X86_AT(c, 0x10221u);
    if (x86_cc(c, 7)) { goto L_1029f; }
    X86_TICK(c, 10);
    // 010223  movzx ecx, ah
    X86_AT(c, 0x10223u);
    c.r[1] = g8(c, 4);
    // 010226  test ecx, ecx
    X86_AT(c, 0x10226u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 010228  jne 0x1025c
    X86_AT(c, 0x10228u);
    if (x86_cc(c, 5)) { goto L_1025c; }
    X86_TICK(c, 112);
    // 01022a  push eax
    X86_AT(c, 0x1022au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01022b  push edx
    X86_AT(c, 0x1022bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01022c  mov eax, edi
    X86_AT(c, 0x1022cu);
    c.r[0] = c.r[7];
    // 01022e  mov dx, 0x3ad0
    X86_AT(c, 0x1022eu);
    s16(c, 2, 0x3AD0u);
    // 010232  out dx, al
    X86_AT(c, 0x10232u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010233  shr eax, 8
    X86_AT(c, 0x10233u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010236  add dx, 2
    X86_AT(c, 0x10236u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01023a  out dx, al
    X86_AT(c, 0x1023au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01023b  shr eax, 8
    X86_AT(c, 0x1023bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01023e  add dx, 2
    X86_AT(c, 0x1023eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010242  out dx, al
    X86_AT(c, 0x10242u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_1025c:
    X86_TICK(c, 119);
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
L_10296:
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
L_1029f:
    X86_TICK(c, 9);
    // 01029f  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x1029fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 0102a3  jmp 0x10296
    X86_AT(c, 0x102a3u);
    X86_POLL(c, 0x10296u); goto L_10296;
    x86_fault(c, 0x10217u, "ran off the end of a function");
}
void f_00010218(X86Cpu& c) {
    X86_TICK(c, 11);
    // 010218  mov ebp, esp
    X86_AT(c, 0x10218u);
    c.r[5] = c.r[4];
    // 01021a  mov byte ptr [ebp + 0x21], 0
    X86_AT(c, 0x1021au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0x0u);
    // 01021e  cmp ah, 0x10
    X86_AT(c, 0x1021eu);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 010221  ja 0x1029f
    X86_AT(c, 0x10221u);
    if (x86_cc(c, 7)) { goto L_1029f; }
    X86_TICK(c, 10);
    // 010223  movzx ecx, ah
    X86_AT(c, 0x10223u);
    c.r[1] = g8(c, 4);
    // 010226  test ecx, ecx
    X86_AT(c, 0x10226u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 010228  jne 0x1025c
    X86_AT(c, 0x10228u);
    if (x86_cc(c, 5)) { goto L_1025c; }
    X86_TICK(c, 112);
    // 01022a  push eax
    X86_AT(c, 0x1022au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01022b  push edx
    X86_AT(c, 0x1022bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01022c  mov eax, edi
    X86_AT(c, 0x1022cu);
    c.r[0] = c.r[7];
    // 01022e  mov dx, 0x3ad0
    X86_AT(c, 0x1022eu);
    s16(c, 2, 0x3AD0u);
    // 010232  out dx, al
    X86_AT(c, 0x10232u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010233  shr eax, 8
    X86_AT(c, 0x10233u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010236  add dx, 2
    X86_AT(c, 0x10236u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01023a  out dx, al
    X86_AT(c, 0x1023au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01023b  shr eax, 8
    X86_AT(c, 0x1023bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01023e  add dx, 2
    X86_AT(c, 0x1023eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010242  out dx, al
    X86_AT(c, 0x10242u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_1025c:
    X86_TICK(c, 119);
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
L_10296:
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
L_1029f:
    X86_TICK(c, 9);
    // 01029f  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x1029fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 0102a3  jmp 0x10296
    X86_AT(c, 0x102a3u);
    X86_POLL(c, 0x10296u); goto L_10296;
    x86_fault(c, 0x10218u, "ran off the end of a function");
}
void f_0001021a(X86Cpu& c) {
    X86_TICK(c, 9);
    // 01021a  mov byte ptr [ebp + 0x21], 0
    X86_AT(c, 0x1021au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0x0u);
    // 01021e  cmp ah, 0x10
    X86_AT(c, 0x1021eu);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 010221  ja 0x1029f
    X86_AT(c, 0x10221u);
    if (x86_cc(c, 7)) { goto L_1029f; }
    X86_TICK(c, 10);
    // 010223  movzx ecx, ah
    X86_AT(c, 0x10223u);
    c.r[1] = g8(c, 4);
    // 010226  test ecx, ecx
    X86_AT(c, 0x10226u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 010228  jne 0x1025c
    X86_AT(c, 0x10228u);
    if (x86_cc(c, 5)) { goto L_1025c; }
    X86_TICK(c, 112);
    // 01022a  push eax
    X86_AT(c, 0x1022au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01022b  push edx
    X86_AT(c, 0x1022bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01022c  mov eax, edi
    X86_AT(c, 0x1022cu);
    c.r[0] = c.r[7];
    // 01022e  mov dx, 0x3ad0
    X86_AT(c, 0x1022eu);
    s16(c, 2, 0x3AD0u);
    // 010232  out dx, al
    X86_AT(c, 0x10232u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010233  shr eax, 8
    X86_AT(c, 0x10233u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010236  add dx, 2
    X86_AT(c, 0x10236u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01023a  out dx, al
    X86_AT(c, 0x1023au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01023b  shr eax, 8
    X86_AT(c, 0x1023bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01023e  add dx, 2
    X86_AT(c, 0x1023eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010242  out dx, al
    X86_AT(c, 0x10242u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_1025c:
    X86_TICK(c, 119);
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
L_10296:
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
L_1029f:
    X86_TICK(c, 9);
    // 01029f  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x1029fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 0102a3  jmp 0x10296
    X86_AT(c, 0x102a3u);
    X86_POLL(c, 0x10296u); goto L_10296;
    x86_fault(c, 0x1021au, "ran off the end of a function");
}
void f_0001021e(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01021e  cmp ah, 0x10
    X86_AT(c, 0x1021eu);
    (void)x86_sub(c, g8(c, 4), 0x10u, 0, 1);
    // 010221  ja 0x1029f
    X86_AT(c, 0x10221u);
    if (x86_cc(c, 7)) { goto L_1029f; }
    X86_TICK(c, 10);
    // 010223  movzx ecx, ah
    X86_AT(c, 0x10223u);
    c.r[1] = g8(c, 4);
    // 010226  test ecx, ecx
    X86_AT(c, 0x10226u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 010228  jne 0x1025c
    X86_AT(c, 0x10228u);
    if (x86_cc(c, 5)) { goto L_1025c; }
    X86_TICK(c, 112);
    // 01022a  push eax
    X86_AT(c, 0x1022au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01022b  push edx
    X86_AT(c, 0x1022bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01022c  mov eax, edi
    X86_AT(c, 0x1022cu);
    c.r[0] = c.r[7];
    // 01022e  mov dx, 0x3ad0
    X86_AT(c, 0x1022eu);
    s16(c, 2, 0x3AD0u);
    // 010232  out dx, al
    X86_AT(c, 0x10232u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010233  shr eax, 8
    X86_AT(c, 0x10233u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010236  add dx, 2
    X86_AT(c, 0x10236u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01023a  out dx, al
    X86_AT(c, 0x1023au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01023b  shr eax, 8
    X86_AT(c, 0x1023bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01023e  add dx, 2
    X86_AT(c, 0x1023eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010242  out dx, al
    X86_AT(c, 0x10242u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_1025c:
    X86_TICK(c, 119);
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
L_10296:
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
L_1029f:
    X86_TICK(c, 9);
    // 01029f  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x1029fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 0102a3  jmp 0x10296
    X86_AT(c, 0x102a3u);
    X86_POLL(c, 0x10296u); goto L_10296;
    x86_fault(c, 0x1021eu, "ran off the end of a function");
}
void f_00010221(X86Cpu& c) {
    X86_TICK(c, 5);
    // 010221  ja 0x1029f
    X86_AT(c, 0x10221u);
    if (x86_cc(c, 7)) { goto L_1029f; }
    X86_TICK(c, 10);
    // 010223  movzx ecx, ah
    X86_AT(c, 0x10223u);
    c.r[1] = g8(c, 4);
    // 010226  test ecx, ecx
    X86_AT(c, 0x10226u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 010228  jne 0x1025c
    X86_AT(c, 0x10228u);
    if (x86_cc(c, 5)) { goto L_1025c; }
    X86_TICK(c, 112);
    // 01022a  push eax
    X86_AT(c, 0x1022au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01022b  push edx
    X86_AT(c, 0x1022bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01022c  mov eax, edi
    X86_AT(c, 0x1022cu);
    c.r[0] = c.r[7];
    // 01022e  mov dx, 0x3ad0
    X86_AT(c, 0x1022eu);
    s16(c, 2, 0x3AD0u);
    // 010232  out dx, al
    X86_AT(c, 0x10232u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010233  shr eax, 8
    X86_AT(c, 0x10233u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010236  add dx, 2
    X86_AT(c, 0x10236u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01023a  out dx, al
    X86_AT(c, 0x1023au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01023b  shr eax, 8
    X86_AT(c, 0x1023bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01023e  add dx, 2
    X86_AT(c, 0x1023eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010242  out dx, al
    X86_AT(c, 0x10242u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_1025c:
    X86_TICK(c, 119);
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
L_10296:
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
L_1029f:
    X86_TICK(c, 9);
    // 01029f  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x1029fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 0102a3  jmp 0x10296
    X86_AT(c, 0x102a3u);
    X86_POLL(c, 0x10296u); goto L_10296;
    x86_fault(c, 0x10221u, "ran off the end of a function");
}
void f_00010223(X86Cpu& c) {
    X86_TICK(c, 10);
    // 010223  movzx ecx, ah
    X86_AT(c, 0x10223u);
    c.r[1] = g8(c, 4);
    // 010226  test ecx, ecx
    X86_AT(c, 0x10226u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 010228  jne 0x1025c
    X86_AT(c, 0x10228u);
    if (x86_cc(c, 5)) { goto L_1025c; }
    X86_TICK(c, 112);
    // 01022a  push eax
    X86_AT(c, 0x1022au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01022b  push edx
    X86_AT(c, 0x1022bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01022c  mov eax, edi
    X86_AT(c, 0x1022cu);
    c.r[0] = c.r[7];
    // 01022e  mov dx, 0x3ad0
    X86_AT(c, 0x1022eu);
    s16(c, 2, 0x3AD0u);
    // 010232  out dx, al
    X86_AT(c, 0x10232u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010233  shr eax, 8
    X86_AT(c, 0x10233u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010236  add dx, 2
    X86_AT(c, 0x10236u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01023a  out dx, al
    X86_AT(c, 0x1023au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01023b  shr eax, 8
    X86_AT(c, 0x1023bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01023e  add dx, 2
    X86_AT(c, 0x1023eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010242  out dx, al
    X86_AT(c, 0x10242u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_1025c:
    X86_TICK(c, 119);
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10223u, "ran off the end of a function");
}
}
