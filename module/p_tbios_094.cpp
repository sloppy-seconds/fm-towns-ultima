#include "p_tbios_funcs.h"
namespace p_tbios {
void f_000099cf(X86Cpu& c) {
    goto L_99cf;
L_8170:
    X86_TICK(c, 7);
    // 008170  call 0xb930
    X86_AT(c, 0x8170u);
    push32(c, 0x8175u); f_0000b930(c); X86_RET(c, 0x8175u);
    X86_TICK(c, 5);
    // 008175  jae 0x8180
    X86_AT(c, 0x8175u);
    if (x86_cc(c, 3)) { goto L_8180; }
    X86_TICK(c, 10);
    // 008177  ret 
    X86_AT(c, 0x8177u);
    c.eip = pop32(c); return;
L_8180:
    X86_TICK(c, 58);
    // 008180  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x8180u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 008184  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8184u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00818c  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x818cu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 008191  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x8191u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 008195  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x8195u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00819c  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x819cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 0081a3  and bx, 0xffe0
    X86_AT(c, 0x81a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081a8  shld eax, ebx, 0x10
    X86_AT(c, 0x81a8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0081ac  and ax, 0xffe0
    X86_AT(c, 0x81acu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081b0  cmp bx, ax
    X86_AT(c, 0x81b0u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0081b3  je 0x824c
    X86_AT(c, 0x81b3u);
    if (x86_cc(c, 4)) { goto L_824c; }
    X86_TICK(c, 25);
    // 0081b9  push eax
    X86_AT(c, 0x81b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0081ba  push ebx
    X86_AT(c, 0x81bau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0081bb  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81bbu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0081c3  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x81c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_824c:
    X86_TICK(c, 32);
    // 00824c  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x824cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008254  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8254u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00825b  shld edx, ecx, 0x10
    X86_AT(c, 0x825bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00825f  and eax, 0x1f
    X86_AT(c, 0x825fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_99cf:
    X86_TICK(c, 64);
    // 0099cf  mov di, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x99cfu);
    s16(c, 7, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0099d7  and edi, 0xfff8
    X86_AT(c, 0x99d7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0xFFF8u, 4); }
    // 0099dd  mov eax, edi
    X86_AT(c, 0x99ddu);
    c.r[0] = c.r[7];
    // 0099df  mov edx, edi
    X86_AT(c, 0x99dfu);
    c.r[2] = c.r[7];
    // 0099e1  shr edi, 1
    X86_AT(c, 0x99e1u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[7] = r; }
    // 0099e3  add edi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x99e3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 0099ea  mov bx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x99eau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))));
    // 0099f2  mov cl, bl
    X86_AT(c, 0x99f2u);
    s8(c, 1, g8(c, 3));
    // 0099f4  and bx, 0xfff8
    X86_AT(c, 0x99f4u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFF8u, 2)); }
    // 0099f9  sub ax, bx
    X86_AT(c, 0x99f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0099fc  shr eax, 1
    X86_AT(c, 0x99fcu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0099fe  add esi, eax
    X86_AT(c, 0x99feu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 009a00  mov bx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9a00u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009a08  and ebx, 0xfff8
    X86_AT(c, 0x9a08u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0xFFF8u, 4); }
    // 009a0e  sub ebx, edx
    X86_AT(c, 0x9a0eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[2], 0, 4); }
    // 009a10  shr ebx, 3
    X86_AT(c, 0x9a10u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 009a13  inc ebx
    X86_AT(c, 0x9a13u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 009a14  and cl, 7
    X86_AT(c, 0x9a14u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x7u, 1)); }
    // 009a17  shl cl, 2
    X86_AT(c, 0x9a17u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 009a1a  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x9a1au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 009a22  je 0x9a52
    X86_AT(c, 0x9a22u);
    if (x86_cc(c, 4)) { goto L_9a52; }
    X86_TICK(c, 21);
    // 009a24  push ebx
    X86_AT(c, 0x9a24u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 009a25  push ecx
    X86_AT(c, 0x9a25u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 009a26  push edi
    X86_AT(c, 0x9a26u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 009a27  mov bx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9a27u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009a2f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x9a2fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 009a37  call 0x7f18
    X86_AT(c, 0x9a37u);
    push32(c, 0x9a3cu); f_00007f18(c); X86_RET(c, 0x9a3cu);
    X86_TICK(c, 22);
    // 009a3c  mov edx, edi
    X86_AT(c, 0x9a3cu);
    c.r[2] = c.r[7];
    // 009a3e  pop edi
    X86_AT(c, 0x9a3eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 009a3f  mov cl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9a3fu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009a46  and cl, 0x18
    X86_AT(c, 0x9a46u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x18u, 1)); }
    // 009a49  mov byte ptr gs:[ebp + 0x420], cl
    X86_AT(c, 0x9a49u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x420u)), g8(c, 1));
    // 009a50  pop ecx
    X86_AT(c, 0x9a50u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 009a51  pop ebx
    X86_AT(c, 0x9a51u);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_9a52:
    X86_TICK(c, 11);
    // 009a52  mov eax, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x9a52u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)));
    // 009a59  jmp dword ptr cs:[eax*4 + 0x9a64]
    X86_AT(c, 0x9a59u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x9A64u)));
      switch (t) {
      case 0x8170u: X86_POLL(c, 0x8170u); goto L_8170;
      case 0x9aa4u: goto L_9aa4;
      case 0x9aa8u: goto L_9aa8;
      case 0x9c4cu: goto L_9c4c;
      case 0x9db4u: goto L_9db4;
      case 0x9f74u: goto L_9f74;
      case 0xa0dcu: goto L_a0dc;
      case 0xa294u: goto L_a294;
      default: x86_jump(c, t); return; } }
L_9aa4:
    X86_TICK(c, 10);
    // 009aa4  ret 
    X86_AT(c, 0x9aa4u);
    c.eip = pop32(c); return;
L_9aa8:
    X86_TICK(c, 12);
    // 009aa8  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x9aa8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 009ab0  jne 0x9b60
    X86_AT(c, 0x9ab0u);
    if (x86_cc(c, 5)) { goto L_9b60; }
    X86_TICK(c, 7);
    // 009ab6  cmp ebx, 1
    X86_AT(c, 0x9ab6u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009ab9  je 0x9b20
    X86_AT(c, 0x9ab9u);
    if (x86_cc(c, 4)) { goto L_9b20; }
    X86_TICK(c, 55);
    // 009abb  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9abbu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009abe  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9abeu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009abf  shld eax, edx, cl
    X86_AT(c, 0x9abfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009ac2  mov dl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9ac2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009ac9  and edx, 7
    X86_AT(c, 0x9ac9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009acc  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x9accu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 009ad4  not edx
    X86_AT(c, 0x9ad4u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009ad6  and dword ptr es:[edi], edx
    X86_AT(c, 0x9ad6u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 009ad9  not edx
    X86_AT(c, 0x9ad9u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009adb  and eax, edx
    X86_AT(c, 0x9adbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009add  or dword ptr es:[edi], eax
    X86_AT(c, 0x9addu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009ae0  add edi, 4
    X86_AT(c, 0x9ae0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009ae3  dec ebx
    X86_AT(c, 0x9ae3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009ae4  cmp ebx, 1
    X86_AT(c, 0x9ae4u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009ae7  je 0x9af5
    X86_AT(c, 0x9ae7u);
    if (x86_cc(c, 4)) { goto L_9af5; }
    X86_TICK(c, 2);
    // 009ae9  dec ebx
    X86_AT(c, 0x9ae9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_9aea:
    X86_TICK(c, 28);
    // 009aea  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9aeau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009aed  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9aedu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009aee  shld eax, edx, cl
    X86_AT(c, 0x9aeeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009af1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x9af1u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 009af2  dec ebx
    X86_AT(c, 0x9af2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009af3  jne 0x9aea
    X86_AT(c, 0x9af3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9aeau); goto L_9aea; }
L_9af5:
    X86_TICK(c, 47);
    // 009af5  mov eax, dword ptr [esi]
    X86_AT(c, 0x9af5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009af7  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9af7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009afa  shld eax, edx, cl
    X86_AT(c, 0x9afau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009afd  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9afdu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009b04  and edx, 7
    X86_AT(c, 0x9b04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009b07  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x9b07u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 009b0f  not edx
    X86_AT(c, 0x9b0fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b11  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x9b11u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009b14  and ebx, edx
    X86_AT(c, 0x9b14u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 009b16  not edx
    X86_AT(c, 0x9b16u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b18  and eax, edx
    X86_AT(c, 0x9b18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009b1a  or ebx, eax
    X86_AT(c, 0x9b1au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 009b1c  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x9b1cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 009b1f  ret 
    X86_AT(c, 0x9b1fu);
    c.eip = pop32(c); return;
L_9b20:
    X86_TICK(c, 64);
    // 009b20  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9b20u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 009b27  shld ebx, eax, 0x10
    X86_AT(c, 0x9b27u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 009b2b  and eax, 7
    X86_AT(c, 0x9b2bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009b30  mov edx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0x9b30u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 009b38  and ebx, 7
    X86_AT(c, 0x9b38u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009b3b  and edx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0x9b3bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u))), 4); }
    // 009b43  push edx
    X86_AT(c, 0x9b43u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 009b44  mov eax, dword ptr [esi]
    X86_AT(c, 0x9b44u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009b46  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9b46u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009b49  shld eax, edx, cl
    X86_AT(c, 0x9b49u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009b4c  pop edx
    X86_AT(c, 0x9b4cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 009b4d  not edx
    X86_AT(c, 0x9b4du);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b4f  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x9b4fu);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009b52  and ebx, edx
    X86_AT(c, 0x9b52u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 009b54  not edx
    X86_AT(c, 0x9b54u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b56  and eax, edx
    X86_AT(c, 0x9b56u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009b58  or ebx, eax
    X86_AT(c, 0x9b58u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 009b5a  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x9b5au);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 009b5d  ret 
    X86_AT(c, 0x9b5du);
    c.eip = pop32(c); return;
L_9b60:
    X86_TICK(c, 7);
    // 009b60  cmp ebx, 1
    X86_AT(c, 0x9b60u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009b63  je 0x9c00
    X86_AT(c, 0x9b63u);
    if (x86_cc(c, 4)) { goto L_9c00; }
    X86_TICK(c, 19);
    // 009b69  push ebx
    X86_AT(c, 0x9b69u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 009b6a  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9b6au);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009b71  and ebx, 7
    X86_AT(c, 0x9b71u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009b74  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0x9b74u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 009b7c  call 0x7f8c
    X86_AT(c, 0x9b7cu);
    push32(c, 0x9b81u); f_00007f8c(c); X86_RET(c, 0x9b81u);
    X86_TICK(c, 62);
    // 009b81  and ebx, eax
    X86_AT(c, 0x9b81u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009b83  not ebx
    X86_AT(c, 0x9b83u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009b85  and dword ptr es:[edi], ebx
    X86_AT(c, 0x9b85u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[3], 4)); }
    // 009b88  push ebx
    X86_AT(c, 0x9b88u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 009b89  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9b89u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009b8c  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9b8cu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009b8d  shld eax, ebx, cl
    X86_AT(c, 0x9b8du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009b90  pop ebx
    X86_AT(c, 0x9b90u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 009b91  not ebx
    X86_AT(c, 0x9b91u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009b93  and eax, ebx
    X86_AT(c, 0x9b93u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 009b95  or dword ptr es:[edi], eax
    X86_AT(c, 0x9b95u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009b98  add edi, 4
    X86_AT(c, 0x9b98u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009b9b  dec dword ptr [esp]
    X86_AT(c, 0x9b9bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009b9e  cmp dword ptr [esp], 1
    X86_AT(c, 0x9b9eu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 009ba2  je 0x9bcb
    X86_AT(c, 0x9ba2u);
    if (x86_cc(c, 4)) { goto L_9bcb; }
    X86_TICK(c, 6);
    // 009ba4  dec dword ptr [esp]
    X86_AT(c, 0x9ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_9ba7:
    X86_TICK(c, 23);
    // 009ba7  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9ba7u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009baa  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9baau);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009bab  shld eax, ebx, cl
    X86_AT(c, 0x9babu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009bae  push eax
    X86_AT(c, 0x9baeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009baf  call 0x7f8c
    X86_AT(c, 0x9bafu);
    push32(c, 0x9bb4u); f_00007f8c(c); X86_RET(c, 0x9bb4u);
    X86_TICK(c, 39);
    // 009bb4  mov ebx, eax
    X86_AT(c, 0x9bb4u);
    c.r[3] = c.r[0];
    // 009bb6  not ebx
    X86_AT(c, 0x9bb6u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009bb8  and dword ptr es:[edi], ebx
    X86_AT(c, 0x9bb8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[3], 4)); }
    // 009bbb  not ebx
    X86_AT(c, 0x9bbbu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009bbd  pop eax
    X86_AT(c, 0x9bbdu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009bbe  and eax, ebx
    X86_AT(c, 0x9bbeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 009bc0  or dword ptr es:[edi], eax
    X86_AT(c, 0x9bc0u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009bc3  add edi, 4
    X86_AT(c, 0x9bc3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009bc6  dec dword ptr [esp]
    X86_AT(c, 0x9bc6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009bc9  jne 0x9ba7
    X86_AT(c, 0x9bc9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9ba7u); goto L_9ba7; }
L_9bcb:
    X86_TICK(c, 30);
    // 009bcb  mov eax, dword ptr [esi]
    X86_AT(c, 0x9bcbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009bcd  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9bcdu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009bd0  shld eax, ebx, cl
    X86_AT(c, 0x9bd0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009bd3  push eax
    X86_AT(c, 0x9bd3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009bd4  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9bd4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009bdb  and ebx, 7
    X86_AT(c, 0x9bdbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009bde  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0x9bdeu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 009be6  call 0x7f8c
    X86_AT(c, 0x9be6u);
    push32(c, 0x9bebu); f_00007f8c(c); X86_RET(c, 0x9bebu);
    X86_TICK(c, 36);
    // 009beb  and ebx, eax
    X86_AT(c, 0x9bebu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009bed  not ebx
    X86_AT(c, 0x9bedu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009bef  mov edx, dword ptr es:[edi]
    X86_AT(c, 0x9befu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009bf2  and edx, ebx
    X86_AT(c, 0x9bf2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 009bf4  not ebx
    X86_AT(c, 0x9bf4u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009bf6  pop eax
    X86_AT(c, 0x9bf6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009bf7  and eax, ebx
    X86_AT(c, 0x9bf7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 009bf9  or edx, eax
    X86_AT(c, 0x9bf9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 009bfb  mov dword ptr es:[edi], edx
    X86_AT(c, 0x9bfbu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 009bfe  pop ebx
    X86_AT(c, 0x9bfeu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 009bff  ret 
    X86_AT(c, 0x9bffu);
    c.eip = pop32(c); return;
L_9c00:
    X86_TICK(c, 29);
    // 009c00  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9c00u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009c07  and eax, 7
    X86_AT(c, 0x9c07u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009c0c  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0x9c0cu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 009c14  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9c14u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009c1b  and eax, 7
    X86_AT(c, 0x9c1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009c20  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0x9c20u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 009c28  call 0x7f8c
    X86_AT(c, 0x9c28u);
    push32(c, 0x9c2du); f_00007f8c(c); X86_RET(c, 0x9c2du);
    X86_TICK(c, 45);
    // 009c2d  and ebx, eax
    X86_AT(c, 0x9c2du);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009c2f  push ebx
    X86_AT(c, 0x9c2fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 009c30  mov eax, dword ptr [esi]
    X86_AT(c, 0x9c30u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009c32  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9c32u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009c35  shld eax, ebx, cl
    X86_AT(c, 0x9c35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009c38  pop ebx
    X86_AT(c, 0x9c38u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 009c39  not ebx
    X86_AT(c, 0x9c39u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009c3b  mov edx, dword ptr es:[edi]
    X86_AT(c, 0x9c3bu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009c3e  and edx, ebx
    X86_AT(c, 0x9c3eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 009c40  not ebx
    X86_AT(c, 0x9c40u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009c42  and eax, ebx
    X86_AT(c, 0x9c42u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 009c44  or edx, eax
    X86_AT(c, 0x9c44u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 009c46  mov dword ptr es:[edi], edx
    X86_AT(c, 0x9c46u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 009c49  ret 
    X86_AT(c, 0x9c49u);
    c.eip = pop32(c); return;
L_9c4c:
    X86_TICK(c, 12);
    // 009c4c  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x9c4cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 009c54  jne 0x9cec
    X86_AT(c, 0x9c54u);
    if (x86_cc(c, 5)) { goto L_9cec; }
    X86_TICK(c, 7);
    // 009c5a  cmp ebx, 1
    X86_AT(c, 0x9c5au);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009c5d  je 0x9cb8
    X86_AT(c, 0x9c5du);
    if (x86_cc(c, 4)) { goto L_9cb8; }
    X86_TICK(c, 44);
    // 009c5f  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9c5fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009c62  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9c62u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009c63  shld eax, edx, cl
    X86_AT(c, 0x9c63u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009c66  mov dl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9c66u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009c6d  and edx, 7
    X86_AT(c, 0x9c6du);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009c70  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x9c70u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 009c78  and eax, edx
    X86_AT(c, 0x9c78u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009c7a  or dword ptr es:[edi], eax
    X86_AT(c, 0x9c7au);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009c7d  add edi, 4
    X86_AT(c, 0x9c7du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009c80  dec ebx
    X86_AT(c, 0x9c80u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009c81  cmp ebx, 1
    X86_AT(c, 0x9c81u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009c84  je 0x9c97
    X86_AT(c, 0x9c84u);
    if (x86_cc(c, 4)) { goto L_9c97; }
    X86_TICK(c, 2);
    // 009c86  dec ebx
    X86_AT(c, 0x9c86u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_9c87:
    X86_TICK(c, 30);
    // 009c87  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9c87u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009c8a  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9c8au);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009c8b  shld eax, edx, cl
    X86_AT(c, 0x9c8bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009c8e  or dword ptr es:[edi], eax
    X86_AT(c, 0x9c8eu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009c91  add edi, 4
    X86_AT(c, 0x9c91u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009c94  dec ebx
    X86_AT(c, 0x9c94u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009c95  jne 0x9c87
    X86_AT(c, 0x9c95u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9c87u); goto L_9c87; }
L_9c97:
    X86_TICK(c, 40);
    // 009c97  mov eax, dword ptr [esi]
    X86_AT(c, 0x9c97u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009c99  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9c99u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009c9c  shld eax, edx, cl
    X86_AT(c, 0x9c9cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009c9f  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9c9fu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009ca6  and edx, 7
    X86_AT(c, 0x9ca6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009ca9  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x9ca9u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 009cb1  and eax, edx
    X86_AT(c, 0x9cb1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009cb3  or dword ptr es:[edi], eax
    X86_AT(c, 0x9cb3u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009cb6  ret 
    X86_AT(c, 0x9cb6u);
    c.eip = pop32(c); return;
L_9cb8:
    X86_TICK(c, 57);
    // 009cb8  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9cb8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 009cbf  shld ebx, eax, 0x10
    X86_AT(c, 0x9cbfu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 009cc3  and eax, 7
    X86_AT(c, 0x9cc3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009cc8  mov edx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0x9cc8u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 009cd0  and ebx, 7
    X86_AT(c, 0x9cd0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009cd3  and edx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0x9cd3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u))), 4); }
    // 009cdb  push edx
    X86_AT(c, 0x9cdbu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 009cdc  mov eax, dword ptr [esi]
    X86_AT(c, 0x9cdcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009cde  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9cdeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009ce1  shld eax, edx, cl
    X86_AT(c, 0x9ce1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009ce4  pop edx
    X86_AT(c, 0x9ce4u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 009ce5  and eax, edx
    X86_AT(c, 0x9ce5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009ce7  or dword ptr es:[edi], eax
    X86_AT(c, 0x9ce7u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009cea  ret 
    X86_AT(c, 0x9ceau);
    c.eip = pop32(c); return;
L_9cec:
    X86_TICK(c, 7);
    // 009cec  cmp ebx, 1
    X86_AT(c, 0x9cecu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009cef  je 0x9d74
    X86_AT(c, 0x9cefu);
    if (x86_cc(c, 4)) { goto L_9d74; }
    X86_TICK(c, 19);
    // 009cf5  push ebx
    X86_AT(c, 0x9cf5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 009cf6  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9cf6u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009cfd  and ebx, 7
    X86_AT(c, 0x9cfdu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009d00  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0x9d00u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 009d08  call 0x7f8c
    X86_AT(c, 0x9d08u);
    push32(c, 0x9d0du); f_00007f8c(c); X86_RET(c, 0x9d0du);
    X86_TICK(c, 51);
    // 009d0d  and ebx, eax
    X86_AT(c, 0x9d0du);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009d0f  push ebx
    X86_AT(c, 0x9d0fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 009d10  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9d10u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009d13  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9d13u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009d14  shld eax, ebx, cl
    X86_AT(c, 0x9d14u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009d17  pop ebx
    X86_AT(c, 0x9d17u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 009d18  and eax, ebx
    X86_AT(c, 0x9d18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 009d1a  or dword ptr es:[edi], eax
    X86_AT(c, 0x9d1au);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009d1d  add edi, 4
    X86_AT(c, 0x9d1du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009d20  dec dword ptr [esp]
    X86_AT(c, 0x9d20u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009d23  cmp dword ptr [esp], 1
    X86_AT(c, 0x9d23u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 009d27  je 0x9d49
    X86_AT(c, 0x9d27u);
    if (x86_cc(c, 4)) { goto L_9d49; }
    X86_TICK(c, 6);
    // 009d29  dec dword ptr [esp]
    X86_AT(c, 0x9d29u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_9d2c:
    X86_TICK(c, 23);
    // 009d2c  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9d2cu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009d2f  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9d2fu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009d30  shld eax, ebx, cl
    X86_AT(c, 0x9d30u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009d33  push eax
    X86_AT(c, 0x9d33u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009d34  call 0x7f8c
    X86_AT(c, 0x9d34u);
    push32(c, 0x9d39u); f_00007f8c(c); X86_RET(c, 0x9d39u);
    X86_TICK(c, 28);
    // 009d39  mov ebx, eax
    X86_AT(c, 0x9d39u);
    c.r[3] = c.r[0];
    // 009d3b  pop eax
    X86_AT(c, 0x9d3bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009d3c  and eax, ebx
    X86_AT(c, 0x9d3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 009d3e  or dword ptr es:[edi], eax
    X86_AT(c, 0x9d3eu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009d41  add edi, 4
    X86_AT(c, 0x9d41u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009d44  dec dword ptr [esp]
    X86_AT(c, 0x9d44u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009d47  jne 0x9d2c
    X86_AT(c, 0x9d47u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9d2cu); goto L_9d2c; }
L_9d49:
    X86_TICK(c, 30);
    // 009d49  mov eax, dword ptr [esi]
    X86_AT(c, 0x9d49u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009d4b  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9d4bu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009d4e  shld eax, ebx, cl
    X86_AT(c, 0x9d4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009d51  push eax
    X86_AT(c, 0x9d51u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009d52  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9d52u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009d59  and ebx, 7
    X86_AT(c, 0x9d59u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009d5c  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0x9d5cu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 009d64  call 0x7f8c
    X86_AT(c, 0x9d64u);
    push32(c, 0x9d69u); f_00007f8c(c); X86_RET(c, 0x9d69u);
    X86_TICK(c, 29);
    // 009d69  and ebx, eax
    X86_AT(c, 0x9d69u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009d6b  pop eax
    X86_AT(c, 0x9d6bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009d6c  and eax, ebx
    X86_AT(c, 0x9d6cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 009d6e  or dword ptr es:[edi], eax
    X86_AT(c, 0x9d6eu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009d71  pop ebx
    X86_AT(c, 0x9d71u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 009d72  ret 
    X86_AT(c, 0x9d72u);
    c.eip = pop32(c); return;
L_9d74:
    X86_TICK(c, 29);
    // 009d74  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9d74u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009d7b  and eax, 7
    X86_AT(c, 0x9d7bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009d80  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0x9d80u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 009d88  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9d88u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009d8f  and eax, 7
    X86_AT(c, 0x9d8fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009d94  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0x9d94u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 009d9c  call 0x7f8c
    X86_AT(c, 0x9d9cu);
    push32(c, 0x9da1u); f_00007f8c(c); X86_RET(c, 0x9da1u);
    X86_TICK(c, 38);
    // 009da1  and ebx, eax
    X86_AT(c, 0x9da1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009da3  push ebx
    X86_AT(c, 0x9da3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 009da4  mov eax, dword ptr [esi]
    X86_AT(c, 0x9da4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009da6  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9da6u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009da9  shld eax, ebx, cl
    X86_AT(c, 0x9da9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009dac  pop ebx
    X86_AT(c, 0x9dacu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 009dad  and eax, ebx
    X86_AT(c, 0x9dadu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 009daf  or dword ptr es:[edi], eax
    X86_AT(c, 0x9dafu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009db2  ret 
    X86_AT(c, 0x9db2u);
    c.eip = pop32(c); return;
L_9db4:
    X86_TICK(c, 12);
    // 009db4  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x9db4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 009dbc  jne 0x9e7c
    X86_AT(c, 0x9dbcu);
    if (x86_cc(c, 5)) { goto L_9e7c; }
    X86_TICK(c, 7);
    // 009dc2  cmp ebx, 1
    X86_AT(c, 0x9dc2u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009dc5  je 0x9e3c
    X86_AT(c, 0x9dc5u);
    if (x86_cc(c, 4)) { goto L_9e3c; }
    X86_TICK(c, 66);
    // 009dc7  push ecx
    X86_AT(c, 0x9dc7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 009dc8  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9dc8u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009dcb  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9dcbu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009dcc  shld eax, edx, cl
    X86_AT(c, 0x9dccu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009dcf  mov dl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9dcfu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009dd6  and edx, 7
    X86_AT(c, 0x9dd6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009dd9  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x9dd9u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 009de1  mov ecx, edx
    X86_AT(c, 0x9de1u);
    c.r[1] = c.r[2];
    // 009de3  not edx
    X86_AT(c, 0x9de3u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009de5  and edx, dword ptr es:[edi]
    X86_AT(c, 0x9de5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[0] + (uint32_t)(c.r[7]))), 4); }
    // 009de8  and ecx, eax
    X86_AT(c, 0x9de8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[0], 4); }
    // 009dea  mov eax, dword ptr es:[edi]
    X86_AT(c, 0x9deau);
    c.r[0] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009ded  and eax, ecx
    X86_AT(c, 0x9dedu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 009def  or eax, edx
    X86_AT(c, 0x9defu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 009df1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x9df1u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 009df2  pop ecx
    X86_AT(c, 0x9df2u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 009df3  dec ebx
    X86_AT(c, 0x9df3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009df4  cmp ebx, 1
    X86_AT(c, 0x9df4u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009df7  je 0x9e0a
    X86_AT(c, 0x9df7u);
    if (x86_cc(c, 4)) { goto L_9e0a; }
    X86_TICK(c, 2);
    // 009df9  dec ebx
    X86_AT(c, 0x9df9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_9dfa:
    X86_TICK(c, 30);
    // 009dfa  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9dfau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009dfd  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9dfdu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009dfe  shld eax, edx, cl
    X86_AT(c, 0x9dfeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009e01  and dword ptr es:[edi], eax
    X86_AT(c, 0x9e01u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[0], 4)); }
    // 009e04  add edi, 4
    X86_AT(c, 0x9e04u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009e07  dec ebx
    X86_AT(c, 0x9e07u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009e08  jne 0x9dfa
    X86_AT(c, 0x9e08u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9dfau); goto L_9dfa; }
L_9e0a:
    X86_TICK(c, 55);
    // 009e0a  mov eax, dword ptr [esi]
    X86_AT(c, 0x9e0au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009e0c  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9e0cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009e0f  shld eax, edx, cl
    X86_AT(c, 0x9e0fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009e12  push eax
    X86_AT(c, 0x9e12u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009e13  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9e13u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009e1a  and edx, 7
    X86_AT(c, 0x9e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009e1d  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x9e1du);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 009e25  mov ecx, edx
    X86_AT(c, 0x9e25u);
    c.r[1] = c.r[2];
    // 009e27  not edx
    X86_AT(c, 0x9e27u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009e29  pop eax
    X86_AT(c, 0x9e29u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009e2a  and ecx, eax
    X86_AT(c, 0x9e2au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[0], 4); }
    // 009e2c  mov eax, dword ptr es:[edi]
    X86_AT(c, 0x9e2cu);
    c.r[0] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009e2f  and edx, eax
    X86_AT(c, 0x9e2fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[0], 4); }
    // 009e31  and eax, ecx
    X86_AT(c, 0x9e31u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 009e33  or eax, edx
    X86_AT(c, 0x9e33u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 009e35  mov dword ptr es:[edi], eax
    X86_AT(c, 0x9e35u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[0]);
    // 009e38  ret 
    X86_AT(c, 0x9e38u);
    c.eip = pop32(c); return;
L_9e3c:
    X86_TICK(c, 66);
    // 009e3c  mov eax, dword ptr [esi]
    X86_AT(c, 0x9e3cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009e3e  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9e3eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009e41  shld eax, edx, cl
    X86_AT(c, 0x9e41u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009e44  push eax
    X86_AT(c, 0x9e44u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009e45  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9e45u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 009e4c  shld ebx, eax, 0x10
    X86_AT(c, 0x9e4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 009e50  and eax, 7
    X86_AT(c, 0x9e50u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009e55  mov edx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0x9e55u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 009e5d  and ebx, 7
    X86_AT(c, 0x9e5du);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009e60  and edx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0x9e60u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u))), 4); }
    // 009e68  mov ecx, edx
    X86_AT(c, 0x9e68u);
    c.r[1] = c.r[2];
    // 009e6a  not edx
    X86_AT(c, 0x9e6au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009e6c  pop eax
    X86_AT(c, 0x9e6cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009e6d  and ecx, eax
    X86_AT(c, 0x9e6du);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[0], 4); }
    // 009e6f  mov eax, dword ptr es:[edi]
    X86_AT(c, 0x9e6fu);
    c.r[0] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009e72  and edx, eax
    X86_AT(c, 0x9e72u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[0], 4); }
    // 009e74  and eax, ecx
    X86_AT(c, 0x9e74u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 009e76  or eax, edx
    X86_AT(c, 0x9e76u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 009e78  mov dword ptr es:[edi], eax
    X86_AT(c, 0x9e78u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[0]);
    // 009e7b  ret 
    X86_AT(c, 0x9e7bu);
    c.eip = pop32(c); return;
L_9e7c:
    X86_TICK(c, 7);
    // 009e7c  cmp ebx, 1
    X86_AT(c, 0x9e7cu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009e7f  je 0x9f28
    X86_AT(c, 0x9e7fu);
    if (x86_cc(c, 4)) { goto L_9f28; }
    X86_TICK(c, 37);
    // 009e85  push ebx
    X86_AT(c, 0x9e85u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 009e86  push ecx
    X86_AT(c, 0x9e86u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 009e87  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9e87u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009e8a  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9e8au);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009e8b  shld eax, ebx, cl
    X86_AT(c, 0x9e8bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009e8e  push eax
    X86_AT(c, 0x9e8eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009e8f  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9e8fu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009e96  and ebx, 7
    X86_AT(c, 0x9e96u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009e99  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0x9e99u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 009ea1  call 0x7f8c
    X86_AT(c, 0x9ea1u);
    push32(c, 0x9ea6u); f_00007f8c(c); X86_RET(c, 0x9ea6u);
    X86_TICK(c, 55);
    // 009ea6  and ebx, eax
    X86_AT(c, 0x9ea6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009ea8  mov ecx, ebx
    X86_AT(c, 0x9ea8u);
    c.r[1] = c.r[3];
    // 009eaa  not ebx
    X86_AT(c, 0x9eaau);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009eac  and ebx, dword ptr es:[edi]
    X86_AT(c, 0x9eacu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[0] + (uint32_t)(c.r[7]))), 4); }
    // 009eaf  pop eax
    X86_AT(c, 0x9eafu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009eb0  and ecx, eax
    X86_AT(c, 0x9eb0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[0], 4); }
    // 009eb2  mov eax, dword ptr es:[edi]
    X86_AT(c, 0x9eb2u);
    c.r[0] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009eb5  and eax, ecx
    X86_AT(c, 0x9eb5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 009eb7  or eax, ebx
    X86_AT(c, 0x9eb7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[3], 4); }
    // 009eb9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x9eb9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 009eba  pop ecx
    X86_AT(c, 0x9ebau);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 009ebb  dec dword ptr [esp]
    X86_AT(c, 0x9ebbu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009ebe  cmp dword ptr [esp], 1
    X86_AT(c, 0x9ebeu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 009ec2  je 0x9eef
    X86_AT(c, 0x9ec2u);
    if (x86_cc(c, 4)) { goto L_9eef; }
    X86_TICK(c, 6);
    // 009ec4  dec dword ptr [esp]
    X86_AT(c, 0x9ec4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_9ec7:
    X86_TICK(c, 25);
    // 009ec7  push ecx
    X86_AT(c, 0x9ec7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 009ec8  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9ec8u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009ecb  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9ecbu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009ecc  shld eax, ebx, cl
    X86_AT(c, 0x9eccu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009ecf  push eax
    X86_AT(c, 0x9ecfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009ed0  call 0x7f8c
    X86_AT(c, 0x9ed0u);
    push32(c, 0x9ed5u); f_00007f8c(c); X86_RET(c, 0x9ed5u);
    X86_TICK(c, 48);
    // 009ed5  mov ebx, eax
    X86_AT(c, 0x9ed5u);
    c.r[3] = c.r[0];
    // 009ed7  mov ecx, ebx
    X86_AT(c, 0x9ed7u);
    c.r[1] = c.r[3];
    // 009ed9  not ebx
    X86_AT(c, 0x9ed9u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009edb  and ebx, dword ptr es:[edi]
    X86_AT(c, 0x9edbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[0] + (uint32_t)(c.r[7]))), 4); }
    // 009ede  pop eax
    X86_AT(c, 0x9edeu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009edf  and ecx, eax
    X86_AT(c, 0x9edfu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[0], 4); }
    // 009ee1  mov eax, dword ptr es:[edi]
    X86_AT(c, 0x9ee1u);
    c.r[0] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009ee4  and eax, ecx
    X86_AT(c, 0x9ee4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 009ee6  or eax, ebx
    X86_AT(c, 0x9ee6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[3], 4); }
    // 009ee8  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x9ee8u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 009ee9  pop ecx
    X86_AT(c, 0x9ee9u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 009eea  dec dword ptr [esp]
    X86_AT(c, 0x9eeau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009eed  jne 0x9ec7
    X86_AT(c, 0x9eedu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9ec7u); goto L_9ec7; }
L_9eef:
    X86_TICK(c, 30);
    // 009eef  mov eax, dword ptr [esi]
    X86_AT(c, 0x9eefu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009ef1  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9ef1u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009ef4  shld eax, ebx, cl
    X86_AT(c, 0x9ef4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009ef7  push eax
    X86_AT(c, 0x9ef7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009ef8  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9ef8u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009eff  and ebx, 7
    X86_AT(c, 0x9effu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009f02  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0x9f02u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 009f0a  call 0x7f8c
    X86_AT(c, 0x9f0au);
    push32(c, 0x9f0fu); f_00007f8c(c); X86_RET(c, 0x9f0fu);
    X86_TICK(c, 38);
    // 009f0f  and ebx, eax
    X86_AT(c, 0x9f0fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009f11  mov ecx, ebx
    X86_AT(c, 0x9f11u);
    c.r[1] = c.r[3];
    // 009f13  not ebx
    X86_AT(c, 0x9f13u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009f15  pop eax
    X86_AT(c, 0x9f15u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009f16  and ecx, eax
    X86_AT(c, 0x9f16u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[0], 4); }
    // 009f18  mov eax, dword ptr es:[edi]
    X86_AT(c, 0x9f18u);
    c.r[0] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009f1b  and ebx, eax
    X86_AT(c, 0x9f1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009f1d  and eax, ecx
    X86_AT(c, 0x9f1du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 009f1f  or eax, ebx
    X86_AT(c, 0x9f1fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[3], 4); }
    // 009f21  mov dword ptr es:[edi], eax
    X86_AT(c, 0x9f21u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[0]);
    // 009f24  pop ebx
    X86_AT(c, 0x9f24u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 009f25  ret 
    X86_AT(c, 0x9f25u);
    c.eip = pop32(c); return;
L_9f28:
    X86_TICK(c, 42);
    // 009f28  mov eax, dword ptr [esi]
    X86_AT(c, 0x9f28u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009f2a  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9f2au);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009f2d  shld eax, ebx, cl
    X86_AT(c, 0x9f2du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009f30  push eax
    X86_AT(c, 0x9f30u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009f31  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9f31u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009f38  and eax, 7
    X86_AT(c, 0x9f38u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009f3d  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0x9f3du);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 009f45  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9f45u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009f4c  and eax, 7
    X86_AT(c, 0x9f4cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009f51  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0x9f51u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 009f59  call 0x7f8c
    X86_AT(c, 0x9f59u);
    push32(c, 0x9f5eu); f_00007f8c(c); X86_RET(c, 0x9f5eu);
    X86_TICK(c, 34);
    // 009f5e  and ebx, eax
    X86_AT(c, 0x9f5eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009f60  mov ecx, ebx
    X86_AT(c, 0x9f60u);
    c.r[1] = c.r[3];
    // 009f62  not ebx
    X86_AT(c, 0x9f62u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009f64  pop eax
    X86_AT(c, 0x9f64u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009f65  and ecx, eax
    X86_AT(c, 0x9f65u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[0], 4); }
    // 009f67  mov eax, dword ptr es:[edi]
    X86_AT(c, 0x9f67u);
    c.r[0] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009f6a  and ebx, eax
    X86_AT(c, 0x9f6au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009f6c  and eax, ecx
    X86_AT(c, 0x9f6cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 009f6e  or eax, ebx
    X86_AT(c, 0x9f6eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[3], 4); }
    // 009f70  mov dword ptr es:[edi], eax
    X86_AT(c, 0x9f70u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[0]);
    // 009f73  ret 
    X86_AT(c, 0x9f73u);
    c.eip = pop32(c); return;
L_9f74:
    X86_TICK(c, 12);
    // 009f74  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x9f74u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 009f7c  jne 0xa014
    X86_AT(c, 0x9f7cu);
    if (x86_cc(c, 5)) { goto L_a014; }
    X86_TICK(c, 7);
    // 009f82  cmp ebx, 1
    X86_AT(c, 0x9f82u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009f85  je 0x9fe0
    X86_AT(c, 0x9f85u);
    if (x86_cc(c, 4)) { goto L_9fe0; }
    X86_TICK(c, 44);
    // 009f87  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9f87u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009f8a  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9f8au);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009f8b  shld eax, edx, cl
    X86_AT(c, 0x9f8bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009f8e  mov dl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9f8eu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009f95  and edx, 7
    X86_AT(c, 0x9f95u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009f98  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x9f98u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 009fa0  and eax, edx
    X86_AT(c, 0x9fa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009fa2  xor dword ptr es:[edi], eax
    X86_AT(c, 0x9fa2u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 009fa5  add edi, 4
    X86_AT(c, 0x9fa5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009fa8  dec ebx
    X86_AT(c, 0x9fa8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009fa9  cmp ebx, 1
    X86_AT(c, 0x9fa9u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009fac  je 0x9fbf
    X86_AT(c, 0x9facu);
    if (x86_cc(c, 4)) { goto L_9fbf; }
    X86_TICK(c, 2);
    // 009fae  dec ebx
    X86_AT(c, 0x9faeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_9faf:
    X86_TICK(c, 30);
    // 009faf  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9fafu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009fb2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9fb2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009fb3  shld eax, edx, cl
    X86_AT(c, 0x9fb3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009fb6  xor dword ptr es:[edi], eax
    X86_AT(c, 0x9fb6u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 009fb9  add edi, 4
    X86_AT(c, 0x9fb9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009fbc  dec ebx
    X86_AT(c, 0x9fbcu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009fbd  jne 0x9faf
    X86_AT(c, 0x9fbdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9fafu); goto L_9faf; }
L_9fbf:
    X86_TICK(c, 40);
    // 009fbf  mov eax, dword ptr [esi]
    X86_AT(c, 0x9fbfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009fc1  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9fc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009fc4  shld eax, edx, cl
    X86_AT(c, 0x9fc4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009fc7  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9fc7u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009fce  and edx, 7
    X86_AT(c, 0x9fceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009fd1  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x9fd1u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 009fd9  and eax, edx
    X86_AT(c, 0x9fd9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009fdb  xor dword ptr es:[edi], eax
    X86_AT(c, 0x9fdbu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 009fde  ret 
    X86_AT(c, 0x9fdeu);
    c.eip = pop32(c); return;
L_9fe0:
    X86_TICK(c, 57);
    // 009fe0  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9fe0u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 009fe7  shld ebx, eax, 0x10
    X86_AT(c, 0x9fe7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 009feb  and eax, 7
    X86_AT(c, 0x9febu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009ff0  mov edx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0x9ff0u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 009ff8  and ebx, 7
    X86_AT(c, 0x9ff8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009ffb  and edx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0x9ffbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u))), 4); }
    // 00a003  push edx
    X86_AT(c, 0xa003u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00a004  mov eax, dword ptr [esi]
    X86_AT(c, 0xa004u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a006  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0xa006u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a009  shld eax, edx, cl
    X86_AT(c, 0xa009u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a00c  pop edx
    X86_AT(c, 0xa00cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00a00d  and eax, edx
    X86_AT(c, 0xa00du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 00a00f  xor dword ptr es:[edi], eax
    X86_AT(c, 0xa00fu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 00a012  ret 
    X86_AT(c, 0xa012u);
    c.eip = pop32(c); return;
L_a014:
    X86_TICK(c, 7);
    // 00a014  cmp ebx, 1
    X86_AT(c, 0xa014u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00a017  je 0xa09c
    X86_AT(c, 0xa017u);
    if (x86_cc(c, 4)) { goto L_a09c; }
    X86_TICK(c, 19);
    // 00a01d  push ebx
    X86_AT(c, 0xa01du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a01e  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa01eu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a025  and ebx, 7
    X86_AT(c, 0xa025u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a028  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa028u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a030  call 0x7f8c
    X86_AT(c, 0xa030u);
    push32(c, 0xa035u); f_00007f8c(c); X86_RET(c, 0xa035u);
    X86_TICK(c, 51);
    // 00a035  and ebx, eax
    X86_AT(c, 0xa035u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a037  push ebx
    X86_AT(c, 0xa037u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a038  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa038u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a03b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa03bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a03c  shld eax, ebx, cl
    X86_AT(c, 0xa03cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a03f  pop ebx
    X86_AT(c, 0xa03fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a040  and eax, ebx
    X86_AT(c, 0xa040u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a042  xor dword ptr es:[edi], eax
    X86_AT(c, 0xa042u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 00a045  add edi, 4
    X86_AT(c, 0xa045u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a048  dec dword ptr [esp]
    X86_AT(c, 0xa048u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a04b  cmp dword ptr [esp], 1
    X86_AT(c, 0xa04bu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a04f  je 0xa071
    X86_AT(c, 0xa04fu);
    if (x86_cc(c, 4)) { goto L_a071; }
    X86_TICK(c, 6);
    // 00a051  dec dword ptr [esp]
    X86_AT(c, 0xa051u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a054:
    X86_TICK(c, 23);
    // 00a054  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa054u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a057  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa057u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a058  shld eax, ebx, cl
    X86_AT(c, 0xa058u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a05b  push eax
    X86_AT(c, 0xa05bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a05c  call 0x7f8c
    X86_AT(c, 0xa05cu);
    push32(c, 0xa061u); f_00007f8c(c); X86_RET(c, 0xa061u);
    X86_TICK(c, 28);
    // 00a061  mov ebx, eax
    X86_AT(c, 0xa061u);
    c.r[3] = c.r[0];
    // 00a063  pop eax
    X86_AT(c, 0xa063u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a064  and eax, ebx
    X86_AT(c, 0xa064u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a066  xor dword ptr es:[edi], eax
    X86_AT(c, 0xa066u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 00a069  add edi, 4
    X86_AT(c, 0xa069u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a06c  dec dword ptr [esp]
    X86_AT(c, 0xa06cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a06f  jne 0xa054
    X86_AT(c, 0xa06fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa054u); goto L_a054; }
L_a071:
    X86_TICK(c, 30);
    // 00a071  mov eax, dword ptr [esi]
    X86_AT(c, 0xa071u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a073  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa073u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a076  shld eax, ebx, cl
    X86_AT(c, 0xa076u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a079  push eax
    X86_AT(c, 0xa079u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a07a  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa07au);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a081  and ebx, 7
    X86_AT(c, 0xa081u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a084  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa084u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a08c  call 0x7f8c
    X86_AT(c, 0xa08cu);
    push32(c, 0xa091u); f_00007f8c(c); X86_RET(c, 0xa091u);
    X86_TICK(c, 29);
    // 00a091  and ebx, eax
    X86_AT(c, 0xa091u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a093  pop eax
    X86_AT(c, 0xa093u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a094  and eax, ebx
    X86_AT(c, 0xa094u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a096  xor dword ptr es:[edi], eax
    X86_AT(c, 0xa096u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 00a099  pop ebx
    X86_AT(c, 0xa099u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a09a  ret 
    X86_AT(c, 0xa09au);
    c.eip = pop32(c); return;
L_a09c:
    X86_TICK(c, 29);
    // 00a09c  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa09cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a0a3  and eax, 7
    X86_AT(c, 0xa0a3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a0a8  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0xa0a8u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 00a0b0  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa0b0u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a0b7  and eax, 7
    X86_AT(c, 0xa0b7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a0bc  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0xa0bcu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 00a0c4  call 0x7f8c
    X86_AT(c, 0xa0c4u);
    push32(c, 0xa0c9u); f_00007f8c(c); X86_RET(c, 0xa0c9u);
    X86_TICK(c, 38);
    // 00a0c9  and ebx, eax
    X86_AT(c, 0xa0c9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a0cb  push ebx
    X86_AT(c, 0xa0cbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a0cc  mov eax, dword ptr [esi]
    X86_AT(c, 0xa0ccu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a0ce  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa0ceu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a0d1  shld eax, ebx, cl
    X86_AT(c, 0xa0d1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a0d4  pop ebx
    X86_AT(c, 0xa0d4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a0d5  and eax, ebx
    X86_AT(c, 0xa0d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a0d7  xor dword ptr es:[edi], eax
    X86_AT(c, 0xa0d7u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 00a0da  ret 
    X86_AT(c, 0xa0dau);
    c.eip = pop32(c); return;
L_a0dc:
    X86_TICK(c, 12);
    // 00a0dc  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa0dcu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a0e4  jne 0xa1a0
    X86_AT(c, 0xa0e4u);
    if (x86_cc(c, 5)) { goto L_a1a0; }
    X86_TICK(c, 7);
    // 00a0ea  cmp ebx, 1
    X86_AT(c, 0xa0eau);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00a0ed  je 0xa160
    X86_AT(c, 0xa0edu);
    if (x86_cc(c, 4)) { goto L_a160; }
    X86_TICK(c, 57);
    // 00a0ef  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0xa0efu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a0f2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa0f2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a0f3  shld eax, edx, cl
    X86_AT(c, 0xa0f3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a0f6  not eax
    X86_AT(c, 0xa0f6u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a0f8  mov dl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa0f8u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a0ff  and edx, 7
    X86_AT(c, 0xa0ffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 00a102  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0xa102u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 00a10a  not edx
    X86_AT(c, 0xa10au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00a10c  and dword ptr es:[edi], edx
    X86_AT(c, 0xa10cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 00a10f  not edx
    X86_AT(c, 0xa10fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00a111  and eax, edx
    X86_AT(c, 0xa111u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 00a113  or dword ptr es:[edi], eax
    X86_AT(c, 0xa113u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 00a116  add edi, 4
    X86_AT(c, 0xa116u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a119  dec ebx
    X86_AT(c, 0xa119u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 00a11a  cmp ebx, 1
    X86_AT(c, 0xa11au);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00a11d  je 0xa132
    X86_AT(c, 0xa11du);
    if (x86_cc(c, 4)) { goto L_a132; }
    X86_TICK(c, 2);
    // 00a11f  dec ebx
    X86_AT(c, 0xa11fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_a120:
    X86_TICK(c, 27);
    // 00a120  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0xa120u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a123  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa123u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a124  shld eax, edx, cl
    X86_AT(c, 0xa124u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a127  not eax
    X86_AT(c, 0xa127u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a129  mov dword ptr es:[edi], eax
    X86_AT(c, 0xa129u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[0]);
    // 00a12c  add edi, 4
    X86_AT(c, 0xa12cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a12f  dec ebx
    X86_AT(c, 0xa12fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 00a130  jne 0xa120
    X86_AT(c, 0xa130u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa120u); goto L_a120; }
L_a132:
    X86_TICK(c, 49);
    // 00a132  mov eax, dword ptr [esi]
    X86_AT(c, 0xa132u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a134  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0xa134u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a137  shld eax, edx, cl
    X86_AT(c, 0xa137u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a13a  not eax
    X86_AT(c, 0xa13au);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a13c  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa13cu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a143  and edx, 7
    X86_AT(c, 0xa143u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 00a146  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0xa146u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 00a14e  not edx
    X86_AT(c, 0xa14eu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00a150  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0xa150u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a153  and ebx, edx
    X86_AT(c, 0xa153u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 00a155  not edx
    X86_AT(c, 0xa155u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00a157  and eax, edx
    X86_AT(c, 0xa157u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 00a159  or ebx, eax
    X86_AT(c, 0xa159u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 00a15b  mov dword ptr es:[edi], ebx
    X86_AT(c, 0xa15bu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 00a15e  ret 
    X86_AT(c, 0xa15eu);
    c.eip = pop32(c); return;
L_a160:
    X86_TICK(c, 66);
    // 00a160  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa160u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00a167  shld ebx, eax, 0x10
    X86_AT(c, 0xa167u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00a16b  and eax, 7
    X86_AT(c, 0xa16bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a170  mov edx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0xa170u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 00a178  and ebx, 7
    X86_AT(c, 0xa178u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a17b  and edx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa17bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u))), 4); }
    // 00a183  push edx
    X86_AT(c, 0xa183u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00a184  mov eax, dword ptr [esi]
    X86_AT(c, 0xa184u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a186  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0xa186u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a189  shld eax, edx, cl
    X86_AT(c, 0xa189u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a18c  pop edx
    X86_AT(c, 0xa18cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00a18d  not eax
    X86_AT(c, 0xa18du);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a18f  not edx
    X86_AT(c, 0xa18fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00a191  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0xa191u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a194  and ebx, edx
    X86_AT(c, 0xa194u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 00a196  not edx
    X86_AT(c, 0xa196u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00a198  and eax, edx
    X86_AT(c, 0xa198u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 00a19a  or ebx, eax
    X86_AT(c, 0xa19au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 00a19c  mov dword ptr es:[edi], ebx
    X86_AT(c, 0xa19cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 00a19f  ret 
    X86_AT(c, 0xa19fu);
    c.eip = pop32(c); return;
L_a1a0:
    X86_TICK(c, 7);
    // 00a1a0  cmp ebx, 1
    X86_AT(c, 0xa1a0u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00a1a3  je 0xa248
    X86_AT(c, 0xa1a3u);
    if (x86_cc(c, 4)) { goto L_a248; }
    X86_TICK(c, 19);
    // 00a1a9  push ebx
    X86_AT(c, 0xa1a9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a1aa  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa1aau);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a1b1  and ebx, 7
    X86_AT(c, 0xa1b1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a1b4  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa1b4u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a1bc  call 0x7f8c
    X86_AT(c, 0xa1bcu);
    push32(c, 0xa1c1u); f_00007f8c(c); X86_RET(c, 0xa1c1u);
    X86_TICK(c, 64);
    // 00a1c1  and ebx, eax
    X86_AT(c, 0xa1c1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a1c3  not ebx
    X86_AT(c, 0xa1c3u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a1c5  and dword ptr es:[edi], ebx
    X86_AT(c, 0xa1c5u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[3], 4)); }
    // 00a1c8  push ebx
    X86_AT(c, 0xa1c8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a1c9  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa1c9u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a1cc  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa1ccu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a1cd  shld eax, ebx, cl
    X86_AT(c, 0xa1cdu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a1d0  pop ebx
    X86_AT(c, 0xa1d0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a1d1  not eax
    X86_AT(c, 0xa1d1u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a1d3  not ebx
    X86_AT(c, 0xa1d3u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a1d5  and eax, ebx
    X86_AT(c, 0xa1d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a1d7  or dword ptr es:[edi], eax
    X86_AT(c, 0xa1d7u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 00a1da  add edi, 4
    X86_AT(c, 0xa1dau);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a1dd  dec dword ptr [esp]
    X86_AT(c, 0xa1ddu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a1e0  cmp dword ptr [esp], 1
    X86_AT(c, 0xa1e0u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a1e4  je 0xa20f
    X86_AT(c, 0xa1e4u);
    if (x86_cc(c, 4)) { goto L_a20f; }
    X86_TICK(c, 6);
    // 00a1e6  dec dword ptr [esp]
    X86_AT(c, 0xa1e6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a1e9:
    X86_TICK(c, 25);
    // 00a1e9  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa1e9u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a1ec  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa1ecu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a1ed  shld eax, ebx, cl
    X86_AT(c, 0xa1edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a1f0  not eax
    X86_AT(c, 0xa1f0u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a1f2  push eax
    X86_AT(c, 0xa1f2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a1f3  call 0x7f8c
    X86_AT(c, 0xa1f3u);
    push32(c, 0xa1f8u); f_00007f8c(c); X86_RET(c, 0xa1f8u);
    X86_TICK(c, 39);
    // 00a1f8  mov ebx, eax
    X86_AT(c, 0xa1f8u);
    c.r[3] = c.r[0];
    // 00a1fa  not ebx
    X86_AT(c, 0xa1fau);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a1fc  and dword ptr es:[edi], ebx
    X86_AT(c, 0xa1fcu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[3], 4)); }
    // 00a1ff  not ebx
    X86_AT(c, 0xa1ffu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a201  pop eax
    X86_AT(c, 0xa201u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a202  and eax, ebx
    X86_AT(c, 0xa202u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a204  or dword ptr es:[edi], eax
    X86_AT(c, 0xa204u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 00a207  add edi, 4
    X86_AT(c, 0xa207u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a20a  dec dword ptr [esp]
    X86_AT(c, 0xa20au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a20d  jne 0xa1e9
    X86_AT(c, 0xa20du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa1e9u); goto L_a1e9; }
L_a20f:
    X86_TICK(c, 32);
    // 00a20f  mov eax, dword ptr [esi]
    X86_AT(c, 0xa20fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a211  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa211u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a214  shld eax, ebx, cl
    X86_AT(c, 0xa214u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a217  not eax
    X86_AT(c, 0xa217u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a219  push eax
    X86_AT(c, 0xa219u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a21a  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa21au);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a221  and ebx, 7
    X86_AT(c, 0xa221u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a224  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa224u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a22c  call 0x7f8c
    X86_AT(c, 0xa22cu);
    push32(c, 0xa231u); f_00007f8c(c); X86_RET(c, 0xa231u);
    X86_TICK(c, 36);
    // 00a231  and ebx, eax
    X86_AT(c, 0xa231u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a233  not ebx
    X86_AT(c, 0xa233u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a235  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa235u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a238  and edx, ebx
    X86_AT(c, 0xa238u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a23a  not ebx
    X86_AT(c, 0xa23au);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a23c  pop eax
    X86_AT(c, 0xa23cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a23d  and eax, ebx
    X86_AT(c, 0xa23du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a23f  or edx, eax
    X86_AT(c, 0xa23fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a241  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa241u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a244  pop ebx
    X86_AT(c, 0xa244u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a245  ret 
    X86_AT(c, 0xa245u);
    c.eip = pop32(c); return;
L_a248:
    X86_TICK(c, 29);
    // 00a248  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa248u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a24f  and eax, 7
    X86_AT(c, 0xa24fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a254  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0xa254u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 00a25c  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa25cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a263  and eax, 7
    X86_AT(c, 0xa263u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a268  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0xa268u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 00a270  call 0x7f8c
    X86_AT(c, 0xa270u);
    push32(c, 0xa275u); f_00007f8c(c); X86_RET(c, 0xa275u);
    X86_TICK(c, 47);
    // 00a275  and ebx, eax
    X86_AT(c, 0xa275u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a277  push ebx
    X86_AT(c, 0xa277u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a278  mov eax, dword ptr [esi]
    X86_AT(c, 0xa278u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a27a  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa27au);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a27d  shld eax, ebx, cl
    X86_AT(c, 0xa27du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a280  pop ebx
    X86_AT(c, 0xa280u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a281  not eax
    X86_AT(c, 0xa281u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a283  not ebx
    X86_AT(c, 0xa283u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a285  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa285u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a288  and edx, ebx
    X86_AT(c, 0xa288u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a28a  not ebx
    X86_AT(c, 0xa28au);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a28c  and eax, ebx
    X86_AT(c, 0xa28cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a28e  or edx, eax
    X86_AT(c, 0xa28eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a290  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa290u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a293  ret 
    X86_AT(c, 0xa293u);
    c.eip = pop32(c); return;
L_a294:
    X86_TICK(c, 12);
    // 00a294  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa294u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a29c  jne 0xa40c
    X86_AT(c, 0xa29cu);
    if (x86_cc(c, 5)) { goto L_a40c; }
    X86_TICK(c, 7);
    // 00a2a2  cmp ebx, 1
    X86_AT(c, 0xa2a2u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00a2a5  je 0xa3a0
    X86_AT(c, 0xa2a5u);
    if (x86_cc(c, 4)) { goto L_a3a0; }
    X86_TICK(c, 42);
    // 00a2ab  push ebx
    X86_AT(c, 0xa2abu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a2ac  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa2acu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a2af  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa2afu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a2b0  shld eax, ebx, cl
    X86_AT(c, 0xa2b0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a2b3  push eax
    X86_AT(c, 0xa2b3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a2b4  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa2b4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a2bb  and ebx, 7
    X86_AT(c, 0xa2bbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a2be  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa2beu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a2c6  push ecx
    X86_AT(c, 0xa2c6u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a2c7  push ebx
    X86_AT(c, 0xa2c7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a2c8  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa2c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a2cf  sub ebx, ebx
    X86_AT(c, 0xa2cfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a2d1  mov cl, 8
    X86_AT(c, 0xa2d1u);
    s8(c, 1, 0x8u);
L_a2d3:
    X86_TICK(c, 10);
    // 00a2d3  shl ebx, 4
    X86_AT(c, 0xa2d3u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a2d6  test eax, 0xf0000000
    X86_AT(c, 0xa2d6u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a2db  je 0xa2e0
    X86_AT(c, 0xa2dbu);
    if (x86_cc(c, 4)) { goto L_a2e0; }
    X86_TICK(c, 2);
    // 00a2dd  or bl, 0xf
    X86_AT(c, 0xa2ddu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a2e0:
    X86_TICK(c, 10);
    // 00a2e0  shl eax, 4
    X86_AT(c, 0xa2e0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a2e3  dec cl
    X86_AT(c, 0xa2e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a2e5  jne 0xa2d3
    X86_AT(c, 0xa2e5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa2d3u); goto L_a2d3; }
    X86_TICK(c, 55);
    // 00a2e7  mov eax, ebx
    X86_AT(c, 0xa2e7u);
    c.r[0] = c.r[3];
    // 00a2e9  pop ebx
    X86_AT(c, 0xa2e9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a2ea  pop ecx
    X86_AT(c, 0xa2eau);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a2eb  and ebx, eax
    X86_AT(c, 0xa2ebu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a2ed  not ebx
    X86_AT(c, 0xa2edu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2ef  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa2efu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a2f2  and edx, ebx
    X86_AT(c, 0xa2f2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f4  not ebx
    X86_AT(c, 0xa2f4u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2f6  pop eax
    X86_AT(c, 0xa2f6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a2f7  and eax, ebx
    X86_AT(c, 0xa2f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f9  or eax, edx
    X86_AT(c, 0xa2f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a2fb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa2fbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a2fc  dec dword ptr [esp]
    X86_AT(c, 0xa2fcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a2ff  cmp dword ptr [esp], 1
    X86_AT(c, 0xa2ffu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a303  je 0xa34b
    X86_AT(c, 0xa303u);
    if (x86_cc(c, 4)) { goto L_a34b; }
    X86_TICK(c, 6);
    // 00a305  dec dword ptr [esp]
    X86_AT(c, 0xa305u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a308:
    X86_TICK(c, 30);
    // 00a308  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa308u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a30b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa30bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a30c  shld eax, ebx, cl
    X86_AT(c, 0xa30cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a30f  push eax
    X86_AT(c, 0xa30fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a310  push ecx
    X86_AT(c, 0xa310u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a311  push ebx
    X86_AT(c, 0xa311u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a312  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa312u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a319  sub ebx, ebx
    X86_AT(c, 0xa319u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a31b  mov cl, 8
    X86_AT(c, 0xa31bu);
    s8(c, 1, 0x8u);
L_a31d:
    X86_TICK(c, 10);
    // 00a31d  shl ebx, 4
    X86_AT(c, 0xa31du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a320  test eax, 0xf0000000
    X86_AT(c, 0xa320u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a325  je 0xa32a
    X86_AT(c, 0xa325u);
    if (x86_cc(c, 4)) { goto L_a32a; }
    X86_TICK(c, 2);
    // 00a327  or bl, 0xf
    X86_AT(c, 0xa327u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a32a:
    X86_TICK(c, 10);
    // 00a32a  shl eax, 4
    X86_AT(c, 0xa32au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a32d  dec cl
    X86_AT(c, 0xa32du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a32f  jne 0xa31d
    X86_AT(c, 0xa32fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa31du); goto L_a31d; }
    X86_TICK(c, 48);
    // 00a331  mov eax, ebx
    X86_AT(c, 0xa331u);
    c.r[0] = c.r[3];
    // 00a333  pop ebx
    X86_AT(c, 0xa333u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a334  pop ecx
    X86_AT(c, 0xa334u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a335  mov ebx, eax
    X86_AT(c, 0xa335u);
    c.r[3] = c.r[0];
    // 00a337  not ebx
    X86_AT(c, 0xa337u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a339  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa339u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a33c  and edx, ebx
    X86_AT(c, 0xa33cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a33e  not ebx
    X86_AT(c, 0xa33eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a340  pop eax
    X86_AT(c, 0xa340u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a341  and eax, ebx
    X86_AT(c, 0xa341u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a343  or eax, edx
    X86_AT(c, 0xa343u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a345  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa345u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a346  dec dword ptr [esp]
    X86_AT(c, 0xa346u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a349  jne 0xa308
    X86_AT(c, 0xa349u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa308u); goto L_a308; }
L_a34b:
    X86_TICK(c, 37);
    // 00a34b  mov eax, dword ptr [esi]
    X86_AT(c, 0xa34bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a34d  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa34du);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a350  shld eax, ebx, cl
    X86_AT(c, 0xa350u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a353  push eax
    X86_AT(c, 0xa353u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a354  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa354u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a35b  and ebx, 7
    X86_AT(c, 0xa35bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a35e  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa35eu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a366  push ecx
    X86_AT(c, 0xa366u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a367  push ebx
    X86_AT(c, 0xa367u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a368  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa368u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a36f  sub ebx, ebx
    X86_AT(c, 0xa36fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a371  mov cl, 8
    X86_AT(c, 0xa371u);
    s8(c, 1, 0x8u);
L_a373:
    X86_TICK(c, 10);
    // 00a373  shl ebx, 4
    X86_AT(c, 0xa373u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a376  test eax, 0xf0000000
    X86_AT(c, 0xa376u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a37b  je 0xa380
    X86_AT(c, 0xa37bu);
    if (x86_cc(c, 4)) { goto L_a380; }
    X86_TICK(c, 2);
    // 00a37d  or bl, 0xf
    X86_AT(c, 0xa37du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a380:
    X86_TICK(c, 10);
    // 00a380  shl eax, 4
    X86_AT(c, 0xa380u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a383  dec cl
    X86_AT(c, 0xa383u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a385  jne 0xa373
    X86_AT(c, 0xa385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa373u); goto L_a373; }
    X86_TICK(c, 46);
    // 00a387  mov eax, ebx
    X86_AT(c, 0xa387u);
    c.r[0] = c.r[3];
    // 00a389  pop ebx
    X86_AT(c, 0xa389u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a38a  pop ecx
    X86_AT(c, 0xa38au);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a38b  and ebx, eax
    X86_AT(c, 0xa38bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a38d  not ebx
    X86_AT(c, 0xa38du);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a38f  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa38fu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a392  and edx, ebx
    X86_AT(c, 0xa392u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a394  not ebx
    X86_AT(c, 0xa394u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a396  pop eax
    X86_AT(c, 0xa396u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a397  and eax, ebx
    X86_AT(c, 0xa397u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a399  or edx, eax
    X86_AT(c, 0xa399u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a39b  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa39bu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a39e  pop ebx
    X86_AT(c, 0xa39eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a39f  ret 
    X86_AT(c, 0xa39fu);
    c.eip = pop32(c); return;
L_a3a0:
    X86_TICK(c, 55);
    // 00a3a0  mov eax, dword ptr [esi]
    X86_AT(c, 0xa3a0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a3a2  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa3a2u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a3a5  shld eax, ebx, cl
    X86_AT(c, 0xa3a5u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a3a8  push eax
    X86_AT(c, 0xa3a8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a3a9  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa3a9u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a3b0  and eax, 7
    X86_AT(c, 0xa3b0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a3b5  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0xa3b5u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 00a3bd  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa3bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a3c4  and eax, 7
    X86_AT(c, 0xa3c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a3c9  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0xa3c9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 00a3d1  pop eax
    X86_AT(c, 0xa3d1u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a3d2  push eax
    X86_AT(c, 0xa3d2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a3d3  push ecx
    X86_AT(c, 0xa3d3u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a3d4  push ebx
    X86_AT(c, 0xa3d4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a3d5  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa3d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a3dc  sub ebx, ebx
    X86_AT(c, 0xa3dcu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a3de  mov cl, 8
    X86_AT(c, 0xa3deu);
    s8(c, 1, 0x8u);
L_a3e0:
    X86_TICK(c, 10);
    // 00a3e0  shl ebx, 4
    X86_AT(c, 0xa3e0u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a3e3  test eax, 0xf0000000
    X86_AT(c, 0xa3e3u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a3e8  je 0xa3ed
    X86_AT(c, 0xa3e8u);
    if (x86_cc(c, 4)) { goto L_a3ed; }
    X86_TICK(c, 2);
    // 00a3ea  or bl, 0xf
    X86_AT(c, 0xa3eau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a3ed:
    X86_TICK(c, 10);
    // 00a3ed  shl eax, 4
    X86_AT(c, 0xa3edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a3f0  dec cl
    X86_AT(c, 0xa3f0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a3f2  jne 0xa3e0
    X86_AT(c, 0xa3f2u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa3e0u); goto L_a3e0; }
    X86_TICK(c, 42);
    // 00a3f4  mov eax, ebx
    X86_AT(c, 0xa3f4u);
    c.r[0] = c.r[3];
    // 00a3f6  pop ebx
    X86_AT(c, 0xa3f6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a3f7  pop ecx
    X86_AT(c, 0xa3f7u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a3f8  and ebx, eax
    X86_AT(c, 0xa3f8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a3fa  not ebx
    X86_AT(c, 0xa3fau);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a3fc  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa3fcu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a3ff  and edx, ebx
    X86_AT(c, 0xa3ffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a401  not ebx
    X86_AT(c, 0xa401u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a403  pop eax
    X86_AT(c, 0xa403u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a404  and eax, ebx
    X86_AT(c, 0xa404u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a406  or edx, eax
    X86_AT(c, 0xa406u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a408  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa408u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a40b  ret 
    X86_AT(c, 0xa40bu);
    c.eip = pop32(c); return;
L_a40c:
    X86_TICK(c, 7);
    // 00a40c  cmp ebx, 1
    X86_AT(c, 0xa40cu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00a40f  je 0xa524
    X86_AT(c, 0xa40fu);
    if (x86_cc(c, 4)) { goto L_a524; }
    X86_TICK(c, 42);
    // 00a415  push ebx
    X86_AT(c, 0xa415u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a416  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa416u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a419  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa419u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a41a  shld eax, ebx, cl
    X86_AT(c, 0xa41au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a41d  push eax
    X86_AT(c, 0xa41du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a41e  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa41eu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a425  and ebx, 7
    X86_AT(c, 0xa425u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a428  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa428u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a430  push ecx
    X86_AT(c, 0xa430u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a431  push ebx
    X86_AT(c, 0xa431u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a432  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa432u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a439  sub ebx, ebx
    X86_AT(c, 0xa439u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a43b  mov cl, 8
    X86_AT(c, 0xa43bu);
    s8(c, 1, 0x8u);
L_a43d:
    X86_TICK(c, 10);
    // 00a43d  shl ebx, 4
    X86_AT(c, 0xa43du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a440  test eax, 0xf0000000
    X86_AT(c, 0xa440u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a445  je 0xa44a
    X86_AT(c, 0xa445u);
    if (x86_cc(c, 4)) { goto L_a44a; }
    X86_TICK(c, 2);
    // 00a447  or bl, 0xf
    X86_AT(c, 0xa447u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a44a:
    X86_TICK(c, 10);
    // 00a44a  shl eax, 4
    X86_AT(c, 0xa44au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a44d  dec cl
    X86_AT(c, 0xa44du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a44f  jne 0xa43d
    X86_AT(c, 0xa44fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa43du); goto L_a43d; }
    X86_TICK(c, 19);
    // 00a451  mov eax, ebx
    X86_AT(c, 0xa451u);
    c.r[0] = c.r[3];
    // 00a453  pop ebx
    X86_AT(c, 0xa453u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a454  pop ecx
    X86_AT(c, 0xa454u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a455  and ebx, eax
    X86_AT(c, 0xa455u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a457  call 0x7f8c
    X86_AT(c, 0xa457u);
    push32(c, 0xa45cu); f_00007f8c(c); X86_RET(c, 0xa45cu);
    X86_TICK(c, 46);
    // 00a45c  and ebx, eax
    X86_AT(c, 0xa45cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a45e  not ebx
    X86_AT(c, 0xa45eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a460  and dword ptr es:[edi], ebx
    X86_AT(c, 0xa460u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[3], 4)); }
    // 00a463  not ebx
    X86_AT(c, 0xa463u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a465  pop eax
    X86_AT(c, 0xa465u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a466  and eax, ebx
    X86_AT(c, 0xa466u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a468  or dword ptr es:[edi], eax
    X86_AT(c, 0xa468u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 00a46b  add edi, 4
    X86_AT(c, 0xa46bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a46e  dec dword ptr [esp]
    X86_AT(c, 0xa46eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a471  cmp dword ptr [esp], 1
    X86_AT(c, 0xa471u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a475  je 0xa4c5
    X86_AT(c, 0xa475u);
    if (x86_cc(c, 4)) { goto L_a4c5; }
    X86_TICK(c, 6);
    // 00a477  dec dword ptr [esp]
    X86_AT(c, 0xa477u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a47a:
    X86_TICK(c, 30);
    // 00a47a  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa47au);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a47d  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa47du);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a47e  shld eax, ebx, cl
    X86_AT(c, 0xa47eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a481  push eax
    X86_AT(c, 0xa481u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a482  push ecx
    X86_AT(c, 0xa482u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a483  push ebx
    X86_AT(c, 0xa483u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a484  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa484u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a48b  sub ebx, ebx
    X86_AT(c, 0xa48bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a48d  mov cl, 8
    X86_AT(c, 0xa48du);
    s8(c, 1, 0x8u);
L_a48f:
    X86_TICK(c, 10);
    // 00a48f  shl ebx, 4
    X86_AT(c, 0xa48fu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a492  test eax, 0xf0000000
    X86_AT(c, 0xa492u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a497  je 0xa49c
    X86_AT(c, 0xa497u);
    if (x86_cc(c, 4)) { goto L_a49c; }
    X86_TICK(c, 2);
    // 00a499  or bl, 0xf
    X86_AT(c, 0xa499u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a49c:
    X86_TICK(c, 10);
    // 00a49c  shl eax, 4
    X86_AT(c, 0xa49cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a49f  dec cl
    X86_AT(c, 0xa49fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a4a1  jne 0xa48f
    X86_AT(c, 0xa4a1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa48fu); goto L_a48f; }
    X86_TICK(c, 19);
    // 00a4a3  mov eax, ebx
    X86_AT(c, 0xa4a3u);
    c.r[0] = c.r[3];
    // 00a4a5  pop ebx
    X86_AT(c, 0xa4a5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a4a6  pop ecx
    X86_AT(c, 0xa4a6u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a4a7  mov ebx, eax
    X86_AT(c, 0xa4a7u);
    c.r[3] = c.r[0];
    // 00a4a9  call 0x7f8c
    X86_AT(c, 0xa4a9u);
    push32(c, 0xa4aeu); f_00007f8c(c); X86_RET(c, 0xa4aeu);
    X86_TICK(c, 39);
    // 00a4ae  and ebx, eax
    X86_AT(c, 0xa4aeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a4b0  not ebx
    X86_AT(c, 0xa4b0u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a4b2  and dword ptr es:[edi], ebx
    X86_AT(c, 0xa4b2u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[3], 4)); }
    // 00a4b5  not ebx
    X86_AT(c, 0xa4b5u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a4b7  pop eax
    X86_AT(c, 0xa4b7u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a4b8  and eax, ebx
    X86_AT(c, 0xa4b8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a4ba  or dword ptr es:[edi], eax
    X86_AT(c, 0xa4bau);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 00a4bd  add edi, 4
    X86_AT(c, 0xa4bdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a4c0  dec dword ptr [esp]
    X86_AT(c, 0xa4c0u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a4c3  jne 0xa47a
    X86_AT(c, 0xa4c3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa47au); goto L_a47a; }
L_a4c5:
    X86_TICK(c, 37);
    // 00a4c5  mov eax, dword ptr [esi]
    X86_AT(c, 0xa4c5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a4c7  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa4c7u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a4ca  shld eax, ebx, cl
    X86_AT(c, 0xa4cau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a4cd  push eax
    X86_AT(c, 0xa4cdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a4ce  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa4ceu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a4d5  and ebx, 7
    X86_AT(c, 0xa4d5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a4d8  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa4d8u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a4e0  push ecx
    X86_AT(c, 0xa4e0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a4e1  push ebx
    X86_AT(c, 0xa4e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a4e2  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa4e2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a4e9  sub ebx, ebx
    X86_AT(c, 0xa4e9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a4eb  mov cl, 8
    X86_AT(c, 0xa4ebu);
    s8(c, 1, 0x8u);
L_a4ed:
    X86_TICK(c, 10);
    // 00a4ed  shl ebx, 4
    X86_AT(c, 0xa4edu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a4f0  test eax, 0xf0000000
    X86_AT(c, 0xa4f0u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a4f5  je 0xa4fa
    X86_AT(c, 0xa4f5u);
    if (x86_cc(c, 4)) { goto L_a4fa; }
    X86_TICK(c, 2);
    // 00a4f7  or bl, 0xf
    X86_AT(c, 0xa4f7u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a4fa:
    X86_TICK(c, 10);
    // 00a4fa  shl eax, 4
    X86_AT(c, 0xa4fau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a4fd  dec cl
    X86_AT(c, 0xa4fdu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a4ff  jne 0xa4ed
    X86_AT(c, 0xa4ffu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa4edu); goto L_a4ed; }
    X86_TICK(c, 19);
    // 00a501  mov eax, ebx
    X86_AT(c, 0xa501u);
    c.r[0] = c.r[3];
    // 00a503  pop ebx
    X86_AT(c, 0xa503u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a504  pop ecx
    X86_AT(c, 0xa504u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a505  and ebx, eax
    X86_AT(c, 0xa505u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a507  call 0x7f8c
    X86_AT(c, 0xa507u);
    push32(c, 0xa50cu); f_00007f8c(c); X86_RET(c, 0xa50cu);
    X86_TICK(c, 36);
    // 00a50c  and ebx, eax
    X86_AT(c, 0xa50cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a50e  not ebx
    X86_AT(c, 0xa50eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a510  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa510u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a513  and edx, ebx
    X86_AT(c, 0xa513u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a515  not ebx
    X86_AT(c, 0xa515u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a517  pop eax
    X86_AT(c, 0xa517u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a518  and eax, ebx
    X86_AT(c, 0xa518u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a51a  or edx, eax
    X86_AT(c, 0xa51au);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a51c  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa51cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a51f  pop ebx
    X86_AT(c, 0xa51fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a520  ret 
    X86_AT(c, 0xa520u);
    c.eip = pop32(c); return;
L_a524:
    X86_TICK(c, 55);
    // 00a524  mov eax, dword ptr [esi]
    X86_AT(c, 0xa524u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a526  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa526u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a529  shld eax, ebx, cl
    X86_AT(c, 0xa529u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a52c  push eax
    X86_AT(c, 0xa52cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a52d  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa52du);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a534  and eax, 7
    X86_AT(c, 0xa534u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a539  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0xa539u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 00a541  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa541u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a548  and eax, 7
    X86_AT(c, 0xa548u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a54d  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0xa54du);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 00a555  pop eax
    X86_AT(c, 0xa555u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a556  push eax
    X86_AT(c, 0xa556u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a557  push ecx
    X86_AT(c, 0xa557u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a558  push ebx
    X86_AT(c, 0xa558u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a559  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa559u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a560  sub ebx, ebx
    X86_AT(c, 0xa560u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a562  mov cl, 8
    X86_AT(c, 0xa562u);
    s8(c, 1, 0x8u);
L_a564:
    X86_TICK(c, 10);
    // 00a564  shl ebx, 4
    X86_AT(c, 0xa564u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a567  test eax, 0xf0000000
    X86_AT(c, 0xa567u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a56c  je 0xa571
    X86_AT(c, 0xa56cu);
    if (x86_cc(c, 4)) { goto L_a571; }
    X86_TICK(c, 2);
    // 00a56e  or bl, 0xf
    X86_AT(c, 0xa56eu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a571:
    X86_TICK(c, 10);
    // 00a571  shl eax, 4
    X86_AT(c, 0xa571u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a574  dec cl
    X86_AT(c, 0xa574u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a576  jne 0xa564
    X86_AT(c, 0xa576u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa564u); goto L_a564; }
    X86_TICK(c, 19);
    // 00a578  mov eax, ebx
    X86_AT(c, 0xa578u);
    c.r[0] = c.r[3];
    // 00a57a  pop ebx
    X86_AT(c, 0xa57au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a57b  pop ecx
    X86_AT(c, 0xa57bu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a57c  and ebx, eax
    X86_AT(c, 0xa57cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a57e  call 0x7f8c
    X86_AT(c, 0xa57eu);
    push32(c, 0xa583u); f_00007f8c(c); X86_RET(c, 0xa583u);
    X86_TICK(c, 32);
    // 00a583  and ebx, eax
    X86_AT(c, 0xa583u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a585  not ebx
    X86_AT(c, 0xa585u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a587  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa587u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a58a  and edx, ebx
    X86_AT(c, 0xa58au);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a58c  not ebx
    X86_AT(c, 0xa58cu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a58e  pop eax
    X86_AT(c, 0xa58eu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a58f  and eax, ebx
    X86_AT(c, 0xa58fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a591  or edx, eax
    X86_AT(c, 0xa591u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a593  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa593u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a596  ret 
    X86_AT(c, 0xa596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x99cfu, "ran off the end of a function");
}
void f_000099d7(X86Cpu& c) {
    goto L_99d7;
L_8170:
    X86_TICK(c, 7);
    // 008170  call 0xb930
    X86_AT(c, 0x8170u);
    push32(c, 0x8175u); f_0000b930(c); X86_RET(c, 0x8175u);
    X86_TICK(c, 5);
    // 008175  jae 0x8180
    X86_AT(c, 0x8175u);
    if (x86_cc(c, 3)) { goto L_8180; }
    X86_TICK(c, 10);
    // 008177  ret 
    X86_AT(c, 0x8177u);
    c.eip = pop32(c); return;
L_8180:
    X86_TICK(c, 58);
    // 008180  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x8180u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 008184  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8184u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00818c  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x818cu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 008191  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x8191u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 008195  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x8195u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00819c  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x819cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 0081a3  and bx, 0xffe0
    X86_AT(c, 0x81a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081a8  shld eax, ebx, 0x10
    X86_AT(c, 0x81a8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0081ac  and ax, 0xffe0
    X86_AT(c, 0x81acu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081b0  cmp bx, ax
    X86_AT(c, 0x81b0u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0081b3  je 0x824c
    X86_AT(c, 0x81b3u);
    if (x86_cc(c, 4)) { goto L_824c; }
    X86_TICK(c, 25);
    // 0081b9  push eax
    X86_AT(c, 0x81b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0081ba  push ebx
    X86_AT(c, 0x81bau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0081bb  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81bbu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0081c3  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x81c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_824c:
    X86_TICK(c, 32);
    // 00824c  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x824cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008254  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8254u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00825b  shld edx, ecx, 0x10
    X86_AT(c, 0x825bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00825f  and eax, 0x1f
    X86_AT(c, 0x825fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_99d7:
    X86_TICK(c, 60);
    // 0099d7  and edi, 0xfff8
    X86_AT(c, 0x99d7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0xFFF8u, 4); }
    // 0099dd  mov eax, edi
    X86_AT(c, 0x99ddu);
    c.r[0] = c.r[7];
    // 0099df  mov edx, edi
    X86_AT(c, 0x99dfu);
    c.r[2] = c.r[7];
    // 0099e1  shr edi, 1
    X86_AT(c, 0x99e1u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[7] = r; }
    // 0099e3  add edi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x99e3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 0099ea  mov bx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x99eau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))));
    // 0099f2  mov cl, bl
    X86_AT(c, 0x99f2u);
    s8(c, 1, g8(c, 3));
    // 0099f4  and bx, 0xfff8
    X86_AT(c, 0x99f4u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFF8u, 2)); }
    // 0099f9  sub ax, bx
    X86_AT(c, 0x99f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0099fc  shr eax, 1
    X86_AT(c, 0x99fcu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0099fe  add esi, eax
    X86_AT(c, 0x99feu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 009a00  mov bx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9a00u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009a08  and ebx, 0xfff8
    X86_AT(c, 0x9a08u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0xFFF8u, 4); }
    // 009a0e  sub ebx, edx
    X86_AT(c, 0x9a0eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[2], 0, 4); }
    // 009a10  shr ebx, 3
    X86_AT(c, 0x9a10u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 009a13  inc ebx
    X86_AT(c, 0x9a13u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 009a14  and cl, 7
    X86_AT(c, 0x9a14u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x7u, 1)); }
    // 009a17  shl cl, 2
    X86_AT(c, 0x9a17u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 009a1a  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x9a1au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 009a22  je 0x9a52
    X86_AT(c, 0x9a22u);
    if (x86_cc(c, 4)) { goto L_9a52; }
    X86_TICK(c, 21);
    // 009a24  push ebx
    X86_AT(c, 0x9a24u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 009a25  push ecx
    X86_AT(c, 0x9a25u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 009a26  push edi
    X86_AT(c, 0x9a26u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 009a27  mov bx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9a27u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009a2f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x9a2fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 009a37  call 0x7f18
    X86_AT(c, 0x9a37u);
    push32(c, 0x9a3cu); f_00007f18(c); X86_RET(c, 0x9a3cu);
    X86_TICK(c, 22);
    // 009a3c  mov edx, edi
    X86_AT(c, 0x9a3cu);
    c.r[2] = c.r[7];
    // 009a3e  pop edi
    X86_AT(c, 0x9a3eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 009a3f  mov cl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9a3fu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009a46  and cl, 0x18
    X86_AT(c, 0x9a46u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x18u, 1)); }
    // 009a49  mov byte ptr gs:[ebp + 0x420], cl
    X86_AT(c, 0x9a49u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x420u)), g8(c, 1));
    // 009a50  pop ecx
    X86_AT(c, 0x9a50u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 009a51  pop ebx
    X86_AT(c, 0x9a51u);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_9a52:
    X86_TICK(c, 11);
    // 009a52  mov eax, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x9a52u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)));
    // 009a59  jmp dword ptr cs:[eax*4 + 0x9a64]
    X86_AT(c, 0x9a59u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x9A64u)));
      switch (t) {
      case 0x8170u: X86_POLL(c, 0x8170u); goto L_8170;
      case 0x9aa4u: goto L_9aa4;
      case 0x9aa8u: goto L_9aa8;
      case 0x9c4cu: goto L_9c4c;
      case 0x9db4u: goto L_9db4;
      case 0x9f74u: goto L_9f74;
      case 0xa0dcu: goto L_a0dc;
      case 0xa294u: goto L_a294;
      default: x86_jump(c, t); return; } }
L_9aa4:
    X86_TICK(c, 10);
    // 009aa4  ret 
    X86_AT(c, 0x9aa4u);
    c.eip = pop32(c); return;
L_9aa8:
    X86_TICK(c, 12);
    // 009aa8  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x9aa8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 009ab0  jne 0x9b60
    X86_AT(c, 0x9ab0u);
    if (x86_cc(c, 5)) { goto L_9b60; }
    X86_TICK(c, 7);
    // 009ab6  cmp ebx, 1
    X86_AT(c, 0x9ab6u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009ab9  je 0x9b20
    X86_AT(c, 0x9ab9u);
    if (x86_cc(c, 4)) { goto L_9b20; }
    X86_TICK(c, 55);
    // 009abb  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9abbu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009abe  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9abeu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009abf  shld eax, edx, cl
    X86_AT(c, 0x9abfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009ac2  mov dl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9ac2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009ac9  and edx, 7
    X86_AT(c, 0x9ac9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009acc  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x9accu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 009ad4  not edx
    X86_AT(c, 0x9ad4u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009ad6  and dword ptr es:[edi], edx
    X86_AT(c, 0x9ad6u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 009ad9  not edx
    X86_AT(c, 0x9ad9u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009adb  and eax, edx
    X86_AT(c, 0x9adbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009add  or dword ptr es:[edi], eax
    X86_AT(c, 0x9addu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009ae0  add edi, 4
    X86_AT(c, 0x9ae0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009ae3  dec ebx
    X86_AT(c, 0x9ae3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009ae4  cmp ebx, 1
    X86_AT(c, 0x9ae4u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009ae7  je 0x9af5
    X86_AT(c, 0x9ae7u);
    if (x86_cc(c, 4)) { goto L_9af5; }
    X86_TICK(c, 2);
    // 009ae9  dec ebx
    X86_AT(c, 0x9ae9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_9aea:
    X86_TICK(c, 28);
    // 009aea  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9aeau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009aed  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9aedu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009aee  shld eax, edx, cl
    X86_AT(c, 0x9aeeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009af1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x9af1u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 009af2  dec ebx
    X86_AT(c, 0x9af2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009af3  jne 0x9aea
    X86_AT(c, 0x9af3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9aeau); goto L_9aea; }
L_9af5:
    X86_TICK(c, 47);
    // 009af5  mov eax, dword ptr [esi]
    X86_AT(c, 0x9af5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009af7  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9af7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009afa  shld eax, edx, cl
    X86_AT(c, 0x9afau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009afd  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9afdu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009b04  and edx, 7
    X86_AT(c, 0x9b04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009b07  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x9b07u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 009b0f  not edx
    X86_AT(c, 0x9b0fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b11  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x9b11u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009b14  and ebx, edx
    X86_AT(c, 0x9b14u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 009b16  not edx
    X86_AT(c, 0x9b16u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b18  and eax, edx
    X86_AT(c, 0x9b18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009b1a  or ebx, eax
    X86_AT(c, 0x9b1au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 009b1c  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x9b1cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 009b1f  ret 
    X86_AT(c, 0x9b1fu);
    c.eip = pop32(c); return;
L_9b20:
    X86_TICK(c, 64);
    // 009b20  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9b20u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 009b27  shld ebx, eax, 0x10
    X86_AT(c, 0x9b27u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 009b2b  and eax, 7
    X86_AT(c, 0x9b2bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009b30  mov edx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0x9b30u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 009b38  and ebx, 7
    X86_AT(c, 0x9b38u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009b3b  and edx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0x9b3bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u))), 4); }
    // 009b43  push edx
    X86_AT(c, 0x9b43u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 009b44  mov eax, dword ptr [esi]
    X86_AT(c, 0x9b44u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009b46  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9b46u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009b49  shld eax, edx, cl
    X86_AT(c, 0x9b49u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009b4c  pop edx
    X86_AT(c, 0x9b4cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 009b4d  not edx
    X86_AT(c, 0x9b4du);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b4f  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x9b4fu);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009b52  and ebx, edx
    X86_AT(c, 0x9b52u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 009b54  not edx
    X86_AT(c, 0x9b54u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b56  and eax, edx
    X86_AT(c, 0x9b56u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009b58  or ebx, eax
    X86_AT(c, 0x9b58u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 009b5a  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x9b5au);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 009b5d  ret 
    X86_AT(c, 0x9b5du);
    c.eip = pop32(c); return;
L_9b60:
    X86_TICK(c, 7);
    // 009b60  cmp ebx, 1
    X86_AT(c, 0x9b60u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009b63  je 0x9c00
    X86_AT(c, 0x9b63u);
    if (x86_cc(c, 4)) { goto L_9c00; }
    X86_TICK(c, 19);
    // 009b69  push ebx
    X86_AT(c, 0x9b69u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 009b6a  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9b6au);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009b71  and ebx, 7
    X86_AT(c, 0x9b71u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009b74  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0x9b74u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 009b7c  call 0x7f8c
    X86_AT(c, 0x9b7cu);
    push32(c, 0x9b81u); f_00007f8c(c); X86_RET(c, 0x9b81u);
    X86_TICK(c, 62);
    // 009b81  and ebx, eax
    X86_AT(c, 0x9b81u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009b83  not ebx
    X86_AT(c, 0x9b83u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009b85  and dword ptr es:[edi], ebx
    X86_AT(c, 0x9b85u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[3], 4)); }
    // 009b88  push ebx
    X86_AT(c, 0x9b88u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 009b89  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9b89u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009b8c  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9b8cu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009b8d  shld eax, ebx, cl
    X86_AT(c, 0x9b8du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009b90  pop ebx
    X86_AT(c, 0x9b90u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 009b91  not ebx
    X86_AT(c, 0x9b91u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009b93  and eax, ebx
    X86_AT(c, 0x9b93u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 009b95  or dword ptr es:[edi], eax
    X86_AT(c, 0x9b95u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009b98  add edi, 4
    X86_AT(c, 0x9b98u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009b9b  dec dword ptr [esp]
    X86_AT(c, 0x9b9bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009b9e  cmp dword ptr [esp], 1
    X86_AT(c, 0x9b9eu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 009ba2  je 0x9bcb
    X86_AT(c, 0x9ba2u);
    if (x86_cc(c, 4)) { goto L_9bcb; }
    X86_TICK(c, 6);
    // 009ba4  dec dword ptr [esp]
    X86_AT(c, 0x9ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_9ba7:
    X86_TICK(c, 23);
    // 009ba7  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9ba7u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009baa  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9baau);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009bab  shld eax, ebx, cl
    X86_AT(c, 0x9babu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009bae  push eax
    X86_AT(c, 0x9baeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009baf  call 0x7f8c
    X86_AT(c, 0x9bafu);
    push32(c, 0x9bb4u); f_00007f8c(c); X86_RET(c, 0x9bb4u);
    X86_TICK(c, 39);
    // 009bb4  mov ebx, eax
    X86_AT(c, 0x9bb4u);
    c.r[3] = c.r[0];
    // 009bb6  not ebx
    X86_AT(c, 0x9bb6u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009bb8  and dword ptr es:[edi], ebx
    X86_AT(c, 0x9bb8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[3], 4)); }
    // 009bbb  not ebx
    X86_AT(c, 0x9bbbu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009bbd  pop eax
    X86_AT(c, 0x9bbdu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009bbe  and eax, ebx
    X86_AT(c, 0x9bbeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 009bc0  or dword ptr es:[edi], eax
    X86_AT(c, 0x9bc0u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009bc3  add edi, 4
    X86_AT(c, 0x9bc3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009bc6  dec dword ptr [esp]
    X86_AT(c, 0x9bc6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009bc9  jne 0x9ba7
    X86_AT(c, 0x9bc9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9ba7u); goto L_9ba7; }
L_9bcb:
    X86_TICK(c, 30);
    // 009bcb  mov eax, dword ptr [esi]
    X86_AT(c, 0x9bcbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009bcd  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9bcdu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009bd0  shld eax, ebx, cl
    X86_AT(c, 0x9bd0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009bd3  push eax
    X86_AT(c, 0x9bd3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009bd4  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9bd4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009bdb  and ebx, 7
    X86_AT(c, 0x9bdbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009bde  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0x9bdeu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 009be6  call 0x7f8c
    X86_AT(c, 0x9be6u);
    push32(c, 0x9bebu); f_00007f8c(c); X86_RET(c, 0x9bebu);
    X86_TICK(c, 36);
    // 009beb  and ebx, eax
    X86_AT(c, 0x9bebu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009bed  not ebx
    X86_AT(c, 0x9bedu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009bef  mov edx, dword ptr es:[edi]
    X86_AT(c, 0x9befu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009bf2  and edx, ebx
    X86_AT(c, 0x9bf2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 009bf4  not ebx
    X86_AT(c, 0x9bf4u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009bf6  pop eax
    X86_AT(c, 0x9bf6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009bf7  and eax, ebx
    X86_AT(c, 0x9bf7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 009bf9  or edx, eax
    X86_AT(c, 0x9bf9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 009bfb  mov dword ptr es:[edi], edx
    X86_AT(c, 0x9bfbu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 009bfe  pop ebx
    X86_AT(c, 0x9bfeu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 009bff  ret 
    X86_AT(c, 0x9bffu);
    c.eip = pop32(c); return;
L_9c00:
    X86_TICK(c, 29);
    // 009c00  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9c00u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009c07  and eax, 7
    X86_AT(c, 0x9c07u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009c0c  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0x9c0cu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 009c14  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9c14u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009c1b  and eax, 7
    X86_AT(c, 0x9c1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009c20  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0x9c20u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 009c28  call 0x7f8c
    X86_AT(c, 0x9c28u);
    push32(c, 0x9c2du); f_00007f8c(c); X86_RET(c, 0x9c2du);
    X86_TICK(c, 45);
    // 009c2d  and ebx, eax
    X86_AT(c, 0x9c2du);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009c2f  push ebx
    X86_AT(c, 0x9c2fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 009c30  mov eax, dword ptr [esi]
    X86_AT(c, 0x9c30u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009c32  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9c32u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009c35  shld eax, ebx, cl
    X86_AT(c, 0x9c35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009c38  pop ebx
    X86_AT(c, 0x9c38u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 009c39  not ebx
    X86_AT(c, 0x9c39u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009c3b  mov edx, dword ptr es:[edi]
    X86_AT(c, 0x9c3bu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009c3e  and edx, ebx
    X86_AT(c, 0x9c3eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 009c40  not ebx
    X86_AT(c, 0x9c40u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009c42  and eax, ebx
    X86_AT(c, 0x9c42u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 009c44  or edx, eax
    X86_AT(c, 0x9c44u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 009c46  mov dword ptr es:[edi], edx
    X86_AT(c, 0x9c46u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 009c49  ret 
    X86_AT(c, 0x9c49u);
    c.eip = pop32(c); return;
L_9c4c:
    X86_TICK(c, 12);
    // 009c4c  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x9c4cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 009c54  jne 0x9cec
    X86_AT(c, 0x9c54u);
    if (x86_cc(c, 5)) { goto L_9cec; }
    X86_TICK(c, 7);
    // 009c5a  cmp ebx, 1
    X86_AT(c, 0x9c5au);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009c5d  je 0x9cb8
    X86_AT(c, 0x9c5du);
    if (x86_cc(c, 4)) { goto L_9cb8; }
    X86_TICK(c, 44);
    // 009c5f  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9c5fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009c62  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9c62u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009c63  shld eax, edx, cl
    X86_AT(c, 0x9c63u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009c66  mov dl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9c66u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009c6d  and edx, 7
    X86_AT(c, 0x9c6du);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009c70  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x9c70u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 009c78  and eax, edx
    X86_AT(c, 0x9c78u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009c7a  or dword ptr es:[edi], eax
    X86_AT(c, 0x9c7au);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009c7d  add edi, 4
    X86_AT(c, 0x9c7du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009c80  dec ebx
    X86_AT(c, 0x9c80u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009c81  cmp ebx, 1
    X86_AT(c, 0x9c81u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009c84  je 0x9c97
    X86_AT(c, 0x9c84u);
    if (x86_cc(c, 4)) { goto L_9c97; }
    X86_TICK(c, 2);
    // 009c86  dec ebx
    X86_AT(c, 0x9c86u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_9c87:
    X86_TICK(c, 30);
    // 009c87  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9c87u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009c8a  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9c8au);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009c8b  shld eax, edx, cl
    X86_AT(c, 0x9c8bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009c8e  or dword ptr es:[edi], eax
    X86_AT(c, 0x9c8eu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009c91  add edi, 4
    X86_AT(c, 0x9c91u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009c94  dec ebx
    X86_AT(c, 0x9c94u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009c95  jne 0x9c87
    X86_AT(c, 0x9c95u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9c87u); goto L_9c87; }
L_9c97:
    X86_TICK(c, 40);
    // 009c97  mov eax, dword ptr [esi]
    X86_AT(c, 0x9c97u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009c99  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9c99u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009c9c  shld eax, edx, cl
    X86_AT(c, 0x9c9cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009c9f  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9c9fu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009ca6  and edx, 7
    X86_AT(c, 0x9ca6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009ca9  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x9ca9u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 009cb1  and eax, edx
    X86_AT(c, 0x9cb1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009cb3  or dword ptr es:[edi], eax
    X86_AT(c, 0x9cb3u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009cb6  ret 
    X86_AT(c, 0x9cb6u);
    c.eip = pop32(c); return;
L_9cb8:
    X86_TICK(c, 57);
    // 009cb8  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9cb8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 009cbf  shld ebx, eax, 0x10
    X86_AT(c, 0x9cbfu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 009cc3  and eax, 7
    X86_AT(c, 0x9cc3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009cc8  mov edx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0x9cc8u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 009cd0  and ebx, 7
    X86_AT(c, 0x9cd0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009cd3  and edx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0x9cd3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u))), 4); }
    // 009cdb  push edx
    X86_AT(c, 0x9cdbu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 009cdc  mov eax, dword ptr [esi]
    X86_AT(c, 0x9cdcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009cde  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9cdeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009ce1  shld eax, edx, cl
    X86_AT(c, 0x9ce1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009ce4  pop edx
    X86_AT(c, 0x9ce4u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 009ce5  and eax, edx
    X86_AT(c, 0x9ce5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009ce7  or dword ptr es:[edi], eax
    X86_AT(c, 0x9ce7u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009cea  ret 
    X86_AT(c, 0x9ceau);
    c.eip = pop32(c); return;
L_9cec:
    X86_TICK(c, 7);
    // 009cec  cmp ebx, 1
    X86_AT(c, 0x9cecu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009cef  je 0x9d74
    X86_AT(c, 0x9cefu);
    if (x86_cc(c, 4)) { goto L_9d74; }
    X86_TICK(c, 19);
    // 009cf5  push ebx
    X86_AT(c, 0x9cf5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 009cf6  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9cf6u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009cfd  and ebx, 7
    X86_AT(c, 0x9cfdu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009d00  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0x9d00u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 009d08  call 0x7f8c
    X86_AT(c, 0x9d08u);
    push32(c, 0x9d0du); f_00007f8c(c); X86_RET(c, 0x9d0du);
    X86_TICK(c, 51);
    // 009d0d  and ebx, eax
    X86_AT(c, 0x9d0du);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009d0f  push ebx
    X86_AT(c, 0x9d0fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 009d10  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9d10u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009d13  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9d13u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009d14  shld eax, ebx, cl
    X86_AT(c, 0x9d14u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009d17  pop ebx
    X86_AT(c, 0x9d17u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 009d18  and eax, ebx
    X86_AT(c, 0x9d18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 009d1a  or dword ptr es:[edi], eax
    X86_AT(c, 0x9d1au);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009d1d  add edi, 4
    X86_AT(c, 0x9d1du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009d20  dec dword ptr [esp]
    X86_AT(c, 0x9d20u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009d23  cmp dword ptr [esp], 1
    X86_AT(c, 0x9d23u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 009d27  je 0x9d49
    X86_AT(c, 0x9d27u);
    if (x86_cc(c, 4)) { goto L_9d49; }
    X86_TICK(c, 6);
    // 009d29  dec dword ptr [esp]
    X86_AT(c, 0x9d29u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_9d2c:
    X86_TICK(c, 23);
    // 009d2c  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9d2cu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009d2f  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9d2fu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009d30  shld eax, ebx, cl
    X86_AT(c, 0x9d30u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009d33  push eax
    X86_AT(c, 0x9d33u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009d34  call 0x7f8c
    X86_AT(c, 0x9d34u);
    push32(c, 0x9d39u); f_00007f8c(c); X86_RET(c, 0x9d39u);
    X86_TICK(c, 28);
    // 009d39  mov ebx, eax
    X86_AT(c, 0x9d39u);
    c.r[3] = c.r[0];
    // 009d3b  pop eax
    X86_AT(c, 0x9d3bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009d3c  and eax, ebx
    X86_AT(c, 0x9d3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 009d3e  or dword ptr es:[edi], eax
    X86_AT(c, 0x9d3eu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009d41  add edi, 4
    X86_AT(c, 0x9d41u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009d44  dec dword ptr [esp]
    X86_AT(c, 0x9d44u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009d47  jne 0x9d2c
    X86_AT(c, 0x9d47u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9d2cu); goto L_9d2c; }
L_9d49:
    X86_TICK(c, 30);
    // 009d49  mov eax, dword ptr [esi]
    X86_AT(c, 0x9d49u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009d4b  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9d4bu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009d4e  shld eax, ebx, cl
    X86_AT(c, 0x9d4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009d51  push eax
    X86_AT(c, 0x9d51u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009d52  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9d52u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009d59  and ebx, 7
    X86_AT(c, 0x9d59u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009d5c  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0x9d5cu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 009d64  call 0x7f8c
    X86_AT(c, 0x9d64u);
    push32(c, 0x9d69u); f_00007f8c(c); X86_RET(c, 0x9d69u);
    X86_TICK(c, 29);
    // 009d69  and ebx, eax
    X86_AT(c, 0x9d69u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009d6b  pop eax
    X86_AT(c, 0x9d6bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009d6c  and eax, ebx
    X86_AT(c, 0x9d6cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 009d6e  or dword ptr es:[edi], eax
    X86_AT(c, 0x9d6eu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009d71  pop ebx
    X86_AT(c, 0x9d71u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 009d72  ret 
    X86_AT(c, 0x9d72u);
    c.eip = pop32(c); return;
L_9d74:
    X86_TICK(c, 29);
    // 009d74  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9d74u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009d7b  and eax, 7
    X86_AT(c, 0x9d7bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009d80  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0x9d80u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 009d88  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9d88u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009d8f  and eax, 7
    X86_AT(c, 0x9d8fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009d94  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0x9d94u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 009d9c  call 0x7f8c
    X86_AT(c, 0x9d9cu);
    push32(c, 0x9da1u); f_00007f8c(c); X86_RET(c, 0x9da1u);
    X86_TICK(c, 38);
    // 009da1  and ebx, eax
    X86_AT(c, 0x9da1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009da3  push ebx
    X86_AT(c, 0x9da3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 009da4  mov eax, dword ptr [esi]
    X86_AT(c, 0x9da4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009da6  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9da6u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009da9  shld eax, ebx, cl
    X86_AT(c, 0x9da9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009dac  pop ebx
    X86_AT(c, 0x9dacu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 009dad  and eax, ebx
    X86_AT(c, 0x9dadu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 009daf  or dword ptr es:[edi], eax
    X86_AT(c, 0x9dafu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009db2  ret 
    X86_AT(c, 0x9db2u);
    c.eip = pop32(c); return;
L_9db4:
    X86_TICK(c, 12);
    // 009db4  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x9db4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 009dbc  jne 0x9e7c
    X86_AT(c, 0x9dbcu);
    if (x86_cc(c, 5)) { goto L_9e7c; }
    X86_TICK(c, 7);
    // 009dc2  cmp ebx, 1
    X86_AT(c, 0x9dc2u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009dc5  je 0x9e3c
    X86_AT(c, 0x9dc5u);
    if (x86_cc(c, 4)) { goto L_9e3c; }
    X86_TICK(c, 66);
    // 009dc7  push ecx
    X86_AT(c, 0x9dc7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 009dc8  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9dc8u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009dcb  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9dcbu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009dcc  shld eax, edx, cl
    X86_AT(c, 0x9dccu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009dcf  mov dl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9dcfu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009dd6  and edx, 7
    X86_AT(c, 0x9dd6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009dd9  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x9dd9u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 009de1  mov ecx, edx
    X86_AT(c, 0x9de1u);
    c.r[1] = c.r[2];
    // 009de3  not edx
    X86_AT(c, 0x9de3u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009de5  and edx, dword ptr es:[edi]
    X86_AT(c, 0x9de5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[0] + (uint32_t)(c.r[7]))), 4); }
    // 009de8  and ecx, eax
    X86_AT(c, 0x9de8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[0], 4); }
    // 009dea  mov eax, dword ptr es:[edi]
    X86_AT(c, 0x9deau);
    c.r[0] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009ded  and eax, ecx
    X86_AT(c, 0x9dedu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 009def  or eax, edx
    X86_AT(c, 0x9defu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 009df1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x9df1u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 009df2  pop ecx
    X86_AT(c, 0x9df2u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 009df3  dec ebx
    X86_AT(c, 0x9df3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009df4  cmp ebx, 1
    X86_AT(c, 0x9df4u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009df7  je 0x9e0a
    X86_AT(c, 0x9df7u);
    if (x86_cc(c, 4)) { goto L_9e0a; }
    X86_TICK(c, 2);
    // 009df9  dec ebx
    X86_AT(c, 0x9df9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_9dfa:
    X86_TICK(c, 30);
    // 009dfa  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9dfau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009dfd  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9dfdu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009dfe  shld eax, edx, cl
    X86_AT(c, 0x9dfeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009e01  and dword ptr es:[edi], eax
    X86_AT(c, 0x9e01u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[0], 4)); }
    // 009e04  add edi, 4
    X86_AT(c, 0x9e04u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009e07  dec ebx
    X86_AT(c, 0x9e07u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009e08  jne 0x9dfa
    X86_AT(c, 0x9e08u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9dfau); goto L_9dfa; }
L_9e0a:
    X86_TICK(c, 55);
    // 009e0a  mov eax, dword ptr [esi]
    X86_AT(c, 0x9e0au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009e0c  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9e0cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009e0f  shld eax, edx, cl
    X86_AT(c, 0x9e0fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009e12  push eax
    X86_AT(c, 0x9e12u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009e13  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9e13u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009e1a  and edx, 7
    X86_AT(c, 0x9e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009e1d  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x9e1du);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 009e25  mov ecx, edx
    X86_AT(c, 0x9e25u);
    c.r[1] = c.r[2];
    // 009e27  not edx
    X86_AT(c, 0x9e27u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009e29  pop eax
    X86_AT(c, 0x9e29u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009e2a  and ecx, eax
    X86_AT(c, 0x9e2au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[0], 4); }
    // 009e2c  mov eax, dword ptr es:[edi]
    X86_AT(c, 0x9e2cu);
    c.r[0] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009e2f  and edx, eax
    X86_AT(c, 0x9e2fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[0], 4); }
    // 009e31  and eax, ecx
    X86_AT(c, 0x9e31u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 009e33  or eax, edx
    X86_AT(c, 0x9e33u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 009e35  mov dword ptr es:[edi], eax
    X86_AT(c, 0x9e35u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[0]);
    // 009e38  ret 
    X86_AT(c, 0x9e38u);
    c.eip = pop32(c); return;
L_9e3c:
    X86_TICK(c, 66);
    // 009e3c  mov eax, dword ptr [esi]
    X86_AT(c, 0x9e3cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009e3e  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9e3eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009e41  shld eax, edx, cl
    X86_AT(c, 0x9e41u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009e44  push eax
    X86_AT(c, 0x9e44u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009e45  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9e45u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 009e4c  shld ebx, eax, 0x10
    X86_AT(c, 0x9e4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 009e50  and eax, 7
    X86_AT(c, 0x9e50u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009e55  mov edx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0x9e55u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 009e5d  and ebx, 7
    X86_AT(c, 0x9e5du);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009e60  and edx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0x9e60u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u))), 4); }
    // 009e68  mov ecx, edx
    X86_AT(c, 0x9e68u);
    c.r[1] = c.r[2];
    // 009e6a  not edx
    X86_AT(c, 0x9e6au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009e6c  pop eax
    X86_AT(c, 0x9e6cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009e6d  and ecx, eax
    X86_AT(c, 0x9e6du);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[0], 4); }
    // 009e6f  mov eax, dword ptr es:[edi]
    X86_AT(c, 0x9e6fu);
    c.r[0] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009e72  and edx, eax
    X86_AT(c, 0x9e72u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[0], 4); }
    // 009e74  and eax, ecx
    X86_AT(c, 0x9e74u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 009e76  or eax, edx
    X86_AT(c, 0x9e76u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 009e78  mov dword ptr es:[edi], eax
    X86_AT(c, 0x9e78u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[0]);
    // 009e7b  ret 
    X86_AT(c, 0x9e7bu);
    c.eip = pop32(c); return;
L_9e7c:
    X86_TICK(c, 7);
    // 009e7c  cmp ebx, 1
    X86_AT(c, 0x9e7cu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009e7f  je 0x9f28
    X86_AT(c, 0x9e7fu);
    if (x86_cc(c, 4)) { goto L_9f28; }
    X86_TICK(c, 37);
    // 009e85  push ebx
    X86_AT(c, 0x9e85u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 009e86  push ecx
    X86_AT(c, 0x9e86u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 009e87  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9e87u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009e8a  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9e8au);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009e8b  shld eax, ebx, cl
    X86_AT(c, 0x9e8bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009e8e  push eax
    X86_AT(c, 0x9e8eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009e8f  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9e8fu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009e96  and ebx, 7
    X86_AT(c, 0x9e96u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009e99  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0x9e99u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 009ea1  call 0x7f8c
    X86_AT(c, 0x9ea1u);
    push32(c, 0x9ea6u); f_00007f8c(c); X86_RET(c, 0x9ea6u);
    X86_TICK(c, 55);
    // 009ea6  and ebx, eax
    X86_AT(c, 0x9ea6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009ea8  mov ecx, ebx
    X86_AT(c, 0x9ea8u);
    c.r[1] = c.r[3];
    // 009eaa  not ebx
    X86_AT(c, 0x9eaau);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009eac  and ebx, dword ptr es:[edi]
    X86_AT(c, 0x9eacu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[0] + (uint32_t)(c.r[7]))), 4); }
    // 009eaf  pop eax
    X86_AT(c, 0x9eafu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009eb0  and ecx, eax
    X86_AT(c, 0x9eb0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[0], 4); }
    // 009eb2  mov eax, dword ptr es:[edi]
    X86_AT(c, 0x9eb2u);
    c.r[0] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009eb5  and eax, ecx
    X86_AT(c, 0x9eb5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 009eb7  or eax, ebx
    X86_AT(c, 0x9eb7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[3], 4); }
    // 009eb9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x9eb9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 009eba  pop ecx
    X86_AT(c, 0x9ebau);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 009ebb  dec dword ptr [esp]
    X86_AT(c, 0x9ebbu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009ebe  cmp dword ptr [esp], 1
    X86_AT(c, 0x9ebeu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 009ec2  je 0x9eef
    X86_AT(c, 0x9ec2u);
    if (x86_cc(c, 4)) { goto L_9eef; }
    X86_TICK(c, 6);
    // 009ec4  dec dword ptr [esp]
    X86_AT(c, 0x9ec4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_9ec7:
    X86_TICK(c, 25);
    // 009ec7  push ecx
    X86_AT(c, 0x9ec7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 009ec8  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9ec8u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009ecb  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9ecbu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009ecc  shld eax, ebx, cl
    X86_AT(c, 0x9eccu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009ecf  push eax
    X86_AT(c, 0x9ecfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009ed0  call 0x7f8c
    X86_AT(c, 0x9ed0u);
    push32(c, 0x9ed5u); f_00007f8c(c); X86_RET(c, 0x9ed5u);
    X86_TICK(c, 48);
    // 009ed5  mov ebx, eax
    X86_AT(c, 0x9ed5u);
    c.r[3] = c.r[0];
    // 009ed7  mov ecx, ebx
    X86_AT(c, 0x9ed7u);
    c.r[1] = c.r[3];
    // 009ed9  not ebx
    X86_AT(c, 0x9ed9u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009edb  and ebx, dword ptr es:[edi]
    X86_AT(c, 0x9edbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[0] + (uint32_t)(c.r[7]))), 4); }
    // 009ede  pop eax
    X86_AT(c, 0x9edeu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009edf  and ecx, eax
    X86_AT(c, 0x9edfu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[0], 4); }
    // 009ee1  mov eax, dword ptr es:[edi]
    X86_AT(c, 0x9ee1u);
    c.r[0] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009ee4  and eax, ecx
    X86_AT(c, 0x9ee4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 009ee6  or eax, ebx
    X86_AT(c, 0x9ee6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[3], 4); }
    // 009ee8  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x9ee8u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 009ee9  pop ecx
    X86_AT(c, 0x9ee9u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 009eea  dec dword ptr [esp]
    X86_AT(c, 0x9eeau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009eed  jne 0x9ec7
    X86_AT(c, 0x9eedu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9ec7u); goto L_9ec7; }
L_9eef:
    X86_TICK(c, 30);
    // 009eef  mov eax, dword ptr [esi]
    X86_AT(c, 0x9eefu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009ef1  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9ef1u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009ef4  shld eax, ebx, cl
    X86_AT(c, 0x9ef4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009ef7  push eax
    X86_AT(c, 0x9ef7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009ef8  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9ef8u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009eff  and ebx, 7
    X86_AT(c, 0x9effu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009f02  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0x9f02u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 009f0a  call 0x7f8c
    X86_AT(c, 0x9f0au);
    push32(c, 0x9f0fu); f_00007f8c(c); X86_RET(c, 0x9f0fu);
    X86_TICK(c, 38);
    // 009f0f  and ebx, eax
    X86_AT(c, 0x9f0fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009f11  mov ecx, ebx
    X86_AT(c, 0x9f11u);
    c.r[1] = c.r[3];
    // 009f13  not ebx
    X86_AT(c, 0x9f13u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009f15  pop eax
    X86_AT(c, 0x9f15u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009f16  and ecx, eax
    X86_AT(c, 0x9f16u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[0], 4); }
    // 009f18  mov eax, dword ptr es:[edi]
    X86_AT(c, 0x9f18u);
    c.r[0] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009f1b  and ebx, eax
    X86_AT(c, 0x9f1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009f1d  and eax, ecx
    X86_AT(c, 0x9f1du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 009f1f  or eax, ebx
    X86_AT(c, 0x9f1fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[3], 4); }
    // 009f21  mov dword ptr es:[edi], eax
    X86_AT(c, 0x9f21u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[0]);
    // 009f24  pop ebx
    X86_AT(c, 0x9f24u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 009f25  ret 
    X86_AT(c, 0x9f25u);
    c.eip = pop32(c); return;
L_9f28:
    X86_TICK(c, 42);
    // 009f28  mov eax, dword ptr [esi]
    X86_AT(c, 0x9f28u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009f2a  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9f2au);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009f2d  shld eax, ebx, cl
    X86_AT(c, 0x9f2du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009f30  push eax
    X86_AT(c, 0x9f30u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009f31  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9f31u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009f38  and eax, 7
    X86_AT(c, 0x9f38u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009f3d  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0x9f3du);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 009f45  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9f45u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009f4c  and eax, 7
    X86_AT(c, 0x9f4cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009f51  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0x9f51u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 009f59  call 0x7f8c
    X86_AT(c, 0x9f59u);
    push32(c, 0x9f5eu); f_00007f8c(c); X86_RET(c, 0x9f5eu);
    X86_TICK(c, 34);
    // 009f5e  and ebx, eax
    X86_AT(c, 0x9f5eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009f60  mov ecx, ebx
    X86_AT(c, 0x9f60u);
    c.r[1] = c.r[3];
    // 009f62  not ebx
    X86_AT(c, 0x9f62u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009f64  pop eax
    X86_AT(c, 0x9f64u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009f65  and ecx, eax
    X86_AT(c, 0x9f65u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[0], 4); }
    // 009f67  mov eax, dword ptr es:[edi]
    X86_AT(c, 0x9f67u);
    c.r[0] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009f6a  and ebx, eax
    X86_AT(c, 0x9f6au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009f6c  and eax, ecx
    X86_AT(c, 0x9f6cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 009f6e  or eax, ebx
    X86_AT(c, 0x9f6eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[3], 4); }
    // 009f70  mov dword ptr es:[edi], eax
    X86_AT(c, 0x9f70u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[0]);
    // 009f73  ret 
    X86_AT(c, 0x9f73u);
    c.eip = pop32(c); return;
L_9f74:
    X86_TICK(c, 12);
    // 009f74  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x9f74u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 009f7c  jne 0xa014
    X86_AT(c, 0x9f7cu);
    if (x86_cc(c, 5)) { goto L_a014; }
    X86_TICK(c, 7);
    // 009f82  cmp ebx, 1
    X86_AT(c, 0x9f82u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009f85  je 0x9fe0
    X86_AT(c, 0x9f85u);
    if (x86_cc(c, 4)) { goto L_9fe0; }
    X86_TICK(c, 44);
    // 009f87  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9f87u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009f8a  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9f8au);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009f8b  shld eax, edx, cl
    X86_AT(c, 0x9f8bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009f8e  mov dl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9f8eu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009f95  and edx, 7
    X86_AT(c, 0x9f95u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009f98  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x9f98u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 009fa0  and eax, edx
    X86_AT(c, 0x9fa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009fa2  xor dword ptr es:[edi], eax
    X86_AT(c, 0x9fa2u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 009fa5  add edi, 4
    X86_AT(c, 0x9fa5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009fa8  dec ebx
    X86_AT(c, 0x9fa8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009fa9  cmp ebx, 1
    X86_AT(c, 0x9fa9u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009fac  je 0x9fbf
    X86_AT(c, 0x9facu);
    if (x86_cc(c, 4)) { goto L_9fbf; }
    X86_TICK(c, 2);
    // 009fae  dec ebx
    X86_AT(c, 0x9faeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_9faf:
    X86_TICK(c, 30);
    // 009faf  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9fafu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009fb2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9fb2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009fb3  shld eax, edx, cl
    X86_AT(c, 0x9fb3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009fb6  xor dword ptr es:[edi], eax
    X86_AT(c, 0x9fb6u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 009fb9  add edi, 4
    X86_AT(c, 0x9fb9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009fbc  dec ebx
    X86_AT(c, 0x9fbcu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009fbd  jne 0x9faf
    X86_AT(c, 0x9fbdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9fafu); goto L_9faf; }
L_9fbf:
    X86_TICK(c, 40);
    // 009fbf  mov eax, dword ptr [esi]
    X86_AT(c, 0x9fbfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009fc1  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9fc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009fc4  shld eax, edx, cl
    X86_AT(c, 0x9fc4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009fc7  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9fc7u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009fce  and edx, 7
    X86_AT(c, 0x9fceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009fd1  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x9fd1u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 009fd9  and eax, edx
    X86_AT(c, 0x9fd9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009fdb  xor dword ptr es:[edi], eax
    X86_AT(c, 0x9fdbu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 009fde  ret 
    X86_AT(c, 0x9fdeu);
    c.eip = pop32(c); return;
L_9fe0:
    X86_TICK(c, 57);
    // 009fe0  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9fe0u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 009fe7  shld ebx, eax, 0x10
    X86_AT(c, 0x9fe7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 009feb  and eax, 7
    X86_AT(c, 0x9febu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009ff0  mov edx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0x9ff0u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 009ff8  and ebx, 7
    X86_AT(c, 0x9ff8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009ffb  and edx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0x9ffbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u))), 4); }
    // 00a003  push edx
    X86_AT(c, 0xa003u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00a004  mov eax, dword ptr [esi]
    X86_AT(c, 0xa004u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a006  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0xa006u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a009  shld eax, edx, cl
    X86_AT(c, 0xa009u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a00c  pop edx
    X86_AT(c, 0xa00cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00a00d  and eax, edx
    X86_AT(c, 0xa00du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 00a00f  xor dword ptr es:[edi], eax
    X86_AT(c, 0xa00fu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 00a012  ret 
    X86_AT(c, 0xa012u);
    c.eip = pop32(c); return;
L_a014:
    X86_TICK(c, 7);
    // 00a014  cmp ebx, 1
    X86_AT(c, 0xa014u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00a017  je 0xa09c
    X86_AT(c, 0xa017u);
    if (x86_cc(c, 4)) { goto L_a09c; }
    X86_TICK(c, 19);
    // 00a01d  push ebx
    X86_AT(c, 0xa01du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a01e  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa01eu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a025  and ebx, 7
    X86_AT(c, 0xa025u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a028  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa028u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a030  call 0x7f8c
    X86_AT(c, 0xa030u);
    push32(c, 0xa035u); f_00007f8c(c); X86_RET(c, 0xa035u);
    X86_TICK(c, 51);
    // 00a035  and ebx, eax
    X86_AT(c, 0xa035u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a037  push ebx
    X86_AT(c, 0xa037u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a038  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa038u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a03b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa03bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a03c  shld eax, ebx, cl
    X86_AT(c, 0xa03cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a03f  pop ebx
    X86_AT(c, 0xa03fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a040  and eax, ebx
    X86_AT(c, 0xa040u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a042  xor dword ptr es:[edi], eax
    X86_AT(c, 0xa042u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 00a045  add edi, 4
    X86_AT(c, 0xa045u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a048  dec dword ptr [esp]
    X86_AT(c, 0xa048u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a04b  cmp dword ptr [esp], 1
    X86_AT(c, 0xa04bu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a04f  je 0xa071
    X86_AT(c, 0xa04fu);
    if (x86_cc(c, 4)) { goto L_a071; }
    X86_TICK(c, 6);
    // 00a051  dec dword ptr [esp]
    X86_AT(c, 0xa051u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a054:
    X86_TICK(c, 23);
    // 00a054  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa054u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a057  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa057u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a058  shld eax, ebx, cl
    X86_AT(c, 0xa058u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a05b  push eax
    X86_AT(c, 0xa05bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a05c  call 0x7f8c
    X86_AT(c, 0xa05cu);
    push32(c, 0xa061u); f_00007f8c(c); X86_RET(c, 0xa061u);
    X86_TICK(c, 28);
    // 00a061  mov ebx, eax
    X86_AT(c, 0xa061u);
    c.r[3] = c.r[0];
    // 00a063  pop eax
    X86_AT(c, 0xa063u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a064  and eax, ebx
    X86_AT(c, 0xa064u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a066  xor dword ptr es:[edi], eax
    X86_AT(c, 0xa066u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 00a069  add edi, 4
    X86_AT(c, 0xa069u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a06c  dec dword ptr [esp]
    X86_AT(c, 0xa06cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a06f  jne 0xa054
    X86_AT(c, 0xa06fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa054u); goto L_a054; }
L_a071:
    X86_TICK(c, 30);
    // 00a071  mov eax, dword ptr [esi]
    X86_AT(c, 0xa071u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a073  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa073u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a076  shld eax, ebx, cl
    X86_AT(c, 0xa076u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a079  push eax
    X86_AT(c, 0xa079u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a07a  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa07au);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a081  and ebx, 7
    X86_AT(c, 0xa081u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a084  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa084u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a08c  call 0x7f8c
    X86_AT(c, 0xa08cu);
    push32(c, 0xa091u); f_00007f8c(c); X86_RET(c, 0xa091u);
    X86_TICK(c, 29);
    // 00a091  and ebx, eax
    X86_AT(c, 0xa091u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a093  pop eax
    X86_AT(c, 0xa093u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a094  and eax, ebx
    X86_AT(c, 0xa094u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a096  xor dword ptr es:[edi], eax
    X86_AT(c, 0xa096u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 00a099  pop ebx
    X86_AT(c, 0xa099u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a09a  ret 
    X86_AT(c, 0xa09au);
    c.eip = pop32(c); return;
L_a09c:
    X86_TICK(c, 29);
    // 00a09c  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa09cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a0a3  and eax, 7
    X86_AT(c, 0xa0a3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a0a8  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0xa0a8u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 00a0b0  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa0b0u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a0b7  and eax, 7
    X86_AT(c, 0xa0b7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a0bc  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0xa0bcu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 00a0c4  call 0x7f8c
    X86_AT(c, 0xa0c4u);
    push32(c, 0xa0c9u); f_00007f8c(c); X86_RET(c, 0xa0c9u);
    X86_TICK(c, 38);
    // 00a0c9  and ebx, eax
    X86_AT(c, 0xa0c9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a0cb  push ebx
    X86_AT(c, 0xa0cbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a0cc  mov eax, dword ptr [esi]
    X86_AT(c, 0xa0ccu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a0ce  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa0ceu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a0d1  shld eax, ebx, cl
    X86_AT(c, 0xa0d1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a0d4  pop ebx
    X86_AT(c, 0xa0d4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a0d5  and eax, ebx
    X86_AT(c, 0xa0d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a0d7  xor dword ptr es:[edi], eax
    X86_AT(c, 0xa0d7u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 00a0da  ret 
    X86_AT(c, 0xa0dau);
    c.eip = pop32(c); return;
L_a0dc:
    X86_TICK(c, 12);
    // 00a0dc  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa0dcu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a0e4  jne 0xa1a0
    X86_AT(c, 0xa0e4u);
    if (x86_cc(c, 5)) { goto L_a1a0; }
    X86_TICK(c, 7);
    // 00a0ea  cmp ebx, 1
    X86_AT(c, 0xa0eau);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00a0ed  je 0xa160
    X86_AT(c, 0xa0edu);
    if (x86_cc(c, 4)) { goto L_a160; }
    X86_TICK(c, 57);
    // 00a0ef  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0xa0efu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a0f2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa0f2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a0f3  shld eax, edx, cl
    X86_AT(c, 0xa0f3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a0f6  not eax
    X86_AT(c, 0xa0f6u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a0f8  mov dl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa0f8u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a0ff  and edx, 7
    X86_AT(c, 0xa0ffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 00a102  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0xa102u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 00a10a  not edx
    X86_AT(c, 0xa10au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00a10c  and dword ptr es:[edi], edx
    X86_AT(c, 0xa10cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 00a10f  not edx
    X86_AT(c, 0xa10fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00a111  and eax, edx
    X86_AT(c, 0xa111u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 00a113  or dword ptr es:[edi], eax
    X86_AT(c, 0xa113u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 00a116  add edi, 4
    X86_AT(c, 0xa116u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a119  dec ebx
    X86_AT(c, 0xa119u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 00a11a  cmp ebx, 1
    X86_AT(c, 0xa11au);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00a11d  je 0xa132
    X86_AT(c, 0xa11du);
    if (x86_cc(c, 4)) { goto L_a132; }
    X86_TICK(c, 2);
    // 00a11f  dec ebx
    X86_AT(c, 0xa11fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_a120:
    X86_TICK(c, 27);
    // 00a120  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0xa120u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a123  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa123u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a124  shld eax, edx, cl
    X86_AT(c, 0xa124u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a127  not eax
    X86_AT(c, 0xa127u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a129  mov dword ptr es:[edi], eax
    X86_AT(c, 0xa129u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[0]);
    // 00a12c  add edi, 4
    X86_AT(c, 0xa12cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a12f  dec ebx
    X86_AT(c, 0xa12fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 00a130  jne 0xa120
    X86_AT(c, 0xa130u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa120u); goto L_a120; }
L_a132:
    X86_TICK(c, 49);
    // 00a132  mov eax, dword ptr [esi]
    X86_AT(c, 0xa132u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a134  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0xa134u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a137  shld eax, edx, cl
    X86_AT(c, 0xa137u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a13a  not eax
    X86_AT(c, 0xa13au);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a13c  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa13cu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a143  and edx, 7
    X86_AT(c, 0xa143u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 00a146  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0xa146u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 00a14e  not edx
    X86_AT(c, 0xa14eu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00a150  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0xa150u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a153  and ebx, edx
    X86_AT(c, 0xa153u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 00a155  not edx
    X86_AT(c, 0xa155u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00a157  and eax, edx
    X86_AT(c, 0xa157u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 00a159  or ebx, eax
    X86_AT(c, 0xa159u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 00a15b  mov dword ptr es:[edi], ebx
    X86_AT(c, 0xa15bu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 00a15e  ret 
    X86_AT(c, 0xa15eu);
    c.eip = pop32(c); return;
L_a160:
    X86_TICK(c, 66);
    // 00a160  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa160u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00a167  shld ebx, eax, 0x10
    X86_AT(c, 0xa167u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00a16b  and eax, 7
    X86_AT(c, 0xa16bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a170  mov edx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0xa170u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 00a178  and ebx, 7
    X86_AT(c, 0xa178u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a17b  and edx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa17bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u))), 4); }
    // 00a183  push edx
    X86_AT(c, 0xa183u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00a184  mov eax, dword ptr [esi]
    X86_AT(c, 0xa184u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a186  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0xa186u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a189  shld eax, edx, cl
    X86_AT(c, 0xa189u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a18c  pop edx
    X86_AT(c, 0xa18cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00a18d  not eax
    X86_AT(c, 0xa18du);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a18f  not edx
    X86_AT(c, 0xa18fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00a191  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0xa191u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a194  and ebx, edx
    X86_AT(c, 0xa194u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 00a196  not edx
    X86_AT(c, 0xa196u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00a198  and eax, edx
    X86_AT(c, 0xa198u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 00a19a  or ebx, eax
    X86_AT(c, 0xa19au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 00a19c  mov dword ptr es:[edi], ebx
    X86_AT(c, 0xa19cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 00a19f  ret 
    X86_AT(c, 0xa19fu);
    c.eip = pop32(c); return;
L_a1a0:
    X86_TICK(c, 7);
    // 00a1a0  cmp ebx, 1
    X86_AT(c, 0xa1a0u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00a1a3  je 0xa248
    X86_AT(c, 0xa1a3u);
    if (x86_cc(c, 4)) { goto L_a248; }
    X86_TICK(c, 19);
    // 00a1a9  push ebx
    X86_AT(c, 0xa1a9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a1aa  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa1aau);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a1b1  and ebx, 7
    X86_AT(c, 0xa1b1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a1b4  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa1b4u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a1bc  call 0x7f8c
    X86_AT(c, 0xa1bcu);
    push32(c, 0xa1c1u); f_00007f8c(c); X86_RET(c, 0xa1c1u);
    X86_TICK(c, 64);
    // 00a1c1  and ebx, eax
    X86_AT(c, 0xa1c1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a1c3  not ebx
    X86_AT(c, 0xa1c3u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a1c5  and dword ptr es:[edi], ebx
    X86_AT(c, 0xa1c5u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[3], 4)); }
    // 00a1c8  push ebx
    X86_AT(c, 0xa1c8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a1c9  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa1c9u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a1cc  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa1ccu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a1cd  shld eax, ebx, cl
    X86_AT(c, 0xa1cdu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a1d0  pop ebx
    X86_AT(c, 0xa1d0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a1d1  not eax
    X86_AT(c, 0xa1d1u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a1d3  not ebx
    X86_AT(c, 0xa1d3u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a1d5  and eax, ebx
    X86_AT(c, 0xa1d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a1d7  or dword ptr es:[edi], eax
    X86_AT(c, 0xa1d7u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 00a1da  add edi, 4
    X86_AT(c, 0xa1dau);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a1dd  dec dword ptr [esp]
    X86_AT(c, 0xa1ddu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a1e0  cmp dword ptr [esp], 1
    X86_AT(c, 0xa1e0u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a1e4  je 0xa20f
    X86_AT(c, 0xa1e4u);
    if (x86_cc(c, 4)) { goto L_a20f; }
    X86_TICK(c, 6);
    // 00a1e6  dec dword ptr [esp]
    X86_AT(c, 0xa1e6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a1e9:
    X86_TICK(c, 25);
    // 00a1e9  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa1e9u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a1ec  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa1ecu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a1ed  shld eax, ebx, cl
    X86_AT(c, 0xa1edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a1f0  not eax
    X86_AT(c, 0xa1f0u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a1f2  push eax
    X86_AT(c, 0xa1f2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a1f3  call 0x7f8c
    X86_AT(c, 0xa1f3u);
    push32(c, 0xa1f8u); f_00007f8c(c); X86_RET(c, 0xa1f8u);
    X86_TICK(c, 39);
    // 00a1f8  mov ebx, eax
    X86_AT(c, 0xa1f8u);
    c.r[3] = c.r[0];
    // 00a1fa  not ebx
    X86_AT(c, 0xa1fau);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a1fc  and dword ptr es:[edi], ebx
    X86_AT(c, 0xa1fcu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[3], 4)); }
    // 00a1ff  not ebx
    X86_AT(c, 0xa1ffu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a201  pop eax
    X86_AT(c, 0xa201u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a202  and eax, ebx
    X86_AT(c, 0xa202u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a204  or dword ptr es:[edi], eax
    X86_AT(c, 0xa204u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 00a207  add edi, 4
    X86_AT(c, 0xa207u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a20a  dec dword ptr [esp]
    X86_AT(c, 0xa20au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a20d  jne 0xa1e9
    X86_AT(c, 0xa20du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa1e9u); goto L_a1e9; }
L_a20f:
    X86_TICK(c, 32);
    // 00a20f  mov eax, dword ptr [esi]
    X86_AT(c, 0xa20fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a211  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa211u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a214  shld eax, ebx, cl
    X86_AT(c, 0xa214u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a217  not eax
    X86_AT(c, 0xa217u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a219  push eax
    X86_AT(c, 0xa219u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a21a  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa21au);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a221  and ebx, 7
    X86_AT(c, 0xa221u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a224  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa224u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a22c  call 0x7f8c
    X86_AT(c, 0xa22cu);
    push32(c, 0xa231u); f_00007f8c(c); X86_RET(c, 0xa231u);
    X86_TICK(c, 36);
    // 00a231  and ebx, eax
    X86_AT(c, 0xa231u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a233  not ebx
    X86_AT(c, 0xa233u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a235  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa235u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a238  and edx, ebx
    X86_AT(c, 0xa238u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a23a  not ebx
    X86_AT(c, 0xa23au);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a23c  pop eax
    X86_AT(c, 0xa23cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a23d  and eax, ebx
    X86_AT(c, 0xa23du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a23f  or edx, eax
    X86_AT(c, 0xa23fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a241  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa241u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a244  pop ebx
    X86_AT(c, 0xa244u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a245  ret 
    X86_AT(c, 0xa245u);
    c.eip = pop32(c); return;
L_a248:
    X86_TICK(c, 29);
    // 00a248  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa248u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a24f  and eax, 7
    X86_AT(c, 0xa24fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a254  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0xa254u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 00a25c  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa25cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a263  and eax, 7
    X86_AT(c, 0xa263u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a268  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0xa268u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 00a270  call 0x7f8c
    X86_AT(c, 0xa270u);
    push32(c, 0xa275u); f_00007f8c(c); X86_RET(c, 0xa275u);
    X86_TICK(c, 47);
    // 00a275  and ebx, eax
    X86_AT(c, 0xa275u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a277  push ebx
    X86_AT(c, 0xa277u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a278  mov eax, dword ptr [esi]
    X86_AT(c, 0xa278u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a27a  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa27au);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a27d  shld eax, ebx, cl
    X86_AT(c, 0xa27du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a280  pop ebx
    X86_AT(c, 0xa280u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a281  not eax
    X86_AT(c, 0xa281u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a283  not ebx
    X86_AT(c, 0xa283u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a285  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa285u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a288  and edx, ebx
    X86_AT(c, 0xa288u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a28a  not ebx
    X86_AT(c, 0xa28au);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a28c  and eax, ebx
    X86_AT(c, 0xa28cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a28e  or edx, eax
    X86_AT(c, 0xa28eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a290  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa290u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a293  ret 
    X86_AT(c, 0xa293u);
    c.eip = pop32(c); return;
L_a294:
    X86_TICK(c, 12);
    // 00a294  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa294u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a29c  jne 0xa40c
    X86_AT(c, 0xa29cu);
    if (x86_cc(c, 5)) { goto L_a40c; }
    X86_TICK(c, 7);
    // 00a2a2  cmp ebx, 1
    X86_AT(c, 0xa2a2u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00a2a5  je 0xa3a0
    X86_AT(c, 0xa2a5u);
    if (x86_cc(c, 4)) { goto L_a3a0; }
    X86_TICK(c, 42);
    // 00a2ab  push ebx
    X86_AT(c, 0xa2abu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a2ac  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa2acu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a2af  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa2afu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a2b0  shld eax, ebx, cl
    X86_AT(c, 0xa2b0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a2b3  push eax
    X86_AT(c, 0xa2b3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a2b4  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa2b4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a2bb  and ebx, 7
    X86_AT(c, 0xa2bbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a2be  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa2beu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a2c6  push ecx
    X86_AT(c, 0xa2c6u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a2c7  push ebx
    X86_AT(c, 0xa2c7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a2c8  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa2c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a2cf  sub ebx, ebx
    X86_AT(c, 0xa2cfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a2d1  mov cl, 8
    X86_AT(c, 0xa2d1u);
    s8(c, 1, 0x8u);
L_a2d3:
    X86_TICK(c, 10);
    // 00a2d3  shl ebx, 4
    X86_AT(c, 0xa2d3u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a2d6  test eax, 0xf0000000
    X86_AT(c, 0xa2d6u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a2db  je 0xa2e0
    X86_AT(c, 0xa2dbu);
    if (x86_cc(c, 4)) { goto L_a2e0; }
    X86_TICK(c, 2);
    // 00a2dd  or bl, 0xf
    X86_AT(c, 0xa2ddu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a2e0:
    X86_TICK(c, 10);
    // 00a2e0  shl eax, 4
    X86_AT(c, 0xa2e0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a2e3  dec cl
    X86_AT(c, 0xa2e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a2e5  jne 0xa2d3
    X86_AT(c, 0xa2e5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa2d3u); goto L_a2d3; }
    X86_TICK(c, 55);
    // 00a2e7  mov eax, ebx
    X86_AT(c, 0xa2e7u);
    c.r[0] = c.r[3];
    // 00a2e9  pop ebx
    X86_AT(c, 0xa2e9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a2ea  pop ecx
    X86_AT(c, 0xa2eau);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a2eb  and ebx, eax
    X86_AT(c, 0xa2ebu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a2ed  not ebx
    X86_AT(c, 0xa2edu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2ef  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa2efu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a2f2  and edx, ebx
    X86_AT(c, 0xa2f2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f4  not ebx
    X86_AT(c, 0xa2f4u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2f6  pop eax
    X86_AT(c, 0xa2f6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a2f7  and eax, ebx
    X86_AT(c, 0xa2f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f9  or eax, edx
    X86_AT(c, 0xa2f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a2fb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa2fbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a2fc  dec dword ptr [esp]
    X86_AT(c, 0xa2fcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a2ff  cmp dword ptr [esp], 1
    X86_AT(c, 0xa2ffu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a303  je 0xa34b
    X86_AT(c, 0xa303u);
    if (x86_cc(c, 4)) { goto L_a34b; }
    X86_TICK(c, 6);
    // 00a305  dec dword ptr [esp]
    X86_AT(c, 0xa305u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a308:
    X86_TICK(c, 30);
    // 00a308  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa308u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a30b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa30bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a30c  shld eax, ebx, cl
    X86_AT(c, 0xa30cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a30f  push eax
    X86_AT(c, 0xa30fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a310  push ecx
    X86_AT(c, 0xa310u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a311  push ebx
    X86_AT(c, 0xa311u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a312  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa312u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a319  sub ebx, ebx
    X86_AT(c, 0xa319u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a31b  mov cl, 8
    X86_AT(c, 0xa31bu);
    s8(c, 1, 0x8u);
L_a31d:
    X86_TICK(c, 10);
    // 00a31d  shl ebx, 4
    X86_AT(c, 0xa31du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a320  test eax, 0xf0000000
    X86_AT(c, 0xa320u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a325  je 0xa32a
    X86_AT(c, 0xa325u);
    if (x86_cc(c, 4)) { goto L_a32a; }
    X86_TICK(c, 2);
    // 00a327  or bl, 0xf
    X86_AT(c, 0xa327u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a32a:
    X86_TICK(c, 10);
    // 00a32a  shl eax, 4
    X86_AT(c, 0xa32au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a32d  dec cl
    X86_AT(c, 0xa32du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a32f  jne 0xa31d
    X86_AT(c, 0xa32fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa31du); goto L_a31d; }
    X86_TICK(c, 48);
    // 00a331  mov eax, ebx
    X86_AT(c, 0xa331u);
    c.r[0] = c.r[3];
    // 00a333  pop ebx
    X86_AT(c, 0xa333u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a334  pop ecx
    X86_AT(c, 0xa334u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a335  mov ebx, eax
    X86_AT(c, 0xa335u);
    c.r[3] = c.r[0];
    // 00a337  not ebx
    X86_AT(c, 0xa337u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a339  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa339u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a33c  and edx, ebx
    X86_AT(c, 0xa33cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a33e  not ebx
    X86_AT(c, 0xa33eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a340  pop eax
    X86_AT(c, 0xa340u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a341  and eax, ebx
    X86_AT(c, 0xa341u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a343  or eax, edx
    X86_AT(c, 0xa343u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a345  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa345u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a346  dec dword ptr [esp]
    X86_AT(c, 0xa346u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a349  jne 0xa308
    X86_AT(c, 0xa349u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa308u); goto L_a308; }
L_a34b:
    X86_TICK(c, 37);
    // 00a34b  mov eax, dword ptr [esi]
    X86_AT(c, 0xa34bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a34d  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa34du);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a350  shld eax, ebx, cl
    X86_AT(c, 0xa350u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a353  push eax
    X86_AT(c, 0xa353u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a354  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa354u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a35b  and ebx, 7
    X86_AT(c, 0xa35bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a35e  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa35eu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a366  push ecx
    X86_AT(c, 0xa366u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a367  push ebx
    X86_AT(c, 0xa367u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a368  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa368u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a36f  sub ebx, ebx
    X86_AT(c, 0xa36fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a371  mov cl, 8
    X86_AT(c, 0xa371u);
    s8(c, 1, 0x8u);
L_a373:
    X86_TICK(c, 10);
    // 00a373  shl ebx, 4
    X86_AT(c, 0xa373u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a376  test eax, 0xf0000000
    X86_AT(c, 0xa376u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a37b  je 0xa380
    X86_AT(c, 0xa37bu);
    if (x86_cc(c, 4)) { goto L_a380; }
    X86_TICK(c, 2);
    // 00a37d  or bl, 0xf
    X86_AT(c, 0xa37du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a380:
    X86_TICK(c, 10);
    // 00a380  shl eax, 4
    X86_AT(c, 0xa380u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a383  dec cl
    X86_AT(c, 0xa383u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a385  jne 0xa373
    X86_AT(c, 0xa385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa373u); goto L_a373; }
    X86_TICK(c, 46);
    // 00a387  mov eax, ebx
    X86_AT(c, 0xa387u);
    c.r[0] = c.r[3];
    // 00a389  pop ebx
    X86_AT(c, 0xa389u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a38a  pop ecx
    X86_AT(c, 0xa38au);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a38b  and ebx, eax
    X86_AT(c, 0xa38bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a38d  not ebx
    X86_AT(c, 0xa38du);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a38f  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa38fu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a392  and edx, ebx
    X86_AT(c, 0xa392u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a394  not ebx
    X86_AT(c, 0xa394u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a396  pop eax
    X86_AT(c, 0xa396u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a397  and eax, ebx
    X86_AT(c, 0xa397u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a399  or edx, eax
    X86_AT(c, 0xa399u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a39b  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa39bu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a39e  pop ebx
    X86_AT(c, 0xa39eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a39f  ret 
    X86_AT(c, 0xa39fu);
    c.eip = pop32(c); return;
L_a3a0:
    X86_TICK(c, 55);
    // 00a3a0  mov eax, dword ptr [esi]
    X86_AT(c, 0xa3a0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a3a2  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa3a2u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a3a5  shld eax, ebx, cl
    X86_AT(c, 0xa3a5u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a3a8  push eax
    X86_AT(c, 0xa3a8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a3a9  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa3a9u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a3b0  and eax, 7
    X86_AT(c, 0xa3b0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a3b5  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0xa3b5u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 00a3bd  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa3bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a3c4  and eax, 7
    X86_AT(c, 0xa3c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a3c9  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0xa3c9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 00a3d1  pop eax
    X86_AT(c, 0xa3d1u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a3d2  push eax
    X86_AT(c, 0xa3d2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a3d3  push ecx
    X86_AT(c, 0xa3d3u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a3d4  push ebx
    X86_AT(c, 0xa3d4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a3d5  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa3d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a3dc  sub ebx, ebx
    X86_AT(c, 0xa3dcu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a3de  mov cl, 8
    X86_AT(c, 0xa3deu);
    s8(c, 1, 0x8u);
L_a3e0:
    X86_TICK(c, 10);
    // 00a3e0  shl ebx, 4
    X86_AT(c, 0xa3e0u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a3e3  test eax, 0xf0000000
    X86_AT(c, 0xa3e3u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a3e8  je 0xa3ed
    X86_AT(c, 0xa3e8u);
    if (x86_cc(c, 4)) { goto L_a3ed; }
    X86_TICK(c, 2);
    // 00a3ea  or bl, 0xf
    X86_AT(c, 0xa3eau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a3ed:
    X86_TICK(c, 10);
    // 00a3ed  shl eax, 4
    X86_AT(c, 0xa3edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a3f0  dec cl
    X86_AT(c, 0xa3f0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a3f2  jne 0xa3e0
    X86_AT(c, 0xa3f2u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa3e0u); goto L_a3e0; }
    X86_TICK(c, 42);
    // 00a3f4  mov eax, ebx
    X86_AT(c, 0xa3f4u);
    c.r[0] = c.r[3];
    // 00a3f6  pop ebx
    X86_AT(c, 0xa3f6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a3f7  pop ecx
    X86_AT(c, 0xa3f7u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a3f8  and ebx, eax
    X86_AT(c, 0xa3f8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a3fa  not ebx
    X86_AT(c, 0xa3fau);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a3fc  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa3fcu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a3ff  and edx, ebx
    X86_AT(c, 0xa3ffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a401  not ebx
    X86_AT(c, 0xa401u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a403  pop eax
    X86_AT(c, 0xa403u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a404  and eax, ebx
    X86_AT(c, 0xa404u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a406  or edx, eax
    X86_AT(c, 0xa406u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a408  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa408u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a40b  ret 
    X86_AT(c, 0xa40bu);
    c.eip = pop32(c); return;
L_a40c:
    X86_TICK(c, 7);
    // 00a40c  cmp ebx, 1
    X86_AT(c, 0xa40cu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00a40f  je 0xa524
    X86_AT(c, 0xa40fu);
    if (x86_cc(c, 4)) { goto L_a524; }
    X86_TICK(c, 42);
    // 00a415  push ebx
    X86_AT(c, 0xa415u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a416  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa416u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a419  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa419u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a41a  shld eax, ebx, cl
    X86_AT(c, 0xa41au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a41d  push eax
    X86_AT(c, 0xa41du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a41e  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa41eu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a425  and ebx, 7
    X86_AT(c, 0xa425u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a428  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa428u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a430  push ecx
    X86_AT(c, 0xa430u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a431  push ebx
    X86_AT(c, 0xa431u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a432  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa432u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a439  sub ebx, ebx
    X86_AT(c, 0xa439u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a43b  mov cl, 8
    X86_AT(c, 0xa43bu);
    s8(c, 1, 0x8u);
L_a43d:
    X86_TICK(c, 10);
    // 00a43d  shl ebx, 4
    X86_AT(c, 0xa43du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a440  test eax, 0xf0000000
    X86_AT(c, 0xa440u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a445  je 0xa44a
    X86_AT(c, 0xa445u);
    if (x86_cc(c, 4)) { goto L_a44a; }
    X86_TICK(c, 2);
    // 00a447  or bl, 0xf
    X86_AT(c, 0xa447u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a44a:
    X86_TICK(c, 10);
    // 00a44a  shl eax, 4
    X86_AT(c, 0xa44au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a44d  dec cl
    X86_AT(c, 0xa44du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a44f  jne 0xa43d
    X86_AT(c, 0xa44fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa43du); goto L_a43d; }
    X86_TICK(c, 19);
    // 00a451  mov eax, ebx
    X86_AT(c, 0xa451u);
    c.r[0] = c.r[3];
    // 00a453  pop ebx
    X86_AT(c, 0xa453u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a454  pop ecx
    X86_AT(c, 0xa454u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a455  and ebx, eax
    X86_AT(c, 0xa455u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a457  call 0x7f8c
    X86_AT(c, 0xa457u);
    push32(c, 0xa45cu); f_00007f8c(c); X86_RET(c, 0xa45cu);
    X86_TICK(c, 46);
    // 00a45c  and ebx, eax
    X86_AT(c, 0xa45cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a45e  not ebx
    X86_AT(c, 0xa45eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a460  and dword ptr es:[edi], ebx
    X86_AT(c, 0xa460u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[3], 4)); }
    // 00a463  not ebx
    X86_AT(c, 0xa463u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a465  pop eax
    X86_AT(c, 0xa465u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a466  and eax, ebx
    X86_AT(c, 0xa466u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a468  or dword ptr es:[edi], eax
    X86_AT(c, 0xa468u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 00a46b  add edi, 4
    X86_AT(c, 0xa46bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a46e  dec dword ptr [esp]
    X86_AT(c, 0xa46eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a471  cmp dword ptr [esp], 1
    X86_AT(c, 0xa471u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a475  je 0xa4c5
    X86_AT(c, 0xa475u);
    if (x86_cc(c, 4)) { goto L_a4c5; }
    X86_TICK(c, 6);
    // 00a477  dec dword ptr [esp]
    X86_AT(c, 0xa477u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a47a:
    X86_TICK(c, 30);
    // 00a47a  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa47au);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a47d  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa47du);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a47e  shld eax, ebx, cl
    X86_AT(c, 0xa47eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a481  push eax
    X86_AT(c, 0xa481u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a482  push ecx
    X86_AT(c, 0xa482u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a483  push ebx
    X86_AT(c, 0xa483u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a484  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa484u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a48b  sub ebx, ebx
    X86_AT(c, 0xa48bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a48d  mov cl, 8
    X86_AT(c, 0xa48du);
    s8(c, 1, 0x8u);
L_a48f:
    X86_TICK(c, 10);
    // 00a48f  shl ebx, 4
    X86_AT(c, 0xa48fu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a492  test eax, 0xf0000000
    X86_AT(c, 0xa492u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a497  je 0xa49c
    X86_AT(c, 0xa497u);
    if (x86_cc(c, 4)) { goto L_a49c; }
    X86_TICK(c, 2);
    // 00a499  or bl, 0xf
    X86_AT(c, 0xa499u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a49c:
    X86_TICK(c, 10);
    // 00a49c  shl eax, 4
    X86_AT(c, 0xa49cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a49f  dec cl
    X86_AT(c, 0xa49fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a4a1  jne 0xa48f
    X86_AT(c, 0xa4a1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa48fu); goto L_a48f; }
    X86_TICK(c, 19);
    // 00a4a3  mov eax, ebx
    X86_AT(c, 0xa4a3u);
    c.r[0] = c.r[3];
    // 00a4a5  pop ebx
    X86_AT(c, 0xa4a5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a4a6  pop ecx
    X86_AT(c, 0xa4a6u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a4a7  mov ebx, eax
    X86_AT(c, 0xa4a7u);
    c.r[3] = c.r[0];
    // 00a4a9  call 0x7f8c
    X86_AT(c, 0xa4a9u);
    push32(c, 0xa4aeu); f_00007f8c(c); X86_RET(c, 0xa4aeu);
    X86_TICK(c, 39);
    // 00a4ae  and ebx, eax
    X86_AT(c, 0xa4aeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a4b0  not ebx
    X86_AT(c, 0xa4b0u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a4b2  and dword ptr es:[edi], ebx
    X86_AT(c, 0xa4b2u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[3], 4)); }
    // 00a4b5  not ebx
    X86_AT(c, 0xa4b5u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a4b7  pop eax
    X86_AT(c, 0xa4b7u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a4b8  and eax, ebx
    X86_AT(c, 0xa4b8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a4ba  or dword ptr es:[edi], eax
    X86_AT(c, 0xa4bau);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 00a4bd  add edi, 4
    X86_AT(c, 0xa4bdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a4c0  dec dword ptr [esp]
    X86_AT(c, 0xa4c0u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a4c3  jne 0xa47a
    X86_AT(c, 0xa4c3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa47au); goto L_a47a; }
L_a4c5:
    X86_TICK(c, 37);
    // 00a4c5  mov eax, dword ptr [esi]
    X86_AT(c, 0xa4c5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a4c7  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa4c7u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a4ca  shld eax, ebx, cl
    X86_AT(c, 0xa4cau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a4cd  push eax
    X86_AT(c, 0xa4cdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a4ce  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa4ceu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a4d5  and ebx, 7
    X86_AT(c, 0xa4d5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a4d8  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa4d8u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a4e0  push ecx
    X86_AT(c, 0xa4e0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a4e1  push ebx
    X86_AT(c, 0xa4e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a4e2  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa4e2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a4e9  sub ebx, ebx
    X86_AT(c, 0xa4e9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a4eb  mov cl, 8
    X86_AT(c, 0xa4ebu);
    s8(c, 1, 0x8u);
L_a4ed:
    X86_TICK(c, 10);
    // 00a4ed  shl ebx, 4
    X86_AT(c, 0xa4edu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a4f0  test eax, 0xf0000000
    X86_AT(c, 0xa4f0u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a4f5  je 0xa4fa
    X86_AT(c, 0xa4f5u);
    if (x86_cc(c, 4)) { goto L_a4fa; }
    X86_TICK(c, 2);
    // 00a4f7  or bl, 0xf
    X86_AT(c, 0xa4f7u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a4fa:
    X86_TICK(c, 10);
    // 00a4fa  shl eax, 4
    X86_AT(c, 0xa4fau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a4fd  dec cl
    X86_AT(c, 0xa4fdu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a4ff  jne 0xa4ed
    X86_AT(c, 0xa4ffu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa4edu); goto L_a4ed; }
    X86_TICK(c, 19);
    // 00a501  mov eax, ebx
    X86_AT(c, 0xa501u);
    c.r[0] = c.r[3];
    // 00a503  pop ebx
    X86_AT(c, 0xa503u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a504  pop ecx
    X86_AT(c, 0xa504u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a505  and ebx, eax
    X86_AT(c, 0xa505u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a507  call 0x7f8c
    X86_AT(c, 0xa507u);
    push32(c, 0xa50cu); f_00007f8c(c); X86_RET(c, 0xa50cu);
    X86_TICK(c, 36);
    // 00a50c  and ebx, eax
    X86_AT(c, 0xa50cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a50e  not ebx
    X86_AT(c, 0xa50eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a510  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa510u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a513  and edx, ebx
    X86_AT(c, 0xa513u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a515  not ebx
    X86_AT(c, 0xa515u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a517  pop eax
    X86_AT(c, 0xa517u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a518  and eax, ebx
    X86_AT(c, 0xa518u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a51a  or edx, eax
    X86_AT(c, 0xa51au);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a51c  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa51cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a51f  pop ebx
    X86_AT(c, 0xa51fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a520  ret 
    X86_AT(c, 0xa520u);
    c.eip = pop32(c); return;
L_a524:
    X86_TICK(c, 55);
    // 00a524  mov eax, dword ptr [esi]
    X86_AT(c, 0xa524u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a526  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa526u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a529  shld eax, ebx, cl
    X86_AT(c, 0xa529u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a52c  push eax
    X86_AT(c, 0xa52cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a52d  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa52du);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a534  and eax, 7
    X86_AT(c, 0xa534u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a539  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0xa539u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 00a541  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa541u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a548  and eax, 7
    X86_AT(c, 0xa548u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a54d  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0xa54du);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 00a555  pop eax
    X86_AT(c, 0xa555u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a556  push eax
    X86_AT(c, 0xa556u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a557  push ecx
    X86_AT(c, 0xa557u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a558  push ebx
    X86_AT(c, 0xa558u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a559  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa559u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a560  sub ebx, ebx
    X86_AT(c, 0xa560u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a562  mov cl, 8
    X86_AT(c, 0xa562u);
    s8(c, 1, 0x8u);
L_a564:
    X86_TICK(c, 10);
    // 00a564  shl ebx, 4
    X86_AT(c, 0xa564u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a567  test eax, 0xf0000000
    X86_AT(c, 0xa567u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a56c  je 0xa571
    X86_AT(c, 0xa56cu);
    if (x86_cc(c, 4)) { goto L_a571; }
    X86_TICK(c, 2);
    // 00a56e  or bl, 0xf
    X86_AT(c, 0xa56eu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a571:
    X86_TICK(c, 10);
    // 00a571  shl eax, 4
    X86_AT(c, 0xa571u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a574  dec cl
    X86_AT(c, 0xa574u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a576  jne 0xa564
    X86_AT(c, 0xa576u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa564u); goto L_a564; }
    X86_TICK(c, 19);
    // 00a578  mov eax, ebx
    X86_AT(c, 0xa578u);
    c.r[0] = c.r[3];
    // 00a57a  pop ebx
    X86_AT(c, 0xa57au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a57b  pop ecx
    X86_AT(c, 0xa57bu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a57c  and ebx, eax
    X86_AT(c, 0xa57cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a57e  call 0x7f8c
    X86_AT(c, 0xa57eu);
    push32(c, 0xa583u); f_00007f8c(c); X86_RET(c, 0xa583u);
    X86_TICK(c, 32);
    // 00a583  and ebx, eax
    X86_AT(c, 0xa583u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a585  not ebx
    X86_AT(c, 0xa585u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a587  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa587u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a58a  and edx, ebx
    X86_AT(c, 0xa58au);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a58c  not ebx
    X86_AT(c, 0xa58cu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a58e  pop eax
    X86_AT(c, 0xa58eu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a58f  and eax, ebx
    X86_AT(c, 0xa58fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a591  or edx, eax
    X86_AT(c, 0xa591u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a593  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa593u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a596  ret 
    X86_AT(c, 0xa596u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x99d7u, "ran off the end of a function");
}
}
