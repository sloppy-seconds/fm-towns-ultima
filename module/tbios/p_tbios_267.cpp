#include "p_tbios_funcs.h"
namespace p_tbios {
void f_0000f9cc(X86Cpu& c) {
    goto L_f9cc;
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 71);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
L_f9cc:
    X86_TICK(c, 11);
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf9ccu, "ran off the end of a function");
}
void f_0000f9d4(X86Cpu& c) {
    goto L_f9d4;
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 73);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
L_f9d4:
    X86_TICK(c, 9);
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf9d4u, "ran off the end of a function");
}
void f_0000f9dc(X86Cpu& c) {
    goto L_f9dc;
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 75);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
L_f9dc:
    X86_TICK(c, 7);
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf9dcu, "ran off the end of a function");
}
void f_0000f9e1(X86Cpu& c) {
    goto L_f9e1;
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
L_f9e1:
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf9e1u, "ran off the end of a function");
}
void f_0000f9e2(X86Cpu& c) {
    goto L_f9e2;
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 4);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_f9e2:
    X86_TICK(c, 11);
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf9e2u, "ran off the end of a function");
}
void f_0000f9e3(X86Cpu& c) {
    goto L_f9e3;
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 8);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_f9e3:
    X86_TICK(c, 7);
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf9e3u, "ran off the end of a function");
}
void f_0000f9e5(X86Cpu& c) {
    goto L_f9e5;
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 10);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
L_f9e5:
    X86_TICK(c, 5);
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf9e5u, "ran off the end of a function");
}
void f_0000f9e7(X86Cpu& c) {
    goto L_f9e7;
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
L_f9e7:
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf9e7u, "ran off the end of a function");
}
void f_0000f9e9(X86Cpu& c) {
    goto L_f9e9;
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 3);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
L_f9e9:
    X86_TICK(c, 5);
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf9e9u, "ran off the end of a function");
}
void f_0000f9eb(X86Cpu& c) {
    goto L_f9eb;
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
L_f9eb:
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf9ebu, "ran off the end of a function");
}
void f_0000f9ed(X86Cpu& c) {
    goto L_f9ed;
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf9edu, "ran off the end of a function");
}
void f_0000f9f5(X86Cpu& c) {
    goto L_f9f5;
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 7);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
L_f9f5:
    X86_TICK(c, 5);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf9f5u, "ran off the end of a function");
}
void f_0000f9fb(X86Cpu& c) {
    goto L_f9fb;
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf9fbu, "ran off the end of a function");
}
void f_0000fa03(X86Cpu& c) {
    goto L_fa03;
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 4);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
L_fa03:
    X86_TICK(c, 9);
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xfa03u, "ran off the end of a function");
}
void f_0000fa0b(X86Cpu& c) {
    goto L_fa0b;
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 6);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
L_fa0b:
    X86_TICK(c, 7);
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xfa0bu, "ran off the end of a function");
}
void f_0000fa0d(X86Cpu& c) {
    goto L_fa0d;
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 8);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
L_fa0d:
    X86_TICK(c, 5);
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xfa0du, "ran off the end of a function");
}
void f_0000fa13(X86Cpu& c) {
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa13u, "ran off the end of a function");
}
void f_0000fa16(X86Cpu& c) {
    X86_TICK(c, 23);
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa16u, "ran off the end of a function");
}
void f_0000fa1e(X86Cpu& c) {
    X86_TICK(c, 18);
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa1eu, "ran off the end of a function");
}
void f_0000fa1f(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa1fu, "ran off the end of a function");
}
void f_0000fa20(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa20u, "ran off the end of a function");
}
void f_0000fa24(X86Cpu& c) {
    X86_TICK(c, 54);
    // 00fa24  mov eax, dword ptr gs:[ebp + 0x37c]
    X86_AT(c, 0xfa24u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)));
    // 00fa2b  mov ebx, dword ptr gs:[ebp + 0x35c]
    X86_AT(c, 0xfa2bu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)));
    // 00fa32  mov ecx, dword ptr gs:[ebp + 0x36c]
    X86_AT(c, 0xfa32u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)));
    // 00fa39  mov dword ptr gs:[ebp + 0x1c4], ebx
    X86_AT(c, 0xfa39u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[3]);
    // 00fa40  add ax, bx
    X86_AT(c, 0xfa40u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fa43  dec ax
    X86_AT(c, 0xfa43u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00fa45  mov word ptr gs:[ebp + 0x1c8], ax
    X86_AT(c, 0xfa45u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[0] & 0xFFFFu));
    // 00fa4d  add bx, cx
    X86_AT(c, 0xfa4du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00fa50  mov word ptr gs:[ebp + 0x35c], bx
    X86_AT(c, 0xfa50u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[3] & 0xFFFFu));
    // 00fa58  shr eax, 0x10
    X86_AT(c, 0xfa58u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00fa5b  shr ebx, 0x10
    X86_AT(c, 0xfa5bu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00fa5e  rol ecx, 0x10
    X86_AT(c, 0xfa5eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00fa61  add ax, bx
    X86_AT(c, 0xfa61u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fa64  dec ax
    X86_AT(c, 0xfa64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00fa66  mov word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0xfa66u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[0] & 0xFFFFu));
    // 00fa6e  add bx, cx
    X86_AT(c, 0xfa6eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00fa71  mov word ptr gs:[ebp + 0x360], bx
    X86_AT(c, 0xfa71u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[3] & 0xFFFFu));
    // 00fa79  mov dl, byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xfa79u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u))));
    // 00fa80  test ecx, 0xffff0000
    X86_AT(c, 0xfa80u);
    (void)x86_logic(c, c.r[1] & 0xFFFF0000u, 4);
    // 00fa86  je 0xfaa2
    X86_AT(c, 0xfa86u);
    if (x86_cc(c, 4)) { goto L_faa2; }
L_fa88:
    X86_TICK(c, 7);
    // 00fa88  test cx, cx
    X86_AT(c, 0xfa88u);
    (void)x86_logic(c, (c.r[1] & 0xFFFFu) & (c.r[1] & 0xFFFFu), 2);
    // 00fa8b  je 0xfab0
    X86_AT(c, 0xfa8bu);
    if (x86_cc(c, 4)) { goto L_fab0; }
L_fa8d:
    X86_TICK(c, 12);
    // 00fa8d  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfa8du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fa95  jne 0xfa9b
    X86_AT(c, 0xfa95u);
    if (x86_cc(c, 5)) { goto L_fa9b; }
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
L_fa9b:
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_faa2:
    X86_TICK(c, 7);
    // 00faa2  test dl, dl
    X86_AT(c, 0xfaa2u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00faa4  je 0xfabe
    X86_AT(c, 0xfaa4u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00faa6  inc word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0xfaa6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00faae  jmp 0xfa88
    X86_AT(c, 0xfaaeu);
    X86_POLL(c, 0xfa88u); goto L_fa88;
L_fab0:
    X86_TICK(c, 7);
    // 00fab0  test dl, dl
    X86_AT(c, 0xfab0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fab2  je 0xfabe
    X86_AT(c, 0xfab2u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00fab4  inc word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0xfab4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fabc  jmp 0xfa8d
    X86_AT(c, 0xfabcu);
    X86_POLL(c, 0xfa8du); goto L_fa8d;
L_fabe:
    X86_TICK(c, 6);
    // 00fabe  mov ax, word ptr gs:[ebp + 0x35e]
    X86_AT(c, 0xfabeu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu))));
    // 00fac6  mov word ptr gs:[ebp + 0x360], ax
    X86_AT(c, 0xfac6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[0] & 0xFFFFu));
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa24u, "ran off the end of a function");
}
void f_0000fa2b(X86Cpu& c) {
    X86_TICK(c, 50);
    // 00fa2b  mov ebx, dword ptr gs:[ebp + 0x35c]
    X86_AT(c, 0xfa2bu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)));
    // 00fa32  mov ecx, dword ptr gs:[ebp + 0x36c]
    X86_AT(c, 0xfa32u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)));
    // 00fa39  mov dword ptr gs:[ebp + 0x1c4], ebx
    X86_AT(c, 0xfa39u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[3]);
    // 00fa40  add ax, bx
    X86_AT(c, 0xfa40u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fa43  dec ax
    X86_AT(c, 0xfa43u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00fa45  mov word ptr gs:[ebp + 0x1c8], ax
    X86_AT(c, 0xfa45u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[0] & 0xFFFFu));
    // 00fa4d  add bx, cx
    X86_AT(c, 0xfa4du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00fa50  mov word ptr gs:[ebp + 0x35c], bx
    X86_AT(c, 0xfa50u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[3] & 0xFFFFu));
    // 00fa58  shr eax, 0x10
    X86_AT(c, 0xfa58u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00fa5b  shr ebx, 0x10
    X86_AT(c, 0xfa5bu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00fa5e  rol ecx, 0x10
    X86_AT(c, 0xfa5eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00fa61  add ax, bx
    X86_AT(c, 0xfa61u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fa64  dec ax
    X86_AT(c, 0xfa64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00fa66  mov word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0xfa66u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[0] & 0xFFFFu));
    // 00fa6e  add bx, cx
    X86_AT(c, 0xfa6eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00fa71  mov word ptr gs:[ebp + 0x360], bx
    X86_AT(c, 0xfa71u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[3] & 0xFFFFu));
    // 00fa79  mov dl, byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xfa79u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u))));
    // 00fa80  test ecx, 0xffff0000
    X86_AT(c, 0xfa80u);
    (void)x86_logic(c, c.r[1] & 0xFFFF0000u, 4);
    // 00fa86  je 0xfaa2
    X86_AT(c, 0xfa86u);
    if (x86_cc(c, 4)) { goto L_faa2; }
L_fa88:
    X86_TICK(c, 7);
    // 00fa88  test cx, cx
    X86_AT(c, 0xfa88u);
    (void)x86_logic(c, (c.r[1] & 0xFFFFu) & (c.r[1] & 0xFFFFu), 2);
    // 00fa8b  je 0xfab0
    X86_AT(c, 0xfa8bu);
    if (x86_cc(c, 4)) { goto L_fab0; }
L_fa8d:
    X86_TICK(c, 12);
    // 00fa8d  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfa8du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fa95  jne 0xfa9b
    X86_AT(c, 0xfa95u);
    if (x86_cc(c, 5)) { goto L_fa9b; }
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
L_fa9b:
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_faa2:
    X86_TICK(c, 7);
    // 00faa2  test dl, dl
    X86_AT(c, 0xfaa2u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00faa4  je 0xfabe
    X86_AT(c, 0xfaa4u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00faa6  inc word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0xfaa6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00faae  jmp 0xfa88
    X86_AT(c, 0xfaaeu);
    X86_POLL(c, 0xfa88u); goto L_fa88;
L_fab0:
    X86_TICK(c, 7);
    // 00fab0  test dl, dl
    X86_AT(c, 0xfab0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fab2  je 0xfabe
    X86_AT(c, 0xfab2u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00fab4  inc word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0xfab4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fabc  jmp 0xfa8d
    X86_AT(c, 0xfabcu);
    X86_POLL(c, 0xfa8du); goto L_fa8d;
L_fabe:
    X86_TICK(c, 6);
    // 00fabe  mov ax, word ptr gs:[ebp + 0x35e]
    X86_AT(c, 0xfabeu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu))));
    // 00fac6  mov word ptr gs:[ebp + 0x360], ax
    X86_AT(c, 0xfac6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[0] & 0xFFFFu));
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa2bu, "ran off the end of a function");
}
void f_0000fa32(X86Cpu& c) {
    X86_TICK(c, 46);
    // 00fa32  mov ecx, dword ptr gs:[ebp + 0x36c]
    X86_AT(c, 0xfa32u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)));
    // 00fa39  mov dword ptr gs:[ebp + 0x1c4], ebx
    X86_AT(c, 0xfa39u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[3]);
    // 00fa40  add ax, bx
    X86_AT(c, 0xfa40u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fa43  dec ax
    X86_AT(c, 0xfa43u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00fa45  mov word ptr gs:[ebp + 0x1c8], ax
    X86_AT(c, 0xfa45u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[0] & 0xFFFFu));
    // 00fa4d  add bx, cx
    X86_AT(c, 0xfa4du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00fa50  mov word ptr gs:[ebp + 0x35c], bx
    X86_AT(c, 0xfa50u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[3] & 0xFFFFu));
    // 00fa58  shr eax, 0x10
    X86_AT(c, 0xfa58u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00fa5b  shr ebx, 0x10
    X86_AT(c, 0xfa5bu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00fa5e  rol ecx, 0x10
    X86_AT(c, 0xfa5eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00fa61  add ax, bx
    X86_AT(c, 0xfa61u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fa64  dec ax
    X86_AT(c, 0xfa64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00fa66  mov word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0xfa66u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[0] & 0xFFFFu));
    // 00fa6e  add bx, cx
    X86_AT(c, 0xfa6eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00fa71  mov word ptr gs:[ebp + 0x360], bx
    X86_AT(c, 0xfa71u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[3] & 0xFFFFu));
    // 00fa79  mov dl, byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xfa79u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u))));
    // 00fa80  test ecx, 0xffff0000
    X86_AT(c, 0xfa80u);
    (void)x86_logic(c, c.r[1] & 0xFFFF0000u, 4);
    // 00fa86  je 0xfaa2
    X86_AT(c, 0xfa86u);
    if (x86_cc(c, 4)) { goto L_faa2; }
L_fa88:
    X86_TICK(c, 7);
    // 00fa88  test cx, cx
    X86_AT(c, 0xfa88u);
    (void)x86_logic(c, (c.r[1] & 0xFFFFu) & (c.r[1] & 0xFFFFu), 2);
    // 00fa8b  je 0xfab0
    X86_AT(c, 0xfa8bu);
    if (x86_cc(c, 4)) { goto L_fab0; }
L_fa8d:
    X86_TICK(c, 12);
    // 00fa8d  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfa8du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fa95  jne 0xfa9b
    X86_AT(c, 0xfa95u);
    if (x86_cc(c, 5)) { goto L_fa9b; }
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
L_fa9b:
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_faa2:
    X86_TICK(c, 7);
    // 00faa2  test dl, dl
    X86_AT(c, 0xfaa2u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00faa4  je 0xfabe
    X86_AT(c, 0xfaa4u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00faa6  inc word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0xfaa6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00faae  jmp 0xfa88
    X86_AT(c, 0xfaaeu);
    X86_POLL(c, 0xfa88u); goto L_fa88;
L_fab0:
    X86_TICK(c, 7);
    // 00fab0  test dl, dl
    X86_AT(c, 0xfab0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fab2  je 0xfabe
    X86_AT(c, 0xfab2u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00fab4  inc word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0xfab4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fabc  jmp 0xfa8d
    X86_AT(c, 0xfabcu);
    X86_POLL(c, 0xfa8du); goto L_fa8d;
L_fabe:
    X86_TICK(c, 6);
    // 00fabe  mov ax, word ptr gs:[ebp + 0x35e]
    X86_AT(c, 0xfabeu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu))));
    // 00fac6  mov word ptr gs:[ebp + 0x360], ax
    X86_AT(c, 0xfac6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[0] & 0xFFFFu));
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa32u, "ran off the end of a function");
}
void f_0000fa39(X86Cpu& c) {
    X86_TICK(c, 42);
    // 00fa39  mov dword ptr gs:[ebp + 0x1c4], ebx
    X86_AT(c, 0xfa39u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)), c.r[3]);
    // 00fa40  add ax, bx
    X86_AT(c, 0xfa40u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fa43  dec ax
    X86_AT(c, 0xfa43u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00fa45  mov word ptr gs:[ebp + 0x1c8], ax
    X86_AT(c, 0xfa45u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[0] & 0xFFFFu));
    // 00fa4d  add bx, cx
    X86_AT(c, 0xfa4du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00fa50  mov word ptr gs:[ebp + 0x35c], bx
    X86_AT(c, 0xfa50u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[3] & 0xFFFFu));
    // 00fa58  shr eax, 0x10
    X86_AT(c, 0xfa58u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00fa5b  shr ebx, 0x10
    X86_AT(c, 0xfa5bu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00fa5e  rol ecx, 0x10
    X86_AT(c, 0xfa5eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00fa61  add ax, bx
    X86_AT(c, 0xfa61u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fa64  dec ax
    X86_AT(c, 0xfa64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00fa66  mov word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0xfa66u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[0] & 0xFFFFu));
    // 00fa6e  add bx, cx
    X86_AT(c, 0xfa6eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00fa71  mov word ptr gs:[ebp + 0x360], bx
    X86_AT(c, 0xfa71u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[3] & 0xFFFFu));
    // 00fa79  mov dl, byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xfa79u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u))));
    // 00fa80  test ecx, 0xffff0000
    X86_AT(c, 0xfa80u);
    (void)x86_logic(c, c.r[1] & 0xFFFF0000u, 4);
    // 00fa86  je 0xfaa2
    X86_AT(c, 0xfa86u);
    if (x86_cc(c, 4)) { goto L_faa2; }
L_fa88:
    X86_TICK(c, 7);
    // 00fa88  test cx, cx
    X86_AT(c, 0xfa88u);
    (void)x86_logic(c, (c.r[1] & 0xFFFFu) & (c.r[1] & 0xFFFFu), 2);
    // 00fa8b  je 0xfab0
    X86_AT(c, 0xfa8bu);
    if (x86_cc(c, 4)) { goto L_fab0; }
L_fa8d:
    X86_TICK(c, 12);
    // 00fa8d  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfa8du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fa95  jne 0xfa9b
    X86_AT(c, 0xfa95u);
    if (x86_cc(c, 5)) { goto L_fa9b; }
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
L_fa9b:
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_faa2:
    X86_TICK(c, 7);
    // 00faa2  test dl, dl
    X86_AT(c, 0xfaa2u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00faa4  je 0xfabe
    X86_AT(c, 0xfaa4u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00faa6  inc word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0xfaa6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00faae  jmp 0xfa88
    X86_AT(c, 0xfaaeu);
    X86_POLL(c, 0xfa88u); goto L_fa88;
L_fab0:
    X86_TICK(c, 7);
    // 00fab0  test dl, dl
    X86_AT(c, 0xfab0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fab2  je 0xfabe
    X86_AT(c, 0xfab2u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00fab4  inc word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0xfab4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fabc  jmp 0xfa8d
    X86_AT(c, 0xfabcu);
    X86_POLL(c, 0xfa8du); goto L_fa8d;
L_fabe:
    X86_TICK(c, 6);
    // 00fabe  mov ax, word ptr gs:[ebp + 0x35e]
    X86_AT(c, 0xfabeu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu))));
    // 00fac6  mov word ptr gs:[ebp + 0x360], ax
    X86_AT(c, 0xfac6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[0] & 0xFFFFu));
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa39u, "ran off the end of a function");
}
void f_0000fa40(X86Cpu& c) {
    X86_TICK(c, 40);
    // 00fa40  add ax, bx
    X86_AT(c, 0xfa40u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fa43  dec ax
    X86_AT(c, 0xfa43u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00fa45  mov word ptr gs:[ebp + 0x1c8], ax
    X86_AT(c, 0xfa45u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[0] & 0xFFFFu));
    // 00fa4d  add bx, cx
    X86_AT(c, 0xfa4du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00fa50  mov word ptr gs:[ebp + 0x35c], bx
    X86_AT(c, 0xfa50u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[3] & 0xFFFFu));
    // 00fa58  shr eax, 0x10
    X86_AT(c, 0xfa58u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00fa5b  shr ebx, 0x10
    X86_AT(c, 0xfa5bu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00fa5e  rol ecx, 0x10
    X86_AT(c, 0xfa5eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00fa61  add ax, bx
    X86_AT(c, 0xfa61u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fa64  dec ax
    X86_AT(c, 0xfa64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00fa66  mov word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0xfa66u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[0] & 0xFFFFu));
    // 00fa6e  add bx, cx
    X86_AT(c, 0xfa6eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00fa71  mov word ptr gs:[ebp + 0x360], bx
    X86_AT(c, 0xfa71u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[3] & 0xFFFFu));
    // 00fa79  mov dl, byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xfa79u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u))));
    // 00fa80  test ecx, 0xffff0000
    X86_AT(c, 0xfa80u);
    (void)x86_logic(c, c.r[1] & 0xFFFF0000u, 4);
    // 00fa86  je 0xfaa2
    X86_AT(c, 0xfa86u);
    if (x86_cc(c, 4)) { goto L_faa2; }
L_fa88:
    X86_TICK(c, 7);
    // 00fa88  test cx, cx
    X86_AT(c, 0xfa88u);
    (void)x86_logic(c, (c.r[1] & 0xFFFFu) & (c.r[1] & 0xFFFFu), 2);
    // 00fa8b  je 0xfab0
    X86_AT(c, 0xfa8bu);
    if (x86_cc(c, 4)) { goto L_fab0; }
L_fa8d:
    X86_TICK(c, 12);
    // 00fa8d  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfa8du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fa95  jne 0xfa9b
    X86_AT(c, 0xfa95u);
    if (x86_cc(c, 5)) { goto L_fa9b; }
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
L_fa9b:
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_faa2:
    X86_TICK(c, 7);
    // 00faa2  test dl, dl
    X86_AT(c, 0xfaa2u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00faa4  je 0xfabe
    X86_AT(c, 0xfaa4u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00faa6  inc word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0xfaa6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00faae  jmp 0xfa88
    X86_AT(c, 0xfaaeu);
    X86_POLL(c, 0xfa88u); goto L_fa88;
L_fab0:
    X86_TICK(c, 7);
    // 00fab0  test dl, dl
    X86_AT(c, 0xfab0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fab2  je 0xfabe
    X86_AT(c, 0xfab2u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00fab4  inc word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0xfab4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fabc  jmp 0xfa8d
    X86_AT(c, 0xfabcu);
    X86_POLL(c, 0xfa8du); goto L_fa8d;
L_fabe:
    X86_TICK(c, 6);
    // 00fabe  mov ax, word ptr gs:[ebp + 0x35e]
    X86_AT(c, 0xfabeu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu))));
    // 00fac6  mov word ptr gs:[ebp + 0x360], ax
    X86_AT(c, 0xfac6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[0] & 0xFFFFu));
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa40u, "ran off the end of a function");
}
void f_0000fa43(X86Cpu& c) {
    X86_TICK(c, 38);
    // 00fa43  dec ax
    X86_AT(c, 0xfa43u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00fa45  mov word ptr gs:[ebp + 0x1c8], ax
    X86_AT(c, 0xfa45u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[0] & 0xFFFFu));
    // 00fa4d  add bx, cx
    X86_AT(c, 0xfa4du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00fa50  mov word ptr gs:[ebp + 0x35c], bx
    X86_AT(c, 0xfa50u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[3] & 0xFFFFu));
    // 00fa58  shr eax, 0x10
    X86_AT(c, 0xfa58u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00fa5b  shr ebx, 0x10
    X86_AT(c, 0xfa5bu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00fa5e  rol ecx, 0x10
    X86_AT(c, 0xfa5eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00fa61  add ax, bx
    X86_AT(c, 0xfa61u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fa64  dec ax
    X86_AT(c, 0xfa64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00fa66  mov word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0xfa66u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[0] & 0xFFFFu));
    // 00fa6e  add bx, cx
    X86_AT(c, 0xfa6eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00fa71  mov word ptr gs:[ebp + 0x360], bx
    X86_AT(c, 0xfa71u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[3] & 0xFFFFu));
    // 00fa79  mov dl, byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xfa79u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u))));
    // 00fa80  test ecx, 0xffff0000
    X86_AT(c, 0xfa80u);
    (void)x86_logic(c, c.r[1] & 0xFFFF0000u, 4);
    // 00fa86  je 0xfaa2
    X86_AT(c, 0xfa86u);
    if (x86_cc(c, 4)) { goto L_faa2; }
L_fa88:
    X86_TICK(c, 7);
    // 00fa88  test cx, cx
    X86_AT(c, 0xfa88u);
    (void)x86_logic(c, (c.r[1] & 0xFFFFu) & (c.r[1] & 0xFFFFu), 2);
    // 00fa8b  je 0xfab0
    X86_AT(c, 0xfa8bu);
    if (x86_cc(c, 4)) { goto L_fab0; }
L_fa8d:
    X86_TICK(c, 12);
    // 00fa8d  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfa8du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fa95  jne 0xfa9b
    X86_AT(c, 0xfa95u);
    if (x86_cc(c, 5)) { goto L_fa9b; }
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
L_fa9b:
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_faa2:
    X86_TICK(c, 7);
    // 00faa2  test dl, dl
    X86_AT(c, 0xfaa2u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00faa4  je 0xfabe
    X86_AT(c, 0xfaa4u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00faa6  inc word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0xfaa6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00faae  jmp 0xfa88
    X86_AT(c, 0xfaaeu);
    X86_POLL(c, 0xfa88u); goto L_fa88;
L_fab0:
    X86_TICK(c, 7);
    // 00fab0  test dl, dl
    X86_AT(c, 0xfab0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fab2  je 0xfabe
    X86_AT(c, 0xfab2u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00fab4  inc word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0xfab4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fabc  jmp 0xfa8d
    X86_AT(c, 0xfabcu);
    X86_POLL(c, 0xfa8du); goto L_fa8d;
L_fabe:
    X86_TICK(c, 6);
    // 00fabe  mov ax, word ptr gs:[ebp + 0x35e]
    X86_AT(c, 0xfabeu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu))));
    // 00fac6  mov word ptr gs:[ebp + 0x360], ax
    X86_AT(c, 0xfac6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[0] & 0xFFFFu));
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa43u, "ran off the end of a function");
}
void f_0000fa45(X86Cpu& c) {
    X86_TICK(c, 36);
    // 00fa45  mov word ptr gs:[ebp + 0x1c8], ax
    X86_AT(c, 0xfa45u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)), (c.r[0] & 0xFFFFu));
    // 00fa4d  add bx, cx
    X86_AT(c, 0xfa4du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00fa50  mov word ptr gs:[ebp + 0x35c], bx
    X86_AT(c, 0xfa50u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[3] & 0xFFFFu));
    // 00fa58  shr eax, 0x10
    X86_AT(c, 0xfa58u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00fa5b  shr ebx, 0x10
    X86_AT(c, 0xfa5bu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00fa5e  rol ecx, 0x10
    X86_AT(c, 0xfa5eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00fa61  add ax, bx
    X86_AT(c, 0xfa61u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fa64  dec ax
    X86_AT(c, 0xfa64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00fa66  mov word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0xfa66u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[0] & 0xFFFFu));
    // 00fa6e  add bx, cx
    X86_AT(c, 0xfa6eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00fa71  mov word ptr gs:[ebp + 0x360], bx
    X86_AT(c, 0xfa71u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[3] & 0xFFFFu));
    // 00fa79  mov dl, byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xfa79u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u))));
    // 00fa80  test ecx, 0xffff0000
    X86_AT(c, 0xfa80u);
    (void)x86_logic(c, c.r[1] & 0xFFFF0000u, 4);
    // 00fa86  je 0xfaa2
    X86_AT(c, 0xfa86u);
    if (x86_cc(c, 4)) { goto L_faa2; }
L_fa88:
    X86_TICK(c, 7);
    // 00fa88  test cx, cx
    X86_AT(c, 0xfa88u);
    (void)x86_logic(c, (c.r[1] & 0xFFFFu) & (c.r[1] & 0xFFFFu), 2);
    // 00fa8b  je 0xfab0
    X86_AT(c, 0xfa8bu);
    if (x86_cc(c, 4)) { goto L_fab0; }
L_fa8d:
    X86_TICK(c, 12);
    // 00fa8d  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfa8du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fa95  jne 0xfa9b
    X86_AT(c, 0xfa95u);
    if (x86_cc(c, 5)) { goto L_fa9b; }
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
L_fa9b:
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_faa2:
    X86_TICK(c, 7);
    // 00faa2  test dl, dl
    X86_AT(c, 0xfaa2u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00faa4  je 0xfabe
    X86_AT(c, 0xfaa4u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00faa6  inc word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0xfaa6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00faae  jmp 0xfa88
    X86_AT(c, 0xfaaeu);
    X86_POLL(c, 0xfa88u); goto L_fa88;
L_fab0:
    X86_TICK(c, 7);
    // 00fab0  test dl, dl
    X86_AT(c, 0xfab0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fab2  je 0xfabe
    X86_AT(c, 0xfab2u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00fab4  inc word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0xfab4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fabc  jmp 0xfa8d
    X86_AT(c, 0xfabcu);
    X86_POLL(c, 0xfa8du); goto L_fa8d;
L_fabe:
    X86_TICK(c, 6);
    // 00fabe  mov ax, word ptr gs:[ebp + 0x35e]
    X86_AT(c, 0xfabeu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu))));
    // 00fac6  mov word ptr gs:[ebp + 0x360], ax
    X86_AT(c, 0xfac6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[0] & 0xFFFFu));
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa45u, "ran off the end of a function");
}
void f_0000fa4d(X86Cpu& c) {
    X86_TICK(c, 34);
    // 00fa4d  add bx, cx
    X86_AT(c, 0xfa4du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00fa50  mov word ptr gs:[ebp + 0x35c], bx
    X86_AT(c, 0xfa50u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[3] & 0xFFFFu));
    // 00fa58  shr eax, 0x10
    X86_AT(c, 0xfa58u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00fa5b  shr ebx, 0x10
    X86_AT(c, 0xfa5bu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00fa5e  rol ecx, 0x10
    X86_AT(c, 0xfa5eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00fa61  add ax, bx
    X86_AT(c, 0xfa61u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fa64  dec ax
    X86_AT(c, 0xfa64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00fa66  mov word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0xfa66u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[0] & 0xFFFFu));
    // 00fa6e  add bx, cx
    X86_AT(c, 0xfa6eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00fa71  mov word ptr gs:[ebp + 0x360], bx
    X86_AT(c, 0xfa71u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[3] & 0xFFFFu));
    // 00fa79  mov dl, byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xfa79u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u))));
    // 00fa80  test ecx, 0xffff0000
    X86_AT(c, 0xfa80u);
    (void)x86_logic(c, c.r[1] & 0xFFFF0000u, 4);
    // 00fa86  je 0xfaa2
    X86_AT(c, 0xfa86u);
    if (x86_cc(c, 4)) { goto L_faa2; }
L_fa88:
    X86_TICK(c, 7);
    // 00fa88  test cx, cx
    X86_AT(c, 0xfa88u);
    (void)x86_logic(c, (c.r[1] & 0xFFFFu) & (c.r[1] & 0xFFFFu), 2);
    // 00fa8b  je 0xfab0
    X86_AT(c, 0xfa8bu);
    if (x86_cc(c, 4)) { goto L_fab0; }
L_fa8d:
    X86_TICK(c, 12);
    // 00fa8d  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfa8du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fa95  jne 0xfa9b
    X86_AT(c, 0xfa95u);
    if (x86_cc(c, 5)) { goto L_fa9b; }
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
L_fa9b:
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_faa2:
    X86_TICK(c, 7);
    // 00faa2  test dl, dl
    X86_AT(c, 0xfaa2u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00faa4  je 0xfabe
    X86_AT(c, 0xfaa4u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00faa6  inc word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0xfaa6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00faae  jmp 0xfa88
    X86_AT(c, 0xfaaeu);
    X86_POLL(c, 0xfa88u); goto L_fa88;
L_fab0:
    X86_TICK(c, 7);
    // 00fab0  test dl, dl
    X86_AT(c, 0xfab0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fab2  je 0xfabe
    X86_AT(c, 0xfab2u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00fab4  inc word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0xfab4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fabc  jmp 0xfa8d
    X86_AT(c, 0xfabcu);
    X86_POLL(c, 0xfa8du); goto L_fa8d;
L_fabe:
    X86_TICK(c, 6);
    // 00fabe  mov ax, word ptr gs:[ebp + 0x35e]
    X86_AT(c, 0xfabeu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu))));
    // 00fac6  mov word ptr gs:[ebp + 0x360], ax
    X86_AT(c, 0xfac6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[0] & 0xFFFFu));
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa4du, "ran off the end of a function");
}
void f_0000fa50(X86Cpu& c) {
    X86_TICK(c, 32);
    // 00fa50  mov word ptr gs:[ebp + 0x35c], bx
    X86_AT(c, 0xfa50u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[3] & 0xFFFFu));
    // 00fa58  shr eax, 0x10
    X86_AT(c, 0xfa58u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00fa5b  shr ebx, 0x10
    X86_AT(c, 0xfa5bu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00fa5e  rol ecx, 0x10
    X86_AT(c, 0xfa5eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00fa61  add ax, bx
    X86_AT(c, 0xfa61u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fa64  dec ax
    X86_AT(c, 0xfa64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00fa66  mov word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0xfa66u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[0] & 0xFFFFu));
    // 00fa6e  add bx, cx
    X86_AT(c, 0xfa6eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00fa71  mov word ptr gs:[ebp + 0x360], bx
    X86_AT(c, 0xfa71u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[3] & 0xFFFFu));
    // 00fa79  mov dl, byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xfa79u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u))));
    // 00fa80  test ecx, 0xffff0000
    X86_AT(c, 0xfa80u);
    (void)x86_logic(c, c.r[1] & 0xFFFF0000u, 4);
    // 00fa86  je 0xfaa2
    X86_AT(c, 0xfa86u);
    if (x86_cc(c, 4)) { goto L_faa2; }
L_fa88:
    X86_TICK(c, 7);
    // 00fa88  test cx, cx
    X86_AT(c, 0xfa88u);
    (void)x86_logic(c, (c.r[1] & 0xFFFFu) & (c.r[1] & 0xFFFFu), 2);
    // 00fa8b  je 0xfab0
    X86_AT(c, 0xfa8bu);
    if (x86_cc(c, 4)) { goto L_fab0; }
L_fa8d:
    X86_TICK(c, 12);
    // 00fa8d  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfa8du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fa95  jne 0xfa9b
    X86_AT(c, 0xfa95u);
    if (x86_cc(c, 5)) { goto L_fa9b; }
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
L_fa9b:
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_faa2:
    X86_TICK(c, 7);
    // 00faa2  test dl, dl
    X86_AT(c, 0xfaa2u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00faa4  je 0xfabe
    X86_AT(c, 0xfaa4u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00faa6  inc word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0xfaa6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00faae  jmp 0xfa88
    X86_AT(c, 0xfaaeu);
    X86_POLL(c, 0xfa88u); goto L_fa88;
L_fab0:
    X86_TICK(c, 7);
    // 00fab0  test dl, dl
    X86_AT(c, 0xfab0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fab2  je 0xfabe
    X86_AT(c, 0xfab2u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00fab4  inc word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0xfab4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fabc  jmp 0xfa8d
    X86_AT(c, 0xfabcu);
    X86_POLL(c, 0xfa8du); goto L_fa8d;
L_fabe:
    X86_TICK(c, 6);
    // 00fabe  mov ax, word ptr gs:[ebp + 0x35e]
    X86_AT(c, 0xfabeu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu))));
    // 00fac6  mov word ptr gs:[ebp + 0x360], ax
    X86_AT(c, 0xfac6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[0] & 0xFFFFu));
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa50u, "ran off the end of a function");
}
void f_0000fa58(X86Cpu& c) {
    X86_TICK(c, 30);
    // 00fa58  shr eax, 0x10
    X86_AT(c, 0xfa58u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00fa5b  shr ebx, 0x10
    X86_AT(c, 0xfa5bu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00fa5e  rol ecx, 0x10
    X86_AT(c, 0xfa5eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00fa61  add ax, bx
    X86_AT(c, 0xfa61u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fa64  dec ax
    X86_AT(c, 0xfa64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00fa66  mov word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0xfa66u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[0] & 0xFFFFu));
    // 00fa6e  add bx, cx
    X86_AT(c, 0xfa6eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00fa71  mov word ptr gs:[ebp + 0x360], bx
    X86_AT(c, 0xfa71u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[3] & 0xFFFFu));
    // 00fa79  mov dl, byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xfa79u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u))));
    // 00fa80  test ecx, 0xffff0000
    X86_AT(c, 0xfa80u);
    (void)x86_logic(c, c.r[1] & 0xFFFF0000u, 4);
    // 00fa86  je 0xfaa2
    X86_AT(c, 0xfa86u);
    if (x86_cc(c, 4)) { goto L_faa2; }
L_fa88:
    X86_TICK(c, 7);
    // 00fa88  test cx, cx
    X86_AT(c, 0xfa88u);
    (void)x86_logic(c, (c.r[1] & 0xFFFFu) & (c.r[1] & 0xFFFFu), 2);
    // 00fa8b  je 0xfab0
    X86_AT(c, 0xfa8bu);
    if (x86_cc(c, 4)) { goto L_fab0; }
L_fa8d:
    X86_TICK(c, 12);
    // 00fa8d  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfa8du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fa95  jne 0xfa9b
    X86_AT(c, 0xfa95u);
    if (x86_cc(c, 5)) { goto L_fa9b; }
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
L_fa9b:
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_faa2:
    X86_TICK(c, 7);
    // 00faa2  test dl, dl
    X86_AT(c, 0xfaa2u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00faa4  je 0xfabe
    X86_AT(c, 0xfaa4u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00faa6  inc word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0xfaa6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00faae  jmp 0xfa88
    X86_AT(c, 0xfaaeu);
    X86_POLL(c, 0xfa88u); goto L_fa88;
L_fab0:
    X86_TICK(c, 7);
    // 00fab0  test dl, dl
    X86_AT(c, 0xfab0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fab2  je 0xfabe
    X86_AT(c, 0xfab2u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00fab4  inc word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0xfab4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fabc  jmp 0xfa8d
    X86_AT(c, 0xfabcu);
    X86_POLL(c, 0xfa8du); goto L_fa8d;
L_fabe:
    X86_TICK(c, 6);
    // 00fabe  mov ax, word ptr gs:[ebp + 0x35e]
    X86_AT(c, 0xfabeu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu))));
    // 00fac6  mov word ptr gs:[ebp + 0x360], ax
    X86_AT(c, 0xfac6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[0] & 0xFFFFu));
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa58u, "ran off the end of a function");
}
void f_0000fa5b(X86Cpu& c) {
    X86_TICK(c, 27);
    // 00fa5b  shr ebx, 0x10
    X86_AT(c, 0xfa5bu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00fa5e  rol ecx, 0x10
    X86_AT(c, 0xfa5eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00fa61  add ax, bx
    X86_AT(c, 0xfa61u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fa64  dec ax
    X86_AT(c, 0xfa64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00fa66  mov word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0xfa66u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[0] & 0xFFFFu));
    // 00fa6e  add bx, cx
    X86_AT(c, 0xfa6eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00fa71  mov word ptr gs:[ebp + 0x360], bx
    X86_AT(c, 0xfa71u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[3] & 0xFFFFu));
    // 00fa79  mov dl, byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xfa79u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u))));
    // 00fa80  test ecx, 0xffff0000
    X86_AT(c, 0xfa80u);
    (void)x86_logic(c, c.r[1] & 0xFFFF0000u, 4);
    // 00fa86  je 0xfaa2
    X86_AT(c, 0xfa86u);
    if (x86_cc(c, 4)) { goto L_faa2; }
L_fa88:
    X86_TICK(c, 7);
    // 00fa88  test cx, cx
    X86_AT(c, 0xfa88u);
    (void)x86_logic(c, (c.r[1] & 0xFFFFu) & (c.r[1] & 0xFFFFu), 2);
    // 00fa8b  je 0xfab0
    X86_AT(c, 0xfa8bu);
    if (x86_cc(c, 4)) { goto L_fab0; }
L_fa8d:
    X86_TICK(c, 12);
    // 00fa8d  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfa8du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fa95  jne 0xfa9b
    X86_AT(c, 0xfa95u);
    if (x86_cc(c, 5)) { goto L_fa9b; }
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
L_fa9b:
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_faa2:
    X86_TICK(c, 7);
    // 00faa2  test dl, dl
    X86_AT(c, 0xfaa2u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00faa4  je 0xfabe
    X86_AT(c, 0xfaa4u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00faa6  inc word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0xfaa6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00faae  jmp 0xfa88
    X86_AT(c, 0xfaaeu);
    X86_POLL(c, 0xfa88u); goto L_fa88;
L_fab0:
    X86_TICK(c, 7);
    // 00fab0  test dl, dl
    X86_AT(c, 0xfab0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fab2  je 0xfabe
    X86_AT(c, 0xfab2u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00fab4  inc word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0xfab4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fabc  jmp 0xfa8d
    X86_AT(c, 0xfabcu);
    X86_POLL(c, 0xfa8du); goto L_fa8d;
L_fabe:
    X86_TICK(c, 6);
    // 00fabe  mov ax, word ptr gs:[ebp + 0x35e]
    X86_AT(c, 0xfabeu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu))));
    // 00fac6  mov word ptr gs:[ebp + 0x360], ax
    X86_AT(c, 0xfac6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[0] & 0xFFFFu));
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa5bu, "ran off the end of a function");
}
void f_0000fa5e(X86Cpu& c) {
    X86_TICK(c, 24);
    // 00fa5e  rol ecx, 0x10
    X86_AT(c, 0xfa5eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00fa61  add ax, bx
    X86_AT(c, 0xfa61u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fa64  dec ax
    X86_AT(c, 0xfa64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00fa66  mov word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0xfa66u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[0] & 0xFFFFu));
    // 00fa6e  add bx, cx
    X86_AT(c, 0xfa6eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00fa71  mov word ptr gs:[ebp + 0x360], bx
    X86_AT(c, 0xfa71u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[3] & 0xFFFFu));
    // 00fa79  mov dl, byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xfa79u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u))));
    // 00fa80  test ecx, 0xffff0000
    X86_AT(c, 0xfa80u);
    (void)x86_logic(c, c.r[1] & 0xFFFF0000u, 4);
    // 00fa86  je 0xfaa2
    X86_AT(c, 0xfa86u);
    if (x86_cc(c, 4)) { goto L_faa2; }
L_fa88:
    X86_TICK(c, 7);
    // 00fa88  test cx, cx
    X86_AT(c, 0xfa88u);
    (void)x86_logic(c, (c.r[1] & 0xFFFFu) & (c.r[1] & 0xFFFFu), 2);
    // 00fa8b  je 0xfab0
    X86_AT(c, 0xfa8bu);
    if (x86_cc(c, 4)) { goto L_fab0; }
L_fa8d:
    X86_TICK(c, 12);
    // 00fa8d  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfa8du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fa95  jne 0xfa9b
    X86_AT(c, 0xfa95u);
    if (x86_cc(c, 5)) { goto L_fa9b; }
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
L_fa9b:
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_faa2:
    X86_TICK(c, 7);
    // 00faa2  test dl, dl
    X86_AT(c, 0xfaa2u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00faa4  je 0xfabe
    X86_AT(c, 0xfaa4u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00faa6  inc word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0xfaa6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00faae  jmp 0xfa88
    X86_AT(c, 0xfaaeu);
    X86_POLL(c, 0xfa88u); goto L_fa88;
L_fab0:
    X86_TICK(c, 7);
    // 00fab0  test dl, dl
    X86_AT(c, 0xfab0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fab2  je 0xfabe
    X86_AT(c, 0xfab2u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00fab4  inc word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0xfab4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fabc  jmp 0xfa8d
    X86_AT(c, 0xfabcu);
    X86_POLL(c, 0xfa8du); goto L_fa8d;
L_fabe:
    X86_TICK(c, 6);
    // 00fabe  mov ax, word ptr gs:[ebp + 0x35e]
    X86_AT(c, 0xfabeu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu))));
    // 00fac6  mov word ptr gs:[ebp + 0x360], ax
    X86_AT(c, 0xfac6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[0] & 0xFFFFu));
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa5eu, "ran off the end of a function");
}
void f_0000fa61(X86Cpu& c) {
    X86_TICK(c, 21);
    // 00fa61  add ax, bx
    X86_AT(c, 0xfa61u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fa64  dec ax
    X86_AT(c, 0xfa64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00fa66  mov word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0xfa66u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[0] & 0xFFFFu));
    // 00fa6e  add bx, cx
    X86_AT(c, 0xfa6eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00fa71  mov word ptr gs:[ebp + 0x360], bx
    X86_AT(c, 0xfa71u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[3] & 0xFFFFu));
    // 00fa79  mov dl, byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xfa79u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u))));
    // 00fa80  test ecx, 0xffff0000
    X86_AT(c, 0xfa80u);
    (void)x86_logic(c, c.r[1] & 0xFFFF0000u, 4);
    // 00fa86  je 0xfaa2
    X86_AT(c, 0xfa86u);
    if (x86_cc(c, 4)) { goto L_faa2; }
L_fa88:
    X86_TICK(c, 7);
    // 00fa88  test cx, cx
    X86_AT(c, 0xfa88u);
    (void)x86_logic(c, (c.r[1] & 0xFFFFu) & (c.r[1] & 0xFFFFu), 2);
    // 00fa8b  je 0xfab0
    X86_AT(c, 0xfa8bu);
    if (x86_cc(c, 4)) { goto L_fab0; }
L_fa8d:
    X86_TICK(c, 12);
    // 00fa8d  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfa8du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fa95  jne 0xfa9b
    X86_AT(c, 0xfa95u);
    if (x86_cc(c, 5)) { goto L_fa9b; }
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
L_fa9b:
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_faa2:
    X86_TICK(c, 7);
    // 00faa2  test dl, dl
    X86_AT(c, 0xfaa2u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00faa4  je 0xfabe
    X86_AT(c, 0xfaa4u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00faa6  inc word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0xfaa6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00faae  jmp 0xfa88
    X86_AT(c, 0xfaaeu);
    X86_POLL(c, 0xfa88u); goto L_fa88;
L_fab0:
    X86_TICK(c, 7);
    // 00fab0  test dl, dl
    X86_AT(c, 0xfab0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fab2  je 0xfabe
    X86_AT(c, 0xfab2u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00fab4  inc word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0xfab4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fabc  jmp 0xfa8d
    X86_AT(c, 0xfabcu);
    X86_POLL(c, 0xfa8du); goto L_fa8d;
L_fabe:
    X86_TICK(c, 6);
    // 00fabe  mov ax, word ptr gs:[ebp + 0x35e]
    X86_AT(c, 0xfabeu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu))));
    // 00fac6  mov word ptr gs:[ebp + 0x360], ax
    X86_AT(c, 0xfac6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[0] & 0xFFFFu));
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa61u, "ran off the end of a function");
}
void f_0000fa64(X86Cpu& c) {
    X86_TICK(c, 19);
    // 00fa64  dec ax
    X86_AT(c, 0xfa64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00fa66  mov word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0xfa66u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[0] & 0xFFFFu));
    // 00fa6e  add bx, cx
    X86_AT(c, 0xfa6eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00fa71  mov word ptr gs:[ebp + 0x360], bx
    X86_AT(c, 0xfa71u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[3] & 0xFFFFu));
    // 00fa79  mov dl, byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xfa79u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u))));
    // 00fa80  test ecx, 0xffff0000
    X86_AT(c, 0xfa80u);
    (void)x86_logic(c, c.r[1] & 0xFFFF0000u, 4);
    // 00fa86  je 0xfaa2
    X86_AT(c, 0xfa86u);
    if (x86_cc(c, 4)) { goto L_faa2; }
L_fa88:
    X86_TICK(c, 7);
    // 00fa88  test cx, cx
    X86_AT(c, 0xfa88u);
    (void)x86_logic(c, (c.r[1] & 0xFFFFu) & (c.r[1] & 0xFFFFu), 2);
    // 00fa8b  je 0xfab0
    X86_AT(c, 0xfa8bu);
    if (x86_cc(c, 4)) { goto L_fab0; }
L_fa8d:
    X86_TICK(c, 12);
    // 00fa8d  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfa8du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fa95  jne 0xfa9b
    X86_AT(c, 0xfa95u);
    if (x86_cc(c, 5)) { goto L_fa9b; }
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
L_fa9b:
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_faa2:
    X86_TICK(c, 7);
    // 00faa2  test dl, dl
    X86_AT(c, 0xfaa2u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00faa4  je 0xfabe
    X86_AT(c, 0xfaa4u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00faa6  inc word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0xfaa6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00faae  jmp 0xfa88
    X86_AT(c, 0xfaaeu);
    X86_POLL(c, 0xfa88u); goto L_fa88;
L_fab0:
    X86_TICK(c, 7);
    // 00fab0  test dl, dl
    X86_AT(c, 0xfab0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fab2  je 0xfabe
    X86_AT(c, 0xfab2u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00fab4  inc word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0xfab4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fabc  jmp 0xfa8d
    X86_AT(c, 0xfabcu);
    X86_POLL(c, 0xfa8du); goto L_fa8d;
L_fabe:
    X86_TICK(c, 6);
    // 00fabe  mov ax, word ptr gs:[ebp + 0x35e]
    X86_AT(c, 0xfabeu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu))));
    // 00fac6  mov word ptr gs:[ebp + 0x360], ax
    X86_AT(c, 0xfac6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[0] & 0xFFFFu));
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa64u, "ran off the end of a function");
}
void f_0000fa66(X86Cpu& c) {
    X86_TICK(c, 17);
    // 00fa66  mov word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0xfa66u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)), (c.r[0] & 0xFFFFu));
    // 00fa6e  add bx, cx
    X86_AT(c, 0xfa6eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00fa71  mov word ptr gs:[ebp + 0x360], bx
    X86_AT(c, 0xfa71u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[3] & 0xFFFFu));
    // 00fa79  mov dl, byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xfa79u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u))));
    // 00fa80  test ecx, 0xffff0000
    X86_AT(c, 0xfa80u);
    (void)x86_logic(c, c.r[1] & 0xFFFF0000u, 4);
    // 00fa86  je 0xfaa2
    X86_AT(c, 0xfa86u);
    if (x86_cc(c, 4)) { goto L_faa2; }
L_fa88:
    X86_TICK(c, 7);
    // 00fa88  test cx, cx
    X86_AT(c, 0xfa88u);
    (void)x86_logic(c, (c.r[1] & 0xFFFFu) & (c.r[1] & 0xFFFFu), 2);
    // 00fa8b  je 0xfab0
    X86_AT(c, 0xfa8bu);
    if (x86_cc(c, 4)) { goto L_fab0; }
L_fa8d:
    X86_TICK(c, 12);
    // 00fa8d  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfa8du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fa95  jne 0xfa9b
    X86_AT(c, 0xfa95u);
    if (x86_cc(c, 5)) { goto L_fa9b; }
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
L_fa9b:
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_faa2:
    X86_TICK(c, 7);
    // 00faa2  test dl, dl
    X86_AT(c, 0xfaa2u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00faa4  je 0xfabe
    X86_AT(c, 0xfaa4u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00faa6  inc word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0xfaa6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00faae  jmp 0xfa88
    X86_AT(c, 0xfaaeu);
    X86_POLL(c, 0xfa88u); goto L_fa88;
L_fab0:
    X86_TICK(c, 7);
    // 00fab0  test dl, dl
    X86_AT(c, 0xfab0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fab2  je 0xfabe
    X86_AT(c, 0xfab2u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00fab4  inc word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0xfab4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fabc  jmp 0xfa8d
    X86_AT(c, 0xfabcu);
    X86_POLL(c, 0xfa8du); goto L_fa8d;
L_fabe:
    X86_TICK(c, 6);
    // 00fabe  mov ax, word ptr gs:[ebp + 0x35e]
    X86_AT(c, 0xfabeu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu))));
    // 00fac6  mov word ptr gs:[ebp + 0x360], ax
    X86_AT(c, 0xfac6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[0] & 0xFFFFu));
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa66u, "ran off the end of a function");
}
void f_0000fa6e(X86Cpu& c) {
    X86_TICK(c, 15);
    // 00fa6e  add bx, cx
    X86_AT(c, 0xfa6eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[1] & 0xFFFFu), 0, 2)); }
    // 00fa71  mov word ptr gs:[ebp + 0x360], bx
    X86_AT(c, 0xfa71u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[3] & 0xFFFFu));
    // 00fa79  mov dl, byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xfa79u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u))));
    // 00fa80  test ecx, 0xffff0000
    X86_AT(c, 0xfa80u);
    (void)x86_logic(c, c.r[1] & 0xFFFF0000u, 4);
    // 00fa86  je 0xfaa2
    X86_AT(c, 0xfa86u);
    if (x86_cc(c, 4)) { goto L_faa2; }
L_fa88:
    X86_TICK(c, 7);
    // 00fa88  test cx, cx
    X86_AT(c, 0xfa88u);
    (void)x86_logic(c, (c.r[1] & 0xFFFFu) & (c.r[1] & 0xFFFFu), 2);
    // 00fa8b  je 0xfab0
    X86_AT(c, 0xfa8bu);
    if (x86_cc(c, 4)) { goto L_fab0; }
L_fa8d:
    X86_TICK(c, 12);
    // 00fa8d  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfa8du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fa95  jne 0xfa9b
    X86_AT(c, 0xfa95u);
    if (x86_cc(c, 5)) { goto L_fa9b; }
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
L_fa9b:
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_faa2:
    X86_TICK(c, 7);
    // 00faa2  test dl, dl
    X86_AT(c, 0xfaa2u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00faa4  je 0xfabe
    X86_AT(c, 0xfaa4u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00faa6  inc word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0xfaa6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00faae  jmp 0xfa88
    X86_AT(c, 0xfaaeu);
    X86_POLL(c, 0xfa88u); goto L_fa88;
L_fab0:
    X86_TICK(c, 7);
    // 00fab0  test dl, dl
    X86_AT(c, 0xfab0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fab2  je 0xfabe
    X86_AT(c, 0xfab2u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00fab4  inc word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0xfab4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fabc  jmp 0xfa8d
    X86_AT(c, 0xfabcu);
    X86_POLL(c, 0xfa8du); goto L_fa8d;
L_fabe:
    X86_TICK(c, 6);
    // 00fabe  mov ax, word ptr gs:[ebp + 0x35e]
    X86_AT(c, 0xfabeu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu))));
    // 00fac6  mov word ptr gs:[ebp + 0x360], ax
    X86_AT(c, 0xfac6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[0] & 0xFFFFu));
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa6eu, "ran off the end of a function");
}
void f_0000fa71(X86Cpu& c) {
    X86_TICK(c, 13);
    // 00fa71  mov word ptr gs:[ebp + 0x360], bx
    X86_AT(c, 0xfa71u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[3] & 0xFFFFu));
    // 00fa79  mov dl, byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xfa79u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u))));
    // 00fa80  test ecx, 0xffff0000
    X86_AT(c, 0xfa80u);
    (void)x86_logic(c, c.r[1] & 0xFFFF0000u, 4);
    // 00fa86  je 0xfaa2
    X86_AT(c, 0xfa86u);
    if (x86_cc(c, 4)) { goto L_faa2; }
L_fa88:
    X86_TICK(c, 7);
    // 00fa88  test cx, cx
    X86_AT(c, 0xfa88u);
    (void)x86_logic(c, (c.r[1] & 0xFFFFu) & (c.r[1] & 0xFFFFu), 2);
    // 00fa8b  je 0xfab0
    X86_AT(c, 0xfa8bu);
    if (x86_cc(c, 4)) { goto L_fab0; }
L_fa8d:
    X86_TICK(c, 12);
    // 00fa8d  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfa8du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fa95  jne 0xfa9b
    X86_AT(c, 0xfa95u);
    if (x86_cc(c, 5)) { goto L_fa9b; }
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
L_fa9b:
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_faa2:
    X86_TICK(c, 7);
    // 00faa2  test dl, dl
    X86_AT(c, 0xfaa2u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00faa4  je 0xfabe
    X86_AT(c, 0xfaa4u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00faa6  inc word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0xfaa6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00faae  jmp 0xfa88
    X86_AT(c, 0xfaaeu);
    X86_POLL(c, 0xfa88u); goto L_fa88;
L_fab0:
    X86_TICK(c, 7);
    // 00fab0  test dl, dl
    X86_AT(c, 0xfab0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fab2  je 0xfabe
    X86_AT(c, 0xfab2u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00fab4  inc word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0xfab4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fabc  jmp 0xfa8d
    X86_AT(c, 0xfabcu);
    X86_POLL(c, 0xfa8du); goto L_fa8d;
L_fabe:
    X86_TICK(c, 6);
    // 00fabe  mov ax, word ptr gs:[ebp + 0x35e]
    X86_AT(c, 0xfabeu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu))));
    // 00fac6  mov word ptr gs:[ebp + 0x360], ax
    X86_AT(c, 0xfac6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[0] & 0xFFFFu));
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa71u, "ran off the end of a function");
}
void f_0000fa79(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00fa79  mov dl, byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xfa79u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u))));
    // 00fa80  test ecx, 0xffff0000
    X86_AT(c, 0xfa80u);
    (void)x86_logic(c, c.r[1] & 0xFFFF0000u, 4);
    // 00fa86  je 0xfaa2
    X86_AT(c, 0xfa86u);
    if (x86_cc(c, 4)) { goto L_faa2; }
L_fa88:
    X86_TICK(c, 7);
    // 00fa88  test cx, cx
    X86_AT(c, 0xfa88u);
    (void)x86_logic(c, (c.r[1] & 0xFFFFu) & (c.r[1] & 0xFFFFu), 2);
    // 00fa8b  je 0xfab0
    X86_AT(c, 0xfa8bu);
    if (x86_cc(c, 4)) { goto L_fab0; }
L_fa8d:
    X86_TICK(c, 12);
    // 00fa8d  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfa8du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fa95  jne 0xfa9b
    X86_AT(c, 0xfa95u);
    if (x86_cc(c, 5)) { goto L_fa9b; }
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
L_fa9b:
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_faa2:
    X86_TICK(c, 7);
    // 00faa2  test dl, dl
    X86_AT(c, 0xfaa2u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00faa4  je 0xfabe
    X86_AT(c, 0xfaa4u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00faa6  inc word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0xfaa6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00faae  jmp 0xfa88
    X86_AT(c, 0xfaaeu);
    X86_POLL(c, 0xfa88u); goto L_fa88;
L_fab0:
    X86_TICK(c, 7);
    // 00fab0  test dl, dl
    X86_AT(c, 0xfab0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fab2  je 0xfabe
    X86_AT(c, 0xfab2u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00fab4  inc word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0xfab4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fabc  jmp 0xfa8d
    X86_AT(c, 0xfabcu);
    X86_POLL(c, 0xfa8du); goto L_fa8d;
L_fabe:
    X86_TICK(c, 6);
    // 00fabe  mov ax, word ptr gs:[ebp + 0x35e]
    X86_AT(c, 0xfabeu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu))));
    // 00fac6  mov word ptr gs:[ebp + 0x360], ax
    X86_AT(c, 0xfac6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[0] & 0xFFFFu));
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa79u, "ran off the end of a function");
}
void f_0000fa80(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00fa80  test ecx, 0xffff0000
    X86_AT(c, 0xfa80u);
    (void)x86_logic(c, c.r[1] & 0xFFFF0000u, 4);
    // 00fa86  je 0xfaa2
    X86_AT(c, 0xfa86u);
    if (x86_cc(c, 4)) { goto L_faa2; }
L_fa88:
    X86_TICK(c, 7);
    // 00fa88  test cx, cx
    X86_AT(c, 0xfa88u);
    (void)x86_logic(c, (c.r[1] & 0xFFFFu) & (c.r[1] & 0xFFFFu), 2);
    // 00fa8b  je 0xfab0
    X86_AT(c, 0xfa8bu);
    if (x86_cc(c, 4)) { goto L_fab0; }
L_fa8d:
    X86_TICK(c, 12);
    // 00fa8d  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfa8du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fa95  jne 0xfa9b
    X86_AT(c, 0xfa95u);
    if (x86_cc(c, 5)) { goto L_fa9b; }
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
L_fa9b:
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_faa2:
    X86_TICK(c, 7);
    // 00faa2  test dl, dl
    X86_AT(c, 0xfaa2u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00faa4  je 0xfabe
    X86_AT(c, 0xfaa4u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00faa6  inc word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0xfaa6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00faae  jmp 0xfa88
    X86_AT(c, 0xfaaeu);
    X86_POLL(c, 0xfa88u); goto L_fa88;
L_fab0:
    X86_TICK(c, 7);
    // 00fab0  test dl, dl
    X86_AT(c, 0xfab0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fab2  je 0xfabe
    X86_AT(c, 0xfab2u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00fab4  inc word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0xfab4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fabc  jmp 0xfa8d
    X86_AT(c, 0xfabcu);
    X86_POLL(c, 0xfa8du); goto L_fa8d;
L_fabe:
    X86_TICK(c, 6);
    // 00fabe  mov ax, word ptr gs:[ebp + 0x35e]
    X86_AT(c, 0xfabeu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu))));
    // 00fac6  mov word ptr gs:[ebp + 0x360], ax
    X86_AT(c, 0xfac6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[0] & 0xFFFFu));
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa80u, "ran off the end of a function");
}
void f_0000fa86(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00fa86  je 0xfaa2
    X86_AT(c, 0xfa86u);
    if (x86_cc(c, 4)) { goto L_faa2; }
L_fa88:
    X86_TICK(c, 7);
    // 00fa88  test cx, cx
    X86_AT(c, 0xfa88u);
    (void)x86_logic(c, (c.r[1] & 0xFFFFu) & (c.r[1] & 0xFFFFu), 2);
    // 00fa8b  je 0xfab0
    X86_AT(c, 0xfa8bu);
    if (x86_cc(c, 4)) { goto L_fab0; }
L_fa8d:
    X86_TICK(c, 12);
    // 00fa8d  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfa8du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fa95  jne 0xfa9b
    X86_AT(c, 0xfa95u);
    if (x86_cc(c, 5)) { goto L_fa9b; }
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
L_fa9b:
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_faa2:
    X86_TICK(c, 7);
    // 00faa2  test dl, dl
    X86_AT(c, 0xfaa2u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00faa4  je 0xfabe
    X86_AT(c, 0xfaa4u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00faa6  inc word ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0xfaa6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00faae  jmp 0xfa88
    X86_AT(c, 0xfaaeu);
    X86_POLL(c, 0xfa88u); goto L_fa88;
L_fab0:
    X86_TICK(c, 7);
    // 00fab0  test dl, dl
    X86_AT(c, 0xfab0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fab2  je 0xfabe
    X86_AT(c, 0xfab2u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00fab4  inc word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0xfab4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fabc  jmp 0xfa8d
    X86_AT(c, 0xfabcu);
    X86_POLL(c, 0xfa8du); goto L_fa8d;
L_fabe:
    X86_TICK(c, 6);
    // 00fabe  mov ax, word ptr gs:[ebp + 0x35e]
    X86_AT(c, 0xfabeu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu))));
    // 00fac6  mov word ptr gs:[ebp + 0x360], ax
    X86_AT(c, 0xfac6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[0] & 0xFFFFu));
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa86u, "ran off the end of a function");
}
void f_0000fa88(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00fa88  test cx, cx
    X86_AT(c, 0xfa88u);
    (void)x86_logic(c, (c.r[1] & 0xFFFFu) & (c.r[1] & 0xFFFFu), 2);
    // 00fa8b  je 0xfab0
    X86_AT(c, 0xfa8bu);
    if (x86_cc(c, 4)) { goto L_fab0; }
L_fa8d:
    X86_TICK(c, 12);
    // 00fa8d  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfa8du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fa95  jne 0xfa9b
    X86_AT(c, 0xfa95u);
    if (x86_cc(c, 5)) { goto L_fa9b; }
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
L_fa9b:
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_fab0:
    X86_TICK(c, 7);
    // 00fab0  test dl, dl
    X86_AT(c, 0xfab0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fab2  je 0xfabe
    X86_AT(c, 0xfab2u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00fab4  inc word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0xfab4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fabc  jmp 0xfa8d
    X86_AT(c, 0xfabcu);
    X86_POLL(c, 0xfa8du); goto L_fa8d;
L_fabe:
    X86_TICK(c, 6);
    // 00fabe  mov ax, word ptr gs:[ebp + 0x35e]
    X86_AT(c, 0xfabeu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu))));
    // 00fac6  mov word ptr gs:[ebp + 0x360], ax
    X86_AT(c, 0xfac6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[0] & 0xFFFFu));
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa88u, "ran off the end of a function");
}
void f_0000fa8b(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00fa8b  je 0xfab0
    X86_AT(c, 0xfa8bu);
    if (x86_cc(c, 4)) { goto L_fab0; }
L_fa8d:
    X86_TICK(c, 12);
    // 00fa8d  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfa8du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fa95  jne 0xfa9b
    X86_AT(c, 0xfa95u);
    if (x86_cc(c, 5)) { goto L_fa9b; }
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
L_fa9b:
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_fab0:
    X86_TICK(c, 7);
    // 00fab0  test dl, dl
    X86_AT(c, 0xfab0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fab2  je 0xfabe
    X86_AT(c, 0xfab2u);
    if (x86_cc(c, 4)) { goto L_fabe; }
    X86_TICK(c, 13);
    // 00fab4  inc word ptr gs:[ebp + 0x1ca]
    X86_AT(c, 0xfab4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fabc  jmp 0xfa8d
    X86_AT(c, 0xfabcu);
    X86_POLL(c, 0xfa8du); goto L_fa8d;
L_fabe:
    X86_TICK(c, 6);
    // 00fabe  mov ax, word ptr gs:[ebp + 0x35e]
    X86_AT(c, 0xfabeu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu))));
    // 00fac6  mov word ptr gs:[ebp + 0x360], ax
    X86_AT(c, 0xfac6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u)), (c.r[0] & 0xFFFFu));
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa8bu, "ran off the end of a function");
}
void f_0000fa8d(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00fa8d  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xfa8du);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00fa95  jne 0xfa9b
    X86_AT(c, 0xfa95u);
    if (x86_cc(c, 5)) { goto L_fa9b; }
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
L_fa9b:
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa8du, "ran off the end of a function");
}
void f_0000fa95(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00fa95  jne 0xfa9b
    X86_AT(c, 0xfa95u);
    if (x86_cc(c, 5)) { goto L_fa9b; }
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
L_fa9b:
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa95u, "ran off the end of a function");
}
void f_0000fa97(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00fa97  test dl, dl
    X86_AT(c, 0xfa97u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa97u, "ran off the end of a function");
}
void f_0000fa99(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00fa99  je 0xface
    X86_AT(c, 0xfa99u);
    if (x86_cc(c, 4)) { goto L_face; }
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
L_face:
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfa99u, "ran off the end of a function");
}
void f_0000fa9b(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00fa9b  jmp dword ptr gs:[ebp + 0x440]
    X86_AT(c, 0xfa9bu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)))); return;
    x86_fault(c, 0xfa9bu, "ran off the end of a function");
}
void f_0000face(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00face  ret 
    X86_AT(c, 0xfaceu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfaceu, "ran off the end of a function");
}
void f_0000fae0(X86Cpu& c) {
    X86_TICK(c, 42);
    // 00fae0  mov eax, dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xfae0u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)));
    // 00fae7  add word ptr gs:[ebp + 0x1c4], ax
    X86_AT(c, 0xfae7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00faef  add word ptr gs:[ebp + 0x1c8], ax
    X86_AT(c, 0xfaefu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00faf7  shr eax, 0x10
    X86_AT(c, 0xfaf7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00fafa  add word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0xfafau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00fb02  add word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0xfb02u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00fb0a  jmp dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xfb0au);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)))); return;
    x86_fault(c, 0xfae0u, "ran off the end of a function");
}
void f_0000fae7(X86Cpu& c) {
    X86_TICK(c, 38);
    // 00fae7  add word ptr gs:[ebp + 0x1c4], ax
    X86_AT(c, 0xfae7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00faef  add word ptr gs:[ebp + 0x1c8], ax
    X86_AT(c, 0xfaefu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00faf7  shr eax, 0x10
    X86_AT(c, 0xfaf7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00fafa  add word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0xfafau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00fb02  add word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0xfb02u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00fb0a  jmp dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xfb0au);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)))); return;
    x86_fault(c, 0xfae7u, "ran off the end of a function");
}
void f_0000faef(X86Cpu& c) {
    X86_TICK(c, 31);
    // 00faef  add word ptr gs:[ebp + 0x1c8], ax
    X86_AT(c, 0xfaefu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00faf7  shr eax, 0x10
    X86_AT(c, 0xfaf7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00fafa  add word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0xfafau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00fb02  add word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0xfb02u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00fb0a  jmp dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xfb0au);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)))); return;
    x86_fault(c, 0xfaefu, "ran off the end of a function");
}
void f_0000faf7(X86Cpu& c) {
    X86_TICK(c, 24);
    // 00faf7  shr eax, 0x10
    X86_AT(c, 0xfaf7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00fafa  add word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0xfafau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00fb02  add word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0xfb02u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00fb0a  jmp dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xfb0au);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)))); return;
    x86_fault(c, 0xfaf7u, "ran off the end of a function");
}
void f_0000fafa(X86Cpu& c) {
    X86_TICK(c, 21);
    // 00fafa  add word ptr gs:[ebp + 0x1c6], ax
    X86_AT(c, 0xfafau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1C6u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00fb02  add word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0xfb02u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00fb0a  jmp dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xfb0au);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)))); return;
    x86_fault(c, 0xfafau, "ran off the end of a function");
}
void f_0000fb02(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00fb02  add word ptr gs:[ebp + 0x1ca], ax
    X86_AT(c, 0xfb02u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CAu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00fb0a  jmp dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xfb0au);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)))); return;
    x86_fault(c, 0xfb02u, "ran off the end of a function");
}
void f_0000fb0a(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00fb0a  jmp dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xfb0au);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)))); return;
    x86_fault(c, 0xfb0au, "ran off the end of a function");
}
void f_0000fc13(X86Cpu& c) {
    X86_TICK(c, 62);
    // 00fc13  mov ebx, dword ptr gs:[ebp + 0x1c4]
    X86_AT(c, 0xfc13u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C4u)));
    // 00fc1a  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0xfc1au);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00fc21  mov word ptr gs:[ebp + 0x222], bx
    X86_AT(c, 0xfc21u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[3] & 0xFFFFu));
    // 00fc29  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0xfc29u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00fc31  shr ebx, 0x10
    X86_AT(c, 0xfc31u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00fc34  shr ecx, 0x10
    X86_AT(c, 0xfc34u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00fc37  mov word ptr gs:[ebp + 0x226], bx
    X86_AT(c, 0xfc37u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[3] & 0xFFFFu));
    // 00fc3f  sub cx, bx
    X86_AT(c, 0xfc3fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fc42  inc ecx
    X86_AT(c, 0xfc42u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00fc43  push ecx
    X86_AT(c, 0xfc43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00fc44  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc44u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00fc4c  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc4cu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00fc51  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0xfc51u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 00fc55  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc55u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
L_fc5c:
    X86_TICK(c, 7);
    // 00fc5c  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xfc5cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xfc63u); x86_call(c, t); X86_RET(c, 0xfc63u); }
    X86_TICK(c, 28);
    // 00fc63  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc63u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fc6b  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc6bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 00fc6f  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc6fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00fc76  dec dword ptr [esp]
    X86_AT(c, 0xfc76u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00fc79  jne 0xfc5c
    X86_AT(c, 0xfc79u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfc5cu); goto L_fc5c; }
    X86_TICK(c, 12);
    // 00fc7b  add esp, 4
    X86_AT(c, 0xfc7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00fc7e  ret 
    X86_AT(c, 0xfc7eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc13u, "ran off the end of a function");
}
void f_0000fc1a(X86Cpu& c) {
    X86_TICK(c, 58);
    // 00fc1a  mov ecx, dword ptr gs:[ebp + 0x1c8]
    X86_AT(c, 0xfc1au);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1C8u)));
    // 00fc21  mov word ptr gs:[ebp + 0x222], bx
    X86_AT(c, 0xfc21u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[3] & 0xFFFFu));
    // 00fc29  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0xfc29u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00fc31  shr ebx, 0x10
    X86_AT(c, 0xfc31u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00fc34  shr ecx, 0x10
    X86_AT(c, 0xfc34u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00fc37  mov word ptr gs:[ebp + 0x226], bx
    X86_AT(c, 0xfc37u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[3] & 0xFFFFu));
    // 00fc3f  sub cx, bx
    X86_AT(c, 0xfc3fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fc42  inc ecx
    X86_AT(c, 0xfc42u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00fc43  push ecx
    X86_AT(c, 0xfc43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00fc44  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc44u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00fc4c  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc4cu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00fc51  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0xfc51u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 00fc55  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc55u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
L_fc5c:
    X86_TICK(c, 7);
    // 00fc5c  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xfc5cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xfc63u); x86_call(c, t); X86_RET(c, 0xfc63u); }
    X86_TICK(c, 28);
    // 00fc63  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc63u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fc6b  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc6bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 00fc6f  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc6fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00fc76  dec dword ptr [esp]
    X86_AT(c, 0xfc76u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00fc79  jne 0xfc5c
    X86_AT(c, 0xfc79u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfc5cu); goto L_fc5c; }
    X86_TICK(c, 12);
    // 00fc7b  add esp, 4
    X86_AT(c, 0xfc7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00fc7e  ret 
    X86_AT(c, 0xfc7eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc1au, "ran off the end of a function");
}
void f_0000fc21(X86Cpu& c) {
    X86_TICK(c, 54);
    // 00fc21  mov word ptr gs:[ebp + 0x222], bx
    X86_AT(c, 0xfc21u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[3] & 0xFFFFu));
    // 00fc29  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0xfc29u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00fc31  shr ebx, 0x10
    X86_AT(c, 0xfc31u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00fc34  shr ecx, 0x10
    X86_AT(c, 0xfc34u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00fc37  mov word ptr gs:[ebp + 0x226], bx
    X86_AT(c, 0xfc37u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[3] & 0xFFFFu));
    // 00fc3f  sub cx, bx
    X86_AT(c, 0xfc3fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fc42  inc ecx
    X86_AT(c, 0xfc42u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00fc43  push ecx
    X86_AT(c, 0xfc43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00fc44  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc44u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00fc4c  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc4cu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00fc51  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0xfc51u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 00fc55  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc55u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
L_fc5c:
    X86_TICK(c, 7);
    // 00fc5c  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xfc5cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xfc63u); x86_call(c, t); X86_RET(c, 0xfc63u); }
    X86_TICK(c, 28);
    // 00fc63  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc63u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fc6b  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc6bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 00fc6f  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc6fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00fc76  dec dword ptr [esp]
    X86_AT(c, 0xfc76u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00fc79  jne 0xfc5c
    X86_AT(c, 0xfc79u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfc5cu); goto L_fc5c; }
    X86_TICK(c, 12);
    // 00fc7b  add esp, 4
    X86_AT(c, 0xfc7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00fc7e  ret 
    X86_AT(c, 0xfc7eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc21u, "ran off the end of a function");
}
void f_0000fc29(X86Cpu& c) {
    X86_TICK(c, 52);
    // 00fc29  mov word ptr gs:[ebp + 0x224], cx
    X86_AT(c, 0xfc29u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[1] & 0xFFFFu));
    // 00fc31  shr ebx, 0x10
    X86_AT(c, 0xfc31u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00fc34  shr ecx, 0x10
    X86_AT(c, 0xfc34u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00fc37  mov word ptr gs:[ebp + 0x226], bx
    X86_AT(c, 0xfc37u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[3] & 0xFFFFu));
    // 00fc3f  sub cx, bx
    X86_AT(c, 0xfc3fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fc42  inc ecx
    X86_AT(c, 0xfc42u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00fc43  push ecx
    X86_AT(c, 0xfc43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00fc44  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc44u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00fc4c  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc4cu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00fc51  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0xfc51u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 00fc55  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc55u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
L_fc5c:
    X86_TICK(c, 7);
    // 00fc5c  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xfc5cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xfc63u); x86_call(c, t); X86_RET(c, 0xfc63u); }
    X86_TICK(c, 28);
    // 00fc63  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc63u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fc6b  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc6bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 00fc6f  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc6fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00fc76  dec dword ptr [esp]
    X86_AT(c, 0xfc76u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00fc79  jne 0xfc5c
    X86_AT(c, 0xfc79u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfc5cu); goto L_fc5c; }
    X86_TICK(c, 12);
    // 00fc7b  add esp, 4
    X86_AT(c, 0xfc7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00fc7e  ret 
    X86_AT(c, 0xfc7eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc29u, "ran off the end of a function");
}
void f_0000fc31(X86Cpu& c) {
    X86_TICK(c, 50);
    // 00fc31  shr ebx, 0x10
    X86_AT(c, 0xfc31u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00fc34  shr ecx, 0x10
    X86_AT(c, 0xfc34u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00fc37  mov word ptr gs:[ebp + 0x226], bx
    X86_AT(c, 0xfc37u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[3] & 0xFFFFu));
    // 00fc3f  sub cx, bx
    X86_AT(c, 0xfc3fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fc42  inc ecx
    X86_AT(c, 0xfc42u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00fc43  push ecx
    X86_AT(c, 0xfc43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00fc44  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc44u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00fc4c  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc4cu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00fc51  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0xfc51u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 00fc55  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc55u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
L_fc5c:
    X86_TICK(c, 7);
    // 00fc5c  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xfc5cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xfc63u); x86_call(c, t); X86_RET(c, 0xfc63u); }
    X86_TICK(c, 28);
    // 00fc63  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc63u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fc6b  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc6bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 00fc6f  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc6fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00fc76  dec dword ptr [esp]
    X86_AT(c, 0xfc76u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00fc79  jne 0xfc5c
    X86_AT(c, 0xfc79u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfc5cu); goto L_fc5c; }
    X86_TICK(c, 12);
    // 00fc7b  add esp, 4
    X86_AT(c, 0xfc7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00fc7e  ret 
    X86_AT(c, 0xfc7eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc31u, "ran off the end of a function");
}
void f_0000fc34(X86Cpu& c) {
    X86_TICK(c, 47);
    // 00fc34  shr ecx, 0x10
    X86_AT(c, 0xfc34u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00fc37  mov word ptr gs:[ebp + 0x226], bx
    X86_AT(c, 0xfc37u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[3] & 0xFFFFu));
    // 00fc3f  sub cx, bx
    X86_AT(c, 0xfc3fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fc42  inc ecx
    X86_AT(c, 0xfc42u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00fc43  push ecx
    X86_AT(c, 0xfc43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00fc44  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc44u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00fc4c  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc4cu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00fc51  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0xfc51u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 00fc55  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc55u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
L_fc5c:
    X86_TICK(c, 7);
    // 00fc5c  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xfc5cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xfc63u); x86_call(c, t); X86_RET(c, 0xfc63u); }
    X86_TICK(c, 28);
    // 00fc63  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc63u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fc6b  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc6bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 00fc6f  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc6fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00fc76  dec dword ptr [esp]
    X86_AT(c, 0xfc76u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00fc79  jne 0xfc5c
    X86_AT(c, 0xfc79u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfc5cu); goto L_fc5c; }
    X86_TICK(c, 12);
    // 00fc7b  add esp, 4
    X86_AT(c, 0xfc7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00fc7e  ret 
    X86_AT(c, 0xfc7eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc34u, "ran off the end of a function");
}
void f_0000fc37(X86Cpu& c) {
    X86_TICK(c, 44);
    // 00fc37  mov word ptr gs:[ebp + 0x226], bx
    X86_AT(c, 0xfc37u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[3] & 0xFFFFu));
    // 00fc3f  sub cx, bx
    X86_AT(c, 0xfc3fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00fc42  inc ecx
    X86_AT(c, 0xfc42u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00fc43  push ecx
    X86_AT(c, 0xfc43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00fc44  movsx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc44u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00fc4c  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc4cu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 00fc51  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0xfc51u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 00fc55  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc55u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
L_fc5c:
    X86_TICK(c, 7);
    // 00fc5c  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xfc5cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xfc63u); x86_call(c, t); X86_RET(c, 0xfc63u); }
    X86_TICK(c, 28);
    // 00fc63  inc word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xfc63u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 00fc6b  mov eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0xfc6bu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u)));
    // 00fc6f  add dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0xfc6fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00fc76  dec dword ptr [esp]
    X86_AT(c, 0xfc76u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00fc79  jne 0xfc5c
    X86_AT(c, 0xfc79u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xfc5cu); goto L_fc5c; }
    X86_TICK(c, 12);
    // 00fc7b  add esp, 4
    X86_AT(c, 0xfc7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00fc7e  ret 
    X86_AT(c, 0xfc7eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xfc37u, "ran off the end of a function");
}
}
