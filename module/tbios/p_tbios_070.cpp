#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00003f9e(X86Cpu& c) {
    goto L_3f9e;
L_3cff:
    X86_TICK(c, 20);
    // 003cff  mov word ptr gs:[ebp + 0x392], ax
    X86_AT(c, 0x3cffu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x392u)), (c.r[0] & 0xFFFFu));
    // 003d07  mov word ptr gs:[ebp + 0x394], bx
    X86_AT(c, 0x3d07u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x394u)), (c.r[3] & 0xFFFFu));
    // 003d0f  mov ecx, dword ptr gs:[ebp + 0x390]
    X86_AT(c, 0x3d0fu);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x390u)));
    // 003d16  mov dword ptr gs:[ebp + 0x1d8], ecx
    X86_AT(c, 0x3d16u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)), c.r[1]);
    // 003d1d  sub bx, ax
    X86_AT(c, 0x3d1du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003d20  inc bx
    X86_AT(c, 0x3d20u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003d22  push ebx
    X86_AT(c, 0x3d22u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 003d23  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x3d23u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
L_3d27:
    X86_TICK(c, 7);
    // 003d27  call dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x3d27u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u))); push32(c, 0x3d2eu); x86_call(c, t); X86_RET(c, 0x3d2eu); }
    X86_TICK(c, 17);
    // 003d2e  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3d2eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 003d36  dec word ptr [esp]
    X86_AT(c, 0x3d36u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003d3a  jne 0x3d27
    X86_AT(c, 0x3d3au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3d27u); goto L_3d27; }
    X86_TICK(c, 2);
    // 003d3c  add esp, 4
    X86_AT(c, 0x3d3cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_3d3f:
    X86_TICK(c, 10);
    // 003d3f  ret 
    X86_AT(c, 0x3d3fu);
    c.eip = pop32(c); return;
L_3d40:
    X86_TICK(c, 17);
    // 003d40  mov word ptr gs:[ebp + 0x390], ax
    X86_AT(c, 0x3d40u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x390u)), (c.r[0] & 0xFFFFu));
    // 003d48  mov ax, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x3d48u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 003d50  mov bx, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x3d50u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 003d58  cmp ax, bx
    X86_AT(c, 0x3d58u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 003d5b  jle 0x3d5f
    X86_AT(c, 0x3d5bu);
    if (x86_cc(c, 14)) { goto L_3d5f; }
    X86_TICK(c, 3);
    // 003d5d  xchg bx, ax
    X86_AT(c, 0x3d5du);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3d5f:
    X86_TICK(c, 11);
    // 003d5f  mov dx, bx
    X86_AT(c, 0x3d5fu);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 003d62  sub dx, ax
    X86_AT(c, 0x3d62u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003d65  dec dx
    X86_AT(c, 0x3d65u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 003d67  je 0x3d3f
    X86_AT(c, 0x3d67u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x3d3fu); goto L_3d3f; }
    X86_TICK(c, 11);
    // 003d69  inc ax
    X86_AT(c, 0x3d69u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 003d6b  dec bx
    X86_AT(c, 0x3d6bu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 003d6d  jmp 0x3cff
    X86_AT(c, 0x3d6du);
    X86_POLL(c, 0x3cffu); goto L_3cff;
L_3f9e:
    X86_TICK(c, 7);
    // 003f9e  call 0x3cac
    X86_AT(c, 0x3f9eu);
    push32(c, 0x3fa3u); f_00003cac(c); X86_RET(c, 0x3fa3u);
    X86_TICK(c, 11);
    // 003fa3  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x3fa3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 003fab  call 0x3d40
    X86_AT(c, 0x3fabu);
    push32(c, 0x3fb0u); f_00003d40(c); X86_RET(c, 0x3fb0u);
    X86_TICK(c, 11);
    // 003fb0  mov ax, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x3fb0u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 003fb8  call 0x3cac
    X86_AT(c, 0x3fb8u);
    push32(c, 0x3fbdu); f_00003cac(c); X86_RET(c, 0x3fbdu);
    X86_TICK(c, 11);
    // 003fbd  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x3fbdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 003fc5  jmp 0x3d40
    X86_AT(c, 0x3fc5u);
    X86_POLL(c, 0x3d40u); goto L_3d40;
    x86_fault(c, 0x3f9eu, "ran off the end of a function");
}
void f_00003fa3(X86Cpu& c) {
    goto L_3fa3;
L_3cff:
    X86_TICK(c, 20);
    // 003cff  mov word ptr gs:[ebp + 0x392], ax
    X86_AT(c, 0x3cffu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x392u)), (c.r[0] & 0xFFFFu));
    // 003d07  mov word ptr gs:[ebp + 0x394], bx
    X86_AT(c, 0x3d07u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x394u)), (c.r[3] & 0xFFFFu));
    // 003d0f  mov ecx, dword ptr gs:[ebp + 0x390]
    X86_AT(c, 0x3d0fu);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x390u)));
    // 003d16  mov dword ptr gs:[ebp + 0x1d8], ecx
    X86_AT(c, 0x3d16u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)), c.r[1]);
    // 003d1d  sub bx, ax
    X86_AT(c, 0x3d1du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003d20  inc bx
    X86_AT(c, 0x3d20u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003d22  push ebx
    X86_AT(c, 0x3d22u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 003d23  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x3d23u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
L_3d27:
    X86_TICK(c, 7);
    // 003d27  call dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x3d27u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u))); push32(c, 0x3d2eu); x86_call(c, t); X86_RET(c, 0x3d2eu); }
    X86_TICK(c, 17);
    // 003d2e  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3d2eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 003d36  dec word ptr [esp]
    X86_AT(c, 0x3d36u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003d3a  jne 0x3d27
    X86_AT(c, 0x3d3au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3d27u); goto L_3d27; }
    X86_TICK(c, 2);
    // 003d3c  add esp, 4
    X86_AT(c, 0x3d3cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_3d3f:
    X86_TICK(c, 10);
    // 003d3f  ret 
    X86_AT(c, 0x3d3fu);
    c.eip = pop32(c); return;
L_3d40:
    X86_TICK(c, 17);
    // 003d40  mov word ptr gs:[ebp + 0x390], ax
    X86_AT(c, 0x3d40u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x390u)), (c.r[0] & 0xFFFFu));
    // 003d48  mov ax, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x3d48u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 003d50  mov bx, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x3d50u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 003d58  cmp ax, bx
    X86_AT(c, 0x3d58u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 003d5b  jle 0x3d5f
    X86_AT(c, 0x3d5bu);
    if (x86_cc(c, 14)) { goto L_3d5f; }
    X86_TICK(c, 3);
    // 003d5d  xchg bx, ax
    X86_AT(c, 0x3d5du);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3d5f:
    X86_TICK(c, 11);
    // 003d5f  mov dx, bx
    X86_AT(c, 0x3d5fu);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 003d62  sub dx, ax
    X86_AT(c, 0x3d62u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003d65  dec dx
    X86_AT(c, 0x3d65u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 003d67  je 0x3d3f
    X86_AT(c, 0x3d67u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x3d3fu); goto L_3d3f; }
    X86_TICK(c, 11);
    // 003d69  inc ax
    X86_AT(c, 0x3d69u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 003d6b  dec bx
    X86_AT(c, 0x3d6bu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 003d6d  jmp 0x3cff
    X86_AT(c, 0x3d6du);
    X86_POLL(c, 0x3cffu); goto L_3cff;
L_3fa3:
    X86_TICK(c, 11);
    // 003fa3  mov ax, word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x3fa3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u))));
    // 003fab  call 0x3d40
    X86_AT(c, 0x3fabu);
    push32(c, 0x3fb0u); f_00003d40(c); X86_RET(c, 0x3fb0u);
    X86_TICK(c, 11);
    // 003fb0  mov ax, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x3fb0u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 003fb8  call 0x3cac
    X86_AT(c, 0x3fb8u);
    push32(c, 0x3fbdu); f_00003cac(c); X86_RET(c, 0x3fbdu);
    X86_TICK(c, 11);
    // 003fbd  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x3fbdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 003fc5  jmp 0x3d40
    X86_AT(c, 0x3fc5u);
    X86_POLL(c, 0x3d40u); goto L_3d40;
    x86_fault(c, 0x3fa3u, "ran off the end of a function");
}
void f_00003fab(X86Cpu& c) {
    goto L_3fab;
L_3cff:
    X86_TICK(c, 20);
    // 003cff  mov word ptr gs:[ebp + 0x392], ax
    X86_AT(c, 0x3cffu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x392u)), (c.r[0] & 0xFFFFu));
    // 003d07  mov word ptr gs:[ebp + 0x394], bx
    X86_AT(c, 0x3d07u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x394u)), (c.r[3] & 0xFFFFu));
    // 003d0f  mov ecx, dword ptr gs:[ebp + 0x390]
    X86_AT(c, 0x3d0fu);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x390u)));
    // 003d16  mov dword ptr gs:[ebp + 0x1d8], ecx
    X86_AT(c, 0x3d16u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)), c.r[1]);
    // 003d1d  sub bx, ax
    X86_AT(c, 0x3d1du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003d20  inc bx
    X86_AT(c, 0x3d20u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003d22  push ebx
    X86_AT(c, 0x3d22u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 003d23  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x3d23u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
L_3d27:
    X86_TICK(c, 7);
    // 003d27  call dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x3d27u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u))); push32(c, 0x3d2eu); x86_call(c, t); X86_RET(c, 0x3d2eu); }
    X86_TICK(c, 17);
    // 003d2e  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3d2eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 003d36  dec word ptr [esp]
    X86_AT(c, 0x3d36u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003d3a  jne 0x3d27
    X86_AT(c, 0x3d3au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3d27u); goto L_3d27; }
    X86_TICK(c, 2);
    // 003d3c  add esp, 4
    X86_AT(c, 0x3d3cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_3d3f:
    X86_TICK(c, 10);
    // 003d3f  ret 
    X86_AT(c, 0x3d3fu);
    c.eip = pop32(c); return;
L_3d40:
    X86_TICK(c, 17);
    // 003d40  mov word ptr gs:[ebp + 0x390], ax
    X86_AT(c, 0x3d40u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x390u)), (c.r[0] & 0xFFFFu));
    // 003d48  mov ax, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x3d48u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 003d50  mov bx, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x3d50u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 003d58  cmp ax, bx
    X86_AT(c, 0x3d58u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 003d5b  jle 0x3d5f
    X86_AT(c, 0x3d5bu);
    if (x86_cc(c, 14)) { goto L_3d5f; }
    X86_TICK(c, 3);
    // 003d5d  xchg bx, ax
    X86_AT(c, 0x3d5du);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3d5f:
    X86_TICK(c, 11);
    // 003d5f  mov dx, bx
    X86_AT(c, 0x3d5fu);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 003d62  sub dx, ax
    X86_AT(c, 0x3d62u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003d65  dec dx
    X86_AT(c, 0x3d65u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 003d67  je 0x3d3f
    X86_AT(c, 0x3d67u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x3d3fu); goto L_3d3f; }
    X86_TICK(c, 11);
    // 003d69  inc ax
    X86_AT(c, 0x3d69u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 003d6b  dec bx
    X86_AT(c, 0x3d6bu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 003d6d  jmp 0x3cff
    X86_AT(c, 0x3d6du);
    X86_POLL(c, 0x3cffu); goto L_3cff;
L_3fab:
    X86_TICK(c, 7);
    // 003fab  call 0x3d40
    X86_AT(c, 0x3fabu);
    push32(c, 0x3fb0u); f_00003d40(c); X86_RET(c, 0x3fb0u);
    X86_TICK(c, 11);
    // 003fb0  mov ax, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x3fb0u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 003fb8  call 0x3cac
    X86_AT(c, 0x3fb8u);
    push32(c, 0x3fbdu); f_00003cac(c); X86_RET(c, 0x3fbdu);
    X86_TICK(c, 11);
    // 003fbd  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x3fbdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 003fc5  jmp 0x3d40
    X86_AT(c, 0x3fc5u);
    X86_POLL(c, 0x3d40u); goto L_3d40;
    x86_fault(c, 0x3fabu, "ran off the end of a function");
}
void f_00003fb0(X86Cpu& c) {
    goto L_3fb0;
L_3cff:
    X86_TICK(c, 20);
    // 003cff  mov word ptr gs:[ebp + 0x392], ax
    X86_AT(c, 0x3cffu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x392u)), (c.r[0] & 0xFFFFu));
    // 003d07  mov word ptr gs:[ebp + 0x394], bx
    X86_AT(c, 0x3d07u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x394u)), (c.r[3] & 0xFFFFu));
    // 003d0f  mov ecx, dword ptr gs:[ebp + 0x390]
    X86_AT(c, 0x3d0fu);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x390u)));
    // 003d16  mov dword ptr gs:[ebp + 0x1d8], ecx
    X86_AT(c, 0x3d16u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)), c.r[1]);
    // 003d1d  sub bx, ax
    X86_AT(c, 0x3d1du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003d20  inc bx
    X86_AT(c, 0x3d20u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003d22  push ebx
    X86_AT(c, 0x3d22u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 003d23  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x3d23u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
L_3d27:
    X86_TICK(c, 7);
    // 003d27  call dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x3d27u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u))); push32(c, 0x3d2eu); x86_call(c, t); X86_RET(c, 0x3d2eu); }
    X86_TICK(c, 17);
    // 003d2e  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3d2eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 003d36  dec word ptr [esp]
    X86_AT(c, 0x3d36u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003d3a  jne 0x3d27
    X86_AT(c, 0x3d3au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3d27u); goto L_3d27; }
    X86_TICK(c, 2);
    // 003d3c  add esp, 4
    X86_AT(c, 0x3d3cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_3d3f:
    X86_TICK(c, 10);
    // 003d3f  ret 
    X86_AT(c, 0x3d3fu);
    c.eip = pop32(c); return;
L_3d40:
    X86_TICK(c, 17);
    // 003d40  mov word ptr gs:[ebp + 0x390], ax
    X86_AT(c, 0x3d40u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x390u)), (c.r[0] & 0xFFFFu));
    // 003d48  mov ax, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x3d48u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 003d50  mov bx, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x3d50u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 003d58  cmp ax, bx
    X86_AT(c, 0x3d58u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 003d5b  jle 0x3d5f
    X86_AT(c, 0x3d5bu);
    if (x86_cc(c, 14)) { goto L_3d5f; }
    X86_TICK(c, 3);
    // 003d5d  xchg bx, ax
    X86_AT(c, 0x3d5du);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3d5f:
    X86_TICK(c, 11);
    // 003d5f  mov dx, bx
    X86_AT(c, 0x3d5fu);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 003d62  sub dx, ax
    X86_AT(c, 0x3d62u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003d65  dec dx
    X86_AT(c, 0x3d65u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 003d67  je 0x3d3f
    X86_AT(c, 0x3d67u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x3d3fu); goto L_3d3f; }
    X86_TICK(c, 11);
    // 003d69  inc ax
    X86_AT(c, 0x3d69u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 003d6b  dec bx
    X86_AT(c, 0x3d6bu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 003d6d  jmp 0x3cff
    X86_AT(c, 0x3d6du);
    X86_POLL(c, 0x3cffu); goto L_3cff;
L_3fb0:
    X86_TICK(c, 11);
    // 003fb0  mov ax, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x3fb0u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 003fb8  call 0x3cac
    X86_AT(c, 0x3fb8u);
    push32(c, 0x3fbdu); f_00003cac(c); X86_RET(c, 0x3fbdu);
    X86_TICK(c, 11);
    // 003fbd  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x3fbdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 003fc5  jmp 0x3d40
    X86_AT(c, 0x3fc5u);
    X86_POLL(c, 0x3d40u); goto L_3d40;
    x86_fault(c, 0x3fb0u, "ran off the end of a function");
}
void f_00003fb8(X86Cpu& c) {
    goto L_3fb8;
L_3cff:
    X86_TICK(c, 20);
    // 003cff  mov word ptr gs:[ebp + 0x392], ax
    X86_AT(c, 0x3cffu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x392u)), (c.r[0] & 0xFFFFu));
    // 003d07  mov word ptr gs:[ebp + 0x394], bx
    X86_AT(c, 0x3d07u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x394u)), (c.r[3] & 0xFFFFu));
    // 003d0f  mov ecx, dword ptr gs:[ebp + 0x390]
    X86_AT(c, 0x3d0fu);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x390u)));
    // 003d16  mov dword ptr gs:[ebp + 0x1d8], ecx
    X86_AT(c, 0x3d16u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)), c.r[1]);
    // 003d1d  sub bx, ax
    X86_AT(c, 0x3d1du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003d20  inc bx
    X86_AT(c, 0x3d20u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003d22  push ebx
    X86_AT(c, 0x3d22u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 003d23  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x3d23u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
L_3d27:
    X86_TICK(c, 7);
    // 003d27  call dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x3d27u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u))); push32(c, 0x3d2eu); x86_call(c, t); X86_RET(c, 0x3d2eu); }
    X86_TICK(c, 17);
    // 003d2e  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3d2eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 003d36  dec word ptr [esp]
    X86_AT(c, 0x3d36u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003d3a  jne 0x3d27
    X86_AT(c, 0x3d3au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3d27u); goto L_3d27; }
    X86_TICK(c, 2);
    // 003d3c  add esp, 4
    X86_AT(c, 0x3d3cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_3d3f:
    X86_TICK(c, 10);
    // 003d3f  ret 
    X86_AT(c, 0x3d3fu);
    c.eip = pop32(c); return;
L_3d40:
    X86_TICK(c, 17);
    // 003d40  mov word ptr gs:[ebp + 0x390], ax
    X86_AT(c, 0x3d40u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x390u)), (c.r[0] & 0xFFFFu));
    // 003d48  mov ax, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x3d48u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 003d50  mov bx, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x3d50u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 003d58  cmp ax, bx
    X86_AT(c, 0x3d58u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 003d5b  jle 0x3d5f
    X86_AT(c, 0x3d5bu);
    if (x86_cc(c, 14)) { goto L_3d5f; }
    X86_TICK(c, 3);
    // 003d5d  xchg bx, ax
    X86_AT(c, 0x3d5du);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3d5f:
    X86_TICK(c, 11);
    // 003d5f  mov dx, bx
    X86_AT(c, 0x3d5fu);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 003d62  sub dx, ax
    X86_AT(c, 0x3d62u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003d65  dec dx
    X86_AT(c, 0x3d65u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 003d67  je 0x3d3f
    X86_AT(c, 0x3d67u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x3d3fu); goto L_3d3f; }
    X86_TICK(c, 11);
    // 003d69  inc ax
    X86_AT(c, 0x3d69u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 003d6b  dec bx
    X86_AT(c, 0x3d6bu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 003d6d  jmp 0x3cff
    X86_AT(c, 0x3d6du);
    X86_POLL(c, 0x3cffu); goto L_3cff;
L_3fb8:
    X86_TICK(c, 7);
    // 003fb8  call 0x3cac
    X86_AT(c, 0x3fb8u);
    push32(c, 0x3fbdu); f_00003cac(c); X86_RET(c, 0x3fbdu);
    X86_TICK(c, 11);
    // 003fbd  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x3fbdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 003fc5  jmp 0x3d40
    X86_AT(c, 0x3fc5u);
    X86_POLL(c, 0x3d40u); goto L_3d40;
    x86_fault(c, 0x3fb8u, "ran off the end of a function");
}
void f_00003fbd(X86Cpu& c) {
    goto L_3fbd;
L_3cff:
    X86_TICK(c, 20);
    // 003cff  mov word ptr gs:[ebp + 0x392], ax
    X86_AT(c, 0x3cffu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x392u)), (c.r[0] & 0xFFFFu));
    // 003d07  mov word ptr gs:[ebp + 0x394], bx
    X86_AT(c, 0x3d07u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x394u)), (c.r[3] & 0xFFFFu));
    // 003d0f  mov ecx, dword ptr gs:[ebp + 0x390]
    X86_AT(c, 0x3d0fu);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x390u)));
    // 003d16  mov dword ptr gs:[ebp + 0x1d8], ecx
    X86_AT(c, 0x3d16u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)), c.r[1]);
    // 003d1d  sub bx, ax
    X86_AT(c, 0x3d1du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003d20  inc bx
    X86_AT(c, 0x3d20u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003d22  push ebx
    X86_AT(c, 0x3d22u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 003d23  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x3d23u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
L_3d27:
    X86_TICK(c, 7);
    // 003d27  call dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x3d27u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u))); push32(c, 0x3d2eu); x86_call(c, t); X86_RET(c, 0x3d2eu); }
    X86_TICK(c, 17);
    // 003d2e  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3d2eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 003d36  dec word ptr [esp]
    X86_AT(c, 0x3d36u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003d3a  jne 0x3d27
    X86_AT(c, 0x3d3au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3d27u); goto L_3d27; }
    X86_TICK(c, 2);
    // 003d3c  add esp, 4
    X86_AT(c, 0x3d3cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_3d3f:
    X86_TICK(c, 10);
    // 003d3f  ret 
    X86_AT(c, 0x3d3fu);
    c.eip = pop32(c); return;
L_3d40:
    X86_TICK(c, 17);
    // 003d40  mov word ptr gs:[ebp + 0x390], ax
    X86_AT(c, 0x3d40u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x390u)), (c.r[0] & 0xFFFFu));
    // 003d48  mov ax, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x3d48u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 003d50  mov bx, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x3d50u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 003d58  cmp ax, bx
    X86_AT(c, 0x3d58u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 003d5b  jle 0x3d5f
    X86_AT(c, 0x3d5bu);
    if (x86_cc(c, 14)) { goto L_3d5f; }
    X86_TICK(c, 3);
    // 003d5d  xchg bx, ax
    X86_AT(c, 0x3d5du);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3d5f:
    X86_TICK(c, 11);
    // 003d5f  mov dx, bx
    X86_AT(c, 0x3d5fu);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 003d62  sub dx, ax
    X86_AT(c, 0x3d62u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003d65  dec dx
    X86_AT(c, 0x3d65u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 003d67  je 0x3d3f
    X86_AT(c, 0x3d67u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x3d3fu); goto L_3d3f; }
    X86_TICK(c, 11);
    // 003d69  inc ax
    X86_AT(c, 0x3d69u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 003d6b  dec bx
    X86_AT(c, 0x3d6bu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 003d6d  jmp 0x3cff
    X86_AT(c, 0x3d6du);
    X86_POLL(c, 0x3cffu); goto L_3cff;
L_3fbd:
    X86_TICK(c, 11);
    // 003fbd  mov ax, word ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x3fbdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u))));
    // 003fc5  jmp 0x3d40
    X86_AT(c, 0x3fc5u);
    X86_POLL(c, 0x3d40u); goto L_3d40;
    x86_fault(c, 0x3fbdu, "ran off the end of a function");
}
void f_00003fc5(X86Cpu& c) {
    goto L_3fc5;
L_3cff:
    X86_TICK(c, 20);
    // 003cff  mov word ptr gs:[ebp + 0x392], ax
    X86_AT(c, 0x3cffu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x392u)), (c.r[0] & 0xFFFFu));
    // 003d07  mov word ptr gs:[ebp + 0x394], bx
    X86_AT(c, 0x3d07u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x394u)), (c.r[3] & 0xFFFFu));
    // 003d0f  mov ecx, dword ptr gs:[ebp + 0x390]
    X86_AT(c, 0x3d0fu);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x390u)));
    // 003d16  mov dword ptr gs:[ebp + 0x1d8], ecx
    X86_AT(c, 0x3d16u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)), c.r[1]);
    // 003d1d  sub bx, ax
    X86_AT(c, 0x3d1du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003d20  inc bx
    X86_AT(c, 0x3d20u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_inc(c, v, 2)); }
    // 003d22  push ebx
    X86_AT(c, 0x3d22u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 003d23  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x3d23u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
L_3d27:
    X86_TICK(c, 7);
    // 003d27  call dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x3d27u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u))); push32(c, 0x3d2eu); x86_call(c, t); X86_RET(c, 0x3d2eu); }
    X86_TICK(c, 17);
    // 003d2e  inc word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x3d2eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 003d36  dec word ptr [esp]
    X86_AT(c, 0x3d36u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 003d3a  jne 0x3d27
    X86_AT(c, 0x3d3au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x3d27u); goto L_3d27; }
    X86_TICK(c, 2);
    // 003d3c  add esp, 4
    X86_AT(c, 0x3d3cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_3d3f:
    X86_TICK(c, 10);
    // 003d3f  ret 
    X86_AT(c, 0x3d3fu);
    c.eip = pop32(c); return;
L_3d40:
    X86_TICK(c, 17);
    // 003d40  mov word ptr gs:[ebp + 0x390], ax
    X86_AT(c, 0x3d40u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x390u)), (c.r[0] & 0xFFFFu));
    // 003d48  mov ax, word ptr gs:[ebp + 0x1c6]
    X86_AT(c, 0x3d48u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u))));
    // 003d50  mov bx, word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0x3d50u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu))));
    // 003d58  cmp ax, bx
    X86_AT(c, 0x3d58u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 003d5b  jle 0x3d5f
    X86_AT(c, 0x3d5bu);
    if (x86_cc(c, 14)) { goto L_3d5f; }
    X86_TICK(c, 3);
    // 003d5d  xchg bx, ax
    X86_AT(c, 0x3d5du);
    { uint32_t t = (c.r[3] & 0xFFFFu); s16(c, 3, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3d5f:
    X86_TICK(c, 11);
    // 003d5f  mov dx, bx
    X86_AT(c, 0x3d5fu);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 003d62  sub dx, ax
    X86_AT(c, 0x3d62u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003d65  dec dx
    X86_AT(c, 0x3d65u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 003d67  je 0x3d3f
    X86_AT(c, 0x3d67u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x3d3fu); goto L_3d3f; }
    X86_TICK(c, 11);
    // 003d69  inc ax
    X86_AT(c, 0x3d69u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 003d6b  dec bx
    X86_AT(c, 0x3d6bu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 003d6d  jmp 0x3cff
    X86_AT(c, 0x3d6du);
    X86_POLL(c, 0x3cffu); goto L_3cff;
L_3fc5:
    X86_TICK(c, 7);
    // 003fc5  jmp 0x3d40
    X86_AT(c, 0x3fc5u);
    X86_POLL(c, 0x3d40u); goto L_3d40;
    x86_fault(c, 0x3fc5u, "ran off the end of a function");
}
void f_00003fcc(X86Cpu& c) {
    X86_TICK(c, 15);
    // 003fcc  mov eax, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0x3fccu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 003fd3  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x3fd3u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 003fda  cmp ax, cx
    X86_AT(c, 0x3fdau);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 003fdd  je 0x4025
    X86_AT(c, 0x3fddu);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 5);
    // 003fdf  jle 0x3fe3
    X86_AT(c, 0x3fdfu);
    if (x86_cc(c, 14)) { goto L_3fe3; }
    X86_TICK(c, 3);
    // 003fe1  xchg cx, ax
    X86_AT(c, 0x3fe1u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3fe3:
    X86_TICK(c, 11);
    // 003fe3  mov dx, cx
    X86_AT(c, 0x3fe3u);
    s16(c, 2, (c.r[1] & 0xFFFFu));
    // 003fe6  sub dx, ax
    X86_AT(c, 0x3fe6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003fe9  dec dx
    X86_AT(c, 0x3fe9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 003feb  je 0x4025
    X86_AT(c, 0x3febu);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 21);
    // 003fed  inc ax
    X86_AT(c, 0x3fedu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 003fef  dec cx
    X86_AT(c, 0x3fefu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 003ff1  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x3ff1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 003ff9  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x3ff9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 004001  shr eax, 0x10
    X86_AT(c, 0x4001u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004004  shr ecx, 0x10
    X86_AT(c, 0x4004u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004007  cmp ax, cx
    X86_AT(c, 0x4007u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00400a  je 0x4025
    X86_AT(c, 0x400au);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 5);
    // 00400c  jle 0x400f
    X86_AT(c, 0x400cu);
    if (x86_cc(c, 14)) { goto L_400f; }
    X86_TICK(c, 3);
    // 00400e  xchg ecx, eax
    X86_AT(c, 0x400eu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_400f:
    X86_TICK(c, 11);
    // 00400f  mov edx, ecx
    X86_AT(c, 0x400fu);
    c.r[2] = c.r[1];
    // 004011  sub dx, ax
    X86_AT(c, 0x4011u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004014  dec edx
    X86_AT(c, 0x4014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 004015  je 0x4025
    X86_AT(c, 0x4015u);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4025:
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x3fccu, "ran off the end of a function");
}
void f_00003fd3(X86Cpu& c) {
    X86_TICK(c, 11);
    // 003fd3  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0x3fd3u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 003fda  cmp ax, cx
    X86_AT(c, 0x3fdau);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 003fdd  je 0x4025
    X86_AT(c, 0x3fddu);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 5);
    // 003fdf  jle 0x3fe3
    X86_AT(c, 0x3fdfu);
    if (x86_cc(c, 14)) { goto L_3fe3; }
    X86_TICK(c, 3);
    // 003fe1  xchg cx, ax
    X86_AT(c, 0x3fe1u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3fe3:
    X86_TICK(c, 11);
    // 003fe3  mov dx, cx
    X86_AT(c, 0x3fe3u);
    s16(c, 2, (c.r[1] & 0xFFFFu));
    // 003fe6  sub dx, ax
    X86_AT(c, 0x3fe6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003fe9  dec dx
    X86_AT(c, 0x3fe9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 003feb  je 0x4025
    X86_AT(c, 0x3febu);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 21);
    // 003fed  inc ax
    X86_AT(c, 0x3fedu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 003fef  dec cx
    X86_AT(c, 0x3fefu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 003ff1  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x3ff1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 003ff9  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x3ff9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 004001  shr eax, 0x10
    X86_AT(c, 0x4001u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004004  shr ecx, 0x10
    X86_AT(c, 0x4004u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004007  cmp ax, cx
    X86_AT(c, 0x4007u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00400a  je 0x4025
    X86_AT(c, 0x400au);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 5);
    // 00400c  jle 0x400f
    X86_AT(c, 0x400cu);
    if (x86_cc(c, 14)) { goto L_400f; }
    X86_TICK(c, 3);
    // 00400e  xchg ecx, eax
    X86_AT(c, 0x400eu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_400f:
    X86_TICK(c, 11);
    // 00400f  mov edx, ecx
    X86_AT(c, 0x400fu);
    c.r[2] = c.r[1];
    // 004011  sub dx, ax
    X86_AT(c, 0x4011u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004014  dec edx
    X86_AT(c, 0x4014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 004015  je 0x4025
    X86_AT(c, 0x4015u);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4025:
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x3fd3u, "ran off the end of a function");
}
void f_00003fda(X86Cpu& c) {
    X86_TICK(c, 7);
    // 003fda  cmp ax, cx
    X86_AT(c, 0x3fdau);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 003fdd  je 0x4025
    X86_AT(c, 0x3fddu);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 5);
    // 003fdf  jle 0x3fe3
    X86_AT(c, 0x3fdfu);
    if (x86_cc(c, 14)) { goto L_3fe3; }
    X86_TICK(c, 3);
    // 003fe1  xchg cx, ax
    X86_AT(c, 0x3fe1u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3fe3:
    X86_TICK(c, 11);
    // 003fe3  mov dx, cx
    X86_AT(c, 0x3fe3u);
    s16(c, 2, (c.r[1] & 0xFFFFu));
    // 003fe6  sub dx, ax
    X86_AT(c, 0x3fe6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003fe9  dec dx
    X86_AT(c, 0x3fe9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 003feb  je 0x4025
    X86_AT(c, 0x3febu);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 21);
    // 003fed  inc ax
    X86_AT(c, 0x3fedu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 003fef  dec cx
    X86_AT(c, 0x3fefu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 003ff1  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x3ff1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 003ff9  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x3ff9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 004001  shr eax, 0x10
    X86_AT(c, 0x4001u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004004  shr ecx, 0x10
    X86_AT(c, 0x4004u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004007  cmp ax, cx
    X86_AT(c, 0x4007u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00400a  je 0x4025
    X86_AT(c, 0x400au);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 5);
    // 00400c  jle 0x400f
    X86_AT(c, 0x400cu);
    if (x86_cc(c, 14)) { goto L_400f; }
    X86_TICK(c, 3);
    // 00400e  xchg ecx, eax
    X86_AT(c, 0x400eu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_400f:
    X86_TICK(c, 11);
    // 00400f  mov edx, ecx
    X86_AT(c, 0x400fu);
    c.r[2] = c.r[1];
    // 004011  sub dx, ax
    X86_AT(c, 0x4011u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004014  dec edx
    X86_AT(c, 0x4014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 004015  je 0x4025
    X86_AT(c, 0x4015u);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4025:
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x3fdau, "ran off the end of a function");
}
void f_00003fdd(X86Cpu& c) {
    X86_TICK(c, 5);
    // 003fdd  je 0x4025
    X86_AT(c, 0x3fddu);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 5);
    // 003fdf  jle 0x3fe3
    X86_AT(c, 0x3fdfu);
    if (x86_cc(c, 14)) { goto L_3fe3; }
    X86_TICK(c, 3);
    // 003fe1  xchg cx, ax
    X86_AT(c, 0x3fe1u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3fe3:
    X86_TICK(c, 11);
    // 003fe3  mov dx, cx
    X86_AT(c, 0x3fe3u);
    s16(c, 2, (c.r[1] & 0xFFFFu));
    // 003fe6  sub dx, ax
    X86_AT(c, 0x3fe6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003fe9  dec dx
    X86_AT(c, 0x3fe9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 003feb  je 0x4025
    X86_AT(c, 0x3febu);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 21);
    // 003fed  inc ax
    X86_AT(c, 0x3fedu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 003fef  dec cx
    X86_AT(c, 0x3fefu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 003ff1  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x3ff1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 003ff9  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x3ff9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 004001  shr eax, 0x10
    X86_AT(c, 0x4001u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004004  shr ecx, 0x10
    X86_AT(c, 0x4004u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004007  cmp ax, cx
    X86_AT(c, 0x4007u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00400a  je 0x4025
    X86_AT(c, 0x400au);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 5);
    // 00400c  jle 0x400f
    X86_AT(c, 0x400cu);
    if (x86_cc(c, 14)) { goto L_400f; }
    X86_TICK(c, 3);
    // 00400e  xchg ecx, eax
    X86_AT(c, 0x400eu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_400f:
    X86_TICK(c, 11);
    // 00400f  mov edx, ecx
    X86_AT(c, 0x400fu);
    c.r[2] = c.r[1];
    // 004011  sub dx, ax
    X86_AT(c, 0x4011u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004014  dec edx
    X86_AT(c, 0x4014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 004015  je 0x4025
    X86_AT(c, 0x4015u);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4025:
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x3fddu, "ran off the end of a function");
}
void f_00003fdf(X86Cpu& c) {
    X86_TICK(c, 5);
    // 003fdf  jle 0x3fe3
    X86_AT(c, 0x3fdfu);
    if (x86_cc(c, 14)) { goto L_3fe3; }
    X86_TICK(c, 3);
    // 003fe1  xchg cx, ax
    X86_AT(c, 0x3fe1u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_3fe3:
    X86_TICK(c, 11);
    // 003fe3  mov dx, cx
    X86_AT(c, 0x3fe3u);
    s16(c, 2, (c.r[1] & 0xFFFFu));
    // 003fe6  sub dx, ax
    X86_AT(c, 0x3fe6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003fe9  dec dx
    X86_AT(c, 0x3fe9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 003feb  je 0x4025
    X86_AT(c, 0x3febu);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 21);
    // 003fed  inc ax
    X86_AT(c, 0x3fedu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 003fef  dec cx
    X86_AT(c, 0x3fefu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 003ff1  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x3ff1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 003ff9  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x3ff9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 004001  shr eax, 0x10
    X86_AT(c, 0x4001u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004004  shr ecx, 0x10
    X86_AT(c, 0x4004u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004007  cmp ax, cx
    X86_AT(c, 0x4007u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00400a  je 0x4025
    X86_AT(c, 0x400au);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 5);
    // 00400c  jle 0x400f
    X86_AT(c, 0x400cu);
    if (x86_cc(c, 14)) { goto L_400f; }
    X86_TICK(c, 3);
    // 00400e  xchg ecx, eax
    X86_AT(c, 0x400eu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_400f:
    X86_TICK(c, 11);
    // 00400f  mov edx, ecx
    X86_AT(c, 0x400fu);
    c.r[2] = c.r[1];
    // 004011  sub dx, ax
    X86_AT(c, 0x4011u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004014  dec edx
    X86_AT(c, 0x4014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 004015  je 0x4025
    X86_AT(c, 0x4015u);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4025:
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x3fdfu, "ran off the end of a function");
}
void f_00003fe1(X86Cpu& c) {
    X86_TICK(c, 14);
    // 003fe1  xchg cx, ax
    X86_AT(c, 0x3fe1u);
    { uint32_t t = (c.r[1] & 0xFFFFu); s16(c, 1, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 003fe3  mov dx, cx
    X86_AT(c, 0x3fe3u);
    s16(c, 2, (c.r[1] & 0xFFFFu));
    // 003fe6  sub dx, ax
    X86_AT(c, 0x3fe6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003fe9  dec dx
    X86_AT(c, 0x3fe9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 003feb  je 0x4025
    X86_AT(c, 0x3febu);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 21);
    // 003fed  inc ax
    X86_AT(c, 0x3fedu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 003fef  dec cx
    X86_AT(c, 0x3fefu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 003ff1  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x3ff1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 003ff9  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x3ff9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 004001  shr eax, 0x10
    X86_AT(c, 0x4001u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004004  shr ecx, 0x10
    X86_AT(c, 0x4004u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004007  cmp ax, cx
    X86_AT(c, 0x4007u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00400a  je 0x4025
    X86_AT(c, 0x400au);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 5);
    // 00400c  jle 0x400f
    X86_AT(c, 0x400cu);
    if (x86_cc(c, 14)) { goto L_400f; }
    X86_TICK(c, 3);
    // 00400e  xchg ecx, eax
    X86_AT(c, 0x400eu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_400f:
    X86_TICK(c, 11);
    // 00400f  mov edx, ecx
    X86_AT(c, 0x400fu);
    c.r[2] = c.r[1];
    // 004011  sub dx, ax
    X86_AT(c, 0x4011u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004014  dec edx
    X86_AT(c, 0x4014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 004015  je 0x4025
    X86_AT(c, 0x4015u);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4025:
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x3fe1u, "ran off the end of a function");
}
void f_00003fe3(X86Cpu& c) {
    X86_TICK(c, 11);
    // 003fe3  mov dx, cx
    X86_AT(c, 0x3fe3u);
    s16(c, 2, (c.r[1] & 0xFFFFu));
    // 003fe6  sub dx, ax
    X86_AT(c, 0x3fe6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003fe9  dec dx
    X86_AT(c, 0x3fe9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 003feb  je 0x4025
    X86_AT(c, 0x3febu);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 21);
    // 003fed  inc ax
    X86_AT(c, 0x3fedu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 003fef  dec cx
    X86_AT(c, 0x3fefu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 003ff1  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x3ff1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 003ff9  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x3ff9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 004001  shr eax, 0x10
    X86_AT(c, 0x4001u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004004  shr ecx, 0x10
    X86_AT(c, 0x4004u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004007  cmp ax, cx
    X86_AT(c, 0x4007u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00400a  je 0x4025
    X86_AT(c, 0x400au);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 5);
    // 00400c  jle 0x400f
    X86_AT(c, 0x400cu);
    if (x86_cc(c, 14)) { goto L_400f; }
    X86_TICK(c, 3);
    // 00400e  xchg ecx, eax
    X86_AT(c, 0x400eu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_400f:
    X86_TICK(c, 11);
    // 00400f  mov edx, ecx
    X86_AT(c, 0x400fu);
    c.r[2] = c.r[1];
    // 004011  sub dx, ax
    X86_AT(c, 0x4011u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004014  dec edx
    X86_AT(c, 0x4014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 004015  je 0x4025
    X86_AT(c, 0x4015u);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4025:
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x3fe3u, "ran off the end of a function");
}
void f_00003fe6(X86Cpu& c) {
    X86_TICK(c, 9);
    // 003fe6  sub dx, ax
    X86_AT(c, 0x3fe6u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 003fe9  dec dx
    X86_AT(c, 0x3fe9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 003feb  je 0x4025
    X86_AT(c, 0x3febu);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 21);
    // 003fed  inc ax
    X86_AT(c, 0x3fedu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 003fef  dec cx
    X86_AT(c, 0x3fefu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 003ff1  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x3ff1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 003ff9  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x3ff9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 004001  shr eax, 0x10
    X86_AT(c, 0x4001u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004004  shr ecx, 0x10
    X86_AT(c, 0x4004u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004007  cmp ax, cx
    X86_AT(c, 0x4007u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00400a  je 0x4025
    X86_AT(c, 0x400au);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 5);
    // 00400c  jle 0x400f
    X86_AT(c, 0x400cu);
    if (x86_cc(c, 14)) { goto L_400f; }
    X86_TICK(c, 3);
    // 00400e  xchg ecx, eax
    X86_AT(c, 0x400eu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_400f:
    X86_TICK(c, 11);
    // 00400f  mov edx, ecx
    X86_AT(c, 0x400fu);
    c.r[2] = c.r[1];
    // 004011  sub dx, ax
    X86_AT(c, 0x4011u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004014  dec edx
    X86_AT(c, 0x4014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 004015  je 0x4025
    X86_AT(c, 0x4015u);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4025:
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x3fe6u, "ran off the end of a function");
}
void f_00003fe9(X86Cpu& c) {
    X86_TICK(c, 7);
    // 003fe9  dec dx
    X86_AT(c, 0x3fe9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 003feb  je 0x4025
    X86_AT(c, 0x3febu);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 21);
    // 003fed  inc ax
    X86_AT(c, 0x3fedu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 003fef  dec cx
    X86_AT(c, 0x3fefu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 003ff1  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x3ff1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 003ff9  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x3ff9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 004001  shr eax, 0x10
    X86_AT(c, 0x4001u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004004  shr ecx, 0x10
    X86_AT(c, 0x4004u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004007  cmp ax, cx
    X86_AT(c, 0x4007u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00400a  je 0x4025
    X86_AT(c, 0x400au);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 5);
    // 00400c  jle 0x400f
    X86_AT(c, 0x400cu);
    if (x86_cc(c, 14)) { goto L_400f; }
    X86_TICK(c, 3);
    // 00400e  xchg ecx, eax
    X86_AT(c, 0x400eu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_400f:
    X86_TICK(c, 11);
    // 00400f  mov edx, ecx
    X86_AT(c, 0x400fu);
    c.r[2] = c.r[1];
    // 004011  sub dx, ax
    X86_AT(c, 0x4011u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004014  dec edx
    X86_AT(c, 0x4014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 004015  je 0x4025
    X86_AT(c, 0x4015u);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4025:
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x3fe9u, "ran off the end of a function");
}
void f_00003feb(X86Cpu& c) {
    X86_TICK(c, 5);
    // 003feb  je 0x4025
    X86_AT(c, 0x3febu);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 21);
    // 003fed  inc ax
    X86_AT(c, 0x3fedu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 003fef  dec cx
    X86_AT(c, 0x3fefu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 003ff1  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x3ff1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 003ff9  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x3ff9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 004001  shr eax, 0x10
    X86_AT(c, 0x4001u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004004  shr ecx, 0x10
    X86_AT(c, 0x4004u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004007  cmp ax, cx
    X86_AT(c, 0x4007u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00400a  je 0x4025
    X86_AT(c, 0x400au);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 5);
    // 00400c  jle 0x400f
    X86_AT(c, 0x400cu);
    if (x86_cc(c, 14)) { goto L_400f; }
    X86_TICK(c, 3);
    // 00400e  xchg ecx, eax
    X86_AT(c, 0x400eu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_400f:
    X86_TICK(c, 11);
    // 00400f  mov edx, ecx
    X86_AT(c, 0x400fu);
    c.r[2] = c.r[1];
    // 004011  sub dx, ax
    X86_AT(c, 0x4011u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004014  dec edx
    X86_AT(c, 0x4014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 004015  je 0x4025
    X86_AT(c, 0x4015u);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4025:
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x3febu, "ran off the end of a function");
}
void f_00003fed(X86Cpu& c) {
    X86_TICK(c, 21);
    // 003fed  inc ax
    X86_AT(c, 0x3fedu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 003fef  dec cx
    X86_AT(c, 0x3fefu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 003ff1  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x3ff1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 003ff9  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x3ff9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 004001  shr eax, 0x10
    X86_AT(c, 0x4001u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004004  shr ecx, 0x10
    X86_AT(c, 0x4004u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004007  cmp ax, cx
    X86_AT(c, 0x4007u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00400a  je 0x4025
    X86_AT(c, 0x400au);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 5);
    // 00400c  jle 0x400f
    X86_AT(c, 0x400cu);
    if (x86_cc(c, 14)) { goto L_400f; }
    X86_TICK(c, 3);
    // 00400e  xchg ecx, eax
    X86_AT(c, 0x400eu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_400f:
    X86_TICK(c, 11);
    // 00400f  mov edx, ecx
    X86_AT(c, 0x400fu);
    c.r[2] = c.r[1];
    // 004011  sub dx, ax
    X86_AT(c, 0x4011u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004014  dec edx
    X86_AT(c, 0x4014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 004015  je 0x4025
    X86_AT(c, 0x4015u);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4025:
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x3fedu, "ran off the end of a function");
}
void f_00003fef(X86Cpu& c) {
    X86_TICK(c, 19);
    // 003fef  dec cx
    X86_AT(c, 0x3fefu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_dec(c, v, 2)); }
    // 003ff1  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x3ff1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 003ff9  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x3ff9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 004001  shr eax, 0x10
    X86_AT(c, 0x4001u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004004  shr ecx, 0x10
    X86_AT(c, 0x4004u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004007  cmp ax, cx
    X86_AT(c, 0x4007u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00400a  je 0x4025
    X86_AT(c, 0x400au);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 5);
    // 00400c  jle 0x400f
    X86_AT(c, 0x400cu);
    if (x86_cc(c, 14)) { goto L_400f; }
    X86_TICK(c, 3);
    // 00400e  xchg ecx, eax
    X86_AT(c, 0x400eu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_400f:
    X86_TICK(c, 11);
    // 00400f  mov edx, ecx
    X86_AT(c, 0x400fu);
    c.r[2] = c.r[1];
    // 004011  sub dx, ax
    X86_AT(c, 0x4011u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004014  dec edx
    X86_AT(c, 0x4014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 004015  je 0x4025
    X86_AT(c, 0x4015u);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4025:
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x3fefu, "ran off the end of a function");
}
void f_00003ff1(X86Cpu& c) {
    X86_TICK(c, 17);
    // 003ff1  mov word ptr gs:[ebp + 0x222], ax
    X86_AT(c, 0x3ff1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[0] & 0xFFFFu));
    // 003ff9  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x3ff9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 004001  shr eax, 0x10
    X86_AT(c, 0x4001u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004004  shr ecx, 0x10
    X86_AT(c, 0x4004u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004007  cmp ax, cx
    X86_AT(c, 0x4007u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00400a  je 0x4025
    X86_AT(c, 0x400au);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 5);
    // 00400c  jle 0x400f
    X86_AT(c, 0x400cu);
    if (x86_cc(c, 14)) { goto L_400f; }
    X86_TICK(c, 3);
    // 00400e  xchg ecx, eax
    X86_AT(c, 0x400eu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_400f:
    X86_TICK(c, 11);
    // 00400f  mov edx, ecx
    X86_AT(c, 0x400fu);
    c.r[2] = c.r[1];
    // 004011  sub dx, ax
    X86_AT(c, 0x4011u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004014  dec edx
    X86_AT(c, 0x4014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 004015  je 0x4025
    X86_AT(c, 0x4015u);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4025:
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x3ff1u, "ran off the end of a function");
}
void f_00003ff9(X86Cpu& c) {
    X86_TICK(c, 15);
    // 003ff9  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0x3ff9u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 004001  shr eax, 0x10
    X86_AT(c, 0x4001u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004004  shr ecx, 0x10
    X86_AT(c, 0x4004u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004007  cmp ax, cx
    X86_AT(c, 0x4007u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00400a  je 0x4025
    X86_AT(c, 0x400au);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 5);
    // 00400c  jle 0x400f
    X86_AT(c, 0x400cu);
    if (x86_cc(c, 14)) { goto L_400f; }
    X86_TICK(c, 3);
    // 00400e  xchg ecx, eax
    X86_AT(c, 0x400eu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_400f:
    X86_TICK(c, 11);
    // 00400f  mov edx, ecx
    X86_AT(c, 0x400fu);
    c.r[2] = c.r[1];
    // 004011  sub dx, ax
    X86_AT(c, 0x4011u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004014  dec edx
    X86_AT(c, 0x4014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 004015  je 0x4025
    X86_AT(c, 0x4015u);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4025:
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x3ff9u, "ran off the end of a function");
}
void f_00004001(X86Cpu& c) {
    X86_TICK(c, 13);
    // 004001  shr eax, 0x10
    X86_AT(c, 0x4001u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 004004  shr ecx, 0x10
    X86_AT(c, 0x4004u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004007  cmp ax, cx
    X86_AT(c, 0x4007u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00400a  je 0x4025
    X86_AT(c, 0x400au);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 5);
    // 00400c  jle 0x400f
    X86_AT(c, 0x400cu);
    if (x86_cc(c, 14)) { goto L_400f; }
    X86_TICK(c, 3);
    // 00400e  xchg ecx, eax
    X86_AT(c, 0x400eu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_400f:
    X86_TICK(c, 11);
    // 00400f  mov edx, ecx
    X86_AT(c, 0x400fu);
    c.r[2] = c.r[1];
    // 004011  sub dx, ax
    X86_AT(c, 0x4011u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004014  dec edx
    X86_AT(c, 0x4014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 004015  je 0x4025
    X86_AT(c, 0x4015u);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4025:
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x4001u, "ran off the end of a function");
}
void f_00004004(X86Cpu& c) {
    X86_TICK(c, 10);
    // 004004  shr ecx, 0x10
    X86_AT(c, 0x4004u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 004007  cmp ax, cx
    X86_AT(c, 0x4007u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00400a  je 0x4025
    X86_AT(c, 0x400au);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 5);
    // 00400c  jle 0x400f
    X86_AT(c, 0x400cu);
    if (x86_cc(c, 14)) { goto L_400f; }
    X86_TICK(c, 3);
    // 00400e  xchg ecx, eax
    X86_AT(c, 0x400eu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_400f:
    X86_TICK(c, 11);
    // 00400f  mov edx, ecx
    X86_AT(c, 0x400fu);
    c.r[2] = c.r[1];
    // 004011  sub dx, ax
    X86_AT(c, 0x4011u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004014  dec edx
    X86_AT(c, 0x4014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 004015  je 0x4025
    X86_AT(c, 0x4015u);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4025:
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x4004u, "ran off the end of a function");
}
void f_00004007(X86Cpu& c) {
    X86_TICK(c, 7);
    // 004007  cmp ax, cx
    X86_AT(c, 0x4007u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00400a  je 0x4025
    X86_AT(c, 0x400au);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 5);
    // 00400c  jle 0x400f
    X86_AT(c, 0x400cu);
    if (x86_cc(c, 14)) { goto L_400f; }
    X86_TICK(c, 3);
    // 00400e  xchg ecx, eax
    X86_AT(c, 0x400eu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_400f:
    X86_TICK(c, 11);
    // 00400f  mov edx, ecx
    X86_AT(c, 0x400fu);
    c.r[2] = c.r[1];
    // 004011  sub dx, ax
    X86_AT(c, 0x4011u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004014  dec edx
    X86_AT(c, 0x4014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 004015  je 0x4025
    X86_AT(c, 0x4015u);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4025:
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x4007u, "ran off the end of a function");
}
void f_0000400a(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00400a  je 0x4025
    X86_AT(c, 0x400au);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 5);
    // 00400c  jle 0x400f
    X86_AT(c, 0x400cu);
    if (x86_cc(c, 14)) { goto L_400f; }
    X86_TICK(c, 3);
    // 00400e  xchg ecx, eax
    X86_AT(c, 0x400eu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_400f:
    X86_TICK(c, 11);
    // 00400f  mov edx, ecx
    X86_AT(c, 0x400fu);
    c.r[2] = c.r[1];
    // 004011  sub dx, ax
    X86_AT(c, 0x4011u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004014  dec edx
    X86_AT(c, 0x4014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 004015  je 0x4025
    X86_AT(c, 0x4015u);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4025:
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x400au, "ran off the end of a function");
}
void f_0000400c(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00400c  jle 0x400f
    X86_AT(c, 0x400cu);
    if (x86_cc(c, 14)) { goto L_400f; }
    X86_TICK(c, 3);
    // 00400e  xchg ecx, eax
    X86_AT(c, 0x400eu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
L_400f:
    X86_TICK(c, 11);
    // 00400f  mov edx, ecx
    X86_AT(c, 0x400fu);
    c.r[2] = c.r[1];
    // 004011  sub dx, ax
    X86_AT(c, 0x4011u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004014  dec edx
    X86_AT(c, 0x4014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 004015  je 0x4025
    X86_AT(c, 0x4015u);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4025:
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x400cu, "ran off the end of a function");
}
void f_0000400e(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00400e  xchg ecx, eax
    X86_AT(c, 0x400eu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 00400f  mov edx, ecx
    X86_AT(c, 0x400fu);
    c.r[2] = c.r[1];
    // 004011  sub dx, ax
    X86_AT(c, 0x4011u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004014  dec edx
    X86_AT(c, 0x4014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 004015  je 0x4025
    X86_AT(c, 0x4015u);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4025:
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x400eu, "ran off the end of a function");
}
void f_0000400f(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00400f  mov edx, ecx
    X86_AT(c, 0x400fu);
    c.r[2] = c.r[1];
    // 004011  sub dx, ax
    X86_AT(c, 0x4011u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004014  dec edx
    X86_AT(c, 0x4014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 004015  je 0x4025
    X86_AT(c, 0x4015u);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4025:
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x400fu, "ran off the end of a function");
}
void f_00004011(X86Cpu& c) {
    X86_TICK(c, 9);
    // 004011  sub dx, ax
    X86_AT(c, 0x4011u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004014  dec edx
    X86_AT(c, 0x4014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 004015  je 0x4025
    X86_AT(c, 0x4015u);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4025:
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x4011u, "ran off the end of a function");
}
void f_00004014(X86Cpu& c) {
    X86_TICK(c, 7);
    // 004014  dec edx
    X86_AT(c, 0x4014u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 004015  je 0x4025
    X86_AT(c, 0x4015u);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4025:
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x4014u, "ran off the end of a function");
}
void f_00004015(X86Cpu& c) {
    X86_TICK(c, 5);
    // 004015  je 0x4025
    X86_AT(c, 0x4015u);
    if (x86_cc(c, 4)) { goto L_4025; }
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4025:
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x4015u, "ran off the end of a function");
}
void f_00004017(X86Cpu& c) {
    X86_TICK(c, 13);
    // 004017  inc eax
    X86_AT(c, 0x4017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x4017u, "ran off the end of a function");
}
void f_00004018(X86Cpu& c) {
    X86_TICK(c, 11);
    // 004018  mov word ptr gs:[ebp + 0x226], ax
    X86_AT(c, 0x4018u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[0] & 0xFFFFu));
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x4018u, "ran off the end of a function");
}
void f_00004020(X86Cpu& c) {
    X86_TICK(c, 9);
    // 004020  sub cx, ax
    X86_AT(c, 0x4020u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x4020u, "ran off the end of a function");
}
void f_00004023(X86Cpu& c) {
    X86_TICK(c, 7);
    // 004023  jmp 0x4063
    X86_AT(c, 0x4023u);
    goto L_4063;
L_4063:
    X86_TICK(c, 54);
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
    x86_fault(c, 0x4023u, "ran off the end of a function");
}
void f_00004025(X86Cpu& c) {
    X86_TICK(c, 10);
    // 004025  ret 
    X86_AT(c, 0x4025u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x4025u, "ran off the end of a function");
}
void f_00004026(X86Cpu& c) {
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
    x86_fault(c, 0x4026u, "ran off the end of a function");
}
void f_0000402d(X86Cpu& c) {
    X86_TICK(c, 11);
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
    x86_fault(c, 0x402du, "ran off the end of a function");
}
void f_00004034(X86Cpu& c) {
    X86_TICK(c, 7);
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
    x86_fault(c, 0x4034u, "ran off the end of a function");
}
void f_00004037(X86Cpu& c) {
    X86_TICK(c, 5);
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
    x86_fault(c, 0x4037u, "ran off the end of a function");
}
void f_0000403b(X86Cpu& c) {
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
    x86_fault(c, 0x403bu, "ran off the end of a function");
}
void f_00004043(X86Cpu& c) {
    X86_TICK(c, 15);
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
    x86_fault(c, 0x4043u, "ran off the end of a function");
}
void f_0000404b(X86Cpu& c) {
    X86_TICK(c, 13);
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
    x86_fault(c, 0x404bu, "ran off the end of a function");
}
void f_0000404e(X86Cpu& c) {
    X86_TICK(c, 10);
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
    x86_fault(c, 0x404eu, "ran off the end of a function");
}
void f_00004051(X86Cpu& c) {
    X86_TICK(c, 7);
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
    x86_fault(c, 0x4051u, "ran off the end of a function");
}
void f_00004054(X86Cpu& c) {
    X86_TICK(c, 5);
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
    x86_fault(c, 0x4054u, "ran off the end of a function");
}
void f_00004057(X86Cpu& c) {
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
    x86_fault(c, 0x4057u, "ran off the end of a function");
}
void f_0000405f(X86Cpu& c) {
    X86_TICK(c, 58);
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
    x86_fault(c, 0x405fu, "ran off the end of a function");
}
void f_00004062(X86Cpu& c) {
    X86_TICK(c, 56);
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
    x86_fault(c, 0x4062u, "ran off the end of a function");
}
void f_00004063(X86Cpu& c) {
    X86_TICK(c, 54);
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
    x86_fault(c, 0x4063u, "ran off the end of a function");
}
void f_00004064(X86Cpu& c) {
    X86_TICK(c, 52);
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
    x86_fault(c, 0x4064u, "ran off the end of a function");
}
void f_00004068(X86Cpu& c) {
    X86_TICK(c, 48);
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
    x86_fault(c, 0x4068u, "ran off the end of a function");
}
void f_00004070(X86Cpu& c) {
    X86_TICK(c, 42);
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
    x86_fault(c, 0x4070u, "ran off the end of a function");
}
void f_00004075(X86Cpu& c) {
    X86_TICK(c, 20);
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
    x86_fault(c, 0x4075u, "ran off the end of a function");
}
void f_00004079(X86Cpu& c) {
    X86_TICK(c, 14);
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
    x86_fault(c, 0x4079u, "ran off the end of a function");
}
void f_00004080(X86Cpu& c) {
    X86_TICK(c, 12);
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
    x86_fault(c, 0x4080u, "ran off the end of a function");
}
void f_00004088(X86Cpu& c) {
    X86_TICK(c, 6);
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
    x86_fault(c, 0x4088u, "ran off the end of a function");
}
void f_00004090(X86Cpu& c) {
    X86_TICK(c, 2);
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
    x86_fault(c, 0x4090u, "ran off the end of a function");
}
void f_00004097(X86Cpu& c) {
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
    x86_fault(c, 0x4097u, "ran off the end of a function");
}
void f_0000409e(X86Cpu& c) {
    goto L_409e;
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
L_409e:
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
    x86_fault(c, 0x409eu, "ran off the end of a function");
}
void f_000040a6(X86Cpu& c) {
    goto L_40a6;
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 6);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
L_40a6:
    X86_TICK(c, 22);
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
    x86_fault(c, 0x40a6u, "ran off the end of a function");
}
void f_000040aa(X86Cpu& c) {
    goto L_40aa;
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 10);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
L_40aa:
    X86_TICK(c, 18);
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
    x86_fault(c, 0x40aau, "ran off the end of a function");
}
void f_000040b1(X86Cpu& c) {
    goto L_40b1;
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 17);
    // 00409e  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x409eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0040a6  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x40a6u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 0040aa  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x40aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
L_40b1:
    X86_TICK(c, 11);
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
    x86_fault(c, 0x40b1u, "ran off the end of a function");
}
void f_000040b4(X86Cpu& c) {
    goto L_40b4;
L_4097:
    X86_TICK(c, 7);
    // 004097  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0x4097u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0x409eu); x86_call(c, t); X86_RET(c, 0x409eu); }
    X86_TICK(c, 23);
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
L_40b4:
    X86_TICK(c, 5);
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
    x86_fault(c, 0x40b4u, "ran off the end of a function");
}
void f_000040b6(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0040b6  add esp, 4
    X86_AT(c, 0x40b6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x40b6u, "ran off the end of a function");
}
void f_000040b9(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0040b9  ret 
    X86_AT(c, 0x40b9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x40b9u, "ran off the end of a function");
}
void f_00004108(X86Cpu& c) {
    X86_TICK(c, 18);
    // 004108  push ecx
    X86_AT(c, 0x4108u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 004109  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4109u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    x86_fault(c, 0x4108u, "ran off the end of a function");
}
void f_00004109(X86Cpu& c) {
    X86_TICK(c, 16);
    // 004109  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x4109u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
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
    x86_fault(c, 0x4109u, "ran off the end of a function");
}
void f_0000410d(X86Cpu& c) {
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
    x86_fault(c, 0x410du, "ran off the end of a function");
}
}
