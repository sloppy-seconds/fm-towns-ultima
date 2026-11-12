#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00002f0c(X86Cpu& c) {
    X86_TICK(c, 24);
    // 002f0c  mov byte ptr gs:[ebp + 0x3ad], 0xff
    X86_AT(c, 0x2f0cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3ADu)), 0xFFu);
    // 002f14  mov byte ptr gs:[ebp + 0x3b5], 0xff
    X86_AT(c, 0x2f14u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B5u)), 0xFFu);
    // 002f1c  mov byte ptr gs:[ebp + 0x3bd], 0xff
    X86_AT(c, 0x2f1cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3BDu)), 0xFFu);
    // 002f24  mov byte ptr gs:[ebp + 0x3c5], 0xff
    X86_AT(c, 0x2f24u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C5u)), 0xFFu);
    // 002f2c  mov byte ptr gs:[ebp + 0x3cd], 0xff
    X86_AT(c, 0x2f2cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3CDu)), 0xFFu);
    // 002f34  mov byte ptr gs:[ebp + 0x3d5], 0xff
    X86_AT(c, 0x2f34u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D5u)), 0xFFu);
    // 002f3c  cmp dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2f3cu);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))), 0xFFFFFFFFu, 0, 4);
    // 002f44  je 0x2f5e
    X86_AT(c, 0x2f44u);
    if (x86_cc(c, 4)) { goto L_2f5e; }
    X86_TICK(c, 11);
    // 002f46  mov dword ptr gs:[ebp + 0x330], 0x5b18
    X86_AT(c, 0x2f46u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)), 0x5B18u);
    // 002f51  mov dword ptr gs:[ebp + 0x334], 0x5c94
    X86_AT(c, 0x2f51u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)), 0x5C94u);
    // 002f5c  jmp 0x2f73
    X86_AT(c, 0x2f5cu);
    goto L_2f73;
L_2f5e:
    X86_TICK(c, 8);
    // 002f5e  mov eax, dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x2f5eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)));
    // 002f65  mov dword ptr gs:[ebp + 0x330], eax
    X86_AT(c, 0x2f65u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)), c.r[0]);
    // 002f6c  mov dword ptr gs:[ebp + 0x334], eax
    X86_AT(c, 0x2f6cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)), c.r[0]);
L_2f73:
    X86_TICK(c, 7);
    // 002f73  call 0x36e4
    X86_AT(c, 0x2f73u);
    push32(c, 0x2f78u); f_000036e4(c); X86_RET(c, 0x2f78u);
    X86_TICK(c, 7);
    // 002f78  call 0x6120
    X86_AT(c, 0x2f78u);
    push32(c, 0x2f7du); f_00006120(c); X86_RET(c, 0x2f7du);
    X86_TICK(c, 13);
    // 002f7d  mov byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0x2f7du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x1u);
    // 002f85  push ds
    X86_AT(c, 0x2f85u);
    push32(c, c.sreg[3]);
    // 002f86  push esi
    X86_AT(c, 0x2f86u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 002f87  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2f87u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x2f8eu); x86_call(c, t); X86_RET(c, 0x2f8eu); }
    X86_TICK(c, 22);
    // 002f8e  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x2f8eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 002f95  pop esi
    X86_AT(c, 0x2f95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 002f96  pop ds
    X86_AT(c, 0x2f96u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 002f97  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2f97u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002fa1  je 0x301a
    X86_AT(c, 0x2fa1u);
    if (x86_cc(c, 4)) { goto L_301a; }
    X86_TICK(c, 12);
    // 002fa3  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x2fa3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 002fab  jne 0x301a
    X86_AT(c, 0x2fabu);
    if (x86_cc(c, 5)) { goto L_301a; }
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 12);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
L_301a:
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2f0cu, "ran off the end of a function");
}
void f_00002f14(X86Cpu& c) {
    X86_TICK(c, 22);
    // 002f14  mov byte ptr gs:[ebp + 0x3b5], 0xff
    X86_AT(c, 0x2f14u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B5u)), 0xFFu);
    // 002f1c  mov byte ptr gs:[ebp + 0x3bd], 0xff
    X86_AT(c, 0x2f1cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3BDu)), 0xFFu);
    // 002f24  mov byte ptr gs:[ebp + 0x3c5], 0xff
    X86_AT(c, 0x2f24u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C5u)), 0xFFu);
    // 002f2c  mov byte ptr gs:[ebp + 0x3cd], 0xff
    X86_AT(c, 0x2f2cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3CDu)), 0xFFu);
    // 002f34  mov byte ptr gs:[ebp + 0x3d5], 0xff
    X86_AT(c, 0x2f34u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D5u)), 0xFFu);
    // 002f3c  cmp dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2f3cu);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))), 0xFFFFFFFFu, 0, 4);
    // 002f44  je 0x2f5e
    X86_AT(c, 0x2f44u);
    if (x86_cc(c, 4)) { goto L_2f5e; }
    X86_TICK(c, 11);
    // 002f46  mov dword ptr gs:[ebp + 0x330], 0x5b18
    X86_AT(c, 0x2f46u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)), 0x5B18u);
    // 002f51  mov dword ptr gs:[ebp + 0x334], 0x5c94
    X86_AT(c, 0x2f51u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)), 0x5C94u);
    // 002f5c  jmp 0x2f73
    X86_AT(c, 0x2f5cu);
    goto L_2f73;
L_2f5e:
    X86_TICK(c, 8);
    // 002f5e  mov eax, dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x2f5eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)));
    // 002f65  mov dword ptr gs:[ebp + 0x330], eax
    X86_AT(c, 0x2f65u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)), c.r[0]);
    // 002f6c  mov dword ptr gs:[ebp + 0x334], eax
    X86_AT(c, 0x2f6cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)), c.r[0]);
L_2f73:
    X86_TICK(c, 7);
    // 002f73  call 0x36e4
    X86_AT(c, 0x2f73u);
    push32(c, 0x2f78u); f_000036e4(c); X86_RET(c, 0x2f78u);
    X86_TICK(c, 7);
    // 002f78  call 0x6120
    X86_AT(c, 0x2f78u);
    push32(c, 0x2f7du); f_00006120(c); X86_RET(c, 0x2f7du);
    X86_TICK(c, 13);
    // 002f7d  mov byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0x2f7du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x1u);
    // 002f85  push ds
    X86_AT(c, 0x2f85u);
    push32(c, c.sreg[3]);
    // 002f86  push esi
    X86_AT(c, 0x2f86u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 002f87  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2f87u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x2f8eu); x86_call(c, t); X86_RET(c, 0x2f8eu); }
    X86_TICK(c, 22);
    // 002f8e  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x2f8eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 002f95  pop esi
    X86_AT(c, 0x2f95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 002f96  pop ds
    X86_AT(c, 0x2f96u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 002f97  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2f97u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002fa1  je 0x301a
    X86_AT(c, 0x2fa1u);
    if (x86_cc(c, 4)) { goto L_301a; }
    X86_TICK(c, 12);
    // 002fa3  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x2fa3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 002fab  jne 0x301a
    X86_AT(c, 0x2fabu);
    if (x86_cc(c, 5)) { goto L_301a; }
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 12);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
L_301a:
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2f14u, "ran off the end of a function");
}
void f_00002f1c(X86Cpu& c) {
    X86_TICK(c, 20);
    // 002f1c  mov byte ptr gs:[ebp + 0x3bd], 0xff
    X86_AT(c, 0x2f1cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3BDu)), 0xFFu);
    // 002f24  mov byte ptr gs:[ebp + 0x3c5], 0xff
    X86_AT(c, 0x2f24u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C5u)), 0xFFu);
    // 002f2c  mov byte ptr gs:[ebp + 0x3cd], 0xff
    X86_AT(c, 0x2f2cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3CDu)), 0xFFu);
    // 002f34  mov byte ptr gs:[ebp + 0x3d5], 0xff
    X86_AT(c, 0x2f34u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D5u)), 0xFFu);
    // 002f3c  cmp dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2f3cu);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))), 0xFFFFFFFFu, 0, 4);
    // 002f44  je 0x2f5e
    X86_AT(c, 0x2f44u);
    if (x86_cc(c, 4)) { goto L_2f5e; }
    X86_TICK(c, 11);
    // 002f46  mov dword ptr gs:[ebp + 0x330], 0x5b18
    X86_AT(c, 0x2f46u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)), 0x5B18u);
    // 002f51  mov dword ptr gs:[ebp + 0x334], 0x5c94
    X86_AT(c, 0x2f51u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)), 0x5C94u);
    // 002f5c  jmp 0x2f73
    X86_AT(c, 0x2f5cu);
    goto L_2f73;
L_2f5e:
    X86_TICK(c, 8);
    // 002f5e  mov eax, dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x2f5eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)));
    // 002f65  mov dword ptr gs:[ebp + 0x330], eax
    X86_AT(c, 0x2f65u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)), c.r[0]);
    // 002f6c  mov dword ptr gs:[ebp + 0x334], eax
    X86_AT(c, 0x2f6cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)), c.r[0]);
L_2f73:
    X86_TICK(c, 7);
    // 002f73  call 0x36e4
    X86_AT(c, 0x2f73u);
    push32(c, 0x2f78u); f_000036e4(c); X86_RET(c, 0x2f78u);
    X86_TICK(c, 7);
    // 002f78  call 0x6120
    X86_AT(c, 0x2f78u);
    push32(c, 0x2f7du); f_00006120(c); X86_RET(c, 0x2f7du);
    X86_TICK(c, 13);
    // 002f7d  mov byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0x2f7du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x1u);
    // 002f85  push ds
    X86_AT(c, 0x2f85u);
    push32(c, c.sreg[3]);
    // 002f86  push esi
    X86_AT(c, 0x2f86u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 002f87  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2f87u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x2f8eu); x86_call(c, t); X86_RET(c, 0x2f8eu); }
    X86_TICK(c, 22);
    // 002f8e  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x2f8eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 002f95  pop esi
    X86_AT(c, 0x2f95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 002f96  pop ds
    X86_AT(c, 0x2f96u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 002f97  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2f97u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002fa1  je 0x301a
    X86_AT(c, 0x2fa1u);
    if (x86_cc(c, 4)) { goto L_301a; }
    X86_TICK(c, 12);
    // 002fa3  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x2fa3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 002fab  jne 0x301a
    X86_AT(c, 0x2fabu);
    if (x86_cc(c, 5)) { goto L_301a; }
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 12);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
L_301a:
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2f1cu, "ran off the end of a function");
}
void f_00002f24(X86Cpu& c) {
    X86_TICK(c, 18);
    // 002f24  mov byte ptr gs:[ebp + 0x3c5], 0xff
    X86_AT(c, 0x2f24u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C5u)), 0xFFu);
    // 002f2c  mov byte ptr gs:[ebp + 0x3cd], 0xff
    X86_AT(c, 0x2f2cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3CDu)), 0xFFu);
    // 002f34  mov byte ptr gs:[ebp + 0x3d5], 0xff
    X86_AT(c, 0x2f34u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D5u)), 0xFFu);
    // 002f3c  cmp dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2f3cu);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))), 0xFFFFFFFFu, 0, 4);
    // 002f44  je 0x2f5e
    X86_AT(c, 0x2f44u);
    if (x86_cc(c, 4)) { goto L_2f5e; }
    X86_TICK(c, 11);
    // 002f46  mov dword ptr gs:[ebp + 0x330], 0x5b18
    X86_AT(c, 0x2f46u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)), 0x5B18u);
    // 002f51  mov dword ptr gs:[ebp + 0x334], 0x5c94
    X86_AT(c, 0x2f51u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)), 0x5C94u);
    // 002f5c  jmp 0x2f73
    X86_AT(c, 0x2f5cu);
    goto L_2f73;
L_2f5e:
    X86_TICK(c, 8);
    // 002f5e  mov eax, dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x2f5eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)));
    // 002f65  mov dword ptr gs:[ebp + 0x330], eax
    X86_AT(c, 0x2f65u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)), c.r[0]);
    // 002f6c  mov dword ptr gs:[ebp + 0x334], eax
    X86_AT(c, 0x2f6cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)), c.r[0]);
L_2f73:
    X86_TICK(c, 7);
    // 002f73  call 0x36e4
    X86_AT(c, 0x2f73u);
    push32(c, 0x2f78u); f_000036e4(c); X86_RET(c, 0x2f78u);
    X86_TICK(c, 7);
    // 002f78  call 0x6120
    X86_AT(c, 0x2f78u);
    push32(c, 0x2f7du); f_00006120(c); X86_RET(c, 0x2f7du);
    X86_TICK(c, 13);
    // 002f7d  mov byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0x2f7du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x1u);
    // 002f85  push ds
    X86_AT(c, 0x2f85u);
    push32(c, c.sreg[3]);
    // 002f86  push esi
    X86_AT(c, 0x2f86u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 002f87  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2f87u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x2f8eu); x86_call(c, t); X86_RET(c, 0x2f8eu); }
    X86_TICK(c, 22);
    // 002f8e  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x2f8eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 002f95  pop esi
    X86_AT(c, 0x2f95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 002f96  pop ds
    X86_AT(c, 0x2f96u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 002f97  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2f97u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002fa1  je 0x301a
    X86_AT(c, 0x2fa1u);
    if (x86_cc(c, 4)) { goto L_301a; }
    X86_TICK(c, 12);
    // 002fa3  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x2fa3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 002fab  jne 0x301a
    X86_AT(c, 0x2fabu);
    if (x86_cc(c, 5)) { goto L_301a; }
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 12);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
L_301a:
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2f24u, "ran off the end of a function");
}
void f_00002f2c(X86Cpu& c) {
    X86_TICK(c, 16);
    // 002f2c  mov byte ptr gs:[ebp + 0x3cd], 0xff
    X86_AT(c, 0x2f2cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3CDu)), 0xFFu);
    // 002f34  mov byte ptr gs:[ebp + 0x3d5], 0xff
    X86_AT(c, 0x2f34u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D5u)), 0xFFu);
    // 002f3c  cmp dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2f3cu);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))), 0xFFFFFFFFu, 0, 4);
    // 002f44  je 0x2f5e
    X86_AT(c, 0x2f44u);
    if (x86_cc(c, 4)) { goto L_2f5e; }
    X86_TICK(c, 11);
    // 002f46  mov dword ptr gs:[ebp + 0x330], 0x5b18
    X86_AT(c, 0x2f46u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)), 0x5B18u);
    // 002f51  mov dword ptr gs:[ebp + 0x334], 0x5c94
    X86_AT(c, 0x2f51u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)), 0x5C94u);
    // 002f5c  jmp 0x2f73
    X86_AT(c, 0x2f5cu);
    goto L_2f73;
L_2f5e:
    X86_TICK(c, 8);
    // 002f5e  mov eax, dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x2f5eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)));
    // 002f65  mov dword ptr gs:[ebp + 0x330], eax
    X86_AT(c, 0x2f65u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)), c.r[0]);
    // 002f6c  mov dword ptr gs:[ebp + 0x334], eax
    X86_AT(c, 0x2f6cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)), c.r[0]);
L_2f73:
    X86_TICK(c, 7);
    // 002f73  call 0x36e4
    X86_AT(c, 0x2f73u);
    push32(c, 0x2f78u); f_000036e4(c); X86_RET(c, 0x2f78u);
    X86_TICK(c, 7);
    // 002f78  call 0x6120
    X86_AT(c, 0x2f78u);
    push32(c, 0x2f7du); f_00006120(c); X86_RET(c, 0x2f7du);
    X86_TICK(c, 13);
    // 002f7d  mov byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0x2f7du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x1u);
    // 002f85  push ds
    X86_AT(c, 0x2f85u);
    push32(c, c.sreg[3]);
    // 002f86  push esi
    X86_AT(c, 0x2f86u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 002f87  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2f87u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x2f8eu); x86_call(c, t); X86_RET(c, 0x2f8eu); }
    X86_TICK(c, 22);
    // 002f8e  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x2f8eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 002f95  pop esi
    X86_AT(c, 0x2f95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 002f96  pop ds
    X86_AT(c, 0x2f96u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 002f97  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2f97u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002fa1  je 0x301a
    X86_AT(c, 0x2fa1u);
    if (x86_cc(c, 4)) { goto L_301a; }
    X86_TICK(c, 12);
    // 002fa3  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x2fa3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 002fab  jne 0x301a
    X86_AT(c, 0x2fabu);
    if (x86_cc(c, 5)) { goto L_301a; }
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 12);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
L_301a:
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2f2cu, "ran off the end of a function");
}
void f_00002f34(X86Cpu& c) {
    X86_TICK(c, 14);
    // 002f34  mov byte ptr gs:[ebp + 0x3d5], 0xff
    X86_AT(c, 0x2f34u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D5u)), 0xFFu);
    // 002f3c  cmp dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2f3cu);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))), 0xFFFFFFFFu, 0, 4);
    // 002f44  je 0x2f5e
    X86_AT(c, 0x2f44u);
    if (x86_cc(c, 4)) { goto L_2f5e; }
    X86_TICK(c, 11);
    // 002f46  mov dword ptr gs:[ebp + 0x330], 0x5b18
    X86_AT(c, 0x2f46u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)), 0x5B18u);
    // 002f51  mov dword ptr gs:[ebp + 0x334], 0x5c94
    X86_AT(c, 0x2f51u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)), 0x5C94u);
    // 002f5c  jmp 0x2f73
    X86_AT(c, 0x2f5cu);
    goto L_2f73;
L_2f5e:
    X86_TICK(c, 8);
    // 002f5e  mov eax, dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x2f5eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)));
    // 002f65  mov dword ptr gs:[ebp + 0x330], eax
    X86_AT(c, 0x2f65u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)), c.r[0]);
    // 002f6c  mov dword ptr gs:[ebp + 0x334], eax
    X86_AT(c, 0x2f6cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)), c.r[0]);
L_2f73:
    X86_TICK(c, 7);
    // 002f73  call 0x36e4
    X86_AT(c, 0x2f73u);
    push32(c, 0x2f78u); f_000036e4(c); X86_RET(c, 0x2f78u);
    X86_TICK(c, 7);
    // 002f78  call 0x6120
    X86_AT(c, 0x2f78u);
    push32(c, 0x2f7du); f_00006120(c); X86_RET(c, 0x2f7du);
    X86_TICK(c, 13);
    // 002f7d  mov byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0x2f7du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x1u);
    // 002f85  push ds
    X86_AT(c, 0x2f85u);
    push32(c, c.sreg[3]);
    // 002f86  push esi
    X86_AT(c, 0x2f86u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 002f87  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2f87u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x2f8eu); x86_call(c, t); X86_RET(c, 0x2f8eu); }
    X86_TICK(c, 22);
    // 002f8e  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x2f8eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 002f95  pop esi
    X86_AT(c, 0x2f95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 002f96  pop ds
    X86_AT(c, 0x2f96u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 002f97  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2f97u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002fa1  je 0x301a
    X86_AT(c, 0x2fa1u);
    if (x86_cc(c, 4)) { goto L_301a; }
    X86_TICK(c, 12);
    // 002fa3  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x2fa3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 002fab  jne 0x301a
    X86_AT(c, 0x2fabu);
    if (x86_cc(c, 5)) { goto L_301a; }
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 12);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
L_301a:
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2f34u, "ran off the end of a function");
}
void f_00002f3c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 002f3c  cmp dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2f3cu);
    (void)x86_sub(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))), 0xFFFFFFFFu, 0, 4);
    // 002f44  je 0x2f5e
    X86_AT(c, 0x2f44u);
    if (x86_cc(c, 4)) { goto L_2f5e; }
    X86_TICK(c, 11);
    // 002f46  mov dword ptr gs:[ebp + 0x330], 0x5b18
    X86_AT(c, 0x2f46u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)), 0x5B18u);
    // 002f51  mov dword ptr gs:[ebp + 0x334], 0x5c94
    X86_AT(c, 0x2f51u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)), 0x5C94u);
    // 002f5c  jmp 0x2f73
    X86_AT(c, 0x2f5cu);
    goto L_2f73;
L_2f5e:
    X86_TICK(c, 8);
    // 002f5e  mov eax, dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x2f5eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)));
    // 002f65  mov dword ptr gs:[ebp + 0x330], eax
    X86_AT(c, 0x2f65u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)), c.r[0]);
    // 002f6c  mov dword ptr gs:[ebp + 0x334], eax
    X86_AT(c, 0x2f6cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)), c.r[0]);
L_2f73:
    X86_TICK(c, 7);
    // 002f73  call 0x36e4
    X86_AT(c, 0x2f73u);
    push32(c, 0x2f78u); f_000036e4(c); X86_RET(c, 0x2f78u);
    X86_TICK(c, 7);
    // 002f78  call 0x6120
    X86_AT(c, 0x2f78u);
    push32(c, 0x2f7du); f_00006120(c); X86_RET(c, 0x2f7du);
    X86_TICK(c, 13);
    // 002f7d  mov byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0x2f7du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x1u);
    // 002f85  push ds
    X86_AT(c, 0x2f85u);
    push32(c, c.sreg[3]);
    // 002f86  push esi
    X86_AT(c, 0x2f86u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 002f87  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2f87u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x2f8eu); x86_call(c, t); X86_RET(c, 0x2f8eu); }
    X86_TICK(c, 22);
    // 002f8e  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x2f8eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 002f95  pop esi
    X86_AT(c, 0x2f95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 002f96  pop ds
    X86_AT(c, 0x2f96u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 002f97  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2f97u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002fa1  je 0x301a
    X86_AT(c, 0x2fa1u);
    if (x86_cc(c, 4)) { goto L_301a; }
    X86_TICK(c, 12);
    // 002fa3  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x2fa3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 002fab  jne 0x301a
    X86_AT(c, 0x2fabu);
    if (x86_cc(c, 5)) { goto L_301a; }
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 12);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
L_301a:
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2f3cu, "ran off the end of a function");
}
void f_00002f44(X86Cpu& c) {
    X86_TICK(c, 5);
    // 002f44  je 0x2f5e
    X86_AT(c, 0x2f44u);
    if (x86_cc(c, 4)) { goto L_2f5e; }
    X86_TICK(c, 11);
    // 002f46  mov dword ptr gs:[ebp + 0x330], 0x5b18
    X86_AT(c, 0x2f46u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)), 0x5B18u);
    // 002f51  mov dword ptr gs:[ebp + 0x334], 0x5c94
    X86_AT(c, 0x2f51u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)), 0x5C94u);
    // 002f5c  jmp 0x2f73
    X86_AT(c, 0x2f5cu);
    goto L_2f73;
L_2f5e:
    X86_TICK(c, 8);
    // 002f5e  mov eax, dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x2f5eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)));
    // 002f65  mov dword ptr gs:[ebp + 0x330], eax
    X86_AT(c, 0x2f65u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)), c.r[0]);
    // 002f6c  mov dword ptr gs:[ebp + 0x334], eax
    X86_AT(c, 0x2f6cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)), c.r[0]);
L_2f73:
    X86_TICK(c, 7);
    // 002f73  call 0x36e4
    X86_AT(c, 0x2f73u);
    push32(c, 0x2f78u); f_000036e4(c); X86_RET(c, 0x2f78u);
    X86_TICK(c, 7);
    // 002f78  call 0x6120
    X86_AT(c, 0x2f78u);
    push32(c, 0x2f7du); f_00006120(c); X86_RET(c, 0x2f7du);
    X86_TICK(c, 13);
    // 002f7d  mov byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0x2f7du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x1u);
    // 002f85  push ds
    X86_AT(c, 0x2f85u);
    push32(c, c.sreg[3]);
    // 002f86  push esi
    X86_AT(c, 0x2f86u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 002f87  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2f87u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x2f8eu); x86_call(c, t); X86_RET(c, 0x2f8eu); }
    X86_TICK(c, 22);
    // 002f8e  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x2f8eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 002f95  pop esi
    X86_AT(c, 0x2f95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 002f96  pop ds
    X86_AT(c, 0x2f96u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 002f97  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2f97u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002fa1  je 0x301a
    X86_AT(c, 0x2fa1u);
    if (x86_cc(c, 4)) { goto L_301a; }
    X86_TICK(c, 12);
    // 002fa3  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x2fa3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 002fab  jne 0x301a
    X86_AT(c, 0x2fabu);
    if (x86_cc(c, 5)) { goto L_301a; }
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 12);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
L_301a:
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2f44u, "ran off the end of a function");
}
void f_00002f5e(X86Cpu& c) {
    X86_TICK(c, 15);
    // 002f5e  mov eax, dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x2f5eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)));
    // 002f65  mov dword ptr gs:[ebp + 0x330], eax
    X86_AT(c, 0x2f65u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)), c.r[0]);
    // 002f6c  mov dword ptr gs:[ebp + 0x334], eax
    X86_AT(c, 0x2f6cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)), c.r[0]);
    // 002f73  call 0x36e4
    X86_AT(c, 0x2f73u);
    push32(c, 0x2f78u); f_000036e4(c); X86_RET(c, 0x2f78u);
    X86_TICK(c, 7);
    // 002f78  call 0x6120
    X86_AT(c, 0x2f78u);
    push32(c, 0x2f7du); f_00006120(c); X86_RET(c, 0x2f7du);
    X86_TICK(c, 13);
    // 002f7d  mov byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0x2f7du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x1u);
    // 002f85  push ds
    X86_AT(c, 0x2f85u);
    push32(c, c.sreg[3]);
    // 002f86  push esi
    X86_AT(c, 0x2f86u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 002f87  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2f87u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x2f8eu); x86_call(c, t); X86_RET(c, 0x2f8eu); }
    X86_TICK(c, 22);
    // 002f8e  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x2f8eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 002f95  pop esi
    X86_AT(c, 0x2f95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 002f96  pop ds
    X86_AT(c, 0x2f96u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 002f97  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2f97u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002fa1  je 0x301a
    X86_AT(c, 0x2fa1u);
    if (x86_cc(c, 4)) { goto L_301a; }
    X86_TICK(c, 12);
    // 002fa3  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x2fa3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 002fab  jne 0x301a
    X86_AT(c, 0x2fabu);
    if (x86_cc(c, 5)) { goto L_301a; }
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 12);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
L_301a:
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2f5eu, "ran off the end of a function");
}
void f_00002f65(X86Cpu& c) {
    X86_TICK(c, 11);
    // 002f65  mov dword ptr gs:[ebp + 0x330], eax
    X86_AT(c, 0x2f65u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)), c.r[0]);
    // 002f6c  mov dword ptr gs:[ebp + 0x334], eax
    X86_AT(c, 0x2f6cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)), c.r[0]);
    // 002f73  call 0x36e4
    X86_AT(c, 0x2f73u);
    push32(c, 0x2f78u); f_000036e4(c); X86_RET(c, 0x2f78u);
    X86_TICK(c, 7);
    // 002f78  call 0x6120
    X86_AT(c, 0x2f78u);
    push32(c, 0x2f7du); f_00006120(c); X86_RET(c, 0x2f7du);
    X86_TICK(c, 13);
    // 002f7d  mov byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0x2f7du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x1u);
    // 002f85  push ds
    X86_AT(c, 0x2f85u);
    push32(c, c.sreg[3]);
    // 002f86  push esi
    X86_AT(c, 0x2f86u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 002f87  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2f87u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x2f8eu); x86_call(c, t); X86_RET(c, 0x2f8eu); }
    X86_TICK(c, 22);
    // 002f8e  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x2f8eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 002f95  pop esi
    X86_AT(c, 0x2f95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 002f96  pop ds
    X86_AT(c, 0x2f96u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 002f97  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2f97u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002fa1  je 0x301a
    X86_AT(c, 0x2fa1u);
    if (x86_cc(c, 4)) { goto L_301a; }
    X86_TICK(c, 12);
    // 002fa3  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x2fa3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 002fab  jne 0x301a
    X86_AT(c, 0x2fabu);
    if (x86_cc(c, 5)) { goto L_301a; }
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 12);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
L_301a:
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2f65u, "ran off the end of a function");
}
void f_00002f6c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 002f6c  mov dword ptr gs:[ebp + 0x334], eax
    X86_AT(c, 0x2f6cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u)), c.r[0]);
    // 002f73  call 0x36e4
    X86_AT(c, 0x2f73u);
    push32(c, 0x2f78u); f_000036e4(c); X86_RET(c, 0x2f78u);
    X86_TICK(c, 7);
    // 002f78  call 0x6120
    X86_AT(c, 0x2f78u);
    push32(c, 0x2f7du); f_00006120(c); X86_RET(c, 0x2f7du);
    X86_TICK(c, 13);
    // 002f7d  mov byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0x2f7du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x1u);
    // 002f85  push ds
    X86_AT(c, 0x2f85u);
    push32(c, c.sreg[3]);
    // 002f86  push esi
    X86_AT(c, 0x2f86u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 002f87  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2f87u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x2f8eu); x86_call(c, t); X86_RET(c, 0x2f8eu); }
    X86_TICK(c, 22);
    // 002f8e  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x2f8eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 002f95  pop esi
    X86_AT(c, 0x2f95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 002f96  pop ds
    X86_AT(c, 0x2f96u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 002f97  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2f97u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002fa1  je 0x301a
    X86_AT(c, 0x2fa1u);
    if (x86_cc(c, 4)) { goto L_301a; }
    X86_TICK(c, 12);
    // 002fa3  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x2fa3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 002fab  jne 0x301a
    X86_AT(c, 0x2fabu);
    if (x86_cc(c, 5)) { goto L_301a; }
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 12);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
L_301a:
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2f6cu, "ran off the end of a function");
}
void f_00002f73(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002f73  call 0x36e4
    X86_AT(c, 0x2f73u);
    push32(c, 0x2f78u); f_000036e4(c); X86_RET(c, 0x2f78u);
    X86_TICK(c, 7);
    // 002f78  call 0x6120
    X86_AT(c, 0x2f78u);
    push32(c, 0x2f7du); f_00006120(c); X86_RET(c, 0x2f7du);
    X86_TICK(c, 13);
    // 002f7d  mov byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0x2f7du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x1u);
    // 002f85  push ds
    X86_AT(c, 0x2f85u);
    push32(c, c.sreg[3]);
    // 002f86  push esi
    X86_AT(c, 0x2f86u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 002f87  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2f87u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x2f8eu); x86_call(c, t); X86_RET(c, 0x2f8eu); }
    X86_TICK(c, 22);
    // 002f8e  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x2f8eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 002f95  pop esi
    X86_AT(c, 0x2f95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 002f96  pop ds
    X86_AT(c, 0x2f96u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 002f97  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2f97u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002fa1  je 0x301a
    X86_AT(c, 0x2fa1u);
    if (x86_cc(c, 4)) { goto L_301a; }
    X86_TICK(c, 12);
    // 002fa3  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x2fa3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 002fab  jne 0x301a
    X86_AT(c, 0x2fabu);
    if (x86_cc(c, 5)) { goto L_301a; }
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 12);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
L_301a:
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2f73u, "ran off the end of a function");
}
void f_00002f78(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002f78  call 0x6120
    X86_AT(c, 0x2f78u);
    push32(c, 0x2f7du); f_00006120(c); X86_RET(c, 0x2f7du);
    X86_TICK(c, 13);
    // 002f7d  mov byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0x2f7du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x1u);
    // 002f85  push ds
    X86_AT(c, 0x2f85u);
    push32(c, c.sreg[3]);
    // 002f86  push esi
    X86_AT(c, 0x2f86u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 002f87  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2f87u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x2f8eu); x86_call(c, t); X86_RET(c, 0x2f8eu); }
    X86_TICK(c, 22);
    // 002f8e  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x2f8eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 002f95  pop esi
    X86_AT(c, 0x2f95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 002f96  pop ds
    X86_AT(c, 0x2f96u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 002f97  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2f97u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002fa1  je 0x301a
    X86_AT(c, 0x2fa1u);
    if (x86_cc(c, 4)) { goto L_301a; }
    X86_TICK(c, 12);
    // 002fa3  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x2fa3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 002fab  jne 0x301a
    X86_AT(c, 0x2fabu);
    if (x86_cc(c, 5)) { goto L_301a; }
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 12);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
L_301a:
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2f78u, "ran off the end of a function");
}
void f_00002f7d(X86Cpu& c) {
    X86_TICK(c, 13);
    // 002f7d  mov byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0x2f7du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x1u);
    // 002f85  push ds
    X86_AT(c, 0x2f85u);
    push32(c, c.sreg[3]);
    // 002f86  push esi
    X86_AT(c, 0x2f86u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 002f87  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2f87u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x2f8eu); x86_call(c, t); X86_RET(c, 0x2f8eu); }
    X86_TICK(c, 22);
    // 002f8e  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x2f8eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 002f95  pop esi
    X86_AT(c, 0x2f95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 002f96  pop ds
    X86_AT(c, 0x2f96u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 002f97  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2f97u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002fa1  je 0x301a
    X86_AT(c, 0x2fa1u);
    if (x86_cc(c, 4)) { goto L_301a; }
    X86_TICK(c, 12);
    // 002fa3  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x2fa3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 002fab  jne 0x301a
    X86_AT(c, 0x2fabu);
    if (x86_cc(c, 5)) { goto L_301a; }
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 12);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
L_301a:
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2f7du, "ran off the end of a function");
}
void f_00002f85(X86Cpu& c) {
    X86_TICK(c, 11);
    // 002f85  push ds
    X86_AT(c, 0x2f85u);
    push32(c, c.sreg[3]);
    // 002f86  push esi
    X86_AT(c, 0x2f86u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 002f87  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2f87u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x2f8eu); x86_call(c, t); X86_RET(c, 0x2f8eu); }
    X86_TICK(c, 22);
    // 002f8e  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x2f8eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 002f95  pop esi
    X86_AT(c, 0x2f95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 002f96  pop ds
    X86_AT(c, 0x2f96u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 002f97  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2f97u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002fa1  je 0x301a
    X86_AT(c, 0x2fa1u);
    if (x86_cc(c, 4)) { goto L_301a; }
    X86_TICK(c, 12);
    // 002fa3  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x2fa3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 002fab  jne 0x301a
    X86_AT(c, 0x2fabu);
    if (x86_cc(c, 5)) { goto L_301a; }
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 12);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
L_301a:
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2f85u, "ran off the end of a function");
}
void f_00002f86(X86Cpu& c) {
    X86_TICK(c, 9);
    // 002f86  push esi
    X86_AT(c, 0x2f86u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 002f87  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2f87u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x2f8eu); x86_call(c, t); X86_RET(c, 0x2f8eu); }
    X86_TICK(c, 22);
    // 002f8e  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x2f8eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 002f95  pop esi
    X86_AT(c, 0x2f95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 002f96  pop ds
    X86_AT(c, 0x2f96u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 002f97  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2f97u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002fa1  je 0x301a
    X86_AT(c, 0x2fa1u);
    if (x86_cc(c, 4)) { goto L_301a; }
    X86_TICK(c, 12);
    // 002fa3  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x2fa3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 002fab  jne 0x301a
    X86_AT(c, 0x2fabu);
    if (x86_cc(c, 5)) { goto L_301a; }
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 12);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
L_301a:
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2f86u, "ran off the end of a function");
}
void f_00002f87(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002f87  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2f87u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x2f8eu); x86_call(c, t); X86_RET(c, 0x2f8eu); }
    X86_TICK(c, 22);
    // 002f8e  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x2f8eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 002f95  pop esi
    X86_AT(c, 0x2f95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 002f96  pop ds
    X86_AT(c, 0x2f96u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 002f97  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2f97u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002fa1  je 0x301a
    X86_AT(c, 0x2fa1u);
    if (x86_cc(c, 4)) { goto L_301a; }
    X86_TICK(c, 12);
    // 002fa3  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x2fa3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 002fab  jne 0x301a
    X86_AT(c, 0x2fabu);
    if (x86_cc(c, 5)) { goto L_301a; }
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 12);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
L_301a:
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2f87u, "ran off the end of a function");
}
void f_00002f8e(X86Cpu& c) {
    X86_TICK(c, 22);
    // 002f8e  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x2f8eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 002f95  pop esi
    X86_AT(c, 0x2f95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 002f96  pop ds
    X86_AT(c, 0x2f96u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 002f97  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2f97u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002fa1  je 0x301a
    X86_AT(c, 0x2fa1u);
    if (x86_cc(c, 4)) { goto L_301a; }
    X86_TICK(c, 12);
    // 002fa3  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x2fa3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 002fab  jne 0x301a
    X86_AT(c, 0x2fabu);
    if (x86_cc(c, 5)) { goto L_301a; }
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 12);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
L_301a:
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2f8eu, "ran off the end of a function");
}
void f_00002f95(X86Cpu& c) {
    X86_TICK(c, 20);
    // 002f95  pop esi
    X86_AT(c, 0x2f95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 002f96  pop ds
    X86_AT(c, 0x2f96u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 002f97  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2f97u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002fa1  je 0x301a
    X86_AT(c, 0x2fa1u);
    if (x86_cc(c, 4)) { goto L_301a; }
    X86_TICK(c, 12);
    // 002fa3  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x2fa3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 002fab  jne 0x301a
    X86_AT(c, 0x2fabu);
    if (x86_cc(c, 5)) { goto L_301a; }
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 12);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
L_301a:
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2f95u, "ran off the end of a function");
}
void f_00002f96(X86Cpu& c) {
    X86_TICK(c, 16);
    // 002f96  pop ds
    X86_AT(c, 0x2f96u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 002f97  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2f97u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002fa1  je 0x301a
    X86_AT(c, 0x2fa1u);
    if (x86_cc(c, 4)) { goto L_301a; }
    X86_TICK(c, 12);
    // 002fa3  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x2fa3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 002fab  jne 0x301a
    X86_AT(c, 0x2fabu);
    if (x86_cc(c, 5)) { goto L_301a; }
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 12);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
L_301a:
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2f96u, "ran off the end of a function");
}
void f_00002f97(X86Cpu& c) {
    X86_TICK(c, 12);
    // 002f97  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x2f97u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 002fa1  je 0x301a
    X86_AT(c, 0x2fa1u);
    if (x86_cc(c, 4)) { goto L_301a; }
    X86_TICK(c, 12);
    // 002fa3  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x2fa3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 002fab  jne 0x301a
    X86_AT(c, 0x2fabu);
    if (x86_cc(c, 5)) { goto L_301a; }
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 12);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
L_301a:
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2f97u, "ran off the end of a function");
}
void f_00002fa1(X86Cpu& c) {
    X86_TICK(c, 5);
    // 002fa1  je 0x301a
    X86_AT(c, 0x2fa1u);
    if (x86_cc(c, 4)) { goto L_301a; }
    X86_TICK(c, 12);
    // 002fa3  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x2fa3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 002fab  jne 0x301a
    X86_AT(c, 0x2fabu);
    if (x86_cc(c, 5)) { goto L_301a; }
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 12);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
L_301a:
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2fa1u, "ran off the end of a function");
}
void f_00002fa3(X86Cpu& c) {
    X86_TICK(c, 12);
    // 002fa3  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x2fa3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 002fab  jne 0x301a
    X86_AT(c, 0x2fabu);
    if (x86_cc(c, 5)) { goto L_301a; }
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 12);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
L_301a:
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2fa3u, "ran off the end of a function");
}
void f_00002fab(X86Cpu& c) {
    X86_TICK(c, 5);
    // 002fab  jne 0x301a
    X86_AT(c, 0x2fabu);
    if (x86_cc(c, 5)) { goto L_301a; }
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 12);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
L_301a:
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2fabu, "ran off the end of a function");
}
void f_00002fad(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002fad  call 0x36bc
    X86_AT(c, 0x2fadu);
    push32(c, 0x2fb2u); f_000036bc(c); X86_RET(c, 0x2fb2u);
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 34);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2fadu, "ran off the end of a function");
}
void f_00002fb2(X86Cpu& c) {
    X86_TICK(c, 9);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 34);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2fb2u, "ran off the end of a function");
}
void f_00002fbd(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002fbd  call 0x6120
    X86_AT(c, 0x2fbdu);
    push32(c, 0x2fc2u); f_00006120(c); X86_RET(c, 0x2fc2u);
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 34);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2fbdu, "ran off the end of a function");
}
void f_00002fc2(X86Cpu& c) {
    X86_TICK(c, 27);
    // 002fc2  push dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x2fc2u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu))); push32(c, v); }
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 34);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2fc2u, "ran off the end of a function");
}
void f_00002fc9(X86Cpu& c) {
    X86_TICK(c, 22);
    // 002fc9  push dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x2fc9u);
    { uint32_t v = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))); push32(c, v); }
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 34);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2fc9u, "ran off the end of a function");
}
void f_00002fd0(X86Cpu& c) {
    X86_TICK(c, 17);
    // 002fd0  mov dword ptr gs:[ebp + 0x310], 0x6343
    X86_AT(c, 0x2fd0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), 0x6343u);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 34);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2fd0u, "ran off the end of a function");
}
void f_00002fdb(X86Cpu& c) {
    X86_TICK(c, 15);
    // 002fdb  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x2fdbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 34);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2fdbu, "ran off the end of a function");
}
void f_00002fe6(X86Cpu& c) {
    X86_TICK(c, 13);
    // 002fe6  mov byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2fe6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 34);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2fe6u, "ran off the end of a function");
}
void f_00002fee(X86Cpu& c) {
    X86_TICK(c, 11);
    // 002fee  mov byte ptr gs:[ebp + 0x22a], 0
    X86_AT(c, 0x2feeu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), 0x0u);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 34);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2feeu, "ran off the end of a function");
}
void f_00002ff6(X86Cpu& c) {
    X86_TICK(c, 9);
    // 002ff6  mov byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0x2ff6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), 0x0u);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 34);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2ff6u, "ran off the end of a function");
}
void f_00002ffe(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002ffe  call dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x2ffeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u))); push32(c, 0x3005u); x86_call(c, t); X86_RET(c, 0x3005u); }
    X86_TICK(c, 34);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2ffeu, "ran off the end of a function");
}
void f_00003005(X86Cpu& c) {
    X86_TICK(c, 34);
    // 003005  mov byte ptr gs:[ebp + 0x405], ah
    X86_AT(c, 0x3005u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), g8(c, 4));
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3005u, "ran off the end of a function");
}
void f_0000300c(X86Cpu& c) {
    X86_TICK(c, 32);
    // 00300c  pop dword ptr gs:[ebp + 0x228]
    X86_AT(c, 0x300cu);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), v); }
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x300cu, "ran off the end of a function");
}
void f_00003013(X86Cpu& c) {
    X86_TICK(c, 27);
    // 003013  pop dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x3013u);
    { uint32_t v = pop32(c); wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), v); }
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3013u, "ran off the end of a function");
}
void f_0000301a(X86Cpu& c) {
    X86_TICK(c, 22);
    // 00301a  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x301au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x301au, "ran off the end of a function");
}
void f_00003021(X86Cpu& c) {
    X86_TICK(c, 16);
    // 003021  mov ah, byte ptr gs:[ebp + 0x405]
    X86_AT(c, 0x3021u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u))));
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3021u, "ran off the end of a function");
}
void f_00003028(X86Cpu& c) {
    X86_TICK(c, 12);
    // 003028  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0x3028u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3028u, "ran off the end of a function");
}
void f_0000302c(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00302c  ret 
    X86_AT(c, 0x302cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x302cu, "ran off the end of a function");
}
void f_00003068(X86Cpu& c) {
    X86_TICK(c, 42);
    // 003068  mov eax, dword ptr gs:[ebp + 0x408]
    X86_AT(c, 0x3068u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)));
    // 00306f  mov ebx, eax
    X86_AT(c, 0x306fu);
    c.r[3] = c.r[0];
    // 003071  mov ecx, dword ptr gs:[ebp + 0x40c]
    X86_AT(c, 0x3071u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Cu)));
    // 003078  shld edx, ecx, 0x10
    X86_AT(c, 0x3078u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00307c  sub ax, cx
    X86_AT(c, 0x307cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00307f  mov word ptr gs:[ebp + 0x1c4], ax
    X86_AT(c, 0x307fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), (c.r[0] & 0xFFFFu));
    // 003087  shr eax, 0x10
    X86_AT(c, 0x3087u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00308a  sub ax, dx
    X86_AT(c, 0x308au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 00308d  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x308du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 003095  add bx, cx
    X86_AT(c, 0x3095u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 003098  mov word ptr gs:[ebp + 0x1c8], bx
    X86_AT(c, 0x3098u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[3] & 0xFFFFu));
    // 0030a0  shr ebx, 0x10
    X86_AT(c, 0x30a0u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 0030a3  add bx, dx
    X86_AT(c, 0x30a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 0030a6  mov word ptr gs:[ebp + 0x1ca], bx
    X86_AT(c, 0x30a6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[3] & 0xFFFFu));
    // 0030ae  jmp 0x3983
    X86_AT(c, 0x30aeu);
    goto L_3983;
L_3983:
    X86_TICK(c, 7);
    // 003983  call 0x38e9
    X86_AT(c, 0x3983u);
    push32(c, 0x3988u); f_000038e9(c); X86_RET(c, 0x3988u);
    X86_TICK(c, 5);
    // 003988  jae 0x39b4
    X86_AT(c, 0x3988u);
    if (x86_cc(c, 3)) { goto L_39b4; }
    X86_TICK(c, 32);
    // 00398a  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x398au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 003992  mov eax, dword ptr cs:[eax*4 + 0x62f0]
    X86_AT(c, 0x3992u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62F0u)));
    // 00399a  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x399au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039a1  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x39a1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 0039a8  and al, 0xf
    X86_AT(c, 0x39a8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0039aa  add al, 0x10
    X86_AT(c, 0x39aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x10u, 0, 1)); }
    // 0039ac  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x39acu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 0039b3  ret 
    X86_AT(c, 0x39b3u);
    c.eip = pop32(c); return;
L_39b4:
    X86_TICK(c, 29);
    // 0039b4  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x39b4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 0039bc  mov eax, dword ptr cs:[eax*4 + 0x62ec]
    X86_AT(c, 0x39bcu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62ECu)));
    // 0039c4  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x39c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039cb  and byte ptr gs:[ebp + 0x220], 0xf
    X86_AT(c, 0x39cbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFu, 1)); }
    // 0039d3  ret 
    X86_AT(c, 0x39d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3068u, "ran off the end of a function");
}
void f_0000306f(X86Cpu& c) {
    X86_TICK(c, 38);
    // 00306f  mov ebx, eax
    X86_AT(c, 0x306fu);
    c.r[3] = c.r[0];
    // 003071  mov ecx, dword ptr gs:[ebp + 0x40c]
    X86_AT(c, 0x3071u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Cu)));
    // 003078  shld edx, ecx, 0x10
    X86_AT(c, 0x3078u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00307c  sub ax, cx
    X86_AT(c, 0x307cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00307f  mov word ptr gs:[ebp + 0x1c4], ax
    X86_AT(c, 0x307fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), (c.r[0] & 0xFFFFu));
    // 003087  shr eax, 0x10
    X86_AT(c, 0x3087u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00308a  sub ax, dx
    X86_AT(c, 0x308au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 00308d  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x308du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 003095  add bx, cx
    X86_AT(c, 0x3095u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 003098  mov word ptr gs:[ebp + 0x1c8], bx
    X86_AT(c, 0x3098u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[3] & 0xFFFFu));
    // 0030a0  shr ebx, 0x10
    X86_AT(c, 0x30a0u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 0030a3  add bx, dx
    X86_AT(c, 0x30a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 0030a6  mov word ptr gs:[ebp + 0x1ca], bx
    X86_AT(c, 0x30a6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[3] & 0xFFFFu));
    // 0030ae  jmp 0x3983
    X86_AT(c, 0x30aeu);
    goto L_3983;
L_3983:
    X86_TICK(c, 7);
    // 003983  call 0x38e9
    X86_AT(c, 0x3983u);
    push32(c, 0x3988u); f_000038e9(c); X86_RET(c, 0x3988u);
    X86_TICK(c, 5);
    // 003988  jae 0x39b4
    X86_AT(c, 0x3988u);
    if (x86_cc(c, 3)) { goto L_39b4; }
    X86_TICK(c, 32);
    // 00398a  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x398au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 003992  mov eax, dword ptr cs:[eax*4 + 0x62f0]
    X86_AT(c, 0x3992u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62F0u)));
    // 00399a  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x399au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039a1  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x39a1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 0039a8  and al, 0xf
    X86_AT(c, 0x39a8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0039aa  add al, 0x10
    X86_AT(c, 0x39aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x10u, 0, 1)); }
    // 0039ac  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x39acu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 0039b3  ret 
    X86_AT(c, 0x39b3u);
    c.eip = pop32(c); return;
L_39b4:
    X86_TICK(c, 29);
    // 0039b4  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x39b4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 0039bc  mov eax, dword ptr cs:[eax*4 + 0x62ec]
    X86_AT(c, 0x39bcu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62ECu)));
    // 0039c4  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x39c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039cb  and byte ptr gs:[ebp + 0x220], 0xf
    X86_AT(c, 0x39cbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFu, 1)); }
    // 0039d3  ret 
    X86_AT(c, 0x39d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x306fu, "ran off the end of a function");
}
void f_00003071(X86Cpu& c) {
    X86_TICK(c, 36);
    // 003071  mov ecx, dword ptr gs:[ebp + 0x40c]
    X86_AT(c, 0x3071u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Cu)));
    // 003078  shld edx, ecx, 0x10
    X86_AT(c, 0x3078u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00307c  sub ax, cx
    X86_AT(c, 0x307cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00307f  mov word ptr gs:[ebp + 0x1c4], ax
    X86_AT(c, 0x307fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), (c.r[0] & 0xFFFFu));
    // 003087  shr eax, 0x10
    X86_AT(c, 0x3087u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00308a  sub ax, dx
    X86_AT(c, 0x308au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 00308d  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x308du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 003095  add bx, cx
    X86_AT(c, 0x3095u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 003098  mov word ptr gs:[ebp + 0x1c8], bx
    X86_AT(c, 0x3098u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[3] & 0xFFFFu));
    // 0030a0  shr ebx, 0x10
    X86_AT(c, 0x30a0u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 0030a3  add bx, dx
    X86_AT(c, 0x30a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 0030a6  mov word ptr gs:[ebp + 0x1ca], bx
    X86_AT(c, 0x30a6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[3] & 0xFFFFu));
    // 0030ae  jmp 0x3983
    X86_AT(c, 0x30aeu);
    goto L_3983;
L_3983:
    X86_TICK(c, 7);
    // 003983  call 0x38e9
    X86_AT(c, 0x3983u);
    push32(c, 0x3988u); f_000038e9(c); X86_RET(c, 0x3988u);
    X86_TICK(c, 5);
    // 003988  jae 0x39b4
    X86_AT(c, 0x3988u);
    if (x86_cc(c, 3)) { goto L_39b4; }
    X86_TICK(c, 32);
    // 00398a  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x398au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 003992  mov eax, dword ptr cs:[eax*4 + 0x62f0]
    X86_AT(c, 0x3992u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62F0u)));
    // 00399a  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x399au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039a1  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x39a1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 0039a8  and al, 0xf
    X86_AT(c, 0x39a8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0039aa  add al, 0x10
    X86_AT(c, 0x39aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x10u, 0, 1)); }
    // 0039ac  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x39acu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 0039b3  ret 
    X86_AT(c, 0x39b3u);
    c.eip = pop32(c); return;
L_39b4:
    X86_TICK(c, 29);
    // 0039b4  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x39b4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 0039bc  mov eax, dword ptr cs:[eax*4 + 0x62ec]
    X86_AT(c, 0x39bcu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62ECu)));
    // 0039c4  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x39c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039cb  and byte ptr gs:[ebp + 0x220], 0xf
    X86_AT(c, 0x39cbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFu, 1)); }
    // 0039d3  ret 
    X86_AT(c, 0x39d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3071u, "ran off the end of a function");
}
void f_00003078(X86Cpu& c) {
    X86_TICK(c, 32);
    // 003078  shld edx, ecx, 0x10
    X86_AT(c, 0x3078u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00307c  sub ax, cx
    X86_AT(c, 0x307cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00307f  mov word ptr gs:[ebp + 0x1c4], ax
    X86_AT(c, 0x307fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), (c.r[0] & 0xFFFFu));
    // 003087  shr eax, 0x10
    X86_AT(c, 0x3087u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00308a  sub ax, dx
    X86_AT(c, 0x308au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 00308d  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x308du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 003095  add bx, cx
    X86_AT(c, 0x3095u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 003098  mov word ptr gs:[ebp + 0x1c8], bx
    X86_AT(c, 0x3098u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[3] & 0xFFFFu));
    // 0030a0  shr ebx, 0x10
    X86_AT(c, 0x30a0u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 0030a3  add bx, dx
    X86_AT(c, 0x30a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 0030a6  mov word ptr gs:[ebp + 0x1ca], bx
    X86_AT(c, 0x30a6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[3] & 0xFFFFu));
    // 0030ae  jmp 0x3983
    X86_AT(c, 0x30aeu);
    goto L_3983;
L_3983:
    X86_TICK(c, 7);
    // 003983  call 0x38e9
    X86_AT(c, 0x3983u);
    push32(c, 0x3988u); f_000038e9(c); X86_RET(c, 0x3988u);
    X86_TICK(c, 5);
    // 003988  jae 0x39b4
    X86_AT(c, 0x3988u);
    if (x86_cc(c, 3)) { goto L_39b4; }
    X86_TICK(c, 32);
    // 00398a  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x398au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 003992  mov eax, dword ptr cs:[eax*4 + 0x62f0]
    X86_AT(c, 0x3992u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62F0u)));
    // 00399a  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x399au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039a1  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x39a1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 0039a8  and al, 0xf
    X86_AT(c, 0x39a8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0039aa  add al, 0x10
    X86_AT(c, 0x39aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x10u, 0, 1)); }
    // 0039ac  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x39acu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 0039b3  ret 
    X86_AT(c, 0x39b3u);
    c.eip = pop32(c); return;
L_39b4:
    X86_TICK(c, 29);
    // 0039b4  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x39b4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 0039bc  mov eax, dword ptr cs:[eax*4 + 0x62ec]
    X86_AT(c, 0x39bcu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62ECu)));
    // 0039c4  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x39c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039cb  and byte ptr gs:[ebp + 0x220], 0xf
    X86_AT(c, 0x39cbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFu, 1)); }
    // 0039d3  ret 
    X86_AT(c, 0x39d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3078u, "ran off the end of a function");
}
void f_0000307c(X86Cpu& c) {
    X86_TICK(c, 29);
    // 00307c  sub ax, cx
    X86_AT(c, 0x307cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00307f  mov word ptr gs:[ebp + 0x1c4], ax
    X86_AT(c, 0x307fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), (c.r[0] & 0xFFFFu));
    // 003087  shr eax, 0x10
    X86_AT(c, 0x3087u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00308a  sub ax, dx
    X86_AT(c, 0x308au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 00308d  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x308du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 003095  add bx, cx
    X86_AT(c, 0x3095u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 003098  mov word ptr gs:[ebp + 0x1c8], bx
    X86_AT(c, 0x3098u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[3] & 0xFFFFu));
    // 0030a0  shr ebx, 0x10
    X86_AT(c, 0x30a0u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 0030a3  add bx, dx
    X86_AT(c, 0x30a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 0030a6  mov word ptr gs:[ebp + 0x1ca], bx
    X86_AT(c, 0x30a6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[3] & 0xFFFFu));
    // 0030ae  jmp 0x3983
    X86_AT(c, 0x30aeu);
    goto L_3983;
L_3983:
    X86_TICK(c, 7);
    // 003983  call 0x38e9
    X86_AT(c, 0x3983u);
    push32(c, 0x3988u); f_000038e9(c); X86_RET(c, 0x3988u);
    X86_TICK(c, 5);
    // 003988  jae 0x39b4
    X86_AT(c, 0x3988u);
    if (x86_cc(c, 3)) { goto L_39b4; }
    X86_TICK(c, 32);
    // 00398a  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x398au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 003992  mov eax, dword ptr cs:[eax*4 + 0x62f0]
    X86_AT(c, 0x3992u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62F0u)));
    // 00399a  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x399au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039a1  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x39a1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 0039a8  and al, 0xf
    X86_AT(c, 0x39a8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0039aa  add al, 0x10
    X86_AT(c, 0x39aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x10u, 0, 1)); }
    // 0039ac  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x39acu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 0039b3  ret 
    X86_AT(c, 0x39b3u);
    c.eip = pop32(c); return;
L_39b4:
    X86_TICK(c, 29);
    // 0039b4  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x39b4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 0039bc  mov eax, dword ptr cs:[eax*4 + 0x62ec]
    X86_AT(c, 0x39bcu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62ECu)));
    // 0039c4  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x39c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039cb  and byte ptr gs:[ebp + 0x220], 0xf
    X86_AT(c, 0x39cbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFu, 1)); }
    // 0039d3  ret 
    X86_AT(c, 0x39d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x307cu, "ran off the end of a function");
}
void f_0000307f(X86Cpu& c) {
    X86_TICK(c, 27);
    // 00307f  mov word ptr gs:[ebp + 0x1c4], ax
    X86_AT(c, 0x307fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), (c.r[0] & 0xFFFFu));
    // 003087  shr eax, 0x10
    X86_AT(c, 0x3087u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00308a  sub ax, dx
    X86_AT(c, 0x308au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 00308d  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x308du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 003095  add bx, cx
    X86_AT(c, 0x3095u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 003098  mov word ptr gs:[ebp + 0x1c8], bx
    X86_AT(c, 0x3098u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[3] & 0xFFFFu));
    // 0030a0  shr ebx, 0x10
    X86_AT(c, 0x30a0u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 0030a3  add bx, dx
    X86_AT(c, 0x30a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 0030a6  mov word ptr gs:[ebp + 0x1ca], bx
    X86_AT(c, 0x30a6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[3] & 0xFFFFu));
    // 0030ae  jmp 0x3983
    X86_AT(c, 0x30aeu);
    goto L_3983;
L_3983:
    X86_TICK(c, 7);
    // 003983  call 0x38e9
    X86_AT(c, 0x3983u);
    push32(c, 0x3988u); f_000038e9(c); X86_RET(c, 0x3988u);
    X86_TICK(c, 5);
    // 003988  jae 0x39b4
    X86_AT(c, 0x3988u);
    if (x86_cc(c, 3)) { goto L_39b4; }
    X86_TICK(c, 32);
    // 00398a  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x398au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 003992  mov eax, dword ptr cs:[eax*4 + 0x62f0]
    X86_AT(c, 0x3992u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62F0u)));
    // 00399a  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x399au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039a1  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x39a1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 0039a8  and al, 0xf
    X86_AT(c, 0x39a8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0039aa  add al, 0x10
    X86_AT(c, 0x39aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x10u, 0, 1)); }
    // 0039ac  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x39acu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 0039b3  ret 
    X86_AT(c, 0x39b3u);
    c.eip = pop32(c); return;
L_39b4:
    X86_TICK(c, 29);
    // 0039b4  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x39b4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 0039bc  mov eax, dword ptr cs:[eax*4 + 0x62ec]
    X86_AT(c, 0x39bcu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62ECu)));
    // 0039c4  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x39c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039cb  and byte ptr gs:[ebp + 0x220], 0xf
    X86_AT(c, 0x39cbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFu, 1)); }
    // 0039d3  ret 
    X86_AT(c, 0x39d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x307fu, "ran off the end of a function");
}
void f_00003087(X86Cpu& c) {
    X86_TICK(c, 25);
    // 003087  shr eax, 0x10
    X86_AT(c, 0x3087u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00308a  sub ax, dx
    X86_AT(c, 0x308au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 00308d  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x308du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 003095  add bx, cx
    X86_AT(c, 0x3095u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 003098  mov word ptr gs:[ebp + 0x1c8], bx
    X86_AT(c, 0x3098u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[3] & 0xFFFFu));
    // 0030a0  shr ebx, 0x10
    X86_AT(c, 0x30a0u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 0030a3  add bx, dx
    X86_AT(c, 0x30a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 0030a6  mov word ptr gs:[ebp + 0x1ca], bx
    X86_AT(c, 0x30a6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[3] & 0xFFFFu));
    // 0030ae  jmp 0x3983
    X86_AT(c, 0x30aeu);
    goto L_3983;
L_3983:
    X86_TICK(c, 7);
    // 003983  call 0x38e9
    X86_AT(c, 0x3983u);
    push32(c, 0x3988u); f_000038e9(c); X86_RET(c, 0x3988u);
    X86_TICK(c, 5);
    // 003988  jae 0x39b4
    X86_AT(c, 0x3988u);
    if (x86_cc(c, 3)) { goto L_39b4; }
    X86_TICK(c, 32);
    // 00398a  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x398au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 003992  mov eax, dword ptr cs:[eax*4 + 0x62f0]
    X86_AT(c, 0x3992u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62F0u)));
    // 00399a  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x399au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039a1  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x39a1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 0039a8  and al, 0xf
    X86_AT(c, 0x39a8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0039aa  add al, 0x10
    X86_AT(c, 0x39aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x10u, 0, 1)); }
    // 0039ac  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x39acu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 0039b3  ret 
    X86_AT(c, 0x39b3u);
    c.eip = pop32(c); return;
L_39b4:
    X86_TICK(c, 29);
    // 0039b4  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x39b4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 0039bc  mov eax, dword ptr cs:[eax*4 + 0x62ec]
    X86_AT(c, 0x39bcu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62ECu)));
    // 0039c4  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x39c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039cb  and byte ptr gs:[ebp + 0x220], 0xf
    X86_AT(c, 0x39cbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFu, 1)); }
    // 0039d3  ret 
    X86_AT(c, 0x39d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3087u, "ran off the end of a function");
}
void f_0000308a(X86Cpu& c) {
    X86_TICK(c, 22);
    // 00308a  sub ax, dx
    X86_AT(c, 0x308au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 00308d  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x308du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 003095  add bx, cx
    X86_AT(c, 0x3095u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 003098  mov word ptr gs:[ebp + 0x1c8], bx
    X86_AT(c, 0x3098u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[3] & 0xFFFFu));
    // 0030a0  shr ebx, 0x10
    X86_AT(c, 0x30a0u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 0030a3  add bx, dx
    X86_AT(c, 0x30a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 0030a6  mov word ptr gs:[ebp + 0x1ca], bx
    X86_AT(c, 0x30a6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[3] & 0xFFFFu));
    // 0030ae  jmp 0x3983
    X86_AT(c, 0x30aeu);
    goto L_3983;
L_3983:
    X86_TICK(c, 7);
    // 003983  call 0x38e9
    X86_AT(c, 0x3983u);
    push32(c, 0x3988u); f_000038e9(c); X86_RET(c, 0x3988u);
    X86_TICK(c, 5);
    // 003988  jae 0x39b4
    X86_AT(c, 0x3988u);
    if (x86_cc(c, 3)) { goto L_39b4; }
    X86_TICK(c, 32);
    // 00398a  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x398au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 003992  mov eax, dword ptr cs:[eax*4 + 0x62f0]
    X86_AT(c, 0x3992u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62F0u)));
    // 00399a  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x399au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039a1  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x39a1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 0039a8  and al, 0xf
    X86_AT(c, 0x39a8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0039aa  add al, 0x10
    X86_AT(c, 0x39aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x10u, 0, 1)); }
    // 0039ac  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x39acu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 0039b3  ret 
    X86_AT(c, 0x39b3u);
    c.eip = pop32(c); return;
L_39b4:
    X86_TICK(c, 29);
    // 0039b4  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x39b4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 0039bc  mov eax, dword ptr cs:[eax*4 + 0x62ec]
    X86_AT(c, 0x39bcu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62ECu)));
    // 0039c4  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x39c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039cb  and byte ptr gs:[ebp + 0x220], 0xf
    X86_AT(c, 0x39cbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFu, 1)); }
    // 0039d3  ret 
    X86_AT(c, 0x39d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x308au, "ran off the end of a function");
}
void f_0000308d(X86Cpu& c) {
    X86_TICK(c, 20);
    // 00308d  mov word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0x308du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)), (c.r[0] & 0xFFFFu));
    // 003095  add bx, cx
    X86_AT(c, 0x3095u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 003098  mov word ptr gs:[ebp + 0x1c8], bx
    X86_AT(c, 0x3098u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[3] & 0xFFFFu));
    // 0030a0  shr ebx, 0x10
    X86_AT(c, 0x30a0u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 0030a3  add bx, dx
    X86_AT(c, 0x30a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 0030a6  mov word ptr gs:[ebp + 0x1ca], bx
    X86_AT(c, 0x30a6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[3] & 0xFFFFu));
    // 0030ae  jmp 0x3983
    X86_AT(c, 0x30aeu);
    goto L_3983;
L_3983:
    X86_TICK(c, 7);
    // 003983  call 0x38e9
    X86_AT(c, 0x3983u);
    push32(c, 0x3988u); f_000038e9(c); X86_RET(c, 0x3988u);
    X86_TICK(c, 5);
    // 003988  jae 0x39b4
    X86_AT(c, 0x3988u);
    if (x86_cc(c, 3)) { goto L_39b4; }
    X86_TICK(c, 32);
    // 00398a  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x398au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 003992  mov eax, dword ptr cs:[eax*4 + 0x62f0]
    X86_AT(c, 0x3992u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62F0u)));
    // 00399a  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x399au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039a1  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x39a1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 0039a8  and al, 0xf
    X86_AT(c, 0x39a8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0039aa  add al, 0x10
    X86_AT(c, 0x39aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x10u, 0, 1)); }
    // 0039ac  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x39acu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 0039b3  ret 
    X86_AT(c, 0x39b3u);
    c.eip = pop32(c); return;
L_39b4:
    X86_TICK(c, 29);
    // 0039b4  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x39b4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 0039bc  mov eax, dword ptr cs:[eax*4 + 0x62ec]
    X86_AT(c, 0x39bcu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62ECu)));
    // 0039c4  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x39c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039cb  and byte ptr gs:[ebp + 0x220], 0xf
    X86_AT(c, 0x39cbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFu, 1)); }
    // 0039d3  ret 
    X86_AT(c, 0x39d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x308du, "ran off the end of a function");
}
void f_00003095(X86Cpu& c) {
    X86_TICK(c, 18);
    // 003095  add bx, cx
    X86_AT(c, 0x3095u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 003098  mov word ptr gs:[ebp + 0x1c8], bx
    X86_AT(c, 0x3098u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[3] & 0xFFFFu));
    // 0030a0  shr ebx, 0x10
    X86_AT(c, 0x30a0u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 0030a3  add bx, dx
    X86_AT(c, 0x30a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 0030a6  mov word ptr gs:[ebp + 0x1ca], bx
    X86_AT(c, 0x30a6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[3] & 0xFFFFu));
    // 0030ae  jmp 0x3983
    X86_AT(c, 0x30aeu);
    goto L_3983;
L_3983:
    X86_TICK(c, 7);
    // 003983  call 0x38e9
    X86_AT(c, 0x3983u);
    push32(c, 0x3988u); f_000038e9(c); X86_RET(c, 0x3988u);
    X86_TICK(c, 5);
    // 003988  jae 0x39b4
    X86_AT(c, 0x3988u);
    if (x86_cc(c, 3)) { goto L_39b4; }
    X86_TICK(c, 32);
    // 00398a  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x398au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 003992  mov eax, dword ptr cs:[eax*4 + 0x62f0]
    X86_AT(c, 0x3992u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62F0u)));
    // 00399a  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x399au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039a1  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x39a1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 0039a8  and al, 0xf
    X86_AT(c, 0x39a8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0039aa  add al, 0x10
    X86_AT(c, 0x39aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x10u, 0, 1)); }
    // 0039ac  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x39acu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 0039b3  ret 
    X86_AT(c, 0x39b3u);
    c.eip = pop32(c); return;
L_39b4:
    X86_TICK(c, 29);
    // 0039b4  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x39b4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 0039bc  mov eax, dword ptr cs:[eax*4 + 0x62ec]
    X86_AT(c, 0x39bcu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62ECu)));
    // 0039c4  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x39c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039cb  and byte ptr gs:[ebp + 0x220], 0xf
    X86_AT(c, 0x39cbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFu, 1)); }
    // 0039d3  ret 
    X86_AT(c, 0x39d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3095u, "ran off the end of a function");
}
void f_00003098(X86Cpu& c) {
    X86_TICK(c, 16);
    // 003098  mov word ptr gs:[ebp + 0x1c8], bx
    X86_AT(c, 0x3098u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[3] & 0xFFFFu));
    // 0030a0  shr ebx, 0x10
    X86_AT(c, 0x30a0u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 0030a3  add bx, dx
    X86_AT(c, 0x30a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 0030a6  mov word ptr gs:[ebp + 0x1ca], bx
    X86_AT(c, 0x30a6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[3] & 0xFFFFu));
    // 0030ae  jmp 0x3983
    X86_AT(c, 0x30aeu);
    goto L_3983;
L_3983:
    X86_TICK(c, 7);
    // 003983  call 0x38e9
    X86_AT(c, 0x3983u);
    push32(c, 0x3988u); f_000038e9(c); X86_RET(c, 0x3988u);
    X86_TICK(c, 5);
    // 003988  jae 0x39b4
    X86_AT(c, 0x3988u);
    if (x86_cc(c, 3)) { goto L_39b4; }
    X86_TICK(c, 32);
    // 00398a  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x398au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 003992  mov eax, dword ptr cs:[eax*4 + 0x62f0]
    X86_AT(c, 0x3992u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62F0u)));
    // 00399a  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x399au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039a1  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x39a1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 0039a8  and al, 0xf
    X86_AT(c, 0x39a8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0039aa  add al, 0x10
    X86_AT(c, 0x39aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x10u, 0, 1)); }
    // 0039ac  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x39acu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 0039b3  ret 
    X86_AT(c, 0x39b3u);
    c.eip = pop32(c); return;
L_39b4:
    X86_TICK(c, 29);
    // 0039b4  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x39b4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 0039bc  mov eax, dword ptr cs:[eax*4 + 0x62ec]
    X86_AT(c, 0x39bcu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62ECu)));
    // 0039c4  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x39c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039cb  and byte ptr gs:[ebp + 0x220], 0xf
    X86_AT(c, 0x39cbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFu, 1)); }
    // 0039d3  ret 
    X86_AT(c, 0x39d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3098u, "ran off the end of a function");
}
void f_000030a0(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0030a0  shr ebx, 0x10
    X86_AT(c, 0x30a0u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 0030a3  add bx, dx
    X86_AT(c, 0x30a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 0030a6  mov word ptr gs:[ebp + 0x1ca], bx
    X86_AT(c, 0x30a6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[3] & 0xFFFFu));
    // 0030ae  jmp 0x3983
    X86_AT(c, 0x30aeu);
    goto L_3983;
L_3983:
    X86_TICK(c, 7);
    // 003983  call 0x38e9
    X86_AT(c, 0x3983u);
    push32(c, 0x3988u); f_000038e9(c); X86_RET(c, 0x3988u);
    X86_TICK(c, 5);
    // 003988  jae 0x39b4
    X86_AT(c, 0x3988u);
    if (x86_cc(c, 3)) { goto L_39b4; }
    X86_TICK(c, 32);
    // 00398a  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x398au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 003992  mov eax, dword ptr cs:[eax*4 + 0x62f0]
    X86_AT(c, 0x3992u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62F0u)));
    // 00399a  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x399au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039a1  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x39a1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 0039a8  and al, 0xf
    X86_AT(c, 0x39a8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0039aa  add al, 0x10
    X86_AT(c, 0x39aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x10u, 0, 1)); }
    // 0039ac  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x39acu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 0039b3  ret 
    X86_AT(c, 0x39b3u);
    c.eip = pop32(c); return;
L_39b4:
    X86_TICK(c, 29);
    // 0039b4  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x39b4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 0039bc  mov eax, dword ptr cs:[eax*4 + 0x62ec]
    X86_AT(c, 0x39bcu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62ECu)));
    // 0039c4  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x39c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039cb  and byte ptr gs:[ebp + 0x220], 0xf
    X86_AT(c, 0x39cbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFu, 1)); }
    // 0039d3  ret 
    X86_AT(c, 0x39d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x30a0u, "ran off the end of a function");
}
void f_000030a3(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0030a3  add bx, dx
    X86_AT(c, 0x30a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 0030a6  mov word ptr gs:[ebp + 0x1ca], bx
    X86_AT(c, 0x30a6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[3] & 0xFFFFu));
    // 0030ae  jmp 0x3983
    X86_AT(c, 0x30aeu);
    goto L_3983;
L_3983:
    X86_TICK(c, 7);
    // 003983  call 0x38e9
    X86_AT(c, 0x3983u);
    push32(c, 0x3988u); f_000038e9(c); X86_RET(c, 0x3988u);
    X86_TICK(c, 5);
    // 003988  jae 0x39b4
    X86_AT(c, 0x3988u);
    if (x86_cc(c, 3)) { goto L_39b4; }
    X86_TICK(c, 32);
    // 00398a  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x398au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 003992  mov eax, dword ptr cs:[eax*4 + 0x62f0]
    X86_AT(c, 0x3992u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62F0u)));
    // 00399a  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x399au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039a1  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x39a1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 0039a8  and al, 0xf
    X86_AT(c, 0x39a8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0039aa  add al, 0x10
    X86_AT(c, 0x39aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x10u, 0, 1)); }
    // 0039ac  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x39acu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 0039b3  ret 
    X86_AT(c, 0x39b3u);
    c.eip = pop32(c); return;
L_39b4:
    X86_TICK(c, 29);
    // 0039b4  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x39b4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 0039bc  mov eax, dword ptr cs:[eax*4 + 0x62ec]
    X86_AT(c, 0x39bcu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62ECu)));
    // 0039c4  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x39c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039cb  and byte ptr gs:[ebp + 0x220], 0xf
    X86_AT(c, 0x39cbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFu, 1)); }
    // 0039d3  ret 
    X86_AT(c, 0x39d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x30a3u, "ran off the end of a function");
}
void f_000030a6(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0030a6  mov word ptr gs:[ebp + 0x1ca], bx
    X86_AT(c, 0x30a6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[3] & 0xFFFFu));
    // 0030ae  jmp 0x3983
    X86_AT(c, 0x30aeu);
    goto L_3983;
L_3983:
    X86_TICK(c, 7);
    // 003983  call 0x38e9
    X86_AT(c, 0x3983u);
    push32(c, 0x3988u); f_000038e9(c); X86_RET(c, 0x3988u);
    X86_TICK(c, 5);
    // 003988  jae 0x39b4
    X86_AT(c, 0x3988u);
    if (x86_cc(c, 3)) { goto L_39b4; }
    X86_TICK(c, 32);
    // 00398a  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x398au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 003992  mov eax, dword ptr cs:[eax*4 + 0x62f0]
    X86_AT(c, 0x3992u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62F0u)));
    // 00399a  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x399au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039a1  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x39a1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 0039a8  and al, 0xf
    X86_AT(c, 0x39a8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0039aa  add al, 0x10
    X86_AT(c, 0x39aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x10u, 0, 1)); }
    // 0039ac  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x39acu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 0039b3  ret 
    X86_AT(c, 0x39b3u);
    c.eip = pop32(c); return;
L_39b4:
    X86_TICK(c, 29);
    // 0039b4  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x39b4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 0039bc  mov eax, dword ptr cs:[eax*4 + 0x62ec]
    X86_AT(c, 0x39bcu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62ECu)));
    // 0039c4  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x39c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039cb  and byte ptr gs:[ebp + 0x220], 0xf
    X86_AT(c, 0x39cbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFu, 1)); }
    // 0039d3  ret 
    X86_AT(c, 0x39d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x30a6u, "ran off the end of a function");
}
void f_000030ae(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0030ae  jmp 0x3983
    X86_AT(c, 0x30aeu);
    goto L_3983;
L_3983:
    X86_TICK(c, 7);
    // 003983  call 0x38e9
    X86_AT(c, 0x3983u);
    push32(c, 0x3988u); f_000038e9(c); X86_RET(c, 0x3988u);
    X86_TICK(c, 5);
    // 003988  jae 0x39b4
    X86_AT(c, 0x3988u);
    if (x86_cc(c, 3)) { goto L_39b4; }
    X86_TICK(c, 32);
    // 00398a  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x398au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 003992  mov eax, dword ptr cs:[eax*4 + 0x62f0]
    X86_AT(c, 0x3992u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62F0u)));
    // 00399a  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x399au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039a1  mov al, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x39a1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u))));
    // 0039a8  and al, 0xf
    X86_AT(c, 0x39a8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0039aa  add al, 0x10
    X86_AT(c, 0x39aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x10u, 0, 1)); }
    // 0039ac  mov byte ptr gs:[ebp + 0x220], al
    X86_AT(c, 0x39acu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), g8(c, 0));
    // 0039b3  ret 
    X86_AT(c, 0x39b3u);
    c.eip = pop32(c); return;
L_39b4:
    X86_TICK(c, 29);
    // 0039b4  movzx eax, byte ptr gs:[ebp + 0x1ae]
    X86_AT(c, 0x39b4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1AEu)));
    // 0039bc  mov eax, dword ptr cs:[eax*4 + 0x62ec]
    X86_AT(c, 0x39bcu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x62ECu)));
    // 0039c4  mov dword ptr gs:[ebp + 0x310], eax
    X86_AT(c, 0x39c4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)), c.r[0]);
    // 0039cb  and byte ptr gs:[ebp + 0x220], 0xf
    X86_AT(c, 0x39cbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFu, 1)); }
    // 0039d3  ret 
    X86_AT(c, 0x39d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x30aeu, "ran off the end of a function");
}
void f_000030d4(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0030d4  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x30d4u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 0030de  je 0x316d
    X86_AT(c, 0x30deu);
    if (x86_cc(c, 4)) { goto L_316d; }
    X86_TICK(c, 27);
    // 0030e4  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x30e4u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 0030e5  mov dword ptr gs:[ebp + 0x1c4], eax
    X86_AT(c, 0x30e5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[0]);
    // 0030ec  mov dword ptr gs:[ebp + 0x404], esi
    X86_AT(c, 0x30ecu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u)), c.r[6]);
    // 0030f3  mov word ptr gs:[ebp + 0x408], ds
    X86_AT(c, 0x30f3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), (uint32_t)c.sreg[3]);
    // 0030fa  mov byte ptr gs:[ebp + 0x400], 1
    X86_AT(c, 0x30fau);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)), 0x1u);
    // 003102  cmp word ptr [esi], 0
    X86_AT(c, 0x3102u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[6]))), 0x0u, 0, 2);
    // 003106  je 0x316d
    X86_AT(c, 0x3106u);
    if (x86_cc(c, 4)) { goto L_316d; }
    X86_TICK(c, 43);
    // 003108  mov fs, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0x3108u);
    x86_load_seg(c, 4, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))) & 0xFFFFu);
    // 00310f  mov esi, dword ptr gs:[ebp + 0x14]
    X86_AT(c, 0x310fu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)));
    // 003113  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x3113u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 003117  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x3117u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 00311e  mov eax, ss
    X86_AT(c, 0x311eu);
    c.r[0] = (uint32_t)c.sreg[2];
    // 003120  mov es, eax
    X86_AT(c, 0x3120u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 003122  sub esp, ecx
    X86_AT(c, 0x3122u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 003124  mov edi, esp
    X86_AT(c, 0x3124u);
    c.r[7] = c.r[4];
    // 003126  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x3126u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 00312a  shr ecx, 2
    X86_AT(c, 0x312au);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00312d  sub eax, eax
    X86_AT(c, 0x312du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00312f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x312fu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 003131  call 0x36bc
    X86_AT(c, 0x3131u);
    push32(c, 0x3136u); f_000036bc(c); X86_RET(c, 0x3136u);
    X86_TICK(c, 7);
    // 003136  call 0x6120
    X86_AT(c, 0x3136u);
    push32(c, 0x313bu); f_00006120(c); X86_RET(c, 0x313bu);
    X86_TICK(c, 25);
    // 00313b  mov eax, dword ptr cs:[esi*4 + 0x5298]
    X86_AT(c, 0x313bu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6] * 4 + 0x5298u)));
    // 003143  mov dword ptr gs:[ebp + 0x41c], eax
    X86_AT(c, 0x3143u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), c.r[0]);
    // 00314a  mov eax, dword ptr cs:[esi*4 + 0x5490]
    X86_AT(c, 0x314au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6] * 4 + 0x5490u)));
    // 003152  mov dword ptr gs:[ebp + 0x420], eax
    X86_AT(c, 0x3152u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x420u)), c.r[0]);
    // 003159  mov eax, dword ptr cs:[esi*4 + 0x5684]
    X86_AT(c, 0x3159u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6] * 4 + 0x5684u)));
    // 003161  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0x3161u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 003168  call 0x4c2c
    X86_AT(c, 0x3168u);
    push32(c, 0x316du); f_00004c2c(c); X86_RET(c, 0x316du);
L_316d:
    X86_TICK(c, 16);
    // 00316d  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x316du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003174  ret 
    X86_AT(c, 0x3174u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x30d4u, "ran off the end of a function");
}
void f_00003178(X86Cpu& c) {
    goto L_3178;
L_3113:
    X86_TICK(c, 35);
    // 003113  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x3113u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 003117  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x3117u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 00311e  mov eax, ss
    X86_AT(c, 0x311eu);
    c.r[0] = (uint32_t)c.sreg[2];
    // 003120  mov es, eax
    X86_AT(c, 0x3120u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 003122  sub esp, ecx
    X86_AT(c, 0x3122u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 003124  mov edi, esp
    X86_AT(c, 0x3124u);
    c.r[7] = c.r[4];
    // 003126  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x3126u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 00312a  shr ecx, 2
    X86_AT(c, 0x312au);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00312d  sub eax, eax
    X86_AT(c, 0x312du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00312f  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x312fu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 003131  call 0x36bc
    X86_AT(c, 0x3131u);
    push32(c, 0x3136u); f_000036bc(c); X86_RET(c, 0x3136u);
    X86_TICK(c, 7);
    // 003136  call 0x6120
    X86_AT(c, 0x3136u);
    push32(c, 0x313bu); f_00006120(c); X86_RET(c, 0x313bu);
    X86_TICK(c, 25);
    // 00313b  mov eax, dword ptr cs:[esi*4 + 0x5298]
    X86_AT(c, 0x313bu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6] * 4 + 0x5298u)));
    // 003143  mov dword ptr gs:[ebp + 0x41c], eax
    X86_AT(c, 0x3143u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), c.r[0]);
    // 00314a  mov eax, dword ptr cs:[esi*4 + 0x5490]
    X86_AT(c, 0x314au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6] * 4 + 0x5490u)));
    // 003152  mov dword ptr gs:[ebp + 0x420], eax
    X86_AT(c, 0x3152u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x420u)), c.r[0]);
    // 003159  mov eax, dword ptr cs:[esi*4 + 0x5684]
    X86_AT(c, 0x3159u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6] * 4 + 0x5684u)));
    // 003161  mov dword ptr gs:[ebp + 0x424], eax
    X86_AT(c, 0x3161u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x424u)), c.r[0]);
    // 003168  call 0x4c2c
    X86_AT(c, 0x3168u);
    push32(c, 0x316du); f_00004c2c(c); X86_RET(c, 0x316du);
    X86_TICK(c, 16);
    // 00316d  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x316du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003174  ret 
    X86_AT(c, 0x3174u);
    c.eip = pop32(c); return;
L_3178:
    X86_TICK(c, 12);
    // 003178  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x3178u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 003182  je 0x31b1
    X86_AT(c, 0x3182u);
    if (x86_cc(c, 4)) { goto L_31b1; }
    X86_TICK(c, 16);
    // 003184  mov ebx, dword ptr [esi]
    X86_AT(c, 0x3184u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 003186  mov dword ptr gs:[ebp + 0x1c4], ebx
    X86_AT(c, 0x3186u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[3]);
    // 00318d  shld edx, ebx, 0x10
    X86_AT(c, 0x318du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 003191  call 0xbae0
    X86_AT(c, 0x3191u);
    push32(c, 0x3196u); f_0000bae0(c); X86_RET(c, 0x3196u);
    X86_TICK(c, 17);
    // 003196  mov dword ptr gs:[ebp + 0x40c], eax
    X86_AT(c, 0x3196u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Cu)), c.r[0]);
    // 00319d  mov byte ptr gs:[ebp + 0x400], 2
    X86_AT(c, 0x319du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)), 0x2u);
    // 0031a5  mov esi, dword ptr gs:[ebp + 0x14]
    X86_AT(c, 0x31a5u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)));
    // 0031a9  add esi, 4
    X86_AT(c, 0x31a9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0031ac  jmp 0x3113
    X86_AT(c, 0x31acu);
    X86_POLL(c, 0x3113u); goto L_3113;
L_31b1:
    X86_TICK(c, 10);
    // 0031b1  ret 
    X86_AT(c, 0x31b1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3178u, "ran off the end of a function");
}
void f_000031b4(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0031b4  cmp al, 1
    X86_AT(c, 0x31b4u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 0031b6  ja 0x31d9
    X86_AT(c, 0x31b6u);
    if (x86_cc(c, 7)) { goto L_31d9; }
    X86_TICK(c, 12);
    // 0031b8  push eax
    X86_AT(c, 0x31b8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0031b9  xchg bx, dx
    X86_AT(c, 0x31b9u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[2] & 0xFFFFu)); s16(c, 2, t); }
    // 0031bc  call 0xbae0
    X86_AT(c, 0x31bcu);
    push32(c, 0x31c1u); f_0000bae0(c); X86_RET(c, 0x31c1u);
    X86_TICK(c, 15);
    // 0031c1  mov edx, eax
    X86_AT(c, 0x31c1u);
    c.r[2] = c.r[0];
    // 0031c3  pop eax
    X86_AT(c, 0x31c3u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0031c4  mov dword ptr [esp + 0x18], edx
    X86_AT(c, 0x31c4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4] + 0x18u)), c.r[2]);
    // 0031c8  test al, al
    X86_AT(c, 0x31c8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0031ca  jne 0x31cd
    X86_AT(c, 0x31cau);
    if (x86_cc(c, 5)) { goto L_31cd; }
    X86_TICK(c, 10);
    // 0031cc  ret 
    X86_AT(c, 0x31ccu);
    c.eip = pop32(c); return;
L_31cd:
    X86_TICK(c, 11);
    // 0031cd  mov ebx, dword ptr gs:[ebp + 0x14]
    X86_AT(c, 0x31cdu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)));
    // 0031d1  jmp dword ptr cs:[ebx*4 + 0x31e0]
    X86_AT(c, 0x31d1u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0x31E0u)));
      switch (t) {
      case 0x31f0u: goto L_31f0;
      case 0x3214u: goto L_3214;
      case 0x323cu: goto L_323c;
      case 0x3264u: goto L_3264;
      default: x86_jump(c, t); return; } }
L_31d9:
    X86_TICK(c, 12);
    // 0031d9  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x31d9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0031de  ret 
    X86_AT(c, 0x31deu);
    c.eip = pop32(c); return;
L_31f0:
    X86_TICK(c, 37);
    // 0031f0  mov eax, edx
    X86_AT(c, 0x31f0u);
    c.r[0] = c.r[2];
    // 0031f2  sub edx, edx
    X86_AT(c, 0x31f2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0031f4  shrd edx, eax, 1
    X86_AT(c, 0x31f4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], 0x1u, 4, w); if (w) c.r[2] = r; }
    // 0031f8  shr edx, 7
    X86_AT(c, 0x31f8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[2] = r; }
    // 0031fb  shrd edx, eax, 1
    X86_AT(c, 0x31fbu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], 0x1u, 4, w); if (w) c.r[2] = r; }
    // 0031ff  shr edx, 7
    X86_AT(c, 0x31ffu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[2] = r; }
    // 003202  shrd edx, eax, 1
    X86_AT(c, 0x3202u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], 0x1u, 4, w); if (w) c.r[2] = r; }
    // 003206  shr edx, 7
    X86_AT(c, 0x3206u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[2] = r; }
    // 003209  shrd edx, eax, 1
    X86_AT(c, 0x3209u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], 0x1u, 4, w); if (w) c.r[2] = r; }
    // 00320d  mov dword ptr [esp + 0x18], edx
    X86_AT(c, 0x320du);
    wr32((c.sbase[2] + (uint32_t)(c.r[4] + 0x18u)), c.r[2]);
    // 003211  ret 
    X86_AT(c, 0x3211u);
    c.eip = pop32(c); return;
L_3214:
    X86_TICK(c, 46);
    // 003214  mov eax, edx
    X86_AT(c, 0x3214u);
    c.r[0] = c.r[2];
    // 003216  sub edx, edx
    X86_AT(c, 0x3216u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 003218  shrd edx, eax, 1
    X86_AT(c, 0x3218u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], 0x1u, 4, w); if (w) c.r[2] = r; }
    // 00321c  shr eax, 1
    X86_AT(c, 0x321cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00321e  shr edx, 7
    X86_AT(c, 0x321eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[2] = r; }
    // 003221  shrd edx, eax, 1
    X86_AT(c, 0x3221u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], 0x1u, 4, w); if (w) c.r[2] = r; }
    // 003225  shr eax, 1
    X86_AT(c, 0x3225u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 003227  shr edx, 7
    X86_AT(c, 0x3227u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[2] = r; }
    // 00322a  shrd edx, eax, 1
    X86_AT(c, 0x322au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], 0x1u, 4, w); if (w) c.r[2] = r; }
    // 00322e  shr eax, 1
    X86_AT(c, 0x322eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 003230  shr edx, 7
    X86_AT(c, 0x3230u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[2] = r; }
    // 003233  shrd edx, eax, 1
    X86_AT(c, 0x3233u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], 0x1u, 4, w); if (w) c.r[2] = r; }
    // 003237  mov dword ptr [esp + 0x18], edx
    X86_AT(c, 0x3237u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4] + 0x18u)), c.r[2]);
    // 00323b  ret 
    X86_AT(c, 0x323bu);
    c.eip = pop32(c); return;
L_323c:
    X86_TICK(c, 43);
    // 00323c  mov eax, edx
    X86_AT(c, 0x323cu);
    c.r[0] = c.r[2];
    // 00323e  sub edx, edx
    X86_AT(c, 0x323eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 003240  shrd edx, eax, 2
    X86_AT(c, 0x3240u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], 0x2u, 4, w); if (w) c.r[2] = r; }
    // 003244  shr eax, 2
    X86_AT(c, 0x3244u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 003247  shr edx, 6
    X86_AT(c, 0x3247u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x6u, 4, w); if (w) c.r[2] = r; }
    // 00324a  shrd edx, eax, 3
    X86_AT(c, 0x324au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], 0x3u, 4, w); if (w) c.r[2] = r; }
    // 00324e  shr eax, 3
    X86_AT(c, 0x324eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 003251  shr edx, 5
    X86_AT(c, 0x3251u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 003254  shrd edx, eax, 3
    X86_AT(c, 0x3254u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], 0x3u, 4, w); if (w) c.r[2] = r; }
    // 003258  shr eax, 3
    X86_AT(c, 0x3258u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00325b  shr edx, 0xd
    X86_AT(c, 0x325bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0xDu, 4, w); if (w) c.r[2] = r; }
    // 00325e  mov dword ptr [esp + 0x18], edx
    X86_AT(c, 0x325eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[4] + 0x18u)), c.r[2]);
    // 003262  ret 
    X86_AT(c, 0x3262u);
    c.eip = pop32(c); return;
L_3264:
    X86_TICK(c, 46);
    // 003264  mov eax, edx
    X86_AT(c, 0x3264u);
    c.r[0] = c.r[2];
    // 003266  sub edx, edx
    X86_AT(c, 0x3266u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 003268  shrd edx, eax, 5
    X86_AT(c, 0x3268u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], 0x5u, 4, w); if (w) c.r[2] = r; }
    // 00326c  shr eax, 5
    X86_AT(c, 0x326cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 00326f  shr edx, 3
    X86_AT(c, 0x326fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 003272  shrd edx, eax, 5
    X86_AT(c, 0x3272u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], 0x5u, 4, w); if (w) c.r[2] = r; }
    // 003276  shr eax, 5
    X86_AT(c, 0x3276u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 003279  shr edx, 3
    X86_AT(c, 0x3279u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 00327c  shrd edx, eax, 5
    X86_AT(c, 0x327cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], 0x5u, 4, w); if (w) c.r[2] = r; }
    // 003280  shr eax, 5
    X86_AT(c, 0x3280u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 003283  shr edx, 7
    X86_AT(c, 0x3283u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[2] = r; }
    // 003286  shrd edx, eax, 1
    X86_AT(c, 0x3286u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], 0x1u, 4, w); if (w) c.r[2] = r; }
    // 00328a  mov dword ptr [esp + 0x18], edx
    X86_AT(c, 0x328au);
    wr32((c.sbase[2] + (uint32_t)(c.r[4] + 0x18u)), c.r[2]);
    // 00328e  ret 
    X86_AT(c, 0x328eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x31b4u, "ran off the end of a function");
}
void f_00003290(X86Cpu& c) {
    X86_TICK(c, 32);
    // 003290  mov eax, dword ptr [esi]
    X86_AT(c, 0x3290u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 003292  mov dword ptr gs:[ebp + 0x400], eax
    X86_AT(c, 0x3292u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)), c.r[0]);
    // 003299  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0x3299u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 00329c  mov dword ptr gs:[ebp + 0x404], eax
    X86_AT(c, 0x329cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u)), c.r[0]);
    // 0032a3  mov eax, dword ptr [esi + 8]
    X86_AT(c, 0x32a3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 0032a6  mov dword ptr gs:[ebp + 0x408], eax
    X86_AT(c, 0x32a6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u)), c.r[0]);
    // 0032ad  mov dword ptr gs:[ebp + 0x32c], 0xe150
    X86_AT(c, 0x32adu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0xE150u);
    // 0032b8  test word ptr gs:[ebp + 0x108], 0xe
    X86_AT(c, 0x32b8u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xEu, 2);
    // 0032c2  je 0x3331
    X86_AT(c, 0x32c2u);
    if (x86_cc(c, 4)) { goto L_3331; }
    X86_TICK(c, 7);
    // 0032c4  call 0x28d8
    X86_AT(c, 0x32c4u);
    push32(c, 0x32c9u); f_000028d8(c); X86_RET(c, 0x32c9u);
    X86_TICK(c, 7);
    // 0032c9  test al, al
    X86_AT(c, 0x32c9u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0032cb  je 0x32eb
    X86_AT(c, 0x32cbu);
    if (x86_cc(c, 4)) { goto L_32eb; }
    X86_TICK(c, 28);
    // 0032cd  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x32cdu);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 0032d1  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x32d1u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 0032d8  mov eax, ss
    X86_AT(c, 0x32d8u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 0032da  mov es, eax
    X86_AT(c, 0x32dau);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0032dc  sub esp, ecx
    X86_AT(c, 0x32dcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0032de  mov edi, esp
    X86_AT(c, 0x32deu);
    c.r[7] = c.r[4];
    // 0032e0  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x32e0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 0032e4  shr ecx, 2
    X86_AT(c, 0x32e4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0032e7  sub eax, eax
    X86_AT(c, 0x32e7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0032e9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x32e9u);
    x86_string(c, 2, 4, 243, 4, 3);
L_32eb:
    X86_TICK(c, 7);
    // 0032eb  call 0x36dc
    X86_AT(c, 0x32ebu);
    push32(c, 0x32f0u); f_000036dc(c); X86_RET(c, 0x32f0u);
    X86_TICK(c, 7);
    // 0032f0  call 0x6120
    X86_AT(c, 0x32f0u);
    push32(c, 0x32f5u); f_00006120(c); X86_RET(c, 0x32f5u);
    X86_TICK(c, 9);
    // 0032f5  mov byte ptr gs:[ebp + 0x465], 0
    X86_AT(c, 0x32f5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x465u)), 0x0u);
    // 0032fd  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x32fdu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x3304u); x86_call(c, t); X86_RET(c, 0x3304u); }
L_3304:
    X86_TICK(c, 12);
    // 003304  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x3304u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 00330e  je 0x3329
    X86_AT(c, 0x330eu);
    if (x86_cc(c, 4)) { goto L_3329; }
    X86_TICK(c, 7);
    // 003310  call 0x36b4
    X86_AT(c, 0x3310u);
    push32(c, 0x3315u); f_000036b4(c); X86_RET(c, 0x3315u);
    X86_TICK(c, 7);
    // 003315  call 0x6120
    X86_AT(c, 0x3315u);
    push32(c, 0x331au); f_00006120(c); X86_RET(c, 0x331au);
    X86_TICK(c, 9);
    // 00331a  mov byte ptr gs:[ebp + 0x465], 1
    X86_AT(c, 0x331au);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x465u)), 0x1u);
    // 003322  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x3322u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x3329u); x86_call(c, t); X86_RET(c, 0x3329u); }
L_3329:
    X86_TICK(c, 16);
    // 003329  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x3329u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003330  ret 
    X86_AT(c, 0x3330u);
    c.eip = pop32(c); return;
L_3331:
    X86_TICK(c, 9);
    // 003331  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x3331u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 003339  jmp 0x3304
    X86_AT(c, 0x3339u);
    X86_POLL(c, 0x3304u); goto L_3304;
    x86_fault(c, 0x3290u, "ran off the end of a function");
}
void f_0000333c(X86Cpu& c) {
    goto L_333c;
L_32b8:
    X86_TICK(c, 12);
    // 0032b8  test word ptr gs:[ebp + 0x108], 0xe
    X86_AT(c, 0x32b8u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xEu, 2);
    // 0032c2  je 0x3331
    X86_AT(c, 0x32c2u);
    if (x86_cc(c, 4)) { goto L_3331; }
    X86_TICK(c, 7);
    // 0032c4  call 0x28d8
    X86_AT(c, 0x32c4u);
    push32(c, 0x32c9u); f_000028d8(c); X86_RET(c, 0x32c9u);
    X86_TICK(c, 7);
    // 0032c9  test al, al
    X86_AT(c, 0x32c9u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0032cb  je 0x32eb
    X86_AT(c, 0x32cbu);
    if (x86_cc(c, 4)) { goto L_32eb; }
    X86_TICK(c, 28);
    // 0032cd  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x32cdu);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 0032d1  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x32d1u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 0032d8  mov eax, ss
    X86_AT(c, 0x32d8u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 0032da  mov es, eax
    X86_AT(c, 0x32dau);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0032dc  sub esp, ecx
    X86_AT(c, 0x32dcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0032de  mov edi, esp
    X86_AT(c, 0x32deu);
    c.r[7] = c.r[4];
    // 0032e0  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x32e0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 0032e4  shr ecx, 2
    X86_AT(c, 0x32e4u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0032e7  sub eax, eax
    X86_AT(c, 0x32e7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0032e9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x32e9u);
    x86_string(c, 2, 4, 243, 4, 3);
L_32eb:
    X86_TICK(c, 7);
    // 0032eb  call 0x36dc
    X86_AT(c, 0x32ebu);
    push32(c, 0x32f0u); f_000036dc(c); X86_RET(c, 0x32f0u);
    X86_TICK(c, 7);
    // 0032f0  call 0x6120
    X86_AT(c, 0x32f0u);
    push32(c, 0x32f5u); f_00006120(c); X86_RET(c, 0x32f5u);
    X86_TICK(c, 9);
    // 0032f5  mov byte ptr gs:[ebp + 0x465], 0
    X86_AT(c, 0x32f5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x465u)), 0x0u);
    // 0032fd  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x32fdu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x3304u); x86_call(c, t); X86_RET(c, 0x3304u); }
L_3304:
    X86_TICK(c, 12);
    // 003304  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x3304u);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 00330e  je 0x3329
    X86_AT(c, 0x330eu);
    if (x86_cc(c, 4)) { goto L_3329; }
    X86_TICK(c, 7);
    // 003310  call 0x36b4
    X86_AT(c, 0x3310u);
    push32(c, 0x3315u); f_000036b4(c); X86_RET(c, 0x3315u);
    X86_TICK(c, 7);
    // 003315  call 0x6120
    X86_AT(c, 0x3315u);
    push32(c, 0x331au); f_00006120(c); X86_RET(c, 0x331au);
    X86_TICK(c, 9);
    // 00331a  mov byte ptr gs:[ebp + 0x465], 1
    X86_AT(c, 0x331au);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x465u)), 0x1u);
    // 003322  call dword ptr gs:[ebp + 0x32c]
    X86_AT(c, 0x3322u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu))); push32(c, 0x3329u); x86_call(c, t); X86_RET(c, 0x3329u); }
L_3329:
    X86_TICK(c, 16);
    // 003329  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x3329u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 003330  ret 
    X86_AT(c, 0x3330u);
    c.eip = pop32(c); return;
L_3331:
    X86_TICK(c, 9);
    // 003331  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x3331u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 003339  jmp 0x3304
    X86_AT(c, 0x3339u);
    X86_POLL(c, 0x3304u); goto L_3304;
L_333c:
    X86_TICK(c, 27);
    // 00333c  mov eax, dword ptr [esi]
    X86_AT(c, 0x333cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00333e  mov dword ptr gs:[ebp + 0x468], eax
    X86_AT(c, 0x333eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u)), c.r[0]);
    // 003345  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0x3345u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 003348  mov dword ptr gs:[ebp + 0x4d0], eax
    X86_AT(c, 0x3348u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4D0u)), c.r[0]);
    // 00334f  mov eax, dword ptr [esi + 8]
    X86_AT(c, 0x334fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 003352  mov dword ptr gs:[ebp + 0x4d4], eax
    X86_AT(c, 0x3352u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4D4u)), c.r[0]);
    // 003359  mov dword ptr gs:[ebp + 0x32c], 0xe6e0
    X86_AT(c, 0x3359u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x32Cu)), 0xE6E0u);
    // 003364  jmp 0x32b8
    X86_AT(c, 0x3364u);
    X86_POLL(c, 0x32b8u); goto L_32b8;
    x86_fault(c, 0x333cu, "ran off the end of a function");
}
void f_0000336c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00336c  test word ptr gs:[ebp + 0x108], 0xe
    X86_AT(c, 0x336cu);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xEu, 2);
    // 003376  je 0x33cd
    X86_AT(c, 0x3376u);
    if (x86_cc(c, 4)) { goto L_33cd; }
    X86_TICK(c, 23);
    // 003378  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x3378u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 003379  mov dword ptr gs:[ebp + 0x344], eax
    X86_AT(c, 0x3379u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), c.r[0]);
    // 003380  lodsw ax, word ptr [esi]
    X86_AT(c, 0x3380u);
    x86_string(c, 3, 2, 0, 4, 3);
    // 003382  test ax, ax
    X86_AT(c, 0x3382u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 003385  je 0x33cd
    X86_AT(c, 0x3385u);
    if (x86_cc(c, 4)) { goto L_33cd; }
    X86_TICK(c, 15);
    // 003387  mov word ptr gs:[ebp + 0x348], ax
    X86_AT(c, 0x3387u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x348u)), (c.r[0] & 0xFFFFu));
    // 00338f  mov dword ptr gs:[ebp + 0x33c], esi
    X86_AT(c, 0x338fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x33Cu)), c.r[6]);
    // 003396  mov word ptr gs:[ebp + 0x340], ds
    X86_AT(c, 0x3396u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x340u)), (uint32_t)c.sreg[3]);
    // 00339d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x339du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 0033a5  call 0x3568
    X86_AT(c, 0x33a5u);
    push32(c, 0x33aau); f_00003568(c); X86_RET(c, 0x33aau);
    X86_TICK(c, 11);
    // 0033aa  mov ecx, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33aau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)));
    // 0033b1  test ecx, ecx
    X86_AT(c, 0x33b1u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0033b3  je 0x33c8
    X86_AT(c, 0x33b3u);
    if (x86_cc(c, 4)) { goto L_33c8; }
    X86_TICK(c, 22);
    // 0033b5  mov eax, ss
    X86_AT(c, 0x33b5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 0033b7  mov es, eax
    X86_AT(c, 0x33b7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0033b9  sub esp, ecx
    X86_AT(c, 0x33b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0033bb  mov edi, esp
    X86_AT(c, 0x33bbu);
    c.r[7] = c.r[4];
    // 0033bd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x33bdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 0033c1  shr ecx, 2
    X86_AT(c, 0x33c1u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0033c4  sub eax, eax
    X86_AT(c, 0x33c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0033c6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x33c6u);
    x86_string(c, 2, 4, 243, 4, 3);
L_33c8:
    X86_TICK(c, 7);
    // 0033c8  call 0xf190
    X86_AT(c, 0x33c8u);
    push32(c, 0x33cdu); f_0000f190(c); X86_RET(c, 0x33cdu);
L_33cd:
    X86_TICK(c, 16);
    // 0033cd  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 0033d4  ret 
    X86_AT(c, 0x33d4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x336cu, "ran off the end of a function");
}
void f_00003376(X86Cpu& c) {
    X86_TICK(c, 5);
    // 003376  je 0x33cd
    X86_AT(c, 0x3376u);
    if (x86_cc(c, 4)) { goto L_33cd; }
    X86_TICK(c, 23);
    // 003378  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x3378u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 003379  mov dword ptr gs:[ebp + 0x344], eax
    X86_AT(c, 0x3379u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), c.r[0]);
    // 003380  lodsw ax, word ptr [esi]
    X86_AT(c, 0x3380u);
    x86_string(c, 3, 2, 0, 4, 3);
    // 003382  test ax, ax
    X86_AT(c, 0x3382u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 003385  je 0x33cd
    X86_AT(c, 0x3385u);
    if (x86_cc(c, 4)) { goto L_33cd; }
    X86_TICK(c, 15);
    // 003387  mov word ptr gs:[ebp + 0x348], ax
    X86_AT(c, 0x3387u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x348u)), (c.r[0] & 0xFFFFu));
    // 00338f  mov dword ptr gs:[ebp + 0x33c], esi
    X86_AT(c, 0x338fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x33Cu)), c.r[6]);
    // 003396  mov word ptr gs:[ebp + 0x340], ds
    X86_AT(c, 0x3396u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x340u)), (uint32_t)c.sreg[3]);
    // 00339d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x339du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 0033a5  call 0x3568
    X86_AT(c, 0x33a5u);
    push32(c, 0x33aau); f_00003568(c); X86_RET(c, 0x33aau);
    X86_TICK(c, 11);
    // 0033aa  mov ecx, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33aau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)));
    // 0033b1  test ecx, ecx
    X86_AT(c, 0x33b1u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0033b3  je 0x33c8
    X86_AT(c, 0x33b3u);
    if (x86_cc(c, 4)) { goto L_33c8; }
    X86_TICK(c, 22);
    // 0033b5  mov eax, ss
    X86_AT(c, 0x33b5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 0033b7  mov es, eax
    X86_AT(c, 0x33b7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0033b9  sub esp, ecx
    X86_AT(c, 0x33b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0033bb  mov edi, esp
    X86_AT(c, 0x33bbu);
    c.r[7] = c.r[4];
    // 0033bd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x33bdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 0033c1  shr ecx, 2
    X86_AT(c, 0x33c1u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0033c4  sub eax, eax
    X86_AT(c, 0x33c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0033c6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x33c6u);
    x86_string(c, 2, 4, 243, 4, 3);
L_33c8:
    X86_TICK(c, 7);
    // 0033c8  call 0xf190
    X86_AT(c, 0x33c8u);
    push32(c, 0x33cdu); f_0000f190(c); X86_RET(c, 0x33cdu);
L_33cd:
    X86_TICK(c, 16);
    // 0033cd  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 0033d4  ret 
    X86_AT(c, 0x33d4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3376u, "ran off the end of a function");
}
void f_00003378(X86Cpu& c) {
    X86_TICK(c, 23);
    // 003378  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x3378u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 003379  mov dword ptr gs:[ebp + 0x344], eax
    X86_AT(c, 0x3379u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), c.r[0]);
    // 003380  lodsw ax, word ptr [esi]
    X86_AT(c, 0x3380u);
    x86_string(c, 3, 2, 0, 4, 3);
    // 003382  test ax, ax
    X86_AT(c, 0x3382u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 003385  je 0x33cd
    X86_AT(c, 0x3385u);
    if (x86_cc(c, 4)) { goto L_33cd; }
    X86_TICK(c, 15);
    // 003387  mov word ptr gs:[ebp + 0x348], ax
    X86_AT(c, 0x3387u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x348u)), (c.r[0] & 0xFFFFu));
    // 00338f  mov dword ptr gs:[ebp + 0x33c], esi
    X86_AT(c, 0x338fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x33Cu)), c.r[6]);
    // 003396  mov word ptr gs:[ebp + 0x340], ds
    X86_AT(c, 0x3396u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x340u)), (uint32_t)c.sreg[3]);
    // 00339d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x339du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 0033a5  call 0x3568
    X86_AT(c, 0x33a5u);
    push32(c, 0x33aau); f_00003568(c); X86_RET(c, 0x33aau);
    X86_TICK(c, 11);
    // 0033aa  mov ecx, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33aau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)));
    // 0033b1  test ecx, ecx
    X86_AT(c, 0x33b1u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0033b3  je 0x33c8
    X86_AT(c, 0x33b3u);
    if (x86_cc(c, 4)) { goto L_33c8; }
    X86_TICK(c, 22);
    // 0033b5  mov eax, ss
    X86_AT(c, 0x33b5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 0033b7  mov es, eax
    X86_AT(c, 0x33b7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0033b9  sub esp, ecx
    X86_AT(c, 0x33b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0033bb  mov edi, esp
    X86_AT(c, 0x33bbu);
    c.r[7] = c.r[4];
    // 0033bd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x33bdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 0033c1  shr ecx, 2
    X86_AT(c, 0x33c1u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0033c4  sub eax, eax
    X86_AT(c, 0x33c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0033c6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x33c6u);
    x86_string(c, 2, 4, 243, 4, 3);
L_33c8:
    X86_TICK(c, 7);
    // 0033c8  call 0xf190
    X86_AT(c, 0x33c8u);
    push32(c, 0x33cdu); f_0000f190(c); X86_RET(c, 0x33cdu);
L_33cd:
    X86_TICK(c, 16);
    // 0033cd  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 0033d4  ret 
    X86_AT(c, 0x33d4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3378u, "ran off the end of a function");
}
void f_00003379(X86Cpu& c) {
    X86_TICK(c, 16);
    // 003379  mov dword ptr gs:[ebp + 0x344], eax
    X86_AT(c, 0x3379u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), c.r[0]);
    // 003380  lodsw ax, word ptr [esi]
    X86_AT(c, 0x3380u);
    x86_string(c, 3, 2, 0, 4, 3);
    // 003382  test ax, ax
    X86_AT(c, 0x3382u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 003385  je 0x33cd
    X86_AT(c, 0x3385u);
    if (x86_cc(c, 4)) { goto L_33cd; }
    X86_TICK(c, 15);
    // 003387  mov word ptr gs:[ebp + 0x348], ax
    X86_AT(c, 0x3387u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x348u)), (c.r[0] & 0xFFFFu));
    // 00338f  mov dword ptr gs:[ebp + 0x33c], esi
    X86_AT(c, 0x338fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x33Cu)), c.r[6]);
    // 003396  mov word ptr gs:[ebp + 0x340], ds
    X86_AT(c, 0x3396u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x340u)), (uint32_t)c.sreg[3]);
    // 00339d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x339du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 0033a5  call 0x3568
    X86_AT(c, 0x33a5u);
    push32(c, 0x33aau); f_00003568(c); X86_RET(c, 0x33aau);
    X86_TICK(c, 11);
    // 0033aa  mov ecx, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33aau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)));
    // 0033b1  test ecx, ecx
    X86_AT(c, 0x33b1u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0033b3  je 0x33c8
    X86_AT(c, 0x33b3u);
    if (x86_cc(c, 4)) { goto L_33c8; }
    X86_TICK(c, 22);
    // 0033b5  mov eax, ss
    X86_AT(c, 0x33b5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 0033b7  mov es, eax
    X86_AT(c, 0x33b7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0033b9  sub esp, ecx
    X86_AT(c, 0x33b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0033bb  mov edi, esp
    X86_AT(c, 0x33bbu);
    c.r[7] = c.r[4];
    // 0033bd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x33bdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 0033c1  shr ecx, 2
    X86_AT(c, 0x33c1u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0033c4  sub eax, eax
    X86_AT(c, 0x33c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0033c6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x33c6u);
    x86_string(c, 2, 4, 243, 4, 3);
L_33c8:
    X86_TICK(c, 7);
    // 0033c8  call 0xf190
    X86_AT(c, 0x33c8u);
    push32(c, 0x33cdu); f_0000f190(c); X86_RET(c, 0x33cdu);
L_33cd:
    X86_TICK(c, 16);
    // 0033cd  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 0033d4  ret 
    X86_AT(c, 0x33d4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3379u, "ran off the end of a function");
}
void f_00003380(X86Cpu& c) {
    X86_TICK(c, 14);
    // 003380  lodsw ax, word ptr [esi]
    X86_AT(c, 0x3380u);
    x86_string(c, 3, 2, 0, 4, 3);
    // 003382  test ax, ax
    X86_AT(c, 0x3382u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 003385  je 0x33cd
    X86_AT(c, 0x3385u);
    if (x86_cc(c, 4)) { goto L_33cd; }
    X86_TICK(c, 15);
    // 003387  mov word ptr gs:[ebp + 0x348], ax
    X86_AT(c, 0x3387u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x348u)), (c.r[0] & 0xFFFFu));
    // 00338f  mov dword ptr gs:[ebp + 0x33c], esi
    X86_AT(c, 0x338fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x33Cu)), c.r[6]);
    // 003396  mov word ptr gs:[ebp + 0x340], ds
    X86_AT(c, 0x3396u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x340u)), (uint32_t)c.sreg[3]);
    // 00339d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x339du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 0033a5  call 0x3568
    X86_AT(c, 0x33a5u);
    push32(c, 0x33aau); f_00003568(c); X86_RET(c, 0x33aau);
    X86_TICK(c, 11);
    // 0033aa  mov ecx, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33aau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)));
    // 0033b1  test ecx, ecx
    X86_AT(c, 0x33b1u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0033b3  je 0x33c8
    X86_AT(c, 0x33b3u);
    if (x86_cc(c, 4)) { goto L_33c8; }
    X86_TICK(c, 22);
    // 0033b5  mov eax, ss
    X86_AT(c, 0x33b5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 0033b7  mov es, eax
    X86_AT(c, 0x33b7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0033b9  sub esp, ecx
    X86_AT(c, 0x33b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0033bb  mov edi, esp
    X86_AT(c, 0x33bbu);
    c.r[7] = c.r[4];
    // 0033bd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x33bdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 0033c1  shr ecx, 2
    X86_AT(c, 0x33c1u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0033c4  sub eax, eax
    X86_AT(c, 0x33c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0033c6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x33c6u);
    x86_string(c, 2, 4, 243, 4, 3);
L_33c8:
    X86_TICK(c, 7);
    // 0033c8  call 0xf190
    X86_AT(c, 0x33c8u);
    push32(c, 0x33cdu); f_0000f190(c); X86_RET(c, 0x33cdu);
L_33cd:
    X86_TICK(c, 16);
    // 0033cd  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 0033d4  ret 
    X86_AT(c, 0x33d4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3380u, "ran off the end of a function");
}
void f_00003382(X86Cpu& c) {
    X86_TICK(c, 7);
    // 003382  test ax, ax
    X86_AT(c, 0x3382u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 003385  je 0x33cd
    X86_AT(c, 0x3385u);
    if (x86_cc(c, 4)) { goto L_33cd; }
    X86_TICK(c, 15);
    // 003387  mov word ptr gs:[ebp + 0x348], ax
    X86_AT(c, 0x3387u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x348u)), (c.r[0] & 0xFFFFu));
    // 00338f  mov dword ptr gs:[ebp + 0x33c], esi
    X86_AT(c, 0x338fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x33Cu)), c.r[6]);
    // 003396  mov word ptr gs:[ebp + 0x340], ds
    X86_AT(c, 0x3396u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x340u)), (uint32_t)c.sreg[3]);
    // 00339d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x339du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 0033a5  call 0x3568
    X86_AT(c, 0x33a5u);
    push32(c, 0x33aau); f_00003568(c); X86_RET(c, 0x33aau);
    X86_TICK(c, 11);
    // 0033aa  mov ecx, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33aau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)));
    // 0033b1  test ecx, ecx
    X86_AT(c, 0x33b1u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0033b3  je 0x33c8
    X86_AT(c, 0x33b3u);
    if (x86_cc(c, 4)) { goto L_33c8; }
    X86_TICK(c, 22);
    // 0033b5  mov eax, ss
    X86_AT(c, 0x33b5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 0033b7  mov es, eax
    X86_AT(c, 0x33b7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0033b9  sub esp, ecx
    X86_AT(c, 0x33b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0033bb  mov edi, esp
    X86_AT(c, 0x33bbu);
    c.r[7] = c.r[4];
    // 0033bd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x33bdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 0033c1  shr ecx, 2
    X86_AT(c, 0x33c1u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0033c4  sub eax, eax
    X86_AT(c, 0x33c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0033c6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x33c6u);
    x86_string(c, 2, 4, 243, 4, 3);
L_33c8:
    X86_TICK(c, 7);
    // 0033c8  call 0xf190
    X86_AT(c, 0x33c8u);
    push32(c, 0x33cdu); f_0000f190(c); X86_RET(c, 0x33cdu);
L_33cd:
    X86_TICK(c, 16);
    // 0033cd  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 0033d4  ret 
    X86_AT(c, 0x33d4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3382u, "ran off the end of a function");
}
void f_00003385(X86Cpu& c) {
    X86_TICK(c, 5);
    // 003385  je 0x33cd
    X86_AT(c, 0x3385u);
    if (x86_cc(c, 4)) { goto L_33cd; }
    X86_TICK(c, 15);
    // 003387  mov word ptr gs:[ebp + 0x348], ax
    X86_AT(c, 0x3387u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x348u)), (c.r[0] & 0xFFFFu));
    // 00338f  mov dword ptr gs:[ebp + 0x33c], esi
    X86_AT(c, 0x338fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x33Cu)), c.r[6]);
    // 003396  mov word ptr gs:[ebp + 0x340], ds
    X86_AT(c, 0x3396u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x340u)), (uint32_t)c.sreg[3]);
    // 00339d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x339du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 0033a5  call 0x3568
    X86_AT(c, 0x33a5u);
    push32(c, 0x33aau); f_00003568(c); X86_RET(c, 0x33aau);
    X86_TICK(c, 11);
    // 0033aa  mov ecx, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33aau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)));
    // 0033b1  test ecx, ecx
    X86_AT(c, 0x33b1u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0033b3  je 0x33c8
    X86_AT(c, 0x33b3u);
    if (x86_cc(c, 4)) { goto L_33c8; }
    X86_TICK(c, 22);
    // 0033b5  mov eax, ss
    X86_AT(c, 0x33b5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 0033b7  mov es, eax
    X86_AT(c, 0x33b7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0033b9  sub esp, ecx
    X86_AT(c, 0x33b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0033bb  mov edi, esp
    X86_AT(c, 0x33bbu);
    c.r[7] = c.r[4];
    // 0033bd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x33bdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 0033c1  shr ecx, 2
    X86_AT(c, 0x33c1u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0033c4  sub eax, eax
    X86_AT(c, 0x33c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0033c6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x33c6u);
    x86_string(c, 2, 4, 243, 4, 3);
L_33c8:
    X86_TICK(c, 7);
    // 0033c8  call 0xf190
    X86_AT(c, 0x33c8u);
    push32(c, 0x33cdu); f_0000f190(c); X86_RET(c, 0x33cdu);
L_33cd:
    X86_TICK(c, 16);
    // 0033cd  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 0033d4  ret 
    X86_AT(c, 0x33d4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3385u, "ran off the end of a function");
}
void f_00003387(X86Cpu& c) {
    X86_TICK(c, 15);
    // 003387  mov word ptr gs:[ebp + 0x348], ax
    X86_AT(c, 0x3387u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x348u)), (c.r[0] & 0xFFFFu));
    // 00338f  mov dword ptr gs:[ebp + 0x33c], esi
    X86_AT(c, 0x338fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x33Cu)), c.r[6]);
    // 003396  mov word ptr gs:[ebp + 0x340], ds
    X86_AT(c, 0x3396u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x340u)), (uint32_t)c.sreg[3]);
    // 00339d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x339du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 0033a5  call 0x3568
    X86_AT(c, 0x33a5u);
    push32(c, 0x33aau); f_00003568(c); X86_RET(c, 0x33aau);
    X86_TICK(c, 11);
    // 0033aa  mov ecx, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33aau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)));
    // 0033b1  test ecx, ecx
    X86_AT(c, 0x33b1u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0033b3  je 0x33c8
    X86_AT(c, 0x33b3u);
    if (x86_cc(c, 4)) { goto L_33c8; }
    X86_TICK(c, 22);
    // 0033b5  mov eax, ss
    X86_AT(c, 0x33b5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 0033b7  mov es, eax
    X86_AT(c, 0x33b7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0033b9  sub esp, ecx
    X86_AT(c, 0x33b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0033bb  mov edi, esp
    X86_AT(c, 0x33bbu);
    c.r[7] = c.r[4];
    // 0033bd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x33bdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 0033c1  shr ecx, 2
    X86_AT(c, 0x33c1u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0033c4  sub eax, eax
    X86_AT(c, 0x33c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0033c6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x33c6u);
    x86_string(c, 2, 4, 243, 4, 3);
L_33c8:
    X86_TICK(c, 7);
    // 0033c8  call 0xf190
    X86_AT(c, 0x33c8u);
    push32(c, 0x33cdu); f_0000f190(c); X86_RET(c, 0x33cdu);
    X86_TICK(c, 16);
    // 0033cd  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 0033d4  ret 
    X86_AT(c, 0x33d4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3387u, "ran off the end of a function");
}
void f_0000338f(X86Cpu& c) {
    X86_TICK(c, 13);
    // 00338f  mov dword ptr gs:[ebp + 0x33c], esi
    X86_AT(c, 0x338fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x33Cu)), c.r[6]);
    // 003396  mov word ptr gs:[ebp + 0x340], ds
    X86_AT(c, 0x3396u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x340u)), (uint32_t)c.sreg[3]);
    // 00339d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x339du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 0033a5  call 0x3568
    X86_AT(c, 0x33a5u);
    push32(c, 0x33aau); f_00003568(c); X86_RET(c, 0x33aau);
    X86_TICK(c, 11);
    // 0033aa  mov ecx, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33aau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)));
    // 0033b1  test ecx, ecx
    X86_AT(c, 0x33b1u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0033b3  je 0x33c8
    X86_AT(c, 0x33b3u);
    if (x86_cc(c, 4)) { goto L_33c8; }
    X86_TICK(c, 22);
    // 0033b5  mov eax, ss
    X86_AT(c, 0x33b5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 0033b7  mov es, eax
    X86_AT(c, 0x33b7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0033b9  sub esp, ecx
    X86_AT(c, 0x33b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0033bb  mov edi, esp
    X86_AT(c, 0x33bbu);
    c.r[7] = c.r[4];
    // 0033bd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x33bdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 0033c1  shr ecx, 2
    X86_AT(c, 0x33c1u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0033c4  sub eax, eax
    X86_AT(c, 0x33c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0033c6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x33c6u);
    x86_string(c, 2, 4, 243, 4, 3);
L_33c8:
    X86_TICK(c, 7);
    // 0033c8  call 0xf190
    X86_AT(c, 0x33c8u);
    push32(c, 0x33cdu); f_0000f190(c); X86_RET(c, 0x33cdu);
    X86_TICK(c, 16);
    // 0033cd  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 0033d4  ret 
    X86_AT(c, 0x33d4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x338fu, "ran off the end of a function");
}
void f_00003396(X86Cpu& c) {
    X86_TICK(c, 11);
    // 003396  mov word ptr gs:[ebp + 0x340], ds
    X86_AT(c, 0x3396u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x340u)), (uint32_t)c.sreg[3]);
    // 00339d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x339du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 0033a5  call 0x3568
    X86_AT(c, 0x33a5u);
    push32(c, 0x33aau); f_00003568(c); X86_RET(c, 0x33aau);
    X86_TICK(c, 11);
    // 0033aa  mov ecx, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33aau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)));
    // 0033b1  test ecx, ecx
    X86_AT(c, 0x33b1u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0033b3  je 0x33c8
    X86_AT(c, 0x33b3u);
    if (x86_cc(c, 4)) { goto L_33c8; }
    X86_TICK(c, 22);
    // 0033b5  mov eax, ss
    X86_AT(c, 0x33b5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 0033b7  mov es, eax
    X86_AT(c, 0x33b7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0033b9  sub esp, ecx
    X86_AT(c, 0x33b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0033bb  mov edi, esp
    X86_AT(c, 0x33bbu);
    c.r[7] = c.r[4];
    // 0033bd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x33bdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 0033c1  shr ecx, 2
    X86_AT(c, 0x33c1u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0033c4  sub eax, eax
    X86_AT(c, 0x33c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0033c6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x33c6u);
    x86_string(c, 2, 4, 243, 4, 3);
L_33c8:
    X86_TICK(c, 7);
    // 0033c8  call 0xf190
    X86_AT(c, 0x33c8u);
    push32(c, 0x33cdu); f_0000f190(c); X86_RET(c, 0x33cdu);
    X86_TICK(c, 16);
    // 0033cd  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 0033d4  ret 
    X86_AT(c, 0x33d4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3396u, "ran off the end of a function");
}
void f_0000339d(X86Cpu& c) {
    X86_TICK(c, 9);
    // 00339d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x339du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 0033a5  call 0x3568
    X86_AT(c, 0x33a5u);
    push32(c, 0x33aau); f_00003568(c); X86_RET(c, 0x33aau);
    X86_TICK(c, 11);
    // 0033aa  mov ecx, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33aau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)));
    // 0033b1  test ecx, ecx
    X86_AT(c, 0x33b1u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0033b3  je 0x33c8
    X86_AT(c, 0x33b3u);
    if (x86_cc(c, 4)) { goto L_33c8; }
    X86_TICK(c, 22);
    // 0033b5  mov eax, ss
    X86_AT(c, 0x33b5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 0033b7  mov es, eax
    X86_AT(c, 0x33b7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0033b9  sub esp, ecx
    X86_AT(c, 0x33b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0033bb  mov edi, esp
    X86_AT(c, 0x33bbu);
    c.r[7] = c.r[4];
    // 0033bd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x33bdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 0033c1  shr ecx, 2
    X86_AT(c, 0x33c1u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0033c4  sub eax, eax
    X86_AT(c, 0x33c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0033c6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x33c6u);
    x86_string(c, 2, 4, 243, 4, 3);
L_33c8:
    X86_TICK(c, 7);
    // 0033c8  call 0xf190
    X86_AT(c, 0x33c8u);
    push32(c, 0x33cdu); f_0000f190(c); X86_RET(c, 0x33cdu);
    X86_TICK(c, 16);
    // 0033cd  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 0033d4  ret 
    X86_AT(c, 0x33d4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x339du, "ran off the end of a function");
}
void f_000033a5(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0033a5  call 0x3568
    X86_AT(c, 0x33a5u);
    push32(c, 0x33aau); f_00003568(c); X86_RET(c, 0x33aau);
    X86_TICK(c, 11);
    // 0033aa  mov ecx, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33aau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)));
    // 0033b1  test ecx, ecx
    X86_AT(c, 0x33b1u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0033b3  je 0x33c8
    X86_AT(c, 0x33b3u);
    if (x86_cc(c, 4)) { goto L_33c8; }
    X86_TICK(c, 22);
    // 0033b5  mov eax, ss
    X86_AT(c, 0x33b5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 0033b7  mov es, eax
    X86_AT(c, 0x33b7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0033b9  sub esp, ecx
    X86_AT(c, 0x33b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0033bb  mov edi, esp
    X86_AT(c, 0x33bbu);
    c.r[7] = c.r[4];
    // 0033bd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x33bdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 0033c1  shr ecx, 2
    X86_AT(c, 0x33c1u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0033c4  sub eax, eax
    X86_AT(c, 0x33c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0033c6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x33c6u);
    x86_string(c, 2, 4, 243, 4, 3);
L_33c8:
    X86_TICK(c, 7);
    // 0033c8  call 0xf190
    X86_AT(c, 0x33c8u);
    push32(c, 0x33cdu); f_0000f190(c); X86_RET(c, 0x33cdu);
    X86_TICK(c, 16);
    // 0033cd  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 0033d4  ret 
    X86_AT(c, 0x33d4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x33a5u, "ran off the end of a function");
}
void f_000033aa(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0033aa  mov ecx, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33aau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)));
    // 0033b1  test ecx, ecx
    X86_AT(c, 0x33b1u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0033b3  je 0x33c8
    X86_AT(c, 0x33b3u);
    if (x86_cc(c, 4)) { goto L_33c8; }
    X86_TICK(c, 22);
    // 0033b5  mov eax, ss
    X86_AT(c, 0x33b5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 0033b7  mov es, eax
    X86_AT(c, 0x33b7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0033b9  sub esp, ecx
    X86_AT(c, 0x33b9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0033bb  mov edi, esp
    X86_AT(c, 0x33bbu);
    c.r[7] = c.r[4];
    // 0033bd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x33bdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 0033c1  shr ecx, 2
    X86_AT(c, 0x33c1u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0033c4  sub eax, eax
    X86_AT(c, 0x33c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0033c6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x33c6u);
    x86_string(c, 2, 4, 243, 4, 3);
L_33c8:
    X86_TICK(c, 7);
    // 0033c8  call 0xf190
    X86_AT(c, 0x33c8u);
    push32(c, 0x33cdu); f_0000f190(c); X86_RET(c, 0x33cdu);
    X86_TICK(c, 16);
    // 0033cd  add esp, dword ptr gs:[ebp + 0x200]
    X86_AT(c, 0x33cdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u))), 0, 4); }
    // 0033d4  ret 
    X86_AT(c, 0x33d4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x33aau, "ran off the end of a function");
}
}
