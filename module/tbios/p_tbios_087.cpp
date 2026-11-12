#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00008b2b(X86Cpu& c) {
    X86_TICK(c, 12);
    // 008b2b  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x8b2bu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 008b30  jl 0x8b35
    X86_AT(c, 0x8b30u);
    if (x86_cc(c, 12)) { goto L_8b35; }
    X86_TICK(c, 2);
    // 008b32  or bl, 0x80
    X86_AT(c, 0x8b32u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x80u, 1)); }
L_8b35:
    X86_TICK(c, 11);
    // 008b35  mov ecx, dword ptr gs:[ebp + 0x14]
    X86_AT(c, 0x8b35u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)));
    // 008b39  jmp dword ptr cs:[ecx*4 + 0x8b44]
    X86_AT(c, 0x8b39u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8B44u)));
      switch (t) {
      case 0x8bb4u: goto L_8bb4;
      case 0x8ce0u: goto L_8ce0;
      case 0x8e04u: goto L_8e04;
      case 0x8e70u: goto L_8e70;
      default: x86_jump(c, t); return; } }
L_8bb4:
    X86_TICK(c, 11);
    // 008bb4  mov edi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x8bb4u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 008bbb  test bl, bl
    X86_AT(c, 0x8bbbu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008bbd  jl 0x8be5
    X86_AT(c, 0x8bbdu);
    if (x86_cc(c, 12)) { goto L_8be5; }
    X86_TICK(c, 48);
    // 008bbf  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8bbfu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008bc7  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8bc7u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008bcf  shr ecx, 3
    X86_AT(c, 0x8bcfu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 008bd2  inc ecx
    X86_AT(c, 0x8bd2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008bd3  push edi
    X86_AT(c, 0x8bd3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008bd4  mov edx, ecx
    X86_AT(c, 0x8bd4u);
    c.r[2] = c.r[1];
    // 008bd6  sub eax, eax
    X86_AT(c, 0x8bd6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008bd8  shr ecx, 2
    X86_AT(c, 0x8bd8u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 008bdb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8bdbu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008bdd  mov ecx, edx
    X86_AT(c, 0x8bddu);
    c.r[1] = c.r[2];
    // 008bdf  and ecx, 3
    X86_AT(c, 0x8bdfu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 008be2  stosb byte ptr es:[edi], al
    X86_AT(c, 0x8be2u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 008be4  pop edi
    X86_AT(c, 0x8be4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8be5:
    X86_TICK(c, 7);
    // 008be5  test bl, 1
    X86_AT(c, 0x8be5u);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008be8  jne 0x8cdb
    X86_AT(c, 0x8be8u);
    if (x86_cc(c, 5)) { goto L_8cdb; }
    X86_TICK(c, 58);
    // 008bee  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8beeu);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008bf6  mov edx, esi
    X86_AT(c, 0x8bf6u);
    c.r[2] = c.r[6];
    // 008bf8  mov eax, esi
    X86_AT(c, 0x8bf8u);
    c.r[0] = c.r[6];
    // 008bfa  movsx ecx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8bfau);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)));
    // 008c02  mov ebx, ecx
    X86_AT(c, 0x8c02u);
    c.r[3] = c.r[1];
    // 008c04  and ecx, 7
    X86_AT(c, 0x8c04u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x7u, 4); }
    // 008c07  sub esi, ecx
    X86_AT(c, 0x8c07u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[1], 0, 4); }
    // 008c09  sar esi, 3
    X86_AT(c, 0x8c09u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 008c0c  sub eax, ebx
    X86_AT(c, 0x8c0cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008c0e  shr eax, 3
    X86_AT(c, 0x8c0eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 008c11  add edi, eax
    X86_AT(c, 0x8c11u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008c13  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8c13u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008c1b  sub eax, edx
    X86_AT(c, 0x8c1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008c1d  sub edx, ebx
    X86_AT(c, 0x8c1du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008c1f  and edx, 7
    X86_AT(c, 0x8c1fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008c22  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8c22u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008c26  shr ebx, 3
    X86_AT(c, 0x8c26u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008c29  push ecx
    X86_AT(c, 0x8c29u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008c2a  test esi, esi
    X86_AT(c, 0x8c2au);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008c2c  jge 0x8c3c
    X86_AT(c, 0x8c2cu);
    if (x86_cc(c, 13)) { goto L_8c3c; }
    X86_TICK(c, 13);
    // 008c2e  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8c2eu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008c35  sub al, al
    X86_AT(c, 0x8c35u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 008c37  jmp 0x8c57
    X86_AT(c, 0x8c37u);
    goto L_8c57;
L_8c3c:
    X86_TICK(c, 31);
    // 008c3c  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8c3cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008c43  lodsb al, byte ptr [esi]
    X86_AT(c, 0x8c43u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 008c44  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8c44u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008c4c  add dx, 8
    X86_AT(c, 0x8c4cu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008c50  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8c50u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008c55  jb 0x8c59
    X86_AT(c, 0x8c55u);
    if (x86_cc(c, 2)) { goto L_8c59; }
L_8c57:
    X86_TICK(c, 4);
    // 008c57  mov ah, byte ptr [esi]
    X86_AT(c, 0x8c57u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
L_8c59:
    X86_TICK(c, 45);
    // 008c59  xchg al, ah
    X86_AT(c, 0x8c59u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008c5b  shl ax, cl
    X86_AT(c, 0x8c5bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 008c5e  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8c5eu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008c66  sub edx, dword ptr [esp]
    X86_AT(c, 0x8c66u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008c69  and edx, 7
    X86_AT(c, 0x8c69u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008c6c  mov dl, byte ptr cs:[edx + 0xc3dc]
    X86_AT(c, 0x8c6cu);
    s8(c, 2, rd8((c.sbase[1] + (uint32_t)(c.r[2] + 0xC3DCu))));
    // 008c73  not dl
    X86_AT(c, 0x8c73u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 008c75  mov al, byte ptr es:[edi]
    X86_AT(c, 0x8c75u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 008c78  and al, dl
    X86_AT(c, 0x8c78u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 008c7a  not dl
    X86_AT(c, 0x8c7au);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 008c7c  and ah, dl
    X86_AT(c, 0x8c7cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & g8(c, 2), 1)); }
    // 008c7e  or ah, al
    X86_AT(c, 0x8c7eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | g8(c, 0), 1)); }
    // 008c80  cmp ebx, 1
    X86_AT(c, 0x8c80u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008c83  je 0x8cbf
    X86_AT(c, 0x8c83u);
    if (x86_cc(c, 4)) { goto L_8cbf; }
    X86_TICK(c, 23);
    // 008c85  mov byte ptr es:[edi], ah
    X86_AT(c, 0x8c85u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 4));
    // 008c88  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8c88u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008c90  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8c90u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008c93  push edx
    X86_AT(c, 0x8c93u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008c94  inc edi
    X86_AT(c, 0x8c94u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 008c95  dec ebx
    X86_AT(c, 0x8c95u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008c96  cmp ebx, 1
    X86_AT(c, 0x8c96u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008c99  je 0x8cac
    X86_AT(c, 0x8c99u);
    if (x86_cc(c, 4)) { goto L_8cac; }
    X86_TICK(c, 2);
    // 008c9b  dec ebx
    X86_AT(c, 0x8c9bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_8c9c:
    X86_TICK(c, 23);
    // 008c9c  mov ax, word ptr [esi]
    X86_AT(c, 0x8c9cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 008c9f  xchg al, ah
    X86_AT(c, 0x8c9fu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ca1  shl ax, cl
    X86_AT(c, 0x8ca1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 008ca4  mov byte ptr es:[edi], ah
    X86_AT(c, 0x8ca4u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 4));
    // 008ca7  inc esi
    X86_AT(c, 0x8ca7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 008ca8  inc edi
    X86_AT(c, 0x8ca8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 008ca9  dec ebx
    X86_AT(c, 0x8ca9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008caa  jne 0x8c9c
    X86_AT(c, 0x8caau);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8c9cu); goto L_8c9c; }
L_8cac:
    X86_TICK(c, 25);
    // 008cac  lodsb al, byte ptr [esi]
    X86_AT(c, 0x8cacu);
    x86_string(c, 3, 1, 0, 4, 3);
    // 008cad  pop edx
    X86_AT(c, 0x8cadu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008cae  and dl, 0xf8
    X86_AT(c, 0x8caeu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008cb1  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8cb1u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008cb6  jb 0x8cdc
    X86_AT(c, 0x8cb6u);
    if (x86_cc(c, 2)) { goto L_8cdc; }
    X86_TICK(c, 4);
    // 008cb8  mov ah, byte ptr [esi]
    X86_AT(c, 0x8cb8u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
L_8cba:
    X86_TICK(c, 6);
    // 008cba  xchg al, ah
    X86_AT(c, 0x8cbau);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008cbc  shl ax, cl
    X86_AT(c, 0x8cbcu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
L_8cbf:
    X86_TICK(c, 26);
    // 008cbf  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8cbfu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008cc7  sub edx, dword ptr [esp]
    X86_AT(c, 0x8cc7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008cca  and edx, 7
    X86_AT(c, 0x8ccau);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008ccd  and ah, byte ptr cs:[edx + 0xc3e4]
    X86_AT(c, 0x8ccdu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & rd8((c.sbase[1] + (uint32_t)(c.r[2] + 0xC3E4u))), 1)); }
    // 008cd4  mov byte ptr es:[edi], ah
    X86_AT(c, 0x8cd4u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 4));
    // 008cd7  inc edi
    X86_AT(c, 0x8cd7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 008cd8  add esp, 4
    X86_AT(c, 0x8cd8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8cdb:
    X86_TICK(c, 10);
    // 008cdb  ret 
    X86_AT(c, 0x8cdbu);
    c.eip = pop32(c); return;
L_8cdc:
    X86_TICK(c, 9);
    // 008cdc  sub edx, edx
    X86_AT(c, 0x8cdcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008cde  jmp 0x8cba
    X86_AT(c, 0x8cdeu);
    X86_POLL(c, 0x8cbau); goto L_8cba;
L_8ce0:
    X86_TICK(c, 11);
    // 008ce0  mov edi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x8ce0u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 008ce7  test bl, bl
    X86_AT(c, 0x8ce7u);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008ce9  jl 0x8d05
    X86_AT(c, 0x8ce9u);
    if (x86_cc(c, 12)) { goto L_8d05; }
    X86_TICK(c, 32);
    // 008ceb  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8cebu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008cf3  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8cf3u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008cfb  shr ecx, 3
    X86_AT(c, 0x8cfbu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 008cfe  inc ecx
    X86_AT(c, 0x8cfeu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008cff  push edi
    X86_AT(c, 0x8cffu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008d00  sub eax, eax
    X86_AT(c, 0x8d00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d02  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8d02u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008d04  pop edi
    X86_AT(c, 0x8d04u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8d05:
    X86_TICK(c, 7);
    // 008d05  test bl, 1
    X86_AT(c, 0x8d05u);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008d08  jne 0x8dfd
    X86_AT(c, 0x8d08u);
    if (x86_cc(c, 5)) { goto L_8dfd; }
    X86_TICK(c, 65);
    // 008d0e  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d0eu);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d16  mov edx, esi
    X86_AT(c, 0x8d16u);
    c.r[2] = c.r[6];
    // 008d18  mov eax, esi
    X86_AT(c, 0x8d18u);
    c.r[0] = c.r[6];
    // 008d1a  movsx ecx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8d1au);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)));
    // 008d22  mov ebx, ecx
    X86_AT(c, 0x8d22u);
    c.r[3] = c.r[1];
    // 008d24  and ecx, 7
    X86_AT(c, 0x8d24u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x7u, 4); }
    // 008d27  sub esi, ecx
    X86_AT(c, 0x8d27u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[1], 0, 4); }
    // 008d29  and esi, 0xfffffff8
    X86_AT(c, 0x8d29u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFF8u, 4); }
    // 008d2c  sar esi, 1
    X86_AT(c, 0x8d2cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 008d2e  sub eax, ebx
    X86_AT(c, 0x8d2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d30  and eax, 0xfff8
    X86_AT(c, 0x8d30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFF8u, 4); }
    // 008d35  shr eax, 1
    X86_AT(c, 0x8d35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 008d37  add edi, eax
    X86_AT(c, 0x8d37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 29);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8dfd:
    X86_TICK(c, 10);
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
L_8e04:
    X86_TICK(c, 25);
    // 008e04  mov edi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x8e04u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 008e0b  mov eax, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8e0bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008e12  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8e12u);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008e1a  mov edx, esi
    X86_AT(c, 0x8e1au);
    c.r[2] = c.r[6];
    // 008e1c  add esi, eax
    X86_AT(c, 0x8e1cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 008e1e  test bl, bl
    X86_AT(c, 0x8e1eu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008e20  jl 0x8e44
    X86_AT(c, 0x8e20u);
    if (x86_cc(c, 12)) { goto L_8e44; }
    X86_TICK(c, 26);
    // 008e22  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8e22u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008e2a  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8e2au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008e32  inc ecx
    X86_AT(c, 0x8e32u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008e33  push edi
    X86_AT(c, 0x8e33u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008e34  sub eax, eax
    X86_AT(c, 0x8e34u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008e36  shr ecx, 1
    X86_AT(c, 0x8e36u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 008e38  jae 0x8e3b
    X86_AT(c, 0x8e38u);
    if (x86_cc(c, 3)) { goto L_8e3b; }
    X86_TICK(c, 7);
    // 008e3a  stosb byte ptr es:[edi], al
    X86_AT(c, 0x8e3au);
    x86_string(c, 2, 1, 0, 4, 3);
L_8e3b:
    X86_TICK(c, 8);
    // 008e3b  shr ecx, 1
    X86_AT(c, 0x8e3bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 008e3d  jae 0x8e41
    X86_AT(c, 0x8e3du);
    if (x86_cc(c, 3)) { goto L_8e41; }
    X86_TICK(c, 7);
    // 008e3f  stosw word ptr es:[edi], ax
    X86_AT(c, 0x8e3fu);
    x86_string(c, 2, 2, 0, 4, 3);
L_8e41:
    X86_TICK(c, 11);
    // 008e41  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8e41u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008e43  pop edi
    X86_AT(c, 0x8e43u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8e44:
    X86_TICK(c, 7);
    // 008e44  test bl, 1
    X86_AT(c, 0x8e44u);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008e47  jne 0x8e6c
    X86_AT(c, 0x8e47u);
    if (x86_cc(c, 5)) { goto L_8e6c; }
    X86_TICK(c, 41);
    // 008e49  movzx ecx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8e49u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008e51  sub ecx, edx
    X86_AT(c, 0x8e51u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e53  inc ecx
    X86_AT(c, 0x8e53u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008e54  sub dx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8e54u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008e5c  add edi, edx
    X86_AT(c, 0x8e5cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 008e5e  mov eax, ecx
    X86_AT(c, 0x8e5eu);
    c.r[0] = c.r[1];
    // 008e60  shr ecx, 2
    X86_AT(c, 0x8e60u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 008e63  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x8e63u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 008e65  mov ecx, eax
    X86_AT(c, 0x8e65u);
    c.r[1] = c.r[0];
    // 008e67  and ecx, 3
    X86_AT(c, 0x8e67u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 008e6a  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x8e6au);
    x86_string(c, 0, 1, 243, 4, 3);
L_8e6c:
    X86_TICK(c, 10);
    // 008e6c  ret 
    X86_AT(c, 0x8e6cu);
    c.eip = pop32(c); return;
L_8e70:
    X86_TICK(c, 25);
    // 008e70  mov edi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x8e70u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 008e77  mov eax, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8e77u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008e7e  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8e7eu);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008e86  mov edx, esi
    X86_AT(c, 0x8e86u);
    c.r[2] = c.r[6];
    // 008e88  lea esi, [eax + esi*2]
    X86_AT(c, 0x8e88u);
    c.r[6] = (uint32_t)(c.r[0] + c.r[6] * 2);
    // 008e8b  test bl, bl
    X86_AT(c, 0x8e8bu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008e8d  jl 0x8eac
    X86_AT(c, 0x8e8du);
    if (x86_cc(c, 12)) { goto L_8eac; }
    X86_TICK(c, 26);
    // 008e8f  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8e8fu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008e97  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8e97u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008e9f  inc ecx
    X86_AT(c, 0x8e9fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008ea0  push edi
    X86_AT(c, 0x8ea0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008ea1  sub eax, eax
    X86_AT(c, 0x8ea1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008ea3  shr ecx, 1
    X86_AT(c, 0x8ea3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 008ea5  jae 0x8ea9
    X86_AT(c, 0x8ea5u);
    if (x86_cc(c, 3)) { goto L_8ea9; }
    X86_TICK(c, 7);
    // 008ea7  stosw word ptr es:[edi], ax
    X86_AT(c, 0x8ea7u);
    x86_string(c, 2, 2, 0, 4, 3);
L_8ea9:
    X86_TICK(c, 11);
    // 008ea9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8ea9u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008eab  pop edi
    X86_AT(c, 0x8eabu);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8eac:
    X86_TICK(c, 7);
    // 008eac  test bl, 1
    X86_AT(c, 0x8eacu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008eaf  jne 0x8ecf
    X86_AT(c, 0x8eafu);
    if (x86_cc(c, 5)) { goto L_8ecf; }
    X86_TICK(c, 26);
    // 008eb1  movzx ecx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8eb1u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008eb9  sub ecx, edx
    X86_AT(c, 0x8eb9u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008ebb  inc ecx
    X86_AT(c, 0x8ebbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008ebc  sub dx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8ebcu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008ec4  lea edi, [edi + edx*2]
    X86_AT(c, 0x8ec4u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[2] * 2);
    // 008ec7  shr ecx, 1
    X86_AT(c, 0x8ec7u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 008ec9  jae 0x8ecd
    X86_AT(c, 0x8ec9u);
    if (x86_cc(c, 3)) { goto L_8ecd; }
    X86_TICK(c, 7);
    // 008ecb  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x8ecbu);
    x86_string(c, 0, 2, 0, 4, 3);
L_8ecd:
    X86_TICK(c, 7);
    // 008ecd  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x8ecdu);
    x86_string(c, 0, 4, 243, 4, 3);
L_8ecf:
    X86_TICK(c, 10);
    // 008ecf  ret 
    X86_AT(c, 0x8ecfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b2bu, "ran off the end of a function");
}
void f_00008b30(X86Cpu& c) {
    X86_TICK(c, 5);
    // 008b30  jl 0x8b35
    X86_AT(c, 0x8b30u);
    if (x86_cc(c, 12)) { goto L_8b35; }
    X86_TICK(c, 2);
    // 008b32  or bl, 0x80
    X86_AT(c, 0x8b32u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x80u, 1)); }
L_8b35:
    X86_TICK(c, 11);
    // 008b35  mov ecx, dword ptr gs:[ebp + 0x14]
    X86_AT(c, 0x8b35u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)));
    // 008b39  jmp dword ptr cs:[ecx*4 + 0x8b44]
    X86_AT(c, 0x8b39u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8B44u)));
      switch (t) {
      case 0x8bb4u: goto L_8bb4;
      case 0x8ce0u: goto L_8ce0;
      case 0x8e04u: goto L_8e04;
      case 0x8e70u: goto L_8e70;
      default: x86_jump(c, t); return; } }
L_8bb4:
    X86_TICK(c, 11);
    // 008bb4  mov edi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x8bb4u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 008bbb  test bl, bl
    X86_AT(c, 0x8bbbu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008bbd  jl 0x8be5
    X86_AT(c, 0x8bbdu);
    if (x86_cc(c, 12)) { goto L_8be5; }
    X86_TICK(c, 48);
    // 008bbf  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8bbfu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008bc7  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8bc7u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008bcf  shr ecx, 3
    X86_AT(c, 0x8bcfu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 008bd2  inc ecx
    X86_AT(c, 0x8bd2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008bd3  push edi
    X86_AT(c, 0x8bd3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008bd4  mov edx, ecx
    X86_AT(c, 0x8bd4u);
    c.r[2] = c.r[1];
    // 008bd6  sub eax, eax
    X86_AT(c, 0x8bd6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008bd8  shr ecx, 2
    X86_AT(c, 0x8bd8u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 008bdb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8bdbu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008bdd  mov ecx, edx
    X86_AT(c, 0x8bddu);
    c.r[1] = c.r[2];
    // 008bdf  and ecx, 3
    X86_AT(c, 0x8bdfu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 008be2  stosb byte ptr es:[edi], al
    X86_AT(c, 0x8be2u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 008be4  pop edi
    X86_AT(c, 0x8be4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8be5:
    X86_TICK(c, 7);
    // 008be5  test bl, 1
    X86_AT(c, 0x8be5u);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008be8  jne 0x8cdb
    X86_AT(c, 0x8be8u);
    if (x86_cc(c, 5)) { goto L_8cdb; }
    X86_TICK(c, 58);
    // 008bee  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8beeu);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008bf6  mov edx, esi
    X86_AT(c, 0x8bf6u);
    c.r[2] = c.r[6];
    // 008bf8  mov eax, esi
    X86_AT(c, 0x8bf8u);
    c.r[0] = c.r[6];
    // 008bfa  movsx ecx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8bfau);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)));
    // 008c02  mov ebx, ecx
    X86_AT(c, 0x8c02u);
    c.r[3] = c.r[1];
    // 008c04  and ecx, 7
    X86_AT(c, 0x8c04u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x7u, 4); }
    // 008c07  sub esi, ecx
    X86_AT(c, 0x8c07u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[1], 0, 4); }
    // 008c09  sar esi, 3
    X86_AT(c, 0x8c09u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 008c0c  sub eax, ebx
    X86_AT(c, 0x8c0cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008c0e  shr eax, 3
    X86_AT(c, 0x8c0eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 008c11  add edi, eax
    X86_AT(c, 0x8c11u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008c13  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8c13u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008c1b  sub eax, edx
    X86_AT(c, 0x8c1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008c1d  sub edx, ebx
    X86_AT(c, 0x8c1du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008c1f  and edx, 7
    X86_AT(c, 0x8c1fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008c22  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8c22u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008c26  shr ebx, 3
    X86_AT(c, 0x8c26u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008c29  push ecx
    X86_AT(c, 0x8c29u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008c2a  test esi, esi
    X86_AT(c, 0x8c2au);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008c2c  jge 0x8c3c
    X86_AT(c, 0x8c2cu);
    if (x86_cc(c, 13)) { goto L_8c3c; }
    X86_TICK(c, 13);
    // 008c2e  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8c2eu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008c35  sub al, al
    X86_AT(c, 0x8c35u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 008c37  jmp 0x8c57
    X86_AT(c, 0x8c37u);
    goto L_8c57;
L_8c3c:
    X86_TICK(c, 31);
    // 008c3c  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8c3cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008c43  lodsb al, byte ptr [esi]
    X86_AT(c, 0x8c43u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 008c44  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8c44u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008c4c  add dx, 8
    X86_AT(c, 0x8c4cu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008c50  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8c50u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008c55  jb 0x8c59
    X86_AT(c, 0x8c55u);
    if (x86_cc(c, 2)) { goto L_8c59; }
L_8c57:
    X86_TICK(c, 4);
    // 008c57  mov ah, byte ptr [esi]
    X86_AT(c, 0x8c57u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
L_8c59:
    X86_TICK(c, 45);
    // 008c59  xchg al, ah
    X86_AT(c, 0x8c59u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008c5b  shl ax, cl
    X86_AT(c, 0x8c5bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 008c5e  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8c5eu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008c66  sub edx, dword ptr [esp]
    X86_AT(c, 0x8c66u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008c69  and edx, 7
    X86_AT(c, 0x8c69u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008c6c  mov dl, byte ptr cs:[edx + 0xc3dc]
    X86_AT(c, 0x8c6cu);
    s8(c, 2, rd8((c.sbase[1] + (uint32_t)(c.r[2] + 0xC3DCu))));
    // 008c73  not dl
    X86_AT(c, 0x8c73u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 008c75  mov al, byte ptr es:[edi]
    X86_AT(c, 0x8c75u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 008c78  and al, dl
    X86_AT(c, 0x8c78u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 008c7a  not dl
    X86_AT(c, 0x8c7au);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 008c7c  and ah, dl
    X86_AT(c, 0x8c7cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & g8(c, 2), 1)); }
    // 008c7e  or ah, al
    X86_AT(c, 0x8c7eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | g8(c, 0), 1)); }
    // 008c80  cmp ebx, 1
    X86_AT(c, 0x8c80u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008c83  je 0x8cbf
    X86_AT(c, 0x8c83u);
    if (x86_cc(c, 4)) { goto L_8cbf; }
    X86_TICK(c, 23);
    // 008c85  mov byte ptr es:[edi], ah
    X86_AT(c, 0x8c85u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 4));
    // 008c88  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8c88u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008c90  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8c90u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008c93  push edx
    X86_AT(c, 0x8c93u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008c94  inc edi
    X86_AT(c, 0x8c94u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 008c95  dec ebx
    X86_AT(c, 0x8c95u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008c96  cmp ebx, 1
    X86_AT(c, 0x8c96u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008c99  je 0x8cac
    X86_AT(c, 0x8c99u);
    if (x86_cc(c, 4)) { goto L_8cac; }
    X86_TICK(c, 2);
    // 008c9b  dec ebx
    X86_AT(c, 0x8c9bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_8c9c:
    X86_TICK(c, 23);
    // 008c9c  mov ax, word ptr [esi]
    X86_AT(c, 0x8c9cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 008c9f  xchg al, ah
    X86_AT(c, 0x8c9fu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ca1  shl ax, cl
    X86_AT(c, 0x8ca1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 008ca4  mov byte ptr es:[edi], ah
    X86_AT(c, 0x8ca4u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 4));
    // 008ca7  inc esi
    X86_AT(c, 0x8ca7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 008ca8  inc edi
    X86_AT(c, 0x8ca8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 008ca9  dec ebx
    X86_AT(c, 0x8ca9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008caa  jne 0x8c9c
    X86_AT(c, 0x8caau);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8c9cu); goto L_8c9c; }
L_8cac:
    X86_TICK(c, 25);
    // 008cac  lodsb al, byte ptr [esi]
    X86_AT(c, 0x8cacu);
    x86_string(c, 3, 1, 0, 4, 3);
    // 008cad  pop edx
    X86_AT(c, 0x8cadu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008cae  and dl, 0xf8
    X86_AT(c, 0x8caeu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008cb1  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8cb1u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008cb6  jb 0x8cdc
    X86_AT(c, 0x8cb6u);
    if (x86_cc(c, 2)) { goto L_8cdc; }
    X86_TICK(c, 4);
    // 008cb8  mov ah, byte ptr [esi]
    X86_AT(c, 0x8cb8u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
L_8cba:
    X86_TICK(c, 6);
    // 008cba  xchg al, ah
    X86_AT(c, 0x8cbau);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008cbc  shl ax, cl
    X86_AT(c, 0x8cbcu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
L_8cbf:
    X86_TICK(c, 26);
    // 008cbf  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8cbfu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008cc7  sub edx, dword ptr [esp]
    X86_AT(c, 0x8cc7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008cca  and edx, 7
    X86_AT(c, 0x8ccau);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008ccd  and ah, byte ptr cs:[edx + 0xc3e4]
    X86_AT(c, 0x8ccdu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & rd8((c.sbase[1] + (uint32_t)(c.r[2] + 0xC3E4u))), 1)); }
    // 008cd4  mov byte ptr es:[edi], ah
    X86_AT(c, 0x8cd4u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 4));
    // 008cd7  inc edi
    X86_AT(c, 0x8cd7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 008cd8  add esp, 4
    X86_AT(c, 0x8cd8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8cdb:
    X86_TICK(c, 10);
    // 008cdb  ret 
    X86_AT(c, 0x8cdbu);
    c.eip = pop32(c); return;
L_8cdc:
    X86_TICK(c, 9);
    // 008cdc  sub edx, edx
    X86_AT(c, 0x8cdcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008cde  jmp 0x8cba
    X86_AT(c, 0x8cdeu);
    X86_POLL(c, 0x8cbau); goto L_8cba;
L_8ce0:
    X86_TICK(c, 11);
    // 008ce0  mov edi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x8ce0u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 008ce7  test bl, bl
    X86_AT(c, 0x8ce7u);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008ce9  jl 0x8d05
    X86_AT(c, 0x8ce9u);
    if (x86_cc(c, 12)) { goto L_8d05; }
    X86_TICK(c, 32);
    // 008ceb  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8cebu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008cf3  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8cf3u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008cfb  shr ecx, 3
    X86_AT(c, 0x8cfbu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 008cfe  inc ecx
    X86_AT(c, 0x8cfeu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008cff  push edi
    X86_AT(c, 0x8cffu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008d00  sub eax, eax
    X86_AT(c, 0x8d00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d02  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8d02u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008d04  pop edi
    X86_AT(c, 0x8d04u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8d05:
    X86_TICK(c, 7);
    // 008d05  test bl, 1
    X86_AT(c, 0x8d05u);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008d08  jne 0x8dfd
    X86_AT(c, 0x8d08u);
    if (x86_cc(c, 5)) { goto L_8dfd; }
    X86_TICK(c, 65);
    // 008d0e  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d0eu);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d16  mov edx, esi
    X86_AT(c, 0x8d16u);
    c.r[2] = c.r[6];
    // 008d18  mov eax, esi
    X86_AT(c, 0x8d18u);
    c.r[0] = c.r[6];
    // 008d1a  movsx ecx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8d1au);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)));
    // 008d22  mov ebx, ecx
    X86_AT(c, 0x8d22u);
    c.r[3] = c.r[1];
    // 008d24  and ecx, 7
    X86_AT(c, 0x8d24u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x7u, 4); }
    // 008d27  sub esi, ecx
    X86_AT(c, 0x8d27u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[1], 0, 4); }
    // 008d29  and esi, 0xfffffff8
    X86_AT(c, 0x8d29u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFF8u, 4); }
    // 008d2c  sar esi, 1
    X86_AT(c, 0x8d2cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 008d2e  sub eax, ebx
    X86_AT(c, 0x8d2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d30  and eax, 0xfff8
    X86_AT(c, 0x8d30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFF8u, 4); }
    // 008d35  shr eax, 1
    X86_AT(c, 0x8d35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 008d37  add edi, eax
    X86_AT(c, 0x8d37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 29);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8dfd:
    X86_TICK(c, 10);
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
L_8e04:
    X86_TICK(c, 25);
    // 008e04  mov edi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x8e04u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 008e0b  mov eax, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8e0bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008e12  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8e12u);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008e1a  mov edx, esi
    X86_AT(c, 0x8e1au);
    c.r[2] = c.r[6];
    // 008e1c  add esi, eax
    X86_AT(c, 0x8e1cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 008e1e  test bl, bl
    X86_AT(c, 0x8e1eu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008e20  jl 0x8e44
    X86_AT(c, 0x8e20u);
    if (x86_cc(c, 12)) { goto L_8e44; }
    X86_TICK(c, 26);
    // 008e22  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8e22u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008e2a  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8e2au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008e32  inc ecx
    X86_AT(c, 0x8e32u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008e33  push edi
    X86_AT(c, 0x8e33u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008e34  sub eax, eax
    X86_AT(c, 0x8e34u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008e36  shr ecx, 1
    X86_AT(c, 0x8e36u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 008e38  jae 0x8e3b
    X86_AT(c, 0x8e38u);
    if (x86_cc(c, 3)) { goto L_8e3b; }
    X86_TICK(c, 7);
    // 008e3a  stosb byte ptr es:[edi], al
    X86_AT(c, 0x8e3au);
    x86_string(c, 2, 1, 0, 4, 3);
L_8e3b:
    X86_TICK(c, 8);
    // 008e3b  shr ecx, 1
    X86_AT(c, 0x8e3bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 008e3d  jae 0x8e41
    X86_AT(c, 0x8e3du);
    if (x86_cc(c, 3)) { goto L_8e41; }
    X86_TICK(c, 7);
    // 008e3f  stosw word ptr es:[edi], ax
    X86_AT(c, 0x8e3fu);
    x86_string(c, 2, 2, 0, 4, 3);
L_8e41:
    X86_TICK(c, 11);
    // 008e41  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8e41u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008e43  pop edi
    X86_AT(c, 0x8e43u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8e44:
    X86_TICK(c, 7);
    // 008e44  test bl, 1
    X86_AT(c, 0x8e44u);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008e47  jne 0x8e6c
    X86_AT(c, 0x8e47u);
    if (x86_cc(c, 5)) { goto L_8e6c; }
    X86_TICK(c, 41);
    // 008e49  movzx ecx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8e49u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008e51  sub ecx, edx
    X86_AT(c, 0x8e51u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e53  inc ecx
    X86_AT(c, 0x8e53u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008e54  sub dx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8e54u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008e5c  add edi, edx
    X86_AT(c, 0x8e5cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 008e5e  mov eax, ecx
    X86_AT(c, 0x8e5eu);
    c.r[0] = c.r[1];
    // 008e60  shr ecx, 2
    X86_AT(c, 0x8e60u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 008e63  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x8e63u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 008e65  mov ecx, eax
    X86_AT(c, 0x8e65u);
    c.r[1] = c.r[0];
    // 008e67  and ecx, 3
    X86_AT(c, 0x8e67u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 008e6a  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x8e6au);
    x86_string(c, 0, 1, 243, 4, 3);
L_8e6c:
    X86_TICK(c, 10);
    // 008e6c  ret 
    X86_AT(c, 0x8e6cu);
    c.eip = pop32(c); return;
L_8e70:
    X86_TICK(c, 25);
    // 008e70  mov edi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x8e70u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 008e77  mov eax, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8e77u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008e7e  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8e7eu);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008e86  mov edx, esi
    X86_AT(c, 0x8e86u);
    c.r[2] = c.r[6];
    // 008e88  lea esi, [eax + esi*2]
    X86_AT(c, 0x8e88u);
    c.r[6] = (uint32_t)(c.r[0] + c.r[6] * 2);
    // 008e8b  test bl, bl
    X86_AT(c, 0x8e8bu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008e8d  jl 0x8eac
    X86_AT(c, 0x8e8du);
    if (x86_cc(c, 12)) { goto L_8eac; }
    X86_TICK(c, 26);
    // 008e8f  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8e8fu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008e97  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8e97u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008e9f  inc ecx
    X86_AT(c, 0x8e9fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008ea0  push edi
    X86_AT(c, 0x8ea0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008ea1  sub eax, eax
    X86_AT(c, 0x8ea1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008ea3  shr ecx, 1
    X86_AT(c, 0x8ea3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 008ea5  jae 0x8ea9
    X86_AT(c, 0x8ea5u);
    if (x86_cc(c, 3)) { goto L_8ea9; }
    X86_TICK(c, 7);
    // 008ea7  stosw word ptr es:[edi], ax
    X86_AT(c, 0x8ea7u);
    x86_string(c, 2, 2, 0, 4, 3);
L_8ea9:
    X86_TICK(c, 11);
    // 008ea9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8ea9u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008eab  pop edi
    X86_AT(c, 0x8eabu);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8eac:
    X86_TICK(c, 7);
    // 008eac  test bl, 1
    X86_AT(c, 0x8eacu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008eaf  jne 0x8ecf
    X86_AT(c, 0x8eafu);
    if (x86_cc(c, 5)) { goto L_8ecf; }
    X86_TICK(c, 26);
    // 008eb1  movzx ecx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8eb1u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008eb9  sub ecx, edx
    X86_AT(c, 0x8eb9u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008ebb  inc ecx
    X86_AT(c, 0x8ebbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008ebc  sub dx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8ebcu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008ec4  lea edi, [edi + edx*2]
    X86_AT(c, 0x8ec4u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[2] * 2);
    // 008ec7  shr ecx, 1
    X86_AT(c, 0x8ec7u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 008ec9  jae 0x8ecd
    X86_AT(c, 0x8ec9u);
    if (x86_cc(c, 3)) { goto L_8ecd; }
    X86_TICK(c, 7);
    // 008ecb  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x8ecbu);
    x86_string(c, 0, 2, 0, 4, 3);
L_8ecd:
    X86_TICK(c, 7);
    // 008ecd  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x8ecdu);
    x86_string(c, 0, 4, 243, 4, 3);
L_8ecf:
    X86_TICK(c, 10);
    // 008ecf  ret 
    X86_AT(c, 0x8ecfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b30u, "ran off the end of a function");
}
void f_00008b32(X86Cpu& c) {
    X86_TICK(c, 13);
    // 008b32  or bl, 0x80
    X86_AT(c, 0x8b32u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x80u, 1)); }
    // 008b35  mov ecx, dword ptr gs:[ebp + 0x14]
    X86_AT(c, 0x8b35u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)));
    // 008b39  jmp dword ptr cs:[ecx*4 + 0x8b44]
    X86_AT(c, 0x8b39u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8B44u)));
      switch (t) {
      case 0x8bb4u: goto L_8bb4;
      case 0x8ce0u: goto L_8ce0;
      case 0x8e04u: goto L_8e04;
      case 0x8e70u: goto L_8e70;
      default: x86_jump(c, t); return; } }
L_8bb4:
    X86_TICK(c, 11);
    // 008bb4  mov edi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x8bb4u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 008bbb  test bl, bl
    X86_AT(c, 0x8bbbu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008bbd  jl 0x8be5
    X86_AT(c, 0x8bbdu);
    if (x86_cc(c, 12)) { goto L_8be5; }
    X86_TICK(c, 48);
    // 008bbf  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8bbfu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008bc7  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8bc7u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008bcf  shr ecx, 3
    X86_AT(c, 0x8bcfu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 008bd2  inc ecx
    X86_AT(c, 0x8bd2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008bd3  push edi
    X86_AT(c, 0x8bd3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008bd4  mov edx, ecx
    X86_AT(c, 0x8bd4u);
    c.r[2] = c.r[1];
    // 008bd6  sub eax, eax
    X86_AT(c, 0x8bd6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008bd8  shr ecx, 2
    X86_AT(c, 0x8bd8u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 008bdb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8bdbu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008bdd  mov ecx, edx
    X86_AT(c, 0x8bddu);
    c.r[1] = c.r[2];
    // 008bdf  and ecx, 3
    X86_AT(c, 0x8bdfu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 008be2  stosb byte ptr es:[edi], al
    X86_AT(c, 0x8be2u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 008be4  pop edi
    X86_AT(c, 0x8be4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8be5:
    X86_TICK(c, 7);
    // 008be5  test bl, 1
    X86_AT(c, 0x8be5u);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008be8  jne 0x8cdb
    X86_AT(c, 0x8be8u);
    if (x86_cc(c, 5)) { goto L_8cdb; }
    X86_TICK(c, 58);
    // 008bee  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8beeu);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008bf6  mov edx, esi
    X86_AT(c, 0x8bf6u);
    c.r[2] = c.r[6];
    // 008bf8  mov eax, esi
    X86_AT(c, 0x8bf8u);
    c.r[0] = c.r[6];
    // 008bfa  movsx ecx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8bfau);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)));
    // 008c02  mov ebx, ecx
    X86_AT(c, 0x8c02u);
    c.r[3] = c.r[1];
    // 008c04  and ecx, 7
    X86_AT(c, 0x8c04u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x7u, 4); }
    // 008c07  sub esi, ecx
    X86_AT(c, 0x8c07u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[1], 0, 4); }
    // 008c09  sar esi, 3
    X86_AT(c, 0x8c09u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 008c0c  sub eax, ebx
    X86_AT(c, 0x8c0cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008c0e  shr eax, 3
    X86_AT(c, 0x8c0eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 008c11  add edi, eax
    X86_AT(c, 0x8c11u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008c13  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8c13u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008c1b  sub eax, edx
    X86_AT(c, 0x8c1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008c1d  sub edx, ebx
    X86_AT(c, 0x8c1du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008c1f  and edx, 7
    X86_AT(c, 0x8c1fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008c22  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8c22u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008c26  shr ebx, 3
    X86_AT(c, 0x8c26u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008c29  push ecx
    X86_AT(c, 0x8c29u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008c2a  test esi, esi
    X86_AT(c, 0x8c2au);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008c2c  jge 0x8c3c
    X86_AT(c, 0x8c2cu);
    if (x86_cc(c, 13)) { goto L_8c3c; }
    X86_TICK(c, 13);
    // 008c2e  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8c2eu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008c35  sub al, al
    X86_AT(c, 0x8c35u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 008c37  jmp 0x8c57
    X86_AT(c, 0x8c37u);
    goto L_8c57;
L_8c3c:
    X86_TICK(c, 31);
    // 008c3c  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8c3cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008c43  lodsb al, byte ptr [esi]
    X86_AT(c, 0x8c43u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 008c44  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8c44u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008c4c  add dx, 8
    X86_AT(c, 0x8c4cu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008c50  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8c50u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008c55  jb 0x8c59
    X86_AT(c, 0x8c55u);
    if (x86_cc(c, 2)) { goto L_8c59; }
L_8c57:
    X86_TICK(c, 4);
    // 008c57  mov ah, byte ptr [esi]
    X86_AT(c, 0x8c57u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
L_8c59:
    X86_TICK(c, 45);
    // 008c59  xchg al, ah
    X86_AT(c, 0x8c59u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008c5b  shl ax, cl
    X86_AT(c, 0x8c5bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 008c5e  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8c5eu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008c66  sub edx, dword ptr [esp]
    X86_AT(c, 0x8c66u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008c69  and edx, 7
    X86_AT(c, 0x8c69u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008c6c  mov dl, byte ptr cs:[edx + 0xc3dc]
    X86_AT(c, 0x8c6cu);
    s8(c, 2, rd8((c.sbase[1] + (uint32_t)(c.r[2] + 0xC3DCu))));
    // 008c73  not dl
    X86_AT(c, 0x8c73u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 008c75  mov al, byte ptr es:[edi]
    X86_AT(c, 0x8c75u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 008c78  and al, dl
    X86_AT(c, 0x8c78u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 008c7a  not dl
    X86_AT(c, 0x8c7au);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 008c7c  and ah, dl
    X86_AT(c, 0x8c7cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & g8(c, 2), 1)); }
    // 008c7e  or ah, al
    X86_AT(c, 0x8c7eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | g8(c, 0), 1)); }
    // 008c80  cmp ebx, 1
    X86_AT(c, 0x8c80u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008c83  je 0x8cbf
    X86_AT(c, 0x8c83u);
    if (x86_cc(c, 4)) { goto L_8cbf; }
    X86_TICK(c, 23);
    // 008c85  mov byte ptr es:[edi], ah
    X86_AT(c, 0x8c85u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 4));
    // 008c88  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8c88u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008c90  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8c90u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008c93  push edx
    X86_AT(c, 0x8c93u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008c94  inc edi
    X86_AT(c, 0x8c94u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 008c95  dec ebx
    X86_AT(c, 0x8c95u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008c96  cmp ebx, 1
    X86_AT(c, 0x8c96u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008c99  je 0x8cac
    X86_AT(c, 0x8c99u);
    if (x86_cc(c, 4)) { goto L_8cac; }
    X86_TICK(c, 2);
    // 008c9b  dec ebx
    X86_AT(c, 0x8c9bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_8c9c:
    X86_TICK(c, 23);
    // 008c9c  mov ax, word ptr [esi]
    X86_AT(c, 0x8c9cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 008c9f  xchg al, ah
    X86_AT(c, 0x8c9fu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ca1  shl ax, cl
    X86_AT(c, 0x8ca1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 008ca4  mov byte ptr es:[edi], ah
    X86_AT(c, 0x8ca4u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 4));
    // 008ca7  inc esi
    X86_AT(c, 0x8ca7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 008ca8  inc edi
    X86_AT(c, 0x8ca8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 008ca9  dec ebx
    X86_AT(c, 0x8ca9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008caa  jne 0x8c9c
    X86_AT(c, 0x8caau);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8c9cu); goto L_8c9c; }
L_8cac:
    X86_TICK(c, 25);
    // 008cac  lodsb al, byte ptr [esi]
    X86_AT(c, 0x8cacu);
    x86_string(c, 3, 1, 0, 4, 3);
    // 008cad  pop edx
    X86_AT(c, 0x8cadu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008cae  and dl, 0xf8
    X86_AT(c, 0x8caeu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008cb1  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8cb1u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008cb6  jb 0x8cdc
    X86_AT(c, 0x8cb6u);
    if (x86_cc(c, 2)) { goto L_8cdc; }
    X86_TICK(c, 4);
    // 008cb8  mov ah, byte ptr [esi]
    X86_AT(c, 0x8cb8u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
L_8cba:
    X86_TICK(c, 6);
    // 008cba  xchg al, ah
    X86_AT(c, 0x8cbau);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008cbc  shl ax, cl
    X86_AT(c, 0x8cbcu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
L_8cbf:
    X86_TICK(c, 26);
    // 008cbf  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8cbfu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008cc7  sub edx, dword ptr [esp]
    X86_AT(c, 0x8cc7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008cca  and edx, 7
    X86_AT(c, 0x8ccau);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008ccd  and ah, byte ptr cs:[edx + 0xc3e4]
    X86_AT(c, 0x8ccdu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & rd8((c.sbase[1] + (uint32_t)(c.r[2] + 0xC3E4u))), 1)); }
    // 008cd4  mov byte ptr es:[edi], ah
    X86_AT(c, 0x8cd4u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 4));
    // 008cd7  inc edi
    X86_AT(c, 0x8cd7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 008cd8  add esp, 4
    X86_AT(c, 0x8cd8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8cdb:
    X86_TICK(c, 10);
    // 008cdb  ret 
    X86_AT(c, 0x8cdbu);
    c.eip = pop32(c); return;
L_8cdc:
    X86_TICK(c, 9);
    // 008cdc  sub edx, edx
    X86_AT(c, 0x8cdcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008cde  jmp 0x8cba
    X86_AT(c, 0x8cdeu);
    X86_POLL(c, 0x8cbau); goto L_8cba;
L_8ce0:
    X86_TICK(c, 11);
    // 008ce0  mov edi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x8ce0u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 008ce7  test bl, bl
    X86_AT(c, 0x8ce7u);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008ce9  jl 0x8d05
    X86_AT(c, 0x8ce9u);
    if (x86_cc(c, 12)) { goto L_8d05; }
    X86_TICK(c, 32);
    // 008ceb  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8cebu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008cf3  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8cf3u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008cfb  shr ecx, 3
    X86_AT(c, 0x8cfbu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 008cfe  inc ecx
    X86_AT(c, 0x8cfeu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008cff  push edi
    X86_AT(c, 0x8cffu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008d00  sub eax, eax
    X86_AT(c, 0x8d00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d02  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8d02u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008d04  pop edi
    X86_AT(c, 0x8d04u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8d05:
    X86_TICK(c, 7);
    // 008d05  test bl, 1
    X86_AT(c, 0x8d05u);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008d08  jne 0x8dfd
    X86_AT(c, 0x8d08u);
    if (x86_cc(c, 5)) { goto L_8dfd; }
    X86_TICK(c, 65);
    // 008d0e  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d0eu);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d16  mov edx, esi
    X86_AT(c, 0x8d16u);
    c.r[2] = c.r[6];
    // 008d18  mov eax, esi
    X86_AT(c, 0x8d18u);
    c.r[0] = c.r[6];
    // 008d1a  movsx ecx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8d1au);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)));
    // 008d22  mov ebx, ecx
    X86_AT(c, 0x8d22u);
    c.r[3] = c.r[1];
    // 008d24  and ecx, 7
    X86_AT(c, 0x8d24u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x7u, 4); }
    // 008d27  sub esi, ecx
    X86_AT(c, 0x8d27u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[1], 0, 4); }
    // 008d29  and esi, 0xfffffff8
    X86_AT(c, 0x8d29u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFF8u, 4); }
    // 008d2c  sar esi, 1
    X86_AT(c, 0x8d2cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 008d2e  sub eax, ebx
    X86_AT(c, 0x8d2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d30  and eax, 0xfff8
    X86_AT(c, 0x8d30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFF8u, 4); }
    // 008d35  shr eax, 1
    X86_AT(c, 0x8d35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 008d37  add edi, eax
    X86_AT(c, 0x8d37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 29);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8dfd:
    X86_TICK(c, 10);
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
L_8e04:
    X86_TICK(c, 25);
    // 008e04  mov edi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x8e04u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 008e0b  mov eax, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8e0bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008e12  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8e12u);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008e1a  mov edx, esi
    X86_AT(c, 0x8e1au);
    c.r[2] = c.r[6];
    // 008e1c  add esi, eax
    X86_AT(c, 0x8e1cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 008e1e  test bl, bl
    X86_AT(c, 0x8e1eu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008e20  jl 0x8e44
    X86_AT(c, 0x8e20u);
    if (x86_cc(c, 12)) { goto L_8e44; }
    X86_TICK(c, 26);
    // 008e22  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8e22u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008e2a  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8e2au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008e32  inc ecx
    X86_AT(c, 0x8e32u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008e33  push edi
    X86_AT(c, 0x8e33u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008e34  sub eax, eax
    X86_AT(c, 0x8e34u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008e36  shr ecx, 1
    X86_AT(c, 0x8e36u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 008e38  jae 0x8e3b
    X86_AT(c, 0x8e38u);
    if (x86_cc(c, 3)) { goto L_8e3b; }
    X86_TICK(c, 7);
    // 008e3a  stosb byte ptr es:[edi], al
    X86_AT(c, 0x8e3au);
    x86_string(c, 2, 1, 0, 4, 3);
L_8e3b:
    X86_TICK(c, 8);
    // 008e3b  shr ecx, 1
    X86_AT(c, 0x8e3bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 008e3d  jae 0x8e41
    X86_AT(c, 0x8e3du);
    if (x86_cc(c, 3)) { goto L_8e41; }
    X86_TICK(c, 7);
    // 008e3f  stosw word ptr es:[edi], ax
    X86_AT(c, 0x8e3fu);
    x86_string(c, 2, 2, 0, 4, 3);
L_8e41:
    X86_TICK(c, 11);
    // 008e41  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8e41u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008e43  pop edi
    X86_AT(c, 0x8e43u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8e44:
    X86_TICK(c, 7);
    // 008e44  test bl, 1
    X86_AT(c, 0x8e44u);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008e47  jne 0x8e6c
    X86_AT(c, 0x8e47u);
    if (x86_cc(c, 5)) { goto L_8e6c; }
    X86_TICK(c, 41);
    // 008e49  movzx ecx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8e49u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008e51  sub ecx, edx
    X86_AT(c, 0x8e51u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e53  inc ecx
    X86_AT(c, 0x8e53u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008e54  sub dx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8e54u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008e5c  add edi, edx
    X86_AT(c, 0x8e5cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 008e5e  mov eax, ecx
    X86_AT(c, 0x8e5eu);
    c.r[0] = c.r[1];
    // 008e60  shr ecx, 2
    X86_AT(c, 0x8e60u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 008e63  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x8e63u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 008e65  mov ecx, eax
    X86_AT(c, 0x8e65u);
    c.r[1] = c.r[0];
    // 008e67  and ecx, 3
    X86_AT(c, 0x8e67u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 008e6a  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x8e6au);
    x86_string(c, 0, 1, 243, 4, 3);
L_8e6c:
    X86_TICK(c, 10);
    // 008e6c  ret 
    X86_AT(c, 0x8e6cu);
    c.eip = pop32(c); return;
L_8e70:
    X86_TICK(c, 25);
    // 008e70  mov edi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x8e70u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 008e77  mov eax, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8e77u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008e7e  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8e7eu);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008e86  mov edx, esi
    X86_AT(c, 0x8e86u);
    c.r[2] = c.r[6];
    // 008e88  lea esi, [eax + esi*2]
    X86_AT(c, 0x8e88u);
    c.r[6] = (uint32_t)(c.r[0] + c.r[6] * 2);
    // 008e8b  test bl, bl
    X86_AT(c, 0x8e8bu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008e8d  jl 0x8eac
    X86_AT(c, 0x8e8du);
    if (x86_cc(c, 12)) { goto L_8eac; }
    X86_TICK(c, 26);
    // 008e8f  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8e8fu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008e97  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8e97u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008e9f  inc ecx
    X86_AT(c, 0x8e9fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008ea0  push edi
    X86_AT(c, 0x8ea0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008ea1  sub eax, eax
    X86_AT(c, 0x8ea1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008ea3  shr ecx, 1
    X86_AT(c, 0x8ea3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 008ea5  jae 0x8ea9
    X86_AT(c, 0x8ea5u);
    if (x86_cc(c, 3)) { goto L_8ea9; }
    X86_TICK(c, 7);
    // 008ea7  stosw word ptr es:[edi], ax
    X86_AT(c, 0x8ea7u);
    x86_string(c, 2, 2, 0, 4, 3);
L_8ea9:
    X86_TICK(c, 11);
    // 008ea9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8ea9u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008eab  pop edi
    X86_AT(c, 0x8eabu);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8eac:
    X86_TICK(c, 7);
    // 008eac  test bl, 1
    X86_AT(c, 0x8eacu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008eaf  jne 0x8ecf
    X86_AT(c, 0x8eafu);
    if (x86_cc(c, 5)) { goto L_8ecf; }
    X86_TICK(c, 26);
    // 008eb1  movzx ecx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8eb1u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008eb9  sub ecx, edx
    X86_AT(c, 0x8eb9u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008ebb  inc ecx
    X86_AT(c, 0x8ebbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008ebc  sub dx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8ebcu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008ec4  lea edi, [edi + edx*2]
    X86_AT(c, 0x8ec4u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[2] * 2);
    // 008ec7  shr ecx, 1
    X86_AT(c, 0x8ec7u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 008ec9  jae 0x8ecd
    X86_AT(c, 0x8ec9u);
    if (x86_cc(c, 3)) { goto L_8ecd; }
    X86_TICK(c, 7);
    // 008ecb  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x8ecbu);
    x86_string(c, 0, 2, 0, 4, 3);
L_8ecd:
    X86_TICK(c, 7);
    // 008ecd  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x8ecdu);
    x86_string(c, 0, 4, 243, 4, 3);
L_8ecf:
    X86_TICK(c, 10);
    // 008ecf  ret 
    X86_AT(c, 0x8ecfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b32u, "ran off the end of a function");
}
void f_00008b35(X86Cpu& c) {
    X86_TICK(c, 11);
    // 008b35  mov ecx, dword ptr gs:[ebp + 0x14]
    X86_AT(c, 0x8b35u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)));
    // 008b39  jmp dword ptr cs:[ecx*4 + 0x8b44]
    X86_AT(c, 0x8b39u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8B44u)));
      switch (t) {
      case 0x8bb4u: goto L_8bb4;
      case 0x8ce0u: goto L_8ce0;
      case 0x8e04u: goto L_8e04;
      case 0x8e70u: goto L_8e70;
      default: x86_jump(c, t); return; } }
L_8bb4:
    X86_TICK(c, 11);
    // 008bb4  mov edi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x8bb4u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 008bbb  test bl, bl
    X86_AT(c, 0x8bbbu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008bbd  jl 0x8be5
    X86_AT(c, 0x8bbdu);
    if (x86_cc(c, 12)) { goto L_8be5; }
    X86_TICK(c, 48);
    // 008bbf  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8bbfu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008bc7  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8bc7u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008bcf  shr ecx, 3
    X86_AT(c, 0x8bcfu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 008bd2  inc ecx
    X86_AT(c, 0x8bd2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008bd3  push edi
    X86_AT(c, 0x8bd3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008bd4  mov edx, ecx
    X86_AT(c, 0x8bd4u);
    c.r[2] = c.r[1];
    // 008bd6  sub eax, eax
    X86_AT(c, 0x8bd6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008bd8  shr ecx, 2
    X86_AT(c, 0x8bd8u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 008bdb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8bdbu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008bdd  mov ecx, edx
    X86_AT(c, 0x8bddu);
    c.r[1] = c.r[2];
    // 008bdf  and ecx, 3
    X86_AT(c, 0x8bdfu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 008be2  stosb byte ptr es:[edi], al
    X86_AT(c, 0x8be2u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 008be4  pop edi
    X86_AT(c, 0x8be4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8be5:
    X86_TICK(c, 7);
    // 008be5  test bl, 1
    X86_AT(c, 0x8be5u);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008be8  jne 0x8cdb
    X86_AT(c, 0x8be8u);
    if (x86_cc(c, 5)) { goto L_8cdb; }
    X86_TICK(c, 58);
    // 008bee  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8beeu);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008bf6  mov edx, esi
    X86_AT(c, 0x8bf6u);
    c.r[2] = c.r[6];
    // 008bf8  mov eax, esi
    X86_AT(c, 0x8bf8u);
    c.r[0] = c.r[6];
    // 008bfa  movsx ecx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8bfau);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)));
    // 008c02  mov ebx, ecx
    X86_AT(c, 0x8c02u);
    c.r[3] = c.r[1];
    // 008c04  and ecx, 7
    X86_AT(c, 0x8c04u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x7u, 4); }
    // 008c07  sub esi, ecx
    X86_AT(c, 0x8c07u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[1], 0, 4); }
    // 008c09  sar esi, 3
    X86_AT(c, 0x8c09u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 008c0c  sub eax, ebx
    X86_AT(c, 0x8c0cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008c0e  shr eax, 3
    X86_AT(c, 0x8c0eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 008c11  add edi, eax
    X86_AT(c, 0x8c11u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008c13  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8c13u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008c1b  sub eax, edx
    X86_AT(c, 0x8c1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008c1d  sub edx, ebx
    X86_AT(c, 0x8c1du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008c1f  and edx, 7
    X86_AT(c, 0x8c1fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008c22  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8c22u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008c26  shr ebx, 3
    X86_AT(c, 0x8c26u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008c29  push ecx
    X86_AT(c, 0x8c29u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008c2a  test esi, esi
    X86_AT(c, 0x8c2au);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008c2c  jge 0x8c3c
    X86_AT(c, 0x8c2cu);
    if (x86_cc(c, 13)) { goto L_8c3c; }
    X86_TICK(c, 13);
    // 008c2e  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8c2eu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008c35  sub al, al
    X86_AT(c, 0x8c35u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 008c37  jmp 0x8c57
    X86_AT(c, 0x8c37u);
    goto L_8c57;
L_8c3c:
    X86_TICK(c, 31);
    // 008c3c  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8c3cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008c43  lodsb al, byte ptr [esi]
    X86_AT(c, 0x8c43u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 008c44  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8c44u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008c4c  add dx, 8
    X86_AT(c, 0x8c4cu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008c50  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8c50u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008c55  jb 0x8c59
    X86_AT(c, 0x8c55u);
    if (x86_cc(c, 2)) { goto L_8c59; }
L_8c57:
    X86_TICK(c, 4);
    // 008c57  mov ah, byte ptr [esi]
    X86_AT(c, 0x8c57u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
L_8c59:
    X86_TICK(c, 45);
    // 008c59  xchg al, ah
    X86_AT(c, 0x8c59u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008c5b  shl ax, cl
    X86_AT(c, 0x8c5bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 008c5e  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8c5eu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008c66  sub edx, dword ptr [esp]
    X86_AT(c, 0x8c66u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008c69  and edx, 7
    X86_AT(c, 0x8c69u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008c6c  mov dl, byte ptr cs:[edx + 0xc3dc]
    X86_AT(c, 0x8c6cu);
    s8(c, 2, rd8((c.sbase[1] + (uint32_t)(c.r[2] + 0xC3DCu))));
    // 008c73  not dl
    X86_AT(c, 0x8c73u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 008c75  mov al, byte ptr es:[edi]
    X86_AT(c, 0x8c75u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 008c78  and al, dl
    X86_AT(c, 0x8c78u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 008c7a  not dl
    X86_AT(c, 0x8c7au);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 008c7c  and ah, dl
    X86_AT(c, 0x8c7cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & g8(c, 2), 1)); }
    // 008c7e  or ah, al
    X86_AT(c, 0x8c7eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | g8(c, 0), 1)); }
    // 008c80  cmp ebx, 1
    X86_AT(c, 0x8c80u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008c83  je 0x8cbf
    X86_AT(c, 0x8c83u);
    if (x86_cc(c, 4)) { goto L_8cbf; }
    X86_TICK(c, 23);
    // 008c85  mov byte ptr es:[edi], ah
    X86_AT(c, 0x8c85u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 4));
    // 008c88  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8c88u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008c90  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8c90u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008c93  push edx
    X86_AT(c, 0x8c93u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008c94  inc edi
    X86_AT(c, 0x8c94u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 008c95  dec ebx
    X86_AT(c, 0x8c95u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008c96  cmp ebx, 1
    X86_AT(c, 0x8c96u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008c99  je 0x8cac
    X86_AT(c, 0x8c99u);
    if (x86_cc(c, 4)) { goto L_8cac; }
    X86_TICK(c, 2);
    // 008c9b  dec ebx
    X86_AT(c, 0x8c9bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_8c9c:
    X86_TICK(c, 23);
    // 008c9c  mov ax, word ptr [esi]
    X86_AT(c, 0x8c9cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 008c9f  xchg al, ah
    X86_AT(c, 0x8c9fu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ca1  shl ax, cl
    X86_AT(c, 0x8ca1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 008ca4  mov byte ptr es:[edi], ah
    X86_AT(c, 0x8ca4u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 4));
    // 008ca7  inc esi
    X86_AT(c, 0x8ca7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 008ca8  inc edi
    X86_AT(c, 0x8ca8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 008ca9  dec ebx
    X86_AT(c, 0x8ca9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008caa  jne 0x8c9c
    X86_AT(c, 0x8caau);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8c9cu); goto L_8c9c; }
L_8cac:
    X86_TICK(c, 25);
    // 008cac  lodsb al, byte ptr [esi]
    X86_AT(c, 0x8cacu);
    x86_string(c, 3, 1, 0, 4, 3);
    // 008cad  pop edx
    X86_AT(c, 0x8cadu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008cae  and dl, 0xf8
    X86_AT(c, 0x8caeu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008cb1  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8cb1u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008cb6  jb 0x8cdc
    X86_AT(c, 0x8cb6u);
    if (x86_cc(c, 2)) { goto L_8cdc; }
    X86_TICK(c, 4);
    // 008cb8  mov ah, byte ptr [esi]
    X86_AT(c, 0x8cb8u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
L_8cba:
    X86_TICK(c, 6);
    // 008cba  xchg al, ah
    X86_AT(c, 0x8cbau);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008cbc  shl ax, cl
    X86_AT(c, 0x8cbcu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
L_8cbf:
    X86_TICK(c, 26);
    // 008cbf  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8cbfu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008cc7  sub edx, dword ptr [esp]
    X86_AT(c, 0x8cc7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008cca  and edx, 7
    X86_AT(c, 0x8ccau);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008ccd  and ah, byte ptr cs:[edx + 0xc3e4]
    X86_AT(c, 0x8ccdu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & rd8((c.sbase[1] + (uint32_t)(c.r[2] + 0xC3E4u))), 1)); }
    // 008cd4  mov byte ptr es:[edi], ah
    X86_AT(c, 0x8cd4u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 4));
    // 008cd7  inc edi
    X86_AT(c, 0x8cd7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 008cd8  add esp, 4
    X86_AT(c, 0x8cd8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8cdb:
    X86_TICK(c, 10);
    // 008cdb  ret 
    X86_AT(c, 0x8cdbu);
    c.eip = pop32(c); return;
L_8cdc:
    X86_TICK(c, 9);
    // 008cdc  sub edx, edx
    X86_AT(c, 0x8cdcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008cde  jmp 0x8cba
    X86_AT(c, 0x8cdeu);
    X86_POLL(c, 0x8cbau); goto L_8cba;
L_8ce0:
    X86_TICK(c, 11);
    // 008ce0  mov edi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x8ce0u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 008ce7  test bl, bl
    X86_AT(c, 0x8ce7u);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008ce9  jl 0x8d05
    X86_AT(c, 0x8ce9u);
    if (x86_cc(c, 12)) { goto L_8d05; }
    X86_TICK(c, 32);
    // 008ceb  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8cebu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008cf3  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8cf3u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008cfb  shr ecx, 3
    X86_AT(c, 0x8cfbu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 008cfe  inc ecx
    X86_AT(c, 0x8cfeu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008cff  push edi
    X86_AT(c, 0x8cffu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008d00  sub eax, eax
    X86_AT(c, 0x8d00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d02  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8d02u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008d04  pop edi
    X86_AT(c, 0x8d04u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8d05:
    X86_TICK(c, 7);
    // 008d05  test bl, 1
    X86_AT(c, 0x8d05u);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008d08  jne 0x8dfd
    X86_AT(c, 0x8d08u);
    if (x86_cc(c, 5)) { goto L_8dfd; }
    X86_TICK(c, 65);
    // 008d0e  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d0eu);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d16  mov edx, esi
    X86_AT(c, 0x8d16u);
    c.r[2] = c.r[6];
    // 008d18  mov eax, esi
    X86_AT(c, 0x8d18u);
    c.r[0] = c.r[6];
    // 008d1a  movsx ecx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8d1au);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)));
    // 008d22  mov ebx, ecx
    X86_AT(c, 0x8d22u);
    c.r[3] = c.r[1];
    // 008d24  and ecx, 7
    X86_AT(c, 0x8d24u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x7u, 4); }
    // 008d27  sub esi, ecx
    X86_AT(c, 0x8d27u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[1], 0, 4); }
    // 008d29  and esi, 0xfffffff8
    X86_AT(c, 0x8d29u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFF8u, 4); }
    // 008d2c  sar esi, 1
    X86_AT(c, 0x8d2cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 008d2e  sub eax, ebx
    X86_AT(c, 0x8d2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d30  and eax, 0xfff8
    X86_AT(c, 0x8d30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFF8u, 4); }
    // 008d35  shr eax, 1
    X86_AT(c, 0x8d35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 008d37  add edi, eax
    X86_AT(c, 0x8d37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 29);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8dfd:
    X86_TICK(c, 10);
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
L_8e04:
    X86_TICK(c, 25);
    // 008e04  mov edi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x8e04u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 008e0b  mov eax, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8e0bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008e12  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8e12u);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008e1a  mov edx, esi
    X86_AT(c, 0x8e1au);
    c.r[2] = c.r[6];
    // 008e1c  add esi, eax
    X86_AT(c, 0x8e1cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 008e1e  test bl, bl
    X86_AT(c, 0x8e1eu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008e20  jl 0x8e44
    X86_AT(c, 0x8e20u);
    if (x86_cc(c, 12)) { goto L_8e44; }
    X86_TICK(c, 26);
    // 008e22  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8e22u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008e2a  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8e2au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008e32  inc ecx
    X86_AT(c, 0x8e32u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008e33  push edi
    X86_AT(c, 0x8e33u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008e34  sub eax, eax
    X86_AT(c, 0x8e34u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008e36  shr ecx, 1
    X86_AT(c, 0x8e36u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 008e38  jae 0x8e3b
    X86_AT(c, 0x8e38u);
    if (x86_cc(c, 3)) { goto L_8e3b; }
    X86_TICK(c, 7);
    // 008e3a  stosb byte ptr es:[edi], al
    X86_AT(c, 0x8e3au);
    x86_string(c, 2, 1, 0, 4, 3);
L_8e3b:
    X86_TICK(c, 8);
    // 008e3b  shr ecx, 1
    X86_AT(c, 0x8e3bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 008e3d  jae 0x8e41
    X86_AT(c, 0x8e3du);
    if (x86_cc(c, 3)) { goto L_8e41; }
    X86_TICK(c, 7);
    // 008e3f  stosw word ptr es:[edi], ax
    X86_AT(c, 0x8e3fu);
    x86_string(c, 2, 2, 0, 4, 3);
L_8e41:
    X86_TICK(c, 11);
    // 008e41  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8e41u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008e43  pop edi
    X86_AT(c, 0x8e43u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8e44:
    X86_TICK(c, 7);
    // 008e44  test bl, 1
    X86_AT(c, 0x8e44u);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008e47  jne 0x8e6c
    X86_AT(c, 0x8e47u);
    if (x86_cc(c, 5)) { goto L_8e6c; }
    X86_TICK(c, 41);
    // 008e49  movzx ecx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8e49u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008e51  sub ecx, edx
    X86_AT(c, 0x8e51u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e53  inc ecx
    X86_AT(c, 0x8e53u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008e54  sub dx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8e54u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008e5c  add edi, edx
    X86_AT(c, 0x8e5cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 008e5e  mov eax, ecx
    X86_AT(c, 0x8e5eu);
    c.r[0] = c.r[1];
    // 008e60  shr ecx, 2
    X86_AT(c, 0x8e60u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 008e63  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x8e63u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 008e65  mov ecx, eax
    X86_AT(c, 0x8e65u);
    c.r[1] = c.r[0];
    // 008e67  and ecx, 3
    X86_AT(c, 0x8e67u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 008e6a  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x8e6au);
    x86_string(c, 0, 1, 243, 4, 3);
L_8e6c:
    X86_TICK(c, 10);
    // 008e6c  ret 
    X86_AT(c, 0x8e6cu);
    c.eip = pop32(c); return;
L_8e70:
    X86_TICK(c, 25);
    // 008e70  mov edi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x8e70u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 008e77  mov eax, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8e77u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008e7e  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8e7eu);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008e86  mov edx, esi
    X86_AT(c, 0x8e86u);
    c.r[2] = c.r[6];
    // 008e88  lea esi, [eax + esi*2]
    X86_AT(c, 0x8e88u);
    c.r[6] = (uint32_t)(c.r[0] + c.r[6] * 2);
    // 008e8b  test bl, bl
    X86_AT(c, 0x8e8bu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008e8d  jl 0x8eac
    X86_AT(c, 0x8e8du);
    if (x86_cc(c, 12)) { goto L_8eac; }
    X86_TICK(c, 26);
    // 008e8f  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8e8fu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008e97  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8e97u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008e9f  inc ecx
    X86_AT(c, 0x8e9fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008ea0  push edi
    X86_AT(c, 0x8ea0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008ea1  sub eax, eax
    X86_AT(c, 0x8ea1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008ea3  shr ecx, 1
    X86_AT(c, 0x8ea3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 008ea5  jae 0x8ea9
    X86_AT(c, 0x8ea5u);
    if (x86_cc(c, 3)) { goto L_8ea9; }
    X86_TICK(c, 7);
    // 008ea7  stosw word ptr es:[edi], ax
    X86_AT(c, 0x8ea7u);
    x86_string(c, 2, 2, 0, 4, 3);
L_8ea9:
    X86_TICK(c, 11);
    // 008ea9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8ea9u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008eab  pop edi
    X86_AT(c, 0x8eabu);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8eac:
    X86_TICK(c, 7);
    // 008eac  test bl, 1
    X86_AT(c, 0x8eacu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008eaf  jne 0x8ecf
    X86_AT(c, 0x8eafu);
    if (x86_cc(c, 5)) { goto L_8ecf; }
    X86_TICK(c, 26);
    // 008eb1  movzx ecx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8eb1u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008eb9  sub ecx, edx
    X86_AT(c, 0x8eb9u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008ebb  inc ecx
    X86_AT(c, 0x8ebbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008ebc  sub dx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8ebcu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008ec4  lea edi, [edi + edx*2]
    X86_AT(c, 0x8ec4u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[2] * 2);
    // 008ec7  shr ecx, 1
    X86_AT(c, 0x8ec7u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 008ec9  jae 0x8ecd
    X86_AT(c, 0x8ec9u);
    if (x86_cc(c, 3)) { goto L_8ecd; }
    X86_TICK(c, 7);
    // 008ecb  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x8ecbu);
    x86_string(c, 0, 2, 0, 4, 3);
L_8ecd:
    X86_TICK(c, 7);
    // 008ecd  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x8ecdu);
    x86_string(c, 0, 4, 243, 4, 3);
L_8ecf:
    X86_TICK(c, 10);
    // 008ecf  ret 
    X86_AT(c, 0x8ecfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b35u, "ran off the end of a function");
}
void f_00008b39(X86Cpu& c) {
    X86_TICK(c, 7);
    // 008b39  jmp dword ptr cs:[ecx*4 + 0x8b44]
    X86_AT(c, 0x8b39u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8B44u)));
      switch (t) {
      case 0x8bb4u: goto L_8bb4;
      case 0x8ce0u: goto L_8ce0;
      case 0x8e04u: goto L_8e04;
      case 0x8e70u: goto L_8e70;
      default: x86_jump(c, t); return; } }
L_8bb4:
    X86_TICK(c, 11);
    // 008bb4  mov edi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x8bb4u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 008bbb  test bl, bl
    X86_AT(c, 0x8bbbu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008bbd  jl 0x8be5
    X86_AT(c, 0x8bbdu);
    if (x86_cc(c, 12)) { goto L_8be5; }
    X86_TICK(c, 48);
    // 008bbf  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8bbfu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008bc7  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8bc7u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008bcf  shr ecx, 3
    X86_AT(c, 0x8bcfu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 008bd2  inc ecx
    X86_AT(c, 0x8bd2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008bd3  push edi
    X86_AT(c, 0x8bd3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008bd4  mov edx, ecx
    X86_AT(c, 0x8bd4u);
    c.r[2] = c.r[1];
    // 008bd6  sub eax, eax
    X86_AT(c, 0x8bd6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008bd8  shr ecx, 2
    X86_AT(c, 0x8bd8u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 008bdb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8bdbu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008bdd  mov ecx, edx
    X86_AT(c, 0x8bddu);
    c.r[1] = c.r[2];
    // 008bdf  and ecx, 3
    X86_AT(c, 0x8bdfu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 008be2  stosb byte ptr es:[edi], al
    X86_AT(c, 0x8be2u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 008be4  pop edi
    X86_AT(c, 0x8be4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8be5:
    X86_TICK(c, 7);
    // 008be5  test bl, 1
    X86_AT(c, 0x8be5u);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008be8  jne 0x8cdb
    X86_AT(c, 0x8be8u);
    if (x86_cc(c, 5)) { goto L_8cdb; }
    X86_TICK(c, 58);
    // 008bee  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8beeu);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008bf6  mov edx, esi
    X86_AT(c, 0x8bf6u);
    c.r[2] = c.r[6];
    // 008bf8  mov eax, esi
    X86_AT(c, 0x8bf8u);
    c.r[0] = c.r[6];
    // 008bfa  movsx ecx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8bfau);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)));
    // 008c02  mov ebx, ecx
    X86_AT(c, 0x8c02u);
    c.r[3] = c.r[1];
    // 008c04  and ecx, 7
    X86_AT(c, 0x8c04u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x7u, 4); }
    // 008c07  sub esi, ecx
    X86_AT(c, 0x8c07u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[1], 0, 4); }
    // 008c09  sar esi, 3
    X86_AT(c, 0x8c09u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 008c0c  sub eax, ebx
    X86_AT(c, 0x8c0cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008c0e  shr eax, 3
    X86_AT(c, 0x8c0eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 008c11  add edi, eax
    X86_AT(c, 0x8c11u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008c13  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8c13u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008c1b  sub eax, edx
    X86_AT(c, 0x8c1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008c1d  sub edx, ebx
    X86_AT(c, 0x8c1du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008c1f  and edx, 7
    X86_AT(c, 0x8c1fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008c22  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8c22u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008c26  shr ebx, 3
    X86_AT(c, 0x8c26u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008c29  push ecx
    X86_AT(c, 0x8c29u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008c2a  test esi, esi
    X86_AT(c, 0x8c2au);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008c2c  jge 0x8c3c
    X86_AT(c, 0x8c2cu);
    if (x86_cc(c, 13)) { goto L_8c3c; }
    X86_TICK(c, 13);
    // 008c2e  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8c2eu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008c35  sub al, al
    X86_AT(c, 0x8c35u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 008c37  jmp 0x8c57
    X86_AT(c, 0x8c37u);
    goto L_8c57;
L_8c3c:
    X86_TICK(c, 31);
    // 008c3c  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8c3cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008c43  lodsb al, byte ptr [esi]
    X86_AT(c, 0x8c43u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 008c44  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8c44u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008c4c  add dx, 8
    X86_AT(c, 0x8c4cu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008c50  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8c50u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008c55  jb 0x8c59
    X86_AT(c, 0x8c55u);
    if (x86_cc(c, 2)) { goto L_8c59; }
L_8c57:
    X86_TICK(c, 4);
    // 008c57  mov ah, byte ptr [esi]
    X86_AT(c, 0x8c57u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
L_8c59:
    X86_TICK(c, 45);
    // 008c59  xchg al, ah
    X86_AT(c, 0x8c59u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008c5b  shl ax, cl
    X86_AT(c, 0x8c5bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 008c5e  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8c5eu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008c66  sub edx, dword ptr [esp]
    X86_AT(c, 0x8c66u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008c69  and edx, 7
    X86_AT(c, 0x8c69u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008c6c  mov dl, byte ptr cs:[edx + 0xc3dc]
    X86_AT(c, 0x8c6cu);
    s8(c, 2, rd8((c.sbase[1] + (uint32_t)(c.r[2] + 0xC3DCu))));
    // 008c73  not dl
    X86_AT(c, 0x8c73u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 008c75  mov al, byte ptr es:[edi]
    X86_AT(c, 0x8c75u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 008c78  and al, dl
    X86_AT(c, 0x8c78u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 008c7a  not dl
    X86_AT(c, 0x8c7au);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 008c7c  and ah, dl
    X86_AT(c, 0x8c7cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & g8(c, 2), 1)); }
    // 008c7e  or ah, al
    X86_AT(c, 0x8c7eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | g8(c, 0), 1)); }
    // 008c80  cmp ebx, 1
    X86_AT(c, 0x8c80u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008c83  je 0x8cbf
    X86_AT(c, 0x8c83u);
    if (x86_cc(c, 4)) { goto L_8cbf; }
    X86_TICK(c, 23);
    // 008c85  mov byte ptr es:[edi], ah
    X86_AT(c, 0x8c85u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 4));
    // 008c88  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8c88u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008c90  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8c90u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008c93  push edx
    X86_AT(c, 0x8c93u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008c94  inc edi
    X86_AT(c, 0x8c94u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 008c95  dec ebx
    X86_AT(c, 0x8c95u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008c96  cmp ebx, 1
    X86_AT(c, 0x8c96u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008c99  je 0x8cac
    X86_AT(c, 0x8c99u);
    if (x86_cc(c, 4)) { goto L_8cac; }
    X86_TICK(c, 2);
    // 008c9b  dec ebx
    X86_AT(c, 0x8c9bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_8c9c:
    X86_TICK(c, 23);
    // 008c9c  mov ax, word ptr [esi]
    X86_AT(c, 0x8c9cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 008c9f  xchg al, ah
    X86_AT(c, 0x8c9fu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ca1  shl ax, cl
    X86_AT(c, 0x8ca1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 008ca4  mov byte ptr es:[edi], ah
    X86_AT(c, 0x8ca4u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 4));
    // 008ca7  inc esi
    X86_AT(c, 0x8ca7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 008ca8  inc edi
    X86_AT(c, 0x8ca8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 008ca9  dec ebx
    X86_AT(c, 0x8ca9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008caa  jne 0x8c9c
    X86_AT(c, 0x8caau);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8c9cu); goto L_8c9c; }
L_8cac:
    X86_TICK(c, 25);
    // 008cac  lodsb al, byte ptr [esi]
    X86_AT(c, 0x8cacu);
    x86_string(c, 3, 1, 0, 4, 3);
    // 008cad  pop edx
    X86_AT(c, 0x8cadu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008cae  and dl, 0xf8
    X86_AT(c, 0x8caeu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008cb1  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8cb1u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008cb6  jb 0x8cdc
    X86_AT(c, 0x8cb6u);
    if (x86_cc(c, 2)) { goto L_8cdc; }
    X86_TICK(c, 4);
    // 008cb8  mov ah, byte ptr [esi]
    X86_AT(c, 0x8cb8u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
L_8cba:
    X86_TICK(c, 6);
    // 008cba  xchg al, ah
    X86_AT(c, 0x8cbau);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008cbc  shl ax, cl
    X86_AT(c, 0x8cbcu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
L_8cbf:
    X86_TICK(c, 26);
    // 008cbf  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8cbfu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008cc7  sub edx, dword ptr [esp]
    X86_AT(c, 0x8cc7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008cca  and edx, 7
    X86_AT(c, 0x8ccau);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008ccd  and ah, byte ptr cs:[edx + 0xc3e4]
    X86_AT(c, 0x8ccdu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & rd8((c.sbase[1] + (uint32_t)(c.r[2] + 0xC3E4u))), 1)); }
    // 008cd4  mov byte ptr es:[edi], ah
    X86_AT(c, 0x8cd4u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 4));
    // 008cd7  inc edi
    X86_AT(c, 0x8cd7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 008cd8  add esp, 4
    X86_AT(c, 0x8cd8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8cdb:
    X86_TICK(c, 10);
    // 008cdb  ret 
    X86_AT(c, 0x8cdbu);
    c.eip = pop32(c); return;
L_8cdc:
    X86_TICK(c, 9);
    // 008cdc  sub edx, edx
    X86_AT(c, 0x8cdcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008cde  jmp 0x8cba
    X86_AT(c, 0x8cdeu);
    X86_POLL(c, 0x8cbau); goto L_8cba;
L_8ce0:
    X86_TICK(c, 11);
    // 008ce0  mov edi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x8ce0u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 008ce7  test bl, bl
    X86_AT(c, 0x8ce7u);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008ce9  jl 0x8d05
    X86_AT(c, 0x8ce9u);
    if (x86_cc(c, 12)) { goto L_8d05; }
    X86_TICK(c, 32);
    // 008ceb  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8cebu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008cf3  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8cf3u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008cfb  shr ecx, 3
    X86_AT(c, 0x8cfbu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 008cfe  inc ecx
    X86_AT(c, 0x8cfeu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008cff  push edi
    X86_AT(c, 0x8cffu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008d00  sub eax, eax
    X86_AT(c, 0x8d00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d02  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8d02u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008d04  pop edi
    X86_AT(c, 0x8d04u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8d05:
    X86_TICK(c, 7);
    // 008d05  test bl, 1
    X86_AT(c, 0x8d05u);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008d08  jne 0x8dfd
    X86_AT(c, 0x8d08u);
    if (x86_cc(c, 5)) { goto L_8dfd; }
    X86_TICK(c, 65);
    // 008d0e  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d0eu);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d16  mov edx, esi
    X86_AT(c, 0x8d16u);
    c.r[2] = c.r[6];
    // 008d18  mov eax, esi
    X86_AT(c, 0x8d18u);
    c.r[0] = c.r[6];
    // 008d1a  movsx ecx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8d1au);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)));
    // 008d22  mov ebx, ecx
    X86_AT(c, 0x8d22u);
    c.r[3] = c.r[1];
    // 008d24  and ecx, 7
    X86_AT(c, 0x8d24u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x7u, 4); }
    // 008d27  sub esi, ecx
    X86_AT(c, 0x8d27u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[1], 0, 4); }
    // 008d29  and esi, 0xfffffff8
    X86_AT(c, 0x8d29u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFF8u, 4); }
    // 008d2c  sar esi, 1
    X86_AT(c, 0x8d2cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 008d2e  sub eax, ebx
    X86_AT(c, 0x8d2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d30  and eax, 0xfff8
    X86_AT(c, 0x8d30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFF8u, 4); }
    // 008d35  shr eax, 1
    X86_AT(c, 0x8d35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 008d37  add edi, eax
    X86_AT(c, 0x8d37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 29);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8dfd:
    X86_TICK(c, 10);
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
L_8e04:
    X86_TICK(c, 25);
    // 008e04  mov edi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x8e04u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 008e0b  mov eax, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8e0bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008e12  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8e12u);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008e1a  mov edx, esi
    X86_AT(c, 0x8e1au);
    c.r[2] = c.r[6];
    // 008e1c  add esi, eax
    X86_AT(c, 0x8e1cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 008e1e  test bl, bl
    X86_AT(c, 0x8e1eu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008e20  jl 0x8e44
    X86_AT(c, 0x8e20u);
    if (x86_cc(c, 12)) { goto L_8e44; }
    X86_TICK(c, 26);
    // 008e22  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8e22u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008e2a  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8e2au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008e32  inc ecx
    X86_AT(c, 0x8e32u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008e33  push edi
    X86_AT(c, 0x8e33u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008e34  sub eax, eax
    X86_AT(c, 0x8e34u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008e36  shr ecx, 1
    X86_AT(c, 0x8e36u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 008e38  jae 0x8e3b
    X86_AT(c, 0x8e38u);
    if (x86_cc(c, 3)) { goto L_8e3b; }
    X86_TICK(c, 7);
    // 008e3a  stosb byte ptr es:[edi], al
    X86_AT(c, 0x8e3au);
    x86_string(c, 2, 1, 0, 4, 3);
L_8e3b:
    X86_TICK(c, 8);
    // 008e3b  shr ecx, 1
    X86_AT(c, 0x8e3bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 008e3d  jae 0x8e41
    X86_AT(c, 0x8e3du);
    if (x86_cc(c, 3)) { goto L_8e41; }
    X86_TICK(c, 7);
    // 008e3f  stosw word ptr es:[edi], ax
    X86_AT(c, 0x8e3fu);
    x86_string(c, 2, 2, 0, 4, 3);
L_8e41:
    X86_TICK(c, 11);
    // 008e41  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8e41u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008e43  pop edi
    X86_AT(c, 0x8e43u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8e44:
    X86_TICK(c, 7);
    // 008e44  test bl, 1
    X86_AT(c, 0x8e44u);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008e47  jne 0x8e6c
    X86_AT(c, 0x8e47u);
    if (x86_cc(c, 5)) { goto L_8e6c; }
    X86_TICK(c, 41);
    // 008e49  movzx ecx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8e49u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008e51  sub ecx, edx
    X86_AT(c, 0x8e51u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e53  inc ecx
    X86_AT(c, 0x8e53u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008e54  sub dx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8e54u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008e5c  add edi, edx
    X86_AT(c, 0x8e5cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 008e5e  mov eax, ecx
    X86_AT(c, 0x8e5eu);
    c.r[0] = c.r[1];
    // 008e60  shr ecx, 2
    X86_AT(c, 0x8e60u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 008e63  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x8e63u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 008e65  mov ecx, eax
    X86_AT(c, 0x8e65u);
    c.r[1] = c.r[0];
    // 008e67  and ecx, 3
    X86_AT(c, 0x8e67u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 008e6a  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x8e6au);
    x86_string(c, 0, 1, 243, 4, 3);
L_8e6c:
    X86_TICK(c, 10);
    // 008e6c  ret 
    X86_AT(c, 0x8e6cu);
    c.eip = pop32(c); return;
L_8e70:
    X86_TICK(c, 25);
    // 008e70  mov edi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x8e70u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 008e77  mov eax, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8e77u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008e7e  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8e7eu);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008e86  mov edx, esi
    X86_AT(c, 0x8e86u);
    c.r[2] = c.r[6];
    // 008e88  lea esi, [eax + esi*2]
    X86_AT(c, 0x8e88u);
    c.r[6] = (uint32_t)(c.r[0] + c.r[6] * 2);
    // 008e8b  test bl, bl
    X86_AT(c, 0x8e8bu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008e8d  jl 0x8eac
    X86_AT(c, 0x8e8du);
    if (x86_cc(c, 12)) { goto L_8eac; }
    X86_TICK(c, 26);
    // 008e8f  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8e8fu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008e97  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8e97u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008e9f  inc ecx
    X86_AT(c, 0x8e9fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008ea0  push edi
    X86_AT(c, 0x8ea0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008ea1  sub eax, eax
    X86_AT(c, 0x8ea1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008ea3  shr ecx, 1
    X86_AT(c, 0x8ea3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 008ea5  jae 0x8ea9
    X86_AT(c, 0x8ea5u);
    if (x86_cc(c, 3)) { goto L_8ea9; }
    X86_TICK(c, 7);
    // 008ea7  stosw word ptr es:[edi], ax
    X86_AT(c, 0x8ea7u);
    x86_string(c, 2, 2, 0, 4, 3);
L_8ea9:
    X86_TICK(c, 11);
    // 008ea9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8ea9u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008eab  pop edi
    X86_AT(c, 0x8eabu);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8eac:
    X86_TICK(c, 7);
    // 008eac  test bl, 1
    X86_AT(c, 0x8eacu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008eaf  jne 0x8ecf
    X86_AT(c, 0x8eafu);
    if (x86_cc(c, 5)) { goto L_8ecf; }
    X86_TICK(c, 26);
    // 008eb1  movzx ecx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8eb1u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008eb9  sub ecx, edx
    X86_AT(c, 0x8eb9u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008ebb  inc ecx
    X86_AT(c, 0x8ebbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008ebc  sub dx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8ebcu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008ec4  lea edi, [edi + edx*2]
    X86_AT(c, 0x8ec4u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[2] * 2);
    // 008ec7  shr ecx, 1
    X86_AT(c, 0x8ec7u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 008ec9  jae 0x8ecd
    X86_AT(c, 0x8ec9u);
    if (x86_cc(c, 3)) { goto L_8ecd; }
    X86_TICK(c, 7);
    // 008ecb  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x8ecbu);
    x86_string(c, 0, 2, 0, 4, 3);
L_8ecd:
    X86_TICK(c, 7);
    // 008ecd  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x8ecdu);
    x86_string(c, 0, 4, 243, 4, 3);
L_8ecf:
    X86_TICK(c, 10);
    // 008ecf  ret 
    X86_AT(c, 0x8ecfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b39u, "ran off the end of a function");
}
void f_00008b54(X86Cpu& c) {
    X86_TICK(c, 18);
    // 008b54  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8b54u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008b5b  mov word ptr gs:[ebp + 0x414], ax
    X86_AT(c, 0x8b5bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)), (c.r[0] & 0xFFFFu));
    // 008b63  shr eax, 0x10
    X86_AT(c, 0x8b63u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008b66  mov word ptr gs:[ebp + 0x418], ax
    X86_AT(c, 0x8b66u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)), (c.r[0] & 0xFFFFu));
    // 008b6e  call 0xb930
    X86_AT(c, 0x8b6eu);
    push32(c, 0x8b73u); f_0000b930(c); X86_RET(c, 0x8b73u);
    X86_TICK(c, 20);
    // 008b73  setb bl
    X86_AT(c, 0x8b73u);
    s8(c, 3, x86_cc(c, 2) ? 1u : 0u);
    // 008b76  mov ax, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8b76u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))));
    // 008b7e  cmp word ptr gs:[ebp + 0x28], ax
    X86_AT(c, 0x8b7eu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 008b83  jg 0x8b97
    X86_AT(c, 0x8b83u);
    if (x86_cc(c, 15)) { goto L_8b97; }
    X86_TICK(c, 16);
    // 008b85  mov ax, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8b85u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u))));
    // 008b8d  cmp word ptr gs:[ebp + 0x2c], ax
    X86_AT(c, 0x8b8du);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[0] & 0xFFFFu), 0, 2);
    // 008b92  jl 0x8b97
    X86_AT(c, 0x8b92u);
    if (x86_cc(c, 12)) { goto L_8b97; }
    X86_TICK(c, 2);
    // 008b94  or bl, 0x80
    X86_AT(c, 0x8b94u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x80u, 1)); }
L_8b97:
    X86_TICK(c, 11);
    // 008b97  mov ecx, dword ptr gs:[ebp + 0x14]
    X86_AT(c, 0x8b97u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)));
    // 008b9b  jmp dword ptr cs:[ecx*4 + 0x8ba4]
    X86_AT(c, 0x8b9bu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8BA4u)));
      switch (t) {
      case 0x8bbbu: goto L_8bbb;
      case 0x8ce7u: goto L_8ce7;
      case 0x8e0bu: goto L_8e0b;
      case 0x8e77u: goto L_8e77;
      default: x86_jump(c, t); return; } }
L_8bbb:
    X86_TICK(c, 7);
    // 008bbb  test bl, bl
    X86_AT(c, 0x8bbbu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008bbd  jl 0x8be5
    X86_AT(c, 0x8bbdu);
    if (x86_cc(c, 12)) { goto L_8be5; }
    X86_TICK(c, 48);
    // 008bbf  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8bbfu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008bc7  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8bc7u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008bcf  shr ecx, 3
    X86_AT(c, 0x8bcfu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 008bd2  inc ecx
    X86_AT(c, 0x8bd2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008bd3  push edi
    X86_AT(c, 0x8bd3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008bd4  mov edx, ecx
    X86_AT(c, 0x8bd4u);
    c.r[2] = c.r[1];
    // 008bd6  sub eax, eax
    X86_AT(c, 0x8bd6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008bd8  shr ecx, 2
    X86_AT(c, 0x8bd8u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 008bdb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8bdbu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008bdd  mov ecx, edx
    X86_AT(c, 0x8bddu);
    c.r[1] = c.r[2];
    // 008bdf  and ecx, 3
    X86_AT(c, 0x8bdfu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 008be2  stosb byte ptr es:[edi], al
    X86_AT(c, 0x8be2u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 008be4  pop edi
    X86_AT(c, 0x8be4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8be5:
    X86_TICK(c, 7);
    // 008be5  test bl, 1
    X86_AT(c, 0x8be5u);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008be8  jne 0x8cdb
    X86_AT(c, 0x8be8u);
    if (x86_cc(c, 5)) { goto L_8cdb; }
    X86_TICK(c, 58);
    // 008bee  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8beeu);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008bf6  mov edx, esi
    X86_AT(c, 0x8bf6u);
    c.r[2] = c.r[6];
    // 008bf8  mov eax, esi
    X86_AT(c, 0x8bf8u);
    c.r[0] = c.r[6];
    // 008bfa  movsx ecx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8bfau);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)));
    // 008c02  mov ebx, ecx
    X86_AT(c, 0x8c02u);
    c.r[3] = c.r[1];
    // 008c04  and ecx, 7
    X86_AT(c, 0x8c04u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x7u, 4); }
    // 008c07  sub esi, ecx
    X86_AT(c, 0x8c07u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[1], 0, 4); }
    // 008c09  sar esi, 3
    X86_AT(c, 0x8c09u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 008c0c  sub eax, ebx
    X86_AT(c, 0x8c0cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008c0e  shr eax, 3
    X86_AT(c, 0x8c0eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 008c11  add edi, eax
    X86_AT(c, 0x8c11u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008c13  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8c13u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008c1b  sub eax, edx
    X86_AT(c, 0x8c1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008c1d  sub edx, ebx
    X86_AT(c, 0x8c1du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008c1f  and edx, 7
    X86_AT(c, 0x8c1fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008c22  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8c22u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008c26  shr ebx, 3
    X86_AT(c, 0x8c26u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008c29  push ecx
    X86_AT(c, 0x8c29u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008c2a  test esi, esi
    X86_AT(c, 0x8c2au);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008c2c  jge 0x8c3c
    X86_AT(c, 0x8c2cu);
    if (x86_cc(c, 13)) { goto L_8c3c; }
    X86_TICK(c, 13);
    // 008c2e  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8c2eu);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008c35  sub al, al
    X86_AT(c, 0x8c35u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 008c37  jmp 0x8c57
    X86_AT(c, 0x8c37u);
    goto L_8c57;
L_8c3c:
    X86_TICK(c, 31);
    // 008c3c  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8c3cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008c43  lodsb al, byte ptr [esi]
    X86_AT(c, 0x8c43u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 008c44  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8c44u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008c4c  add dx, 8
    X86_AT(c, 0x8c4cu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008c50  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8c50u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008c55  jb 0x8c59
    X86_AT(c, 0x8c55u);
    if (x86_cc(c, 2)) { goto L_8c59; }
L_8c57:
    X86_TICK(c, 4);
    // 008c57  mov ah, byte ptr [esi]
    X86_AT(c, 0x8c57u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
L_8c59:
    X86_TICK(c, 45);
    // 008c59  xchg al, ah
    X86_AT(c, 0x8c59u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008c5b  shl ax, cl
    X86_AT(c, 0x8c5bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 008c5e  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8c5eu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008c66  sub edx, dword ptr [esp]
    X86_AT(c, 0x8c66u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008c69  and edx, 7
    X86_AT(c, 0x8c69u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008c6c  mov dl, byte ptr cs:[edx + 0xc3dc]
    X86_AT(c, 0x8c6cu);
    s8(c, 2, rd8((c.sbase[1] + (uint32_t)(c.r[2] + 0xC3DCu))));
    // 008c73  not dl
    X86_AT(c, 0x8c73u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 008c75  mov al, byte ptr es:[edi]
    X86_AT(c, 0x8c75u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 008c78  and al, dl
    X86_AT(c, 0x8c78u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 008c7a  not dl
    X86_AT(c, 0x8c7au);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 008c7c  and ah, dl
    X86_AT(c, 0x8c7cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & g8(c, 2), 1)); }
    // 008c7e  or ah, al
    X86_AT(c, 0x8c7eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | g8(c, 0), 1)); }
    // 008c80  cmp ebx, 1
    X86_AT(c, 0x8c80u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008c83  je 0x8cbf
    X86_AT(c, 0x8c83u);
    if (x86_cc(c, 4)) { goto L_8cbf; }
    X86_TICK(c, 23);
    // 008c85  mov byte ptr es:[edi], ah
    X86_AT(c, 0x8c85u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 4));
    // 008c88  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8c88u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008c90  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8c90u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008c93  push edx
    X86_AT(c, 0x8c93u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008c94  inc edi
    X86_AT(c, 0x8c94u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 008c95  dec ebx
    X86_AT(c, 0x8c95u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008c96  cmp ebx, 1
    X86_AT(c, 0x8c96u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008c99  je 0x8cac
    X86_AT(c, 0x8c99u);
    if (x86_cc(c, 4)) { goto L_8cac; }
    X86_TICK(c, 2);
    // 008c9b  dec ebx
    X86_AT(c, 0x8c9bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_8c9c:
    X86_TICK(c, 23);
    // 008c9c  mov ax, word ptr [esi]
    X86_AT(c, 0x8c9cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 008c9f  xchg al, ah
    X86_AT(c, 0x8c9fu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ca1  shl ax, cl
    X86_AT(c, 0x8ca1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 008ca4  mov byte ptr es:[edi], ah
    X86_AT(c, 0x8ca4u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 4));
    // 008ca7  inc esi
    X86_AT(c, 0x8ca7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 008ca8  inc edi
    X86_AT(c, 0x8ca8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 008ca9  dec ebx
    X86_AT(c, 0x8ca9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008caa  jne 0x8c9c
    X86_AT(c, 0x8caau);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8c9cu); goto L_8c9c; }
L_8cac:
    X86_TICK(c, 25);
    // 008cac  lodsb al, byte ptr [esi]
    X86_AT(c, 0x8cacu);
    x86_string(c, 3, 1, 0, 4, 3);
    // 008cad  pop edx
    X86_AT(c, 0x8cadu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008cae  and dl, 0xf8
    X86_AT(c, 0x8caeu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008cb1  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8cb1u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008cb6  jb 0x8cdc
    X86_AT(c, 0x8cb6u);
    if (x86_cc(c, 2)) { goto L_8cdc; }
    X86_TICK(c, 4);
    // 008cb8  mov ah, byte ptr [esi]
    X86_AT(c, 0x8cb8u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
L_8cba:
    X86_TICK(c, 6);
    // 008cba  xchg al, ah
    X86_AT(c, 0x8cbau);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008cbc  shl ax, cl
    X86_AT(c, 0x8cbcu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
L_8cbf:
    X86_TICK(c, 26);
    // 008cbf  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8cbfu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008cc7  sub edx, dword ptr [esp]
    X86_AT(c, 0x8cc7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008cca  and edx, 7
    X86_AT(c, 0x8ccau);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008ccd  and ah, byte ptr cs:[edx + 0xc3e4]
    X86_AT(c, 0x8ccdu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & rd8((c.sbase[1] + (uint32_t)(c.r[2] + 0xC3E4u))), 1)); }
    // 008cd4  mov byte ptr es:[edi], ah
    X86_AT(c, 0x8cd4u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 4));
    // 008cd7  inc edi
    X86_AT(c, 0x8cd7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 008cd8  add esp, 4
    X86_AT(c, 0x8cd8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8cdb:
    X86_TICK(c, 10);
    // 008cdb  ret 
    X86_AT(c, 0x8cdbu);
    c.eip = pop32(c); return;
L_8cdc:
    X86_TICK(c, 9);
    // 008cdc  sub edx, edx
    X86_AT(c, 0x8cdcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008cde  jmp 0x8cba
    X86_AT(c, 0x8cdeu);
    X86_POLL(c, 0x8cbau); goto L_8cba;
L_8ce7:
    X86_TICK(c, 7);
    // 008ce7  test bl, bl
    X86_AT(c, 0x8ce7u);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008ce9  jl 0x8d05
    X86_AT(c, 0x8ce9u);
    if (x86_cc(c, 12)) { goto L_8d05; }
    X86_TICK(c, 32);
    // 008ceb  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8cebu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008cf3  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8cf3u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008cfb  shr ecx, 3
    X86_AT(c, 0x8cfbu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 008cfe  inc ecx
    X86_AT(c, 0x8cfeu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008cff  push edi
    X86_AT(c, 0x8cffu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008d00  sub eax, eax
    X86_AT(c, 0x8d00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d02  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8d02u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008d04  pop edi
    X86_AT(c, 0x8d04u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8d05:
    X86_TICK(c, 7);
    // 008d05  test bl, 1
    X86_AT(c, 0x8d05u);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008d08  jne 0x8dfd
    X86_AT(c, 0x8d08u);
    if (x86_cc(c, 5)) { goto L_8dfd; }
    X86_TICK(c, 65);
    // 008d0e  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d0eu);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d16  mov edx, esi
    X86_AT(c, 0x8d16u);
    c.r[2] = c.r[6];
    // 008d18  mov eax, esi
    X86_AT(c, 0x8d18u);
    c.r[0] = c.r[6];
    // 008d1a  movsx ecx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8d1au);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)));
    // 008d22  mov ebx, ecx
    X86_AT(c, 0x8d22u);
    c.r[3] = c.r[1];
    // 008d24  and ecx, 7
    X86_AT(c, 0x8d24u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x7u, 4); }
    // 008d27  sub esi, ecx
    X86_AT(c, 0x8d27u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[1], 0, 4); }
    // 008d29  and esi, 0xfffffff8
    X86_AT(c, 0x8d29u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFF8u, 4); }
    // 008d2c  sar esi, 1
    X86_AT(c, 0x8d2cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 008d2e  sub eax, ebx
    X86_AT(c, 0x8d2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d30  and eax, 0xfff8
    X86_AT(c, 0x8d30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFF8u, 4); }
    // 008d35  shr eax, 1
    X86_AT(c, 0x8d35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 008d37  add edi, eax
    X86_AT(c, 0x8d37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 29);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8dfd:
    X86_TICK(c, 10);
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
L_8e0b:
    X86_TICK(c, 21);
    // 008e0b  mov eax, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8e0bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008e12  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8e12u);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008e1a  mov edx, esi
    X86_AT(c, 0x8e1au);
    c.r[2] = c.r[6];
    // 008e1c  add esi, eax
    X86_AT(c, 0x8e1cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 008e1e  test bl, bl
    X86_AT(c, 0x8e1eu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008e20  jl 0x8e44
    X86_AT(c, 0x8e20u);
    if (x86_cc(c, 12)) { goto L_8e44; }
    X86_TICK(c, 26);
    // 008e22  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8e22u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008e2a  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8e2au);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008e32  inc ecx
    X86_AT(c, 0x8e32u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008e33  push edi
    X86_AT(c, 0x8e33u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008e34  sub eax, eax
    X86_AT(c, 0x8e34u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008e36  shr ecx, 1
    X86_AT(c, 0x8e36u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 008e38  jae 0x8e3b
    X86_AT(c, 0x8e38u);
    if (x86_cc(c, 3)) { goto L_8e3b; }
    X86_TICK(c, 7);
    // 008e3a  stosb byte ptr es:[edi], al
    X86_AT(c, 0x8e3au);
    x86_string(c, 2, 1, 0, 4, 3);
L_8e3b:
    X86_TICK(c, 8);
    // 008e3b  shr ecx, 1
    X86_AT(c, 0x8e3bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 008e3d  jae 0x8e41
    X86_AT(c, 0x8e3du);
    if (x86_cc(c, 3)) { goto L_8e41; }
    X86_TICK(c, 7);
    // 008e3f  stosw word ptr es:[edi], ax
    X86_AT(c, 0x8e3fu);
    x86_string(c, 2, 2, 0, 4, 3);
L_8e41:
    X86_TICK(c, 11);
    // 008e41  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8e41u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008e43  pop edi
    X86_AT(c, 0x8e43u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8e44:
    X86_TICK(c, 7);
    // 008e44  test bl, 1
    X86_AT(c, 0x8e44u);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008e47  jne 0x8e6c
    X86_AT(c, 0x8e47u);
    if (x86_cc(c, 5)) { goto L_8e6c; }
    X86_TICK(c, 41);
    // 008e49  movzx ecx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8e49u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008e51  sub ecx, edx
    X86_AT(c, 0x8e51u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e53  inc ecx
    X86_AT(c, 0x8e53u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008e54  sub dx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8e54u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008e5c  add edi, edx
    X86_AT(c, 0x8e5cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 008e5e  mov eax, ecx
    X86_AT(c, 0x8e5eu);
    c.r[0] = c.r[1];
    // 008e60  shr ecx, 2
    X86_AT(c, 0x8e60u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 008e63  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x8e63u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 008e65  mov ecx, eax
    X86_AT(c, 0x8e65u);
    c.r[1] = c.r[0];
    // 008e67  and ecx, 3
    X86_AT(c, 0x8e67u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 008e6a  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x8e6au);
    x86_string(c, 0, 1, 243, 4, 3);
L_8e6c:
    X86_TICK(c, 10);
    // 008e6c  ret 
    X86_AT(c, 0x8e6cu);
    c.eip = pop32(c); return;
L_8e77:
    X86_TICK(c, 21);
    // 008e77  mov eax, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8e77u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008e7e  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8e7eu);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008e86  mov edx, esi
    X86_AT(c, 0x8e86u);
    c.r[2] = c.r[6];
    // 008e88  lea esi, [eax + esi*2]
    X86_AT(c, 0x8e88u);
    c.r[6] = (uint32_t)(c.r[0] + c.r[6] * 2);
    // 008e8b  test bl, bl
    X86_AT(c, 0x8e8bu);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008e8d  jl 0x8eac
    X86_AT(c, 0x8e8du);
    if (x86_cc(c, 12)) { goto L_8eac; }
    X86_TICK(c, 26);
    // 008e8f  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8e8fu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008e97  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8e97u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008e9f  inc ecx
    X86_AT(c, 0x8e9fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008ea0  push edi
    X86_AT(c, 0x8ea0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008ea1  sub eax, eax
    X86_AT(c, 0x8ea1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008ea3  shr ecx, 1
    X86_AT(c, 0x8ea3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 008ea5  jae 0x8ea9
    X86_AT(c, 0x8ea5u);
    if (x86_cc(c, 3)) { goto L_8ea9; }
    X86_TICK(c, 7);
    // 008ea7  stosw word ptr es:[edi], ax
    X86_AT(c, 0x8ea7u);
    x86_string(c, 2, 2, 0, 4, 3);
L_8ea9:
    X86_TICK(c, 11);
    // 008ea9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8ea9u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008eab  pop edi
    X86_AT(c, 0x8eabu);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8eac:
    X86_TICK(c, 7);
    // 008eac  test bl, 1
    X86_AT(c, 0x8eacu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008eaf  jne 0x8ecf
    X86_AT(c, 0x8eafu);
    if (x86_cc(c, 5)) { goto L_8ecf; }
    X86_TICK(c, 26);
    // 008eb1  movzx ecx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8eb1u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008eb9  sub ecx, edx
    X86_AT(c, 0x8eb9u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008ebb  inc ecx
    X86_AT(c, 0x8ebbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008ebc  sub dx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8ebcu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008ec4  lea edi, [edi + edx*2]
    X86_AT(c, 0x8ec4u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[2] * 2);
    // 008ec7  shr ecx, 1
    X86_AT(c, 0x8ec7u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 008ec9  jae 0x8ecd
    X86_AT(c, 0x8ec9u);
    if (x86_cc(c, 3)) { goto L_8ecd; }
    X86_TICK(c, 7);
    // 008ecb  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x8ecbu);
    x86_string(c, 0, 2, 0, 4, 3);
L_8ecd:
    X86_TICK(c, 7);
    // 008ecd  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x8ecdu);
    x86_string(c, 0, 4, 243, 4, 3);
L_8ecf:
    X86_TICK(c, 10);
    // 008ecf  ret 
    X86_AT(c, 0x8ecfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b54u, "ran off the end of a function");
}
void f_00008ce0(X86Cpu& c) {
    X86_TICK(c, 11);
    // 008ce0  mov edi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x8ce0u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 008ce7  test bl, bl
    X86_AT(c, 0x8ce7u);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008ce9  jl 0x8d05
    X86_AT(c, 0x8ce9u);
    if (x86_cc(c, 12)) { goto L_8d05; }
    X86_TICK(c, 32);
    // 008ceb  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8cebu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008cf3  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8cf3u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008cfb  shr ecx, 3
    X86_AT(c, 0x8cfbu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 008cfe  inc ecx
    X86_AT(c, 0x8cfeu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008cff  push edi
    X86_AT(c, 0x8cffu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008d00  sub eax, eax
    X86_AT(c, 0x8d00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d02  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8d02u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008d04  pop edi
    X86_AT(c, 0x8d04u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8d05:
    X86_TICK(c, 7);
    // 008d05  test bl, 1
    X86_AT(c, 0x8d05u);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008d08  jne 0x8dfd
    X86_AT(c, 0x8d08u);
    if (x86_cc(c, 5)) { goto L_8dfd; }
    X86_TICK(c, 65);
    // 008d0e  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d0eu);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d16  mov edx, esi
    X86_AT(c, 0x8d16u);
    c.r[2] = c.r[6];
    // 008d18  mov eax, esi
    X86_AT(c, 0x8d18u);
    c.r[0] = c.r[6];
    // 008d1a  movsx ecx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8d1au);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)));
    // 008d22  mov ebx, ecx
    X86_AT(c, 0x8d22u);
    c.r[3] = c.r[1];
    // 008d24  and ecx, 7
    X86_AT(c, 0x8d24u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x7u, 4); }
    // 008d27  sub esi, ecx
    X86_AT(c, 0x8d27u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[1], 0, 4); }
    // 008d29  and esi, 0xfffffff8
    X86_AT(c, 0x8d29u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFF8u, 4); }
    // 008d2c  sar esi, 1
    X86_AT(c, 0x8d2cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 008d2e  sub eax, ebx
    X86_AT(c, 0x8d2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d30  and eax, 0xfff8
    X86_AT(c, 0x8d30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFF8u, 4); }
    // 008d35  shr eax, 1
    X86_AT(c, 0x8d35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 008d37  add edi, eax
    X86_AT(c, 0x8d37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 29);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8dfd:
    X86_TICK(c, 10);
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8ce0u, "ran off the end of a function");
}
void f_00008ce7(X86Cpu& c) {
    X86_TICK(c, 7);
    // 008ce7  test bl, bl
    X86_AT(c, 0x8ce7u);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 008ce9  jl 0x8d05
    X86_AT(c, 0x8ce9u);
    if (x86_cc(c, 12)) { goto L_8d05; }
    X86_TICK(c, 32);
    // 008ceb  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8cebu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008cf3  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8cf3u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008cfb  shr ecx, 3
    X86_AT(c, 0x8cfbu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 008cfe  inc ecx
    X86_AT(c, 0x8cfeu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008cff  push edi
    X86_AT(c, 0x8cffu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008d00  sub eax, eax
    X86_AT(c, 0x8d00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d02  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8d02u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008d04  pop edi
    X86_AT(c, 0x8d04u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8d05:
    X86_TICK(c, 7);
    // 008d05  test bl, 1
    X86_AT(c, 0x8d05u);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008d08  jne 0x8dfd
    X86_AT(c, 0x8d08u);
    if (x86_cc(c, 5)) { goto L_8dfd; }
    X86_TICK(c, 65);
    // 008d0e  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d0eu);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d16  mov edx, esi
    X86_AT(c, 0x8d16u);
    c.r[2] = c.r[6];
    // 008d18  mov eax, esi
    X86_AT(c, 0x8d18u);
    c.r[0] = c.r[6];
    // 008d1a  movsx ecx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8d1au);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)));
    // 008d22  mov ebx, ecx
    X86_AT(c, 0x8d22u);
    c.r[3] = c.r[1];
    // 008d24  and ecx, 7
    X86_AT(c, 0x8d24u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x7u, 4); }
    // 008d27  sub esi, ecx
    X86_AT(c, 0x8d27u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[1], 0, 4); }
    // 008d29  and esi, 0xfffffff8
    X86_AT(c, 0x8d29u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFF8u, 4); }
    // 008d2c  sar esi, 1
    X86_AT(c, 0x8d2cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 008d2e  sub eax, ebx
    X86_AT(c, 0x8d2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d30  and eax, 0xfff8
    X86_AT(c, 0x8d30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFF8u, 4); }
    // 008d35  shr eax, 1
    X86_AT(c, 0x8d35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 008d37  add edi, eax
    X86_AT(c, 0x8d37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 29);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8dfd:
    X86_TICK(c, 10);
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8ce7u, "ran off the end of a function");
}
void f_00008ce9(X86Cpu& c) {
    X86_TICK(c, 5);
    // 008ce9  jl 0x8d05
    X86_AT(c, 0x8ce9u);
    if (x86_cc(c, 12)) { goto L_8d05; }
    X86_TICK(c, 32);
    // 008ceb  movzx ecx, word ptr gs:[ebp + 0x418]
    X86_AT(c, 0x8cebu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x418u)));
    // 008cf3  sub cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8cf3u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 008cfb  shr ecx, 3
    X86_AT(c, 0x8cfbu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[1] = r; }
    // 008cfe  inc ecx
    X86_AT(c, 0x8cfeu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 008cff  push edi
    X86_AT(c, 0x8cffu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008d00  sub eax, eax
    X86_AT(c, 0x8d00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d02  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8d02u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 008d04  pop edi
    X86_AT(c, 0x8d04u);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_8d05:
    X86_TICK(c, 7);
    // 008d05  test bl, 1
    X86_AT(c, 0x8d05u);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008d08  jne 0x8dfd
    X86_AT(c, 0x8d08u);
    if (x86_cc(c, 5)) { goto L_8dfd; }
    X86_TICK(c, 65);
    // 008d0e  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d0eu);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d16  mov edx, esi
    X86_AT(c, 0x8d16u);
    c.r[2] = c.r[6];
    // 008d18  mov eax, esi
    X86_AT(c, 0x8d18u);
    c.r[0] = c.r[6];
    // 008d1a  movsx ecx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8d1au);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)));
    // 008d22  mov ebx, ecx
    X86_AT(c, 0x8d22u);
    c.r[3] = c.r[1];
    // 008d24  and ecx, 7
    X86_AT(c, 0x8d24u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x7u, 4); }
    // 008d27  sub esi, ecx
    X86_AT(c, 0x8d27u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[1], 0, 4); }
    // 008d29  and esi, 0xfffffff8
    X86_AT(c, 0x8d29u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFF8u, 4); }
    // 008d2c  sar esi, 1
    X86_AT(c, 0x8d2cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 008d2e  sub eax, ebx
    X86_AT(c, 0x8d2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d30  and eax, 0xfff8
    X86_AT(c, 0x8d30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFF8u, 4); }
    // 008d35  shr eax, 1
    X86_AT(c, 0x8d35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 008d37  add edi, eax
    X86_AT(c, 0x8d37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 29);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8dfd:
    X86_TICK(c, 10);
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8ce9u, "ran off the end of a function");
}
}
