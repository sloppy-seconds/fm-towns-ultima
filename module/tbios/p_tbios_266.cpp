#include "p_tbios_funcs.h"
namespace p_tbios {
void f_0000f90f(X86Cpu& c) {
    X86_TICK(c, 16);
    // 00f90f  mov ch, byte ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf90fu);
    s8(c, 5, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))));
    // 00f916  mov ax, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf916u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))));
    // 00f91e  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xf91eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00f926  mov word ptr gs:[ebp + 0x376], 0
    X86_AT(c, 0xf926u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), 0x0u);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
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
    x86_fault(c, 0xf90fu, "ran off the end of a function");
}
void f_0000f916(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00f916  mov ax, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf916u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))));
    // 00f91e  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xf91eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00f926  mov word ptr gs:[ebp + 0x376], 0
    X86_AT(c, 0xf926u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), 0x0u);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
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
    x86_fault(c, 0xf916u, "ran off the end of a function");
}
void f_0000f91e(X86Cpu& c) {
    X86_TICK(c, 8);
    // 00f91e  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xf91eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00f926  mov word ptr gs:[ebp + 0x376], 0
    X86_AT(c, 0xf926u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), 0x0u);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
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
    x86_fault(c, 0xf91eu, "ran off the end of a function");
}
void f_0000f926(X86Cpu& c) {
    X86_TICK(c, 6);
    // 00f926  mov word ptr gs:[ebp + 0x376], 0
    X86_AT(c, 0xf926u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), 0x0u);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
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
    x86_fault(c, 0xf926u, "ran off the end of a function");
}
void f_0000f930(X86Cpu& c) {
    X86_TICK(c, 4);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
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
    x86_fault(c, 0xf930u, "ran off the end of a function");
}
void f_0000f931(X86Cpu& c) {
    X86_TICK(c, 2);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
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
    x86_fault(c, 0xf931u, "ran off the end of a function");
}
void f_0000f932(X86Cpu& c) {
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
    x86_fault(c, 0xf932u, "ran off the end of a function");
}
void f_0000f93a(X86Cpu& c) {
    goto L_f93a;
L_f932:
    X86_TICK(c, 4);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
L_f93a:
    X86_TICK(c, 74);
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
    x86_fault(c, 0xf93au, "ran off the end of a function");
}
void f_0000f942(X86Cpu& c) {
    goto L_f942;
L_f932:
    X86_TICK(c, 10);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
L_f942:
    X86_TICK(c, 68);
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
    x86_fault(c, 0xf942u, "ran off the end of a function");
}
void f_0000f944(X86Cpu& c) {
    goto L_f944;
L_f932:
    X86_TICK(c, 12);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
L_f944:
    X86_TICK(c, 66);
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
    x86_fault(c, 0xf944u, "ran off the end of a function");
}
void f_0000f94c(X86Cpu& c) {
    goto L_f94c;
L_f932:
    X86_TICK(c, 52);
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
L_f94c:
    X86_TICK(c, 26);
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
    x86_fault(c, 0xf94cu, "ran off the end of a function");
}
void f_0000f954(X86Cpu& c) {
    goto L_f954;
L_f932:
    X86_TICK(c, 54);
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
L_f954:
    X86_TICK(c, 24);
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
    x86_fault(c, 0xf954u, "ran off the end of a function");
}
void f_0000f95c(X86Cpu& c) {
    goto L_f95c;
L_f932:
    X86_TICK(c, 60);
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
L_f95c:
    X86_TICK(c, 18);
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
    x86_fault(c, 0xf95cu, "ran off the end of a function");
}
void f_0000f964(X86Cpu& c) {
    goto L_f964;
L_f932:
    X86_TICK(c, 62);
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
L_f964:
    X86_TICK(c, 16);
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
    x86_fault(c, 0xf964u, "ran off the end of a function");
}
void f_0000f96c(X86Cpu& c) {
    goto L_f96c;
L_f932:
    X86_TICK(c, 64);
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
L_f96c:
    X86_TICK(c, 14);
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
    x86_fault(c, 0xf96cu, "ran off the end of a function");
}
void f_0000f96e(X86Cpu& c) {
    goto L_f96e;
L_f932:
    X86_TICK(c, 66);
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
L_f96e:
    X86_TICK(c, 12);
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
    x86_fault(c, 0xf96eu, "ran off the end of a function");
}
void f_0000f975(X86Cpu& c) {
    goto L_f975;
L_f932:
    X86_TICK(c, 70);
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
L_f975:
    X86_TICK(c, 8);
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
    x86_fault(c, 0xf975u, "ran off the end of a function");
}
void f_0000f97d(X86Cpu& c) {
    goto L_f97d;
L_f932:
    X86_TICK(c, 74);
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
L_f97d:
    X86_TICK(c, 4);
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
    x86_fault(c, 0xf97du, "ran off the end of a function");
}
void f_0000f985(X86Cpu& c) {
    goto L_f985;
L_f932:
    X86_TICK(c, 76);
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
L_f985:
    X86_TICK(c, 2);
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
    x86_fault(c, 0xf985u, "ran off the end of a function");
}
void f_0000f98f(X86Cpu& c) {
    goto L_f98f;
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
    x86_fault(c, 0xf98fu, "ran off the end of a function");
}
void f_0000f992(X86Cpu& c) {
    goto L_f992;
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
    X86_TICK(c, 6);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
L_f992:
    X86_TICK(c, 9);
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
    x86_fault(c, 0xf992u, "ran off the end of a function");
}
void f_0000f993(X86Cpu& c) {
    goto L_f993;
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
    X86_TICK(c, 13);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
L_f993:
    X86_TICK(c, 2);
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
    x86_fault(c, 0xf993u, "ran off the end of a function");
}
void f_0000f996(X86Cpu& c) {
    goto L_f996;
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
    x86_fault(c, 0xf996u, "ran off the end of a function");
}
void f_0000f998(X86Cpu& c) {
    goto L_f998;
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
    X86_TICK(c, 2);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
L_f998:
    X86_TICK(c, 80);
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
    x86_fault(c, 0xf998u, "ran off the end of a function");
}
void f_0000f9a0(X86Cpu& c) {
    goto L_f9a0;
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
    X86_TICK(c, 7);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
L_f9a0:
    X86_TICK(c, 75);
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
    x86_fault(c, 0xf9a0u, "ran off the end of a function");
}
void f_0000f9a1(X86Cpu& c) {
    goto L_f9a1;
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
    X86_TICK(c, 9);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
L_f9a1:
    X86_TICK(c, 73);
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
    x86_fault(c, 0xf9a1u, "ran off the end of a function");
}
void f_0000f9a2(X86Cpu& c) {
    goto L_f9a2;
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
    X86_TICK(c, 11);
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
L_f9a2:
    X86_TICK(c, 71);
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
    x86_fault(c, 0xf9a2u, "ran off the end of a function");
}
void f_0000f9aa(X86Cpu& c) {
    goto L_f9aa;
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
    X86_TICK(c, 15);
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
L_f9aa:
    X86_TICK(c, 67);
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
    x86_fault(c, 0xf9aau, "ran off the end of a function");
}
void f_0000f9b2(X86Cpu& c) {
    goto L_f9b2;
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
    X86_TICK(c, 21);
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
L_f9b2:
    X86_TICK(c, 61);
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
    x86_fault(c, 0xf9b2u, "ran off the end of a function");
}
void f_0000f9b4(X86Cpu& c) {
    goto L_f9b4;
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
    X86_TICK(c, 23);
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
L_f9b4:
    X86_TICK(c, 59);
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
    x86_fault(c, 0xf9b4u, "ran off the end of a function");
}
void f_0000f9bc(X86Cpu& c) {
    goto L_f9bc;
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
    X86_TICK(c, 63);
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
L_f9bc:
    X86_TICK(c, 19);
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
    x86_fault(c, 0xf9bcu, "ran off the end of a function");
}
void f_0000f9c4(X86Cpu& c) {
    goto L_f9c4;
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
    X86_TICK(c, 65);
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
L_f9c4:
    X86_TICK(c, 17);
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
    x86_fault(c, 0xf9c4u, "ran off the end of a function");
}
}
