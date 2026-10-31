#include "p_game_funcs.h"
namespace p_game {
void f_00100c58(X86Cpu& c) {
    X86_TICK(c, 30);
    // 100c58  enter 4, 0
    X86_AT(c, 0x100c58u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 100c5c  push ebx
    X86_AT(c, 0x100c5cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 100c5d  push esi
    X86_AT(c, 0x100c5du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 100c5e  push edi
    X86_AT(c, 0x100c5eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 100c5f  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0x100c5fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 100c62  mov ebx, edi
    X86_AT(c, 0x100c62u);
    c.r[3] = c.r[7];
    // 100c64  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0x100c64u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 100c68  jne 0x100c7a
    X86_AT(c, 0x100c68u);
    if (x86_cc(c, 5)) { goto L_100c7a; }
    X86_TICK(c, 18);
    // 100c6a  mov ax, 5
    X86_AT(c, 0x100c6au);
    s16(c, 0, 0x5u);
    // 100c6e  mov word ptr [0xe00b6], ax
    X86_AT(c, 0x100c6eu);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), (c.r[0] & 0xFFFFu));
    // 100c74  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x100c74u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 100c78  jmp 0x100cba
    X86_AT(c, 0x100c78u);
    goto L_100cba;
L_100c7a:
    X86_TICK(c, 12);
    // 100c7a  test byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0x100c7au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x80u, 1);
    // 100c7e  je 0x100c86
    X86_AT(c, 0x100c7eu);
    if (x86_cc(c, 4)) { goto L_100c86; }
    X86_TICK(c, 9);
    // 100c80  push edi
    X86_AT(c, 0x100c80u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 100c81  call 0x102558
    X86_AT(c, 0x100c81u);
    push32(c, 0x100c86u); f_00102558(c); X86_RET(c, 0x100c86u);
L_100c86:
    X86_TICK(c, 19);
    // 100c86  and byte ptr [ebx + 0xd], 0xf7
    X86_AT(c, 0x100c86u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xF7u, 1)); }
    // 100c8a  cmp dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x100c8au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 100c8e  jne 0x100c97
    X86_AT(c, 0x100c8eu);
    if (x86_cc(c, 5)) { goto L_100c97; }
    X86_TICK(c, 2);
    // 100c90  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0x100c90u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_100c97:
    X86_TICK(c, 36);
    // 100c97  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x100c97u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 100c9a  imul eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x100c9au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 100c9e  xchg esi, eax
    X86_AT(c, 0x100c9eu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 100c9f  and esi, esi
    X86_AT(c, 0x100c9fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 100ca1  jl 0x100cab
    X86_AT(c, 0x100ca1u);
    if (x86_cc(c, 12)) { goto L_100cab; }
    X86_TICK(c, 7);
    // 100ca3  cmp esi, 0x7fffffff
    X86_AT(c, 0x100ca3u);
    (void)x86_sub(c, c.r[6], 0x7FFFFFFFu, 0, 4);
    // 100ca9  jle 0x100cb6
    X86_AT(c, 0x100ca9u);
    if (x86_cc(c, 14)) { goto L_100cb6; }
L_100cab:
    X86_TICK(c, 9);
    // 100cab  mov word ptr [0xe00b6], 1
    X86_AT(c, 0x100cabu);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), 0x1u);
    // 100cb4  jmp 0x100cba
    X86_AT(c, 0x100cb4u);
    goto L_100cba;
L_100cb6:
    X86_TICK(c, 7);
    // 100cb6  and esi, esi
    X86_AT(c, 0x100cb6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 100cb8  jne 0x100cbe
    X86_AT(c, 0x100cb8u);
    if (x86_cc(c, 5)) { goto L_100cbe; }
L_100cba:
    X86_TICK(c, 9);
    // 100cba  sub eax, eax
    X86_AT(c, 0x100cbau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 100cbc  jmp 0x100cd4
    X86_AT(c, 0x100cbcu);
    goto L_100cd4;
L_100cbe:
    X86_TICK(c, 16);
    // 100cbe  push esi
    X86_AT(c, 0x100cbeu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 100cbf  push dword ptr [ebp + 8]
    X86_AT(c, 0x100cbfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 100cc2  push edi
    X86_AT(c, 0x100cc2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 100cc3  call 0x1007f0
    X86_AT(c, 0x100cc3u);
    push32(c, 0x100cc8u); f_001007f0(c); X86_RET(c, 0x100cc8u);
    X86_TICK(c, 48);
    // 100cc8  mov eax, dword ptr [0xdfc40]
    X86_AT(c, 0x100cc8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFC40u)));
    // 100ccd  cdq 
    X86_AT(c, 0x100ccdu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 100cce  idiv dword ptr [ebp + 0xc]
    X86_AT(c, 0x100cceu);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 4, 0x100cceu);
    // 100cd1  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x100cd1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_100cd4:
    X86_TICK(c, 28);
    // 100cd4  pop edi
    X86_AT(c, 0x100cd4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 100cd5  pop esi
    X86_AT(c, 0x100cd5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 100cd6  pop ebx
    X86_AT(c, 0x100cd6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 100cd7  leave 
    X86_AT(c, 0x100cd7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 100cd8  ret 
    X86_AT(c, 0x100cd8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x100c58u, "ran off the end of a function");
}
void f_00100d00(X86Cpu& c) {
    X86_TICK(c, 67);
    // 100d00  enter 0xc, 0
    X86_AT(c, 0x100d00u);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 100d04  push ebx
    X86_AT(c, 0x100d04u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 100d05  push esi
    X86_AT(c, 0x100d05u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 100d06  push edi
    X86_AT(c, 0x100d06u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 100d07  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0x100d07u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 100d0a  mov esi, dword ptr [ebp + 0x20]
    X86_AT(c, 0x100d0au);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)));
    // 100d0d  mov ax, word ptr [0xe00b6]
    X86_AT(c, 0x100d0du);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE00B6u))));
    // 100d13  mov word ptr [ebp - 0xc], ax
    X86_AT(c, 0x100d13u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (c.r[0] & 0xFFFFu));
    // 100d17  sub eax, eax
    X86_AT(c, 0x100d17u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 100d19  mov word ptr [0xe00b6], ax
    X86_AT(c, 0x100d19u);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), (c.r[0] & 0xFFFFu));
    // 100d1f  mov ebx, eax
    X86_AT(c, 0x100d1fu);
    c.r[3] = c.r[0];
    // 100d21  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x100d21u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 100d24  mov byte ptr [edx], 1
    X86_AT(c, 0x100d24u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), 0x1u);
    // 100d27  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0x100d27u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 100d2a  mov byte ptr [edx], al
    X86_AT(c, 0x100d2au);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 100d2c  mov byte ptr [ebp - 2], al
    X86_AT(c, 0x100d2cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 100d2f  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x100d2fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 100d32  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0x100d32u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 100d35  mov dl, byte ptr [edx]
    X86_AT(c, 0x100d35u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[2]))));
    // 100d37  mov byte ptr [ebp - 9], dl
    X86_AT(c, 0x100d37u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 2));
    // 100d3a  mov byte ptr [esi], al
    X86_AT(c, 0x100d3au);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 0));
    // 100d3c  jmp 0x100db5
    X86_AT(c, 0x100d3cu);
    goto L_100db5;
L_100d41:
    X86_TICK(c, 13);
    // 100d41  movzx edx, byte ptr [ebp - 9]
    X86_AT(c, 0x100d41u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)));
    // 100d45  cmp edx, 0x2b
    X86_AT(c, 0x100d45u);
    (void)x86_sub(c, c.r[2], 0x2Bu, 0, 4);
    // 100d48  je 0x100d8e
    X86_AT(c, 0x100d48u);
    if (x86_cc(c, 4)) { goto L_100d8e; }
    X86_TICK(c, 7);
    // 100d4a  cmp edx, 0x61
    X86_AT(c, 0x100d4au);
    (void)x86_sub(c, c.r[2], 0x61u, 0, 4);
    // 100d4d  je 0x100d68
    X86_AT(c, 0x100d4du);
    if (x86_cc(c, 4)) { goto L_100d68; }
    X86_TICK(c, 7);
    // 100d4f  cmp edx, 0x62
    X86_AT(c, 0x100d4fu);
    (void)x86_sub(c, c.r[2], 0x62u, 0, 4);
    // 100d52  je 0x100d9c
    X86_AT(c, 0x100d52u);
    if (x86_cc(c, 4)) { goto L_100d9c; }
    X86_TICK(c, 7);
    // 100d54  cmp edx, 0x72
    X86_AT(c, 0x100d54u);
    (void)x86_sub(c, c.r[2], 0x72u, 0, 4);
    // 100d57  je 0x100d83
    X86_AT(c, 0x100d57u);
    if (x86_cc(c, 4)) { goto L_100d83; }
    X86_TICK(c, 7);
    // 100d59  cmp edx, 0x74
    X86_AT(c, 0x100d59u);
    (void)x86_sub(c, c.r[2], 0x74u, 0, 4);
    // 100d5c  je 0x100da4
    X86_AT(c, 0x100d5cu);
    if (x86_cc(c, 4)) { goto L_100da4; }
    X86_TICK(c, 7);
    // 100d5e  cmp edx, 0x75
    X86_AT(c, 0x100d5eu);
    (void)x86_sub(c, c.r[2], 0x75u, 0, 4);
    // 100d61  je 0x100d97
    X86_AT(c, 0x100d61u);
    if (x86_cc(c, 4)) { goto L_100d97; }
    X86_TICK(c, 7);
    // 100d63  cmp edx, 0x77
    X86_AT(c, 0x100d63u);
    (void)x86_sub(c, c.r[2], 0x77u, 0, 4);
    // 100d66  jne 0x100dbf
    X86_AT(c, 0x100d66u);
    if (x86_cc(c, 5)) { goto L_100dbf; }
L_100d68:
    X86_TICK(c, 7);
    // 100d68  and bl, bl
    X86_AT(c, 0x100d68u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 100d6a  jne 0x100dbf
    X86_AT(c, 0x100d6au);
    if (x86_cc(c, 5)) { goto L_100dbf; }
    X86_TICK(c, 33);
    // 100d6c  mov bl, 1
    X86_AT(c, 0x100d6cu);
    s8(c, 3, 0x1u);
    // 100d6e  mov byte ptr [edi], bl
    X86_AT(c, 0x100d6eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 3));
    // 100d70  mov al, byte ptr [ebp - 9]
    X86_AT(c, 0x100d70u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))));
    // 100d73  cmp al, 0x61
    X86_AT(c, 0x100d73u);
    (void)x86_sub(c, g8(c, 0), 0x61u, 0, 1);
    // 100d75  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0x100d75u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 100d78  sete byte ptr [edx]
    X86_AT(c, 0x100d78u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), x86_cc(c, 4) ? 1u : 0u);
    // 100d7b  cmp al, 0x77
    X86_AT(c, 0x100d7bu);
    (void)x86_sub(c, g8(c, 0), 0x77u, 0, 1);
    // 100d7d  sete byte ptr [ebp - 2]
    X86_AT(c, 0x100d7du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), x86_cc(c, 4) ? 1u : 0u);
    // 100d81  jmp 0x100daa
    X86_AT(c, 0x100d81u);
    goto L_100daa;
L_100d83:
    X86_TICK(c, 7);
    // 100d83  and bl, bl
    X86_AT(c, 0x100d83u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 100d85  jne 0x100dbf
    X86_AT(c, 0x100d85u);
    if (x86_cc(c, 5)) { goto L_100dbf; }
    X86_TICK(c, 11);
    // 100d87  mov bl, 1
    X86_AT(c, 0x100d87u);
    s8(c, 3, 0x1u);
    // 100d89  mov byte ptr [edi], 0
    X86_AT(c, 0x100d89u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 100d8c  jmp 0x100daa
    X86_AT(c, 0x100d8cu);
    goto L_100daa;
L_100d8e:
    X86_TICK(c, 7);
    // 100d8e  and bl, bl
    X86_AT(c, 0x100d8eu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 100d90  je 0x100dbf
    X86_AT(c, 0x100d90u);
    if (x86_cc(c, 4)) { goto L_100dbf; }
    X86_TICK(c, 9);
    // 100d92  mov byte ptr [edi], 2
    X86_AT(c, 0x100d92u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x2u);
    // 100d95  jmp 0x100daa
    X86_AT(c, 0x100d95u);
    goto L_100daa;
L_100d97:
    X86_TICK(c, 11);
    // 100d97  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x100d97u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 100d9a  jmp 0x100d9f
    X86_AT(c, 0x100d9au);
    goto L_100d9f;
L_100d9c:
    X86_TICK(c, 4);
    // 100d9c  mov eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x100d9cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
L_100d9f:
    X86_TICK(c, 9);
    // 100d9f  mov byte ptr [eax], 0
    X86_AT(c, 0x100d9fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
    // 100da2  jmp 0x100daa
    X86_AT(c, 0x100da2u);
    goto L_100daa;
L_100da4:
    X86_TICK(c, 6);
    // 100da4  mov eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x100da4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 100da7  mov byte ptr [eax], 1
    X86_AT(c, 0x100da7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x1u);
L_100daa:
    X86_TICK(c, 16);
    // 100daa  inc dword ptr [ebp - 8]
    X86_AT(c, 0x100daau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 100dad  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x100dadu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 100db0  mov al, byte ptr [eax]
    X86_AT(c, 0x100db0u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 100db2  mov byte ptr [ebp - 9], al
    X86_AT(c, 0x100db2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
L_100db5:
    X86_TICK(c, 12);
    // 100db5  cmp byte ptr [ebp - 9], 0
    X86_AT(c, 0x100db5u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 100db9  jne 0x100d41
    X86_AT(c, 0x100db9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x100d41u); goto L_100d41; }
    X86_TICK(c, 7);
    // 100dbb  and bl, bl
    X86_AT(c, 0x100dbbu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 100dbd  jne 0x100dca
    X86_AT(c, 0x100dbdu);
    if (x86_cc(c, 5)) { goto L_100dca; }
L_100dbf:
    X86_TICK(c, 9);
    // 100dbf  mov word ptr [0xe00b6], 1
    X86_AT(c, 0x100dbfu);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), 0x1u);
    // 100dc8  jmp 0x100e26
    X86_AT(c, 0x100dc8u);
    goto L_100e26;
L_100dca:
    X86_TICK(c, 12);
    // 100dca  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x100dcau);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 100dce  jne 0x100de4
    X86_AT(c, 0x100dceu);
    if (x86_cc(c, 5)) { goto L_100de4; }
    X86_TICK(c, 29);
    // 100dd0  mov eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x100dd0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 100dd3  cmp byte ptr [eax], 0
    X86_AT(c, 0x100dd3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 100dd6  mov al, byte ptr [edi]
    X86_AT(c, 0x100dd6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 100dd8  push eax
    X86_AT(c, 0x100dd8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100dd9  push dword ptr [ebp + 8]
    X86_AT(c, 0x100dd9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 100ddc  call 0x1033c8
    X86_AT(c, 0x100ddcu);
    push32(c, 0x100de1u); f_001033c8(c); X86_RET(c, 0x100de1u);
    X86_TICK(c, 2);
    // 100de1  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x100de1u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
L_100de4:
    X86_TICK(c, 16);
    // 100de4  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0x100de4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 100de7  cmp byte ptr [eax], 0
    X86_AT(c, 0x100de7u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 100dea  je 0x100df6
    X86_AT(c, 0x100deau);
    if (x86_cc(c, 4)) { goto L_100df6; }
    X86_TICK(c, 12);
    // 100dec  cmp word ptr [0xe00b6], 2
    X86_AT(c, 0x100decu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xE00B6u))), 0x2u, 0, 2);
    // 100df4  je 0x100dfc
    X86_AT(c, 0x100df4u);
    if (x86_cc(c, 4)) { goto L_100dfc; }
L_100df6:
    X86_TICK(c, 12);
    // 100df6  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x100df6u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 100dfa  je 0x100e1c
    X86_AT(c, 0x100dfau);
    if (x86_cc(c, 4)) { goto L_100e1c; }
L_100dfc:
    X86_TICK(c, 20);
    // 100dfc  sub eax, eax
    X86_AT(c, 0x100dfcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 100dfe  mov word ptr [0xe00b6], ax
    X86_AT(c, 0x100dfeu);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), (c.r[0] & 0xFFFFu));
    // 100e04  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x100e04u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 100e07  cmp byte ptr [edx], 0
    X86_AT(c, 0x100e07u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2]))), 0x0u, 0, 1);
    // 100e0a  je 0x100e0f
    X86_AT(c, 0x100e0au);
    if (x86_cc(c, 4)) { goto L_100e0f; }
    X86_TICK(c, 9);
    // 100e0c  push eax
    X86_AT(c, 0x100e0cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100e0d  jmp 0x100e11
    X86_AT(c, 0x100e0du);
    goto L_100e11;
L_100e0f:
    X86_TICK(c, 2);
    // 100e0f  push 0
    X86_AT(c, 0x100e0fu);
    { uint32_t v = 0x0u; push32(c, v); }
L_100e11:
    X86_TICK(c, 12);
    // 100e11  push dword ptr [ebp + 8]
    X86_AT(c, 0x100e11u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 100e14  call 0x1033a0
    X86_AT(c, 0x100e14u);
    push32(c, 0x100e19u); f_001033a0(c); X86_RET(c, 0x100e19u);
    X86_TICK(c, 2);
    // 100e19  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x100e19u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
L_100e1c:
    X86_TICK(c, 12);
    // 100e1c  cmp word ptr [0xe00b6], 0
    X86_AT(c, 0x100e1cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xE00B6u))), 0x0u, 0, 2);
    // 100e24  je 0x100e2b
    X86_AT(c, 0x100e24u);
    if (x86_cc(c, 4)) { goto L_100e2b; }
L_100e26:
    X86_TICK(c, 9);
    // 100e26  mov byte ptr [esi], 1
    X86_AT(c, 0x100e26u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), 0x1u);
    // 100e29  jmp 0x100e35
    X86_AT(c, 0x100e29u);
    goto L_100e35;
L_100e2b:
    X86_TICK(c, 6);
    // 100e2b  mov ax, word ptr [ebp - 0xc]
    X86_AT(c, 0x100e2bu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))));
    // 100e2f  mov word ptr [0xe00b6], ax
    X86_AT(c, 0x100e2fu);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), (c.r[0] & 0xFFFFu));
L_100e35:
    X86_TICK(c, 32);
    // 100e35  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0x100e35u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 100e38  pop edi
    X86_AT(c, 0x100e38u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 100e39  pop esi
    X86_AT(c, 0x100e39u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 100e3a  pop ebx
    X86_AT(c, 0x100e3au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 100e3b  leave 
    X86_AT(c, 0x100e3bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 100e3c  ret 0x1c
    X86_AT(c, 0x100e3cu);
    c.eip = pop32(c); c.r[4] += 0x1Cu; return;
    x86_fault(c, 0x100d00u, "ran off the end of a function");
}
void f_00100e50(X86Cpu& c) {
    X86_TICK(c, 15);
    // 100e50  enter 4, 0
    X86_AT(c, 0x100e50u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 100e54  sub ecx, ecx
    X86_AT(c, 0x100e54u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 100e56  jmp 0x100e6d
    X86_AT(c, 0x100e56u);
    goto L_100e6d;
L_100e58:
    X86_TICK(c, 16);
    // 100e58  lea eax, [ecx + ecx*4]
    X86_AT(c, 0x100e58u);
    c.r[0] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 100e5b  lea eax, [eax*4]
    X86_AT(c, 0x100e5bu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 100e62  cmp word ptr [eax + 0xdfe64], 0
    X86_AT(c, 0x100e62u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0xDFE64u))), 0x0u, 0, 2);
    // 100e6a  je 0x100e72
    X86_AT(c, 0x100e6au);
    if (x86_cc(c, 4)) { goto L_100e72; }
    X86_TICK(c, 2);
    // 100e6c  inc ecx
    X86_AT(c, 0x100e6cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
L_100e6d:
    X86_TICK(c, 7);
    // 100e6d  cmp ecx, 0x19
    X86_AT(c, 0x100e6du);
    (void)x86_sub(c, c.r[1], 0x19u, 0, 4);
    // 100e70  jbe 0x100e58
    X86_AT(c, 0x100e70u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x100e58u); goto L_100e58; }
L_100e72:
    X86_TICK(c, 7);
    // 100e72  cmp ecx, 0x19
    X86_AT(c, 0x100e72u);
    (void)x86_sub(c, c.r[1], 0x19u, 0, 4);
    // 100e75  jbe 0x100e89
    X86_AT(c, 0x100e75u);
    if (x86_cc(c, 6)) { goto L_100e89; }
    X86_TICK(c, 11);
    // 100e77  mov word ptr [0xe00b6], 4
    X86_AT(c, 0x100e77u);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), 0x4u);
    // 100e80  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x100e80u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 100e87  jmp 0x100e9b
    X86_AT(c, 0x100e87u);
    goto L_100e9b;
L_100e89:
    X86_TICK(c, 8);
    // 100e89  lea eax, [ecx + ecx*4]
    X86_AT(c, 0x100e89u);
    c.r[0] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 100e8c  lea eax, [eax*4]
    X86_AT(c, 0x100e8cu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 100e93  add eax, 0xdfe58
    X86_AT(c, 0x100e93u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xDFE58u, 0, 4); }
    // 100e98  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x100e98u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_100e9b:
    X86_TICK(c, 20);
    // 100e9b  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x100e9bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 100e9e  leave 
    X86_AT(c, 0x100e9eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 100e9f  ret 
    X86_AT(c, 0x100e9fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x100e50u, "ran off the end of a function");
}
void f_00100eb0(X86Cpu& c) {
    X86_TICK(c, 30);
    // 100eb0  push ebp
    X86_AT(c, 0x100eb0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 100eb1  mov ebp, esp
    X86_AT(c, 0x100eb1u);
    c.r[5] = c.r[4];
    // 100eb3  push ebx
    X86_AT(c, 0x100eb3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 100eb4  push edi
    X86_AT(c, 0x100eb4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 100eb5  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x100eb5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 100eb8  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0x100eb8u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 100ebb  mov byte ptr [edi + 0xe], al
    X86_AT(c, 0x100ebbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xEu)), g8(c, 0));
    // 100ebe  cmp byte ptr [ebp + 0x10], 0
    X86_AT(c, 0x100ebeu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 100ec2  jne 0x100ecc
    X86_AT(c, 0x100ec2u);
    if (x86_cc(c, 5)) { goto L_100ecc; }
    X86_TICK(c, 9);
    // 100ec4  mov word ptr [edi + 0xc], 2
    X86_AT(c, 0x100ec4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), 0x2u);
    // 100eca  jmp 0x100ee0
    X86_AT(c, 0x100ecau);
    goto L_100ee0;
L_100ecc:
    X86_TICK(c, 12);
    // 100ecc  cmp byte ptr [ebp + 0x10], 1
    X86_AT(c, 0x100eccu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 100ed0  jne 0x100eda
    X86_AT(c, 0x100ed0u);
    if (x86_cc(c, 5)) { goto L_100eda; }
    X86_TICK(c, 9);
    // 100ed2  mov word ptr [edi + 0xc], 4
    X86_AT(c, 0x100ed2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), 0x4u);
    // 100ed8  jmp 0x100ee0
    X86_AT(c, 0x100ed8u);
    goto L_100ee0;
L_100eda:
    X86_TICK(c, 2);
    // 100eda  mov word ptr [edi + 0xc], 6
    X86_AT(c, 0x100edau);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), 0x6u);
L_100ee0:
    X86_TICK(c, 12);
    // 100ee0  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0x100ee0u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 100ee4  je 0x100eea
    X86_AT(c, 0x100ee4u);
    if (x86_cc(c, 4)) { goto L_100eea; }
    X86_TICK(c, 7);
    // 100ee6  or byte ptr [edi + 0xc], 8
    X86_AT(c, 0x100ee6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x8u, 1)); }
L_100eea:
    X86_TICK(c, 12);
    // 100eea  cmp byte ptr [ebp + 0x18], 0
    X86_AT(c, 0x100eeau);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0x0u, 0, 1);
    // 100eee  je 0x100ef4
    X86_AT(c, 0x100eeeu);
    if (x86_cc(c, 4)) { goto L_100ef4; }
    X86_TICK(c, 7);
    // 100ef0  or byte ptr [edi + 0xc], 0x40
    X86_AT(c, 0x100ef0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
L_100ef4:
    X86_TICK(c, 12);
    // 100ef4  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x100ef4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 100ef7  call 0x103ae8
    X86_AT(c, 0x100ef7u);
    push32(c, 0x100efcu); f_00103ae8(c); X86_RET(c, 0x100efcu);
    X86_TICK(c, 10);
    // 100efc  xchg ebx, eax
    X86_AT(c, 0x100efcu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 100efd  cmp bl, 1
    X86_AT(c, 0x100efdu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 100f00  je 0x100f07
    X86_AT(c, 0x100f00u);
    if (x86_cc(c, 4)) { goto L_100f07; }
    X86_TICK(c, 7);
    // 100f02  cmp bl, 2
    X86_AT(c, 0x100f02u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 100f05  jne 0x100f0b
    X86_AT(c, 0x100f05u);
    if (x86_cc(c, 5)) { goto L_100f0b; }
L_100f07:
    X86_TICK(c, 2);
    // 100f07  mov byte ptr [ebp + 0x1c], 0
    X86_AT(c, 0x100f07u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)), 0x0u);
L_100f0b:
    X86_TICK(c, 12);
    // 100f0b  cmp byte ptr [ebp + 0x1c], 0
    X86_AT(c, 0x100f0bu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))), 0x0u, 0, 1);
    // 100f0f  je 0x100f15
    X86_AT(c, 0x100f0fu);
    if (x86_cc(c, 4)) { goto L_100f15; }
    X86_TICK(c, 7);
    // 100f11  or byte ptr [edi + 0xc], 1
    X86_AT(c, 0x100f11u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
L_100f15:
    X86_TICK(c, 12);
    // 100f15  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0x100f15u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 100f19  je 0x100f27
    X86_AT(c, 0x100f19u);
    if (x86_cc(c, 4)) { goto L_100f27; }
    X86_TICK(c, 16);
    // 100f1b  push 2
    X86_AT(c, 0x100f1bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 100f1d  push 0
    X86_AT(c, 0x100f1du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 100f1f  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x100f1fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 100f22  call 0x103b30
    X86_AT(c, 0x100f22u);
    push32(c, 0x100f27u); f_00103b30(c); X86_RET(c, 0x100f27u);
L_100f27:
    X86_TICK(c, 24);
    // 100f27  pop edi
    X86_AT(c, 0x100f27u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 100f28  pop ebx
    X86_AT(c, 0x100f28u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 100f29  leave 
    X86_AT(c, 0x100f29u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 100f2a  ret 0x18
    X86_AT(c, 0x100f2au);
    c.eip = pop32(c); c.r[4] += 0x18u; return;
    x86_fault(c, 0x100eb0u, "ran off the end of a function");
}
void f_00100f34(X86Cpu& c) {
    X86_TICK(c, 63);
    // 100f34  enter 0xc, 0
    X86_AT(c, 0x100f34u);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 100f38  push ebx
    X86_AT(c, 0x100f38u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 100f39  test byte ptr [0xe00e4], 1
    X86_AT(c, 0x100f39u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xE00E4u))) & 0x1u, 1);
    // 100f40  setne al
    X86_AT(c, 0x100f40u);
    s8(c, 0, x86_cc(c, 5) ? 1u : 0u);
    // 100f43  xchg ebx, eax
    X86_AT(c, 0x100f43u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 100f44  xor bl, 1
    X86_AT(c, 0x100f44u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ 0x1u, 1)); }
    // 100f47  mov byte ptr [ebp - 8], bl
    X86_AT(c, 0x100f47u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), g8(c, 3));
    // 100f4a  lea ebx, [ebp - 0xa]
    X86_AT(c, 0x100f4au);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF6u);
    // 100f4d  push ebx
    X86_AT(c, 0x100f4du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 100f4e  lea eax, [ebp - 8]
    X86_AT(c, 0x100f4eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 100f51  push eax
    X86_AT(c, 0x100f51u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100f52  lea eax, [ebp - 7]
    X86_AT(c, 0x100f52u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF9u);
    // 100f55  push eax
    X86_AT(c, 0x100f55u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100f56  lea eax, [ebp - 6]
    X86_AT(c, 0x100f56u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFAu);
    // 100f59  push eax
    X86_AT(c, 0x100f59u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100f5a  lea eax, [ebp - 5]
    X86_AT(c, 0x100f5au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 100f5d  push eax
    X86_AT(c, 0x100f5du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 100f5e  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x100f5eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 100f61  push dword ptr [ebp + 8]
    X86_AT(c, 0x100f61u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 100f64  call 0x100d00
    X86_AT(c, 0x100f64u);
    push32(c, 0x100f69u); f_00100d00(c); X86_RET(c, 0x100f69u);
    X86_TICK(c, 14);
    // 100f69  mov byte ptr [ebp - 9], al
    X86_AT(c, 0x100f69u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
    // 100f6c  cmp byte ptr [ebx], 0
    X86_AT(c, 0x100f6cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3]))), 0x0u, 0, 1);
    // 100f6f  je 0x100f7a
    X86_AT(c, 0x100f6fu);
    if (x86_cc(c, 4)) { goto L_100f7a; }
    X86_TICK(c, 9);
    // 100f71  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x100f71u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 100f78  jmp 0x100f82
    X86_AT(c, 0x100f78u);
    goto L_100f82;
L_100f7a:
    X86_TICK(c, 7);
    // 100f7a  call 0x100e50
    X86_AT(c, 0x100f7au);
    push32(c, 0x100f7fu); f_00100e50(c); X86_RET(c, 0x100f7fu);
    X86_TICK(c, 2);
    // 100f7f  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x100f7fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_100f82:
    X86_TICK(c, 12);
    // 100f82  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x100f82u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 100f86  je 0x100fad
    X86_AT(c, 0x100f86u);
    if (x86_cc(c, 4)) { goto L_100fad; }
    X86_TICK(c, 37);
    // 100f88  push dword ptr [ebp - 5]
    X86_AT(c, 0x100f88u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))); push32(c, v); }
    // 100f8b  push dword ptr [ebp - 8]
    X86_AT(c, 0x100f8bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 100f8e  push dword ptr [ebp - 7]
    X86_AT(c, 0x100f8eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF9u))); push32(c, v); }
    // 100f91  push dword ptr [ebp - 6]
    X86_AT(c, 0x100f91u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))); push32(c, v); }
    // 100f94  push dword ptr [ebp - 9]
    X86_AT(c, 0x100f94u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))); push32(c, v); }
    // 100f97  push dword ptr [ebp - 4]
    X86_AT(c, 0x100f97u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 100f9a  call 0x100eb0
    X86_AT(c, 0x100f9au);
    push32(c, 0x100f9fu); f_00100eb0(c); X86_RET(c, 0x100f9fu);
    X86_TICK(c, 13);
    // 100f9f  mov ebx, dword ptr [ebp - 4]
    X86_AT(c, 0x100f9fu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 100fa2  or byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0x100fa2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
    // 100fa6  mov dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x100fa6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0xFFFFFFFFu);
L_100fad:
    X86_TICK(c, 24);
    // 100fad  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x100fadu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 100fb0  pop ebx
    X86_AT(c, 0x100fb0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 100fb1  leave 
    X86_AT(c, 0x100fb1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 100fb2  ret 
    X86_AT(c, 0x100fb2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x100f34u, "ran off the end of a function");
}
void f_00100fc8(X86Cpu& c) {
    X86_TICK(c, 44);
    // 100fc8  enter 0x14, 0
    X86_AT(c, 0x100fc8u);
    x86_enter(c, 0x14u, 0x0u, 4);
    // 100fcc  push ebx
    X86_AT(c, 0x100fccu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 100fcd  push esi
    X86_AT(c, 0x100fcdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 100fce  push edi
    X86_AT(c, 0x100fceu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 100fcf  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x100fcfu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 100fd2  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x100fd2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 100fd9  mov ax, word ptr [0xe00b6]
    X86_AT(c, 0x100fd9u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE00B6u))));
    // 100fdf  mov word ptr [ebp - 0xa], ax
    X86_AT(c, 0x100fdfu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), (c.r[0] & 0xFFFFu));
    // 100fe3  mov word ptr [0xe00b6], 0
    X86_AT(c, 0x100fe3u);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), 0x0u);
    // 100fec  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x100fecu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 100fef  sub esi, esi
    X86_AT(c, 0x100fefu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 100ff1  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0x100ff1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 100ff5  jne 0x10109f
    X86_AT(c, 0x100ff5u);
    if (x86_cc(c, 5)) { goto L_10109f; }
    X86_TICK(c, 12);
    // 100ffb  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x100ffbu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 100fff  jne 0x101092
    X86_AT(c, 0x100fffu);
    if (x86_cc(c, 5)) { goto L_101092; }
    X86_TICK(c, 20);
    // 101005  push edi
    X86_AT(c, 0x101005u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 101006  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x101006u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 101009  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x101009u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 10100c  push eax
    X86_AT(c, 0x10100cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10100d  call 0x103a84
    X86_AT(c, 0x10100du);
    push32(c, 0x101012u); f_00103a84(c); X86_RET(c, 0x101012u);
    X86_TICK(c, 9);
    // 101012  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x101012u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 101015  jmp 0x101284
    X86_AT(c, 0x101015u);
    goto L_101284;
L_10101a:
    X86_TICK(c, 32);
    // 10101a  mov edx, edi
    X86_AT(c, 0x10101au);
    c.r[2] = c.r[7];
    // 10101c  mov al, 0xa
    X86_AT(c, 0x10101cu);
    s8(c, 0, 0xAu);
    // 10101e  mov ecx, esi
    X86_AT(c, 0x10101eu);
    c.r[1] = c.r[6];
    // 101020  add ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x101020u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 101023  push edi
    X86_AT(c, 0x101023u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 101024  mov edi, ecx
    X86_AT(c, 0x101024u);
    c.r[7] = c.r[1];
    // 101026  mov dword ptr [ebp - 0x14], ecx
    X86_AT(c, 0x101026u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[1]);
    // 101029  mov ecx, edx
    X86_AT(c, 0x101029u);
    c.r[1] = c.r[2];
    // 10102b  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x10102bu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 10102d  jne 0x101032
    X86_AT(c, 0x10102du);
    if (x86_cc(c, 5)) { goto L_101032; }
    X86_TICK(c, 4);
    // 10102f  inc ecx
    X86_AT(c, 0x10102fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 101030  sub edx, ecx
    X86_AT(c, 0x101030u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_101032:
    X86_TICK(c, 13);
    // 101032  pop edi
    X86_AT(c, 0x101032u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 101033  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x101033u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 101037  and dx, dx
    X86_AT(c, 0x101037u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & (c.r[2] & 0xFFFFu), 2)); }
    // 10103a  je 0x101064
    X86_AT(c, 0x10103au);
    if (x86_cc(c, 4)) { goto L_101064; }
    X86_TICK(c, 23);
    // 10103c  movsx edx, dx
    X86_AT(c, 0x10103cu);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 10103f  push edx
    X86_AT(c, 0x10103fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 101040  push dword ptr [ebp - 0x14]
    X86_AT(c, 0x101040u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 101043  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x101043u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 101046  push eax
    X86_AT(c, 0x101046u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 101047  call 0x103a84
    X86_AT(c, 0x101047u);
    push32(c, 0x10104cu); f_00103a84(c); X86_RET(c, 0x10104cu);
    X86_TICK(c, 22);
    // 10104c  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0x10104cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 10104f  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x10104fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 101052  movsx edx, word ptr [ebx + 0x10]
    X86_AT(c, 0x101052u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 101056  cmp edx, eax
    X86_AT(c, 0x101056u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 101058  jne 0x101284
    X86_AT(c, 0x101058u);
    if (x86_cc(c, 5)) { goto L_101284; }
    X86_TICK(c, 12);
    // 10105e  add esi, dword ptr [ebp - 0x10]
    X86_AT(c, 0x10105eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
    // 101061  sub edi, dword ptr [ebp - 0x10]
    X86_AT(c, 0x101061u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
L_101064:
    X86_TICK(c, 7);
    // 101064  and edi, edi
    X86_AT(c, 0x101064u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 101066  jbe 0x101092
    X86_AT(c, 0x101066u);
    if (x86_cc(c, 6)) { goto L_101092; }
    X86_TICK(c, 23);
    // 101068  movzx eax, word ptr [0xdfc2c]
    X86_AT(c, 0x101068u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xDFC2Cu)));
    // 10106f  push eax
    X86_AT(c, 0x10106fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 101070  push 0xdfc2e
    X86_AT(c, 0x101070u);
    { uint32_t v = 0xDFC2Eu; push32(c, v); }
    // 101075  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x101075u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 101078  push eax
    X86_AT(c, 0x101078u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 101079  call 0x103a84
    X86_AT(c, 0x101079u);
    push32(c, 0x10107eu); f_00103a84(c); X86_RET(c, 0x10107eu);
    X86_TICK(c, 13);
    // 10107e  movzx edx, word ptr [0xdfc2c]
    X86_AT(c, 0x10107eu);
    c.r[2] = rd16((c.sbase[3] + (uint32_t)(0xDFC2Cu)));
    // 101085  cmp edx, eax
    X86_AT(c, 0x101085u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 101087  jne 0x101284
    X86_AT(c, 0x101087u);
    if (x86_cc(c, 5)) { goto L_101284; }
    X86_TICK(c, 10);
    // 10108d  inc dword ptr [ebp - 4]
    X86_AT(c, 0x10108du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 101090  inc esi
    X86_AT(c, 0x101090u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 101091  dec edi
    X86_AT(c, 0x101091u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
L_101092:
    X86_TICK(c, 7);
    // 101092  and edi, edi
    X86_AT(c, 0x101092u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 101094  jbe 0x101284
    X86_AT(c, 0x101094u);
    if (x86_cc(c, 6)) { goto L_101284; }
    X86_TICK(c, 7);
    // 10109a  jmp 0x10101a
    X86_AT(c, 0x10109au);
    X86_POLL(c, 0x10101au); goto L_10101a;
L_10109f:
    X86_TICK(c, 12);
    // 10109f  cmp dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x10109fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 1010a3  jne 0x1010ac
    X86_AT(c, 0x1010a3u);
    if (x86_cc(c, 5)) { goto L_1010ac; }
    X86_TICK(c, 2);
    // 1010a5  mov dword ptr [ebx + 4], 0x200
    X86_AT(c, 0x1010a5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x200u);
L_1010ac:
    X86_TICK(c, 12);
    // 1010ac  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x1010acu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 1010b0  jne 0x10127c
    X86_AT(c, 0x1010b0u);
    if (x86_cc(c, 5)) { goto L_10127c; }
    X86_TICK(c, 11);
    // 1010b6  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x1010b6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 1010b9  cmp eax, 0x200
    X86_AT(c, 0x1010b9u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 1010be  jge 0x10111d
    X86_AT(c, 0x1010beu);
    if (x86_cc(c, 13)) { goto L_10111d; }
    X86_TICK(c, 9);
    // 1010c0  mov edx, edi
    X86_AT(c, 0x1010c0u);
    c.r[2] = c.r[7];
    // 1010c2  cmp edx, eax
    X86_AT(c, 0x1010c2u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 1010c4  jl 0x1010c7
    X86_AT(c, 0x1010c4u);
    if (x86_cc(c, 12)) { goto L_1010c7; }
    X86_TICK(c, 3);
    // 1010c6  xchg edx, eax
    X86_AT(c, 0x1010c6u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_1010c7:
    X86_TICK(c, 50);
    // 1010c7  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0x1010c7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 1010ca  mov ecx, edx
    X86_AT(c, 0x1010cau);
    c.r[1] = c.r[2];
    // 1010cc  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x1010ccu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 1010cf  mov edx, dword ptr [ebx]
    X86_AT(c, 0x1010cfu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 1010d1  push esi
    X86_AT(c, 0x1010d1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1010d2  push edi
    X86_AT(c, 0x1010d2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1010d3  mov esi, eax
    X86_AT(c, 0x1010d3u);
    c.r[6] = c.r[0];
    // 1010d5  mov edi, edx
    X86_AT(c, 0x1010d5u);
    c.r[7] = c.r[2];
    // 1010d7  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x1010d7u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 1010d9  pop edi
    X86_AT(c, 0x1010d9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1010da  pop esi
    X86_AT(c, 0x1010dau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1010db  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x1010dbu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 1010de  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0x1010deu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 1010e1  jne 0x10110d
    X86_AT(c, 0x1010e1u);
    if (x86_cc(c, 5)) { goto L_10110d; }
    X86_TICK(c, 20);
    // 1010e3  push 0x200
    X86_AT(c, 0x1010e3u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 1010e8  push dword ptr [ebx + 8]
    X86_AT(c, 0x1010e8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 1010eb  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x1010ebu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 1010ee  push eax
    X86_AT(c, 0x1010eeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1010ef  call 0x103a84
    X86_AT(c, 0x1010efu);
    push32(c, 0x1010f4u); f_00103a84(c); X86_RET(c, 0x1010f4u);
    X86_TICK(c, 7);
    // 1010f4  cmp eax, 0x200
    X86_AT(c, 0x1010f4u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 1010f9  jne 0x101284
    X86_AT(c, 0x1010f9u);
    if (x86_cc(c, 5)) { goto L_101284; }
    X86_TICK(c, 15);
    // 1010ff  mov dword ptr [ebx + 4], 0x200
    X86_AT(c, 0x1010ffu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x200u);
    // 101106  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x101106u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 101109  mov dword ptr [ebx], eax
    X86_AT(c, 0x101109u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 10110b  jmp 0x101115
    X86_AT(c, 0x10110bu);
    goto L_101115;
L_10110d:
    X86_TICK(c, 18);
    // 10110d  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x10110du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 101110  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x101110u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 101113  add dword ptr [ebx], eax
    X86_AT(c, 0x101113u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
L_101115:
    X86_TICK(c, 13);
    // 101115  mov esi, dword ptr [ebp - 8]
    X86_AT(c, 0x101115u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 101118  sub edi, esi
    X86_AT(c, 0x101118u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 10111a  add dword ptr [ebp - 4], esi
    X86_AT(c, 0x10111au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_10111d:
    X86_TICK(c, 7);
    // 10111d  cmp edi, 0x200
    X86_AT(c, 0x10111du);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 101123  jbe 0x101153
    X86_AT(c, 0x101123u);
    if (x86_cc(c, 6)) { goto L_101153; }
    X86_TICK(c, 35);
    // 101125  mov eax, edi
    X86_AT(c, 0x101125u);
    c.r[0] = c.r[7];
    // 101127  shr eax, 9
    X86_AT(c, 0x101127u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 10112a  shl eax, 9
    X86_AT(c, 0x10112au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 10112d  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x10112du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 101130  push eax
    X86_AT(c, 0x101130u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 101131  mov edx, esi
    X86_AT(c, 0x101131u);
    c.r[2] = c.r[6];
    // 101133  add edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x101133u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 101136  push edx
    X86_AT(c, 0x101136u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 101137  mov dl, byte ptr [ebx + 0xe]
    X86_AT(c, 0x101137u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 10113a  push edx
    X86_AT(c, 0x10113au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 10113b  call 0x103a84
    X86_AT(c, 0x10113bu);
    push32(c, 0x101140u); f_00103a84(c); X86_RET(c, 0x101140u);
    X86_TICK(c, 11);
    // 101140  cmp eax, dword ptr [ebp - 8]
    X86_AT(c, 0x101140u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4);
    // 101143  jne 0x101284
    X86_AT(c, 0x101143u);
    if (x86_cc(c, 5)) { goto L_101284; }
    X86_TICK(c, 15);
    // 101149  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x101149u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 10114c  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x10114cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 10114f  add esi, eax
    X86_AT(c, 0x10114fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 101151  sub edi, eax
    X86_AT(c, 0x101151u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
L_101153:
    X86_TICK(c, 7);
    // 101153  and edi, edi
    X86_AT(c, 0x101153u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 101155  jbe 0x101284
    X86_AT(c, 0x101155u);
    if (x86_cc(c, 6)) { goto L_101284; }
    X86_TICK(c, 65);
    // 10115b  mov ecx, edi
    X86_AT(c, 0x10115bu);
    c.r[1] = c.r[7];
    // 10115d  mov eax, esi
    X86_AT(c, 0x10115du);
    c.r[0] = c.r[6];
    // 10115f  add eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x10115fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 101162  mov edx, dword ptr [ebx]
    X86_AT(c, 0x101162u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 101164  push esi
    X86_AT(c, 0x101164u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 101165  push edi
    X86_AT(c, 0x101165u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 101166  mov esi, eax
    X86_AT(c, 0x101166u);
    c.r[6] = c.r[0];
    // 101168  mov edi, edx
    X86_AT(c, 0x101168u);
    c.r[7] = c.r[2];
    // 10116a  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x10116au);
    x86_string(c, 0, 1, 243, 4, 3);
    // 10116c  pop edi
    X86_AT(c, 0x10116cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10116d  pop esi
    X86_AT(c, 0x10116du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 10116e  sub dword ptr [ebx + 4], edi
    X86_AT(c, 0x10116eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 101171  add dword ptr [ebx], edi
    X86_AT(c, 0x101171u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 101173  add dword ptr [ebp - 4], edi
    X86_AT(c, 0x101173u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 101176  jmp 0x101284
    X86_AT(c, 0x101176u);
    goto L_101284;
L_10117b:
    X86_TICK(c, 9);
    // 10117b  mov byte ptr [ebp - 0xc], 0
    X86_AT(c, 0x10117bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
    // 10117f  jmp 0x10122c
    X86_AT(c, 0x10117fu);
    goto L_10122c;
L_101184:
    X86_TICK(c, 11);
    // 101184  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x101184u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 101187  cmp eax, edi
    X86_AT(c, 0x101187u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 101189  jl 0x10118d
    X86_AT(c, 0x101189u);
    if (x86_cc(c, 12)) { goto L_10118d; }
    X86_TICK(c, 2);
    // 10118b  mov eax, edi
    X86_AT(c, 0x10118bu);
    c.r[0] = c.r[7];
L_10118d:
    X86_TICK(c, 31);
    // 10118d  xchg edx, eax
    X86_AT(c, 0x10118du);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 10118e  mov al, 0xa
    X86_AT(c, 0x10118eu);
    s8(c, 0, 0xAu);
    // 101190  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x101190u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 101193  add ecx, esi
    X86_AT(c, 0x101193u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[6], 0, 4); }
    // 101195  push edi
    X86_AT(c, 0x101195u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 101196  mov edi, ecx
    X86_AT(c, 0x101196u);
    c.r[7] = c.r[1];
    // 101198  mov dword ptr [ebp - 0x14], ecx
    X86_AT(c, 0x101198u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[1]);
    // 10119b  mov ecx, edx
    X86_AT(c, 0x10119bu);
    c.r[1] = c.r[2];
    // 10119d  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x10119du);
    x86_string(c, 4, 1, 242, 4, 3);
    // 10119f  jne 0x1011a4
    X86_AT(c, 0x10119fu);
    if (x86_cc(c, 5)) { goto L_1011a4; }
    X86_TICK(c, 4);
    // 1011a1  inc ecx
    X86_AT(c, 0x1011a1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 1011a2  sub edx, ecx
    X86_AT(c, 0x1011a2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_1011a4:
    X86_TICK(c, 83);
    // 1011a4  pop edi
    X86_AT(c, 0x1011a4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1011a5  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x1011a5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 1011a9  mov ecx, edx
    X86_AT(c, 0x1011a9u);
    c.r[1] = c.r[2];
    // 1011ab  movsx ecx, cx
    X86_AT(c, 0x1011abu);
    c.r[1] = (uint32_t)(int32_t)(int16_t)(c.r[1] & 0xFFFFu);
    // 1011ae  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x1011aeu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 1011b1  mov edx, dword ptr [ebx]
    X86_AT(c, 0x1011b1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 1011b3  push esi
    X86_AT(c, 0x1011b3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1011b4  push edi
    X86_AT(c, 0x1011b4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1011b5  mov esi, eax
    X86_AT(c, 0x1011b5u);
    c.r[6] = c.r[0];
    // 1011b7  mov edi, edx
    X86_AT(c, 0x1011b7u);
    c.r[7] = c.r[2];
    // 1011b9  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x1011b9u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 1011bb  pop edi
    X86_AT(c, 0x1011bbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1011bc  pop esi
    X86_AT(c, 0x1011bcu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1011bd  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x1011bdu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 1011c1  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x1011c1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 1011c4  add esi, eax
    X86_AT(c, 0x1011c4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 1011c6  add dword ptr [ebx], eax
    X86_AT(c, 0x1011c6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 1011c8  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x1011c8u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 1011cc  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x1011ccu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 1011cf  mov ecx, edi
    X86_AT(c, 0x1011cfu);
    c.r[1] = c.r[7];
    // 1011d1  cmp ecx, edx
    X86_AT(c, 0x1011d1u);
    (void)x86_sub(c, c.r[1], c.r[2], 0, 4);
    // 1011d3  jl 0x1011d7
    X86_AT(c, 0x1011d3u);
    if (x86_cc(c, 12)) { goto L_1011d7; }
    X86_TICK(c, 2);
    // 1011d5  mov ecx, edx
    X86_AT(c, 0x1011d5u);
    c.r[1] = c.r[2];
L_1011d7:
    X86_TICK(c, 7);
    // 1011d7  cmp ecx, eax
    X86_AT(c, 0x1011d7u);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 1011d9  jle 0x101223
    X86_AT(c, 0x1011d9u);
    if (x86_cc(c, 14)) { goto L_101223; }
    X86_TICK(c, 15);
    // 1011db  sub edx, eax
    X86_AT(c, 0x1011dbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 1011dd  movzx eax, word ptr [0xdfc2c]
    X86_AT(c, 0x1011ddu);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xDFC2Cu)));
    // 1011e4  cmp eax, edx
    X86_AT(c, 0x1011e4u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 1011e6  jle 0x1011f3
    X86_AT(c, 0x1011e6u);
    if (x86_cc(c, 14)) { goto L_1011f3; }
    X86_TICK(c, 15);
    // 1011e8  mov eax, dword ptr [ebx]
    X86_AT(c, 0x1011e8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 1011ea  mov byte ptr [eax], 0xd
    X86_AT(c, 0x1011eau);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0xDu);
    // 1011ed  mov byte ptr [ebp - 0xc], 1
    X86_AT(c, 0x1011edu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x1u);
    // 1011f1  jmp 0x10120b
    X86_AT(c, 0x1011f1u);
    goto L_10120b;
L_1011f3:
    X86_TICK(c, 35);
    // 1011f3  movzx ecx, word ptr [0xdfc2c]
    X86_AT(c, 0x1011f3u);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(0xDFC2Cu)));
    // 1011fa  mov eax, 0xdfc2e
    X86_AT(c, 0x1011fau);
    c.r[0] = 0xDFC2Eu;
    // 1011ff  mov edx, dword ptr [ebx]
    X86_AT(c, 0x1011ffu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 101201  push esi
    X86_AT(c, 0x101201u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 101202  push edi
    X86_AT(c, 0x101202u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 101203  mov esi, eax
    X86_AT(c, 0x101203u);
    c.r[6] = c.r[0];
    // 101205  mov edi, edx
    X86_AT(c, 0x101205u);
    c.r[7] = c.r[2];
    // 101207  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x101207u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 101209  pop edi
    X86_AT(c, 0x101209u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10120a  pop esi
    X86_AT(c, 0x10120au);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_10120b:
    X86_TICK(c, 36);
    // 10120b  inc dword ptr [ebp - 4]
    X86_AT(c, 0x10120bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 10120e  inc esi
    X86_AT(c, 0x10120eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 10120f  dec edi
    X86_AT(c, 0x10120fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 101210  movzx eax, word ptr [0xdfc2c]
    X86_AT(c, 0x101210u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xDFC2Cu)));
    // 101217  add dword ptr [ebx], eax
    X86_AT(c, 0x101217u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 101219  movzx eax, word ptr [0xdfc2c]
    X86_AT(c, 0x101219u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xDFC2Cu)));
    // 101220  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x101220u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
L_101223:
    X86_TICK(c, 15);
    // 101223  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x101223u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 101227  sub edi, eax
    X86_AT(c, 0x101227u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 101229  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x101229u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
L_10122c:
    X86_TICK(c, 12);
    // 10122c  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x10122cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 101230  jle 0x10123a
    X86_AT(c, 0x101230u);
    if (x86_cc(c, 14)) { goto L_10123a; }
    X86_TICK(c, 7);
    // 101232  and edi, edi
    X86_AT(c, 0x101232u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 101234  ja 0x101184
    X86_AT(c, 0x101234u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x101184u); goto L_101184; }
L_10123a:
    X86_TICK(c, 7);
    // 10123a  and edi, edi
    X86_AT(c, 0x10123au);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 10123c  ja 0x101248
    X86_AT(c, 0x10123cu);
    if (x86_cc(c, 7)) { goto L_101248; }
    X86_TICK(c, 7);
    // 10123e  and edi, edi
    X86_AT(c, 0x10123eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 101240  jne 0x10126c
    X86_AT(c, 0x101240u);
    if (x86_cc(c, 5)) { goto L_10126c; }
    X86_TICK(c, 12);
    // 101242  cmp byte ptr [ebp - 0xc], 0
    X86_AT(c, 0x101242u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x0u, 0, 1);
    // 101246  je 0x10126c
    X86_AT(c, 0x101246u);
    if (x86_cc(c, 4)) { goto L_10126c; }
L_101248:
    X86_TICK(c, 20);
    // 101248  push 0x200
    X86_AT(c, 0x101248u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 10124d  push dword ptr [ebx + 8]
    X86_AT(c, 0x10124du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 101250  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x101250u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 101253  push eax
    X86_AT(c, 0x101253u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 101254  call 0x103a84
    X86_AT(c, 0x101254u);
    push32(c, 0x101259u); f_00103a84(c); X86_RET(c, 0x101259u);
    X86_TICK(c, 7);
    // 101259  cmp eax, 0x200
    X86_AT(c, 0x101259u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 10125e  jne 0x101284
    X86_AT(c, 0x10125eu);
    if (x86_cc(c, 5)) { goto L_101284; }
    X86_TICK(c, 8);
    // 101260  mov dword ptr [ebx + 4], 0x200
    X86_AT(c, 0x101260u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x200u);
    // 101267  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x101267u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 10126a  mov dword ptr [ebx], eax
    X86_AT(c, 0x10126au);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_10126c:
    X86_TICK(c, 12);
    // 10126c  cmp byte ptr [ebp - 0xc], 0
    X86_AT(c, 0x10126cu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x0u, 0, 1);
    // 101270  je 0x10127c
    X86_AT(c, 0x101270u);
    if (x86_cc(c, 4)) { goto L_10127c; }
    X86_TICK(c, 18);
    // 101272  mov eax, dword ptr [ebx]
    X86_AT(c, 0x101272u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 101274  mov byte ptr [eax], 0xa
    X86_AT(c, 0x101274u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0xAu);
    // 101277  inc dword ptr [ebx]
    X86_AT(c, 0x101277u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 101279  dec dword ptr [ebx + 4]
    X86_AT(c, 0x101279u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_10127c:
    X86_TICK(c, 7);
    // 10127c  and edi, edi
    X86_AT(c, 0x10127cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 10127e  ja 0x10117b
    X86_AT(c, 0x10127eu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10117bu); goto L_10117b; }
L_101284:
    X86_TICK(c, 12);
    // 101284  cmp word ptr [0xe00b6], 0
    X86_AT(c, 0x101284u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xE00B6u))), 0x0u, 0, 2);
    // 10128c  je 0x101294
    X86_AT(c, 0x10128cu);
    if (x86_cc(c, 4)) { goto L_101294; }
    X86_TICK(c, 14);
    // 10128e  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x10128eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 101292  jmp 0x10129e
    X86_AT(c, 0x101292u);
    goto L_10129e;
L_101294:
    X86_TICK(c, 6);
    // 101294  mov ax, word ptr [ebp - 0xa]
    X86_AT(c, 0x101294u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u))));
    // 101298  mov word ptr [0xe00b6], ax
    X86_AT(c, 0x101298u);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), (c.r[0] & 0xFFFFu));
L_10129e:
    X86_TICK(c, 32);
    // 10129e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x10129eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 1012a1  pop edi
    X86_AT(c, 0x1012a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1012a2  pop esi
    X86_AT(c, 0x1012a2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1012a3  pop ebx
    X86_AT(c, 0x1012a3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 1012a4  leave 
    X86_AT(c, 0x1012a4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1012a5  ret 0xc
    X86_AT(c, 0x1012a5u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x100fc8u, "ran off the end of a function");
}
void f_00101284(X86Cpu& c) {
    X86_TICK(c, 12);
    // 101284  cmp word ptr [0xe00b6], 0
    X86_AT(c, 0x101284u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xE00B6u))), 0x0u, 0, 2);
    // 10128c  je 0x101294
    X86_AT(c, 0x10128cu);
    if (x86_cc(c, 4)) { goto L_101294; }
    X86_TICK(c, 14);
    // 10128e  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x10128eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 101292  jmp 0x10129e
    X86_AT(c, 0x101292u);
    goto L_10129e;
L_101294:
    X86_TICK(c, 6);
    // 101294  mov ax, word ptr [ebp - 0xa]
    X86_AT(c, 0x101294u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u))));
    // 101298  mov word ptr [0xe00b6], ax
    X86_AT(c, 0x101298u);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), (c.r[0] & 0xFFFFu));
L_10129e:
    X86_TICK(c, 32);
    // 10129e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x10129eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 1012a1  pop edi
    X86_AT(c, 0x1012a1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1012a2  pop esi
    X86_AT(c, 0x1012a2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1012a3  pop ebx
    X86_AT(c, 0x1012a3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 1012a4  leave 
    X86_AT(c, 0x1012a4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1012a5  ret 0xc
    X86_AT(c, 0x1012a5u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x101284u, "ran off the end of a function");
}
void f_001012b0(X86Cpu& c) {
    X86_TICK(c, 30);
    // 1012b0  enter 4, 0
    X86_AT(c, 0x1012b0u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 1012b4  push ebx
    X86_AT(c, 0x1012b4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 1012b5  push esi
    X86_AT(c, 0x1012b5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1012b6  push edi
    X86_AT(c, 0x1012b6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1012b7  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0x1012b7u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 1012ba  mov ebx, edi
    X86_AT(c, 0x1012bau);
    c.r[3] = c.r[7];
    // 1012bc  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0x1012bcu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 1012c0  jne 0x1012d2
    X86_AT(c, 0x1012c0u);
    if (x86_cc(c, 5)) { goto L_1012d2; }
    X86_TICK(c, 18);
    // 1012c2  mov ax, 5
    X86_AT(c, 0x1012c2u);
    s16(c, 0, 0x5u);
    // 1012c6  mov word ptr [0xe00b6], ax
    X86_AT(c, 0x1012c6u);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), (c.r[0] & 0xFFFFu));
    // 1012cc  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x1012ccu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 1012d0  jmp 0x101305
    X86_AT(c, 0x1012d0u);
    goto L_101305;
L_1012d2:
    X86_TICK(c, 12);
    // 1012d2  test byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0x1012d2u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x80u, 1);
    // 1012d6  je 0x1012de
    X86_AT(c, 0x1012d6u);
    if (x86_cc(c, 4)) { goto L_1012de; }
    X86_TICK(c, 9);
    // 1012d8  push edi
    X86_AT(c, 0x1012d8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1012d9  call 0x102558
    X86_AT(c, 0x1012d9u);
    push32(c, 0x1012deu); f_00102558(c); X86_RET(c, 0x1012deu);
L_1012de:
    X86_TICK(c, 43);
    // 1012de  or byte ptr [ebx + 0xd], 8
    X86_AT(c, 0x1012deu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x8u, 1)); }
    // 1012e2  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x1012e2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 1012e5  imul eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x1012e5u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 1012e9  xchg esi, eax
    X86_AT(c, 0x1012e9u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 1012ea  and esi, esi
    X86_AT(c, 0x1012eau);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 1012ec  jl 0x1012f6
    X86_AT(c, 0x1012ecu);
    if (x86_cc(c, 12)) { goto L_1012f6; }
    X86_TICK(c, 7);
    // 1012ee  cmp esi, 0x7fffffff
    X86_AT(c, 0x1012eeu);
    (void)x86_sub(c, c.r[6], 0x7FFFFFFFu, 0, 4);
    // 1012f4  jle 0x101301
    X86_AT(c, 0x1012f4u);
    if (x86_cc(c, 14)) { goto L_101301; }
L_1012f6:
    X86_TICK(c, 9);
    // 1012f6  mov word ptr [0xe00b6], 1
    X86_AT(c, 0x1012f6u);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), 0x1u);
    // 1012ff  jmp 0x101305
    X86_AT(c, 0x1012ffu);
    goto L_101305;
L_101301:
    X86_TICK(c, 7);
    // 101301  and esi, esi
    X86_AT(c, 0x101301u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 101303  jne 0x101309
    X86_AT(c, 0x101303u);
    if (x86_cc(c, 5)) { goto L_101309; }
L_101305:
    X86_TICK(c, 9);
    // 101305  sub eax, eax
    X86_AT(c, 0x101305u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 101307  jmp 0x10134a
    X86_AT(c, 0x101307u);
    goto L_10134a;
L_101309:
    X86_TICK(c, 12);
    // 101309  test byte ptr [ebx + 0xc], 8
    X86_AT(c, 0x101309u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x8u, 1);
    // 10130d  je 0x10131c
    X86_AT(c, 0x10130du);
    if (x86_cc(c, 4)) { goto L_10131c; }
    X86_TICK(c, 17);
    // 10130f  push 2
    X86_AT(c, 0x10130fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 101311  push 0
    X86_AT(c, 0x101311u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 101313  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x101313u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 101316  push eax
    X86_AT(c, 0x101316u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 101317  call 0x103b30
    X86_AT(c, 0x101317u);
    push32(c, 0x10131cu); f_00103b30(c); X86_RET(c, 0x10131cu);
L_10131c:
    X86_TICK(c, 16);
    // 10131c  push esi
    X86_AT(c, 0x10131cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 10131d  push dword ptr [ebp + 8]
    X86_AT(c, 0x10131du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 101320  push edi
    X86_AT(c, 0x101320u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 101321  call 0x100fc8
    X86_AT(c, 0x101321u);
    push32(c, 0x101326u); f_00100fc8(c); X86_RET(c, 0x101326u);
    X86_TICK(c, 56);
    // 101326  cdq 
    X86_AT(c, 0x101326u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 101327  idiv dword ptr [ebp + 0xc]
    X86_AT(c, 0x101327u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 4, 0x101327u);
    // 10132a  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x10132au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 10132d  test byte ptr [ebx + 0xc], 8
    X86_AT(c, 0x10132du);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x8u, 1);
    // 101331  je 0x101347
    X86_AT(c, 0x101331u);
    if (x86_cc(c, 4)) { goto L_101347; }
    X86_TICK(c, 9);
    // 101333  push edi
    X86_AT(c, 0x101333u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 101334  call 0x101364
    X86_AT(c, 0x101334u);
    push32(c, 0x101339u); f_00101364(c); X86_RET(c, 0x101339u);
    X86_TICK(c, 21);
    // 101339  pop ecx
    X86_AT(c, 0x101339u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 10133a  push 2
    X86_AT(c, 0x10133au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 10133c  push 0
    X86_AT(c, 0x10133cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 10133e  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x10133eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 101341  push eax
    X86_AT(c, 0x101341u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 101342  call 0x103b30
    X86_AT(c, 0x101342u);
    push32(c, 0x101347u); f_00103b30(c); X86_RET(c, 0x101347u);
L_101347:
    X86_TICK(c, 4);
    // 101347  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x101347u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_10134a:
    X86_TICK(c, 28);
    // 10134a  pop edi
    X86_AT(c, 0x10134au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10134b  pop esi
    X86_AT(c, 0x10134bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 10134c  pop ebx
    X86_AT(c, 0x10134cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 10134d  leave 
    X86_AT(c, 0x10134du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 10134e  ret 
    X86_AT(c, 0x10134eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1012b0u, "ran off the end of a function");
}
void f_00101364(X86Cpu& c) {
    X86_TICK(c, 24);
    // 101364  enter 4, 0
    X86_AT(c, 0x101364u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 101368  push edi
    X86_AT(c, 0x101368u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 101369  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x101369u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 10136c  test byte ptr [edi + 0xc], 4
    X86_AT(c, 0x10136cu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x4u, 1);
    // 101370  jne 0x101389
    X86_AT(c, 0x101370u);
    if (x86_cc(c, 5)) { goto L_101389; }
    X86_TICK(c, 15);
    // 101372  mov ax, 1
    X86_AT(c, 0x101372u);
    s16(c, 0, 0x1u);
    // 101376  mov word ptr [0xe00b6], ax
    X86_AT(c, 0x101376u);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), (c.r[0] & 0xFFFFu));
    // 10137c  mov eax, 1
    X86_AT(c, 0x10137cu);
    c.r[0] = 0x1u;
    // 101381  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x101381u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 101384  jmp 0x101420
    X86_AT(c, 0x101384u);
    goto L_101420;
L_101389:
    X86_TICK(c, 12);
    // 101389  test byte ptr [edi + 0xd], 8
    X86_AT(c, 0x101389u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))) & 0x8u, 1);
    // 10138d  je 0x10139b
    X86_AT(c, 0x10138du);
    if (x86_cc(c, 4)) { goto L_10139b; }
    X86_TICK(c, 12);
    // 10138f  cmp dword ptr [edi + 4], 0xffffffff
    X86_AT(c, 0x10138fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 101393  je 0x10139b
    X86_AT(c, 0x101393u);
    if (x86_cc(c, 4)) { goto L_10139b; }
    X86_TICK(c, 12);
    // 101395  test byte ptr [edi + 0xc], 0x80
    X86_AT(c, 0x101395u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x80u, 1);
    // 101399  je 0x1013a2
    X86_AT(c, 0x101399u);
    if (x86_cc(c, 4)) { goto L_1013a2; }
L_10139b:
    X86_TICK(c, 9);
    // 10139b  sub eax, eax
    X86_AT(c, 0x10139bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 10139d  jmp 0x101423
    X86_AT(c, 0x10139du);
    goto L_101423;
L_1013a2:
    X86_TICK(c, 12);
    // 1013a2  test byte ptr [edi + 0xc], 1
    X86_AT(c, 0x1013a2u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x1u, 1);
    // 1013a6  je 0x101419
    X86_AT(c, 0x1013a6u);
    if (x86_cc(c, 4)) { goto L_101419; }
    X86_TICK(c, 12);
    // 1013ac  cmp dword ptr [edi + 4], 0x200
    X86_AT(c, 0x1013acu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0x200u, 0, 4);
    // 1013b3  jge 0x101419
    X86_AT(c, 0x1013b3u);
    if (x86_cc(c, 13)) { goto L_101419; }
    X86_TICK(c, 12);
    // 1013b5  test byte ptr [edi + 0xc], 8
    X86_AT(c, 0x1013b5u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x8u, 1);
    // 1013b9  je 0x1013c8
    X86_AT(c, 0x1013b9u);
    if (x86_cc(c, 4)) { goto L_1013c8; }
    X86_TICK(c, 17);
    // 1013bb  push 2
    X86_AT(c, 0x1013bbu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 1013bd  push 0
    X86_AT(c, 0x1013bdu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 1013bf  mov al, byte ptr [edi + 0xe]
    X86_AT(c, 0x1013bfu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xEu))));
    // 1013c2  push eax
    X86_AT(c, 0x1013c2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1013c3  call 0x103b30
    X86_AT(c, 0x1013c3u);
    push32(c, 0x1013c8u); f_00103b30(c); X86_RET(c, 0x1013c8u);
L_1013c8:
    X86_TICK(c, 28);
    // 1013c8  mov eax, 0x200
    X86_AT(c, 0x1013c8u);
    c.r[0] = 0x200u;
    // 1013cd  sub eax, dword ptr [edi + 4]
    X86_AT(c, 0x1013cdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4); }
    // 1013d0  push eax
    X86_AT(c, 0x1013d0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1013d1  push dword ptr [edi + 8]
    X86_AT(c, 0x1013d1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))); push32(c, v); }
    // 1013d4  mov al, byte ptr [edi + 0xe]
    X86_AT(c, 0x1013d4u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xEu))));
    // 1013d7  push eax
    X86_AT(c, 0x1013d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1013d8  call 0x103a84
    X86_AT(c, 0x1013d8u);
    push32(c, 0x1013ddu); f_00103a84(c); X86_RET(c, 0x1013ddu);
    X86_TICK(c, 17);
    // 1013dd  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x1013ddu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 1013e0  mov edx, 0x200
    X86_AT(c, 0x1013e0u);
    c.r[2] = 0x200u;
    // 1013e5  sub edx, dword ptr [edi + 4]
    X86_AT(c, 0x1013e5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4); }
    // 1013e8  cmp edx, eax
    X86_AT(c, 0x1013e8u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 1013ea  jne 0x1013f5
    X86_AT(c, 0x1013eau);
    if (x86_cc(c, 5)) { goto L_1013f5; }
    X86_TICK(c, 9);
    // 1013ec  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x1013ecu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 1013f3  jmp 0x10140b
    X86_AT(c, 0x1013f3u);
    goto L_10140b;
L_1013f5:
    X86_TICK(c, 15);
    // 1013f5  mov ax, 0x15
    X86_AT(c, 0x1013f5u);
    s16(c, 0, 0x15u);
    // 1013f9  mov word ptr [0xe00b6], ax
    X86_AT(c, 0x1013f9u);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), (c.r[0] & 0xFFFFu));
    // 1013ff  mov eax, 0x15
    X86_AT(c, 0x1013ffu);
    c.r[0] = 0x15u;
    // 101404  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x101404u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 101407  or byte ptr [edi + 0xc], 0x20
    X86_AT(c, 0x101407u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
L_10140b:
    X86_TICK(c, 15);
    // 10140b  mov eax, dword ptr [edi + 8]
    X86_AT(c, 0x10140bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)));
    // 10140e  mov dword ptr [edi], eax
    X86_AT(c, 0x10140eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 101410  mov dword ptr [edi + 4], 0x200
    X86_AT(c, 0x101410u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), 0x200u);
    // 101417  jmp 0x101420
    X86_AT(c, 0x101417u);
    goto L_101420;
L_101419:
    X86_TICK(c, 2);
    // 101419  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x101419u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_101420:
    X86_TICK(c, 4);
    // 101420  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x101420u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_101423:
    X86_TICK(c, 20);
    // 101423  pop edi
    X86_AT(c, 0x101423u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 101424  leave 
    X86_AT(c, 0x101424u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 101425  ret 
    X86_AT(c, 0x101425u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101364u, "ran off the end of a function");
}
void f_00101430(X86Cpu& c) {
    X86_TICK(c, 80);
    // 101430  enter 4, 0
    X86_AT(c, 0x101430u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 101434  push ebx
    X86_AT(c, 0x101434u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 101435  push esi
    X86_AT(c, 0x101435u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 101436  push edi
    X86_AT(c, 0x101436u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 101437  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x101437u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 10143a  sub eax, eax
    X86_AT(c, 0x10143au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 10143c  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x10143cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 10143f  mov eax, edi
    X86_AT(c, 0x10143fu);
    c.r[0] = c.r[7];
    // 101441  mov edx, 0xdfe58
    X86_AT(c, 0x101441u);
    c.r[2] = 0xDFE58u;
    // 101446  sub eax, edx
    X86_AT(c, 0x101446u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 101448  cdq 
    X86_AT(c, 0x101448u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 101449  mov ecx, 0x12
    X86_AT(c, 0x101449u);
    c.r[1] = 0x12u;
    // 10144e  idiv ecx
    X86_AT(c, 0x10144eu);
    x86_idiv(c, c.r[1], 4, 0x10144eu);
    // 101450  xchg esi, eax
    X86_AT(c, 0x101450u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 101451  and esi, esi
    X86_AT(c, 0x101451u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 101453  jl 0x1014a7
    X86_AT(c, 0x101453u);
    if (x86_cc(c, 12)) { goto L_1014a7; }
    X86_TICK(c, 7);
    // 101455  cmp esi, 0x19
    X86_AT(c, 0x101455u);
    (void)x86_sub(c, c.r[6], 0x19u, 0, 4);
    // 101458  jg 0x1014a7
    X86_AT(c, 0x101458u);
    if (x86_cc(c, 15)) { goto L_1014a7; }
    X86_TICK(c, 12);
    // 10145a  cmp word ptr [edi + 0xc], 0
    X86_AT(c, 0x10145au);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))), 0x0u, 0, 2);
    // 10145f  je 0x1014a7
    X86_AT(c, 0x10145fu);
    if (x86_cc(c, 4)) { goto L_1014a7; }
    X86_TICK(c, 14);
    // 101461  mov ebx, edi
    X86_AT(c, 0x101461u);
    c.r[3] = c.r[7];
    // 101463  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0x101463u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 101467  je 0x101496
    X86_AT(c, 0x101467u);
    if (x86_cc(c, 4)) { goto L_101496; }
    X86_TICK(c, 12);
    // 101469  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0x101469u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 10146d  je 0x10147b
    X86_AT(c, 0x10146du);
    if (x86_cc(c, 4)) { goto L_10147b; }
    X86_TICK(c, 9);
    // 10146f  push edi
    X86_AT(c, 0x10146fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 101470  call 0x101364
    X86_AT(c, 0x101470u);
    push32(c, 0x101475u); f_00101364(c); X86_RET(c, 0x101475u);
    X86_TICK(c, 13);
    // 101475  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x101475u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 101478  pop ecx
    X86_AT(c, 0x101478u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 101479  jmp 0x101481
    X86_AT(c, 0x101479u);
    goto L_101481;
L_10147b:
    X86_TICK(c, 12);
    // 10147b  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0x10147bu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 10147f  je 0x1014a7
    X86_AT(c, 0x10147fu);
    if (x86_cc(c, 4)) { goto L_1014a7; }
L_101481:
    X86_TICK(c, 12);
    // 101481  test byte ptr [ebx + 0xd], 1
    X86_AT(c, 0x101481u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x1u, 1);
    // 101485  jne 0x101496
    X86_AT(c, 0x101485u);
    if (x86_cc(c, 5)) { goto L_101496; }
    X86_TICK(c, 12);
    // 101487  test byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0x101487u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x80u, 1);
    // 10148b  jne 0x101496
    X86_AT(c, 0x10148bu);
    if (x86_cc(c, 5)) { goto L_101496; }
    X86_TICK(c, 12);
    // 10148d  push dword ptr [ebx + 8]
    X86_AT(c, 0x10148du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 101490  call 0x101770
    X86_AT(c, 0x101490u);
    push32(c, 0x101495u); f_00101770(c); X86_RET(c, 0x101495u);
    X86_TICK(c, 4);
    // 101495  pop ecx
    X86_AT(c, 0x101495u);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_101496:
    X86_TICK(c, 13);
    // 101496  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x101496u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 101499  push eax
    X86_AT(c, 0x101499u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10149a  call 0x103328
    X86_AT(c, 0x10149au);
    push32(c, 0x10149fu); f_00103328(c); X86_RET(c, 0x10149fu);
    X86_TICK(c, 9);
    // 10149f  mov word ptr [ebx + 0xc], 0
    X86_AT(c, 0x10149fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), 0x0u);
    // 1014a5  jmp 0x1014b9
    X86_AT(c, 0x1014a5u);
    goto L_1014b9;
L_1014a7:
    X86_TICK(c, 8);
    // 1014a7  mov ax, 6
    X86_AT(c, 0x1014a7u);
    s16(c, 0, 0x6u);
    // 1014ab  mov word ptr [0xe00b6], ax
    X86_AT(c, 0x1014abu);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), (c.r[0] & 0xFFFFu));
    // 1014b1  mov eax, 6
    X86_AT(c, 0x1014b1u);
    c.r[0] = 0x6u;
    // 1014b6  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x1014b6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_1014b9:
    X86_TICK(c, 32);
    // 1014b9  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x1014b9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 1014bc  pop edi
    X86_AT(c, 0x1014bcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1014bd  pop esi
    X86_AT(c, 0x1014bdu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1014be  pop ebx
    X86_AT(c, 0x1014beu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 1014bf  leave 
    X86_AT(c, 0x1014bfu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1014c0  ret 
    X86_AT(c, 0x1014c0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101430u, "ran off the end of a function");
}
void f_001014d0(X86Cpu& c) {
    X86_TICK(c, 4);
    // 1014d0  push edi
    X86_AT(c, 0x1014d0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1014d1  sub edi, edi
    X86_AT(c, 0x1014d1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_1014d3:
    X86_TICK(c, 16);
    // 1014d3  lea eax, [edi + edi*4]
    X86_AT(c, 0x1014d3u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 1014d6  lea eax, [eax*4]
    X86_AT(c, 0x1014d6u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 1014dd  test byte ptr [eax + 0xdfe64], 6
    X86_AT(c, 0x1014ddu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xDFE64u))) & 0x6u, 1);
    // 1014e4  je 0x1014fa
    X86_AT(c, 0x1014e4u);
    if (x86_cc(c, 4)) { goto L_1014fa; }
    X86_TICK(c, 13);
    // 1014e6  add eax, 0xdfe58
    X86_AT(c, 0x1014e6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xDFE58u, 0, 4); }
    // 1014eb  cmp eax, dword ptr [0xdfc38]
    X86_AT(c, 0x1014ebu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xDFC38u))), 0, 4);
    // 1014f1  je 0x1014fa
    X86_AT(c, 0x1014f1u);
    if (x86_cc(c, 4)) { goto L_1014fa; }
    X86_TICK(c, 9);
    // 1014f3  push eax
    X86_AT(c, 0x1014f3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1014f4  call 0x101430
    X86_AT(c, 0x1014f4u);
    push32(c, 0x1014f9u); f_00101430(c); X86_RET(c, 0x1014f9u);
    X86_TICK(c, 4);
    // 1014f9  pop ecx
    X86_AT(c, 0x1014f9u);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_1014fa:
    X86_TICK(c, 7);
    // 1014fa  cmp edi, 0x19
    X86_AT(c, 0x1014fau);
    (void)x86_sub(c, c.r[7], 0x19u, 0, 4);
    // 1014fd  jae 0x101502
    X86_AT(c, 0x1014fdu);
    if (x86_cc(c, 3)) { goto L_101502; }
    X86_TICK(c, 9);
    // 1014ff  inc edi
    X86_AT(c, 0x1014ffu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 101500  jmp 0x1014d3
    X86_AT(c, 0x101500u);
    X86_POLL(c, 0x1014d3u); goto L_1014d3;
L_101502:
    X86_TICK(c, 12);
    // 101502  push dword ptr [0xdfc38]
    X86_AT(c, 0x101502u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFC38u))); push32(c, v); }
    // 101508  call 0x101430
    X86_AT(c, 0x101508u);
    push32(c, 0x10150du); f_00101430(c); X86_RET(c, 0x10150du);
    X86_TICK(c, 18);
    // 10150d  pop ecx
    X86_AT(c, 0x10150du);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 10150e  pop edi
    X86_AT(c, 0x10150eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10150f  ret 
    X86_AT(c, 0x10150fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1014d0u, "ran off the end of a function");
}
void f_00101524(X86Cpu& c) {
    X86_TICK(c, 27);
    // 101524  enter 8, 0
    X86_AT(c, 0x101524u);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 101528  push ebx
    X86_AT(c, 0x101528u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 101529  push esi
    X86_AT(c, 0x101529u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 10152a  push edi
    X86_AT(c, 0x10152au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10152b  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x10152bu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 10152e  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x10152eu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 101531  and esi, esi
    X86_AT(c, 0x101531u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 101533  jl 0x10153a
    X86_AT(c, 0x101533u);
    if (x86_cc(c, 12)) { goto L_10153a; }
    X86_TICK(c, 7);
    // 101535  cmp esi, 2
    X86_AT(c, 0x101535u);
    (void)x86_sub(c, c.r[6], 0x2u, 0, 4);
    // 101538  jle 0x101546
    X86_AT(c, 0x101538u);
    if (x86_cc(c, 14)) { goto L_101546; }
L_10153a:
    X86_TICK(c, 9);
    // 10153a  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0x10153au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 101541  jmp 0x1015f7
    X86_AT(c, 0x101541u);
    goto L_1015f7;
L_101546:
    X86_TICK(c, 31);
    // 101546  mov ax, word ptr [0xe00b6]
    X86_AT(c, 0x101546u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE00B6u))));
    // 10154c  mov word ptr [ebp - 6], ax
    X86_AT(c, 0x10154cu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), (c.r[0] & 0xFFFFu));
    // 101550  sub eax, eax
    X86_AT(c, 0x101550u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 101552  mov word ptr [0xe00b6], ax
    X86_AT(c, 0x101552u);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), (c.r[0] & 0xFFFFu));
    // 101558  mov ebx, edi
    X86_AT(c, 0x101558u);
    c.r[3] = c.r[7];
    // 10155a  and byte ptr [ebx + 0xd], 0xfb
    X86_AT(c, 0x10155au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFBu, 1)); }
    // 10155e  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0x10155eu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 101562  je 0x1015bd
    X86_AT(c, 0x101562u);
    if (x86_cc(c, 4)) { goto L_1015bd; }
    X86_TICK(c, 12);
    // 101564  cmp dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x101564u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 101568  je 0x1015a0
    X86_AT(c, 0x101568u);
    if (x86_cc(c, 4)) { goto L_1015a0; }
    X86_TICK(c, 12);
    // 10156a  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0x10156au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 10156e  je 0x101583
    X86_AT(c, 0x10156eu);
    if (x86_cc(c, 4)) { goto L_101583; }
    X86_TICK(c, 12);
    // 101570  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0x101570u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 101574  je 0x10157c
    X86_AT(c, 0x101574u);
    if (x86_cc(c, 4)) { goto L_10157c; }
    X86_TICK(c, 12);
    // 101576  test byte ptr [ebx + 0xd], 8
    X86_AT(c, 0x101576u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x8u, 1);
    // 10157a  je 0x101583
    X86_AT(c, 0x10157au);
    if (x86_cc(c, 4)) { goto L_101583; }
L_10157c:
    X86_TICK(c, 9);
    // 10157c  push edi
    X86_AT(c, 0x10157cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10157d  call 0x101364
    X86_AT(c, 0x10157du);
    push32(c, 0x101582u); f_00101364(c); X86_RET(c, 0x101582u);
    X86_TICK(c, 4);
    // 101582  pop ecx
    X86_AT(c, 0x101582u);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_101583:
    X86_TICK(c, 7);
    // 101583  cmp esi, 1
    X86_AT(c, 0x101583u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 101586  jne 0x1015a0
    X86_AT(c, 0x101586u);
    if (x86_cc(c, 5)) { goto L_1015a0; }
    X86_TICK(c, 12);
    // 101588  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0x101588u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 10158c  je 0x1015a0
    X86_AT(c, 0x10158cu);
    if (x86_cc(c, 4)) { goto L_1015a0; }
    X86_TICK(c, 12);
    // 10158e  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0x10158eu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 101592  je 0x10159a
    X86_AT(c, 0x101592u);
    if (x86_cc(c, 4)) { goto L_10159a; }
    X86_TICK(c, 12);
    // 101594  test byte ptr [ebx + 0xd], 8
    X86_AT(c, 0x101594u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x8u, 1);
    // 101598  jne 0x1015a0
    X86_AT(c, 0x101598u);
    if (x86_cc(c, 5)) { goto L_1015a0; }
L_10159a:
    X86_TICK(c, 11);
    // 10159a  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x10159au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 10159d  sub dword ptr [ebp + 0xc], eax
    X86_AT(c, 0x10159du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
L_1015a0:
    X86_TICK(c, 22);
    // 1015a0  mov eax, esi
    X86_AT(c, 0x1015a0u);
    c.r[0] = c.r[6];
    // 1015a2  push eax
    X86_AT(c, 0x1015a2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1015a3  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x1015a3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 1015a6  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x1015a6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 1015a9  push eax
    X86_AT(c, 0x1015a9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1015aa  call 0x103b30
    X86_AT(c, 0x1015aau);
    push32(c, 0x1015afu); f_00103b30(c); X86_RET(c, 0x1015afu);
    X86_TICK(c, 15);
    // 1015af  mov dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x1015afu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0xFFFFFFFFu);
    // 1015b6  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x1015b6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 1015b9  mov dword ptr [ebx], eax
    X86_AT(c, 0x1015b9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 1015bb  jmp 0x1015cc
    X86_AT(c, 0x1015bbu);
    goto L_1015cc;
L_1015bd:
    X86_TICK(c, 22);
    // 1015bd  mov eax, esi
    X86_AT(c, 0x1015bdu);
    c.r[0] = c.r[6];
    // 1015bf  push eax
    X86_AT(c, 0x1015bfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1015c0  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x1015c0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 1015c3  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x1015c3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 1015c6  push eax
    X86_AT(c, 0x1015c6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1015c7  call 0x103b30
    X86_AT(c, 0x1015c7u);
    push32(c, 0x1015ccu); f_00103b30(c); X86_RET(c, 0x1015ccu);
L_1015cc:
    X86_TICK(c, 12);
    // 1015cc  cmp word ptr [0xe00b6], 0
    X86_AT(c, 0x1015ccu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xE00B6u))), 0x0u, 0, 2);
    // 1015d4  jne 0x1015e9
    X86_AT(c, 0x1015d4u);
    if (x86_cc(c, 5)) { goto L_1015e9; }
    X86_TICK(c, 15);
    // 1015d6  mov ax, word ptr [ebp - 6]
    X86_AT(c, 0x1015d6u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))));
    // 1015da  mov word ptr [0xe00b6], ax
    X86_AT(c, 0x1015dau);
    wr16((c.sbase[3] + (uint32_t)(0xE00B6u)), (c.r[0] & 0xFFFFu));
    // 1015e0  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x1015e0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 1015e7  jmp 0x1015f3
    X86_AT(c, 0x1015e7u);
    goto L_1015f3;
L_1015e9:
    X86_TICK(c, 8);
    // 1015e9  movzx eax, word ptr [0xe00b6]
    X86_AT(c, 0x1015e9u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xE00B6u)));
    // 1015f0  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x1015f0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_1015f3:
    X86_TICK(c, 7);
    // 1015f3  and byte ptr [edi + 0xc], 0xef
    X86_AT(c, 0x1015f3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xEFu, 1)); }
L_1015f7:
    X86_TICK(c, 32);
    // 1015f7  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x1015f7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 1015fa  pop edi
    X86_AT(c, 0x1015fau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1015fb  pop esi
    X86_AT(c, 0x1015fbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1015fc  pop ebx
    X86_AT(c, 0x1015fcu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 1015fd  leave 
    X86_AT(c, 0x1015fdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1015fe  ret 
    X86_AT(c, 0x1015feu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101524u, "ran off the end of a function");
}
void f_0010168c(X86Cpu& c) {
    X86_TICK(c, 39);
    // 10168c  push ebp
    X86_AT(c, 0x10168cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 10168d  mov ebp, esp
    X86_AT(c, 0x10168du);
    c.r[5] = c.r[4];
    // 10168f  push ecx
    X86_AT(c, 0x10168fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 101690  push ebx
    X86_AT(c, 0x101690u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 101691  push edi
    X86_AT(c, 0x101691u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 101692  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x101692u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 101695  mov ebx, dword ptr [ebp - 4]
    X86_AT(c, 0x101695u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 101698  push dword ptr [ebx + 8]
    X86_AT(c, 0x101698u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 10169b  push edi
    X86_AT(c, 0x10169bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10169c  push 1
    X86_AT(c, 0x10169cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 10169e  push dword ptr [ebp + 8]
    X86_AT(c, 0x10169eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 1016a1  call 0x1012b0
    X86_AT(c, 0x1016a1u);
    push32(c, 0x1016a6u); f_001012b0(c); X86_RET(c, 0x1016a6u);
    X86_TICK(c, 9);
    // 1016a6  add esp, 0x10
    X86_AT(c, 0x1016a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 1016a9  cmp edi, eax
    X86_AT(c, 0x1016a9u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 1016ab  je 0x1016b8
    X86_AT(c, 0x1016abu);
    if (x86_cc(c, 4)) { goto L_1016b8; }
    X86_TICK(c, 11);
    // 1016ad  mov dword ptr [ebx - 4], 0xffffffff
    X86_AT(c, 0x1016adu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 1016b4  mov ebp, ebx
    X86_AT(c, 0x1016b4u);
    c.r[5] = c.r[3];
    // 1016b6  jmp 0x1016f1
    X86_AT(c, 0x1016b6u);
    goto L_1016f1;
L_1016b8:
    X86_TICK(c, 24);
    // 1016b8  pop edi
    X86_AT(c, 0x1016b8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1016b9  pop ebx
    X86_AT(c, 0x1016b9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 1016ba  leave 
    X86_AT(c, 0x1016bau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1016bb  ret 8
    X86_AT(c, 0x1016bbu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_1016f1:
    X86_TICK(c, 34);
    // 1016f1  lea esp, [ebp - 0x10]
    X86_AT(c, 0x1016f1u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 1016f4  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x1016f4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 1016f7  pop edi
    X86_AT(c, 0x1016f7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1016f8  pop esi
    X86_AT(c, 0x1016f8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1016f9  pop ebx
    X86_AT(c, 0x1016f9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 1016fa  leave 
    X86_AT(c, 0x1016fau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1016fb  ret 
    X86_AT(c, 0x1016fbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10168cu, "ran off the end of a function");
}
void f_001016c8(X86Cpu& c) {
    X86_TICK(c, 33);
    // 1016c8  enter 4, 0
    X86_AT(c, 0x1016c8u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 1016cc  push ebx
    X86_AT(c, 0x1016ccu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 1016cd  push esi
    X86_AT(c, 0x1016cdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1016ce  push edi
    X86_AT(c, 0x1016ceu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1016cf  mov dword ptr [0xdfc5c], 0x10168c
    X86_AT(c, 0x1016cfu);
    wr32((c.sbase[3] + (uint32_t)(0xDFC5Cu)), 0x10168Cu);
    // 1016d9  mov dword ptr [0xdfc60], ebp
    X86_AT(c, 0x1016d9u);
    wr32((c.sbase[3] + (uint32_t)(0xDFC60u)), c.r[5]);
    // 1016df  push dword ptr [ebp + 0x10]
    X86_AT(c, 0x1016dfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 1016e2  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x1016e2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 1016e5  call 0x102dd8
    X86_AT(c, 0x1016e5u);
    push32(c, 0x1016eau); f_00102dd8(c); X86_RET(c, 0x1016eau);
    X86_TICK(c, 11);
    // 1016ea  mov eax, dword ptr [0xdfc58]
    X86_AT(c, 0x1016eau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFC58u)));
    // 1016ef  jmp 0x1016f7
    X86_AT(c, 0x1016efu);
    goto L_1016f7;
L_1016f7:
    X86_TICK(c, 28);
    // 1016f7  pop edi
    X86_AT(c, 0x1016f7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1016f8  pop esi
    X86_AT(c, 0x1016f8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1016f9  pop ebx
    X86_AT(c, 0x1016f9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 1016fa  leave 
    X86_AT(c, 0x1016fau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1016fb  ret 
    X86_AT(c, 0x1016fbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1016c8u, "ran off the end of a function");
}
void f_00101748(X86Cpu& c) {
    X86_TICK(c, 25);
    // 101748  push ebp
    X86_AT(c, 0x101748u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 101749  mov ebp, esp
    X86_AT(c, 0x101749u);
    c.r[5] = c.r[4];
    // 10174b  lea eax, [ebp + 0x10]
    X86_AT(c, 0x10174bu);
    c.r[0] = (uint32_t)(c.r[5] + 0x10u);
    // 10174e  push eax
    X86_AT(c, 0x10174eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10174f  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x10174fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 101752  push dword ptr [ebp + 8]
    X86_AT(c, 0x101752u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 101755  call 0x1016c8
    X86_AT(c, 0x101755u);
    push32(c, 0x10175au); f_001016c8(c); X86_RET(c, 0x10175au);
    X86_TICK(c, 18);
    // 10175a  add esp, 0xc
    X86_AT(c, 0x10175au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 10175d  leave 
    X86_AT(c, 0x10175du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 10175e  ret 
    X86_AT(c, 0x10175eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101748u, "ran off the end of a function");
}
void f_00101770(X86Cpu& c) {
    X86_TICK(c, 16);
    // 101770  push ebp
    X86_AT(c, 0x101770u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 101771  mov ebp, esp
    X86_AT(c, 0x101771u);
    c.r[5] = c.r[4];
    // 101773  push dword ptr [ebp + 8]
    X86_AT(c, 0x101773u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 101776  call 0x103922
    X86_AT(c, 0x101776u);
    push32(c, 0x10177bu); f_00103922(c); X86_RET(c, 0x10177bu);
    X86_TICK(c, 16);
    // 10177b  leave 
    X86_AT(c, 0x10177bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 10177c  ret 
    X86_AT(c, 0x10177cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101770u, "ran off the end of a function");
}
void f_00101784(X86Cpu& c) {
    X86_TICK(c, 16);
    // 101784  push ebp
    X86_AT(c, 0x101784u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 101785  mov ebp, esp
    X86_AT(c, 0x101785u);
    c.r[5] = c.r[4];
    // 101787  push dword ptr [ebp + 8]
    X86_AT(c, 0x101787u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 10178a  call 0x1038e8
    X86_AT(c, 0x10178au);
    push32(c, 0x10178fu); f_001038e8(c); X86_RET(c, 0x10178fu);
    X86_TICK(c, 16);
    // 10178f  leave 
    X86_AT(c, 0x10178fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 101790  ret 
    X86_AT(c, 0x101790u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101784u, "ran off the end of a function");
}
void f_001017b0(X86Cpu& c) {
    X86_TICK(c, 35);
    // 1017b0  enter 0x20, 0
    X86_AT(c, 0x1017b0u);
    x86_enter(c, 0x20u, 0x0u, 4);
    // 1017b4  push ebx
    X86_AT(c, 0x1017b4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 1017b5  push esi
    X86_AT(c, 0x1017b5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1017b6  push edi
    X86_AT(c, 0x1017b6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1017b7  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x1017b7u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 1017ba  lea ebx, [ebp - 0x1c]
    X86_AT(c, 0x1017bau);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFE4u);
    // 1017bd  push ebx
    X86_AT(c, 0x1017bdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 1017be  lea esi, [ebp - 0x14]
    X86_AT(c, 0x1017beu);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 1017c1  push esi
    X86_AT(c, 0x1017c1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1017c2  lea eax, [ebp - 0x12]
    X86_AT(c, 0x1017c2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFEEu);
    // 1017c5  push eax
    X86_AT(c, 0x1017c5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1017c6  call 0x103b7c
    X86_AT(c, 0x1017c6u);
    push32(c, 0x1017cbu); f_00103b7c(c); X86_RET(c, 0x1017cbu);
    X86_TICK(c, 44);
    // 1017cb  mov ax, word ptr [ebx]
    X86_AT(c, 0x1017cbu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3]))));
    // 1017ce  mov word ptr [ebp - 0x10], ax
    X86_AT(c, 0x1017ceu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[0] & 0xFFFFu));
    // 1017d2  mov ax, word ptr [esi]
    X86_AT(c, 0x1017d2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 1017d5  dec eax
    X86_AT(c, 0x1017d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 1017d6  mov word ptr [ebp - 0xe], ax
    X86_AT(c, 0x1017d6u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), (c.r[0] & 0xFFFFu));
    // 1017da  shl eax, 8
    X86_AT(c, 0x1017dau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 1017dd  add ax, word ptr [ebp - 0x12]
    X86_AT(c, 0x1017ddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEEu))), 0, 2)); }
    // 1017e1  mov word ptr [ebp - 0xe], ax
    X86_AT(c, 0x1017e1u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), (c.r[0] & 0xFFFFu));
    // 1017e5  lea ebx, [ebp - 0x1a]
    X86_AT(c, 0x1017e5u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFE6u);
    // 1017e8  push ebx
    X86_AT(c, 0x1017e8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 1017e9  lea esi, [ebp - 0x18]
    X86_AT(c, 0x1017e9u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFE8u);
    // 1017ec  push esi
    X86_AT(c, 0x1017ecu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1017ed  lea eax, [ebp - 0x16]
    X86_AT(c, 0x1017edu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFEAu);
    // 1017f0  push eax
    X86_AT(c, 0x1017f0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1017f1  call 0x103bb0
    X86_AT(c, 0x1017f1u);
    push32(c, 0x1017f6u); f_00103bb0(c); X86_RET(c, 0x1017f6u);
    X86_TICK(c, 22);
    // 1017f6  mov ax, word ptr [ebp - 0x16]
    X86_AT(c, 0x1017f6u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEAu))));
    // 1017fa  shl eax, 8
    X86_AT(c, 0x1017fau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 1017fd  add ax, word ptr [esi]
    X86_AT(c, 0x1017fdu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 101800  mov word ptr [ebp - 0xc], ax
    X86_AT(c, 0x101800u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (c.r[0] & 0xFFFFu));
    // 101804  call 0x103be8
    X86_AT(c, 0x101804u);
    push32(c, 0x101809u); f_00103be8(c); X86_RET(c, 0x101809u);
    X86_TICK(c, 63);
    // 101809  mov dx, word ptr [ebx]
    X86_AT(c, 0x101809u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3]))));
    // 10180c  shl edx, 8
    X86_AT(c, 0x10180cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 10180f  movzx edx, dx
    X86_AT(c, 0x10180fu);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 101812  mov dword ptr [ebp - 0x20], edx
    X86_AT(c, 0x101812u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[2]);
    // 101815  cdq 
    X86_AT(c, 0x101815u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 101816  mov ecx, 0x64
    X86_AT(c, 0x101816u);
    c.r[1] = 0x64u;
    // 10181b  idiv ecx
    X86_AT(c, 0x10181bu);
    x86_idiv(c, c.r[1], 4, 0x10181bu);
    // 10181d  and edx, edx
    X86_AT(c, 0x10181du);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 10181f  jge 0x101823
    X86_AT(c, 0x10181fu);
    if (x86_cc(c, 13)) { goto L_101823; }
    X86_TICK(c, 2);
    // 101821  add edx, ecx
    X86_AT(c, 0x101821u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
L_101823:
    X86_TICK(c, 27);
    // 101823  add edx, dword ptr [ebp - 0x20]
    X86_AT(c, 0x101823u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))), 0, 4); }
    // 101826  mov word ptr [ebp - 0xa], dx
    X86_AT(c, 0x101826u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), (c.r[2] & 0xFFFFu));
    // 10182a  mov eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0x10182au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 10182d  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0x10182du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 101830  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x101830u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 101833  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0x101833u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 101836  and edi, edi
    X86_AT(c, 0x101836u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 101838  je 0x10183f
    X86_AT(c, 0x101838u);
    if (x86_cc(c, 4)) { goto L_10183f; }
    X86_TICK(c, 4);
    // 10183a  mov dword ptr [edi], eax
    X86_AT(c, 0x10183au);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 10183c  mov dword ptr [edi + 4], edx
    X86_AT(c, 0x10183cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[2]);
L_10183f:
    X86_TICK(c, 36);
    // 10183f  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x10183fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 101842  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x101842u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 101845  pop edi
    X86_AT(c, 0x101845u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 101846  pop esi
    X86_AT(c, 0x101846u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 101847  pop ebx
    X86_AT(c, 0x101847u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 101848  leave 
    X86_AT(c, 0x101848u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 101849  ret 
    X86_AT(c, 0x101849u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1017b0u, "ran off the end of a function");
}
void f_00101860(X86Cpu& c) {
    X86_TICK(c, 45);
    // 101860  imul eax, dword ptr [0xdfc78], 0x41c64e6d
    X86_AT(c, 0x101860u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[3] + (uint32_t)(0xDFC78u))), 0x41C64E6Du, 4);
    // 10186a  add eax, 0x3039
    X86_AT(c, 0x10186au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x3039u, 0, 4); }
    // 10186f  mov dword ptr [0xdfc78], eax
    X86_AT(c, 0x10186fu);
    wr32((c.sbase[3] + (uint32_t)(0xDFC78u)), c.r[0]);
    // 101874  mov ax, word ptr [0xdfc7a]
    X86_AT(c, 0x101874u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDFC7Au))));
    // 10187a  and ah, 0x7f
    X86_AT(c, 0x10187au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & 0x7Fu, 1)); }
    // 10187d  movzx eax, ax
    X86_AT(c, 0x10187du);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 101880  ret 
    X86_AT(c, 0x101880u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101860u, "ran off the end of a function");
}
void f_00101888(X86Cpu& c) {
    X86_TICK(c, 16);
    // 101888  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x101888u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 10188c  mov dword ptr [0xdfc78], eax
    X86_AT(c, 0x10188cu);
    wr32((c.sbase[3] + (uint32_t)(0xDFC78u)), c.r[0]);
    // 101891  ret 
    X86_AT(c, 0x101891u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101888u, "ran off the end of a function");
}
void f_001018a8(X86Cpu& c) {
    X86_TICK(c, 46);
    // 1018a8  enter 0x70, 0
    X86_AT(c, 0x1018a8u);
    x86_enter(c, 0x70u, 0x0u, 4);
    // 1018ac  push esi
    X86_AT(c, 0x1018acu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1018ad  push edi
    X86_AT(c, 0x1018adu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1018ae  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x1018aeu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 1018b1  mov eax, dword ptr [0xdfd28]
    X86_AT(c, 0x1018b1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFD28u)));
    // 1018b6  mov dx, word ptr [0xdfd2c]
    X86_AT(c, 0x1018b6u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0xDFD2Cu))));
    // 1018bd  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x1018bdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 1018c0  mov word ptr [ebp - 8], dx
    X86_AT(c, 0x1018c0u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[2] & 0xFFFFu));
    // 1018c4  mov edx, 0x7fffffff
    X86_AT(c, 0x1018c4u);
    c.r[2] = 0x7FFFFFFFu;
    // 1018c9  sub eax, eax
    X86_AT(c, 0x1018c9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 1018cb  push edi
    X86_AT(c, 0x1018cbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1018cc  mov ecx, edx
    X86_AT(c, 0x1018ccu);
    c.r[1] = c.r[2];
    // 1018ce  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x1018ceu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 1018d0  jne 0x1018d5
    X86_AT(c, 0x1018d0u);
    if (x86_cc(c, 5)) { goto L_1018d5; }
    X86_TICK(c, 4);
    // 1018d2  inc ecx
    X86_AT(c, 0x1018d2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 1018d3  sub edx, ecx
    X86_AT(c, 0x1018d3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_1018d5:
    X86_TICK(c, 13);
    // 1018d5  pop edi
    X86_AT(c, 0x1018d5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1018d6  mov ax, 0x64
    X86_AT(c, 0x1018d6u);
    s16(c, 0, 0x64u);
    // 1018da  cmp ax, dx
    X86_AT(c, 0x1018dau);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 1018dd  jb 0x1018e0
    X86_AT(c, 0x1018ddu);
    if (x86_cc(c, 2)) { goto L_1018e0; }
    X86_TICK(c, 3);
    // 1018df  xchg edx, eax
    X86_AT(c, 0x1018dfu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_1018e0:
    X86_TICK(c, 10);
    // 1018e0  movzx esi, ax
    X86_AT(c, 0x1018e0u);
    c.r[6] = (c.r[0] & 0xFFFFu);
    // 1018e3  jmp 0x101987
    X86_AT(c, 0x1018e3u);
    goto L_101987;
L_1018e8:
    X86_TICK(c, 64);
    // 1018e8  mov ecx, esi
    X86_AT(c, 0x1018e8u);
    c.r[1] = c.r[6];
    // 1018ea  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x1018eau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 1018ed  push ds
    X86_AT(c, 0x1018edu);
    push32(c, c.sreg[3]);
    // 1018ee  push es
    X86_AT(c, 0x1018eeu);
    push32(c, c.sreg[0]);
    // 1018ef  lea edx, [ebp - 0x70]
    X86_AT(c, 0x1018efu);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFF90u);
    // 1018f2  push ds
    X86_AT(c, 0x1018f2u);
    push32(c, c.sreg[3]);
    // 1018f3  pop es
    X86_AT(c, 0x1018f3u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 1018f4  pop ds
    X86_AT(c, 0x1018f4u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 1018f5  push esi
    X86_AT(c, 0x1018f5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1018f6  push edi
    X86_AT(c, 0x1018f6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1018f7  mov esi, eax
    X86_AT(c, 0x1018f7u);
    c.r[6] = c.r[0];
    // 1018f9  mov edi, edx
    X86_AT(c, 0x1018f9u);
    c.r[7] = c.r[2];
    // 1018fb  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x1018fbu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 1018fd  pop edi
    X86_AT(c, 0x1018fdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1018fe  pop esi
    X86_AT(c, 0x1018feu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1018ff  pop ds
    X86_AT(c, 0x1018ffu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 101900  push esi
    X86_AT(c, 0x101900u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 101901  push edi
    X86_AT(c, 0x101901u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 101902  push edx
    X86_AT(c, 0x101902u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 101903  call 0x103d84
    X86_AT(c, 0x101903u);
    push32(c, 0x101908u); f_00103d84(c); X86_RET(c, 0x101908u);
    X86_TICK(c, 7);
    // 101908  and ax, ax
    X86_AT(c, 0x101908u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 10190b  jne 0x10195d
    X86_AT(c, 0x10190bu);
    if (x86_cc(c, 5)) { goto L_10195d; }
    X86_TICK(c, 24);
    // 10190d  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x10190du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 101910  cmp byte ptr es:[eax + esi*1], 0x3d
    X86_AT(c, 0x101910u);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[0] + c.r[6]))), 0x3Du, 0, 1);
    // 101915  push ds
    X86_AT(c, 0x101915u);
    push32(c, c.sreg[3]);
    // 101916  pop es
    X86_AT(c, 0x101916u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 101917  jne 0x10195d
    X86_AT(c, 0x101917u);
    if (x86_cc(c, 5)) { goto L_10195d; }
    X86_TICK(c, 37);
    // 101919  lea eax, [esi + 1]
    X86_AT(c, 0x101919u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 10191c  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x10191cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 10191f  mov edx, 0x7fffffff
    X86_AT(c, 0x10191fu);
    c.r[2] = 0x7FFFFFFFu;
    // 101924  sub eax, eax
    X86_AT(c, 0x101924u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 101926  les ecx, fword ptr [ebp - 0xc]
    X86_AT(c, 0x101926u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[1] = o; }
    // 101929  push edi
    X86_AT(c, 0x101929u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10192a  mov edi, ecx
    X86_AT(c, 0x10192au);
    c.r[7] = c.r[1];
    // 10192c  mov ecx, edx
    X86_AT(c, 0x10192cu);
    c.r[1] = c.r[2];
    // 10192e  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x10192eu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 101930  jne 0x101935
    X86_AT(c, 0x101930u);
    if (x86_cc(c, 5)) { goto L_101935; }
    X86_TICK(c, 4);
    // 101932  inc ecx
    X86_AT(c, 0x101932u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 101933  sub edx, ecx
    X86_AT(c, 0x101933u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_101935:
    X86_TICK(c, 15);
    // 101935  pop edi
    X86_AT(c, 0x101935u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 101936  inc edx
    X86_AT(c, 0x101936u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 101937  mov eax, 0x80
    X86_AT(c, 0x101937u);
    c.r[0] = 0x80u;
    // 10193c  cmp eax, edx
    X86_AT(c, 0x10193cu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 10193e  jb 0x101941
    X86_AT(c, 0x10193eu);
    if (x86_cc(c, 2)) { goto L_101941; }
    X86_TICK(c, 3);
    // 101940  xchg edx, eax
    X86_AT(c, 0x101940u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_101941:
    X86_TICK(c, 62);
    // 101941  xchg ecx, eax
    X86_AT(c, 0x101941u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 101942  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x101942u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 101945  push ds
    X86_AT(c, 0x101945u);
    push32(c, c.sreg[3]);
    // 101946  push es
    X86_AT(c, 0x101946u);
    push32(c, c.sreg[0]);
    // 101947  mov edx, 0xdfc7c
    X86_AT(c, 0x101947u);
    c.r[2] = 0xDFC7Cu;
    // 10194c  push ds
    X86_AT(c, 0x10194cu);
    push32(c, c.sreg[3]);
    // 10194d  pop es
    X86_AT(c, 0x10194du);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 10194e  pop ds
    X86_AT(c, 0x10194eu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 10194f  push esi
    X86_AT(c, 0x10194fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 101950  push edi
    X86_AT(c, 0x101950u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 101951  mov esi, eax
    X86_AT(c, 0x101951u);
    c.r[6] = c.r[0];
    // 101953  mov edi, edx
    X86_AT(c, 0x101953u);
    c.r[7] = c.r[2];
    // 101955  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x101955u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 101957  pop edi
    X86_AT(c, 0x101957u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 101958  pop esi
    X86_AT(c, 0x101958u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 101959  pop ds
    X86_AT(c, 0x101959u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 10195a  xchg edx, eax
    X86_AT(c, 0x10195au);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 10195b  jmp 0x10199b
    X86_AT(c, 0x10195bu);
    goto L_10199b;
L_10195d:
    X86_TICK(c, 28);
    // 10195d  mov edx, 0x7fffffff
    X86_AT(c, 0x10195du);
    c.r[2] = 0x7FFFFFFFu;
    // 101962  sub eax, eax
    X86_AT(c, 0x101962u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 101964  les ecx, fword ptr [ebp - 0xc]
    X86_AT(c, 0x101964u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[1] = o; }
    // 101967  push edi
    X86_AT(c, 0x101967u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 101968  mov edi, ecx
    X86_AT(c, 0x101968u);
    c.r[7] = c.r[1];
    // 10196a  mov ecx, edx
    X86_AT(c, 0x10196au);
    c.r[1] = c.r[2];
    // 10196c  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x10196cu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 10196e  jne 0x101973
    X86_AT(c, 0x10196eu);
    if (x86_cc(c, 5)) { goto L_101973; }
    X86_TICK(c, 4);
    // 101970  inc ecx
    X86_AT(c, 0x101970u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 101971  sub edx, ecx
    X86_AT(c, 0x101971u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_101973:
    X86_TICK(c, 24);
    // 101973  pop edi
    X86_AT(c, 0x101973u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 101974  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x101974u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 101977  lea eax, es:[eax + edx*1 + 1]
    X86_AT(c, 0x101977u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0x1u);
    // 10197c  mov edx, es
    X86_AT(c, 0x10197cu);
    c.r[2] = (uint32_t)c.sreg[0];
    // 10197e  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x10197eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 101981  mov word ptr [ebp - 8], dx
    X86_AT(c, 0x101981u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[2] & 0xFFFFu));
    // 101985  push ds
    X86_AT(c, 0x101985u);
    push32(c, c.sreg[3]);
    // 101986  pop es
    X86_AT(c, 0x101986u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
L_101987:
    X86_TICK(c, 24);
    // 101987  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x101987u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 10198a  cmp byte ptr es:[eax], 0
    X86_AT(c, 0x10198au);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 10198e  push ds
    X86_AT(c, 0x10198eu);
    push32(c, c.sreg[3]);
    // 10198f  pop es
    X86_AT(c, 0x10198fu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 101990  jne 0x1018e8
    X86_AT(c, 0x101990u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1018e8u); goto L_1018e8; }
    X86_TICK(c, 4);
    // 101996  sub eax, eax
    X86_AT(c, 0x101996u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 101998  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x101998u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_10199b:
    X86_TICK(c, 24);
    // 10199b  pop edi
    X86_AT(c, 0x10199bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10199c  pop esi
    X86_AT(c, 0x10199cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 10199d  leave 
    X86_AT(c, 0x10199du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 10199e  ret 
    X86_AT(c, 0x10199eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1018a8u, "ran off the end of a function");
}
void f_001019a0(X86Cpu& c) {
    X86_TICK(c, 72);
    // 1019a0  mov edx, esi
    X86_AT(c, 0x1019a0u);
    c.r[2] = c.r[6];
    // 1019a2  push edi
    X86_AT(c, 0x1019a2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1019a3  sub eax, eax
    X86_AT(c, 0x1019a3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 1019a5  mov ecx, 0xffffffff
    X86_AT(c, 0x1019a5u);
    c.r[1] = 0xFFFFFFFFu;
    // 1019aa  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x1019aau);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 1019ae  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x1019aeu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 1019b0  not ecx
    X86_AT(c, 0x1019b0u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 1019b2  mov esi, dword ptr [esp + 0xc]
    X86_AT(c, 0x1019b2u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 1019b6  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x1019b6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 1019ba  mov eax, ecx
    X86_AT(c, 0x1019bau);
    c.r[0] = c.r[1];
    // 1019bc  shr ecx, 2
    X86_AT(c, 0x1019bcu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 1019bf  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x1019bfu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 1019c1  mov ecx, eax
    X86_AT(c, 0x1019c1u);
    c.r[1] = c.r[0];
    // 1019c3  and ecx, 3
    X86_AT(c, 0x1019c3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 1019c9  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x1019c9u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 1019cb  mov eax, dword ptr [esp + 8]
    X86_AT(c, 0x1019cbu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 1019cf  mov esi, edx
    X86_AT(c, 0x1019cfu);
    c.r[6] = c.r[2];
    // 1019d1  pop edi
    X86_AT(c, 0x1019d1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1019d2  ret 
    X86_AT(c, 0x1019d2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1019a0u, "ran off the end of a function");
}
void f_001019e4(X86Cpu& c) {
    X86_TICK(c, 16);
    // 1019e4  push ebp
    X86_AT(c, 0x1019e4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 1019e5  mov ebp, esp
    X86_AT(c, 0x1019e5u);
    c.r[5] = c.r[4];
    // 1019e7  push dword ptr [ebp + 8]
    X86_AT(c, 0x1019e7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 1019ea  call 0x103a24
    X86_AT(c, 0x1019eau);
    push32(c, 0x1019efu); f_00103a24(c); X86_RET(c, 0x1019efu);
    X86_TICK(c, 16);
    // 1019ef  leave 
    X86_AT(c, 0x1019efu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1019f0  ret 4
    X86_AT(c, 0x1019f0u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x1019e4u, "ran off the end of a function");
}
void f_001019fc(X86Cpu& c) {
    X86_TICK(c, 11);
    // 1019fc  push ebp
    X86_AT(c, 0x1019fcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 1019fd  mov ebp, esp
    X86_AT(c, 0x1019fdu);
    c.r[5] = c.r[4];
    // 1019ff  call 0x101a31
    X86_AT(c, 0x1019ffu);
    push32(c, 0x101a04u); f_00101a31(c); X86_RET(c, 0x101a04u);
    X86_TICK(c, 12);
    // 101a04  push dword ptr [ebp + 8]
    X86_AT(c, 0x101a04u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 101a07  call 0x103348
    X86_AT(c, 0x101a07u);
    push32(c, 0x101a0cu); f_00103348(c); X86_RET(c, 0x101a0cu);
    X86_TICK(c, 16);
    // 101a0c  leave 
    X86_AT(c, 0x101a0cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 101a0d  ret 4
    X86_AT(c, 0x101a0du);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x1019fcu, "ran off the end of a function");
}
void f_00101a20(X86Cpu& c) {
    X86_TICK(c, 7);
    // 101a20  jmp 0x101a78
    X86_AT(c, 0x101a20u);
    goto L_101a78;
L_101a22:
    X86_TICK(c, 7);
    // 101a22  call 0xebd1c
    X86_AT(c, 0x101a22u);
    push32(c, 0x101a27u); f_000ebd1c(c); X86_RET(c, 0x101a27u);
L_101a27:
    X86_TICK(c, 9);
    // 101a27  push eax
    X86_AT(c, 0x101a27u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 101a28  call 0x103a24
    X86_AT(c, 0x101a28u);
    push32(c, 0x101a2du); f_00103a24(c); X86_RET(c, 0x101a2du);
    X86_TICK(c, 39);
    // 101a2d  xor eax, eax
    X86_AT(c, 0x101a2du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 101a2f  int 0x21
    X86_AT(c, 0x101a2fu);
    x86_int(c, 0x21, 0x101a31u);
    X86_TICK(c, 10);
    // 101a31  ret 
    X86_AT(c, 0x101a31u);
    c.eip = pop32(c); return;
L_101a78:
    X86_TICK(c, 7);
    // 101a78  cmp al, 0xcd
    X86_AT(c, 0x101a78u);
    (void)x86_sub(c, g8(c, 0), 0xCDu, 0, 1);
    // 101a7a  jne 0x101a97
    X86_AT(c, 0x101a7au);
    if (x86_cc(c, 5)) { goto L_101a97; }
    X86_TICK(c, 7);
    // 101a7c  cmp ah, 0xab
    X86_AT(c, 0x101a7cu);
    (void)x86_sub(c, g8(c, 4), 0xABu, 0, 1);
    // 101a7f  jne 0x101a97
    X86_AT(c, 0x101a7fu);
    if (x86_cc(c, 5)) { goto L_101a97; }
    X86_TICK(c, 7);
    // 101a81  cmp eax, 0xabcdabcd
    X86_AT(c, 0x101a81u);
    (void)x86_sub(c, c.r[0], 0xABCDABCDu, 0, 4);
    // 101a86  jne 0x101a97
    X86_AT(c, 0x101a86u);
    if (x86_cc(c, 5)) { goto L_101a97; }
    X86_TICK(c, 11);
    // 101a88  mov byte ptr [0xdfd3e], 1
    X86_AT(c, 0x101a88u);
    wr8((c.sbase[3] + (uint32_t)(0xDFD3Eu)), 0x1u);
    // 101a8f  mov dword ptr [0xdfd14], edx
    X86_AT(c, 0x101a8fu);
    wr32((c.sbase[3] + (uint32_t)(0xDFD14u)), c.r[2]);
    // 101a95  jmp 0x101a9e
    X86_AT(c, 0x101a95u);
    goto L_101a9e;
L_101a97:
    X86_TICK(c, 2);
    // 101a97  mov byte ptr [0xdfd3e], 2
    X86_AT(c, 0x101a97u);
    wr8((c.sbase[3] + (uint32_t)(0xDFD3Eu)), 0x2u);
L_101a9e:
    X86_TICK(c, 34);
    // 101a9e  sub ebp, ebp
    X86_AT(c, 0x101a9eu);
    { uint32_t v = c.r[5]; c.r[5] = x86_sub(c, v, c.r[5], 0, 4); }
    // 101aa0  and esp, 0xfffffffc
    X86_AT(c, 0x101aa0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 101aa3  mov dword ptr [0xcde3c], 0x200
    X86_AT(c, 0x101aa3u);
    wr32((c.sbase[3] + (uint32_t)(0xCDE3Cu)), 0x200u);
    // 101aad  mov dword ptr [0xcde40], 0x100
    X86_AT(c, 0x101aadu);
    wr32((c.sbase[3] + (uint32_t)(0xCDE40u)), 0x100u);
    // 101ab7  add dword ptr [0xcde3c], 0x105b10
    X86_AT(c, 0x101ab7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xCDE3Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x105B10u, 0, 4)); }
    // 101ac1  add dword ptr [0xcde40], 0x105b10
    X86_AT(c, 0x101ac1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xCDE40u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x105B10u, 0, 4)); }
    // 101acb  cmp byte ptr [0xdfd3e], 1
    X86_AT(c, 0x101acbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD3Eu))), 0x1u, 0, 1);
    // 101ad2  je 0x101af4
    X86_AT(c, 0x101ad2u);
    if (x86_cc(c, 4)) { goto L_101af4; }
    X86_TICK(c, 23);
    // 101ad4  mov dword ptr [0xdfd0c], 0
    X86_AT(c, 0x101ad4u);
    wr32((c.sbase[3] + (uint32_t)(0xDFD0Cu)), 0x0u);
    // 101ade  lea eax, [esp + 0x20]
    X86_AT(c, 0x101adeu);
    c.r[0] = (uint32_t)(c.r[4] + 0x20u);
    // 101ae2  mov dword ptr [0xdfd08], esp
    X86_AT(c, 0x101ae2u);
    wr32((c.sbase[3] + (uint32_t)(0xDFD08u)), c.r[4]);
    // 101ae8  mov eax, ds
    X86_AT(c, 0x101ae8u);
    c.r[0] = (uint32_t)c.sreg[3];
    // 101aea  lsl eax, eax
    X86_AT(c, 0x101aeau);
    { uint32_t v; if (x86_lsl(c, (c.r[0] & 0xFFFFu), v)) { c.r[0] = v; c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 101aed  mov dword ptr [0xdfd10], eax
    X86_AT(c, 0x101aedu);
    wr32((c.sbase[3] + (uint32_t)(0xDFD10u)), c.r[0]);
    // 101af2  jmp 0x101b34
    X86_AT(c, 0x101af2u);
    goto L_101b34;
L_101af4:
    X86_TICK(c, 84);
    // 101af4  mov eax, esp
    X86_AT(c, 0x101af4u);
    c.r[0] = c.r[4];
    // 101af6  mov ecx, dword ptr [edx + 0x74]
    X86_AT(c, 0x101af6u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x74u)));
    // 101af9  shl ecx, 0xa
    X86_AT(c, 0x101af9u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[1] = r; }
    // 101afc  sub eax, ecx
    X86_AT(c, 0x101afcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[1], 0, 4); }
    // 101afe  mov dword ptr [0xdfd0c], eax
    X86_AT(c, 0x101afeu);
    wr32((c.sbase[3] + (uint32_t)(0xDFD0Cu)), c.r[0]);
    // 101b03  mov eax, dword ptr [edx + 0x50]
    X86_AT(c, 0x101b03u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x50u)));
    // 101b06  mov dword ptr [0xdfd08], eax
    X86_AT(c, 0x101b06u);
    wr32((c.sbase[3] + (uint32_t)(0xDFD08u)), c.r[0]);
    // 101b0b  mov ecx, dword ptr [edx + 0x3c]
    X86_AT(c, 0x101b0bu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x3Cu)));
    // 101b0e  shl ecx, 0xa
    X86_AT(c, 0x101b0eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[1] = r; }
    // 101b11  add eax, ecx
    X86_AT(c, 0x101b11u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[1], 0, 4); }
    // 101b13  mov dword ptr [0xdfd10], eax
    X86_AT(c, 0x101b13u);
    wr32((c.sbase[3] + (uint32_t)(0xDFD10u)), c.r[0]);
    // 101b18  mov ebx, dword ptr [edx + 0x54]
    X86_AT(c, 0x101b18u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x54u)));
    // 101b1b  sub ebx, dword ptr [edx + 0x10]
    X86_AT(c, 0x101b1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u))), 0, 4); }
    // 101b1e  shr ebx, 4
    X86_AT(c, 0x101b1eu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 101b21  inc ebx
    X86_AT(c, 0x101b21u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 101b22  mov ah, 0x4a
    X86_AT(c, 0x101b22u);
    s8(c, 4, 0x4Au);
    // 101b24  int 0x21
    X86_AT(c, 0x101b24u);
    x86_int(c, 0x21, 0x101b26u);
    X86_TICK(c, 12);
    // 101b26  test byte ptr [edx + 0xb7], 1
    X86_AT(c, 0x101b26u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB7u))) & 0x1u, 1);
    // 101b2d  setne byte ptr [0xdfd35]
    X86_AT(c, 0x101b2du);
    wr8((c.sbase[3] + (uint32_t)(0xDFD35u)), x86_cc(c, 5) ? 1u : 0u);
L_101b34:
    X86_TICK(c, 11);
    // 101b34  esc 0x1c, bl
    X86_AT(c, 0x101b34u);
    // 101b36  xor eax, eax
    X86_AT(c, 0x101b36u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 101b38  mov word ptr [0xdfd31], ax
    X86_AT(c, 0x101b38u);
    wr16((c.sbase[3] + (uint32_t)(0xDFD31u)), (c.r[0] & 0xFFFFu));
    // 101b3e  sub ecx, ecx
    X86_AT(c, 0x101b3eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 101b40  mov cl, 0xf
    X86_AT(c, 0x101b40u);
    s8(c, 1, 0xFu);
L_101b42:
    X86_TICK(c, 11);
    // 101b42  loop 0x101b42
    X86_AT(c, 0x101b42u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x101b42u); goto L_101b42; }
    X86_TICK(c, 5);
    // 101b44  esc 0xf, byte ptr [0xdfd31]
    X86_AT(c, 0x101b44u);
    // 101b4a  mov cl, 0xf
    X86_AT(c, 0x101b4au);
    s8(c, 1, 0xFu);
L_101b4c:
    X86_TICK(c, 11);
    // 101b4c  loop 0x101b4c
    X86_AT(c, 0x101b4cu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x101b4cu); goto L_101b4c; }
    X86_TICK(c, 19);
    // 101b4e  and word ptr [0xdfd31], 0xf3f
    X86_AT(c, 0x101b4eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFD31u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xF3Fu, 2)); }
    // 101b57  cmp word ptr [0xdfd31], 0x33f
    X86_AT(c, 0x101b57u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xDFD31u))), 0x33Fu, 0, 2);
    // 101b60  jne 0x101ba0
    X86_AT(c, 0x101b60u);
    if (x86_cc(c, 5)) { goto L_101ba0; }
    X86_TICK(c, 5);
    // 101b62  esc 0x2f, byte ptr [0xdfd31]
    X86_AT(c, 0x101b62u);
    // 101b68  mov cl, 0xf
    X86_AT(c, 0x101b68u);
    s8(c, 1, 0xFu);
L_101b6a:
    X86_TICK(c, 11);
    // 101b6a  loop 0x101b6a
    X86_AT(c, 0x101b6au);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x101b6au); goto L_101b6a; }
    X86_TICK(c, 12);
    // 101b6c  test word ptr [0xdfd31], 0xb8bf
    X86_AT(c, 0x101b6cu);
    (void)x86_logic(c, rd16((c.sbase[3] + (uint32_t)(0xDFD31u))) & 0xB8BFu, 2);
    // 101b75  jne 0x101ba0
    X86_AT(c, 0x101b75u);
    if (x86_cc(c, 5)) { goto L_101ba0; }
    X86_TICK(c, 51);
    // 101b77  wait 
    X86_AT(c, 0x101b77u);
    // 101b78  esc 0xd, byte ptr cs:[0x101e14]
    X86_AT(c, 0x101b78u);
    // 101b7f  mov byte ptr [0xdfd2f], 1
    X86_AT(c, 0x101b7fu);
    wr8((c.sbase[3] + (uint32_t)(0xDFD2Fu)), 0x1u);
    // 101b86  esc 0xd, al
    X86_AT(c, 0x101b86u);
    // 101b88  esc 0xd, dh
    X86_AT(c, 0x101b88u);
    // 101b8a  esc 0x37, cl
    X86_AT(c, 0x101b8au);
    // 101b8c  esc 8, al
    X86_AT(c, 0x101b8cu);
    // 101b8e  esc 0xc, al
    X86_AT(c, 0x101b8eu);
    // 101b90  esc 0x33, cl
    X86_AT(c, 0x101b90u);
    // 101b92  wait 
    X86_AT(c, 0x101b92u);
    // 101b93  esc 0x3c, al
    X86_AT(c, 0x101b93u);
    // 101b95  wait 
    X86_AT(c, 0x101b95u);
    // 101b96  sahf 
    X86_AT(c, 0x101b96u);
    c.fl = (c.fl & ~0xD5u) | (g8(c, 4) & 0xD5u);
    // 101b97  je 0x101ba0
    X86_AT(c, 0x101b97u);
    if (x86_cc(c, 4)) { goto L_101ba0; }
    X86_TICK(c, 2);
    // 101b99  mov byte ptr [0xdfd33], 1
    X86_AT(c, 0x101b99u);
    wr8((c.sbase[3] + (uint32_t)(0xDFD33u)), 0x1u);
L_101ba0:
    X86_TICK(c, 28);
    // 101ba0  push 0x3ff0000
    X86_AT(c, 0x101ba0u);
    { uint32_t v = 0x3FF0000u; push32(c, v); }
    // 101ba5  push 0x30000000
    X86_AT(c, 0x101ba5u);
    { uint32_t v = 0x30000000u; push32(c, v); }
    // 101baa  push 0xa0000000
    X86_AT(c, 0x101baau);
    { uint32_t v = 0xA0000000u; push32(c, v); }
    // 101baf  push 0x64000000
    X86_AT(c, 0x101bafu);
    { uint32_t v = 0x64000000u; push32(c, v); }
    // 101bb4  push 0x16000000
    X86_AT(c, 0x101bb4u);
    { uint32_t v = 0x16000000u; push32(c, v); }
    // 101bb9  push 0x98000000
    X86_AT(c, 0x101bb9u);
    { uint32_t v = 0x98000000u; push32(c, v); }
    // 101bbe  push 0x56000000
    X86_AT(c, 0x101bbeu);
    { uint32_t v = 0x56000000u; push32(c, v); }
    // 101bc3  push 0xb8000000
    X86_AT(c, 0x101bc3u);
    { uint32_t v = 0xB8000000u; push32(c, v); }
    // 101bc8  cmp byte ptr [0xdfd3e], 1
    X86_AT(c, 0x101bc8u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD3Eu))), 0x1u, 0, 1);
    // 101bcf  je 0x101c28
    X86_AT(c, 0x101bcfu);
    if (x86_cc(c, 4)) { goto L_101c28; }
    X86_TICK(c, 11);
    // 101bd1  mov eax, fs
    X86_AT(c, 0x101bd1u);
    c.r[0] = (uint32_t)c.sreg[4];
    // 101bd3  mov ebx, ds
    X86_AT(c, 0x101bd3u);
    c.r[3] = (uint32_t)c.sreg[3];
    // 101bd5  cmp ax, bx
    X86_AT(c, 0x101bd5u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 101bd8  je 0x101c79
    X86_AT(c, 0x101bd8u);
    if (x86_cc(c, 4)) { goto L_101c79; }
    X86_TICK(c, 18);
    // 101bde  mov word ptr [0xdfd35], 1
    X86_AT(c, 0x101bdeu);
    wr16((c.sbase[3] + (uint32_t)(0xDFD35u)), 0x1u);
    // 101be7  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x101be7u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 101bed  mov eax, dword ptr fs:[0xc400]
    X86_AT(c, 0x101bedu);
    c.r[0] = rd32((c.sbase[4] + ((0xC400u) & 0xFFFFu)));
    // 101bf2  and ah, 0x80
    X86_AT(c, 0x101bf2u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & 0x80u, 1)); }
    // 101bf5  jne 0x101c01
    X86_AT(c, 0x101bf5u);
    if (x86_cc(c, 5)) { goto L_101c01; }
    X86_TICK(c, 20);
    // 101bf7  pop eax
    X86_AT(c, 0x101bf7u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 101bf8  pop eax
    X86_AT(c, 0x101bf8u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 101bf9  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x101bf9u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 101bff  jmp 0x101c0e
    X86_AT(c, 0x101bffu);
    goto L_101c0e;
L_101c01:
    X86_TICK(c, 14);
    // 101c01  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x101c01u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 101c07  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x101c07u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 101c0d  pop eax
    X86_AT(c, 0x101c0du);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_101c0e:
    X86_TICK(c, 27);
    // 101c0e  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x101c0eu);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 101c14  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x101c14u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 101c1a  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x101c1au);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 101c20  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x101c20u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 101c26  jmp 0x101c7c
    X86_AT(c, 0x101c26u);
    goto L_101c7c;
L_101c28:
    X86_TICK(c, 12);
    // 101c28  cmp byte ptr [0xdfd35], 1
    X86_AT(c, 0x101c28u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD35u))), 0x1u, 0, 1);
    // 101c2f  jne 0x101c79
    X86_AT(c, 0x101c2fu);
    if (x86_cc(c, 5)) { goto L_101c79; }
    X86_TICK(c, 17);
    // 101c31  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x101c31u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 101c37  pop dword ptr [0xffc0c400]
    X86_AT(c, 0x101c37u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C400u)), v); }
    // 101c3d  and ah, 0x80
    X86_AT(c, 0x101c3du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & 0x80u, 1)); }
    // 101c40  jne 0x101c4c
    X86_AT(c, 0x101c40u);
    if (x86_cc(c, 5)) { goto L_101c4c; }
    X86_TICK(c, 20);
    // 101c42  pop eax
    X86_AT(c, 0x101c42u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 101c43  pop eax
    X86_AT(c, 0x101c43u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 101c44  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x101c44u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 101c4a  jmp 0x101c59
    X86_AT(c, 0x101c4au);
    goto L_101c59;
L_101c4c:
    X86_TICK(c, 14);
    // 101c4c  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x101c4cu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 101c52  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x101c52u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 101c58  pop eax
    X86_AT(c, 0x101c58u);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_101c59:
    X86_TICK(c, 32);
    // 101c59  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x101c59u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 101c5f  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x101c5fu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 101c65  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x101c65u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 101c6b  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x101c6bu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 101c71  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x101c71u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 101c77  jmp 0x101c7c
    X86_AT(c, 0x101c77u);
    goto L_101c7c;
L_101c79:
    X86_TICK(c, 2);
    // 101c79  add esp, 0x20
    X86_AT(c, 0x101c79u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_101c7c:
    X86_TICK(c, 14);
    // 101c7c  cld 
    X86_AT(c, 0x101c7cu);
    c.fl &= ~X86_DF;
    // 101c7d  cmp byte ptr [0xdfd3e], 2
    X86_AT(c, 0x101c7du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD3Eu))), 0x2u, 0, 1);
    // 101c84  je 0x101cc6
    X86_AT(c, 0x101c84u);
    if (x86_cc(c, 4)) { goto L_101cc6; }
    X86_TICK(c, 42);
    // 101c86  mov edi, dword ptr [edx + 0x10]
    X86_AT(c, 0x101c86u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u)));
    // 101c89  mov word ptr [0xdfd1c], ds
    X86_AT(c, 0x101c89u);
    wr16((c.sbase[3] + (uint32_t)(0xDFD1Cu)), (uint32_t)c.sreg[3]);
    // 101c8f  mov dword ptr [0xdfd02], edi
    X86_AT(c, 0x101c8fu);
    wr32((c.sbase[3] + (uint32_t)(0xDFD02u)), c.r[7]);
    // 101c95  mov word ptr [0xdfd06], ds
    X86_AT(c, 0x101c95u);
    wr16((c.sbase[3] + (uint32_t)(0xDFD06u)), (uint32_t)c.sreg[3]);
    // 101c9b  lea eax, [edi + 0x80]
    X86_AT(c, 0x101c9bu);
    c.r[0] = (uint32_t)(c.r[7] + 0x80u);
    // 101ca1  xor ebx, ebx
    X86_AT(c, 0x101ca1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
    // 101ca3  mov bl, byte ptr [eax]
    X86_AT(c, 0x101ca3u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 101ca5  mov dword ptr [0xdfd24], ebx
    X86_AT(c, 0x101ca5u);
    wr32((c.sbase[3] + (uint32_t)(0xDFD24u)), c.r[3]);
    // 101cab  inc eax
    X86_AT(c, 0x101cabu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 101cac  mov dword ptr [0xdfd18], eax
    X86_AT(c, 0x101cacu);
    wr32((c.sbase[3] + (uint32_t)(0xDFD18u)), c.r[0]);
    // 101cb1  mov bx, word ptr [edi + 0x2c]
    X86_AT(c, 0x101cb1u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu))));
    // 101cb5  shl ebx, 4
    X86_AT(c, 0x101cb5u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 101cb8  mov dword ptr [0xdfd28], ebx
    X86_AT(c, 0x101cb8u);
    wr32((c.sbase[3] + (uint32_t)(0xDFD28u)), c.r[3]);
    // 101cbe  mov word ptr [0xdfd2c], ds
    X86_AT(c, 0x101cbeu);
    wr16((c.sbase[3] + (uint32_t)(0xDFD2Cu)), (uint32_t)c.sreg[3]);
    // 101cc4  jmp 0x101d18
    X86_AT(c, 0x101cc4u);
    goto L_101d18;
L_101cc6:
    X86_TICK(c, 81);
    // 101cc6  mov ax, 0x24
    X86_AT(c, 0x101cc6u);
    s16(c, 0, 0x24u);
    // 101cca  mov ebx, cs
    X86_AT(c, 0x101ccau);
    c.r[3] = (uint32_t)c.sreg[1];
    // 101ccc  arpl ax, bx
    X86_AT(c, 0x101cccu);
    { uint32_t d = (c.r[0] & 0xFFFFu), s = (c.r[3] & 0xFFFFu); if ((d & 3) < (s & 3)) { s16(c, 0, (d & ~3u) | (s & 3)); c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 101cce  mov es, eax
    X86_AT(c, 0x101cceu);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 101cd0  mov word ptr [0xdfd06], ax
    X86_AT(c, 0x101cd0u);
    wr16((c.sbase[3] + (uint32_t)(0xDFD06u)), (c.r[0] & 0xFFFFu));
    // 101cd6  mov word ptr [0xdfd06], ax
    X86_AT(c, 0x101cd6u);
    wr16((c.sbase[3] + (uint32_t)(0xDFD06u)), (c.r[0] & 0xFFFFu));
    // 101cdc  mov ax, 0x2c
    X86_AT(c, 0x101cdcu);
    s16(c, 0, 0x2Cu);
    // 101ce0  arpl ax, bx
    X86_AT(c, 0x101ce0u);
    { uint32_t d = (c.r[0] & 0xFFFFu), s = (c.r[3] & 0xFFFFu); if ((d & 3) < (s & 3)) { s16(c, 0, (d & ~3u) | (s & 3)); c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 101ce2  mov word ptr [0xdfd2c], ax
    X86_AT(c, 0x101ce2u);
    wr16((c.sbase[3] + (uint32_t)(0xDFD2Cu)), (c.r[0] & 0xFFFFu));
    // 101ce8  xor eax, eax
    X86_AT(c, 0x101ce8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 101cea  mov al, byte ptr es:[0x80]
    X86_AT(c, 0x101ceau);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(0x80u))));
    // 101cf0  mov dword ptr [0xdfd24], eax
    X86_AT(c, 0x101cf0u);
    wr32((c.sbase[3] + (uint32_t)(0xDFD24u)), c.r[0]);
    // 101cf5  add eax, 3
    X86_AT(c, 0x101cf5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x3u, 0, 4); }
    // 101cfa  and al, 0xfc
    X86_AT(c, 0x101cfau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFCu, 1)); }
    // 101cfc  sub esp, eax
    X86_AT(c, 0x101cfcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 101cfe  mov edi, esp
    X86_AT(c, 0x101cfeu);
    c.r[7] = c.r[4];
    // 101d00  mov dword ptr [0xdfd18], edi
    X86_AT(c, 0x101d00u);
    wr32((c.sbase[3] + (uint32_t)(0xDFD18u)), c.r[7]);
    // 101d06  push edx
    X86_AT(c, 0x101d06u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 101d07  mov ecx, eax
    X86_AT(c, 0x101d07u);
    c.r[1] = c.r[0];
    // 101d09  push ds
    X86_AT(c, 0x101d09u);
    push32(c, c.sreg[3]);
    // 101d0a  push es
    X86_AT(c, 0x101d0au);
    push32(c, c.sreg[0]);
    // 101d0b  pop ds
    X86_AT(c, 0x101d0bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 101d0c  push es
    X86_AT(c, 0x101d0cu);
    push32(c, c.sreg[0]);
    // 101d0d  push ss
    X86_AT(c, 0x101d0du);
    push32(c, c.sreg[2]);
    // 101d0e  pop es
    X86_AT(c, 0x101d0eu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 101d0f  mov esi, 0x81
    X86_AT(c, 0x101d0fu);
    c.r[6] = 0x81u;
    // 101d14  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x101d14u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 101d16  pop es
    X86_AT(c, 0x101d16u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 101d17  pop ds
    X86_AT(c, 0x101d17u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_101d18:
    X86_TICK(c, 41);
    // 101d18  sub eax, eax
    X86_AT(c, 0x101d18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 101d1a  mov ah, 0x30
    X86_AT(c, 0x101d1au);
    s8(c, 4, 0x30u);
    // 101d1c  int 0x21
    X86_AT(c, 0x101d1cu);
    x86_int(c, 0x21, 0x101d1eu);
    X86_TICK(c, 14);
    // 101d1e  mov word ptr [0xdfd3c], ax
    X86_AT(c, 0x101d1eu);
    wr16((c.sbase[3] + (uint32_t)(0xDFD3Cu)), (c.r[0] & 0xFFFFu));
    // 101d24  cmp byte ptr [0xdfd3e], 1
    X86_AT(c, 0x101d24u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD3Eu))), 0x1u, 0, 1);
    // 101d2b  je 0x101d75
    X86_AT(c, 0x101d2bu);
    if (x86_cc(c, 4)) { goto L_101d75; }
    X86_TICK(c, 10);
    // 101d2d  shr eax, 0x10
    X86_AT(c, 0x101d2du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 101d30  cmp ax, 0x4458
    X86_AT(c, 0x101d30u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x4458u, 0, 2);
    // 101d34  jne 0x101d38
    X86_AT(c, 0x101d34u);
    if (x86_cc(c, 5)) { goto L_101d38; }
    X86_TICK(c, 7);
    // 101d36  jmp 0x101d75
    X86_AT(c, 0x101d36u);
    goto L_101d75;
L_101d38:
    X86_TICK(c, 13);
    // 101d38  mov byte ptr [0xdfd3e], 3
    X86_AT(c, 0x101d38u);
    wr8((c.sbase[3] + (uint32_t)(0xDFD3Eu)), 0x3u);
    // 101d3f  mov ebx, dword ptr [0xdfd08]
    X86_AT(c, 0x101d3fu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xDFD08u)));
    // 101d45  jmp 0x101d75
    X86_AT(c, 0x101d45u);
    goto L_101d75;
L_101d75:
    X86_TICK(c, 8);
    // 101d75  les edi, fword ptr [0xdfd28]
    X86_AT(c, 0x101d75u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFD28u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 101d7b  xor eax, eax
    X86_AT(c, 0x101d7bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_101d7d:
    X86_TICK(c, 12);
    // 101d7d  cmp dword ptr es:[edi], 0x37384f4e
    X86_AT(c, 0x101d7du);
    (void)x86_sub(c, rd32((c.sbase[0] + (uint32_t)(c.r[7]))), 0x37384F4Eu, 0, 4);
    // 101d84  jne 0x101dd0
    X86_AT(c, 0x101d84u);
    if (x86_cc(c, 5)) { goto L_101dd0; }
    X86_TICK(c, 12);
    // 101d86  cmp byte ptr es:[edi + 4], 0x3d
    X86_AT(c, 0x101d86u);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u))), 0x3Du, 0, 1);
    // 101d8b  jne 0x101dd0
    X86_AT(c, 0x101d8bu);
    if (x86_cc(c, 5)) { goto L_101dd0; }
    X86_TICK(c, 16);
    // 101d8d  push eax
    X86_AT(c, 0x101d8du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 101d8e  push edi
    X86_AT(c, 0x101d8eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 101d8f  cmp word ptr [0xdfd2f], 0
    X86_AT(c, 0x101d8fu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xDFD2Fu))), 0x0u, 0, 2);
    // 101d97  je 0x101dce
    X86_AT(c, 0x101d97u);
    if (x86_cc(c, 4)) { goto L_101dce; }
    X86_TICK(c, 29);
    // 101d99  mov word ptr [0xdfd2f], 0
    X86_AT(c, 0x101d99u);
    wr16((c.sbase[3] + (uint32_t)(0xDFD2Fu)), 0x0u);
    // 101da2  add edi, 5
    X86_AT(c, 0x101da2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x5u, 0, 4); }
    // 101da5  mov esi, edi
    X86_AT(c, 0x101da5u);
    c.r[6] = c.r[7];
    // 101da7  mov al, 0x20
    X86_AT(c, 0x101da7u);
    s8(c, 0, 0x20u);
    // 101da9  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x101da9u);
    x86_string(c, 4, 1, 243, 4, 3);
    // 101dab  dec edi
    X86_AT(c, 0x101dabu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 101dac  cmp byte ptr es:[edi], 0
    X86_AT(c, 0x101dacu);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 101db0  je 0x101dce
    X86_AT(c, 0x101db0u);
    if (x86_cc(c, 4)) { goto L_101dce; }
    X86_TICK(c, 2);
    // 101db2  mov edi, esi
    X86_AT(c, 0x101db2u);
    c.r[7] = c.r[6];
L_101db4:
    X86_TICK(c, 11);
    // 101db4  mov dl, byte ptr es:[edi]
    X86_AT(c, 0x101db4u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 101db7  and dl, dl
    X86_AT(c, 0x101db7u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 2), 1)); }
    // 101db9  je 0x101dc2
    X86_AT(c, 0x101db9u);
    if (x86_cc(c, 4)) { goto L_101dc2; }
    X86_TICK(c, 39);
    // 101dbb  mov ah, 6
    X86_AT(c, 0x101dbbu);
    s8(c, 4, 0x6u);
    // 101dbd  int 0x21
    X86_AT(c, 0x101dbdu);
    x86_int(c, 0x21, 0x101dbfu);
    X86_TICK(c, 9);
    // 101dbf  inc edi
    X86_AT(c, 0x101dbfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 101dc0  jmp 0x101db4
    X86_AT(c, 0x101dc0u);
    X86_POLL(c, 0x101db4u); goto L_101db4;
L_101dc2:
    X86_TICK(c, 41);
    // 101dc2  mov dl, 0xd
    X86_AT(c, 0x101dc2u);
    s8(c, 2, 0xDu);
    // 101dc4  mov ah, 6
    X86_AT(c, 0x101dc4u);
    s8(c, 4, 0x6u);
    // 101dc6  int 0x21
    X86_AT(c, 0x101dc6u);
    x86_int(c, 0x21, 0x101dc8u);
    X86_TICK(c, 41);
    // 101dc8  mov dl, 0xa
    X86_AT(c, 0x101dc8u);
    s8(c, 2, 0xAu);
    // 101dca  mov ah, 6
    X86_AT(c, 0x101dcau);
    s8(c, 4, 0x6u);
    // 101dcc  int 0x21
    X86_AT(c, 0x101dccu);
    x86_int(c, 0x21, 0x101dceu);
L_101dce:
    X86_TICK(c, 8);
    // 101dce  pop edi
    X86_AT(c, 0x101dceu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 101dcf  pop eax
    X86_AT(c, 0x101dcfu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_101dd0:
    X86_TICK(c, 21);
    // 101dd0  mov ecx, 0xffffffff
    X86_AT(c, 0x101dd0u);
    c.r[1] = 0xFFFFFFFFu;
    // 101dd5  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x101dd5u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 101dd7  cmp byte ptr es:[edi], 0
    X86_AT(c, 0x101dd7u);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 101ddb  jne 0x101d7d
    X86_AT(c, 0x101ddbu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x101d7du); goto L_101d7d; }
    X86_TICK(c, 14);
    // 101ddd  add edi, 3
    X86_AT(c, 0x101dddu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x3u, 0, 4); }
    // 101de0  cmp byte ptr [0xdfd3c], 3
    X86_AT(c, 0x101de0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD3Cu))), 0x3u, 0, 1);
    // 101de7  jb 0x101e09
    X86_AT(c, 0x101de7u);
    if (x86_cc(c, 2)) { goto L_101e09; }
    X86_TICK(c, 12);
    // 101de9  cmp byte ptr [0xdfd3e], 1
    X86_AT(c, 0x101de9u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD3Eu))), 0x1u, 0, 1);
    // 101df0  jne 0x101e16
    X86_AT(c, 0x101df0u);
    if (x86_cc(c, 5)) { goto L_101e16; }
    X86_TICK(c, 12);
    // 101df2  cmp byte ptr [0xdfd3e], 3
    X86_AT(c, 0x101df2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD3Eu))), 0x3u, 0, 1);
    // 101df9  je 0x101e16
    X86_AT(c, 0x101df9u);
    if (x86_cc(c, 4)) { goto L_101e16; }
    X86_TICK(c, 11);
    // 101dfb  mov dword ptr [0xdfd38], edi
    X86_AT(c, 0x101dfbu);
    wr32((c.sbase[3] + (uint32_t)(0xDFD38u)), c.r[7]);
    // 101e01  mov word ptr [0xdfd3c], ds
    X86_AT(c, 0x101e01u);
    wr16((c.sbase[3] + (uint32_t)(0xDFD3Cu)), (uint32_t)c.sreg[3]);
    // 101e07  jmp 0x101e48
    X86_AT(c, 0x101e07u);
    goto L_101e48;
L_101e09:
    X86_TICK(c, 13);
    // 101e09  xor edx, edx
    X86_AT(c, 0x101e09u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 101e0b  push edx
    X86_AT(c, 0x101e0bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 101e0c  mov dword ptr [0xdfd38], esp
    X86_AT(c, 0x101e0cu);
    wr32((c.sbase[3] + (uint32_t)(0xDFD38u)), c.r[4]);
    // 101e12  jmp 0x101e48
    X86_AT(c, 0x101e12u);
    goto L_101e48;
L_101e16:
    X86_TICK(c, 62);
    // 101e16  mov eax, es
    X86_AT(c, 0x101e16u);
    c.r[0] = (uint32_t)c.sreg[0];
    // 101e18  lsl eax, eax
    X86_AT(c, 0x101e18u);
    { uint32_t v; if (x86_lsl(c, (c.r[0] & 0xFFFFu), v)) { c.r[0] = v; c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 101e1b  xor eax, eax
    X86_AT(c, 0x101e1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 101e1d  sub ecx, ecx
    X86_AT(c, 0x101e1du);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 101e1f  dec ecx
    X86_AT(c, 0x101e1fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 101e20  mov ebx, edi
    X86_AT(c, 0x101e20u);
    c.r[3] = c.r[7];
    // 101e22  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x101e22u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 101e24  sub edi, ebx
    X86_AT(c, 0x101e24u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[3], 0, 4); }
    // 101e26  lea eax, [edi + 3]
    X86_AT(c, 0x101e26u);
    c.r[0] = (uint32_t)(c.r[7] + 0x3u);
    // 101e29  and eax, 0xfffc
    X86_AT(c, 0x101e29u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFCu, 4); }
    // 101e2e  sub esp, eax
    X86_AT(c, 0x101e2eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 101e30  mov dword ptr [0xdfd38], esp
    X86_AT(c, 0x101e30u);
    wr32((c.sbase[3] + (uint32_t)(0xDFD38u)), c.r[4]);
    // 101e36  mov ecx, edi
    X86_AT(c, 0x101e36u);
    c.r[1] = c.r[7];
    // 101e38  mov esi, ebx
    X86_AT(c, 0x101e38u);
    c.r[6] = c.r[3];
    // 101e3a  mov edi, esp
    X86_AT(c, 0x101e3au);
    c.r[7] = c.r[4];
    // 101e3c  push ds
    X86_AT(c, 0x101e3cu);
    push32(c, c.sreg[3]);
    // 101e3d  mov ds, word ptr [0xdfd2c]
    X86_AT(c, 0x101e3du);
    x86_load_seg(c, 3, rd16((c.sbase[3] + (uint32_t)(0xDFD2Cu))) & 0xFFFFu);
    // 101e43  push ss
    X86_AT(c, 0x101e43u);
    push32(c, c.sreg[2]);
    // 101e44  pop es
    X86_AT(c, 0x101e44u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 101e45  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x101e45u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 101e47  pop ds
    X86_AT(c, 0x101e47u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_101e48:
    X86_TICK(c, 33);
    // 101e48  mov eax, dword ptr [0xdfd24]
    X86_AT(c, 0x101e48u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFD24u)));
    // 101e4d  inc eax
    X86_AT(c, 0x101e4du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 101e4e  shr eax, 1
    X86_AT(c, 0x101e4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 101e50  inc eax
    X86_AT(c, 0x101e50u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 101e51  inc eax
    X86_AT(c, 0x101e51u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 101e52  shl eax, 2
    X86_AT(c, 0x101e52u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 101e55  sub esp, eax
    X86_AT(c, 0x101e55u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 101e57  mov dword ptr [0xdfd1e], esp
    X86_AT(c, 0x101e57u);
    wr32((c.sbase[3] + (uint32_t)(0xDFD1Eu)), c.r[4]);
    // 101e5d  push ds
    X86_AT(c, 0x101e5du);
    push32(c, c.sreg[3]);
    // 101e5e  pop es
    X86_AT(c, 0x101e5eu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 101e5f  call 0x103274
    X86_AT(c, 0x101e5fu);
    push32(c, 0x101e64u); f_00103274(c); X86_RET(c, 0x101e64u);
    X86_TICK(c, 7);
    // 101e64  call 0x1030dc
    X86_AT(c, 0x101e64u);
    push32(c, 0x101e69u); f_001030dc(c); X86_RET(c, 0x101e69u);
    X86_TICK(c, 14);
    // 101e69  push dword ptr [0xdfd1e]
    X86_AT(c, 0x101e69u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFD1Eu))); push32(c, v); }
    // 101e6f  sub eax, eax
    X86_AT(c, 0x101e6fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 101e71  call 0x103178
    X86_AT(c, 0x101e71u);
    push32(c, 0x101e76u); f_00103178(c); X86_RET(c, 0x101e76u);
    X86_TICK(c, 14);
    // 101e76  push eax
    X86_AT(c, 0x101e76u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 101e77  cmp byte ptr [0xdfd35], 1
    X86_AT(c, 0x101e77u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD35u))), 0x1u, 0, 1);
    // 101e7e  je 0x101ea0
    X86_AT(c, 0x101e7eu);
    if (x86_cc(c, 4)) { goto L_101ea0; }
    X86_TICK(c, 12);
    // 101e80  cmp word ptr [0xdfd43], 0xabcd
    X86_AT(c, 0x101e80u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xDFD43u))), 0xABCDu, 0, 2);
    // 101e89  jne 0x101ea0
    X86_AT(c, 0x101e89u);
    if (x86_cc(c, 5)) { goto L_101ea0; }
    X86_TICK(c, 15);
    // 101e8b  mov eax, dword ptr [0xdfd49]
    X86_AT(c, 0x101e8bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFD49u)));
    // 101e90  cmp eax, dword ptr [0xdfd45]
    X86_AT(c, 0x101e90u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xDFD45u))), 0, 4);
    // 101e96  jne 0x101ea0
    X86_AT(c, 0x101e96u);
    if (x86_cc(c, 5)) { goto L_101ea0; }
    X86_TICK(c, 11);
    // 101e98  mov edx, dword ptr [0xdfd49]
    X86_AT(c, 0x101e98u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xDFD49u)));
    // 101e9e  jmp 0x101ec7
    X86_AT(c, 0x101e9eu);
    goto L_101ec7;
L_101ea0:
    X86_TICK(c, 12);
    // 101ea0  cmp byte ptr [0xdfd2f], 1
    X86_AT(c, 0x101ea0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD2Fu))), 0x1u, 0, 1);
    // 101ea7  je 0x101ed0
    X86_AT(c, 0x101ea7u);
    if (x86_cc(c, 4)) { goto L_101ed0; }
    X86_TICK(c, 12);
    // 101ea9  cmp word ptr [0xdfd4d], 0xabcd
    X86_AT(c, 0x101ea9u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xDFD4Du))), 0xABCDu, 0, 2);
    // 101eb2  jne 0x101ed0
    X86_AT(c, 0x101eb2u);
    if (x86_cc(c, 5)) { goto L_101ed0; }
    X86_TICK(c, 15);
    // 101eb4  mov eax, dword ptr [0xdfd53]
    X86_AT(c, 0x101eb4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFD53u)));
    // 101eb9  cmp eax, dword ptr [0xdfd4f]
    X86_AT(c, 0x101eb9u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xDFD4Fu))), 0, 4);
    // 101ebf  jne 0x101ed0
    X86_AT(c, 0x101ebfu);
    if (x86_cc(c, 5)) { goto L_101ed0; }
    X86_TICK(c, 4);
    // 101ec1  mov edx, dword ptr [0xdfd53]
    X86_AT(c, 0x101ec1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xDFD53u)));
L_101ec7:
    X86_TICK(c, 39);
    // 101ec7  mov ah, 9
    X86_AT(c, 0x101ec7u);
    s8(c, 4, 0x9u);
    // 101ec9  int 0x21
    X86_AT(c, 0x101ec9u);
    x86_int(c, 0x21, 0x101ecbu);
    X86_TICK(c, 7);
    // 101ecb  jmp 0x101a27
    X86_AT(c, 0x101ecbu);
    X86_POLL(c, 0x101a27u); goto L_101a27;
L_101ed0:
    X86_TICK(c, 12);
    // 101ed0  cmp byte ptr [0xdfd33], 1
    X86_AT(c, 0x101ed0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD33u))), 0x1u, 0, 1);
    // 101ed7  je 0x101f04
    X86_AT(c, 0x101ed7u);
    if (x86_cc(c, 4)) { goto L_101f04; }
    X86_TICK(c, 12);
    // 101ed9  cmp word ptr [0xdfd57], 0xabcd
    X86_AT(c, 0x101ed9u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xDFD57u))), 0xABCDu, 0, 2);
    // 101ee2  jne 0x101f04
    X86_AT(c, 0x101ee2u);
    if (x86_cc(c, 5)) { goto L_101f04; }
    X86_TICK(c, 43);
    // 101ee4  mov edx, dword ptr cs:[0x101f00]
    X86_AT(c, 0x101ee4u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(0x101F00u)));
    // 101eeb  mov ah, 9
    X86_AT(c, 0x101eebu);
    s8(c, 4, 0x9u);
    // 101eed  int 0x21
    X86_AT(c, 0x101eedu);
    x86_int(c, 0x21, 0x101eefu);
    X86_TICK(c, 13);
    // 101eef  mov edx, dword ptr [0xdfd53]
    X86_AT(c, 0x101eefu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xDFD53u)));
    // 101ef5  add edx, 0xa
    X86_AT(c, 0x101ef5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xAu, 0, 4); }
    // 101ef8  jmp 0x101ec7
    X86_AT(c, 0x101ef8u);
    X86_POLL(c, 0x101ec7u); goto L_101ec7;
L_101f04:
    X86_TICK(c, 7);
    // 101f04  jmp 0x101a22
    X86_AT(c, 0x101f04u);
    X86_POLL(c, 0x101a22u); goto L_101a22;
    x86_fault(c, 0x101a20u, "ran off the end of a function");
}
void f_00101a31(X86Cpu& c) {
    X86_TICK(c, 10);
    // 101a31  ret 
    X86_AT(c, 0x101a31u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101a31u, "ran off the end of a function");
}
void f_00101f0a(X86Cpu& c) {
    X86_TICK(c, 16);
    // 101f0a  mov eax, dword ptr [0xdfd08]
    X86_AT(c, 0x101f0au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFD08u)));
    // 101f0f  add eax, 0x10
    X86_AT(c, 0x101f0fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 101f14  ret 
    X86_AT(c, 0x101f14u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101f0au, "ran off the end of a function");
}
void f_00101f16(X86Cpu& c) {
    X86_TICK(c, 14);
    // 101f16  mov eax, dword ptr [0xdfd10]
    X86_AT(c, 0x101f16u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFD10u)));
    // 101f1b  ret 
    X86_AT(c, 0x101f1bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101f16u, "ran off the end of a function");
}
void f_00101f1c(X86Cpu& c) {
    X86_TICK(c, 14);
    // 101f1c  push ebx
    X86_AT(c, 0x101f1cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 101f1d  cmp byte ptr [0xdfd3e], 2
    X86_AT(c, 0x101f1du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD3Eu))), 0x2u, 0, 1);
    // 101f24  je 0x101f61
    X86_AT(c, 0x101f24u);
    if (x86_cc(c, 4)) { goto L_101f61; }
    X86_TICK(c, 7);
    // 101f26  jmp 0x101f61
    X86_AT(c, 0x101f26u);
    goto L_101f61;
L_101f61:
    X86_TICK(c, 14);
    // 101f61  pop ebx
    X86_AT(c, 0x101f61u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 101f62  ret 4
    X86_AT(c, 0x101f62u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x101f1cu, "ran off the end of a function");
}
void f_00101f65(X86Cpu& c) {
    X86_TICK(c, 10);
    // 101f65  ret 8
    X86_AT(c, 0x101f65u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x101f65u, "ran off the end of a function");
}
void f_00101f70(X86Cpu& c) {
    X86_TICK(c, 24);
    // 101f70  enter 8, 0
    X86_AT(c, 0x101f70u);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 101f74  push ebx
    X86_AT(c, 0x101f74u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 101f75  push esi
    X86_AT(c, 0x101f75u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 101f76  push edi
    X86_AT(c, 0x101f76u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 101f77  cmp byte ptr [0xdfd2f], 0
    X86_AT(c, 0x101f77u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD2Fu))), 0x0u, 0, 1);
    // 101f7e  je 0x101f96
    X86_AT(c, 0x101f7eu);
    if (x86_cc(c, 4)) { goto L_101f96; }
    X86_TICK(c, 20);
    // 101f80  push dword ptr [0xdfdf8]
    X86_AT(c, 0x101f80u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u))); push32(c, v); }
    // 101f86  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x101f86u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 101f8b  sub eax, 0xc
    X86_AT(c, 0x101f8bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 101f8e  push eax
    X86_AT(c, 0x101f8eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 101f8f  call 0x103c8d
    X86_AT(c, 0x101f8fu);
    push32(c, 0x101f94u); f_00103c8d(c); X86_RET(c, 0x101f94u);
    X86_TICK(c, 7);
    // 101f94  jmp 0x101fea
    X86_AT(c, 0x101f94u);
    goto L_101fea;
L_101f96:
    X86_TICK(c, 33);
    // 101f96  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x101f96u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 101f9b  lea esi, [eax - 0xc]
    X86_AT(c, 0x101f9bu);
    c.r[6] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 101f9e  xchg edi, eax
    X86_AT(c, 0x101f9eu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 101f9f  mov ax, word ptr [edi + 8]
    X86_AT(c, 0x101f9fu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))));
    // 101fa3  cmp ax, word ptr [esi + 8]
    X86_AT(c, 0x101fa3u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))), 0, 2);
    // 101fa7  setb al
    X86_AT(c, 0x101fa7u);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 101faa  xchg ebx, eax
    X86_AT(c, 0x101faau);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 101fab  and bl, bl
    X86_AT(c, 0x101fabu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 101fad  je 0x101fb7
    X86_AT(c, 0x101fadu);
    if (x86_cc(c, 4)) { goto L_101fb7; }
    X86_TICK(c, 8);
    // 101faf  mov dword ptr [ebp - 8], esi
    X86_AT(c, 0x101fafu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[6]);
    // 101fb2  mov esi, edi
    X86_AT(c, 0x101fb2u);
    c.r[6] = c.r[7];
    // 101fb4  mov edi, dword ptr [ebp - 8]
    X86_AT(c, 0x101fb4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
L_101fb7:
    X86_TICK(c, 19);
    // 101fb7  mov ax, word ptr [edi + 8]
    X86_AT(c, 0x101fb7u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))));
    // 101fbb  sub ax, word ptr [esi + 8]
    X86_AT(c, 0x101fbbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))), 0, 2)); }
    // 101fbf  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x101fbfu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 101fc3  cmp ax, 0x40
    X86_AT(c, 0x101fc3u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x40u, 0, 2);
    // 101fc7  jg 0x101fcf
    X86_AT(c, 0x101fc7u);
    if (x86_cc(c, 15)) { goto L_101fcf; }
    X86_TICK(c, 12);
    // 101fc9  cmp byte ptr [esi + 0xb], 0
    X86_AT(c, 0x101fc9u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xBu))), 0x0u, 0, 1);
    // 101fcd  je 0x101ff6
    X86_AT(c, 0x101fcdu);
    if (x86_cc(c, 4)) { goto L_101ff6; }
L_101fcf:
    X86_TICK(c, 7);
    // 101fcf  and bl, bl
    X86_AT(c, 0x101fcfu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 101fd1  jne 0x101fea
    X86_AT(c, 0x101fd1u);
    if (x86_cc(c, 5)) { goto L_101fea; }
    X86_TICK(c, 31);
    // 101fd3  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x101fd3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 101fd8  lea edx, [eax - 0xc]
    X86_AT(c, 0x101fd8u);
    c.r[2] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 101fdb  push esi
    X86_AT(c, 0x101fdbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 101fdc  push edi
    X86_AT(c, 0x101fdcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 101fdd  mov esi, eax
    X86_AT(c, 0x101fddu);
    c.r[6] = c.r[0];
    // 101fdf  mov edi, edx
    X86_AT(c, 0x101fdfu);
    c.r[7] = c.r[2];
    // 101fe1  mov ecx, 3
    X86_AT(c, 0x101fe1u);
    c.r[1] = 0x3u;
    // 101fe6  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x101fe6u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 101fe8  pop edi
    X86_AT(c, 0x101fe8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 101fe9  pop esi
    X86_AT(c, 0x101fe9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_101fea:
    X86_TICK(c, 14);
    // 101fea  add dword ptr [0xdfdf8], 0xfffffff4
    X86_AT(c, 0x101feau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFDF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 101ff1  jmp 0x102082
    X86_AT(c, 0x101ff1u);
    goto L_102082;
L_101ff6:
    X86_TICK(c, 11);
    // 101ff6  mov ax, word ptr [ebp - 2]
    X86_AT(c, 0x101ff6u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
    // 101ffa  and ax, ax
    X86_AT(c, 0x101ffau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 101ffd  je 0x102006
    X86_AT(c, 0x101ffdu);
    if (x86_cc(c, 4)) { goto L_102006; }
    X86_TICK(c, 11);
    // 101fff  push eax
    X86_AT(c, 0x101fffu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 102000  push esi
    X86_AT(c, 0x102000u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 102001  call 0x103f94
    X86_AT(c, 0x102001u);
    push32(c, 0x102006u); f_00103f94(c); X86_RET(c, 0x102006u);
L_102006:
    X86_TICK(c, 15);
    // 102006  mov al, byte ptr [edi + 0xa]
    X86_AT(c, 0x102006u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu))));
    // 102009  cmp al, byte ptr [esi + 0xa]
    X86_AT(c, 0x102009u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu))), 0, 1);
    // 10200c  jne 0x10202d
    X86_AT(c, 0x10200cu);
    if (x86_cc(c, 5)) { goto L_10202d; }
    X86_TICK(c, 13);
    // 10200e  push 4
    X86_AT(c, 0x10200eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 102010  push esi
    X86_AT(c, 0x102010u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 102011  push edi
    X86_AT(c, 0x102011u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 102012  call 0x103ea0
    X86_AT(c, 0x102012u);
    push32(c, 0x102017u); f_00103ea0(c); X86_RET(c, 0x102017u);
    X86_TICK(c, 7);
    // 102017  and al, al
    X86_AT(c, 0x102017u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 102019  je 0x102058
    X86_AT(c, 0x102019u);
    if (x86_cc(c, 4)) { goto L_102058; }
    X86_TICK(c, 11);
    // 10201b  push 1
    X86_AT(c, 0x10201bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 10201d  push edi
    X86_AT(c, 0x10201du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10201e  call 0x103f94
    X86_AT(c, 0x10201eu);
    push32(c, 0x102023u); f_00103f94(c); X86_RET(c, 0x102023u);
    X86_TICK(c, 20);
    // 102023  or byte ptr [edi + 7], 0x80
    X86_AT(c, 0x102023u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x7u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
    // 102027  inc word ptr [edi + 8]
    X86_AT(c, 0x102027u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 10202b  jmp 0x102058
    X86_AT(c, 0x10202bu);
    goto L_102058;
L_10202d:
    X86_TICK(c, 12);
    // 10202d  cmp byte ptr [edi + 0xa], 0
    X86_AT(c, 0x10202du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu))), 0x0u, 0, 1);
    // 102031  je 0x10203e
    X86_AT(c, 0x102031u);
    if (x86_cc(c, 4)) { goto L_10203e; }
    X86_TICK(c, 13);
    // 102033  push 4
    X86_AT(c, 0x102033u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 102035  push esi
    X86_AT(c, 0x102035u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 102036  push edi
    X86_AT(c, 0x102036u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 102037  call 0x103ef2
    X86_AT(c, 0x102037u);
    push32(c, 0x10203cu); f_00103ef2(c); X86_RET(c, 0x10203cu);
    X86_TICK(c, 7);
    // 10203c  jmp 0x102047
    X86_AT(c, 0x10203cu);
    goto L_102047;
L_10203e:
    X86_TICK(c, 13);
    // 10203e  push 4
    X86_AT(c, 0x10203eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 102040  push esi
    X86_AT(c, 0x102040u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 102041  push edi
    X86_AT(c, 0x102041u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 102042  call 0x103ec9
    X86_AT(c, 0x102042u);
    push32(c, 0x102047u); f_00103ec9(c); X86_RET(c, 0x102047u);
L_102047:
    X86_TICK(c, 14);
    // 102047  mov byte ptr [edi + 0xa], al
    X86_AT(c, 0x102047u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), g8(c, 0));
    // 10204a  cmp byte ptr [edi + 0xa], 0
    X86_AT(c, 0x10204au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu))), 0x0u, 0, 1);
    // 10204e  je 0x102058
    X86_AT(c, 0x10204eu);
    if (x86_cc(c, 4)) { goto L_102058; }
    X86_TICK(c, 11);
    // 102050  push 4
    X86_AT(c, 0x102050u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 102052  push edi
    X86_AT(c, 0x102052u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 102053  call 0x103f1e
    X86_AT(c, 0x102053u);
    push32(c, 0x102058u); f_00103f1e(c); X86_RET(c, 0x102058u);
L_102058:
    X86_TICK(c, 14);
    // 102058  add dword ptr [0xdfdf8], 0xfffffff4
    X86_AT(c, 0x102058u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFDF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 10205f  and bl, bl
    X86_AT(c, 0x10205fu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 102061  jne 0x102077
    X86_AT(c, 0x102061u);
    if (x86_cc(c, 5)) { goto L_102077; }
    X86_TICK(c, 29);
    // 102063  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x102063u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 102068  push esi
    X86_AT(c, 0x102068u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 102069  push edi
    X86_AT(c, 0x102069u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10206a  mov esi, edi
    X86_AT(c, 0x10206au);
    c.r[6] = c.r[7];
    // 10206c  mov edi, eax
    X86_AT(c, 0x10206cu);
    c.r[7] = c.r[0];
    // 10206e  mov ecx, 3
    X86_AT(c, 0x10206eu);
    c.r[1] = 0x3u;
    // 102073  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x102073u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 102075  pop edi
    X86_AT(c, 0x102075u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 102076  pop esi
    X86_AT(c, 0x102076u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_102077:
    X86_TICK(c, 12);
    // 102077  push dword ptr [0xdfdf8]
    X86_AT(c, 0x102077u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u))); push32(c, v); }
    // 10207d  call 0x104030
    X86_AT(c, 0x10207du);
    push32(c, 0x102082u); f_00104030(c); X86_RET(c, 0x102082u);
L_102082:
    X86_TICK(c, 28);
    // 102082  pop edi
    X86_AT(c, 0x102082u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 102083  pop esi
    X86_AT(c, 0x102083u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 102084  pop ebx
    X86_AT(c, 0x102084u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 102085  leave 
    X86_AT(c, 0x102085u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 102086  ret 
    X86_AT(c, 0x102086u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x101f70u, "ran off the end of a function");
}
void f_00102088(X86Cpu& c) {
    X86_TICK(c, 22);
    // 102088  enter 0x10, 0
    X86_AT(c, 0x102088u);
    x86_enter(c, 0x10u, 0x0u, 4);
    // 10208c  push esi
    X86_AT(c, 0x10208cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 10208d  push edi
    X86_AT(c, 0x10208du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10208e  cmp byte ptr [0xdfd2f], 0
    X86_AT(c, 0x10208eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD2Fu))), 0x0u, 0, 1);
    // 102095  je 0x1020b3
    X86_AT(c, 0x102095u);
    if (x86_cc(c, 4)) { goto L_1020b3; }
    X86_TICK(c, 12);
    // 102097  push dword ptr [0xdfdf8]
    X86_AT(c, 0x102097u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u))); push32(c, v); }
    // 10209d  call 0x103d1e
    X86_AT(c, 0x10209du);
    push32(c, 0x1020a2u); f_00103d1e(c); X86_RET(c, 0x1020a2u);
    X86_TICK(c, 14);
    // 1020a2  add dword ptr [0xdfdf8], 0xfffffff4
    X86_AT(c, 0x1020a2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFDF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 1020a9  call 0x103d41
    X86_AT(c, 0x1020a9u);
    push32(c, 0x1020aeu); f_00103d41(c); X86_RET(c, 0x1020aeu);
    X86_TICK(c, 7);
    // 1020ae  jmp 0x102129
    X86_AT(c, 0x1020aeu);
    goto L_102129;
L_1020b3:
    X86_TICK(c, 51);
    // 1020b3  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x1020b3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 1020b8  lea edx, [ebp - 0x10]
    X86_AT(c, 0x1020b8u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 1020bb  push esi
    X86_AT(c, 0x1020bbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1020bc  push edi
    X86_AT(c, 0x1020bcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1020bd  mov esi, eax
    X86_AT(c, 0x1020bdu);
    c.r[6] = c.r[0];
    // 1020bf  mov edi, edx
    X86_AT(c, 0x1020bfu);
    c.r[7] = c.r[2];
    // 1020c1  mov ecx, 3
    X86_AT(c, 0x1020c1u);
    c.r[1] = 0x3u;
    // 1020c6  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x1020c6u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 1020c8  pop edi
    X86_AT(c, 0x1020c8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1020c9  pop esi
    X86_AT(c, 0x1020c9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1020ca  add dword ptr [0xdfdf8], 0xfffffff4
    X86_AT(c, 0x1020cau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFDF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 1020d1  mov di, word ptr [ebp - 8]
    X86_AT(c, 0x1020d1u);
    s16(c, 7, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))));
    // 1020d5  sub di, 0x3fff
    X86_AT(c, 0x1020d5u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_sub(c, v, 0x3FFFu, 0, 2)); }
    // 1020da  cmp di, 0x20
    X86_AT(c, 0x1020dau);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x20u, 0, 2);
    // 1020de  jl 0x1020e7
    X86_AT(c, 0x1020deu);
    if (x86_cc(c, 12)) { goto L_1020e7; }
    X86_TICK(c, 9);
    // 1020e0  mov eax, 0xffffffff
    X86_AT(c, 0x1020e0u);
    c.r[0] = 0xFFFFFFFFu;
    // 1020e5  jmp 0x102129
    X86_AT(c, 0x1020e5u);
    goto L_102129;
L_1020e7:
    X86_TICK(c, 7);
    // 1020e7  and di, di
    X86_AT(c, 0x1020e7u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & (c.r[7] & 0xFFFFu), 2)); }
    // 1020ea  jge 0x1020f0
    X86_AT(c, 0x1020eau);
    if (x86_cc(c, 13)) { goto L_1020f0; }
    X86_TICK(c, 9);
    // 1020ec  sub eax, eax
    X86_AT(c, 0x1020ecu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 1020ee  jmp 0x102129
    X86_AT(c, 0x1020eeu);
    goto L_102129;
L_1020f0:
    X86_TICK(c, 13);
    // 1020f0  mov si, 0x20
    X86_AT(c, 0x1020f0u);
    s16(c, 6, 0x20u);
    // 1020f4  sub esi, edi
    X86_AT(c, 0x1020f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[7], 0, 4); }
    // 1020f6  dec esi
    X86_AT(c, 0x1020f6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 1020f7  cmp si, 0x10
    X86_AT(c, 0x1020f7u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x10u, 0, 2);
    // 1020fb  jb 0x102105
    X86_AT(c, 0x1020fbu);
    if (x86_cc(c, 2)) { goto L_102105; }
    X86_TICK(c, 9);
    // 1020fd  shr dword ptr [ebp - 0xc], 0x10
    X86_AT(c, 0x1020fdu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) wr32(ea, r); }
    // 102101  sub si, 0x10
    X86_AT(c, 0x102101u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_sub(c, v, 0x10u, 0, 2)); }
L_102105:
    X86_TICK(c, 7);
    // 102105  cmp si, 8
    X86_AT(c, 0x102105u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x8u, 0, 2);
    // 102109  jb 0x102113
    X86_AT(c, 0x102109u);
    if (x86_cc(c, 2)) { goto L_102113; }
    X86_TICK(c, 9);
    // 10210b  shr dword ptr [ebp - 0xc], 8
    X86_AT(c, 0x10210bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) wr32(ea, r); }
    // 10210f  sub si, 8
    X86_AT(c, 0x10210fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_sub(c, v, 0x8u, 0, 2)); }
L_102113:
    X86_TICK(c, 23);
    // 102113  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0x102113u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 102116  mov ecx, esi
    X86_AT(c, 0x102116u);
    c.r[1] = c.r[6];
    // 102118  shr eax, cl
    X86_AT(c, 0x102118u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 10211a  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x10211au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 10211d  cmp byte ptr [ebp - 6], 0
    X86_AT(c, 0x10211du);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))), 0x0u, 0, 1);
    // 102121  je 0x102126
    X86_AT(c, 0x102121u);
    if (x86_cc(c, 4)) { goto L_102126; }
    X86_TICK(c, 6);
    // 102123  neg dword ptr [ebp - 4]
    X86_AT(c, 0x102123u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_neg(c, v, 4)); }
L_102126:
    X86_TICK(c, 4);
    // 102126  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x102126u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_102129:
    X86_TICK(c, 24);
    // 102129  pop edi
    X86_AT(c, 0x102129u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10212a  pop esi
    X86_AT(c, 0x10212au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 10212b  leave 
    X86_AT(c, 0x10212bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 10212c  ret 
    X86_AT(c, 0x10212cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x102088u, "ran off the end of a function");
}
void f_00102130(X86Cpu& c) {
    X86_TICK(c, 12);
    // 102130  cmp byte ptr [0xdfd2f], 0
    X86_AT(c, 0x102130u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD2Fu))), 0x0u, 0, 1);
    // 102137  je 0x102152
    X86_AT(c, 0x102137u);
    if (x86_cc(c, 4)) { goto L_102152; }
    X86_TICK(c, 12);
    // 102139  push dword ptr [0xdfdf8]
    X86_AT(c, 0x102139u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u))); push32(c, v); }
    // 10213f  call 0x103d1e
    X86_AT(c, 0x10213fu);
    push32(c, 0x102144u); f_00103d1e(c); X86_RET(c, 0x102144u);
    X86_TICK(c, 14);
    // 102144  add dword ptr [0xdfdf8], 0xfffffff4
    X86_AT(c, 0x102144u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFDF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 10214b  call 0x103d5c
    X86_AT(c, 0x10214bu);
    push32(c, 0x102150u); f_00103d5c(c); X86_RET(c, 0x102150u);
    X86_TICK(c, 7);
    // 102150  jmp 0x102178
    X86_AT(c, 0x102150u);
    goto L_102178;
L_102152:
    X86_TICK(c, 9);
    // 102152  push 0xe2bc
    X86_AT(c, 0x102152u);
    { uint32_t v = 0xE2BCu; push32(c, v); }
    // 102157  call 0x1040b8
    X86_AT(c, 0x102157u);
    push32(c, 0x10215cu); f_001040b8(c); X86_RET(c, 0x10215cu);
    X86_TICK(c, 16);
    // 10215c  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x10215cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 102161  cmp byte ptr [eax - 2], 0
    X86_AT(c, 0x102161u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 102165  je 0x10216e
    X86_AT(c, 0x102165u);
    if (x86_cc(c, 4)) { goto L_10216e; }
    X86_TICK(c, 7);
    // 102167  call 0x1041c0
    X86_AT(c, 0x102167u);
    push32(c, 0x10216cu); f_001041c0(c); X86_RET(c, 0x10216cu);
    X86_TICK(c, 7);
    // 10216c  jmp 0x102173
    X86_AT(c, 0x10216cu);
    goto L_102173;
L_10216e:
    X86_TICK(c, 7);
    // 10216e  call 0x101f70
    X86_AT(c, 0x10216eu);
    push32(c, 0x102173u); f_00101f70(c); X86_RET(c, 0x102173u);
L_102173:
    X86_TICK(c, 7);
    // 102173  call 0x102088
    X86_AT(c, 0x102173u);
    push32(c, 0x102178u); f_00102088(c); X86_RET(c, 0x102178u);
L_102178:
    X86_TICK(c, 10);
    // 102178  ret 
    X86_AT(c, 0x102178u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x102130u, "ran off the end of a function");
}
void f_0010217c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 10217c  call 0x104228
    X86_AT(c, 0x10217cu);
    push32(c, 0x102181u); f_00104228(c); X86_RET(c, 0x102181u);
    X86_TICK(c, 7);
    // 102181  and ax, ax
    X86_AT(c, 0x102181u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 102184  jle 0x10218b
    X86_AT(c, 0x102184u);
    if (x86_cc(c, 14)) { goto L_10218b; }
    X86_TICK(c, 7);
    // 102186  call 0x104158
    X86_AT(c, 0x102186u);
    push32(c, 0x10218bu); f_00104158(c); X86_RET(c, 0x10218bu);
L_10218b:
    X86_TICK(c, 17);
    // 10218b  add dword ptr [0xdfdf8], 0xfffffff4
    X86_AT(c, 0x10218bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFDF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 102192  ret 
    X86_AT(c, 0x102192u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10217cu, "ran off the end of a function");
}
void f_00102194(X86Cpu& c) {
    X86_TICK(c, 7);
    // 102194  call 0x104228
    X86_AT(c, 0x102194u);
    push32(c, 0x102199u); f_00104228(c); X86_RET(c, 0x102199u);
    X86_TICK(c, 7);
    // 102199  and ax, ax
    X86_AT(c, 0x102199u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 10219c  jge 0x1021a3
    X86_AT(c, 0x10219cu);
    if (x86_cc(c, 13)) { goto L_1021a3; }
    X86_TICK(c, 7);
    // 10219e  call 0x104158
    X86_AT(c, 0x10219eu);
    push32(c, 0x1021a3u); f_00104158(c); X86_RET(c, 0x1021a3u);
L_1021a3:
    X86_TICK(c, 17);
    // 1021a3  add dword ptr [0xdfdf8], 0xfffffff4
    X86_AT(c, 0x1021a3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFDF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 1021aa  ret 
    X86_AT(c, 0x1021aau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x102194u, "ran off the end of a function");
}
void f_001021ac(X86Cpu& c) {
    X86_TICK(c, 33);
    // 1021ac  push ebp
    X86_AT(c, 0x1021acu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 1021ad  mov ebp, esp
    X86_AT(c, 0x1021adu);
    c.r[5] = c.r[4];
    // 1021af  push edi
    X86_AT(c, 0x1021afu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1021b0  mov edi, dword ptr [0xdfdf8]
    X86_AT(c, 0x1021b0u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 1021b6  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x1021b6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 1021b9  mov dword ptr [edi + 4], eax
    X86_AT(c, 0x1021b9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[0]);
    // 1021bc  sub eax, eax
    X86_AT(c, 0x1021bcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 1021be  mov dword ptr [edi], eax
    X86_AT(c, 0x1021beu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 1021c0  mov word ptr [edi + 8], 0x401e
    X86_AT(c, 0x1021c0u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), 0x401Eu);
    // 1021c6  cmp eax, dword ptr [edi + 4]
    X86_AT(c, 0x1021c6u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4);
    // 1021c9  je 0x1021f1
    X86_AT(c, 0x1021c9u);
    if (x86_cc(c, 4)) { goto L_1021f1; }
    X86_TICK(c, 11);
    // 1021cb  cmp ax, word ptr [edi + 6]
    X86_AT(c, 0x1021cbu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))), 0, 2);
    // 1021cf  jne 0x1021e2
    X86_AT(c, 0x1021cfu);
    if (x86_cc(c, 5)) { goto L_1021e2; }
    X86_TICK(c, 15);
    // 1021d1  mov dx, word ptr [edi + 4]
    X86_AT(c, 0x1021d1u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))));
    // 1021d5  mov word ptr [edi + 6], dx
    X86_AT(c, 0x1021d5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 1021d9  mov word ptr [edi + 4], ax
    X86_AT(c, 0x1021d9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 1021dd  sub word ptr [edi + 8], 0x10
    X86_AT(c, 0x1021ddu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, 0x10u, 0, 2)); }
L_1021e2:
    X86_TICK(c, 12);
    // 1021e2  cmp byte ptr [edi + 7], 0
    X86_AT(c, 0x1021e2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x7u))), 0x0u, 0, 1);
    // 1021e6  jne 0x1021f1
    X86_AT(c, 0x1021e6u);
    if (x86_cc(c, 5)) { goto L_1021f1; }
    X86_TICK(c, 14);
    // 1021e8  shl dword ptr [edi + 4], 8
    X86_AT(c, 0x1021e8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) wr32(ea, r); }
    // 1021ec  sub word ptr [edi + 8], 8
    X86_AT(c, 0x1021ecu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, 0x8u, 0, 2)); }
L_1021f1:
    X86_TICK(c, 14);
    // 1021f1  mov byte ptr [edi + 0xb], 0
    X86_AT(c, 0x1021f1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), 0x0u);
    // 1021f5  push dword ptr [0xdfdf8]
    X86_AT(c, 0x1021f5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u))); push32(c, v); }
    // 1021fb  call 0x104030
    X86_AT(c, 0x1021fbu);
    push32(c, 0x102200u); f_00104030(c); X86_RET(c, 0x102200u);
    X86_TICK(c, 20);
    // 102200  pop edi
    X86_AT(c, 0x102200u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 102201  leave 
    X86_AT(c, 0x102201u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 102202  ret 4
    X86_AT(c, 0x102202u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x1021acu, "ran off the end of a function");
}
void f_00102208(X86Cpu& c) {
    X86_TICK(c, 17);
    // 102208  push ebp
    X86_AT(c, 0x102208u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 102209  mov ebp, esp
    X86_AT(c, 0x102209u);
    c.r[5] = c.r[4];
    // 10220b  push edi
    X86_AT(c, 0x10220bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10220c  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x10220cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 10220f  call 0x10400c
    X86_AT(c, 0x10220fu);
    push32(c, 0x102214u); f_0010400c(c); X86_RET(c, 0x102214u);
    X86_TICK(c, 12);
    // 102214  cmp byte ptr [0xdfd2f], 0
    X86_AT(c, 0x102214u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD2Fu))), 0x0u, 0, 1);
    // 10221b  je 0x102230
    X86_AT(c, 0x10221bu);
    if (x86_cc(c, 4)) { goto L_102230; }
    X86_TICK(c, 9);
    // 10221d  push edi
    X86_AT(c, 0x10221du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10221e  call 0x103ccd
    X86_AT(c, 0x10221eu);
    push32(c, 0x102223u); f_00103ccd(c); X86_RET(c, 0x102223u);
    X86_TICK(c, 12);
    // 102223  push dword ptr [0xdfdf8]
    X86_AT(c, 0x102223u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u))); push32(c, v); }
    // 102229  call 0x103d14
    X86_AT(c, 0x102229u);
    push32(c, 0x10222eu); f_00103d14(c); X86_RET(c, 0x10222eu);
    X86_TICK(c, 7);
    // 10222e  jmp 0x10224a
    X86_AT(c, 0x10222eu);
    goto L_10224a;
L_102230:
    X86_TICK(c, 19);
    // 102230  and edi, edi
    X86_AT(c, 0x102230u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 102232  setl al
    X86_AT(c, 0x102232u);
    s8(c, 0, x86_cc(c, 12) ? 1u : 0u);
    // 102235  mov edx, dword ptr [0xdfdf8]
    X86_AT(c, 0x102235u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 10223b  mov byte ptr [edx + 0xa], al
    X86_AT(c, 0x10223bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xAu)), g8(c, 0));
    // 10223e  and al, al
    X86_AT(c, 0x10223eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 102240  je 0x102244
    X86_AT(c, 0x102240u);
    if (x86_cc(c, 4)) { goto L_102244; }
    X86_TICK(c, 2);
    // 102242  neg edi
    X86_AT(c, 0x102242u);
    { uint32_t v = c.r[7]; c.r[7] = x86_neg(c, v, 4); }
L_102244:
    X86_TICK(c, 9);
    // 102244  push edi
    X86_AT(c, 0x102244u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 102245  call 0x1021ac
    X86_AT(c, 0x102245u);
    push32(c, 0x10224au); f_001021ac(c); X86_RET(c, 0x10224au);
L_10224a:
    X86_TICK(c, 20);
    // 10224a  pop edi
    X86_AT(c, 0x10224au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10224b  leave 
    X86_AT(c, 0x10224bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 10224c  ret 4
    X86_AT(c, 0x10224cu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x102208u, "ran off the end of a function");
}
void f_00102250(X86Cpu& c) {
    X86_TICK(c, 17);
    // 102250  push ebp
    X86_AT(c, 0x102250u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 102251  mov ebp, esp
    X86_AT(c, 0x102251u);
    c.r[5] = c.r[4];
    // 102253  push edi
    X86_AT(c, 0x102253u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 102254  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x102254u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 102257  call 0x10400c
    X86_AT(c, 0x102257u);
    push32(c, 0x10225cu); f_0010400c(c); X86_RET(c, 0x10225cu);
    X86_TICK(c, 12);
    // 10225c  cmp byte ptr [0xdfd2f], 0
    X86_AT(c, 0x10225cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD2Fu))), 0x0u, 0, 1);
    // 102263  je 0x102278
    X86_AT(c, 0x102263u);
    if (x86_cc(c, 4)) { goto L_102278; }
    X86_TICK(c, 9);
    // 102265  push edi
    X86_AT(c, 0x102265u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 102266  call 0x103cd4
    X86_AT(c, 0x102266u);
    push32(c, 0x10226bu); f_00103cd4(c); X86_RET(c, 0x10226bu);
    X86_TICK(c, 12);
    // 10226b  push dword ptr [0xdfdf8]
    X86_AT(c, 0x10226bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u))); push32(c, v); }
    // 102271  call 0x103d14
    X86_AT(c, 0x102271u);
    push32(c, 0x102276u); f_00103d14(c); X86_RET(c, 0x102276u);
    X86_TICK(c, 7);
    // 102276  jmp 0x102287
    X86_AT(c, 0x102276u);
    goto L_102287;
L_102278:
    X86_TICK(c, 15);
    // 102278  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x102278u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 10227d  mov byte ptr [eax + 0xa], 0
    X86_AT(c, 0x10227du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)), 0x0u);
    // 102281  push edi
    X86_AT(c, 0x102281u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 102282  call 0x1021ac
    X86_AT(c, 0x102282u);
    push32(c, 0x102287u); f_001021ac(c); X86_RET(c, 0x102287u);
L_102287:
    X86_TICK(c, 20);
    // 102287  pop edi
    X86_AT(c, 0x102287u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 102288  leave 
    X86_AT(c, 0x102288u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 102289  ret 4
    X86_AT(c, 0x102289u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x102250u, "ran off the end of a function");
}
void f_0010228c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 10228c  push ebp
    X86_AT(c, 0x10228cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 10228d  mov ebp, esp
    X86_AT(c, 0x10228du);
    c.r[5] = c.r[4];
    // 10228f  call 0x10400c
    X86_AT(c, 0x10228fu);
    push32(c, 0x102294u); f_0010400c(c); X86_RET(c, 0x102294u);
    X86_TICK(c, 12);
    // 102294  cmp byte ptr [0xdfd2f], 0
    X86_AT(c, 0x102294u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD2Fu))), 0x0u, 0, 1);
    // 10229b  je 0x1022b5
    X86_AT(c, 0x10229bu);
    if (x86_cc(c, 4)) { goto L_1022b5; }
    X86_TICK(c, 17);
    // 10229d  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x10229du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 1022a0  push dword ptr [ebp + 8]
    X86_AT(c, 0x1022a0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 1022a3  call 0x103d0d
    X86_AT(c, 0x1022a3u);
    push32(c, 0x1022a8u); f_00103d0d(c); X86_RET(c, 0x1022a8u);
    X86_TICK(c, 12);
    // 1022a8  push dword ptr [0xdfdf8]
    X86_AT(c, 0x1022a8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u))); push32(c, v); }
    // 1022ae  call 0x103d14
    X86_AT(c, 0x1022aeu);
    push32(c, 0x1022b3u); f_00103d14(c); X86_RET(c, 0x1022b3u);
    X86_TICK(c, 7);
    // 1022b3  jmp 0x1022c4
    X86_AT(c, 0x1022b3u);
    goto L_1022c4;
L_1022b5:
    X86_TICK(c, 16);
    // 1022b5  lea eax, [ebp + 8]
    X86_AT(c, 0x1022b5u);
    c.r[0] = (uint32_t)(c.r[5] + 0x8u);
    // 1022b8  push eax
    X86_AT(c, 0x1022b8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1022b9  push dword ptr [0xdfdf8]
    X86_AT(c, 0x1022b9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u))); push32(c, v); }
    // 1022bf  call 0x103da8
    X86_AT(c, 0x1022bfu);
    push32(c, 0x1022c4u); f_00103da8(c); X86_RET(c, 0x1022c4u);
L_1022c4:
    X86_TICK(c, 16);
    // 1022c4  leave 
    X86_AT(c, 0x1022c4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1022c5  ret 8
    X86_AT(c, 0x1022c5u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x10228cu, "ran off the end of a function");
}
void f_001022c8(X86Cpu& c) {
    X86_TICK(c, 20);
    // 1022c8  enter 8, 0
    X86_AT(c, 0x1022c8u);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 1022cc  push ebx
    X86_AT(c, 0x1022ccu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 1022cd  cmp byte ptr [0xdfd2f], 0
    X86_AT(c, 0x1022cdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD2Fu))), 0x0u, 0, 1);
    // 1022d4  je 0x1022ef
    X86_AT(c, 0x1022d4u);
    if (x86_cc(c, 4)) { goto L_1022ef; }
    X86_TICK(c, 12);
    // 1022d6  push dword ptr [0xdfdf8]
    X86_AT(c, 0x1022d6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u))); push32(c, v); }
    // 1022dc  call 0x103d1e
    X86_AT(c, 0x1022dcu);
    push32(c, 0x1022e1u); f_00103d1e(c); X86_RET(c, 0x1022e1u);
    X86_TICK(c, 14);
    // 1022e1  add dword ptr [0xdfdf8], 0xfffffff4
    X86_AT(c, 0x1022e1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFDF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 1022e8  call 0x103cfa
    X86_AT(c, 0x1022e8u);
    push32(c, 0x1022edu); f_00103cfa(c); X86_RET(c, 0x1022edu);
    X86_TICK(c, 7);
    // 1022ed  jmp 0x10230a
    X86_AT(c, 0x1022edu);
    goto L_10230a;
L_1022ef:
    X86_TICK(c, 16);
    // 1022ef  push dword ptr [0xdfdf8]
    X86_AT(c, 0x1022efu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u))); push32(c, v); }
    // 1022f5  lea ebx, [ebp - 8]
    X86_AT(c, 0x1022f5u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 1022f8  push ebx
    X86_AT(c, 0x1022f8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 1022f9  call 0x103e1d
    X86_AT(c, 0x1022f9u);
    push32(c, 0x1022feu); f_00103e1d(c); X86_RET(c, 0x1022feu);
    X86_TICK(c, 15);
    // 1022fe  add dword ptr [0xdfdf8], 0xfffffff4
    X86_AT(c, 0x1022feu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFDF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 102305  mov eax, dword ptr [ebx]
    X86_AT(c, 0x102305u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 102307  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x102307u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
L_10230a:
    X86_TICK(c, 20);
    // 10230a  pop ebx
    X86_AT(c, 0x10230au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 10230b  leave 
    X86_AT(c, 0x10230bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 10230c  ret 
    X86_AT(c, 0x10230cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1022c8u, "ran off the end of a function");
}
void f_00102317(X86Cpu& c) {
    X86_TICK(c, 57);
    // 102317  push ebp
    X86_AT(c, 0x102317u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 102318  mov ebp, esp
    X86_AT(c, 0x102318u);
    c.r[5] = c.r[4];
    // 10231a  push esi
    X86_AT(c, 0x10231au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 10231b  push edi
    X86_AT(c, 0x10231bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10231c  push ebx
    X86_AT(c, 0x10231cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 10231d  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x10231du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 102320  mov al, 0
    X86_AT(c, 0x102320u);
    s8(c, 0, 0x0u);
    // 102322  mov ah, 0x43
    X86_AT(c, 0x102322u);
    s8(c, 4, 0x43u);
    // 102324  clc 
    X86_AT(c, 0x102324u);
    c.fl &= ~X86_CF;
    // 102325  int 0x21
    X86_AT(c, 0x102325u);
    x86_int(c, 0x21, 0x102327u);
    X86_TICK(c, 5);
    // 102327  jb 0x102345
    X86_AT(c, 0x102327u);
    if (x86_cc(c, 2)) { goto L_102345; }
    X86_TICK(c, 11);
    // 102329  mov bl, byte ptr [ebp + 0xc]
    X86_AT(c, 0x102329u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 10232c  cmp bl, 0
    X86_AT(c, 0x10232cu);
    (void)x86_sub(c, g8(c, 3), 0x0u, 0, 1);
    // 10232f  je 0x10233d
    X86_AT(c, 0x10232fu);
    if (x86_cc(c, 4)) { goto L_10233d; }
    X86_TICK(c, 7);
    // 102331  test cl, 1
    X86_AT(c, 0x102331u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 102334  je 0x10233d
    X86_AT(c, 0x102334u);
    if (x86_cc(c, 4)) { goto L_10233d; }
    X86_TICK(c, 7);
    // 102336  test bl, 2
    X86_AT(c, 0x102336u);
    (void)x86_logic(c, g8(c, 3) & 0x2u, 1);
    // 102339  je 0x10233d
    X86_AT(c, 0x102339u);
    if (x86_cc(c, 4)) { goto L_10233d; }
    X86_TICK(c, 7);
    // 10233b  jmp 0x102341
    X86_AT(c, 0x10233bu);
    goto L_102341;
L_10233d:
    X86_TICK(c, 9);
    // 10233d  xor eax, eax
    X86_AT(c, 0x10233du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 10233f  jmp 0x102354
    X86_AT(c, 0x10233fu);
    goto L_102354;
L_102341:
    X86_TICK(c, 2);
    // 102341  mov ax, 0xc
    X86_AT(c, 0x102341u);
    s16(c, 0, 0xCu);
L_102345:
    X86_TICK(c, 6);
    // 102345  and eax, 0xffff
    X86_AT(c, 0x102345u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 10234a  mov dword ptr [0xe00b6], eax
    X86_AT(c, 0x10234au);
    wr32((c.sbase[3] + (uint32_t)(0xE00B6u)), c.r[0]);
    // 10234f  mov eax, 0xffffffff
    X86_AT(c, 0x10234fu);
    c.r[0] = 0xFFFFFFFFu;
L_102354:
    X86_TICK(c, 28);
    // 102354  pop ebx
    X86_AT(c, 0x102354u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 102355  pop edi
    X86_AT(c, 0x102355u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 102356  pop esi
    X86_AT(c, 0x102356u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 102357  mov esp, ebp
    X86_AT(c, 0x102357u);
    c.r[4] = c.r[5];
    // 102359  pop ebp
    X86_AT(c, 0x102359u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 10235a  ret 
    X86_AT(c, 0x10235au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x102317u, "ran off the end of a function");
}
void f_00102367(X86Cpu& c) {
    X86_TICK(c, 61);
    // 102367  push ebp
    X86_AT(c, 0x102367u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 102368  mov ebp, esp
    X86_AT(c, 0x102368u);
    c.r[5] = c.r[4];
    // 10236a  push esi
    X86_AT(c, 0x10236au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 10236b  push edi
    X86_AT(c, 0x10236bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10236c  push ebx
    X86_AT(c, 0x10236cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 10236d  mov bx, word ptr [ebp + 8]
    X86_AT(c, 0x10236du);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 102371  mov cx, 0
    X86_AT(c, 0x102371u);
    s16(c, 1, 0x0u);
    // 102375  mov dx, 0
    X86_AT(c, 0x102375u);
    s16(c, 2, 0x0u);
    // 102379  mov al, 1
    X86_AT(c, 0x102379u);
    s8(c, 0, 0x1u);
    // 10237b  mov ah, 0x42
    X86_AT(c, 0x10237bu);
    s8(c, 4, 0x42u);
    // 10237d  clc 
    X86_AT(c, 0x10237du);
    c.fl &= ~X86_CF;
    // 10237e  int 0x21
    X86_AT(c, 0x10237eu);
    x86_int(c, 0x21, 0x102380u);
    X86_TICK(c, 5);
    // 102380  jb 0x1023cf
    X86_AT(c, 0x102380u);
    if (x86_cc(c, 2)) { goto L_1023cf; }
    X86_TICK(c, 57);
    // 102382  mov ecx, 0x1023e5
    X86_AT(c, 0x102382u);
    c.r[1] = 0x1023E5u;
    // 102387  mov word ptr [ecx + 2], dx
    X86_AT(c, 0x102387u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1] + 0x2u)), (c.r[2] & 0xFFFFu));
    // 10238b  mov word ptr [ecx], ax
    X86_AT(c, 0x10238bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), (c.r[0] & 0xFFFFu));
    // 10238e  mov bx, word ptr [ebp + 8]
    X86_AT(c, 0x10238eu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 102392  mov cx, 0
    X86_AT(c, 0x102392u);
    s16(c, 1, 0x0u);
    // 102396  mov dx, 0
    X86_AT(c, 0x102396u);
    s16(c, 2, 0x0u);
    // 10239a  mov al, 2
    X86_AT(c, 0x10239au);
    s8(c, 0, 0x2u);
    // 10239c  mov ah, 0x42
    X86_AT(c, 0x10239cu);
    s8(c, 4, 0x42u);
    // 10239e  clc 
    X86_AT(c, 0x10239eu);
    c.fl &= ~X86_CF;
    // 10239f  int 0x21
    X86_AT(c, 0x10239fu);
    x86_int(c, 0x21, 0x1023a1u);
    X86_TICK(c, 5);
    // 1023a1  jb 0x1023cf
    X86_AT(c, 0x1023a1u);
    if (x86_cc(c, 2)) { goto L_1023cf; }
    X86_TICK(c, 63);
    // 1023a3  mov ecx, 0x1023e9
    X86_AT(c, 0x1023a3u);
    c.r[1] = 0x1023E9u;
    // 1023a8  mov word ptr [ecx + 2], dx
    X86_AT(c, 0x1023a8u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1] + 0x2u)), (c.r[2] & 0xFFFFu));
    // 1023ac  mov word ptr [ecx], ax
    X86_AT(c, 0x1023acu);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), (c.r[0] & 0xFFFFu));
    // 1023af  mov bx, word ptr [ebp + 8]
    X86_AT(c, 0x1023afu);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 1023b3  mov eax, 0x1023e5
    X86_AT(c, 0x1023b3u);
    c.r[0] = 0x1023E5u;
    // 1023b8  mov cx, word ptr [eax + 2]
    X86_AT(c, 0x1023b8u);
    s16(c, 1, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x2u))));
    // 1023bc  mov dx, word ptr [eax]
    X86_AT(c, 0x1023bcu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 1023bf  mov al, 0
    X86_AT(c, 0x1023bfu);
    s8(c, 0, 0x0u);
    // 1023c1  mov ah, 0x42
    X86_AT(c, 0x1023c1u);
    s8(c, 4, 0x42u);
    // 1023c3  clc 
    X86_AT(c, 0x1023c3u);
    c.fl &= ~X86_CF;
    // 1023c4  int 0x21
    X86_AT(c, 0x1023c4u);
    x86_int(c, 0x21, 0x1023c6u);
    X86_TICK(c, 5);
    // 1023c6  jb 0x1023cf
    X86_AT(c, 0x1023c6u);
    if (x86_cc(c, 2)) { goto L_1023cf; }
    X86_TICK(c, 11);
    // 1023c8  mov eax, dword ptr [0x1023e9]
    X86_AT(c, 0x1023c8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x1023E9u)));
    // 1023cd  jmp 0x1023de
    X86_AT(c, 0x1023cdu);
    goto L_1023de;
L_1023cf:
    X86_TICK(c, 6);
    // 1023cf  and eax, 0xffff
    X86_AT(c, 0x1023cfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 1023d4  mov dword ptr [0xe00b6], eax
    X86_AT(c, 0x1023d4u);
    wr32((c.sbase[3] + (uint32_t)(0xE00B6u)), c.r[0]);
    // 1023d9  mov eax, 0xffffffff
    X86_AT(c, 0x1023d9u);
    c.r[0] = 0xFFFFFFFFu;
L_1023de:
    X86_TICK(c, 28);
    // 1023de  pop ebx
    X86_AT(c, 0x1023deu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 1023df  pop edi
    X86_AT(c, 0x1023dfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1023e0  pop esi
    X86_AT(c, 0x1023e0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1023e1  mov esp, ebp
    X86_AT(c, 0x1023e1u);
    c.r[4] = c.r[5];
    // 1023e3  pop ebp
    X86_AT(c, 0x1023e3u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 1023e4  ret 
    X86_AT(c, 0x1023e4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x102367u, "ran off the end of a function");
}
}
