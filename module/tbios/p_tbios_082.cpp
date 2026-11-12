#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00008044(X86Cpu& c) {
    goto L_8044;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_8044:
    X86_TICK(c, 7);
    // 008044  call 0xb930
    X86_AT(c, 0x8044u);
    push32(c, 0x8049u); f_0000b930(c); X86_RET(c, 0x8049u);
    X86_TICK(c, 5);
    // 008049  jae 0x8054
    X86_AT(c, 0x8049u);
    if (x86_cc(c, 3)) { goto L_8054; }
    X86_TICK(c, 10);
    // 00804b  ret 
    X86_AT(c, 0x804bu);
    c.eip = pop32(c); return;
L_8054:
    X86_TICK(c, 107);
    // 008054  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x8054u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 008058  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8058u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 008060  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x8060u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 008065  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x8065u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 008069  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x8069u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 008070  movsx ecx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8070u);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 008078  imul ecx, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x8078u);
    c.r[1] = x86_imul2(c, c.r[1], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00807d  movsx edi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x807du);
    c.r[7] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008085  sar edi, 3
    X86_AT(c, 0x8085u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 008088  and edi, 0xfffffffc
    X86_AT(c, 0x8088u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 00808b  add edi, ecx
    X86_AT(c, 0x808bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[1], 0, 4); }
    // 00808d  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x808du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 008091  mov dword ptr gs:[ebp + 0x1d0], edi
    X86_AT(c, 0x8091u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)), c.r[7]);
    // 008098  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8098u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00809f  and bx, 0xffe0
    X86_AT(c, 0x809fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080a4  shld eax, ebx, 0x10
    X86_AT(c, 0x80a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0080a8  and ax, 0xffe0
    X86_AT(c, 0x80a8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080ac  cmp bx, ax
    X86_AT(c, 0x80acu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0080af  je 0x8140
    X86_AT(c, 0x80afu);
    if (x86_cc(c, 4)) { goto L_8140; }
    X86_TICK(c, 25);
    // 0080b5  push eax
    X86_AT(c, 0x80b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0080b6  push ebx
    X86_AT(c, 0x80b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0080b7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80b7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
L_8140:
    X86_TICK(c, 32);
    // 008140  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8140u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008148  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8148u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00814f  shld edx, ecx, 0x10
    X86_AT(c, 0x814fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x8044u, "ran off the end of a function");
}
void f_00008049(X86Cpu& c) {
    goto L_8049;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_8049:
    X86_TICK(c, 5);
    // 008049  jae 0x8054
    X86_AT(c, 0x8049u);
    if (x86_cc(c, 3)) { goto L_8054; }
    X86_TICK(c, 10);
    // 00804b  ret 
    X86_AT(c, 0x804bu);
    c.eip = pop32(c); return;
L_8054:
    X86_TICK(c, 107);
    // 008054  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x8054u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 008058  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8058u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 008060  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x8060u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 008065  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x8065u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 008069  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x8069u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 008070  movsx ecx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8070u);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 008078  imul ecx, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x8078u);
    c.r[1] = x86_imul2(c, c.r[1], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00807d  movsx edi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x807du);
    c.r[7] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008085  sar edi, 3
    X86_AT(c, 0x8085u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 008088  and edi, 0xfffffffc
    X86_AT(c, 0x8088u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 00808b  add edi, ecx
    X86_AT(c, 0x808bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[1], 0, 4); }
    // 00808d  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x808du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 008091  mov dword ptr gs:[ebp + 0x1d0], edi
    X86_AT(c, 0x8091u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)), c.r[7]);
    // 008098  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8098u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00809f  and bx, 0xffe0
    X86_AT(c, 0x809fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080a4  shld eax, ebx, 0x10
    X86_AT(c, 0x80a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0080a8  and ax, 0xffe0
    X86_AT(c, 0x80a8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080ac  cmp bx, ax
    X86_AT(c, 0x80acu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0080af  je 0x8140
    X86_AT(c, 0x80afu);
    if (x86_cc(c, 4)) { goto L_8140; }
    X86_TICK(c, 25);
    // 0080b5  push eax
    X86_AT(c, 0x80b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0080b6  push ebx
    X86_AT(c, 0x80b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0080b7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80b7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
L_8140:
    X86_TICK(c, 32);
    // 008140  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8140u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008148  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8148u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00814f  shld edx, ecx, 0x10
    X86_AT(c, 0x814fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x8049u, "ran off the end of a function");
}
void f_00008054(X86Cpu& c) {
    goto L_8054;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_8054:
    X86_TICK(c, 107);
    // 008054  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x8054u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 008058  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8058u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 008060  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x8060u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 008065  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x8065u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 008069  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x8069u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 008070  movsx ecx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8070u);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 008078  imul ecx, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x8078u);
    c.r[1] = x86_imul2(c, c.r[1], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00807d  movsx edi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x807du);
    c.r[7] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008085  sar edi, 3
    X86_AT(c, 0x8085u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 008088  and edi, 0xfffffffc
    X86_AT(c, 0x8088u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 00808b  add edi, ecx
    X86_AT(c, 0x808bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[1], 0, 4); }
    // 00808d  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x808du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 008091  mov dword ptr gs:[ebp + 0x1d0], edi
    X86_AT(c, 0x8091u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)), c.r[7]);
    // 008098  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8098u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00809f  and bx, 0xffe0
    X86_AT(c, 0x809fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080a4  shld eax, ebx, 0x10
    X86_AT(c, 0x80a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0080a8  and ax, 0xffe0
    X86_AT(c, 0x80a8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080ac  cmp bx, ax
    X86_AT(c, 0x80acu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0080af  je 0x8140
    X86_AT(c, 0x80afu);
    if (x86_cc(c, 4)) { goto L_8140; }
    X86_TICK(c, 25);
    // 0080b5  push eax
    X86_AT(c, 0x80b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0080b6  push ebx
    X86_AT(c, 0x80b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0080b7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80b7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
L_8140:
    X86_TICK(c, 32);
    // 008140  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8140u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008148  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8148u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00814f  shld edx, ecx, 0x10
    X86_AT(c, 0x814fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x8054u, "ran off the end of a function");
}
void f_00008058(X86Cpu& c) {
    goto L_8058;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_8058:
    X86_TICK(c, 103);
    // 008058  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8058u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 008060  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x8060u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 008065  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x8065u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 008069  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x8069u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 008070  movsx ecx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8070u);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 008078  imul ecx, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x8078u);
    c.r[1] = x86_imul2(c, c.r[1], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00807d  movsx edi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x807du);
    c.r[7] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008085  sar edi, 3
    X86_AT(c, 0x8085u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 008088  and edi, 0xfffffffc
    X86_AT(c, 0x8088u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 00808b  add edi, ecx
    X86_AT(c, 0x808bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[1], 0, 4); }
    // 00808d  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x808du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 008091  mov dword ptr gs:[ebp + 0x1d0], edi
    X86_AT(c, 0x8091u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)), c.r[7]);
    // 008098  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8098u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00809f  and bx, 0xffe0
    X86_AT(c, 0x809fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080a4  shld eax, ebx, 0x10
    X86_AT(c, 0x80a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0080a8  and ax, 0xffe0
    X86_AT(c, 0x80a8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080ac  cmp bx, ax
    X86_AT(c, 0x80acu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0080af  je 0x8140
    X86_AT(c, 0x80afu);
    if (x86_cc(c, 4)) { goto L_8140; }
    X86_TICK(c, 25);
    // 0080b5  push eax
    X86_AT(c, 0x80b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0080b6  push ebx
    X86_AT(c, 0x80b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0080b7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80b7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
L_8140:
    X86_TICK(c, 32);
    // 008140  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8140u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008148  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8148u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00814f  shld edx, ecx, 0x10
    X86_AT(c, 0x814fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x8058u, "ran off the end of a function");
}
void f_00008060(X86Cpu& c) {
    goto L_8060;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_8060:
    X86_TICK(c, 97);
    // 008060  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x8060u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 008065  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x8065u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 008069  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x8069u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 008070  movsx ecx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8070u);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 008078  imul ecx, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x8078u);
    c.r[1] = x86_imul2(c, c.r[1], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00807d  movsx edi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x807du);
    c.r[7] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008085  sar edi, 3
    X86_AT(c, 0x8085u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 008088  and edi, 0xfffffffc
    X86_AT(c, 0x8088u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 00808b  add edi, ecx
    X86_AT(c, 0x808bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[1], 0, 4); }
    // 00808d  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x808du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 008091  mov dword ptr gs:[ebp + 0x1d0], edi
    X86_AT(c, 0x8091u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)), c.r[7]);
    // 008098  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8098u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00809f  and bx, 0xffe0
    X86_AT(c, 0x809fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080a4  shld eax, ebx, 0x10
    X86_AT(c, 0x80a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0080a8  and ax, 0xffe0
    X86_AT(c, 0x80a8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080ac  cmp bx, ax
    X86_AT(c, 0x80acu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0080af  je 0x8140
    X86_AT(c, 0x80afu);
    if (x86_cc(c, 4)) { goto L_8140; }
    X86_TICK(c, 25);
    // 0080b5  push eax
    X86_AT(c, 0x80b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0080b6  push ebx
    X86_AT(c, 0x80b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0080b7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80b7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
L_8140:
    X86_TICK(c, 32);
    // 008140  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8140u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008148  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8148u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00814f  shld edx, ecx, 0x10
    X86_AT(c, 0x814fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x8060u, "ran off the end of a function");
}
void f_00008065(X86Cpu& c) {
    goto L_8065;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_8065:
    X86_TICK(c, 75);
    // 008065  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x8065u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 008069  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x8069u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 008070  movsx ecx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8070u);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 008078  imul ecx, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x8078u);
    c.r[1] = x86_imul2(c, c.r[1], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00807d  movsx edi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x807du);
    c.r[7] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008085  sar edi, 3
    X86_AT(c, 0x8085u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 008088  and edi, 0xfffffffc
    X86_AT(c, 0x8088u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 00808b  add edi, ecx
    X86_AT(c, 0x808bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[1], 0, 4); }
    // 00808d  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x808du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 008091  mov dword ptr gs:[ebp + 0x1d0], edi
    X86_AT(c, 0x8091u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)), c.r[7]);
    // 008098  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8098u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00809f  and bx, 0xffe0
    X86_AT(c, 0x809fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080a4  shld eax, ebx, 0x10
    X86_AT(c, 0x80a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0080a8  and ax, 0xffe0
    X86_AT(c, 0x80a8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080ac  cmp bx, ax
    X86_AT(c, 0x80acu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0080af  je 0x8140
    X86_AT(c, 0x80afu);
    if (x86_cc(c, 4)) { goto L_8140; }
    X86_TICK(c, 25);
    // 0080b5  push eax
    X86_AT(c, 0x80b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0080b6  push ebx
    X86_AT(c, 0x80b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0080b7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80b7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
L_8140:
    X86_TICK(c, 32);
    // 008140  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8140u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008148  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8148u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00814f  shld edx, ecx, 0x10
    X86_AT(c, 0x814fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x8065u, "ran off the end of a function");
}
void f_00008069(X86Cpu& c) {
    goto L_8069;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_8069:
    X86_TICK(c, 69);
    // 008069  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x8069u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 008070  movsx ecx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8070u);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 008078  imul ecx, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x8078u);
    c.r[1] = x86_imul2(c, c.r[1], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00807d  movsx edi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x807du);
    c.r[7] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008085  sar edi, 3
    X86_AT(c, 0x8085u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 008088  and edi, 0xfffffffc
    X86_AT(c, 0x8088u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 00808b  add edi, ecx
    X86_AT(c, 0x808bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[1], 0, 4); }
    // 00808d  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x808du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 008091  mov dword ptr gs:[ebp + 0x1d0], edi
    X86_AT(c, 0x8091u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)), c.r[7]);
    // 008098  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8098u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00809f  and bx, 0xffe0
    X86_AT(c, 0x809fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080a4  shld eax, ebx, 0x10
    X86_AT(c, 0x80a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0080a8  and ax, 0xffe0
    X86_AT(c, 0x80a8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080ac  cmp bx, ax
    X86_AT(c, 0x80acu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0080af  je 0x8140
    X86_AT(c, 0x80afu);
    if (x86_cc(c, 4)) { goto L_8140; }
    X86_TICK(c, 25);
    // 0080b5  push eax
    X86_AT(c, 0x80b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0080b6  push ebx
    X86_AT(c, 0x80b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0080b7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80b7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
L_8140:
    X86_TICK(c, 32);
    // 008140  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8140u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008148  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8148u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00814f  shld edx, ecx, 0x10
    X86_AT(c, 0x814fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x8069u, "ran off the end of a function");
}
void f_00008070(X86Cpu& c) {
    goto L_8070;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_8070:
    X86_TICK(c, 67);
    // 008070  movsx ecx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8070u);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 008078  imul ecx, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x8078u);
    c.r[1] = x86_imul2(c, c.r[1], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00807d  movsx edi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x807du);
    c.r[7] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008085  sar edi, 3
    X86_AT(c, 0x8085u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 008088  and edi, 0xfffffffc
    X86_AT(c, 0x8088u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 00808b  add edi, ecx
    X86_AT(c, 0x808bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[1], 0, 4); }
    // 00808d  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x808du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 008091  mov dword ptr gs:[ebp + 0x1d0], edi
    X86_AT(c, 0x8091u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)), c.r[7]);
    // 008098  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8098u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00809f  and bx, 0xffe0
    X86_AT(c, 0x809fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080a4  shld eax, ebx, 0x10
    X86_AT(c, 0x80a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0080a8  and ax, 0xffe0
    X86_AT(c, 0x80a8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080ac  cmp bx, ax
    X86_AT(c, 0x80acu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0080af  je 0x8140
    X86_AT(c, 0x80afu);
    if (x86_cc(c, 4)) { goto L_8140; }
    X86_TICK(c, 25);
    // 0080b5  push eax
    X86_AT(c, 0x80b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0080b6  push ebx
    X86_AT(c, 0x80b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0080b7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80b7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
L_8140:
    X86_TICK(c, 32);
    // 008140  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8140u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008148  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8148u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00814f  shld edx, ecx, 0x10
    X86_AT(c, 0x814fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x8070u, "ran off the end of a function");
}
void f_00008078(X86Cpu& c) {
    goto L_8078;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_8078:
    X86_TICK(c, 61);
    // 008078  imul ecx, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x8078u);
    c.r[1] = x86_imul2(c, c.r[1], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00807d  movsx edi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x807du);
    c.r[7] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008085  sar edi, 3
    X86_AT(c, 0x8085u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 008088  and edi, 0xfffffffc
    X86_AT(c, 0x8088u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 00808b  add edi, ecx
    X86_AT(c, 0x808bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[1], 0, 4); }
    // 00808d  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x808du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 008091  mov dword ptr gs:[ebp + 0x1d0], edi
    X86_AT(c, 0x8091u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)), c.r[7]);
    // 008098  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8098u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00809f  and bx, 0xffe0
    X86_AT(c, 0x809fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080a4  shld eax, ebx, 0x10
    X86_AT(c, 0x80a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0080a8  and ax, 0xffe0
    X86_AT(c, 0x80a8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080ac  cmp bx, ax
    X86_AT(c, 0x80acu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0080af  je 0x8140
    X86_AT(c, 0x80afu);
    if (x86_cc(c, 4)) { goto L_8140; }
    X86_TICK(c, 25);
    // 0080b5  push eax
    X86_AT(c, 0x80b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0080b6  push ebx
    X86_AT(c, 0x80b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0080b7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80b7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
L_8140:
    X86_TICK(c, 32);
    // 008140  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8140u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008148  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8148u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00814f  shld edx, ecx, 0x10
    X86_AT(c, 0x814fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x8078u, "ran off the end of a function");
}
void f_0000807d(X86Cpu& c) {
    goto L_807d;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_807d:
    X86_TICK(c, 39);
    // 00807d  movsx edi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x807du);
    c.r[7] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008085  sar edi, 3
    X86_AT(c, 0x8085u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 008088  and edi, 0xfffffffc
    X86_AT(c, 0x8088u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 00808b  add edi, ecx
    X86_AT(c, 0x808bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[1], 0, 4); }
    // 00808d  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x808du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 008091  mov dword ptr gs:[ebp + 0x1d0], edi
    X86_AT(c, 0x8091u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)), c.r[7]);
    // 008098  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8098u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00809f  and bx, 0xffe0
    X86_AT(c, 0x809fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080a4  shld eax, ebx, 0x10
    X86_AT(c, 0x80a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0080a8  and ax, 0xffe0
    X86_AT(c, 0x80a8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080ac  cmp bx, ax
    X86_AT(c, 0x80acu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0080af  je 0x8140
    X86_AT(c, 0x80afu);
    if (x86_cc(c, 4)) { goto L_8140; }
    X86_TICK(c, 25);
    // 0080b5  push eax
    X86_AT(c, 0x80b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0080b6  push ebx
    X86_AT(c, 0x80b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0080b7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80b7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
L_8140:
    X86_TICK(c, 32);
    // 008140  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8140u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008148  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8148u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00814f  shld edx, ecx, 0x10
    X86_AT(c, 0x814fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x807du, "ran off the end of a function");
}
void f_00008085(X86Cpu& c) {
    goto L_8085;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_8085:
    X86_TICK(c, 33);
    // 008085  sar edi, 3
    X86_AT(c, 0x8085u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 008088  and edi, 0xfffffffc
    X86_AT(c, 0x8088u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 00808b  add edi, ecx
    X86_AT(c, 0x808bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[1], 0, 4); }
    // 00808d  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x808du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 008091  mov dword ptr gs:[ebp + 0x1d0], edi
    X86_AT(c, 0x8091u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)), c.r[7]);
    // 008098  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8098u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00809f  and bx, 0xffe0
    X86_AT(c, 0x809fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080a4  shld eax, ebx, 0x10
    X86_AT(c, 0x80a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0080a8  and ax, 0xffe0
    X86_AT(c, 0x80a8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080ac  cmp bx, ax
    X86_AT(c, 0x80acu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0080af  je 0x8140
    X86_AT(c, 0x80afu);
    if (x86_cc(c, 4)) { goto L_8140; }
    X86_TICK(c, 25);
    // 0080b5  push eax
    X86_AT(c, 0x80b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0080b6  push ebx
    X86_AT(c, 0x80b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0080b7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80b7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
L_8140:
    X86_TICK(c, 32);
    // 008140  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8140u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008148  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8148u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00814f  shld edx, ecx, 0x10
    X86_AT(c, 0x814fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x8085u, "ran off the end of a function");
}
void f_00008088(X86Cpu& c) {
    goto L_8088;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_8088:
    X86_TICK(c, 30);
    // 008088  and edi, 0xfffffffc
    X86_AT(c, 0x8088u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 00808b  add edi, ecx
    X86_AT(c, 0x808bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[1], 0, 4); }
    // 00808d  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x808du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 008091  mov dword ptr gs:[ebp + 0x1d0], edi
    X86_AT(c, 0x8091u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)), c.r[7]);
    // 008098  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8098u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00809f  and bx, 0xffe0
    X86_AT(c, 0x809fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080a4  shld eax, ebx, 0x10
    X86_AT(c, 0x80a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0080a8  and ax, 0xffe0
    X86_AT(c, 0x80a8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080ac  cmp bx, ax
    X86_AT(c, 0x80acu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0080af  je 0x8140
    X86_AT(c, 0x80afu);
    if (x86_cc(c, 4)) { goto L_8140; }
    X86_TICK(c, 25);
    // 0080b5  push eax
    X86_AT(c, 0x80b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0080b6  push ebx
    X86_AT(c, 0x80b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0080b7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80b7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
L_8140:
    X86_TICK(c, 32);
    // 008140  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8140u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008148  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8148u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00814f  shld edx, ecx, 0x10
    X86_AT(c, 0x814fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x8088u, "ran off the end of a function");
}
void f_0000808b(X86Cpu& c) {
    goto L_808b;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_808b:
    X86_TICK(c, 28);
    // 00808b  add edi, ecx
    X86_AT(c, 0x808bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[1], 0, 4); }
    // 00808d  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x808du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 008091  mov dword ptr gs:[ebp + 0x1d0], edi
    X86_AT(c, 0x8091u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)), c.r[7]);
    // 008098  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8098u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00809f  and bx, 0xffe0
    X86_AT(c, 0x809fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080a4  shld eax, ebx, 0x10
    X86_AT(c, 0x80a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0080a8  and ax, 0xffe0
    X86_AT(c, 0x80a8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080ac  cmp bx, ax
    X86_AT(c, 0x80acu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0080af  je 0x8140
    X86_AT(c, 0x80afu);
    if (x86_cc(c, 4)) { goto L_8140; }
    X86_TICK(c, 25);
    // 0080b5  push eax
    X86_AT(c, 0x80b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0080b6  push ebx
    X86_AT(c, 0x80b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0080b7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80b7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
L_8140:
    X86_TICK(c, 32);
    // 008140  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8140u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008148  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8148u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00814f  shld edx, ecx, 0x10
    X86_AT(c, 0x814fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x808bu, "ran off the end of a function");
}
void f_0000808d(X86Cpu& c) {
    goto L_808d;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_808d:
    X86_TICK(c, 26);
    // 00808d  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x808du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 008091  mov dword ptr gs:[ebp + 0x1d0], edi
    X86_AT(c, 0x8091u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)), c.r[7]);
    // 008098  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8098u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00809f  and bx, 0xffe0
    X86_AT(c, 0x809fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080a4  shld eax, ebx, 0x10
    X86_AT(c, 0x80a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0080a8  and ax, 0xffe0
    X86_AT(c, 0x80a8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080ac  cmp bx, ax
    X86_AT(c, 0x80acu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0080af  je 0x8140
    X86_AT(c, 0x80afu);
    if (x86_cc(c, 4)) { goto L_8140; }
    X86_TICK(c, 25);
    // 0080b5  push eax
    X86_AT(c, 0x80b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0080b6  push ebx
    X86_AT(c, 0x80b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0080b7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80b7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
L_8140:
    X86_TICK(c, 32);
    // 008140  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8140u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008148  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8148u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00814f  shld edx, ecx, 0x10
    X86_AT(c, 0x814fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x808du, "ran off the end of a function");
}
void f_00008091(X86Cpu& c) {
    goto L_8091;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_8091:
    X86_TICK(c, 20);
    // 008091  mov dword ptr gs:[ebp + 0x1d0], edi
    X86_AT(c, 0x8091u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)), c.r[7]);
    // 008098  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8098u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00809f  and bx, 0xffe0
    X86_AT(c, 0x809fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080a4  shld eax, ebx, 0x10
    X86_AT(c, 0x80a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0080a8  and ax, 0xffe0
    X86_AT(c, 0x80a8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080ac  cmp bx, ax
    X86_AT(c, 0x80acu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0080af  je 0x8140
    X86_AT(c, 0x80afu);
    if (x86_cc(c, 4)) { goto L_8140; }
    X86_TICK(c, 25);
    // 0080b5  push eax
    X86_AT(c, 0x80b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0080b6  push ebx
    X86_AT(c, 0x80b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0080b7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80b7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
L_8140:
    X86_TICK(c, 32);
    // 008140  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8140u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008148  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8148u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00814f  shld edx, ecx, 0x10
    X86_AT(c, 0x814fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x8091u, "ran off the end of a function");
}
void f_00008098(X86Cpu& c) {
    goto L_8098;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_8098:
    X86_TICK(c, 18);
    // 008098  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8098u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00809f  and bx, 0xffe0
    X86_AT(c, 0x809fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080a4  shld eax, ebx, 0x10
    X86_AT(c, 0x80a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0080a8  and ax, 0xffe0
    X86_AT(c, 0x80a8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080ac  cmp bx, ax
    X86_AT(c, 0x80acu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0080af  je 0x8140
    X86_AT(c, 0x80afu);
    if (x86_cc(c, 4)) { goto L_8140; }
    X86_TICK(c, 25);
    // 0080b5  push eax
    X86_AT(c, 0x80b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0080b6  push ebx
    X86_AT(c, 0x80b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0080b7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80b7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
L_8140:
    X86_TICK(c, 32);
    // 008140  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8140u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008148  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8148u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00814f  shld edx, ecx, 0x10
    X86_AT(c, 0x814fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x8098u, "ran off the end of a function");
}
void f_0000809f(X86Cpu& c) {
    goto L_809f;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_809f:
    X86_TICK(c, 14);
    // 00809f  and bx, 0xffe0
    X86_AT(c, 0x809fu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080a4  shld eax, ebx, 0x10
    X86_AT(c, 0x80a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0080a8  and ax, 0xffe0
    X86_AT(c, 0x80a8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080ac  cmp bx, ax
    X86_AT(c, 0x80acu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0080af  je 0x8140
    X86_AT(c, 0x80afu);
    if (x86_cc(c, 4)) { goto L_8140; }
    X86_TICK(c, 25);
    // 0080b5  push eax
    X86_AT(c, 0x80b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0080b6  push ebx
    X86_AT(c, 0x80b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0080b7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80b7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
L_8140:
    X86_TICK(c, 32);
    // 008140  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8140u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008148  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8148u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00814f  shld edx, ecx, 0x10
    X86_AT(c, 0x814fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x809fu, "ran off the end of a function");
}
void f_000080a4(X86Cpu& c) {
    goto L_80a4;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_80a4:
    X86_TICK(c, 12);
    // 0080a4  shld eax, ebx, 0x10
    X86_AT(c, 0x80a4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0080a8  and ax, 0xffe0
    X86_AT(c, 0x80a8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080ac  cmp bx, ax
    X86_AT(c, 0x80acu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0080af  je 0x8140
    X86_AT(c, 0x80afu);
    if (x86_cc(c, 4)) { goto L_8140; }
    X86_TICK(c, 25);
    // 0080b5  push eax
    X86_AT(c, 0x80b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0080b6  push ebx
    X86_AT(c, 0x80b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0080b7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80b7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
L_8140:
    X86_TICK(c, 32);
    // 008140  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8140u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008148  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8148u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00814f  shld edx, ecx, 0x10
    X86_AT(c, 0x814fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x80a4u, "ran off the end of a function");
}
void f_000080a8(X86Cpu& c) {
    goto L_80a8;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_80a8:
    X86_TICK(c, 9);
    // 0080a8  and ax, 0xffe0
    X86_AT(c, 0x80a8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0080ac  cmp bx, ax
    X86_AT(c, 0x80acu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0080af  je 0x8140
    X86_AT(c, 0x80afu);
    if (x86_cc(c, 4)) { goto L_8140; }
    X86_TICK(c, 25);
    // 0080b5  push eax
    X86_AT(c, 0x80b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0080b6  push ebx
    X86_AT(c, 0x80b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0080b7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80b7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
L_8140:
    X86_TICK(c, 32);
    // 008140  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8140u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008148  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8148u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00814f  shld edx, ecx, 0x10
    X86_AT(c, 0x814fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x80a8u, "ran off the end of a function");
}
void f_000080ac(X86Cpu& c) {
    goto L_80ac;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_80ac:
    X86_TICK(c, 7);
    // 0080ac  cmp bx, ax
    X86_AT(c, 0x80acu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0080af  je 0x8140
    X86_AT(c, 0x80afu);
    if (x86_cc(c, 4)) { goto L_8140; }
    X86_TICK(c, 25);
    // 0080b5  push eax
    X86_AT(c, 0x80b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0080b6  push ebx
    X86_AT(c, 0x80b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0080b7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80b7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
L_8140:
    X86_TICK(c, 32);
    // 008140  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8140u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008148  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8148u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00814f  shld edx, ecx, 0x10
    X86_AT(c, 0x814fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x80acu, "ran off the end of a function");
}
void f_000080af(X86Cpu& c) {
    goto L_80af;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_80af:
    X86_TICK(c, 5);
    // 0080af  je 0x8140
    X86_AT(c, 0x80afu);
    if (x86_cc(c, 4)) { goto L_8140; }
    X86_TICK(c, 25);
    // 0080b5  push eax
    X86_AT(c, 0x80b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0080b6  push ebx
    X86_AT(c, 0x80b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0080b7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80b7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
L_8140:
    X86_TICK(c, 32);
    // 008140  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8140u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008148  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8148u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00814f  shld edx, ecx, 0x10
    X86_AT(c, 0x814fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x80afu, "ran off the end of a function");
}
void f_000080b5(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0080b5  push eax
    X86_AT(c, 0x80b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0080b6  push ebx
    X86_AT(c, 0x80b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0080b7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80b7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x80b5u, "ran off the end of a function");
}
void f_000080b6(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0080b6  push ebx
    X86_AT(c, 0x80b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0080b7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80b7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x80b6u, "ran off the end of a function");
}
void f_000080b7(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0080b7  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80b7u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x80b7u, "ran off the end of a function");
}
void f_000080bf(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0080bf  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x80bfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x80bfu, "ran off the end of a function");
}
void f_000080c7(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0080c7  and eax, 0x1f
    X86_AT(c, 0x80c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x80c7u, "ran off the end of a function");
}
void f_000080cc(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0080cc  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x80ccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x80ccu, "ran off the end of a function");
}
void f_000080d4(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0080d4  call 0x6a41
    X86_AT(c, 0x80d4u);
    push32(c, 0x80d9u); f_00006a41(c); X86_RET(c, 0x80d9u);
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x80d4u, "ran off the end of a function");
}
void f_000080d9(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0080d9  pop ebx
    X86_AT(c, 0x80d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x80d9u, "ran off the end of a function");
}
void f_000080da(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0080da  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x80dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x80dau, "ran off the end of a function");
}
void f_000080e2(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0080e2  or byte ptr gs:[ebp + 0x10a], 0x80
    X86_AT(c, 0x80e2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x80e2u, "ran off the end of a function");
}
void f_000080ea(X86Cpu& c) {
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x80eau, "ran off the end of a function");
}
void f_000080ee(X86Cpu& c) {
    goto L_80ee;
L_80ea:
    X86_TICK(c, 2);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
L_80ee:
    X86_TICK(c, 12);
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x80eeu, "ran off the end of a function");
}
void f_000080f2(X86Cpu& c) {
    goto L_80f2;
L_80ea:
    X86_TICK(c, 9);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
L_80f2:
    X86_TICK(c, 5);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x80f2u, "ran off the end of a function");
}
void f_000080f4(X86Cpu& c) {
    goto L_80f4;
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
L_80f4:
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x80f4u, "ran off the end of a function");
}
void f_000080fc(X86Cpu& c) {
    goto L_80fc;
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 4);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
L_80fc:
    X86_TICK(c, 11);
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x80fcu, "ran off the end of a function");
}
void f_00008101(X86Cpu& c) {
    goto L_8101;
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 6);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
L_8101:
    X86_TICK(c, 9);
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8101u, "ran off the end of a function");
}
void f_00008102(X86Cpu& c) {
    goto L_8102;
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 8);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
L_8102:
    X86_TICK(c, 7);
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8102u, "ran off the end of a function");
}
void f_00008107(X86Cpu& c) {
    goto L_8107;
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
L_8107:
    X86_TICK(c, 18);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8107u, "ran off the end of a function");
}
void f_00008108(X86Cpu& c) {
    goto L_8108;
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 4);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_8108:
    X86_TICK(c, 14);
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8108u, "ran off the end of a function");
}
void f_00008110(X86Cpu& c) {
    goto L_8110;
L_80ea:
    X86_TICK(c, 14);
    // 0080ea  add bx, 0x20
    X86_AT(c, 0x80eau);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0080ee  cmp word ptr [esp], bx
    X86_AT(c, 0x80eeu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0080f2  je 0x8112
    X86_AT(c, 0x80f2u);
    if (x86_cc(c, 4)) { goto L_8112; }
    X86_TICK(c, 15);
    // 0080f4  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x80f4u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0080fc  mov eax, 0xffffffff
    X86_AT(c, 0x80fcu);
    c.r[0] = 0xFFFFFFFFu;
    // 008101  push ebx
    X86_AT(c, 0x8101u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008102  call 0x6a41
    X86_AT(c, 0x8102u);
    push32(c, 0x8107u); f_00006a41(c); X86_RET(c, 0x8107u);
    X86_TICK(c, 11);
    // 008107  pop ebx
    X86_AT(c, 0x8107u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008108  add dword ptr gs:[ebp + 0x1d0], 4
    X86_AT(c, 0x8108u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
L_8110:
    X86_TICK(c, 7);
    // 008110  jmp 0x80ea
    X86_AT(c, 0x8110u);
    X86_POLL(c, 0x80eau); goto L_80ea;
L_8112:
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8110u, "ran off the end of a function");
}
void f_00008112(X86Cpu& c) {
    X86_TICK(c, 23);
    // 008112  add esp, 4
    X86_AT(c, 0x8112u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8112u, "ran off the end of a function");
}
void f_00008115(X86Cpu& c) {
    X86_TICK(c, 21);
    // 008115  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8115u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8115u, "ran off the end of a function");
}
void f_0000811d(X86Cpu& c) {
    X86_TICK(c, 17);
    // 00811d  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x811du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x811du, "ran off the end of a function");
}
void f_00008125(X86Cpu& c) {
    X86_TICK(c, 13);
    // 008125  and eax, 0x1f
    X86_AT(c, 0x8125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8125u, "ran off the end of a function");
}
void f_0000812a(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00812a  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x812au);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x812au, "ran off the end of a function");
}
void f_00008132(X86Cpu& c) {
    X86_TICK(c, 7);
    // 008132  call 0x6a41
    X86_AT(c, 0x8132u);
    push32(c, 0x8137u); f_00006a41(c); X86_RET(c, 0x8137u);
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8132u, "ran off the end of a function");
}
void f_00008137(X86Cpu& c) {
    X86_TICK(c, 17);
    // 008137  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8137u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8137u, "ran off the end of a function");
}
void f_0000813f(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00813f  ret 
    X86_AT(c, 0x813fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x813fu, "ran off the end of a function");
}
void f_00008140(X86Cpu& c) {
    goto L_8140;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_8140:
    X86_TICK(c, 32);
    // 008140  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8140u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008148  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8148u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00814f  shld edx, ecx, 0x10
    X86_AT(c, 0x814fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x8140u, "ran off the end of a function");
}
void f_00008148(X86Cpu& c) {
    goto L_8148;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_8148:
    X86_TICK(c, 28);
    // 008148  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8148u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00814f  shld edx, ecx, 0x10
    X86_AT(c, 0x814fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x8148u, "ran off the end of a function");
}
void f_0000814f(X86Cpu& c) {
    goto L_814f;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_814f:
    X86_TICK(c, 24);
    // 00814f  shld edx, ecx, 0x10
    X86_AT(c, 0x814fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x814fu, "ran off the end of a function");
}
void f_00008153(X86Cpu& c) {
    goto L_8153;
L_6a41:
    X86_TICK(c, 12);
    // 006a41  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x6a41u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006a46  je 0x6a60
    X86_AT(c, 0x6a46u);
    if (x86_cc(c, 4)) { goto L_6a60; }
    X86_TICK(c, 16);
    // 006a48  mov edi, dword ptr gs:[ebp + 0x1d0]
    X86_AT(c, 0x6a48u);
    c.r[7] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D0u)));
    // 006a4f  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x6a4fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 006a54  jne 0x6a5d
    X86_AT(c, 0x6a54u);
    if (x86_cc(c, 5)) { goto L_6a5d; }
    X86_TICK(c, 8);
    // 006a56  mov ecx, dword ptr ss:[edi]
    X86_AT(c, 0x6a56u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7])));
    // 006a59  not ecx
    X86_AT(c, 0x6a59u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 006a5b  and eax, ecx
    X86_AT(c, 0x6a5bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_6a5d:
    X86_TICK(c, 7);
    // 006a5d  or dword ptr ss:[edi], eax
    X86_AT(c, 0x6a5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_6a60:
    X86_TICK(c, 7);
    // 006a60  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x6a60u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_8153:
    X86_TICK(c, 21);
    // 008153  and eax, 0x1f
    X86_AT(c, 0x8153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008158  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8158u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008160  and ecx, 0x1f
    X86_AT(c, 0x8160u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008163  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8163u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 00816b  jmp 0x6a41
    X86_AT(c, 0x816bu);
    X86_POLL(c, 0x6a41u); goto L_6a41;
    x86_fault(c, 0x8153u, "ran off the end of a function");
}
}
