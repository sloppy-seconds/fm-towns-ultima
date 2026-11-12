#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00002e79(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002e79  jmp 0x4026
    X86_AT(c, 0x2e79u);
    goto L_4026;
L_4026:
    X86_TICK(c, 15);
    // 004026  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x4026u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00402d  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x402du);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 004034  cmp ax, cx
    X86_AT(c, 0x4034u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004037  jle 0x403b
    X86_AT(c, 0x4037u);
    if (x86_cc(c, 14)) { goto L_403b; }
    X86_TICK(c, 3);
    // 004039  xchg cx, ax
    X86_AT(c, 0x4039u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_403b:
    X86_TICK(c, 17);
    // 00403b  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x403bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 004043  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x4043u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00404b  shr eax, 0x10
    X86_AT(c, 0x404bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00404e  shr ecx, 0x10
    X86_AT(c, 0x404eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004051  cmp ax, cx
    X86_AT(c, 0x4051u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 004054  jle 0x4057
    X86_AT(c, 0x4054u);
    if (x86_cc(c, 14)) { goto L_4057; }
    X86_TICK(c, 3);
    // 004056  xchg ecx, eax
    X86_AT(c, 0x4056u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_4057:
    X86_TICK(c, 60);
    // 004057  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4057u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 00405f  sub cx, ax
    X86_AT(c, 0x405fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004062  inc ecx
    X86_AT(c, 0x4062u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 004063  push ecx
    X86_AT(c, 0x4063u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004064  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4064u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 004068  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x4068u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 004070  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x4070u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 004075  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x4075u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 004079  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x4079u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 004080  movzx eax, byte ptr gs:[ebp + 0x220]
    X86_AT(c, 0x4080u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)));
    // 004088  mov eax, dword ptr cs:[eax*4 + 0x7fec]
    X86_AT(c, 0x4088u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7FECu)));
    // 004090  mov dword ptr gs:[ebp + 0x324], eax
    X86_AT(c, 0x4090u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), c.r[0]);
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 28);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0040b1  dec dword ptr [esp]
    X86_AT(c, 0x40b1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0040b4  jne 0x4097
    X86_AT(c, 0x40b4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4097u); goto L_4097; }
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x2e79u, "ran off the end of a function");
}
void f_00002e80(X86Cpu& c) {
    X86_TICK(c, 30);
    // 002e80  sub ah, 0x47
    X86_AT(c, 0x2e80u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, 0x47u, 0, 1)); }
    // 002e83  movzx eax, ah
    X86_AT(c, 0x2e83u);
    c.r[0] = g8(c, 4);
    // 002e86  mov ebx, dword ptr cs:[eax*4 + 0x30b4]
    X86_AT(c, 0x2e86u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x30B4u)));
    // 002e8e  mov dword ptr gs:[ebp + 0x400], ebx
    X86_AT(c, 0x2e8eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)), c.r[3]);
    // 002e95  mov bl, byte ptr cs:[eax + 0x30cc]
    X86_AT(c, 0x2e95u);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x30CCu))));
    // 002e9c  mov byte ptr gs:[ebp + 0x404], bl
    X86_AT(c, 0x2e9cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u)), g8(c, 3));
    // 002ea3  mov byte ptr gs:[ebp + 0x405], 0
    X86_AT(c, 0x2ea3u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), 0x0u);
    // 002eab  mov bl, byte ptr gs:[ebp + 0x108]
    X86_AT(c, 0x2eabu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))));
    // 002eb2  test bl, 0xe
    X86_AT(c, 0x2eb2u);
    (void)x86_logic(c, g8(c, 3) & 0xEu, 1);
    // 002eb5  je 0x302d
    X86_AT(c, 0x2eb5u);
    if (x86_cc(c, 4)) { goto L_302d; }
    X86_TICK(c, 7);
    // 002ebb  test bl, 0xe0
    X86_AT(c, 0x2ebbu);
    (void)x86_logic(c, g8(c, 3) & 0xE0u, 1);
    // 002ebe  jne 0x2ed9
    X86_AT(c, 0x2ebeu);
    if (x86_cc(c, 5)) { goto L_2ed9; }
    X86_TICK(c, 12);
    // 002ec0  cmp byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2ec0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))), 0x1u, 0, 1);
    // 002ec8  jne 0x2ed9
    X86_AT(c, 0x2ec8u);
    if (x86_cc(c, 5)) { goto L_2ed9; }
    X86_TICK(c, 7);
    // 002eca  call 0x2975
    X86_AT(c, 0x2ecau);
    push32(c, 0x2ecfu); f_00002975(c); X86_RET(c, 0x2ecfu);
    X86_TICK(c, 9);
    // 002ecf  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x2ecfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 002ed7  jmp 0x2f08
    X86_AT(c, 0x2ed7u);
    goto L_2f08;
L_2ed9:
    X86_TICK(c, 9);
    // 002ed9  mov byte ptr gs:[ebp + 0x220], 0
    X86_AT(c, 0x2ed9u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x0u);
    // 002ee1  call 0x28d8
    X86_AT(c, 0x2ee1u);
    push32(c, 0x2ee6u); f_000028d8(c); X86_RET(c, 0x2ee6u);
    X86_TICK(c, 7);
    // 002ee6  test al, al
    X86_AT(c, 0x2ee6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002ee8  je 0x2f08
    X86_AT(c, 0x2ee8u);
    if (x86_cc(c, 4)) { goto L_2f08; }
    X86_TICK(c, 28);
    // 002eea  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2eeau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002eee  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2eeeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002ef5  mov eax, ss
    X86_AT(c, 0x2ef5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002ef7  mov es, eax
    X86_AT(c, 0x2ef7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002ef9  sub esp, ecx
    X86_AT(c, 0x2ef9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002efb  mov edi, esp
    X86_AT(c, 0x2efbu);
    c.r[7] = c.r[4];
    // 002efd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2efdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002f01  shr ecx, 2
    X86_AT(c, 0x2f01u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
L_2f08:
    X86_TICK(c, 28);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    X86_TICK(c, 2);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
L_2fbd:
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
L_302d:
    X86_TICK(c, 12);
    // 00302d  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x302du);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 003037  je 0x301a
    X86_AT(c, 0x3037u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x301au); goto L_301a; }
    X86_TICK(c, 12);
    // 003039  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x3039u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 003041  jne 0x301a
    X86_AT(c, 0x3041u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x301au); goto L_301a; }
    X86_TICK(c, 11);
    // 003043  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x3043u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 003047  call 0x36bc
    X86_AT(c, 0x3047u);
    push32(c, 0x304cu); f_000036bc(c); X86_RET(c, 0x304cu);
    X86_TICK(c, 11);
    // 00304c  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x304cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 003054  mov dword ptr gs:[ebp + 0x324], 0x8170
    X86_AT(c, 0x3054u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8170u);
    // 00305f  jmp 0x2fbd
    X86_AT(c, 0x305fu);
    X86_POLL(c, 0x2fbdu); goto L_2fbd;
    x86_fault(c, 0x2e80u, "ran off the end of a function");
}
void f_00002e83(X86Cpu& c) {
    X86_TICK(c, 28);
    // 002e83  movzx eax, ah
    X86_AT(c, 0x2e83u);
    c.r[0] = g8(c, 4);
    // 002e86  mov ebx, dword ptr cs:[eax*4 + 0x30b4]
    X86_AT(c, 0x2e86u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x30B4u)));
    // 002e8e  mov dword ptr gs:[ebp + 0x400], ebx
    X86_AT(c, 0x2e8eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)), c.r[3]);
    // 002e95  mov bl, byte ptr cs:[eax + 0x30cc]
    X86_AT(c, 0x2e95u);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x30CCu))));
    // 002e9c  mov byte ptr gs:[ebp + 0x404], bl
    X86_AT(c, 0x2e9cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u)), g8(c, 3));
    // 002ea3  mov byte ptr gs:[ebp + 0x405], 0
    X86_AT(c, 0x2ea3u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), 0x0u);
    // 002eab  mov bl, byte ptr gs:[ebp + 0x108]
    X86_AT(c, 0x2eabu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))));
    // 002eb2  test bl, 0xe
    X86_AT(c, 0x2eb2u);
    (void)x86_logic(c, g8(c, 3) & 0xEu, 1);
    // 002eb5  je 0x302d
    X86_AT(c, 0x2eb5u);
    if (x86_cc(c, 4)) { goto L_302d; }
    X86_TICK(c, 7);
    // 002ebb  test bl, 0xe0
    X86_AT(c, 0x2ebbu);
    (void)x86_logic(c, g8(c, 3) & 0xE0u, 1);
    // 002ebe  jne 0x2ed9
    X86_AT(c, 0x2ebeu);
    if (x86_cc(c, 5)) { goto L_2ed9; }
    X86_TICK(c, 12);
    // 002ec0  cmp byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2ec0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))), 0x1u, 0, 1);
    // 002ec8  jne 0x2ed9
    X86_AT(c, 0x2ec8u);
    if (x86_cc(c, 5)) { goto L_2ed9; }
    X86_TICK(c, 7);
    // 002eca  call 0x2975
    X86_AT(c, 0x2ecau);
    push32(c, 0x2ecfu); f_00002975(c); X86_RET(c, 0x2ecfu);
    X86_TICK(c, 9);
    // 002ecf  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x2ecfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 002ed7  jmp 0x2f08
    X86_AT(c, 0x2ed7u);
    goto L_2f08;
L_2ed9:
    X86_TICK(c, 9);
    // 002ed9  mov byte ptr gs:[ebp + 0x220], 0
    X86_AT(c, 0x2ed9u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x0u);
    // 002ee1  call 0x28d8
    X86_AT(c, 0x2ee1u);
    push32(c, 0x2ee6u); f_000028d8(c); X86_RET(c, 0x2ee6u);
    X86_TICK(c, 7);
    // 002ee6  test al, al
    X86_AT(c, 0x2ee6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002ee8  je 0x2f08
    X86_AT(c, 0x2ee8u);
    if (x86_cc(c, 4)) { goto L_2f08; }
    X86_TICK(c, 28);
    // 002eea  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2eeau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002eee  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2eeeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002ef5  mov eax, ss
    X86_AT(c, 0x2ef5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002ef7  mov es, eax
    X86_AT(c, 0x2ef7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002ef9  sub esp, ecx
    X86_AT(c, 0x2ef9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002efb  mov edi, esp
    X86_AT(c, 0x2efbu);
    c.r[7] = c.r[4];
    // 002efd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2efdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002f01  shr ecx, 2
    X86_AT(c, 0x2f01u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
L_2f08:
    X86_TICK(c, 28);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    X86_TICK(c, 2);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
L_2fbd:
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
L_302d:
    X86_TICK(c, 12);
    // 00302d  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x302du);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 003037  je 0x301a
    X86_AT(c, 0x3037u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x301au); goto L_301a; }
    X86_TICK(c, 12);
    // 003039  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x3039u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 003041  jne 0x301a
    X86_AT(c, 0x3041u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x301au); goto L_301a; }
    X86_TICK(c, 11);
    // 003043  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x3043u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 003047  call 0x36bc
    X86_AT(c, 0x3047u);
    push32(c, 0x304cu); f_000036bc(c); X86_RET(c, 0x304cu);
    X86_TICK(c, 11);
    // 00304c  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x304cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 003054  mov dword ptr gs:[ebp + 0x324], 0x8170
    X86_AT(c, 0x3054u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8170u);
    // 00305f  jmp 0x2fbd
    X86_AT(c, 0x305fu);
    X86_POLL(c, 0x2fbdu); goto L_2fbd;
    x86_fault(c, 0x2e83u, "ran off the end of a function");
}
void f_00002e86(X86Cpu& c) {
    X86_TICK(c, 25);
    // 002e86  mov ebx, dword ptr cs:[eax*4 + 0x30b4]
    X86_AT(c, 0x2e86u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x30B4u)));
    // 002e8e  mov dword ptr gs:[ebp + 0x400], ebx
    X86_AT(c, 0x2e8eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)), c.r[3]);
    // 002e95  mov bl, byte ptr cs:[eax + 0x30cc]
    X86_AT(c, 0x2e95u);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x30CCu))));
    // 002e9c  mov byte ptr gs:[ebp + 0x404], bl
    X86_AT(c, 0x2e9cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u)), g8(c, 3));
    // 002ea3  mov byte ptr gs:[ebp + 0x405], 0
    X86_AT(c, 0x2ea3u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), 0x0u);
    // 002eab  mov bl, byte ptr gs:[ebp + 0x108]
    X86_AT(c, 0x2eabu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))));
    // 002eb2  test bl, 0xe
    X86_AT(c, 0x2eb2u);
    (void)x86_logic(c, g8(c, 3) & 0xEu, 1);
    // 002eb5  je 0x302d
    X86_AT(c, 0x2eb5u);
    if (x86_cc(c, 4)) { goto L_302d; }
    X86_TICK(c, 7);
    // 002ebb  test bl, 0xe0
    X86_AT(c, 0x2ebbu);
    (void)x86_logic(c, g8(c, 3) & 0xE0u, 1);
    // 002ebe  jne 0x2ed9
    X86_AT(c, 0x2ebeu);
    if (x86_cc(c, 5)) { goto L_2ed9; }
    X86_TICK(c, 12);
    // 002ec0  cmp byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2ec0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))), 0x1u, 0, 1);
    // 002ec8  jne 0x2ed9
    X86_AT(c, 0x2ec8u);
    if (x86_cc(c, 5)) { goto L_2ed9; }
    X86_TICK(c, 7);
    // 002eca  call 0x2975
    X86_AT(c, 0x2ecau);
    push32(c, 0x2ecfu); f_00002975(c); X86_RET(c, 0x2ecfu);
    X86_TICK(c, 9);
    // 002ecf  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x2ecfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 002ed7  jmp 0x2f08
    X86_AT(c, 0x2ed7u);
    goto L_2f08;
L_2ed9:
    X86_TICK(c, 9);
    // 002ed9  mov byte ptr gs:[ebp + 0x220], 0
    X86_AT(c, 0x2ed9u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x0u);
    // 002ee1  call 0x28d8
    X86_AT(c, 0x2ee1u);
    push32(c, 0x2ee6u); f_000028d8(c); X86_RET(c, 0x2ee6u);
    X86_TICK(c, 7);
    // 002ee6  test al, al
    X86_AT(c, 0x2ee6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002ee8  je 0x2f08
    X86_AT(c, 0x2ee8u);
    if (x86_cc(c, 4)) { goto L_2f08; }
    X86_TICK(c, 28);
    // 002eea  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2eeau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002eee  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2eeeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002ef5  mov eax, ss
    X86_AT(c, 0x2ef5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002ef7  mov es, eax
    X86_AT(c, 0x2ef7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002ef9  sub esp, ecx
    X86_AT(c, 0x2ef9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002efb  mov edi, esp
    X86_AT(c, 0x2efbu);
    c.r[7] = c.r[4];
    // 002efd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2efdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002f01  shr ecx, 2
    X86_AT(c, 0x2f01u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
L_2f08:
    X86_TICK(c, 28);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    X86_TICK(c, 2);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
L_2fbd:
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
L_302d:
    X86_TICK(c, 12);
    // 00302d  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x302du);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 003037  je 0x301a
    X86_AT(c, 0x3037u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x301au); goto L_301a; }
    X86_TICK(c, 12);
    // 003039  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x3039u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 003041  jne 0x301a
    X86_AT(c, 0x3041u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x301au); goto L_301a; }
    X86_TICK(c, 11);
    // 003043  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x3043u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 003047  call 0x36bc
    X86_AT(c, 0x3047u);
    push32(c, 0x304cu); f_000036bc(c); X86_RET(c, 0x304cu);
    X86_TICK(c, 11);
    // 00304c  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x304cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 003054  mov dword ptr gs:[ebp + 0x324], 0x8170
    X86_AT(c, 0x3054u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8170u);
    // 00305f  jmp 0x2fbd
    X86_AT(c, 0x305fu);
    X86_POLL(c, 0x2fbdu); goto L_2fbd;
    x86_fault(c, 0x2e86u, "ran off the end of a function");
}
void f_00002e8e(X86Cpu& c) {
    X86_TICK(c, 21);
    // 002e8e  mov dword ptr gs:[ebp + 0x400], ebx
    X86_AT(c, 0x2e8eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)), c.r[3]);
    // 002e95  mov bl, byte ptr cs:[eax + 0x30cc]
    X86_AT(c, 0x2e95u);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x30CCu))));
    // 002e9c  mov byte ptr gs:[ebp + 0x404], bl
    X86_AT(c, 0x2e9cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u)), g8(c, 3));
    // 002ea3  mov byte ptr gs:[ebp + 0x405], 0
    X86_AT(c, 0x2ea3u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), 0x0u);
    // 002eab  mov bl, byte ptr gs:[ebp + 0x108]
    X86_AT(c, 0x2eabu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))));
    // 002eb2  test bl, 0xe
    X86_AT(c, 0x2eb2u);
    (void)x86_logic(c, g8(c, 3) & 0xEu, 1);
    // 002eb5  je 0x302d
    X86_AT(c, 0x2eb5u);
    if (x86_cc(c, 4)) { goto L_302d; }
    X86_TICK(c, 7);
    // 002ebb  test bl, 0xe0
    X86_AT(c, 0x2ebbu);
    (void)x86_logic(c, g8(c, 3) & 0xE0u, 1);
    // 002ebe  jne 0x2ed9
    X86_AT(c, 0x2ebeu);
    if (x86_cc(c, 5)) { goto L_2ed9; }
    X86_TICK(c, 12);
    // 002ec0  cmp byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2ec0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))), 0x1u, 0, 1);
    // 002ec8  jne 0x2ed9
    X86_AT(c, 0x2ec8u);
    if (x86_cc(c, 5)) { goto L_2ed9; }
    X86_TICK(c, 7);
    // 002eca  call 0x2975
    X86_AT(c, 0x2ecau);
    push32(c, 0x2ecfu); f_00002975(c); X86_RET(c, 0x2ecfu);
    X86_TICK(c, 9);
    // 002ecf  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x2ecfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 002ed7  jmp 0x2f08
    X86_AT(c, 0x2ed7u);
    goto L_2f08;
L_2ed9:
    X86_TICK(c, 9);
    // 002ed9  mov byte ptr gs:[ebp + 0x220], 0
    X86_AT(c, 0x2ed9u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x0u);
    // 002ee1  call 0x28d8
    X86_AT(c, 0x2ee1u);
    push32(c, 0x2ee6u); f_000028d8(c); X86_RET(c, 0x2ee6u);
    X86_TICK(c, 7);
    // 002ee6  test al, al
    X86_AT(c, 0x2ee6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002ee8  je 0x2f08
    X86_AT(c, 0x2ee8u);
    if (x86_cc(c, 4)) { goto L_2f08; }
    X86_TICK(c, 28);
    // 002eea  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2eeau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002eee  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2eeeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002ef5  mov eax, ss
    X86_AT(c, 0x2ef5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002ef7  mov es, eax
    X86_AT(c, 0x2ef7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002ef9  sub esp, ecx
    X86_AT(c, 0x2ef9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002efb  mov edi, esp
    X86_AT(c, 0x2efbu);
    c.r[7] = c.r[4];
    // 002efd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2efdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002f01  shr ecx, 2
    X86_AT(c, 0x2f01u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
L_2f08:
    X86_TICK(c, 28);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    X86_TICK(c, 2);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
L_2fbd:
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
L_302d:
    X86_TICK(c, 12);
    // 00302d  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x302du);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 003037  je 0x301a
    X86_AT(c, 0x3037u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x301au); goto L_301a; }
    X86_TICK(c, 12);
    // 003039  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x3039u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 003041  jne 0x301a
    X86_AT(c, 0x3041u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x301au); goto L_301a; }
    X86_TICK(c, 11);
    // 003043  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x3043u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 003047  call 0x36bc
    X86_AT(c, 0x3047u);
    push32(c, 0x304cu); f_000036bc(c); X86_RET(c, 0x304cu);
    X86_TICK(c, 11);
    // 00304c  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x304cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 003054  mov dword ptr gs:[ebp + 0x324], 0x8170
    X86_AT(c, 0x3054u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8170u);
    // 00305f  jmp 0x2fbd
    X86_AT(c, 0x305fu);
    X86_POLL(c, 0x2fbdu); goto L_2fbd;
    x86_fault(c, 0x2e8eu, "ran off the end of a function");
}
void f_00002e95(X86Cpu& c) {
    X86_TICK(c, 19);
    // 002e95  mov bl, byte ptr cs:[eax + 0x30cc]
    X86_AT(c, 0x2e95u);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x30CCu))));
    // 002e9c  mov byte ptr gs:[ebp + 0x404], bl
    X86_AT(c, 0x2e9cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u)), g8(c, 3));
    // 002ea3  mov byte ptr gs:[ebp + 0x405], 0
    X86_AT(c, 0x2ea3u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), 0x0u);
    // 002eab  mov bl, byte ptr gs:[ebp + 0x108]
    X86_AT(c, 0x2eabu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))));
    // 002eb2  test bl, 0xe
    X86_AT(c, 0x2eb2u);
    (void)x86_logic(c, g8(c, 3) & 0xEu, 1);
    // 002eb5  je 0x302d
    X86_AT(c, 0x2eb5u);
    if (x86_cc(c, 4)) { goto L_302d; }
    X86_TICK(c, 7);
    // 002ebb  test bl, 0xe0
    X86_AT(c, 0x2ebbu);
    (void)x86_logic(c, g8(c, 3) & 0xE0u, 1);
    // 002ebe  jne 0x2ed9
    X86_AT(c, 0x2ebeu);
    if (x86_cc(c, 5)) { goto L_2ed9; }
    X86_TICK(c, 12);
    // 002ec0  cmp byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2ec0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))), 0x1u, 0, 1);
    // 002ec8  jne 0x2ed9
    X86_AT(c, 0x2ec8u);
    if (x86_cc(c, 5)) { goto L_2ed9; }
    X86_TICK(c, 7);
    // 002eca  call 0x2975
    X86_AT(c, 0x2ecau);
    push32(c, 0x2ecfu); f_00002975(c); X86_RET(c, 0x2ecfu);
    X86_TICK(c, 9);
    // 002ecf  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x2ecfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 002ed7  jmp 0x2f08
    X86_AT(c, 0x2ed7u);
    goto L_2f08;
L_2ed9:
    X86_TICK(c, 9);
    // 002ed9  mov byte ptr gs:[ebp + 0x220], 0
    X86_AT(c, 0x2ed9u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x0u);
    // 002ee1  call 0x28d8
    X86_AT(c, 0x2ee1u);
    push32(c, 0x2ee6u); f_000028d8(c); X86_RET(c, 0x2ee6u);
    X86_TICK(c, 7);
    // 002ee6  test al, al
    X86_AT(c, 0x2ee6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002ee8  je 0x2f08
    X86_AT(c, 0x2ee8u);
    if (x86_cc(c, 4)) { goto L_2f08; }
    X86_TICK(c, 28);
    // 002eea  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2eeau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002eee  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2eeeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002ef5  mov eax, ss
    X86_AT(c, 0x2ef5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002ef7  mov es, eax
    X86_AT(c, 0x2ef7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002ef9  sub esp, ecx
    X86_AT(c, 0x2ef9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002efb  mov edi, esp
    X86_AT(c, 0x2efbu);
    c.r[7] = c.r[4];
    // 002efd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2efdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002f01  shr ecx, 2
    X86_AT(c, 0x2f01u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
L_2f08:
    X86_TICK(c, 28);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    X86_TICK(c, 2);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
L_2fbd:
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
L_302d:
    X86_TICK(c, 12);
    // 00302d  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x302du);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 003037  je 0x301a
    X86_AT(c, 0x3037u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x301au); goto L_301a; }
    X86_TICK(c, 12);
    // 003039  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x3039u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 003041  jne 0x301a
    X86_AT(c, 0x3041u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x301au); goto L_301a; }
    X86_TICK(c, 11);
    // 003043  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x3043u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 003047  call 0x36bc
    X86_AT(c, 0x3047u);
    push32(c, 0x304cu); f_000036bc(c); X86_RET(c, 0x304cu);
    X86_TICK(c, 11);
    // 00304c  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x304cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 003054  mov dword ptr gs:[ebp + 0x324], 0x8170
    X86_AT(c, 0x3054u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8170u);
    // 00305f  jmp 0x2fbd
    X86_AT(c, 0x305fu);
    X86_POLL(c, 0x2fbdu); goto L_2fbd;
    x86_fault(c, 0x2e95u, "ran off the end of a function");
}
void f_00002e9c(X86Cpu& c) {
    X86_TICK(c, 15);
    // 002e9c  mov byte ptr gs:[ebp + 0x404], bl
    X86_AT(c, 0x2e9cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u)), g8(c, 3));
    // 002ea3  mov byte ptr gs:[ebp + 0x405], 0
    X86_AT(c, 0x2ea3u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), 0x0u);
    // 002eab  mov bl, byte ptr gs:[ebp + 0x108]
    X86_AT(c, 0x2eabu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))));
    // 002eb2  test bl, 0xe
    X86_AT(c, 0x2eb2u);
    (void)x86_logic(c, g8(c, 3) & 0xEu, 1);
    // 002eb5  je 0x302d
    X86_AT(c, 0x2eb5u);
    if (x86_cc(c, 4)) { goto L_302d; }
    X86_TICK(c, 7);
    // 002ebb  test bl, 0xe0
    X86_AT(c, 0x2ebbu);
    (void)x86_logic(c, g8(c, 3) & 0xE0u, 1);
    // 002ebe  jne 0x2ed9
    X86_AT(c, 0x2ebeu);
    if (x86_cc(c, 5)) { goto L_2ed9; }
    X86_TICK(c, 12);
    // 002ec0  cmp byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2ec0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))), 0x1u, 0, 1);
    // 002ec8  jne 0x2ed9
    X86_AT(c, 0x2ec8u);
    if (x86_cc(c, 5)) { goto L_2ed9; }
    X86_TICK(c, 7);
    // 002eca  call 0x2975
    X86_AT(c, 0x2ecau);
    push32(c, 0x2ecfu); f_00002975(c); X86_RET(c, 0x2ecfu);
    X86_TICK(c, 9);
    // 002ecf  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x2ecfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 002ed7  jmp 0x2f08
    X86_AT(c, 0x2ed7u);
    goto L_2f08;
L_2ed9:
    X86_TICK(c, 9);
    // 002ed9  mov byte ptr gs:[ebp + 0x220], 0
    X86_AT(c, 0x2ed9u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x0u);
    // 002ee1  call 0x28d8
    X86_AT(c, 0x2ee1u);
    push32(c, 0x2ee6u); f_000028d8(c); X86_RET(c, 0x2ee6u);
    X86_TICK(c, 7);
    // 002ee6  test al, al
    X86_AT(c, 0x2ee6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002ee8  je 0x2f08
    X86_AT(c, 0x2ee8u);
    if (x86_cc(c, 4)) { goto L_2f08; }
    X86_TICK(c, 28);
    // 002eea  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2eeau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002eee  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2eeeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002ef5  mov eax, ss
    X86_AT(c, 0x2ef5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002ef7  mov es, eax
    X86_AT(c, 0x2ef7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002ef9  sub esp, ecx
    X86_AT(c, 0x2ef9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002efb  mov edi, esp
    X86_AT(c, 0x2efbu);
    c.r[7] = c.r[4];
    // 002efd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2efdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002f01  shr ecx, 2
    X86_AT(c, 0x2f01u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
L_2f08:
    X86_TICK(c, 28);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    X86_TICK(c, 2);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
L_2fbd:
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
L_302d:
    X86_TICK(c, 12);
    // 00302d  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x302du);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 003037  je 0x301a
    X86_AT(c, 0x3037u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x301au); goto L_301a; }
    X86_TICK(c, 12);
    // 003039  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x3039u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 003041  jne 0x301a
    X86_AT(c, 0x3041u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x301au); goto L_301a; }
    X86_TICK(c, 11);
    // 003043  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x3043u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 003047  call 0x36bc
    X86_AT(c, 0x3047u);
    push32(c, 0x304cu); f_000036bc(c); X86_RET(c, 0x304cu);
    X86_TICK(c, 11);
    // 00304c  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x304cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 003054  mov dword ptr gs:[ebp + 0x324], 0x8170
    X86_AT(c, 0x3054u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8170u);
    // 00305f  jmp 0x2fbd
    X86_AT(c, 0x305fu);
    X86_POLL(c, 0x2fbdu); goto L_2fbd;
    x86_fault(c, 0x2e9cu, "ran off the end of a function");
}
void f_00002ea3(X86Cpu& c) {
    X86_TICK(c, 13);
    // 002ea3  mov byte ptr gs:[ebp + 0x405], 0
    X86_AT(c, 0x2ea3u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x405u)), 0x0u);
    // 002eab  mov bl, byte ptr gs:[ebp + 0x108]
    X86_AT(c, 0x2eabu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))));
    // 002eb2  test bl, 0xe
    X86_AT(c, 0x2eb2u);
    (void)x86_logic(c, g8(c, 3) & 0xEu, 1);
    // 002eb5  je 0x302d
    X86_AT(c, 0x2eb5u);
    if (x86_cc(c, 4)) { goto L_302d; }
    X86_TICK(c, 7);
    // 002ebb  test bl, 0xe0
    X86_AT(c, 0x2ebbu);
    (void)x86_logic(c, g8(c, 3) & 0xE0u, 1);
    // 002ebe  jne 0x2ed9
    X86_AT(c, 0x2ebeu);
    if (x86_cc(c, 5)) { goto L_2ed9; }
    X86_TICK(c, 12);
    // 002ec0  cmp byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2ec0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))), 0x1u, 0, 1);
    // 002ec8  jne 0x2ed9
    X86_AT(c, 0x2ec8u);
    if (x86_cc(c, 5)) { goto L_2ed9; }
    X86_TICK(c, 7);
    // 002eca  call 0x2975
    X86_AT(c, 0x2ecau);
    push32(c, 0x2ecfu); f_00002975(c); X86_RET(c, 0x2ecfu);
    X86_TICK(c, 9);
    // 002ecf  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x2ecfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 002ed7  jmp 0x2f08
    X86_AT(c, 0x2ed7u);
    goto L_2f08;
L_2ed9:
    X86_TICK(c, 9);
    // 002ed9  mov byte ptr gs:[ebp + 0x220], 0
    X86_AT(c, 0x2ed9u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x0u);
    // 002ee1  call 0x28d8
    X86_AT(c, 0x2ee1u);
    push32(c, 0x2ee6u); f_000028d8(c); X86_RET(c, 0x2ee6u);
    X86_TICK(c, 7);
    // 002ee6  test al, al
    X86_AT(c, 0x2ee6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002ee8  je 0x2f08
    X86_AT(c, 0x2ee8u);
    if (x86_cc(c, 4)) { goto L_2f08; }
    X86_TICK(c, 28);
    // 002eea  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2eeau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002eee  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2eeeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002ef5  mov eax, ss
    X86_AT(c, 0x2ef5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002ef7  mov es, eax
    X86_AT(c, 0x2ef7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002ef9  sub esp, ecx
    X86_AT(c, 0x2ef9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002efb  mov edi, esp
    X86_AT(c, 0x2efbu);
    c.r[7] = c.r[4];
    // 002efd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2efdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002f01  shr ecx, 2
    X86_AT(c, 0x2f01u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
L_2f08:
    X86_TICK(c, 28);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    X86_TICK(c, 2);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
L_2fbd:
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
L_302d:
    X86_TICK(c, 12);
    // 00302d  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x302du);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 003037  je 0x301a
    X86_AT(c, 0x3037u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x301au); goto L_301a; }
    X86_TICK(c, 12);
    // 003039  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x3039u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 003041  jne 0x301a
    X86_AT(c, 0x3041u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x301au); goto L_301a; }
    X86_TICK(c, 11);
    // 003043  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x3043u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 003047  call 0x36bc
    X86_AT(c, 0x3047u);
    push32(c, 0x304cu); f_000036bc(c); X86_RET(c, 0x304cu);
    X86_TICK(c, 11);
    // 00304c  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x304cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 003054  mov dword ptr gs:[ebp + 0x324], 0x8170
    X86_AT(c, 0x3054u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8170u);
    // 00305f  jmp 0x2fbd
    X86_AT(c, 0x305fu);
    X86_POLL(c, 0x2fbdu); goto L_2fbd;
    x86_fault(c, 0x2ea3u, "ran off the end of a function");
}
void f_00002eab(X86Cpu& c) {
    X86_TICK(c, 11);
    // 002eab  mov bl, byte ptr gs:[ebp + 0x108]
    X86_AT(c, 0x2eabu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))));
    // 002eb2  test bl, 0xe
    X86_AT(c, 0x2eb2u);
    (void)x86_logic(c, g8(c, 3) & 0xEu, 1);
    // 002eb5  je 0x302d
    X86_AT(c, 0x2eb5u);
    if (x86_cc(c, 4)) { goto L_302d; }
    X86_TICK(c, 7);
    // 002ebb  test bl, 0xe0
    X86_AT(c, 0x2ebbu);
    (void)x86_logic(c, g8(c, 3) & 0xE0u, 1);
    // 002ebe  jne 0x2ed9
    X86_AT(c, 0x2ebeu);
    if (x86_cc(c, 5)) { goto L_2ed9; }
    X86_TICK(c, 12);
    // 002ec0  cmp byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2ec0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))), 0x1u, 0, 1);
    // 002ec8  jne 0x2ed9
    X86_AT(c, 0x2ec8u);
    if (x86_cc(c, 5)) { goto L_2ed9; }
    X86_TICK(c, 7);
    // 002eca  call 0x2975
    X86_AT(c, 0x2ecau);
    push32(c, 0x2ecfu); f_00002975(c); X86_RET(c, 0x2ecfu);
    X86_TICK(c, 9);
    // 002ecf  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x2ecfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 002ed7  jmp 0x2f08
    X86_AT(c, 0x2ed7u);
    goto L_2f08;
L_2ed9:
    X86_TICK(c, 9);
    // 002ed9  mov byte ptr gs:[ebp + 0x220], 0
    X86_AT(c, 0x2ed9u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x0u);
    // 002ee1  call 0x28d8
    X86_AT(c, 0x2ee1u);
    push32(c, 0x2ee6u); f_000028d8(c); X86_RET(c, 0x2ee6u);
    X86_TICK(c, 7);
    // 002ee6  test al, al
    X86_AT(c, 0x2ee6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002ee8  je 0x2f08
    X86_AT(c, 0x2ee8u);
    if (x86_cc(c, 4)) { goto L_2f08; }
    X86_TICK(c, 28);
    // 002eea  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2eeau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002eee  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2eeeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002ef5  mov eax, ss
    X86_AT(c, 0x2ef5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002ef7  mov es, eax
    X86_AT(c, 0x2ef7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002ef9  sub esp, ecx
    X86_AT(c, 0x2ef9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002efb  mov edi, esp
    X86_AT(c, 0x2efbu);
    c.r[7] = c.r[4];
    // 002efd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2efdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002f01  shr ecx, 2
    X86_AT(c, 0x2f01u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
L_2f08:
    X86_TICK(c, 28);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    X86_TICK(c, 2);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
L_2fbd:
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
L_302d:
    X86_TICK(c, 12);
    // 00302d  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x302du);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 003037  je 0x301a
    X86_AT(c, 0x3037u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x301au); goto L_301a; }
    X86_TICK(c, 12);
    // 003039  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x3039u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 003041  jne 0x301a
    X86_AT(c, 0x3041u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x301au); goto L_301a; }
    X86_TICK(c, 11);
    // 003043  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x3043u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 003047  call 0x36bc
    X86_AT(c, 0x3047u);
    push32(c, 0x304cu); f_000036bc(c); X86_RET(c, 0x304cu);
    X86_TICK(c, 11);
    // 00304c  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x304cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 003054  mov dword ptr gs:[ebp + 0x324], 0x8170
    X86_AT(c, 0x3054u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8170u);
    // 00305f  jmp 0x2fbd
    X86_AT(c, 0x305fu);
    X86_POLL(c, 0x2fbdu); goto L_2fbd;
    x86_fault(c, 0x2eabu, "ran off the end of a function");
}
void f_00002eb2(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002eb2  test bl, 0xe
    X86_AT(c, 0x2eb2u);
    (void)x86_logic(c, g8(c, 3) & 0xEu, 1);
    // 002eb5  je 0x302d
    X86_AT(c, 0x2eb5u);
    if (x86_cc(c, 4)) { goto L_302d; }
    X86_TICK(c, 7);
    // 002ebb  test bl, 0xe0
    X86_AT(c, 0x2ebbu);
    (void)x86_logic(c, g8(c, 3) & 0xE0u, 1);
    // 002ebe  jne 0x2ed9
    X86_AT(c, 0x2ebeu);
    if (x86_cc(c, 5)) { goto L_2ed9; }
    X86_TICK(c, 12);
    // 002ec0  cmp byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2ec0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))), 0x1u, 0, 1);
    // 002ec8  jne 0x2ed9
    X86_AT(c, 0x2ec8u);
    if (x86_cc(c, 5)) { goto L_2ed9; }
    X86_TICK(c, 7);
    // 002eca  call 0x2975
    X86_AT(c, 0x2ecau);
    push32(c, 0x2ecfu); f_00002975(c); X86_RET(c, 0x2ecfu);
    X86_TICK(c, 9);
    // 002ecf  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x2ecfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 002ed7  jmp 0x2f08
    X86_AT(c, 0x2ed7u);
    goto L_2f08;
L_2ed9:
    X86_TICK(c, 9);
    // 002ed9  mov byte ptr gs:[ebp + 0x220], 0
    X86_AT(c, 0x2ed9u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x0u);
    // 002ee1  call 0x28d8
    X86_AT(c, 0x2ee1u);
    push32(c, 0x2ee6u); f_000028d8(c); X86_RET(c, 0x2ee6u);
    X86_TICK(c, 7);
    // 002ee6  test al, al
    X86_AT(c, 0x2ee6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002ee8  je 0x2f08
    X86_AT(c, 0x2ee8u);
    if (x86_cc(c, 4)) { goto L_2f08; }
    X86_TICK(c, 28);
    // 002eea  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2eeau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002eee  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2eeeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002ef5  mov eax, ss
    X86_AT(c, 0x2ef5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002ef7  mov es, eax
    X86_AT(c, 0x2ef7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002ef9  sub esp, ecx
    X86_AT(c, 0x2ef9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002efb  mov edi, esp
    X86_AT(c, 0x2efbu);
    c.r[7] = c.r[4];
    // 002efd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2efdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002f01  shr ecx, 2
    X86_AT(c, 0x2f01u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
L_2f08:
    X86_TICK(c, 28);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    X86_TICK(c, 2);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
L_2fbd:
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
L_302d:
    X86_TICK(c, 12);
    // 00302d  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x302du);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 003037  je 0x301a
    X86_AT(c, 0x3037u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x301au); goto L_301a; }
    X86_TICK(c, 12);
    // 003039  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x3039u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 003041  jne 0x301a
    X86_AT(c, 0x3041u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x301au); goto L_301a; }
    X86_TICK(c, 11);
    // 003043  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x3043u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 003047  call 0x36bc
    X86_AT(c, 0x3047u);
    push32(c, 0x304cu); f_000036bc(c); X86_RET(c, 0x304cu);
    X86_TICK(c, 11);
    // 00304c  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x304cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 003054  mov dword ptr gs:[ebp + 0x324], 0x8170
    X86_AT(c, 0x3054u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8170u);
    // 00305f  jmp 0x2fbd
    X86_AT(c, 0x305fu);
    X86_POLL(c, 0x2fbdu); goto L_2fbd;
    x86_fault(c, 0x2eb2u, "ran off the end of a function");
}
void f_00002eb5(X86Cpu& c) {
    X86_TICK(c, 5);
    // 002eb5  je 0x302d
    X86_AT(c, 0x2eb5u);
    if (x86_cc(c, 4)) { goto L_302d; }
    X86_TICK(c, 7);
    // 002ebb  test bl, 0xe0
    X86_AT(c, 0x2ebbu);
    (void)x86_logic(c, g8(c, 3) & 0xE0u, 1);
    // 002ebe  jne 0x2ed9
    X86_AT(c, 0x2ebeu);
    if (x86_cc(c, 5)) { goto L_2ed9; }
    X86_TICK(c, 12);
    // 002ec0  cmp byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2ec0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))), 0x1u, 0, 1);
    // 002ec8  jne 0x2ed9
    X86_AT(c, 0x2ec8u);
    if (x86_cc(c, 5)) { goto L_2ed9; }
    X86_TICK(c, 7);
    // 002eca  call 0x2975
    X86_AT(c, 0x2ecau);
    push32(c, 0x2ecfu); f_00002975(c); X86_RET(c, 0x2ecfu);
    X86_TICK(c, 9);
    // 002ecf  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x2ecfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 002ed7  jmp 0x2f08
    X86_AT(c, 0x2ed7u);
    goto L_2f08;
L_2ed9:
    X86_TICK(c, 9);
    // 002ed9  mov byte ptr gs:[ebp + 0x220], 0
    X86_AT(c, 0x2ed9u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x0u);
    // 002ee1  call 0x28d8
    X86_AT(c, 0x2ee1u);
    push32(c, 0x2ee6u); f_000028d8(c); X86_RET(c, 0x2ee6u);
    X86_TICK(c, 7);
    // 002ee6  test al, al
    X86_AT(c, 0x2ee6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002ee8  je 0x2f08
    X86_AT(c, 0x2ee8u);
    if (x86_cc(c, 4)) { goto L_2f08; }
    X86_TICK(c, 28);
    // 002eea  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2eeau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002eee  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2eeeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002ef5  mov eax, ss
    X86_AT(c, 0x2ef5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002ef7  mov es, eax
    X86_AT(c, 0x2ef7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002ef9  sub esp, ecx
    X86_AT(c, 0x2ef9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002efb  mov edi, esp
    X86_AT(c, 0x2efbu);
    c.r[7] = c.r[4];
    // 002efd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2efdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002f01  shr ecx, 2
    X86_AT(c, 0x2f01u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
L_2f08:
    X86_TICK(c, 28);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    X86_TICK(c, 2);
    // 002fb2  mov dword ptr gs:[ebp + 0x324], 0x8044
    X86_AT(c, 0x2fb2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8044u);
L_2fbd:
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
L_302d:
    X86_TICK(c, 12);
    // 00302d  test word ptr gs:[ebp + 0x108], 0xe0
    X86_AT(c, 0x302du);
    (void)x86_logic(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u))) & 0xE0u, 2);
    // 003037  je 0x301a
    X86_AT(c, 0x3037u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x301au); goto L_301a; }
    X86_TICK(c, 12);
    // 003039  cmp byte ptr gs:[ebp + 0x404], 0
    X86_AT(c, 0x3039u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x404u))), 0x0u, 0, 1);
    // 003041  jne 0x301a
    X86_AT(c, 0x3041u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x301au); goto L_301a; }
    X86_TICK(c, 11);
    // 003043  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x3043u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 003047  call 0x36bc
    X86_AT(c, 0x3047u);
    push32(c, 0x304cu); f_000036bc(c); X86_RET(c, 0x304cu);
    X86_TICK(c, 11);
    // 00304c  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x304cu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 003054  mov dword ptr gs:[ebp + 0x324], 0x8170
    X86_AT(c, 0x3054u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u)), 0x8170u);
    // 00305f  jmp 0x2fbd
    X86_AT(c, 0x305fu);
    X86_POLL(c, 0x2fbdu); goto L_2fbd;
    x86_fault(c, 0x2eb5u, "ran off the end of a function");
}
void f_00002ebb(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002ebb  test bl, 0xe0
    X86_AT(c, 0x2ebbu);
    (void)x86_logic(c, g8(c, 3) & 0xE0u, 1);
    // 002ebe  jne 0x2ed9
    X86_AT(c, 0x2ebeu);
    if (x86_cc(c, 5)) { goto L_2ed9; }
    X86_TICK(c, 12);
    // 002ec0  cmp byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2ec0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))), 0x1u, 0, 1);
    // 002ec8  jne 0x2ed9
    X86_AT(c, 0x2ec8u);
    if (x86_cc(c, 5)) { goto L_2ed9; }
    X86_TICK(c, 7);
    // 002eca  call 0x2975
    X86_AT(c, 0x2ecau);
    push32(c, 0x2ecfu); f_00002975(c); X86_RET(c, 0x2ecfu);
    X86_TICK(c, 9);
    // 002ecf  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x2ecfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 002ed7  jmp 0x2f08
    X86_AT(c, 0x2ed7u);
    goto L_2f08;
L_2ed9:
    X86_TICK(c, 9);
    // 002ed9  mov byte ptr gs:[ebp + 0x220], 0
    X86_AT(c, 0x2ed9u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x0u);
    // 002ee1  call 0x28d8
    X86_AT(c, 0x2ee1u);
    push32(c, 0x2ee6u); f_000028d8(c); X86_RET(c, 0x2ee6u);
    X86_TICK(c, 7);
    // 002ee6  test al, al
    X86_AT(c, 0x2ee6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002ee8  je 0x2f08
    X86_AT(c, 0x2ee8u);
    if (x86_cc(c, 4)) { goto L_2f08; }
    X86_TICK(c, 28);
    // 002eea  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2eeau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002eee  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2eeeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002ef5  mov eax, ss
    X86_AT(c, 0x2ef5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002ef7  mov es, eax
    X86_AT(c, 0x2ef7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002ef9  sub esp, ecx
    X86_AT(c, 0x2ef9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002efb  mov edi, esp
    X86_AT(c, 0x2efbu);
    c.r[7] = c.r[4];
    // 002efd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2efdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002f01  shr ecx, 2
    X86_AT(c, 0x2f01u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
L_2f08:
    X86_TICK(c, 28);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    x86_fault(c, 0x2ebbu, "ran off the end of a function");
}
void f_00002ebe(X86Cpu& c) {
    X86_TICK(c, 5);
    // 002ebe  jne 0x2ed9
    X86_AT(c, 0x2ebeu);
    if (x86_cc(c, 5)) { goto L_2ed9; }
    X86_TICK(c, 12);
    // 002ec0  cmp byte ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x2ec0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))), 0x1u, 0, 1);
    // 002ec8  jne 0x2ed9
    X86_AT(c, 0x2ec8u);
    if (x86_cc(c, 5)) { goto L_2ed9; }
    X86_TICK(c, 7);
    // 002eca  call 0x2975
    X86_AT(c, 0x2ecau);
    push32(c, 0x2ecfu); f_00002975(c); X86_RET(c, 0x2ecfu);
    X86_TICK(c, 9);
    // 002ecf  mov byte ptr gs:[ebp + 0x220], 1
    X86_AT(c, 0x2ecfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x1u);
    // 002ed7  jmp 0x2f08
    X86_AT(c, 0x2ed7u);
    goto L_2f08;
L_2ed9:
    X86_TICK(c, 9);
    // 002ed9  mov byte ptr gs:[ebp + 0x220], 0
    X86_AT(c, 0x2ed9u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x0u);
    // 002ee1  call 0x28d8
    X86_AT(c, 0x2ee1u);
    push32(c, 0x2ee6u); f_000028d8(c); X86_RET(c, 0x2ee6u);
    X86_TICK(c, 7);
    // 002ee6  test al, al
    X86_AT(c, 0x2ee6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002ee8  je 0x2f08
    X86_AT(c, 0x2ee8u);
    if (x86_cc(c, 4)) { goto L_2f08; }
    X86_TICK(c, 28);
    // 002eea  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2eeau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002eee  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2eeeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002ef5  mov eax, ss
    X86_AT(c, 0x2ef5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002ef7  mov es, eax
    X86_AT(c, 0x2ef7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002ef9  sub esp, ecx
    X86_AT(c, 0x2ef9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002efb  mov edi, esp
    X86_AT(c, 0x2efbu);
    c.r[7] = c.r[4];
    // 002efd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2efdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002f01  shr ecx, 2
    X86_AT(c, 0x2f01u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
L_2f08:
    X86_TICK(c, 28);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    x86_fault(c, 0x2ebeu, "ran off the end of a function");
}
void f_00002ed9(X86Cpu& c) {
    X86_TICK(c, 9);
    // 002ed9  mov byte ptr gs:[ebp + 0x220], 0
    X86_AT(c, 0x2ed9u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x220u)), 0x0u);
    // 002ee1  call 0x28d8
    X86_AT(c, 0x2ee1u);
    push32(c, 0x2ee6u); f_000028d8(c); X86_RET(c, 0x2ee6u);
    X86_TICK(c, 7);
    // 002ee6  test al, al
    X86_AT(c, 0x2ee6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002ee8  je 0x2f08
    X86_AT(c, 0x2ee8u);
    if (x86_cc(c, 4)) { goto L_2f08; }
    X86_TICK(c, 28);
    // 002eea  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2eeau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002eee  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2eeeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002ef5  mov eax, ss
    X86_AT(c, 0x2ef5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002ef7  mov es, eax
    X86_AT(c, 0x2ef7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002ef9  sub esp, ecx
    X86_AT(c, 0x2ef9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002efb  mov edi, esp
    X86_AT(c, 0x2efbu);
    c.r[7] = c.r[4];
    // 002efd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2efdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002f01  shr ecx, 2
    X86_AT(c, 0x2f01u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
L_2f08:
    X86_TICK(c, 28);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    x86_fault(c, 0x2ed9u, "ran off the end of a function");
}
void f_00002ee1(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002ee1  call 0x28d8
    X86_AT(c, 0x2ee1u);
    push32(c, 0x2ee6u); f_000028d8(c); X86_RET(c, 0x2ee6u);
    X86_TICK(c, 7);
    // 002ee6  test al, al
    X86_AT(c, 0x2ee6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002ee8  je 0x2f08
    X86_AT(c, 0x2ee8u);
    if (x86_cc(c, 4)) { goto L_2f08; }
    X86_TICK(c, 28);
    // 002eea  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2eeau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002eee  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2eeeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002ef5  mov eax, ss
    X86_AT(c, 0x2ef5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002ef7  mov es, eax
    X86_AT(c, 0x2ef7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002ef9  sub esp, ecx
    X86_AT(c, 0x2ef9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002efb  mov edi, esp
    X86_AT(c, 0x2efbu);
    c.r[7] = c.r[4];
    // 002efd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2efdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002f01  shr ecx, 2
    X86_AT(c, 0x2f01u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
L_2f08:
    X86_TICK(c, 28);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    x86_fault(c, 0x2ee1u, "ran off the end of a function");
}
void f_00002ee6(X86Cpu& c) {
    X86_TICK(c, 7);
    // 002ee6  test al, al
    X86_AT(c, 0x2ee6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 002ee8  je 0x2f08
    X86_AT(c, 0x2ee8u);
    if (x86_cc(c, 4)) { goto L_2f08; }
    X86_TICK(c, 28);
    // 002eea  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2eeau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002eee  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2eeeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002ef5  mov eax, ss
    X86_AT(c, 0x2ef5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002ef7  mov es, eax
    X86_AT(c, 0x2ef7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002ef9  sub esp, ecx
    X86_AT(c, 0x2ef9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002efb  mov edi, esp
    X86_AT(c, 0x2efbu);
    c.r[7] = c.r[4];
    // 002efd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2efdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002f01  shr ecx, 2
    X86_AT(c, 0x2f01u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
L_2f08:
    X86_TICK(c, 28);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    x86_fault(c, 0x2ee6u, "ran off the end of a function");
}
void f_00002ee8(X86Cpu& c) {
    X86_TICK(c, 5);
    // 002ee8  je 0x2f08
    X86_AT(c, 0x2ee8u);
    if (x86_cc(c, 4)) { goto L_2f08; }
    X86_TICK(c, 28);
    // 002eea  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2eeau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002eee  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2eeeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002ef5  mov eax, ss
    X86_AT(c, 0x2ef5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002ef7  mov es, eax
    X86_AT(c, 0x2ef7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002ef9  sub esp, ecx
    X86_AT(c, 0x2ef9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002efb  mov edi, esp
    X86_AT(c, 0x2efbu);
    c.r[7] = c.r[4];
    // 002efd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2efdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002f01  shr ecx, 2
    X86_AT(c, 0x2f01u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
L_2f08:
    X86_TICK(c, 28);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    x86_fault(c, 0x2ee8u, "ran off the end of a function");
}
void f_00002eea(X86Cpu& c) {
    X86_TICK(c, 56);
    // 002eea  mov ecx, dword ptr gs:[ebp + 0xc]
    X86_AT(c, 0x2eeau);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)));
    // 002eee  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2eeeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002ef5  mov eax, ss
    X86_AT(c, 0x2ef5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002ef7  mov es, eax
    X86_AT(c, 0x2ef7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002ef9  sub esp, ecx
    X86_AT(c, 0x2ef9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002efb  mov edi, esp
    X86_AT(c, 0x2efbu);
    c.r[7] = c.r[4];
    // 002efd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2efdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002f01  shr ecx, 2
    X86_AT(c, 0x2f01u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    x86_fault(c, 0x2eeau, "ran off the end of a function");
}
void f_00002eee(X86Cpu& c) {
    X86_TICK(c, 52);
    // 002eee  mov dword ptr gs:[ebp + 0x200], ecx
    X86_AT(c, 0x2eeeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x200u)), c.r[1]);
    // 002ef5  mov eax, ss
    X86_AT(c, 0x2ef5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002ef7  mov es, eax
    X86_AT(c, 0x2ef7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002ef9  sub esp, ecx
    X86_AT(c, 0x2ef9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002efb  mov edi, esp
    X86_AT(c, 0x2efbu);
    c.r[7] = c.r[4];
    // 002efd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2efdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002f01  shr ecx, 2
    X86_AT(c, 0x2f01u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    x86_fault(c, 0x2eeeu, "ran off the end of a function");
}
void f_00002ef5(X86Cpu& c) {
    X86_TICK(c, 50);
    // 002ef5  mov eax, ss
    X86_AT(c, 0x2ef5u);
    c.r[0] = (uint32_t)c.sreg[2];
    // 002ef7  mov es, eax
    X86_AT(c, 0x2ef7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002ef9  sub esp, ecx
    X86_AT(c, 0x2ef9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002efb  mov edi, esp
    X86_AT(c, 0x2efbu);
    c.r[7] = c.r[4];
    // 002efd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2efdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002f01  shr ecx, 2
    X86_AT(c, 0x2f01u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    x86_fault(c, 0x2ef5u, "ran off the end of a function");
}
void f_00002ef7(X86Cpu& c) {
    X86_TICK(c, 48);
    // 002ef7  mov es, eax
    X86_AT(c, 0x2ef7u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 002ef9  sub esp, ecx
    X86_AT(c, 0x2ef9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002efb  mov edi, esp
    X86_AT(c, 0x2efbu);
    c.r[7] = c.r[4];
    // 002efd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2efdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002f01  shr ecx, 2
    X86_AT(c, 0x2f01u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    x86_fault(c, 0x2ef7u, "ran off the end of a function");
}
void f_00002ef9(X86Cpu& c) {
    X86_TICK(c, 46);
    // 002ef9  sub esp, ecx
    X86_AT(c, 0x2ef9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[1], 0, 4); }
    // 002efb  mov edi, esp
    X86_AT(c, 0x2efbu);
    c.r[7] = c.r[4];
    // 002efd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2efdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002f01  shr ecx, 2
    X86_AT(c, 0x2f01u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    x86_fault(c, 0x2ef9u, "ran off the end of a function");
}
void f_00002efb(X86Cpu& c) {
    X86_TICK(c, 44);
    // 002efb  mov edi, esp
    X86_AT(c, 0x2efbu);
    c.r[7] = c.r[4];
    // 002efd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2efdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002f01  shr ecx, 2
    X86_AT(c, 0x2f01u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    x86_fault(c, 0x2efbu, "ran off the end of a function");
}
void f_00002efd(X86Cpu& c) {
    X86_TICK(c, 42);
    // 002efd  mov dword ptr gs:[ebp + 8], edi
    X86_AT(c, 0x2efdu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[7]);
    // 002f01  shr ecx, 2
    X86_AT(c, 0x2f01u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    x86_fault(c, 0x2efdu, "ran off the end of a function");
}
void f_00002f01(X86Cpu& c) {
    X86_TICK(c, 40);
    // 002f01  shr ecx, 2
    X86_AT(c, 0x2f01u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    x86_fault(c, 0x2f01u, "ran off the end of a function");
}
void f_00002f04(X86Cpu& c) {
    X86_TICK(c, 37);
    // 002f04  sub eax, eax
    X86_AT(c, 0x2f04u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    x86_fault(c, 0x2f04u, "ran off the end of a function");
}
void f_00002f06(X86Cpu& c) {
    X86_TICK(c, 35);
    // 002f06  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x2f06u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    x86_fault(c, 0x2f06u, "ran off the end of a function");
}
void f_00002f08(X86Cpu& c) {
    X86_TICK(c, 28);
    // 002f08  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x2f08u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    x86_fault(c, 0x2f08u, "ran off the end of a function");
}
}
