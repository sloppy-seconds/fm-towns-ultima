#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00001b3f(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001b3f  cmp al, 1
    X86_AT(c, 0x1b3fu);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001b41  ja 0x1b93
    X86_AT(c, 0x1b41u);
    if (x86_cc(c, 7)) { goto L_1b93; }
    X86_TICK(c, 5);
    // 001b43  jb 0x1b4c
    X86_AT(c, 0x1b43u);
    if (x86_cc(c, 2)) { goto L_1b4c; }
    X86_TICK(c, 12);
    // 001b45  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0x1b45u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 001b4a  jae 0x1b93
    X86_AT(c, 0x1b4au);
    if (x86_cc(c, 3)) { goto L_1b93; }
L_1b4c:
    X86_TICK(c, 7);
    // 001b4c  test bl, bl
    X86_AT(c, 0x1b4cu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 001b4e  jne 0x1b69
    X86_AT(c, 0x1b4eu);
    if (x86_cc(c, 5)) { goto L_1b69; }
    X86_TICK(c, 26);
    // 001b50  push eax
    X86_AT(c, 0x1b50u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 001b51  shl al, 5
    X86_AT(c, 0x1b51u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 1, w); if (w) s8(c, 0, r); }
    // 001b54  and byte ptr gs:[ebp + 0x101], 0xdf
    X86_AT(c, 0x1b54u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xDFu, 1)); }
    // 001b5c  or byte ptr gs:[ebp + 0x101], al
    X86_AT(c, 0x1b5cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 001b63  call 0xe29
    X86_AT(c, 0x1b63u);
    push32(c, 0x1b68u); f_00000e29(c); X86_RET(c, 0x1b68u);
    X86_TICK(c, 4);
    // 001b68  pop eax
    X86_AT(c, 0x1b68u);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_1b69:
    X86_TICK(c, 11);
    // 001b69  mov byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x1b69u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), g8(c, 0));
    // 001b6d  mov edi, 0x40
    X86_AT(c, 0x1b6du);
    c.r[7] = 0x40u;
    // 001b72  call 0x1bac
    X86_AT(c, 0x1b72u);
    push32(c, 0x1b77u); f_00001bac(c); X86_RET(c, 0x1b77u);
    X86_TICK(c, 7);
    // 001b77  call 0x1bcc
    X86_AT(c, 0x1b77u);
    push32(c, 0x1b7cu); f_00001bcc(c); X86_RET(c, 0x1b7cu);
    X86_TICK(c, 7);
    // 001b7c  test esi, esi
    X86_AT(c, 0x1b7cu);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 001b7e  je 0x1b90
    X86_AT(c, 0x1b7eu);
    if (x86_cc(c, 4)) { goto L_1b90; }
    X86_TICK(c, 8);
    // 001b80  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1b80u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
L_1b90:
    X86_TICK(c, 12);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
L_1b93:
    X86_TICK(c, 12);
    // 001b93  mov ah, 0xff
    X86_AT(c, 0x1b93u);
    s8(c, 4, 0xFFu);
    // 001b95  ret 
    X86_AT(c, 0x1b95u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b3fu, "ran off the end of a function");
}
void f_00001b41(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001b41  ja 0x1b93
    X86_AT(c, 0x1b41u);
    if (x86_cc(c, 7)) { goto L_1b93; }
    X86_TICK(c, 5);
    // 001b43  jb 0x1b4c
    X86_AT(c, 0x1b43u);
    if (x86_cc(c, 2)) { goto L_1b4c; }
    X86_TICK(c, 12);
    // 001b45  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0x1b45u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 001b4a  jae 0x1b93
    X86_AT(c, 0x1b4au);
    if (x86_cc(c, 3)) { goto L_1b93; }
L_1b4c:
    X86_TICK(c, 7);
    // 001b4c  test bl, bl
    X86_AT(c, 0x1b4cu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 001b4e  jne 0x1b69
    X86_AT(c, 0x1b4eu);
    if (x86_cc(c, 5)) { goto L_1b69; }
    X86_TICK(c, 26);
    // 001b50  push eax
    X86_AT(c, 0x1b50u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 001b51  shl al, 5
    X86_AT(c, 0x1b51u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 1, w); if (w) s8(c, 0, r); }
    // 001b54  and byte ptr gs:[ebp + 0x101], 0xdf
    X86_AT(c, 0x1b54u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xDFu, 1)); }
    // 001b5c  or byte ptr gs:[ebp + 0x101], al
    X86_AT(c, 0x1b5cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 001b63  call 0xe29
    X86_AT(c, 0x1b63u);
    push32(c, 0x1b68u); f_00000e29(c); X86_RET(c, 0x1b68u);
    X86_TICK(c, 4);
    // 001b68  pop eax
    X86_AT(c, 0x1b68u);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_1b69:
    X86_TICK(c, 11);
    // 001b69  mov byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x1b69u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), g8(c, 0));
    // 001b6d  mov edi, 0x40
    X86_AT(c, 0x1b6du);
    c.r[7] = 0x40u;
    // 001b72  call 0x1bac
    X86_AT(c, 0x1b72u);
    push32(c, 0x1b77u); f_00001bac(c); X86_RET(c, 0x1b77u);
    X86_TICK(c, 7);
    // 001b77  call 0x1bcc
    X86_AT(c, 0x1b77u);
    push32(c, 0x1b7cu); f_00001bcc(c); X86_RET(c, 0x1b7cu);
    X86_TICK(c, 7);
    // 001b7c  test esi, esi
    X86_AT(c, 0x1b7cu);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 001b7e  je 0x1b90
    X86_AT(c, 0x1b7eu);
    if (x86_cc(c, 4)) { goto L_1b90; }
    X86_TICK(c, 8);
    // 001b80  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1b80u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
L_1b90:
    X86_TICK(c, 12);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
L_1b93:
    X86_TICK(c, 12);
    // 001b93  mov ah, 0xff
    X86_AT(c, 0x1b93u);
    s8(c, 4, 0xFFu);
    // 001b95  ret 
    X86_AT(c, 0x1b95u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b41u, "ran off the end of a function");
}
void f_00001b43(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001b43  jb 0x1b4c
    X86_AT(c, 0x1b43u);
    if (x86_cc(c, 2)) { goto L_1b4c; }
    X86_TICK(c, 12);
    // 001b45  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0x1b45u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 001b4a  jae 0x1b93
    X86_AT(c, 0x1b4au);
    if (x86_cc(c, 3)) { goto L_1b93; }
L_1b4c:
    X86_TICK(c, 7);
    // 001b4c  test bl, bl
    X86_AT(c, 0x1b4cu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 001b4e  jne 0x1b69
    X86_AT(c, 0x1b4eu);
    if (x86_cc(c, 5)) { goto L_1b69; }
    X86_TICK(c, 26);
    // 001b50  push eax
    X86_AT(c, 0x1b50u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 001b51  shl al, 5
    X86_AT(c, 0x1b51u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 1, w); if (w) s8(c, 0, r); }
    // 001b54  and byte ptr gs:[ebp + 0x101], 0xdf
    X86_AT(c, 0x1b54u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xDFu, 1)); }
    // 001b5c  or byte ptr gs:[ebp + 0x101], al
    X86_AT(c, 0x1b5cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 001b63  call 0xe29
    X86_AT(c, 0x1b63u);
    push32(c, 0x1b68u); f_00000e29(c); X86_RET(c, 0x1b68u);
    X86_TICK(c, 4);
    // 001b68  pop eax
    X86_AT(c, 0x1b68u);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_1b69:
    X86_TICK(c, 11);
    // 001b69  mov byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x1b69u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), g8(c, 0));
    // 001b6d  mov edi, 0x40
    X86_AT(c, 0x1b6du);
    c.r[7] = 0x40u;
    // 001b72  call 0x1bac
    X86_AT(c, 0x1b72u);
    push32(c, 0x1b77u); f_00001bac(c); X86_RET(c, 0x1b77u);
    X86_TICK(c, 7);
    // 001b77  call 0x1bcc
    X86_AT(c, 0x1b77u);
    push32(c, 0x1b7cu); f_00001bcc(c); X86_RET(c, 0x1b7cu);
    X86_TICK(c, 7);
    // 001b7c  test esi, esi
    X86_AT(c, 0x1b7cu);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 001b7e  je 0x1b90
    X86_AT(c, 0x1b7eu);
    if (x86_cc(c, 4)) { goto L_1b90; }
    X86_TICK(c, 8);
    // 001b80  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1b80u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
L_1b90:
    X86_TICK(c, 12);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
L_1b93:
    X86_TICK(c, 12);
    // 001b93  mov ah, 0xff
    X86_AT(c, 0x1b93u);
    s8(c, 4, 0xFFu);
    // 001b95  ret 
    X86_AT(c, 0x1b95u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b43u, "ran off the end of a function");
}
void f_00001b45(X86Cpu& c) {
    X86_TICK(c, 12);
    // 001b45  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0x1b45u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 001b4a  jae 0x1b93
    X86_AT(c, 0x1b4au);
    if (x86_cc(c, 3)) { goto L_1b93; }
    X86_TICK(c, 7);
    // 001b4c  test bl, bl
    X86_AT(c, 0x1b4cu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 001b4e  jne 0x1b69
    X86_AT(c, 0x1b4eu);
    if (x86_cc(c, 5)) { goto L_1b69; }
    X86_TICK(c, 26);
    // 001b50  push eax
    X86_AT(c, 0x1b50u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 001b51  shl al, 5
    X86_AT(c, 0x1b51u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 1, w); if (w) s8(c, 0, r); }
    // 001b54  and byte ptr gs:[ebp + 0x101], 0xdf
    X86_AT(c, 0x1b54u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xDFu, 1)); }
    // 001b5c  or byte ptr gs:[ebp + 0x101], al
    X86_AT(c, 0x1b5cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 001b63  call 0xe29
    X86_AT(c, 0x1b63u);
    push32(c, 0x1b68u); f_00000e29(c); X86_RET(c, 0x1b68u);
    X86_TICK(c, 4);
    // 001b68  pop eax
    X86_AT(c, 0x1b68u);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_1b69:
    X86_TICK(c, 11);
    // 001b69  mov byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x1b69u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), g8(c, 0));
    // 001b6d  mov edi, 0x40
    X86_AT(c, 0x1b6du);
    c.r[7] = 0x40u;
    // 001b72  call 0x1bac
    X86_AT(c, 0x1b72u);
    push32(c, 0x1b77u); f_00001bac(c); X86_RET(c, 0x1b77u);
    X86_TICK(c, 7);
    // 001b77  call 0x1bcc
    X86_AT(c, 0x1b77u);
    push32(c, 0x1b7cu); f_00001bcc(c); X86_RET(c, 0x1b7cu);
    X86_TICK(c, 7);
    // 001b7c  test esi, esi
    X86_AT(c, 0x1b7cu);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 001b7e  je 0x1b90
    X86_AT(c, 0x1b7eu);
    if (x86_cc(c, 4)) { goto L_1b90; }
    X86_TICK(c, 8);
    // 001b80  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1b80u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
L_1b90:
    X86_TICK(c, 12);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
L_1b93:
    X86_TICK(c, 12);
    // 001b93  mov ah, 0xff
    X86_AT(c, 0x1b93u);
    s8(c, 4, 0xFFu);
    // 001b95  ret 
    X86_AT(c, 0x1b95u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b45u, "ran off the end of a function");
}
void f_00001b4a(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001b4a  jae 0x1b93
    X86_AT(c, 0x1b4au);
    if (x86_cc(c, 3)) { goto L_1b93; }
    X86_TICK(c, 7);
    // 001b4c  test bl, bl
    X86_AT(c, 0x1b4cu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 001b4e  jne 0x1b69
    X86_AT(c, 0x1b4eu);
    if (x86_cc(c, 5)) { goto L_1b69; }
    X86_TICK(c, 26);
    // 001b50  push eax
    X86_AT(c, 0x1b50u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 001b51  shl al, 5
    X86_AT(c, 0x1b51u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 1, w); if (w) s8(c, 0, r); }
    // 001b54  and byte ptr gs:[ebp + 0x101], 0xdf
    X86_AT(c, 0x1b54u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xDFu, 1)); }
    // 001b5c  or byte ptr gs:[ebp + 0x101], al
    X86_AT(c, 0x1b5cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 001b63  call 0xe29
    X86_AT(c, 0x1b63u);
    push32(c, 0x1b68u); f_00000e29(c); X86_RET(c, 0x1b68u);
    X86_TICK(c, 4);
    // 001b68  pop eax
    X86_AT(c, 0x1b68u);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_1b69:
    X86_TICK(c, 11);
    // 001b69  mov byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x1b69u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), g8(c, 0));
    // 001b6d  mov edi, 0x40
    X86_AT(c, 0x1b6du);
    c.r[7] = 0x40u;
    // 001b72  call 0x1bac
    X86_AT(c, 0x1b72u);
    push32(c, 0x1b77u); f_00001bac(c); X86_RET(c, 0x1b77u);
    X86_TICK(c, 7);
    // 001b77  call 0x1bcc
    X86_AT(c, 0x1b77u);
    push32(c, 0x1b7cu); f_00001bcc(c); X86_RET(c, 0x1b7cu);
    X86_TICK(c, 7);
    // 001b7c  test esi, esi
    X86_AT(c, 0x1b7cu);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 001b7e  je 0x1b90
    X86_AT(c, 0x1b7eu);
    if (x86_cc(c, 4)) { goto L_1b90; }
    X86_TICK(c, 8);
    // 001b80  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1b80u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
L_1b90:
    X86_TICK(c, 12);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
L_1b93:
    X86_TICK(c, 12);
    // 001b93  mov ah, 0xff
    X86_AT(c, 0x1b93u);
    s8(c, 4, 0xFFu);
    // 001b95  ret 
    X86_AT(c, 0x1b95u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b4au, "ran off the end of a function");
}
void f_00001b4c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001b4c  test bl, bl
    X86_AT(c, 0x1b4cu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 001b4e  jne 0x1b69
    X86_AT(c, 0x1b4eu);
    if (x86_cc(c, 5)) { goto L_1b69; }
    X86_TICK(c, 26);
    // 001b50  push eax
    X86_AT(c, 0x1b50u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 001b51  shl al, 5
    X86_AT(c, 0x1b51u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 1, w); if (w) s8(c, 0, r); }
    // 001b54  and byte ptr gs:[ebp + 0x101], 0xdf
    X86_AT(c, 0x1b54u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xDFu, 1)); }
    // 001b5c  or byte ptr gs:[ebp + 0x101], al
    X86_AT(c, 0x1b5cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 001b63  call 0xe29
    X86_AT(c, 0x1b63u);
    push32(c, 0x1b68u); f_00000e29(c); X86_RET(c, 0x1b68u);
    X86_TICK(c, 4);
    // 001b68  pop eax
    X86_AT(c, 0x1b68u);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_1b69:
    X86_TICK(c, 11);
    // 001b69  mov byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x1b69u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), g8(c, 0));
    // 001b6d  mov edi, 0x40
    X86_AT(c, 0x1b6du);
    c.r[7] = 0x40u;
    // 001b72  call 0x1bac
    X86_AT(c, 0x1b72u);
    push32(c, 0x1b77u); f_00001bac(c); X86_RET(c, 0x1b77u);
    X86_TICK(c, 7);
    // 001b77  call 0x1bcc
    X86_AT(c, 0x1b77u);
    push32(c, 0x1b7cu); f_00001bcc(c); X86_RET(c, 0x1b7cu);
    X86_TICK(c, 7);
    // 001b7c  test esi, esi
    X86_AT(c, 0x1b7cu);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 001b7e  je 0x1b90
    X86_AT(c, 0x1b7eu);
    if (x86_cc(c, 4)) { goto L_1b90; }
    X86_TICK(c, 8);
    // 001b80  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1b80u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
L_1b90:
    X86_TICK(c, 12);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b4cu, "ran off the end of a function");
}
void f_00001b4e(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001b4e  jne 0x1b69
    X86_AT(c, 0x1b4eu);
    if (x86_cc(c, 5)) { goto L_1b69; }
    X86_TICK(c, 26);
    // 001b50  push eax
    X86_AT(c, 0x1b50u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 001b51  shl al, 5
    X86_AT(c, 0x1b51u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 1, w); if (w) s8(c, 0, r); }
    // 001b54  and byte ptr gs:[ebp + 0x101], 0xdf
    X86_AT(c, 0x1b54u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xDFu, 1)); }
    // 001b5c  or byte ptr gs:[ebp + 0x101], al
    X86_AT(c, 0x1b5cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 001b63  call 0xe29
    X86_AT(c, 0x1b63u);
    push32(c, 0x1b68u); f_00000e29(c); X86_RET(c, 0x1b68u);
    X86_TICK(c, 4);
    // 001b68  pop eax
    X86_AT(c, 0x1b68u);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_1b69:
    X86_TICK(c, 11);
    // 001b69  mov byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x1b69u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), g8(c, 0));
    // 001b6d  mov edi, 0x40
    X86_AT(c, 0x1b6du);
    c.r[7] = 0x40u;
    // 001b72  call 0x1bac
    X86_AT(c, 0x1b72u);
    push32(c, 0x1b77u); f_00001bac(c); X86_RET(c, 0x1b77u);
    X86_TICK(c, 7);
    // 001b77  call 0x1bcc
    X86_AT(c, 0x1b77u);
    push32(c, 0x1b7cu); f_00001bcc(c); X86_RET(c, 0x1b7cu);
    X86_TICK(c, 7);
    // 001b7c  test esi, esi
    X86_AT(c, 0x1b7cu);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 001b7e  je 0x1b90
    X86_AT(c, 0x1b7eu);
    if (x86_cc(c, 4)) { goto L_1b90; }
    X86_TICK(c, 8);
    // 001b80  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1b80u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
L_1b90:
    X86_TICK(c, 12);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b4eu, "ran off the end of a function");
}
void f_00001b50(X86Cpu& c) {
    X86_TICK(c, 26);
    // 001b50  push eax
    X86_AT(c, 0x1b50u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 001b51  shl al, 5
    X86_AT(c, 0x1b51u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 1, w); if (w) s8(c, 0, r); }
    // 001b54  and byte ptr gs:[ebp + 0x101], 0xdf
    X86_AT(c, 0x1b54u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xDFu, 1)); }
    // 001b5c  or byte ptr gs:[ebp + 0x101], al
    X86_AT(c, 0x1b5cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 001b63  call 0xe29
    X86_AT(c, 0x1b63u);
    push32(c, 0x1b68u); f_00000e29(c); X86_RET(c, 0x1b68u);
    X86_TICK(c, 15);
    // 001b68  pop eax
    X86_AT(c, 0x1b68u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 001b69  mov byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x1b69u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), g8(c, 0));
    // 001b6d  mov edi, 0x40
    X86_AT(c, 0x1b6du);
    c.r[7] = 0x40u;
    // 001b72  call 0x1bac
    X86_AT(c, 0x1b72u);
    push32(c, 0x1b77u); f_00001bac(c); X86_RET(c, 0x1b77u);
    X86_TICK(c, 7);
    // 001b77  call 0x1bcc
    X86_AT(c, 0x1b77u);
    push32(c, 0x1b7cu); f_00001bcc(c); X86_RET(c, 0x1b7cu);
    X86_TICK(c, 7);
    // 001b7c  test esi, esi
    X86_AT(c, 0x1b7cu);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 001b7e  je 0x1b90
    X86_AT(c, 0x1b7eu);
    if (x86_cc(c, 4)) { goto L_1b90; }
    X86_TICK(c, 8);
    // 001b80  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1b80u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
L_1b90:
    X86_TICK(c, 12);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b50u, "ran off the end of a function");
}
void f_00001b51(X86Cpu& c) {
    X86_TICK(c, 24);
    // 001b51  shl al, 5
    X86_AT(c, 0x1b51u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 1, w); if (w) s8(c, 0, r); }
    // 001b54  and byte ptr gs:[ebp + 0x101], 0xdf
    X86_AT(c, 0x1b54u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xDFu, 1)); }
    // 001b5c  or byte ptr gs:[ebp + 0x101], al
    X86_AT(c, 0x1b5cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 001b63  call 0xe29
    X86_AT(c, 0x1b63u);
    push32(c, 0x1b68u); f_00000e29(c); X86_RET(c, 0x1b68u);
    X86_TICK(c, 15);
    // 001b68  pop eax
    X86_AT(c, 0x1b68u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 001b69  mov byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x1b69u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), g8(c, 0));
    // 001b6d  mov edi, 0x40
    X86_AT(c, 0x1b6du);
    c.r[7] = 0x40u;
    // 001b72  call 0x1bac
    X86_AT(c, 0x1b72u);
    push32(c, 0x1b77u); f_00001bac(c); X86_RET(c, 0x1b77u);
    X86_TICK(c, 7);
    // 001b77  call 0x1bcc
    X86_AT(c, 0x1b77u);
    push32(c, 0x1b7cu); f_00001bcc(c); X86_RET(c, 0x1b7cu);
    X86_TICK(c, 7);
    // 001b7c  test esi, esi
    X86_AT(c, 0x1b7cu);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 001b7e  je 0x1b90
    X86_AT(c, 0x1b7eu);
    if (x86_cc(c, 4)) { goto L_1b90; }
    X86_TICK(c, 8);
    // 001b80  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1b80u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
L_1b90:
    X86_TICK(c, 12);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b51u, "ran off the end of a function");
}
void f_00001b54(X86Cpu& c) {
    X86_TICK(c, 21);
    // 001b54  and byte ptr gs:[ebp + 0x101], 0xdf
    X86_AT(c, 0x1b54u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xDFu, 1)); }
    // 001b5c  or byte ptr gs:[ebp + 0x101], al
    X86_AT(c, 0x1b5cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 001b63  call 0xe29
    X86_AT(c, 0x1b63u);
    push32(c, 0x1b68u); f_00000e29(c); X86_RET(c, 0x1b68u);
    X86_TICK(c, 15);
    // 001b68  pop eax
    X86_AT(c, 0x1b68u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 001b69  mov byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x1b69u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), g8(c, 0));
    // 001b6d  mov edi, 0x40
    X86_AT(c, 0x1b6du);
    c.r[7] = 0x40u;
    // 001b72  call 0x1bac
    X86_AT(c, 0x1b72u);
    push32(c, 0x1b77u); f_00001bac(c); X86_RET(c, 0x1b77u);
    X86_TICK(c, 7);
    // 001b77  call 0x1bcc
    X86_AT(c, 0x1b77u);
    push32(c, 0x1b7cu); f_00001bcc(c); X86_RET(c, 0x1b7cu);
    X86_TICK(c, 7);
    // 001b7c  test esi, esi
    X86_AT(c, 0x1b7cu);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 001b7e  je 0x1b90
    X86_AT(c, 0x1b7eu);
    if (x86_cc(c, 4)) { goto L_1b90; }
    X86_TICK(c, 8);
    // 001b80  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1b80u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
L_1b90:
    X86_TICK(c, 12);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b54u, "ran off the end of a function");
}
void f_00001b5c(X86Cpu& c) {
    X86_TICK(c, 14);
    // 001b5c  or byte ptr gs:[ebp + 0x101], al
    X86_AT(c, 0x1b5cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 001b63  call 0xe29
    X86_AT(c, 0x1b63u);
    push32(c, 0x1b68u); f_00000e29(c); X86_RET(c, 0x1b68u);
    X86_TICK(c, 15);
    // 001b68  pop eax
    X86_AT(c, 0x1b68u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 001b69  mov byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x1b69u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), g8(c, 0));
    // 001b6d  mov edi, 0x40
    X86_AT(c, 0x1b6du);
    c.r[7] = 0x40u;
    // 001b72  call 0x1bac
    X86_AT(c, 0x1b72u);
    push32(c, 0x1b77u); f_00001bac(c); X86_RET(c, 0x1b77u);
    X86_TICK(c, 7);
    // 001b77  call 0x1bcc
    X86_AT(c, 0x1b77u);
    push32(c, 0x1b7cu); f_00001bcc(c); X86_RET(c, 0x1b7cu);
    X86_TICK(c, 7);
    // 001b7c  test esi, esi
    X86_AT(c, 0x1b7cu);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 001b7e  je 0x1b90
    X86_AT(c, 0x1b7eu);
    if (x86_cc(c, 4)) { goto L_1b90; }
    X86_TICK(c, 8);
    // 001b80  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1b80u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
L_1b90:
    X86_TICK(c, 12);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b5cu, "ran off the end of a function");
}
void f_00001b63(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001b63  call 0xe29
    X86_AT(c, 0x1b63u);
    push32(c, 0x1b68u); f_00000e29(c); X86_RET(c, 0x1b68u);
    X86_TICK(c, 15);
    // 001b68  pop eax
    X86_AT(c, 0x1b68u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 001b69  mov byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x1b69u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), g8(c, 0));
    // 001b6d  mov edi, 0x40
    X86_AT(c, 0x1b6du);
    c.r[7] = 0x40u;
    // 001b72  call 0x1bac
    X86_AT(c, 0x1b72u);
    push32(c, 0x1b77u); f_00001bac(c); X86_RET(c, 0x1b77u);
    X86_TICK(c, 7);
    // 001b77  call 0x1bcc
    X86_AT(c, 0x1b77u);
    push32(c, 0x1b7cu); f_00001bcc(c); X86_RET(c, 0x1b7cu);
    X86_TICK(c, 7);
    // 001b7c  test esi, esi
    X86_AT(c, 0x1b7cu);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 001b7e  je 0x1b90
    X86_AT(c, 0x1b7eu);
    if (x86_cc(c, 4)) { goto L_1b90; }
    X86_TICK(c, 8);
    // 001b80  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1b80u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
L_1b90:
    X86_TICK(c, 12);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b63u, "ran off the end of a function");
}
void f_00001b68(X86Cpu& c) {
    X86_TICK(c, 15);
    // 001b68  pop eax
    X86_AT(c, 0x1b68u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 001b69  mov byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x1b69u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), g8(c, 0));
    // 001b6d  mov edi, 0x40
    X86_AT(c, 0x1b6du);
    c.r[7] = 0x40u;
    // 001b72  call 0x1bac
    X86_AT(c, 0x1b72u);
    push32(c, 0x1b77u); f_00001bac(c); X86_RET(c, 0x1b77u);
    X86_TICK(c, 7);
    // 001b77  call 0x1bcc
    X86_AT(c, 0x1b77u);
    push32(c, 0x1b7cu); f_00001bcc(c); X86_RET(c, 0x1b7cu);
    X86_TICK(c, 7);
    // 001b7c  test esi, esi
    X86_AT(c, 0x1b7cu);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 001b7e  je 0x1b90
    X86_AT(c, 0x1b7eu);
    if (x86_cc(c, 4)) { goto L_1b90; }
    X86_TICK(c, 8);
    // 001b80  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1b80u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
L_1b90:
    X86_TICK(c, 12);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b68u, "ran off the end of a function");
}
void f_00001b69(X86Cpu& c) {
    X86_TICK(c, 11);
    // 001b69  mov byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x1b69u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), g8(c, 0));
    // 001b6d  mov edi, 0x40
    X86_AT(c, 0x1b6du);
    c.r[7] = 0x40u;
    // 001b72  call 0x1bac
    X86_AT(c, 0x1b72u);
    push32(c, 0x1b77u); f_00001bac(c); X86_RET(c, 0x1b77u);
    X86_TICK(c, 7);
    // 001b77  call 0x1bcc
    X86_AT(c, 0x1b77u);
    push32(c, 0x1b7cu); f_00001bcc(c); X86_RET(c, 0x1b7cu);
    X86_TICK(c, 7);
    // 001b7c  test esi, esi
    X86_AT(c, 0x1b7cu);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 001b7e  je 0x1b90
    X86_AT(c, 0x1b7eu);
    if (x86_cc(c, 4)) { goto L_1b90; }
    X86_TICK(c, 8);
    // 001b80  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1b80u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
L_1b90:
    X86_TICK(c, 12);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b69u, "ran off the end of a function");
}
void f_00001b6d(X86Cpu& c) {
    X86_TICK(c, 9);
    // 001b6d  mov edi, 0x40
    X86_AT(c, 0x1b6du);
    c.r[7] = 0x40u;
    // 001b72  call 0x1bac
    X86_AT(c, 0x1b72u);
    push32(c, 0x1b77u); f_00001bac(c); X86_RET(c, 0x1b77u);
    X86_TICK(c, 7);
    // 001b77  call 0x1bcc
    X86_AT(c, 0x1b77u);
    push32(c, 0x1b7cu); f_00001bcc(c); X86_RET(c, 0x1b7cu);
    X86_TICK(c, 7);
    // 001b7c  test esi, esi
    X86_AT(c, 0x1b7cu);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 001b7e  je 0x1b90
    X86_AT(c, 0x1b7eu);
    if (x86_cc(c, 4)) { goto L_1b90; }
    X86_TICK(c, 8);
    // 001b80  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1b80u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
L_1b90:
    X86_TICK(c, 12);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b6du, "ran off the end of a function");
}
void f_00001b72(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001b72  call 0x1bac
    X86_AT(c, 0x1b72u);
    push32(c, 0x1b77u); f_00001bac(c); X86_RET(c, 0x1b77u);
    X86_TICK(c, 7);
    // 001b77  call 0x1bcc
    X86_AT(c, 0x1b77u);
    push32(c, 0x1b7cu); f_00001bcc(c); X86_RET(c, 0x1b7cu);
    X86_TICK(c, 7);
    // 001b7c  test esi, esi
    X86_AT(c, 0x1b7cu);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 001b7e  je 0x1b90
    X86_AT(c, 0x1b7eu);
    if (x86_cc(c, 4)) { goto L_1b90; }
    X86_TICK(c, 8);
    // 001b80  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1b80u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
L_1b90:
    X86_TICK(c, 12);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b72u, "ran off the end of a function");
}
void f_00001b77(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001b77  call 0x1bcc
    X86_AT(c, 0x1b77u);
    push32(c, 0x1b7cu); f_00001bcc(c); X86_RET(c, 0x1b7cu);
    X86_TICK(c, 7);
    // 001b7c  test esi, esi
    X86_AT(c, 0x1b7cu);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 001b7e  je 0x1b90
    X86_AT(c, 0x1b7eu);
    if (x86_cc(c, 4)) { goto L_1b90; }
    X86_TICK(c, 8);
    // 001b80  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1b80u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
L_1b90:
    X86_TICK(c, 12);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b77u, "ran off the end of a function");
}
void f_00001b7c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001b7c  test esi, esi
    X86_AT(c, 0x1b7cu);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 001b7e  je 0x1b90
    X86_AT(c, 0x1b7eu);
    if (x86_cc(c, 4)) { goto L_1b90; }
    X86_TICK(c, 8);
    // 001b80  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1b80u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
L_1b90:
    X86_TICK(c, 12);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b7cu, "ran off the end of a function");
}
void f_00001b7e(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001b7e  je 0x1b90
    X86_AT(c, 0x1b7eu);
    if (x86_cc(c, 4)) { goto L_1b90; }
    X86_TICK(c, 8);
    // 001b80  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1b80u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
L_1b90:
    X86_TICK(c, 12);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b7eu, "ran off the end of a function");
}
void f_00001b80(X86Cpu& c) {
    X86_TICK(c, 20);
    // 001b80  mov dword ptr gs:[ebp + 0x28], 0
    X86_AT(c, 0x1b80u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u)), 0x0u);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b80u, "ran off the end of a function");
}
void f_00001b88(X86Cpu& c) {
    X86_TICK(c, 18);
    // 001b88  mov eax, dword ptr gs:[ebp + 0x18]
    X86_AT(c, 0x1b88u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)));
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b88u, "ran off the end of a function");
}
void f_00001b8c(X86Cpu& c) {
    X86_TICK(c, 14);
    // 001b8c  mov dword ptr gs:[ebp + 0x2c], eax
    X86_AT(c, 0x1b8cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu)), c.r[0]);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b8cu, "ran off the end of a function");
}
void f_00001b90(X86Cpu& c) {
    X86_TICK(c, 12);
    // 001b90  mov ah, 0
    X86_AT(c, 0x1b90u);
    s8(c, 4, 0x0u);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b90u, "ran off the end of a function");
}
void f_00001b92(X86Cpu& c) {
    X86_TICK(c, 10);
    // 001b92  ret 
    X86_AT(c, 0x1b92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1b92u, "ran off the end of a function");
}
void f_00001bac(X86Cpu& c) {
    X86_TICK(c, 34);
    // 001bac  movzx eax, al
    X86_AT(c, 0x1bacu);
    c.r[0] = g8(c, 0);
    // 001baf  lea eax, [eax + eax*2]
    X86_AT(c, 0x1bafu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 001bb2  lea edi, [edi + eax*4]
    X86_AT(c, 0x1bb2u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[0] * 4);
    // 001bb5  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x1bb5u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 001bba  mov cx, word ptr gs:[ebp + edi*1 + 6]
    X86_AT(c, 0x1bbau);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u))));
    // 001bc0  mov edx, dword ptr gs:[ebp + edi*1 + 8]
    X86_AT(c, 0x1bc0u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)));
    // 001bc5  shld ebx, edx, 0x10
    X86_AT(c, 0x1bc5u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001bc9  ret 
    X86_AT(c, 0x1bc9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1bacu, "ran off the end of a function");
}
void f_00001baf(X86Cpu& c) {
    X86_TICK(c, 31);
    // 001baf  lea eax, [eax + eax*2]
    X86_AT(c, 0x1bafu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 001bb2  lea edi, [edi + eax*4]
    X86_AT(c, 0x1bb2u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[0] * 4);
    // 001bb5  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x1bb5u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 001bba  mov cx, word ptr gs:[ebp + edi*1 + 6]
    X86_AT(c, 0x1bbau);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u))));
    // 001bc0  mov edx, dword ptr gs:[ebp + edi*1 + 8]
    X86_AT(c, 0x1bc0u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)));
    // 001bc5  shld ebx, edx, 0x10
    X86_AT(c, 0x1bc5u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001bc9  ret 
    X86_AT(c, 0x1bc9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1bafu, "ran off the end of a function");
}
void f_00001bb2(X86Cpu& c) {
    X86_TICK(c, 29);
    // 001bb2  lea edi, [edi + eax*4]
    X86_AT(c, 0x1bb2u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[0] * 4);
    // 001bb5  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x1bb5u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 001bba  mov cx, word ptr gs:[ebp + edi*1 + 6]
    X86_AT(c, 0x1bbau);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u))));
    // 001bc0  mov edx, dword ptr gs:[ebp + edi*1 + 8]
    X86_AT(c, 0x1bc0u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)));
    // 001bc5  shld ebx, edx, 0x10
    X86_AT(c, 0x1bc5u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001bc9  ret 
    X86_AT(c, 0x1bc9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1bb2u, "ran off the end of a function");
}
void f_00001bb5(X86Cpu& c) {
    X86_TICK(c, 27);
    // 001bb5  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x1bb5u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 001bba  mov cx, word ptr gs:[ebp + edi*1 + 6]
    X86_AT(c, 0x1bbau);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u))));
    // 001bc0  mov edx, dword ptr gs:[ebp + edi*1 + 8]
    X86_AT(c, 0x1bc0u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)));
    // 001bc5  shld ebx, edx, 0x10
    X86_AT(c, 0x1bc5u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001bc9  ret 
    X86_AT(c, 0x1bc9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1bb5u, "ran off the end of a function");
}
void f_00001bba(X86Cpu& c) {
    X86_TICK(c, 21);
    // 001bba  mov cx, word ptr gs:[ebp + edi*1 + 6]
    X86_AT(c, 0x1bbau);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x6u))));
    // 001bc0  mov edx, dword ptr gs:[ebp + edi*1 + 8]
    X86_AT(c, 0x1bc0u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)));
    // 001bc5  shld ebx, edx, 0x10
    X86_AT(c, 0x1bc5u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001bc9  ret 
    X86_AT(c, 0x1bc9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1bbau, "ran off the end of a function");
}
void f_00001bc0(X86Cpu& c) {
    X86_TICK(c, 17);
    // 001bc0  mov edx, dword ptr gs:[ebp + edi*1 + 8]
    X86_AT(c, 0x1bc0u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x8u)));
    // 001bc5  shld ebx, edx, 0x10
    X86_AT(c, 0x1bc5u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001bc9  ret 
    X86_AT(c, 0x1bc9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1bc0u, "ran off the end of a function");
}
void f_00001bc5(X86Cpu& c) {
    X86_TICK(c, 13);
    // 001bc5  shld ebx, edx, 0x10
    X86_AT(c, 0x1bc5u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 001bc9  ret 
    X86_AT(c, 0x1bc9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1bc5u, "ran off the end of a function");
}
void f_00001bc9(X86Cpu& c) {
    X86_TICK(c, 10);
    // 001bc9  ret 
    X86_AT(c, 0x1bc9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1bc9u, "ran off the end of a function");
}
void f_00001bcc(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001bcc  test dx, 0x1f
    X86_AT(c, 0x1bccu);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & 0x1Fu, 2);
    // 001bd1  jne 0x1c47
    X86_AT(c, 0x1bd1u);
    if (x86_cc(c, 5)) { goto L_1c47; }
    X86_TICK(c, 7);
    // 001bd7  cmp cl, 0x20
    X86_AT(c, 0x1bd7u);
    (void)x86_sub(c, g8(c, 1), 0x20u, 0, 1);
    // 001bda  ja 0x1c47
    X86_AT(c, 0x1bdau);
    if (x86_cc(c, 7)) { goto L_1c47; }
    X86_TICK(c, 16);
    // 001bdc  movzx eax, cl
    X86_AT(c, 0x1bdcu);
    c.r[0] = g8(c, 1);
    // 001bdf  movzx ecx, byte ptr cs:[eax + 0x1c4a]
    X86_AT(c, 0x1bdfu);
    c.r[1] = rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x1C4Au)));
    // 001be7  cmp cl, 0xff
    X86_AT(c, 0x1be7u);
    (void)x86_sub(c, g8(c, 1), 0xFFu, 0, 1);
    // 001bea  je 0x1c47
    X86_AT(c, 0x1beau);
    if (x86_cc(c, 4)) { goto L_1c47; }
    X86_TICK(c, 26);
    // 001bec  mov dword ptr gs:[ebp + 0x14], ecx
    X86_AT(c, 0x1becu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)), c.r[1]);
    // 001bf0  mov dword ptr gs:[ebp + 0x24], eax
    X86_AT(c, 0x1bf0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u)), c.r[0]);
    // 001bf4  mov dword ptr gs:[ebp], esi
    X86_AT(c, 0x1bf4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5])), c.r[6]);
    // 001bf8  mov word ptr gs:[ebp + 4], ds
    X86_AT(c, 0x1bf8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u)), (uint32_t)c.sreg[3]);
    // 001bfc  sub esi, esi
    X86_AT(c, 0x1bfcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 001bfe  mov ax, dx
    X86_AT(c, 0x1bfeu);
    s16(c, 0, (c.r[2] & 0xFFFFu));
    // 001c01  dec ax
    X86_AT(c, 0x1c01u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c03  cmp word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c03u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c08  je 0x1c10
    X86_AT(c, 0x1c08u);
    if (x86_cc(c, 4)) { goto L_1c10; }
    X86_TICK(c, 4);
    // 001c0a  mov word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 001c0f  inc esi
    X86_AT(c, 0x1c0fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c10:
    X86_TICK(c, 16);
    // 001c10  mov ax, bx
    X86_AT(c, 0x1c10u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 001c13  dec ax
    X86_AT(c, 0x1c13u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c15  cmp word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c15u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c1a  je 0x1c22
    X86_AT(c, 0x1c1au);
    if (x86_cc(c, 4)) { goto L_1c22; }
    X86_TICK(c, 4);
    // 001c1c  mov word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)), (c.r[0] & 0xFFFFu));
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c22:
    X86_TICK(c, 78);
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
L_1c47:
    X86_TICK(c, 12);
    // 001c47  mov ah, 0xff
    X86_AT(c, 0x1c47u);
    s8(c, 4, 0xFFu);
    // 001c49  ret 
    X86_AT(c, 0x1c49u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1bccu, "ran off the end of a function");
}
void f_00001bd1(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001bd1  jne 0x1c47
    X86_AT(c, 0x1bd1u);
    if (x86_cc(c, 5)) { goto L_1c47; }
    X86_TICK(c, 7);
    // 001bd7  cmp cl, 0x20
    X86_AT(c, 0x1bd7u);
    (void)x86_sub(c, g8(c, 1), 0x20u, 0, 1);
    // 001bda  ja 0x1c47
    X86_AT(c, 0x1bdau);
    if (x86_cc(c, 7)) { goto L_1c47; }
    X86_TICK(c, 16);
    // 001bdc  movzx eax, cl
    X86_AT(c, 0x1bdcu);
    c.r[0] = g8(c, 1);
    // 001bdf  movzx ecx, byte ptr cs:[eax + 0x1c4a]
    X86_AT(c, 0x1bdfu);
    c.r[1] = rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x1C4Au)));
    // 001be7  cmp cl, 0xff
    X86_AT(c, 0x1be7u);
    (void)x86_sub(c, g8(c, 1), 0xFFu, 0, 1);
    // 001bea  je 0x1c47
    X86_AT(c, 0x1beau);
    if (x86_cc(c, 4)) { goto L_1c47; }
    X86_TICK(c, 26);
    // 001bec  mov dword ptr gs:[ebp + 0x14], ecx
    X86_AT(c, 0x1becu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)), c.r[1]);
    // 001bf0  mov dword ptr gs:[ebp + 0x24], eax
    X86_AT(c, 0x1bf0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u)), c.r[0]);
    // 001bf4  mov dword ptr gs:[ebp], esi
    X86_AT(c, 0x1bf4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5])), c.r[6]);
    // 001bf8  mov word ptr gs:[ebp + 4], ds
    X86_AT(c, 0x1bf8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u)), (uint32_t)c.sreg[3]);
    // 001bfc  sub esi, esi
    X86_AT(c, 0x1bfcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 001bfe  mov ax, dx
    X86_AT(c, 0x1bfeu);
    s16(c, 0, (c.r[2] & 0xFFFFu));
    // 001c01  dec ax
    X86_AT(c, 0x1c01u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c03  cmp word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c03u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c08  je 0x1c10
    X86_AT(c, 0x1c08u);
    if (x86_cc(c, 4)) { goto L_1c10; }
    X86_TICK(c, 4);
    // 001c0a  mov word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 001c0f  inc esi
    X86_AT(c, 0x1c0fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c10:
    X86_TICK(c, 16);
    // 001c10  mov ax, bx
    X86_AT(c, 0x1c10u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 001c13  dec ax
    X86_AT(c, 0x1c13u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c15  cmp word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c15u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c1a  je 0x1c22
    X86_AT(c, 0x1c1au);
    if (x86_cc(c, 4)) { goto L_1c22; }
    X86_TICK(c, 4);
    // 001c1c  mov word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)), (c.r[0] & 0xFFFFu));
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c22:
    X86_TICK(c, 78);
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
L_1c47:
    X86_TICK(c, 12);
    // 001c47  mov ah, 0xff
    X86_AT(c, 0x1c47u);
    s8(c, 4, 0xFFu);
    // 001c49  ret 
    X86_AT(c, 0x1c49u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1bd1u, "ran off the end of a function");
}
void f_00001bd7(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001bd7  cmp cl, 0x20
    X86_AT(c, 0x1bd7u);
    (void)x86_sub(c, g8(c, 1), 0x20u, 0, 1);
    // 001bda  ja 0x1c47
    X86_AT(c, 0x1bdau);
    if (x86_cc(c, 7)) { goto L_1c47; }
    X86_TICK(c, 16);
    // 001bdc  movzx eax, cl
    X86_AT(c, 0x1bdcu);
    c.r[0] = g8(c, 1);
    // 001bdf  movzx ecx, byte ptr cs:[eax + 0x1c4a]
    X86_AT(c, 0x1bdfu);
    c.r[1] = rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x1C4Au)));
    // 001be7  cmp cl, 0xff
    X86_AT(c, 0x1be7u);
    (void)x86_sub(c, g8(c, 1), 0xFFu, 0, 1);
    // 001bea  je 0x1c47
    X86_AT(c, 0x1beau);
    if (x86_cc(c, 4)) { goto L_1c47; }
    X86_TICK(c, 26);
    // 001bec  mov dword ptr gs:[ebp + 0x14], ecx
    X86_AT(c, 0x1becu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)), c.r[1]);
    // 001bf0  mov dword ptr gs:[ebp + 0x24], eax
    X86_AT(c, 0x1bf0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u)), c.r[0]);
    // 001bf4  mov dword ptr gs:[ebp], esi
    X86_AT(c, 0x1bf4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5])), c.r[6]);
    // 001bf8  mov word ptr gs:[ebp + 4], ds
    X86_AT(c, 0x1bf8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u)), (uint32_t)c.sreg[3]);
    // 001bfc  sub esi, esi
    X86_AT(c, 0x1bfcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 001bfe  mov ax, dx
    X86_AT(c, 0x1bfeu);
    s16(c, 0, (c.r[2] & 0xFFFFu));
    // 001c01  dec ax
    X86_AT(c, 0x1c01u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c03  cmp word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c03u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c08  je 0x1c10
    X86_AT(c, 0x1c08u);
    if (x86_cc(c, 4)) { goto L_1c10; }
    X86_TICK(c, 4);
    // 001c0a  mov word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 001c0f  inc esi
    X86_AT(c, 0x1c0fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c10:
    X86_TICK(c, 16);
    // 001c10  mov ax, bx
    X86_AT(c, 0x1c10u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 001c13  dec ax
    X86_AT(c, 0x1c13u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c15  cmp word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c15u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c1a  je 0x1c22
    X86_AT(c, 0x1c1au);
    if (x86_cc(c, 4)) { goto L_1c22; }
    X86_TICK(c, 4);
    // 001c1c  mov word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)), (c.r[0] & 0xFFFFu));
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c22:
    X86_TICK(c, 78);
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
L_1c47:
    X86_TICK(c, 12);
    // 001c47  mov ah, 0xff
    X86_AT(c, 0x1c47u);
    s8(c, 4, 0xFFu);
    // 001c49  ret 
    X86_AT(c, 0x1c49u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1bd7u, "ran off the end of a function");
}
void f_00001bda(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001bda  ja 0x1c47
    X86_AT(c, 0x1bdau);
    if (x86_cc(c, 7)) { goto L_1c47; }
    X86_TICK(c, 16);
    // 001bdc  movzx eax, cl
    X86_AT(c, 0x1bdcu);
    c.r[0] = g8(c, 1);
    // 001bdf  movzx ecx, byte ptr cs:[eax + 0x1c4a]
    X86_AT(c, 0x1bdfu);
    c.r[1] = rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x1C4Au)));
    // 001be7  cmp cl, 0xff
    X86_AT(c, 0x1be7u);
    (void)x86_sub(c, g8(c, 1), 0xFFu, 0, 1);
    // 001bea  je 0x1c47
    X86_AT(c, 0x1beau);
    if (x86_cc(c, 4)) { goto L_1c47; }
    X86_TICK(c, 26);
    // 001bec  mov dword ptr gs:[ebp + 0x14], ecx
    X86_AT(c, 0x1becu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)), c.r[1]);
    // 001bf0  mov dword ptr gs:[ebp + 0x24], eax
    X86_AT(c, 0x1bf0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u)), c.r[0]);
    // 001bf4  mov dword ptr gs:[ebp], esi
    X86_AT(c, 0x1bf4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5])), c.r[6]);
    // 001bf8  mov word ptr gs:[ebp + 4], ds
    X86_AT(c, 0x1bf8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u)), (uint32_t)c.sreg[3]);
    // 001bfc  sub esi, esi
    X86_AT(c, 0x1bfcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 001bfe  mov ax, dx
    X86_AT(c, 0x1bfeu);
    s16(c, 0, (c.r[2] & 0xFFFFu));
    // 001c01  dec ax
    X86_AT(c, 0x1c01u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c03  cmp word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c03u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c08  je 0x1c10
    X86_AT(c, 0x1c08u);
    if (x86_cc(c, 4)) { goto L_1c10; }
    X86_TICK(c, 4);
    // 001c0a  mov word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 001c0f  inc esi
    X86_AT(c, 0x1c0fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c10:
    X86_TICK(c, 16);
    // 001c10  mov ax, bx
    X86_AT(c, 0x1c10u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 001c13  dec ax
    X86_AT(c, 0x1c13u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c15  cmp word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c15u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c1a  je 0x1c22
    X86_AT(c, 0x1c1au);
    if (x86_cc(c, 4)) { goto L_1c22; }
    X86_TICK(c, 4);
    // 001c1c  mov word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)), (c.r[0] & 0xFFFFu));
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c22:
    X86_TICK(c, 78);
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
L_1c47:
    X86_TICK(c, 12);
    // 001c47  mov ah, 0xff
    X86_AT(c, 0x1c47u);
    s8(c, 4, 0xFFu);
    // 001c49  ret 
    X86_AT(c, 0x1c49u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1bdau, "ran off the end of a function");
}
void f_00001bdc(X86Cpu& c) {
    X86_TICK(c, 16);
    // 001bdc  movzx eax, cl
    X86_AT(c, 0x1bdcu);
    c.r[0] = g8(c, 1);
    // 001bdf  movzx ecx, byte ptr cs:[eax + 0x1c4a]
    X86_AT(c, 0x1bdfu);
    c.r[1] = rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x1C4Au)));
    // 001be7  cmp cl, 0xff
    X86_AT(c, 0x1be7u);
    (void)x86_sub(c, g8(c, 1), 0xFFu, 0, 1);
    // 001bea  je 0x1c47
    X86_AT(c, 0x1beau);
    if (x86_cc(c, 4)) { goto L_1c47; }
    X86_TICK(c, 26);
    // 001bec  mov dword ptr gs:[ebp + 0x14], ecx
    X86_AT(c, 0x1becu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)), c.r[1]);
    // 001bf0  mov dword ptr gs:[ebp + 0x24], eax
    X86_AT(c, 0x1bf0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u)), c.r[0]);
    // 001bf4  mov dword ptr gs:[ebp], esi
    X86_AT(c, 0x1bf4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5])), c.r[6]);
    // 001bf8  mov word ptr gs:[ebp + 4], ds
    X86_AT(c, 0x1bf8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u)), (uint32_t)c.sreg[3]);
    // 001bfc  sub esi, esi
    X86_AT(c, 0x1bfcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 001bfe  mov ax, dx
    X86_AT(c, 0x1bfeu);
    s16(c, 0, (c.r[2] & 0xFFFFu));
    // 001c01  dec ax
    X86_AT(c, 0x1c01u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c03  cmp word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c03u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c08  je 0x1c10
    X86_AT(c, 0x1c08u);
    if (x86_cc(c, 4)) { goto L_1c10; }
    X86_TICK(c, 4);
    // 001c0a  mov word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 001c0f  inc esi
    X86_AT(c, 0x1c0fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c10:
    X86_TICK(c, 16);
    // 001c10  mov ax, bx
    X86_AT(c, 0x1c10u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 001c13  dec ax
    X86_AT(c, 0x1c13u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c15  cmp word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c15u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c1a  je 0x1c22
    X86_AT(c, 0x1c1au);
    if (x86_cc(c, 4)) { goto L_1c22; }
    X86_TICK(c, 4);
    // 001c1c  mov word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)), (c.r[0] & 0xFFFFu));
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c22:
    X86_TICK(c, 78);
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
L_1c47:
    X86_TICK(c, 12);
    // 001c47  mov ah, 0xff
    X86_AT(c, 0x1c47u);
    s8(c, 4, 0xFFu);
    // 001c49  ret 
    X86_AT(c, 0x1c49u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1bdcu, "ran off the end of a function");
}
void f_00001bdf(X86Cpu& c) {
    X86_TICK(c, 13);
    // 001bdf  movzx ecx, byte ptr cs:[eax + 0x1c4a]
    X86_AT(c, 0x1bdfu);
    c.r[1] = rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x1C4Au)));
    // 001be7  cmp cl, 0xff
    X86_AT(c, 0x1be7u);
    (void)x86_sub(c, g8(c, 1), 0xFFu, 0, 1);
    // 001bea  je 0x1c47
    X86_AT(c, 0x1beau);
    if (x86_cc(c, 4)) { goto L_1c47; }
    X86_TICK(c, 26);
    // 001bec  mov dword ptr gs:[ebp + 0x14], ecx
    X86_AT(c, 0x1becu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)), c.r[1]);
    // 001bf0  mov dword ptr gs:[ebp + 0x24], eax
    X86_AT(c, 0x1bf0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u)), c.r[0]);
    // 001bf4  mov dword ptr gs:[ebp], esi
    X86_AT(c, 0x1bf4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5])), c.r[6]);
    // 001bf8  mov word ptr gs:[ebp + 4], ds
    X86_AT(c, 0x1bf8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u)), (uint32_t)c.sreg[3]);
    // 001bfc  sub esi, esi
    X86_AT(c, 0x1bfcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 001bfe  mov ax, dx
    X86_AT(c, 0x1bfeu);
    s16(c, 0, (c.r[2] & 0xFFFFu));
    // 001c01  dec ax
    X86_AT(c, 0x1c01u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c03  cmp word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c03u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c08  je 0x1c10
    X86_AT(c, 0x1c08u);
    if (x86_cc(c, 4)) { goto L_1c10; }
    X86_TICK(c, 4);
    // 001c0a  mov word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 001c0f  inc esi
    X86_AT(c, 0x1c0fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c10:
    X86_TICK(c, 16);
    // 001c10  mov ax, bx
    X86_AT(c, 0x1c10u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 001c13  dec ax
    X86_AT(c, 0x1c13u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c15  cmp word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c15u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c1a  je 0x1c22
    X86_AT(c, 0x1c1au);
    if (x86_cc(c, 4)) { goto L_1c22; }
    X86_TICK(c, 4);
    // 001c1c  mov word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)), (c.r[0] & 0xFFFFu));
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c22:
    X86_TICK(c, 78);
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
L_1c47:
    X86_TICK(c, 12);
    // 001c47  mov ah, 0xff
    X86_AT(c, 0x1c47u);
    s8(c, 4, 0xFFu);
    // 001c49  ret 
    X86_AT(c, 0x1c49u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1bdfu, "ran off the end of a function");
}
void f_00001be7(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001be7  cmp cl, 0xff
    X86_AT(c, 0x1be7u);
    (void)x86_sub(c, g8(c, 1), 0xFFu, 0, 1);
    // 001bea  je 0x1c47
    X86_AT(c, 0x1beau);
    if (x86_cc(c, 4)) { goto L_1c47; }
    X86_TICK(c, 26);
    // 001bec  mov dword ptr gs:[ebp + 0x14], ecx
    X86_AT(c, 0x1becu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)), c.r[1]);
    // 001bf0  mov dword ptr gs:[ebp + 0x24], eax
    X86_AT(c, 0x1bf0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u)), c.r[0]);
    // 001bf4  mov dword ptr gs:[ebp], esi
    X86_AT(c, 0x1bf4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5])), c.r[6]);
    // 001bf8  mov word ptr gs:[ebp + 4], ds
    X86_AT(c, 0x1bf8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u)), (uint32_t)c.sreg[3]);
    // 001bfc  sub esi, esi
    X86_AT(c, 0x1bfcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 001bfe  mov ax, dx
    X86_AT(c, 0x1bfeu);
    s16(c, 0, (c.r[2] & 0xFFFFu));
    // 001c01  dec ax
    X86_AT(c, 0x1c01u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c03  cmp word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c03u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c08  je 0x1c10
    X86_AT(c, 0x1c08u);
    if (x86_cc(c, 4)) { goto L_1c10; }
    X86_TICK(c, 4);
    // 001c0a  mov word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 001c0f  inc esi
    X86_AT(c, 0x1c0fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c10:
    X86_TICK(c, 16);
    // 001c10  mov ax, bx
    X86_AT(c, 0x1c10u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 001c13  dec ax
    X86_AT(c, 0x1c13u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c15  cmp word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c15u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c1a  je 0x1c22
    X86_AT(c, 0x1c1au);
    if (x86_cc(c, 4)) { goto L_1c22; }
    X86_TICK(c, 4);
    // 001c1c  mov word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)), (c.r[0] & 0xFFFFu));
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c22:
    X86_TICK(c, 78);
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
L_1c47:
    X86_TICK(c, 12);
    // 001c47  mov ah, 0xff
    X86_AT(c, 0x1c47u);
    s8(c, 4, 0xFFu);
    // 001c49  ret 
    X86_AT(c, 0x1c49u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1be7u, "ran off the end of a function");
}
void f_00001bea(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001bea  je 0x1c47
    X86_AT(c, 0x1beau);
    if (x86_cc(c, 4)) { goto L_1c47; }
    X86_TICK(c, 26);
    // 001bec  mov dword ptr gs:[ebp + 0x14], ecx
    X86_AT(c, 0x1becu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)), c.r[1]);
    // 001bf0  mov dword ptr gs:[ebp + 0x24], eax
    X86_AT(c, 0x1bf0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u)), c.r[0]);
    // 001bf4  mov dword ptr gs:[ebp], esi
    X86_AT(c, 0x1bf4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5])), c.r[6]);
    // 001bf8  mov word ptr gs:[ebp + 4], ds
    X86_AT(c, 0x1bf8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u)), (uint32_t)c.sreg[3]);
    // 001bfc  sub esi, esi
    X86_AT(c, 0x1bfcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 001bfe  mov ax, dx
    X86_AT(c, 0x1bfeu);
    s16(c, 0, (c.r[2] & 0xFFFFu));
    // 001c01  dec ax
    X86_AT(c, 0x1c01u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c03  cmp word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c03u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c08  je 0x1c10
    X86_AT(c, 0x1c08u);
    if (x86_cc(c, 4)) { goto L_1c10; }
    X86_TICK(c, 4);
    // 001c0a  mov word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 001c0f  inc esi
    X86_AT(c, 0x1c0fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c10:
    X86_TICK(c, 16);
    // 001c10  mov ax, bx
    X86_AT(c, 0x1c10u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 001c13  dec ax
    X86_AT(c, 0x1c13u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c15  cmp word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c15u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c1a  je 0x1c22
    X86_AT(c, 0x1c1au);
    if (x86_cc(c, 4)) { goto L_1c22; }
    X86_TICK(c, 4);
    // 001c1c  mov word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)), (c.r[0] & 0xFFFFu));
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c22:
    X86_TICK(c, 78);
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
L_1c47:
    X86_TICK(c, 12);
    // 001c47  mov ah, 0xff
    X86_AT(c, 0x1c47u);
    s8(c, 4, 0xFFu);
    // 001c49  ret 
    X86_AT(c, 0x1c49u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1beau, "ran off the end of a function");
}
void f_00001bec(X86Cpu& c) {
    X86_TICK(c, 26);
    // 001bec  mov dword ptr gs:[ebp + 0x14], ecx
    X86_AT(c, 0x1becu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)), c.r[1]);
    // 001bf0  mov dword ptr gs:[ebp + 0x24], eax
    X86_AT(c, 0x1bf0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u)), c.r[0]);
    // 001bf4  mov dword ptr gs:[ebp], esi
    X86_AT(c, 0x1bf4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5])), c.r[6]);
    // 001bf8  mov word ptr gs:[ebp + 4], ds
    X86_AT(c, 0x1bf8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u)), (uint32_t)c.sreg[3]);
    // 001bfc  sub esi, esi
    X86_AT(c, 0x1bfcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 001bfe  mov ax, dx
    X86_AT(c, 0x1bfeu);
    s16(c, 0, (c.r[2] & 0xFFFFu));
    // 001c01  dec ax
    X86_AT(c, 0x1c01u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c03  cmp word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c03u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c08  je 0x1c10
    X86_AT(c, 0x1c08u);
    if (x86_cc(c, 4)) { goto L_1c10; }
    X86_TICK(c, 4);
    // 001c0a  mov word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 001c0f  inc esi
    X86_AT(c, 0x1c0fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c10:
    X86_TICK(c, 16);
    // 001c10  mov ax, bx
    X86_AT(c, 0x1c10u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 001c13  dec ax
    X86_AT(c, 0x1c13u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c15  cmp word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c15u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c1a  je 0x1c22
    X86_AT(c, 0x1c1au);
    if (x86_cc(c, 4)) { goto L_1c22; }
    X86_TICK(c, 4);
    // 001c1c  mov word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)), (c.r[0] & 0xFFFFu));
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c22:
    X86_TICK(c, 78);
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1becu, "ran off the end of a function");
}
void f_00001bf0(X86Cpu& c) {
    X86_TICK(c, 24);
    // 001bf0  mov dword ptr gs:[ebp + 0x24], eax
    X86_AT(c, 0x1bf0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u)), c.r[0]);
    // 001bf4  mov dword ptr gs:[ebp], esi
    X86_AT(c, 0x1bf4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5])), c.r[6]);
    // 001bf8  mov word ptr gs:[ebp + 4], ds
    X86_AT(c, 0x1bf8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u)), (uint32_t)c.sreg[3]);
    // 001bfc  sub esi, esi
    X86_AT(c, 0x1bfcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 001bfe  mov ax, dx
    X86_AT(c, 0x1bfeu);
    s16(c, 0, (c.r[2] & 0xFFFFu));
    // 001c01  dec ax
    X86_AT(c, 0x1c01u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c03  cmp word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c03u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c08  je 0x1c10
    X86_AT(c, 0x1c08u);
    if (x86_cc(c, 4)) { goto L_1c10; }
    X86_TICK(c, 4);
    // 001c0a  mov word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 001c0f  inc esi
    X86_AT(c, 0x1c0fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c10:
    X86_TICK(c, 16);
    // 001c10  mov ax, bx
    X86_AT(c, 0x1c10u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 001c13  dec ax
    X86_AT(c, 0x1c13u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c15  cmp word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c15u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c1a  je 0x1c22
    X86_AT(c, 0x1c1au);
    if (x86_cc(c, 4)) { goto L_1c22; }
    X86_TICK(c, 4);
    // 001c1c  mov word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)), (c.r[0] & 0xFFFFu));
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c22:
    X86_TICK(c, 78);
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1bf0u, "ran off the end of a function");
}
void f_00001bf4(X86Cpu& c) {
    X86_TICK(c, 22);
    // 001bf4  mov dword ptr gs:[ebp], esi
    X86_AT(c, 0x1bf4u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5])), c.r[6]);
    // 001bf8  mov word ptr gs:[ebp + 4], ds
    X86_AT(c, 0x1bf8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u)), (uint32_t)c.sreg[3]);
    // 001bfc  sub esi, esi
    X86_AT(c, 0x1bfcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 001bfe  mov ax, dx
    X86_AT(c, 0x1bfeu);
    s16(c, 0, (c.r[2] & 0xFFFFu));
    // 001c01  dec ax
    X86_AT(c, 0x1c01u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c03  cmp word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c03u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c08  je 0x1c10
    X86_AT(c, 0x1c08u);
    if (x86_cc(c, 4)) { goto L_1c10; }
    X86_TICK(c, 4);
    // 001c0a  mov word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 001c0f  inc esi
    X86_AT(c, 0x1c0fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c10:
    X86_TICK(c, 16);
    // 001c10  mov ax, bx
    X86_AT(c, 0x1c10u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 001c13  dec ax
    X86_AT(c, 0x1c13u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c15  cmp word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c15u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c1a  je 0x1c22
    X86_AT(c, 0x1c1au);
    if (x86_cc(c, 4)) { goto L_1c22; }
    X86_TICK(c, 4);
    // 001c1c  mov word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)), (c.r[0] & 0xFFFFu));
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c22:
    X86_TICK(c, 78);
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1bf4u, "ran off the end of a function");
}
void f_00001bf8(X86Cpu& c) {
    X86_TICK(c, 20);
    // 001bf8  mov word ptr gs:[ebp + 4], ds
    X86_AT(c, 0x1bf8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u)), (uint32_t)c.sreg[3]);
    // 001bfc  sub esi, esi
    X86_AT(c, 0x1bfcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 001bfe  mov ax, dx
    X86_AT(c, 0x1bfeu);
    s16(c, 0, (c.r[2] & 0xFFFFu));
    // 001c01  dec ax
    X86_AT(c, 0x1c01u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c03  cmp word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c03u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c08  je 0x1c10
    X86_AT(c, 0x1c08u);
    if (x86_cc(c, 4)) { goto L_1c10; }
    X86_TICK(c, 4);
    // 001c0a  mov word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 001c0f  inc esi
    X86_AT(c, 0x1c0fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c10:
    X86_TICK(c, 16);
    // 001c10  mov ax, bx
    X86_AT(c, 0x1c10u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 001c13  dec ax
    X86_AT(c, 0x1c13u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c15  cmp word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c15u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c1a  je 0x1c22
    X86_AT(c, 0x1c1au);
    if (x86_cc(c, 4)) { goto L_1c22; }
    X86_TICK(c, 4);
    // 001c1c  mov word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)), (c.r[0] & 0xFFFFu));
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c22:
    X86_TICK(c, 78);
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1bf8u, "ran off the end of a function");
}
void f_00001bfc(X86Cpu& c) {
    X86_TICK(c, 18);
    // 001bfc  sub esi, esi
    X86_AT(c, 0x1bfcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 001bfe  mov ax, dx
    X86_AT(c, 0x1bfeu);
    s16(c, 0, (c.r[2] & 0xFFFFu));
    // 001c01  dec ax
    X86_AT(c, 0x1c01u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c03  cmp word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c03u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c08  je 0x1c10
    X86_AT(c, 0x1c08u);
    if (x86_cc(c, 4)) { goto L_1c10; }
    X86_TICK(c, 4);
    // 001c0a  mov word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 001c0f  inc esi
    X86_AT(c, 0x1c0fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c10:
    X86_TICK(c, 16);
    // 001c10  mov ax, bx
    X86_AT(c, 0x1c10u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 001c13  dec ax
    X86_AT(c, 0x1c13u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c15  cmp word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c15u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c1a  je 0x1c22
    X86_AT(c, 0x1c1au);
    if (x86_cc(c, 4)) { goto L_1c22; }
    X86_TICK(c, 4);
    // 001c1c  mov word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)), (c.r[0] & 0xFFFFu));
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c22:
    X86_TICK(c, 78);
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1bfcu, "ran off the end of a function");
}
void f_00001bfe(X86Cpu& c) {
    X86_TICK(c, 16);
    // 001bfe  mov ax, dx
    X86_AT(c, 0x1bfeu);
    s16(c, 0, (c.r[2] & 0xFFFFu));
    // 001c01  dec ax
    X86_AT(c, 0x1c01u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c03  cmp word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c03u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c08  je 0x1c10
    X86_AT(c, 0x1c08u);
    if (x86_cc(c, 4)) { goto L_1c10; }
    X86_TICK(c, 4);
    // 001c0a  mov word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 001c0f  inc esi
    X86_AT(c, 0x1c0fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c10:
    X86_TICK(c, 16);
    // 001c10  mov ax, bx
    X86_AT(c, 0x1c10u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 001c13  dec ax
    X86_AT(c, 0x1c13u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c15  cmp word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c15u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c1a  je 0x1c22
    X86_AT(c, 0x1c1au);
    if (x86_cc(c, 4)) { goto L_1c22; }
    X86_TICK(c, 4);
    // 001c1c  mov word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)), (c.r[0] & 0xFFFFu));
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c22:
    X86_TICK(c, 78);
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1bfeu, "ran off the end of a function");
}
void f_00001c01(X86Cpu& c) {
    X86_TICK(c, 14);
    // 001c01  dec ax
    X86_AT(c, 0x1c01u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c03  cmp word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c03u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c08  je 0x1c10
    X86_AT(c, 0x1c08u);
    if (x86_cc(c, 4)) { goto L_1c10; }
    X86_TICK(c, 4);
    // 001c0a  mov word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 001c0f  inc esi
    X86_AT(c, 0x1c0fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c10:
    X86_TICK(c, 16);
    // 001c10  mov ax, bx
    X86_AT(c, 0x1c10u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 001c13  dec ax
    X86_AT(c, 0x1c13u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c15  cmp word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c15u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c1a  je 0x1c22
    X86_AT(c, 0x1c1au);
    if (x86_cc(c, 4)) { goto L_1c22; }
    X86_TICK(c, 4);
    // 001c1c  mov word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)), (c.r[0] & 0xFFFFu));
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c22:
    X86_TICK(c, 78);
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1c01u, "ran off the end of a function");
}
void f_00001c03(X86Cpu& c) {
    X86_TICK(c, 12);
    // 001c03  cmp word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c03u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c08  je 0x1c10
    X86_AT(c, 0x1c08u);
    if (x86_cc(c, 4)) { goto L_1c10; }
    X86_TICK(c, 4);
    // 001c0a  mov word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 001c0f  inc esi
    X86_AT(c, 0x1c0fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c10:
    X86_TICK(c, 16);
    // 001c10  mov ax, bx
    X86_AT(c, 0x1c10u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 001c13  dec ax
    X86_AT(c, 0x1c13u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c15  cmp word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c15u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c1a  je 0x1c22
    X86_AT(c, 0x1c1au);
    if (x86_cc(c, 4)) { goto L_1c22; }
    X86_TICK(c, 4);
    // 001c1c  mov word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)), (c.r[0] & 0xFFFFu));
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c22:
    X86_TICK(c, 78);
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1c03u, "ran off the end of a function");
}
void f_00001c08(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001c08  je 0x1c10
    X86_AT(c, 0x1c08u);
    if (x86_cc(c, 4)) { goto L_1c10; }
    X86_TICK(c, 4);
    // 001c0a  mov word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 001c0f  inc esi
    X86_AT(c, 0x1c0fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c10:
    X86_TICK(c, 16);
    // 001c10  mov ax, bx
    X86_AT(c, 0x1c10u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 001c13  dec ax
    X86_AT(c, 0x1c13u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c15  cmp word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c15u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c1a  je 0x1c22
    X86_AT(c, 0x1c1au);
    if (x86_cc(c, 4)) { goto L_1c22; }
    X86_TICK(c, 4);
    // 001c1c  mov word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)), (c.r[0] & 0xFFFFu));
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c22:
    X86_TICK(c, 78);
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1c08u, "ran off the end of a function");
}
void f_00001c0a(X86Cpu& c) {
    X86_TICK(c, 20);
    // 001c0a  mov word ptr gs:[ebp + 0x18], ax
    X86_AT(c, 0x1c0au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)), (c.r[0] & 0xFFFFu));
    // 001c0f  inc esi
    X86_AT(c, 0x1c0fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 001c10  mov ax, bx
    X86_AT(c, 0x1c10u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 001c13  dec ax
    X86_AT(c, 0x1c13u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c15  cmp word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c15u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c1a  je 0x1c22
    X86_AT(c, 0x1c1au);
    if (x86_cc(c, 4)) { goto L_1c22; }
    X86_TICK(c, 4);
    // 001c1c  mov word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)), (c.r[0] & 0xFFFFu));
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c22:
    X86_TICK(c, 78);
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1c0au, "ran off the end of a function");
}
void f_00001c0f(X86Cpu& c) {
    X86_TICK(c, 18);
    // 001c0f  inc esi
    X86_AT(c, 0x1c0fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 001c10  mov ax, bx
    X86_AT(c, 0x1c10u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 001c13  dec ax
    X86_AT(c, 0x1c13u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c15  cmp word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c15u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c1a  je 0x1c22
    X86_AT(c, 0x1c1au);
    if (x86_cc(c, 4)) { goto L_1c22; }
    X86_TICK(c, 4);
    // 001c1c  mov word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)), (c.r[0] & 0xFFFFu));
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c22:
    X86_TICK(c, 78);
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1c0fu, "ran off the end of a function");
}
void f_00001c10(X86Cpu& c) {
    X86_TICK(c, 16);
    // 001c10  mov ax, bx
    X86_AT(c, 0x1c10u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 001c13  dec ax
    X86_AT(c, 0x1c13u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c15  cmp word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c15u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c1a  je 0x1c22
    X86_AT(c, 0x1c1au);
    if (x86_cc(c, 4)) { goto L_1c22; }
    X86_TICK(c, 4);
    // 001c1c  mov word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)), (c.r[0] & 0xFFFFu));
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c22:
    X86_TICK(c, 78);
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1c10u, "ran off the end of a function");
}
void f_00001c13(X86Cpu& c) {
    X86_TICK(c, 14);
    // 001c13  dec ax
    X86_AT(c, 0x1c13u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 001c15  cmp word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c15u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c1a  je 0x1c22
    X86_AT(c, 0x1c1au);
    if (x86_cc(c, 4)) { goto L_1c22; }
    X86_TICK(c, 4);
    // 001c1c  mov word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)), (c.r[0] & 0xFFFFu));
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c22:
    X86_TICK(c, 78);
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1c13u, "ran off the end of a function");
}
void f_00001c15(X86Cpu& c) {
    X86_TICK(c, 12);
    // 001c15  cmp word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c15u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au))), (c.r[0] & 0xFFFFu), 0, 2);
    // 001c1a  je 0x1c22
    X86_AT(c, 0x1c1au);
    if (x86_cc(c, 4)) { goto L_1c22; }
    X86_TICK(c, 4);
    // 001c1c  mov word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)), (c.r[0] & 0xFFFFu));
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c22:
    X86_TICK(c, 78);
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1c15u, "ran off the end of a function");
}
void f_00001c1a(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001c1a  je 0x1c22
    X86_AT(c, 0x1c1au);
    if (x86_cc(c, 4)) { goto L_1c22; }
    X86_TICK(c, 4);
    // 001c1c  mov word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)), (c.r[0] & 0xFFFFu));
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_1c22:
    X86_TICK(c, 78);
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1c1au, "ran off the end of a function");
}
void f_00001c1c(X86Cpu& c) {
    X86_TICK(c, 82);
    // 001c1c  mov word ptr gs:[ebp + 0x1a], ax
    X86_AT(c, 0x1c1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)), (c.r[0] & 0xFFFFu));
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1c1cu, "ran off the end of a function");
}
void f_00001c21(X86Cpu& c) {
    X86_TICK(c, 80);
    // 001c21  inc esi
    X86_AT(c, 0x1c21u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1c21u, "ran off the end of a function");
}
void f_00001c22(X86Cpu& c) {
    X86_TICK(c, 78);
    // 001c22  movzx eax, dx
    X86_AT(c, 0x1c22u);
    c.r[0] = (c.r[2] & 0xFFFFu);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1c22u, "ran off the end of a function");
}
void f_00001c25(X86Cpu& c) {
    X86_TICK(c, 75);
    // 001c25  shr eax, 3
    X86_AT(c, 0x1c25u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1c25u, "ran off the end of a function");
}
void f_00001c28(X86Cpu& c) {
    X86_TICK(c, 72);
    // 001c28  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1c28u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1c28u, "ran off the end of a function");
}
void f_00001c2c(X86Cpu& c) {
    X86_TICK(c, 70);
    // 001c2c  mov ecx, eax
    X86_AT(c, 0x1c2cu);
    c.r[1] = c.r[0];
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1c2cu, "ran off the end of a function");
}
void f_00001c2e(X86Cpu& c) {
    X86_TICK(c, 68);
    // 001c2e  imul eax, dword ptr gs:[ebp + 0x24]
    X86_AT(c, 0x1c2eu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x24u))), 4);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1c2eu, "ran off the end of a function");
}
void f_00001c33(X86Cpu& c) {
    X86_TICK(c, 46);
    // 001c33  mov dword ptr gs:[ebp + 0x20], eax
    X86_AT(c, 0x1c33u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)), c.r[0]);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1c33u, "ran off the end of a function");
}
void f_00001c37(X86Cpu& c) {
    X86_TICK(c, 44);
    // 001c37  movzx eax, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1c37u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1c37u, "ran off the end of a function");
}
void f_00001c3c(X86Cpu& c) {
    X86_TICK(c, 38);
    // 001c3c  inc eax
    X86_AT(c, 0x1c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1c3cu, "ran off the end of a function");
}
void f_00001c3d(X86Cpu& c) {
    X86_TICK(c, 36);
    // 001c3d  imul eax, ecx
    X86_AT(c, 0x1c3du);
    c.r[0] = x86_imul2(c, c.r[0], c.r[1], 4);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1c3du, "ran off the end of a function");
}
void f_00001c40(X86Cpu& c) {
    X86_TICK(c, 14);
    // 001c40  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x1c40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1c40u, "ran off the end of a function");
}
void f_00001c44(X86Cpu& c) {
    X86_TICK(c, 12);
    // 001c44  mov ah, 0
    X86_AT(c, 0x1c44u);
    s8(c, 4, 0x0u);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1c44u, "ran off the end of a function");
}
void f_00001c46(X86Cpu& c) {
    X86_TICK(c, 10);
    // 001c46  ret 
    X86_AT(c, 0x1c46u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1c46u, "ran off the end of a function");
}
void f_00001c6c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001c6c  cmp al, 3
    X86_AT(c, 0x1c6cu);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 001c6e  ja 0x1c7f
    X86_AT(c, 0x1c6eu);
    if (x86_cc(c, 7)) { goto L_1c7f; }
    X86_TICK(c, 14);
    // 001c70  movzx eax, al
    X86_AT(c, 0x1c70u);
    c.r[0] = g8(c, 0);
    // 001c73  mov ebx, dword ptr gs:[ebp + 0x14]
    X86_AT(c, 0x1c73u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)));
    // 001c77  jmp dword ptr cs:[ebx*4 + 0x1c88]
    X86_AT(c, 0x1c77u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0x1C88u)));
      switch (t) {
      case 0x1c98u: goto L_1c98;
      case 0x1cb4u: goto L_1cb4;
      case 0x1ce4u: goto L_1ce4;
      case 0x1cf8u: goto L_1cf8;
      default: x86_jump(c, t); return; } }
L_1c7f:
    X86_TICK(c, 12);
    // 001c7f  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x1c7fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 001c84  ret 
    X86_AT(c, 0x1c84u);
    c.eip = pop32(c); return;
L_1c98:
    X86_TICK(c, 7);
    // 001c98  cmp al, 1
    X86_AT(c, 0x1c98u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001c9a  jne 0x1ca6
    X86_AT(c, 0x1c9au);
    if (x86_cc(c, 5)) { goto L_1ca6; }
    X86_TICK(c, 4);
    // 001c9c  and edx, 1
    X86_AT(c, 0x1c9cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x1u, 4); }
    // 001c9f  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1c9fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
L_1ca6:
    X86_TICK(c, 18);
    // 001ca6  ror edx, 1
    X86_AT(c, 0x1ca6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 1, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 001ca8  sar edx, 0x1f
    X86_AT(c, 0x1ca8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1Fu, 4, w); if (w) c.r[2] = r; }
    // 001cab  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cabu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001cb3  ret 
    X86_AT(c, 0x1cb3u);
    c.eip = pop32(c); return;
L_1cb4:
    X86_TICK(c, 7);
    // 001cb4  cmp al, 1
    X86_AT(c, 0x1cb4u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001cb6  jne 0x1cc2
    X86_AT(c, 0x1cb6u);
    if (x86_cc(c, 5)) { goto L_1cc2; }
    X86_TICK(c, 4);
    // 001cb8  and edx, 0xf
    X86_AT(c, 0x1cb8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFu, 4); }
    // 001cbb  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1cbbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
L_1cc2:
    X86_TICK(c, 11);
    // 001cc2  mov ebx, edx
    X86_AT(c, 0x1cc2u);
    c.r[3] = c.r[2];
    // 001cc4  shrd edx, ebx, 4
    X86_AT(c, 0x1cc4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001cc8  shrd edx, ebx, 4
    X86_AT(c, 0x1cc8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001ccc  shr edx, 0x18
    X86_AT(c, 0x1cccu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x18u, 4, w); if (w) c.r[2] = r; }
L_1ccf:
    X86_TICK(c, 2);
    // 001ccf  mov dh, dl
    X86_AT(c, 0x1ccfu);
    s8(c, 6, g8(c, 2));
L_1cd1:
    X86_TICK(c, 19);
    // 001cd1  mov ebx, edx
    X86_AT(c, 0x1cd1u);
    c.r[3] = c.r[2];
    // 001cd3  shl edx, 0x10
    X86_AT(c, 0x1cd3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 001cd6  mov dx, bx
    X86_AT(c, 0x1cd6u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 001cd9  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cd9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001ce1  ret 
    X86_AT(c, 0x1ce1u);
    c.eip = pop32(c); return;
L_1ce4:
    X86_TICK(c, 7);
    // 001ce4  cmp al, 1
    X86_AT(c, 0x1ce4u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001ce6  jne 0x1ccf
    X86_AT(c, 0x1ce6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1ccfu); goto L_1ccf; }
    X86_TICK(c, 11);
    // 001ce8  and edx, 0xff
    X86_AT(c, 0x1ce8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFFu, 4); }
    // 001cee  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1ceeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
    // 001cf5  jmp 0x1ccf
    X86_AT(c, 0x1cf5u);
    X86_POLL(c, 0x1ccfu); goto L_1ccf;
L_1cf8:
    X86_TICK(c, 7);
    // 001cf8  cmp al, 1
    X86_AT(c, 0x1cf8u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001cfa  jne 0x1cd1
    X86_AT(c, 0x1cfau);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1cd1u); goto L_1cd1; }
    X86_TICK(c, 11);
    // 001cfc  and edx, 0xffff
    X86_AT(c, 0x1cfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFFFFu, 4); }
    // 001d02  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1d02u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
    // 001d09  jmp 0x1cd1
    X86_AT(c, 0x1d09u);
    X86_POLL(c, 0x1cd1u); goto L_1cd1;
    x86_fault(c, 0x1c6cu, "ran off the end of a function");
}
void f_00001c6e(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001c6e  ja 0x1c7f
    X86_AT(c, 0x1c6eu);
    if (x86_cc(c, 7)) { goto L_1c7f; }
    X86_TICK(c, 14);
    // 001c70  movzx eax, al
    X86_AT(c, 0x1c70u);
    c.r[0] = g8(c, 0);
    // 001c73  mov ebx, dword ptr gs:[ebp + 0x14]
    X86_AT(c, 0x1c73u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)));
    // 001c77  jmp dword ptr cs:[ebx*4 + 0x1c88]
    X86_AT(c, 0x1c77u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0x1C88u)));
      switch (t) {
      case 0x1c98u: goto L_1c98;
      case 0x1cb4u: goto L_1cb4;
      case 0x1ce4u: goto L_1ce4;
      case 0x1cf8u: goto L_1cf8;
      default: x86_jump(c, t); return; } }
L_1c7f:
    X86_TICK(c, 12);
    // 001c7f  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x1c7fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 001c84  ret 
    X86_AT(c, 0x1c84u);
    c.eip = pop32(c); return;
L_1c98:
    X86_TICK(c, 7);
    // 001c98  cmp al, 1
    X86_AT(c, 0x1c98u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001c9a  jne 0x1ca6
    X86_AT(c, 0x1c9au);
    if (x86_cc(c, 5)) { goto L_1ca6; }
    X86_TICK(c, 4);
    // 001c9c  and edx, 1
    X86_AT(c, 0x1c9cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x1u, 4); }
    // 001c9f  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1c9fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
L_1ca6:
    X86_TICK(c, 18);
    // 001ca6  ror edx, 1
    X86_AT(c, 0x1ca6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 1, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 001ca8  sar edx, 0x1f
    X86_AT(c, 0x1ca8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1Fu, 4, w); if (w) c.r[2] = r; }
    // 001cab  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cabu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001cb3  ret 
    X86_AT(c, 0x1cb3u);
    c.eip = pop32(c); return;
L_1cb4:
    X86_TICK(c, 7);
    // 001cb4  cmp al, 1
    X86_AT(c, 0x1cb4u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001cb6  jne 0x1cc2
    X86_AT(c, 0x1cb6u);
    if (x86_cc(c, 5)) { goto L_1cc2; }
    X86_TICK(c, 4);
    // 001cb8  and edx, 0xf
    X86_AT(c, 0x1cb8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFu, 4); }
    // 001cbb  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1cbbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
L_1cc2:
    X86_TICK(c, 11);
    // 001cc2  mov ebx, edx
    X86_AT(c, 0x1cc2u);
    c.r[3] = c.r[2];
    // 001cc4  shrd edx, ebx, 4
    X86_AT(c, 0x1cc4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001cc8  shrd edx, ebx, 4
    X86_AT(c, 0x1cc8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001ccc  shr edx, 0x18
    X86_AT(c, 0x1cccu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x18u, 4, w); if (w) c.r[2] = r; }
L_1ccf:
    X86_TICK(c, 2);
    // 001ccf  mov dh, dl
    X86_AT(c, 0x1ccfu);
    s8(c, 6, g8(c, 2));
L_1cd1:
    X86_TICK(c, 19);
    // 001cd1  mov ebx, edx
    X86_AT(c, 0x1cd1u);
    c.r[3] = c.r[2];
    // 001cd3  shl edx, 0x10
    X86_AT(c, 0x1cd3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 001cd6  mov dx, bx
    X86_AT(c, 0x1cd6u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 001cd9  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cd9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001ce1  ret 
    X86_AT(c, 0x1ce1u);
    c.eip = pop32(c); return;
L_1ce4:
    X86_TICK(c, 7);
    // 001ce4  cmp al, 1
    X86_AT(c, 0x1ce4u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001ce6  jne 0x1ccf
    X86_AT(c, 0x1ce6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1ccfu); goto L_1ccf; }
    X86_TICK(c, 11);
    // 001ce8  and edx, 0xff
    X86_AT(c, 0x1ce8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFFu, 4); }
    // 001cee  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1ceeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
    // 001cf5  jmp 0x1ccf
    X86_AT(c, 0x1cf5u);
    X86_POLL(c, 0x1ccfu); goto L_1ccf;
L_1cf8:
    X86_TICK(c, 7);
    // 001cf8  cmp al, 1
    X86_AT(c, 0x1cf8u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001cfa  jne 0x1cd1
    X86_AT(c, 0x1cfau);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1cd1u); goto L_1cd1; }
    X86_TICK(c, 11);
    // 001cfc  and edx, 0xffff
    X86_AT(c, 0x1cfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFFFFu, 4); }
    // 001d02  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1d02u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
    // 001d09  jmp 0x1cd1
    X86_AT(c, 0x1d09u);
    X86_POLL(c, 0x1cd1u); goto L_1cd1;
    x86_fault(c, 0x1c6eu, "ran off the end of a function");
}
void f_00001c70(X86Cpu& c) {
    X86_TICK(c, 14);
    // 001c70  movzx eax, al
    X86_AT(c, 0x1c70u);
    c.r[0] = g8(c, 0);
    // 001c73  mov ebx, dword ptr gs:[ebp + 0x14]
    X86_AT(c, 0x1c73u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)));
    // 001c77  jmp dword ptr cs:[ebx*4 + 0x1c88]
    X86_AT(c, 0x1c77u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0x1C88u)));
      switch (t) {
      case 0x1c98u: goto L_1c98;
      case 0x1cb4u: goto L_1cb4;
      case 0x1ce4u: goto L_1ce4;
      case 0x1cf8u: goto L_1cf8;
      default: x86_jump(c, t); return; } }
L_1c98:
    X86_TICK(c, 7);
    // 001c98  cmp al, 1
    X86_AT(c, 0x1c98u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001c9a  jne 0x1ca6
    X86_AT(c, 0x1c9au);
    if (x86_cc(c, 5)) { goto L_1ca6; }
    X86_TICK(c, 4);
    // 001c9c  and edx, 1
    X86_AT(c, 0x1c9cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x1u, 4); }
    // 001c9f  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1c9fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
L_1ca6:
    X86_TICK(c, 18);
    // 001ca6  ror edx, 1
    X86_AT(c, 0x1ca6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 1, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 001ca8  sar edx, 0x1f
    X86_AT(c, 0x1ca8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1Fu, 4, w); if (w) c.r[2] = r; }
    // 001cab  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cabu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001cb3  ret 
    X86_AT(c, 0x1cb3u);
    c.eip = pop32(c); return;
L_1cb4:
    X86_TICK(c, 7);
    // 001cb4  cmp al, 1
    X86_AT(c, 0x1cb4u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001cb6  jne 0x1cc2
    X86_AT(c, 0x1cb6u);
    if (x86_cc(c, 5)) { goto L_1cc2; }
    X86_TICK(c, 4);
    // 001cb8  and edx, 0xf
    X86_AT(c, 0x1cb8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFu, 4); }
    // 001cbb  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1cbbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
L_1cc2:
    X86_TICK(c, 11);
    // 001cc2  mov ebx, edx
    X86_AT(c, 0x1cc2u);
    c.r[3] = c.r[2];
    // 001cc4  shrd edx, ebx, 4
    X86_AT(c, 0x1cc4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001cc8  shrd edx, ebx, 4
    X86_AT(c, 0x1cc8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001ccc  shr edx, 0x18
    X86_AT(c, 0x1cccu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x18u, 4, w); if (w) c.r[2] = r; }
L_1ccf:
    X86_TICK(c, 2);
    // 001ccf  mov dh, dl
    X86_AT(c, 0x1ccfu);
    s8(c, 6, g8(c, 2));
L_1cd1:
    X86_TICK(c, 19);
    // 001cd1  mov ebx, edx
    X86_AT(c, 0x1cd1u);
    c.r[3] = c.r[2];
    // 001cd3  shl edx, 0x10
    X86_AT(c, 0x1cd3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 001cd6  mov dx, bx
    X86_AT(c, 0x1cd6u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 001cd9  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cd9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001ce1  ret 
    X86_AT(c, 0x1ce1u);
    c.eip = pop32(c); return;
L_1ce4:
    X86_TICK(c, 7);
    // 001ce4  cmp al, 1
    X86_AT(c, 0x1ce4u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001ce6  jne 0x1ccf
    X86_AT(c, 0x1ce6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1ccfu); goto L_1ccf; }
    X86_TICK(c, 11);
    // 001ce8  and edx, 0xff
    X86_AT(c, 0x1ce8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFFu, 4); }
    // 001cee  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1ceeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
    // 001cf5  jmp 0x1ccf
    X86_AT(c, 0x1cf5u);
    X86_POLL(c, 0x1ccfu); goto L_1ccf;
L_1cf8:
    X86_TICK(c, 7);
    // 001cf8  cmp al, 1
    X86_AT(c, 0x1cf8u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001cfa  jne 0x1cd1
    X86_AT(c, 0x1cfau);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1cd1u); goto L_1cd1; }
    X86_TICK(c, 11);
    // 001cfc  and edx, 0xffff
    X86_AT(c, 0x1cfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFFFFu, 4); }
    // 001d02  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1d02u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
    // 001d09  jmp 0x1cd1
    X86_AT(c, 0x1d09u);
    X86_POLL(c, 0x1cd1u); goto L_1cd1;
    x86_fault(c, 0x1c70u, "ran off the end of a function");
}
void f_00001c73(X86Cpu& c) {
    X86_TICK(c, 11);
    // 001c73  mov ebx, dword ptr gs:[ebp + 0x14]
    X86_AT(c, 0x1c73u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)));
    // 001c77  jmp dword ptr cs:[ebx*4 + 0x1c88]
    X86_AT(c, 0x1c77u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0x1C88u)));
      switch (t) {
      case 0x1c98u: goto L_1c98;
      case 0x1cb4u: goto L_1cb4;
      case 0x1ce4u: goto L_1ce4;
      case 0x1cf8u: goto L_1cf8;
      default: x86_jump(c, t); return; } }
L_1c98:
    X86_TICK(c, 7);
    // 001c98  cmp al, 1
    X86_AT(c, 0x1c98u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001c9a  jne 0x1ca6
    X86_AT(c, 0x1c9au);
    if (x86_cc(c, 5)) { goto L_1ca6; }
    X86_TICK(c, 4);
    // 001c9c  and edx, 1
    X86_AT(c, 0x1c9cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x1u, 4); }
    // 001c9f  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1c9fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
L_1ca6:
    X86_TICK(c, 18);
    // 001ca6  ror edx, 1
    X86_AT(c, 0x1ca6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 1, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 001ca8  sar edx, 0x1f
    X86_AT(c, 0x1ca8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1Fu, 4, w); if (w) c.r[2] = r; }
    // 001cab  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cabu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001cb3  ret 
    X86_AT(c, 0x1cb3u);
    c.eip = pop32(c); return;
L_1cb4:
    X86_TICK(c, 7);
    // 001cb4  cmp al, 1
    X86_AT(c, 0x1cb4u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001cb6  jne 0x1cc2
    X86_AT(c, 0x1cb6u);
    if (x86_cc(c, 5)) { goto L_1cc2; }
    X86_TICK(c, 4);
    // 001cb8  and edx, 0xf
    X86_AT(c, 0x1cb8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFu, 4); }
    // 001cbb  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1cbbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
L_1cc2:
    X86_TICK(c, 11);
    // 001cc2  mov ebx, edx
    X86_AT(c, 0x1cc2u);
    c.r[3] = c.r[2];
    // 001cc4  shrd edx, ebx, 4
    X86_AT(c, 0x1cc4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001cc8  shrd edx, ebx, 4
    X86_AT(c, 0x1cc8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001ccc  shr edx, 0x18
    X86_AT(c, 0x1cccu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x18u, 4, w); if (w) c.r[2] = r; }
L_1ccf:
    X86_TICK(c, 2);
    // 001ccf  mov dh, dl
    X86_AT(c, 0x1ccfu);
    s8(c, 6, g8(c, 2));
L_1cd1:
    X86_TICK(c, 19);
    // 001cd1  mov ebx, edx
    X86_AT(c, 0x1cd1u);
    c.r[3] = c.r[2];
    // 001cd3  shl edx, 0x10
    X86_AT(c, 0x1cd3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 001cd6  mov dx, bx
    X86_AT(c, 0x1cd6u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 001cd9  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cd9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001ce1  ret 
    X86_AT(c, 0x1ce1u);
    c.eip = pop32(c); return;
L_1ce4:
    X86_TICK(c, 7);
    // 001ce4  cmp al, 1
    X86_AT(c, 0x1ce4u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001ce6  jne 0x1ccf
    X86_AT(c, 0x1ce6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1ccfu); goto L_1ccf; }
    X86_TICK(c, 11);
    // 001ce8  and edx, 0xff
    X86_AT(c, 0x1ce8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFFu, 4); }
    // 001cee  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1ceeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
    // 001cf5  jmp 0x1ccf
    X86_AT(c, 0x1cf5u);
    X86_POLL(c, 0x1ccfu); goto L_1ccf;
L_1cf8:
    X86_TICK(c, 7);
    // 001cf8  cmp al, 1
    X86_AT(c, 0x1cf8u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001cfa  jne 0x1cd1
    X86_AT(c, 0x1cfau);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1cd1u); goto L_1cd1; }
    X86_TICK(c, 11);
    // 001cfc  and edx, 0xffff
    X86_AT(c, 0x1cfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFFFFu, 4); }
    // 001d02  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1d02u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
    // 001d09  jmp 0x1cd1
    X86_AT(c, 0x1d09u);
    X86_POLL(c, 0x1cd1u); goto L_1cd1;
    x86_fault(c, 0x1c73u, "ran off the end of a function");
}
void f_00001c77(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001c77  jmp dword ptr cs:[ebx*4 + 0x1c88]
    X86_AT(c, 0x1c77u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0x1C88u)));
      switch (t) {
      case 0x1c98u: goto L_1c98;
      case 0x1cb4u: goto L_1cb4;
      case 0x1ce4u: goto L_1ce4;
      case 0x1cf8u: goto L_1cf8;
      default: x86_jump(c, t); return; } }
L_1c98:
    X86_TICK(c, 7);
    // 001c98  cmp al, 1
    X86_AT(c, 0x1c98u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001c9a  jne 0x1ca6
    X86_AT(c, 0x1c9au);
    if (x86_cc(c, 5)) { goto L_1ca6; }
    X86_TICK(c, 4);
    // 001c9c  and edx, 1
    X86_AT(c, 0x1c9cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x1u, 4); }
    // 001c9f  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1c9fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
L_1ca6:
    X86_TICK(c, 18);
    // 001ca6  ror edx, 1
    X86_AT(c, 0x1ca6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 1, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 001ca8  sar edx, 0x1f
    X86_AT(c, 0x1ca8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1Fu, 4, w); if (w) c.r[2] = r; }
    // 001cab  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cabu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001cb3  ret 
    X86_AT(c, 0x1cb3u);
    c.eip = pop32(c); return;
L_1cb4:
    X86_TICK(c, 7);
    // 001cb4  cmp al, 1
    X86_AT(c, 0x1cb4u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001cb6  jne 0x1cc2
    X86_AT(c, 0x1cb6u);
    if (x86_cc(c, 5)) { goto L_1cc2; }
    X86_TICK(c, 4);
    // 001cb8  and edx, 0xf
    X86_AT(c, 0x1cb8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFu, 4); }
    // 001cbb  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1cbbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
L_1cc2:
    X86_TICK(c, 11);
    // 001cc2  mov ebx, edx
    X86_AT(c, 0x1cc2u);
    c.r[3] = c.r[2];
    // 001cc4  shrd edx, ebx, 4
    X86_AT(c, 0x1cc4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001cc8  shrd edx, ebx, 4
    X86_AT(c, 0x1cc8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001ccc  shr edx, 0x18
    X86_AT(c, 0x1cccu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x18u, 4, w); if (w) c.r[2] = r; }
L_1ccf:
    X86_TICK(c, 2);
    // 001ccf  mov dh, dl
    X86_AT(c, 0x1ccfu);
    s8(c, 6, g8(c, 2));
L_1cd1:
    X86_TICK(c, 19);
    // 001cd1  mov ebx, edx
    X86_AT(c, 0x1cd1u);
    c.r[3] = c.r[2];
    // 001cd3  shl edx, 0x10
    X86_AT(c, 0x1cd3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 001cd6  mov dx, bx
    X86_AT(c, 0x1cd6u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 001cd9  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cd9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001ce1  ret 
    X86_AT(c, 0x1ce1u);
    c.eip = pop32(c); return;
L_1ce4:
    X86_TICK(c, 7);
    // 001ce4  cmp al, 1
    X86_AT(c, 0x1ce4u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001ce6  jne 0x1ccf
    X86_AT(c, 0x1ce6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1ccfu); goto L_1ccf; }
    X86_TICK(c, 11);
    // 001ce8  and edx, 0xff
    X86_AT(c, 0x1ce8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFFu, 4); }
    // 001cee  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1ceeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
    // 001cf5  jmp 0x1ccf
    X86_AT(c, 0x1cf5u);
    X86_POLL(c, 0x1ccfu); goto L_1ccf;
L_1cf8:
    X86_TICK(c, 7);
    // 001cf8  cmp al, 1
    X86_AT(c, 0x1cf8u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001cfa  jne 0x1cd1
    X86_AT(c, 0x1cfau);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1cd1u); goto L_1cd1; }
    X86_TICK(c, 11);
    // 001cfc  and edx, 0xffff
    X86_AT(c, 0x1cfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFFFFu, 4); }
    // 001d02  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1d02u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
    // 001d09  jmp 0x1cd1
    X86_AT(c, 0x1d09u);
    X86_POLL(c, 0x1cd1u); goto L_1cd1;
    x86_fault(c, 0x1c77u, "ran off the end of a function");
}
void f_00001cb4(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001cb4  cmp al, 1
    X86_AT(c, 0x1cb4u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001cb6  jne 0x1cc2
    X86_AT(c, 0x1cb6u);
    if (x86_cc(c, 5)) { goto L_1cc2; }
    X86_TICK(c, 4);
    // 001cb8  and edx, 0xf
    X86_AT(c, 0x1cb8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFu, 4); }
    // 001cbb  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1cbbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
L_1cc2:
    X86_TICK(c, 32);
    // 001cc2  mov ebx, edx
    X86_AT(c, 0x1cc2u);
    c.r[3] = c.r[2];
    // 001cc4  shrd edx, ebx, 4
    X86_AT(c, 0x1cc4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001cc8  shrd edx, ebx, 4
    X86_AT(c, 0x1cc8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001ccc  shr edx, 0x18
    X86_AT(c, 0x1cccu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x18u, 4, w); if (w) c.r[2] = r; }
    // 001ccf  mov dh, dl
    X86_AT(c, 0x1ccfu);
    s8(c, 6, g8(c, 2));
    // 001cd1  mov ebx, edx
    X86_AT(c, 0x1cd1u);
    c.r[3] = c.r[2];
    // 001cd3  shl edx, 0x10
    X86_AT(c, 0x1cd3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 001cd6  mov dx, bx
    X86_AT(c, 0x1cd6u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 001cd9  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cd9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001ce1  ret 
    X86_AT(c, 0x1ce1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1cb4u, "ran off the end of a function");
}
void f_00001cb6(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001cb6  jne 0x1cc2
    X86_AT(c, 0x1cb6u);
    if (x86_cc(c, 5)) { goto L_1cc2; }
    X86_TICK(c, 4);
    // 001cb8  and edx, 0xf
    X86_AT(c, 0x1cb8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFu, 4); }
    // 001cbb  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1cbbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
L_1cc2:
    X86_TICK(c, 32);
    // 001cc2  mov ebx, edx
    X86_AT(c, 0x1cc2u);
    c.r[3] = c.r[2];
    // 001cc4  shrd edx, ebx, 4
    X86_AT(c, 0x1cc4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001cc8  shrd edx, ebx, 4
    X86_AT(c, 0x1cc8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001ccc  shr edx, 0x18
    X86_AT(c, 0x1cccu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x18u, 4, w); if (w) c.r[2] = r; }
    // 001ccf  mov dh, dl
    X86_AT(c, 0x1ccfu);
    s8(c, 6, g8(c, 2));
    // 001cd1  mov ebx, edx
    X86_AT(c, 0x1cd1u);
    c.r[3] = c.r[2];
    // 001cd3  shl edx, 0x10
    X86_AT(c, 0x1cd3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 001cd6  mov dx, bx
    X86_AT(c, 0x1cd6u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 001cd9  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cd9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001ce1  ret 
    X86_AT(c, 0x1ce1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1cb6u, "ran off the end of a function");
}
void f_00001cb8(X86Cpu& c) {
    X86_TICK(c, 36);
    // 001cb8  and edx, 0xf
    X86_AT(c, 0x1cb8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFu, 4); }
    // 001cbb  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1cbbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
    // 001cc2  mov ebx, edx
    X86_AT(c, 0x1cc2u);
    c.r[3] = c.r[2];
    // 001cc4  shrd edx, ebx, 4
    X86_AT(c, 0x1cc4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001cc8  shrd edx, ebx, 4
    X86_AT(c, 0x1cc8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001ccc  shr edx, 0x18
    X86_AT(c, 0x1cccu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x18u, 4, w); if (w) c.r[2] = r; }
    // 001ccf  mov dh, dl
    X86_AT(c, 0x1ccfu);
    s8(c, 6, g8(c, 2));
    // 001cd1  mov ebx, edx
    X86_AT(c, 0x1cd1u);
    c.r[3] = c.r[2];
    // 001cd3  shl edx, 0x10
    X86_AT(c, 0x1cd3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 001cd6  mov dx, bx
    X86_AT(c, 0x1cd6u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 001cd9  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cd9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001ce1  ret 
    X86_AT(c, 0x1ce1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1cb8u, "ran off the end of a function");
}
void f_00001cbb(X86Cpu& c) {
    X86_TICK(c, 34);
    // 001cbb  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1cbbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
    // 001cc2  mov ebx, edx
    X86_AT(c, 0x1cc2u);
    c.r[3] = c.r[2];
    // 001cc4  shrd edx, ebx, 4
    X86_AT(c, 0x1cc4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001cc8  shrd edx, ebx, 4
    X86_AT(c, 0x1cc8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001ccc  shr edx, 0x18
    X86_AT(c, 0x1cccu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x18u, 4, w); if (w) c.r[2] = r; }
    // 001ccf  mov dh, dl
    X86_AT(c, 0x1ccfu);
    s8(c, 6, g8(c, 2));
    // 001cd1  mov ebx, edx
    X86_AT(c, 0x1cd1u);
    c.r[3] = c.r[2];
    // 001cd3  shl edx, 0x10
    X86_AT(c, 0x1cd3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 001cd6  mov dx, bx
    X86_AT(c, 0x1cd6u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 001cd9  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cd9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001ce1  ret 
    X86_AT(c, 0x1ce1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1cbbu, "ran off the end of a function");
}
void f_00001cc2(X86Cpu& c) {
    X86_TICK(c, 32);
    // 001cc2  mov ebx, edx
    X86_AT(c, 0x1cc2u);
    c.r[3] = c.r[2];
    // 001cc4  shrd edx, ebx, 4
    X86_AT(c, 0x1cc4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001cc8  shrd edx, ebx, 4
    X86_AT(c, 0x1cc8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001ccc  shr edx, 0x18
    X86_AT(c, 0x1cccu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x18u, 4, w); if (w) c.r[2] = r; }
    // 001ccf  mov dh, dl
    X86_AT(c, 0x1ccfu);
    s8(c, 6, g8(c, 2));
    // 001cd1  mov ebx, edx
    X86_AT(c, 0x1cd1u);
    c.r[3] = c.r[2];
    // 001cd3  shl edx, 0x10
    X86_AT(c, 0x1cd3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 001cd6  mov dx, bx
    X86_AT(c, 0x1cd6u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 001cd9  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cd9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001ce1  ret 
    X86_AT(c, 0x1ce1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1cc2u, "ran off the end of a function");
}
void f_00001cc4(X86Cpu& c) {
    X86_TICK(c, 30);
    // 001cc4  shrd edx, ebx, 4
    X86_AT(c, 0x1cc4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001cc8  shrd edx, ebx, 4
    X86_AT(c, 0x1cc8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001ccc  shr edx, 0x18
    X86_AT(c, 0x1cccu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x18u, 4, w); if (w) c.r[2] = r; }
    // 001ccf  mov dh, dl
    X86_AT(c, 0x1ccfu);
    s8(c, 6, g8(c, 2));
    // 001cd1  mov ebx, edx
    X86_AT(c, 0x1cd1u);
    c.r[3] = c.r[2];
    // 001cd3  shl edx, 0x10
    X86_AT(c, 0x1cd3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 001cd6  mov dx, bx
    X86_AT(c, 0x1cd6u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 001cd9  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cd9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001ce1  ret 
    X86_AT(c, 0x1ce1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1cc4u, "ran off the end of a function");
}
void f_00001cc8(X86Cpu& c) {
    X86_TICK(c, 27);
    // 001cc8  shrd edx, ebx, 4
    X86_AT(c, 0x1cc8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001ccc  shr edx, 0x18
    X86_AT(c, 0x1cccu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x18u, 4, w); if (w) c.r[2] = r; }
    // 001ccf  mov dh, dl
    X86_AT(c, 0x1ccfu);
    s8(c, 6, g8(c, 2));
    // 001cd1  mov ebx, edx
    X86_AT(c, 0x1cd1u);
    c.r[3] = c.r[2];
    // 001cd3  shl edx, 0x10
    X86_AT(c, 0x1cd3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 001cd6  mov dx, bx
    X86_AT(c, 0x1cd6u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 001cd9  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cd9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001ce1  ret 
    X86_AT(c, 0x1ce1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1cc8u, "ran off the end of a function");
}
void f_00001ccc(X86Cpu& c) {
    X86_TICK(c, 24);
    // 001ccc  shr edx, 0x18
    X86_AT(c, 0x1cccu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x18u, 4, w); if (w) c.r[2] = r; }
    // 001ccf  mov dh, dl
    X86_AT(c, 0x1ccfu);
    s8(c, 6, g8(c, 2));
    // 001cd1  mov ebx, edx
    X86_AT(c, 0x1cd1u);
    c.r[3] = c.r[2];
    // 001cd3  shl edx, 0x10
    X86_AT(c, 0x1cd3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 001cd6  mov dx, bx
    X86_AT(c, 0x1cd6u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 001cd9  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cd9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001ce1  ret 
    X86_AT(c, 0x1ce1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1cccu, "ran off the end of a function");
}
void f_00001ccf(X86Cpu& c) {
    X86_TICK(c, 21);
    // 001ccf  mov dh, dl
    X86_AT(c, 0x1ccfu);
    s8(c, 6, g8(c, 2));
    // 001cd1  mov ebx, edx
    X86_AT(c, 0x1cd1u);
    c.r[3] = c.r[2];
    // 001cd3  shl edx, 0x10
    X86_AT(c, 0x1cd3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 001cd6  mov dx, bx
    X86_AT(c, 0x1cd6u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 001cd9  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cd9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001ce1  ret 
    X86_AT(c, 0x1ce1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1ccfu, "ran off the end of a function");
}
void f_00001cd1(X86Cpu& c) {
    X86_TICK(c, 19);
    // 001cd1  mov ebx, edx
    X86_AT(c, 0x1cd1u);
    c.r[3] = c.r[2];
    // 001cd3  shl edx, 0x10
    X86_AT(c, 0x1cd3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 001cd6  mov dx, bx
    X86_AT(c, 0x1cd6u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 001cd9  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cd9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001ce1  ret 
    X86_AT(c, 0x1ce1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1cd1u, "ran off the end of a function");
}
void f_00001cd3(X86Cpu& c) {
    X86_TICK(c, 17);
    // 001cd3  shl edx, 0x10
    X86_AT(c, 0x1cd3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 001cd6  mov dx, bx
    X86_AT(c, 0x1cd6u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 001cd9  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cd9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001ce1  ret 
    X86_AT(c, 0x1ce1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1cd3u, "ran off the end of a function");
}
void f_00001cd6(X86Cpu& c) {
    X86_TICK(c, 14);
    // 001cd6  mov dx, bx
    X86_AT(c, 0x1cd6u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 001cd9  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cd9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001ce1  ret 
    X86_AT(c, 0x1ce1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1cd6u, "ran off the end of a function");
}
void f_00001cd9(X86Cpu& c) {
    X86_TICK(c, 12);
    // 001cd9  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cd9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001ce1  ret 
    X86_AT(c, 0x1ce1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1cd9u, "ran off the end of a function");
}
void f_00001ce1(X86Cpu& c) {
    X86_TICK(c, 10);
    // 001ce1  ret 
    X86_AT(c, 0x1ce1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1ce1u, "ran off the end of a function");
}
void f_00001d0c(X86Cpu& c) {
    goto L_1d0c;
L_1c98:
    X86_TICK(c, 7);
    // 001c98  cmp al, 1
    X86_AT(c, 0x1c98u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001c9a  jne 0x1ca6
    X86_AT(c, 0x1c9au);
    if (x86_cc(c, 5)) { goto L_1ca6; }
    X86_TICK(c, 4);
    // 001c9c  and edx, 1
    X86_AT(c, 0x1c9cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x1u, 4); }
    // 001c9f  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1c9fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
L_1ca6:
    X86_TICK(c, 18);
    // 001ca6  ror edx, 1
    X86_AT(c, 0x1ca6u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 1, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 001ca8  sar edx, 0x1f
    X86_AT(c, 0x1ca8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1Fu, 4, w); if (w) c.r[2] = r; }
    // 001cab  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cabu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001cb3  ret 
    X86_AT(c, 0x1cb3u);
    c.eip = pop32(c); return;
L_1cb4:
    X86_TICK(c, 7);
    // 001cb4  cmp al, 1
    X86_AT(c, 0x1cb4u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001cb6  jne 0x1cc2
    X86_AT(c, 0x1cb6u);
    if (x86_cc(c, 5)) { goto L_1cc2; }
    X86_TICK(c, 4);
    // 001cb8  and edx, 0xf
    X86_AT(c, 0x1cb8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFu, 4); }
    // 001cbb  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1cbbu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
L_1cc2:
    X86_TICK(c, 11);
    // 001cc2  mov ebx, edx
    X86_AT(c, 0x1cc2u);
    c.r[3] = c.r[2];
    // 001cc4  shrd edx, ebx, 4
    X86_AT(c, 0x1cc4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001cc8  shrd edx, ebx, 4
    X86_AT(c, 0x1cc8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[3], 0x4u, 4, w); if (w) c.r[2] = r; }
    // 001ccc  shr edx, 0x18
    X86_AT(c, 0x1cccu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x18u, 4, w); if (w) c.r[2] = r; }
L_1ccf:
    X86_TICK(c, 2);
    // 001ccf  mov dh, dl
    X86_AT(c, 0x1ccfu);
    s8(c, 6, g8(c, 2));
L_1cd1:
    X86_TICK(c, 19);
    // 001cd1  mov ebx, edx
    X86_AT(c, 0x1cd1u);
    c.r[3] = c.r[2];
    // 001cd3  shl edx, 0x10
    X86_AT(c, 0x1cd3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 001cd6  mov dx, bx
    X86_AT(c, 0x1cd6u);
    s16(c, 2, (c.r[3] & 0xFFFFu));
    // 001cd9  mov dword ptr gs:[ebp + eax*4 + 0x110], edx
    X86_AT(c, 0x1cd9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0x110u)), c.r[2]);
    // 001ce1  ret 
    X86_AT(c, 0x1ce1u);
    c.eip = pop32(c); return;
L_1ce4:
    X86_TICK(c, 7);
    // 001ce4  cmp al, 1
    X86_AT(c, 0x1ce4u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001ce6  jne 0x1ccf
    X86_AT(c, 0x1ce6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1ccfu); goto L_1ccf; }
    X86_TICK(c, 11);
    // 001ce8  and edx, 0xff
    X86_AT(c, 0x1ce8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFFu, 4); }
    // 001cee  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1ceeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
    // 001cf5  jmp 0x1ccf
    X86_AT(c, 0x1cf5u);
    X86_POLL(c, 0x1ccfu); goto L_1ccf;
L_1cf8:
    X86_TICK(c, 7);
    // 001cf8  cmp al, 1
    X86_AT(c, 0x1cf8u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001cfa  jne 0x1cd1
    X86_AT(c, 0x1cfau);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1cd1u); goto L_1cd1; }
    X86_TICK(c, 11);
    // 001cfc  and edx, 0xffff
    X86_AT(c, 0x1cfcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0xFFFFu, 4); }
    // 001d02  mov dword ptr gs:[ebp + 0x120], edx
    X86_AT(c, 0x1d02u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x120u)), c.r[2]);
    // 001d09  jmp 0x1cd1
    X86_AT(c, 0x1d09u);
    X86_POLL(c, 0x1cd1u); goto L_1cd1;
L_1d0c:
    X86_TICK(c, 7);
    // 001d0c  cmp al, 3
    X86_AT(c, 0x1d0cu);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 001d0e  ja 0x1da2
    X86_AT(c, 0x1d0eu);
    if (x86_cc(c, 7)) { goto L_1da2; }
    X86_TICK(c, 16);
    // 001d14  movzx eax, al
    X86_AT(c, 0x1d14u);
    c.r[0] = g8(c, 0);
    // 001d17  mov ebx, edx
    X86_AT(c, 0x1d17u);
    c.r[3] = c.r[2];
    // 001d19  mov edx, dword ptr gs:[ebp + 0x14]
    X86_AT(c, 0x1d19u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)));
    // 001d1d  jmp dword ptr cs:[edx*4 + 0x1d28]
    X86_AT(c, 0x1d1du);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0x1D28u)));
      switch (t) {
      case 0x1d38u: goto L_1d38;
      case 0x1d48u: goto L_1d48;
      case 0x1d68u: goto L_1d68;
      case 0x1d84u: goto L_1d84;
      default: x86_jump(c, t); return; } }
L_1d38:
    X86_TICK(c, 13);
    // 001d38  test ebx, 0x80808080
    X86_AT(c, 0x1d38u);
    (void)x86_logic(c, c.r[3] & 0x80808080u, 4);
    // 001d3e  setne dl
    X86_AT(c, 0x1d3eu);
    s8(c, 2, x86_cc(c, 5) ? 1u : 0u);
    // 001d41  jmp 0x1c98
    X86_AT(c, 0x1d41u);
    X86_POLL(c, 0x1c98u); goto L_1c98;
L_1d48:
    X86_TICK(c, 28);
    // 001d48  shld edx, ebx, 1
    X86_AT(c, 0x1d48u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x1u, 4, w); if (w) c.r[2] = r; }
    // 001d4c  shl ebx, 8
    X86_AT(c, 0x1d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[3] = r; }
    // 001d4f  shld edx, ebx, 1
    X86_AT(c, 0x1d4fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x1u, 4, w); if (w) c.r[2] = r; }
    // 001d53  shl ebx, 8
    X86_AT(c, 0x1d53u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[3] = r; }
    // 001d56  shld edx, ebx, 1
    X86_AT(c, 0x1d56u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x1u, 4, w); if (w) c.r[2] = r; }
    // 001d5a  shl ebx, 8
    X86_AT(c, 0x1d5au);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[3] = r; }
    // 001d5d  shld edx, ebx, 1
    X86_AT(c, 0x1d5du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x1u, 4, w); if (w) c.r[2] = r; }
    // 001d61  jmp 0x1cb4
    X86_AT(c, 0x1d61u);
    X86_POLL(c, 0x1cb4u); goto L_1cb4;
L_1d68:
    X86_TICK(c, 25);
    // 001d68  shl ebx, 8
    X86_AT(c, 0x1d68u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[3] = r; }
    // 001d6b  shld edx, ebx, 3
    X86_AT(c, 0x1d6bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x3u, 4, w); if (w) c.r[2] = r; }
    // 001d6f  shl ebx, 8
    X86_AT(c, 0x1d6fu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[3] = r; }
    // 001d72  shld edx, ebx, 3
    X86_AT(c, 0x1d72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x3u, 4, w); if (w) c.r[2] = r; }
    // 001d76  shl ebx, 8
    X86_AT(c, 0x1d76u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[3] = r; }
    // 001d79  shld edx, ebx, 2
    X86_AT(c, 0x1d79u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x2u, 4, w); if (w) c.r[2] = r; }
    // 001d7d  jmp 0x1ce4
    X86_AT(c, 0x1d7du);
    X86_POLL(c, 0x1ce4u); goto L_1ce4;
L_1d84:
    X86_TICK(c, 28);
    // 001d84  shld edx, ebx, 1
    X86_AT(c, 0x1d84u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x1u, 4, w); if (w) c.r[2] = r; }
    // 001d88  shl ebx, 8
    X86_AT(c, 0x1d88u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[3] = r; }
    // 001d8b  shld edx, ebx, 5
    X86_AT(c, 0x1d8bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x5u, 4, w); if (w) c.r[2] = r; }
    // 001d8f  shl ebx, 8
    X86_AT(c, 0x1d8fu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[3] = r; }
    // 001d92  shld edx, ebx, 5
    X86_AT(c, 0x1d92u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x5u, 4, w); if (w) c.r[2] = r; }
    // 001d96  shl ebx, 8
    X86_AT(c, 0x1d96u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[3] = r; }
    // 001d99  shld edx, ebx, 5
    X86_AT(c, 0x1d99u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x5u, 4, w); if (w) c.r[2] = r; }
    // 001d9d  jmp 0x1cf8
    X86_AT(c, 0x1d9du);
    X86_POLL(c, 0x1cf8u); goto L_1cf8;
L_1da2:
    X86_TICK(c, 12);
    // 001da2  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x1da2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 001da7  ret 
    X86_AT(c, 0x1da7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1d0cu, "ran off the end of a function");
}
void f_00001da8(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001da8  cmp dx, 0x100
    X86_AT(c, 0x1da8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x100u, 0, 2);
    // 001dad  ja 0x1dc7
    X86_AT(c, 0x1dadu);
    if (x86_cc(c, 7)) { goto L_1dc7; }
    X86_TICK(c, 18);
    // 001daf  mov word ptr gs:[ebp + 0x1bc], dx
    X86_AT(c, 0x1dafu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1BCu)), (c.r[2] & 0xFFFFu));
    // 001db7  mov ax, 0x100
    X86_AT(c, 0x1db7u);
    s16(c, 0, 0x100u);
    // 001dbb  sub ax, dx
    X86_AT(c, 0x1dbbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 001dbe  mov word ptr gs:[ebp + 0x1be], ax
    X86_AT(c, 0x1dbeu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1BEu)), (c.r[0] & 0xFFFFu));
    // 001dc6  ret 
    X86_AT(c, 0x1dc6u);
    c.eip = pop32(c); return;
L_1dc7:
    X86_TICK(c, 12);
    // 001dc7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x1dc7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 001dcc  ret 
    X86_AT(c, 0x1dccu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1da8u, "ran off the end of a function");
}
void f_00001dd0(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001dd0  cmp al, 0xf
    X86_AT(c, 0x1dd0u);
    (void)x86_sub(c, g8(c, 0), 0xFu, 0, 1);
    // 001dd2  ja 0x1ddf
    X86_AT(c, 0x1dd2u);
    if (x86_cc(c, 7)) { goto L_1ddf; }
    X86_TICK(c, 15);
    // 001dd4  movzx eax, al
    X86_AT(c, 0x1dd4u);
    c.r[0] = g8(c, 0);
    // 001dd7  mov dword ptr gs:[ebp + 0x104], eax
    X86_AT(c, 0x1dd7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), c.r[0]);
    // 001dde  ret 
    X86_AT(c, 0x1ddeu);
    c.eip = pop32(c); return;
L_1ddf:
    X86_TICK(c, 12);
    // 001ddf  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x1ddfu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 001de4  ret 
    X86_AT(c, 0x1de4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1dd0u, "ran off the end of a function");
}
void f_00001dd2(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001dd2  ja 0x1ddf
    X86_AT(c, 0x1dd2u);
    if (x86_cc(c, 7)) { goto L_1ddf; }
    X86_TICK(c, 15);
    // 001dd4  movzx eax, al
    X86_AT(c, 0x1dd4u);
    c.r[0] = g8(c, 0);
    // 001dd7  mov dword ptr gs:[ebp + 0x104], eax
    X86_AT(c, 0x1dd7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), c.r[0]);
    // 001dde  ret 
    X86_AT(c, 0x1ddeu);
    c.eip = pop32(c); return;
L_1ddf:
    X86_TICK(c, 12);
    // 001ddf  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x1ddfu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 001de4  ret 
    X86_AT(c, 0x1de4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1dd2u, "ran off the end of a function");
}
void f_00001dd4(X86Cpu& c) {
    X86_TICK(c, 15);
    // 001dd4  movzx eax, al
    X86_AT(c, 0x1dd4u);
    c.r[0] = g8(c, 0);
    // 001dd7  mov dword ptr gs:[ebp + 0x104], eax
    X86_AT(c, 0x1dd7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), c.r[0]);
    // 001dde  ret 
    X86_AT(c, 0x1ddeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1dd4u, "ran off the end of a function");
}
void f_00001dd7(X86Cpu& c) {
    X86_TICK(c, 12);
    // 001dd7  mov dword ptr gs:[ebp + 0x104], eax
    X86_AT(c, 0x1dd7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), c.r[0]);
    // 001dde  ret 
    X86_AT(c, 0x1ddeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1dd7u, "ran off the end of a function");
}
void f_00001dde(X86Cpu& c) {
    X86_TICK(c, 10);
    // 001dde  ret 
    X86_AT(c, 0x1ddeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1ddeu, "ran off the end of a function");
}
void f_00001de8(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001de8  cmp al, 1
    X86_AT(c, 0x1de8u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 001dea  ja 0x1dfb
    X86_AT(c, 0x1deau);
    if (x86_cc(c, 7)) { goto L_1dfb; }
    X86_TICK(c, 14);
    // 001dec  mov dword ptr gs:[ebp + 0x1dc], edx
    X86_AT(c, 0x1decu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), c.r[2]);
    // 001df3  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1df3u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001dfa  ret 
    X86_AT(c, 0x1dfau);
    c.eip = pop32(c); return;
L_1dfb:
    X86_TICK(c, 12);
    // 001dfb  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x1dfbu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 001e00  ret 
    X86_AT(c, 0x1e00u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1de8u, "ran off the end of a function");
}
void f_00001dea(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001dea  ja 0x1dfb
    X86_AT(c, 0x1deau);
    if (x86_cc(c, 7)) { goto L_1dfb; }
    X86_TICK(c, 14);
    // 001dec  mov dword ptr gs:[ebp + 0x1dc], edx
    X86_AT(c, 0x1decu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), c.r[2]);
    // 001df3  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1df3u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001dfa  ret 
    X86_AT(c, 0x1dfau);
    c.eip = pop32(c); return;
L_1dfb:
    X86_TICK(c, 12);
    // 001dfb  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x1dfbu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 001e00  ret 
    X86_AT(c, 0x1e00u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1deau, "ran off the end of a function");
}
void f_00001dec(X86Cpu& c) {
    X86_TICK(c, 14);
    // 001dec  mov dword ptr gs:[ebp + 0x1dc], edx
    X86_AT(c, 0x1decu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), c.r[2]);
    // 001df3  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1df3u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001dfa  ret 
    X86_AT(c, 0x1dfau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1decu, "ran off the end of a function");
}
void f_00001df3(X86Cpu& c) {
    X86_TICK(c, 12);
    // 001df3  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1df3u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001dfa  ret 
    X86_AT(c, 0x1dfau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1df3u, "ran off the end of a function");
}
void f_00001dfa(X86Cpu& c) {
    X86_TICK(c, 10);
    // 001dfa  ret 
    X86_AT(c, 0x1dfau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1dfau, "ran off the end of a function");
}
void f_00001e04(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001e04  test dx, 0x20
    X86_AT(c, 0x1e04u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & 0x20u, 2);
    // 001e09  je 0x1e10
    X86_AT(c, 0x1e09u);
    if (x86_cc(c, 4)) { goto L_1e10; }
    X86_TICK(c, 2);
    // 001e0b  and dx, 0xffbf
    X86_AT(c, 0x1e0bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & 0xFFBFu, 2)); }
L_1e10:
    X86_TICK(c, 7);
    // 001e10  test dx, 2
    X86_AT(c, 0x1e10u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & 0x2u, 2);
    // 001e15  je 0x1e1c
    X86_AT(c, 0x1e15u);
    if (x86_cc(c, 4)) { goto L_1e1c; }
    X86_TICK(c, 2);
    // 001e17  and dx, 0xfffb
    X86_AT(c, 0x1e17u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & 0xFFFBu, 2)); }
L_1e1c:
    X86_TICK(c, 12);
    // 001e1c  mov word ptr gs:[ebp + 0x108], dx
    X86_AT(c, 0x1e1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u)), (c.r[2] & 0xFFFFu));
    // 001e24  ret 
    X86_AT(c, 0x1e24u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1e04u, "ran off the end of a function");
}
void f_00001e09(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001e09  je 0x1e10
    X86_AT(c, 0x1e09u);
    if (x86_cc(c, 4)) { goto L_1e10; }
    X86_TICK(c, 2);
    // 001e0b  and dx, 0xffbf
    X86_AT(c, 0x1e0bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & 0xFFBFu, 2)); }
L_1e10:
    X86_TICK(c, 7);
    // 001e10  test dx, 2
    X86_AT(c, 0x1e10u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & 0x2u, 2);
    // 001e15  je 0x1e1c
    X86_AT(c, 0x1e15u);
    if (x86_cc(c, 4)) { goto L_1e1c; }
    X86_TICK(c, 2);
    // 001e17  and dx, 0xfffb
    X86_AT(c, 0x1e17u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & 0xFFFBu, 2)); }
L_1e1c:
    X86_TICK(c, 12);
    // 001e1c  mov word ptr gs:[ebp + 0x108], dx
    X86_AT(c, 0x1e1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u)), (c.r[2] & 0xFFFFu));
    // 001e24  ret 
    X86_AT(c, 0x1e24u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1e09u, "ran off the end of a function");
}
void f_00001e0b(X86Cpu& c) {
    X86_TICK(c, 9);
    // 001e0b  and dx, 0xffbf
    X86_AT(c, 0x1e0bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & 0xFFBFu, 2)); }
    // 001e10  test dx, 2
    X86_AT(c, 0x1e10u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & 0x2u, 2);
    // 001e15  je 0x1e1c
    X86_AT(c, 0x1e15u);
    if (x86_cc(c, 4)) { goto L_1e1c; }
    X86_TICK(c, 2);
    // 001e17  and dx, 0xfffb
    X86_AT(c, 0x1e17u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & 0xFFFBu, 2)); }
L_1e1c:
    X86_TICK(c, 12);
    // 001e1c  mov word ptr gs:[ebp + 0x108], dx
    X86_AT(c, 0x1e1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u)), (c.r[2] & 0xFFFFu));
    // 001e24  ret 
    X86_AT(c, 0x1e24u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1e0bu, "ran off the end of a function");
}
void f_00001e10(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001e10  test dx, 2
    X86_AT(c, 0x1e10u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & 0x2u, 2);
    // 001e15  je 0x1e1c
    X86_AT(c, 0x1e15u);
    if (x86_cc(c, 4)) { goto L_1e1c; }
    X86_TICK(c, 2);
    // 001e17  and dx, 0xfffb
    X86_AT(c, 0x1e17u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & 0xFFFBu, 2)); }
L_1e1c:
    X86_TICK(c, 12);
    // 001e1c  mov word ptr gs:[ebp + 0x108], dx
    X86_AT(c, 0x1e1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u)), (c.r[2] & 0xFFFFu));
    // 001e24  ret 
    X86_AT(c, 0x1e24u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1e10u, "ran off the end of a function");
}
void f_00001e15(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001e15  je 0x1e1c
    X86_AT(c, 0x1e15u);
    if (x86_cc(c, 4)) { goto L_1e1c; }
    X86_TICK(c, 2);
    // 001e17  and dx, 0xfffb
    X86_AT(c, 0x1e17u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & 0xFFFBu, 2)); }
L_1e1c:
    X86_TICK(c, 12);
    // 001e1c  mov word ptr gs:[ebp + 0x108], dx
    X86_AT(c, 0x1e1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u)), (c.r[2] & 0xFFFFu));
    // 001e24  ret 
    X86_AT(c, 0x1e24u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1e15u, "ran off the end of a function");
}
void f_00001e17(X86Cpu& c) {
    X86_TICK(c, 14);
    // 001e17  and dx, 0xfffb
    X86_AT(c, 0x1e17u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & 0xFFFBu, 2)); }
    // 001e1c  mov word ptr gs:[ebp + 0x108], dx
    X86_AT(c, 0x1e1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u)), (c.r[2] & 0xFFFFu));
    // 001e24  ret 
    X86_AT(c, 0x1e24u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1e17u, "ran off the end of a function");
}
void f_00001e1c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 001e1c  mov word ptr gs:[ebp + 0x108], dx
    X86_AT(c, 0x1e1cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u)), (c.r[2] & 0xFFFFu));
    // 001e24  ret 
    X86_AT(c, 0x1e24u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1e1cu, "ran off the end of a function");
}
void f_00001e24(X86Cpu& c) {
    X86_TICK(c, 10);
    // 001e24  ret 
    X86_AT(c, 0x1e24u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1e24u, "ran off the end of a function");
}
void f_00001e28(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001e28  cmp al, 2
    X86_AT(c, 0x1e28u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 001e2a  ja 0x1e5e
    X86_AT(c, 0x1e2au);
    if (x86_cc(c, 7)) { goto L_1e5e; }
    X86_TICK(c, 9);
    // 001e2c  dec bh
    X86_AT(c, 0x1e2cu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 001e2e  cmp bh, 3
    X86_AT(c, 0x1e2eu);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 001e31  ja 0x1e5e
    X86_AT(c, 0x1e31u);
    if (x86_cc(c, 7)) { goto L_1e5e; }
    X86_TICK(c, 9);
    // 001e33  dec bl
    X86_AT(c, 0x1e33u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 001e35  cmp bl, 0x1f
    X86_AT(c, 0x1e35u);
    (void)x86_sub(c, g8(c, 3), 0x1Fu, 0, 1);
    // 001e38  ja 0x1e5e
    X86_AT(c, 0x1e38u);
    if (x86_cc(c, 7)) { goto L_1e5e; }
    X86_TICK(c, 24);
    // 001e3a  add bx, 0x101
    X86_AT(c, 0x1e3au);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x101u, 0, 2)); }
    // 001e3f  movzx eax, al
    X86_AT(c, 0x1e3fu);
    c.r[0] = g8(c, 0);
    // 001e42  mov dword ptr gs:[ebp + eax*8 + 0x12c], esi
    X86_AT(c, 0x1e42u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 8 + 0x12Cu)), c.r[6]);
    // 001e4a  mov word ptr gs:[ebp + eax*8 + 0x130], ds
    X86_AT(c, 0x1e4au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 8 + 0x130u)), (uint32_t)c.sreg[3]);
    // 001e52  xchg bl, bh
    X86_AT(c, 0x1e52u);
    { uint32_t t = g8(c, 3); s8(c, 3, g8(c, 7)); s8(c, 7, t); }
    // 001e54  mov word ptr gs:[ebp + eax*8 + 0x132], bx
    X86_AT(c, 0x1e54u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 8 + 0x132u)), (c.r[3] & 0xFFFFu));
    // 001e5d  ret 
    X86_AT(c, 0x1e5du);
    c.eip = pop32(c); return;
L_1e5e:
    X86_TICK(c, 12);
    // 001e5e  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x1e5eu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 001e63  ret 
    X86_AT(c, 0x1e63u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1e28u, "ran off the end of a function");
}
void f_00001e64(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001e64  cmp al, 2
    X86_AT(c, 0x1e64u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 001e66  ja 0x1e9a
    X86_AT(c, 0x1e66u);
    if (x86_cc(c, 7)) { goto L_1e9a; }
    X86_TICK(c, 9);
    // 001e68  dec bh
    X86_AT(c, 0x1e68u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_dec(c, v, 1)); }
    // 001e6a  cmp bh, 3
    X86_AT(c, 0x1e6au);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 001e6d  ja 0x1e9a
    X86_AT(c, 0x1e6du);
    if (x86_cc(c, 7)) { goto L_1e9a; }
    X86_TICK(c, 9);
    // 001e6f  dec bl
    X86_AT(c, 0x1e6fu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_dec(c, v, 1)); }
    // 001e71  cmp bl, 0x1f
    X86_AT(c, 0x1e71u);
    (void)x86_sub(c, g8(c, 3), 0x1Fu, 0, 1);
    // 001e74  ja 0x1e9a
    X86_AT(c, 0x1e74u);
    if (x86_cc(c, 7)) { goto L_1e9a; }
    X86_TICK(c, 24);
    // 001e76  add bx, 0x101
    X86_AT(c, 0x1e76u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x101u, 0, 2)); }
    // 001e7b  movzx eax, al
    X86_AT(c, 0x1e7bu);
    c.r[0] = g8(c, 0);
    // 001e7e  mov dword ptr gs:[ebp + eax*8 + 0x150], esi
    X86_AT(c, 0x1e7eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 8 + 0x150u)), c.r[6]);
    // 001e86  mov word ptr gs:[ebp + eax*8 + 0x154], ds
    X86_AT(c, 0x1e86u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 8 + 0x154u)), (uint32_t)c.sreg[3]);
    // 001e8e  xchg bl, bh
    X86_AT(c, 0x1e8eu);
    { uint32_t t = g8(c, 3); s8(c, 3, g8(c, 7)); s8(c, 7, t); }
    // 001e90  mov word ptr gs:[ebp + eax*8 + 0x156], bx
    X86_AT(c, 0x1e90u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] * 8 + 0x156u)), (c.r[3] & 0xFFFFu));
    // 001e99  ret 
    X86_AT(c, 0x1e99u);
    c.eip = pop32(c); return;
L_1e9a:
    X86_TICK(c, 12);
    // 001e9a  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x1e9au);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 001e9f  ret 
    X86_AT(c, 0x1e9fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1e64u, "ran off the end of a function");
}
void f_00001ea0(X86Cpu& c) {
    X86_TICK(c, 14);
    // 001ea0  mov dword ptr gs:[ebp + 0x2f8], esi
    X86_AT(c, 0x1ea0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x2F8u)), c.r[6]);
    // 001ea7  mov word ptr gs:[ebp + 0x2fc], ds
    X86_AT(c, 0x1ea7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2FCu)), (uint32_t)c.sreg[3]);
    // 001eae  ret 
    X86_AT(c, 0x1eaeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1ea0u, "ran off the end of a function");
}
void f_00001eb0(X86Cpu& c) {
    X86_TICK(c, 22);
    // 001eb0  movzx ebx, al
    X86_AT(c, 0x1eb0u);
    c.r[3] = g8(c, 0);
    // 001eb3  shr ebx, 7
    X86_AT(c, 0x1eb3u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[3] = r; }
    // 001eb6  mov dword ptr gs:[ebp + 0x300], ebx
    X86_AT(c, 0x1eb6u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[3]);
    // 001ebd  test al, 1
    X86_AT(c, 0x1ebdu);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 001ebf  setne byte ptr gs:[ebp + 0x2fe]
    X86_AT(c, 0x1ebfu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x2FEu)), x86_cc(c, 5) ? 1u : 0u);
    // 001ec7  test al, 2
    X86_AT(c, 0x1ec7u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 001ec9  je 0x1ee4
    X86_AT(c, 0x1ec9u);
    if (x86_cc(c, 4)) { goto L_1ee4; }
    X86_TICK(c, 48);
    // 001ecb  les edi, fword ptr gs:[ebp + 0x2f8]
    X86_AT(c, 0x1ecbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x2F8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 001ed2  movzx ecx, word ptr gs:[ebp + 0x1a]
    X86_AT(c, 0x1ed2u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Au)));
    // 001ed7  inc ecx
    X86_AT(c, 0x1ed7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 001ed8  imul ecx, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x1ed8u);
    c.r[1] = x86_imul2(c, c.r[1], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 001edd  shr ecx, 2
    X86_AT(c, 0x1eddu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 001ee0  sub eax, eax
    X86_AT(c, 0x1ee0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 001ee2  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x1ee2u);
    x86_string(c, 2, 4, 243, 4, 3);
L_1ee4:
    X86_TICK(c, 10);
    // 001ee4  ret 
    X86_AT(c, 0x1ee4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1eb0u, "ran off the end of a function");
}
void f_00001ee8(X86Cpu& c) {
    X86_TICK(c, 14);
    // 001ee8  and al, 0x81
    X86_AT(c, 0x1ee8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x81u, 1)); }
    // 001eea  mov byte ptr gs:[ebp + 0x22a], al
    X86_AT(c, 0x1eeau);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au)), g8(c, 0));
    // 001ef1  ret 
    X86_AT(c, 0x1ef1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1ee8u, "ran off the end of a function");
}
void f_00001ef4(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001ef4  cmp al, 0x20
    X86_AT(c, 0x1ef4u);
    (void)x86_sub(c, g8(c, 0), 0x20u, 0, 1);
    // 001ef6  ja 0x1f04
    X86_AT(c, 0x1ef6u);
    if (x86_cc(c, 7)) { goto L_1f04; }
    X86_TICK(c, 9);
    // 001ef8  mov byte ptr gs:[ebp + 0x228], al
    X86_AT(c, 0x1ef8u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), g8(c, 0));
    // 001eff  jmp 0xb9a0
    X86_AT(c, 0x1effu);
    goto L_b9a0;
L_1f04:
    X86_TICK(c, 12);
    // 001f04  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x1f04u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 001f09  ret 
    X86_AT(c, 0x1f09u);
    c.eip = pop32(c); return;
L_b9a0:
    X86_TICK(c, 29);
    // 00b9a0  mov eax, gs
    X86_AT(c, 0xb9a0u);
    c.r[0] = (uint32_t)c.sreg[5];
    // 00b9a2  mov es, eax
    X86_AT(c, 0xb9a2u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 00b9a4  lea edi, [ebp + 0x234]
    X86_AT(c, 0xb9a4u);
    c.r[7] = (uint32_t)(c.r[5] + 0x234u);
    // 00b9aa  mov ecx, 0x20
    X86_AT(c, 0xb9aau);
    c.r[1] = 0x20u;
    // 00b9af  sub eax, eax
    X86_AT(c, 0xb9afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00b9b1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xb9b1u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00b9b3  test byte ptr gs:[ebp + 0x22a], 1
    X86_AT(c, 0xb9b3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au))) & 0x1u, 1);
    // 00b9bb  jne 0xbaa0
    X86_AT(c, 0xb9bbu);
    if (x86_cc(c, 5)) { goto L_baa0; }
    X86_TICK(c, 18);
    // 00b9c1  mov cl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xb9c1u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00b9c8  mov al, cl
    X86_AT(c, 0xb9c8u);
    s8(c, 0, g8(c, 1));
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
L_baa0:
    X86_TICK(c, 29);
    // 00baa0  sub eax, eax
    X86_AT(c, 0xbaa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00baa2  mov al, 0x20
    X86_AT(c, 0xbaa2u);
    s8(c, 0, 0x20u);
    // 00baa4  mov bl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbaa4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00baab  sub al, bl
    X86_AT(c, 0xbaabu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 00baad  shr al, 1
    X86_AT(c, 0xbaadu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00baaf  lea edi, [ebp + eax*4 + 0x234]
    X86_AT(c, 0xbaafu);
    c.r[7] = (uint32_t)(c.r[5] + c.r[0] * 4 + 0x234u);
    // 00bab6  mov al, bl
    X86_AT(c, 0xbab6u);
    s8(c, 0, g8(c, 3));
    // 00bab8  inc eax
    X86_AT(c, 0xbab8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00bab9  shr eax, 1
    X86_AT(c, 0xbab9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00babb  test bl, 1
    X86_AT(c, 0xbabbu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 00babe  je 0xbacc
    X86_AT(c, 0xbabeu);
    if (x86_cc(c, 4)) { goto L_bacc; }
    X86_TICK(c, 11);
    // 00bac0  mov eax, dword ptr cs:[eax*4 + 0xbd2c]
    X86_AT(c, 0xbac0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD2Cu)));
    // 00bac8  jmp 0xbad4
    X86_AT(c, 0xbac8u);
    goto L_bad4;
L_bacc:
    X86_TICK(c, 4);
    // 00bacc  mov eax, dword ptr cs:[eax*4 + 0xbd70]
    X86_AT(c, 0xbaccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD70u)));
L_bad4:
    X86_TICK(c, 23);
    // 00bad4  movzx ecx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbad4u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)));
    // 00badc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xbadcu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00bade  ret 
    X86_AT(c, 0xbadeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1ef4u, "ran off the end of a function");
}
void f_00001f0c(X86Cpu& c) {
    X86_TICK(c, 14);
    // 001f0c  mov dword ptr gs:[ebp + 0x22c], esi
    X86_AT(c, 0x1f0cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Cu)), c.r[6]);
    // 001f13  mov word ptr gs:[ebp + 0x230], ds
    X86_AT(c, 0x1f13u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x230u)), (uint32_t)c.sreg[3]);
    // 001f1a  ret 
    X86_AT(c, 0x1f1au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1f0cu, "ran off the end of a function");
}
void f_00001f1c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001f1c  cmp al, 3
    X86_AT(c, 0x1f1cu);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 001f1e  ja 0x1f28
    X86_AT(c, 0x1f1eu);
    if (x86_cc(c, 7)) { goto L_1f28; }
    X86_TICK(c, 12);
    // 001f20  mov byte ptr gs:[ebp + 0x34c], al
    X86_AT(c, 0x1f20u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)), g8(c, 0));
    // 001f27  ret 
    X86_AT(c, 0x1f27u);
    c.eip = pop32(c); return;
L_1f28:
    X86_TICK(c, 12);
    // 001f28  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x1f28u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 001f2d  ret 
    X86_AT(c, 0x1f2du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1f1cu, "ran off the end of a function");
}
void f_00001f1e(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001f1e  ja 0x1f28
    X86_AT(c, 0x1f1eu);
    if (x86_cc(c, 7)) { goto L_1f28; }
    X86_TICK(c, 12);
    // 001f20  mov byte ptr gs:[ebp + 0x34c], al
    X86_AT(c, 0x1f20u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)), g8(c, 0));
    // 001f27  ret 
    X86_AT(c, 0x1f27u);
    c.eip = pop32(c); return;
L_1f28:
    X86_TICK(c, 12);
    // 001f28  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x1f28u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 001f2d  ret 
    X86_AT(c, 0x1f2du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1f1eu, "ran off the end of a function");
}
void f_00001f20(X86Cpu& c) {
    X86_TICK(c, 12);
    // 001f20  mov byte ptr gs:[ebp + 0x34c], al
    X86_AT(c, 0x1f20u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)), g8(c, 0));
    // 001f27  ret 
    X86_AT(c, 0x1f27u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1f20u, "ran off the end of a function");
}
void f_00001f27(X86Cpu& c) {
    X86_TICK(c, 10);
    // 001f27  ret 
    X86_AT(c, 0x1f27u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1f27u, "ran off the end of a function");
}
void f_00001f30(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001f30  cmp al, 3
    X86_AT(c, 0x1f30u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 001f32  ja 0x1f3c
    X86_AT(c, 0x1f32u);
    if (x86_cc(c, 7)) { goto L_1f3c; }
    X86_TICK(c, 12);
    // 001f34  mov byte ptr gs:[ebp + 0x34d], al
    X86_AT(c, 0x1f34u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Du)), g8(c, 0));
    // 001f3b  ret 
    X86_AT(c, 0x1f3bu);
    c.eip = pop32(c); return;
L_1f3c:
    X86_TICK(c, 12);
    // 001f3c  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x1f3cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 001f41  ret 
    X86_AT(c, 0x1f41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1f30u, "ran off the end of a function");
}
void f_00001f32(X86Cpu& c) {
    X86_TICK(c, 5);
    // 001f32  ja 0x1f3c
    X86_AT(c, 0x1f32u);
    if (x86_cc(c, 7)) { goto L_1f3c; }
    X86_TICK(c, 12);
    // 001f34  mov byte ptr gs:[ebp + 0x34d], al
    X86_AT(c, 0x1f34u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Du)), g8(c, 0));
    // 001f3b  ret 
    X86_AT(c, 0x1f3bu);
    c.eip = pop32(c); return;
L_1f3c:
    X86_TICK(c, 12);
    // 001f3c  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x1f3cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 001f41  ret 
    X86_AT(c, 0x1f41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1f32u, "ran off the end of a function");
}
void f_00001f34(X86Cpu& c) {
    X86_TICK(c, 12);
    // 001f34  mov byte ptr gs:[ebp + 0x34d], al
    X86_AT(c, 0x1f34u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Du)), g8(c, 0));
    // 001f3b  ret 
    X86_AT(c, 0x1f3bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1f34u, "ran off the end of a function");
}
void f_00001f3b(X86Cpu& c) {
    X86_TICK(c, 10);
    // 001f3b  ret 
    X86_AT(c, 0x1f3bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1f3bu, "ran off the end of a function");
}
void f_00001f44(X86Cpu& c) {
    X86_TICK(c, 12);
    // 001f44  mov word ptr gs:[ebp + 0x34e], dx
    X86_AT(c, 0x1f44u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Eu)), (c.r[2] & 0xFFFFu));
    // 001f4c  ret 
    X86_AT(c, 0x1f4cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1f44u, "ran off the end of a function");
}
}
