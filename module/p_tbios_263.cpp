#include "p_tbios_funcs.h"
namespace p_tbios {
void f_0000f598(X86Cpu& c) {
    goto L_f598;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f598:
    X86_TICK(c, 15);
    // 00f598  mov dword ptr gs:[ebp + 0x414], eax
    X86_AT(c, 0xf598u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), c.r[0]);
    // 00f59f  mov dword ptr gs:[ebp + 0x418], ebx
    X86_AT(c, 0xf59fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), c.r[3]);
    // 00f5a6  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0xf5a6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 00f5ad  mov dword ptr gs:[ebp + 0x1c8], ebx
    X86_AT(c, 0xf5adu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[3]);
    // 00f5b4  call 0x36e4
    X86_AT(c, 0xf5b4u);
    push32(c, 0xf5b9u); f_000036e4(c); X86_RET(c, 0xf5b9u);
    X86_TICK(c, 7);
    // 00f5b9  call 0x6120
    X86_AT(c, 0xf5b9u);
    push32(c, 0xf5beu); f_00006120(c); X86_RET(c, 0xf5beu);
    X86_TICK(c, 20);
    // 00f5be  mov byte ptr gs:[ebp + 0x220], 5
    X86_AT(c, 0xf5beu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x5u);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf598u, "ran off the end of a function");
}
void f_0000f59f(X86Cpu& c) {
    goto L_f59f;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f59f:
    X86_TICK(c, 13);
    // 00f59f  mov dword ptr gs:[ebp + 0x418], ebx
    X86_AT(c, 0xf59fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), c.r[3]);
    // 00f5a6  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0xf5a6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 00f5ad  mov dword ptr gs:[ebp + 0x1c8], ebx
    X86_AT(c, 0xf5adu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[3]);
    // 00f5b4  call 0x36e4
    X86_AT(c, 0xf5b4u);
    push32(c, 0xf5b9u); f_000036e4(c); X86_RET(c, 0xf5b9u);
    X86_TICK(c, 7);
    // 00f5b9  call 0x6120
    X86_AT(c, 0xf5b9u);
    push32(c, 0xf5beu); f_00006120(c); X86_RET(c, 0xf5beu);
    X86_TICK(c, 20);
    // 00f5be  mov byte ptr gs:[ebp + 0x220], 5
    X86_AT(c, 0xf5beu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x5u);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf59fu, "ran off the end of a function");
}
void f_0000f5a6(X86Cpu& c) {
    goto L_f5a6;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f5a6:
    X86_TICK(c, 11);
    // 00f5a6  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0xf5a6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 00f5ad  mov dword ptr gs:[ebp + 0x1c8], ebx
    X86_AT(c, 0xf5adu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[3]);
    // 00f5b4  call 0x36e4
    X86_AT(c, 0xf5b4u);
    push32(c, 0xf5b9u); f_000036e4(c); X86_RET(c, 0xf5b9u);
    X86_TICK(c, 7);
    // 00f5b9  call 0x6120
    X86_AT(c, 0xf5b9u);
    push32(c, 0xf5beu); f_00006120(c); X86_RET(c, 0xf5beu);
    X86_TICK(c, 20);
    // 00f5be  mov byte ptr gs:[ebp + 0x220], 5
    X86_AT(c, 0xf5beu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x5u);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf5a6u, "ran off the end of a function");
}
void f_0000f5ad(X86Cpu& c) {
    goto L_f5ad;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f5ad:
    X86_TICK(c, 9);
    // 00f5ad  mov dword ptr gs:[ebp + 0x1c8], ebx
    X86_AT(c, 0xf5adu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), c.r[3]);
    // 00f5b4  call 0x36e4
    X86_AT(c, 0xf5b4u);
    push32(c, 0xf5b9u); f_000036e4(c); X86_RET(c, 0xf5b9u);
    X86_TICK(c, 7);
    // 00f5b9  call 0x6120
    X86_AT(c, 0xf5b9u);
    push32(c, 0xf5beu); f_00006120(c); X86_RET(c, 0xf5beu);
    X86_TICK(c, 20);
    // 00f5be  mov byte ptr gs:[ebp + 0x220], 5
    X86_AT(c, 0xf5beu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x5u);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf5adu, "ran off the end of a function");
}
void f_0000f5b4(X86Cpu& c) {
    goto L_f5b4;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f5b4:
    X86_TICK(c, 7);
    // 00f5b4  call 0x36e4
    X86_AT(c, 0xf5b4u);
    push32(c, 0xf5b9u); f_000036e4(c); X86_RET(c, 0xf5b9u);
    X86_TICK(c, 7);
    // 00f5b9  call 0x6120
    X86_AT(c, 0xf5b9u);
    push32(c, 0xf5beu); f_00006120(c); X86_RET(c, 0xf5beu);
    X86_TICK(c, 20);
    // 00f5be  mov byte ptr gs:[ebp + 0x220], 5
    X86_AT(c, 0xf5beu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x5u);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf5b4u, "ran off the end of a function");
}
void f_0000f5b9(X86Cpu& c) {
    goto L_f5b9;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f5b9:
    X86_TICK(c, 7);
    // 00f5b9  call 0x6120
    X86_AT(c, 0xf5b9u);
    push32(c, 0xf5beu); f_00006120(c); X86_RET(c, 0xf5beu);
    X86_TICK(c, 20);
    // 00f5be  mov byte ptr gs:[ebp + 0x220], 5
    X86_AT(c, 0xf5beu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x5u);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf5b9u, "ran off the end of a function");
}
void f_0000f5be(X86Cpu& c) {
    goto L_f5be;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f5be:
    X86_TICK(c, 20);
    // 00f5be  mov byte ptr gs:[ebp + 0x220], 5
    X86_AT(c, 0xf5beu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x5u);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf5beu, "ran off the end of a function");
}
void f_0000f5c6(X86Cpu& c) {
    goto L_f5c6;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f5c6:
    X86_TICK(c, 18);
    // 00f5c6  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf5c6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf5c6u, "ran off the end of a function");
}
void f_0000f5cd(X86Cpu& c) {
    goto L_f5cd;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f5cd:
    X86_TICK(c, 14);
    // 00f5cd  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0xf5cdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf5cdu, "ran off the end of a function");
}
void f_0000f5d4(X86Cpu& c) {
    goto L_f5d4;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f5d4:
    X86_TICK(c, 12);
    // 00f5d4  shr eax, 0x10
    X86_AT(c, 0xf5d4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf5d4u, "ran off the end of a function");
}
void f_0000f5d7(X86Cpu& c) {
    goto L_f5d7;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f5d7:
    X86_TICK(c, 9);
    // 00f5d7  push eax
    X86_AT(c, 0xf5d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf5d7u, "ran off the end of a function");
}
void f_0000f5d8(X86Cpu& c) {
    goto L_f5d8;
L_410d:
    X86_TICK(c, 12);
    // 00410d  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0x410du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 004115  jne 0x413b
    X86_AT(c, 0x4115u);
    if (x86_cc(c, 5)) { goto L_413b; }
    X86_TICK(c, 12);
    // 004117  push word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4117u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))); push16(c, v); }
    // 00411f  call 0x36a0
    X86_AT(c, 0x411fu);
    push32(c, 0x4124u); f_000036a0(c); X86_RET(c, 0x4124u);
    X86_TICK(c, 7);
    // 004124  call 0x2e5d
    X86_AT(c, 0x4124u);
    push32(c, 0x4129u); f_00002e5d(c); X86_RET(c, 0x4129u);
    X86_TICK(c, 7);
    // 004129  call 0x36e4
    X86_AT(c, 0x4129u);
    push32(c, 0x412eu); f_000036e4(c); X86_RET(c, 0x412eu);
    X86_TICK(c, 7);
    // 00412e  call 0x6120
    X86_AT(c, 0x412eu);
    push32(c, 0x4133u); f_00006120(c); X86_RET(c, 0x4133u);
    X86_TICK(c, 5);
    // 004133  pop word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4133u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), v); }
L_413b:
    X86_TICK(c, 60);
    // 00413b  mov ds, word ptr gs:[ebp + 0x404]
    X86_AT(c, 0x413bu);
    x86_load_seg(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))) & 0xFFFFu);
    // 004142  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4142u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00414a  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x414au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00414f  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x414fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004153  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4153u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00415a  movzx ebx, word ptr gs:[ebp + 0x424]
    X86_AT(c, 0x415au);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)));
    // 004162  add ebx, 7
    X86_AT(c, 0x4162u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x7u, 0, 4); }
    // 004165  shr ebx, 3
    X86_AT(c, 0x4165u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 004168  mov dword ptr gs:[ebp + 0x408], ebx
    X86_AT(c, 0x4168u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[3]);
    // 00416f  call 0x3951
    X86_AT(c, 0x416fu);
    push32(c, 0x4174u); f_00003951(c); X86_RET(c, 0x4174u);
    X86_TICK(c, 5);
    // 004174  jb 0x4183
    X86_AT(c, 0x4174u);
    if (x86_cc(c, 2)) { goto L_4183; }
    X86_TICK(c, 9);
    // 004176  mov dword ptr gs:[ebp + 0x324], 0x893c
    X86_AT(c, 0x4176u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x893Cu);
    // 004181  jmp 0x418e
    X86_AT(c, 0x4181u);
    goto L_418e;
L_4183:
    X86_TICK(c, 2);
    // 004183  mov dword ptr gs:[ebp + 0x324], 0x8947
    X86_AT(c, 0x4183u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8947u);
L_418e:
    X86_TICK(c, 7);
    // 00418e  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x418eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x4195u); x86_call(c, t); X86_RET(c, 0x4195u); }
    X86_TICK(c, 39);
    // 004195  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4195u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00419d  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x419du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0041a1  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x41a1u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041a8  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x41a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 0041af  add dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x41afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0041b6  dec dword ptr [esp]
    X86_AT(c, 0x41b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0041b9  jne 0x418e
    X86_AT(c, 0x41b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x418eu); goto L_418e; }
    X86_TICK(c, 12);
    // 0041bb  add esp, 4
    X86_AT(c, 0x41bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0041be  ret 
    X86_AT(c, 0x41beu);
    c.eip = pop32(c); return;
L_f5d8:
    X86_TICK(c, 7);
    // 00f5d8  jmp 0x410d
    X86_AT(c, 0xf5d8u);
    X86_POLL(c, 0x410du); goto L_410d;
    x86_fault(c, 0xf5d8u, "ran off the end of a function");
}
void f_0000f5e0(X86Cpu& c) {
    X86_TICK(c, 19);
    // 00f5e0  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0xf5e0u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 00f5e8  mov eax, dword ptr cs:[eax*4 + 0xfad0]
    X86_AT(c, 0xf5e8u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xFAD0u)));
    // 00f5f0  mov dword ptr gs:[ebp + 0x440], eax
    X86_AT(c, 0xf5f0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)), c.r[0]);
    // 00f5f7  test dl, 2
    X86_AT(c, 0xf5f7u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f5fa  jne 0xf603
    X86_AT(c, 0xf5fau);
    if (x86_cc(c, 5)) { goto L_f603; }
    X86_TICK(c, 9);
    // 00f5fc  mov eax, 0xfc13
    X86_AT(c, 0xf5fcu);
    c.r[0] = 0xFC13u;
    // 00f601  jmp 0xf608
    X86_AT(c, 0xf601u);
    goto L_f608;
L_f603:
    X86_TICK(c, 2);
    // 00f603  mov eax, 0xfe78
    X86_AT(c, 0xf603u);
    c.r[0] = 0xFE78u;
L_f608:
    X86_TICK(c, 14);
    // 00f608  mov dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xf608u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[0]);
    // 00f60f  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0xf60fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 00f617  jne 0xf63f
    X86_AT(c, 0xf617u);
    if (x86_cc(c, 5)) { goto L_f63f; }
    X86_TICK(c, 14);
    // 00f619  push esi
    X86_AT(c, 0xf619u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f61a  mov cx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf61au);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u))));
    // 00f622  shr cx, 1
    X86_AT(c, 0xf622u);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 1, r); }
    // 00f625  jae 0xf62a
    X86_AT(c, 0xf625u);
    if (x86_cc(c, 3)) { goto L_f62a; }
    X86_TICK(c, 8);
    // 00f627  not byte ptr [esi]
    X86_AT(c, 0xf627u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd8(ea); wr8(ea, ~v & 0xFFu); }
    // 00f629  inc esi
    X86_AT(c, 0xf629u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_f62a:
    X86_TICK(c, 8);
    // 00f62a  shr cx, 1
    X86_AT(c, 0xf62au);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 1, r); }
    // 00f62d  jae 0xf635
    X86_AT(c, 0xf62du);
    if (x86_cc(c, 3)) { goto L_f635; }
    X86_TICK(c, 8);
    // 00f62f  not word ptr [esi]
    X86_AT(c, 0xf62fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd16(ea); wr16(ea, ~v & 0xFFFFu); }
    // 00f632  add esi, 2
    X86_AT(c, 0xf632u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
L_f635:
    X86_TICK(c, 15);
    // 00f635  not dword ptr [esi]
    X86_AT(c, 0xf635u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd32(ea); wr32(ea, ~v & 0xFFFFFFFFu); }
    // 00f637  add esi, 4
    X86_AT(c, 0xf637u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00f63a  dec cx
    X86_AT(c, 0xf63au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 00f63c  jne 0xf635
    X86_AT(c, 0xf63cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf635u); goto L_f635; }
    X86_TICK(c, 4);
    // 00f63e  pop esi
    X86_AT(c, 0xf63eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_f63f:
    X86_TICK(c, 16);
    // 00f63f  push dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf63fu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u))); push32(c, v); }
    // 00f646  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf646u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f64d  test ax, ax
    X86_AT(c, 0xf64du);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00f650  je 0xf7a7
    X86_AT(c, 0xf650u);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 10);
    // 00f656  shr eax, 0x10
    X86_AT(c, 0xf656u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f659  test eax, eax
    X86_AT(c, 0xf659u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00f65b  je 0xf7a7
    X86_AT(c, 0xf65bu);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f661  call 0x10160
    X86_AT(c, 0xf661u);
    push32(c, 0xf666u); f_00010160(c); X86_RET(c, 0xf666u);
    X86_TICK(c, 11);
    // 00f666  mov dword ptr gs:[ebp + 0x384], 0
    X86_AT(c, 0xf666u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), 0x0u);
    // 00f671  mov dword ptr gs:[ebp + 0x388], 0
    X86_AT(c, 0xf671u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), 0x0u);
    // 00f67c  test dl, 0xf
    X86_AT(c, 0xf67cu);
    (void)x86_logic(c, g8(c, 2) & 0xFu, 1);
    // 00f67f  je 0xf70f
    X86_AT(c, 0xf67fu);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 119);
    // 00f685  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf685u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f68c  mov ebx, dword ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf68cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf5e0u, "ran off the end of a function");
}
void f_0000f5e8(X86Cpu& c) {
    X86_TICK(c, 13);
    // 00f5e8  mov eax, dword ptr cs:[eax*4 + 0xfad0]
    X86_AT(c, 0xf5e8u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xFAD0u)));
    // 00f5f0  mov dword ptr gs:[ebp + 0x440], eax
    X86_AT(c, 0xf5f0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)), c.r[0]);
    // 00f5f7  test dl, 2
    X86_AT(c, 0xf5f7u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f5fa  jne 0xf603
    X86_AT(c, 0xf5fau);
    if (x86_cc(c, 5)) { goto L_f603; }
    X86_TICK(c, 9);
    // 00f5fc  mov eax, 0xfc13
    X86_AT(c, 0xf5fcu);
    c.r[0] = 0xFC13u;
    // 00f601  jmp 0xf608
    X86_AT(c, 0xf601u);
    goto L_f608;
L_f603:
    X86_TICK(c, 2);
    // 00f603  mov eax, 0xfe78
    X86_AT(c, 0xf603u);
    c.r[0] = 0xFE78u;
L_f608:
    X86_TICK(c, 14);
    // 00f608  mov dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xf608u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[0]);
    // 00f60f  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0xf60fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 00f617  jne 0xf63f
    X86_AT(c, 0xf617u);
    if (x86_cc(c, 5)) { goto L_f63f; }
    X86_TICK(c, 14);
    // 00f619  push esi
    X86_AT(c, 0xf619u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f61a  mov cx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf61au);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u))));
    // 00f622  shr cx, 1
    X86_AT(c, 0xf622u);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 1, r); }
    // 00f625  jae 0xf62a
    X86_AT(c, 0xf625u);
    if (x86_cc(c, 3)) { goto L_f62a; }
    X86_TICK(c, 8);
    // 00f627  not byte ptr [esi]
    X86_AT(c, 0xf627u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd8(ea); wr8(ea, ~v & 0xFFu); }
    // 00f629  inc esi
    X86_AT(c, 0xf629u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_f62a:
    X86_TICK(c, 8);
    // 00f62a  shr cx, 1
    X86_AT(c, 0xf62au);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 1, r); }
    // 00f62d  jae 0xf635
    X86_AT(c, 0xf62du);
    if (x86_cc(c, 3)) { goto L_f635; }
    X86_TICK(c, 8);
    // 00f62f  not word ptr [esi]
    X86_AT(c, 0xf62fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd16(ea); wr16(ea, ~v & 0xFFFFu); }
    // 00f632  add esi, 2
    X86_AT(c, 0xf632u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
L_f635:
    X86_TICK(c, 15);
    // 00f635  not dword ptr [esi]
    X86_AT(c, 0xf635u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd32(ea); wr32(ea, ~v & 0xFFFFFFFFu); }
    // 00f637  add esi, 4
    X86_AT(c, 0xf637u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00f63a  dec cx
    X86_AT(c, 0xf63au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 00f63c  jne 0xf635
    X86_AT(c, 0xf63cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf635u); goto L_f635; }
    X86_TICK(c, 4);
    // 00f63e  pop esi
    X86_AT(c, 0xf63eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_f63f:
    X86_TICK(c, 16);
    // 00f63f  push dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf63fu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u))); push32(c, v); }
    // 00f646  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf646u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f64d  test ax, ax
    X86_AT(c, 0xf64du);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00f650  je 0xf7a7
    X86_AT(c, 0xf650u);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 10);
    // 00f656  shr eax, 0x10
    X86_AT(c, 0xf656u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f659  test eax, eax
    X86_AT(c, 0xf659u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00f65b  je 0xf7a7
    X86_AT(c, 0xf65bu);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f661  call 0x10160
    X86_AT(c, 0xf661u);
    push32(c, 0xf666u); f_00010160(c); X86_RET(c, 0xf666u);
    X86_TICK(c, 11);
    // 00f666  mov dword ptr gs:[ebp + 0x384], 0
    X86_AT(c, 0xf666u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), 0x0u);
    // 00f671  mov dword ptr gs:[ebp + 0x388], 0
    X86_AT(c, 0xf671u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), 0x0u);
    // 00f67c  test dl, 0xf
    X86_AT(c, 0xf67cu);
    (void)x86_logic(c, g8(c, 2) & 0xFu, 1);
    // 00f67f  je 0xf70f
    X86_AT(c, 0xf67fu);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 119);
    // 00f685  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf685u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f68c  mov ebx, dword ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf68cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf5e8u, "ran off the end of a function");
}
void f_0000f5f0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 00f5f0  mov dword ptr gs:[ebp + 0x440], eax
    X86_AT(c, 0xf5f0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)), c.r[0]);
    // 00f5f7  test dl, 2
    X86_AT(c, 0xf5f7u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f5fa  jne 0xf603
    X86_AT(c, 0xf5fau);
    if (x86_cc(c, 5)) { goto L_f603; }
    X86_TICK(c, 9);
    // 00f5fc  mov eax, 0xfc13
    X86_AT(c, 0xf5fcu);
    c.r[0] = 0xFC13u;
    // 00f601  jmp 0xf608
    X86_AT(c, 0xf601u);
    goto L_f608;
L_f603:
    X86_TICK(c, 2);
    // 00f603  mov eax, 0xfe78
    X86_AT(c, 0xf603u);
    c.r[0] = 0xFE78u;
L_f608:
    X86_TICK(c, 14);
    // 00f608  mov dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xf608u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[0]);
    // 00f60f  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0xf60fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 00f617  jne 0xf63f
    X86_AT(c, 0xf617u);
    if (x86_cc(c, 5)) { goto L_f63f; }
    X86_TICK(c, 14);
    // 00f619  push esi
    X86_AT(c, 0xf619u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f61a  mov cx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf61au);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u))));
    // 00f622  shr cx, 1
    X86_AT(c, 0xf622u);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 1, r); }
    // 00f625  jae 0xf62a
    X86_AT(c, 0xf625u);
    if (x86_cc(c, 3)) { goto L_f62a; }
    X86_TICK(c, 8);
    // 00f627  not byte ptr [esi]
    X86_AT(c, 0xf627u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd8(ea); wr8(ea, ~v & 0xFFu); }
    // 00f629  inc esi
    X86_AT(c, 0xf629u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_f62a:
    X86_TICK(c, 8);
    // 00f62a  shr cx, 1
    X86_AT(c, 0xf62au);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 1, r); }
    // 00f62d  jae 0xf635
    X86_AT(c, 0xf62du);
    if (x86_cc(c, 3)) { goto L_f635; }
    X86_TICK(c, 8);
    // 00f62f  not word ptr [esi]
    X86_AT(c, 0xf62fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd16(ea); wr16(ea, ~v & 0xFFFFu); }
    // 00f632  add esi, 2
    X86_AT(c, 0xf632u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
L_f635:
    X86_TICK(c, 15);
    // 00f635  not dword ptr [esi]
    X86_AT(c, 0xf635u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd32(ea); wr32(ea, ~v & 0xFFFFFFFFu); }
    // 00f637  add esi, 4
    X86_AT(c, 0xf637u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00f63a  dec cx
    X86_AT(c, 0xf63au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 00f63c  jne 0xf635
    X86_AT(c, 0xf63cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf635u); goto L_f635; }
    X86_TICK(c, 4);
    // 00f63e  pop esi
    X86_AT(c, 0xf63eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_f63f:
    X86_TICK(c, 16);
    // 00f63f  push dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf63fu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u))); push32(c, v); }
    // 00f646  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf646u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f64d  test ax, ax
    X86_AT(c, 0xf64du);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00f650  je 0xf7a7
    X86_AT(c, 0xf650u);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 10);
    // 00f656  shr eax, 0x10
    X86_AT(c, 0xf656u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f659  test eax, eax
    X86_AT(c, 0xf659u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00f65b  je 0xf7a7
    X86_AT(c, 0xf65bu);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f661  call 0x10160
    X86_AT(c, 0xf661u);
    push32(c, 0xf666u); f_00010160(c); X86_RET(c, 0xf666u);
    X86_TICK(c, 11);
    // 00f666  mov dword ptr gs:[ebp + 0x384], 0
    X86_AT(c, 0xf666u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), 0x0u);
    // 00f671  mov dword ptr gs:[ebp + 0x388], 0
    X86_AT(c, 0xf671u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), 0x0u);
    // 00f67c  test dl, 0xf
    X86_AT(c, 0xf67cu);
    (void)x86_logic(c, g8(c, 2) & 0xFu, 1);
    // 00f67f  je 0xf70f
    X86_AT(c, 0xf67fu);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 119);
    // 00f685  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf685u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f68c  mov ebx, dword ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf68cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf5f0u, "ran off the end of a function");
}
void f_0000f5f7(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f5f7  test dl, 2
    X86_AT(c, 0xf5f7u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f5fa  jne 0xf603
    X86_AT(c, 0xf5fau);
    if (x86_cc(c, 5)) { goto L_f603; }
    X86_TICK(c, 9);
    // 00f5fc  mov eax, 0xfc13
    X86_AT(c, 0xf5fcu);
    c.r[0] = 0xFC13u;
    // 00f601  jmp 0xf608
    X86_AT(c, 0xf601u);
    goto L_f608;
L_f603:
    X86_TICK(c, 2);
    // 00f603  mov eax, 0xfe78
    X86_AT(c, 0xf603u);
    c.r[0] = 0xFE78u;
L_f608:
    X86_TICK(c, 14);
    // 00f608  mov dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xf608u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[0]);
    // 00f60f  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0xf60fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 00f617  jne 0xf63f
    X86_AT(c, 0xf617u);
    if (x86_cc(c, 5)) { goto L_f63f; }
    X86_TICK(c, 14);
    // 00f619  push esi
    X86_AT(c, 0xf619u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f61a  mov cx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf61au);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u))));
    // 00f622  shr cx, 1
    X86_AT(c, 0xf622u);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 1, r); }
    // 00f625  jae 0xf62a
    X86_AT(c, 0xf625u);
    if (x86_cc(c, 3)) { goto L_f62a; }
    X86_TICK(c, 8);
    // 00f627  not byte ptr [esi]
    X86_AT(c, 0xf627u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd8(ea); wr8(ea, ~v & 0xFFu); }
    // 00f629  inc esi
    X86_AT(c, 0xf629u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_f62a:
    X86_TICK(c, 8);
    // 00f62a  shr cx, 1
    X86_AT(c, 0xf62au);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 1, r); }
    // 00f62d  jae 0xf635
    X86_AT(c, 0xf62du);
    if (x86_cc(c, 3)) { goto L_f635; }
    X86_TICK(c, 8);
    // 00f62f  not word ptr [esi]
    X86_AT(c, 0xf62fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd16(ea); wr16(ea, ~v & 0xFFFFu); }
    // 00f632  add esi, 2
    X86_AT(c, 0xf632u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
L_f635:
    X86_TICK(c, 15);
    // 00f635  not dword ptr [esi]
    X86_AT(c, 0xf635u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd32(ea); wr32(ea, ~v & 0xFFFFFFFFu); }
    // 00f637  add esi, 4
    X86_AT(c, 0xf637u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00f63a  dec cx
    X86_AT(c, 0xf63au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 00f63c  jne 0xf635
    X86_AT(c, 0xf63cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf635u); goto L_f635; }
    X86_TICK(c, 4);
    // 00f63e  pop esi
    X86_AT(c, 0xf63eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_f63f:
    X86_TICK(c, 16);
    // 00f63f  push dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf63fu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u))); push32(c, v); }
    // 00f646  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf646u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f64d  test ax, ax
    X86_AT(c, 0xf64du);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00f650  je 0xf7a7
    X86_AT(c, 0xf650u);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 10);
    // 00f656  shr eax, 0x10
    X86_AT(c, 0xf656u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f659  test eax, eax
    X86_AT(c, 0xf659u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00f65b  je 0xf7a7
    X86_AT(c, 0xf65bu);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f661  call 0x10160
    X86_AT(c, 0xf661u);
    push32(c, 0xf666u); f_00010160(c); X86_RET(c, 0xf666u);
    X86_TICK(c, 11);
    // 00f666  mov dword ptr gs:[ebp + 0x384], 0
    X86_AT(c, 0xf666u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), 0x0u);
    // 00f671  mov dword ptr gs:[ebp + 0x388], 0
    X86_AT(c, 0xf671u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), 0x0u);
    // 00f67c  test dl, 0xf
    X86_AT(c, 0xf67cu);
    (void)x86_logic(c, g8(c, 2) & 0xFu, 1);
    // 00f67f  je 0xf70f
    X86_AT(c, 0xf67fu);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 119);
    // 00f685  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf685u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f68c  mov ebx, dword ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf68cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf5f7u, "ran off the end of a function");
}
void f_0000f5fa(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00f5fa  jne 0xf603
    X86_AT(c, 0xf5fau);
    if (x86_cc(c, 5)) { goto L_f603; }
    X86_TICK(c, 9);
    // 00f5fc  mov eax, 0xfc13
    X86_AT(c, 0xf5fcu);
    c.r[0] = 0xFC13u;
    // 00f601  jmp 0xf608
    X86_AT(c, 0xf601u);
    goto L_f608;
L_f603:
    X86_TICK(c, 2);
    // 00f603  mov eax, 0xfe78
    X86_AT(c, 0xf603u);
    c.r[0] = 0xFE78u;
L_f608:
    X86_TICK(c, 14);
    // 00f608  mov dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xf608u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[0]);
    // 00f60f  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0xf60fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 00f617  jne 0xf63f
    X86_AT(c, 0xf617u);
    if (x86_cc(c, 5)) { goto L_f63f; }
    X86_TICK(c, 14);
    // 00f619  push esi
    X86_AT(c, 0xf619u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f61a  mov cx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf61au);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u))));
    // 00f622  shr cx, 1
    X86_AT(c, 0xf622u);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 1, r); }
    // 00f625  jae 0xf62a
    X86_AT(c, 0xf625u);
    if (x86_cc(c, 3)) { goto L_f62a; }
    X86_TICK(c, 8);
    // 00f627  not byte ptr [esi]
    X86_AT(c, 0xf627u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd8(ea); wr8(ea, ~v & 0xFFu); }
    // 00f629  inc esi
    X86_AT(c, 0xf629u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_f62a:
    X86_TICK(c, 8);
    // 00f62a  shr cx, 1
    X86_AT(c, 0xf62au);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 1, r); }
    // 00f62d  jae 0xf635
    X86_AT(c, 0xf62du);
    if (x86_cc(c, 3)) { goto L_f635; }
    X86_TICK(c, 8);
    // 00f62f  not word ptr [esi]
    X86_AT(c, 0xf62fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd16(ea); wr16(ea, ~v & 0xFFFFu); }
    // 00f632  add esi, 2
    X86_AT(c, 0xf632u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
L_f635:
    X86_TICK(c, 15);
    // 00f635  not dword ptr [esi]
    X86_AT(c, 0xf635u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd32(ea); wr32(ea, ~v & 0xFFFFFFFFu); }
    // 00f637  add esi, 4
    X86_AT(c, 0xf637u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00f63a  dec cx
    X86_AT(c, 0xf63au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 00f63c  jne 0xf635
    X86_AT(c, 0xf63cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf635u); goto L_f635; }
    X86_TICK(c, 4);
    // 00f63e  pop esi
    X86_AT(c, 0xf63eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_f63f:
    X86_TICK(c, 16);
    // 00f63f  push dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf63fu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u))); push32(c, v); }
    // 00f646  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf646u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f64d  test ax, ax
    X86_AT(c, 0xf64du);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00f650  je 0xf7a7
    X86_AT(c, 0xf650u);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 10);
    // 00f656  shr eax, 0x10
    X86_AT(c, 0xf656u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f659  test eax, eax
    X86_AT(c, 0xf659u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00f65b  je 0xf7a7
    X86_AT(c, 0xf65bu);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f661  call 0x10160
    X86_AT(c, 0xf661u);
    push32(c, 0xf666u); f_00010160(c); X86_RET(c, 0xf666u);
    X86_TICK(c, 11);
    // 00f666  mov dword ptr gs:[ebp + 0x384], 0
    X86_AT(c, 0xf666u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), 0x0u);
    // 00f671  mov dword ptr gs:[ebp + 0x388], 0
    X86_AT(c, 0xf671u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), 0x0u);
    // 00f67c  test dl, 0xf
    X86_AT(c, 0xf67cu);
    (void)x86_logic(c, g8(c, 2) & 0xFu, 1);
    // 00f67f  je 0xf70f
    X86_AT(c, 0xf67fu);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 119);
    // 00f685  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf685u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f68c  mov ebx, dword ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf68cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf5fau, "ran off the end of a function");
}
void f_0000f5fc(X86Cpu& c) {
    X86_TICK(c, 9);
    // 00f5fc  mov eax, 0xfc13
    X86_AT(c, 0xf5fcu);
    c.r[0] = 0xFC13u;
    // 00f601  jmp 0xf608
    X86_AT(c, 0xf601u);
    goto L_f608;
L_f608:
    X86_TICK(c, 14);
    // 00f608  mov dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xf608u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[0]);
    // 00f60f  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0xf60fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 00f617  jne 0xf63f
    X86_AT(c, 0xf617u);
    if (x86_cc(c, 5)) { goto L_f63f; }
    X86_TICK(c, 14);
    // 00f619  push esi
    X86_AT(c, 0xf619u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f61a  mov cx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf61au);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u))));
    // 00f622  shr cx, 1
    X86_AT(c, 0xf622u);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 1, r); }
    // 00f625  jae 0xf62a
    X86_AT(c, 0xf625u);
    if (x86_cc(c, 3)) { goto L_f62a; }
    X86_TICK(c, 8);
    // 00f627  not byte ptr [esi]
    X86_AT(c, 0xf627u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd8(ea); wr8(ea, ~v & 0xFFu); }
    // 00f629  inc esi
    X86_AT(c, 0xf629u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_f62a:
    X86_TICK(c, 8);
    // 00f62a  shr cx, 1
    X86_AT(c, 0xf62au);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 1, r); }
    // 00f62d  jae 0xf635
    X86_AT(c, 0xf62du);
    if (x86_cc(c, 3)) { goto L_f635; }
    X86_TICK(c, 8);
    // 00f62f  not word ptr [esi]
    X86_AT(c, 0xf62fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd16(ea); wr16(ea, ~v & 0xFFFFu); }
    // 00f632  add esi, 2
    X86_AT(c, 0xf632u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
L_f635:
    X86_TICK(c, 15);
    // 00f635  not dword ptr [esi]
    X86_AT(c, 0xf635u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd32(ea); wr32(ea, ~v & 0xFFFFFFFFu); }
    // 00f637  add esi, 4
    X86_AT(c, 0xf637u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00f63a  dec cx
    X86_AT(c, 0xf63au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 00f63c  jne 0xf635
    X86_AT(c, 0xf63cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf635u); goto L_f635; }
    X86_TICK(c, 4);
    // 00f63e  pop esi
    X86_AT(c, 0xf63eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_f63f:
    X86_TICK(c, 16);
    // 00f63f  push dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf63fu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u))); push32(c, v); }
    // 00f646  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf646u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f64d  test ax, ax
    X86_AT(c, 0xf64du);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00f650  je 0xf7a7
    X86_AT(c, 0xf650u);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 10);
    // 00f656  shr eax, 0x10
    X86_AT(c, 0xf656u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f659  test eax, eax
    X86_AT(c, 0xf659u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00f65b  je 0xf7a7
    X86_AT(c, 0xf65bu);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f661  call 0x10160
    X86_AT(c, 0xf661u);
    push32(c, 0xf666u); f_00010160(c); X86_RET(c, 0xf666u);
    X86_TICK(c, 11);
    // 00f666  mov dword ptr gs:[ebp + 0x384], 0
    X86_AT(c, 0xf666u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), 0x0u);
    // 00f671  mov dword ptr gs:[ebp + 0x388], 0
    X86_AT(c, 0xf671u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), 0x0u);
    // 00f67c  test dl, 0xf
    X86_AT(c, 0xf67cu);
    (void)x86_logic(c, g8(c, 2) & 0xFu, 1);
    // 00f67f  je 0xf70f
    X86_AT(c, 0xf67fu);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 119);
    // 00f685  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf685u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f68c  mov ebx, dword ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf68cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf5fcu, "ran off the end of a function");
}
void f_0000f601(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f601  jmp 0xf608
    X86_AT(c, 0xf601u);
    goto L_f608;
L_f608:
    X86_TICK(c, 14);
    // 00f608  mov dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xf608u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[0]);
    // 00f60f  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0xf60fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 00f617  jne 0xf63f
    X86_AT(c, 0xf617u);
    if (x86_cc(c, 5)) { goto L_f63f; }
    X86_TICK(c, 14);
    // 00f619  push esi
    X86_AT(c, 0xf619u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f61a  mov cx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf61au);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u))));
    // 00f622  shr cx, 1
    X86_AT(c, 0xf622u);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 1, r); }
    // 00f625  jae 0xf62a
    X86_AT(c, 0xf625u);
    if (x86_cc(c, 3)) { goto L_f62a; }
    X86_TICK(c, 8);
    // 00f627  not byte ptr [esi]
    X86_AT(c, 0xf627u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd8(ea); wr8(ea, ~v & 0xFFu); }
    // 00f629  inc esi
    X86_AT(c, 0xf629u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_f62a:
    X86_TICK(c, 8);
    // 00f62a  shr cx, 1
    X86_AT(c, 0xf62au);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 1, r); }
    // 00f62d  jae 0xf635
    X86_AT(c, 0xf62du);
    if (x86_cc(c, 3)) { goto L_f635; }
    X86_TICK(c, 8);
    // 00f62f  not word ptr [esi]
    X86_AT(c, 0xf62fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd16(ea); wr16(ea, ~v & 0xFFFFu); }
    // 00f632  add esi, 2
    X86_AT(c, 0xf632u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
L_f635:
    X86_TICK(c, 15);
    // 00f635  not dword ptr [esi]
    X86_AT(c, 0xf635u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd32(ea); wr32(ea, ~v & 0xFFFFFFFFu); }
    // 00f637  add esi, 4
    X86_AT(c, 0xf637u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00f63a  dec cx
    X86_AT(c, 0xf63au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 00f63c  jne 0xf635
    X86_AT(c, 0xf63cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf635u); goto L_f635; }
    X86_TICK(c, 4);
    // 00f63e  pop esi
    X86_AT(c, 0xf63eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_f63f:
    X86_TICK(c, 16);
    // 00f63f  push dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf63fu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u))); push32(c, v); }
    // 00f646  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf646u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f64d  test ax, ax
    X86_AT(c, 0xf64du);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00f650  je 0xf7a7
    X86_AT(c, 0xf650u);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 10);
    // 00f656  shr eax, 0x10
    X86_AT(c, 0xf656u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f659  test eax, eax
    X86_AT(c, 0xf659u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00f65b  je 0xf7a7
    X86_AT(c, 0xf65bu);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f661  call 0x10160
    X86_AT(c, 0xf661u);
    push32(c, 0xf666u); f_00010160(c); X86_RET(c, 0xf666u);
    X86_TICK(c, 11);
    // 00f666  mov dword ptr gs:[ebp + 0x384], 0
    X86_AT(c, 0xf666u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), 0x0u);
    // 00f671  mov dword ptr gs:[ebp + 0x388], 0
    X86_AT(c, 0xf671u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), 0x0u);
    // 00f67c  test dl, 0xf
    X86_AT(c, 0xf67cu);
    (void)x86_logic(c, g8(c, 2) & 0xFu, 1);
    // 00f67f  je 0xf70f
    X86_AT(c, 0xf67fu);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 119);
    // 00f685  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf685u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f68c  mov ebx, dword ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf68cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf601u, "ran off the end of a function");
}
void f_0000f608(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00f608  mov dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xf608u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[0]);
    // 00f60f  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0xf60fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 00f617  jne 0xf63f
    X86_AT(c, 0xf617u);
    if (x86_cc(c, 5)) { goto L_f63f; }
    X86_TICK(c, 14);
    // 00f619  push esi
    X86_AT(c, 0xf619u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f61a  mov cx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf61au);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u))));
    // 00f622  shr cx, 1
    X86_AT(c, 0xf622u);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 1, r); }
    // 00f625  jae 0xf62a
    X86_AT(c, 0xf625u);
    if (x86_cc(c, 3)) { goto L_f62a; }
    X86_TICK(c, 8);
    // 00f627  not byte ptr [esi]
    X86_AT(c, 0xf627u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd8(ea); wr8(ea, ~v & 0xFFu); }
    // 00f629  inc esi
    X86_AT(c, 0xf629u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_f62a:
    X86_TICK(c, 8);
    // 00f62a  shr cx, 1
    X86_AT(c, 0xf62au);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 1, r); }
    // 00f62d  jae 0xf635
    X86_AT(c, 0xf62du);
    if (x86_cc(c, 3)) { goto L_f635; }
    X86_TICK(c, 8);
    // 00f62f  not word ptr [esi]
    X86_AT(c, 0xf62fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd16(ea); wr16(ea, ~v & 0xFFFFu); }
    // 00f632  add esi, 2
    X86_AT(c, 0xf632u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
L_f635:
    X86_TICK(c, 15);
    // 00f635  not dword ptr [esi]
    X86_AT(c, 0xf635u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd32(ea); wr32(ea, ~v & 0xFFFFFFFFu); }
    // 00f637  add esi, 4
    X86_AT(c, 0xf637u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00f63a  dec cx
    X86_AT(c, 0xf63au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 00f63c  jne 0xf635
    X86_AT(c, 0xf63cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf635u); goto L_f635; }
    X86_TICK(c, 4);
    // 00f63e  pop esi
    X86_AT(c, 0xf63eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_f63f:
    X86_TICK(c, 16);
    // 00f63f  push dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf63fu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u))); push32(c, v); }
    // 00f646  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf646u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f64d  test ax, ax
    X86_AT(c, 0xf64du);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00f650  je 0xf7a7
    X86_AT(c, 0xf650u);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 10);
    // 00f656  shr eax, 0x10
    X86_AT(c, 0xf656u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f659  test eax, eax
    X86_AT(c, 0xf659u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00f65b  je 0xf7a7
    X86_AT(c, 0xf65bu);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f661  call 0x10160
    X86_AT(c, 0xf661u);
    push32(c, 0xf666u); f_00010160(c); X86_RET(c, 0xf666u);
    X86_TICK(c, 11);
    // 00f666  mov dword ptr gs:[ebp + 0x384], 0
    X86_AT(c, 0xf666u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), 0x0u);
    // 00f671  mov dword ptr gs:[ebp + 0x388], 0
    X86_AT(c, 0xf671u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), 0x0u);
    // 00f67c  test dl, 0xf
    X86_AT(c, 0xf67cu);
    (void)x86_logic(c, g8(c, 2) & 0xFu, 1);
    // 00f67f  je 0xf70f
    X86_AT(c, 0xf67fu);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 119);
    // 00f685  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf685u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f68c  mov ebx, dword ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf68cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf608u, "ran off the end of a function");
}
void f_0000f60f(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00f60f  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0xf60fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 00f617  jne 0xf63f
    X86_AT(c, 0xf617u);
    if (x86_cc(c, 5)) { goto L_f63f; }
    X86_TICK(c, 14);
    // 00f619  push esi
    X86_AT(c, 0xf619u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f61a  mov cx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf61au);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u))));
    // 00f622  shr cx, 1
    X86_AT(c, 0xf622u);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 1, r); }
    // 00f625  jae 0xf62a
    X86_AT(c, 0xf625u);
    if (x86_cc(c, 3)) { goto L_f62a; }
    X86_TICK(c, 8);
    // 00f627  not byte ptr [esi]
    X86_AT(c, 0xf627u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd8(ea); wr8(ea, ~v & 0xFFu); }
    // 00f629  inc esi
    X86_AT(c, 0xf629u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_f62a:
    X86_TICK(c, 8);
    // 00f62a  shr cx, 1
    X86_AT(c, 0xf62au);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 1, r); }
    // 00f62d  jae 0xf635
    X86_AT(c, 0xf62du);
    if (x86_cc(c, 3)) { goto L_f635; }
    X86_TICK(c, 8);
    // 00f62f  not word ptr [esi]
    X86_AT(c, 0xf62fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd16(ea); wr16(ea, ~v & 0xFFFFu); }
    // 00f632  add esi, 2
    X86_AT(c, 0xf632u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
L_f635:
    X86_TICK(c, 15);
    // 00f635  not dword ptr [esi]
    X86_AT(c, 0xf635u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd32(ea); wr32(ea, ~v & 0xFFFFFFFFu); }
    // 00f637  add esi, 4
    X86_AT(c, 0xf637u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00f63a  dec cx
    X86_AT(c, 0xf63au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 00f63c  jne 0xf635
    X86_AT(c, 0xf63cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf635u); goto L_f635; }
    X86_TICK(c, 4);
    // 00f63e  pop esi
    X86_AT(c, 0xf63eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_f63f:
    X86_TICK(c, 16);
    // 00f63f  push dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf63fu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u))); push32(c, v); }
    // 00f646  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf646u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f64d  test ax, ax
    X86_AT(c, 0xf64du);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00f650  je 0xf7a7
    X86_AT(c, 0xf650u);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 10);
    // 00f656  shr eax, 0x10
    X86_AT(c, 0xf656u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f659  test eax, eax
    X86_AT(c, 0xf659u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00f65b  je 0xf7a7
    X86_AT(c, 0xf65bu);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f661  call 0x10160
    X86_AT(c, 0xf661u);
    push32(c, 0xf666u); f_00010160(c); X86_RET(c, 0xf666u);
    X86_TICK(c, 11);
    // 00f666  mov dword ptr gs:[ebp + 0x384], 0
    X86_AT(c, 0xf666u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), 0x0u);
    // 00f671  mov dword ptr gs:[ebp + 0x388], 0
    X86_AT(c, 0xf671u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), 0x0u);
    // 00f67c  test dl, 0xf
    X86_AT(c, 0xf67cu);
    (void)x86_logic(c, g8(c, 2) & 0xFu, 1);
    // 00f67f  je 0xf70f
    X86_AT(c, 0xf67fu);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 119);
    // 00f685  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf685u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f68c  mov ebx, dword ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf68cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf60fu, "ran off the end of a function");
}
void f_0000f617(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00f617  jne 0xf63f
    X86_AT(c, 0xf617u);
    if (x86_cc(c, 5)) { goto L_f63f; }
    X86_TICK(c, 14);
    // 00f619  push esi
    X86_AT(c, 0xf619u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f61a  mov cx, word ptr gs:[ebp + 0x362]
    X86_AT(c, 0xf61au);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x362u))));
    // 00f622  shr cx, 1
    X86_AT(c, 0xf622u);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 1, r); }
    // 00f625  jae 0xf62a
    X86_AT(c, 0xf625u);
    if (x86_cc(c, 3)) { goto L_f62a; }
    X86_TICK(c, 8);
    // 00f627  not byte ptr [esi]
    X86_AT(c, 0xf627u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd8(ea); wr8(ea, ~v & 0xFFu); }
    // 00f629  inc esi
    X86_AT(c, 0xf629u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_f62a:
    X86_TICK(c, 8);
    // 00f62a  shr cx, 1
    X86_AT(c, 0xf62au);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 1, r); }
    // 00f62d  jae 0xf635
    X86_AT(c, 0xf62du);
    if (x86_cc(c, 3)) { goto L_f635; }
    X86_TICK(c, 8);
    // 00f62f  not word ptr [esi]
    X86_AT(c, 0xf62fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd16(ea); wr16(ea, ~v & 0xFFFFu); }
    // 00f632  add esi, 2
    X86_AT(c, 0xf632u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
L_f635:
    X86_TICK(c, 15);
    // 00f635  not dword ptr [esi]
    X86_AT(c, 0xf635u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd32(ea); wr32(ea, ~v & 0xFFFFFFFFu); }
    // 00f637  add esi, 4
    X86_AT(c, 0xf637u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00f63a  dec cx
    X86_AT(c, 0xf63au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 00f63c  jne 0xf635
    X86_AT(c, 0xf63cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf635u); goto L_f635; }
    X86_TICK(c, 4);
    // 00f63e  pop esi
    X86_AT(c, 0xf63eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_f63f:
    X86_TICK(c, 16);
    // 00f63f  push dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf63fu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u))); push32(c, v); }
    // 00f646  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf646u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f64d  test ax, ax
    X86_AT(c, 0xf64du);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00f650  je 0xf7a7
    X86_AT(c, 0xf650u);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 10);
    // 00f656  shr eax, 0x10
    X86_AT(c, 0xf656u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f659  test eax, eax
    X86_AT(c, 0xf659u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00f65b  je 0xf7a7
    X86_AT(c, 0xf65bu);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f661  call 0x10160
    X86_AT(c, 0xf661u);
    push32(c, 0xf666u); f_00010160(c); X86_RET(c, 0xf666u);
    X86_TICK(c, 11);
    // 00f666  mov dword ptr gs:[ebp + 0x384], 0
    X86_AT(c, 0xf666u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), 0x0u);
    // 00f671  mov dword ptr gs:[ebp + 0x388], 0
    X86_AT(c, 0xf671u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), 0x0u);
    // 00f67c  test dl, 0xf
    X86_AT(c, 0xf67cu);
    (void)x86_logic(c, g8(c, 2) & 0xFu, 1);
    // 00f67f  je 0xf70f
    X86_AT(c, 0xf67fu);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 119);
    // 00f685  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf685u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f68c  mov ebx, dword ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf68cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf617u, "ran off the end of a function");
}
void f_0000f63f(X86Cpu& c) {
    X86_TICK(c, 16);
    // 00f63f  push dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf63fu);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u))); push32(c, v); }
    // 00f646  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf646u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f64d  test ax, ax
    X86_AT(c, 0xf64du);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00f650  je 0xf7a7
    X86_AT(c, 0xf650u);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 10);
    // 00f656  shr eax, 0x10
    X86_AT(c, 0xf656u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f659  test eax, eax
    X86_AT(c, 0xf659u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00f65b  je 0xf7a7
    X86_AT(c, 0xf65bu);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f661  call 0x10160
    X86_AT(c, 0xf661u);
    push32(c, 0xf666u); f_00010160(c); X86_RET(c, 0xf666u);
    X86_TICK(c, 11);
    // 00f666  mov dword ptr gs:[ebp + 0x384], 0
    X86_AT(c, 0xf666u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), 0x0u);
    // 00f671  mov dword ptr gs:[ebp + 0x388], 0
    X86_AT(c, 0xf671u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), 0x0u);
    // 00f67c  test dl, 0xf
    X86_AT(c, 0xf67cu);
    (void)x86_logic(c, g8(c, 2) & 0xFu, 1);
    // 00f67f  je 0xf70f
    X86_AT(c, 0xf67fu);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 119);
    // 00f685  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf685u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f68c  mov ebx, dword ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf68cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf63fu, "ran off the end of a function");
}
void f_0000f646(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00f646  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf646u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f64d  test ax, ax
    X86_AT(c, 0xf64du);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00f650  je 0xf7a7
    X86_AT(c, 0xf650u);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 10);
    // 00f656  shr eax, 0x10
    X86_AT(c, 0xf656u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f659  test eax, eax
    X86_AT(c, 0xf659u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00f65b  je 0xf7a7
    X86_AT(c, 0xf65bu);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f661  call 0x10160
    X86_AT(c, 0xf661u);
    push32(c, 0xf666u); f_00010160(c); X86_RET(c, 0xf666u);
    X86_TICK(c, 11);
    // 00f666  mov dword ptr gs:[ebp + 0x384], 0
    X86_AT(c, 0xf666u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), 0x0u);
    // 00f671  mov dword ptr gs:[ebp + 0x388], 0
    X86_AT(c, 0xf671u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), 0x0u);
    // 00f67c  test dl, 0xf
    X86_AT(c, 0xf67cu);
    (void)x86_logic(c, g8(c, 2) & 0xFu, 1);
    // 00f67f  je 0xf70f
    X86_AT(c, 0xf67fu);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 119);
    // 00f685  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf685u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f68c  mov ebx, dword ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf68cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf646u, "ran off the end of a function");
}
void f_0000f64d(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f64d  test ax, ax
    X86_AT(c, 0xf64du);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00f650  je 0xf7a7
    X86_AT(c, 0xf650u);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 10);
    // 00f656  shr eax, 0x10
    X86_AT(c, 0xf656u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f659  test eax, eax
    X86_AT(c, 0xf659u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00f65b  je 0xf7a7
    X86_AT(c, 0xf65bu);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f661  call 0x10160
    X86_AT(c, 0xf661u);
    push32(c, 0xf666u); f_00010160(c); X86_RET(c, 0xf666u);
    X86_TICK(c, 11);
    // 00f666  mov dword ptr gs:[ebp + 0x384], 0
    X86_AT(c, 0xf666u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), 0x0u);
    // 00f671  mov dword ptr gs:[ebp + 0x388], 0
    X86_AT(c, 0xf671u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), 0x0u);
    // 00f67c  test dl, 0xf
    X86_AT(c, 0xf67cu);
    (void)x86_logic(c, g8(c, 2) & 0xFu, 1);
    // 00f67f  je 0xf70f
    X86_AT(c, 0xf67fu);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 119);
    // 00f685  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf685u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f68c  mov ebx, dword ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf68cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf64du, "ran off the end of a function");
}
void f_0000f650(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00f650  je 0xf7a7
    X86_AT(c, 0xf650u);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 10);
    // 00f656  shr eax, 0x10
    X86_AT(c, 0xf656u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f659  test eax, eax
    X86_AT(c, 0xf659u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00f65b  je 0xf7a7
    X86_AT(c, 0xf65bu);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f661  call 0x10160
    X86_AT(c, 0xf661u);
    push32(c, 0xf666u); f_00010160(c); X86_RET(c, 0xf666u);
    X86_TICK(c, 11);
    // 00f666  mov dword ptr gs:[ebp + 0x384], 0
    X86_AT(c, 0xf666u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), 0x0u);
    // 00f671  mov dword ptr gs:[ebp + 0x388], 0
    X86_AT(c, 0xf671u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), 0x0u);
    // 00f67c  test dl, 0xf
    X86_AT(c, 0xf67cu);
    (void)x86_logic(c, g8(c, 2) & 0xFu, 1);
    // 00f67f  je 0xf70f
    X86_AT(c, 0xf67fu);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 119);
    // 00f685  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf685u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f68c  mov ebx, dword ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf68cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf650u, "ran off the end of a function");
}
void f_0000f656(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00f656  shr eax, 0x10
    X86_AT(c, 0xf656u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f659  test eax, eax
    X86_AT(c, 0xf659u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00f65b  je 0xf7a7
    X86_AT(c, 0xf65bu);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f661  call 0x10160
    X86_AT(c, 0xf661u);
    push32(c, 0xf666u); f_00010160(c); X86_RET(c, 0xf666u);
    X86_TICK(c, 11);
    // 00f666  mov dword ptr gs:[ebp + 0x384], 0
    X86_AT(c, 0xf666u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), 0x0u);
    // 00f671  mov dword ptr gs:[ebp + 0x388], 0
    X86_AT(c, 0xf671u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), 0x0u);
    // 00f67c  test dl, 0xf
    X86_AT(c, 0xf67cu);
    (void)x86_logic(c, g8(c, 2) & 0xFu, 1);
    // 00f67f  je 0xf70f
    X86_AT(c, 0xf67fu);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 119);
    // 00f685  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf685u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f68c  mov ebx, dword ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf68cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf656u, "ran off the end of a function");
}
void f_0000f659(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f659  test eax, eax
    X86_AT(c, 0xf659u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00f65b  je 0xf7a7
    X86_AT(c, 0xf65bu);
    if (x86_cc(c, 4)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f661  call 0x10160
    X86_AT(c, 0xf661u);
    push32(c, 0xf666u); f_00010160(c); X86_RET(c, 0xf666u);
    X86_TICK(c, 11);
    // 00f666  mov dword ptr gs:[ebp + 0x384], 0
    X86_AT(c, 0xf666u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), 0x0u);
    // 00f671  mov dword ptr gs:[ebp + 0x388], 0
    X86_AT(c, 0xf671u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), 0x0u);
    // 00f67c  test dl, 0xf
    X86_AT(c, 0xf67cu);
    (void)x86_logic(c, g8(c, 2) & 0xFu, 1);
    // 00f67f  je 0xf70f
    X86_AT(c, 0xf67fu);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 119);
    // 00f685  mov eax, dword ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf685u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u)));
    // 00f68c  mov ebx, dword ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf68cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u)));
    // 00f693  add ax, bx
    X86_AT(c, 0xf693u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f696  dec ax
    X86_AT(c, 0xf696u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f698  div bl
    X86_AT(c, 0xf698u);
    x86_div(c, g8(c, 3), 1, 0xf698u);
    // 00f69a  sub ah, ah
    X86_AT(c, 0xf69au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f69c  mov word ptr gs:[ebp + 0x388], ax
    X86_AT(c, 0xf69cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)), (c.r[0] & 0xFFFFu));
    // 00f6a4  shr eax, 0x10
    X86_AT(c, 0xf6a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f6a7  shr ebx, 0x10
    X86_AT(c, 0xf6a7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f6aa  add ax, bx
    X86_AT(c, 0xf6aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6ad  dec ax
    X86_AT(c, 0xf6adu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00f6af  div bl
    X86_AT(c, 0xf6afu);
    x86_div(c, g8(c, 3), 1, 0xf6afu);
    // 00f6b1  sub ah, ah
    X86_AT(c, 0xf6b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 00f6b3  mov word ptr gs:[ebp + 0x38a], ax
    X86_AT(c, 0xf6b3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au)), (c.r[0] & 0xFFFFu));
    // 00f6bb  mov word ptr gs:[ebp + 0x38c], 0
    X86_AT(c, 0xf6bbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), 0x0u);
    // 00f6c5  test dl, 2
    X86_AT(c, 0xf6c5u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f6c8  je 0xf70f
    X86_AT(c, 0xf6c8u);
    if (x86_cc(c, 4)) { goto L_f70f; }
    X86_TICK(c, 48);
    // 00f6ca  mov bx, word ptr gs:[ebp + 0x38a]
    X86_AT(c, 0xf6cau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Au))));
    // 00f6d2  shr bx, 1
    X86_AT(c, 0xf6d2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f6d5  sub eax, eax
    X86_AT(c, 0xf6d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f6d7  test byte ptr gs:[ebp + 0x34c], 1
    X86_AT(c, 0xf6d7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu))) & 0x1u, 1);
    // 00f6df  sete al
    X86_AT(c, 0xf6dfu);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 00f6e2  mov al, byte ptr gs:[ebp + eax*2 + 0x344]
    X86_AT(c, 0xf6e2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 2 + 0x344u))));
    // 00f6ea  add al, byte ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf6eau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))), 0, 1)); }
    // 00f6f1  and ax, 1
    X86_AT(c, 0xf6f1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x1u, 2)); }
    // 00f6f5  xor ax, 1
    X86_AT(c, 0xf6f5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ 0x1u, 2)); }
    // 00f6f9  add ax, bx
    X86_AT(c, 0xf6f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f6fc  mov word ptr gs:[ebp + 0x38c], ax
    X86_AT(c, 0xf6fcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu)), (c.r[0] & 0xFFFFu));
    // 00f704  shl bx, 1
    X86_AT(c, 0xf704u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 00f707  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0xf707u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f70f:
    X86_TICK(c, 7);
    // 00f70f  call 0x36e4
    X86_AT(c, 0xf70fu);
    push32(c, 0xf714u); f_000036e4(c); X86_RET(c, 0xf714u);
    X86_TICK(c, 14);
    // 00f714  test dl, 1
    X86_AT(c, 0xf714u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f717  setne byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf717u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)), x86_cc(c, 5) ? 1u : 0u);
    // 00f71f  call 0xf888
    X86_AT(c, 0xf71fu);
    push32(c, 0xf724u); f_0000f888(c); X86_RET(c, 0xf724u);
    X86_TICK(c, 12);
    // 00f724  test byte ptr gs:[ebp + 0x338], 8
    X86_AT(c, 0xf724u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x8u, 1);
    // 00f72c  je 0xf76a
    X86_AT(c, 0xf72cu);
    if (x86_cc(c, 4)) { goto L_f76a; }
    X86_TICK(c, 39);
    // 00f72e  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf72eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f735  sub word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf735u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f73d  mov ax, word ptr gs:[ebp + 0x38c]
    X86_AT(c, 0xf73du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x38Cu))));
    // 00f745  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf745u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f74d  shr eax, 0x10
    X86_AT(c, 0xf74du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f750  sub word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf750u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f758  call 0x36a0
    X86_AT(c, 0xf758u);
    push32(c, 0xf75du); f_000036a0(c); X86_RET(c, 0xf75du);
    X86_TICK(c, 14);
    // 00f75d  or byte ptr gs:[ebp + 0x379], 2
    X86_AT(c, 0xf75du);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x379u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 00f765  call 0xf888
    X86_AT(c, 0xf765u);
    push32(c, 0xf76au); f_0000f888(c); X86_RET(c, 0xf76au);
L_f76a:
    X86_TICK(c, 12);
    // 00f76a  test byte ptr gs:[ebp + 0x338], 4
    X86_AT(c, 0xf76au);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x4u, 1);
    // 00f772  je 0xf798
    X86_AT(c, 0xf772u);
    if (x86_cc(c, 4)) { goto L_f798; }
    X86_TICK(c, 28);
    // 00f774  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf774u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f77b  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf77bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f783  shr eax, 0x10
    X86_AT(c, 0xf783u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f786  add word ptr gs:[ebp + 0x386], ax
    X86_AT(c, 0xf786u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x386u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f78e  call 0x36a0
    X86_AT(c, 0xf78eu);
    push32(c, 0xf793u); f_000036a0(c); X86_RET(c, 0xf793u);
    X86_TICK(c, 7);
    // 00f793  call 0xf888
    X86_AT(c, 0xf793u);
    push32(c, 0xf798u); f_0000f888(c); X86_RET(c, 0xf798u);
L_f798:
    X86_TICK(c, 12);
    // 00f798  cmp byte ptr gs:[ebp + 0x104], 9
    X86_AT(c, 0xf798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x9u, 0, 1);
    // 00f7a0  jne 0xf7a7
    X86_AT(c, 0xf7a0u);
    if (x86_cc(c, 5)) { goto L_f7a7; }
    X86_TICK(c, 7);
    // 00f7a2  call 0xf7b0
    X86_AT(c, 0xf7a2u);
    push32(c, 0xf7a7u); f_0000f7b0(c); X86_RET(c, 0xf7a7u);
L_f7a7:
    X86_TICK(c, 15);
    // 00f7a7  pop dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf7a7u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), v); }
    // 00f7ae  ret 
    X86_AT(c, 0xf7aeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf659u, "ran off the end of a function");
}
}
