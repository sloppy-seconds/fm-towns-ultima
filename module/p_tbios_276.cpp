#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00010be3(X86Cpu& c) {
    X86_TICK(c, 69);
    // 010be3  mov dword ptr [esi], eax
    X86_AT(c, 0x10be3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010be5  mov word ptr [esi + 4], gs
    X86_AT(c, 0x10be5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (uint32_t)c.sreg[5]);
    // 010be8  mov dx, word ptr gs:[edi + 0x52]
    X86_AT(c, 0x10be8u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x52u))));
    // 010bed  mov word ptr gs:[edi + 0x56], dx
    X86_AT(c, 0x10bedu);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 010bf2  sub dx, word ptr gs:[edi + 0x49]
    X86_AT(c, 0x10bf2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x49u))), 0, 2)); }
    // 010bf7  mov word ptr [esi + 6], dx
    X86_AT(c, 0x10bf7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 010bfb  mov bx, word ptr gs:[edi + 0x54]
    X86_AT(c, 0x10bfbu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x54u))));
    // 010c00  mov word ptr gs:[edi + 0x58], bx
    X86_AT(c, 0x10c00u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010c05  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10c05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010c0a  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10c0au);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010c0e  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10c0eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010c13  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10c13u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010c17  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10c17u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010c1c  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10c1cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010c20  popfd 
    X86_AT(c, 0x10c20u);
    x86_popfd(c, 4);
    // 010c21  mov ah, 0x24
    X86_AT(c, 0x10c21u);
    s8(c, 4, 0x24u);
    // 010c23  push edi
    X86_AT(c, 0x10c23u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c24  add edi, 0x62
    X86_AT(c, 0x10c24u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c27  push cs
    X86_AT(c, 0x10c27u);
    push32(c, c.sreg[1]);
    // 010c28  call 0x280
    X86_AT(c, 0x10c28u);
    push32(c, 0x10c2du); f_00000280(c); X86_RET(c, 0x10c2du);
    X86_TICK(c, 28);
    // 010c2d  pop edi
    X86_AT(c, 0x10c2du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c2e  mov eax, dword ptr gs:[edi + 0x34]
    X86_AT(c, 0x10c2eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x34u)));
    // 010c32  mov dword ptr [esi], eax
    X86_AT(c, 0x10c32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010c34  mov ax, word ptr gs:[edi + 0x38]
    X86_AT(c, 0x10c34u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x38u))));
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10be3u, "ran off the end of a function");
}
void f_00010be5(X86Cpu& c) {
    X86_TICK(c, 67);
    // 010be5  mov word ptr [esi + 4], gs
    X86_AT(c, 0x10be5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (uint32_t)c.sreg[5]);
    // 010be8  mov dx, word ptr gs:[edi + 0x52]
    X86_AT(c, 0x10be8u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x52u))));
    // 010bed  mov word ptr gs:[edi + 0x56], dx
    X86_AT(c, 0x10bedu);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 010bf2  sub dx, word ptr gs:[edi + 0x49]
    X86_AT(c, 0x10bf2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x49u))), 0, 2)); }
    // 010bf7  mov word ptr [esi + 6], dx
    X86_AT(c, 0x10bf7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 010bfb  mov bx, word ptr gs:[edi + 0x54]
    X86_AT(c, 0x10bfbu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x54u))));
    // 010c00  mov word ptr gs:[edi + 0x58], bx
    X86_AT(c, 0x10c00u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010c05  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10c05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010c0a  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10c0au);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010c0e  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10c0eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010c13  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10c13u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010c17  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10c17u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010c1c  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10c1cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010c20  popfd 
    X86_AT(c, 0x10c20u);
    x86_popfd(c, 4);
    // 010c21  mov ah, 0x24
    X86_AT(c, 0x10c21u);
    s8(c, 4, 0x24u);
    // 010c23  push edi
    X86_AT(c, 0x10c23u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c24  add edi, 0x62
    X86_AT(c, 0x10c24u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c27  push cs
    X86_AT(c, 0x10c27u);
    push32(c, c.sreg[1]);
    // 010c28  call 0x280
    X86_AT(c, 0x10c28u);
    push32(c, 0x10c2du); f_00000280(c); X86_RET(c, 0x10c2du);
    X86_TICK(c, 28);
    // 010c2d  pop edi
    X86_AT(c, 0x10c2du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c2e  mov eax, dword ptr gs:[edi + 0x34]
    X86_AT(c, 0x10c2eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x34u)));
    // 010c32  mov dword ptr [esi], eax
    X86_AT(c, 0x10c32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010c34  mov ax, word ptr gs:[edi + 0x38]
    X86_AT(c, 0x10c34u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x38u))));
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10be5u, "ran off the end of a function");
}
void f_00010be8(X86Cpu& c) {
    X86_TICK(c, 65);
    // 010be8  mov dx, word ptr gs:[edi + 0x52]
    X86_AT(c, 0x10be8u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x52u))));
    // 010bed  mov word ptr gs:[edi + 0x56], dx
    X86_AT(c, 0x10bedu);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 010bf2  sub dx, word ptr gs:[edi + 0x49]
    X86_AT(c, 0x10bf2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x49u))), 0, 2)); }
    // 010bf7  mov word ptr [esi + 6], dx
    X86_AT(c, 0x10bf7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 010bfb  mov bx, word ptr gs:[edi + 0x54]
    X86_AT(c, 0x10bfbu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x54u))));
    // 010c00  mov word ptr gs:[edi + 0x58], bx
    X86_AT(c, 0x10c00u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010c05  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10c05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010c0a  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10c0au);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010c0e  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10c0eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010c13  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10c13u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010c17  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10c17u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010c1c  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10c1cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010c20  popfd 
    X86_AT(c, 0x10c20u);
    x86_popfd(c, 4);
    // 010c21  mov ah, 0x24
    X86_AT(c, 0x10c21u);
    s8(c, 4, 0x24u);
    // 010c23  push edi
    X86_AT(c, 0x10c23u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c24  add edi, 0x62
    X86_AT(c, 0x10c24u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c27  push cs
    X86_AT(c, 0x10c27u);
    push32(c, c.sreg[1]);
    // 010c28  call 0x280
    X86_AT(c, 0x10c28u);
    push32(c, 0x10c2du); f_00000280(c); X86_RET(c, 0x10c2du);
    X86_TICK(c, 28);
    // 010c2d  pop edi
    X86_AT(c, 0x10c2du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c2e  mov eax, dword ptr gs:[edi + 0x34]
    X86_AT(c, 0x10c2eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x34u)));
    // 010c32  mov dword ptr [esi], eax
    X86_AT(c, 0x10c32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010c34  mov ax, word ptr gs:[edi + 0x38]
    X86_AT(c, 0x10c34u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x38u))));
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10be8u, "ran off the end of a function");
}
void f_00010bed(X86Cpu& c) {
    X86_TICK(c, 61);
    // 010bed  mov word ptr gs:[edi + 0x56], dx
    X86_AT(c, 0x10bedu);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x56u)), (c.r[2] & 0xFFFFu));
    // 010bf2  sub dx, word ptr gs:[edi + 0x49]
    X86_AT(c, 0x10bf2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x49u))), 0, 2)); }
    // 010bf7  mov word ptr [esi + 6], dx
    X86_AT(c, 0x10bf7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 010bfb  mov bx, word ptr gs:[edi + 0x54]
    X86_AT(c, 0x10bfbu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x54u))));
    // 010c00  mov word ptr gs:[edi + 0x58], bx
    X86_AT(c, 0x10c00u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010c05  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10c05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010c0a  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10c0au);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010c0e  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10c0eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010c13  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10c13u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010c17  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10c17u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010c1c  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10c1cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010c20  popfd 
    X86_AT(c, 0x10c20u);
    x86_popfd(c, 4);
    // 010c21  mov ah, 0x24
    X86_AT(c, 0x10c21u);
    s8(c, 4, 0x24u);
    // 010c23  push edi
    X86_AT(c, 0x10c23u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c24  add edi, 0x62
    X86_AT(c, 0x10c24u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c27  push cs
    X86_AT(c, 0x10c27u);
    push32(c, c.sreg[1]);
    // 010c28  call 0x280
    X86_AT(c, 0x10c28u);
    push32(c, 0x10c2du); f_00000280(c); X86_RET(c, 0x10c2du);
    X86_TICK(c, 28);
    // 010c2d  pop edi
    X86_AT(c, 0x10c2du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c2e  mov eax, dword ptr gs:[edi + 0x34]
    X86_AT(c, 0x10c2eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x34u)));
    // 010c32  mov dword ptr [esi], eax
    X86_AT(c, 0x10c32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010c34  mov ax, word ptr gs:[edi + 0x38]
    X86_AT(c, 0x10c34u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x38u))));
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10bedu, "ran off the end of a function");
}
void f_00010bf2(X86Cpu& c) {
    X86_TICK(c, 59);
    // 010bf2  sub dx, word ptr gs:[edi + 0x49]
    X86_AT(c, 0x10bf2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x49u))), 0, 2)); }
    // 010bf7  mov word ptr [esi + 6], dx
    X86_AT(c, 0x10bf7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 010bfb  mov bx, word ptr gs:[edi + 0x54]
    X86_AT(c, 0x10bfbu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x54u))));
    // 010c00  mov word ptr gs:[edi + 0x58], bx
    X86_AT(c, 0x10c00u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010c05  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10c05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010c0a  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10c0au);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010c0e  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10c0eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010c13  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10c13u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010c17  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10c17u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010c1c  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10c1cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010c20  popfd 
    X86_AT(c, 0x10c20u);
    x86_popfd(c, 4);
    // 010c21  mov ah, 0x24
    X86_AT(c, 0x10c21u);
    s8(c, 4, 0x24u);
    // 010c23  push edi
    X86_AT(c, 0x10c23u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c24  add edi, 0x62
    X86_AT(c, 0x10c24u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c27  push cs
    X86_AT(c, 0x10c27u);
    push32(c, c.sreg[1]);
    // 010c28  call 0x280
    X86_AT(c, 0x10c28u);
    push32(c, 0x10c2du); f_00000280(c); X86_RET(c, 0x10c2du);
    X86_TICK(c, 28);
    // 010c2d  pop edi
    X86_AT(c, 0x10c2du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c2e  mov eax, dword ptr gs:[edi + 0x34]
    X86_AT(c, 0x10c2eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x34u)));
    // 010c32  mov dword ptr [esi], eax
    X86_AT(c, 0x10c32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010c34  mov ax, word ptr gs:[edi + 0x38]
    X86_AT(c, 0x10c34u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x38u))));
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10bf2u, "ran off the end of a function");
}
void f_00010bf7(X86Cpu& c) {
    X86_TICK(c, 53);
    // 010bf7  mov word ptr [esi + 6], dx
    X86_AT(c, 0x10bf7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 010bfb  mov bx, word ptr gs:[edi + 0x54]
    X86_AT(c, 0x10bfbu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x54u))));
    // 010c00  mov word ptr gs:[edi + 0x58], bx
    X86_AT(c, 0x10c00u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010c05  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10c05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010c0a  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10c0au);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010c0e  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10c0eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010c13  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10c13u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010c17  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10c17u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010c1c  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10c1cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010c20  popfd 
    X86_AT(c, 0x10c20u);
    x86_popfd(c, 4);
    // 010c21  mov ah, 0x24
    X86_AT(c, 0x10c21u);
    s8(c, 4, 0x24u);
    // 010c23  push edi
    X86_AT(c, 0x10c23u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c24  add edi, 0x62
    X86_AT(c, 0x10c24u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c27  push cs
    X86_AT(c, 0x10c27u);
    push32(c, c.sreg[1]);
    // 010c28  call 0x280
    X86_AT(c, 0x10c28u);
    push32(c, 0x10c2du); f_00000280(c); X86_RET(c, 0x10c2du);
    X86_TICK(c, 28);
    // 010c2d  pop edi
    X86_AT(c, 0x10c2du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c2e  mov eax, dword ptr gs:[edi + 0x34]
    X86_AT(c, 0x10c2eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x34u)));
    // 010c32  mov dword ptr [esi], eax
    X86_AT(c, 0x10c32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010c34  mov ax, word ptr gs:[edi + 0x38]
    X86_AT(c, 0x10c34u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x38u))));
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10bf7u, "ran off the end of a function");
}
void f_00010bfb(X86Cpu& c) {
    X86_TICK(c, 51);
    // 010bfb  mov bx, word ptr gs:[edi + 0x54]
    X86_AT(c, 0x10bfbu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x54u))));
    // 010c00  mov word ptr gs:[edi + 0x58], bx
    X86_AT(c, 0x10c00u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010c05  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10c05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010c0a  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10c0au);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010c0e  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10c0eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010c13  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10c13u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010c17  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10c17u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010c1c  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10c1cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010c20  popfd 
    X86_AT(c, 0x10c20u);
    x86_popfd(c, 4);
    // 010c21  mov ah, 0x24
    X86_AT(c, 0x10c21u);
    s8(c, 4, 0x24u);
    // 010c23  push edi
    X86_AT(c, 0x10c23u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c24  add edi, 0x62
    X86_AT(c, 0x10c24u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c27  push cs
    X86_AT(c, 0x10c27u);
    push32(c, c.sreg[1]);
    // 010c28  call 0x280
    X86_AT(c, 0x10c28u);
    push32(c, 0x10c2du); f_00000280(c); X86_RET(c, 0x10c2du);
    X86_TICK(c, 28);
    // 010c2d  pop edi
    X86_AT(c, 0x10c2du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c2e  mov eax, dword ptr gs:[edi + 0x34]
    X86_AT(c, 0x10c2eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x34u)));
    // 010c32  mov dword ptr [esi], eax
    X86_AT(c, 0x10c32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010c34  mov ax, word ptr gs:[edi + 0x38]
    X86_AT(c, 0x10c34u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x38u))));
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10bfbu, "ran off the end of a function");
}
void f_00010c00(X86Cpu& c) {
    X86_TICK(c, 47);
    // 010c00  mov word ptr gs:[edi + 0x58], bx
    X86_AT(c, 0x10c00u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u)), (c.r[3] & 0xFFFFu));
    // 010c05  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10c05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010c0a  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10c0au);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010c0e  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10c0eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010c13  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10c13u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010c17  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10c17u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010c1c  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10c1cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010c20  popfd 
    X86_AT(c, 0x10c20u);
    x86_popfd(c, 4);
    // 010c21  mov ah, 0x24
    X86_AT(c, 0x10c21u);
    s8(c, 4, 0x24u);
    // 010c23  push edi
    X86_AT(c, 0x10c23u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c24  add edi, 0x62
    X86_AT(c, 0x10c24u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c27  push cs
    X86_AT(c, 0x10c27u);
    push32(c, c.sreg[1]);
    // 010c28  call 0x280
    X86_AT(c, 0x10c28u);
    push32(c, 0x10c2du); f_00000280(c); X86_RET(c, 0x10c2du);
    X86_TICK(c, 28);
    // 010c2d  pop edi
    X86_AT(c, 0x10c2du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c2e  mov eax, dword ptr gs:[edi + 0x34]
    X86_AT(c, 0x10c2eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x34u)));
    // 010c32  mov dword ptr [esi], eax
    X86_AT(c, 0x10c32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010c34  mov ax, word ptr gs:[edi + 0x38]
    X86_AT(c, 0x10c34u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x38u))));
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c00u, "ran off the end of a function");
}
void f_00010c05(X86Cpu& c) {
    X86_TICK(c, 45);
    // 010c05  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10c05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010c0a  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10c0au);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010c0e  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10c0eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010c13  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10c13u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010c17  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10c17u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010c1c  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10c1cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010c20  popfd 
    X86_AT(c, 0x10c20u);
    x86_popfd(c, 4);
    // 010c21  mov ah, 0x24
    X86_AT(c, 0x10c21u);
    s8(c, 4, 0x24u);
    // 010c23  push edi
    X86_AT(c, 0x10c23u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c24  add edi, 0x62
    X86_AT(c, 0x10c24u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c27  push cs
    X86_AT(c, 0x10c27u);
    push32(c, c.sreg[1]);
    // 010c28  call 0x280
    X86_AT(c, 0x10c28u);
    push32(c, 0x10c2du); f_00000280(c); X86_RET(c, 0x10c2du);
    X86_TICK(c, 28);
    // 010c2d  pop edi
    X86_AT(c, 0x10c2du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c2e  mov eax, dword ptr gs:[edi + 0x34]
    X86_AT(c, 0x10c2eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x34u)));
    // 010c32  mov dword ptr [esi], eax
    X86_AT(c, 0x10c32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010c34  mov ax, word ptr gs:[edi + 0x38]
    X86_AT(c, 0x10c34u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x38u))));
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c05u, "ran off the end of a function");
}
void f_00010c0a(X86Cpu& c) {
    X86_TICK(c, 39);
    // 010c0a  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10c0au);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010c0e  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10c0eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010c13  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10c13u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010c17  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10c17u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010c1c  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10c1cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010c20  popfd 
    X86_AT(c, 0x10c20u);
    x86_popfd(c, 4);
    // 010c21  mov ah, 0x24
    X86_AT(c, 0x10c21u);
    s8(c, 4, 0x24u);
    // 010c23  push edi
    X86_AT(c, 0x10c23u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c24  add edi, 0x62
    X86_AT(c, 0x10c24u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c27  push cs
    X86_AT(c, 0x10c27u);
    push32(c, c.sreg[1]);
    // 010c28  call 0x280
    X86_AT(c, 0x10c28u);
    push32(c, 0x10c2du); f_00000280(c); X86_RET(c, 0x10c2du);
    X86_TICK(c, 28);
    // 010c2d  pop edi
    X86_AT(c, 0x10c2du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c2e  mov eax, dword ptr gs:[edi + 0x34]
    X86_AT(c, 0x10c2eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x34u)));
    // 010c32  mov dword ptr [esi], eax
    X86_AT(c, 0x10c32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010c34  mov ax, word ptr gs:[edi + 0x38]
    X86_AT(c, 0x10c34u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x38u))));
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c0au, "ran off the end of a function");
}
void f_00010c0e(X86Cpu& c) {
    X86_TICK(c, 37);
    // 010c0e  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10c0eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010c13  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10c13u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010c17  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10c17u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010c1c  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10c1cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010c20  popfd 
    X86_AT(c, 0x10c20u);
    x86_popfd(c, 4);
    // 010c21  mov ah, 0x24
    X86_AT(c, 0x10c21u);
    s8(c, 4, 0x24u);
    // 010c23  push edi
    X86_AT(c, 0x10c23u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c24  add edi, 0x62
    X86_AT(c, 0x10c24u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c27  push cs
    X86_AT(c, 0x10c27u);
    push32(c, c.sreg[1]);
    // 010c28  call 0x280
    X86_AT(c, 0x10c28u);
    push32(c, 0x10c2du); f_00000280(c); X86_RET(c, 0x10c2du);
    X86_TICK(c, 28);
    // 010c2d  pop edi
    X86_AT(c, 0x10c2du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c2e  mov eax, dword ptr gs:[edi + 0x34]
    X86_AT(c, 0x10c2eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x34u)));
    // 010c32  mov dword ptr [esi], eax
    X86_AT(c, 0x10c32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010c34  mov ax, word ptr gs:[edi + 0x38]
    X86_AT(c, 0x10c34u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x38u))));
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c0eu, "ran off the end of a function");
}
void f_00010c13(X86Cpu& c) {
    X86_TICK(c, 31);
    // 010c13  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10c13u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010c17  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10c17u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010c1c  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10c1cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010c20  popfd 
    X86_AT(c, 0x10c20u);
    x86_popfd(c, 4);
    // 010c21  mov ah, 0x24
    X86_AT(c, 0x10c21u);
    s8(c, 4, 0x24u);
    // 010c23  push edi
    X86_AT(c, 0x10c23u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c24  add edi, 0x62
    X86_AT(c, 0x10c24u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c27  push cs
    X86_AT(c, 0x10c27u);
    push32(c, c.sreg[1]);
    // 010c28  call 0x280
    X86_AT(c, 0x10c28u);
    push32(c, 0x10c2du); f_00000280(c); X86_RET(c, 0x10c2du);
    X86_TICK(c, 28);
    // 010c2d  pop edi
    X86_AT(c, 0x10c2du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c2e  mov eax, dword ptr gs:[edi + 0x34]
    X86_AT(c, 0x10c2eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x34u)));
    // 010c32  mov dword ptr [esi], eax
    X86_AT(c, 0x10c32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010c34  mov ax, word ptr gs:[edi + 0x38]
    X86_AT(c, 0x10c34u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x38u))));
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c13u, "ran off the end of a function");
}
void f_00010c17(X86Cpu& c) {
    X86_TICK(c, 29);
    // 010c17  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10c17u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010c1c  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10c1cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010c20  popfd 
    X86_AT(c, 0x10c20u);
    x86_popfd(c, 4);
    // 010c21  mov ah, 0x24
    X86_AT(c, 0x10c21u);
    s8(c, 4, 0x24u);
    // 010c23  push edi
    X86_AT(c, 0x10c23u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c24  add edi, 0x62
    X86_AT(c, 0x10c24u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c27  push cs
    X86_AT(c, 0x10c27u);
    push32(c, c.sreg[1]);
    // 010c28  call 0x280
    X86_AT(c, 0x10c28u);
    push32(c, 0x10c2du); f_00000280(c); X86_RET(c, 0x10c2du);
    X86_TICK(c, 28);
    // 010c2d  pop edi
    X86_AT(c, 0x10c2du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c2e  mov eax, dword ptr gs:[edi + 0x34]
    X86_AT(c, 0x10c2eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x34u)));
    // 010c32  mov dword ptr [esi], eax
    X86_AT(c, 0x10c32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010c34  mov ax, word ptr gs:[edi + 0x38]
    X86_AT(c, 0x10c34u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x38u))));
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c17u, "ran off the end of a function");
}
void f_00010c1c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 010c1c  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10c1cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010c20  popfd 
    X86_AT(c, 0x10c20u);
    x86_popfd(c, 4);
    // 010c21  mov ah, 0x24
    X86_AT(c, 0x10c21u);
    s8(c, 4, 0x24u);
    // 010c23  push edi
    X86_AT(c, 0x10c23u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c24  add edi, 0x62
    X86_AT(c, 0x10c24u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c27  push cs
    X86_AT(c, 0x10c27u);
    push32(c, c.sreg[1]);
    // 010c28  call 0x280
    X86_AT(c, 0x10c28u);
    push32(c, 0x10c2du); f_00000280(c); X86_RET(c, 0x10c2du);
    X86_TICK(c, 28);
    // 010c2d  pop edi
    X86_AT(c, 0x10c2du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c2e  mov eax, dword ptr gs:[edi + 0x34]
    X86_AT(c, 0x10c2eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x34u)));
    // 010c32  mov dword ptr [esi], eax
    X86_AT(c, 0x10c32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010c34  mov ax, word ptr gs:[edi + 0x38]
    X86_AT(c, 0x10c34u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x38u))));
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c1cu, "ran off the end of a function");
}
void f_00010c20(X86Cpu& c) {
    X86_TICK(c, 21);
    // 010c20  popfd 
    X86_AT(c, 0x10c20u);
    x86_popfd(c, 4);
    // 010c21  mov ah, 0x24
    X86_AT(c, 0x10c21u);
    s8(c, 4, 0x24u);
    // 010c23  push edi
    X86_AT(c, 0x10c23u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c24  add edi, 0x62
    X86_AT(c, 0x10c24u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c27  push cs
    X86_AT(c, 0x10c27u);
    push32(c, c.sreg[1]);
    // 010c28  call 0x280
    X86_AT(c, 0x10c28u);
    push32(c, 0x10c2du); f_00000280(c); X86_RET(c, 0x10c2du);
    X86_TICK(c, 28);
    // 010c2d  pop edi
    X86_AT(c, 0x10c2du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c2e  mov eax, dword ptr gs:[edi + 0x34]
    X86_AT(c, 0x10c2eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x34u)));
    // 010c32  mov dword ptr [esi], eax
    X86_AT(c, 0x10c32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010c34  mov ax, word ptr gs:[edi + 0x38]
    X86_AT(c, 0x10c34u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x38u))));
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c20u, "ran off the end of a function");
}
void f_00010c21(X86Cpu& c) {
    X86_TICK(c, 15);
    // 010c21  mov ah, 0x24
    X86_AT(c, 0x10c21u);
    s8(c, 4, 0x24u);
    // 010c23  push edi
    X86_AT(c, 0x10c23u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c24  add edi, 0x62
    X86_AT(c, 0x10c24u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c27  push cs
    X86_AT(c, 0x10c27u);
    push32(c, c.sreg[1]);
    // 010c28  call 0x280
    X86_AT(c, 0x10c28u);
    push32(c, 0x10c2du); f_00000280(c); X86_RET(c, 0x10c2du);
    X86_TICK(c, 28);
    // 010c2d  pop edi
    X86_AT(c, 0x10c2du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c2e  mov eax, dword ptr gs:[edi + 0x34]
    X86_AT(c, 0x10c2eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x34u)));
    // 010c32  mov dword ptr [esi], eax
    X86_AT(c, 0x10c32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010c34  mov ax, word ptr gs:[edi + 0x38]
    X86_AT(c, 0x10c34u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x38u))));
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c21u, "ran off the end of a function");
}
void f_00010c23(X86Cpu& c) {
    X86_TICK(c, 13);
    // 010c23  push edi
    X86_AT(c, 0x10c23u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c24  add edi, 0x62
    X86_AT(c, 0x10c24u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c27  push cs
    X86_AT(c, 0x10c27u);
    push32(c, c.sreg[1]);
    // 010c28  call 0x280
    X86_AT(c, 0x10c28u);
    push32(c, 0x10c2du); f_00000280(c); X86_RET(c, 0x10c2du);
    X86_TICK(c, 28);
    // 010c2d  pop edi
    X86_AT(c, 0x10c2du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c2e  mov eax, dword ptr gs:[edi + 0x34]
    X86_AT(c, 0x10c2eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x34u)));
    // 010c32  mov dword ptr [esi], eax
    X86_AT(c, 0x10c32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010c34  mov ax, word ptr gs:[edi + 0x38]
    X86_AT(c, 0x10c34u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x38u))));
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c23u, "ran off the end of a function");
}
void f_00010c24(X86Cpu& c) {
    X86_TICK(c, 11);
    // 010c24  add edi, 0x62
    X86_AT(c, 0x10c24u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c27  push cs
    X86_AT(c, 0x10c27u);
    push32(c, c.sreg[1]);
    // 010c28  call 0x280
    X86_AT(c, 0x10c28u);
    push32(c, 0x10c2du); f_00000280(c); X86_RET(c, 0x10c2du);
    X86_TICK(c, 28);
    // 010c2d  pop edi
    X86_AT(c, 0x10c2du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c2e  mov eax, dword ptr gs:[edi + 0x34]
    X86_AT(c, 0x10c2eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x34u)));
    // 010c32  mov dword ptr [esi], eax
    X86_AT(c, 0x10c32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010c34  mov ax, word ptr gs:[edi + 0x38]
    X86_AT(c, 0x10c34u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x38u))));
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c24u, "ran off the end of a function");
}
void f_00010c27(X86Cpu& c) {
    X86_TICK(c, 9);
    // 010c27  push cs
    X86_AT(c, 0x10c27u);
    push32(c, c.sreg[1]);
    // 010c28  call 0x280
    X86_AT(c, 0x10c28u);
    push32(c, 0x10c2du); f_00000280(c); X86_RET(c, 0x10c2du);
    X86_TICK(c, 28);
    // 010c2d  pop edi
    X86_AT(c, 0x10c2du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c2e  mov eax, dword ptr gs:[edi + 0x34]
    X86_AT(c, 0x10c2eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x34u)));
    // 010c32  mov dword ptr [esi], eax
    X86_AT(c, 0x10c32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010c34  mov ax, word ptr gs:[edi + 0x38]
    X86_AT(c, 0x10c34u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x38u))));
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c27u, "ran off the end of a function");
}
void f_00010c28(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010c28  call 0x280
    X86_AT(c, 0x10c28u);
    push32(c, 0x10c2du); f_00000280(c); X86_RET(c, 0x10c2du);
    X86_TICK(c, 28);
    // 010c2d  pop edi
    X86_AT(c, 0x10c2du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c2e  mov eax, dword ptr gs:[edi + 0x34]
    X86_AT(c, 0x10c2eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x34u)));
    // 010c32  mov dword ptr [esi], eax
    X86_AT(c, 0x10c32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010c34  mov ax, word ptr gs:[edi + 0x38]
    X86_AT(c, 0x10c34u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x38u))));
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c28u, "ran off the end of a function");
}
void f_00010c2d(X86Cpu& c) {
    X86_TICK(c, 28);
    // 010c2d  pop edi
    X86_AT(c, 0x10c2du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c2e  mov eax, dword ptr gs:[edi + 0x34]
    X86_AT(c, 0x10c2eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x34u)));
    // 010c32  mov dword ptr [esi], eax
    X86_AT(c, 0x10c32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010c34  mov ax, word ptr gs:[edi + 0x38]
    X86_AT(c, 0x10c34u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x38u))));
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c2du, "ran off the end of a function");
}
void f_00010c2e(X86Cpu& c) {
    X86_TICK(c, 24);
    // 010c2e  mov eax, dword ptr gs:[edi + 0x34]
    X86_AT(c, 0x10c2eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x34u)));
    // 010c32  mov dword ptr [esi], eax
    X86_AT(c, 0x10c32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010c34  mov ax, word ptr gs:[edi + 0x38]
    X86_AT(c, 0x10c34u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x38u))));
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c2eu, "ran off the end of a function");
}
void f_00010c32(X86Cpu& c) {
    X86_TICK(c, 20);
    // 010c32  mov dword ptr [esi], eax
    X86_AT(c, 0x10c32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010c34  mov ax, word ptr gs:[edi + 0x38]
    X86_AT(c, 0x10c34u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x38u))));
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c32u, "ran off the end of a function");
}
void f_00010c34(X86Cpu& c) {
    X86_TICK(c, 18);
    // 010c34  mov ax, word ptr gs:[edi + 0x38]
    X86_AT(c, 0x10c34u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x38u))));
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c34u, "ran off the end of a function");
}
void f_00010c39(X86Cpu& c) {
    X86_TICK(c, 14);
    // 010c39  mov word ptr [esi + 4], ax
    X86_AT(c, 0x10c39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (c.r[0] & 0xFFFFu));
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c39u, "ran off the end of a function");
}
void f_00010c3d(X86Cpu& c) {
    X86_TICK(c, 12);
    // 010c3d  cmp byte ptr gs:[edi + 0x4e], 2
    X86_AT(c, 0x10c3du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Eu))), 0x2u, 0, 1);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c3du, "ran off the end of a function");
}
void f_00010c42(X86Cpu& c) {
    X86_TICK(c, 5);
    // 010c42  jb 0x10c48
    X86_AT(c, 0x10c42u);
    if (x86_cc(c, 2)) { goto L_10c48; }
    X86_TICK(c, 9);
    // 010c44  mov ah, 0x29
    X86_AT(c, 0x10c44u);
    s8(c, 4, 0x29u);
    // 010c46  jmp 0x10c4a
    X86_AT(c, 0x10c46u);
    goto L_10c4a;
L_10c48:
    X86_TICK(c, 2);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
L_10c4a:
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c42u, "ran off the end of a function");
}
void f_00010c48(X86Cpu& c) {
    X86_TICK(c, 17);
    // 010c48  mov ah, 0x28
    X86_AT(c, 0x10c48u);
    s8(c, 4, 0x28u);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c48u, "ran off the end of a function");
}
void f_00010c4a(X86Cpu& c) {
    X86_TICK(c, 15);
    // 010c4a  mov al, 0
    X86_AT(c, 0x10c4au);
    s8(c, 0, 0x0u);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c4au, "ran off the end of a function");
}
void f_00010c4c(X86Cpu& c) {
    X86_TICK(c, 13);
    // 010c4c  push edi
    X86_AT(c, 0x10c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c4cu, "ran off the end of a function");
}
void f_00010c4d(X86Cpu& c) {
    X86_TICK(c, 11);
    // 010c4d  add edi, 0x62
    X86_AT(c, 0x10c4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c4du, "ran off the end of a function");
}
void f_00010c50(X86Cpu& c) {
    X86_TICK(c, 9);
    // 010c50  push cs
    X86_AT(c, 0x10c50u);
    push32(c, c.sreg[1]);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c50u, "ran off the end of a function");
}
void f_00010c51(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010c51  call 0x280
    X86_AT(c, 0x10c51u);
    push32(c, 0x10c56u); f_00000280(c); X86_RET(c, 0x10c56u);
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c51u, "ran off the end of a function");
}
void f_00010c56(X86Cpu& c) {
    X86_TICK(c, 20);
    // 010c56  pop edi
    X86_AT(c, 0x10c56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c56u, "ran off the end of a function");
}
void f_00010c57(X86Cpu& c) {
    X86_TICK(c, 16);
    // 010c57  pop ds
    X86_AT(c, 0x10c57u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c57u, "ran off the end of a function");
}
void f_00010c58(X86Cpu& c) {
    X86_TICK(c, 12);
    // 010c58  add esp, 0xe
    X86_AT(c, 0x10c58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c58u, "ran off the end of a function");
}
void f_00010c5b(X86Cpu& c) {
    X86_TICK(c, 10);
    // 010c5b  ret 
    X86_AT(c, 0x10c5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10c5bu, "ran off the end of a function");
}
void f_00010c80(X86Cpu& c) {
    X86_TICK(c, 45);
    // 010c80  push gs
    X86_AT(c, 0x10c80u);
    push32(c, c.sreg[5]);
    // 010c82  push fs
    X86_AT(c, 0x10c82u);
    push32(c, c.sreg[4]);
    // 010c84  push es
    X86_AT(c, 0x10c84u);
    push32(c, c.sreg[0]);
    // 010c85  push ds
    X86_AT(c, 0x10c85u);
    push32(c, c.sreg[3]);
    // 010c86  pushal 
    X86_AT(c, 0x10c86u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 010c87  pushfd 
    X86_AT(c, 0x10c87u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010c88  cld 
    X86_AT(c, 0x10c88u);
    c.fl &= ~X86_DF;
    // 010c89  mov ebp, esp
    X86_AT(c, 0x10c89u);
    c.r[5] = c.r[4];
    // 010c8b  mov byte ptr [ebp + 0x21], 0
    X86_AT(c, 0x10c8bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0x0u);
    // 010c8f  cmp ah, 8
    X86_AT(c, 0x10c8fu);
    (void)x86_sub(c, g8(c, 4), 0x8u, 0, 1);
    // 010c92  ja 0x10ca8
    X86_AT(c, 0x10c92u);
    if (x86_cc(c, 7)) { goto L_10ca8; }
    X86_TICK(c, 10);
    // 010c94  movzx ecx, ah
    X86_AT(c, 0x10c94u);
    c.r[1] = g8(c, 4);
    // 010c97  call dword ptr cs:[ecx*4 + 0x10cae]
    X86_AT(c, 0x10c97u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x10CAEu))); push32(c, 0x10c9fu);
      switch (t) {
      case 0x10cd4u: f_00010cd4(c); break;
      case 0x10d00u: f_00010d00(c); break;
      case 0x10d90u: f_00010d90(c); break;
      case 0x10de8u: f_00010de8(c); break;
      case 0x10e2cu: f_00010e2c(c); break;
      case 0x10ee0u: f_00010ee0(c); break;
      case 0x10f88u: f_00010f88(c); break;
      case 0x10ffcu: f_00010ffc(c); break;
      case 0x11048u: f_00011048(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10c9fu); }
L_10c9f:
    X86_TICK(c, 52);
    // 010c9f  popfd 
    X86_AT(c, 0x10c9fu);
    x86_popfd(c, 4);
    // 010ca0  popal 
    X86_AT(c, 0x10ca0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010ca1  pop ds
    X86_AT(c, 0x10ca1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010ca2  pop es
    X86_AT(c, 0x10ca2u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 010ca3  pop fs
    X86_AT(c, 0x10ca3u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 010ca5  pop gs
    X86_AT(c, 0x10ca5u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 010ca7  retf 
    X86_AT(c, 0x10ca7u);
    x86_retf(c, 4, 0u); return;
L_10ca8:
    X86_TICK(c, 9);
    // 010ca8  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10ca8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 010cac  jmp 0x10c9f
    X86_AT(c, 0x10cacu);
    X86_POLL(c, 0x10c9fu); goto L_10c9f;
    x86_fault(c, 0x10c80u, "ran off the end of a function");
}
void f_00010cd4(X86Cpu& c) {
    X86_TICK(c, 44);
    // 010cd4  mov ax, 0x120
    X86_AT(c, 0x10cd4u);
    s16(c, 0, 0x120u);
    // 010cd8  mov es, eax
    X86_AT(c, 0x10cd8u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 010cda  mov edi, 0x40000
    X86_AT(c, 0x10cdau);
    c.r[7] = 0x40000u;
    // 010cdf  mov ecx, 0x10000
    X86_AT(c, 0x10cdfu);
    c.r[1] = 0x10000u;
    // 010ce4  mov eax, 0x80008000
    X86_AT(c, 0x10ce4u);
    c.r[0] = 0x80008000u;
    // 010ce9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x10ce9u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 010ceb  mov ax, 0x130
    X86_AT(c, 0x10cebu);
    s16(c, 0, 0x130u);
    // 010cef  mov es, eax
    X86_AT(c, 0x10cefu);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 010cf1  sub edi, edi
    X86_AT(c, 0x10cf1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 010cf3  mov ecx, 0x8000
    X86_AT(c, 0x10cf3u);
    c.r[1] = 0x8000u;
    // 010cf8  sub eax, eax
    X86_AT(c, 0x10cf8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 010cfa  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x10cfau);
    x86_string(c, 2, 4, 243, 4, 3);
    // 010cfc  ret 
    X86_AT(c, 0x10cfcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10cd4u, "ran off the end of a function");
}
void f_00010d00(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010d00  cmp al, 2
    X86_AT(c, 0x10d00u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 010d02  ja 0x10d50
    X86_AT(c, 0x10d02u);
    if (x86_cc(c, 7)) { goto L_10d50; }
    X86_TICK(c, 5);
    // 010d04  je 0x10d5d
    X86_AT(c, 0x10d04u);
    if (x86_cc(c, 4)) { goto L_10d5d; }
    X86_TICK(c, 11);
    // 010d06  mov cx, word ptr [ebp + 0x1c]
    X86_AT(c, 0x10d06u);
    s16(c, 1, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))));
    // 010d0a  test cx, cx
    X86_AT(c, 0x10d0au);
    (void)x86_logic(c, (c.r[1] & 0xFFFFu) & (c.r[1] & 0xFFFFu), 2);
    // 010d0d  je 0x10d50
    X86_AT(c, 0x10d0du);
    if (x86_cc(c, 4)) { goto L_10d50; }
    X86_TICK(c, 7);
    // 010d0f  cmp cx, 0x400
    X86_AT(c, 0x10d0fu);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x400u, 0, 2);
    // 010d14  ja 0x10d50
    X86_AT(c, 0x10d14u);
    if (x86_cc(c, 7)) { goto L_10d50; }
    X86_TICK(c, 85);
    // 010d16  neg cx
    X86_AT(c, 0x10d16u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_neg(c, v, 2)); }
    // 010d19  and cx, 0x3ff
    X86_AT(c, 0x10d19u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0x3FFu, 2)); }
    // 010d1e  mov bl, al
    X86_AT(c, 0x10d1eu);
    s8(c, 3, g8(c, 0));
    // 010d20  add cx, cx
    X86_AT(c, 0x10d20u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 010d23  shrd cx, ax, 1
    X86_AT(c, 0x10d23u);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[0] & 0xFFFFu), 0x1u, 2, w); if (w) s16(c, 1, r); }
    // 010d28  mov dx, 0x450
    X86_AT(c, 0x10d28u);
    s16(c, 2, 0x450u);
    // 010d2c  mov al, 0
    X86_AT(c, 0x10d2cu);
    s8(c, 0, 0x0u);
    // 010d2e  out dx, al
    X86_AT(c, 0x10d2eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010d2f  mov dx, 0x452
    X86_AT(c, 0x10d2fu);
    s16(c, 2, 0x452u);
    // 010d33  mov al, cl
    X86_AT(c, 0x10d33u);
    s8(c, 0, g8(c, 1));
    // 010d35  out dx, al
    X86_AT(c, 0x10d35u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010d36  mov dx, 0x450
    X86_AT(c, 0x10d36u);
    s16(c, 2, 0x450u);
    // 010d3a  mov al, 1
    X86_AT(c, 0x10d3au);
    s8(c, 0, 0x1u);
    // 010d3c  out dx, al
    X86_AT(c, 0x10d3cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010d3d  mov dx, 0x452
    X86_AT(c, 0x10d3du);
    s16(c, 2, 0x452u);
    // 010d41  mov al, ch
    X86_AT(c, 0x10d41u);
    s8(c, 0, g8(c, 5));
    // 010d43  out dx, al
    X86_AT(c, 0x10d43u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010d44  movzx eax, bl
    X86_AT(c, 0x10d44u);
    c.r[0] = g8(c, 3);
    // 010d47  call dword ptr cs:[eax*4 + 0x10d55]
    X86_AT(c, 0x10d47u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10D55u))); push32(c, 0x10d4fu);
      switch (t) {
      case 0x10d7cu: f_00010d7c(c); break;
      case 0x10d86u: f_00010d86(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10d4fu); }
    X86_TICK(c, 10);
    // 010d4f  ret 
    X86_AT(c, 0x10d4fu);
    c.eip = pop32(c); return;
L_10d50:
    X86_TICK(c, 12);
    // 010d50  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10d50u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 010d54  ret 
    X86_AT(c, 0x10d54u);
    c.eip = pop32(c); return;
L_10d5d:
    X86_TICK(c, 37);
    // 010d5d  mov dx, 0x450
    X86_AT(c, 0x10d5du);
    s16(c, 2, 0x450u);
    // 010d61  mov al, 1
    X86_AT(c, 0x10d61u);
    s8(c, 0, 0x1u);
    // 010d63  out dx, al
    X86_AT(c, 0x10d63u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010d64  mov dx, 0x452
    X86_AT(c, 0x10d64u);
    s16(c, 2, 0x452u);
    // 010d68  in al, dx
    X86_AT(c, 0x10d68u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010d69  test al, 0x80
    X86_AT(c, 0x10d69u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 010d6b  je 0x10d7b
    X86_AT(c, 0x10d6bu);
    if (x86_cc(c, 4)) { goto L_10d7b; }
    X86_TICK(c, 2);
    // 010d6d  mov dx, 0x44c
    X86_AT(c, 0x10d6du);
    s16(c, 2, 0x44Cu);
L_10d71:
    X86_TICK(c, 19);
    // 010d71  in al, dx
    X86_AT(c, 0x10d71u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010d72  test al, 2
    X86_AT(c, 0x10d72u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 010d74  je 0x10d71
    X86_AT(c, 0x10d74u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x10d71u); goto L_10d71; }
L_10d76:
    X86_TICK(c, 19);
    // 010d76  in al, dx
    X86_AT(c, 0x10d76u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010d77  test al, 2
    X86_AT(c, 0x10d77u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 010d79  jne 0x10d76
    X86_AT(c, 0x10d79u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x10d76u); goto L_10d76; }
L_10d7b:
    X86_TICK(c, 10);
    // 010d7b  ret 
    X86_AT(c, 0x10d7bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10d00u, "ran off the end of a function");
}
void f_00010d7c(X86Cpu& c) {
    X86_TICK(c, 2);
    // 010d7c  mov dx, 0x44c
    X86_AT(c, 0x10d7cu);
    s16(c, 2, 0x44Cu);
L_10d80:
    X86_TICK(c, 19);
    // 010d80  in al, dx
    X86_AT(c, 0x10d80u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010d81  test al, 2
    X86_AT(c, 0x10d81u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 010d83  jne 0x10d80
    X86_AT(c, 0x10d83u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x10d80u); goto L_10d80; }
    X86_TICK(c, 10);
    // 010d85  ret 
    X86_AT(c, 0x10d85u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10d7cu, "ran off the end of a function");
}
void f_00010d86(X86Cpu& c) {
    X86_TICK(c, 2);
    // 010d86  mov dx, 0x44c
    X86_AT(c, 0x10d86u);
    s16(c, 2, 0x44Cu);
L_10d8a:
    X86_TICK(c, 19);
    // 010d8a  in al, dx
    X86_AT(c, 0x10d8au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010d8b  test al, 2
    X86_AT(c, 0x10d8bu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 010d8d  je 0x10d8a
    X86_AT(c, 0x10d8du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x10d8au); goto L_10d8a; }
    X86_TICK(c, 10);
    // 010d8f  ret 
    X86_AT(c, 0x10d8fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10d86u, "ran off the end of a function");
}
void f_00010d90(X86Cpu& c) {
    goto L_10d90;
L_10d50:
    X86_TICK(c, 12);
    // 010d50  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10d50u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 010d54  ret 
    X86_AT(c, 0x10d54u);
    c.eip = pop32(c); return;
L_10d90:
    X86_TICK(c, 7);
    // 010d90  cmp al, 1
    X86_AT(c, 0x10d90u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 010d92  ja 0x10d50
    X86_AT(c, 0x10d92u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10d50u); goto L_10d50; }
    X86_TICK(c, 22);
    // 010d94  mov cl, al
    X86_AT(c, 0x10d94u);
    s8(c, 1, g8(c, 0));
    // 010d96  add cl, cl
    X86_AT(c, 0x10d96u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 010d98  mov edi, 0x80
    X86_AT(c, 0x10d98u);
    c.r[7] = 0x80u;
    // 010d9d  shl edi, cl
    X86_AT(c, 0x10d9du);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[7] = r; }
    // 010d9f  mov ecx, edi
    X86_AT(c, 0x10d9fu);
    c.r[1] = c.r[7];
    // 010da1  mov bx, word ptr [ebp + 0x1c]
    X86_AT(c, 0x10da1u);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))));
    // 010da5  cmp bx, 0x400
    X86_AT(c, 0x10da5u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x400u, 0, 2);
    // 010daa  jae 0x10d50
    X86_AT(c, 0x10daau);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x10d50u); goto L_10d50; }
    X86_TICK(c, 7);
    // 010dac  cmp bx, 0x80
    X86_AT(c, 0x10dacu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x80u, 0, 2);
    // 010db1  jb 0x10d50
    X86_AT(c, 0x10db1u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x10d50u); goto L_10d50; }
    X86_TICK(c, 7);
    // 010db3  test al, al
    X86_AT(c, 0x10db3u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 010db5  je 0x10dbc
    X86_AT(c, 0x10db5u);
    if (x86_cc(c, 4)) { goto L_10dbc; }
    X86_TICK(c, 7);
    // 010db7  test bl, 3
    X86_AT(c, 0x10db7u);
    (void)x86_logic(c, g8(c, 3) & 0x3u, 1);
    // 010dba  jne 0x10d50
    X86_AT(c, 0x10dbau);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x10d50u); goto L_10d50; }
L_10dbc:
    X86_TICK(c, 68);
    // 010dbc  movzx edi, bx
    X86_AT(c, 0x10dbcu);
    c.r[7] = (c.r[3] & 0xFFFFu);
    // 010dbf  shl edi, 7
    X86_AT(c, 0x10dbfu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[7] = r; }
    // 010dc2  movzx eax, dh
    X86_AT(c, 0x10dc2u);
    c.r[0] = g8(c, 6);
    // 010dc5  imul ecx, eax
    X86_AT(c, 0x10dc5u);
    c.r[1] = x86_imul2(c, c.r[1], c.r[0], 4);
    // 010dc8  movzx eax, dl
    X86_AT(c, 0x10dc8u);
    c.r[0] = g8(c, 2);
    // 010dcb  imul ecx, eax
    X86_AT(c, 0x10dcbu);
    c.r[1] = x86_imul2(c, c.r[1], c.r[0], 4);
    // 010dce  shr ecx, 2
    X86_AT(c, 0x10dceu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 010dd1  lea eax, [edi + ecx*4]
    X86_AT(c, 0x10dd1u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[1] * 4);
    // 010dd4  cmp eax, 0x20000
    X86_AT(c, 0x10dd4u);
    (void)x86_sub(c, c.r[0], 0x20000u, 0, 4);
    // 010dd9  ja 0x10d50
    X86_AT(c, 0x10dd9u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10d50u); goto L_10d50; }
    X86_TICK(c, 21);
    // 010ddf  mov ax, 0x130
    X86_AT(c, 0x10ddfu);
    s16(c, 0, 0x130u);
    // 010de3  mov es, eax
    X86_AT(c, 0x10de3u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 010de5  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x10de5u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 010de7  ret 
    X86_AT(c, 0x10de7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10d90u, "ran off the end of a function");
}
void f_00010de8(X86Cpu& c) {
    goto L_10de8;
L_10d50:
    X86_TICK(c, 12);
    // 010d50  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10d50u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 010d54  ret 
    X86_AT(c, 0x10d54u);
    c.eip = pop32(c); return;
L_10de8:
    X86_TICK(c, 11);
    // 010de8  mov di, word ptr [ebp + 0x1c]
    X86_AT(c, 0x10de8u);
    s16(c, 7, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))));
    // 010dec  cmp di, 0x100
    X86_AT(c, 0x10decu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x100u, 0, 2);
    // 010df1  jb 0x10d50
    X86_AT(c, 0x10df1u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x10d50u); goto L_10d50; }
    X86_TICK(c, 7);
    // 010df7  cmp di, 0x1ff
    X86_AT(c, 0x10df7u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1FFu, 0, 2);
    // 010dfc  ja 0x10d50
    X86_AT(c, 0x10dfcu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10d50u); goto L_10d50; }
    X86_TICK(c, 20);
    // 010e02  movzx edi, di
    X86_AT(c, 0x10e02u);
    c.r[7] = (c.r[7] & 0xFFFFu);
    // 010e05  shl edi, 5
    X86_AT(c, 0x10e05u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[7] = r; }
    // 010e08  movzx ecx, dx
    X86_AT(c, 0x10e08u);
    c.r[1] = (c.r[2] & 0xFFFFu);
    // 010e0b  lea ecx, [ecx*8]
    X86_AT(c, 0x10e0bu);
    c.r[1] = (uint32_t)(c.r[1] * 8);
    // 010e12  lea eax, [edi + ecx*4]
    X86_AT(c, 0x10e12u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[1] * 4);
    // 010e15  cmp eax, 0x4000
    X86_AT(c, 0x10e15u);
    (void)x86_sub(c, c.r[0], 0x4000u, 0, 4);
    // 010e1a  ja 0x10d50
    X86_AT(c, 0x10e1au);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10d50u); goto L_10d50; }
    X86_TICK(c, 21);
    // 010e20  mov ax, 0x130
    X86_AT(c, 0x10e20u);
    s16(c, 0, 0x130u);
    // 010e24  mov es, eax
    X86_AT(c, 0x10e24u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 010e26  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x10e26u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 010e28  ret 
    X86_AT(c, 0x10e28u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10de8u, "ran off the end of a function");
}
void f_00010e2c(X86Cpu& c) {
    goto L_10e2c;
L_10d50:
    X86_TICK(c, 12);
    // 010d50  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10d50u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 010d54  ret 
    X86_AT(c, 0x10d54u);
    c.eip = pop32(c); return;
L_10e2c:
    X86_TICK(c, 7);
    // 010e2c  cmp al, 3
    X86_AT(c, 0x10e2cu);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 010e2e  ja 0x10d50
    X86_AT(c, 0x10e2eu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10d50u); goto L_10d50; }
    X86_TICK(c, 11);
    // 010e34  mov cx, word ptr [ebp + 0x1c]
    X86_AT(c, 0x10e34u);
    s16(c, 1, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))));
    // 010e38  cmp cx, 0x400
    X86_AT(c, 0x10e38u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x400u, 0, 2);
    // 010e3d  jae 0x10d50
    X86_AT(c, 0x10e3du);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x10d50u); goto L_10d50; }
    X86_TICK(c, 7);
    // 010e43  test dh, dh
    X86_AT(c, 0x10e43u);
    (void)x86_logic(c, g8(c, 6) & g8(c, 6), 1);
    // 010e45  je 0x10d50
    X86_AT(c, 0x10e45u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x10d50u); goto L_10d50; }
    X86_TICK(c, 7);
    // 010e4b  test dl, dl
    X86_AT(c, 0x10e4bu);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 010e4d  je 0x10d50
    X86_AT(c, 0x10e4du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x10d50u); goto L_10d50; }
    X86_TICK(c, 44);
    // 010e53  movzx ecx, cx
    X86_AT(c, 0x10e53u);
    c.r[1] = (c.r[1] & 0xFFFFu);
    // 010e56  lea ecx, [ecx*8]
    X86_AT(c, 0x10e56u);
    c.r[1] = (uint32_t)(c.r[1] * 8);
    // 010e5d  movzx eax, dh
    X86_AT(c, 0x10e5du);
    c.r[0] = g8(c, 6);
    // 010e60  lea eax, [eax*8]
    X86_AT(c, 0x10e60u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 010e67  movzx ebx, dl
    X86_AT(c, 0x10e67u);
    c.r[3] = g8(c, 2);
    // 010e6a  imul eax, ebx
    X86_AT(c, 0x10e6au);
    c.r[0] = x86_imul2(c, c.r[0], c.r[3], 4);
    // 010e6d  add eax, ecx
    X86_AT(c, 0x10e6du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[1], 0, 4); }
    // 010e6f  cmp eax, 0x2000
    X86_AT(c, 0x10e6fu);
    (void)x86_sub(c, c.r[0], 0x2000u, 0, 4);
    // 010e74  ja 0x10d50
    X86_AT(c, 0x10e74u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10d50u); goto L_10d50; }
    X86_TICK(c, 59);
    // 010e7a  mov ax, 0x130
    X86_AT(c, 0x10e7au);
    s16(c, 0, 0x130u);
    // 010e7e  mov ds, eax
    X86_AT(c, 0x10e7eu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 010e80  mov ax, di
    X86_AT(c, 0x10e80u);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 010e83  shl eax, 0x10
    X86_AT(c, 0x10e83u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 010e86  mov ax, si
    X86_AT(c, 0x10e86u);
    s16(c, 0, (c.r[6] & 0xFFFFu));
    // 010e89  and eax, 0x1ff01ff
    X86_AT(c, 0x10e89u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1FF01FFu, 4); }
    // 010e8e  movzx ebx, dh
    X86_AT(c, 0x10e8eu);
    c.r[3] = g8(c, 6);
    // 010e91  lea ebx, [ebx*8]
    X86_AT(c, 0x10e91u);
    c.r[3] = (uint32_t)(c.r[3] * 8);
    // 010e98  push eax
    X86_AT(c, 0x10e98u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 010e99  push ecx
    X86_AT(c, 0x10e99u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 010e9a  mov si, 0x10
    X86_AT(c, 0x10e9au);
    s16(c, 6, 0x10u);
    // 010e9e  mov di, si
    X86_AT(c, 0x10e9eu);
    s16(c, 7, (c.r[6] & 0xFFFFu));
    // 010ea1  mov al, byte ptr [ebp + 0x20]
    X86_AT(c, 0x10ea1u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u))));
    // 010ea4  mov cl, al
    X86_AT(c, 0x10ea4u);
    s8(c, 1, g8(c, 0));
    // 010ea6  and cl, 1
    X86_AT(c, 0x10ea6u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x1u, 1)); }
    // 010ea9  shr si, cl
    X86_AT(c, 0x10ea9u);
    { uint32_t v = (c.r[6] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 6, r); }
    // 010eac  mov cl, al
    X86_AT(c, 0x10eacu);
    s8(c, 1, g8(c, 0));
    // 010eae  shr cl, 1
    X86_AT(c, 0x10eaeu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 010eb0  shr di, cl
    X86_AT(c, 0x10eb0u);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 7, r); }
    // 010eb3  movzx esi, si
    X86_AT(c, 0x10eb3u);
    c.r[6] = (c.r[6] & 0xFFFFu);
    // 010eb6  shl edi, 0x10
    X86_AT(c, 0x10eb6u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[7] = r; }
    // 010eb9  pop ecx
    X86_AT(c, 0x10eb9u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 010eba  pop eax
    X86_AT(c, 0x10ebau);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_10ebb:
    X86_TICK(c, 6);
    // 010ebb  push eax
    X86_AT(c, 0x10ebbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 010ebc  push ecx
    X86_AT(c, 0x10ebcu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 010ebd  push edx
    X86_AT(c, 0x10ebdu);
    { uint32_t v = c.r[2]; push32(c, v); }
L_10ebe:
    X86_TICK(c, 15);
    // 010ebe  mov dword ptr [ecx], eax
    X86_AT(c, 0x10ebeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[0]);
    // 010ec0  add eax, esi
    X86_AT(c, 0x10ec0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 010ec2  and eax, 0xffff01ff
    X86_AT(c, 0x10ec2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFF01FFu, 4); }
    // 010ec7  add ecx, 8
    X86_AT(c, 0x10ec7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x8u, 0, 4); }
    // 010eca  dec dh
    X86_AT(c, 0x10ecau);
    { uint32_t v = g8(c, 6); s8(c, 6, x86_dec(c, v, 1)); }
    // 010ecc  jne 0x10ebe
    X86_AT(c, 0x10eccu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x10ebeu); goto L_10ebe; }
    X86_TICK(c, 25);
    // 010ece  pop edx
    X86_AT(c, 0x10eceu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010ecf  pop ecx
    X86_AT(c, 0x10ecfu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 010ed0  pop eax
    X86_AT(c, 0x10ed0u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 010ed1  add eax, edi
    X86_AT(c, 0x10ed1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 010ed3  and eax, 0x1ffffff
    X86_AT(c, 0x10ed3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1FFFFFFu, 4); }
    // 010ed8  add ecx, ebx
    X86_AT(c, 0x10ed8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[3], 0, 4); }
    // 010eda  dec dl
    X86_AT(c, 0x10edau);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 010edc  jne 0x10ebb
    X86_AT(c, 0x10edcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x10ebbu); goto L_10ebb; }
    X86_TICK(c, 10);
    // 010ede  ret 
    X86_AT(c, 0x10edeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10e2cu, "ran off the end of a function");
}
void f_00010ee0(X86Cpu& c) {
    goto L_10ee0;
L_10d50:
    X86_TICK(c, 12);
    // 010d50  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10d50u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 010d54  ret 
    X86_AT(c, 0x10d54u);
    c.eip = pop32(c); return;
L_10ee0:
    X86_TICK(c, 7);
    // 010ee0  test dh, dh
    X86_AT(c, 0x10ee0u);
    (void)x86_logic(c, g8(c, 6) & g8(c, 6), 1);
    // 010ee2  je 0x10d50
    X86_AT(c, 0x10ee2u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x10d50u); goto L_10d50; }
    X86_TICK(c, 7);
    // 010ee8  test dl, dl
    X86_AT(c, 0x10ee8u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 010eea  je 0x10d50
    X86_AT(c, 0x10eeau);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x10d50u); goto L_10d50; }
    X86_TICK(c, 29);
    // 010ef0  test word ptr [ebp + 4], 0x8000
    X86_AT(c, 0x10ef0u);
    (void)x86_logic(c, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x4u))) & 0x8000u, 2);
    // 010ef6  sete cl
    X86_AT(c, 0x10ef6u);
    s8(c, 1, x86_cc(c, 4) ? 1u : 0u);
    // 010ef9  mov eax, 1
    X86_AT(c, 0x10ef9u);
    c.r[0] = 0x1u;
    // 010efe  add cl, cl
    X86_AT(c, 0x10efeu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 010f00  shl eax, cl
    X86_AT(c, 0x10f00u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 010f02  mov cx, word ptr [ebp + 0x1c]
    X86_AT(c, 0x10f02u);
    s16(c, 1, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))));
    // 010f06  cmp cx, 0x400
    X86_AT(c, 0x10f06u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x400u, 0, 2);
    // 010f0b  jae 0x10d50
    X86_AT(c, 0x10f0bu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x10d50u); goto L_10d50; }
    X86_TICK(c, 44);
    // 010f11  movzx ecx, cx
    X86_AT(c, 0x10f11u);
    c.r[1] = (c.r[1] & 0xFFFFu);
    // 010f14  lea ecx, [ecx*8 + 4]
    X86_AT(c, 0x10f14u);
    c.r[1] = (uint32_t)(c.r[1] * 8 + 0x4u);
    // 010f1b  movzx ebx, dh
    X86_AT(c, 0x10f1bu);
    c.r[3] = g8(c, 6);
    // 010f1e  lea ebx, [ebx*8]
    X86_AT(c, 0x10f1eu);
    c.r[3] = (uint32_t)(c.r[3] * 8);
    // 010f25  movzx esi, dl
    X86_AT(c, 0x10f25u);
    c.r[6] = g8(c, 2);
    // 010f28  imul ebx, esi
    X86_AT(c, 0x10f28u);
    c.r[3] = x86_imul2(c, c.r[3], c.r[6], 4);
    // 010f2b  add ebx, ecx
    X86_AT(c, 0x10f2bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[1], 0, 4); }
    // 010f2d  cmp ebx, 0x2004
    X86_AT(c, 0x10f2du);
    (void)x86_sub(c, c.r[3], 0x2004u, 0, 4);
    // 010f33  ja 0x10d50
    X86_AT(c, 0x10f33u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10d50u); goto L_10d50; }
    X86_TICK(c, 67);
    // 010f39  movzx ebx, dh
    X86_AT(c, 0x10f39u);
    c.r[3] = g8(c, 6);
    // 010f3c  imul ebx, eax
    X86_AT(c, 0x10f3cu);
    c.r[3] = x86_imul2(c, c.r[3], c.r[0], 4);
    // 010f3f  imul ebx, esi
    X86_AT(c, 0x10f3fu);
    c.r[3] = x86_imul2(c, c.r[3], c.r[6], 4);
    // 010f42  mov si, word ptr [ebp + 8]
    X86_AT(c, 0x10f42u);
    s16(c, 6, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 010f46  shl edi, 0x10
    X86_AT(c, 0x10f46u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[7] = r; }
    // 010f49  mov di, si
    X86_AT(c, 0x10f49u);
    s16(c, 7, (c.r[6] & 0xFFFFu));
    // 010f4c  and esi, 0x3ff
    X86_AT(c, 0x10f4cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0x3FFu, 4); }
    // 010f52  add ebx, esi
    X86_AT(c, 0x10f52u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[6], 0, 4); }
    // 010f54  cmp ebx, 0x400
    X86_AT(c, 0x10f54u);
    (void)x86_sub(c, c.r[3], 0x400u, 0, 4);
    // 010f5a  ja 0x10d50
    X86_AT(c, 0x10f5au);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10d50u); goto L_10d50; }
    X86_TICK(c, 9);
    // 010f60  mov bx, 0x130
    X86_AT(c, 0x10f60u);
    s16(c, 3, 0x130u);
    // 010f64  mov ds, ebx
    X86_AT(c, 0x10f64u);
    x86_load_seg(c, 3, (c.r[3] & 0xFFFFu) & 0xFFFFu);
    // 010f66  movzx ebx, dh
    X86_AT(c, 0x10f66u);
    c.r[3] = g8(c, 6);
    // 010f69  lea ebx, [ebx*8]
    X86_AT(c, 0x10f69u);
    c.r[3] = (uint32_t)(c.r[3] * 8);
L_10f70:
    X86_TICK(c, 4);
    // 010f70  push ecx
    X86_AT(c, 0x10f70u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 010f71  push edx
    X86_AT(c, 0x10f71u);
    { uint32_t v = c.r[2]; push32(c, v); }
L_10f72:
    X86_TICK(c, 13);
    // 010f72  mov dword ptr [ecx], edi
    X86_AT(c, 0x10f72u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[7]);
    // 010f74  add ecx, 8
    X86_AT(c, 0x10f74u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x8u, 0, 4); }
    // 010f77  add edi, eax
    X86_AT(c, 0x10f77u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 010f79  dec dh
    X86_AT(c, 0x10f79u);
    { uint32_t v = g8(c, 6); s8(c, 6, x86_dec(c, v, 1)); }
    // 010f7b  jne 0x10f72
    X86_AT(c, 0x10f7bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x10f72u); goto L_10f72; }
    X86_TICK(c, 17);
    // 010f7d  pop edx
    X86_AT(c, 0x10f7du);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010f7e  pop ecx
    X86_AT(c, 0x10f7eu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 010f7f  add ecx, ebx
    X86_AT(c, 0x10f7fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[3], 0, 4); }
    // 010f81  dec dl
    X86_AT(c, 0x10f81u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 010f83  jne 0x10f70
    X86_AT(c, 0x10f83u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x10f70u); goto L_10f70; }
    X86_TICK(c, 10);
    // 010f85  ret 
    X86_AT(c, 0x10f85u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10ee0u, "ran off the end of a function");
}
void f_00010f88(X86Cpu& c) {
    goto L_10f88;
L_10d50:
    X86_TICK(c, 12);
    // 010d50  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10d50u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 010d54  ret 
    X86_AT(c, 0x10d54u);
    c.eip = pop32(c); return;
L_10f88:
    X86_TICK(c, 11);
    // 010f88  mov cx, word ptr [ebp + 0x1c]
    X86_AT(c, 0x10f88u);
    s16(c, 1, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))));
    // 010f8c  cmp cx, 0x400
    X86_AT(c, 0x10f8cu);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x400u, 0, 2);
    // 010f91  jae 0x10d50
    X86_AT(c, 0x10f91u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x10d50u); goto L_10d50; }
    X86_TICK(c, 7);
    // 010f97  test dh, dh
    X86_AT(c, 0x10f97u);
    (void)x86_logic(c, g8(c, 6) & g8(c, 6), 1);
    // 010f99  je 0x10d50
    X86_AT(c, 0x10f99u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x10d50u); goto L_10d50; }
    X86_TICK(c, 7);
    // 010f9f  test dl, dl
    X86_AT(c, 0x10f9fu);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 010fa1  je 0x10d50
    X86_AT(c, 0x10fa1u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x10d50u); goto L_10d50; }
    X86_TICK(c, 44);
    // 010fa7  movzx ecx, cx
    X86_AT(c, 0x10fa7u);
    c.r[1] = (c.r[1] & 0xFFFFu);
    // 010faa  lea ecx, [ecx*8]
    X86_AT(c, 0x10faau);
    c.r[1] = (uint32_t)(c.r[1] * 8);
    // 010fb1  movzx eax, dh
    X86_AT(c, 0x10fb1u);
    c.r[0] = g8(c, 6);
    // 010fb4  lea eax, [eax*8]
    X86_AT(c, 0x10fb4u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 010fbb  movzx ebx, dl
    X86_AT(c, 0x10fbbu);
    c.r[3] = g8(c, 2);
    // 010fbe  imul eax, ebx
    X86_AT(c, 0x10fbeu);
    c.r[0] = x86_imul2(c, c.r[0], c.r[3], 4);
    // 010fc1  add eax, ecx
    X86_AT(c, 0x10fc1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[1], 0, 4); }
    // 010fc3  cmp eax, 0x2000
    X86_AT(c, 0x10fc3u);
    (void)x86_sub(c, c.r[0], 0x2000u, 0, 4);
    // 010fc8  ja 0x10d50
    X86_AT(c, 0x10fc8u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10d50u); goto L_10d50; }
    X86_TICK(c, 13);
    // 010fce  mov ax, 0x130
    X86_AT(c, 0x10fceu);
    s16(c, 0, 0x130u);
    // 010fd2  mov ds, eax
    X86_AT(c, 0x10fd2u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 010fd4  mov ax, di
    X86_AT(c, 0x10fd4u);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 010fd7  shl eax, 0x10
    X86_AT(c, 0x10fd7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 010fda  mov ax, si
    X86_AT(c, 0x10fdau);
    s16(c, 0, (c.r[6] & 0xFFFFu));
    // 010fdd  and eax, 0x1ff01ff
    X86_AT(c, 0x10fddu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1FF01FFu, 4); }
L_10fe2:
    X86_TICK(c, 4);
    // 010fe2  push eax
    X86_AT(c, 0x10fe2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 010fe3  push edx
    X86_AT(c, 0x10fe3u);
    { uint32_t v = c.r[2]; push32(c, v); }
L_10fe4:
    X86_TICK(c, 23);
    // 010fe4  add dword ptr [ecx], eax
    X86_AT(c, 0x10fe4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[1])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 010fe6  and dword ptr [ecx], 0x1ff01ff
    X86_AT(c, 0x10fe6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[1])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF01FFu, 4)); }
    // 010fec  add ecx, 8
    X86_AT(c, 0x10fecu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x8u, 0, 4); }
    // 010fef  dec dh
    X86_AT(c, 0x10fefu);
    { uint32_t v = g8(c, 6); s8(c, 6, x86_dec(c, v, 1)); }
    // 010ff1  jne 0x10fe4
    X86_AT(c, 0x10ff1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x10fe4u); goto L_10fe4; }
    X86_TICK(c, 15);
    // 010ff3  pop edx
    X86_AT(c, 0x10ff3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010ff4  pop eax
    X86_AT(c, 0x10ff4u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 010ff5  dec dl
    X86_AT(c, 0x10ff5u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_dec(c, v, 1)); }
    // 010ff7  jne 0x10fe2
    X86_AT(c, 0x10ff7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x10fe2u); goto L_10fe2; }
    X86_TICK(c, 10);
    // 010ff9  ret 
    X86_AT(c, 0x10ff9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10f88u, "ran off the end of a function");
}
void f_00010ffc(X86Cpu& c) {
    X86_TICK(c, 146);
    // 010ffc  and si, 0x1ff
    X86_AT(c, 0x10ffcu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & 0x1FFu, 2)); }
    // 011001  and di, 0x1ff
    X86_AT(c, 0x11001u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & 0x1FFu, 2)); }
    // 011006  mov cx, si
    X86_AT(c, 0x11006u);
    s16(c, 1, (c.r[6] & 0xFFFFu));
    // 011009  mov dx, 0x450
    X86_AT(c, 0x11009u);
    s16(c, 2, 0x450u);
    // 01100d  mov al, 2
    X86_AT(c, 0x1100du);
    s8(c, 0, 0x2u);
    // 01100f  out dx, al
    X86_AT(c, 0x1100fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011010  mov dx, 0x452
    X86_AT(c, 0x11010u);
    s16(c, 2, 0x452u);
    // 011014  mov al, cl
    X86_AT(c, 0x11014u);
    s8(c, 0, g8(c, 1));
    // 011016  out dx, al
    X86_AT(c, 0x11016u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011017  mov dx, 0x450
    X86_AT(c, 0x11017u);
    s16(c, 2, 0x450u);
    // 01101b  mov al, 3
    X86_AT(c, 0x1101bu);
    s8(c, 0, 0x3u);
    // 01101d  out dx, al
    X86_AT(c, 0x1101du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01101e  mov dx, 0x452
    X86_AT(c, 0x1101eu);
    s16(c, 2, 0x452u);
    // 011022  mov al, ch
    X86_AT(c, 0x11022u);
    s8(c, 0, g8(c, 5));
    // 011024  out dx, al
    X86_AT(c, 0x11024u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011025  mov cx, di
    X86_AT(c, 0x11025u);
    s16(c, 1, (c.r[7] & 0xFFFFu));
    // 011028  mov dx, 0x450
    X86_AT(c, 0x11028u);
    s16(c, 2, 0x450u);
    // 01102c  mov al, 4
    X86_AT(c, 0x1102cu);
    s8(c, 0, 0x4u);
    // 01102e  out dx, al
    X86_AT(c, 0x1102eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01102f  mov dx, 0x452
    X86_AT(c, 0x1102fu);
    s16(c, 2, 0x452u);
    // 011033  mov al, cl
    X86_AT(c, 0x11033u);
    s8(c, 0, g8(c, 1));
    // 011035  out dx, al
    X86_AT(c, 0x11035u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011036  mov dx, 0x450
    X86_AT(c, 0x11036u);
    s16(c, 2, 0x450u);
    // 01103a  mov al, 5
    X86_AT(c, 0x1103au);
    s8(c, 0, 0x5u);
    // 01103c  out dx, al
    X86_AT(c, 0x1103cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01103d  mov dx, 0x452
    X86_AT(c, 0x1103du);
    s16(c, 2, 0x452u);
    // 011041  mov al, ch
    X86_AT(c, 0x11041u);
    s8(c, 0, g8(c, 5));
    // 011043  out dx, al
    X86_AT(c, 0x11043u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011044  ret 
    X86_AT(c, 0x11044u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10ffcu, "ran off the end of a function");
}
void f_00011048(X86Cpu& c) {
    goto L_11048;
L_10d50:
    X86_TICK(c, 12);
    // 010d50  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10d50u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 010d54  ret 
    X86_AT(c, 0x10d54u);
    c.eip = pop32(c); return;
L_11048:
    X86_TICK(c, 11);
    // 011048  mov cx, word ptr [ebp + 0x1c]
    X86_AT(c, 0x11048u);
    s16(c, 1, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))));
    // 01104c  cmp cx, 0x400
    X86_AT(c, 0x1104cu);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x400u, 0, 2);
    // 011051  jae 0x10d50
    X86_AT(c, 0x11051u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x10d50u); goto L_10d50; }
    X86_TICK(c, 48);
    // 011057  movzx esi, cx
    X86_AT(c, 0x11057u);
    c.r[6] = (c.r[1] & 0xFFFFu);
    // 01105a  lea esi, [esi*8]
    X86_AT(c, 0x1105au);
    c.r[6] = (uint32_t)(c.r[6] * 8);
    // 011061  mov ax, 0x130
    X86_AT(c, 0x11061u);
    s16(c, 0, 0x130u);
    // 011065  mov ds, eax
    X86_AT(c, 0x11065u);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 011067  movzx ecx, dh
    X86_AT(c, 0x11067u);
    c.r[1] = g8(c, 6);
    // 01106a  movzx eax, dl
    X86_AT(c, 0x1106au);
    c.r[0] = g8(c, 2);
    // 01106d  imul ecx, eax
    X86_AT(c, 0x1106du);
    c.r[1] = x86_imul2(c, c.r[1], c.r[0], 4);
    // 011070  add ecx, ecx
    X86_AT(c, 0x11070u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[1], 0, 4); }
    // 011072  lea eax, [esi + ecx*4]
    X86_AT(c, 0x11072u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[1] * 4);
    // 011075  cmp eax, 0x2000
    X86_AT(c, 0x11075u);
    (void)x86_sub(c, c.r[0], 0x2000u, 0, 4);
    // 01107a  ja 0x10d50
    X86_AT(c, 0x1107au);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x10d50u); goto L_10d50; }
    X86_TICK(c, 17);
    // 011080  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x11080u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 011082  ret 
    X86_AT(c, 0x11082u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11048u, "ran off the end of a function");
}
void f_000110b0(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0110b0  pushfd 
    X86_AT(c, 0x110b0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0110b1  push ebp
    X86_AT(c, 0x110b1u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0110b2  cld 
    X86_AT(c, 0x110b2u);
    c.fl &= ~X86_DF;
    // 0110b3  cmp ah, 0x51
    X86_AT(c, 0x110b3u);
    (void)x86_sub(c, g8(c, 4), 0x51u, 0, 1);
    // 0110b6  ja 0x110c6
    X86_AT(c, 0x110b6u);
    if (x86_cc(c, 7)) { goto L_110c6; }
    X86_TICK(c, 10);
    // 0110b8  movzx ebp, ah
    X86_AT(c, 0x110b8u);
    c.r[5] = g8(c, 4);
    // 0110bb  call dword ptr cs:[ebp*4 + 0x110cc]
    X86_AT(c, 0x110bbu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[5] * 4 + 0x110CCu))); push32(c, 0x110c3u);
      switch (t) {
      case 0x11214u: f_00011214(c); break;
      case 0x11224u: f_00011224(c); break;
      case 0x11234u: f_00011234(c); break;
      case 0x11244u: f_00011244(c); break;
      case 0x11254u: f_00011254(c); break;
      case 0x11264u: f_00011264(c); break;
      case 0x11274u: f_00011274(c); break;
      case 0x11284u: f_00011284(c); break;
      case 0x11294u: f_00011294(c); break;
      case 0x112a4u: f_000112a4(c); break;
      case 0x112b4u: f_000112b4(c); break;
      case 0x11334u: f_00011334(c); break;
      case 0x11374u: f_00011374(c); break;
      case 0x115d4u: f_000115d4(c); break;
      case 0x1160cu: f_0001160c(c); break;
      case 0x11664u: f_00011664(c); break;
      case 0x117dcu: f_000117dc(c); break;
      case 0x1180cu: f_0001180c(c); break;
      case 0x1183cu: f_0001183c(c); break;
      case 0x11994u: f_00011994(c); break;
      case 0x11a90u: f_00011a90(c); break;
      case 0x11ad0u: f_00011ad0(c); break;
      case 0x11b04u: f_00011b04(c); break;
      case 0x11b1cu: f_00011b1c(c); break;
      case 0x11b34u: f_00011b34(c); break;
      case 0x11b40u: f_00011b40(c); break;
      case 0x11c48u: f_00011c48(c); break;
      case 0x11c8cu: f_00011c8c(c); break;
      case 0x11ca8u: f_00011ca8(c); break;
      case 0x11cdcu: f_00011cdc(c); break;
      case 0x11d14u: f_00011d14(c); break;
      case 0x122e7u: f_000122e7(c); break;
      case 0x12430u: f_00012430(c); break;
      case 0x124f0u: f_000124f0(c); break;
      case 0x12620u: f_00012620(c); break;
      case 0x126bcu: f_000126bc(c); break;
      case 0x127a8u: f_000127a8(c); break;
      case 0x129b0u: f_000129b0(c); break;
      case 0x12d88u: f_00012d88(c); break;
      case 0x12dbcu: f_00012dbc(c); break;
      case 0x12fbcu: f_00012fbc(c); break;
      case 0x1302cu: f_0001302c(c); break;
      case 0x13054u: f_00013054(c); break;
      case 0x130f4u: f_000130f4(c); break;
      case 0x13194u: f_00013194(c); break;
      case 0x13364u: f_00013364(c); break;
      case 0x13398u: f_00013398(c); break;
      case 0x133f0u: f_000133f0(c); break;
      case 0x1343cu: f_0001343c(c); break;
      case 0x134a0u: f_000134a0(c); break;
      case 0x134c0u: f_000134c0(c); break;
      case 0x134dcu: f_000134dc(c); break;
      case 0x134f0u: f_000134f0(c); break;
      case 0x1350cu: f_0001350c(c); break;
      case 0x13534u: f_00013534(c); break;
      case 0x1355au: f_0001355a(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x110c3u); }
L_110c3:
    X86_TICK(c, 16);
    // 0110c3  pop ebp
    X86_AT(c, 0x110c3u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0110c4  popfd 
    X86_AT(c, 0x110c4u);
    x86_popfd(c, 4);
    // 0110c5  retf 
    X86_AT(c, 0x110c5u);
    x86_retf(c, 4, 0u); return;
L_110c6:
    X86_TICK(c, 9);
    // 0110c6  mov al, 4
    X86_AT(c, 0x110c6u);
    s8(c, 0, 0x4u);
    // 0110c8  jmp 0x110c3
    X86_AT(c, 0x110c8u);
    X86_POLL(c, 0x110c3u); goto L_110c3;
    x86_fault(c, 0x110b0u, "ran off the end of a function");
}
void f_000110b1(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0110b1  push ebp
    X86_AT(c, 0x110b1u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0110b2  cld 
    X86_AT(c, 0x110b2u);
    c.fl &= ~X86_DF;
    // 0110b3  cmp ah, 0x51
    X86_AT(c, 0x110b3u);
    (void)x86_sub(c, g8(c, 4), 0x51u, 0, 1);
    // 0110b6  ja 0x110c6
    X86_AT(c, 0x110b6u);
    if (x86_cc(c, 7)) { goto L_110c6; }
    X86_TICK(c, 10);
    // 0110b8  movzx ebp, ah
    X86_AT(c, 0x110b8u);
    c.r[5] = g8(c, 4);
    // 0110bb  call dword ptr cs:[ebp*4 + 0x110cc]
    X86_AT(c, 0x110bbu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[5] * 4 + 0x110CCu))); push32(c, 0x110c3u);
      switch (t) {
      case 0x11214u: f_00011214(c); break;
      case 0x11224u: f_00011224(c); break;
      case 0x11234u: f_00011234(c); break;
      case 0x11244u: f_00011244(c); break;
      case 0x11254u: f_00011254(c); break;
      case 0x11264u: f_00011264(c); break;
      case 0x11274u: f_00011274(c); break;
      case 0x11284u: f_00011284(c); break;
      case 0x11294u: f_00011294(c); break;
      case 0x112a4u: f_000112a4(c); break;
      case 0x112b4u: f_000112b4(c); break;
      case 0x11334u: f_00011334(c); break;
      case 0x11374u: f_00011374(c); break;
      case 0x115d4u: f_000115d4(c); break;
      case 0x1160cu: f_0001160c(c); break;
      case 0x11664u: f_00011664(c); break;
      case 0x117dcu: f_000117dc(c); break;
      case 0x1180cu: f_0001180c(c); break;
      case 0x1183cu: f_0001183c(c); break;
      case 0x11994u: f_00011994(c); break;
      case 0x11a90u: f_00011a90(c); break;
      case 0x11ad0u: f_00011ad0(c); break;
      case 0x11b04u: f_00011b04(c); break;
      case 0x11b1cu: f_00011b1c(c); break;
      case 0x11b34u: f_00011b34(c); break;
      case 0x11b40u: f_00011b40(c); break;
      case 0x11c48u: f_00011c48(c); break;
      case 0x11c8cu: f_00011c8c(c); break;
      case 0x11ca8u: f_00011ca8(c); break;
      case 0x11cdcu: f_00011cdc(c); break;
      case 0x11d14u: f_00011d14(c); break;
      case 0x122e7u: f_000122e7(c); break;
      case 0x12430u: f_00012430(c); break;
      case 0x124f0u: f_000124f0(c); break;
      case 0x12620u: f_00012620(c); break;
      case 0x126bcu: f_000126bc(c); break;
      case 0x127a8u: f_000127a8(c); break;
      case 0x129b0u: f_000129b0(c); break;
      case 0x12d88u: f_00012d88(c); break;
      case 0x12dbcu: f_00012dbc(c); break;
      case 0x12fbcu: f_00012fbc(c); break;
      case 0x1302cu: f_0001302c(c); break;
      case 0x13054u: f_00013054(c); break;
      case 0x130f4u: f_000130f4(c); break;
      case 0x13194u: f_00013194(c); break;
      case 0x13364u: f_00013364(c); break;
      case 0x13398u: f_00013398(c); break;
      case 0x133f0u: f_000133f0(c); break;
      case 0x1343cu: f_0001343c(c); break;
      case 0x134a0u: f_000134a0(c); break;
      case 0x134c0u: f_000134c0(c); break;
      case 0x134dcu: f_000134dc(c); break;
      case 0x134f0u: f_000134f0(c); break;
      case 0x1350cu: f_0001350c(c); break;
      case 0x13534u: f_00013534(c); break;
      case 0x1355au: f_0001355a(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x110c3u); }
L_110c3:
    X86_TICK(c, 16);
    // 0110c3  pop ebp
    X86_AT(c, 0x110c3u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0110c4  popfd 
    X86_AT(c, 0x110c4u);
    x86_popfd(c, 4);
    // 0110c5  retf 
    X86_AT(c, 0x110c5u);
    x86_retf(c, 4, 0u); return;
L_110c6:
    X86_TICK(c, 9);
    // 0110c6  mov al, 4
    X86_AT(c, 0x110c6u);
    s8(c, 0, 0x4u);
    // 0110c8  jmp 0x110c3
    X86_AT(c, 0x110c8u);
    X86_POLL(c, 0x110c3u); goto L_110c3;
    x86_fault(c, 0x110b1u, "ran off the end of a function");
}
void f_000110b2(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0110b2  cld 
    X86_AT(c, 0x110b2u);
    c.fl &= ~X86_DF;
    // 0110b3  cmp ah, 0x51
    X86_AT(c, 0x110b3u);
    (void)x86_sub(c, g8(c, 4), 0x51u, 0, 1);
    // 0110b6  ja 0x110c6
    X86_AT(c, 0x110b6u);
    if (x86_cc(c, 7)) { goto L_110c6; }
    X86_TICK(c, 10);
    // 0110b8  movzx ebp, ah
    X86_AT(c, 0x110b8u);
    c.r[5] = g8(c, 4);
    // 0110bb  call dword ptr cs:[ebp*4 + 0x110cc]
    X86_AT(c, 0x110bbu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[5] * 4 + 0x110CCu))); push32(c, 0x110c3u);
      switch (t) {
      case 0x11214u: f_00011214(c); break;
      case 0x11224u: f_00011224(c); break;
      case 0x11234u: f_00011234(c); break;
      case 0x11244u: f_00011244(c); break;
      case 0x11254u: f_00011254(c); break;
      case 0x11264u: f_00011264(c); break;
      case 0x11274u: f_00011274(c); break;
      case 0x11284u: f_00011284(c); break;
      case 0x11294u: f_00011294(c); break;
      case 0x112a4u: f_000112a4(c); break;
      case 0x112b4u: f_000112b4(c); break;
      case 0x11334u: f_00011334(c); break;
      case 0x11374u: f_00011374(c); break;
      case 0x115d4u: f_000115d4(c); break;
      case 0x1160cu: f_0001160c(c); break;
      case 0x11664u: f_00011664(c); break;
      case 0x117dcu: f_000117dc(c); break;
      case 0x1180cu: f_0001180c(c); break;
      case 0x1183cu: f_0001183c(c); break;
      case 0x11994u: f_00011994(c); break;
      case 0x11a90u: f_00011a90(c); break;
      case 0x11ad0u: f_00011ad0(c); break;
      case 0x11b04u: f_00011b04(c); break;
      case 0x11b1cu: f_00011b1c(c); break;
      case 0x11b34u: f_00011b34(c); break;
      case 0x11b40u: f_00011b40(c); break;
      case 0x11c48u: f_00011c48(c); break;
      case 0x11c8cu: f_00011c8c(c); break;
      case 0x11ca8u: f_00011ca8(c); break;
      case 0x11cdcu: f_00011cdc(c); break;
      case 0x11d14u: f_00011d14(c); break;
      case 0x122e7u: f_000122e7(c); break;
      case 0x12430u: f_00012430(c); break;
      case 0x124f0u: f_000124f0(c); break;
      case 0x12620u: f_00012620(c); break;
      case 0x126bcu: f_000126bc(c); break;
      case 0x127a8u: f_000127a8(c); break;
      case 0x129b0u: f_000129b0(c); break;
      case 0x12d88u: f_00012d88(c); break;
      case 0x12dbcu: f_00012dbc(c); break;
      case 0x12fbcu: f_00012fbc(c); break;
      case 0x1302cu: f_0001302c(c); break;
      case 0x13054u: f_00013054(c); break;
      case 0x130f4u: f_000130f4(c); break;
      case 0x13194u: f_00013194(c); break;
      case 0x13364u: f_00013364(c); break;
      case 0x13398u: f_00013398(c); break;
      case 0x133f0u: f_000133f0(c); break;
      case 0x1343cu: f_0001343c(c); break;
      case 0x134a0u: f_000134a0(c); break;
      case 0x134c0u: f_000134c0(c); break;
      case 0x134dcu: f_000134dc(c); break;
      case 0x134f0u: f_000134f0(c); break;
      case 0x1350cu: f_0001350c(c); break;
      case 0x13534u: f_00013534(c); break;
      case 0x1355au: f_0001355a(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x110c3u); }
L_110c3:
    X86_TICK(c, 16);
    // 0110c3  pop ebp
    X86_AT(c, 0x110c3u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0110c4  popfd 
    X86_AT(c, 0x110c4u);
    x86_popfd(c, 4);
    // 0110c5  retf 
    X86_AT(c, 0x110c5u);
    x86_retf(c, 4, 0u); return;
L_110c6:
    X86_TICK(c, 9);
    // 0110c6  mov al, 4
    X86_AT(c, 0x110c6u);
    s8(c, 0, 0x4u);
    // 0110c8  jmp 0x110c3
    X86_AT(c, 0x110c8u);
    X86_POLL(c, 0x110c3u); goto L_110c3;
    x86_fault(c, 0x110b2u, "ran off the end of a function");
}
void f_000110b3(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0110b3  cmp ah, 0x51
    X86_AT(c, 0x110b3u);
    (void)x86_sub(c, g8(c, 4), 0x51u, 0, 1);
    // 0110b6  ja 0x110c6
    X86_AT(c, 0x110b6u);
    if (x86_cc(c, 7)) { goto L_110c6; }
    X86_TICK(c, 10);
    // 0110b8  movzx ebp, ah
    X86_AT(c, 0x110b8u);
    c.r[5] = g8(c, 4);
    // 0110bb  call dword ptr cs:[ebp*4 + 0x110cc]
    X86_AT(c, 0x110bbu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[5] * 4 + 0x110CCu))); push32(c, 0x110c3u);
      switch (t) {
      case 0x11214u: f_00011214(c); break;
      case 0x11224u: f_00011224(c); break;
      case 0x11234u: f_00011234(c); break;
      case 0x11244u: f_00011244(c); break;
      case 0x11254u: f_00011254(c); break;
      case 0x11264u: f_00011264(c); break;
      case 0x11274u: f_00011274(c); break;
      case 0x11284u: f_00011284(c); break;
      case 0x11294u: f_00011294(c); break;
      case 0x112a4u: f_000112a4(c); break;
      case 0x112b4u: f_000112b4(c); break;
      case 0x11334u: f_00011334(c); break;
      case 0x11374u: f_00011374(c); break;
      case 0x115d4u: f_000115d4(c); break;
      case 0x1160cu: f_0001160c(c); break;
      case 0x11664u: f_00011664(c); break;
      case 0x117dcu: f_000117dc(c); break;
      case 0x1180cu: f_0001180c(c); break;
      case 0x1183cu: f_0001183c(c); break;
      case 0x11994u: f_00011994(c); break;
      case 0x11a90u: f_00011a90(c); break;
      case 0x11ad0u: f_00011ad0(c); break;
      case 0x11b04u: f_00011b04(c); break;
      case 0x11b1cu: f_00011b1c(c); break;
      case 0x11b34u: f_00011b34(c); break;
      case 0x11b40u: f_00011b40(c); break;
      case 0x11c48u: f_00011c48(c); break;
      case 0x11c8cu: f_00011c8c(c); break;
      case 0x11ca8u: f_00011ca8(c); break;
      case 0x11cdcu: f_00011cdc(c); break;
      case 0x11d14u: f_00011d14(c); break;
      case 0x122e7u: f_000122e7(c); break;
      case 0x12430u: f_00012430(c); break;
      case 0x124f0u: f_000124f0(c); break;
      case 0x12620u: f_00012620(c); break;
      case 0x126bcu: f_000126bc(c); break;
      case 0x127a8u: f_000127a8(c); break;
      case 0x129b0u: f_000129b0(c); break;
      case 0x12d88u: f_00012d88(c); break;
      case 0x12dbcu: f_00012dbc(c); break;
      case 0x12fbcu: f_00012fbc(c); break;
      case 0x1302cu: f_0001302c(c); break;
      case 0x13054u: f_00013054(c); break;
      case 0x130f4u: f_000130f4(c); break;
      case 0x13194u: f_00013194(c); break;
      case 0x13364u: f_00013364(c); break;
      case 0x13398u: f_00013398(c); break;
      case 0x133f0u: f_000133f0(c); break;
      case 0x1343cu: f_0001343c(c); break;
      case 0x134a0u: f_000134a0(c); break;
      case 0x134c0u: f_000134c0(c); break;
      case 0x134dcu: f_000134dc(c); break;
      case 0x134f0u: f_000134f0(c); break;
      case 0x1350cu: f_0001350c(c); break;
      case 0x13534u: f_00013534(c); break;
      case 0x1355au: f_0001355a(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x110c3u); }
L_110c3:
    X86_TICK(c, 16);
    // 0110c3  pop ebp
    X86_AT(c, 0x110c3u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0110c4  popfd 
    X86_AT(c, 0x110c4u);
    x86_popfd(c, 4);
    // 0110c5  retf 
    X86_AT(c, 0x110c5u);
    x86_retf(c, 4, 0u); return;
L_110c6:
    X86_TICK(c, 9);
    // 0110c6  mov al, 4
    X86_AT(c, 0x110c6u);
    s8(c, 0, 0x4u);
    // 0110c8  jmp 0x110c3
    X86_AT(c, 0x110c8u);
    X86_POLL(c, 0x110c3u); goto L_110c3;
    x86_fault(c, 0x110b3u, "ran off the end of a function");
}
void f_000110b6(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0110b6  ja 0x110c6
    X86_AT(c, 0x110b6u);
    if (x86_cc(c, 7)) { goto L_110c6; }
    X86_TICK(c, 10);
    // 0110b8  movzx ebp, ah
    X86_AT(c, 0x110b8u);
    c.r[5] = g8(c, 4);
    // 0110bb  call dword ptr cs:[ebp*4 + 0x110cc]
    X86_AT(c, 0x110bbu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[5] * 4 + 0x110CCu))); push32(c, 0x110c3u);
      switch (t) {
      case 0x11214u: f_00011214(c); break;
      case 0x11224u: f_00011224(c); break;
      case 0x11234u: f_00011234(c); break;
      case 0x11244u: f_00011244(c); break;
      case 0x11254u: f_00011254(c); break;
      case 0x11264u: f_00011264(c); break;
      case 0x11274u: f_00011274(c); break;
      case 0x11284u: f_00011284(c); break;
      case 0x11294u: f_00011294(c); break;
      case 0x112a4u: f_000112a4(c); break;
      case 0x112b4u: f_000112b4(c); break;
      case 0x11334u: f_00011334(c); break;
      case 0x11374u: f_00011374(c); break;
      case 0x115d4u: f_000115d4(c); break;
      case 0x1160cu: f_0001160c(c); break;
      case 0x11664u: f_00011664(c); break;
      case 0x117dcu: f_000117dc(c); break;
      case 0x1180cu: f_0001180c(c); break;
      case 0x1183cu: f_0001183c(c); break;
      case 0x11994u: f_00011994(c); break;
      case 0x11a90u: f_00011a90(c); break;
      case 0x11ad0u: f_00011ad0(c); break;
      case 0x11b04u: f_00011b04(c); break;
      case 0x11b1cu: f_00011b1c(c); break;
      case 0x11b34u: f_00011b34(c); break;
      case 0x11b40u: f_00011b40(c); break;
      case 0x11c48u: f_00011c48(c); break;
      case 0x11c8cu: f_00011c8c(c); break;
      case 0x11ca8u: f_00011ca8(c); break;
      case 0x11cdcu: f_00011cdc(c); break;
      case 0x11d14u: f_00011d14(c); break;
      case 0x122e7u: f_000122e7(c); break;
      case 0x12430u: f_00012430(c); break;
      case 0x124f0u: f_000124f0(c); break;
      case 0x12620u: f_00012620(c); break;
      case 0x126bcu: f_000126bc(c); break;
      case 0x127a8u: f_000127a8(c); break;
      case 0x129b0u: f_000129b0(c); break;
      case 0x12d88u: f_00012d88(c); break;
      case 0x12dbcu: f_00012dbc(c); break;
      case 0x12fbcu: f_00012fbc(c); break;
      case 0x1302cu: f_0001302c(c); break;
      case 0x13054u: f_00013054(c); break;
      case 0x130f4u: f_000130f4(c); break;
      case 0x13194u: f_00013194(c); break;
      case 0x13364u: f_00013364(c); break;
      case 0x13398u: f_00013398(c); break;
      case 0x133f0u: f_000133f0(c); break;
      case 0x1343cu: f_0001343c(c); break;
      case 0x134a0u: f_000134a0(c); break;
      case 0x134c0u: f_000134c0(c); break;
      case 0x134dcu: f_000134dc(c); break;
      case 0x134f0u: f_000134f0(c); break;
      case 0x1350cu: f_0001350c(c); break;
      case 0x13534u: f_00013534(c); break;
      case 0x1355au: f_0001355a(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x110c3u); }
L_110c3:
    X86_TICK(c, 16);
    // 0110c3  pop ebp
    X86_AT(c, 0x110c3u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0110c4  popfd 
    X86_AT(c, 0x110c4u);
    x86_popfd(c, 4);
    // 0110c5  retf 
    X86_AT(c, 0x110c5u);
    x86_retf(c, 4, 0u); return;
L_110c6:
    X86_TICK(c, 9);
    // 0110c6  mov al, 4
    X86_AT(c, 0x110c6u);
    s8(c, 0, 0x4u);
    // 0110c8  jmp 0x110c3
    X86_AT(c, 0x110c8u);
    X86_POLL(c, 0x110c3u); goto L_110c3;
    x86_fault(c, 0x110b6u, "ran off the end of a function");
}
void f_000110b8(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0110b8  movzx ebp, ah
    X86_AT(c, 0x110b8u);
    c.r[5] = g8(c, 4);
    // 0110bb  call dword ptr cs:[ebp*4 + 0x110cc]
    X86_AT(c, 0x110bbu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[5] * 4 + 0x110CCu))); push32(c, 0x110c3u);
      switch (t) {
      case 0x11214u: f_00011214(c); break;
      case 0x11224u: f_00011224(c); break;
      case 0x11234u: f_00011234(c); break;
      case 0x11244u: f_00011244(c); break;
      case 0x11254u: f_00011254(c); break;
      case 0x11264u: f_00011264(c); break;
      case 0x11274u: f_00011274(c); break;
      case 0x11284u: f_00011284(c); break;
      case 0x11294u: f_00011294(c); break;
      case 0x112a4u: f_000112a4(c); break;
      case 0x112b4u: f_000112b4(c); break;
      case 0x11334u: f_00011334(c); break;
      case 0x11374u: f_00011374(c); break;
      case 0x115d4u: f_000115d4(c); break;
      case 0x1160cu: f_0001160c(c); break;
      case 0x11664u: f_00011664(c); break;
      case 0x117dcu: f_000117dc(c); break;
      case 0x1180cu: f_0001180c(c); break;
      case 0x1183cu: f_0001183c(c); break;
      case 0x11994u: f_00011994(c); break;
      case 0x11a90u: f_00011a90(c); break;
      case 0x11ad0u: f_00011ad0(c); break;
      case 0x11b04u: f_00011b04(c); break;
      case 0x11b1cu: f_00011b1c(c); break;
      case 0x11b34u: f_00011b34(c); break;
      case 0x11b40u: f_00011b40(c); break;
      case 0x11c48u: f_00011c48(c); break;
      case 0x11c8cu: f_00011c8c(c); break;
      case 0x11ca8u: f_00011ca8(c); break;
      case 0x11cdcu: f_00011cdc(c); break;
      case 0x11d14u: f_00011d14(c); break;
      case 0x122e7u: f_000122e7(c); break;
      case 0x12430u: f_00012430(c); break;
      case 0x124f0u: f_000124f0(c); break;
      case 0x12620u: f_00012620(c); break;
      case 0x126bcu: f_000126bc(c); break;
      case 0x127a8u: f_000127a8(c); break;
      case 0x129b0u: f_000129b0(c); break;
      case 0x12d88u: f_00012d88(c); break;
      case 0x12dbcu: f_00012dbc(c); break;
      case 0x12fbcu: f_00012fbc(c); break;
      case 0x1302cu: f_0001302c(c); break;
      case 0x13054u: f_00013054(c); break;
      case 0x130f4u: f_000130f4(c); break;
      case 0x13194u: f_00013194(c); break;
      case 0x13364u: f_00013364(c); break;
      case 0x13398u: f_00013398(c); break;
      case 0x133f0u: f_000133f0(c); break;
      case 0x1343cu: f_0001343c(c); break;
      case 0x134a0u: f_000134a0(c); break;
      case 0x134c0u: f_000134c0(c); break;
      case 0x134dcu: f_000134dc(c); break;
      case 0x134f0u: f_000134f0(c); break;
      case 0x1350cu: f_0001350c(c); break;
      case 0x13534u: f_00013534(c); break;
      case 0x1355au: f_0001355a(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x110c3u); }
    X86_TICK(c, 16);
    // 0110c3  pop ebp
    X86_AT(c, 0x110c3u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0110c4  popfd 
    X86_AT(c, 0x110c4u);
    x86_popfd(c, 4);
    // 0110c5  retf 
    X86_AT(c, 0x110c5u);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x110b8u, "ran off the end of a function");
}
void f_000110bb(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0110bb  call dword ptr cs:[ebp*4 + 0x110cc]
    X86_AT(c, 0x110bbu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[5] * 4 + 0x110CCu))); push32(c, 0x110c3u);
      switch (t) {
      case 0x11214u: f_00011214(c); break;
      case 0x11224u: f_00011224(c); break;
      case 0x11234u: f_00011234(c); break;
      case 0x11244u: f_00011244(c); break;
      case 0x11254u: f_00011254(c); break;
      case 0x11264u: f_00011264(c); break;
      case 0x11274u: f_00011274(c); break;
      case 0x11284u: f_00011284(c); break;
      case 0x11294u: f_00011294(c); break;
      case 0x112a4u: f_000112a4(c); break;
      case 0x112b4u: f_000112b4(c); break;
      case 0x11334u: f_00011334(c); break;
      case 0x11374u: f_00011374(c); break;
      case 0x115d4u: f_000115d4(c); break;
      case 0x1160cu: f_0001160c(c); break;
      case 0x11664u: f_00011664(c); break;
      case 0x117dcu: f_000117dc(c); break;
      case 0x1180cu: f_0001180c(c); break;
      case 0x1183cu: f_0001183c(c); break;
      case 0x11994u: f_00011994(c); break;
      case 0x11a90u: f_00011a90(c); break;
      case 0x11ad0u: f_00011ad0(c); break;
      case 0x11b04u: f_00011b04(c); break;
      case 0x11b1cu: f_00011b1c(c); break;
      case 0x11b34u: f_00011b34(c); break;
      case 0x11b40u: f_00011b40(c); break;
      case 0x11c48u: f_00011c48(c); break;
      case 0x11c8cu: f_00011c8c(c); break;
      case 0x11ca8u: f_00011ca8(c); break;
      case 0x11cdcu: f_00011cdc(c); break;
      case 0x11d14u: f_00011d14(c); break;
      case 0x122e7u: f_000122e7(c); break;
      case 0x12430u: f_00012430(c); break;
      case 0x124f0u: f_000124f0(c); break;
      case 0x12620u: f_00012620(c); break;
      case 0x126bcu: f_000126bc(c); break;
      case 0x127a8u: f_000127a8(c); break;
      case 0x129b0u: f_000129b0(c); break;
      case 0x12d88u: f_00012d88(c); break;
      case 0x12dbcu: f_00012dbc(c); break;
      case 0x12fbcu: f_00012fbc(c); break;
      case 0x1302cu: f_0001302c(c); break;
      case 0x13054u: f_00013054(c); break;
      case 0x130f4u: f_000130f4(c); break;
      case 0x13194u: f_00013194(c); break;
      case 0x13364u: f_00013364(c); break;
      case 0x13398u: f_00013398(c); break;
      case 0x133f0u: f_000133f0(c); break;
      case 0x1343cu: f_0001343c(c); break;
      case 0x134a0u: f_000134a0(c); break;
      case 0x134c0u: f_000134c0(c); break;
      case 0x134dcu: f_000134dc(c); break;
      case 0x134f0u: f_000134f0(c); break;
      case 0x1350cu: f_0001350c(c); break;
      case 0x13534u: f_00013534(c); break;
      case 0x1355au: f_0001355a(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x110c3u); }
    X86_TICK(c, 16);
    // 0110c3  pop ebp
    X86_AT(c, 0x110c3u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0110c4  popfd 
    X86_AT(c, 0x110c4u);
    x86_popfd(c, 4);
    // 0110c5  retf 
    X86_AT(c, 0x110c5u);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x110bbu, "ran off the end of a function");
}
void f_000110c3(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0110c3  pop ebp
    X86_AT(c, 0x110c3u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0110c4  popfd 
    X86_AT(c, 0x110c4u);
    x86_popfd(c, 4);
    // 0110c5  retf 
    X86_AT(c, 0x110c5u);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x110c3u, "ran off the end of a function");
}
void f_000110c4(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0110c4  popfd 
    X86_AT(c, 0x110c4u);
    x86_popfd(c, 4);
    // 0110c5  retf 
    X86_AT(c, 0x110c5u);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x110c4u, "ran off the end of a function");
}
void f_000110c5(X86Cpu& c) {
    X86_TICK(c, 6);
    // 0110c5  retf 
    X86_AT(c, 0x110c5u);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x110c5u, "ran off the end of a function");
}
void f_00011214(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011214  call 0x112b4
    X86_AT(c, 0x11214u);
    push32(c, 0x11219u); f_000112b4(c); X86_RET(c, 0x11219u);
    X86_TICK(c, 7);
    // 011219  call 0x11d4c
    X86_AT(c, 0x11219u);
    push32(c, 0x1121eu); f_00011d4c(c); X86_RET(c, 0x1121eu);
    X86_TICK(c, 7);
    // 01121e  call 0x13364
    X86_AT(c, 0x1121eu);
    push32(c, 0x11223u); f_00013364(c); X86_RET(c, 0x11223u);
    X86_TICK(c, 10);
    // 011223  ret 
    X86_AT(c, 0x11223u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11214u, "ran off the end of a function");
}
void f_00011219(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011219  call 0x11d4c
    X86_AT(c, 0x11219u);
    push32(c, 0x1121eu); f_00011d4c(c); X86_RET(c, 0x1121eu);
    X86_TICK(c, 7);
    // 01121e  call 0x13364
    X86_AT(c, 0x1121eu);
    push32(c, 0x11223u); f_00013364(c); X86_RET(c, 0x11223u);
    X86_TICK(c, 10);
    // 011223  ret 
    X86_AT(c, 0x11223u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11219u, "ran off the end of a function");
}
void f_0001121e(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01121e  call 0x13364
    X86_AT(c, 0x1121eu);
    push32(c, 0x11223u); f_00013364(c); X86_RET(c, 0x11223u);
    X86_TICK(c, 10);
    // 011223  ret 
    X86_AT(c, 0x11223u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1121eu, "ran off the end of a function");
}
void f_00011223(X86Cpu& c) {
    X86_TICK(c, 10);
    // 011223  ret 
    X86_AT(c, 0x11223u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11223u, "ran off the end of a function");
}
void f_00011224(X86Cpu& c) {
    X86_TICK(c, 7);
    // 011224  cmp bl, 0x40
    X86_AT(c, 0x11224u);
    (void)x86_sub(c, g8(c, 3), 0x40u, 0, 1);
    // 011227  jb 0x11374
    X86_AT(c, 0x11227u);
    if (x86_cc(c, 2)) { goto L_11374; }
    X86_TICK(c, 7);
    // 01122d  jmp 0x11ee0
    X86_AT(c, 0x1122du);
    goto L_11ee0;
L_11374:
    X86_TICK(c, 7);
    // 011374  cmp bl, 5
    X86_AT(c, 0x11374u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 011377  ja 0x1354c
    X86_AT(c, 0x11377u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 01137d  cmp dh, 0xc
    X86_AT(c, 0x1137du);
    (void)x86_sub(c, g8(c, 6), 0xCu, 0, 1);
    // 011380  jb 0x13557
    X86_AT(c, 0x11380u);
    if (x86_cc(c, 2)) { goto L_13557; }
    X86_TICK(c, 7);
    // 011386  cmp dh, 0x6b
    X86_AT(c, 0x11386u);
    (void)x86_sub(c, g8(c, 6), 0x6Bu, 0, 1);
    // 011389  ja 0x13557
    X86_AT(c, 0x11389u);
    if (x86_cc(c, 7)) { goto L_13557; }
    X86_TICK(c, 7);
    // 01138f  test dl, 0x80
    X86_AT(c, 0x1138fu);
    (void)x86_logic(c, g8(c, 2) & 0x80u, 1);
    // 011392  jne 0x13557
    X86_AT(c, 0x11392u);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 37);
    // 011398  pushal 
    X86_AT(c, 0x11398u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 011399  movzx ebx, bl
    X86_AT(c, 0x11399u);
    c.r[3] = g8(c, 3);
    // 01139c  mov ch, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x1139cu);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0113a3  test byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x113a3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u))) & g8(c, 5), 1);
    // 0113aa  jne 0x13553
    X86_AT(c, 0x113aau);
    if (x86_cc(c, 5)) { goto L_13553; }
    X86_TICK(c, 30);
    // 0113b0  or byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x113b0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 5), 1)); }
    // 0113b7  sub dh, 0xc
    X86_AT(c, 0x113b7u);
    { uint32_t v = g8(c, 6); s8(c, 6, x86_sub(c, v, 0xCu, 0, 1)); }
    // 0113ba  mov byte ptr gs:[edi + ebx*1 + 0x1e0], dh
    X86_AT(c, 0x113bau);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1E0u)), g8(c, 6));
    // 0113c2  mov bp, word ptr gs:[edi + ebx*2 + 0x1e8]
    X86_AT(c, 0x113c2u);
    s16(c, 5, rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 2 + 0x1E8u))));
    // 0113cb  movzx esi, dl
    X86_AT(c, 0x113cbu);
    c.r[6] = g8(c, 2);
    // 0113ce  movzx ecx, dh
    X86_AT(c, 0x113ceu);
    c.r[1] = g8(c, 6);
    // 0113d1  mov dx, 0x4d8
    X86_AT(c, 0x113d1u);
    s16(c, 2, 0x4D8u);
    // 0113d5  cmp bl, 2
    X86_AT(c, 0x113d5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0113d8  jbe 0x113e6
    X86_AT(c, 0x113d8u);
    if (x86_cc(c, 6)) { goto L_113e6; }
    X86_TICK(c, 6);
    // 0113da  add dl, 4
    X86_AT(c, 0x113dau);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 0113dd  add edi, 0xf0
    X86_AT(c, 0x113ddu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0113e3  sub bl, 3
    X86_AT(c, 0x113e3u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_113e6:
    X86_TICK(c, 7);
    // 0113e6  test cl, cl
    X86_AT(c, 0x113e6u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 0113e8  jne 0x113f2
    X86_AT(c, 0x113e8u);
    if (x86_cc(c, 5)) { goto L_113f2; }
    X86_TICK(c, 11);
    // 0113ea  mov cx, 0x268
    X86_AT(c, 0x113eau);
    s16(c, 1, 0x268u);
    // 0113ee  xor al, al
    X86_AT(c, 0x113eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0113f0  jmp 0x11405
    X86_AT(c, 0x113f0u);
    goto L_11405;
L_113f2:
    X86_TICK(c, 53);
    // 0113f2  mov eax, ecx
    X86_AT(c, 0x113f2u);
    c.r[0] = c.r[1];
    // 0113f4  dec eax
    X86_AT(c, 0x113f4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0113f5  mov cl, 0xc
    X86_AT(c, 0x113f5u);
    s8(c, 1, 0xCu);
    // 0113f7  div cl
    X86_AT(c, 0x113f7u);
    x86_div(c, g8(c, 1), 1, 0x113f7u);
    // 0113f9  movzx ecx, ah
    X86_AT(c, 0x113f9u);
    c.r[1] = g8(c, 4);
    // 0113fc  mov cx, word ptr cs:[ecx*2 + 0x13590]
    X86_AT(c, 0x113fcu);
    s16(c, 1, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 2 + 0x13590u))));
L_11405:
    X86_TICK(c, 9);
    // 011405  add cx, bp
    X86_AT(c, 0x11405u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[5] & 0xFFFFu), 0, 2)); }
    // 011408  cmp cx, 0x268
    X86_AT(c, 0x11408u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x268u, 0, 2);
    // 01140d  jge 0x11421
    X86_AT(c, 0x1140du);
    if (x86_cc(c, 13)) { goto L_11421; }
    X86_TICK(c, 7);
    // 01140f  test al, al
    X86_AT(c, 0x1140fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011411  jne 0x11419
    X86_AT(c, 0x11411u);
    if (x86_cc(c, 5)) { goto L_11419; }
    X86_TICK(c, 9);
    // 011413  mov cx, 0x268
    X86_AT(c, 0x11413u);
    s16(c, 1, 0x268u);
    // 011417  jmp 0x11438
    X86_AT(c, 0x11417u);
    goto L_11438;
L_11419:
    X86_TICK(c, 11);
    // 011419  add cx, 0x268
    X86_AT(c, 0x11419u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x268u, 0, 2)); }
    // 01141e  dec eax
    X86_AT(c, 0x1141eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 01141f  jmp 0x11438
    X86_AT(c, 0x1141fu);
    goto L_11438;
L_11421:
    X86_TICK(c, 7);
    // 011421  cmp cx, 0x4d0
    X86_AT(c, 0x11421u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x4D0u, 0, 2);
    // 011426  jle 0x11438
    X86_AT(c, 0x11426u);
    if (x86_cc(c, 14)) { goto L_11438; }
    X86_TICK(c, 7);
    // 011428  cmp al, 7
    X86_AT(c, 0x11428u);
    (void)x86_sub(c, g8(c, 0), 0x7u, 0, 1);
    // 01142a  jne 0x11432
    X86_AT(c, 0x1142au);
    if (x86_cc(c, 5)) { goto L_11432; }
    X86_TICK(c, 9);
    // 01142c  mov cx, 0x3c8c
    X86_AT(c, 0x1142cu);
    s16(c, 1, 0x3C8Cu);
    // 011430  jmp 0x11438
    X86_AT(c, 0x11430u);
    goto L_11438;
L_11432:
    X86_TICK(c, 4);
    // 011432  sub cx, 0x268
    X86_AT(c, 0x11432u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x268u, 0, 2)); }
    // 011437  inc eax
    X86_AT(c, 0x11437u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_11438:
    X86_TICK(c, 18);
    // 011438  shl al, 3
    X86_AT(c, 0x11438u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 0, r); }
    // 01143b  or ch, al
    X86_AT(c, 0x1143bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v | g8(c, 0), 1)); }
    // 01143d  mov ah, 0xa4
    X86_AT(c, 0x1143du);
    s8(c, 4, 0xA4u);
    // 01143f  add ah, bl
    X86_AT(c, 0x1143fu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011441  mov al, ch
    X86_AT(c, 0x11441u);
    s8(c, 0, g8(c, 5));
    // 011443  call 0x11bf0
    X86_AT(c, 0x11443u);
    push32(c, 0x11448u); f_00011bf0(c); X86_RET(c, 0x11448u);
    X86_TICK(c, 11);
    // 011448  sub ah, 4
    X86_AT(c, 0x11448u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, 0x4u, 0, 1)); }
    // 01144b  mov al, cl
    X86_AT(c, 0x1144bu);
    s8(c, 0, g8(c, 1));
    // 01144d  call 0x11bf0
    X86_AT(c, 0x1144du);
    push32(c, 0x11452u); f_00011bf0(c); X86_RET(c, 0x11452u);
    X86_TICK(c, 28);
    // 011452  mov ecx, esi
    X86_AT(c, 0x11452u);
    c.r[1] = c.r[6];
    // 011454  shr cl, 2
    X86_AT(c, 0x11454u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 011457  add cl, 0x60
    X86_AT(c, 0x11457u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x60u, 0, 1)); }
    // 01145a  mov esi, ebx
    X86_AT(c, 0x1145au);
    c.r[6] = c.r[3];
    // 01145c  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x1145cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 011464  and eax, 7
    X86_AT(c, 0x11464u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 011469  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x11469u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 011470  mov byte ptr gs:[edi + esi*1 + 0xe0], cl
    X86_AT(c, 0x11470u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u)), g8(c, 1));
    // 011478  add bh, bh
    X86_AT(c, 0x11478u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 01147a  jae 0x114a3
    X86_AT(c, 0x1147au);
    if (x86_cc(c, 3)) { goto L_114a3; }
    X86_TICK(c, 73);
    // 01147c  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x1147cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 011484  xor al, 0x7f
    X86_AT(c, 0x11484u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011486  mul cl
    X86_AT(c, 0x11486u);
    x86_mul(c, g8(c, 1), 1);
    // 011488  shr eax, 7
    X86_AT(c, 0x11488u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01148b  inc eax
    X86_AT(c, 0x1148bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01148c  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1148cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011494  shr eax, 7
    X86_AT(c, 0x11494u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011497  inc eax
    X86_AT(c, 0x11497u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011498  xor al, 0x7f
    X86_AT(c, 0x11498u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01149a  mov ah, 0x40
    X86_AT(c, 0x1149au);
    s8(c, 4, 0x40u);
    // 01149c  add ah, bl
    X86_AT(c, 0x1149cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01149e  call 0x11bf0
    X86_AT(c, 0x1149eu);
    push32(c, 0x114a3u); f_00011bf0(c); X86_RET(c, 0x114a3u);
L_114a3:
    X86_TICK(c, 7);
    // 0114a3  add bh, bh
    X86_AT(c, 0x114a3u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114a5  jae 0x114ce
    X86_AT(c, 0x114a5u);
    if (x86_cc(c, 3)) { goto L_114ce; }
    X86_TICK(c, 73);
    // 0114a7  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x114a7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 0114af  xor al, 0x7f
    X86_AT(c, 0x114afu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114b1  mul cl
    X86_AT(c, 0x114b1u);
    x86_mul(c, g8(c, 1), 1);
    // 0114b3  shr eax, 7
    X86_AT(c, 0x114b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114b6  inc eax
    X86_AT(c, 0x114b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114b7  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114b7u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114bf  shr eax, 7
    X86_AT(c, 0x114bfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114c2  inc eax
    X86_AT(c, 0x114c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114c3  xor al, 0x7f
    X86_AT(c, 0x114c3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114c5  mov ah, 0x44
    X86_AT(c, 0x114c5u);
    s8(c, 4, 0x44u);
    // 0114c7  add ah, bl
    X86_AT(c, 0x114c7u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114c9  call 0x11bf0
    X86_AT(c, 0x114c9u);
    push32(c, 0x114ceu); f_00011bf0(c); X86_RET(c, 0x114ceu);
L_114ce:
    X86_TICK(c, 7);
    // 0114ce  add bh, bh
    X86_AT(c, 0x114ceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114d0  jae 0x114f9
    X86_AT(c, 0x114d0u);
    if (x86_cc(c, 3)) { goto L_114f9; }
    X86_TICK(c, 73);
    // 0114d2  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x114d2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 0114da  xor al, 0x7f
    X86_AT(c, 0x114dau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114dc  mul cl
    X86_AT(c, 0x114dcu);
    x86_mul(c, g8(c, 1), 1);
    // 0114de  shr eax, 7
    X86_AT(c, 0x114deu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114e1  inc eax
    X86_AT(c, 0x114e1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114e2  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114e2u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114ea  shr eax, 7
    X86_AT(c, 0x114eau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114ed  inc eax
    X86_AT(c, 0x114edu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114ee  xor al, 0x7f
    X86_AT(c, 0x114eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114f0  mov ah, 0x48
    X86_AT(c, 0x114f0u);
    s8(c, 4, 0x48u);
    // 0114f2  add ah, bl
    X86_AT(c, 0x114f2u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114f4  call 0x11bf0
    X86_AT(c, 0x114f4u);
    push32(c, 0x114f9u); f_00011bf0(c); X86_RET(c, 0x114f9u);
L_114f9:
    X86_TICK(c, 7);
    // 0114f9  add bh, bh
    X86_AT(c, 0x114f9u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114fb  jae 0x11524
    X86_AT(c, 0x114fbu);
    if (x86_cc(c, 3)) { goto L_11524; }
    X86_TICK(c, 73);
    // 0114fd  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x114fdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011505  xor al, 0x7f
    X86_AT(c, 0x11505u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011507  mul cl
    X86_AT(c, 0x11507u);
    x86_mul(c, g8(c, 1), 1);
    // 011509  shr eax, 7
    X86_AT(c, 0x11509u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01150c  inc eax
    X86_AT(c, 0x1150cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01150d  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1150du);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011515  shr eax, 7
    X86_AT(c, 0x11515u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011518  inc eax
    X86_AT(c, 0x11518u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011519  xor al, 0x7f
    X86_AT(c, 0x11519u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01151b  mov ah, 0x4c
    X86_AT(c, 0x1151bu);
    s8(c, 4, 0x4Cu);
    // 01151d  add ah, bl
    X86_AT(c, 0x1151du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01151f  call 0x11bf0
    X86_AT(c, 0x1151fu);
    push32(c, 0x11524u); f_00011bf0(c); X86_RET(c, 0x11524u);
L_11524:
    X86_TICK(c, 9);
    // 011524  mov cl, bl
    X86_AT(c, 0x11524u);
    s8(c, 1, g8(c, 3));
    // 011526  cmp dl, 0xd8
    X86_AT(c, 0x11526u);
    (void)x86_sub(c, g8(c, 2), 0xD8u, 0, 1);
    // 011529  je 0x1152e
    X86_AT(c, 0x11529u);
    if (x86_cc(c, 4)) { goto L_1152e; }
    X86_TICK(c, 2);
    // 01152b  add cl, 4
    X86_AT(c, 0x1152bu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x4u, 0, 1)); }
L_1152e:
    X86_TICK(c, 21);
    // 01152e  mov ah, 0x80
    X86_AT(c, 0x1152eu);
    s8(c, 4, 0x80u);
    // 011530  add ah, bl
    X86_AT(c, 0x11530u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011532  push edx
    X86_AT(c, 0x11532u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011533  push eax
    X86_AT(c, 0x11533u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011534  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11534u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01153c  or al, 0xf
    X86_AT(c, 0x1153cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 01153e  call 0x11c20
    X86_AT(c, 0x1153eu);
    push32(c, 0x11543u); f_00011c20(c); X86_RET(c, 0x11543u);
    X86_TICK(c, 15);
    // 011543  add ah, 4
    X86_AT(c, 0x11543u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011546  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11546u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01154e  or al, 0xf
    X86_AT(c, 0x1154eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011550  call 0x11c20
    X86_AT(c, 0x11550u);
    push32(c, 0x11555u); f_00011c20(c); X86_RET(c, 0x11555u);
    X86_TICK(c, 15);
    // 011555  add ah, 4
    X86_AT(c, 0x11555u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011558  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x11558u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 011560  or al, 0xf
    X86_AT(c, 0x11560u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011562  call 0x11c20
    X86_AT(c, 0x11562u);
    push32(c, 0x11567u); f_00011c20(c); X86_RET(c, 0x11567u);
    X86_TICK(c, 15);
    // 011567  add ah, 4
    X86_AT(c, 0x11567u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01156a  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x1156au);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 011572  or al, 0xf
    X86_AT(c, 0x11572u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011574  call 0x11c20
    X86_AT(c, 0x11574u);
    push32(c, 0x11579u); f_00011c20(c); X86_RET(c, 0x11579u);
    X86_TICK(c, 13);
    // 011579  mov dl, 0xd8
    X86_AT(c, 0x11579u);
    s8(c, 2, 0xD8u);
    // 01157b  mov al, cl
    X86_AT(c, 0x1157bu);
    s8(c, 0, g8(c, 1));
    // 01157d  mov ah, 0x28
    X86_AT(c, 0x1157du);
    s8(c, 4, 0x28u);
    // 01157f  call 0x11c20
    X86_AT(c, 0x1157fu);
    push32(c, 0x11584u); f_00011c20(c); X86_RET(c, 0x11584u);
    X86_TICK(c, 19);
    // 011584  pop eax
    X86_AT(c, 0x11584u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011585  pop edx
    X86_AT(c, 0x11585u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011586  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11586u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01158e  call 0x11c20
    X86_AT(c, 0x1158eu);
    push32(c, 0x11593u); f_00011c20(c); X86_RET(c, 0x11593u);
    X86_TICK(c, 13);
    // 011593  add ah, 4
    X86_AT(c, 0x11593u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011596  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11596u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01159e  call 0x11c20
    X86_AT(c, 0x1159eu);
    push32(c, 0x115a3u); f_00011c20(c); X86_RET(c, 0x115a3u);
    X86_TICK(c, 13);
    // 0115a3  add ah, 4
    X86_AT(c, 0x115a3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115a6  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x115a6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 0115ae  call 0x11c20
    X86_AT(c, 0x115aeu);
    push32(c, 0x115b3u); f_00011c20(c); X86_RET(c, 0x115b3u);
    X86_TICK(c, 13);
    // 0115b3  add ah, 4
    X86_AT(c, 0x115b3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115b6  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x115b6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 0115be  call 0x11c20
    X86_AT(c, 0x115beu);
    push32(c, 0x115c3u); f_00011c20(c); X86_RET(c, 0x115c3u);
    X86_TICK(c, 15);
    // 0115c3  mov dl, 0xd8
    X86_AT(c, 0x115c3u);
    s8(c, 2, 0xD8u);
    // 0115c5  mov al, 0xf0
    X86_AT(c, 0x115c5u);
    s8(c, 0, 0xF0u);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
L_11ee0:
    X86_TICK(c, 7);
    // 011ee0  cmp bl, 0x47
    X86_AT(c, 0x11ee0u);
    (void)x86_sub(c, g8(c, 3), 0x47u, 0, 1);
    // 011ee3  ja 0x1354c
    X86_AT(c, 0x11ee3u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 011ee9  test dx, 0x8080
    X86_AT(c, 0x11ee9u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & 0x8080u, 2);
    // 011eee  jne 0x13557
    X86_AT(c, 0x11eeeu);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 41);
    // 011ef4  pushal 
    X86_AT(c, 0x11ef4u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 011ef5  push ds
    X86_AT(c, 0x11ef5u);
    push32(c, c.sreg[3]);
    // 011ef6  sub bl, 0x40
    X86_AT(c, 0x11ef6u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x40u, 0, 1)); }
    // 011ef9  movzx ebx, bl
    X86_AT(c, 0x11ef9u);
    c.r[3] = g8(c, 3);
    // 011efc  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x11efcu);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 011f03  test byte ptr gs:[edi + 0x19f8], ah
    X86_AT(c, 0x11f03u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u))) & g8(c, 4), 1);
    // 011f0a  jne 0x1354f
    X86_AT(c, 0x11f0au);
    if (x86_cc(c, 5)) { goto L_1354f; }
    X86_TICK(c, 12);
    // 011f10  test byte ptr gs:[edi + 0x19fa], ah
    X86_AT(c, 0x11f10u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))) & g8(c, 4), 1);
    // 011f17  jne 0x1354f
    X86_AT(c, 0x11f17u);
    if (x86_cc(c, 5)) { goto L_1354f; }
    X86_TICK(c, 10);
    // 011f1d  mov byte ptr gs:[edi + ebx*1 + 0x1a30], dh
    X86_AT(c, 0x11f1du);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A30u)), g8(c, 6));
    // 011f25  mov byte ptr gs:[edi + ebx*1 + 0x1a40], dl
    X86_AT(c, 0x11f25u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u)), g8(c, 2));
    // 011f2d  mov ebp, dword ptr gs:[edi + ebx*4 + 0x1a10]
    X86_AT(c, 0x11f2du);
    c.r[5] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 4 + 0x1A10u)));
    // 011f35  xor ecx, ecx
    X86_AT(c, 0x11f35u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
L_11f37:
    X86_TICK(c, 11);
    // 011f37  cmp dh, byte ptr gs:[ebp + ecx*2 + 0x10]
    X86_AT(c, 0x11f37u);
    (void)x86_sub(c, g8(c, 6), rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[1] * 2 + 0x10u))), 0, 1);
    // 011f3c  jbe 0x11f4c
    X86_AT(c, 0x11f3cu);
    if (x86_cc(c, 6)) { goto L_11f4c; }
    X86_TICK(c, 9);
    // 011f3e  inc ecx
    X86_AT(c, 0x11f3eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 011f3f  cmp cl, 8
    X86_AT(c, 0x11f3fu);
    (void)x86_sub(c, g8(c, 1), 0x8u, 0, 1);
    // 011f42  jne 0x11f37
    X86_AT(c, 0x11f42u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11f37u); goto L_11f37; }
    X86_TICK(c, 7);
    // 011f44  jmp 0x13568
    X86_AT(c, 0x11f44u);
    goto L_13568;
L_11f4c:
    X86_TICK(c, 35);
    // 011f4c  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x11f4cu);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 011f4f  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x11f4fu);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 011f56  mov dl, byte ptr gs:[ebp + ecx*8 + 0x46]
    X86_AT(c, 0x11f56u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[1] * 8 + 0x46u))));
    // 011f5b  add byte ptr gs:[edi + ebx*1 + 0x1a30], dl
    X86_AT(c, 0x11f5bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A30u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, g8(c, 2), 0, 1)); }
    // 011f63  mov edx, dword ptr gs:[ebp + ecx*8 + 0x40]
    X86_AT(c, 0x11f63u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[1] * 8 + 0x40u)));
    // 011f68  mov dword ptr gs:[edi + esi*1], edx
    X86_AT(c, 0x11f68u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6])), c.r[2]);
    // 011f6c  movzx edx, word ptr gs:[ebp + ecx*8 + 0x44]
    X86_AT(c, 0x11f6cu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[1] * 8 + 0x44u)));
    // 011f72  mov dword ptr gs:[edi + esi*1 + 4], edx
    X86_AT(c, 0x11f72u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x4u)), c.r[2]);
    // 011f77  mov edx, dword ptr gs:[ebp + ecx*4 + 0x20]
    X86_AT(c, 0x11f77u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[1] * 4 + 0x20u)));
    // 011f7c  xor ecx, ecx
    X86_AT(c, 0x11f7cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
L_11f7e:
    X86_TICK(c, 11);
    // 011f7e  cmp edx, dword ptr gs:[edi + ecx*4 + 0x3d00]
    X86_AT(c, 0x11f7eu);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[1] * 4 + 0x3D00u))), 0, 4);
    // 011f86  je 0x11f98
    X86_AT(c, 0x11f86u);
    if (x86_cc(c, 4)) { goto L_11f98; }
    X86_TICK(c, 13);
    // 011f88  inc ecx
    X86_AT(c, 0x11f88u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 011f89  cmp cl, byte ptr gs:[edi + 0x19f4]
    X86_AT(c, 0x11f89u);
    (void)x86_sub(c, g8(c, 1), rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F4u))), 0, 1);
    // 011f90  jb 0x11f7e
    X86_AT(c, 0x11f90u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x11f7eu); goto L_11f7e; }
    X86_TICK(c, 7);
    // 011f92  jmp 0x1356d
    X86_AT(c, 0x11f92u);
    goto L_1356d;
L_11f98:
    X86_TICK(c, 139);
    // 011f98  not ah
    X86_AT(c, 0x11f98u);
    { uint32_t v = g8(c, 4); s8(c, 4, ~v & 0xFFu); }
    // 011f9a  and byte ptr gs:[edi + 0x19fc], ah
    X86_AT(c, 0x11f9au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 4), 1)); }
    // 011fa1  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x11fa1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 011fa8  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x11fa8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 011faf  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x11fafu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 011fb6  and al, ah
    X86_AT(c, 0x11fb6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 4), 1)); }
    // 011fb8  not al
    X86_AT(c, 0x11fb8u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 011fba  mov dx, 0x4f8
    X86_AT(c, 0x11fbau);
    s16(c, 2, 0x4F8u);
    // 011fbe  out dx, al
    X86_AT(c, 0x11fbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011fbf  push ds
    X86_AT(c, 0x11fbfu);
    push32(c, c.sreg[3]);
    // 011fc0  pop ds
    X86_AT(c, 0x11fc0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011fc1  push ds
    X86_AT(c, 0x11fc1u);
    push32(c, c.sreg[3]);
    // 011fc2  pop ds
    X86_AT(c, 0x11fc2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011fc3  mov al, bl
    X86_AT(c, 0x11fc3u);
    s8(c, 0, g8(c, 3));
    // 011fc5  add al, 0xc0
    X86_AT(c, 0x11fc5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xC0u, 0, 1)); }
    // 011fc7  mov dl, 0xf7
    X86_AT(c, 0x11fc7u);
    s8(c, 2, 0xF7u);
    // 011fc9  mov byte ptr gs:[edi + 0x19f7], al
    X86_AT(c, 0x11fc9u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F7u)), g8(c, 0));
    // 011fd0  out dx, al
    X86_AT(c, 0x11fd0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011fd1  push ds
    X86_AT(c, 0x11fd1u);
    push32(c, c.sreg[3]);
    // 011fd2  pop ds
    X86_AT(c, 0x11fd2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011fd3  push ds
    X86_AT(c, 0x11fd3u);
    push32(c, c.sreg[3]);
    // 011fd4  pop ds
    X86_AT(c, 0x11fd4u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011fd5  mov eax, dword ptr gs:[edi + ecx*4 + 0x3b00]
    X86_AT(c, 0x11fd5u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[1] * 4 + 0x3B00u)));
    // 011fdd  shl ecx, 5
    X86_AT(c, 0x11fddu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 011fe0  lea esi, [edi + ecx*1 + 0x1b00]
    X86_AT(c, 0x11fe0u);
    c.r[6] = (uint32_t)(c.r[7] + c.r[1] + 0x1B00u);
    // 011fe7  xchg al, ah
    X86_AT(c, 0x11fe7u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 011fe9  mov dl, 0xf6
    X86_AT(c, 0x11fe9u);
    s8(c, 2, 0xF6u);
    // 011feb  out dx, al
    X86_AT(c, 0x11febu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011fec  push ds
    X86_AT(c, 0x11fecu);
    push32(c, c.sreg[3]);
    // 011fed  pop ds
    X86_AT(c, 0x11fedu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011fee  push ds
    X86_AT(c, 0x11feeu);
    push32(c, c.sreg[3]);
    // 011fef  pop ds
    X86_AT(c, 0x11fefu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011ff0  xchg al, ah
    X86_AT(c, 0x11ff0u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 011ff2  mov ebp, dword ptr gs:[esi + 0x14]
    X86_AT(c, 0x11ff2u);
    c.r[5] = rd32((c.sbase[5] + (uint32_t)(c.r[6] + 0x14u)));
    // 011ff6  test ebp, ebp
    X86_AT(c, 0x11ff6u);
    (void)x86_logic(c, c.r[5] & c.r[5], 4);
    // 011ff8  jne 0x12001
    X86_AT(c, 0x11ff8u);
    if (x86_cc(c, 5)) { goto L_12001; }
    X86_TICK(c, 13);
    // 011ffa  mov ebp, dword ptr gs:[esi + 0xc]
    X86_AT(c, 0x11ffau);
    c.r[5] = rd32((c.sbase[5] + (uint32_t)(c.r[6] + 0xCu)));
    // 011ffe  dec ebp
    X86_AT(c, 0x11ffeu);
    { uint32_t v = c.r[5]; c.r[5] = x86_dec(c, v, 4); }
    // 011fff  jmp 0x12005
    X86_AT(c, 0x11fffu);
    goto L_12005;
L_12001:
    X86_TICK(c, 4);
    // 012001  mov ebp, dword ptr gs:[esi + 0x10]
    X86_AT(c, 0x12001u);
    c.r[5] = rd32((c.sbase[5] + (uint32_t)(c.r[6] + 0x10u)));
L_12005:
    X86_TICK(c, 71);
    // 012005  add eax, ebp
    X86_AT(c, 0x12005u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[5], 0, 4); }
    // 012007  mov dl, 0xf4
    X86_AT(c, 0x12007u);
    s8(c, 2, 0xF4u);
    // 012009  out dx, al
    X86_AT(c, 0x12009u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01200a  push ds
    X86_AT(c, 0x1200au);
    push32(c, c.sreg[3]);
    // 01200b  pop ds
    X86_AT(c, 0x1200bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 01200c  push ds
    X86_AT(c, 0x1200cu);
    push32(c, c.sreg[3]);
    // 01200d  pop ds
    X86_AT(c, 0x1200du);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 01200e  inc edx
    X86_AT(c, 0x1200eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01200f  mov al, ah
    X86_AT(c, 0x1200fu);
    s8(c, 0, g8(c, 4));
    // 012011  out dx, al
    X86_AT(c, 0x12011u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012012  push ds
    X86_AT(c, 0x12012u);
    push32(c, c.sreg[3]);
    // 012013  pop ds
    X86_AT(c, 0x12013u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012014  push ds
    X86_AT(c, 0x12014u);
    push32(c, c.sreg[3]);
    // 012015  pop ds
    X86_AT(c, 0x12015u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012016  mov ebp, edi
    X86_AT(c, 0x12016u);
    c.r[5] = c.r[7];
    // 012018  push gs
    X86_AT(c, 0x12018u);
    push32(c, c.sreg[5]);
    // 01201a  pop ds
    X86_AT(c, 0x1201au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 01201b  call 0x1262c
    X86_AT(c, 0x1201bu);
    push32(c, 0x12020u); f_0001262c(c); X86_RET(c, 0x12020u);
    X86_TICK(c, 168);
    // 012020  mov dx, 0x4f2
    X86_AT(c, 0x12020u);
    s16(c, 2, 0x4F2u);
    // 012024  out dx, al
    X86_AT(c, 0x12024u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012025  push ds
    X86_AT(c, 0x12025u);
    push32(c, c.sreg[3]);
    // 012026  pop ds
    X86_AT(c, 0x12026u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012027  push ds
    X86_AT(c, 0x12027u);
    push32(c, c.sreg[3]);
    // 012028  pop ds
    X86_AT(c, 0x12028u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012029  inc edx
    X86_AT(c, 0x12029u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01202a  mov al, ah
    X86_AT(c, 0x1202au);
    s8(c, 0, g8(c, 4));
    // 01202c  out dx, al
    X86_AT(c, 0x1202cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01202d  push ds
    X86_AT(c, 0x1202du);
    push32(c, c.sreg[3]);
    // 01202e  pop ds
    X86_AT(c, 0x1202eu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 01202f  push ds
    X86_AT(c, 0x1202fu);
    push32(c, c.sreg[3]);
    // 012030  pop ds
    X86_AT(c, 0x12030u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012031  mov edi, ebp
    X86_AT(c, 0x12031u);
    c.r[7] = c.r[5];
    // 012033  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x12033u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 012036  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x12036u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 01203d  lea esi, [edi + esi*1]
    X86_AT(c, 0x1203du);
    c.r[6] = (uint32_t)(c.r[7] + c.r[6]);
    // 012040  mov al, byte ptr gs:[edi + ebx*1 + 0x1a40]
    X86_AT(c, 0x12040u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u))));
    // 012048  mov ah, byte ptr gs:[edi + ebx*1 + 0x1a38]
    X86_AT(c, 0x12048u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u))));
    // 012050  mul ah
    X86_AT(c, 0x12050u);
    x86_mul(c, g8(c, 4), 1);
    // 012052  movzx ecx, ax
    X86_AT(c, 0x12052u);
    c.r[1] = (c.r[0] & 0xFFFFu);
    // 012055  movzx eax, byte ptr gs:[esi]
    X86_AT(c, 0x12055u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[6])));
    // 012059  mul ecx
    X86_AT(c, 0x12059u);
    x86_mul(c, c.r[1], 4);
    // 01205b  shr eax, 0xe
    X86_AT(c, 0x1205bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0xEu, 4, w); if (w) c.r[0] = r; }
    // 01205e  mov byte ptr gs:[esi], al
    X86_AT(c, 0x1205eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[6])), g8(c, 0));
    // 012061  movzx eax, byte ptr gs:[esi + 3]
    X86_AT(c, 0x12061u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[6] + 0x3u)));
    // 012066  mul ecx
    X86_AT(c, 0x12066u);
    x86_mul(c, c.r[1], 4);
    // 012068  shr eax, 0xe
    X86_AT(c, 0x12068u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0xEu, 4, w); if (w) c.r[0] = r; }
    // 01206b  mov byte ptr gs:[esi + 3], al
    X86_AT(c, 0x1206bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[6] + 0x3u)), g8(c, 0));
    // 01206f  call 0x12eec
    X86_AT(c, 0x1206fu);
    push32(c, 0x12074u); f_00012eec(c); X86_RET(c, 0x12074u);
    X86_TICK(c, 122);
    // 012074  mov al, byte ptr gs:[esi + 9]
    X86_AT(c, 0x12074u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6] + 0x9u))));
    // 012078  mov dx, 0x4f0
    X86_AT(c, 0x12078u);
    s16(c, 2, 0x4F0u);
    // 01207c  add al, al
    X86_AT(c, 0x1207cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 01207e  out dx, al
    X86_AT(c, 0x1207eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01207f  push ds
    X86_AT(c, 0x1207fu);
    push32(c, c.sreg[3]);
    // 012080  pop ds
    X86_AT(c, 0x12080u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012081  push ds
    X86_AT(c, 0x12081u);
    push32(c, c.sreg[3]);
    // 012082  pop ds
    X86_AT(c, 0x12082u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012083  mov ch, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12083u);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 01208a  or byte ptr gs:[edi + 0x19fa], ch
    X86_AT(c, 0x1208au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 5), 1)); }
    // 012091  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x12091u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012098  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12098u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 01209f  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x1209fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 0120a6  not al
    X86_AT(c, 0x120a6u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 0120a8  mov dl, 0xf8
    X86_AT(c, 0x120a8u);
    s8(c, 2, 0xF8u);
    // 0120aa  or byte ptr gs:[edi + 0x19fc], ch
    X86_AT(c, 0x120aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 5), 1)); }
    // 0120b1  out dx, al
    X86_AT(c, 0x120b1u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0120b2  pop ds
    X86_AT(c, 0x120b2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0120b3  popal 
    X86_AT(c, 0x120b3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0120b4  xor al, al
    X86_AT(c, 0x120b4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0120b6  ret 
    X86_AT(c, 0x120b6u);
    c.eip = pop32(c); return;
L_1354c:
    X86_TICK(c, 12);
    // 01354c  mov al, 1
    X86_AT(c, 0x1354cu);
    s8(c, 0, 0x1u);
    // 01354e  ret 
    X86_AT(c, 0x1354eu);
    c.eip = pop32(c); return;
L_1354f:
    X86_TICK(c, 11);
    // 01354f  pop ds
    X86_AT(c, 0x1354fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 013550  jmp 0x13553
    X86_AT(c, 0x13550u);
    goto L_13553;
L_13553:
    X86_TICK(c, 36);
    // 013553  popal 
    X86_AT(c, 0x13553u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 013554  mov al, 2
    X86_AT(c, 0x13554u);
    s8(c, 0, 0x2u);
    // 013556  ret 
    X86_AT(c, 0x13556u);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
L_13568:
    X86_TICK(c, 40);
    // 013568  pop ds
    X86_AT(c, 0x13568u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 013569  popal 
    X86_AT(c, 0x13569u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 01356a  mov al, 8
    X86_AT(c, 0x1356au);
    s8(c, 0, 0x8u);
    // 01356c  ret 
    X86_AT(c, 0x1356cu);
    c.eip = pop32(c); return;
L_1356d:
    X86_TICK(c, 40);
    // 01356d  pop ds
    X86_AT(c, 0x1356du);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 01356e  popal 
    X86_AT(c, 0x1356eu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 01356f  mov al, 9
    X86_AT(c, 0x1356fu);
    s8(c, 0, 0x9u);
    // 013571  ret 
    X86_AT(c, 0x13571u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11224u, "ran off the end of a function");
}
void f_00011227(X86Cpu& c) {
    X86_TICK(c, 5);
    // 011227  jb 0x11374
    X86_AT(c, 0x11227u);
    if (x86_cc(c, 2)) { goto L_11374; }
    X86_TICK(c, 7);
    // 01122d  jmp 0x11ee0
    X86_AT(c, 0x1122du);
    goto L_11ee0;
L_11374:
    X86_TICK(c, 7);
    // 011374  cmp bl, 5
    X86_AT(c, 0x11374u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 011377  ja 0x1354c
    X86_AT(c, 0x11377u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 01137d  cmp dh, 0xc
    X86_AT(c, 0x1137du);
    (void)x86_sub(c, g8(c, 6), 0xCu, 0, 1);
    // 011380  jb 0x13557
    X86_AT(c, 0x11380u);
    if (x86_cc(c, 2)) { goto L_13557; }
    X86_TICK(c, 7);
    // 011386  cmp dh, 0x6b
    X86_AT(c, 0x11386u);
    (void)x86_sub(c, g8(c, 6), 0x6Bu, 0, 1);
    // 011389  ja 0x13557
    X86_AT(c, 0x11389u);
    if (x86_cc(c, 7)) { goto L_13557; }
    X86_TICK(c, 7);
    // 01138f  test dl, 0x80
    X86_AT(c, 0x1138fu);
    (void)x86_logic(c, g8(c, 2) & 0x80u, 1);
    // 011392  jne 0x13557
    X86_AT(c, 0x11392u);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 37);
    // 011398  pushal 
    X86_AT(c, 0x11398u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 011399  movzx ebx, bl
    X86_AT(c, 0x11399u);
    c.r[3] = g8(c, 3);
    // 01139c  mov ch, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x1139cu);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0113a3  test byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x113a3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u))) & g8(c, 5), 1);
    // 0113aa  jne 0x13553
    X86_AT(c, 0x113aau);
    if (x86_cc(c, 5)) { goto L_13553; }
    X86_TICK(c, 30);
    // 0113b0  or byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x113b0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 5), 1)); }
    // 0113b7  sub dh, 0xc
    X86_AT(c, 0x113b7u);
    { uint32_t v = g8(c, 6); s8(c, 6, x86_sub(c, v, 0xCu, 0, 1)); }
    // 0113ba  mov byte ptr gs:[edi + ebx*1 + 0x1e0], dh
    X86_AT(c, 0x113bau);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1E0u)), g8(c, 6));
    // 0113c2  mov bp, word ptr gs:[edi + ebx*2 + 0x1e8]
    X86_AT(c, 0x113c2u);
    s16(c, 5, rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 2 + 0x1E8u))));
    // 0113cb  movzx esi, dl
    X86_AT(c, 0x113cbu);
    c.r[6] = g8(c, 2);
    // 0113ce  movzx ecx, dh
    X86_AT(c, 0x113ceu);
    c.r[1] = g8(c, 6);
    // 0113d1  mov dx, 0x4d8
    X86_AT(c, 0x113d1u);
    s16(c, 2, 0x4D8u);
    // 0113d5  cmp bl, 2
    X86_AT(c, 0x113d5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0113d8  jbe 0x113e6
    X86_AT(c, 0x113d8u);
    if (x86_cc(c, 6)) { goto L_113e6; }
    X86_TICK(c, 6);
    // 0113da  add dl, 4
    X86_AT(c, 0x113dau);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 0113dd  add edi, 0xf0
    X86_AT(c, 0x113ddu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0113e3  sub bl, 3
    X86_AT(c, 0x113e3u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_113e6:
    X86_TICK(c, 7);
    // 0113e6  test cl, cl
    X86_AT(c, 0x113e6u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 0113e8  jne 0x113f2
    X86_AT(c, 0x113e8u);
    if (x86_cc(c, 5)) { goto L_113f2; }
    X86_TICK(c, 11);
    // 0113ea  mov cx, 0x268
    X86_AT(c, 0x113eau);
    s16(c, 1, 0x268u);
    // 0113ee  xor al, al
    X86_AT(c, 0x113eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0113f0  jmp 0x11405
    X86_AT(c, 0x113f0u);
    goto L_11405;
L_113f2:
    X86_TICK(c, 53);
    // 0113f2  mov eax, ecx
    X86_AT(c, 0x113f2u);
    c.r[0] = c.r[1];
    // 0113f4  dec eax
    X86_AT(c, 0x113f4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0113f5  mov cl, 0xc
    X86_AT(c, 0x113f5u);
    s8(c, 1, 0xCu);
    // 0113f7  div cl
    X86_AT(c, 0x113f7u);
    x86_div(c, g8(c, 1), 1, 0x113f7u);
    // 0113f9  movzx ecx, ah
    X86_AT(c, 0x113f9u);
    c.r[1] = g8(c, 4);
    // 0113fc  mov cx, word ptr cs:[ecx*2 + 0x13590]
    X86_AT(c, 0x113fcu);
    s16(c, 1, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 2 + 0x13590u))));
L_11405:
    X86_TICK(c, 9);
    // 011405  add cx, bp
    X86_AT(c, 0x11405u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[5] & 0xFFFFu), 0, 2)); }
    // 011408  cmp cx, 0x268
    X86_AT(c, 0x11408u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x268u, 0, 2);
    // 01140d  jge 0x11421
    X86_AT(c, 0x1140du);
    if (x86_cc(c, 13)) { goto L_11421; }
    X86_TICK(c, 7);
    // 01140f  test al, al
    X86_AT(c, 0x1140fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011411  jne 0x11419
    X86_AT(c, 0x11411u);
    if (x86_cc(c, 5)) { goto L_11419; }
    X86_TICK(c, 9);
    // 011413  mov cx, 0x268
    X86_AT(c, 0x11413u);
    s16(c, 1, 0x268u);
    // 011417  jmp 0x11438
    X86_AT(c, 0x11417u);
    goto L_11438;
L_11419:
    X86_TICK(c, 11);
    // 011419  add cx, 0x268
    X86_AT(c, 0x11419u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x268u, 0, 2)); }
    // 01141e  dec eax
    X86_AT(c, 0x1141eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 01141f  jmp 0x11438
    X86_AT(c, 0x1141fu);
    goto L_11438;
L_11421:
    X86_TICK(c, 7);
    // 011421  cmp cx, 0x4d0
    X86_AT(c, 0x11421u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x4D0u, 0, 2);
    // 011426  jle 0x11438
    X86_AT(c, 0x11426u);
    if (x86_cc(c, 14)) { goto L_11438; }
    X86_TICK(c, 7);
    // 011428  cmp al, 7
    X86_AT(c, 0x11428u);
    (void)x86_sub(c, g8(c, 0), 0x7u, 0, 1);
    // 01142a  jne 0x11432
    X86_AT(c, 0x1142au);
    if (x86_cc(c, 5)) { goto L_11432; }
    X86_TICK(c, 9);
    // 01142c  mov cx, 0x3c8c
    X86_AT(c, 0x1142cu);
    s16(c, 1, 0x3C8Cu);
    // 011430  jmp 0x11438
    X86_AT(c, 0x11430u);
    goto L_11438;
L_11432:
    X86_TICK(c, 4);
    // 011432  sub cx, 0x268
    X86_AT(c, 0x11432u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x268u, 0, 2)); }
    // 011437  inc eax
    X86_AT(c, 0x11437u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_11438:
    X86_TICK(c, 18);
    // 011438  shl al, 3
    X86_AT(c, 0x11438u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 0, r); }
    // 01143b  or ch, al
    X86_AT(c, 0x1143bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v | g8(c, 0), 1)); }
    // 01143d  mov ah, 0xa4
    X86_AT(c, 0x1143du);
    s8(c, 4, 0xA4u);
    // 01143f  add ah, bl
    X86_AT(c, 0x1143fu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011441  mov al, ch
    X86_AT(c, 0x11441u);
    s8(c, 0, g8(c, 5));
    // 011443  call 0x11bf0
    X86_AT(c, 0x11443u);
    push32(c, 0x11448u); f_00011bf0(c); X86_RET(c, 0x11448u);
    X86_TICK(c, 11);
    // 011448  sub ah, 4
    X86_AT(c, 0x11448u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, 0x4u, 0, 1)); }
    // 01144b  mov al, cl
    X86_AT(c, 0x1144bu);
    s8(c, 0, g8(c, 1));
    // 01144d  call 0x11bf0
    X86_AT(c, 0x1144du);
    push32(c, 0x11452u); f_00011bf0(c); X86_RET(c, 0x11452u);
    X86_TICK(c, 28);
    // 011452  mov ecx, esi
    X86_AT(c, 0x11452u);
    c.r[1] = c.r[6];
    // 011454  shr cl, 2
    X86_AT(c, 0x11454u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 011457  add cl, 0x60
    X86_AT(c, 0x11457u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x60u, 0, 1)); }
    // 01145a  mov esi, ebx
    X86_AT(c, 0x1145au);
    c.r[6] = c.r[3];
    // 01145c  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x1145cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 011464  and eax, 7
    X86_AT(c, 0x11464u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 011469  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x11469u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 011470  mov byte ptr gs:[edi + esi*1 + 0xe0], cl
    X86_AT(c, 0x11470u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u)), g8(c, 1));
    // 011478  add bh, bh
    X86_AT(c, 0x11478u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 01147a  jae 0x114a3
    X86_AT(c, 0x1147au);
    if (x86_cc(c, 3)) { goto L_114a3; }
    X86_TICK(c, 73);
    // 01147c  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x1147cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 011484  xor al, 0x7f
    X86_AT(c, 0x11484u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011486  mul cl
    X86_AT(c, 0x11486u);
    x86_mul(c, g8(c, 1), 1);
    // 011488  shr eax, 7
    X86_AT(c, 0x11488u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01148b  inc eax
    X86_AT(c, 0x1148bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01148c  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1148cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011494  shr eax, 7
    X86_AT(c, 0x11494u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011497  inc eax
    X86_AT(c, 0x11497u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011498  xor al, 0x7f
    X86_AT(c, 0x11498u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01149a  mov ah, 0x40
    X86_AT(c, 0x1149au);
    s8(c, 4, 0x40u);
    // 01149c  add ah, bl
    X86_AT(c, 0x1149cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01149e  call 0x11bf0
    X86_AT(c, 0x1149eu);
    push32(c, 0x114a3u); f_00011bf0(c); X86_RET(c, 0x114a3u);
L_114a3:
    X86_TICK(c, 7);
    // 0114a3  add bh, bh
    X86_AT(c, 0x114a3u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114a5  jae 0x114ce
    X86_AT(c, 0x114a5u);
    if (x86_cc(c, 3)) { goto L_114ce; }
    X86_TICK(c, 73);
    // 0114a7  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x114a7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 0114af  xor al, 0x7f
    X86_AT(c, 0x114afu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114b1  mul cl
    X86_AT(c, 0x114b1u);
    x86_mul(c, g8(c, 1), 1);
    // 0114b3  shr eax, 7
    X86_AT(c, 0x114b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114b6  inc eax
    X86_AT(c, 0x114b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114b7  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114b7u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114bf  shr eax, 7
    X86_AT(c, 0x114bfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114c2  inc eax
    X86_AT(c, 0x114c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114c3  xor al, 0x7f
    X86_AT(c, 0x114c3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114c5  mov ah, 0x44
    X86_AT(c, 0x114c5u);
    s8(c, 4, 0x44u);
    // 0114c7  add ah, bl
    X86_AT(c, 0x114c7u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114c9  call 0x11bf0
    X86_AT(c, 0x114c9u);
    push32(c, 0x114ceu); f_00011bf0(c); X86_RET(c, 0x114ceu);
L_114ce:
    X86_TICK(c, 7);
    // 0114ce  add bh, bh
    X86_AT(c, 0x114ceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114d0  jae 0x114f9
    X86_AT(c, 0x114d0u);
    if (x86_cc(c, 3)) { goto L_114f9; }
    X86_TICK(c, 73);
    // 0114d2  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x114d2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 0114da  xor al, 0x7f
    X86_AT(c, 0x114dau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114dc  mul cl
    X86_AT(c, 0x114dcu);
    x86_mul(c, g8(c, 1), 1);
    // 0114de  shr eax, 7
    X86_AT(c, 0x114deu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114e1  inc eax
    X86_AT(c, 0x114e1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114e2  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114e2u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114ea  shr eax, 7
    X86_AT(c, 0x114eau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114ed  inc eax
    X86_AT(c, 0x114edu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114ee  xor al, 0x7f
    X86_AT(c, 0x114eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114f0  mov ah, 0x48
    X86_AT(c, 0x114f0u);
    s8(c, 4, 0x48u);
    // 0114f2  add ah, bl
    X86_AT(c, 0x114f2u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114f4  call 0x11bf0
    X86_AT(c, 0x114f4u);
    push32(c, 0x114f9u); f_00011bf0(c); X86_RET(c, 0x114f9u);
L_114f9:
    X86_TICK(c, 7);
    // 0114f9  add bh, bh
    X86_AT(c, 0x114f9u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114fb  jae 0x11524
    X86_AT(c, 0x114fbu);
    if (x86_cc(c, 3)) { goto L_11524; }
    X86_TICK(c, 73);
    // 0114fd  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x114fdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011505  xor al, 0x7f
    X86_AT(c, 0x11505u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011507  mul cl
    X86_AT(c, 0x11507u);
    x86_mul(c, g8(c, 1), 1);
    // 011509  shr eax, 7
    X86_AT(c, 0x11509u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01150c  inc eax
    X86_AT(c, 0x1150cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01150d  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1150du);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011515  shr eax, 7
    X86_AT(c, 0x11515u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011518  inc eax
    X86_AT(c, 0x11518u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011519  xor al, 0x7f
    X86_AT(c, 0x11519u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01151b  mov ah, 0x4c
    X86_AT(c, 0x1151bu);
    s8(c, 4, 0x4Cu);
    // 01151d  add ah, bl
    X86_AT(c, 0x1151du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01151f  call 0x11bf0
    X86_AT(c, 0x1151fu);
    push32(c, 0x11524u); f_00011bf0(c); X86_RET(c, 0x11524u);
L_11524:
    X86_TICK(c, 9);
    // 011524  mov cl, bl
    X86_AT(c, 0x11524u);
    s8(c, 1, g8(c, 3));
    // 011526  cmp dl, 0xd8
    X86_AT(c, 0x11526u);
    (void)x86_sub(c, g8(c, 2), 0xD8u, 0, 1);
    // 011529  je 0x1152e
    X86_AT(c, 0x11529u);
    if (x86_cc(c, 4)) { goto L_1152e; }
    X86_TICK(c, 2);
    // 01152b  add cl, 4
    X86_AT(c, 0x1152bu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x4u, 0, 1)); }
L_1152e:
    X86_TICK(c, 21);
    // 01152e  mov ah, 0x80
    X86_AT(c, 0x1152eu);
    s8(c, 4, 0x80u);
    // 011530  add ah, bl
    X86_AT(c, 0x11530u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011532  push edx
    X86_AT(c, 0x11532u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011533  push eax
    X86_AT(c, 0x11533u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011534  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11534u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01153c  or al, 0xf
    X86_AT(c, 0x1153cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 01153e  call 0x11c20
    X86_AT(c, 0x1153eu);
    push32(c, 0x11543u); f_00011c20(c); X86_RET(c, 0x11543u);
    X86_TICK(c, 15);
    // 011543  add ah, 4
    X86_AT(c, 0x11543u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011546  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11546u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01154e  or al, 0xf
    X86_AT(c, 0x1154eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011550  call 0x11c20
    X86_AT(c, 0x11550u);
    push32(c, 0x11555u); f_00011c20(c); X86_RET(c, 0x11555u);
    X86_TICK(c, 15);
    // 011555  add ah, 4
    X86_AT(c, 0x11555u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011558  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x11558u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 011560  or al, 0xf
    X86_AT(c, 0x11560u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011562  call 0x11c20
    X86_AT(c, 0x11562u);
    push32(c, 0x11567u); f_00011c20(c); X86_RET(c, 0x11567u);
    X86_TICK(c, 15);
    // 011567  add ah, 4
    X86_AT(c, 0x11567u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01156a  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x1156au);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 011572  or al, 0xf
    X86_AT(c, 0x11572u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011574  call 0x11c20
    X86_AT(c, 0x11574u);
    push32(c, 0x11579u); f_00011c20(c); X86_RET(c, 0x11579u);
    X86_TICK(c, 13);
    // 011579  mov dl, 0xd8
    X86_AT(c, 0x11579u);
    s8(c, 2, 0xD8u);
    // 01157b  mov al, cl
    X86_AT(c, 0x1157bu);
    s8(c, 0, g8(c, 1));
    // 01157d  mov ah, 0x28
    X86_AT(c, 0x1157du);
    s8(c, 4, 0x28u);
    // 01157f  call 0x11c20
    X86_AT(c, 0x1157fu);
    push32(c, 0x11584u); f_00011c20(c); X86_RET(c, 0x11584u);
    X86_TICK(c, 19);
    // 011584  pop eax
    X86_AT(c, 0x11584u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011585  pop edx
    X86_AT(c, 0x11585u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011586  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11586u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01158e  call 0x11c20
    X86_AT(c, 0x1158eu);
    push32(c, 0x11593u); f_00011c20(c); X86_RET(c, 0x11593u);
    X86_TICK(c, 13);
    // 011593  add ah, 4
    X86_AT(c, 0x11593u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011596  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11596u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01159e  call 0x11c20
    X86_AT(c, 0x1159eu);
    push32(c, 0x115a3u); f_00011c20(c); X86_RET(c, 0x115a3u);
    X86_TICK(c, 13);
    // 0115a3  add ah, 4
    X86_AT(c, 0x115a3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115a6  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x115a6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 0115ae  call 0x11c20
    X86_AT(c, 0x115aeu);
    push32(c, 0x115b3u); f_00011c20(c); X86_RET(c, 0x115b3u);
    X86_TICK(c, 13);
    // 0115b3  add ah, 4
    X86_AT(c, 0x115b3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115b6  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x115b6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 0115be  call 0x11c20
    X86_AT(c, 0x115beu);
    push32(c, 0x115c3u); f_00011c20(c); X86_RET(c, 0x115c3u);
    X86_TICK(c, 15);
    // 0115c3  mov dl, 0xd8
    X86_AT(c, 0x115c3u);
    s8(c, 2, 0xD8u);
    // 0115c5  mov al, 0xf0
    X86_AT(c, 0x115c5u);
    s8(c, 0, 0xF0u);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
L_11ee0:
    X86_TICK(c, 7);
    // 011ee0  cmp bl, 0x47
    X86_AT(c, 0x11ee0u);
    (void)x86_sub(c, g8(c, 3), 0x47u, 0, 1);
    // 011ee3  ja 0x1354c
    X86_AT(c, 0x11ee3u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 011ee9  test dx, 0x8080
    X86_AT(c, 0x11ee9u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & 0x8080u, 2);
    // 011eee  jne 0x13557
    X86_AT(c, 0x11eeeu);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 41);
    // 011ef4  pushal 
    X86_AT(c, 0x11ef4u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 011ef5  push ds
    X86_AT(c, 0x11ef5u);
    push32(c, c.sreg[3]);
    // 011ef6  sub bl, 0x40
    X86_AT(c, 0x11ef6u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x40u, 0, 1)); }
    // 011ef9  movzx ebx, bl
    X86_AT(c, 0x11ef9u);
    c.r[3] = g8(c, 3);
    // 011efc  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x11efcu);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 011f03  test byte ptr gs:[edi + 0x19f8], ah
    X86_AT(c, 0x11f03u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u))) & g8(c, 4), 1);
    // 011f0a  jne 0x1354f
    X86_AT(c, 0x11f0au);
    if (x86_cc(c, 5)) { goto L_1354f; }
    X86_TICK(c, 12);
    // 011f10  test byte ptr gs:[edi + 0x19fa], ah
    X86_AT(c, 0x11f10u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))) & g8(c, 4), 1);
    // 011f17  jne 0x1354f
    X86_AT(c, 0x11f17u);
    if (x86_cc(c, 5)) { goto L_1354f; }
    X86_TICK(c, 10);
    // 011f1d  mov byte ptr gs:[edi + ebx*1 + 0x1a30], dh
    X86_AT(c, 0x11f1du);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A30u)), g8(c, 6));
    // 011f25  mov byte ptr gs:[edi + ebx*1 + 0x1a40], dl
    X86_AT(c, 0x11f25u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u)), g8(c, 2));
    // 011f2d  mov ebp, dword ptr gs:[edi + ebx*4 + 0x1a10]
    X86_AT(c, 0x11f2du);
    c.r[5] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 4 + 0x1A10u)));
    // 011f35  xor ecx, ecx
    X86_AT(c, 0x11f35u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
L_11f37:
    X86_TICK(c, 11);
    // 011f37  cmp dh, byte ptr gs:[ebp + ecx*2 + 0x10]
    X86_AT(c, 0x11f37u);
    (void)x86_sub(c, g8(c, 6), rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[1] * 2 + 0x10u))), 0, 1);
    // 011f3c  jbe 0x11f4c
    X86_AT(c, 0x11f3cu);
    if (x86_cc(c, 6)) { goto L_11f4c; }
    X86_TICK(c, 9);
    // 011f3e  inc ecx
    X86_AT(c, 0x11f3eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 011f3f  cmp cl, 8
    X86_AT(c, 0x11f3fu);
    (void)x86_sub(c, g8(c, 1), 0x8u, 0, 1);
    // 011f42  jne 0x11f37
    X86_AT(c, 0x11f42u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x11f37u); goto L_11f37; }
    X86_TICK(c, 7);
    // 011f44  jmp 0x13568
    X86_AT(c, 0x11f44u);
    goto L_13568;
L_11f4c:
    X86_TICK(c, 35);
    // 011f4c  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x11f4cu);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 011f4f  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x11f4fu);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 011f56  mov dl, byte ptr gs:[ebp + ecx*8 + 0x46]
    X86_AT(c, 0x11f56u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[1] * 8 + 0x46u))));
    // 011f5b  add byte ptr gs:[edi + ebx*1 + 0x1a30], dl
    X86_AT(c, 0x11f5bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A30u)); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, g8(c, 2), 0, 1)); }
    // 011f63  mov edx, dword ptr gs:[ebp + ecx*8 + 0x40]
    X86_AT(c, 0x11f63u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[1] * 8 + 0x40u)));
    // 011f68  mov dword ptr gs:[edi + esi*1], edx
    X86_AT(c, 0x11f68u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6])), c.r[2]);
    // 011f6c  movzx edx, word ptr gs:[ebp + ecx*8 + 0x44]
    X86_AT(c, 0x11f6cu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[1] * 8 + 0x44u)));
    // 011f72  mov dword ptr gs:[edi + esi*1 + 4], edx
    X86_AT(c, 0x11f72u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x4u)), c.r[2]);
    // 011f77  mov edx, dword ptr gs:[ebp + ecx*4 + 0x20]
    X86_AT(c, 0x11f77u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[1] * 4 + 0x20u)));
    // 011f7c  xor ecx, ecx
    X86_AT(c, 0x11f7cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
L_11f7e:
    X86_TICK(c, 11);
    // 011f7e  cmp edx, dword ptr gs:[edi + ecx*4 + 0x3d00]
    X86_AT(c, 0x11f7eu);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[1] * 4 + 0x3D00u))), 0, 4);
    // 011f86  je 0x11f98
    X86_AT(c, 0x11f86u);
    if (x86_cc(c, 4)) { goto L_11f98; }
    X86_TICK(c, 13);
    // 011f88  inc ecx
    X86_AT(c, 0x11f88u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 011f89  cmp cl, byte ptr gs:[edi + 0x19f4]
    X86_AT(c, 0x11f89u);
    (void)x86_sub(c, g8(c, 1), rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F4u))), 0, 1);
    // 011f90  jb 0x11f7e
    X86_AT(c, 0x11f90u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x11f7eu); goto L_11f7e; }
    X86_TICK(c, 7);
    // 011f92  jmp 0x1356d
    X86_AT(c, 0x11f92u);
    goto L_1356d;
L_11f98:
    X86_TICK(c, 139);
    // 011f98  not ah
    X86_AT(c, 0x11f98u);
    { uint32_t v = g8(c, 4); s8(c, 4, ~v & 0xFFu); }
    // 011f9a  and byte ptr gs:[edi + 0x19fc], ah
    X86_AT(c, 0x11f9au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 4), 1)); }
    // 011fa1  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x11fa1u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 011fa8  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x11fa8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 011faf  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x11fafu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 011fb6  and al, ah
    X86_AT(c, 0x11fb6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 4), 1)); }
    // 011fb8  not al
    X86_AT(c, 0x11fb8u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 011fba  mov dx, 0x4f8
    X86_AT(c, 0x11fbau);
    s16(c, 2, 0x4F8u);
    // 011fbe  out dx, al
    X86_AT(c, 0x11fbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011fbf  push ds
    X86_AT(c, 0x11fbfu);
    push32(c, c.sreg[3]);
    // 011fc0  pop ds
    X86_AT(c, 0x11fc0u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011fc1  push ds
    X86_AT(c, 0x11fc1u);
    push32(c, c.sreg[3]);
    // 011fc2  pop ds
    X86_AT(c, 0x11fc2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011fc3  mov al, bl
    X86_AT(c, 0x11fc3u);
    s8(c, 0, g8(c, 3));
    // 011fc5  add al, 0xc0
    X86_AT(c, 0x11fc5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xC0u, 0, 1)); }
    // 011fc7  mov dl, 0xf7
    X86_AT(c, 0x11fc7u);
    s8(c, 2, 0xF7u);
    // 011fc9  mov byte ptr gs:[edi + 0x19f7], al
    X86_AT(c, 0x11fc9u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F7u)), g8(c, 0));
    // 011fd0  out dx, al
    X86_AT(c, 0x11fd0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011fd1  push ds
    X86_AT(c, 0x11fd1u);
    push32(c, c.sreg[3]);
    // 011fd2  pop ds
    X86_AT(c, 0x11fd2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011fd3  push ds
    X86_AT(c, 0x11fd3u);
    push32(c, c.sreg[3]);
    // 011fd4  pop ds
    X86_AT(c, 0x11fd4u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011fd5  mov eax, dword ptr gs:[edi + ecx*4 + 0x3b00]
    X86_AT(c, 0x11fd5u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[1] * 4 + 0x3B00u)));
    // 011fdd  shl ecx, 5
    X86_AT(c, 0x11fddu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 011fe0  lea esi, [edi + ecx*1 + 0x1b00]
    X86_AT(c, 0x11fe0u);
    c.r[6] = (uint32_t)(c.r[7] + c.r[1] + 0x1B00u);
    // 011fe7  xchg al, ah
    X86_AT(c, 0x11fe7u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 011fe9  mov dl, 0xf6
    X86_AT(c, 0x11fe9u);
    s8(c, 2, 0xF6u);
    // 011feb  out dx, al
    X86_AT(c, 0x11febu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 011fec  push ds
    X86_AT(c, 0x11fecu);
    push32(c, c.sreg[3]);
    // 011fed  pop ds
    X86_AT(c, 0x11fedu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011fee  push ds
    X86_AT(c, 0x11feeu);
    push32(c, c.sreg[3]);
    // 011fef  pop ds
    X86_AT(c, 0x11fefu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 011ff0  xchg al, ah
    X86_AT(c, 0x11ff0u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 011ff2  mov ebp, dword ptr gs:[esi + 0x14]
    X86_AT(c, 0x11ff2u);
    c.r[5] = rd32((c.sbase[5] + (uint32_t)(c.r[6] + 0x14u)));
    // 011ff6  test ebp, ebp
    X86_AT(c, 0x11ff6u);
    (void)x86_logic(c, c.r[5] & c.r[5], 4);
    // 011ff8  jne 0x12001
    X86_AT(c, 0x11ff8u);
    if (x86_cc(c, 5)) { goto L_12001; }
    X86_TICK(c, 13);
    // 011ffa  mov ebp, dword ptr gs:[esi + 0xc]
    X86_AT(c, 0x11ffau);
    c.r[5] = rd32((c.sbase[5] + (uint32_t)(c.r[6] + 0xCu)));
    // 011ffe  dec ebp
    X86_AT(c, 0x11ffeu);
    { uint32_t v = c.r[5]; c.r[5] = x86_dec(c, v, 4); }
    // 011fff  jmp 0x12005
    X86_AT(c, 0x11fffu);
    goto L_12005;
L_12001:
    X86_TICK(c, 4);
    // 012001  mov ebp, dword ptr gs:[esi + 0x10]
    X86_AT(c, 0x12001u);
    c.r[5] = rd32((c.sbase[5] + (uint32_t)(c.r[6] + 0x10u)));
L_12005:
    X86_TICK(c, 71);
    // 012005  add eax, ebp
    X86_AT(c, 0x12005u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[5], 0, 4); }
    // 012007  mov dl, 0xf4
    X86_AT(c, 0x12007u);
    s8(c, 2, 0xF4u);
    // 012009  out dx, al
    X86_AT(c, 0x12009u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01200a  push ds
    X86_AT(c, 0x1200au);
    push32(c, c.sreg[3]);
    // 01200b  pop ds
    X86_AT(c, 0x1200bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 01200c  push ds
    X86_AT(c, 0x1200cu);
    push32(c, c.sreg[3]);
    // 01200d  pop ds
    X86_AT(c, 0x1200du);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 01200e  inc edx
    X86_AT(c, 0x1200eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01200f  mov al, ah
    X86_AT(c, 0x1200fu);
    s8(c, 0, g8(c, 4));
    // 012011  out dx, al
    X86_AT(c, 0x12011u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012012  push ds
    X86_AT(c, 0x12012u);
    push32(c, c.sreg[3]);
    // 012013  pop ds
    X86_AT(c, 0x12013u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012014  push ds
    X86_AT(c, 0x12014u);
    push32(c, c.sreg[3]);
    // 012015  pop ds
    X86_AT(c, 0x12015u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012016  mov ebp, edi
    X86_AT(c, 0x12016u);
    c.r[5] = c.r[7];
    // 012018  push gs
    X86_AT(c, 0x12018u);
    push32(c, c.sreg[5]);
    // 01201a  pop ds
    X86_AT(c, 0x1201au);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 01201b  call 0x1262c
    X86_AT(c, 0x1201bu);
    push32(c, 0x12020u); f_0001262c(c); X86_RET(c, 0x12020u);
    X86_TICK(c, 168);
    // 012020  mov dx, 0x4f2
    X86_AT(c, 0x12020u);
    s16(c, 2, 0x4F2u);
    // 012024  out dx, al
    X86_AT(c, 0x12024u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012025  push ds
    X86_AT(c, 0x12025u);
    push32(c, c.sreg[3]);
    // 012026  pop ds
    X86_AT(c, 0x12026u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012027  push ds
    X86_AT(c, 0x12027u);
    push32(c, c.sreg[3]);
    // 012028  pop ds
    X86_AT(c, 0x12028u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012029  inc edx
    X86_AT(c, 0x12029u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01202a  mov al, ah
    X86_AT(c, 0x1202au);
    s8(c, 0, g8(c, 4));
    // 01202c  out dx, al
    X86_AT(c, 0x1202cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01202d  push ds
    X86_AT(c, 0x1202du);
    push32(c, c.sreg[3]);
    // 01202e  pop ds
    X86_AT(c, 0x1202eu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 01202f  push ds
    X86_AT(c, 0x1202fu);
    push32(c, c.sreg[3]);
    // 012030  pop ds
    X86_AT(c, 0x12030u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012031  mov edi, ebp
    X86_AT(c, 0x12031u);
    c.r[7] = c.r[5];
    // 012033  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x12033u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 012036  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x12036u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 01203d  lea esi, [edi + esi*1]
    X86_AT(c, 0x1203du);
    c.r[6] = (uint32_t)(c.r[7] + c.r[6]);
    // 012040  mov al, byte ptr gs:[edi + ebx*1 + 0x1a40]
    X86_AT(c, 0x12040u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u))));
    // 012048  mov ah, byte ptr gs:[edi + ebx*1 + 0x1a38]
    X86_AT(c, 0x12048u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u))));
    // 012050  mul ah
    X86_AT(c, 0x12050u);
    x86_mul(c, g8(c, 4), 1);
    // 012052  movzx ecx, ax
    X86_AT(c, 0x12052u);
    c.r[1] = (c.r[0] & 0xFFFFu);
    // 012055  movzx eax, byte ptr gs:[esi]
    X86_AT(c, 0x12055u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[6])));
    // 012059  mul ecx
    X86_AT(c, 0x12059u);
    x86_mul(c, c.r[1], 4);
    // 01205b  shr eax, 0xe
    X86_AT(c, 0x1205bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0xEu, 4, w); if (w) c.r[0] = r; }
    // 01205e  mov byte ptr gs:[esi], al
    X86_AT(c, 0x1205eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[6])), g8(c, 0));
    // 012061  movzx eax, byte ptr gs:[esi + 3]
    X86_AT(c, 0x12061u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[6] + 0x3u)));
    // 012066  mul ecx
    X86_AT(c, 0x12066u);
    x86_mul(c, c.r[1], 4);
    // 012068  shr eax, 0xe
    X86_AT(c, 0x12068u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0xEu, 4, w); if (w) c.r[0] = r; }
    // 01206b  mov byte ptr gs:[esi + 3], al
    X86_AT(c, 0x1206bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[6] + 0x3u)), g8(c, 0));
    // 01206f  call 0x12eec
    X86_AT(c, 0x1206fu);
    push32(c, 0x12074u); f_00012eec(c); X86_RET(c, 0x12074u);
    X86_TICK(c, 122);
    // 012074  mov al, byte ptr gs:[esi + 9]
    X86_AT(c, 0x12074u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[6] + 0x9u))));
    // 012078  mov dx, 0x4f0
    X86_AT(c, 0x12078u);
    s16(c, 2, 0x4F0u);
    // 01207c  add al, al
    X86_AT(c, 0x1207cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 01207e  out dx, al
    X86_AT(c, 0x1207eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01207f  push ds
    X86_AT(c, 0x1207fu);
    push32(c, c.sreg[3]);
    // 012080  pop ds
    X86_AT(c, 0x12080u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012081  push ds
    X86_AT(c, 0x12081u);
    push32(c, c.sreg[3]);
    // 012082  pop ds
    X86_AT(c, 0x12082u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012083  mov ch, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x12083u);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 01208a  or byte ptr gs:[edi + 0x19fa], ch
    X86_AT(c, 0x1208au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 5), 1)); }
    // 012091  mov al, byte ptr gs:[edi + 0x19fa]
    X86_AT(c, 0x12091u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FAu))));
    // 012098  or al, byte ptr gs:[edi + 0x19fc]
    X86_AT(c, 0x12098u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu))), 1)); }
    // 01209f  or al, byte ptr gs:[edi + 0x19fb]
    X86_AT(c, 0x1209fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19FBu))), 1)); }
    // 0120a6  not al
    X86_AT(c, 0x120a6u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 0120a8  mov dl, 0xf8
    X86_AT(c, 0x120a8u);
    s8(c, 2, 0xF8u);
    // 0120aa  or byte ptr gs:[edi + 0x19fc], ch
    X86_AT(c, 0x120aau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 5), 1)); }
    // 0120b1  out dx, al
    X86_AT(c, 0x120b1u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0120b2  pop ds
    X86_AT(c, 0x120b2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0120b3  popal 
    X86_AT(c, 0x120b3u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0120b4  xor al, al
    X86_AT(c, 0x120b4u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0120b6  ret 
    X86_AT(c, 0x120b6u);
    c.eip = pop32(c); return;
L_1354c:
    X86_TICK(c, 12);
    // 01354c  mov al, 1
    X86_AT(c, 0x1354cu);
    s8(c, 0, 0x1u);
    // 01354e  ret 
    X86_AT(c, 0x1354eu);
    c.eip = pop32(c); return;
L_1354f:
    X86_TICK(c, 11);
    // 01354f  pop ds
    X86_AT(c, 0x1354fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 013550  jmp 0x13553
    X86_AT(c, 0x13550u);
    goto L_13553;
L_13553:
    X86_TICK(c, 36);
    // 013553  popal 
    X86_AT(c, 0x13553u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 013554  mov al, 2
    X86_AT(c, 0x13554u);
    s8(c, 0, 0x2u);
    // 013556  ret 
    X86_AT(c, 0x13556u);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
L_13568:
    X86_TICK(c, 40);
    // 013568  pop ds
    X86_AT(c, 0x13568u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 013569  popal 
    X86_AT(c, 0x13569u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 01356a  mov al, 8
    X86_AT(c, 0x1356au);
    s8(c, 0, 0x8u);
    // 01356c  ret 
    X86_AT(c, 0x1356cu);
    c.eip = pop32(c); return;
L_1356d:
    X86_TICK(c, 40);
    // 01356d  pop ds
    X86_AT(c, 0x1356du);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 01356e  popal 
    X86_AT(c, 0x1356eu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 01356f  mov al, 9
    X86_AT(c, 0x1356fu);
    s8(c, 0, 0x9u);
    // 013571  ret 
    X86_AT(c, 0x13571u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11227u, "ran off the end of a function");
}
}
