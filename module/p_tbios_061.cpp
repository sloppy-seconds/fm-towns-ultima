#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00003e4c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 003e4c  mov dword ptr gs:[ebp + 0x330], 0x5b18
    X86_AT(c, 0x3e4cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u)), 0x5B18u);
    // 003e57  call 0x3983
    X86_AT(c, 0x3e57u);
    push32(c, 0x3e5cu); f_00003983(c); X86_RET(c, 0x3e5cu);
    X86_TICK(c, 19);
    // 003e5c  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x3e5cu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 003e60  mov edx, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x3e60u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 003e67  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x3e67u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 003e6e  cmp dx, cx
    X86_AT(c, 0x3e6eu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 003e71  jle 0x3e76
    X86_AT(c, 0x3e71u);
    if (x86_cc(c, 14)) { goto L_3e76; }
    X86_TICK(c, 3);
    // 003e73  xchg cx, dx
    X86_AT(c, 0x3e73u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[2] & 0xFFFFu)); s16(c, 2, t); }
L_3e76:
    X86_TICK(c, 21);
    // 003e76  mov word ptr gs:[ebp + 0x1d8], dx
    X86_AT(c, 0x3e76u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)), (c.r[2] & 0xFFFFu));
    // 003e7e  sub cx, dx
    X86_AT(c, 0x3e7eu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 003e81  inc cx
    X86_AT(c, 0x3e81u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 003e83  mov word ptr gs:[ebp + 0x1c0], cx
    X86_AT(c, 0x3e83u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)), (c.r[1] & 0xFFFFu));
    // 003e8b  shld eax, edx, 0x10
    X86_AT(c, 0x3e8bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 003e8f  shld ebx, ecx, 0x10
    X86_AT(c, 0x3e8fu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 003e93  cmp ax, bx
    X86_AT(c, 0x3e93u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 003e96  jle 0x3e9a
    X86_AT(c, 0x3e96u);
    if (x86_cc(c, 14)) { goto L_3e9a; }
    X86_TICK(c, 3);
    // 003e98  xchg bx, ax
    X86_AT(c, 0x3e98u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3e9a:
    X86_TICK(c, 17);
    // 003e9a  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x3e9au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 003ea2  sub bx, ax
    X86_AT(c, 0x3ea2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003ea5  inc bx
    X86_AT(c, 0x3ea5u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003ea7  mov word ptr gs:[ebp + 0x1c2], bx
    X86_AT(c, 0x3ea7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)), (c.r[3] & 0xFFFFu));
    // 003eaf  push ecx
    X86_AT(c, 0x3eafu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003eb0  jmp 0x3eba
    X86_AT(c, 0x3eb0u);
    goto L_3eba;
L_3eb2:
    X86_TICK(c, 6);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eba:
    X86_TICK(c, 7);
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
    X86_TICK(c, 11);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3e4cu, "ran off the end of a function");
}
void f_00003e57(X86Cpu& c) {
    X86_TICK(c, 7);
    // 003e57  call 0x3983
    X86_AT(c, 0x3e57u);
    push32(c, 0x3e5cu); f_00003983(c); X86_RET(c, 0x3e5cu);
    X86_TICK(c, 19);
    // 003e5c  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x3e5cu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 003e60  mov edx, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x3e60u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 003e67  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x3e67u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 003e6e  cmp dx, cx
    X86_AT(c, 0x3e6eu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 003e71  jle 0x3e76
    X86_AT(c, 0x3e71u);
    if (x86_cc(c, 14)) { goto L_3e76; }
    X86_TICK(c, 3);
    // 003e73  xchg cx, dx
    X86_AT(c, 0x3e73u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[2] & 0xFFFFu)); s16(c, 2, t); }
L_3e76:
    X86_TICK(c, 21);
    // 003e76  mov word ptr gs:[ebp + 0x1d8], dx
    X86_AT(c, 0x3e76u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)), (c.r[2] & 0xFFFFu));
    // 003e7e  sub cx, dx
    X86_AT(c, 0x3e7eu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 003e81  inc cx
    X86_AT(c, 0x3e81u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 003e83  mov word ptr gs:[ebp + 0x1c0], cx
    X86_AT(c, 0x3e83u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)), (c.r[1] & 0xFFFFu));
    // 003e8b  shld eax, edx, 0x10
    X86_AT(c, 0x3e8bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 003e8f  shld ebx, ecx, 0x10
    X86_AT(c, 0x3e8fu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 003e93  cmp ax, bx
    X86_AT(c, 0x3e93u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 003e96  jle 0x3e9a
    X86_AT(c, 0x3e96u);
    if (x86_cc(c, 14)) { goto L_3e9a; }
    X86_TICK(c, 3);
    // 003e98  xchg bx, ax
    X86_AT(c, 0x3e98u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3e9a:
    X86_TICK(c, 17);
    // 003e9a  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x3e9au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 003ea2  sub bx, ax
    X86_AT(c, 0x3ea2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003ea5  inc bx
    X86_AT(c, 0x3ea5u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003ea7  mov word ptr gs:[ebp + 0x1c2], bx
    X86_AT(c, 0x3ea7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)), (c.r[3] & 0xFFFFu));
    // 003eaf  push ecx
    X86_AT(c, 0x3eafu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003eb0  jmp 0x3eba
    X86_AT(c, 0x3eb0u);
    goto L_3eba;
L_3eb2:
    X86_TICK(c, 6);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eba:
    X86_TICK(c, 7);
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
    X86_TICK(c, 11);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3e57u, "ran off the end of a function");
}
void f_00003e5c(X86Cpu& c) {
    X86_TICK(c, 19);
    // 003e5c  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x3e5cu);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 003e60  mov edx, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x3e60u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 003e67  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x3e67u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 003e6e  cmp dx, cx
    X86_AT(c, 0x3e6eu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 003e71  jle 0x3e76
    X86_AT(c, 0x3e71u);
    if (x86_cc(c, 14)) { goto L_3e76; }
    X86_TICK(c, 3);
    // 003e73  xchg cx, dx
    X86_AT(c, 0x3e73u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[2] & 0xFFFFu)); s16(c, 2, t); }
L_3e76:
    X86_TICK(c, 21);
    // 003e76  mov word ptr gs:[ebp + 0x1d8], dx
    X86_AT(c, 0x3e76u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)), (c.r[2] & 0xFFFFu));
    // 003e7e  sub cx, dx
    X86_AT(c, 0x3e7eu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 003e81  inc cx
    X86_AT(c, 0x3e81u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 003e83  mov word ptr gs:[ebp + 0x1c0], cx
    X86_AT(c, 0x3e83u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)), (c.r[1] & 0xFFFFu));
    // 003e8b  shld eax, edx, 0x10
    X86_AT(c, 0x3e8bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 003e8f  shld ebx, ecx, 0x10
    X86_AT(c, 0x3e8fu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 003e93  cmp ax, bx
    X86_AT(c, 0x3e93u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 003e96  jle 0x3e9a
    X86_AT(c, 0x3e96u);
    if (x86_cc(c, 14)) { goto L_3e9a; }
    X86_TICK(c, 3);
    // 003e98  xchg bx, ax
    X86_AT(c, 0x3e98u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3e9a:
    X86_TICK(c, 17);
    // 003e9a  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x3e9au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 003ea2  sub bx, ax
    X86_AT(c, 0x3ea2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003ea5  inc bx
    X86_AT(c, 0x3ea5u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003ea7  mov word ptr gs:[ebp + 0x1c2], bx
    X86_AT(c, 0x3ea7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)), (c.r[3] & 0xFFFFu));
    // 003eaf  push ecx
    X86_AT(c, 0x3eafu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003eb0  jmp 0x3eba
    X86_AT(c, 0x3eb0u);
    goto L_3eba;
L_3eb2:
    X86_TICK(c, 6);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eba:
    X86_TICK(c, 7);
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
    X86_TICK(c, 11);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3e5cu, "ran off the end of a function");
}
void f_00003e60(X86Cpu& c) {
    X86_TICK(c, 15);
    // 003e60  mov edx, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x3e60u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 003e67  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x3e67u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 003e6e  cmp dx, cx
    X86_AT(c, 0x3e6eu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 003e71  jle 0x3e76
    X86_AT(c, 0x3e71u);
    if (x86_cc(c, 14)) { goto L_3e76; }
    X86_TICK(c, 3);
    // 003e73  xchg cx, dx
    X86_AT(c, 0x3e73u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[2] & 0xFFFFu)); s16(c, 2, t); }
L_3e76:
    X86_TICK(c, 21);
    // 003e76  mov word ptr gs:[ebp + 0x1d8], dx
    X86_AT(c, 0x3e76u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)), (c.r[2] & 0xFFFFu));
    // 003e7e  sub cx, dx
    X86_AT(c, 0x3e7eu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 003e81  inc cx
    X86_AT(c, 0x3e81u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 003e83  mov word ptr gs:[ebp + 0x1c0], cx
    X86_AT(c, 0x3e83u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)), (c.r[1] & 0xFFFFu));
    // 003e8b  shld eax, edx, 0x10
    X86_AT(c, 0x3e8bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 003e8f  shld ebx, ecx, 0x10
    X86_AT(c, 0x3e8fu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 003e93  cmp ax, bx
    X86_AT(c, 0x3e93u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 003e96  jle 0x3e9a
    X86_AT(c, 0x3e96u);
    if (x86_cc(c, 14)) { goto L_3e9a; }
    X86_TICK(c, 3);
    // 003e98  xchg bx, ax
    X86_AT(c, 0x3e98u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3e9a:
    X86_TICK(c, 17);
    // 003e9a  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x3e9au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 003ea2  sub bx, ax
    X86_AT(c, 0x3ea2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003ea5  inc bx
    X86_AT(c, 0x3ea5u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003ea7  mov word ptr gs:[ebp + 0x1c2], bx
    X86_AT(c, 0x3ea7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)), (c.r[3] & 0xFFFFu));
    // 003eaf  push ecx
    X86_AT(c, 0x3eafu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003eb0  jmp 0x3eba
    X86_AT(c, 0x3eb0u);
    goto L_3eba;
L_3eb2:
    X86_TICK(c, 6);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eba:
    X86_TICK(c, 7);
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
    X86_TICK(c, 11);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3e60u, "ran off the end of a function");
}
void f_00003e67(X86Cpu& c) {
    X86_TICK(c, 11);
    // 003e67  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x3e67u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 003e6e  cmp dx, cx
    X86_AT(c, 0x3e6eu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 003e71  jle 0x3e76
    X86_AT(c, 0x3e71u);
    if (x86_cc(c, 14)) { goto L_3e76; }
    X86_TICK(c, 3);
    // 003e73  xchg cx, dx
    X86_AT(c, 0x3e73u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[2] & 0xFFFFu)); s16(c, 2, t); }
L_3e76:
    X86_TICK(c, 21);
    // 003e76  mov word ptr gs:[ebp + 0x1d8], dx
    X86_AT(c, 0x3e76u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)), (c.r[2] & 0xFFFFu));
    // 003e7e  sub cx, dx
    X86_AT(c, 0x3e7eu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 003e81  inc cx
    X86_AT(c, 0x3e81u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 003e83  mov word ptr gs:[ebp + 0x1c0], cx
    X86_AT(c, 0x3e83u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)), (c.r[1] & 0xFFFFu));
    // 003e8b  shld eax, edx, 0x10
    X86_AT(c, 0x3e8bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 003e8f  shld ebx, ecx, 0x10
    X86_AT(c, 0x3e8fu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 003e93  cmp ax, bx
    X86_AT(c, 0x3e93u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 003e96  jle 0x3e9a
    X86_AT(c, 0x3e96u);
    if (x86_cc(c, 14)) { goto L_3e9a; }
    X86_TICK(c, 3);
    // 003e98  xchg bx, ax
    X86_AT(c, 0x3e98u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3e9a:
    X86_TICK(c, 17);
    // 003e9a  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x3e9au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 003ea2  sub bx, ax
    X86_AT(c, 0x3ea2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003ea5  inc bx
    X86_AT(c, 0x3ea5u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003ea7  mov word ptr gs:[ebp + 0x1c2], bx
    X86_AT(c, 0x3ea7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)), (c.r[3] & 0xFFFFu));
    // 003eaf  push ecx
    X86_AT(c, 0x3eafu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003eb0  jmp 0x3eba
    X86_AT(c, 0x3eb0u);
    goto L_3eba;
L_3eb2:
    X86_TICK(c, 6);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eba:
    X86_TICK(c, 7);
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
    X86_TICK(c, 11);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3e67u, "ran off the end of a function");
}
void f_00003e6e(X86Cpu& c) {
    X86_TICK(c, 7);
    // 003e6e  cmp dx, cx
    X86_AT(c, 0x3e6eu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 003e71  jle 0x3e76
    X86_AT(c, 0x3e71u);
    if (x86_cc(c, 14)) { goto L_3e76; }
    X86_TICK(c, 3);
    // 003e73  xchg cx, dx
    X86_AT(c, 0x3e73u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[2] & 0xFFFFu)); s16(c, 2, t); }
L_3e76:
    X86_TICK(c, 21);
    // 003e76  mov word ptr gs:[ebp + 0x1d8], dx
    X86_AT(c, 0x3e76u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)), (c.r[2] & 0xFFFFu));
    // 003e7e  sub cx, dx
    X86_AT(c, 0x3e7eu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 003e81  inc cx
    X86_AT(c, 0x3e81u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 003e83  mov word ptr gs:[ebp + 0x1c0], cx
    X86_AT(c, 0x3e83u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)), (c.r[1] & 0xFFFFu));
    // 003e8b  shld eax, edx, 0x10
    X86_AT(c, 0x3e8bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 003e8f  shld ebx, ecx, 0x10
    X86_AT(c, 0x3e8fu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 003e93  cmp ax, bx
    X86_AT(c, 0x3e93u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 003e96  jle 0x3e9a
    X86_AT(c, 0x3e96u);
    if (x86_cc(c, 14)) { goto L_3e9a; }
    X86_TICK(c, 3);
    // 003e98  xchg bx, ax
    X86_AT(c, 0x3e98u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3e9a:
    X86_TICK(c, 17);
    // 003e9a  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x3e9au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 003ea2  sub bx, ax
    X86_AT(c, 0x3ea2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003ea5  inc bx
    X86_AT(c, 0x3ea5u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003ea7  mov word ptr gs:[ebp + 0x1c2], bx
    X86_AT(c, 0x3ea7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)), (c.r[3] & 0xFFFFu));
    // 003eaf  push ecx
    X86_AT(c, 0x3eafu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003eb0  jmp 0x3eba
    X86_AT(c, 0x3eb0u);
    goto L_3eba;
L_3eb2:
    X86_TICK(c, 6);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eba:
    X86_TICK(c, 7);
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
    X86_TICK(c, 11);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3e6eu, "ran off the end of a function");
}
void f_00003e71(X86Cpu& c) {
    X86_TICK(c, 5);
    // 003e71  jle 0x3e76
    X86_AT(c, 0x3e71u);
    if (x86_cc(c, 14)) { goto L_3e76; }
    X86_TICK(c, 3);
    // 003e73  xchg cx, dx
    X86_AT(c, 0x3e73u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[2] & 0xFFFFu)); s16(c, 2, t); }
L_3e76:
    X86_TICK(c, 21);
    // 003e76  mov word ptr gs:[ebp + 0x1d8], dx
    X86_AT(c, 0x3e76u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)), (c.r[2] & 0xFFFFu));
    // 003e7e  sub cx, dx
    X86_AT(c, 0x3e7eu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 003e81  inc cx
    X86_AT(c, 0x3e81u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 003e83  mov word ptr gs:[ebp + 0x1c0], cx
    X86_AT(c, 0x3e83u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)), (c.r[1] & 0xFFFFu));
    // 003e8b  shld eax, edx, 0x10
    X86_AT(c, 0x3e8bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 003e8f  shld ebx, ecx, 0x10
    X86_AT(c, 0x3e8fu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 003e93  cmp ax, bx
    X86_AT(c, 0x3e93u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 003e96  jle 0x3e9a
    X86_AT(c, 0x3e96u);
    if (x86_cc(c, 14)) { goto L_3e9a; }
    X86_TICK(c, 3);
    // 003e98  xchg bx, ax
    X86_AT(c, 0x3e98u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3e9a:
    X86_TICK(c, 17);
    // 003e9a  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x3e9au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 003ea2  sub bx, ax
    X86_AT(c, 0x3ea2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003ea5  inc bx
    X86_AT(c, 0x3ea5u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003ea7  mov word ptr gs:[ebp + 0x1c2], bx
    X86_AT(c, 0x3ea7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)), (c.r[3] & 0xFFFFu));
    // 003eaf  push ecx
    X86_AT(c, 0x3eafu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003eb0  jmp 0x3eba
    X86_AT(c, 0x3eb0u);
    goto L_3eba;
L_3eb2:
    X86_TICK(c, 6);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eba:
    X86_TICK(c, 7);
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
    X86_TICK(c, 11);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3e71u, "ran off the end of a function");
}
void f_00003e76(X86Cpu& c) {
    X86_TICK(c, 21);
    // 003e76  mov word ptr gs:[ebp + 0x1d8], dx
    X86_AT(c, 0x3e76u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)), (c.r[2] & 0xFFFFu));
    // 003e7e  sub cx, dx
    X86_AT(c, 0x3e7eu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 003e81  inc cx
    X86_AT(c, 0x3e81u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 003e83  mov word ptr gs:[ebp + 0x1c0], cx
    X86_AT(c, 0x3e83u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)), (c.r[1] & 0xFFFFu));
    // 003e8b  shld eax, edx, 0x10
    X86_AT(c, 0x3e8bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 003e8f  shld ebx, ecx, 0x10
    X86_AT(c, 0x3e8fu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 003e93  cmp ax, bx
    X86_AT(c, 0x3e93u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 003e96  jle 0x3e9a
    X86_AT(c, 0x3e96u);
    if (x86_cc(c, 14)) { goto L_3e9a; }
    X86_TICK(c, 3);
    // 003e98  xchg bx, ax
    X86_AT(c, 0x3e98u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3e9a:
    X86_TICK(c, 17);
    // 003e9a  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x3e9au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 003ea2  sub bx, ax
    X86_AT(c, 0x3ea2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003ea5  inc bx
    X86_AT(c, 0x3ea5u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003ea7  mov word ptr gs:[ebp + 0x1c2], bx
    X86_AT(c, 0x3ea7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)), (c.r[3] & 0xFFFFu));
    // 003eaf  push ecx
    X86_AT(c, 0x3eafu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003eb0  jmp 0x3eba
    X86_AT(c, 0x3eb0u);
    goto L_3eba;
L_3eb2:
    X86_TICK(c, 6);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eba:
    X86_TICK(c, 7);
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
    X86_TICK(c, 11);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3e76u, "ran off the end of a function");
}
void f_00003e7e(X86Cpu& c) {
    X86_TICK(c, 19);
    // 003e7e  sub cx, dx
    X86_AT(c, 0x3e7eu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 003e81  inc cx
    X86_AT(c, 0x3e81u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 003e83  mov word ptr gs:[ebp + 0x1c0], cx
    X86_AT(c, 0x3e83u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)), (c.r[1] & 0xFFFFu));
    // 003e8b  shld eax, edx, 0x10
    X86_AT(c, 0x3e8bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 003e8f  shld ebx, ecx, 0x10
    X86_AT(c, 0x3e8fu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 003e93  cmp ax, bx
    X86_AT(c, 0x3e93u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 003e96  jle 0x3e9a
    X86_AT(c, 0x3e96u);
    if (x86_cc(c, 14)) { goto L_3e9a; }
    X86_TICK(c, 3);
    // 003e98  xchg bx, ax
    X86_AT(c, 0x3e98u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3e9a:
    X86_TICK(c, 17);
    // 003e9a  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x3e9au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 003ea2  sub bx, ax
    X86_AT(c, 0x3ea2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003ea5  inc bx
    X86_AT(c, 0x3ea5u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003ea7  mov word ptr gs:[ebp + 0x1c2], bx
    X86_AT(c, 0x3ea7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)), (c.r[3] & 0xFFFFu));
    // 003eaf  push ecx
    X86_AT(c, 0x3eafu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003eb0  jmp 0x3eba
    X86_AT(c, 0x3eb0u);
    goto L_3eba;
L_3eb2:
    X86_TICK(c, 6);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eba:
    X86_TICK(c, 7);
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
    X86_TICK(c, 11);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3e7eu, "ran off the end of a function");
}
void f_00003e81(X86Cpu& c) {
    X86_TICK(c, 17);
    // 003e81  inc cx
    X86_AT(c, 0x3e81u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_inc(c, v, 2)); }
    // 003e83  mov word ptr gs:[ebp + 0x1c0], cx
    X86_AT(c, 0x3e83u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)), (c.r[1] & 0xFFFFu));
    // 003e8b  shld eax, edx, 0x10
    X86_AT(c, 0x3e8bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 003e8f  shld ebx, ecx, 0x10
    X86_AT(c, 0x3e8fu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 003e93  cmp ax, bx
    X86_AT(c, 0x3e93u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 003e96  jle 0x3e9a
    X86_AT(c, 0x3e96u);
    if (x86_cc(c, 14)) { goto L_3e9a; }
    X86_TICK(c, 3);
    // 003e98  xchg bx, ax
    X86_AT(c, 0x3e98u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3e9a:
    X86_TICK(c, 17);
    // 003e9a  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x3e9au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 003ea2  sub bx, ax
    X86_AT(c, 0x3ea2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003ea5  inc bx
    X86_AT(c, 0x3ea5u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003ea7  mov word ptr gs:[ebp + 0x1c2], bx
    X86_AT(c, 0x3ea7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)), (c.r[3] & 0xFFFFu));
    // 003eaf  push ecx
    X86_AT(c, 0x3eafu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003eb0  jmp 0x3eba
    X86_AT(c, 0x3eb0u);
    goto L_3eba;
L_3eb2:
    X86_TICK(c, 6);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eba:
    X86_TICK(c, 7);
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
    X86_TICK(c, 11);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3e81u, "ran off the end of a function");
}
void f_00003e83(X86Cpu& c) {
    X86_TICK(c, 15);
    // 003e83  mov word ptr gs:[ebp + 0x1c0], cx
    X86_AT(c, 0x3e83u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)), (c.r[1] & 0xFFFFu));
    // 003e8b  shld eax, edx, 0x10
    X86_AT(c, 0x3e8bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 003e8f  shld ebx, ecx, 0x10
    X86_AT(c, 0x3e8fu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 003e93  cmp ax, bx
    X86_AT(c, 0x3e93u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 003e96  jle 0x3e9a
    X86_AT(c, 0x3e96u);
    if (x86_cc(c, 14)) { goto L_3e9a; }
    X86_TICK(c, 3);
    // 003e98  xchg bx, ax
    X86_AT(c, 0x3e98u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3e9a:
    X86_TICK(c, 17);
    // 003e9a  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x3e9au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 003ea2  sub bx, ax
    X86_AT(c, 0x3ea2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003ea5  inc bx
    X86_AT(c, 0x3ea5u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003ea7  mov word ptr gs:[ebp + 0x1c2], bx
    X86_AT(c, 0x3ea7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)), (c.r[3] & 0xFFFFu));
    // 003eaf  push ecx
    X86_AT(c, 0x3eafu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003eb0  jmp 0x3eba
    X86_AT(c, 0x3eb0u);
    goto L_3eba;
L_3eb2:
    X86_TICK(c, 6);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eba:
    X86_TICK(c, 7);
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
    X86_TICK(c, 11);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3e83u, "ran off the end of a function");
}
void f_00003e8b(X86Cpu& c) {
    X86_TICK(c, 13);
    // 003e8b  shld eax, edx, 0x10
    X86_AT(c, 0x3e8bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 003e8f  shld ebx, ecx, 0x10
    X86_AT(c, 0x3e8fu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 003e93  cmp ax, bx
    X86_AT(c, 0x3e93u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 003e96  jle 0x3e9a
    X86_AT(c, 0x3e96u);
    if (x86_cc(c, 14)) { goto L_3e9a; }
    X86_TICK(c, 3);
    // 003e98  xchg bx, ax
    X86_AT(c, 0x3e98u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3e9a:
    X86_TICK(c, 17);
    // 003e9a  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x3e9au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 003ea2  sub bx, ax
    X86_AT(c, 0x3ea2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003ea5  inc bx
    X86_AT(c, 0x3ea5u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003ea7  mov word ptr gs:[ebp + 0x1c2], bx
    X86_AT(c, 0x3ea7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)), (c.r[3] & 0xFFFFu));
    // 003eaf  push ecx
    X86_AT(c, 0x3eafu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003eb0  jmp 0x3eba
    X86_AT(c, 0x3eb0u);
    goto L_3eba;
L_3eb2:
    X86_TICK(c, 6);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eba:
    X86_TICK(c, 7);
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
    X86_TICK(c, 11);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3e8bu, "ran off the end of a function");
}
void f_00003e8f(X86Cpu& c) {
    X86_TICK(c, 10);
    // 003e8f  shld ebx, ecx, 0x10
    X86_AT(c, 0x3e8fu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 003e93  cmp ax, bx
    X86_AT(c, 0x3e93u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 003e96  jle 0x3e9a
    X86_AT(c, 0x3e96u);
    if (x86_cc(c, 14)) { goto L_3e9a; }
    X86_TICK(c, 3);
    // 003e98  xchg bx, ax
    X86_AT(c, 0x3e98u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3e9a:
    X86_TICK(c, 17);
    // 003e9a  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x3e9au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 003ea2  sub bx, ax
    X86_AT(c, 0x3ea2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003ea5  inc bx
    X86_AT(c, 0x3ea5u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003ea7  mov word ptr gs:[ebp + 0x1c2], bx
    X86_AT(c, 0x3ea7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)), (c.r[3] & 0xFFFFu));
    // 003eaf  push ecx
    X86_AT(c, 0x3eafu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003eb0  jmp 0x3eba
    X86_AT(c, 0x3eb0u);
    goto L_3eba;
L_3eb2:
    X86_TICK(c, 6);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eba:
    X86_TICK(c, 7);
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
    X86_TICK(c, 11);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3e8fu, "ran off the end of a function");
}
void f_00003e93(X86Cpu& c) {
    X86_TICK(c, 7);
    // 003e93  cmp ax, bx
    X86_AT(c, 0x3e93u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 003e96  jle 0x3e9a
    X86_AT(c, 0x3e96u);
    if (x86_cc(c, 14)) { goto L_3e9a; }
    X86_TICK(c, 3);
    // 003e98  xchg bx, ax
    X86_AT(c, 0x3e98u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3e9a:
    X86_TICK(c, 17);
    // 003e9a  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x3e9au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 003ea2  sub bx, ax
    X86_AT(c, 0x3ea2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003ea5  inc bx
    X86_AT(c, 0x3ea5u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003ea7  mov word ptr gs:[ebp + 0x1c2], bx
    X86_AT(c, 0x3ea7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)), (c.r[3] & 0xFFFFu));
    // 003eaf  push ecx
    X86_AT(c, 0x3eafu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003eb0  jmp 0x3eba
    X86_AT(c, 0x3eb0u);
    goto L_3eba;
L_3eb2:
    X86_TICK(c, 6);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eba:
    X86_TICK(c, 7);
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
    X86_TICK(c, 11);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3e93u, "ran off the end of a function");
}
void f_00003e96(X86Cpu& c) {
    X86_TICK(c, 5);
    // 003e96  jle 0x3e9a
    X86_AT(c, 0x3e96u);
    if (x86_cc(c, 14)) { goto L_3e9a; }
    X86_TICK(c, 3);
    // 003e98  xchg bx, ax
    X86_AT(c, 0x3e98u);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3e9a:
    X86_TICK(c, 17);
    // 003e9a  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x3e9au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 003ea2  sub bx, ax
    X86_AT(c, 0x3ea2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003ea5  inc bx
    X86_AT(c, 0x3ea5u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003ea7  mov word ptr gs:[ebp + 0x1c2], bx
    X86_AT(c, 0x3ea7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)), (c.r[3] & 0xFFFFu));
    // 003eaf  push ecx
    X86_AT(c, 0x3eafu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003eb0  jmp 0x3eba
    X86_AT(c, 0x3eb0u);
    goto L_3eba;
L_3eb2:
    X86_TICK(c, 6);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eba:
    X86_TICK(c, 7);
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
    X86_TICK(c, 11);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3e96u, "ran off the end of a function");
}
void f_00003e9a(X86Cpu& c) {
    X86_TICK(c, 17);
    // 003e9a  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x3e9au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 003ea2  sub bx, ax
    X86_AT(c, 0x3ea2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003ea5  inc bx
    X86_AT(c, 0x3ea5u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003ea7  mov word ptr gs:[ebp + 0x1c2], bx
    X86_AT(c, 0x3ea7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)), (c.r[3] & 0xFFFFu));
    // 003eaf  push ecx
    X86_AT(c, 0x3eafu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003eb0  jmp 0x3eba
    X86_AT(c, 0x3eb0u);
    goto L_3eba;
L_3eb2:
    X86_TICK(c, 6);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eba:
    X86_TICK(c, 7);
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
    X86_TICK(c, 11);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3e9au, "ran off the end of a function");
}
void f_00003ea2(X86Cpu& c) {
    X86_TICK(c, 15);
    // 003ea2  sub bx, ax
    X86_AT(c, 0x3ea2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003ea5  inc bx
    X86_AT(c, 0x3ea5u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003ea7  mov word ptr gs:[ebp + 0x1c2], bx
    X86_AT(c, 0x3ea7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)), (c.r[3] & 0xFFFFu));
    // 003eaf  push ecx
    X86_AT(c, 0x3eafu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003eb0  jmp 0x3eba
    X86_AT(c, 0x3eb0u);
    goto L_3eba;
L_3eb2:
    X86_TICK(c, 6);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eba:
    X86_TICK(c, 7);
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
    X86_TICK(c, 11);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3ea2u, "ran off the end of a function");
}
void f_00003ea5(X86Cpu& c) {
    X86_TICK(c, 13);
    // 003ea5  inc bx
    X86_AT(c, 0x3ea5u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003ea7  mov word ptr gs:[ebp + 0x1c2], bx
    X86_AT(c, 0x3ea7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)), (c.r[3] & 0xFFFFu));
    // 003eaf  push ecx
    X86_AT(c, 0x3eafu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003eb0  jmp 0x3eba
    X86_AT(c, 0x3eb0u);
    goto L_3eba;
L_3eb2:
    X86_TICK(c, 6);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eba:
    X86_TICK(c, 7);
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
    X86_TICK(c, 11);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3ea5u, "ran off the end of a function");
}
void f_00003ea7(X86Cpu& c) {
    X86_TICK(c, 11);
    // 003ea7  mov word ptr gs:[ebp + 0x1c2], bx
    X86_AT(c, 0x3ea7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)), (c.r[3] & 0xFFFFu));
    // 003eaf  push ecx
    X86_AT(c, 0x3eafu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003eb0  jmp 0x3eba
    X86_AT(c, 0x3eb0u);
    goto L_3eba;
L_3eb2:
    X86_TICK(c, 6);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eba:
    X86_TICK(c, 7);
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
    X86_TICK(c, 11);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3ea7u, "ran off the end of a function");
}
void f_00003eaf(X86Cpu& c) {
    X86_TICK(c, 9);
    // 003eaf  push ecx
    X86_AT(c, 0x3eafu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003eb0  jmp 0x3eba
    X86_AT(c, 0x3eb0u);
    goto L_3eba;
L_3eb2:
    X86_TICK(c, 6);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eba:
    X86_TICK(c, 7);
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
    X86_TICK(c, 11);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3eafu, "ran off the end of a function");
}
void f_00003eb0(X86Cpu& c) {
    X86_TICK(c, 7);
    // 003eb0  jmp 0x3eba
    X86_AT(c, 0x3eb0u);
    goto L_3eba;
L_3eb2:
    X86_TICK(c, 6);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eba:
    X86_TICK(c, 7);
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
    X86_TICK(c, 11);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3eb0u, "ran off the end of a function");
}
void f_00003eb2(X86Cpu& c) {
L_3eb2:
    X86_TICK(c, 13);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
    X86_TICK(c, 11);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3eb2u, "ran off the end of a function");
}
void f_00003eba(X86Cpu& c) {
    goto L_3eba;
L_3eb2:
    X86_TICK(c, 6);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eba:
    X86_TICK(c, 7);
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
    X86_TICK(c, 11);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3ebau, "ran off the end of a function");
}
void f_00003ec1(X86Cpu& c) {
    goto L_3ec1;
L_3eb2:
    X86_TICK(c, 13);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
L_3ec1:
    X86_TICK(c, 11);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3ec1u, "ran off the end of a function");
}
void f_00003ec5(X86Cpu& c) {
    goto L_3ec5;
L_3eb2:
    X86_TICK(c, 13);
    // 003eb2  inc word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3eb2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 003eba  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3ebau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ec1u); x86_call(c, t); X86_RET(c, 0x3ec1u); }
    X86_TICK(c, 6);
    // 003ec1  dec word ptr [esp]
    X86_AT(c, 0x3ec1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3ec5:
    X86_TICK(c, 5);
    // 003ec5  jne 0x3eb2
    X86_AT(c, 0x3ec5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3eb2u); goto L_3eb2; }
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3ec5u, "ran off the end of a function");
}
void f_00003ec7(X86Cpu& c) {
    X86_TICK(c, 12);
    // 003ec7  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ec7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3ec7u, "ran off the end of a function");
}
void f_00003ecf(X86Cpu& c) {
    X86_TICK(c, 5);
    // 003ecf  jne 0x3ed9
    X86_AT(c, 0x3ecfu);
    if (x86_cc(c, 5)) { goto L_3ed9; }
    X86_TICK(c, 2);
    // 003ed1  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3ed1u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3ed9:
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3ecfu, "ran off the end of a function");
}
void f_00003ed9(X86Cpu& c) {
    X86_TICK(c, 15);
    // 003ed9  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3ed9u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3ed9u, "ran off the end of a function");
}
void f_00003ee1(X86Cpu& c) {
    X86_TICK(c, 9);
    // 003ee1  push ecx
    X86_AT(c, 0x3ee1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3ee1u, "ran off the end of a function");
}
void f_00003ee2(X86Cpu& c) {
    X86_TICK(c, 7);
    // 003ee2  jmp 0x3eec
    X86_AT(c, 0x3ee2u);
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3ee2u, "ran off the end of a function");
}
void f_00003ee4(X86Cpu& c) {
L_3ee4:
    X86_TICK(c, 13);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3ee4u, "ran off the end of a function");
}
void f_00003eec(X86Cpu& c) {
    goto L_3eec;
L_3ee4:
    X86_TICK(c, 6);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_3eec:
    X86_TICK(c, 7);
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3eecu, "ran off the end of a function");
}
void f_00003ef3(X86Cpu& c) {
    goto L_3ef3;
L_3ee4:
    X86_TICK(c, 13);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
L_3ef3:
    X86_TICK(c, 11);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3ef3u, "ran off the end of a function");
}
void f_00003ef6(X86Cpu& c) {
    goto L_3ef6;
L_3ee4:
    X86_TICK(c, 13);
    // 003ee4  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3ee4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 003eec  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3eecu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3ef3u); x86_call(c, t); X86_RET(c, 0x3ef3u); }
    X86_TICK(c, 6);
    // 003ef3  dec dword ptr [esp]
    X86_AT(c, 0x3ef3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_3ef6:
    X86_TICK(c, 5);
    // 003ef6  jne 0x3ee4
    X86_AT(c, 0x3ef6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3ee4u); goto L_3ee4; }
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3ef6u, "ran off the end of a function");
}
void f_00003ef8(X86Cpu& c) {
    X86_TICK(c, 12);
    // 003ef8  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3ef8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3ef8u, "ran off the end of a function");
}
void f_00003f00(X86Cpu& c) {
    X86_TICK(c, 5);
    // 003f00  jne 0x3f0a
    X86_AT(c, 0x3f00u);
    if (x86_cc(c, 5)) { goto L_3f0a; }
    X86_TICK(c, 2);
    // 003f02  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f02u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f0a:
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3f00u, "ran off the end of a function");
}
void f_00003f0a(X86Cpu& c) {
    X86_TICK(c, 15);
    // 003f0a  movzx ecx, word ptr gs:[ebp + 0x1c0]
    X86_AT(c, 0x3f0au);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C0u)));
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3f0au, "ran off the end of a function");
}
void f_00003f12(X86Cpu& c) {
    X86_TICK(c, 9);
    // 003f12  push ecx
    X86_AT(c, 0x3f12u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3f12u, "ran off the end of a function");
}
void f_00003f13(X86Cpu& c) {
    X86_TICK(c, 7);
    // 003f13  jmp 0x3f1d
    X86_AT(c, 0x3f13u);
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3f13u, "ran off the end of a function");
}
void f_00003f15(X86Cpu& c) {
L_3f15:
    X86_TICK(c, 13);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3f15u, "ran off the end of a function");
}
void f_00003f1d(X86Cpu& c) {
    goto L_3f1d;
L_3f15:
    X86_TICK(c, 6);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f1d:
    X86_TICK(c, 7);
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3f1du, "ran off the end of a function");
}
void f_00003f24(X86Cpu& c) {
    goto L_3f24;
L_3f15:
    X86_TICK(c, 13);
    // 003f15  dec word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x3f15u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003f1d  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f1du);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f24u); x86_call(c, t); X86_RET(c, 0x3f24u); }
L_3f24:
    X86_TICK(c, 11);
    // 003f24  dec dword ptr [esp]
    X86_AT(c, 0x3f24u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f27  jne 0x3f15
    X86_AT(c, 0x3f27u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f15u); goto L_3f15; }
    X86_TICK(c, 12);
    // 003f29  cmp byte ptr gs:[ebp + 0x1e0], 0
    X86_AT(c, 0x3f29u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u))), 0x0u, 0, 1);
    // 003f31  jne 0x3f3b
    X86_AT(c, 0x3f31u);
    if (x86_cc(c, 5)) { goto L_3f3b; }
    X86_TICK(c, 2);
    // 003f33  mov byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x3f33u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), 0xFFu);
L_3f3b:
    X86_TICK(c, 15);
    // 003f3b  movzx ecx, word ptr gs:[ebp + 0x1c2]
    X86_AT(c, 0x3f3bu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C2u)));
    // 003f43  push ecx
    X86_AT(c, 0x3f43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 003f44  jmp 0x3f4e
    X86_AT(c, 0x3f44u);
    goto L_3f4e;
L_3f46:
    X86_TICK(c, 6);
    // 003f46  dec word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3f46u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_3f4e:
    X86_TICK(c, 7);
    // 003f4e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x3f4eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x3f55u); x86_call(c, t); X86_RET(c, 0x3f55u); }
    X86_TICK(c, 11);
    // 003f55  dec dword ptr [esp]
    X86_AT(c, 0x3f55u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 003f58  jne 0x3f46
    X86_AT(c, 0x3f58u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3f46u); goto L_3f46; }
    X86_TICK(c, 12);
    // 003f5a  add esp, 0x10
    X86_AT(c, 0x3f5au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 003f5d  ret 
    X86_AT(c, 0x3f5du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x3f24u, "ran off the end of a function");
}
}
