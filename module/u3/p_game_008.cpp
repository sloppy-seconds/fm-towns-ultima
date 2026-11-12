#include "p_game_funcs.h"
namespace p_game {
void f_000c0cf4(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0c0cf4  push ebp
    X86_AT(c, 0xc0cf4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c0cf5  mov ebp, esp
    X86_AT(c, 0xc0cf5u);
    c.r[5] = c.r[4];
    // 0c0cf7  sub esp, 0x50
    X86_AT(c, 0xc0cf7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x50u, 0, 4); }
    // 0c0cfa  push ebx
    X86_AT(c, 0xc0cfau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0cfb  push esi
    X86_AT(c, 0xc0cfbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c0cfc  push edi
    X86_AT(c, 0xc0cfcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0cfd  push 0x2580
    X86_AT(c, 0xc0cfdu);
    { uint32_t v = 0x2580u; push32(c, v); }
    // 0c0d02  push 0x2584
    X86_AT(c, 0xc0d02u);
    { uint32_t v = 0x2584u; push32(c, v); }
    // 0c0d07  call 0xd7fc4
    X86_AT(c, 0xc0d07u);
    push32(c, 0xc0d0cu); x86_call_known(c, 0xd7fc4u, f_000d7fc4); X86_RET(c, 0xc0d0cu);
    X86_TICK(c, 12);
    // 0c0d0c  add esp, 8
    X86_AT(c, 0xc0d0cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c0d0f  xchg edi, eax
    X86_AT(c, 0xc0d0fu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c0d10  and edi, edi
    X86_AT(c, 0xc0d10u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c0d12  jne 0xc0d23
    X86_AT(c, 0xc0d12u);
    if (x86_cc(c, 5)) { goto L_c0d23; }
    X86_TICK(c, 11);
    // 0c0d14  mov eax, 0xffffffff
    X86_AT(c, 0xc0d14u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c0d19  mov dword ptr [0xa6650], eax
    X86_AT(c, 0xc0d19u);
    wr32((c.sbase[3] + (uint32_t)(0xA6650u)), c.r[0]);
    // 0c0d1e  jmp 0xc0fa0
    X86_AT(c, 0xc0d1eu);
    goto L_c0fa0;
L_c0d23:
    X86_TICK(c, 15);
    // 0c0d23  push edi
    X86_AT(c, 0xc0d23u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0d24  push 0x4f
    X86_AT(c, 0xc0d24u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0d26  lea ebx, [ebp - 0x50]
    X86_AT(c, 0xc0d26u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0d29  push ebx
    X86_AT(c, 0xc0d29u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0d2a  call 0xd781c
    X86_AT(c, 0xc0d2au);
    push32(c, 0xc0d2fu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0d2fu);
    X86_TICK(c, 14);
    // 0c0d2f  add esp, 0xc
    X86_AT(c, 0xc0d2fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c0d32  cmp byte ptr [ebx], 0x57
    X86_AT(c, 0xc0d32u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3]))), 0x57u, 0, 1);
    // 0c0d35  jne 0xc0d3d
    X86_AT(c, 0xc0d35u);
    if (x86_cc(c, 5)) { goto L_c0d3d; }
    X86_TICK(c, 12);
    // 0c0d37  cmp byte ptr [ebp - 0x4f], 0x6f
    X86_AT(c, 0xc0d37u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB1u))), 0x6Fu, 0, 1);
    // 0c0d3b  je 0xc0d5a
    X86_AT(c, 0xc0d3bu);
    if (x86_cc(c, 4)) { goto L_c0d5a; }
L_c0d3d:
    X86_TICK(c, 11);
    // 0c0d3d  mov dword ptr [0xa6650], 0xffffffff
    X86_AT(c, 0xc0d3du);
    wr32((c.sbase[3] + (uint32_t)(0xA6650u)), 0xFFFFFFFFu);
    // 0c0d47  push edi
    X86_AT(c, 0xc0d47u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0d48  call 0xd84c0
    X86_AT(c, 0xc0d48u);
    push32(c, 0xc0d4du); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xc0d4du);
    X86_TICK(c, 11);
    // 0c0d4d  mov eax, 0xffffffff
    X86_AT(c, 0xc0d4du);
    c.r[0] = 0xFFFFFFFFu;
    // 0c0d52  add esp, 4
    X86_AT(c, 0xc0d52u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c0d55  jmp 0xc0fa0
    X86_AT(c, 0xc0d55u);
    goto L_c0fa0;
L_c0d5a:
    X86_TICK(c, 2);
    // 0c0d5a  sub esi, esi
    X86_AT(c, 0xc0d5au);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c0d5c:
    X86_TICK(c, 7);
    // 0c0d5c  cmp esi, 0x30
    X86_AT(c, 0xc0d5cu);
    (void)x86_sub(c, c.r[6], 0x30u, 0, 4);
    // 0c0d5f  jge 0xc0d85
    X86_AT(c, 0xc0d5fu);
    if (x86_cc(c, 13)) { goto L_c0d85; }
    X86_TICK(c, 15);
    // 0c0d61  push edi
    X86_AT(c, 0xc0d61u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0d62  push 0x4f
    X86_AT(c, 0xc0d62u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0d64  lea ebx, [ebp - 0x50]
    X86_AT(c, 0xc0d64u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0d67  push ebx
    X86_AT(c, 0xc0d67u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0d68  call 0xd781c
    X86_AT(c, 0xc0d68u);
    push32(c, 0xc0d6du); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0d6du);
    X86_TICK(c, 9);
    // 0c0d6d  push ebx
    X86_AT(c, 0xc0d6du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0d6e  call 0xbf39c
    X86_AT(c, 0xc0d6eu);
    push32(c, 0xc0d73u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0d73u);
    X86_TICK(c, 9);
    // 0c0d73  push eax
    X86_AT(c, 0xc0d73u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0d74  call 0xb9080
    X86_AT(c, 0xc0d74u);
    push32(c, 0xc0d79u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0d79u);
    X86_TICK(c, 13);
    // 0c0d79  mov byte ptr [esi + 0xa5ce8], al
    X86_AT(c, 0xc0d79u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xA5CE8u)), g8(c, 0));
    // 0c0d7f  inc esi
    X86_AT(c, 0xc0d7fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c0d80  add esp, 0x14
    X86_AT(c, 0xc0d80u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c0d83  jmp 0xc0d5c
    X86_AT(c, 0xc0d83u);
    X86_POLL(c, 0xc0d5cu); goto L_c0d5c;
L_c0d85:
    X86_TICK(c, 2);
    // 0c0d85  sub esi, esi
    X86_AT(c, 0xc0d85u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c0d87:
    X86_TICK(c, 7);
    // 0c0d87  cmp esi, 0x30
    X86_AT(c, 0xc0d87u);
    (void)x86_sub(c, c.r[6], 0x30u, 0, 4);
    // 0c0d8a  jge 0xc0db0
    X86_AT(c, 0xc0d8au);
    if (x86_cc(c, 13)) { goto L_c0db0; }
    X86_TICK(c, 15);
    // 0c0d8c  push edi
    X86_AT(c, 0xc0d8cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0d8d  push 0x4f
    X86_AT(c, 0xc0d8du);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0d8f  lea ebx, [ebp - 0x50]
    X86_AT(c, 0xc0d8fu);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0d92  push ebx
    X86_AT(c, 0xc0d92u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0d93  call 0xd781c
    X86_AT(c, 0xc0d93u);
    push32(c, 0xc0d98u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0d98u);
    X86_TICK(c, 9);
    // 0c0d98  push ebx
    X86_AT(c, 0xc0d98u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0d99  call 0xbf39c
    X86_AT(c, 0xc0d99u);
    push32(c, 0xc0d9eu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0d9eu);
    X86_TICK(c, 9);
    // 0c0d9e  push eax
    X86_AT(c, 0xc0d9eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0d9f  call 0xb9080
    X86_AT(c, 0xc0d9fu);
    push32(c, 0xc0da4u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0da4u);
    X86_TICK(c, 13);
    // 0c0da4  mov byte ptr [esi + 0xa5d18], al
    X86_AT(c, 0xc0da4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xA5D18u)), g8(c, 0));
    // 0c0daa  inc esi
    X86_AT(c, 0xc0daau);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c0dab  add esp, 0x14
    X86_AT(c, 0xc0dabu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c0dae  jmp 0xc0d87
    X86_AT(c, 0xc0daeu);
    X86_POLL(c, 0xc0d87u); goto L_c0d87;
L_c0db0:
    X86_TICK(c, 2);
    // 0c0db0  sub esi, esi
    X86_AT(c, 0xc0db0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c0db2:
    X86_TICK(c, 7);
    // 0c0db2  cmp esi, 0x30
    X86_AT(c, 0xc0db2u);
    (void)x86_sub(c, c.r[6], 0x30u, 0, 4);
    // 0c0db5  jge 0xc0ddc
    X86_AT(c, 0xc0db5u);
    if (x86_cc(c, 13)) { goto L_c0ddc; }
    X86_TICK(c, 15);
    // 0c0db7  push edi
    X86_AT(c, 0xc0db7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0db8  push 0x4f
    X86_AT(c, 0xc0db8u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0dba  lea ebx, [ebp - 0x50]
    X86_AT(c, 0xc0dbau);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0dbd  push ebx
    X86_AT(c, 0xc0dbdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0dbe  call 0xd781c
    X86_AT(c, 0xc0dbeu);
    push32(c, 0xc0dc3u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0dc3u);
    X86_TICK(c, 9);
    // 0c0dc3  push ebx
    X86_AT(c, 0xc0dc3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0dc4  call 0xbf39c
    X86_AT(c, 0xc0dc4u);
    push32(c, 0xc0dc9u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0dc9u);
    X86_TICK(c, 9);
    // 0c0dc9  push eax
    X86_AT(c, 0xc0dc9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0dca  call 0xb9080
    X86_AT(c, 0xc0dcau);
    push32(c, 0xc0dcfu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0dcfu);
    X86_TICK(c, 13);
    // 0c0dcf  mov dword ptr [esi*4 + 0xa5d48], eax
    X86_AT(c, 0xc0dcfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA5D48u)), c.r[0]);
    // 0c0dd6  inc esi
    X86_AT(c, 0xc0dd6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c0dd7  add esp, 0x14
    X86_AT(c, 0xc0dd7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c0dda  jmp 0xc0db2
    X86_AT(c, 0xc0ddau);
    X86_POLL(c, 0xc0db2u); goto L_c0db2;
L_c0ddc:
    X86_TICK(c, 2);
    // 0c0ddc  sub esi, esi
    X86_AT(c, 0xc0ddcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c0dde:
    X86_TICK(c, 7);
    // 0c0dde  cmp esi, 0x30
    X86_AT(c, 0xc0ddeu);
    (void)x86_sub(c, c.r[6], 0x30u, 0, 4);
    // 0c0de1  jge 0xc0e08
    X86_AT(c, 0xc0de1u);
    if (x86_cc(c, 13)) { goto L_c0e08; }
    X86_TICK(c, 15);
    // 0c0de3  push edi
    X86_AT(c, 0xc0de3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0de4  push 0x4f
    X86_AT(c, 0xc0de4u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0de6  lea ebx, [ebp - 0x50]
    X86_AT(c, 0xc0de6u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0de9  push ebx
    X86_AT(c, 0xc0de9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0dea  call 0xd781c
    X86_AT(c, 0xc0deau);
    push32(c, 0xc0defu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0defu);
    X86_TICK(c, 9);
    // 0c0def  push ebx
    X86_AT(c, 0xc0defu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0df0  call 0xbf39c
    X86_AT(c, 0xc0df0u);
    push32(c, 0xc0df5u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0df5u);
    X86_TICK(c, 9);
    // 0c0df5  push eax
    X86_AT(c, 0xc0df5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0df6  call 0xb9080
    X86_AT(c, 0xc0df6u);
    push32(c, 0xc0dfbu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0dfbu);
    X86_TICK(c, 13);
    // 0c0dfb  mov dword ptr [esi*4 + 0xa5e08], eax
    X86_AT(c, 0xc0dfbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA5E08u)), c.r[0]);
    // 0c0e02  inc esi
    X86_AT(c, 0xc0e02u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c0e03  add esp, 0x14
    X86_AT(c, 0xc0e03u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c0e06  jmp 0xc0dde
    X86_AT(c, 0xc0e06u);
    X86_POLL(c, 0xc0ddeu); goto L_c0dde;
L_c0e08:
    X86_TICK(c, 2);
    // 0c0e08  sub esi, esi
    X86_AT(c, 0xc0e08u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c0e0a:
    X86_TICK(c, 7);
    // 0c0e0a  cmp esi, 0x30
    X86_AT(c, 0xc0e0au);
    (void)x86_sub(c, c.r[6], 0x30u, 0, 4);
    // 0c0e0d  jge 0xc0e34
    X86_AT(c, 0xc0e0du);
    if (x86_cc(c, 13)) { goto L_c0e34; }
    X86_TICK(c, 15);
    // 0c0e0f  push edi
    X86_AT(c, 0xc0e0fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0e10  push 0x4f
    X86_AT(c, 0xc0e10u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0e12  lea ebx, [ebp - 0x50]
    X86_AT(c, 0xc0e12u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0e15  push ebx
    X86_AT(c, 0xc0e15u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0e16  call 0xd781c
    X86_AT(c, 0xc0e16u);
    push32(c, 0xc0e1bu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0e1bu);
    X86_TICK(c, 9);
    // 0c0e1b  push ebx
    X86_AT(c, 0xc0e1bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0e1c  call 0xbf39c
    X86_AT(c, 0xc0e1cu);
    push32(c, 0xc0e21u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0e21u);
    X86_TICK(c, 9);
    // 0c0e21  push eax
    X86_AT(c, 0xc0e21u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0e22  call 0xb9080
    X86_AT(c, 0xc0e22u);
    push32(c, 0xc0e27u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0e27u);
    X86_TICK(c, 13);
    // 0c0e27  mov dword ptr [esi*4 + 0xa5ec8], eax
    X86_AT(c, 0xc0e27u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA5EC8u)), c.r[0]);
    // 0c0e2e  inc esi
    X86_AT(c, 0xc0e2eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c0e2f  add esp, 0x14
    X86_AT(c, 0xc0e2fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c0e32  jmp 0xc0e0a
    X86_AT(c, 0xc0e32u);
    X86_POLL(c, 0xc0e0au); goto L_c0e0a;
L_c0e34:
    X86_TICK(c, 2);
    // 0c0e34  sub esi, esi
    X86_AT(c, 0xc0e34u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c0e36:
    X86_TICK(c, 7);
    // 0c0e36  cmp esi, 0x30
    X86_AT(c, 0xc0e36u);
    (void)x86_sub(c, c.r[6], 0x30u, 0, 4);
    // 0c0e39  jge 0xc0e60
    X86_AT(c, 0xc0e39u);
    if (x86_cc(c, 13)) { goto L_c0e60; }
    X86_TICK(c, 15);
    // 0c0e3b  push edi
    X86_AT(c, 0xc0e3bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0e3c  push 0x4f
    X86_AT(c, 0xc0e3cu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0e3e  lea ebx, [ebp - 0x50]
    X86_AT(c, 0xc0e3eu);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0e41  push ebx
    X86_AT(c, 0xc0e41u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0e42  call 0xd781c
    X86_AT(c, 0xc0e42u);
    push32(c, 0xc0e47u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0e47u);
    X86_TICK(c, 9);
    // 0c0e47  push ebx
    X86_AT(c, 0xc0e47u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0e48  call 0xbf39c
    X86_AT(c, 0xc0e48u);
    push32(c, 0xc0e4du); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0e4du);
    X86_TICK(c, 9);
    // 0c0e4d  push eax
    X86_AT(c, 0xc0e4du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0e4e  call 0xb9080
    X86_AT(c, 0xc0e4eu);
    push32(c, 0xc0e53u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0e53u);
    X86_TICK(c, 13);
    // 0c0e53  mov dword ptr [esi*4 + 0xa6074], eax
    X86_AT(c, 0xc0e53u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA6074u)), c.r[0]);
    // 0c0e5a  inc esi
    X86_AT(c, 0xc0e5au);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c0e5b  add esp, 0x14
    X86_AT(c, 0xc0e5bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c0e5e  jmp 0xc0e36
    X86_AT(c, 0xc0e5eu);
    X86_POLL(c, 0xc0e36u); goto L_c0e36;
L_c0e60:
    X86_TICK(c, 15);
    // 0c0e60  push edi
    X86_AT(c, 0xc0e60u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0e61  push 0x4f
    X86_AT(c, 0xc0e61u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0e63  lea ebx, [ebp - 0x50]
    X86_AT(c, 0xc0e63u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0e66  push ebx
    X86_AT(c, 0xc0e66u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0e67  call 0xd781c
    X86_AT(c, 0xc0e67u);
    push32(c, 0xc0e6cu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0e6cu);
    X86_TICK(c, 9);
    // 0c0e6c  push ebx
    X86_AT(c, 0xc0e6cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0e6d  call 0xbf39c
    X86_AT(c, 0xc0e6du);
    push32(c, 0xc0e72u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0e72u);
    X86_TICK(c, 9);
    // 0c0e72  push eax
    X86_AT(c, 0xc0e72u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0e73  call 0xb9080
    X86_AT(c, 0xc0e73u);
    push32(c, 0xc0e78u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0e78u);
    X86_TICK(c, 15);
    // 0c0e78  mov dword ptr [0xa6048], eax
    X86_AT(c, 0xc0e78u);
    wr32((c.sbase[3] + (uint32_t)(0xA6048u)), c.r[0]);
    // 0c0e7d  push edi
    X86_AT(c, 0xc0e7du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0e7e  push 0x4f
    X86_AT(c, 0xc0e7eu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0e80  push ebx
    X86_AT(c, 0xc0e80u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0e81  call 0xd781c
    X86_AT(c, 0xc0e81u);
    push32(c, 0xc0e86u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0e86u);
    X86_TICK(c, 9);
    // 0c0e86  push ebx
    X86_AT(c, 0xc0e86u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0e87  call 0xbf39c
    X86_AT(c, 0xc0e87u);
    push32(c, 0xc0e8cu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0e8cu);
    X86_TICK(c, 9);
    // 0c0e8c  push eax
    X86_AT(c, 0xc0e8cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0e8d  call 0xb9080
    X86_AT(c, 0xc0e8du);
    push32(c, 0xc0e92u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0e92u);
    X86_TICK(c, 15);
    // 0c0e92  mov dword ptr [0xa604c], eax
    X86_AT(c, 0xc0e92u);
    wr32((c.sbase[3] + (uint32_t)(0xA604Cu)), c.r[0]);
    // 0c0e97  push edi
    X86_AT(c, 0xc0e97u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0e98  push 0x4f
    X86_AT(c, 0xc0e98u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0e9a  push ebx
    X86_AT(c, 0xc0e9au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0e9b  call 0xd781c
    X86_AT(c, 0xc0e9bu);
    push32(c, 0xc0ea0u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0ea0u);
    X86_TICK(c, 9);
    // 0c0ea0  push ebx
    X86_AT(c, 0xc0ea0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0ea1  call 0xbf39c
    X86_AT(c, 0xc0ea1u);
    push32(c, 0xc0ea6u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0ea6u);
    X86_TICK(c, 9);
    // 0c0ea6  push eax
    X86_AT(c, 0xc0ea6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0ea7  call 0xb9080
    X86_AT(c, 0xc0ea7u);
    push32(c, 0xc0eacu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0eacu);
    X86_TICK(c, 17);
    // 0c0eac  add esp, 0x3c
    X86_AT(c, 0xc0eacu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c0eaf  mov dword ptr [0xa6050], eax
    X86_AT(c, 0xc0eafu);
    wr32((c.sbase[3] + (uint32_t)(0xA6050u)), c.r[0]);
    // 0c0eb4  push edi
    X86_AT(c, 0xc0eb4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0eb5  push 0x4f
    X86_AT(c, 0xc0eb5u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0eb7  push ebx
    X86_AT(c, 0xc0eb7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0eb8  call 0xd781c
    X86_AT(c, 0xc0eb8u);
    push32(c, 0xc0ebdu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0ebdu);
    X86_TICK(c, 9);
    // 0c0ebd  push ebx
    X86_AT(c, 0xc0ebdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0ebe  call 0xbf39c
    X86_AT(c, 0xc0ebeu);
    push32(c, 0xc0ec3u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0ec3u);
    X86_TICK(c, 9);
    // 0c0ec3  push eax
    X86_AT(c, 0xc0ec3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0ec4  call 0xb9080
    X86_AT(c, 0xc0ec4u);
    push32(c, 0xc0ec9u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0ec9u);
    X86_TICK(c, 15);
    // 0c0ec9  mov dword ptr [0xa6054], eax
    X86_AT(c, 0xc0ec9u);
    wr32((c.sbase[3] + (uint32_t)(0xA6054u)), c.r[0]);
    // 0c0ece  push edi
    X86_AT(c, 0xc0eceu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0ecf  push 0x4f
    X86_AT(c, 0xc0ecfu);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0ed1  push ebx
    X86_AT(c, 0xc0ed1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0ed2  call 0xd781c
    X86_AT(c, 0xc0ed2u);
    push32(c, 0xc0ed7u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0ed7u);
    X86_TICK(c, 9);
    // 0c0ed7  push ebx
    X86_AT(c, 0xc0ed7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0ed8  call 0xbf39c
    X86_AT(c, 0xc0ed8u);
    push32(c, 0xc0eddu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0eddu);
    X86_TICK(c, 9);
    // 0c0edd  push eax
    X86_AT(c, 0xc0eddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0ede  call 0xb9080
    X86_AT(c, 0xc0edeu);
    push32(c, 0xc0ee3u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0ee3u);
    X86_TICK(c, 15);
    // 0c0ee3  mov dword ptr [0xa6058], eax
    X86_AT(c, 0xc0ee3u);
    wr32((c.sbase[3] + (uint32_t)(0xA6058u)), c.r[0]);
    // 0c0ee8  push edi
    X86_AT(c, 0xc0ee8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0ee9  push 0x4f
    X86_AT(c, 0xc0ee9u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0eeb  push ebx
    X86_AT(c, 0xc0eebu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0eec  call 0xd781c
    X86_AT(c, 0xc0eecu);
    push32(c, 0xc0ef1u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0ef1u);
    X86_TICK(c, 9);
    // 0c0ef1  push ebx
    X86_AT(c, 0xc0ef1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0ef2  call 0xbf39c
    X86_AT(c, 0xc0ef2u);
    push32(c, 0xc0ef7u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0ef7u);
    X86_TICK(c, 9);
    // 0c0ef7  push eax
    X86_AT(c, 0xc0ef7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0ef8  call 0xb9080
    X86_AT(c, 0xc0ef8u);
    push32(c, 0xc0efdu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0efdu);
    X86_TICK(c, 17);
    // 0c0efd  add esp, 0x3c
    X86_AT(c, 0xc0efdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c0f00  mov dword ptr [0xa605c], eax
    X86_AT(c, 0xc0f00u);
    wr32((c.sbase[3] + (uint32_t)(0xA605Cu)), c.r[0]);
    // 0c0f05  push edi
    X86_AT(c, 0xc0f05u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0f06  push 0x4f
    X86_AT(c, 0xc0f06u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0f08  push ebx
    X86_AT(c, 0xc0f08u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0f09  call 0xd781c
    X86_AT(c, 0xc0f09u);
    push32(c, 0xc0f0eu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0f0eu);
    X86_TICK(c, 9);
    // 0c0f0e  push ebx
    X86_AT(c, 0xc0f0eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0f0f  call 0xbf39c
    X86_AT(c, 0xc0f0fu);
    push32(c, 0xc0f14u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0f14u);
    X86_TICK(c, 9);
    // 0c0f14  push eax
    X86_AT(c, 0xc0f14u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0f15  call 0xb9080
    X86_AT(c, 0xc0f15u);
    push32(c, 0xc0f1au); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0f1au);
    X86_TICK(c, 15);
    // 0c0f1a  mov dword ptr [0xa6060], eax
    X86_AT(c, 0xc0f1au);
    wr32((c.sbase[3] + (uint32_t)(0xA6060u)), c.r[0]);
    // 0c0f1f  push edi
    X86_AT(c, 0xc0f1fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0f20  push 0x4f
    X86_AT(c, 0xc0f20u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0f22  push ebx
    X86_AT(c, 0xc0f22u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0f23  call 0xd781c
    X86_AT(c, 0xc0f23u);
    push32(c, 0xc0f28u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0f28u);
    X86_TICK(c, 13);
    // 0c0f28  add esp, 0x20
    X86_AT(c, 0xc0f28u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0c0f2b  lea ebx, [ebp - 0x50]
    X86_AT(c, 0xc0f2bu);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFB0u);
    // 0c0f2e  push ebx
    X86_AT(c, 0xc0f2eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0f2f  call 0xbf39c
    X86_AT(c, 0xc0f2fu);
    push32(c, 0xc0f34u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0f34u);
    X86_TICK(c, 9);
    // 0c0f34  push eax
    X86_AT(c, 0xc0f34u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0f35  call 0xb9080
    X86_AT(c, 0xc0f35u);
    push32(c, 0xc0f3au); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0f3au);
    X86_TICK(c, 15);
    // 0c0f3a  mov dword ptr [0xa6064], eax
    X86_AT(c, 0xc0f3au);
    wr32((c.sbase[3] + (uint32_t)(0xA6064u)), c.r[0]);
    // 0c0f3f  push edi
    X86_AT(c, 0xc0f3fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0f40  push 0x4f
    X86_AT(c, 0xc0f40u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0f42  push ebx
    X86_AT(c, 0xc0f42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0f43  call 0xd781c
    X86_AT(c, 0xc0f43u);
    push32(c, 0xc0f48u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0f48u);
    X86_TICK(c, 9);
    // 0c0f48  push ebx
    X86_AT(c, 0xc0f48u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0f49  call 0xbf39c
    X86_AT(c, 0xc0f49u);
    push32(c, 0xc0f4eu); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0f4eu);
    X86_TICK(c, 9);
    // 0c0f4e  push eax
    X86_AT(c, 0xc0f4eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0f4f  call 0xb9080
    X86_AT(c, 0xc0f4fu);
    push32(c, 0xc0f54u); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0f54u);
    X86_TICK(c, 15);
    // 0c0f54  mov dword ptr [0xa6068], eax
    X86_AT(c, 0xc0f54u);
    wr32((c.sbase[3] + (uint32_t)(0xA6068u)), c.r[0]);
    // 0c0f59  push edi
    X86_AT(c, 0xc0f59u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0f5a  push 0x4f
    X86_AT(c, 0xc0f5au);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0f5c  push ebx
    X86_AT(c, 0xc0f5cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0f5d  call 0xd781c
    X86_AT(c, 0xc0f5du);
    push32(c, 0xc0f62u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0f62u);
    X86_TICK(c, 9);
    // 0c0f62  push ebx
    X86_AT(c, 0xc0f62u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0f63  call 0xbf39c
    X86_AT(c, 0xc0f63u);
    push32(c, 0xc0f68u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0f68u);
    X86_TICK(c, 9);
    // 0c0f68  push eax
    X86_AT(c, 0xc0f68u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0f69  call 0xb9080
    X86_AT(c, 0xc0f69u);
    push32(c, 0xc0f6eu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0f6eu);
    X86_TICK(c, 15);
    // 0c0f6e  mov dword ptr [0xa606c], eax
    X86_AT(c, 0xc0f6eu);
    wr32((c.sbase[3] + (uint32_t)(0xA606Cu)), c.r[0]);
    // 0c0f73  push edi
    X86_AT(c, 0xc0f73u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0f74  push 0x4f
    X86_AT(c, 0xc0f74u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0f76  push ebx
    X86_AT(c, 0xc0f76u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0f77  call 0xd781c
    X86_AT(c, 0xc0f77u);
    push32(c, 0xc0f7cu); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0f7cu);
    X86_TICK(c, 11);
    // 0c0f7c  add esp, 0x3c
    X86_AT(c, 0xc0f7cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c0f7f  push ebx
    X86_AT(c, 0xc0f7fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0f80  call 0xbf39c
    X86_AT(c, 0xc0f80u);
    push32(c, 0xc0f85u); x86_call_known(c, 0xbf39cu, f_000bf39c); X86_RET(c, 0xc0f85u);
    X86_TICK(c, 9);
    // 0c0f85  push eax
    X86_AT(c, 0xc0f85u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0f86  call 0xb9080
    X86_AT(c, 0xc0f86u);
    push32(c, 0xc0f8bu); x86_call_known(c, 0xb9080u, f_000b9080); X86_RET(c, 0xc0f8bu);
    X86_TICK(c, 11);
    // 0c0f8b  mov dword ptr [0xa6070], eax
    X86_AT(c, 0xc0f8bu);
    wr32((c.sbase[3] + (uint32_t)(0xA6070u)), c.r[0]);
    // 0c0f90  push edi
    X86_AT(c, 0xc0f90u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0f91  call 0xd84c0
    X86_AT(c, 0xc0f91u);
    push32(c, 0xc0f96u); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xc0f96u);
    X86_TICK(c, 6);
    // 0c0f96  sub eax, eax
    X86_AT(c, 0xc0f96u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c0f98  mov dword ptr [0xa6650], eax
    X86_AT(c, 0xc0f98u);
    wr32((c.sbase[3] + (uint32_t)(0xA6650u)), c.r[0]);
    // 0c0f9d  add esp, 0xc
    X86_AT(c, 0xc0f9du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c0fa0:
    X86_TICK(c, 28);
    // 0c0fa0  pop edi
    X86_AT(c, 0xc0fa0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c0fa1  pop esi
    X86_AT(c, 0xc0fa1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c0fa2  pop ebx
    X86_AT(c, 0xc0fa2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c0fa3  leave 
    X86_AT(c, 0xc0fa3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c0fa4  ret 
    X86_AT(c, 0xc0fa4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc0cf4u, "ran off the end of a function");
}
void f_000c0fa0(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0c0fa0  pop edi
    X86_AT(c, 0xc0fa0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c0fa1  pop esi
    X86_AT(c, 0xc0fa1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c0fa2  pop ebx
    X86_AT(c, 0xc0fa2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c0fa3  leave 
    X86_AT(c, 0xc0fa3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c0fa4  ret 
    X86_AT(c, 0xc0fa4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc0fa0u, "ran off the end of a function");
}
void f_000c0fa8(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0c0fa8  push ebp
    X86_AT(c, 0xc0fa8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c0fa9  mov ebp, esp
    X86_AT(c, 0xc0fa9u);
    c.r[5] = c.r[4];
    // 0c0fab  sub esp, 0x54
    X86_AT(c, 0xc0fabu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x54u, 0, 4); }
    // 0c0fae  push ebx
    X86_AT(c, 0xc0faeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c0faf  push esi
    X86_AT(c, 0xc0fafu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c0fb0  push edi
    X86_AT(c, 0xc0fb0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c0fb1  push 0x2592
    X86_AT(c, 0xc0fb1u);
    { uint32_t v = 0x2592u; push32(c, v); }
    // 0c0fb6  push 0x2598
    X86_AT(c, 0xc0fb6u);
    { uint32_t v = 0x2598u; push32(c, v); }
    // 0c0fbb  call 0xd7fc4
    X86_AT(c, 0xc0fbbu);
    push32(c, 0xc0fc0u); x86_call_known(c, 0xd7fc4u, f_000d7fc4); X86_RET(c, 0xc0fc0u);
    X86_TICK(c, 11);
    // 0c0fc0  add esp, 8
    X86_AT(c, 0xc0fc0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c0fc3  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc0fc3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c0fc6  and eax, eax
    X86_AT(c, 0xc0fc6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c0fc8  jne 0xc0fd4
    X86_AT(c, 0xc0fc8u);
    if (x86_cc(c, 5)) { goto L_c0fd4; }
    X86_TICK(c, 9);
    // 0c0fca  mov eax, 0xffffffff
    X86_AT(c, 0xc0fcau);
    c.r[0] = 0xFFFFFFFFu;
    // 0c0fcf  jmp 0xc105a
    X86_AT(c, 0xc0fcfu);
    goto L_c105a;
L_c0fd4:
    X86_TICK(c, 18);
    // 0c0fd4  push dword ptr [ebp - 4]
    X86_AT(c, 0xc0fd4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c0fd7  push 0x4f
    X86_AT(c, 0xc0fd7u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c0fd9  lea eax, [ebp - 0x54]
    X86_AT(c, 0xc0fd9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFACu);
    // 0c0fdc  push eax
    X86_AT(c, 0xc0fdcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c0fdd  call 0xd781c
    X86_AT(c, 0xc0fddu);
    push32(c, 0xc0fe2u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc0fe2u);
    X86_TICK(c, 14);
    // 0c0fe2  add esp, 0xc
    X86_AT(c, 0xc0fe2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c0fe5  cmp byte ptr [ebp - 0x54], 0x43
    X86_AT(c, 0xc0fe5u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFACu))), 0x43u, 0, 1);
    // 0c0fe9  jne 0xc0ff1
    X86_AT(c, 0xc0fe9u);
    if (x86_cc(c, 5)) { goto L_c0ff1; }
    X86_TICK(c, 12);
    // 0c0feb  cmp byte ptr [ebp - 0x53], 0x44
    X86_AT(c, 0xc0febu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFADu))), 0x44u, 0, 1);
    // 0c0fef  je 0xc1003
    X86_AT(c, 0xc0fefu);
    if (x86_cc(c, 4)) { goto L_c1003; }
L_c0ff1:
    X86_TICK(c, 12);
    // 0c0ff1  push dword ptr [ebp - 4]
    X86_AT(c, 0xc0ff1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c0ff4  call 0xd84c0
    X86_AT(c, 0xc0ff4u);
    push32(c, 0xc0ff9u); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xc0ff9u);
    X86_TICK(c, 11);
    // 0c0ff9  mov eax, 0xffffffff
    X86_AT(c, 0xc0ff9u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c0ffe  add esp, 4
    X86_AT(c, 0xc0ffeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c1001  jmp 0xc105a
    X86_AT(c, 0xc1001u);
    goto L_c105a;
L_c1003:
    X86_TICK(c, 18);
    // 0c1003  push dword ptr [ebp - 4]
    X86_AT(c, 0xc1003u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c1006  push 0x4f
    X86_AT(c, 0xc1006u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0c1008  lea eax, [ebp - 0x54]
    X86_AT(c, 0xc1008u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFACu);
    // 0c100b  push eax
    X86_AT(c, 0xc100bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c100c  call 0xd781c
    X86_AT(c, 0xc100cu);
    push32(c, 0xc1011u); x86_call_known(c, 0xd781cu, f_000d781c); X86_RET(c, 0xc1011u);
    X86_TICK(c, 12);
    // 0c1011  push dword ptr [ebp - 4]
    X86_AT(c, 0xc1011u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c1014  call 0xd84c0
    X86_AT(c, 0xc1014u);
    push32(c, 0xc1019u); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xc1019u);
    X86_TICK(c, 8);
    // 0c1019  lea ebx, [ebp - 0x54]
    X86_AT(c, 0xc1019u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFACu);
    // 0c101c  sub esi, esi
    X86_AT(c, 0xc101cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0c101e  mov edi, esi
    X86_AT(c, 0xc101eu);
    c.r[7] = c.r[6];
    // 0c1020  add esp, 0x10
    X86_AT(c, 0xc1020u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_c1023:
    X86_TICK(c, 11);
    // 0c1023  mov al, byte ptr [ebx]
    X86_AT(c, 0xc1023u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3]))));
    // 0c1025  cmp al, 0x30
    X86_AT(c, 0xc1025u);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 0c1027  jb 0xc102d
    X86_AT(c, 0xc1027u);
    if (x86_cc(c, 2)) { goto L_c102d; }
    X86_TICK(c, 7);
    // 0c1029  cmp al, 0x39
    X86_AT(c, 0xc1029u);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 0c102b  jbe 0xc1032
    X86_AT(c, 0xc102bu);
    if (x86_cc(c, 6)) { goto L_c1032; }
L_c102d:
    X86_TICK(c, 12);
    // 0c102d  cmp byte ptr [ebx], 0x2c
    X86_AT(c, 0xc102du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3]))), 0x2Cu, 0, 1);
    // 0c1030  jne 0xc105a
    X86_AT(c, 0xc1030u);
    if (x86_cc(c, 5)) { goto L_c105a; }
L_c1032:
    X86_TICK(c, 11);
    // 0c1032  mov al, byte ptr [ebx]
    X86_AT(c, 0xc1032u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3]))));
    // 0c1034  cmp al, 0x2c
    X86_AT(c, 0xc1034u);
    (void)x86_sub(c, g8(c, 0), 0x2Cu, 0, 1);
    // 0c1036  je 0xc1048
    X86_AT(c, 0xc1036u);
    if (x86_cc(c, 4)) { goto L_c1048; }
    X86_TICK(c, 21);
    // 0c1038  lea esi, [esi + esi*4]
    X86_AT(c, 0xc1038u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4);
    // 0c103b  add esi, esi
    X86_AT(c, 0xc103bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[6], 0, 4); }
    // 0c103d  movzx eax, al
    X86_AT(c, 0xc103du);
    c.r[0] = g8(c, 0);
    // 0c1040  sub eax, 0x30
    X86_AT(c, 0xc1040u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x30u, 0, 4); }
    // 0c1043  add eax, esi
    X86_AT(c, 0xc1043u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 0c1045  xchg esi, eax
    X86_AT(c, 0xc1045u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c1046  jmp 0xc1057
    X86_AT(c, 0xc1046u);
    goto L_c1057;
L_c1048:
    X86_TICK(c, 13);
    // 0c1048  mov dword ptr [edi*4 + 0x45ee0], esi
    X86_AT(c, 0xc1048u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0x45EE0u)), c.r[6]);
    // 0c104f  sub esi, esi
    X86_AT(c, 0xc104fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0c1051  inc edi
    X86_AT(c, 0xc1051u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c1052  cmp edi, 0x10
    X86_AT(c, 0xc1052u);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0c1055  jge 0xc105a
    X86_AT(c, 0xc1055u);
    if (x86_cc(c, 13)) { goto L_c105a; }
L_c1057:
    X86_TICK(c, 9);
    // 0c1057  inc ebx
    X86_AT(c, 0xc1057u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0c1058  jmp 0xc1023
    X86_AT(c, 0xc1058u);
    X86_POLL(c, 0xc1023u); goto L_c1023;
L_c105a:
    X86_TICK(c, 28);
    // 0c105a  pop edi
    X86_AT(c, 0xc105au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c105b  pop esi
    X86_AT(c, 0xc105bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c105c  pop ebx
    X86_AT(c, 0xc105cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c105d  leave 
    X86_AT(c, 0xc105du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c105e  ret 
    X86_AT(c, 0xc105eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc0fa8u, "ran off the end of a function");
}
void f_000c1060(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0c1060  push ebp
    X86_AT(c, 0xc1060u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c1061  mov ebp, esp
    X86_AT(c, 0xc1061u);
    c.r[5] = c.r[4];
    // 0c1063  push eax
    X86_AT(c, 0xc1063u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c1064  push ebx
    X86_AT(c, 0xc1064u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1065  push esi
    X86_AT(c, 0xc1065u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1066  push edi
    X86_AT(c, 0xc1066u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c1067  sub edi, edi
    X86_AT(c, 0xc1067u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c1069:
    X86_TICK(c, 7);
    // 0c1069  cmp edi, 6
    X86_AT(c, 0xc1069u);
    (void)x86_sub(c, c.r[7], 0x6u, 0, 4);
    // 0c106c  jge 0xc107f
    X86_AT(c, 0xc106cu);
    if (x86_cc(c, 13)) { goto L_c107f; }
    X86_TICK(c, 9);
    // 0c106e  push 0
    X86_AT(c, 0xc106eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c1070  call 0xb6d38
    X86_AT(c, 0xc1070u);
    push32(c, 0xc1075u); x86_call_known(c, 0xb6d38u, f_000b6d38); X86_RET(c, 0xc1075u);
    X86_TICK(c, 9);
    // 0c1075  add esp, 4
    X86_AT(c, 0xc1075u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c1078  and eax, eax
    X86_AT(c, 0xc1078u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c107a  je 0xc107f
    X86_AT(c, 0xc107au);
    if (x86_cc(c, 4)) { goto L_c107f; }
    X86_TICK(c, 9);
    // 0c107c  inc edi
    X86_AT(c, 0xc107cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c107d  jmp 0xc1069
    X86_AT(c, 0xc107du);
    X86_POLL(c, 0xc1069u); goto L_c1069;
L_c107f:
    X86_TICK(c, 11);
    // 0c107f  push 0x25a8
    X86_AT(c, 0xc107fu);
    { uint32_t v = 0x25A8u; push32(c, v); }
    // 0c1084  push 0x25ac
    X86_AT(c, 0xc1084u);
    { uint32_t v = 0x25ACu; push32(c, v); }
    // 0c1089  call 0xd7fc4
    X86_AT(c, 0xc1089u);
    push32(c, 0xc108eu); x86_call_known(c, 0xd7fc4u, f_000d7fc4); X86_RET(c, 0xc108eu);
    X86_TICK(c, 12);
    // 0c108e  add esp, 8
    X86_AT(c, 0xc108eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c1091  xchg esi, eax
    X86_AT(c, 0xc1091u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c1092  and esi, esi
    X86_AT(c, 0xc1092u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c1094  je 0xc168c
    X86_AT(c, 0xc1094u);
    if (x86_cc(c, 4)) { goto L_c168c; }
    X86_TICK(c, 9);
    // 0c109a  push 0x25bc
    X86_AT(c, 0xc109au);
    { uint32_t v = 0x25BCu; push32(c, v); }
    // 0c109f  call 0xbc50c
    X86_AT(c, 0xc109fu);
    push32(c, 0xc10a4u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc10a4u);
    X86_TICK(c, 11);
    // 0c10a4  push 0x2604
    X86_AT(c, 0xc10a4u);
    { uint32_t v = 0x2604u; push32(c, v); }
    // 0c10a9  push esi
    X86_AT(c, 0xc10a9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c10aa  call 0xd87d8
    X86_AT(c, 0xc10aau);
    push32(c, 0xc10afu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc10afu);
    X86_TICK(c, 4);
    // 0c10af  sub edi, edi
    X86_AT(c, 0xc10afu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0c10b1  add esp, 0xc
    X86_AT(c, 0xc10b1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c10b4:
    X86_TICK(c, 7);
    // 0c10b4  cmp edi, 0x14
    X86_AT(c, 0xc10b4u);
    (void)x86_sub(c, c.r[7], 0x14u, 0, 4);
    // 0c10b7  jge 0xc167c
    X86_AT(c, 0xc10b7u);
    if (x86_cc(c, 13)) { goto L_c167c; }
    X86_TICK(c, 23);
    // 0c10bd  mov eax, edi
    X86_AT(c, 0xc10bdu);
    c.r[0] = c.r[7];
    // 0c10bf  lea edx, [eax + eax*2]
    X86_AT(c, 0xc10bfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c10c2  shl edx, 5
    X86_AT(c, 0xc10c2u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c10c5  add edx, eax
    X86_AT(c, 0xc10c5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c10c7  lea edx, [eax + edx*2]
    X86_AT(c, 0xc10c7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c10ca  cmp byte ptr [edx + 0xa4dac], 0
    X86_AT(c, 0xc10cau);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DACu))), 0x0u, 0, 1);
    // 0c10d1  jne 0xc10e8
    X86_AT(c, 0xc10d1u);
    if (x86_cc(c, 5)) { goto L_c10e8; }
    X86_TICK(c, 17);
    // 0c10d3  push 0
    X86_AT(c, 0xc10d3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c10d5  push 0
    X86_AT(c, 0xc10d5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c10d7  push edi
    X86_AT(c, 0xc10d7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c10d8  push 0x262c
    X86_AT(c, 0xc10d8u);
    { uint32_t v = 0x262Cu; push32(c, v); }
    // 0c10dd  push esi
    X86_AT(c, 0xc10ddu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c10de  call 0xd87d8
    X86_AT(c, 0xc10deu);
    push32(c, 0xc10e3u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc10e3u);
    X86_TICK(c, 9);
    // 0c10e3  add esp, 0x14
    X86_AT(c, 0xc10e3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c10e6  jmp 0xc110b
    X86_AT(c, 0xc10e6u);
    goto L_c110b;
L_c10e8:
    X86_TICK(c, 28);
    // 0c10e8  mov eax, edi
    X86_AT(c, 0xc10e8u);
    c.r[0] = c.r[7];
    // 0c10ea  lea edx, [eax + eax*2]
    X86_AT(c, 0xc10eau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c10ed  shl edx, 5
    X86_AT(c, 0xc10edu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c10f0  add edx, eax
    X86_AT(c, 0xc10f0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c10f2  lea edx, [eax + edx*2]
    X86_AT(c, 0xc10f2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c10f5  add edx, 0xa4dac
    X86_AT(c, 0xc10f5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xA4DACu, 0, 4); }
    // 0c10fb  push edx
    X86_AT(c, 0xc10fbu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c10fc  push edi
    X86_AT(c, 0xc10fcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c10fd  push 0x263c
    X86_AT(c, 0xc10fdu);
    { uint32_t v = 0x263Cu; push32(c, v); }
    // 0c1102  push esi
    X86_AT(c, 0xc1102u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1103  call 0xd87d8
    X86_AT(c, 0xc1103u);
    push32(c, 0xc1108u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1108u);
    X86_TICK(c, 2);
    // 0c1108  add esp, 0x10
    X86_AT(c, 0xc1108u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_c110b:
    X86_TICK(c, 23);
    // 0c110b  mov eax, edi
    X86_AT(c, 0xc110bu);
    c.r[0] = c.r[7];
    // 0c110d  lea edx, [eax + eax*2]
    X86_AT(c, 0xc110du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c1110  shl edx, 5
    X86_AT(c, 0xc1110u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c1113  add edx, eax
    X86_AT(c, 0xc1113u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c1115  lea edx, [eax + edx*2]
    X86_AT(c, 0xc1115u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c1118  cmp byte ptr [edx + 0xa4db9], 1
    X86_AT(c, 0xc1118u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DB9u))), 0x1u, 0, 1);
    // 0c111f  je 0xc1128
    X86_AT(c, 0xc111fu);
    if (x86_cc(c, 4)) { goto L_c1128; }
    X86_TICK(c, 9);
    // 0c1121  mov eax, 0x264a
    X86_AT(c, 0xc1121u);
    c.r[0] = 0x264Au;
    // 0c1126  jmp 0xc112d
    X86_AT(c, 0xc1126u);
    goto L_c112d;
L_c1128:
    X86_TICK(c, 2);
    // 0c1128  mov eax, 0x2650
    X86_AT(c, 0xc1128u);
    c.r[0] = 0x2650u;
L_c112d:
    X86_TICK(c, 13);
    // 0c112d  push eax
    X86_AT(c, 0xc112du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c112e  push 0x2654
    X86_AT(c, 0xc112eu);
    { uint32_t v = 0x2654u; push32(c, v); }
    // 0c1133  push esi
    X86_AT(c, 0xc1133u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1134  call 0xd87d8
    X86_AT(c, 0xc1134u);
    push32(c, 0xc1139u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1139u);
    X86_TICK(c, 23);
    // 0c1139  mov eax, edi
    X86_AT(c, 0xc1139u);
    c.r[0] = c.r[7];
    // 0c113b  lea edx, [eax + eax*2]
    X86_AT(c, 0xc113bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c113e  shl edx, 5
    X86_AT(c, 0xc113eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c1141  add edx, eax
    X86_AT(c, 0xc1141u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c1143  lea edx, [eax + edx*2]
    X86_AT(c, 0xc1143u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c1146  cmp byte ptr [edx + 0xa4dba], 1
    X86_AT(c, 0xc1146u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBAu))), 0x1u, 0, 1);
    // 0c114d  je 0xc1156
    X86_AT(c, 0xc114du);
    if (x86_cc(c, 4)) { goto L_c1156; }
    X86_TICK(c, 9);
    // 0c114f  mov eax, 0x2660
    X86_AT(c, 0xc114fu);
    c.r[0] = 0x2660u;
    // 0c1154  jmp 0xc115b
    X86_AT(c, 0xc1154u);
    goto L_c115b;
L_c1156:
    X86_TICK(c, 2);
    // 0c1156  mov eax, 0x2664
    X86_AT(c, 0xc1156u);
    c.r[0] = 0x2664u;
L_c115b:
    X86_TICK(c, 13);
    // 0c115b  push eax
    X86_AT(c, 0xc115bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c115c  push 0x2668
    X86_AT(c, 0xc115cu);
    { uint32_t v = 0x2668u; push32(c, v); }
    // 0c1161  push esi
    X86_AT(c, 0xc1161u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1162  call 0xd87d8
    X86_AT(c, 0xc1162u);
    push32(c, 0xc1167u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1167u);
    X86_TICK(c, 23);
    // 0c1167  mov eax, edi
    X86_AT(c, 0xc1167u);
    c.r[0] = c.r[7];
    // 0c1169  lea edx, [eax + eax*2]
    X86_AT(c, 0xc1169u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c116c  shl edx, 5
    X86_AT(c, 0xc116cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c116f  add edx, eax
    X86_AT(c, 0xc116fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c1171  lea edx, [eax + edx*2]
    X86_AT(c, 0xc1171u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c1174  cmp byte ptr [edx + 0xa4dbb], 1
    X86_AT(c, 0xc1174u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBBu))), 0x1u, 0, 1);
    // 0c117b  je 0xc1184
    X86_AT(c, 0xc117bu);
    if (x86_cc(c, 4)) { goto L_c1184; }
    X86_TICK(c, 9);
    // 0c117d  mov eax, 0x2674
    X86_AT(c, 0xc117du);
    c.r[0] = 0x2674u;
    // 0c1182  jmp 0xc1189
    X86_AT(c, 0xc1182u);
    goto L_c1189;
L_c1184:
    X86_TICK(c, 2);
    // 0c1184  mov eax, 0x2678
    X86_AT(c, 0xc1184u);
    c.r[0] = 0x2678u;
L_c1189:
    X86_TICK(c, 13);
    // 0c1189  push eax
    X86_AT(c, 0xc1189u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c118a  push 0x267c
    X86_AT(c, 0xc118au);
    { uint32_t v = 0x267Cu; push32(c, v); }
    // 0c118f  push esi
    X86_AT(c, 0xc118fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1190  call 0xd87d8
    X86_AT(c, 0xc1190u);
    push32(c, 0xc1195u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1195u);
    X86_TICK(c, 23);
    // 0c1195  mov eax, edi
    X86_AT(c, 0xc1195u);
    c.r[0] = c.r[7];
    // 0c1197  lea edx, [eax + eax*2]
    X86_AT(c, 0xc1197u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c119a  shl edx, 5
    X86_AT(c, 0xc119au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c119d  add edx, eax
    X86_AT(c, 0xc119du);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c119f  lea edx, [eax + edx*2]
    X86_AT(c, 0xc119fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c11a2  cmp byte ptr [edx + 0xa4dbc], 1
    X86_AT(c, 0xc11a2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBCu))), 0x1u, 0, 1);
    // 0c11a9  je 0xc11b2
    X86_AT(c, 0xc11a9u);
    if (x86_cc(c, 4)) { goto L_c11b2; }
    X86_TICK(c, 9);
    // 0c11ab  mov eax, 0x2688
    X86_AT(c, 0xc11abu);
    c.r[0] = 0x2688u;
    // 0c11b0  jmp 0xc11b7
    X86_AT(c, 0xc11b0u);
    goto L_c11b7;
L_c11b2:
    X86_TICK(c, 2);
    // 0c11b2  mov eax, 0x268c
    X86_AT(c, 0xc11b2u);
    c.r[0] = 0x268Cu;
L_c11b7:
    X86_TICK(c, 13);
    // 0c11b7  push eax
    X86_AT(c, 0xc11b7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c11b8  push 0x2690
    X86_AT(c, 0xc11b8u);
    { uint32_t v = 0x2690u; push32(c, v); }
    // 0c11bd  push esi
    X86_AT(c, 0xc11bdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c11be  call 0xd87d8
    X86_AT(c, 0xc11beu);
    push32(c, 0xc11c3u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc11c3u);
    X86_TICK(c, 25);
    // 0c11c3  add esp, 0x30
    X86_AT(c, 0xc11c3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0c11c6  mov eax, edi
    X86_AT(c, 0xc11c6u);
    c.r[0] = c.r[7];
    // 0c11c8  lea edx, [eax + eax*2]
    X86_AT(c, 0xc11c8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c11cb  shl edx, 5
    X86_AT(c, 0xc11cbu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c11ce  add edx, eax
    X86_AT(c, 0xc11ceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c11d0  lea edx, [eax + edx*2]
    X86_AT(c, 0xc11d0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c11d3  cmp byte ptr [edx + 0xa4dbd], 1
    X86_AT(c, 0xc11d3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBDu))), 0x1u, 0, 1);
    // 0c11da  je 0xc11e3
    X86_AT(c, 0xc11dau);
    if (x86_cc(c, 4)) { goto L_c11e3; }
    X86_TICK(c, 9);
    // 0c11dc  mov eax, 0x269c
    X86_AT(c, 0xc11dcu);
    c.r[0] = 0x269Cu;
    // 0c11e1  jmp 0xc11e8
    X86_AT(c, 0xc11e1u);
    goto L_c11e8;
L_c11e3:
    X86_TICK(c, 2);
    // 0c11e3  mov eax, 0x26a0
    X86_AT(c, 0xc11e3u);
    c.r[0] = 0x26A0u;
L_c11e8:
    X86_TICK(c, 13);
    // 0c11e8  push eax
    X86_AT(c, 0xc11e8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c11e9  push 0x26a4
    X86_AT(c, 0xc11e9u);
    { uint32_t v = 0x26A4u; push32(c, v); }
    // 0c11ee  push esi
    X86_AT(c, 0xc11eeu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c11ef  call 0xd87d8
    X86_AT(c, 0xc11efu);
    push32(c, 0xc11f4u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc11f4u);
    X86_TICK(c, 23);
    // 0c11f4  mov eax, edi
    X86_AT(c, 0xc11f4u);
    c.r[0] = c.r[7];
    // 0c11f6  lea edx, [eax + eax*2]
    X86_AT(c, 0xc11f6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c11f9  shl edx, 5
    X86_AT(c, 0xc11f9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c11fc  add edx, eax
    X86_AT(c, 0xc11fcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c11fe  lea edx, [eax + edx*2]
    X86_AT(c, 0xc11feu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c1201  cmp byte ptr [edx + 0xa4dbe], 1
    X86_AT(c, 0xc1201u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBEu))), 0x1u, 0, 1);
    // 0c1208  je 0xc1211
    X86_AT(c, 0xc1208u);
    if (x86_cc(c, 4)) { goto L_c1211; }
    X86_TICK(c, 9);
    // 0c120a  mov eax, 0x26b0
    X86_AT(c, 0xc120au);
    c.r[0] = 0x26B0u;
    // 0c120f  jmp 0xc1216
    X86_AT(c, 0xc120fu);
    goto L_c1216;
L_c1211:
    X86_TICK(c, 2);
    // 0c1211  mov eax, 0x26b4
    X86_AT(c, 0xc1211u);
    c.r[0] = 0x26B4u;
L_c1216:
    X86_TICK(c, 13);
    // 0c1216  push eax
    X86_AT(c, 0xc1216u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c1217  push 0x26b8
    X86_AT(c, 0xc1217u);
    { uint32_t v = 0x26B8u; push32(c, v); }
    // 0c121c  push esi
    X86_AT(c, 0xc121cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c121d  call 0xd87d8
    X86_AT(c, 0xc121du);
    push32(c, 0xc1222u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1222u);
    X86_TICK(c, 23);
    // 0c1222  mov eax, edi
    X86_AT(c, 0xc1222u);
    c.r[0] = c.r[7];
    // 0c1224  lea edx, [eax + eax*2]
    X86_AT(c, 0xc1224u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c1227  shl edx, 5
    X86_AT(c, 0xc1227u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c122a  add edx, eax
    X86_AT(c, 0xc122au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c122c  lea edx, [eax + edx*2]
    X86_AT(c, 0xc122cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c122f  cmp byte ptr [edx + 0xa4dbf], 1
    X86_AT(c, 0xc122fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DBFu))), 0x1u, 0, 1);
    // 0c1236  je 0xc123f
    X86_AT(c, 0xc1236u);
    if (x86_cc(c, 4)) { goto L_c123f; }
    X86_TICK(c, 9);
    // 0c1238  mov eax, 0x26c4
    X86_AT(c, 0xc1238u);
    c.r[0] = 0x26C4u;
    // 0c123d  jmp 0xc1244
    X86_AT(c, 0xc123du);
    goto L_c1244;
L_c123f:
    X86_TICK(c, 2);
    // 0c123f  mov eax, 0x26c8
    X86_AT(c, 0xc123fu);
    c.r[0] = 0x26C8u;
L_c1244:
    X86_TICK(c, 13);
    // 0c1244  push eax
    X86_AT(c, 0xc1244u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c1245  push 0x26cc
    X86_AT(c, 0xc1245u);
    { uint32_t v = 0x26CCu; push32(c, v); }
    // 0c124a  push esi
    X86_AT(c, 0xc124au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c124b  call 0xd87d8
    X86_AT(c, 0xc124bu);
    push32(c, 0xc1250u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1250u);
    X86_TICK(c, 23);
    // 0c1250  mov eax, edi
    X86_AT(c, 0xc1250u);
    c.r[0] = c.r[7];
    // 0c1252  lea edx, [eax + eax*2]
    X86_AT(c, 0xc1252u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c1255  shl edx, 5
    X86_AT(c, 0xc1255u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c1258  add edx, eax
    X86_AT(c, 0xc1258u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c125a  lea edx, [eax + edx*2]
    X86_AT(c, 0xc125au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c125d  cmp byte ptr [edx + 0xa4dc0], 1
    X86_AT(c, 0xc125du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC0u))), 0x1u, 0, 1);
    // 0c1264  je 0xc126d
    X86_AT(c, 0xc1264u);
    if (x86_cc(c, 4)) { goto L_c126d; }
    X86_TICK(c, 9);
    // 0c1266  mov eax, 0x26d6
    X86_AT(c, 0xc1266u);
    c.r[0] = 0x26D6u;
    // 0c126b  jmp 0xc1272
    X86_AT(c, 0xc126bu);
    goto L_c1272;
L_c126d:
    X86_TICK(c, 2);
    // 0c126d  mov eax, 0x26dc
    X86_AT(c, 0xc126du);
    c.r[0] = 0x26DCu;
L_c1272:
    X86_TICK(c, 13);
    // 0c1272  push eax
    X86_AT(c, 0xc1272u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c1273  push 0x26e0
    X86_AT(c, 0xc1273u);
    { uint32_t v = 0x26E0u; push32(c, v); }
    // 0c1278  push esi
    X86_AT(c, 0xc1278u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1279  call 0xd87d8
    X86_AT(c, 0xc1279u);
    push32(c, 0xc127eu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc127eu);
    X86_TICK(c, 29);
    // 0c127e  add esp, 0x30
    X86_AT(c, 0xc127eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0c1281  mov eax, edi
    X86_AT(c, 0xc1281u);
    c.r[0] = c.r[7];
    // 0c1283  lea edx, [eax + eax*2]
    X86_AT(c, 0xc1283u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c1286  shl edx, 5
    X86_AT(c, 0xc1286u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c1289  add edx, eax
    X86_AT(c, 0xc1289u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c128b  lea edx, [eax + edx*2]
    X86_AT(c, 0xc128bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c128e  push dword ptr [edx + 0xa4dc1]
    X86_AT(c, 0xc128eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC1u))); push32(c, v); }
    // 0c1294  push 0x26ec
    X86_AT(c, 0xc1294u);
    { uint32_t v = 0x26ECu; push32(c, v); }
    // 0c1299  push esi
    X86_AT(c, 0xc1299u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c129a  call 0xd87d8
    X86_AT(c, 0xc129au);
    push32(c, 0xc129fu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc129fu);
    X86_TICK(c, 23);
    // 0c129f  mov eax, edi
    X86_AT(c, 0xc129fu);
    c.r[0] = c.r[7];
    // 0c12a1  lea edx, [eax + eax*2]
    X86_AT(c, 0xc12a1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c12a4  shl edx, 5
    X86_AT(c, 0xc12a4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c12a7  add edx, eax
    X86_AT(c, 0xc12a7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c12a9  lea edx, [eax + edx*2]
    X86_AT(c, 0xc12a9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c12ac  cmp dword ptr [edx + 0xa4dc5], 0
    X86_AT(c, 0xc12acu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DC5u))), 0x0u, 0, 4);
    // 0c12b3  je 0xc12bc
    X86_AT(c, 0xc12b3u);
    if (x86_cc(c, 4)) { goto L_c12bc; }
    X86_TICK(c, 9);
    // 0c12b5  mov eax, 0x26fa
    X86_AT(c, 0xc12b5u);
    c.r[0] = 0x26FAu;
    // 0c12ba  jmp 0xc12c1
    X86_AT(c, 0xc12bau);
    goto L_c12c1;
L_c12bc:
    X86_TICK(c, 2);
    // 0c12bc  mov eax, 0x2700
    X86_AT(c, 0xc12bcu);
    c.r[0] = 0x2700u;
L_c12c1:
    X86_TICK(c, 13);
    // 0c12c1  push eax
    X86_AT(c, 0xc12c1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c12c2  push 0x2704
    X86_AT(c, 0xc12c2u);
    { uint32_t v = 0x2704u; push32(c, v); }
    // 0c12c7  push esi
    X86_AT(c, 0xc12c7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c12c8  call 0xd87d8
    X86_AT(c, 0xc12c8u);
    push32(c, 0xc12cdu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc12cdu);
    X86_TICK(c, 36);
    // 0c12cd  mov eax, 0xa492c
    X86_AT(c, 0xc12cdu);
    c.r[0] = 0xA492Cu;
    // 0c12d2  mov edx, edi
    X86_AT(c, 0xc12d2u);
    c.r[2] = c.r[7];
    // 0c12d4  lea ecx, [edx + edx*2]
    X86_AT(c, 0xc12d4u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0c12d7  shl ecx, 5
    X86_AT(c, 0xc12d7u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0c12da  add ecx, edx
    X86_AT(c, 0xc12dau);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0c12dc  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xc12dcu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0c12df  movzx edx, byte ptr [eax + ecx*1 + 0x49d]
    X86_AT(c, 0xc12dfu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0x49Du)));
    // 0c12e7  push edx
    X86_AT(c, 0xc12e7u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c12e8  push 0x2714
    X86_AT(c, 0xc12e8u);
    { uint32_t v = 0x2714u; push32(c, v); }
    // 0c12ed  push esi
    X86_AT(c, 0xc12edu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c12ee  mov ebx, eax
    X86_AT(c, 0xc12eeu);
    c.r[3] = c.r[0];
    // 0c12f0  mov dword ptr [ebp - 4], ecx
    X86_AT(c, 0xc12f0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[1]);
    // 0c12f3  call 0xd87d8
    X86_AT(c, 0xc12f3u);
    push32(c, 0xc12f8u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc12f8u);
    X86_TICK(c, 20);
    // 0c12f8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc12f8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c12fb  push dword ptr [ebx + eax*1 + 0x49e]
    X86_AT(c, 0xc12fbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x49Eu))); push32(c, v); }
    // 0c1302  push 0x2724
    X86_AT(c, 0xc1302u);
    { uint32_t v = 0x2724u; push32(c, v); }
    // 0c1307  push esi
    X86_AT(c, 0xc1307u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1308  call 0xd87d8
    X86_AT(c, 0xc1308u);
    push32(c, 0xc130du); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc130du);
    X86_TICK(c, 20);
    // 0c130d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc130du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1310  push dword ptr [ebx + eax*1 + 0x4a2]
    X86_AT(c, 0xc1310u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x4A2u))); push32(c, v); }
    // 0c1317  push 0x2734
    X86_AT(c, 0xc1317u);
    { uint32_t v = 0x2734u; push32(c, v); }
    // 0c131c  push esi
    X86_AT(c, 0xc131cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c131d  call 0xd87d8
    X86_AT(c, 0xc131du);
    push32(c, 0xc1322u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1322u);
    X86_TICK(c, 22);
    // 0c1322  add esp, 0x3c
    X86_AT(c, 0xc1322u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c1325  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1325u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1328  push dword ptr [ebx + eax*1 + 0x4a6]
    X86_AT(c, 0xc1328u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x4A6u))); push32(c, v); }
    // 0c132f  push 0x2744
    X86_AT(c, 0xc132fu);
    { uint32_t v = 0x2744u; push32(c, v); }
    // 0c1334  push esi
    X86_AT(c, 0xc1334u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1335  call 0xd87d8
    X86_AT(c, 0xc1335u);
    push32(c, 0xc133au); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc133au);
    X86_TICK(c, 20);
    // 0c133a  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc133au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c133d  push dword ptr [ebx + eax*1 + 0x4aa]
    X86_AT(c, 0xc133du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x4AAu))); push32(c, v); }
    // 0c1344  push 0x2758
    X86_AT(c, 0xc1344u);
    { uint32_t v = 0x2758u; push32(c, v); }
    // 0c1349  push esi
    X86_AT(c, 0xc1349u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c134a  call 0xd87d8
    X86_AT(c, 0xc134au);
    push32(c, 0xc134fu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc134fu);
    X86_TICK(c, 23);
    // 0c134f  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc134fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1352  movzx eax, byte ptr [ebx + eax*1 + 0x4ae]
    X86_AT(c, 0xc1352u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x4AEu)));
    // 0c135a  push eax
    X86_AT(c, 0xc135au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c135b  push 0x2768
    X86_AT(c, 0xc135bu);
    { uint32_t v = 0x2768u; push32(c, v); }
    // 0c1360  push esi
    X86_AT(c, 0xc1360u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1361  call 0xd87d8
    X86_AT(c, 0xc1361u);
    push32(c, 0xc1366u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1366u);
    X86_TICK(c, 34);
    // 0c1366  add esp, 0x24
    X86_AT(c, 0xc1366u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0c1369  mov eax, edi
    X86_AT(c, 0xc1369u);
    c.r[0] = c.r[7];
    // 0c136b  lea edx, [eax + eax*2]
    X86_AT(c, 0xc136bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c136e  shl edx, 5
    X86_AT(c, 0xc136eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c1371  add edx, eax
    X86_AT(c, 0xc1371u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c1373  lea edx, [eax + edx*2]
    X86_AT(c, 0xc1373u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c1376  movzx eax, byte ptr [edx + 0xa4ddb]
    X86_AT(c, 0xc1376u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4DDBu)));
    // 0c137d  push eax
    X86_AT(c, 0xc137du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c137e  push 0x2774
    X86_AT(c, 0xc137eu);
    { uint32_t v = 0x2774u; push32(c, v); }
    // 0c1383  push esi
    X86_AT(c, 0xc1383u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1384  mov ebx, edx
    X86_AT(c, 0xc1384u);
    c.r[3] = c.r[2];
    // 0c1386  call 0xd87d8
    X86_AT(c, 0xc1386u);
    push32(c, 0xc138bu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc138bu);
    X86_TICK(c, 19);
    // 0c138b  movzx eax, byte ptr [ebx + 0xa4ddc]
    X86_AT(c, 0xc138bu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4DDCu)));
    // 0c1392  push eax
    X86_AT(c, 0xc1392u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c1393  push 0x2788
    X86_AT(c, 0xc1393u);
    { uint32_t v = 0x2788u; push32(c, v); }
    // 0c1398  push esi
    X86_AT(c, 0xc1398u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1399  call 0xd87d8
    X86_AT(c, 0xc1399u);
    push32(c, 0xc139eu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc139eu);
    X86_TICK(c, 16);
    // 0c139e  push dword ptr [ebx + 0xa4ddd]
    X86_AT(c, 0xc139eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4DDDu))); push32(c, v); }
    // 0c13a4  push 0x2794
    X86_AT(c, 0xc13a4u);
    { uint32_t v = 0x2794u; push32(c, v); }
    // 0c13a9  push esi
    X86_AT(c, 0xc13a9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c13aa  call 0xd87d8
    X86_AT(c, 0xc13aau);
    push32(c, 0xc13afu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc13afu);
    X86_TICK(c, 16);
    // 0c13af  push dword ptr [ebx + 0xa4de1]
    X86_AT(c, 0xc13afu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4DE1u))); push32(c, v); }
    // 0c13b5  push 0x27a0
    X86_AT(c, 0xc13b5u);
    { uint32_t v = 0x27A0u; push32(c, v); }
    // 0c13ba  push esi
    X86_AT(c, 0xc13bau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c13bb  call 0xd87d8
    X86_AT(c, 0xc13bbu);
    push32(c, 0xc13c0u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc13c0u);
    X86_TICK(c, 16);
    // 0c13c0  push dword ptr [ebx + 0xa4de5]
    X86_AT(c, 0xc13c0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4DE5u))); push32(c, v); }
    // 0c13c6  push 0x27b0
    X86_AT(c, 0xc13c6u);
    { uint32_t v = 0x27B0u; push32(c, v); }
    // 0c13cb  push esi
    X86_AT(c, 0xc13cbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c13cc  call 0xd87d8
    X86_AT(c, 0xc13ccu);
    push32(c, 0xc13d1u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc13d1u);
    X86_TICK(c, 18);
    // 0c13d1  add esp, 0x3c
    X86_AT(c, 0xc13d1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c13d4  push dword ptr [ebx + 0xa4de9]
    X86_AT(c, 0xc13d4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4DE9u))); push32(c, v); }
    // 0c13da  push 0x27c0
    X86_AT(c, 0xc13dau);
    { uint32_t v = 0x27C0u; push32(c, v); }
    // 0c13df  push esi
    X86_AT(c, 0xc13dfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c13e0  call 0xd87d8
    X86_AT(c, 0xc13e0u);
    push32(c, 0xc13e5u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc13e5u);
    X86_TICK(c, 16);
    // 0c13e5  push dword ptr [ebx + 0xa4df1]
    X86_AT(c, 0xc13e5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4DF1u))); push32(c, v); }
    // 0c13eb  push 0x27d4
    X86_AT(c, 0xc13ebu);
    { uint32_t v = 0x27D4u; push32(c, v); }
    // 0c13f0  push esi
    X86_AT(c, 0xc13f0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c13f1  call 0xd87d8
    X86_AT(c, 0xc13f1u);
    push32(c, 0xc13f6u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc13f6u);
    X86_TICK(c, 16);
    // 0c13f6  push dword ptr [ebx + 0xa4ded]
    X86_AT(c, 0xc13f6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4DEDu))); push32(c, v); }
    // 0c13fc  push 0x27e0
    X86_AT(c, 0xc13fcu);
    { uint32_t v = 0x27E0u; push32(c, v); }
    // 0c1401  push esi
    X86_AT(c, 0xc1401u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1402  call 0xd87d8
    X86_AT(c, 0xc1402u);
    push32(c, 0xc1407u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1407u);
    X86_TICK(c, 16);
    // 0c1407  push dword ptr [ebx + 0xa4df5]
    X86_AT(c, 0xc1407u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4DF5u))); push32(c, v); }
    // 0c140d  push 0x27ec
    X86_AT(c, 0xc140du);
    { uint32_t v = 0x27ECu; push32(c, v); }
    // 0c1412  push esi
    X86_AT(c, 0xc1412u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1413  call 0xd87d8
    X86_AT(c, 0xc1413u);
    push32(c, 0xc1418u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1418u);
    X86_TICK(c, 16);
    // 0c1418  push dword ptr [ebx + 0xa4df9]
    X86_AT(c, 0xc1418u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4DF9u))); push32(c, v); }
    // 0c141e  push 0x27f8
    X86_AT(c, 0xc141eu);
    { uint32_t v = 0x27F8u; push32(c, v); }
    // 0c1423  push esi
    X86_AT(c, 0xc1423u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1424  call 0xd87d8
    X86_AT(c, 0xc1424u);
    push32(c, 0xc1429u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1429u);
    X86_TICK(c, 18);
    // 0c1429  add esp, 0x3c
    X86_AT(c, 0xc1429u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c142c  push dword ptr [ebx + 0xa4dfd]
    X86_AT(c, 0xc142cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4DFDu))); push32(c, v); }
    // 0c1432  push 0x2804
    X86_AT(c, 0xc1432u);
    { uint32_t v = 0x2804u; push32(c, v); }
    // 0c1437  push esi
    X86_AT(c, 0xc1437u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1438  call 0xd87d8
    X86_AT(c, 0xc1438u);
    push32(c, 0xc143du); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc143du);
    X86_TICK(c, 31);
    // 0c143d  add esp, 0xc
    X86_AT(c, 0xc143du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c1440  mov eax, edi
    X86_AT(c, 0xc1440u);
    c.r[0] = c.r[7];
    // 0c1442  lea edx, [eax + eax*2]
    X86_AT(c, 0xc1442u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c1445  shl edx, 5
    X86_AT(c, 0xc1445u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c1448  add edx, eax
    X86_AT(c, 0xc1448u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c144a  lea edx, [eax + edx*2]
    X86_AT(c, 0xc144au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c144d  push dword ptr [edx + 0xa4e01]
    X86_AT(c, 0xc144du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E01u))); push32(c, v); }
    // 0c1453  push 0x2810
    X86_AT(c, 0xc1453u);
    { uint32_t v = 0x2810u; push32(c, v); }
    // 0c1458  push esi
    X86_AT(c, 0xc1458u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1459  mov ebx, edx
    X86_AT(c, 0xc1459u);
    c.r[3] = c.r[2];
    // 0c145b  call 0xd87d8
    X86_AT(c, 0xc145bu);
    push32(c, 0xc1460u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1460u);
    X86_TICK(c, 19);
    // 0c1460  movzx eax, byte ptr [ebx + 0xa4e05]
    X86_AT(c, 0xc1460u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E05u)));
    // 0c1467  push eax
    X86_AT(c, 0xc1467u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c1468  push 0x2820
    X86_AT(c, 0xc1468u);
    { uint32_t v = 0x2820u; push32(c, v); }
    // 0c146d  push esi
    X86_AT(c, 0xc146du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c146e  call 0xd87d8
    X86_AT(c, 0xc146eu);
    push32(c, 0xc1473u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1473u);
    X86_TICK(c, 16);
    // 0c1473  push dword ptr [ebx + 0xa4e06]
    X86_AT(c, 0xc1473u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E06u))); push32(c, v); }
    // 0c1479  push 0x2830
    X86_AT(c, 0xc1479u);
    { uint32_t v = 0x2830u; push32(c, v); }
    // 0c147e  push esi
    X86_AT(c, 0xc147eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c147f  call 0xd87d8
    X86_AT(c, 0xc147fu);
    push32(c, 0xc1484u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1484u);
    X86_TICK(c, 16);
    // 0c1484  push dword ptr [ebx + 0xa4e0a]
    X86_AT(c, 0xc1484u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E0Au))); push32(c, v); }
    // 0c148a  push 0x2840
    X86_AT(c, 0xc148au);
    { uint32_t v = 0x2840u; push32(c, v); }
    // 0c148f  push esi
    X86_AT(c, 0xc148fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1490  call 0xd87d8
    X86_AT(c, 0xc1490u);
    push32(c, 0xc1495u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1495u);
    X86_TICK(c, 16);
    // 0c1495  push dword ptr [ebx + 0xa4e0e]
    X86_AT(c, 0xc1495u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E0Eu))); push32(c, v); }
    // 0c149b  push 0x2850
    X86_AT(c, 0xc149bu);
    { uint32_t v = 0x2850u; push32(c, v); }
    // 0c14a0  push esi
    X86_AT(c, 0xc14a0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c14a1  call 0xd87d8
    X86_AT(c, 0xc14a1u);
    push32(c, 0xc14a6u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc14a6u);
    X86_TICK(c, 18);
    // 0c14a6  add esp, 0x3c
    X86_AT(c, 0xc14a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c14a9  push dword ptr [ebx + 0xa4e12]
    X86_AT(c, 0xc14a9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E12u))); push32(c, v); }
    // 0c14af  push 0x2860
    X86_AT(c, 0xc14afu);
    { uint32_t v = 0x2860u; push32(c, v); }
    // 0c14b4  push esi
    X86_AT(c, 0xc14b4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c14b5  call 0xd87d8
    X86_AT(c, 0xc14b5u);
    push32(c, 0xc14bau); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc14bau);
    X86_TICK(c, 16);
    // 0c14ba  push dword ptr [ebx + 0xa4e16]
    X86_AT(c, 0xc14bau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E16u))); push32(c, v); }
    // 0c14c0  push 0x2870
    X86_AT(c, 0xc14c0u);
    { uint32_t v = 0x2870u; push32(c, v); }
    // 0c14c5  push esi
    X86_AT(c, 0xc14c5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c14c6  call 0xd87d8
    X86_AT(c, 0xc14c6u);
    push32(c, 0xc14cbu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc14cbu);
    X86_TICK(c, 16);
    // 0c14cb  push dword ptr [ebx + 0xa4e1a]
    X86_AT(c, 0xc14cbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E1Au))); push32(c, v); }
    // 0c14d1  push 0x2880
    X86_AT(c, 0xc14d1u);
    { uint32_t v = 0x2880u; push32(c, v); }
    // 0c14d6  push esi
    X86_AT(c, 0xc14d6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c14d7  call 0xd87d8
    X86_AT(c, 0xc14d7u);
    push32(c, 0xc14dcu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc14dcu);
    X86_TICK(c, 16);
    // 0c14dc  push dword ptr [ebx + 0xa4e1e]
    X86_AT(c, 0xc14dcu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E1Eu))); push32(c, v); }
    // 0c14e2  push 0x2890
    X86_AT(c, 0xc14e2u);
    { uint32_t v = 0x2890u; push32(c, v); }
    // 0c14e7  push esi
    X86_AT(c, 0xc14e7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c14e8  call 0xd87d8
    X86_AT(c, 0xc14e8u);
    push32(c, 0xc14edu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc14edu);
    X86_TICK(c, 16);
    // 0c14ed  push dword ptr [ebx + 0xa4e22]
    X86_AT(c, 0xc14edu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E22u))); push32(c, v); }
    // 0c14f3  push 0x28a0
    X86_AT(c, 0xc14f3u);
    { uint32_t v = 0x28A0u; push32(c, v); }
    // 0c14f8  push esi
    X86_AT(c, 0xc14f8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c14f9  call 0xd87d8
    X86_AT(c, 0xc14f9u);
    push32(c, 0xc14feu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc14feu);
    X86_TICK(c, 21);
    // 0c14fe  add esp, 0x3c
    X86_AT(c, 0xc14feu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c1501  movzx eax, byte ptr [ebx + 0xa4e26]
    X86_AT(c, 0xc1501u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E26u)));
    // 0c1508  push eax
    X86_AT(c, 0xc1508u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c1509  push 0x28b0
    X86_AT(c, 0xc1509u);
    { uint32_t v = 0x28B0u; push32(c, v); }
    // 0c150e  push esi
    X86_AT(c, 0xc150eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c150f  call 0xd87d8
    X86_AT(c, 0xc150fu);
    push32(c, 0xc1514u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1514u);
    X86_TICK(c, 31);
    // 0c1514  add esp, 0xc
    X86_AT(c, 0xc1514u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c1517  mov eax, edi
    X86_AT(c, 0xc1517u);
    c.r[0] = c.r[7];
    // 0c1519  lea edx, [eax + eax*2]
    X86_AT(c, 0xc1519u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c151c  shl edx, 5
    X86_AT(c, 0xc151cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c151f  add edx, eax
    X86_AT(c, 0xc151fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c1521  lea edx, [eax + edx*2]
    X86_AT(c, 0xc1521u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c1524  push dword ptr [edx + 0xa4e27]
    X86_AT(c, 0xc1524u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E27u))); push32(c, v); }
    // 0c152a  push 0x28c0
    X86_AT(c, 0xc152au);
    { uint32_t v = 0x28C0u; push32(c, v); }
    // 0c152f  push esi
    X86_AT(c, 0xc152fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1530  mov ebx, edx
    X86_AT(c, 0xc1530u);
    c.r[3] = c.r[2];
    // 0c1532  call 0xd87d8
    X86_AT(c, 0xc1532u);
    push32(c, 0xc1537u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1537u);
    X86_TICK(c, 16);
    // 0c1537  push dword ptr [ebx + 0xa4e2b]
    X86_AT(c, 0xc1537u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E2Bu))); push32(c, v); }
    // 0c153d  push 0x28d0
    X86_AT(c, 0xc153du);
    { uint32_t v = 0x28D0u; push32(c, v); }
    // 0c1542  push esi
    X86_AT(c, 0xc1542u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1543  call 0xd87d8
    X86_AT(c, 0xc1543u);
    push32(c, 0xc1548u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1548u);
    X86_TICK(c, 16);
    // 0c1548  push dword ptr [ebx + 0xa4e2f]
    X86_AT(c, 0xc1548u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E2Fu))); push32(c, v); }
    // 0c154e  push 0x28e0
    X86_AT(c, 0xc154eu);
    { uint32_t v = 0x28E0u; push32(c, v); }
    // 0c1553  push esi
    X86_AT(c, 0xc1553u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1554  call 0xd87d8
    X86_AT(c, 0xc1554u);
    push32(c, 0xc1559u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1559u);
    X86_TICK(c, 16);
    // 0c1559  push dword ptr [ebx + 0xa4e33]
    X86_AT(c, 0xc1559u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E33u))); push32(c, v); }
    // 0c155f  push 0x28f0
    X86_AT(c, 0xc155fu);
    { uint32_t v = 0x28F0u; push32(c, v); }
    // 0c1564  push esi
    X86_AT(c, 0xc1564u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1565  call 0xd87d8
    X86_AT(c, 0xc1565u);
    push32(c, 0xc156au); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc156au);
    X86_TICK(c, 16);
    // 0c156a  push dword ptr [ebx + 0xa4e37]
    X86_AT(c, 0xc156au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E37u))); push32(c, v); }
    // 0c1570  push 0x2900
    X86_AT(c, 0xc1570u);
    { uint32_t v = 0x2900u; push32(c, v); }
    // 0c1575  push esi
    X86_AT(c, 0xc1575u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1576  call 0xd87d8
    X86_AT(c, 0xc1576u);
    push32(c, 0xc157bu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc157bu);
    X86_TICK(c, 18);
    // 0c157b  add esp, 0x3c
    X86_AT(c, 0xc157bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c157e  push dword ptr [ebx + 0xa4e3b]
    X86_AT(c, 0xc157eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E3Bu))); push32(c, v); }
    // 0c1584  push 0x2910
    X86_AT(c, 0xc1584u);
    { uint32_t v = 0x2910u; push32(c, v); }
    // 0c1589  push esi
    X86_AT(c, 0xc1589u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c158a  call 0xd87d8
    X86_AT(c, 0xc158au);
    push32(c, 0xc158fu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc158fu);
    X86_TICK(c, 16);
    // 0c158f  push dword ptr [ebx + 0xa4e3f]
    X86_AT(c, 0xc158fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E3Fu))); push32(c, v); }
    // 0c1595  push 0x2920
    X86_AT(c, 0xc1595u);
    { uint32_t v = 0x2920u; push32(c, v); }
    // 0c159a  push esi
    X86_AT(c, 0xc159au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c159b  call 0xd87d8
    X86_AT(c, 0xc159bu);
    push32(c, 0xc15a0u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc15a0u);
    X86_TICK(c, 16);
    // 0c15a0  push dword ptr [ebx + 0xa4e43]
    X86_AT(c, 0xc15a0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E43u))); push32(c, v); }
    // 0c15a6  push 0x2930
    X86_AT(c, 0xc15a6u);
    { uint32_t v = 0x2930u; push32(c, v); }
    // 0c15ab  push esi
    X86_AT(c, 0xc15abu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c15ac  call 0xd87d8
    X86_AT(c, 0xc15acu);
    push32(c, 0xc15b1u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc15b1u);
    X86_TICK(c, 16);
    // 0c15b1  push dword ptr [ebx + 0xa4e47]
    X86_AT(c, 0xc15b1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E47u))); push32(c, v); }
    // 0c15b7  push 0x2940
    X86_AT(c, 0xc15b7u);
    { uint32_t v = 0x2940u; push32(c, v); }
    // 0c15bc  push esi
    X86_AT(c, 0xc15bcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c15bd  call 0xd87d8
    X86_AT(c, 0xc15bdu);
    push32(c, 0xc15c2u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc15c2u);
    X86_TICK(c, 16);
    // 0c15c2  push dword ptr [ebx + 0xa4e4b]
    X86_AT(c, 0xc15c2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E4Bu))); push32(c, v); }
    // 0c15c8  push 0x2950
    X86_AT(c, 0xc15c8u);
    { uint32_t v = 0x2950u; push32(c, v); }
    // 0c15cd  push esi
    X86_AT(c, 0xc15cdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c15ce  call 0xd87d8
    X86_AT(c, 0xc15ceu);
    push32(c, 0xc15d3u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc15d3u);
    X86_TICK(c, 18);
    // 0c15d3  add esp, 0x3c
    X86_AT(c, 0xc15d3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c15d6  push dword ptr [ebx + 0xa4e4f]
    X86_AT(c, 0xc15d6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E4Fu))); push32(c, v); }
    // 0c15dc  push 0x2960
    X86_AT(c, 0xc15dcu);
    { uint32_t v = 0x2960u; push32(c, v); }
    // 0c15e1  push esi
    X86_AT(c, 0xc15e1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c15e2  call 0xd87d8
    X86_AT(c, 0xc15e2u);
    push32(c, 0xc15e7u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc15e7u);
    X86_TICK(c, 31);
    // 0c15e7  add esp, 0xc
    X86_AT(c, 0xc15e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c15ea  mov eax, edi
    X86_AT(c, 0xc15eau);
    c.r[0] = c.r[7];
    // 0c15ec  lea edx, [eax + eax*2]
    X86_AT(c, 0xc15ecu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c15ef  shl edx, 5
    X86_AT(c, 0xc15efu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c15f2  add edx, eax
    X86_AT(c, 0xc15f2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c15f4  lea edx, [eax + edx*2]
    X86_AT(c, 0xc15f4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c15f7  push dword ptr [edx + 0xa4e53]
    X86_AT(c, 0xc15f7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4E53u))); push32(c, v); }
    // 0c15fd  push 0x2970
    X86_AT(c, 0xc15fdu);
    { uint32_t v = 0x2970u; push32(c, v); }
    // 0c1602  push esi
    X86_AT(c, 0xc1602u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1603  mov ebx, edx
    X86_AT(c, 0xc1603u);
    c.r[3] = c.r[2];
    // 0c1605  call 0xd87d8
    X86_AT(c, 0xc1605u);
    push32(c, 0xc160au); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc160au);
    X86_TICK(c, 16);
    // 0c160a  push dword ptr [ebx + 0xa4e57]
    X86_AT(c, 0xc160au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E57u))); push32(c, v); }
    // 0c1610  push 0x2980
    X86_AT(c, 0xc1610u);
    { uint32_t v = 0x2980u; push32(c, v); }
    // 0c1615  push esi
    X86_AT(c, 0xc1615u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1616  call 0xd87d8
    X86_AT(c, 0xc1616u);
    push32(c, 0xc161bu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc161bu);
    X86_TICK(c, 16);
    // 0c161b  push dword ptr [ebx + 0xa4e5b]
    X86_AT(c, 0xc161bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E5Bu))); push32(c, v); }
    // 0c1621  push 0x2990
    X86_AT(c, 0xc1621u);
    { uint32_t v = 0x2990u; push32(c, v); }
    // 0c1626  push esi
    X86_AT(c, 0xc1626u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1627  call 0xd87d8
    X86_AT(c, 0xc1627u);
    push32(c, 0xc162cu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc162cu);
    X86_TICK(c, 16);
    // 0c162c  push dword ptr [ebx + 0xa4e5f]
    X86_AT(c, 0xc162cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E5Fu))); push32(c, v); }
    // 0c1632  push 0x29a0
    X86_AT(c, 0xc1632u);
    { uint32_t v = 0x29A0u; push32(c, v); }
    // 0c1637  push esi
    X86_AT(c, 0xc1637u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1638  call 0xd87d8
    X86_AT(c, 0xc1638u);
    push32(c, 0xc163du); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc163du);
    X86_TICK(c, 16);
    // 0c163d  push dword ptr [ebx + 0xa4e63]
    X86_AT(c, 0xc163du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E63u))); push32(c, v); }
    // 0c1643  push 0x29b0
    X86_AT(c, 0xc1643u);
    { uint32_t v = 0x29B0u; push32(c, v); }
    // 0c1648  push esi
    X86_AT(c, 0xc1648u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1649  call 0xd87d8
    X86_AT(c, 0xc1649u);
    push32(c, 0xc164eu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc164eu);
    X86_TICK(c, 18);
    // 0c164e  add esp, 0x3c
    X86_AT(c, 0xc164eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c1651  push dword ptr [ebx + 0xa4e67]
    X86_AT(c, 0xc1651u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E67u))); push32(c, v); }
    // 0c1657  push 0x29c0
    X86_AT(c, 0xc1657u);
    { uint32_t v = 0x29C0u; push32(c, v); }
    // 0c165c  push esi
    X86_AT(c, 0xc165cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c165d  call 0xd87d8
    X86_AT(c, 0xc165du);
    push32(c, 0xc1662u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1662u);
    X86_TICK(c, 16);
    // 0c1662  push dword ptr [ebx + 0xa4e6b]
    X86_AT(c, 0xc1662u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xA4E6Bu))); push32(c, v); }
    // 0c1668  push 0x29d0
    X86_AT(c, 0xc1668u);
    { uint32_t v = 0x29D0u; push32(c, v); }
    // 0c166d  push esi
    X86_AT(c, 0xc166du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c166e  call 0xd87d8
    X86_AT(c, 0xc166eu);
    push32(c, 0xc1673u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1673u);
    X86_TICK(c, 11);
    // 0c1673  inc edi
    X86_AT(c, 0xc1673u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c1674  add esp, 0x18
    X86_AT(c, 0xc1674u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c1677  jmp 0xc10b4
    X86_AT(c, 0xc1677u);
    X86_POLL(c, 0xc10b4u); goto L_c10b4;
L_c167c:
    X86_TICK(c, 9);
    // 0c167c  push esi
    X86_AT(c, 0xc167cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c167d  call 0xd84c0
    X86_AT(c, 0xc167du);
    push32(c, 0xc1682u); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xc1682u);
    X86_TICK(c, 9);
    // 0c1682  push 2
    X86_AT(c, 0xc1682u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c1684  call 0xbbb5c
    X86_AT(c, 0xc1684u);
    push32(c, 0xc1689u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc1689u);
    X86_TICK(c, 2);
    // 0c1689  add esp, 8
    X86_AT(c, 0xc1689u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c168c:
    X86_TICK(c, 28);
    // 0c168c  pop edi
    X86_AT(c, 0xc168cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c168d  pop esi
    X86_AT(c, 0xc168du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c168e  pop ebx
    X86_AT(c, 0xc168eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c168f  leave 
    X86_AT(c, 0xc168fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c1690  ret 
    X86_AT(c, 0xc1690u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc1060u, "ran off the end of a function");
}
void f_000c1694(X86Cpu& c) {
    X86_TICK(c, 6);
    // 0c1694  push esi
    X86_AT(c, 0xc1694u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1695  push edi
    X86_AT(c, 0xc1695u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c1696  sub edi, edi
    X86_AT(c, 0xc1696u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c1698:
    X86_TICK(c, 7);
    // 0c1698  cmp edi, 6
    X86_AT(c, 0xc1698u);
    (void)x86_sub(c, c.r[7], 0x6u, 0, 4);
    // 0c169b  jge 0xc16ae
    X86_AT(c, 0xc169bu);
    if (x86_cc(c, 13)) { goto L_c16ae; }
    X86_TICK(c, 9);
    // 0c169d  push 0
    X86_AT(c, 0xc169du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c169f  call 0xb6d38
    X86_AT(c, 0xc169fu);
    push32(c, 0xc16a4u); x86_call_known(c, 0xb6d38u, f_000b6d38); X86_RET(c, 0xc16a4u);
    X86_TICK(c, 9);
    // 0c16a4  add esp, 4
    X86_AT(c, 0xc16a4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c16a7  and eax, eax
    X86_AT(c, 0xc16a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c16a9  je 0xc16ae
    X86_AT(c, 0xc16a9u);
    if (x86_cc(c, 4)) { goto L_c16ae; }
    X86_TICK(c, 9);
    // 0c16ab  inc edi
    X86_AT(c, 0xc16abu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c16ac  jmp 0xc1698
    X86_AT(c, 0xc16acu);
    X86_POLL(c, 0xc1698u); goto L_c1698;
L_c16ae:
    X86_TICK(c, 11);
    // 0c16ae  push 0x29e0
    X86_AT(c, 0xc16aeu);
    { uint32_t v = 0x29E0u; push32(c, v); }
    // 0c16b3  push 0x29e4
    X86_AT(c, 0xc16b3u);
    { uint32_t v = 0x29E4u; push32(c, v); }
    // 0c16b8  call 0xd7fc4
    X86_AT(c, 0xc16b8u);
    push32(c, 0xc16bdu); x86_call_known(c, 0xd7fc4u, f_000d7fc4); X86_RET(c, 0xc16bdu);
    X86_TICK(c, 12);
    // 0c16bd  add esp, 8
    X86_AT(c, 0xc16bdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c16c0  xchg esi, eax
    X86_AT(c, 0xc16c0u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c16c1  and esi, esi
    X86_AT(c, 0xc16c1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c16c3  je 0xc185e
    X86_AT(c, 0xc16c3u);
    if (x86_cc(c, 4)) { goto L_c185e; }
    X86_TICK(c, 9);
    // 0c16c9  push 0x29f4
    X86_AT(c, 0xc16c9u);
    { uint32_t v = 0x29F4u; push32(c, v); }
    // 0c16ce  call 0xbc50c
    X86_AT(c, 0xc16ceu);
    push32(c, 0xc16d3u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc16d3u);
    X86_TICK(c, 11);
    // 0c16d3  push 0x2a40
    X86_AT(c, 0xc16d3u);
    { uint32_t v = 0x2A40u; push32(c, v); }
    // 0c16d8  push esi
    X86_AT(c, 0xc16d8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c16d9  call 0xd87d8
    X86_AT(c, 0xc16d9u);
    push32(c, 0xc16deu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc16deu);
    X86_TICK(c, 19);
    // 0c16de  movzx eax, byte ptr [0xa4a48]
    X86_AT(c, 0xc16deu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xA4A48u)));
    // 0c16e5  push eax
    X86_AT(c, 0xc16e5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c16e6  push 0x2a64
    X86_AT(c, 0xc16e6u);
    { uint32_t v = 0x2A64u; push32(c, v); }
    // 0c16eb  push esi
    X86_AT(c, 0xc16ebu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c16ec  call 0xd87d8
    X86_AT(c, 0xc16ecu);
    push32(c, 0xc16f1u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc16f1u);
    X86_TICK(c, 12);
    // 0c16f1  cmp dword ptr [0x460e4], 0
    X86_AT(c, 0xc16f1u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x460E4u))), 0x0u, 0, 4);
    // 0c16f8  je 0xc1701
    X86_AT(c, 0xc16f8u);
    if (x86_cc(c, 4)) { goto L_c1701; }
    X86_TICK(c, 9);
    // 0c16fa  mov eax, 0x4a
    X86_AT(c, 0xc16fau);
    c.r[0] = 0x4Au;
    // 0c16ff  jmp 0xc1706
    X86_AT(c, 0xc16ffu);
    goto L_c1706;
L_c1701:
    X86_TICK(c, 2);
    // 0c1701  mov eax, 0x45
    X86_AT(c, 0xc1701u);
    c.r[0] = 0x45u;
L_c1706:
    X86_TICK(c, 13);
    // 0c1706  push eax
    X86_AT(c, 0xc1706u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c1707  push 0x2a70
    X86_AT(c, 0xc1707u);
    { uint32_t v = 0x2A70u; push32(c, v); }
    // 0c170c  push esi
    X86_AT(c, 0xc170cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c170d  call 0xd87d8
    X86_AT(c, 0xc170du);
    push32(c, 0xc1712u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1712u);
    X86_TICK(c, 19);
    // 0c1712  movzx eax, byte ptr [0xa4a49]
    X86_AT(c, 0xc1712u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xA4A49u)));
    // 0c1719  push eax
    X86_AT(c, 0xc1719u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c171a  push 0x2a7c
    X86_AT(c, 0xc171au);
    { uint32_t v = 0x2A7Cu; push32(c, v); }
    // 0c171f  push esi
    X86_AT(c, 0xc171fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1720  call 0xd87d8
    X86_AT(c, 0xc1720u);
    push32(c, 0xc1725u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1725u);
    X86_TICK(c, 12);
    // 0c1725  cmp dword ptr [0xa4a52], 0
    X86_AT(c, 0xc1725u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A52u))), 0x0u, 0, 4);
    // 0c172c  je 0xc1735
    X86_AT(c, 0xc172cu);
    if (x86_cc(c, 4)) { goto L_c1735; }
    X86_TICK(c, 9);
    // 0c172e  mov eax, 0x2a88
    X86_AT(c, 0xc172eu);
    c.r[0] = 0x2A88u;
    // 0c1733  jmp 0xc173a
    X86_AT(c, 0xc1733u);
    goto L_c173a;
L_c1735:
    X86_TICK(c, 2);
    // 0c1735  mov eax, 0x2a8c
    X86_AT(c, 0xc1735u);
    c.r[0] = 0x2A8Cu;
L_c173a:
    X86_TICK(c, 13);
    // 0c173a  push eax
    X86_AT(c, 0xc173au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c173b  push 0x2a90
    X86_AT(c, 0xc173bu);
    { uint32_t v = 0x2A90u; push32(c, v); }
    // 0c1740  push esi
    X86_AT(c, 0xc1740u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1741  call 0xd87d8
    X86_AT(c, 0xc1741u);
    push32(c, 0xc1746u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1746u);
    X86_TICK(c, 18);
    // 0c1746  add esp, 0x3c
    X86_AT(c, 0xc1746u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c1749  push dword ptr [0xa4a56]
    X86_AT(c, 0xc1749u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A56u))); push32(c, v); }
    // 0c174f  push 0x2a9c
    X86_AT(c, 0xc174fu);
    { uint32_t v = 0x2A9Cu; push32(c, v); }
    // 0c1754  push esi
    X86_AT(c, 0xc1754u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1755  call 0xd87d8
    X86_AT(c, 0xc1755u);
    push32(c, 0xc175au); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc175au);
    X86_TICK(c, 16);
    // 0c175a  push dword ptr [0xa4a5e]
    X86_AT(c, 0xc175au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A5Eu))); push32(c, v); }
    // 0c1760  push 0x2aa4
    X86_AT(c, 0xc1760u);
    { uint32_t v = 0x2AA4u; push32(c, v); }
    // 0c1765  push esi
    X86_AT(c, 0xc1765u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1766  call 0xd87d8
    X86_AT(c, 0xc1766u);
    push32(c, 0xc176bu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc176bu);
    X86_TICK(c, 18);
    // 0c176b  add esp, 0x18
    X86_AT(c, 0xc176bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c176e  push dword ptr [0xa4a62]
    X86_AT(c, 0xc176eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A62u))); push32(c, v); }
    // 0c1774  push 0x2ab0
    X86_AT(c, 0xc1774u);
    { uint32_t v = 0x2AB0u; push32(c, v); }
    // 0c1779  push esi
    X86_AT(c, 0xc1779u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c177a  call 0xd87d8
    X86_AT(c, 0xc177au);
    push32(c, 0xc177fu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc177fu);
    X86_TICK(c, 16);
    // 0c177f  push dword ptr [0xa4a66]
    X86_AT(c, 0xc177fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A66u))); push32(c, v); }
    // 0c1785  push 0x2abc
    X86_AT(c, 0xc1785u);
    { uint32_t v = 0x2ABCu; push32(c, v); }
    // 0c178a  push esi
    X86_AT(c, 0xc178au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c178b  call 0xd87d8
    X86_AT(c, 0xc178bu);
    push32(c, 0xc1790u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1790u);
    X86_TICK(c, 16);
    // 0c1790  push dword ptr [0xa4a6a]
    X86_AT(c, 0xc1790u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A6Au))); push32(c, v); }
    // 0c1796  push 0x2ac4
    X86_AT(c, 0xc1796u);
    { uint32_t v = 0x2AC4u; push32(c, v); }
    // 0c179b  push esi
    X86_AT(c, 0xc179bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c179c  call 0xd87d8
    X86_AT(c, 0xc179cu);
    push32(c, 0xc17a1u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc17a1u);
    X86_TICK(c, 16);
    // 0c17a1  push dword ptr [0xa4a7e]
    X86_AT(c, 0xc17a1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A7Eu))); push32(c, v); }
    // 0c17a7  push 0x2acc
    X86_AT(c, 0xc17a7u);
    { uint32_t v = 0x2ACCu; push32(c, v); }
    // 0c17ac  push esi
    X86_AT(c, 0xc17acu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c17ad  call 0xd87d8
    X86_AT(c, 0xc17adu);
    push32(c, 0xc17b2u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc17b2u);
    X86_TICK(c, 16);
    // 0c17b2  push dword ptr [0xa4a82]
    X86_AT(c, 0xc17b2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A82u))); push32(c, v); }
    // 0c17b8  push 0x2ad8
    X86_AT(c, 0xc17b8u);
    { uint32_t v = 0x2AD8u; push32(c, v); }
    // 0c17bd  push esi
    X86_AT(c, 0xc17bdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c17be  call 0xd87d8
    X86_AT(c, 0xc17beu);
    push32(c, 0xc17c3u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc17c3u);
    X86_TICK(c, 18);
    // 0c17c3  add esp, 0x3c
    X86_AT(c, 0xc17c3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c17c6  push dword ptr [0xa4a86]
    X86_AT(c, 0xc17c6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A86u))); push32(c, v); }
    // 0c17cc  push 0x2ae4
    X86_AT(c, 0xc17ccu);
    { uint32_t v = 0x2AE4u; push32(c, v); }
    // 0c17d1  push esi
    X86_AT(c, 0xc17d1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c17d2  call 0xd87d8
    X86_AT(c, 0xc17d2u);
    push32(c, 0xc17d7u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc17d7u);
    X86_TICK(c, 16);
    // 0c17d7  push dword ptr [0xa4a8a]
    X86_AT(c, 0xc17d7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA4A8Au))); push32(c, v); }
    // 0c17dd  push 0x2af0
    X86_AT(c, 0xc17ddu);
    { uint32_t v = 0x2AF0u; push32(c, v); }
    // 0c17e2  push esi
    X86_AT(c, 0xc17e2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c17e3  call 0xd87d8
    X86_AT(c, 0xc17e3u);
    push32(c, 0xc17e8u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc17e8u);
    X86_TICK(c, 12);
    // 0c17e8  cmp dword ptr [0xa4a8e], 0
    X86_AT(c, 0xc17e8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A8Eu))), 0x0u, 0, 4);
    // 0c17ef  je 0xc17f8
    X86_AT(c, 0xc17efu);
    if (x86_cc(c, 4)) { goto L_c17f8; }
    X86_TICK(c, 9);
    // 0c17f1  mov eax, 0x2afc
    X86_AT(c, 0xc17f1u);
    c.r[0] = 0x2AFCu;
    // 0c17f6  jmp 0xc17fd
    X86_AT(c, 0xc17f6u);
    goto L_c17fd;
L_c17f8:
    X86_TICK(c, 2);
    // 0c17f8  mov eax, 0x2b00
    X86_AT(c, 0xc17f8u);
    c.r[0] = 0x2B00u;
L_c17fd:
    X86_TICK(c, 13);
    // 0c17fd  push eax
    X86_AT(c, 0xc17fdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c17fe  push 0x2b04
    X86_AT(c, 0xc17feu);
    { uint32_t v = 0x2B04u; push32(c, v); }
    // 0c1803  push esi
    X86_AT(c, 0xc1803u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1804  call 0xd87d8
    X86_AT(c, 0xc1804u);
    push32(c, 0xc1809u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1809u);
    X86_TICK(c, 12);
    // 0c1809  cmp dword ptr [0xa4a92], 0
    X86_AT(c, 0xc1809u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A92u))), 0x0u, 0, 4);
    // 0c1810  je 0xc1819
    X86_AT(c, 0xc1810u);
    if (x86_cc(c, 4)) { goto L_c1819; }
    X86_TICK(c, 9);
    // 0c1812  mov eax, 0x2b10
    X86_AT(c, 0xc1812u);
    c.r[0] = 0x2B10u;
    // 0c1817  jmp 0xc181e
    X86_AT(c, 0xc1817u);
    goto L_c181e;
L_c1819:
    X86_TICK(c, 2);
    // 0c1819  mov eax, 0x2b14
    X86_AT(c, 0xc1819u);
    c.r[0] = 0x2B14u;
L_c181e:
    X86_TICK(c, 13);
    // 0c181e  push eax
    X86_AT(c, 0xc181eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c181f  push 0x2b18
    X86_AT(c, 0xc181fu);
    { uint32_t v = 0x2B18u; push32(c, v); }
    // 0c1824  push esi
    X86_AT(c, 0xc1824u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1825  call 0xd87d8
    X86_AT(c, 0xc1825u);
    push32(c, 0xc182au); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc182au);
    X86_TICK(c, 14);
    // 0c182a  add esp, 0x30
    X86_AT(c, 0xc182au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0c182d  cmp dword ptr [0xa4a96], 0
    X86_AT(c, 0xc182du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A96u))), 0x0u, 0, 4);
    // 0c1834  je 0xc183d
    X86_AT(c, 0xc1834u);
    if (x86_cc(c, 4)) { goto L_c183d; }
    X86_TICK(c, 9);
    // 0c1836  mov eax, 0x2b24
    X86_AT(c, 0xc1836u);
    c.r[0] = 0x2B24u;
    // 0c183b  jmp 0xc1842
    X86_AT(c, 0xc183bu);
    goto L_c1842;
L_c183d:
    X86_TICK(c, 2);
    // 0c183d  mov eax, 0x2b28
    X86_AT(c, 0xc183du);
    c.r[0] = 0x2B28u;
L_c1842:
    X86_TICK(c, 13);
    // 0c1842  push eax
    X86_AT(c, 0xc1842u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c1843  push 0x2b2c
    X86_AT(c, 0xc1843u);
    { uint32_t v = 0x2B2Cu; push32(c, v); }
    // 0c1848  push esi
    X86_AT(c, 0xc1848u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1849  call 0xd87d8
    X86_AT(c, 0xc1849u);
    push32(c, 0xc184eu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc184eu);
    X86_TICK(c, 9);
    // 0c184e  push esi
    X86_AT(c, 0xc184eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c184f  call 0xd84c0
    X86_AT(c, 0xc184fu);
    push32(c, 0xc1854u); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xc1854u);
    X86_TICK(c, 9);
    // 0c1854  push 2
    X86_AT(c, 0xc1854u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c1856  call 0xbbb5c
    X86_AT(c, 0xc1856u);
    push32(c, 0xc185bu); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc185bu);
    X86_TICK(c, 2);
    // 0c185b  add esp, 0x14
    X86_AT(c, 0xc185bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_c185e:
    X86_TICK(c, 18);
    // 0c185e  pop edi
    X86_AT(c, 0xc185eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c185f  pop esi
    X86_AT(c, 0xc185fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c1860  ret 
    X86_AT(c, 0xc1860u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc1694u, "ran off the end of a function");
}
void f_000c1864(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0c1864  push ebp
    X86_AT(c, 0xc1864u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c1865  mov ebp, esp
    X86_AT(c, 0xc1865u);
    c.r[5] = c.r[4];
    // 0c1867  push eax
    X86_AT(c, 0xc1867u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c1868  push ebx
    X86_AT(c, 0xc1868u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1869  push esi
    X86_AT(c, 0xc1869u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c186a  push edi
    X86_AT(c, 0xc186au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c186b  sub edi, edi
    X86_AT(c, 0xc186bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c186d:
    X86_TICK(c, 7);
    // 0c186d  cmp edi, 6
    X86_AT(c, 0xc186du);
    (void)x86_sub(c, c.r[7], 0x6u, 0, 4);
    // 0c1870  jge 0xc1883
    X86_AT(c, 0xc1870u);
    if (x86_cc(c, 13)) { goto L_c1883; }
    X86_TICK(c, 9);
    // 0c1872  push 0
    X86_AT(c, 0xc1872u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c1874  call 0xb6d38
    X86_AT(c, 0xc1874u);
    push32(c, 0xc1879u); x86_call_known(c, 0xb6d38u, f_000b6d38); X86_RET(c, 0xc1879u);
    X86_TICK(c, 9);
    // 0c1879  add esp, 4
    X86_AT(c, 0xc1879u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c187c  and eax, eax
    X86_AT(c, 0xc187cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c187e  je 0xc1883
    X86_AT(c, 0xc187eu);
    if (x86_cc(c, 4)) { goto L_c1883; }
    X86_TICK(c, 9);
    // 0c1880  inc edi
    X86_AT(c, 0xc1880u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c1881  jmp 0xc186d
    X86_AT(c, 0xc1881u);
    X86_POLL(c, 0xc186du); goto L_c186d;
L_c1883:
    X86_TICK(c, 11);
    // 0c1883  push 0x2b36
    X86_AT(c, 0xc1883u);
    { uint32_t v = 0x2B36u; push32(c, v); }
    // 0c1888  push 0x2b3c
    X86_AT(c, 0xc1888u);
    { uint32_t v = 0x2B3Cu; push32(c, v); }
    // 0c188d  call 0xd7fc4
    X86_AT(c, 0xc188du);
    push32(c, 0xc1892u); x86_call_known(c, 0xd7fc4u, f_000d7fc4); X86_RET(c, 0xc1892u);
    X86_TICK(c, 12);
    // 0c1892  add esp, 8
    X86_AT(c, 0xc1892u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c1895  xchg ebx, eax
    X86_AT(c, 0xc1895u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c1896  and ebx, ebx
    X86_AT(c, 0xc1896u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0c1898  je 0xc1eab
    X86_AT(c, 0xc1898u);
    if (x86_cc(c, 4)) { goto L_c1eab; }
    X86_TICK(c, 9);
    // 0c189e  push 0x2b4c
    X86_AT(c, 0xc189eu);
    { uint32_t v = 0x2B4Cu; push32(c, v); }
    // 0c18a3  call 0xbc50c
    X86_AT(c, 0xc18a3u);
    push32(c, 0xc18a8u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc18a8u);
    X86_TICK(c, 11);
    // 0c18a8  push 0x2b9c
    X86_AT(c, 0xc18a8u);
    { uint32_t v = 0x2B9Cu; push32(c, v); }
    // 0c18ad  push ebx
    X86_AT(c, 0xc18adu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c18ae  call 0xd87d8
    X86_AT(c, 0xc18aeu);
    push32(c, 0xc18b3u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc18b3u);
    X86_TICK(c, 4);
    // 0c18b3  sub esi, esi
    X86_AT(c, 0xc18b3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0c18b5  add esp, 0xc
    X86_AT(c, 0xc18b5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c18b8:
    X86_TICK(c, 7);
    // 0c18b8  cmp esi, 4
    X86_AT(c, 0xc18b8u);
    (void)x86_sub(c, c.r[6], 0x4u, 0, 4);
    // 0c18bb  jge 0xc1e9b
    X86_AT(c, 0xc18bbu);
    if (x86_cc(c, 13)) { goto L_c1e9b; }
    X86_TICK(c, 19);
    // 0c18c1  mov edi, dword ptr [esi*4 + 0xa4a7e]
    X86_AT(c, 0xc18c1u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA4A7Eu)));
    // 0c18c8  push edi
    X86_AT(c, 0xc18c8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c18c9  push esi
    X86_AT(c, 0xc18c9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c18ca  push 0x2bc4
    X86_AT(c, 0xc18cau);
    { uint32_t v = 0x2BC4u; push32(c, v); }
    // 0c18cf  push ebx
    X86_AT(c, 0xc18cfu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c18d0  call 0xd87d8
    X86_AT(c, 0xc18d0u);
    push32(c, 0xc18d5u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc18d5u);
    X86_TICK(c, 26);
    // 0c18d5  mov eax, esi
    X86_AT(c, 0xc18d5u);
    c.r[0] = c.r[6];
    // 0c18d7  lea edx, [eax + eax*2]
    X86_AT(c, 0xc18d7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c18da  shl edx, 5
    X86_AT(c, 0xc18dau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c18dd  add edx, eax
    X86_AT(c, 0xc18ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c18df  lea edx, [eax + edx*2]
    X86_AT(c, 0xc18dfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c18e2  add edx, 0xa4aa0
    X86_AT(c, 0xc18e2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xA4AA0u, 0, 4); }
    // 0c18e8  push edx
    X86_AT(c, 0xc18e8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c18e9  push 0x2bd0
    X86_AT(c, 0xc18e9u);
    { uint32_t v = 0x2BD0u; push32(c, v); }
    // 0c18ee  push ebx
    X86_AT(c, 0xc18eeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c18ef  call 0xd87d8
    X86_AT(c, 0xc18efu);
    push32(c, 0xc18f4u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc18f4u);
    X86_TICK(c, 23);
    // 0c18f4  mov eax, esi
    X86_AT(c, 0xc18f4u);
    c.r[0] = c.r[6];
    // 0c18f6  lea edx, [eax + eax*2]
    X86_AT(c, 0xc18f6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c18f9  shl edx, 5
    X86_AT(c, 0xc18f9u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c18fc  add edx, eax
    X86_AT(c, 0xc18fcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c18fe  lea edx, [eax + edx*2]
    X86_AT(c, 0xc18feu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c1901  cmp byte ptr [edx + 0xa4aad], 1
    X86_AT(c, 0xc1901u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AADu))), 0x1u, 0, 1);
    // 0c1908  je 0xc1911
    X86_AT(c, 0xc1908u);
    if (x86_cc(c, 4)) { goto L_c1911; }
    X86_TICK(c, 9);
    // 0c190a  mov eax, 0x2bdc
    X86_AT(c, 0xc190au);
    c.r[0] = 0x2BDCu;
    // 0c190f  jmp 0xc1916
    X86_AT(c, 0xc190fu);
    goto L_c1916;
L_c1911:
    X86_TICK(c, 2);
    // 0c1911  mov eax, 0x2be0
    X86_AT(c, 0xc1911u);
    c.r[0] = 0x2BE0u;
L_c1916:
    X86_TICK(c, 13);
    // 0c1916  push eax
    X86_AT(c, 0xc1916u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c1917  push 0x2be4
    X86_AT(c, 0xc1917u);
    { uint32_t v = 0x2BE4u; push32(c, v); }
    // 0c191c  push ebx
    X86_AT(c, 0xc191cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c191d  call 0xd87d8
    X86_AT(c, 0xc191du);
    push32(c, 0xc1922u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1922u);
    X86_TICK(c, 23);
    // 0c1922  mov eax, esi
    X86_AT(c, 0xc1922u);
    c.r[0] = c.r[6];
    // 0c1924  lea edx, [eax + eax*2]
    X86_AT(c, 0xc1924u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c1927  shl edx, 5
    X86_AT(c, 0xc1927u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c192a  add edx, eax
    X86_AT(c, 0xc192au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c192c  lea edx, [eax + edx*2]
    X86_AT(c, 0xc192cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c192f  cmp byte ptr [edx + 0xa4aae], 1
    X86_AT(c, 0xc192fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AAEu))), 0x1u, 0, 1);
    // 0c1936  je 0xc193f
    X86_AT(c, 0xc1936u);
    if (x86_cc(c, 4)) { goto L_c193f; }
    X86_TICK(c, 9);
    // 0c1938  mov eax, 0x2bf0
    X86_AT(c, 0xc1938u);
    c.r[0] = 0x2BF0u;
    // 0c193d  jmp 0xc1944
    X86_AT(c, 0xc193du);
    goto L_c1944;
L_c193f:
    X86_TICK(c, 2);
    // 0c193f  mov eax, 0x2bf4
    X86_AT(c, 0xc193fu);
    c.r[0] = 0x2BF4u;
L_c1944:
    X86_TICK(c, 13);
    // 0c1944  push eax
    X86_AT(c, 0xc1944u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c1945  push 0x2bf8
    X86_AT(c, 0xc1945u);
    { uint32_t v = 0x2BF8u; push32(c, v); }
    // 0c194a  push ebx
    X86_AT(c, 0xc194au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c194b  call 0xd87d8
    X86_AT(c, 0xc194bu);
    push32(c, 0xc1950u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1950u);
    X86_TICK(c, 23);
    // 0c1950  mov eax, esi
    X86_AT(c, 0xc1950u);
    c.r[0] = c.r[6];
    // 0c1952  lea edx, [eax + eax*2]
    X86_AT(c, 0xc1952u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c1955  shl edx, 5
    X86_AT(c, 0xc1955u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c1958  add edx, eax
    X86_AT(c, 0xc1958u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c195a  lea edx, [eax + edx*2]
    X86_AT(c, 0xc195au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c195d  cmp byte ptr [edx + 0xa4aaf], 1
    X86_AT(c, 0xc195du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AAFu))), 0x1u, 0, 1);
    // 0c1964  je 0xc196d
    X86_AT(c, 0xc1964u);
    if (x86_cc(c, 4)) { goto L_c196d; }
    X86_TICK(c, 9);
    // 0c1966  mov eax, 0x2c04
    X86_AT(c, 0xc1966u);
    c.r[0] = 0x2C04u;
    // 0c196b  jmp 0xc1972
    X86_AT(c, 0xc196bu);
    goto L_c1972;
L_c196d:
    X86_TICK(c, 2);
    // 0c196d  mov eax, 0x2c08
    X86_AT(c, 0xc196du);
    c.r[0] = 0x2C08u;
L_c1972:
    X86_TICK(c, 13);
    // 0c1972  push eax
    X86_AT(c, 0xc1972u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c1973  push 0x2c0c
    X86_AT(c, 0xc1973u);
    { uint32_t v = 0x2C0Cu; push32(c, v); }
    // 0c1978  push ebx
    X86_AT(c, 0xc1978u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1979  call 0xd87d8
    X86_AT(c, 0xc1979u);
    push32(c, 0xc197eu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc197eu);
    X86_TICK(c, 25);
    // 0c197e  add esp, 0x40
    X86_AT(c, 0xc197eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c1981  mov eax, esi
    X86_AT(c, 0xc1981u);
    c.r[0] = c.r[6];
    // 0c1983  lea edx, [eax + eax*2]
    X86_AT(c, 0xc1983u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c1986  shl edx, 5
    X86_AT(c, 0xc1986u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c1989  add edx, eax
    X86_AT(c, 0xc1989u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c198b  lea edx, [eax + edx*2]
    X86_AT(c, 0xc198bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c198e  cmp byte ptr [edx + 0xa4ab0], 1
    X86_AT(c, 0xc198eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB0u))), 0x1u, 0, 1);
    // 0c1995  je 0xc199e
    X86_AT(c, 0xc1995u);
    if (x86_cc(c, 4)) { goto L_c199e; }
    X86_TICK(c, 9);
    // 0c1997  mov eax, 0x2c18
    X86_AT(c, 0xc1997u);
    c.r[0] = 0x2C18u;
    // 0c199c  jmp 0xc19a3
    X86_AT(c, 0xc199cu);
    goto L_c19a3;
L_c199e:
    X86_TICK(c, 2);
    // 0c199e  mov eax, 0x2c1c
    X86_AT(c, 0xc199eu);
    c.r[0] = 0x2C1Cu;
L_c19a3:
    X86_TICK(c, 13);
    // 0c19a3  push eax
    X86_AT(c, 0xc19a3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c19a4  push 0x2c20
    X86_AT(c, 0xc19a4u);
    { uint32_t v = 0x2C20u; push32(c, v); }
    // 0c19a9  push ebx
    X86_AT(c, 0xc19a9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c19aa  call 0xd87d8
    X86_AT(c, 0xc19aau);
    push32(c, 0xc19afu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc19afu);
    X86_TICK(c, 23);
    // 0c19af  mov eax, esi
    X86_AT(c, 0xc19afu);
    c.r[0] = c.r[6];
    // 0c19b1  lea edx, [eax + eax*2]
    X86_AT(c, 0xc19b1u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c19b4  shl edx, 5
    X86_AT(c, 0xc19b4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c19b7  add edx, eax
    X86_AT(c, 0xc19b7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c19b9  lea edx, [eax + edx*2]
    X86_AT(c, 0xc19b9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c19bc  cmp byte ptr [edx + 0xa4ab1], 1
    X86_AT(c, 0xc19bcu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB1u))), 0x1u, 0, 1);
    // 0c19c3  je 0xc19cc
    X86_AT(c, 0xc19c3u);
    if (x86_cc(c, 4)) { goto L_c19cc; }
    X86_TICK(c, 9);
    // 0c19c5  mov eax, 0x2c2c
    X86_AT(c, 0xc19c5u);
    c.r[0] = 0x2C2Cu;
    // 0c19ca  jmp 0xc19d1
    X86_AT(c, 0xc19cau);
    goto L_c19d1;
L_c19cc:
    X86_TICK(c, 2);
    // 0c19cc  mov eax, 0x2c30
    X86_AT(c, 0xc19ccu);
    c.r[0] = 0x2C30u;
L_c19d1:
    X86_TICK(c, 13);
    // 0c19d1  push eax
    X86_AT(c, 0xc19d1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c19d2  push 0x2c34
    X86_AT(c, 0xc19d2u);
    { uint32_t v = 0x2C34u; push32(c, v); }
    // 0c19d7  push ebx
    X86_AT(c, 0xc19d7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c19d8  call 0xd87d8
    X86_AT(c, 0xc19d8u);
    push32(c, 0xc19ddu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc19ddu);
    X86_TICK(c, 23);
    // 0c19dd  mov eax, esi
    X86_AT(c, 0xc19ddu);
    c.r[0] = c.r[6];
    // 0c19df  lea edx, [eax + eax*2]
    X86_AT(c, 0xc19dfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c19e2  shl edx, 5
    X86_AT(c, 0xc19e2u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c19e5  add edx, eax
    X86_AT(c, 0xc19e5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c19e7  lea edx, [eax + edx*2]
    X86_AT(c, 0xc19e7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c19ea  cmp byte ptr [edx + 0xa4ab2], 1
    X86_AT(c, 0xc19eau);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB2u))), 0x1u, 0, 1);
    // 0c19f1  je 0xc19fa
    X86_AT(c, 0xc19f1u);
    if (x86_cc(c, 4)) { goto L_c19fa; }
    X86_TICK(c, 9);
    // 0c19f3  mov eax, 0x2c40
    X86_AT(c, 0xc19f3u);
    c.r[0] = 0x2C40u;
    // 0c19f8  jmp 0xc19ff
    X86_AT(c, 0xc19f8u);
    goto L_c19ff;
L_c19fa:
    X86_TICK(c, 2);
    // 0c19fa  mov eax, 0x2c44
    X86_AT(c, 0xc19fau);
    c.r[0] = 0x2C44u;
L_c19ff:
    X86_TICK(c, 13);
    // 0c19ff  push eax
    X86_AT(c, 0xc19ffu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c1a00  push 0x2c48
    X86_AT(c, 0xc1a00u);
    { uint32_t v = 0x2C48u; push32(c, v); }
    // 0c1a05  push ebx
    X86_AT(c, 0xc1a05u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1a06  call 0xd87d8
    X86_AT(c, 0xc1a06u);
    push32(c, 0xc1a0bu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1a0bu);
    X86_TICK(c, 23);
    // 0c1a0b  mov eax, esi
    X86_AT(c, 0xc1a0bu);
    c.r[0] = c.r[6];
    // 0c1a0d  lea edx, [eax + eax*2]
    X86_AT(c, 0xc1a0du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c1a10  shl edx, 5
    X86_AT(c, 0xc1a10u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c1a13  add edx, eax
    X86_AT(c, 0xc1a13u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c1a15  lea edx, [eax + edx*2]
    X86_AT(c, 0xc1a15u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c1a18  cmp byte ptr [edx + 0xa4ab3], 1
    X86_AT(c, 0xc1a18u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB3u))), 0x1u, 0, 1);
    // 0c1a1f  je 0xc1a28
    X86_AT(c, 0xc1a1fu);
    if (x86_cc(c, 4)) { goto L_c1a28; }
    X86_TICK(c, 9);
    // 0c1a21  mov eax, 0x2c54
    X86_AT(c, 0xc1a21u);
    c.r[0] = 0x2C54u;
    // 0c1a26  jmp 0xc1a2d
    X86_AT(c, 0xc1a26u);
    goto L_c1a2d;
L_c1a28:
    X86_TICK(c, 2);
    // 0c1a28  mov eax, 0x2c58
    X86_AT(c, 0xc1a28u);
    c.r[0] = 0x2C58u;
L_c1a2d:
    X86_TICK(c, 13);
    // 0c1a2d  push eax
    X86_AT(c, 0xc1a2du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c1a2e  push 0x2c5c
    X86_AT(c, 0xc1a2eu);
    { uint32_t v = 0x2C5Cu; push32(c, v); }
    // 0c1a33  push ebx
    X86_AT(c, 0xc1a33u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1a34  call 0xd87d8
    X86_AT(c, 0xc1a34u);
    push32(c, 0xc1a39u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1a39u);
    X86_TICK(c, 25);
    // 0c1a39  add esp, 0x30
    X86_AT(c, 0xc1a39u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0c1a3c  mov eax, esi
    X86_AT(c, 0xc1a3cu);
    c.r[0] = c.r[6];
    // 0c1a3e  lea edx, [eax + eax*2]
    X86_AT(c, 0xc1a3eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c1a41  shl edx, 5
    X86_AT(c, 0xc1a41u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c1a44  add edx, eax
    X86_AT(c, 0xc1a44u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c1a46  lea edx, [eax + edx*2]
    X86_AT(c, 0xc1a46u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c1a49  cmp byte ptr [edx + 0xa4ab4], 1
    X86_AT(c, 0xc1a49u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB4u))), 0x1u, 0, 1);
    // 0c1a50  je 0xc1a59
    X86_AT(c, 0xc1a50u);
    if (x86_cc(c, 4)) { goto L_c1a59; }
    X86_TICK(c, 9);
    // 0c1a52  mov eax, 0x2c66
    X86_AT(c, 0xc1a52u);
    c.r[0] = 0x2C66u;
    // 0c1a57  jmp 0xc1a5e
    X86_AT(c, 0xc1a57u);
    goto L_c1a5e;
L_c1a59:
    X86_TICK(c, 2);
    // 0c1a59  mov eax, 0x2c6c
    X86_AT(c, 0xc1a59u);
    c.r[0] = 0x2C6Cu;
L_c1a5e:
    X86_TICK(c, 13);
    // 0c1a5e  push eax
    X86_AT(c, 0xc1a5eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c1a5f  push 0x2c70
    X86_AT(c, 0xc1a5fu);
    { uint32_t v = 0x2C70u; push32(c, v); }
    // 0c1a64  push ebx
    X86_AT(c, 0xc1a64u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1a65  call 0xd87d8
    X86_AT(c, 0xc1a65u);
    push32(c, 0xc1a6au); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1a6au);
    X86_TICK(c, 29);
    // 0c1a6a  mov eax, esi
    X86_AT(c, 0xc1a6au);
    c.r[0] = c.r[6];
    // 0c1a6c  lea edx, [eax + eax*2]
    X86_AT(c, 0xc1a6cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c1a6f  shl edx, 5
    X86_AT(c, 0xc1a6fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c1a72  add edx, eax
    X86_AT(c, 0xc1a72u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c1a74  lea edx, [eax + edx*2]
    X86_AT(c, 0xc1a74u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c1a77  push dword ptr [edx + 0xa4ab5]
    X86_AT(c, 0xc1a77u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AB5u))); push32(c, v); }
    // 0c1a7d  push 0x2c7c
    X86_AT(c, 0xc1a7du);
    { uint32_t v = 0x2C7Cu; push32(c, v); }
    // 0c1a82  push ebx
    X86_AT(c, 0xc1a82u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1a83  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xc1a83u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0c1a86  call 0xd87d8
    X86_AT(c, 0xc1a86u);
    push32(c, 0xc1a8bu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1a8bu);
    X86_TICK(c, 11);
    // 0c1a8b  push 0x2c8c
    X86_AT(c, 0xc1a8bu);
    { uint32_t v = 0x2C8Cu; push32(c, v); }
    // 0c1a90  push ebx
    X86_AT(c, 0xc1a90u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1a91  call 0xd87d8
    X86_AT(c, 0xc1a91u);
    push32(c, 0xc1a96u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1a96u);
    X86_TICK(c, 23);
    // 0c1a96  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1a96u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1a99  movzx edx, byte ptr [eax + 0xa4abd]
    X86_AT(c, 0xc1a99u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4ABDu)));
    // 0c1aa0  push edx
    X86_AT(c, 0xc1aa0u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c1aa1  push 0x2c9c
    X86_AT(c, 0xc1aa1u);
    { uint32_t v = 0x2C9Cu; push32(c, v); }
    // 0c1aa6  push ebx
    X86_AT(c, 0xc1aa6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1aa7  call 0xd87d8
    X86_AT(c, 0xc1aa7u);
    push32(c, 0xc1aacu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1aacu);
    X86_TICK(c, 20);
    // 0c1aac  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1aacu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1aaf  push dword ptr [eax + 0xa4abe]
    X86_AT(c, 0xc1aafu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4ABEu))); push32(c, v); }
    // 0c1ab5  push 0x2cac
    X86_AT(c, 0xc1ab5u);
    { uint32_t v = 0x2CACu; push32(c, v); }
    // 0c1aba  push ebx
    X86_AT(c, 0xc1abau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1abb  call 0xd87d8
    X86_AT(c, 0xc1abbu);
    push32(c, 0xc1ac0u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1ac0u);
    X86_TICK(c, 20);
    // 0c1ac0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1ac0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1ac3  push dword ptr [eax + 0xa4ac2]
    X86_AT(c, 0xc1ac3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4AC2u))); push32(c, v); }
    // 0c1ac9  push 0x2cbc
    X86_AT(c, 0xc1ac9u);
    { uint32_t v = 0x2CBCu; push32(c, v); }
    // 0c1ace  push ebx
    X86_AT(c, 0xc1aceu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1acf  call 0xd87d8
    X86_AT(c, 0xc1acfu);
    push32(c, 0xc1ad4u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1ad4u);
    X86_TICK(c, 22);
    // 0c1ad4  add esp, 0x44
    X86_AT(c, 0xc1ad4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0c1ad7  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1ad7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1ada  push dword ptr [eax + 0xa4ac6]
    X86_AT(c, 0xc1adau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4AC6u))); push32(c, v); }
    // 0c1ae0  push 0x2ccc
    X86_AT(c, 0xc1ae0u);
    { uint32_t v = 0x2CCCu; push32(c, v); }
    // 0c1ae5  push ebx
    X86_AT(c, 0xc1ae5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1ae6  call 0xd87d8
    X86_AT(c, 0xc1ae6u);
    push32(c, 0xc1aebu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1aebu);
    X86_TICK(c, 20);
    // 0c1aeb  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1aebu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1aee  push dword ptr [eax + 0xa4aca]
    X86_AT(c, 0xc1aeeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4ACAu))); push32(c, v); }
    // 0c1af4  push 0x2ce0
    X86_AT(c, 0xc1af4u);
    { uint32_t v = 0x2CE0u; push32(c, v); }
    // 0c1af9  push ebx
    X86_AT(c, 0xc1af9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1afa  call 0xd87d8
    X86_AT(c, 0xc1afau);
    push32(c, 0xc1affu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1affu);
    X86_TICK(c, 23);
    // 0c1aff  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1affu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1b02  movzx eax, byte ptr [eax + 0xa4ace]
    X86_AT(c, 0xc1b02u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4ACEu)));
    // 0c1b09  push eax
    X86_AT(c, 0xc1b09u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c1b0a  push 0x2cf0
    X86_AT(c, 0xc1b0au);
    { uint32_t v = 0x2CF0u; push32(c, v); }
    // 0c1b0f  push ebx
    X86_AT(c, 0xc1b0fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1b10  call 0xd87d8
    X86_AT(c, 0xc1b10u);
    push32(c, 0xc1b15u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1b15u);
    X86_TICK(c, 34);
    // 0c1b15  add esp, 0x24
    X86_AT(c, 0xc1b15u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0c1b18  mov eax, esi
    X86_AT(c, 0xc1b18u);
    c.r[0] = c.r[6];
    // 0c1b1a  lea edx, [eax + eax*2]
    X86_AT(c, 0xc1b1au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c1b1d  shl edx, 5
    X86_AT(c, 0xc1b1du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c1b20  add edx, eax
    X86_AT(c, 0xc1b20u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c1b22  lea edx, [eax + edx*2]
    X86_AT(c, 0xc1b22u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c1b25  movzx eax, byte ptr [edx + 0xa4acf]
    X86_AT(c, 0xc1b25u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4ACFu)));
    // 0c1b2c  push eax
    X86_AT(c, 0xc1b2cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c1b2d  push 0x2cfc
    X86_AT(c, 0xc1b2du);
    { uint32_t v = 0x2CFCu; push32(c, v); }
    // 0c1b32  push ebx
    X86_AT(c, 0xc1b32u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1b33  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xc1b33u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0c1b36  call 0xd87d8
    X86_AT(c, 0xc1b36u);
    push32(c, 0xc1b3bu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1b3bu);
    X86_TICK(c, 23);
    // 0c1b3b  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1b3bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1b3e  movzx edx, byte ptr [eax + 0xa4ad0]
    X86_AT(c, 0xc1b3eu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4AD0u)));
    // 0c1b45  push edx
    X86_AT(c, 0xc1b45u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c1b46  push 0x2d10
    X86_AT(c, 0xc1b46u);
    { uint32_t v = 0x2D10u; push32(c, v); }
    // 0c1b4b  push ebx
    X86_AT(c, 0xc1b4bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1b4c  call 0xd87d8
    X86_AT(c, 0xc1b4cu);
    push32(c, 0xc1b51u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1b51u);
    X86_TICK(c, 20);
    // 0c1b51  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1b51u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1b54  push dword ptr [eax + 0xa4ad1]
    X86_AT(c, 0xc1b54u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4AD1u))); push32(c, v); }
    // 0c1b5a  push 0x2d1c
    X86_AT(c, 0xc1b5au);
    { uint32_t v = 0x2D1Cu; push32(c, v); }
    // 0c1b5f  push ebx
    X86_AT(c, 0xc1b5fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1b60  call 0xd87d8
    X86_AT(c, 0xc1b60u);
    push32(c, 0xc1b65u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1b65u);
    X86_TICK(c, 20);
    // 0c1b65  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1b65u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1b68  push dword ptr [eax + 0xa4ad5]
    X86_AT(c, 0xc1b68u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4AD5u))); push32(c, v); }
    // 0c1b6e  push 0x2d28
    X86_AT(c, 0xc1b6eu);
    { uint32_t v = 0x2D28u; push32(c, v); }
    // 0c1b73  push ebx
    X86_AT(c, 0xc1b73u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1b74  call 0xd87d8
    X86_AT(c, 0xc1b74u);
    push32(c, 0xc1b79u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1b79u);
    X86_TICK(c, 20);
    // 0c1b79  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1b79u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1b7c  push dword ptr [eax + 0xa4ad9]
    X86_AT(c, 0xc1b7cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4AD9u))); push32(c, v); }
    // 0c1b82  push 0x2d38
    X86_AT(c, 0xc1b82u);
    { uint32_t v = 0x2D38u; push32(c, v); }
    // 0c1b87  push ebx
    X86_AT(c, 0xc1b87u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1b88  call 0xd87d8
    X86_AT(c, 0xc1b88u);
    push32(c, 0xc1b8du); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1b8du);
    X86_TICK(c, 22);
    // 0c1b8d  add esp, 0x3c
    X86_AT(c, 0xc1b8du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c1b90  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1b90u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1b93  push dword ptr [eax + 0xa4add]
    X86_AT(c, 0xc1b93u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4ADDu))); push32(c, v); }
    // 0c1b99  push 0x2d48
    X86_AT(c, 0xc1b99u);
    { uint32_t v = 0x2D48u; push32(c, v); }
    // 0c1b9e  push ebx
    X86_AT(c, 0xc1b9eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1b9f  call 0xd87d8
    X86_AT(c, 0xc1b9fu);
    push32(c, 0xc1ba4u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1ba4u);
    X86_TICK(c, 20);
    // 0c1ba4  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1ba4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1ba7  push dword ptr [eax + 0xa4ae5]
    X86_AT(c, 0xc1ba7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4AE5u))); push32(c, v); }
    // 0c1bad  push 0x2d5c
    X86_AT(c, 0xc1badu);
    { uint32_t v = 0x2D5Cu; push32(c, v); }
    // 0c1bb2  push ebx
    X86_AT(c, 0xc1bb2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1bb3  call 0xd87d8
    X86_AT(c, 0xc1bb3u);
    push32(c, 0xc1bb8u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1bb8u);
    X86_TICK(c, 20);
    // 0c1bb8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1bb8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1bbb  push dword ptr [eax + 0xa4ae1]
    X86_AT(c, 0xc1bbbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4AE1u))); push32(c, v); }
    // 0c1bc1  push 0x2d68
    X86_AT(c, 0xc1bc1u);
    { uint32_t v = 0x2D68u; push32(c, v); }
    // 0c1bc6  push ebx
    X86_AT(c, 0xc1bc6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1bc7  call 0xd87d8
    X86_AT(c, 0xc1bc7u);
    push32(c, 0xc1bccu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1bccu);
    X86_TICK(c, 20);
    // 0c1bcc  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1bccu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1bcf  push dword ptr [eax + 0xa4ae9]
    X86_AT(c, 0xc1bcfu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4AE9u))); push32(c, v); }
    // 0c1bd5  push 0x2d74
    X86_AT(c, 0xc1bd5u);
    { uint32_t v = 0x2D74u; push32(c, v); }
    // 0c1bda  push ebx
    X86_AT(c, 0xc1bdau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1bdb  call 0xd87d8
    X86_AT(c, 0xc1bdbu);
    push32(c, 0xc1be0u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1be0u);
    X86_TICK(c, 20);
    // 0c1be0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1be0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1be3  push dword ptr [eax + 0xa4aed]
    X86_AT(c, 0xc1be3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4AEDu))); push32(c, v); }
    // 0c1be9  push 0x2d80
    X86_AT(c, 0xc1be9u);
    { uint32_t v = 0x2D80u; push32(c, v); }
    // 0c1bee  push ebx
    X86_AT(c, 0xc1beeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1bef  call 0xd87d8
    X86_AT(c, 0xc1befu);
    push32(c, 0xc1bf4u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1bf4u);
    X86_TICK(c, 22);
    // 0c1bf4  add esp, 0x3c
    X86_AT(c, 0xc1bf4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c1bf7  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1bf7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1bfa  push dword ptr [eax + 0xa4af1]
    X86_AT(c, 0xc1bfau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4AF1u))); push32(c, v); }
    // 0c1c00  push 0x2d8c
    X86_AT(c, 0xc1c00u);
    { uint32_t v = 0x2D8Cu; push32(c, v); }
    // 0c1c05  push ebx
    X86_AT(c, 0xc1c05u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1c06  call 0xd87d8
    X86_AT(c, 0xc1c06u);
    push32(c, 0xc1c0bu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1c0bu);
    X86_TICK(c, 31);
    // 0c1c0b  add esp, 0xc
    X86_AT(c, 0xc1c0bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c1c0e  mov eax, esi
    X86_AT(c, 0xc1c0eu);
    c.r[0] = c.r[6];
    // 0c1c10  lea edx, [eax + eax*2]
    X86_AT(c, 0xc1c10u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c1c13  shl edx, 5
    X86_AT(c, 0xc1c13u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c1c16  add edx, eax
    X86_AT(c, 0xc1c16u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c1c18  lea edx, [eax + edx*2]
    X86_AT(c, 0xc1c18u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c1c1b  push dword ptr [edx + 0xa4af5]
    X86_AT(c, 0xc1c1bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4AF5u))); push32(c, v); }
    // 0c1c21  push 0x2d98
    X86_AT(c, 0xc1c21u);
    { uint32_t v = 0x2D98u; push32(c, v); }
    // 0c1c26  push ebx
    X86_AT(c, 0xc1c26u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1c27  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xc1c27u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0c1c2a  call 0xd87d8
    X86_AT(c, 0xc1c2au);
    push32(c, 0xc1c2fu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1c2fu);
    X86_TICK(c, 23);
    // 0c1c2f  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1c2fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1c32  movzx edx, byte ptr [eax + 0xa4af9]
    X86_AT(c, 0xc1c32u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4AF9u)));
    // 0c1c39  push edx
    X86_AT(c, 0xc1c39u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c1c3a  push 0x2da8
    X86_AT(c, 0xc1c3au);
    { uint32_t v = 0x2DA8u; push32(c, v); }
    // 0c1c3f  push ebx
    X86_AT(c, 0xc1c3fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1c40  call 0xd87d8
    X86_AT(c, 0xc1c40u);
    push32(c, 0xc1c45u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1c45u);
    X86_TICK(c, 20);
    // 0c1c45  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1c45u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1c48  push dword ptr [eax + 0xa4afa]
    X86_AT(c, 0xc1c48u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4AFAu))); push32(c, v); }
    // 0c1c4e  push 0x2db8
    X86_AT(c, 0xc1c4eu);
    { uint32_t v = 0x2DB8u; push32(c, v); }
    // 0c1c53  push ebx
    X86_AT(c, 0xc1c53u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1c54  call 0xd87d8
    X86_AT(c, 0xc1c54u);
    push32(c, 0xc1c59u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1c59u);
    X86_TICK(c, 20);
    // 0c1c59  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1c59u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1c5c  push dword ptr [eax + 0xa4afe]
    X86_AT(c, 0xc1c5cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4AFEu))); push32(c, v); }
    // 0c1c62  push 0x2dc8
    X86_AT(c, 0xc1c62u);
    { uint32_t v = 0x2DC8u; push32(c, v); }
    // 0c1c67  push ebx
    X86_AT(c, 0xc1c67u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1c68  call 0xd87d8
    X86_AT(c, 0xc1c68u);
    push32(c, 0xc1c6du); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1c6du);
    X86_TICK(c, 20);
    // 0c1c6d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1c6du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1c70  push dword ptr [eax + 0xa4b02]
    X86_AT(c, 0xc1c70u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4B02u))); push32(c, v); }
    // 0c1c76  push 0x2dd8
    X86_AT(c, 0xc1c76u);
    { uint32_t v = 0x2DD8u; push32(c, v); }
    // 0c1c7b  push ebx
    X86_AT(c, 0xc1c7bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1c7c  call 0xd87d8
    X86_AT(c, 0xc1c7cu);
    push32(c, 0xc1c81u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1c81u);
    X86_TICK(c, 22);
    // 0c1c81  add esp, 0x3c
    X86_AT(c, 0xc1c81u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c1c84  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1c84u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1c87  push dword ptr [eax + 0xa4b06]
    X86_AT(c, 0xc1c87u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4B06u))); push32(c, v); }
    // 0c1c8d  push 0x2de8
    X86_AT(c, 0xc1c8du);
    { uint32_t v = 0x2DE8u; push32(c, v); }
    // 0c1c92  push ebx
    X86_AT(c, 0xc1c92u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1c93  call 0xd87d8
    X86_AT(c, 0xc1c93u);
    push32(c, 0xc1c98u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1c98u);
    X86_TICK(c, 20);
    // 0c1c98  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1c98u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1c9b  push dword ptr [eax + 0xa4b0a]
    X86_AT(c, 0xc1c9bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4B0Au))); push32(c, v); }
    // 0c1ca1  push 0x2df8
    X86_AT(c, 0xc1ca1u);
    { uint32_t v = 0x2DF8u; push32(c, v); }
    // 0c1ca6  push ebx
    X86_AT(c, 0xc1ca6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1ca7  call 0xd87d8
    X86_AT(c, 0xc1ca7u);
    push32(c, 0xc1cacu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1cacu);
    X86_TICK(c, 20);
    // 0c1cac  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1cacu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1caf  push dword ptr [eax + 0xa4b0e]
    X86_AT(c, 0xc1cafu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4B0Eu))); push32(c, v); }
    // 0c1cb5  push 0x2e08
    X86_AT(c, 0xc1cb5u);
    { uint32_t v = 0x2E08u; push32(c, v); }
    // 0c1cba  push ebx
    X86_AT(c, 0xc1cbau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1cbb  call 0xd87d8
    X86_AT(c, 0xc1cbbu);
    push32(c, 0xc1cc0u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1cc0u);
    X86_TICK(c, 20);
    // 0c1cc0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1cc0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1cc3  push dword ptr [eax + 0xa4b12]
    X86_AT(c, 0xc1cc3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4B12u))); push32(c, v); }
    // 0c1cc9  push 0x2e18
    X86_AT(c, 0xc1cc9u);
    { uint32_t v = 0x2E18u; push32(c, v); }
    // 0c1cce  push ebx
    X86_AT(c, 0xc1cceu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1ccf  call 0xd87d8
    X86_AT(c, 0xc1ccfu);
    push32(c, 0xc1cd4u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1cd4u);
    X86_TICK(c, 20);
    // 0c1cd4  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1cd4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1cd7  push dword ptr [eax + 0xa4b16]
    X86_AT(c, 0xc1cd7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4B16u))); push32(c, v); }
    // 0c1cdd  push 0x2e28
    X86_AT(c, 0xc1cddu);
    { uint32_t v = 0x2E28u; push32(c, v); }
    // 0c1ce2  push ebx
    X86_AT(c, 0xc1ce2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1ce3  call 0xd87d8
    X86_AT(c, 0xc1ce3u);
    push32(c, 0xc1ce8u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1ce8u);
    X86_TICK(c, 25);
    // 0c1ce8  add esp, 0x3c
    X86_AT(c, 0xc1ce8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c1ceb  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1cebu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1cee  movzx eax, byte ptr [eax + 0xa4b1a]
    X86_AT(c, 0xc1ceeu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4B1Au)));
    // 0c1cf5  push eax
    X86_AT(c, 0xc1cf5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c1cf6  push 0x2e38
    X86_AT(c, 0xc1cf6u);
    { uint32_t v = 0x2E38u; push32(c, v); }
    // 0c1cfb  push ebx
    X86_AT(c, 0xc1cfbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1cfc  call 0xd87d8
    X86_AT(c, 0xc1cfcu);
    push32(c, 0xc1d01u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1d01u);
    X86_TICK(c, 31);
    // 0c1d01  add esp, 0xc
    X86_AT(c, 0xc1d01u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c1d04  mov eax, esi
    X86_AT(c, 0xc1d04u);
    c.r[0] = c.r[6];
    // 0c1d06  lea edx, [eax + eax*2]
    X86_AT(c, 0xc1d06u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c1d09  shl edx, 5
    X86_AT(c, 0xc1d09u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c1d0c  add edx, eax
    X86_AT(c, 0xc1d0cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c1d0e  lea edx, [eax + edx*2]
    X86_AT(c, 0xc1d0eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c1d11  push dword ptr [edx + 0xa4b1b]
    X86_AT(c, 0xc1d11u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B1Bu))); push32(c, v); }
    // 0c1d17  push 0x2e48
    X86_AT(c, 0xc1d17u);
    { uint32_t v = 0x2E48u; push32(c, v); }
    // 0c1d1c  push ebx
    X86_AT(c, 0xc1d1cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1d1d  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xc1d1du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0c1d20  call 0xd87d8
    X86_AT(c, 0xc1d20u);
    push32(c, 0xc1d25u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1d25u);
    X86_TICK(c, 20);
    // 0c1d25  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1d25u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1d28  push dword ptr [eax + 0xa4b1f]
    X86_AT(c, 0xc1d28u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4B1Fu))); push32(c, v); }
    // 0c1d2e  push 0x2e58
    X86_AT(c, 0xc1d2eu);
    { uint32_t v = 0x2E58u; push32(c, v); }
    // 0c1d33  push ebx
    X86_AT(c, 0xc1d33u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1d34  call 0xd87d8
    X86_AT(c, 0xc1d34u);
    push32(c, 0xc1d39u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1d39u);
    X86_TICK(c, 20);
    // 0c1d39  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1d39u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1d3c  push dword ptr [eax + 0xa4b23]
    X86_AT(c, 0xc1d3cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4B23u))); push32(c, v); }
    // 0c1d42  push 0x2e68
    X86_AT(c, 0xc1d42u);
    { uint32_t v = 0x2E68u; push32(c, v); }
    // 0c1d47  push ebx
    X86_AT(c, 0xc1d47u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1d48  call 0xd87d8
    X86_AT(c, 0xc1d48u);
    push32(c, 0xc1d4du); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1d4du);
    X86_TICK(c, 20);
    // 0c1d4d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1d4du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1d50  push dword ptr [eax + 0xa4b27]
    X86_AT(c, 0xc1d50u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4B27u))); push32(c, v); }
    // 0c1d56  push 0x2e78
    X86_AT(c, 0xc1d56u);
    { uint32_t v = 0x2E78u; push32(c, v); }
    // 0c1d5b  push ebx
    X86_AT(c, 0xc1d5bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1d5c  call 0xd87d8
    X86_AT(c, 0xc1d5cu);
    push32(c, 0xc1d61u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1d61u);
    X86_TICK(c, 20);
    // 0c1d61  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1d61u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1d64  push dword ptr [eax + 0xa4b2b]
    X86_AT(c, 0xc1d64u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4B2Bu))); push32(c, v); }
    // 0c1d6a  push 0x2e88
    X86_AT(c, 0xc1d6au);
    { uint32_t v = 0x2E88u; push32(c, v); }
    // 0c1d6f  push ebx
    X86_AT(c, 0xc1d6fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1d70  call 0xd87d8
    X86_AT(c, 0xc1d70u);
    push32(c, 0xc1d75u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1d75u);
    X86_TICK(c, 22);
    // 0c1d75  add esp, 0x3c
    X86_AT(c, 0xc1d75u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c1d78  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1d78u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1d7b  push dword ptr [eax + 0xa4b2f]
    X86_AT(c, 0xc1d7bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4B2Fu))); push32(c, v); }
    // 0c1d81  push 0x2e98
    X86_AT(c, 0xc1d81u);
    { uint32_t v = 0x2E98u; push32(c, v); }
    // 0c1d86  push ebx
    X86_AT(c, 0xc1d86u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1d87  call 0xd87d8
    X86_AT(c, 0xc1d87u);
    push32(c, 0xc1d8cu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1d8cu);
    X86_TICK(c, 20);
    // 0c1d8c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1d8cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1d8f  push dword ptr [eax + 0xa4b33]
    X86_AT(c, 0xc1d8fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4B33u))); push32(c, v); }
    // 0c1d95  push 0x2ea8
    X86_AT(c, 0xc1d95u);
    { uint32_t v = 0x2EA8u; push32(c, v); }
    // 0c1d9a  push ebx
    X86_AT(c, 0xc1d9au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1d9b  call 0xd87d8
    X86_AT(c, 0xc1d9bu);
    push32(c, 0xc1da0u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1da0u);
    X86_TICK(c, 20);
    // 0c1da0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1da0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1da3  push dword ptr [eax + 0xa4b37]
    X86_AT(c, 0xc1da3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4B37u))); push32(c, v); }
    // 0c1da9  push 0x2eb8
    X86_AT(c, 0xc1da9u);
    { uint32_t v = 0x2EB8u; push32(c, v); }
    // 0c1dae  push ebx
    X86_AT(c, 0xc1daeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1daf  call 0xd87d8
    X86_AT(c, 0xc1dafu);
    push32(c, 0xc1db4u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1db4u);
    X86_TICK(c, 20);
    // 0c1db4  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1db4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1db7  push dword ptr [eax + 0xa4b3b]
    X86_AT(c, 0xc1db7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4B3Bu))); push32(c, v); }
    // 0c1dbd  push 0x2ec8
    X86_AT(c, 0xc1dbdu);
    { uint32_t v = 0x2EC8u; push32(c, v); }
    // 0c1dc2  push ebx
    X86_AT(c, 0xc1dc2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1dc3  call 0xd87d8
    X86_AT(c, 0xc1dc3u);
    push32(c, 0xc1dc8u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1dc8u);
    X86_TICK(c, 20);
    // 0c1dc8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1dc8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1dcb  push dword ptr [eax + 0xa4b3f]
    X86_AT(c, 0xc1dcbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4B3Fu))); push32(c, v); }
    // 0c1dd1  push 0x2ed8
    X86_AT(c, 0xc1dd1u);
    { uint32_t v = 0x2ED8u; push32(c, v); }
    // 0c1dd6  push ebx
    X86_AT(c, 0xc1dd6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1dd7  call 0xd87d8
    X86_AT(c, 0xc1dd7u);
    push32(c, 0xc1ddcu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1ddcu);
    X86_TICK(c, 22);
    // 0c1ddc  add esp, 0x3c
    X86_AT(c, 0xc1ddcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c1ddf  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1ddfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1de2  push dword ptr [eax + 0xa4b43]
    X86_AT(c, 0xc1de2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4B43u))); push32(c, v); }
    // 0c1de8  push 0x2ee8
    X86_AT(c, 0xc1de8u);
    { uint32_t v = 0x2EE8u; push32(c, v); }
    // 0c1ded  push ebx
    X86_AT(c, 0xc1dedu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1dee  call 0xd87d8
    X86_AT(c, 0xc1deeu);
    push32(c, 0xc1df3u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1df3u);
    X86_TICK(c, 31);
    // 0c1df3  add esp, 0xc
    X86_AT(c, 0xc1df3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c1df6  mov eax, esi
    X86_AT(c, 0xc1df6u);
    c.r[0] = c.r[6];
    // 0c1df8  lea edx, [eax + eax*2]
    X86_AT(c, 0xc1df8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0c1dfb  shl edx, 5
    X86_AT(c, 0xc1dfbu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c1dfe  add edx, eax
    X86_AT(c, 0xc1dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c1e00  lea edx, [eax + edx*2]
    X86_AT(c, 0xc1e00u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0c1e03  push dword ptr [edx + 0xa4b47]
    X86_AT(c, 0xc1e03u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA4B47u))); push32(c, v); }
    // 0c1e09  push 0x2ef8
    X86_AT(c, 0xc1e09u);
    { uint32_t v = 0x2EF8u; push32(c, v); }
    // 0c1e0e  push ebx
    X86_AT(c, 0xc1e0eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1e0f  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xc1e0fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0c1e12  call 0xd87d8
    X86_AT(c, 0xc1e12u);
    push32(c, 0xc1e17u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1e17u);
    X86_TICK(c, 20);
    // 0c1e17  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1e17u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1e1a  push dword ptr [eax + 0xa4b4b]
    X86_AT(c, 0xc1e1au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4B4Bu))); push32(c, v); }
    // 0c1e20  push 0x2f08
    X86_AT(c, 0xc1e20u);
    { uint32_t v = 0x2F08u; push32(c, v); }
    // 0c1e25  push ebx
    X86_AT(c, 0xc1e25u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1e26  call 0xd87d8
    X86_AT(c, 0xc1e26u);
    push32(c, 0xc1e2bu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1e2bu);
    X86_TICK(c, 20);
    // 0c1e2b  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1e2bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1e2e  push dword ptr [eax + 0xa4b4f]
    X86_AT(c, 0xc1e2eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4B4Fu))); push32(c, v); }
    // 0c1e34  push 0x2f18
    X86_AT(c, 0xc1e34u);
    { uint32_t v = 0x2F18u; push32(c, v); }
    // 0c1e39  push ebx
    X86_AT(c, 0xc1e39u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1e3a  call 0xd87d8
    X86_AT(c, 0xc1e3au);
    push32(c, 0xc1e3fu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1e3fu);
    X86_TICK(c, 20);
    // 0c1e3f  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1e3fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1e42  push dword ptr [eax + 0xa4b53]
    X86_AT(c, 0xc1e42u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4B53u))); push32(c, v); }
    // 0c1e48  push 0x2f28
    X86_AT(c, 0xc1e48u);
    { uint32_t v = 0x2F28u; push32(c, v); }
    // 0c1e4d  push ebx
    X86_AT(c, 0xc1e4du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1e4e  call 0xd87d8
    X86_AT(c, 0xc1e4eu);
    push32(c, 0xc1e53u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1e53u);
    X86_TICK(c, 20);
    // 0c1e53  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1e53u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1e56  push dword ptr [eax + 0xa4b57]
    X86_AT(c, 0xc1e56u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4B57u))); push32(c, v); }
    // 0c1e5c  push 0x2f38
    X86_AT(c, 0xc1e5cu);
    { uint32_t v = 0x2F38u; push32(c, v); }
    // 0c1e61  push ebx
    X86_AT(c, 0xc1e61u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1e62  call 0xd87d8
    X86_AT(c, 0xc1e62u);
    push32(c, 0xc1e67u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1e67u);
    X86_TICK(c, 22);
    // 0c1e67  add esp, 0x3c
    X86_AT(c, 0xc1e67u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c1e6a  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1e6au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1e6d  push dword ptr [eax + 0xa4b5b]
    X86_AT(c, 0xc1e6du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4B5Bu))); push32(c, v); }
    // 0c1e73  push 0x2f48
    X86_AT(c, 0xc1e73u);
    { uint32_t v = 0x2F48u; push32(c, v); }
    // 0c1e78  push ebx
    X86_AT(c, 0xc1e78u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1e79  call 0xd87d8
    X86_AT(c, 0xc1e79u);
    push32(c, 0xc1e7eu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1e7eu);
    X86_TICK(c, 20);
    // 0c1e7e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc1e7eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c1e81  push dword ptr [eax + 0xa4b5f]
    X86_AT(c, 0xc1e81u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA4B5Fu))); push32(c, v); }
    // 0c1e87  push 0x2f58
    X86_AT(c, 0xc1e87u);
    { uint32_t v = 0x2F58u; push32(c, v); }
    // 0c1e8c  push ebx
    X86_AT(c, 0xc1e8cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1e8d  call 0xd87d8
    X86_AT(c, 0xc1e8du);
    push32(c, 0xc1e92u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1e92u);
    X86_TICK(c, 11);
    // 0c1e92  inc esi
    X86_AT(c, 0xc1e92u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c1e93  add esp, 0x18
    X86_AT(c, 0xc1e93u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c1e96  jmp 0xc18b8
    X86_AT(c, 0xc1e96u);
    X86_POLL(c, 0xc18b8u); goto L_c18b8;
L_c1e9b:
    X86_TICK(c, 9);
    // 0c1e9b  push ebx
    X86_AT(c, 0xc1e9bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c1e9c  call 0xd84c0
    X86_AT(c, 0xc1e9cu);
    push32(c, 0xc1ea1u); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xc1ea1u);
    X86_TICK(c, 9);
    // 0c1ea1  push 2
    X86_AT(c, 0xc1ea1u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c1ea3  call 0xbbb5c
    X86_AT(c, 0xc1ea3u);
    push32(c, 0xc1ea8u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc1ea8u);
    X86_TICK(c, 2);
    // 0c1ea8  add esp, 8
    X86_AT(c, 0xc1ea8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c1eab:
    X86_TICK(c, 28);
    // 0c1eab  pop edi
    X86_AT(c, 0xc1eabu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c1eac  pop esi
    X86_AT(c, 0xc1eacu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c1ead  pop ebx
    X86_AT(c, 0xc1eadu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c1eae  leave 
    X86_AT(c, 0xc1eaeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c1eaf  ret 
    X86_AT(c, 0xc1eafu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc1864u, "ran off the end of a function");
}
void f_000c1eb0(X86Cpu& c) {
    X86_TICK(c, 6);
    // 0c1eb0  push esi
    X86_AT(c, 0xc1eb0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1eb1  push edi
    X86_AT(c, 0xc1eb1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c1eb2  sub esi, esi
    X86_AT(c, 0xc1eb2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c1eb4:
    X86_TICK(c, 7);
    // 0c1eb4  cmp esi, 6
    X86_AT(c, 0xc1eb4u);
    (void)x86_sub(c, c.r[6], 0x6u, 0, 4);
    // 0c1eb7  jge 0xc1eca
    X86_AT(c, 0xc1eb7u);
    if (x86_cc(c, 13)) { goto L_c1eca; }
    X86_TICK(c, 9);
    // 0c1eb9  push 0
    X86_AT(c, 0xc1eb9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c1ebb  call 0xb6d38
    X86_AT(c, 0xc1ebbu);
    push32(c, 0xc1ec0u); x86_call_known(c, 0xb6d38u, f_000b6d38); X86_RET(c, 0xc1ec0u);
    X86_TICK(c, 9);
    // 0c1ec0  add esp, 4
    X86_AT(c, 0xc1ec0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c1ec3  and eax, eax
    X86_AT(c, 0xc1ec3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c1ec5  je 0xc1eca
    X86_AT(c, 0xc1ec5u);
    if (x86_cc(c, 4)) { goto L_c1eca; }
    X86_TICK(c, 9);
    // 0c1ec7  inc esi
    X86_AT(c, 0xc1ec7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c1ec8  jmp 0xc1eb4
    X86_AT(c, 0xc1ec8u);
    X86_POLL(c, 0xc1eb4u); goto L_c1eb4;
L_c1eca:
    X86_TICK(c, 11);
    // 0c1eca  push 0x2f68
    X86_AT(c, 0xc1ecau);
    { uint32_t v = 0x2F68u; push32(c, v); }
    // 0c1ecf  push 0x2f6c
    X86_AT(c, 0xc1ecfu);
    { uint32_t v = 0x2F6Cu; push32(c, v); }
    // 0c1ed4  call 0xd7fc4
    X86_AT(c, 0xc1ed4u);
    push32(c, 0xc1ed9u); x86_call_known(c, 0xd7fc4u, f_000d7fc4); X86_RET(c, 0xc1ed9u);
    X86_TICK(c, 12);
    // 0c1ed9  add esp, 8
    X86_AT(c, 0xc1ed9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c1edc  xchg edi, eax
    X86_AT(c, 0xc1edcu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c1edd  and edi, edi
    X86_AT(c, 0xc1eddu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c1edf  jne 0xc1eeb
    X86_AT(c, 0xc1edfu);
    if (x86_cc(c, 5)) { goto L_c1eeb; }
    X86_TICK(c, 9);
    // 0c1ee1  mov eax, 0xffffffff
    X86_AT(c, 0xc1ee1u);
    c.r[0] = 0xFFFFFFFFu;
    // 0c1ee6  jmp 0xc209b
    X86_AT(c, 0xc1ee6u);
    goto L_c209b;
L_c1eeb:
    X86_TICK(c, 9);
    // 0c1eeb  push 0x2f7c
    X86_AT(c, 0xc1eebu);
    { uint32_t v = 0x2F7Cu; push32(c, v); }
    // 0c1ef0  call 0xbc50c
    X86_AT(c, 0xc1ef0u);
    push32(c, 0xc1ef5u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc1ef5u);
    X86_TICK(c, 11);
    // 0c1ef5  push 0x2fc0
    X86_AT(c, 0xc1ef5u);
    { uint32_t v = 0x2FC0u; push32(c, v); }
    // 0c1efa  push edi
    X86_AT(c, 0xc1efau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c1efb  call 0xd87d8
    X86_AT(c, 0xc1efbu);
    push32(c, 0xc1f00u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1f00u);
    X86_TICK(c, 4);
    // 0c1f00  sub esi, esi
    X86_AT(c, 0xc1f00u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0c1f02  add esp, 0xc
    X86_AT(c, 0xc1f02u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c1f05:
    X86_TICK(c, 7);
    // 0c1f05  cmp esi, 0x30
    X86_AT(c, 0xc1f05u);
    (void)x86_sub(c, c.r[6], 0x30u, 0, 4);
    // 0c1f08  jge 0xc1f24
    X86_AT(c, 0xc1f08u);
    if (x86_cc(c, 13)) { goto L_c1f24; }
    X86_TICK(c, 21);
    // 0c1f0a  movzx eax, byte ptr [esi + 0xa5ce8]
    X86_AT(c, 0xc1f0au);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xA5CE8u)));
    // 0c1f11  push eax
    X86_AT(c, 0xc1f11u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c1f12  push esi
    X86_AT(c, 0xc1f12u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1f13  push 0x2fe4
    X86_AT(c, 0xc1f13u);
    { uint32_t v = 0x2FE4u; push32(c, v); }
    // 0c1f18  push edi
    X86_AT(c, 0xc1f18u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c1f19  call 0xd87d8
    X86_AT(c, 0xc1f19u);
    push32(c, 0xc1f1eu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1f1eu);
    X86_TICK(c, 11);
    // 0c1f1e  inc esi
    X86_AT(c, 0xc1f1eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c1f1f  add esp, 0x10
    X86_AT(c, 0xc1f1fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c1f22  jmp 0xc1f05
    X86_AT(c, 0xc1f22u);
    X86_POLL(c, 0xc1f05u); goto L_c1f05;
L_c1f24:
    X86_TICK(c, 2);
    // 0c1f24  sub esi, esi
    X86_AT(c, 0xc1f24u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c1f26:
    X86_TICK(c, 7);
    // 0c1f26  cmp esi, 0x30
    X86_AT(c, 0xc1f26u);
    (void)x86_sub(c, c.r[6], 0x30u, 0, 4);
    // 0c1f29  jge 0xc1f45
    X86_AT(c, 0xc1f29u);
    if (x86_cc(c, 13)) { goto L_c1f45; }
    X86_TICK(c, 21);
    // 0c1f2b  movzx eax, byte ptr [esi + 0xa5d18]
    X86_AT(c, 0xc1f2bu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xA5D18u)));
    // 0c1f32  push eax
    X86_AT(c, 0xc1f32u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c1f33  push esi
    X86_AT(c, 0xc1f33u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1f34  push 0x2ffc
    X86_AT(c, 0xc1f34u);
    { uint32_t v = 0x2FFCu; push32(c, v); }
    // 0c1f39  push edi
    X86_AT(c, 0xc1f39u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c1f3a  call 0xd87d8
    X86_AT(c, 0xc1f3au);
    push32(c, 0xc1f3fu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1f3fu);
    X86_TICK(c, 11);
    // 0c1f3f  inc esi
    X86_AT(c, 0xc1f3fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c1f40  add esp, 0x10
    X86_AT(c, 0xc1f40u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c1f43  jmp 0xc1f26
    X86_AT(c, 0xc1f43u);
    X86_POLL(c, 0xc1f26u); goto L_c1f26;
L_c1f45:
    X86_TICK(c, 2);
    // 0c1f45  sub esi, esi
    X86_AT(c, 0xc1f45u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c1f47:
    X86_TICK(c, 7);
    // 0c1f47  cmp esi, 0x30
    X86_AT(c, 0xc1f47u);
    (void)x86_sub(c, c.r[6], 0x30u, 0, 4);
    // 0c1f4a  jge 0xc1f65
    X86_AT(c, 0xc1f4au);
    if (x86_cc(c, 13)) { goto L_c1f65; }
    X86_TICK(c, 18);
    // 0c1f4c  push dword ptr [esi*4 + 0xa5d48]
    X86_AT(c, 0xc1f4cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA5D48u))); push32(c, v); }
    // 0c1f53  push esi
    X86_AT(c, 0xc1f53u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1f54  push 0x3010
    X86_AT(c, 0xc1f54u);
    { uint32_t v = 0x3010u; push32(c, v); }
    // 0c1f59  push edi
    X86_AT(c, 0xc1f59u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c1f5a  call 0xd87d8
    X86_AT(c, 0xc1f5au);
    push32(c, 0xc1f5fu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1f5fu);
    X86_TICK(c, 11);
    // 0c1f5f  inc esi
    X86_AT(c, 0xc1f5fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c1f60  add esp, 0x10
    X86_AT(c, 0xc1f60u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c1f63  jmp 0xc1f47
    X86_AT(c, 0xc1f63u);
    X86_POLL(c, 0xc1f47u); goto L_c1f47;
L_c1f65:
    X86_TICK(c, 2);
    // 0c1f65  sub esi, esi
    X86_AT(c, 0xc1f65u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c1f67:
    X86_TICK(c, 7);
    // 0c1f67  cmp esi, 0x30
    X86_AT(c, 0xc1f67u);
    (void)x86_sub(c, c.r[6], 0x30u, 0, 4);
    // 0c1f6a  jge 0xc1f85
    X86_AT(c, 0xc1f6au);
    if (x86_cc(c, 13)) { goto L_c1f85; }
    X86_TICK(c, 18);
    // 0c1f6c  push dword ptr [esi*4 + 0xa5e08]
    X86_AT(c, 0xc1f6cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA5E08u))); push32(c, v); }
    // 0c1f73  push esi
    X86_AT(c, 0xc1f73u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1f74  push 0x3024
    X86_AT(c, 0xc1f74u);
    { uint32_t v = 0x3024u; push32(c, v); }
    // 0c1f79  push edi
    X86_AT(c, 0xc1f79u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c1f7a  call 0xd87d8
    X86_AT(c, 0xc1f7au);
    push32(c, 0xc1f7fu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1f7fu);
    X86_TICK(c, 11);
    // 0c1f7f  inc esi
    X86_AT(c, 0xc1f7fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c1f80  add esp, 0x10
    X86_AT(c, 0xc1f80u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c1f83  jmp 0xc1f67
    X86_AT(c, 0xc1f83u);
    X86_POLL(c, 0xc1f67u); goto L_c1f67;
L_c1f85:
    X86_TICK(c, 2);
    // 0c1f85  sub esi, esi
    X86_AT(c, 0xc1f85u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c1f87:
    X86_TICK(c, 7);
    // 0c1f87  cmp esi, 0x30
    X86_AT(c, 0xc1f87u);
    (void)x86_sub(c, c.r[6], 0x30u, 0, 4);
    // 0c1f8a  jge 0xc1fa5
    X86_AT(c, 0xc1f8au);
    if (x86_cc(c, 13)) { goto L_c1fa5; }
    X86_TICK(c, 18);
    // 0c1f8c  push dword ptr [esi*4 + 0xa5ec8]
    X86_AT(c, 0xc1f8cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA5EC8u))); push32(c, v); }
    // 0c1f93  push esi
    X86_AT(c, 0xc1f93u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1f94  push 0x3038
    X86_AT(c, 0xc1f94u);
    { uint32_t v = 0x3038u; push32(c, v); }
    // 0c1f99  push edi
    X86_AT(c, 0xc1f99u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c1f9a  call 0xd87d8
    X86_AT(c, 0xc1f9au);
    push32(c, 0xc1f9fu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1f9fu);
    X86_TICK(c, 11);
    // 0c1f9f  inc esi
    X86_AT(c, 0xc1f9fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c1fa0  add esp, 0x10
    X86_AT(c, 0xc1fa0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c1fa3  jmp 0xc1f87
    X86_AT(c, 0xc1fa3u);
    X86_POLL(c, 0xc1f87u); goto L_c1f87;
L_c1fa5:
    X86_TICK(c, 2);
    // 0c1fa5  sub esi, esi
    X86_AT(c, 0xc1fa5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c1fa7:
    X86_TICK(c, 7);
    // 0c1fa7  cmp esi, 0x30
    X86_AT(c, 0xc1fa7u);
    (void)x86_sub(c, c.r[6], 0x30u, 0, 4);
    // 0c1faa  jge 0xc1fc5
    X86_AT(c, 0xc1faau);
    if (x86_cc(c, 13)) { goto L_c1fc5; }
    X86_TICK(c, 18);
    // 0c1fac  push dword ptr [esi*4 + 0xa6074]
    X86_AT(c, 0xc1facu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xA6074u))); push32(c, v); }
    // 0c1fb3  push esi
    X86_AT(c, 0xc1fb3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c1fb4  push 0x304c
    X86_AT(c, 0xc1fb4u);
    { uint32_t v = 0x304Cu; push32(c, v); }
    // 0c1fb9  push edi
    X86_AT(c, 0xc1fb9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c1fba  call 0xd87d8
    X86_AT(c, 0xc1fbau);
    push32(c, 0xc1fbfu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1fbfu);
    X86_TICK(c, 11);
    // 0c1fbf  inc esi
    X86_AT(c, 0xc1fbfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c1fc0  add esp, 0x10
    X86_AT(c, 0xc1fc0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0c1fc3  jmp 0xc1fa7
    X86_AT(c, 0xc1fc3u);
    X86_POLL(c, 0xc1fa7u); goto L_c1fa7;
L_c1fc5:
    X86_TICK(c, 16);
    // 0c1fc5  push dword ptr [0xa6048]
    X86_AT(c, 0xc1fc5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA6048u))); push32(c, v); }
    // 0c1fcb  push 0x3060
    X86_AT(c, 0xc1fcbu);
    { uint32_t v = 0x3060u; push32(c, v); }
    // 0c1fd0  push edi
    X86_AT(c, 0xc1fd0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c1fd1  call 0xd87d8
    X86_AT(c, 0xc1fd1u);
    push32(c, 0xc1fd6u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1fd6u);
    X86_TICK(c, 16);
    // 0c1fd6  push dword ptr [0xa604c]
    X86_AT(c, 0xc1fd6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA604Cu))); push32(c, v); }
    // 0c1fdc  push 0x306c
    X86_AT(c, 0xc1fdcu);
    { uint32_t v = 0x306Cu; push32(c, v); }
    // 0c1fe1  push edi
    X86_AT(c, 0xc1fe1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c1fe2  call 0xd87d8
    X86_AT(c, 0xc1fe2u);
    push32(c, 0xc1fe7u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1fe7u);
    X86_TICK(c, 16);
    // 0c1fe7  push dword ptr [0xa6050]
    X86_AT(c, 0xc1fe7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA6050u))); push32(c, v); }
    // 0c1fed  push 0x3078
    X86_AT(c, 0xc1fedu);
    { uint32_t v = 0x3078u; push32(c, v); }
    // 0c1ff2  push edi
    X86_AT(c, 0xc1ff2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c1ff3  call 0xd87d8
    X86_AT(c, 0xc1ff3u);
    push32(c, 0xc1ff8u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc1ff8u);
    X86_TICK(c, 16);
    // 0c1ff8  push dword ptr [0xa6054]
    X86_AT(c, 0xc1ff8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA6054u))); push32(c, v); }
    // 0c1ffe  push 0x3088
    X86_AT(c, 0xc1ffeu);
    { uint32_t v = 0x3088u; push32(c, v); }
    // 0c2003  push edi
    X86_AT(c, 0xc2003u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c2004  call 0xd87d8
    X86_AT(c, 0xc2004u);
    push32(c, 0xc2009u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc2009u);
    X86_TICK(c, 16);
    // 0c2009  push dword ptr [0xa6058]
    X86_AT(c, 0xc2009u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA6058u))); push32(c, v); }
    // 0c200f  push 0x3098
    X86_AT(c, 0xc200fu);
    { uint32_t v = 0x3098u; push32(c, v); }
    // 0c2014  push edi
    X86_AT(c, 0xc2014u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c2015  call 0xd87d8
    X86_AT(c, 0xc2015u);
    push32(c, 0xc201au); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc201au);
    X86_TICK(c, 18);
    // 0c201a  add esp, 0x3c
    X86_AT(c, 0xc201au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c201d  push dword ptr [0xa605c]
    X86_AT(c, 0xc201du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA605Cu))); push32(c, v); }
    // 0c2023  push 0x30a4
    X86_AT(c, 0xc2023u);
    { uint32_t v = 0x30A4u; push32(c, v); }
    // 0c2028  push edi
    X86_AT(c, 0xc2028u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c2029  call 0xd87d8
    X86_AT(c, 0xc2029u);
    push32(c, 0xc202eu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc202eu);
    X86_TICK(c, 16);
    // 0c202e  push dword ptr [0xa6060]
    X86_AT(c, 0xc202eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA6060u))); push32(c, v); }
    // 0c2034  push 0x30b0
    X86_AT(c, 0xc2034u);
    { uint32_t v = 0x30B0u; push32(c, v); }
    // 0c2039  push edi
    X86_AT(c, 0xc2039u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c203a  call 0xd87d8
    X86_AT(c, 0xc203au);
    push32(c, 0xc203fu); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc203fu);
    X86_TICK(c, 16);
    // 0c203f  push dword ptr [0xa6064]
    X86_AT(c, 0xc203fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA6064u))); push32(c, v); }
    // 0c2045  push 0x30c0
    X86_AT(c, 0xc2045u);
    { uint32_t v = 0x30C0u; push32(c, v); }
    // 0c204a  push edi
    X86_AT(c, 0xc204au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c204b  call 0xd87d8
    X86_AT(c, 0xc204bu);
    push32(c, 0xc2050u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc2050u);
    X86_TICK(c, 16);
    // 0c2050  push dword ptr [0xa6068]
    X86_AT(c, 0xc2050u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA6068u))); push32(c, v); }
    // 0c2056  push 0x30d0
    X86_AT(c, 0xc2056u);
    { uint32_t v = 0x30D0u; push32(c, v); }
    // 0c205b  push edi
    X86_AT(c, 0xc205bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c205c  call 0xd87d8
    X86_AT(c, 0xc205cu);
    push32(c, 0xc2061u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc2061u);
    X86_TICK(c, 16);
    // 0c2061  push dword ptr [0xa606c]
    X86_AT(c, 0xc2061u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA606Cu))); push32(c, v); }
    // 0c2067  push 0x30dc
    X86_AT(c, 0xc2067u);
    { uint32_t v = 0x30DCu; push32(c, v); }
    // 0c206c  push edi
    X86_AT(c, 0xc206cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c206d  call 0xd87d8
    X86_AT(c, 0xc206du);
    push32(c, 0xc2072u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc2072u);
    X86_TICK(c, 18);
    // 0c2072  add esp, 0x3c
    X86_AT(c, 0xc2072u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0c2075  push dword ptr [0xa6070]
    X86_AT(c, 0xc2075u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xA6070u))); push32(c, v); }
    // 0c207b  push 0x30e8
    X86_AT(c, 0xc207bu);
    { uint32_t v = 0x30E8u; push32(c, v); }
    // 0c2080  push edi
    X86_AT(c, 0xc2080u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c2081  call 0xd87d8
    X86_AT(c, 0xc2081u);
    push32(c, 0xc2086u); x86_call_known(c, 0xd87d8u, f_000d87d8); X86_RET(c, 0xc2086u);
    X86_TICK(c, 11);
    // 0c2086  add esp, 0xc
    X86_AT(c, 0xc2086u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c2089  push edi
    X86_AT(c, 0xc2089u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c208a  call 0xd84c0
    X86_AT(c, 0xc208au);
    push32(c, 0xc208fu); x86_call_known(c, 0xd84c0u, f_000d84c0); X86_RET(c, 0xc208fu);
    X86_TICK(c, 9);
    // 0c208f  push 2
    X86_AT(c, 0xc208fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c2091  call 0xbbb5c
    X86_AT(c, 0xc2091u);
    push32(c, 0xc2096u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc2096u);
    X86_TICK(c, 4);
    // 0c2096  sub eax, eax
    X86_AT(c, 0xc2096u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c2098  add esp, 8
    X86_AT(c, 0xc2098u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c209b:
    X86_TICK(c, 18);
    // 0c209b  pop edi
    X86_AT(c, 0xc209bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c209c  pop esi
    X86_AT(c, 0xc209cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c209d  ret 
    X86_AT(c, 0xc209du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc1eb0u, "ran off the end of a function");
}
void f_000c20a0(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0c20a0  push ebp
    X86_AT(c, 0xc20a0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c20a1  mov ebp, esp
    X86_AT(c, 0xc20a1u);
    c.r[5] = c.r[4];
    // 0c20a3  sub esp, 0x24
    X86_AT(c, 0xc20a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x24u, 0, 4); }
    // 0c20a6  push ebx
    X86_AT(c, 0xc20a6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c20a7  push esi
    X86_AT(c, 0xc20a7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c20a8  push 2
    X86_AT(c, 0xc20a8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c20aa  call 0xba6b4
    X86_AT(c, 0xc20aau);
    push32(c, 0xc20afu); x86_call_known(c, 0xba6b4u, f_000ba6b4); X86_RET(c, 0xc20afu);
    X86_TICK(c, 27);
    // 0c20af  push 0xd
    X86_AT(c, 0xc20afu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c20b1  push 0xf
    X86_AT(c, 0xc20b1u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c20b3  push 0xb
    X86_AT(c, 0xc20b3u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0c20b5  push 3
    X86_AT(c, 0xc20b5u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c20b7  push 0x27
    X86_AT(c, 0xc20b7u);
    { uint32_t v = 0x27u; push32(c, v); }
    // 0c20b9  push 0x46
    X86_AT(c, 0xc20b9u);
    { uint32_t v = 0x46u; push32(c, v); }
    // 0c20bb  push 0x146
    X86_AT(c, 0xc20bbu);
    { uint32_t v = 0x146u; push32(c, v); }
    // 0c20c0  push 0x15a
    X86_AT(c, 0xc20c0u);
    { uint32_t v = 0x15Au; push32(c, v); }
    // 0c20c5  push 0x9d
    X86_AT(c, 0xc20c5u);
    { uint32_t v = 0x9Du; push32(c, v); }
    // 0c20ca  push 1
    X86_AT(c, 0xc20cau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c20cc  call 0xbb5cc
    X86_AT(c, 0xc20ccu);
    push32(c, 0xc20d1u); x86_call_known(c, 0xbb5ccu, f_000bb5cc); X86_RET(c, 0xc20d1u);
    X86_TICK(c, 9);
    // 0c20d1  push 1
    X86_AT(c, 0xc20d1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c20d3  call 0xbb710
    X86_AT(c, 0xc20d3u);
    push32(c, 0xc20d8u); x86_call_known(c, 0xbb710u, f_000bb710); X86_RET(c, 0xc20d8u);
    X86_TICK(c, 9);
    // 0c20d8  push 1
    X86_AT(c, 0xc20d8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c20da  call 0xbb6b0
    X86_AT(c, 0xc20dau);
    push32(c, 0xc20dfu); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc20dfu);
    X86_TICK(c, 13);
    // 0c20df  push 0
    X86_AT(c, 0xc20dfu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c20e1  push 4
    X86_AT(c, 0xc20e1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c20e3  push 1
    X86_AT(c, 0xc20e3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c20e5  call 0xbc174
    X86_AT(c, 0xc20e5u);
    push32(c, 0xc20eau); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc20eau);
    X86_TICK(c, 13);
    // 0c20ea  add esp, 0x40
    X86_AT(c, 0xc20eau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c20ed  push 0x30f8
    X86_AT(c, 0xc20edu);
    { uint32_t v = 0x30F8u; push32(c, v); }
    // 0c20f2  push 1
    X86_AT(c, 0xc20f2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c20f4  call 0xba428
    X86_AT(c, 0xc20f4u);
    push32(c, 0xc20f9u); x86_call_known(c, 0xba428u, f_000ba428); X86_RET(c, 0xc20f9u);
    X86_TICK(c, 25);
    // 0c20f9  push 0xa6138
    X86_AT(c, 0xc20f9u);
    { uint32_t v = 0xA6138u; push32(c, v); }
    // 0c20fe  push 1
    X86_AT(c, 0xc20feu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2100  push 2
    X86_AT(c, 0xc2100u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c2102  push 1
    X86_AT(c, 0xc2102u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2104  push 0x24
    X86_AT(c, 0xc2104u);
    { uint32_t v = 0x24u; push32(c, v); }
    // 0c2106  push 3
    X86_AT(c, 0xc2106u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c2108  push 1
    X86_AT(c, 0xc2108u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c210a  lea esi, [ebp - 0x24]
    X86_AT(c, 0xc210au);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 0c210d  push esi
    X86_AT(c, 0xc210du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c210e  call 0xb9e9c
    X86_AT(c, 0xc210eu);
    push32(c, 0xc2113u); x86_call_known(c, 0xb9e9cu, f_000b9e9c); X86_RET(c, 0xc2113u);
    X86_TICK(c, 13);
    // 0c2113  push 0x52
    X86_AT(c, 0xc2113u);
    { uint32_t v = 0x52u; push32(c, v); }
    // 0c2115  push esi
    X86_AT(c, 0xc2115u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c2116  push 1
    X86_AT(c, 0xc2116u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2118  call 0xba21c
    X86_AT(c, 0xc2118u);
    push32(c, 0xc211du); x86_call_known(c, 0xba21cu, f_000ba21c); X86_RET(c, 0xc211du);
    X86_TICK(c, 16);
    // 0c211d  xchg ebx, eax
    X86_AT(c, 0xc211du);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c211e  push 0
    X86_AT(c, 0xc211eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c2120  push 0x12
    X86_AT(c, 0xc2120u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0c2122  push 1
    X86_AT(c, 0xc2122u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2124  call 0xbc174
    X86_AT(c, 0xc2124u);
    push32(c, 0xc2129u); x86_call_known(c, 0xbc174u, f_000bc174); X86_RET(c, 0xc2129u);
    X86_TICK(c, 21);
    // 0c2129  add esp, 0x40
    X86_AT(c, 0xc2129u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c212c  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xc212cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0c2130  lea eax, [ebp - 1]
    X86_AT(c, 0xc2130u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0c2133  push eax
    X86_AT(c, 0xc2133u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2134  push ebx
    X86_AT(c, 0xc2134u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c2135  push 3
    X86_AT(c, 0xc2135u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c2137  push 0xa62c4
    X86_AT(c, 0xc2137u);
    { uint32_t v = 0xA62C4u; push32(c, v); }
    // 0c213c  call 0xba1b4
    X86_AT(c, 0xc213cu);
    push32(c, 0xc2141u); x86_call_known(c, 0xba1b4u, f_000ba1b4); X86_RET(c, 0xc2141u);
    X86_TICK(c, 11);
    // 0c2141  push eax
    X86_AT(c, 0xc2141u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c2142  push 1
    X86_AT(c, 0xc2142u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2144  call 0xbbba4
    X86_AT(c, 0xc2144u);
    push32(c, 0xc2149u); x86_call_known(c, 0xbbba4u, f_000bbba4); X86_RET(c, 0xc2149u);
    X86_TICK(c, 9);
    // 0c2149  push 0x14
    X86_AT(c, 0xc2149u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0c214b  call 0xbebbc
    X86_AT(c, 0xc214bu);
    push32(c, 0xc2150u); x86_call_known(c, 0xbebbcu, f_000bebbc); X86_RET(c, 0xc2150u);
    X86_TICK(c, 13);
    // 0c2150  add esp, 0x1c
    X86_AT(c, 0xc2150u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0c2153  push 0
    X86_AT(c, 0xc2153u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c2155  push 1
    X86_AT(c, 0xc2155u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c2157  call 0xbba64
    X86_AT(c, 0xc2157u);
    push32(c, 0xc215cu); x86_call_known(c, 0xbba64u, f_000bba64); X86_RET(c, 0xc215cu);
    X86_TICK(c, 30);
    // 0c215c  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0xc215cu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 0c215f  add esp, 8
    X86_AT(c, 0xc215fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c2162  pop esi
    X86_AT(c, 0xc2162u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c2163  pop ebx
    X86_AT(c, 0xc2163u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c2164  leave 
    X86_AT(c, 0xc2164u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c2165  ret 
    X86_AT(c, 0xc2165u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc20a0u, "ran off the end of a function");
}
void f_000c2168(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0c2168  push ebp
    X86_AT(c, 0xc2168u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c2169  mov ebp, esp
    X86_AT(c, 0xc2169u);
    c.r[5] = c.r[4];
    // 0c216b  sub esp, 8
    X86_AT(c, 0xc216bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0c216e  push esi
    X86_AT(c, 0xc216eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c216f  push edi
    X86_AT(c, 0xc216fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c2170  mov word ptr [0x45660], 0xffff
    X86_AT(c, 0xc2170u);
    wr16((c.sbase[3] + (uint32_t)(0x45660u)), 0xFFFFu);
    // 0c2179  push 0
    X86_AT(c, 0xc2179u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c217b  call 0xbec64
    X86_AT(c, 0xc217bu);
    push32(c, 0xc2180u); x86_call_known(c, 0xbec64u, f_000bec64); X86_RET(c, 0xc2180u);
    X86_TICK(c, 7);
    // 0c2180  call 0xc2383
    X86_AT(c, 0xc2180u);
    push32(c, 0xc2185u); x86_call_known(c, 0xc2383u, f_000c2383); X86_RET(c, 0xc2185u);
    X86_TICK(c, 9);
    // 0c2185  push 0x3118
    X86_AT(c, 0xc2185u);
    { uint32_t v = 0x3118u; push32(c, v); }
    // 0c218a  call 0xbc50c
    X86_AT(c, 0xc218au);
    push32(c, 0xc218fu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc218fu);
    X86_TICK(c, 7);
    // 0c218f  call 0xb51a8
    X86_AT(c, 0xc218fu);
    push32(c, 0xc2194u); x86_call_known(c, 0xb51a8u, f_000b51a8); X86_RET(c, 0xc2194u);
    X86_TICK(c, 7);
    // 0c2194  call 0xbced0
    X86_AT(c, 0xc2194u);
    push32(c, 0xc2199u); x86_call_known(c, 0xbced0u, f_000bced0); X86_RET(c, 0xc2199u);
    X86_TICK(c, 7);
    // 0c2199  call 0xb5ecc
    X86_AT(c, 0xc2199u);
    push32(c, 0xc219eu); x86_call_known(c, 0xb5eccu, f_000b5ecc); X86_RET(c, 0xc219eu);
    X86_TICK(c, 9);
    // 0c219e  mov dword ptr [0xa4a62], 0
    X86_AT(c, 0xc219eu);
    wr32((c.sbase[3] + (uint32_t)(0xA4A62u)), 0x0u);
    // 0c21a8  call 0xc0fa8
    X86_AT(c, 0xc21a8u);
    push32(c, 0xc21adu); x86_call_known(c, 0xc0fa8u, f_000c0fa8); X86_RET(c, 0xc21adu);
    X86_TICK(c, 7);
    // 0c21ad  call 0xbed30
    X86_AT(c, 0xc21adu);
    push32(c, 0xc21b2u); x86_call_known(c, 0xbed30u, f_000bed30); X86_RET(c, 0xc21b2u);
    X86_TICK(c, 7);
    // 0c21b2  call 0xbed54
    X86_AT(c, 0xc21b2u);
    push32(c, 0xc21b7u); x86_call_known(c, 0xbed54u, f_000bed54); X86_RET(c, 0xc21b7u);
    X86_TICK(c, 2);
    // 0c21b7  add esp, 8
    X86_AT(c, 0xc21b7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c21ba:
    X86_TICK(c, 9);
    // 0c21ba  push 2
    X86_AT(c, 0xc21bau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c21bc  call 0xbbb5c
    X86_AT(c, 0xc21bcu);
    push32(c, 0xc21c1u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc21c1u);
    X86_TICK(c, 9);
    // 0c21c1  push 0
    X86_AT(c, 0xc21c1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c21c3  call 0xd8840
    X86_AT(c, 0xc21c3u);
    push32(c, 0xc21c8u); x86_call_known(c, 0xd8840u, f_000d8840); X86_RET(c, 0xc21c8u);
    X86_TICK(c, 15);
    // 0c21c8  push edx
    X86_AT(c, 0xc21c8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c21c9  push eax
    X86_AT(c, 0xc21c9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c21ca  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc21cau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c21cd  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xc21cdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0c21d0  call 0xd9124
    X86_AT(c, 0xc21d0u);
    push32(c, 0xc21d5u); x86_call_known(c, 0xd9124u, f_000d9124); X86_RET(c, 0xc21d5u);
    X86_TICK(c, 7);
    // 0c21d5  call 0xd9000
    X86_AT(c, 0xc21d5u);
    push32(c, 0xc21dau); x86_call_known(c, 0xd9000u, f_000d9000); X86_RET(c, 0xc21dau);
    X86_TICK(c, 9);
    // 0c21da  push eax
    X86_AT(c, 0xc21dau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c21db  call 0xd8918
    X86_AT(c, 0xc21dbu);
    push32(c, 0xc21e0u); x86_call_known(c, 0xd8918u, f_000d8918); X86_RET(c, 0xc21e0u);
    X86_TICK(c, 7);
    // 0c21e0  call 0xc20a0
    X86_AT(c, 0xc21e0u);
    push32(c, 0xc21e5u); x86_call_known(c, 0xc20a0u, f_000c20a0); X86_RET(c, 0xc21e5u);
    X86_TICK(c, 12);
    // 0c21e5  add esp, 0xc
    X86_AT(c, 0xc21e5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c21e8  movzx edx, al
    X86_AT(c, 0xc21e8u);
    c.r[2] = g8(c, 0);
    // 0c21eb  and edx, edx
    X86_AT(c, 0xc21ebu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0c21ed  je 0xc21fb
    X86_AT(c, 0xc21edu);
    if (x86_cc(c, 4)) { goto L_c21fb; }
    X86_TICK(c, 7);
    // 0c21ef  cmp edx, 1
    X86_AT(c, 0xc21efu);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0c21f2  je 0xc220c
    X86_AT(c, 0xc21f2u);
    if (x86_cc(c, 4)) { goto L_c220c; }
    X86_TICK(c, 7);
    // 0c21f4  cmp edx, 2
    X86_AT(c, 0xc21f4u);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0c21f7  jne 0xc21ba
    X86_AT(c, 0xc21f7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc21bau); goto L_c21ba; }
    X86_TICK(c, 7);
    // 0c21f9  jmp 0xc221d
    X86_AT(c, 0xc21f9u);
    goto L_c221d;
L_c21fb:
    X86_TICK(c, 7);
    // 0c21fb  call 0xbecf0
    X86_AT(c, 0xc21fbu);
    push32(c, 0xc2200u); x86_call_known(c, 0xbecf0u, f_000becf0); X86_RET(c, 0xc2200u);
    X86_TICK(c, 9);
    // 0c2200  push 0
    X86_AT(c, 0xc2200u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c2202  call 0xd8a74
    X86_AT(c, 0xc2202u);
    push32(c, 0xc2207u); x86_call_known(c, 0xd8a74u, f_000d8a74); X86_RET(c, 0xc2207u);
    X86_TICK(c, 7);
    // 0c2207  jmp 0xc237b
    X86_AT(c, 0xc2207u);
    goto L_c237b;
L_c220c:
    X86_TICK(c, 7);
    // 0c220c  call 0xc4cf8
    X86_AT(c, 0xc220cu);
    push32(c, 0xc2211u); x86_call_known(c, 0xc4cf8u, f_000c4cf8); X86_RET(c, 0xc2211u);
    X86_TICK(c, 9);
    // 0c2211  push 5
    X86_AT(c, 0xc2211u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2213  call 0xb8888
    X86_AT(c, 0xc2213u);
    push32(c, 0xc2218u); x86_call_known(c, 0xb8888u, f_000b8888); X86_RET(c, 0xc2218u);
    X86_TICK(c, 7);
    // 0c2218  jmp 0xc237b
    X86_AT(c, 0xc2218u);
    goto L_c237b;
L_c221d:
    X86_TICK(c, 2);
    // 0c221d  sub esi, esi
    X86_AT(c, 0xc221du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c221f:
    X86_TICK(c, 11);
    // 0c221f  push 0x3150
    X86_AT(c, 0xc221fu);
    { uint32_t v = 0x3150u; push32(c, v); }
    // 0c2224  push 0
    X86_AT(c, 0xc2224u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c2226  call 0xb6db4
    X86_AT(c, 0xc2226u);
    push32(c, 0xc222bu); x86_call_known(c, 0xb6db4u, f_000b6db4); X86_RET(c, 0xc222bu);
    X86_TICK(c, 12);
    // 0c222b  xchg edi, eax
    X86_AT(c, 0xc222bu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c222c  add esp, 8
    X86_AT(c, 0xc222cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c222f  cmp edi, 0xffffffff
    X86_AT(c, 0xc222fu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c2232  je 0xc223d
    X86_AT(c, 0xc2232u);
    if (x86_cc(c, 4)) { goto L_c223d; }
    X86_TICK(c, 7);
    // 0c2234  and edi, edi
    X86_AT(c, 0xc2234u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c2236  je 0xc223d
    X86_AT(c, 0xc2236u);
    if (x86_cc(c, 4)) { goto L_c223d; }
    X86_TICK(c, 7);
    // 0c2238  cmp edi, 1
    X86_AT(c, 0xc2238u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c223b  jne 0xc221f
    X86_AT(c, 0xc223bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc221fu); goto L_c221f; }
L_c223d:
    X86_TICK(c, 7);
    // 0c223d  cmp edi, 1
    X86_AT(c, 0xc223du);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c2240  je 0xc21ba
    X86_AT(c, 0xc2240u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc21bau); goto L_c21ba; }
    X86_TICK(c, 7);
    // 0c2246  and edi, edi
    X86_AT(c, 0xc2246u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c2248  je 0xc2271
    X86_AT(c, 0xc2248u);
    if (x86_cc(c, 4)) { goto L_c2271; }
    X86_TICK(c, 9);
    // 0c224a  push 3
    X86_AT(c, 0xc224au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c224c  call 0xb607c
    X86_AT(c, 0xc224cu);
    push32(c, 0xc2251u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc2251u);
    X86_TICK(c, 9);
    // 0c2251  push 0x3160
    X86_AT(c, 0xc2251u);
    { uint32_t v = 0x3160u; push32(c, v); }
    // 0c2256  call 0xbc50c
    X86_AT(c, 0xc2256u);
    push32(c, 0xc225bu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc225bu);
    X86_TICK(c, 2);
    // 0c225b  add esp, 8
    X86_AT(c, 0xc225bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c225e:
    X86_TICK(c, 9);
    // 0c225e  push 4
    X86_AT(c, 0xc225eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2260  call 0xb9930
    X86_AT(c, 0xc2260u);
    push32(c, 0xc2265u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc2265u);
    X86_TICK(c, 9);
    // 0c2265  add esp, 4
    X86_AT(c, 0xc2265u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c2268  and al, al
    X86_AT(c, 0xc2268u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c226a  je 0xc225e
    X86_AT(c, 0xc226au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc225eu); goto L_c225e; }
    X86_TICK(c, 7);
    // 0c226c  jmp 0xc2361
    X86_AT(c, 0xc226cu);
    goto L_c2361;
L_c2271:
    X86_TICK(c, 11);
    // 0c2271  push 0x31cc
    X86_AT(c, 0xc2271u);
    { uint32_t v = 0x31CCu; push32(c, v); }
    // 0c2276  push 0
    X86_AT(c, 0xc2276u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c2278  call 0xb6db4
    X86_AT(c, 0xc2278u);
    push32(c, 0xc227du); x86_call_known(c, 0xb6db4u, f_000b6db4); X86_RET(c, 0xc227du);
    X86_TICK(c, 12);
    // 0c227d  xchg edi, eax
    X86_AT(c, 0xc227du);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c227e  add esp, 8
    X86_AT(c, 0xc227eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c2281  cmp edi, 0xffffffff
    X86_AT(c, 0xc2281u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c2284  je 0xc228f
    X86_AT(c, 0xc2284u);
    if (x86_cc(c, 4)) { goto L_c228f; }
    X86_TICK(c, 7);
    // 0c2286  and edi, edi
    X86_AT(c, 0xc2286u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c2288  je 0xc228f
    X86_AT(c, 0xc2288u);
    if (x86_cc(c, 4)) { goto L_c228f; }
    X86_TICK(c, 7);
    // 0c228a  cmp edi, 1
    X86_AT(c, 0xc228au);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c228d  jne 0xc2271
    X86_AT(c, 0xc228du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc2271u); goto L_c2271; }
L_c228f:
    X86_TICK(c, 7);
    // 0c228f  cmp edi, 1
    X86_AT(c, 0xc228fu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c2292  je 0xc21ba
    X86_AT(c, 0xc2292u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc21bau); goto L_c21ba; }
    X86_TICK(c, 7);
    // 0c2298  and edi, edi
    X86_AT(c, 0xc2298u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c229a  je 0xc22c3
    X86_AT(c, 0xc229au);
    if (x86_cc(c, 4)) { goto L_c22c3; }
    X86_TICK(c, 9);
    // 0c229c  push 3
    X86_AT(c, 0xc229cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c229e  call 0xb607c
    X86_AT(c, 0xc229eu);
    push32(c, 0xc22a3u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc22a3u);
    X86_TICK(c, 9);
    // 0c22a3  push 0x31dc
    X86_AT(c, 0xc22a3u);
    { uint32_t v = 0x31DCu; push32(c, v); }
    // 0c22a8  call 0xbc50c
    X86_AT(c, 0xc22a8u);
    push32(c, 0xc22adu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc22adu);
    X86_TICK(c, 2);
    // 0c22ad  add esp, 8
    X86_AT(c, 0xc22adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c22b0:
    X86_TICK(c, 9);
    // 0c22b0  push 4
    X86_AT(c, 0xc22b0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c22b2  call 0xb9930
    X86_AT(c, 0xc22b2u);
    push32(c, 0xc22b7u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc22b7u);
    X86_TICK(c, 9);
    // 0c22b7  add esp, 4
    X86_AT(c, 0xc22b7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c22ba  and al, al
    X86_AT(c, 0xc22bau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c22bc  je 0xc22b0
    X86_AT(c, 0xc22bcu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc22b0u); goto L_c22b0; }
    X86_TICK(c, 7);
    // 0c22be  jmp 0xc2361
    X86_AT(c, 0xc22beu);
    goto L_c2361;
L_c22c3:
    X86_TICK(c, 11);
    // 0c22c3  push 0x3248
    X86_AT(c, 0xc22c3u);
    { uint32_t v = 0x3248u; push32(c, v); }
    // 0c22c8  push 0
    X86_AT(c, 0xc22c8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c22ca  call 0xb6db4
    X86_AT(c, 0xc22cau);
    push32(c, 0xc22cfu); x86_call_known(c, 0xb6db4u, f_000b6db4); X86_RET(c, 0xc22cfu);
    X86_TICK(c, 12);
    // 0c22cf  xchg edi, eax
    X86_AT(c, 0xc22cfu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c22d0  add esp, 8
    X86_AT(c, 0xc22d0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c22d3  cmp edi, 0xffffffff
    X86_AT(c, 0xc22d3u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c22d6  je 0xc22e1
    X86_AT(c, 0xc22d6u);
    if (x86_cc(c, 4)) { goto L_c22e1; }
    X86_TICK(c, 7);
    // 0c22d8  and edi, edi
    X86_AT(c, 0xc22d8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c22da  je 0xc22e1
    X86_AT(c, 0xc22dau);
    if (x86_cc(c, 4)) { goto L_c22e1; }
    X86_TICK(c, 7);
    // 0c22dc  cmp edi, 1
    X86_AT(c, 0xc22dcu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c22df  jne 0xc22c3
    X86_AT(c, 0xc22dfu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc22c3u); goto L_c22c3; }
L_c22e1:
    X86_TICK(c, 7);
    // 0c22e1  cmp edi, 1
    X86_AT(c, 0xc22e1u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c22e4  je 0xc21ba
    X86_AT(c, 0xc22e4u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc21bau); goto L_c21ba; }
    X86_TICK(c, 7);
    // 0c22ea  and edi, edi
    X86_AT(c, 0xc22eau);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c22ec  je 0xc2312
    X86_AT(c, 0xc22ecu);
    if (x86_cc(c, 4)) { goto L_c2312; }
    X86_TICK(c, 9);
    // 0c22ee  push 3
    X86_AT(c, 0xc22eeu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c22f0  call 0xb607c
    X86_AT(c, 0xc22f0u);
    push32(c, 0xc22f5u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc22f5u);
    X86_TICK(c, 9);
    // 0c22f5  push 0x3258
    X86_AT(c, 0xc22f5u);
    { uint32_t v = 0x3258u; push32(c, v); }
    // 0c22fa  call 0xbc50c
    X86_AT(c, 0xc22fau);
    push32(c, 0xc22ffu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc22ffu);
    X86_TICK(c, 2);
    // 0c22ff  add esp, 8
    X86_AT(c, 0xc22ffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c2302:
    X86_TICK(c, 9);
    // 0c2302  push 4
    X86_AT(c, 0xc2302u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2304  call 0xb9930
    X86_AT(c, 0xc2304u);
    push32(c, 0xc2309u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc2309u);
    X86_TICK(c, 9);
    // 0c2309  add esp, 4
    X86_AT(c, 0xc2309u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c230c  and al, al
    X86_AT(c, 0xc230cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c230e  je 0xc2302
    X86_AT(c, 0xc230eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc2302u); goto L_c2302; }
    X86_TICK(c, 7);
    // 0c2310  jmp 0xc2361
    X86_AT(c, 0xc2310u);
    goto L_c2361;
L_c2312:
    X86_TICK(c, 7);
    // 0c2312  call 0xbf3b4
    X86_AT(c, 0xc2312u);
    push32(c, 0xc2317u); x86_call_known(c, 0xbf3b4u, f_000bf3b4); X86_RET(c, 0xc2317u);
    X86_TICK(c, 7);
    // 0c2317  inc eax
    X86_AT(c, 0xc2317u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c2318  je 0xc21ba
    X86_AT(c, 0xc2318u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc21bau); goto L_c21ba; }
    X86_TICK(c, 7);
    // 0c231e  call 0xc01e8
    X86_AT(c, 0xc231eu);
    push32(c, 0xc2323u); x86_call_known(c, 0xc01e8u, f_000c01e8); X86_RET(c, 0xc2323u);
    X86_TICK(c, 7);
    // 0c2323  inc eax
    X86_AT(c, 0xc2323u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c2324  je 0xc21ba
    X86_AT(c, 0xc2324u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc21bau); goto L_c21ba; }
    X86_TICK(c, 7);
    // 0c232a  call 0xbfeb4
    X86_AT(c, 0xc232au);
    push32(c, 0xc232fu); x86_call_known(c, 0xbfeb4u, f_000bfeb4); X86_RET(c, 0xc232fu);
    X86_TICK(c, 7);
    // 0c232f  inc eax
    X86_AT(c, 0xc232fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c2330  je 0xc21ba
    X86_AT(c, 0xc2330u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc21bau); goto L_c21ba; }
    X86_TICK(c, 12);
    // 0c2336  cmp dword ptr [0xa4a62], 4
    X86_AT(c, 0xc2336u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A62u))), 0x4u, 0, 4);
    // 0c233d  je 0xc236a
    X86_AT(c, 0xc233du);
    if (x86_cc(c, 4)) { goto L_c236a; }
    X86_TICK(c, 9);
    // 0c233f  push 3
    X86_AT(c, 0xc233fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c2341  call 0xb607c
    X86_AT(c, 0xc2341u);
    push32(c, 0xc2346u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc2346u);
    X86_TICK(c, 9);
    // 0c2346  push 0x32c4
    X86_AT(c, 0xc2346u);
    { uint32_t v = 0x32C4u; push32(c, v); }
    // 0c234b  call 0xbc50c
    X86_AT(c, 0xc234bu);
    push32(c, 0xc2350u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc2350u);
    X86_TICK(c, 2);
    // 0c2350  add esp, 8
    X86_AT(c, 0xc2350u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c2353:
    X86_TICK(c, 9);
    // 0c2353  push 4
    X86_AT(c, 0xc2353u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2355  call 0xb9930
    X86_AT(c, 0xc2355u);
    push32(c, 0xc235au); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc235au);
    X86_TICK(c, 9);
    // 0c235a  add esp, 4
    X86_AT(c, 0xc235au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c235d  and al, al
    X86_AT(c, 0xc235du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c235f  je 0xc2353
    X86_AT(c, 0xc235fu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc2353u); goto L_c2353; }
L_c2361:
    X86_TICK(c, 9);
    // 0c2361  push 4
    X86_AT(c, 0xc2361u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2363  call 0xbb6b0
    X86_AT(c, 0xc2363u);
    push32(c, 0xc2368u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2368u);
    X86_TICK(c, 7);
    // 0c2368  jmp 0xc237b
    X86_AT(c, 0xc2368u);
    goto L_c237b;
L_c236a:
    X86_TICK(c, 9);
    // 0c236a  push 2
    X86_AT(c, 0xc236au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c236c  call 0xbbb5c
    X86_AT(c, 0xc236cu);
    push32(c, 0xc2371u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc2371u);
    X86_TICK(c, 7);
    // 0c2371  call 0xbea0c
    X86_AT(c, 0xc2371u);
    push32(c, 0xc2376u); x86_call_known(c, 0xbea0cu, f_000bea0c); X86_RET(c, 0xc2376u);
    X86_TICK(c, 7);
    // 0c2376  call 0xbed54
    X86_AT(c, 0xc2376u);
    push32(c, 0xc237bu); x86_call_known(c, 0xbed54u, f_000bed54); X86_RET(c, 0xc237bu);
L_c237b:
    X86_TICK(c, 9);
    // 0c237b  add esp, 4
    X86_AT(c, 0xc237bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c237e  jmp 0xc21ba
    X86_AT(c, 0xc237eu);
    X86_POLL(c, 0xc21bau); goto L_c21ba;
    x86_fault(c, 0xc2168u, "ran off the end of a function");
}
void f_000c2361(X86Cpu& c) {
    goto L_c2361;
L_c21ba:
    X86_TICK(c, 9);
    // 0c21ba  push 2
    X86_AT(c, 0xc21bau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c21bc  call 0xbbb5c
    X86_AT(c, 0xc21bcu);
    push32(c, 0xc21c1u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc21c1u);
    X86_TICK(c, 9);
    // 0c21c1  push 0
    X86_AT(c, 0xc21c1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c21c3  call 0xd8840
    X86_AT(c, 0xc21c3u);
    push32(c, 0xc21c8u); x86_call_known(c, 0xd8840u, f_000d8840); X86_RET(c, 0xc21c8u);
    X86_TICK(c, 15);
    // 0c21c8  push edx
    X86_AT(c, 0xc21c8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c21c9  push eax
    X86_AT(c, 0xc21c9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c21ca  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc21cau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c21cd  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xc21cdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0c21d0  call 0xd9124
    X86_AT(c, 0xc21d0u);
    push32(c, 0xc21d5u); x86_call_known(c, 0xd9124u, f_000d9124); X86_RET(c, 0xc21d5u);
    X86_TICK(c, 7);
    // 0c21d5  call 0xd9000
    X86_AT(c, 0xc21d5u);
    push32(c, 0xc21dau); x86_call_known(c, 0xd9000u, f_000d9000); X86_RET(c, 0xc21dau);
    X86_TICK(c, 9);
    // 0c21da  push eax
    X86_AT(c, 0xc21dau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c21db  call 0xd8918
    X86_AT(c, 0xc21dbu);
    push32(c, 0xc21e0u); x86_call_known(c, 0xd8918u, f_000d8918); X86_RET(c, 0xc21e0u);
    X86_TICK(c, 7);
    // 0c21e0  call 0xc20a0
    X86_AT(c, 0xc21e0u);
    push32(c, 0xc21e5u); x86_call_known(c, 0xc20a0u, f_000c20a0); X86_RET(c, 0xc21e5u);
    X86_TICK(c, 12);
    // 0c21e5  add esp, 0xc
    X86_AT(c, 0xc21e5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c21e8  movzx edx, al
    X86_AT(c, 0xc21e8u);
    c.r[2] = g8(c, 0);
    // 0c21eb  and edx, edx
    X86_AT(c, 0xc21ebu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0c21ed  je 0xc21fb
    X86_AT(c, 0xc21edu);
    if (x86_cc(c, 4)) { goto L_c21fb; }
    X86_TICK(c, 7);
    // 0c21ef  cmp edx, 1
    X86_AT(c, 0xc21efu);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0c21f2  je 0xc220c
    X86_AT(c, 0xc21f2u);
    if (x86_cc(c, 4)) { goto L_c220c; }
    X86_TICK(c, 7);
    // 0c21f4  cmp edx, 2
    X86_AT(c, 0xc21f4u);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0c21f7  jne 0xc21ba
    X86_AT(c, 0xc21f7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc21bau); goto L_c21ba; }
    X86_TICK(c, 7);
    // 0c21f9  jmp 0xc221d
    X86_AT(c, 0xc21f9u);
    goto L_c221d;
L_c21fb:
    X86_TICK(c, 7);
    // 0c21fb  call 0xbecf0
    X86_AT(c, 0xc21fbu);
    push32(c, 0xc2200u); x86_call_known(c, 0xbecf0u, f_000becf0); X86_RET(c, 0xc2200u);
    X86_TICK(c, 9);
    // 0c2200  push 0
    X86_AT(c, 0xc2200u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c2202  call 0xd8a74
    X86_AT(c, 0xc2202u);
    push32(c, 0xc2207u); x86_call_known(c, 0xd8a74u, f_000d8a74); X86_RET(c, 0xc2207u);
    X86_TICK(c, 7);
    // 0c2207  jmp 0xc237b
    X86_AT(c, 0xc2207u);
    goto L_c237b;
L_c220c:
    X86_TICK(c, 7);
    // 0c220c  call 0xc4cf8
    X86_AT(c, 0xc220cu);
    push32(c, 0xc2211u); x86_call_known(c, 0xc4cf8u, f_000c4cf8); X86_RET(c, 0xc2211u);
    X86_TICK(c, 9);
    // 0c2211  push 5
    X86_AT(c, 0xc2211u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0c2213  call 0xb8888
    X86_AT(c, 0xc2213u);
    push32(c, 0xc2218u); x86_call_known(c, 0xb8888u, f_000b8888); X86_RET(c, 0xc2218u);
    X86_TICK(c, 7);
    // 0c2218  jmp 0xc237b
    X86_AT(c, 0xc2218u);
    goto L_c237b;
L_c221d:
    X86_TICK(c, 2);
    // 0c221d  sub esi, esi
    X86_AT(c, 0xc221du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c221f:
    X86_TICK(c, 11);
    // 0c221f  push 0x3150
    X86_AT(c, 0xc221fu);
    { uint32_t v = 0x3150u; push32(c, v); }
    // 0c2224  push 0
    X86_AT(c, 0xc2224u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c2226  call 0xb6db4
    X86_AT(c, 0xc2226u);
    push32(c, 0xc222bu); x86_call_known(c, 0xb6db4u, f_000b6db4); X86_RET(c, 0xc222bu);
    X86_TICK(c, 12);
    // 0c222b  xchg edi, eax
    X86_AT(c, 0xc222bu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c222c  add esp, 8
    X86_AT(c, 0xc222cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c222f  cmp edi, 0xffffffff
    X86_AT(c, 0xc222fu);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c2232  je 0xc223d
    X86_AT(c, 0xc2232u);
    if (x86_cc(c, 4)) { goto L_c223d; }
    X86_TICK(c, 7);
    // 0c2234  and edi, edi
    X86_AT(c, 0xc2234u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c2236  je 0xc223d
    X86_AT(c, 0xc2236u);
    if (x86_cc(c, 4)) { goto L_c223d; }
    X86_TICK(c, 7);
    // 0c2238  cmp edi, 1
    X86_AT(c, 0xc2238u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c223b  jne 0xc221f
    X86_AT(c, 0xc223bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc221fu); goto L_c221f; }
L_c223d:
    X86_TICK(c, 7);
    // 0c223d  cmp edi, 1
    X86_AT(c, 0xc223du);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c2240  je 0xc21ba
    X86_AT(c, 0xc2240u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc21bau); goto L_c21ba; }
    X86_TICK(c, 7);
    // 0c2246  and edi, edi
    X86_AT(c, 0xc2246u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c2248  je 0xc2271
    X86_AT(c, 0xc2248u);
    if (x86_cc(c, 4)) { goto L_c2271; }
    X86_TICK(c, 9);
    // 0c224a  push 3
    X86_AT(c, 0xc224au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c224c  call 0xb607c
    X86_AT(c, 0xc224cu);
    push32(c, 0xc2251u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc2251u);
    X86_TICK(c, 9);
    // 0c2251  push 0x3160
    X86_AT(c, 0xc2251u);
    { uint32_t v = 0x3160u; push32(c, v); }
    // 0c2256  call 0xbc50c
    X86_AT(c, 0xc2256u);
    push32(c, 0xc225bu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc225bu);
    X86_TICK(c, 2);
    // 0c225b  add esp, 8
    X86_AT(c, 0xc225bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c225e:
    X86_TICK(c, 9);
    // 0c225e  push 4
    X86_AT(c, 0xc225eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2260  call 0xb9930
    X86_AT(c, 0xc2260u);
    push32(c, 0xc2265u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc2265u);
    X86_TICK(c, 9);
    // 0c2265  add esp, 4
    X86_AT(c, 0xc2265u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c2268  and al, al
    X86_AT(c, 0xc2268u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c226a  je 0xc225e
    X86_AT(c, 0xc226au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc225eu); goto L_c225e; }
    X86_TICK(c, 7);
    // 0c226c  jmp 0xc2361
    X86_AT(c, 0xc226cu);
    goto L_c2361;
L_c2271:
    X86_TICK(c, 11);
    // 0c2271  push 0x31cc
    X86_AT(c, 0xc2271u);
    { uint32_t v = 0x31CCu; push32(c, v); }
    // 0c2276  push 0
    X86_AT(c, 0xc2276u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c2278  call 0xb6db4
    X86_AT(c, 0xc2278u);
    push32(c, 0xc227du); x86_call_known(c, 0xb6db4u, f_000b6db4); X86_RET(c, 0xc227du);
    X86_TICK(c, 12);
    // 0c227d  xchg edi, eax
    X86_AT(c, 0xc227du);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c227e  add esp, 8
    X86_AT(c, 0xc227eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c2281  cmp edi, 0xffffffff
    X86_AT(c, 0xc2281u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c2284  je 0xc228f
    X86_AT(c, 0xc2284u);
    if (x86_cc(c, 4)) { goto L_c228f; }
    X86_TICK(c, 7);
    // 0c2286  and edi, edi
    X86_AT(c, 0xc2286u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c2288  je 0xc228f
    X86_AT(c, 0xc2288u);
    if (x86_cc(c, 4)) { goto L_c228f; }
    X86_TICK(c, 7);
    // 0c228a  cmp edi, 1
    X86_AT(c, 0xc228au);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c228d  jne 0xc2271
    X86_AT(c, 0xc228du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc2271u); goto L_c2271; }
L_c228f:
    X86_TICK(c, 7);
    // 0c228f  cmp edi, 1
    X86_AT(c, 0xc228fu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c2292  je 0xc21ba
    X86_AT(c, 0xc2292u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc21bau); goto L_c21ba; }
    X86_TICK(c, 7);
    // 0c2298  and edi, edi
    X86_AT(c, 0xc2298u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c229a  je 0xc22c3
    X86_AT(c, 0xc229au);
    if (x86_cc(c, 4)) { goto L_c22c3; }
    X86_TICK(c, 9);
    // 0c229c  push 3
    X86_AT(c, 0xc229cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c229e  call 0xb607c
    X86_AT(c, 0xc229eu);
    push32(c, 0xc22a3u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc22a3u);
    X86_TICK(c, 9);
    // 0c22a3  push 0x31dc
    X86_AT(c, 0xc22a3u);
    { uint32_t v = 0x31DCu; push32(c, v); }
    // 0c22a8  call 0xbc50c
    X86_AT(c, 0xc22a8u);
    push32(c, 0xc22adu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc22adu);
    X86_TICK(c, 2);
    // 0c22ad  add esp, 8
    X86_AT(c, 0xc22adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c22b0:
    X86_TICK(c, 9);
    // 0c22b0  push 4
    X86_AT(c, 0xc22b0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c22b2  call 0xb9930
    X86_AT(c, 0xc22b2u);
    push32(c, 0xc22b7u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc22b7u);
    X86_TICK(c, 9);
    // 0c22b7  add esp, 4
    X86_AT(c, 0xc22b7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c22ba  and al, al
    X86_AT(c, 0xc22bau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c22bc  je 0xc22b0
    X86_AT(c, 0xc22bcu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc22b0u); goto L_c22b0; }
    X86_TICK(c, 7);
    // 0c22be  jmp 0xc2361
    X86_AT(c, 0xc22beu);
    goto L_c2361;
L_c22c3:
    X86_TICK(c, 11);
    // 0c22c3  push 0x3248
    X86_AT(c, 0xc22c3u);
    { uint32_t v = 0x3248u; push32(c, v); }
    // 0c22c8  push 0
    X86_AT(c, 0xc22c8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c22ca  call 0xb6db4
    X86_AT(c, 0xc22cau);
    push32(c, 0xc22cfu); x86_call_known(c, 0xb6db4u, f_000b6db4); X86_RET(c, 0xc22cfu);
    X86_TICK(c, 12);
    // 0c22cf  xchg edi, eax
    X86_AT(c, 0xc22cfu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0c22d0  add esp, 8
    X86_AT(c, 0xc22d0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c22d3  cmp edi, 0xffffffff
    X86_AT(c, 0xc22d3u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0c22d6  je 0xc22e1
    X86_AT(c, 0xc22d6u);
    if (x86_cc(c, 4)) { goto L_c22e1; }
    X86_TICK(c, 7);
    // 0c22d8  and edi, edi
    X86_AT(c, 0xc22d8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c22da  je 0xc22e1
    X86_AT(c, 0xc22dau);
    if (x86_cc(c, 4)) { goto L_c22e1; }
    X86_TICK(c, 7);
    // 0c22dc  cmp edi, 1
    X86_AT(c, 0xc22dcu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c22df  jne 0xc22c3
    X86_AT(c, 0xc22dfu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc22c3u); goto L_c22c3; }
L_c22e1:
    X86_TICK(c, 7);
    // 0c22e1  cmp edi, 1
    X86_AT(c, 0xc22e1u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c22e4  je 0xc21ba
    X86_AT(c, 0xc22e4u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc21bau); goto L_c21ba; }
    X86_TICK(c, 7);
    // 0c22ea  and edi, edi
    X86_AT(c, 0xc22eau);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c22ec  je 0xc2312
    X86_AT(c, 0xc22ecu);
    if (x86_cc(c, 4)) { goto L_c2312; }
    X86_TICK(c, 9);
    // 0c22ee  push 3
    X86_AT(c, 0xc22eeu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c22f0  call 0xb607c
    X86_AT(c, 0xc22f0u);
    push32(c, 0xc22f5u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc22f5u);
    X86_TICK(c, 9);
    // 0c22f5  push 0x3258
    X86_AT(c, 0xc22f5u);
    { uint32_t v = 0x3258u; push32(c, v); }
    // 0c22fa  call 0xbc50c
    X86_AT(c, 0xc22fau);
    push32(c, 0xc22ffu); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc22ffu);
    X86_TICK(c, 2);
    // 0c22ff  add esp, 8
    X86_AT(c, 0xc22ffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c2302:
    X86_TICK(c, 9);
    // 0c2302  push 4
    X86_AT(c, 0xc2302u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2304  call 0xb9930
    X86_AT(c, 0xc2304u);
    push32(c, 0xc2309u); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc2309u);
    X86_TICK(c, 9);
    // 0c2309  add esp, 4
    X86_AT(c, 0xc2309u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c230c  and al, al
    X86_AT(c, 0xc230cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c230e  je 0xc2302
    X86_AT(c, 0xc230eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc2302u); goto L_c2302; }
    X86_TICK(c, 7);
    // 0c2310  jmp 0xc2361
    X86_AT(c, 0xc2310u);
    goto L_c2361;
L_c2312:
    X86_TICK(c, 7);
    // 0c2312  call 0xbf3b4
    X86_AT(c, 0xc2312u);
    push32(c, 0xc2317u); x86_call_known(c, 0xbf3b4u, f_000bf3b4); X86_RET(c, 0xc2317u);
    X86_TICK(c, 7);
    // 0c2317  inc eax
    X86_AT(c, 0xc2317u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c2318  je 0xc21ba
    X86_AT(c, 0xc2318u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc21bau); goto L_c21ba; }
    X86_TICK(c, 7);
    // 0c231e  call 0xc01e8
    X86_AT(c, 0xc231eu);
    push32(c, 0xc2323u); x86_call_known(c, 0xc01e8u, f_000c01e8); X86_RET(c, 0xc2323u);
    X86_TICK(c, 7);
    // 0c2323  inc eax
    X86_AT(c, 0xc2323u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c2324  je 0xc21ba
    X86_AT(c, 0xc2324u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc21bau); goto L_c21ba; }
    X86_TICK(c, 7);
    // 0c232a  call 0xbfeb4
    X86_AT(c, 0xc232au);
    push32(c, 0xc232fu); x86_call_known(c, 0xbfeb4u, f_000bfeb4); X86_RET(c, 0xc232fu);
    X86_TICK(c, 7);
    // 0c232f  inc eax
    X86_AT(c, 0xc232fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c2330  je 0xc21ba
    X86_AT(c, 0xc2330u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc21bau); goto L_c21ba; }
    X86_TICK(c, 12);
    // 0c2336  cmp dword ptr [0xa4a62], 4
    X86_AT(c, 0xc2336u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xA4A62u))), 0x4u, 0, 4);
    // 0c233d  je 0xc236a
    X86_AT(c, 0xc233du);
    if (x86_cc(c, 4)) { goto L_c236a; }
    X86_TICK(c, 9);
    // 0c233f  push 3
    X86_AT(c, 0xc233fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c2341  call 0xb607c
    X86_AT(c, 0xc2341u);
    push32(c, 0xc2346u); x86_call_known(c, 0xb607cu, f_000b607c); X86_RET(c, 0xc2346u);
    X86_TICK(c, 9);
    // 0c2346  push 0x32c4
    X86_AT(c, 0xc2346u);
    { uint32_t v = 0x32C4u; push32(c, v); }
    // 0c234b  call 0xbc50c
    X86_AT(c, 0xc234bu);
    push32(c, 0xc2350u); x86_call_known(c, 0xbc50cu, f_000bc50c); X86_RET(c, 0xc2350u);
    X86_TICK(c, 2);
    // 0c2350  add esp, 8
    X86_AT(c, 0xc2350u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c2353:
    X86_TICK(c, 9);
    // 0c2353  push 4
    X86_AT(c, 0xc2353u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2355  call 0xb9930
    X86_AT(c, 0xc2355u);
    push32(c, 0xc235au); x86_call_known(c, 0xb9930u, f_000b9930); X86_RET(c, 0xc235au);
    X86_TICK(c, 9);
    // 0c235a  add esp, 4
    X86_AT(c, 0xc235au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c235d  and al, al
    X86_AT(c, 0xc235du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c235f  je 0xc2353
    X86_AT(c, 0xc235fu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc2353u); goto L_c2353; }
L_c2361:
    X86_TICK(c, 9);
    // 0c2361  push 4
    X86_AT(c, 0xc2361u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0c2363  call 0xbb6b0
    X86_AT(c, 0xc2363u);
    push32(c, 0xc2368u); x86_call_known(c, 0xbb6b0u, f_000bb6b0); X86_RET(c, 0xc2368u);
    X86_TICK(c, 7);
    // 0c2368  jmp 0xc237b
    X86_AT(c, 0xc2368u);
    goto L_c237b;
L_c236a:
    X86_TICK(c, 9);
    // 0c236a  push 2
    X86_AT(c, 0xc236au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c236c  call 0xbbb5c
    X86_AT(c, 0xc236cu);
    push32(c, 0xc2371u); x86_call_known(c, 0xbbb5cu, f_000bbb5c); X86_RET(c, 0xc2371u);
    X86_TICK(c, 7);
    // 0c2371  call 0xbea0c
    X86_AT(c, 0xc2371u);
    push32(c, 0xc2376u); x86_call_known(c, 0xbea0cu, f_000bea0c); X86_RET(c, 0xc2376u);
    X86_TICK(c, 7);
    // 0c2376  call 0xbed54
    X86_AT(c, 0xc2376u);
    push32(c, 0xc237bu); x86_call_known(c, 0xbed54u, f_000bed54); X86_RET(c, 0xc237bu);
L_c237b:
    X86_TICK(c, 9);
    // 0c237b  add esp, 4
    X86_AT(c, 0xc237bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c237e  jmp 0xc21ba
    X86_AT(c, 0xc237eu);
    X86_POLL(c, 0xc21bau); goto L_c21ba;
    x86_fault(c, 0xc2361u, "ran off the end of a function");
}
}
