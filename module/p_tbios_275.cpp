#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00010a5b(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010a5b  call 0x10a93
    X86_AT(c, 0x10a5bu);
    push32(c, 0x10a60u); f_00010a93(c); X86_RET(c, 0x10a60u);
    X86_TICK(c, 20);
    // 010a60  mov bx, ax
    X86_AT(c, 0x10a60u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 010a63  add word ptr [edi + 0x13], bx
    X86_AT(c, 0x10a63u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 010a67  mov cl, byte ptr [edi + 0xc]
    X86_AT(c, 0x10a67u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))));
    // 010a6a  call 0x10b0d
    X86_AT(c, 0x10a6au);
    push32(c, 0x10a6fu); f_00010b0d(c); X86_RET(c, 0x10a6fu);
    X86_TICK(c, 12);
    // 010a6f  shl cl, 4
    X86_AT(c, 0x10a6fu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 010a72  mov ah, cl
    X86_AT(c, 0x10a72u);
    s8(c, 4, g8(c, 1));
    // 010a74  call 0x10b0a
    X86_AT(c, 0x10a74u);
    push32(c, 0x10a79u); f_00010b0a(c); X86_RET(c, 0x10a79u);
    X86_TICK(c, 22);
    // 010a79  popfd 
    X86_AT(c, 0x10a79u);
    x86_popfd(c, 4);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a5bu, "ran off the end of a function");
}
void f_00010a60(X86Cpu& c) {
    X86_TICK(c, 20);
    // 010a60  mov bx, ax
    X86_AT(c, 0x10a60u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
    // 010a63  add word ptr [edi + 0x13], bx
    X86_AT(c, 0x10a63u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 010a67  mov cl, byte ptr [edi + 0xc]
    X86_AT(c, 0x10a67u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))));
    // 010a6a  call 0x10b0d
    X86_AT(c, 0x10a6au);
    push32(c, 0x10a6fu); f_00010b0d(c); X86_RET(c, 0x10a6fu);
    X86_TICK(c, 12);
    // 010a6f  shl cl, 4
    X86_AT(c, 0x10a6fu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 010a72  mov ah, cl
    X86_AT(c, 0x10a72u);
    s8(c, 4, g8(c, 1));
    // 010a74  call 0x10b0a
    X86_AT(c, 0x10a74u);
    push32(c, 0x10a79u); f_00010b0a(c); X86_RET(c, 0x10a79u);
    X86_TICK(c, 22);
    // 010a79  popfd 
    X86_AT(c, 0x10a79u);
    x86_popfd(c, 4);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a60u, "ran off the end of a function");
}
void f_00010a63(X86Cpu& c) {
    X86_TICK(c, 18);
    // 010a63  add word ptr [edi + 0x13], bx
    X86_AT(c, 0x10a63u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x13u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 010a67  mov cl, byte ptr [edi + 0xc]
    X86_AT(c, 0x10a67u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))));
    // 010a6a  call 0x10b0d
    X86_AT(c, 0x10a6au);
    push32(c, 0x10a6fu); f_00010b0d(c); X86_RET(c, 0x10a6fu);
    X86_TICK(c, 12);
    // 010a6f  shl cl, 4
    X86_AT(c, 0x10a6fu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 010a72  mov ah, cl
    X86_AT(c, 0x10a72u);
    s8(c, 4, g8(c, 1));
    // 010a74  call 0x10b0a
    X86_AT(c, 0x10a74u);
    push32(c, 0x10a79u); f_00010b0a(c); X86_RET(c, 0x10a79u);
    X86_TICK(c, 22);
    // 010a79  popfd 
    X86_AT(c, 0x10a79u);
    x86_popfd(c, 4);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a63u, "ran off the end of a function");
}
void f_00010a67(X86Cpu& c) {
    X86_TICK(c, 11);
    // 010a67  mov cl, byte ptr [edi + 0xc]
    X86_AT(c, 0x10a67u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))));
    // 010a6a  call 0x10b0d
    X86_AT(c, 0x10a6au);
    push32(c, 0x10a6fu); f_00010b0d(c); X86_RET(c, 0x10a6fu);
    X86_TICK(c, 12);
    // 010a6f  shl cl, 4
    X86_AT(c, 0x10a6fu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 010a72  mov ah, cl
    X86_AT(c, 0x10a72u);
    s8(c, 4, g8(c, 1));
    // 010a74  call 0x10b0a
    X86_AT(c, 0x10a74u);
    push32(c, 0x10a79u); f_00010b0a(c); X86_RET(c, 0x10a79u);
    X86_TICK(c, 22);
    // 010a79  popfd 
    X86_AT(c, 0x10a79u);
    x86_popfd(c, 4);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a67u, "ran off the end of a function");
}
void f_00010a6a(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010a6a  call 0x10b0d
    X86_AT(c, 0x10a6au);
    push32(c, 0x10a6fu); f_00010b0d(c); X86_RET(c, 0x10a6fu);
    X86_TICK(c, 12);
    // 010a6f  shl cl, 4
    X86_AT(c, 0x10a6fu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 010a72  mov ah, cl
    X86_AT(c, 0x10a72u);
    s8(c, 4, g8(c, 1));
    // 010a74  call 0x10b0a
    X86_AT(c, 0x10a74u);
    push32(c, 0x10a79u); f_00010b0a(c); X86_RET(c, 0x10a79u);
    X86_TICK(c, 22);
    // 010a79  popfd 
    X86_AT(c, 0x10a79u);
    x86_popfd(c, 4);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a6au, "ran off the end of a function");
}
void f_00010a6f(X86Cpu& c) {
    X86_TICK(c, 12);
    // 010a6f  shl cl, 4
    X86_AT(c, 0x10a6fu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 010a72  mov ah, cl
    X86_AT(c, 0x10a72u);
    s8(c, 4, g8(c, 1));
    // 010a74  call 0x10b0a
    X86_AT(c, 0x10a74u);
    push32(c, 0x10a79u); f_00010b0a(c); X86_RET(c, 0x10a79u);
    X86_TICK(c, 22);
    // 010a79  popfd 
    X86_AT(c, 0x10a79u);
    x86_popfd(c, 4);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a6fu, "ran off the end of a function");
}
void f_00010a72(X86Cpu& c) {
    X86_TICK(c, 9);
    // 010a72  mov ah, cl
    X86_AT(c, 0x10a72u);
    s8(c, 4, g8(c, 1));
    // 010a74  call 0x10b0a
    X86_AT(c, 0x10a74u);
    push32(c, 0x10a79u); f_00010b0a(c); X86_RET(c, 0x10a79u);
    X86_TICK(c, 22);
    // 010a79  popfd 
    X86_AT(c, 0x10a79u);
    x86_popfd(c, 4);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a72u, "ran off the end of a function");
}
void f_00010a74(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010a74  call 0x10b0a
    X86_AT(c, 0x10a74u);
    push32(c, 0x10a79u); f_00010b0a(c); X86_RET(c, 0x10a79u);
    X86_TICK(c, 22);
    // 010a79  popfd 
    X86_AT(c, 0x10a79u);
    x86_popfd(c, 4);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a74u, "ran off the end of a function");
}
void f_00010a79(X86Cpu& c) {
    X86_TICK(c, 22);
    // 010a79  popfd 
    X86_AT(c, 0x10a79u);
    x86_popfd(c, 4);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a79u, "ran off the end of a function");
}
void f_00010a7a(X86Cpu& c) {
    X86_TICK(c, 16);
    // 010a7a  and cl, 0xf
    X86_AT(c, 0x10a7au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a7au, "ran off the end of a function");
}
void f_00010a7d(X86Cpu& c) {
    X86_TICK(c, 14);
    // 010a7d  or cl, ah
    X86_AT(c, 0x10a7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v | g8(c, 4), 1)); }
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a7du, "ran off the end of a function");
}
void f_00010a7f(X86Cpu& c) {
    X86_TICK(c, 12);
    // 010a7f  neg cl
    X86_AT(c, 0x10a7fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_neg(c, v, 1)); }
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a7fu, "ran off the end of a function");
}
void f_00010a81(X86Cpu& c) {
    X86_TICK(c, 10);
    // 010a81  movsx ax, cl
    X86_AT(c, 0x10a81u);
    s16(c, 0, (uint32_t)(int32_t)(int8_t)g8(c, 1));
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a81u, "ran off the end of a function");
}
void f_00010a85(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010a85  call 0x10a93
    X86_AT(c, 0x10a85u);
    push32(c, 0x10a8au); f_00010a93(c); X86_RET(c, 0x10a8au);
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a85u, "ran off the end of a function");
}
void f_00010a8a(X86Cpu& c) {
    X86_TICK(c, 22);
    // 010a8a  mov edx, eax
    X86_AT(c, 0x10a8au);
    c.r[2] = c.r[0];
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a8au, "ran off the end of a function");
}
void f_00010a8c(X86Cpu& c) {
    X86_TICK(c, 20);
    // 010a8c  add word ptr [edi + 0x15], dx
    X86_AT(c, 0x10a8cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x15u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a8cu, "ran off the end of a function");
}
void f_00010a90(X86Cpu& c) {
    X86_TICK(c, 13);
    // 010a90  xchg ebx, edx
    X86_AT(c, 0x10a90u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[2]; c.r[2] = t; }
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a90u, "ran off the end of a function");
}
void f_00010a92(X86Cpu& c) {
    X86_TICK(c, 10);
    // 010a92  ret 
    X86_AT(c, 0x10a92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a92u, "ran off the end of a function");
}
void f_00010a93(X86Cpu& c) {
    X86_TICK(c, 19);
    // 010a93  enter 6, 0
    X86_AT(c, 0x10a93u);
    x86_enter(c, 0x6u, 0x0u, 4);
    // 010a97  test ax, ax
    X86_AT(c, 0x10a97u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 010a9a  pushfd 
    X86_AT(c, 0x10a9au);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010a9b  jge 0x10aa4
    X86_AT(c, 0x10a9bu);
    if (x86_cc(c, 13)) { goto L_10aa4; }
    X86_TICK(c, 2);
    // 010aa1  neg ax
    X86_AT(c, 0x10aa1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aa4:
    X86_TICK(c, 12);
    // 010aa4  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x10aa4u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 010aa8  shr ax, 2
    X86_AT(c, 0x10aa8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 010aac  cmp ax, 5
    X86_AT(c, 0x10aacu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x5u, 0, 2);
    // 010ab0  jb 0x10aba
    X86_AT(c, 0x10ab0u);
    if (x86_cc(c, 2)) { goto L_10aba; }
    X86_TICK(c, 2);
    // 010ab6  mov ax, 4
    X86_AT(c, 0x10ab6u);
    s16(c, 0, 0x4u);
L_10aba:
    X86_TICK(c, 64);
    // 010aba  inc ax
    X86_AT(c, 0x10abau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 010abc  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x10abcu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 010ac0  dec ax
    X86_AT(c, 0x10ac0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 010ac2  mov word ptr [ebp - 6], ax
    X86_AT(c, 0x10ac2u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), (c.r[0] & 0xFFFFu));
    // 010ac6  shl ax, 2
    X86_AT(c, 0x10ac6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 010aca  sub ax, word ptr [ebp - 2]
    X86_AT(c, 0x10acau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0, 2)); }
    // 010ace  neg ax
    X86_AT(c, 0x10aceu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 010ad1  mul byte ptr [ebp - 4]
    X86_AT(c, 0x10ad1u);
    x86_mul(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 1);
    // 010ad4  movzx edx, word ptr [ebp - 6]
    X86_AT(c, 0x10ad4u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)));
    // 010ad8  add ax, word ptr cs:[edx*2 + 0x10aed]
    X86_AT(c, 0x10ad8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[2] * 2 + 0x10AEDu))), 0, 2)); }
    // 010ae1  popfd 
    X86_AT(c, 0x10ae1u);
    x86_popfd(c, 4);
    // 010ae2  jge 0x10aeb
    X86_AT(c, 0x10ae2u);
    if (x86_cc(c, 13)) { goto L_10aeb; }
    X86_TICK(c, 2);
    // 010ae8  neg ax
    X86_AT(c, 0x10ae8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aeb:
    X86_TICK(c, 16);
    // 010aeb  leave 
    X86_AT(c, 0x10aebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a93u, "ran off the end of a function");
}
void f_00010a97(X86Cpu& c) {
    X86_TICK(c, 13);
    // 010a97  test ax, ax
    X86_AT(c, 0x10a97u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 010a9a  pushfd 
    X86_AT(c, 0x10a9au);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010a9b  jge 0x10aa4
    X86_AT(c, 0x10a9bu);
    if (x86_cc(c, 13)) { goto L_10aa4; }
    X86_TICK(c, 2);
    // 010aa1  neg ax
    X86_AT(c, 0x10aa1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aa4:
    X86_TICK(c, 12);
    // 010aa4  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x10aa4u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 010aa8  shr ax, 2
    X86_AT(c, 0x10aa8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 010aac  cmp ax, 5
    X86_AT(c, 0x10aacu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x5u, 0, 2);
    // 010ab0  jb 0x10aba
    X86_AT(c, 0x10ab0u);
    if (x86_cc(c, 2)) { goto L_10aba; }
    X86_TICK(c, 2);
    // 010ab6  mov ax, 4
    X86_AT(c, 0x10ab6u);
    s16(c, 0, 0x4u);
L_10aba:
    X86_TICK(c, 64);
    // 010aba  inc ax
    X86_AT(c, 0x10abau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 010abc  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x10abcu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 010ac0  dec ax
    X86_AT(c, 0x10ac0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 010ac2  mov word ptr [ebp - 6], ax
    X86_AT(c, 0x10ac2u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), (c.r[0] & 0xFFFFu));
    // 010ac6  shl ax, 2
    X86_AT(c, 0x10ac6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 010aca  sub ax, word ptr [ebp - 2]
    X86_AT(c, 0x10acau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0, 2)); }
    // 010ace  neg ax
    X86_AT(c, 0x10aceu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 010ad1  mul byte ptr [ebp - 4]
    X86_AT(c, 0x10ad1u);
    x86_mul(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 1);
    // 010ad4  movzx edx, word ptr [ebp - 6]
    X86_AT(c, 0x10ad4u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)));
    // 010ad8  add ax, word ptr cs:[edx*2 + 0x10aed]
    X86_AT(c, 0x10ad8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[2] * 2 + 0x10AEDu))), 0, 2)); }
    // 010ae1  popfd 
    X86_AT(c, 0x10ae1u);
    x86_popfd(c, 4);
    // 010ae2  jge 0x10aeb
    X86_AT(c, 0x10ae2u);
    if (x86_cc(c, 13)) { goto L_10aeb; }
    X86_TICK(c, 2);
    // 010ae8  neg ax
    X86_AT(c, 0x10ae8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aeb:
    X86_TICK(c, 16);
    // 010aeb  leave 
    X86_AT(c, 0x10aebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a97u, "ran off the end of a function");
}
void f_00010a9a(X86Cpu& c) {
    X86_TICK(c, 11);
    // 010a9a  pushfd 
    X86_AT(c, 0x10a9au);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010a9b  jge 0x10aa4
    X86_AT(c, 0x10a9bu);
    if (x86_cc(c, 13)) { goto L_10aa4; }
    X86_TICK(c, 2);
    // 010aa1  neg ax
    X86_AT(c, 0x10aa1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aa4:
    X86_TICK(c, 12);
    // 010aa4  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x10aa4u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 010aa8  shr ax, 2
    X86_AT(c, 0x10aa8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 010aac  cmp ax, 5
    X86_AT(c, 0x10aacu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x5u, 0, 2);
    // 010ab0  jb 0x10aba
    X86_AT(c, 0x10ab0u);
    if (x86_cc(c, 2)) { goto L_10aba; }
    X86_TICK(c, 2);
    // 010ab6  mov ax, 4
    X86_AT(c, 0x10ab6u);
    s16(c, 0, 0x4u);
L_10aba:
    X86_TICK(c, 64);
    // 010aba  inc ax
    X86_AT(c, 0x10abau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 010abc  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x10abcu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 010ac0  dec ax
    X86_AT(c, 0x10ac0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 010ac2  mov word ptr [ebp - 6], ax
    X86_AT(c, 0x10ac2u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), (c.r[0] & 0xFFFFu));
    // 010ac6  shl ax, 2
    X86_AT(c, 0x10ac6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 010aca  sub ax, word ptr [ebp - 2]
    X86_AT(c, 0x10acau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0, 2)); }
    // 010ace  neg ax
    X86_AT(c, 0x10aceu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 010ad1  mul byte ptr [ebp - 4]
    X86_AT(c, 0x10ad1u);
    x86_mul(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 1);
    // 010ad4  movzx edx, word ptr [ebp - 6]
    X86_AT(c, 0x10ad4u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)));
    // 010ad8  add ax, word ptr cs:[edx*2 + 0x10aed]
    X86_AT(c, 0x10ad8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[2] * 2 + 0x10AEDu))), 0, 2)); }
    // 010ae1  popfd 
    X86_AT(c, 0x10ae1u);
    x86_popfd(c, 4);
    // 010ae2  jge 0x10aeb
    X86_AT(c, 0x10ae2u);
    if (x86_cc(c, 13)) { goto L_10aeb; }
    X86_TICK(c, 2);
    // 010ae8  neg ax
    X86_AT(c, 0x10ae8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aeb:
    X86_TICK(c, 16);
    // 010aeb  leave 
    X86_AT(c, 0x10aebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a9au, "ran off the end of a function");
}
void f_00010a9b(X86Cpu& c) {
    X86_TICK(c, 5);
    // 010a9b  jge 0x10aa4
    X86_AT(c, 0x10a9bu);
    if (x86_cc(c, 13)) { goto L_10aa4; }
    X86_TICK(c, 2);
    // 010aa1  neg ax
    X86_AT(c, 0x10aa1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aa4:
    X86_TICK(c, 12);
    // 010aa4  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x10aa4u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 010aa8  shr ax, 2
    X86_AT(c, 0x10aa8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 010aac  cmp ax, 5
    X86_AT(c, 0x10aacu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x5u, 0, 2);
    // 010ab0  jb 0x10aba
    X86_AT(c, 0x10ab0u);
    if (x86_cc(c, 2)) { goto L_10aba; }
    X86_TICK(c, 2);
    // 010ab6  mov ax, 4
    X86_AT(c, 0x10ab6u);
    s16(c, 0, 0x4u);
L_10aba:
    X86_TICK(c, 64);
    // 010aba  inc ax
    X86_AT(c, 0x10abau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 010abc  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x10abcu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 010ac0  dec ax
    X86_AT(c, 0x10ac0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 010ac2  mov word ptr [ebp - 6], ax
    X86_AT(c, 0x10ac2u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), (c.r[0] & 0xFFFFu));
    // 010ac6  shl ax, 2
    X86_AT(c, 0x10ac6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 010aca  sub ax, word ptr [ebp - 2]
    X86_AT(c, 0x10acau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0, 2)); }
    // 010ace  neg ax
    X86_AT(c, 0x10aceu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 010ad1  mul byte ptr [ebp - 4]
    X86_AT(c, 0x10ad1u);
    x86_mul(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 1);
    // 010ad4  movzx edx, word ptr [ebp - 6]
    X86_AT(c, 0x10ad4u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)));
    // 010ad8  add ax, word ptr cs:[edx*2 + 0x10aed]
    X86_AT(c, 0x10ad8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[2] * 2 + 0x10AEDu))), 0, 2)); }
    // 010ae1  popfd 
    X86_AT(c, 0x10ae1u);
    x86_popfd(c, 4);
    // 010ae2  jge 0x10aeb
    X86_AT(c, 0x10ae2u);
    if (x86_cc(c, 13)) { goto L_10aeb; }
    X86_TICK(c, 2);
    // 010ae8  neg ax
    X86_AT(c, 0x10ae8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aeb:
    X86_TICK(c, 16);
    // 010aeb  leave 
    X86_AT(c, 0x10aebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10a9bu, "ran off the end of a function");
}
void f_00010aa1(X86Cpu& c) {
    X86_TICK(c, 14);
    // 010aa1  neg ax
    X86_AT(c, 0x10aa1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 010aa4  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x10aa4u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 010aa8  shr ax, 2
    X86_AT(c, 0x10aa8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 010aac  cmp ax, 5
    X86_AT(c, 0x10aacu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x5u, 0, 2);
    // 010ab0  jb 0x10aba
    X86_AT(c, 0x10ab0u);
    if (x86_cc(c, 2)) { goto L_10aba; }
    X86_TICK(c, 2);
    // 010ab6  mov ax, 4
    X86_AT(c, 0x10ab6u);
    s16(c, 0, 0x4u);
L_10aba:
    X86_TICK(c, 64);
    // 010aba  inc ax
    X86_AT(c, 0x10abau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 010abc  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x10abcu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 010ac0  dec ax
    X86_AT(c, 0x10ac0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 010ac2  mov word ptr [ebp - 6], ax
    X86_AT(c, 0x10ac2u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), (c.r[0] & 0xFFFFu));
    // 010ac6  shl ax, 2
    X86_AT(c, 0x10ac6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 010aca  sub ax, word ptr [ebp - 2]
    X86_AT(c, 0x10acau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0, 2)); }
    // 010ace  neg ax
    X86_AT(c, 0x10aceu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 010ad1  mul byte ptr [ebp - 4]
    X86_AT(c, 0x10ad1u);
    x86_mul(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 1);
    // 010ad4  movzx edx, word ptr [ebp - 6]
    X86_AT(c, 0x10ad4u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)));
    // 010ad8  add ax, word ptr cs:[edx*2 + 0x10aed]
    X86_AT(c, 0x10ad8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[2] * 2 + 0x10AEDu))), 0, 2)); }
    // 010ae1  popfd 
    X86_AT(c, 0x10ae1u);
    x86_popfd(c, 4);
    // 010ae2  jge 0x10aeb
    X86_AT(c, 0x10ae2u);
    if (x86_cc(c, 13)) { goto L_10aeb; }
    X86_TICK(c, 2);
    // 010ae8  neg ax
    X86_AT(c, 0x10ae8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aeb:
    X86_TICK(c, 16);
    // 010aeb  leave 
    X86_AT(c, 0x10aebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10aa1u, "ran off the end of a function");
}
void f_00010aa4(X86Cpu& c) {
    X86_TICK(c, 12);
    // 010aa4  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x10aa4u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 010aa8  shr ax, 2
    X86_AT(c, 0x10aa8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 010aac  cmp ax, 5
    X86_AT(c, 0x10aacu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x5u, 0, 2);
    // 010ab0  jb 0x10aba
    X86_AT(c, 0x10ab0u);
    if (x86_cc(c, 2)) { goto L_10aba; }
    X86_TICK(c, 2);
    // 010ab6  mov ax, 4
    X86_AT(c, 0x10ab6u);
    s16(c, 0, 0x4u);
L_10aba:
    X86_TICK(c, 64);
    // 010aba  inc ax
    X86_AT(c, 0x10abau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 010abc  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x10abcu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 010ac0  dec ax
    X86_AT(c, 0x10ac0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 010ac2  mov word ptr [ebp - 6], ax
    X86_AT(c, 0x10ac2u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), (c.r[0] & 0xFFFFu));
    // 010ac6  shl ax, 2
    X86_AT(c, 0x10ac6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 010aca  sub ax, word ptr [ebp - 2]
    X86_AT(c, 0x10acau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0, 2)); }
    // 010ace  neg ax
    X86_AT(c, 0x10aceu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 010ad1  mul byte ptr [ebp - 4]
    X86_AT(c, 0x10ad1u);
    x86_mul(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 1);
    // 010ad4  movzx edx, word ptr [ebp - 6]
    X86_AT(c, 0x10ad4u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)));
    // 010ad8  add ax, word ptr cs:[edx*2 + 0x10aed]
    X86_AT(c, 0x10ad8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[2] * 2 + 0x10AEDu))), 0, 2)); }
    // 010ae1  popfd 
    X86_AT(c, 0x10ae1u);
    x86_popfd(c, 4);
    // 010ae2  jge 0x10aeb
    X86_AT(c, 0x10ae2u);
    if (x86_cc(c, 13)) { goto L_10aeb; }
    X86_TICK(c, 2);
    // 010ae8  neg ax
    X86_AT(c, 0x10ae8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aeb:
    X86_TICK(c, 16);
    // 010aeb  leave 
    X86_AT(c, 0x10aebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10aa4u, "ran off the end of a function");
}
void f_00010aa8(X86Cpu& c) {
    X86_TICK(c, 10);
    // 010aa8  shr ax, 2
    X86_AT(c, 0x10aa8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 010aac  cmp ax, 5
    X86_AT(c, 0x10aacu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x5u, 0, 2);
    // 010ab0  jb 0x10aba
    X86_AT(c, 0x10ab0u);
    if (x86_cc(c, 2)) { goto L_10aba; }
    X86_TICK(c, 2);
    // 010ab6  mov ax, 4
    X86_AT(c, 0x10ab6u);
    s16(c, 0, 0x4u);
L_10aba:
    X86_TICK(c, 64);
    // 010aba  inc ax
    X86_AT(c, 0x10abau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 010abc  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x10abcu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 010ac0  dec ax
    X86_AT(c, 0x10ac0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 010ac2  mov word ptr [ebp - 6], ax
    X86_AT(c, 0x10ac2u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), (c.r[0] & 0xFFFFu));
    // 010ac6  shl ax, 2
    X86_AT(c, 0x10ac6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 010aca  sub ax, word ptr [ebp - 2]
    X86_AT(c, 0x10acau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0, 2)); }
    // 010ace  neg ax
    X86_AT(c, 0x10aceu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 010ad1  mul byte ptr [ebp - 4]
    X86_AT(c, 0x10ad1u);
    x86_mul(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 1);
    // 010ad4  movzx edx, word ptr [ebp - 6]
    X86_AT(c, 0x10ad4u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)));
    // 010ad8  add ax, word ptr cs:[edx*2 + 0x10aed]
    X86_AT(c, 0x10ad8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[2] * 2 + 0x10AEDu))), 0, 2)); }
    // 010ae1  popfd 
    X86_AT(c, 0x10ae1u);
    x86_popfd(c, 4);
    // 010ae2  jge 0x10aeb
    X86_AT(c, 0x10ae2u);
    if (x86_cc(c, 13)) { goto L_10aeb; }
    X86_TICK(c, 2);
    // 010ae8  neg ax
    X86_AT(c, 0x10ae8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aeb:
    X86_TICK(c, 16);
    // 010aeb  leave 
    X86_AT(c, 0x10aebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10aa8u, "ran off the end of a function");
}
void f_00010aac(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010aac  cmp ax, 5
    X86_AT(c, 0x10aacu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x5u, 0, 2);
    // 010ab0  jb 0x10aba
    X86_AT(c, 0x10ab0u);
    if (x86_cc(c, 2)) { goto L_10aba; }
    X86_TICK(c, 2);
    // 010ab6  mov ax, 4
    X86_AT(c, 0x10ab6u);
    s16(c, 0, 0x4u);
L_10aba:
    X86_TICK(c, 64);
    // 010aba  inc ax
    X86_AT(c, 0x10abau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 010abc  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x10abcu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 010ac0  dec ax
    X86_AT(c, 0x10ac0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 010ac2  mov word ptr [ebp - 6], ax
    X86_AT(c, 0x10ac2u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), (c.r[0] & 0xFFFFu));
    // 010ac6  shl ax, 2
    X86_AT(c, 0x10ac6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 010aca  sub ax, word ptr [ebp - 2]
    X86_AT(c, 0x10acau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0, 2)); }
    // 010ace  neg ax
    X86_AT(c, 0x10aceu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 010ad1  mul byte ptr [ebp - 4]
    X86_AT(c, 0x10ad1u);
    x86_mul(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 1);
    // 010ad4  movzx edx, word ptr [ebp - 6]
    X86_AT(c, 0x10ad4u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)));
    // 010ad8  add ax, word ptr cs:[edx*2 + 0x10aed]
    X86_AT(c, 0x10ad8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[2] * 2 + 0x10AEDu))), 0, 2)); }
    // 010ae1  popfd 
    X86_AT(c, 0x10ae1u);
    x86_popfd(c, 4);
    // 010ae2  jge 0x10aeb
    X86_AT(c, 0x10ae2u);
    if (x86_cc(c, 13)) { goto L_10aeb; }
    X86_TICK(c, 2);
    // 010ae8  neg ax
    X86_AT(c, 0x10ae8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aeb:
    X86_TICK(c, 16);
    // 010aeb  leave 
    X86_AT(c, 0x10aebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10aacu, "ran off the end of a function");
}
void f_00010ab0(X86Cpu& c) {
    X86_TICK(c, 5);
    // 010ab0  jb 0x10aba
    X86_AT(c, 0x10ab0u);
    if (x86_cc(c, 2)) { goto L_10aba; }
    X86_TICK(c, 2);
    // 010ab6  mov ax, 4
    X86_AT(c, 0x10ab6u);
    s16(c, 0, 0x4u);
L_10aba:
    X86_TICK(c, 64);
    // 010aba  inc ax
    X86_AT(c, 0x10abau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 010abc  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x10abcu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 010ac0  dec ax
    X86_AT(c, 0x10ac0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 010ac2  mov word ptr [ebp - 6], ax
    X86_AT(c, 0x10ac2u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), (c.r[0] & 0xFFFFu));
    // 010ac6  shl ax, 2
    X86_AT(c, 0x10ac6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 010aca  sub ax, word ptr [ebp - 2]
    X86_AT(c, 0x10acau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0, 2)); }
    // 010ace  neg ax
    X86_AT(c, 0x10aceu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 010ad1  mul byte ptr [ebp - 4]
    X86_AT(c, 0x10ad1u);
    x86_mul(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 1);
    // 010ad4  movzx edx, word ptr [ebp - 6]
    X86_AT(c, 0x10ad4u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)));
    // 010ad8  add ax, word ptr cs:[edx*2 + 0x10aed]
    X86_AT(c, 0x10ad8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[2] * 2 + 0x10AEDu))), 0, 2)); }
    // 010ae1  popfd 
    X86_AT(c, 0x10ae1u);
    x86_popfd(c, 4);
    // 010ae2  jge 0x10aeb
    X86_AT(c, 0x10ae2u);
    if (x86_cc(c, 13)) { goto L_10aeb; }
    X86_TICK(c, 2);
    // 010ae8  neg ax
    X86_AT(c, 0x10ae8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aeb:
    X86_TICK(c, 16);
    // 010aeb  leave 
    X86_AT(c, 0x10aebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10ab0u, "ran off the end of a function");
}
void f_00010ab6(X86Cpu& c) {
    X86_TICK(c, 66);
    // 010ab6  mov ax, 4
    X86_AT(c, 0x10ab6u);
    s16(c, 0, 0x4u);
    // 010aba  inc ax
    X86_AT(c, 0x10abau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 010abc  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x10abcu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 010ac0  dec ax
    X86_AT(c, 0x10ac0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 010ac2  mov word ptr [ebp - 6], ax
    X86_AT(c, 0x10ac2u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), (c.r[0] & 0xFFFFu));
    // 010ac6  shl ax, 2
    X86_AT(c, 0x10ac6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 010aca  sub ax, word ptr [ebp - 2]
    X86_AT(c, 0x10acau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0, 2)); }
    // 010ace  neg ax
    X86_AT(c, 0x10aceu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 010ad1  mul byte ptr [ebp - 4]
    X86_AT(c, 0x10ad1u);
    x86_mul(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 1);
    // 010ad4  movzx edx, word ptr [ebp - 6]
    X86_AT(c, 0x10ad4u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)));
    // 010ad8  add ax, word ptr cs:[edx*2 + 0x10aed]
    X86_AT(c, 0x10ad8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[2] * 2 + 0x10AEDu))), 0, 2)); }
    // 010ae1  popfd 
    X86_AT(c, 0x10ae1u);
    x86_popfd(c, 4);
    // 010ae2  jge 0x10aeb
    X86_AT(c, 0x10ae2u);
    if (x86_cc(c, 13)) { goto L_10aeb; }
    X86_TICK(c, 2);
    // 010ae8  neg ax
    X86_AT(c, 0x10ae8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aeb:
    X86_TICK(c, 16);
    // 010aeb  leave 
    X86_AT(c, 0x10aebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10ab6u, "ran off the end of a function");
}
void f_00010aba(X86Cpu& c) {
    X86_TICK(c, 64);
    // 010aba  inc ax
    X86_AT(c, 0x10abau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_inc(c, v, 2)); }
    // 010abc  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x10abcu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 010ac0  dec ax
    X86_AT(c, 0x10ac0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 010ac2  mov word ptr [ebp - 6], ax
    X86_AT(c, 0x10ac2u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), (c.r[0] & 0xFFFFu));
    // 010ac6  shl ax, 2
    X86_AT(c, 0x10ac6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 010aca  sub ax, word ptr [ebp - 2]
    X86_AT(c, 0x10acau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0, 2)); }
    // 010ace  neg ax
    X86_AT(c, 0x10aceu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 010ad1  mul byte ptr [ebp - 4]
    X86_AT(c, 0x10ad1u);
    x86_mul(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 1);
    // 010ad4  movzx edx, word ptr [ebp - 6]
    X86_AT(c, 0x10ad4u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)));
    // 010ad8  add ax, word ptr cs:[edx*2 + 0x10aed]
    X86_AT(c, 0x10ad8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[2] * 2 + 0x10AEDu))), 0, 2)); }
    // 010ae1  popfd 
    X86_AT(c, 0x10ae1u);
    x86_popfd(c, 4);
    // 010ae2  jge 0x10aeb
    X86_AT(c, 0x10ae2u);
    if (x86_cc(c, 13)) { goto L_10aeb; }
    X86_TICK(c, 2);
    // 010ae8  neg ax
    X86_AT(c, 0x10ae8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aeb:
    X86_TICK(c, 16);
    // 010aeb  leave 
    X86_AT(c, 0x10aebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10abau, "ran off the end of a function");
}
void f_00010abc(X86Cpu& c) {
    X86_TICK(c, 62);
    // 010abc  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x10abcu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 010ac0  dec ax
    X86_AT(c, 0x10ac0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 010ac2  mov word ptr [ebp - 6], ax
    X86_AT(c, 0x10ac2u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), (c.r[0] & 0xFFFFu));
    // 010ac6  shl ax, 2
    X86_AT(c, 0x10ac6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 010aca  sub ax, word ptr [ebp - 2]
    X86_AT(c, 0x10acau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0, 2)); }
    // 010ace  neg ax
    X86_AT(c, 0x10aceu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 010ad1  mul byte ptr [ebp - 4]
    X86_AT(c, 0x10ad1u);
    x86_mul(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 1);
    // 010ad4  movzx edx, word ptr [ebp - 6]
    X86_AT(c, 0x10ad4u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)));
    // 010ad8  add ax, word ptr cs:[edx*2 + 0x10aed]
    X86_AT(c, 0x10ad8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[2] * 2 + 0x10AEDu))), 0, 2)); }
    // 010ae1  popfd 
    X86_AT(c, 0x10ae1u);
    x86_popfd(c, 4);
    // 010ae2  jge 0x10aeb
    X86_AT(c, 0x10ae2u);
    if (x86_cc(c, 13)) { goto L_10aeb; }
    X86_TICK(c, 2);
    // 010ae8  neg ax
    X86_AT(c, 0x10ae8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aeb:
    X86_TICK(c, 16);
    // 010aeb  leave 
    X86_AT(c, 0x10aebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10abcu, "ran off the end of a function");
}
void f_00010ac0(X86Cpu& c) {
    X86_TICK(c, 60);
    // 010ac0  dec ax
    X86_AT(c, 0x10ac0u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 010ac2  mov word ptr [ebp - 6], ax
    X86_AT(c, 0x10ac2u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), (c.r[0] & 0xFFFFu));
    // 010ac6  shl ax, 2
    X86_AT(c, 0x10ac6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 010aca  sub ax, word ptr [ebp - 2]
    X86_AT(c, 0x10acau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0, 2)); }
    // 010ace  neg ax
    X86_AT(c, 0x10aceu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 010ad1  mul byte ptr [ebp - 4]
    X86_AT(c, 0x10ad1u);
    x86_mul(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 1);
    // 010ad4  movzx edx, word ptr [ebp - 6]
    X86_AT(c, 0x10ad4u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)));
    // 010ad8  add ax, word ptr cs:[edx*2 + 0x10aed]
    X86_AT(c, 0x10ad8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[2] * 2 + 0x10AEDu))), 0, 2)); }
    // 010ae1  popfd 
    X86_AT(c, 0x10ae1u);
    x86_popfd(c, 4);
    // 010ae2  jge 0x10aeb
    X86_AT(c, 0x10ae2u);
    if (x86_cc(c, 13)) { goto L_10aeb; }
    X86_TICK(c, 2);
    // 010ae8  neg ax
    X86_AT(c, 0x10ae8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aeb:
    X86_TICK(c, 16);
    // 010aeb  leave 
    X86_AT(c, 0x10aebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10ac0u, "ran off the end of a function");
}
void f_00010ac2(X86Cpu& c) {
    X86_TICK(c, 58);
    // 010ac2  mov word ptr [ebp - 6], ax
    X86_AT(c, 0x10ac2u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), (c.r[0] & 0xFFFFu));
    // 010ac6  shl ax, 2
    X86_AT(c, 0x10ac6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 010aca  sub ax, word ptr [ebp - 2]
    X86_AT(c, 0x10acau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0, 2)); }
    // 010ace  neg ax
    X86_AT(c, 0x10aceu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 010ad1  mul byte ptr [ebp - 4]
    X86_AT(c, 0x10ad1u);
    x86_mul(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 1);
    // 010ad4  movzx edx, word ptr [ebp - 6]
    X86_AT(c, 0x10ad4u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)));
    // 010ad8  add ax, word ptr cs:[edx*2 + 0x10aed]
    X86_AT(c, 0x10ad8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[2] * 2 + 0x10AEDu))), 0, 2)); }
    // 010ae1  popfd 
    X86_AT(c, 0x10ae1u);
    x86_popfd(c, 4);
    // 010ae2  jge 0x10aeb
    X86_AT(c, 0x10ae2u);
    if (x86_cc(c, 13)) { goto L_10aeb; }
    X86_TICK(c, 2);
    // 010ae8  neg ax
    X86_AT(c, 0x10ae8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aeb:
    X86_TICK(c, 16);
    // 010aeb  leave 
    X86_AT(c, 0x10aebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10ac2u, "ran off the end of a function");
}
void f_00010ac6(X86Cpu& c) {
    X86_TICK(c, 56);
    // 010ac6  shl ax, 2
    X86_AT(c, 0x10ac6u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 010aca  sub ax, word ptr [ebp - 2]
    X86_AT(c, 0x10acau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0, 2)); }
    // 010ace  neg ax
    X86_AT(c, 0x10aceu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 010ad1  mul byte ptr [ebp - 4]
    X86_AT(c, 0x10ad1u);
    x86_mul(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 1);
    // 010ad4  movzx edx, word ptr [ebp - 6]
    X86_AT(c, 0x10ad4u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)));
    // 010ad8  add ax, word ptr cs:[edx*2 + 0x10aed]
    X86_AT(c, 0x10ad8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[2] * 2 + 0x10AEDu))), 0, 2)); }
    // 010ae1  popfd 
    X86_AT(c, 0x10ae1u);
    x86_popfd(c, 4);
    // 010ae2  jge 0x10aeb
    X86_AT(c, 0x10ae2u);
    if (x86_cc(c, 13)) { goto L_10aeb; }
    X86_TICK(c, 2);
    // 010ae8  neg ax
    X86_AT(c, 0x10ae8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aeb:
    X86_TICK(c, 16);
    // 010aeb  leave 
    X86_AT(c, 0x10aebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10ac6u, "ran off the end of a function");
}
void f_00010aca(X86Cpu& c) {
    X86_TICK(c, 53);
    // 010aca  sub ax, word ptr [ebp - 2]
    X86_AT(c, 0x10acau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0, 2)); }
    // 010ace  neg ax
    X86_AT(c, 0x10aceu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 010ad1  mul byte ptr [ebp - 4]
    X86_AT(c, 0x10ad1u);
    x86_mul(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 1);
    // 010ad4  movzx edx, word ptr [ebp - 6]
    X86_AT(c, 0x10ad4u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)));
    // 010ad8  add ax, word ptr cs:[edx*2 + 0x10aed]
    X86_AT(c, 0x10ad8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[2] * 2 + 0x10AEDu))), 0, 2)); }
    // 010ae1  popfd 
    X86_AT(c, 0x10ae1u);
    x86_popfd(c, 4);
    // 010ae2  jge 0x10aeb
    X86_AT(c, 0x10ae2u);
    if (x86_cc(c, 13)) { goto L_10aeb; }
    X86_TICK(c, 2);
    // 010ae8  neg ax
    X86_AT(c, 0x10ae8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aeb:
    X86_TICK(c, 16);
    // 010aeb  leave 
    X86_AT(c, 0x10aebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10acau, "ran off the end of a function");
}
void f_00010ace(X86Cpu& c) {
    X86_TICK(c, 47);
    // 010ace  neg ax
    X86_AT(c, 0x10aceu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 010ad1  mul byte ptr [ebp - 4]
    X86_AT(c, 0x10ad1u);
    x86_mul(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 1);
    // 010ad4  movzx edx, word ptr [ebp - 6]
    X86_AT(c, 0x10ad4u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)));
    // 010ad8  add ax, word ptr cs:[edx*2 + 0x10aed]
    X86_AT(c, 0x10ad8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[2] * 2 + 0x10AEDu))), 0, 2)); }
    // 010ae1  popfd 
    X86_AT(c, 0x10ae1u);
    x86_popfd(c, 4);
    // 010ae2  jge 0x10aeb
    X86_AT(c, 0x10ae2u);
    if (x86_cc(c, 13)) { goto L_10aeb; }
    X86_TICK(c, 2);
    // 010ae8  neg ax
    X86_AT(c, 0x10ae8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aeb:
    X86_TICK(c, 16);
    // 010aeb  leave 
    X86_AT(c, 0x10aebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10aceu, "ran off the end of a function");
}
void f_00010ad1(X86Cpu& c) {
    X86_TICK(c, 45);
    // 010ad1  mul byte ptr [ebp - 4]
    X86_AT(c, 0x10ad1u);
    x86_mul(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 1);
    // 010ad4  movzx edx, word ptr [ebp - 6]
    X86_AT(c, 0x10ad4u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)));
    // 010ad8  add ax, word ptr cs:[edx*2 + 0x10aed]
    X86_AT(c, 0x10ad8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[2] * 2 + 0x10AEDu))), 0, 2)); }
    // 010ae1  popfd 
    X86_AT(c, 0x10ae1u);
    x86_popfd(c, 4);
    // 010ae2  jge 0x10aeb
    X86_AT(c, 0x10ae2u);
    if (x86_cc(c, 13)) { goto L_10aeb; }
    X86_TICK(c, 2);
    // 010ae8  neg ax
    X86_AT(c, 0x10ae8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aeb:
    X86_TICK(c, 16);
    // 010aeb  leave 
    X86_AT(c, 0x10aebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10ad1u, "ran off the end of a function");
}
void f_00010ad4(X86Cpu& c) {
    X86_TICK(c, 23);
    // 010ad4  movzx edx, word ptr [ebp - 6]
    X86_AT(c, 0x10ad4u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)));
    // 010ad8  add ax, word ptr cs:[edx*2 + 0x10aed]
    X86_AT(c, 0x10ad8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[2] * 2 + 0x10AEDu))), 0, 2)); }
    // 010ae1  popfd 
    X86_AT(c, 0x10ae1u);
    x86_popfd(c, 4);
    // 010ae2  jge 0x10aeb
    X86_AT(c, 0x10ae2u);
    if (x86_cc(c, 13)) { goto L_10aeb; }
    X86_TICK(c, 2);
    // 010ae8  neg ax
    X86_AT(c, 0x10ae8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aeb:
    X86_TICK(c, 16);
    // 010aeb  leave 
    X86_AT(c, 0x10aebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10ad4u, "ran off the end of a function");
}
void f_00010ad8(X86Cpu& c) {
    X86_TICK(c, 17);
    // 010ad8  add ax, word ptr cs:[edx*2 + 0x10aed]
    X86_AT(c, 0x10ad8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[2] * 2 + 0x10AEDu))), 0, 2)); }
    // 010ae1  popfd 
    X86_AT(c, 0x10ae1u);
    x86_popfd(c, 4);
    // 010ae2  jge 0x10aeb
    X86_AT(c, 0x10ae2u);
    if (x86_cc(c, 13)) { goto L_10aeb; }
    X86_TICK(c, 2);
    // 010ae8  neg ax
    X86_AT(c, 0x10ae8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aeb:
    X86_TICK(c, 16);
    // 010aeb  leave 
    X86_AT(c, 0x10aebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10ad8u, "ran off the end of a function");
}
void f_00010ae1(X86Cpu& c) {
    X86_TICK(c, 11);
    // 010ae1  popfd 
    X86_AT(c, 0x10ae1u);
    x86_popfd(c, 4);
    // 010ae2  jge 0x10aeb
    X86_AT(c, 0x10ae2u);
    if (x86_cc(c, 13)) { goto L_10aeb; }
    X86_TICK(c, 2);
    // 010ae8  neg ax
    X86_AT(c, 0x10ae8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aeb:
    X86_TICK(c, 16);
    // 010aeb  leave 
    X86_AT(c, 0x10aebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10ae1u, "ran off the end of a function");
}
void f_00010ae2(X86Cpu& c) {
    X86_TICK(c, 5);
    // 010ae2  jge 0x10aeb
    X86_AT(c, 0x10ae2u);
    if (x86_cc(c, 13)) { goto L_10aeb; }
    X86_TICK(c, 2);
    // 010ae8  neg ax
    X86_AT(c, 0x10ae8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_10aeb:
    X86_TICK(c, 16);
    // 010aeb  leave 
    X86_AT(c, 0x10aebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10ae2u, "ran off the end of a function");
}
void f_00010ae8(X86Cpu& c) {
    X86_TICK(c, 18);
    // 010ae8  neg ax
    X86_AT(c, 0x10ae8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 010aeb  leave 
    X86_AT(c, 0x10aebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10ae8u, "ran off the end of a function");
}
void f_00010aeb(X86Cpu& c) {
    X86_TICK(c, 16);
    // 010aeb  leave 
    X86_AT(c, 0x10aebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10aebu, "ran off the end of a function");
}
void f_00010aec(X86Cpu& c) {
    X86_TICK(c, 10);
    // 010aec  ret 
    X86_AT(c, 0x10aecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10aecu, "ran off the end of a function");
}
void f_00010af7(X86Cpu& c) {
    X86_TICK(c, 9);
    // 010af7  push cx
    X86_AT(c, 0x10af7u);
    { uint32_t v = (c.r[1] & 0xFFFFu); push16(c, v); }
    // 010af9  call 0x10b02
    X86_AT(c, 0x10af9u);
    push32(c, 0x10afeu); f_00010b02(c); X86_RET(c, 0x10afeu);
    X86_TICK(c, 32);
    // 010afe  pop cx
    X86_AT(c, 0x10afeu);
    { uint32_t v = pop16(c); s16(c, 1, v); }
    // 010b00  mov cl, ch
    X86_AT(c, 0x10b00u);
    s8(c, 1, g8(c, 5));
    // 010b02  mov al, cl
    X86_AT(c, 0x10b02u);
    s8(c, 0, g8(c, 1));
    // 010b04  mov dx, 0x4d6
    X86_AT(c, 0x10b04u);
    s16(c, 2, 0x4D6u);
    // 010b08  out dx, al
    X86_AT(c, 0x10b08u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010b09  ret 
    X86_AT(c, 0x10b09u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10af7u, "ran off the end of a function");
}
void f_00010af9(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010af9  call 0x10b02
    X86_AT(c, 0x10af9u);
    push32(c, 0x10afeu); f_00010b02(c); X86_RET(c, 0x10afeu);
    X86_TICK(c, 32);
    // 010afe  pop cx
    X86_AT(c, 0x10afeu);
    { uint32_t v = pop16(c); s16(c, 1, v); }
    // 010b00  mov cl, ch
    X86_AT(c, 0x10b00u);
    s8(c, 1, g8(c, 5));
    // 010b02  mov al, cl
    X86_AT(c, 0x10b02u);
    s8(c, 0, g8(c, 1));
    // 010b04  mov dx, 0x4d6
    X86_AT(c, 0x10b04u);
    s16(c, 2, 0x4D6u);
    // 010b08  out dx, al
    X86_AT(c, 0x10b08u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010b09  ret 
    X86_AT(c, 0x10b09u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10af9u, "ran off the end of a function");
}
void f_00010afe(X86Cpu& c) {
    X86_TICK(c, 32);
    // 010afe  pop cx
    X86_AT(c, 0x10afeu);
    { uint32_t v = pop16(c); s16(c, 1, v); }
    // 010b00  mov cl, ch
    X86_AT(c, 0x10b00u);
    s8(c, 1, g8(c, 5));
    // 010b02  mov al, cl
    X86_AT(c, 0x10b02u);
    s8(c, 0, g8(c, 1));
    // 010b04  mov dx, 0x4d6
    X86_AT(c, 0x10b04u);
    s16(c, 2, 0x4D6u);
    // 010b08  out dx, al
    X86_AT(c, 0x10b08u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010b09  ret 
    X86_AT(c, 0x10b09u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10afeu, "ran off the end of a function");
}
void f_00010b00(X86Cpu& c) {
    X86_TICK(c, 28);
    // 010b00  mov cl, ch
    X86_AT(c, 0x10b00u);
    s8(c, 1, g8(c, 5));
    // 010b02  mov al, cl
    X86_AT(c, 0x10b02u);
    s8(c, 0, g8(c, 1));
    // 010b04  mov dx, 0x4d6
    X86_AT(c, 0x10b04u);
    s16(c, 2, 0x4D6u);
    // 010b08  out dx, al
    X86_AT(c, 0x10b08u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010b09  ret 
    X86_AT(c, 0x10b09u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b00u, "ran off the end of a function");
}
void f_00010b02(X86Cpu& c) {
    X86_TICK(c, 26);
    // 010b02  mov al, cl
    X86_AT(c, 0x10b02u);
    s8(c, 0, g8(c, 1));
    // 010b04  mov dx, 0x4d6
    X86_AT(c, 0x10b04u);
    s16(c, 2, 0x4D6u);
    // 010b08  out dx, al
    X86_AT(c, 0x10b08u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010b09  ret 
    X86_AT(c, 0x10b09u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b02u, "ran off the end of a function");
}
void f_00010b04(X86Cpu& c) {
    X86_TICK(c, 24);
    // 010b04  mov dx, 0x4d6
    X86_AT(c, 0x10b04u);
    s16(c, 2, 0x4D6u);
    // 010b08  out dx, al
    X86_AT(c, 0x10b08u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010b09  ret 
    X86_AT(c, 0x10b09u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b04u, "ran off the end of a function");
}
void f_00010b08(X86Cpu& c) {
    X86_TICK(c, 22);
    // 010b08  out dx, al
    X86_AT(c, 0x10b08u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010b09  ret 
    X86_AT(c, 0x10b09u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b08u, "ran off the end of a function");
}
void f_00010b09(X86Cpu& c) {
    X86_TICK(c, 10);
    // 010b09  ret 
    X86_AT(c, 0x10b09u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b09u, "ran off the end of a function");
}
void f_00010b0a(X86Cpu& c) {
    X86_TICK(c, 11);
    // 010b0a  mov cl, byte ptr [edi + 0xb]
    X86_AT(c, 0x10b0au);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu))));
    // 010b0d  call 0x10b02
    X86_AT(c, 0x10b0du);
    push32(c, 0x10b12u); f_00010b02(c); X86_RET(c, 0x10b12u);
    X86_TICK(c, 2);
    // 010b12  mov al, 0x50
    X86_AT(c, 0x10b12u);
    s8(c, 0, 0x50u);
L_10b14:
    X86_TICK(c, 7);
    // 010b14  dec al
    X86_AT(c, 0x10b14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 010b16  jne 0x10b14
    X86_AT(c, 0x10b16u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x10b14u); goto L_10b14; }
    X86_TICK(c, 30);
    // 010b18  mov dx, word ptr [edi + 0xd]
    X86_AT(c, 0x10b18u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))));
    // 010b1c  in al, dx
    X86_AT(c, 0x10b1cu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010b1d  mov cl, al
    X86_AT(c, 0x10b1du);
    s8(c, 1, g8(c, 0));
    // 010b1f  mov ch, 0
    X86_AT(c, 0x10b1fu);
    s8(c, 5, 0x0u);
    // 010b21  ret 
    X86_AT(c, 0x10b21u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b0au, "ran off the end of a function");
}
void f_00010b0d(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010b0d  call 0x10b02
    X86_AT(c, 0x10b0du);
    push32(c, 0x10b12u); f_00010b02(c); X86_RET(c, 0x10b12u);
    X86_TICK(c, 2);
    // 010b12  mov al, 0x50
    X86_AT(c, 0x10b12u);
    s8(c, 0, 0x50u);
L_10b14:
    X86_TICK(c, 7);
    // 010b14  dec al
    X86_AT(c, 0x10b14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 010b16  jne 0x10b14
    X86_AT(c, 0x10b16u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x10b14u); goto L_10b14; }
    X86_TICK(c, 30);
    // 010b18  mov dx, word ptr [edi + 0xd]
    X86_AT(c, 0x10b18u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))));
    // 010b1c  in al, dx
    X86_AT(c, 0x10b1cu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010b1d  mov cl, al
    X86_AT(c, 0x10b1du);
    s8(c, 1, g8(c, 0));
    // 010b1f  mov ch, 0
    X86_AT(c, 0x10b1fu);
    s8(c, 5, 0x0u);
    // 010b21  ret 
    X86_AT(c, 0x10b21u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b0du, "ran off the end of a function");
}
void f_00010b12(X86Cpu& c) {
    X86_TICK(c, 2);
    // 010b12  mov al, 0x50
    X86_AT(c, 0x10b12u);
    s8(c, 0, 0x50u);
L_10b14:
    X86_TICK(c, 7);
    // 010b14  dec al
    X86_AT(c, 0x10b14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 010b16  jne 0x10b14
    X86_AT(c, 0x10b16u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x10b14u); goto L_10b14; }
    X86_TICK(c, 30);
    // 010b18  mov dx, word ptr [edi + 0xd]
    X86_AT(c, 0x10b18u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))));
    // 010b1c  in al, dx
    X86_AT(c, 0x10b1cu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010b1d  mov cl, al
    X86_AT(c, 0x10b1du);
    s8(c, 1, g8(c, 0));
    // 010b1f  mov ch, 0
    X86_AT(c, 0x10b1fu);
    s8(c, 5, 0x0u);
    // 010b21  ret 
    X86_AT(c, 0x10b21u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b12u, "ran off the end of a function");
}
void f_00010b14(X86Cpu& c) {
L_10b14:
    X86_TICK(c, 7);
    // 010b14  dec al
    X86_AT(c, 0x10b14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 010b16  jne 0x10b14
    X86_AT(c, 0x10b16u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x10b14u); goto L_10b14; }
    X86_TICK(c, 30);
    // 010b18  mov dx, word ptr [edi + 0xd]
    X86_AT(c, 0x10b18u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))));
    // 010b1c  in al, dx
    X86_AT(c, 0x10b1cu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010b1d  mov cl, al
    X86_AT(c, 0x10b1du);
    s8(c, 1, g8(c, 0));
    // 010b1f  mov ch, 0
    X86_AT(c, 0x10b1fu);
    s8(c, 5, 0x0u);
    // 010b21  ret 
    X86_AT(c, 0x10b21u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b14u, "ran off the end of a function");
}
void f_00010b16(X86Cpu& c) {
    goto L_10b16;
L_10b14:
    X86_TICK(c, 2);
    // 010b14  dec al
    X86_AT(c, 0x10b14u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
L_10b16:
    X86_TICK(c, 5);
    // 010b16  jne 0x10b14
    X86_AT(c, 0x10b16u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x10b14u); goto L_10b14; }
    X86_TICK(c, 30);
    // 010b18  mov dx, word ptr [edi + 0xd]
    X86_AT(c, 0x10b18u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))));
    // 010b1c  in al, dx
    X86_AT(c, 0x10b1cu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010b1d  mov cl, al
    X86_AT(c, 0x10b1du);
    s8(c, 1, g8(c, 0));
    // 010b1f  mov ch, 0
    X86_AT(c, 0x10b1fu);
    s8(c, 5, 0x0u);
    // 010b21  ret 
    X86_AT(c, 0x10b21u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b16u, "ran off the end of a function");
}
void f_00010b18(X86Cpu& c) {
    X86_TICK(c, 30);
    // 010b18  mov dx, word ptr [edi + 0xd]
    X86_AT(c, 0x10b18u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))));
    // 010b1c  in al, dx
    X86_AT(c, 0x10b1cu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010b1d  mov cl, al
    X86_AT(c, 0x10b1du);
    s8(c, 1, g8(c, 0));
    // 010b1f  mov ch, 0
    X86_AT(c, 0x10b1fu);
    s8(c, 5, 0x0u);
    // 010b21  ret 
    X86_AT(c, 0x10b21u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b18u, "ran off the end of a function");
}
void f_00010b1c(X86Cpu& c) {
    X86_TICK(c, 26);
    // 010b1c  in al, dx
    X86_AT(c, 0x10b1cu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010b1d  mov cl, al
    X86_AT(c, 0x10b1du);
    s8(c, 1, g8(c, 0));
    // 010b1f  mov ch, 0
    X86_AT(c, 0x10b1fu);
    s8(c, 5, 0x0u);
    // 010b21  ret 
    X86_AT(c, 0x10b21u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b1cu, "ran off the end of a function");
}
void f_00010b1d(X86Cpu& c) {
    X86_TICK(c, 14);
    // 010b1d  mov cl, al
    X86_AT(c, 0x10b1du);
    s8(c, 1, g8(c, 0));
    // 010b1f  mov ch, 0
    X86_AT(c, 0x10b1fu);
    s8(c, 5, 0x0u);
    // 010b21  ret 
    X86_AT(c, 0x10b21u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b1du, "ran off the end of a function");
}
void f_00010b1f(X86Cpu& c) {
    X86_TICK(c, 12);
    // 010b1f  mov ch, 0
    X86_AT(c, 0x10b1fu);
    s8(c, 5, 0x0u);
    // 010b21  ret 
    X86_AT(c, 0x10b21u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b1fu, "ran off the end of a function");
}
void f_00010b21(X86Cpu& c) {
    X86_TICK(c, 10);
    // 010b21  ret 
    X86_AT(c, 0x10b21u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b21u, "ran off the end of a function");
}
void f_00010b22(X86Cpu& c) {
    X86_TICK(c, 15);
    // 010b22  mov bx, 0
    X86_AT(c, 0x10b22u);
    s16(c, 3, 0x0u);
    // 010b26  mov cx, 0x3f2f
    X86_AT(c, 0x10b26u);
    s16(c, 1, 0x3F2Fu);
    // 010b2a  mov word ptr [edi + 0xb], cx
    X86_AT(c, 0x10b2au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), (c.r[1] & 0xFFFFu));
    // 010b2e  mov word ptr [edi + 0xd], 0x4d0
    X86_AT(c, 0x10b2eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu)), 0x4D0u);
    // 010b34  call 0x10af7
    X86_AT(c, 0x10b34u);
    push32(c, 0x10b39u); f_00010af7(c); X86_RET(c, 0x10b39u);
    X86_TICK(c, 7);
    // 010b39  call 0x10b12
    X86_AT(c, 0x10b39u);
    push32(c, 0x10b3eu); f_00010b12(c); X86_RET(c, 0x10b3eu);
    X86_TICK(c, 9);
    // 010b3e  and cl, 0xf
    X86_AT(c, 0x10b3eu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010b41  cmp cl, 0xf
    X86_AT(c, 0x10b41u);
    (void)x86_sub(c, g8(c, 1), 0xFu, 0, 1);
    // 010b44  je 0x10b4c
    X86_AT(c, 0x10b44u);
    if (x86_cc(c, 4)) { goto L_10b4c; }
    X86_TICK(c, 9);
    // 010b46  mov bx, 1
    X86_AT(c, 0x10b46u);
    s16(c, 3, 0x1u);
    // 010b4a  jmp 0x10b70
    X86_AT(c, 0x10b4au);
    goto L_10b70;
L_10b4c:
    X86_TICK(c, 13);
    // 010b4c  mov cx, 0x7f5f
    X86_AT(c, 0x10b4cu);
    s16(c, 1, 0x7F5Fu);
    // 010b50  mov word ptr [edi + 0xb], cx
    X86_AT(c, 0x10b50u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), (c.r[1] & 0xFFFFu));
    // 010b54  mov word ptr [edi + 0xd], 0x4d2
    X86_AT(c, 0x10b54u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu)), 0x4D2u);
    // 010b5a  call 0x10af7
    X86_AT(c, 0x10b5au);
    push32(c, 0x10b5fu); f_00010af7(c); X86_RET(c, 0x10b5fu);
    X86_TICK(c, 7);
    // 010b5f  call 0x10b12
    X86_AT(c, 0x10b5fu);
    push32(c, 0x10b64u); f_00010b12(c); X86_RET(c, 0x10b64u);
    X86_TICK(c, 9);
    // 010b64  and cl, 0xf
    X86_AT(c, 0x10b64u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010b67  cmp cl, 0xf
    X86_AT(c, 0x10b67u);
    (void)x86_sub(c, g8(c, 1), 0xFu, 0, 1);
    // 010b6a  je 0x10b70
    X86_AT(c, 0x10b6au);
    if (x86_cc(c, 4)) { goto L_10b70; }
    X86_TICK(c, 2);
    // 010b6c  mov bx, 2
    X86_AT(c, 0x10b6cu);
    s16(c, 3, 0x2u);
L_10b70:
    X86_TICK(c, 12);
    // 010b70  mov word ptr [edi + 9], bx
    X86_AT(c, 0x10b70u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)), (c.r[3] & 0xFFFFu));
    // 010b74  ret 
    X86_AT(c, 0x10b74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b22u, "ran off the end of a function");
}
void f_00010b26(X86Cpu& c) {
    X86_TICK(c, 13);
    // 010b26  mov cx, 0x3f2f
    X86_AT(c, 0x10b26u);
    s16(c, 1, 0x3F2Fu);
    // 010b2a  mov word ptr [edi + 0xb], cx
    X86_AT(c, 0x10b2au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), (c.r[1] & 0xFFFFu));
    // 010b2e  mov word ptr [edi + 0xd], 0x4d0
    X86_AT(c, 0x10b2eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu)), 0x4D0u);
    // 010b34  call 0x10af7
    X86_AT(c, 0x10b34u);
    push32(c, 0x10b39u); f_00010af7(c); X86_RET(c, 0x10b39u);
    X86_TICK(c, 7);
    // 010b39  call 0x10b12
    X86_AT(c, 0x10b39u);
    push32(c, 0x10b3eu); f_00010b12(c); X86_RET(c, 0x10b3eu);
    X86_TICK(c, 9);
    // 010b3e  and cl, 0xf
    X86_AT(c, 0x10b3eu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010b41  cmp cl, 0xf
    X86_AT(c, 0x10b41u);
    (void)x86_sub(c, g8(c, 1), 0xFu, 0, 1);
    // 010b44  je 0x10b4c
    X86_AT(c, 0x10b44u);
    if (x86_cc(c, 4)) { goto L_10b4c; }
    X86_TICK(c, 9);
    // 010b46  mov bx, 1
    X86_AT(c, 0x10b46u);
    s16(c, 3, 0x1u);
    // 010b4a  jmp 0x10b70
    X86_AT(c, 0x10b4au);
    goto L_10b70;
L_10b4c:
    X86_TICK(c, 13);
    // 010b4c  mov cx, 0x7f5f
    X86_AT(c, 0x10b4cu);
    s16(c, 1, 0x7F5Fu);
    // 010b50  mov word ptr [edi + 0xb], cx
    X86_AT(c, 0x10b50u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), (c.r[1] & 0xFFFFu));
    // 010b54  mov word ptr [edi + 0xd], 0x4d2
    X86_AT(c, 0x10b54u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu)), 0x4D2u);
    // 010b5a  call 0x10af7
    X86_AT(c, 0x10b5au);
    push32(c, 0x10b5fu); f_00010af7(c); X86_RET(c, 0x10b5fu);
    X86_TICK(c, 7);
    // 010b5f  call 0x10b12
    X86_AT(c, 0x10b5fu);
    push32(c, 0x10b64u); f_00010b12(c); X86_RET(c, 0x10b64u);
    X86_TICK(c, 9);
    // 010b64  and cl, 0xf
    X86_AT(c, 0x10b64u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010b67  cmp cl, 0xf
    X86_AT(c, 0x10b67u);
    (void)x86_sub(c, g8(c, 1), 0xFu, 0, 1);
    // 010b6a  je 0x10b70
    X86_AT(c, 0x10b6au);
    if (x86_cc(c, 4)) { goto L_10b70; }
    X86_TICK(c, 2);
    // 010b6c  mov bx, 2
    X86_AT(c, 0x10b6cu);
    s16(c, 3, 0x2u);
L_10b70:
    X86_TICK(c, 12);
    // 010b70  mov word ptr [edi + 9], bx
    X86_AT(c, 0x10b70u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)), (c.r[3] & 0xFFFFu));
    // 010b74  ret 
    X86_AT(c, 0x10b74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b26u, "ran off the end of a function");
}
void f_00010b2a(X86Cpu& c) {
    X86_TICK(c, 11);
    // 010b2a  mov word ptr [edi + 0xb], cx
    X86_AT(c, 0x10b2au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), (c.r[1] & 0xFFFFu));
    // 010b2e  mov word ptr [edi + 0xd], 0x4d0
    X86_AT(c, 0x10b2eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu)), 0x4D0u);
    // 010b34  call 0x10af7
    X86_AT(c, 0x10b34u);
    push32(c, 0x10b39u); f_00010af7(c); X86_RET(c, 0x10b39u);
    X86_TICK(c, 7);
    // 010b39  call 0x10b12
    X86_AT(c, 0x10b39u);
    push32(c, 0x10b3eu); f_00010b12(c); X86_RET(c, 0x10b3eu);
    X86_TICK(c, 9);
    // 010b3e  and cl, 0xf
    X86_AT(c, 0x10b3eu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010b41  cmp cl, 0xf
    X86_AT(c, 0x10b41u);
    (void)x86_sub(c, g8(c, 1), 0xFu, 0, 1);
    // 010b44  je 0x10b4c
    X86_AT(c, 0x10b44u);
    if (x86_cc(c, 4)) { goto L_10b4c; }
    X86_TICK(c, 9);
    // 010b46  mov bx, 1
    X86_AT(c, 0x10b46u);
    s16(c, 3, 0x1u);
    // 010b4a  jmp 0x10b70
    X86_AT(c, 0x10b4au);
    goto L_10b70;
L_10b4c:
    X86_TICK(c, 13);
    // 010b4c  mov cx, 0x7f5f
    X86_AT(c, 0x10b4cu);
    s16(c, 1, 0x7F5Fu);
    // 010b50  mov word ptr [edi + 0xb], cx
    X86_AT(c, 0x10b50u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), (c.r[1] & 0xFFFFu));
    // 010b54  mov word ptr [edi + 0xd], 0x4d2
    X86_AT(c, 0x10b54u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu)), 0x4D2u);
    // 010b5a  call 0x10af7
    X86_AT(c, 0x10b5au);
    push32(c, 0x10b5fu); f_00010af7(c); X86_RET(c, 0x10b5fu);
    X86_TICK(c, 7);
    // 010b5f  call 0x10b12
    X86_AT(c, 0x10b5fu);
    push32(c, 0x10b64u); f_00010b12(c); X86_RET(c, 0x10b64u);
    X86_TICK(c, 9);
    // 010b64  and cl, 0xf
    X86_AT(c, 0x10b64u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010b67  cmp cl, 0xf
    X86_AT(c, 0x10b67u);
    (void)x86_sub(c, g8(c, 1), 0xFu, 0, 1);
    // 010b6a  je 0x10b70
    X86_AT(c, 0x10b6au);
    if (x86_cc(c, 4)) { goto L_10b70; }
    X86_TICK(c, 2);
    // 010b6c  mov bx, 2
    X86_AT(c, 0x10b6cu);
    s16(c, 3, 0x2u);
L_10b70:
    X86_TICK(c, 12);
    // 010b70  mov word ptr [edi + 9], bx
    X86_AT(c, 0x10b70u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)), (c.r[3] & 0xFFFFu));
    // 010b74  ret 
    X86_AT(c, 0x10b74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b2au, "ran off the end of a function");
}
void f_00010b2e(X86Cpu& c) {
    X86_TICK(c, 9);
    // 010b2e  mov word ptr [edi + 0xd], 0x4d0
    X86_AT(c, 0x10b2eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu)), 0x4D0u);
    // 010b34  call 0x10af7
    X86_AT(c, 0x10b34u);
    push32(c, 0x10b39u); f_00010af7(c); X86_RET(c, 0x10b39u);
    X86_TICK(c, 7);
    // 010b39  call 0x10b12
    X86_AT(c, 0x10b39u);
    push32(c, 0x10b3eu); f_00010b12(c); X86_RET(c, 0x10b3eu);
    X86_TICK(c, 9);
    // 010b3e  and cl, 0xf
    X86_AT(c, 0x10b3eu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010b41  cmp cl, 0xf
    X86_AT(c, 0x10b41u);
    (void)x86_sub(c, g8(c, 1), 0xFu, 0, 1);
    // 010b44  je 0x10b4c
    X86_AT(c, 0x10b44u);
    if (x86_cc(c, 4)) { goto L_10b4c; }
    X86_TICK(c, 9);
    // 010b46  mov bx, 1
    X86_AT(c, 0x10b46u);
    s16(c, 3, 0x1u);
    // 010b4a  jmp 0x10b70
    X86_AT(c, 0x10b4au);
    goto L_10b70;
L_10b4c:
    X86_TICK(c, 13);
    // 010b4c  mov cx, 0x7f5f
    X86_AT(c, 0x10b4cu);
    s16(c, 1, 0x7F5Fu);
    // 010b50  mov word ptr [edi + 0xb], cx
    X86_AT(c, 0x10b50u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), (c.r[1] & 0xFFFFu));
    // 010b54  mov word ptr [edi + 0xd], 0x4d2
    X86_AT(c, 0x10b54u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu)), 0x4D2u);
    // 010b5a  call 0x10af7
    X86_AT(c, 0x10b5au);
    push32(c, 0x10b5fu); f_00010af7(c); X86_RET(c, 0x10b5fu);
    X86_TICK(c, 7);
    // 010b5f  call 0x10b12
    X86_AT(c, 0x10b5fu);
    push32(c, 0x10b64u); f_00010b12(c); X86_RET(c, 0x10b64u);
    X86_TICK(c, 9);
    // 010b64  and cl, 0xf
    X86_AT(c, 0x10b64u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010b67  cmp cl, 0xf
    X86_AT(c, 0x10b67u);
    (void)x86_sub(c, g8(c, 1), 0xFu, 0, 1);
    // 010b6a  je 0x10b70
    X86_AT(c, 0x10b6au);
    if (x86_cc(c, 4)) { goto L_10b70; }
    X86_TICK(c, 2);
    // 010b6c  mov bx, 2
    X86_AT(c, 0x10b6cu);
    s16(c, 3, 0x2u);
L_10b70:
    X86_TICK(c, 12);
    // 010b70  mov word ptr [edi + 9], bx
    X86_AT(c, 0x10b70u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)), (c.r[3] & 0xFFFFu));
    // 010b74  ret 
    X86_AT(c, 0x10b74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b2eu, "ran off the end of a function");
}
void f_00010b34(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010b34  call 0x10af7
    X86_AT(c, 0x10b34u);
    push32(c, 0x10b39u); f_00010af7(c); X86_RET(c, 0x10b39u);
    X86_TICK(c, 7);
    // 010b39  call 0x10b12
    X86_AT(c, 0x10b39u);
    push32(c, 0x10b3eu); f_00010b12(c); X86_RET(c, 0x10b3eu);
    X86_TICK(c, 9);
    // 010b3e  and cl, 0xf
    X86_AT(c, 0x10b3eu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010b41  cmp cl, 0xf
    X86_AT(c, 0x10b41u);
    (void)x86_sub(c, g8(c, 1), 0xFu, 0, 1);
    // 010b44  je 0x10b4c
    X86_AT(c, 0x10b44u);
    if (x86_cc(c, 4)) { goto L_10b4c; }
    X86_TICK(c, 9);
    // 010b46  mov bx, 1
    X86_AT(c, 0x10b46u);
    s16(c, 3, 0x1u);
    // 010b4a  jmp 0x10b70
    X86_AT(c, 0x10b4au);
    goto L_10b70;
L_10b4c:
    X86_TICK(c, 13);
    // 010b4c  mov cx, 0x7f5f
    X86_AT(c, 0x10b4cu);
    s16(c, 1, 0x7F5Fu);
    // 010b50  mov word ptr [edi + 0xb], cx
    X86_AT(c, 0x10b50u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), (c.r[1] & 0xFFFFu));
    // 010b54  mov word ptr [edi + 0xd], 0x4d2
    X86_AT(c, 0x10b54u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu)), 0x4D2u);
    // 010b5a  call 0x10af7
    X86_AT(c, 0x10b5au);
    push32(c, 0x10b5fu); f_00010af7(c); X86_RET(c, 0x10b5fu);
    X86_TICK(c, 7);
    // 010b5f  call 0x10b12
    X86_AT(c, 0x10b5fu);
    push32(c, 0x10b64u); f_00010b12(c); X86_RET(c, 0x10b64u);
    X86_TICK(c, 9);
    // 010b64  and cl, 0xf
    X86_AT(c, 0x10b64u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010b67  cmp cl, 0xf
    X86_AT(c, 0x10b67u);
    (void)x86_sub(c, g8(c, 1), 0xFu, 0, 1);
    // 010b6a  je 0x10b70
    X86_AT(c, 0x10b6au);
    if (x86_cc(c, 4)) { goto L_10b70; }
    X86_TICK(c, 2);
    // 010b6c  mov bx, 2
    X86_AT(c, 0x10b6cu);
    s16(c, 3, 0x2u);
L_10b70:
    X86_TICK(c, 12);
    // 010b70  mov word ptr [edi + 9], bx
    X86_AT(c, 0x10b70u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)), (c.r[3] & 0xFFFFu));
    // 010b74  ret 
    X86_AT(c, 0x10b74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b34u, "ran off the end of a function");
}
void f_00010b39(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010b39  call 0x10b12
    X86_AT(c, 0x10b39u);
    push32(c, 0x10b3eu); f_00010b12(c); X86_RET(c, 0x10b3eu);
    X86_TICK(c, 9);
    // 010b3e  and cl, 0xf
    X86_AT(c, 0x10b3eu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010b41  cmp cl, 0xf
    X86_AT(c, 0x10b41u);
    (void)x86_sub(c, g8(c, 1), 0xFu, 0, 1);
    // 010b44  je 0x10b4c
    X86_AT(c, 0x10b44u);
    if (x86_cc(c, 4)) { goto L_10b4c; }
    X86_TICK(c, 9);
    // 010b46  mov bx, 1
    X86_AT(c, 0x10b46u);
    s16(c, 3, 0x1u);
    // 010b4a  jmp 0x10b70
    X86_AT(c, 0x10b4au);
    goto L_10b70;
L_10b4c:
    X86_TICK(c, 13);
    // 010b4c  mov cx, 0x7f5f
    X86_AT(c, 0x10b4cu);
    s16(c, 1, 0x7F5Fu);
    // 010b50  mov word ptr [edi + 0xb], cx
    X86_AT(c, 0x10b50u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), (c.r[1] & 0xFFFFu));
    // 010b54  mov word ptr [edi + 0xd], 0x4d2
    X86_AT(c, 0x10b54u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu)), 0x4D2u);
    // 010b5a  call 0x10af7
    X86_AT(c, 0x10b5au);
    push32(c, 0x10b5fu); f_00010af7(c); X86_RET(c, 0x10b5fu);
    X86_TICK(c, 7);
    // 010b5f  call 0x10b12
    X86_AT(c, 0x10b5fu);
    push32(c, 0x10b64u); f_00010b12(c); X86_RET(c, 0x10b64u);
    X86_TICK(c, 9);
    // 010b64  and cl, 0xf
    X86_AT(c, 0x10b64u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010b67  cmp cl, 0xf
    X86_AT(c, 0x10b67u);
    (void)x86_sub(c, g8(c, 1), 0xFu, 0, 1);
    // 010b6a  je 0x10b70
    X86_AT(c, 0x10b6au);
    if (x86_cc(c, 4)) { goto L_10b70; }
    X86_TICK(c, 2);
    // 010b6c  mov bx, 2
    X86_AT(c, 0x10b6cu);
    s16(c, 3, 0x2u);
L_10b70:
    X86_TICK(c, 12);
    // 010b70  mov word ptr [edi + 9], bx
    X86_AT(c, 0x10b70u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)), (c.r[3] & 0xFFFFu));
    // 010b74  ret 
    X86_AT(c, 0x10b74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b39u, "ran off the end of a function");
}
void f_00010b3e(X86Cpu& c) {
    X86_TICK(c, 9);
    // 010b3e  and cl, 0xf
    X86_AT(c, 0x10b3eu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010b41  cmp cl, 0xf
    X86_AT(c, 0x10b41u);
    (void)x86_sub(c, g8(c, 1), 0xFu, 0, 1);
    // 010b44  je 0x10b4c
    X86_AT(c, 0x10b44u);
    if (x86_cc(c, 4)) { goto L_10b4c; }
    X86_TICK(c, 9);
    // 010b46  mov bx, 1
    X86_AT(c, 0x10b46u);
    s16(c, 3, 0x1u);
    // 010b4a  jmp 0x10b70
    X86_AT(c, 0x10b4au);
    goto L_10b70;
L_10b4c:
    X86_TICK(c, 13);
    // 010b4c  mov cx, 0x7f5f
    X86_AT(c, 0x10b4cu);
    s16(c, 1, 0x7F5Fu);
    // 010b50  mov word ptr [edi + 0xb], cx
    X86_AT(c, 0x10b50u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), (c.r[1] & 0xFFFFu));
    // 010b54  mov word ptr [edi + 0xd], 0x4d2
    X86_AT(c, 0x10b54u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu)), 0x4D2u);
    // 010b5a  call 0x10af7
    X86_AT(c, 0x10b5au);
    push32(c, 0x10b5fu); f_00010af7(c); X86_RET(c, 0x10b5fu);
    X86_TICK(c, 7);
    // 010b5f  call 0x10b12
    X86_AT(c, 0x10b5fu);
    push32(c, 0x10b64u); f_00010b12(c); X86_RET(c, 0x10b64u);
    X86_TICK(c, 9);
    // 010b64  and cl, 0xf
    X86_AT(c, 0x10b64u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010b67  cmp cl, 0xf
    X86_AT(c, 0x10b67u);
    (void)x86_sub(c, g8(c, 1), 0xFu, 0, 1);
    // 010b6a  je 0x10b70
    X86_AT(c, 0x10b6au);
    if (x86_cc(c, 4)) { goto L_10b70; }
    X86_TICK(c, 2);
    // 010b6c  mov bx, 2
    X86_AT(c, 0x10b6cu);
    s16(c, 3, 0x2u);
L_10b70:
    X86_TICK(c, 12);
    // 010b70  mov word ptr [edi + 9], bx
    X86_AT(c, 0x10b70u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)), (c.r[3] & 0xFFFFu));
    // 010b74  ret 
    X86_AT(c, 0x10b74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b3eu, "ran off the end of a function");
}
void f_00010b41(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010b41  cmp cl, 0xf
    X86_AT(c, 0x10b41u);
    (void)x86_sub(c, g8(c, 1), 0xFu, 0, 1);
    // 010b44  je 0x10b4c
    X86_AT(c, 0x10b44u);
    if (x86_cc(c, 4)) { goto L_10b4c; }
    X86_TICK(c, 9);
    // 010b46  mov bx, 1
    X86_AT(c, 0x10b46u);
    s16(c, 3, 0x1u);
    // 010b4a  jmp 0x10b70
    X86_AT(c, 0x10b4au);
    goto L_10b70;
L_10b4c:
    X86_TICK(c, 13);
    // 010b4c  mov cx, 0x7f5f
    X86_AT(c, 0x10b4cu);
    s16(c, 1, 0x7F5Fu);
    // 010b50  mov word ptr [edi + 0xb], cx
    X86_AT(c, 0x10b50u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), (c.r[1] & 0xFFFFu));
    // 010b54  mov word ptr [edi + 0xd], 0x4d2
    X86_AT(c, 0x10b54u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu)), 0x4D2u);
    // 010b5a  call 0x10af7
    X86_AT(c, 0x10b5au);
    push32(c, 0x10b5fu); f_00010af7(c); X86_RET(c, 0x10b5fu);
    X86_TICK(c, 7);
    // 010b5f  call 0x10b12
    X86_AT(c, 0x10b5fu);
    push32(c, 0x10b64u); f_00010b12(c); X86_RET(c, 0x10b64u);
    X86_TICK(c, 9);
    // 010b64  and cl, 0xf
    X86_AT(c, 0x10b64u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010b67  cmp cl, 0xf
    X86_AT(c, 0x10b67u);
    (void)x86_sub(c, g8(c, 1), 0xFu, 0, 1);
    // 010b6a  je 0x10b70
    X86_AT(c, 0x10b6au);
    if (x86_cc(c, 4)) { goto L_10b70; }
    X86_TICK(c, 2);
    // 010b6c  mov bx, 2
    X86_AT(c, 0x10b6cu);
    s16(c, 3, 0x2u);
L_10b70:
    X86_TICK(c, 12);
    // 010b70  mov word ptr [edi + 9], bx
    X86_AT(c, 0x10b70u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)), (c.r[3] & 0xFFFFu));
    // 010b74  ret 
    X86_AT(c, 0x10b74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b41u, "ran off the end of a function");
}
void f_00010b44(X86Cpu& c) {
    X86_TICK(c, 5);
    // 010b44  je 0x10b4c
    X86_AT(c, 0x10b44u);
    if (x86_cc(c, 4)) { goto L_10b4c; }
    X86_TICK(c, 9);
    // 010b46  mov bx, 1
    X86_AT(c, 0x10b46u);
    s16(c, 3, 0x1u);
    // 010b4a  jmp 0x10b70
    X86_AT(c, 0x10b4au);
    goto L_10b70;
L_10b4c:
    X86_TICK(c, 13);
    // 010b4c  mov cx, 0x7f5f
    X86_AT(c, 0x10b4cu);
    s16(c, 1, 0x7F5Fu);
    // 010b50  mov word ptr [edi + 0xb], cx
    X86_AT(c, 0x10b50u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), (c.r[1] & 0xFFFFu));
    // 010b54  mov word ptr [edi + 0xd], 0x4d2
    X86_AT(c, 0x10b54u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu)), 0x4D2u);
    // 010b5a  call 0x10af7
    X86_AT(c, 0x10b5au);
    push32(c, 0x10b5fu); f_00010af7(c); X86_RET(c, 0x10b5fu);
    X86_TICK(c, 7);
    // 010b5f  call 0x10b12
    X86_AT(c, 0x10b5fu);
    push32(c, 0x10b64u); f_00010b12(c); X86_RET(c, 0x10b64u);
    X86_TICK(c, 9);
    // 010b64  and cl, 0xf
    X86_AT(c, 0x10b64u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010b67  cmp cl, 0xf
    X86_AT(c, 0x10b67u);
    (void)x86_sub(c, g8(c, 1), 0xFu, 0, 1);
    // 010b6a  je 0x10b70
    X86_AT(c, 0x10b6au);
    if (x86_cc(c, 4)) { goto L_10b70; }
    X86_TICK(c, 2);
    // 010b6c  mov bx, 2
    X86_AT(c, 0x10b6cu);
    s16(c, 3, 0x2u);
L_10b70:
    X86_TICK(c, 12);
    // 010b70  mov word ptr [edi + 9], bx
    X86_AT(c, 0x10b70u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)), (c.r[3] & 0xFFFFu));
    // 010b74  ret 
    X86_AT(c, 0x10b74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b44u, "ran off the end of a function");
}
void f_00010b4c(X86Cpu& c) {
    X86_TICK(c, 13);
    // 010b4c  mov cx, 0x7f5f
    X86_AT(c, 0x10b4cu);
    s16(c, 1, 0x7F5Fu);
    // 010b50  mov word ptr [edi + 0xb], cx
    X86_AT(c, 0x10b50u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), (c.r[1] & 0xFFFFu));
    // 010b54  mov word ptr [edi + 0xd], 0x4d2
    X86_AT(c, 0x10b54u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu)), 0x4D2u);
    // 010b5a  call 0x10af7
    X86_AT(c, 0x10b5au);
    push32(c, 0x10b5fu); f_00010af7(c); X86_RET(c, 0x10b5fu);
    X86_TICK(c, 7);
    // 010b5f  call 0x10b12
    X86_AT(c, 0x10b5fu);
    push32(c, 0x10b64u); f_00010b12(c); X86_RET(c, 0x10b64u);
    X86_TICK(c, 9);
    // 010b64  and cl, 0xf
    X86_AT(c, 0x10b64u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010b67  cmp cl, 0xf
    X86_AT(c, 0x10b67u);
    (void)x86_sub(c, g8(c, 1), 0xFu, 0, 1);
    // 010b6a  je 0x10b70
    X86_AT(c, 0x10b6au);
    if (x86_cc(c, 4)) { goto L_10b70; }
    X86_TICK(c, 2);
    // 010b6c  mov bx, 2
    X86_AT(c, 0x10b6cu);
    s16(c, 3, 0x2u);
L_10b70:
    X86_TICK(c, 12);
    // 010b70  mov word ptr [edi + 9], bx
    X86_AT(c, 0x10b70u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)), (c.r[3] & 0xFFFFu));
    // 010b74  ret 
    X86_AT(c, 0x10b74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b4cu, "ran off the end of a function");
}
void f_00010b50(X86Cpu& c) {
    X86_TICK(c, 11);
    // 010b50  mov word ptr [edi + 0xb], cx
    X86_AT(c, 0x10b50u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), (c.r[1] & 0xFFFFu));
    // 010b54  mov word ptr [edi + 0xd], 0x4d2
    X86_AT(c, 0x10b54u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu)), 0x4D2u);
    // 010b5a  call 0x10af7
    X86_AT(c, 0x10b5au);
    push32(c, 0x10b5fu); f_00010af7(c); X86_RET(c, 0x10b5fu);
    X86_TICK(c, 7);
    // 010b5f  call 0x10b12
    X86_AT(c, 0x10b5fu);
    push32(c, 0x10b64u); f_00010b12(c); X86_RET(c, 0x10b64u);
    X86_TICK(c, 9);
    // 010b64  and cl, 0xf
    X86_AT(c, 0x10b64u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010b67  cmp cl, 0xf
    X86_AT(c, 0x10b67u);
    (void)x86_sub(c, g8(c, 1), 0xFu, 0, 1);
    // 010b6a  je 0x10b70
    X86_AT(c, 0x10b6au);
    if (x86_cc(c, 4)) { goto L_10b70; }
    X86_TICK(c, 2);
    // 010b6c  mov bx, 2
    X86_AT(c, 0x10b6cu);
    s16(c, 3, 0x2u);
L_10b70:
    X86_TICK(c, 12);
    // 010b70  mov word ptr [edi + 9], bx
    X86_AT(c, 0x10b70u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)), (c.r[3] & 0xFFFFu));
    // 010b74  ret 
    X86_AT(c, 0x10b74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b50u, "ran off the end of a function");
}
void f_00010b54(X86Cpu& c) {
    X86_TICK(c, 9);
    // 010b54  mov word ptr [edi + 0xd], 0x4d2
    X86_AT(c, 0x10b54u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu)), 0x4D2u);
    // 010b5a  call 0x10af7
    X86_AT(c, 0x10b5au);
    push32(c, 0x10b5fu); f_00010af7(c); X86_RET(c, 0x10b5fu);
    X86_TICK(c, 7);
    // 010b5f  call 0x10b12
    X86_AT(c, 0x10b5fu);
    push32(c, 0x10b64u); f_00010b12(c); X86_RET(c, 0x10b64u);
    X86_TICK(c, 9);
    // 010b64  and cl, 0xf
    X86_AT(c, 0x10b64u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010b67  cmp cl, 0xf
    X86_AT(c, 0x10b67u);
    (void)x86_sub(c, g8(c, 1), 0xFu, 0, 1);
    // 010b6a  je 0x10b70
    X86_AT(c, 0x10b6au);
    if (x86_cc(c, 4)) { goto L_10b70; }
    X86_TICK(c, 2);
    // 010b6c  mov bx, 2
    X86_AT(c, 0x10b6cu);
    s16(c, 3, 0x2u);
L_10b70:
    X86_TICK(c, 12);
    // 010b70  mov word ptr [edi + 9], bx
    X86_AT(c, 0x10b70u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)), (c.r[3] & 0xFFFFu));
    // 010b74  ret 
    X86_AT(c, 0x10b74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b54u, "ran off the end of a function");
}
void f_00010b5a(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010b5a  call 0x10af7
    X86_AT(c, 0x10b5au);
    push32(c, 0x10b5fu); f_00010af7(c); X86_RET(c, 0x10b5fu);
    X86_TICK(c, 7);
    // 010b5f  call 0x10b12
    X86_AT(c, 0x10b5fu);
    push32(c, 0x10b64u); f_00010b12(c); X86_RET(c, 0x10b64u);
    X86_TICK(c, 9);
    // 010b64  and cl, 0xf
    X86_AT(c, 0x10b64u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010b67  cmp cl, 0xf
    X86_AT(c, 0x10b67u);
    (void)x86_sub(c, g8(c, 1), 0xFu, 0, 1);
    // 010b6a  je 0x10b70
    X86_AT(c, 0x10b6au);
    if (x86_cc(c, 4)) { goto L_10b70; }
    X86_TICK(c, 2);
    // 010b6c  mov bx, 2
    X86_AT(c, 0x10b6cu);
    s16(c, 3, 0x2u);
L_10b70:
    X86_TICK(c, 12);
    // 010b70  mov word ptr [edi + 9], bx
    X86_AT(c, 0x10b70u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)), (c.r[3] & 0xFFFFu));
    // 010b74  ret 
    X86_AT(c, 0x10b74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b5au, "ran off the end of a function");
}
void f_00010b5f(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010b5f  call 0x10b12
    X86_AT(c, 0x10b5fu);
    push32(c, 0x10b64u); f_00010b12(c); X86_RET(c, 0x10b64u);
    X86_TICK(c, 9);
    // 010b64  and cl, 0xf
    X86_AT(c, 0x10b64u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010b67  cmp cl, 0xf
    X86_AT(c, 0x10b67u);
    (void)x86_sub(c, g8(c, 1), 0xFu, 0, 1);
    // 010b6a  je 0x10b70
    X86_AT(c, 0x10b6au);
    if (x86_cc(c, 4)) { goto L_10b70; }
    X86_TICK(c, 2);
    // 010b6c  mov bx, 2
    X86_AT(c, 0x10b6cu);
    s16(c, 3, 0x2u);
L_10b70:
    X86_TICK(c, 12);
    // 010b70  mov word ptr [edi + 9], bx
    X86_AT(c, 0x10b70u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)), (c.r[3] & 0xFFFFu));
    // 010b74  ret 
    X86_AT(c, 0x10b74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b5fu, "ran off the end of a function");
}
void f_00010b64(X86Cpu& c) {
    X86_TICK(c, 9);
    // 010b64  and cl, 0xf
    X86_AT(c, 0x10b64u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0xFu, 1)); }
    // 010b67  cmp cl, 0xf
    X86_AT(c, 0x10b67u);
    (void)x86_sub(c, g8(c, 1), 0xFu, 0, 1);
    // 010b6a  je 0x10b70
    X86_AT(c, 0x10b6au);
    if (x86_cc(c, 4)) { goto L_10b70; }
    X86_TICK(c, 2);
    // 010b6c  mov bx, 2
    X86_AT(c, 0x10b6cu);
    s16(c, 3, 0x2u);
L_10b70:
    X86_TICK(c, 12);
    // 010b70  mov word ptr [edi + 9], bx
    X86_AT(c, 0x10b70u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)), (c.r[3] & 0xFFFFu));
    // 010b74  ret 
    X86_AT(c, 0x10b74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b64u, "ran off the end of a function");
}
void f_00010b67(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010b67  cmp cl, 0xf
    X86_AT(c, 0x10b67u);
    (void)x86_sub(c, g8(c, 1), 0xFu, 0, 1);
    // 010b6a  je 0x10b70
    X86_AT(c, 0x10b6au);
    if (x86_cc(c, 4)) { goto L_10b70; }
    X86_TICK(c, 2);
    // 010b6c  mov bx, 2
    X86_AT(c, 0x10b6cu);
    s16(c, 3, 0x2u);
L_10b70:
    X86_TICK(c, 12);
    // 010b70  mov word ptr [edi + 9], bx
    X86_AT(c, 0x10b70u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)), (c.r[3] & 0xFFFFu));
    // 010b74  ret 
    X86_AT(c, 0x10b74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b67u, "ran off the end of a function");
}
void f_00010b6a(X86Cpu& c) {
    X86_TICK(c, 5);
    // 010b6a  je 0x10b70
    X86_AT(c, 0x10b6au);
    if (x86_cc(c, 4)) { goto L_10b70; }
    X86_TICK(c, 2);
    // 010b6c  mov bx, 2
    X86_AT(c, 0x10b6cu);
    s16(c, 3, 0x2u);
L_10b70:
    X86_TICK(c, 12);
    // 010b70  mov word ptr [edi + 9], bx
    X86_AT(c, 0x10b70u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)), (c.r[3] & 0xFFFFu));
    // 010b74  ret 
    X86_AT(c, 0x10b74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b6au, "ran off the end of a function");
}
void f_00010b6c(X86Cpu& c) {
    X86_TICK(c, 14);
    // 010b6c  mov bx, 2
    X86_AT(c, 0x10b6cu);
    s16(c, 3, 0x2u);
    // 010b70  mov word ptr [edi + 9], bx
    X86_AT(c, 0x10b70u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)), (c.r[3] & 0xFFFFu));
    // 010b74  ret 
    X86_AT(c, 0x10b74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b6cu, "ran off the end of a function");
}
void f_00010b70(X86Cpu& c) {
    X86_TICK(c, 12);
    // 010b70  mov word ptr [edi + 9], bx
    X86_AT(c, 0x10b70u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)), (c.r[3] & 0xFFFFu));
    // 010b74  ret 
    X86_AT(c, 0x10b74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b70u, "ran off the end of a function");
}
void f_00010b74(X86Cpu& c) {
    X86_TICK(c, 10);
    // 010b74  ret 
    X86_AT(c, 0x10b74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b74u, "ran off the end of a function");
}
void f_00010b75(X86Cpu& c) {
    X86_TICK(c, 93);
    // 010b75  sub esp, 0xe
    X86_AT(c, 0x10b75u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xEu, 0, 4); }
    // 010b78  mov esi, esp
    X86_AT(c, 0x10b78u);
    c.r[6] = c.r[4];
    // 010b7a  push ds
    X86_AT(c, 0x10b7au);
    push32(c, c.sreg[3]);
    // 010b7b  mov gs, word ptr [esp]
    X86_AT(c, 0x10b7bu);
    x86_load_seg(c, 5, rd16((c.sbase[2] + (uint32_t)(c.r[4]))) & 0xFFFFu);
    // 010b7e  push ss
    X86_AT(c, 0x10b7eu);
    push32(c, c.sreg[2]);
    // 010b7f  pop ds
    X86_AT(c, 0x10b7fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010b80  pushfd 
    X86_AT(c, 0x10b80u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010b81  cli 
    X86_AT(c, 0x10b81u);
    c.fl &= ~X86_IF;
    // 010b82  lea eax, [edi + 0x662]
    X86_AT(c, 0x10b82u);
    c.r[0] = (uint32_t)(c.r[7] + 0x662u);
    // 010b88  mov dword ptr [esi], eax
    X86_AT(c, 0x10b88u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010b8a  mov word ptr [esi + 4], gs
    X86_AT(c, 0x10b8au);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (uint32_t)c.sreg[5]);
    // 010b8d  mov dx, word ptr gs:[edi + 0x56]
    X86_AT(c, 0x10b8du);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x56u))));
    // 010b92  sub dx, word ptr gs:[edi + 0x49]
    X86_AT(c, 0x10b92u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x49u))), 0, 2)); }
    // 010b97  mov word ptr [esi + 6], dx
    X86_AT(c, 0x10b97u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 010b9b  mov bx, word ptr gs:[edi + 0x58]
    X86_AT(c, 0x10b9bu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u))));
    // 010ba0  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10ba0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010ba5  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10ba5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010ba9  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10ba9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010bae  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10baeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010bb2  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10bb2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010bb7  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10bb7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010bbb  popfd 
    X86_AT(c, 0x10bbbu);
    x86_popfd(c, 4);
    // 010bbc  mov ah, 0x25
    X86_AT(c, 0x10bbcu);
    s8(c, 4, 0x25u);
    // 010bbe  mov al, 0
    X86_AT(c, 0x10bbeu);
    s8(c, 0, 0x0u);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b75u, "ran off the end of a function");
}
void f_00010b78(X86Cpu& c) {
    X86_TICK(c, 91);
    // 010b78  mov esi, esp
    X86_AT(c, 0x10b78u);
    c.r[6] = c.r[4];
    // 010b7a  push ds
    X86_AT(c, 0x10b7au);
    push32(c, c.sreg[3]);
    // 010b7b  mov gs, word ptr [esp]
    X86_AT(c, 0x10b7bu);
    x86_load_seg(c, 5, rd16((c.sbase[2] + (uint32_t)(c.r[4]))) & 0xFFFFu);
    // 010b7e  push ss
    X86_AT(c, 0x10b7eu);
    push32(c, c.sreg[2]);
    // 010b7f  pop ds
    X86_AT(c, 0x10b7fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010b80  pushfd 
    X86_AT(c, 0x10b80u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010b81  cli 
    X86_AT(c, 0x10b81u);
    c.fl &= ~X86_IF;
    // 010b82  lea eax, [edi + 0x662]
    X86_AT(c, 0x10b82u);
    c.r[0] = (uint32_t)(c.r[7] + 0x662u);
    // 010b88  mov dword ptr [esi], eax
    X86_AT(c, 0x10b88u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010b8a  mov word ptr [esi + 4], gs
    X86_AT(c, 0x10b8au);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (uint32_t)c.sreg[5]);
    // 010b8d  mov dx, word ptr gs:[edi + 0x56]
    X86_AT(c, 0x10b8du);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x56u))));
    // 010b92  sub dx, word ptr gs:[edi + 0x49]
    X86_AT(c, 0x10b92u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x49u))), 0, 2)); }
    // 010b97  mov word ptr [esi + 6], dx
    X86_AT(c, 0x10b97u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 010b9b  mov bx, word ptr gs:[edi + 0x58]
    X86_AT(c, 0x10b9bu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u))));
    // 010ba0  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10ba0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010ba5  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10ba5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010ba9  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10ba9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010bae  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10baeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010bb2  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10bb2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010bb7  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10bb7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010bbb  popfd 
    X86_AT(c, 0x10bbbu);
    x86_popfd(c, 4);
    // 010bbc  mov ah, 0x25
    X86_AT(c, 0x10bbcu);
    s8(c, 4, 0x25u);
    // 010bbe  mov al, 0
    X86_AT(c, 0x10bbeu);
    s8(c, 0, 0x0u);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b78u, "ran off the end of a function");
}
void f_00010b7a(X86Cpu& c) {
    X86_TICK(c, 89);
    // 010b7a  push ds
    X86_AT(c, 0x10b7au);
    push32(c, c.sreg[3]);
    // 010b7b  mov gs, word ptr [esp]
    X86_AT(c, 0x10b7bu);
    x86_load_seg(c, 5, rd16((c.sbase[2] + (uint32_t)(c.r[4]))) & 0xFFFFu);
    // 010b7e  push ss
    X86_AT(c, 0x10b7eu);
    push32(c, c.sreg[2]);
    // 010b7f  pop ds
    X86_AT(c, 0x10b7fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010b80  pushfd 
    X86_AT(c, 0x10b80u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010b81  cli 
    X86_AT(c, 0x10b81u);
    c.fl &= ~X86_IF;
    // 010b82  lea eax, [edi + 0x662]
    X86_AT(c, 0x10b82u);
    c.r[0] = (uint32_t)(c.r[7] + 0x662u);
    // 010b88  mov dword ptr [esi], eax
    X86_AT(c, 0x10b88u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010b8a  mov word ptr [esi + 4], gs
    X86_AT(c, 0x10b8au);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (uint32_t)c.sreg[5]);
    // 010b8d  mov dx, word ptr gs:[edi + 0x56]
    X86_AT(c, 0x10b8du);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x56u))));
    // 010b92  sub dx, word ptr gs:[edi + 0x49]
    X86_AT(c, 0x10b92u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x49u))), 0, 2)); }
    // 010b97  mov word ptr [esi + 6], dx
    X86_AT(c, 0x10b97u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 010b9b  mov bx, word ptr gs:[edi + 0x58]
    X86_AT(c, 0x10b9bu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u))));
    // 010ba0  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10ba0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010ba5  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10ba5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010ba9  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10ba9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010bae  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10baeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010bb2  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10bb2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010bb7  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10bb7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010bbb  popfd 
    X86_AT(c, 0x10bbbu);
    x86_popfd(c, 4);
    // 010bbc  mov ah, 0x25
    X86_AT(c, 0x10bbcu);
    s8(c, 4, 0x25u);
    // 010bbe  mov al, 0
    X86_AT(c, 0x10bbeu);
    s8(c, 0, 0x0u);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b7au, "ran off the end of a function");
}
void f_00010b7b(X86Cpu& c) {
    X86_TICK(c, 87);
    // 010b7b  mov gs, word ptr [esp]
    X86_AT(c, 0x10b7bu);
    x86_load_seg(c, 5, rd16((c.sbase[2] + (uint32_t)(c.r[4]))) & 0xFFFFu);
    // 010b7e  push ss
    X86_AT(c, 0x10b7eu);
    push32(c, c.sreg[2]);
    // 010b7f  pop ds
    X86_AT(c, 0x10b7fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010b80  pushfd 
    X86_AT(c, 0x10b80u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010b81  cli 
    X86_AT(c, 0x10b81u);
    c.fl &= ~X86_IF;
    // 010b82  lea eax, [edi + 0x662]
    X86_AT(c, 0x10b82u);
    c.r[0] = (uint32_t)(c.r[7] + 0x662u);
    // 010b88  mov dword ptr [esi], eax
    X86_AT(c, 0x10b88u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010b8a  mov word ptr [esi + 4], gs
    X86_AT(c, 0x10b8au);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (uint32_t)c.sreg[5]);
    // 010b8d  mov dx, word ptr gs:[edi + 0x56]
    X86_AT(c, 0x10b8du);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x56u))));
    // 010b92  sub dx, word ptr gs:[edi + 0x49]
    X86_AT(c, 0x10b92u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x49u))), 0, 2)); }
    // 010b97  mov word ptr [esi + 6], dx
    X86_AT(c, 0x10b97u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 010b9b  mov bx, word ptr gs:[edi + 0x58]
    X86_AT(c, 0x10b9bu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u))));
    // 010ba0  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10ba0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010ba5  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10ba5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010ba9  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10ba9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010bae  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10baeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010bb2  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10bb2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010bb7  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10bb7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010bbb  popfd 
    X86_AT(c, 0x10bbbu);
    x86_popfd(c, 4);
    // 010bbc  mov ah, 0x25
    X86_AT(c, 0x10bbcu);
    s8(c, 4, 0x25u);
    // 010bbe  mov al, 0
    X86_AT(c, 0x10bbeu);
    s8(c, 0, 0x0u);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b7bu, "ran off the end of a function");
}
void f_00010b7e(X86Cpu& c) {
    X86_TICK(c, 83);
    // 010b7e  push ss
    X86_AT(c, 0x10b7eu);
    push32(c, c.sreg[2]);
    // 010b7f  pop ds
    X86_AT(c, 0x10b7fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010b80  pushfd 
    X86_AT(c, 0x10b80u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010b81  cli 
    X86_AT(c, 0x10b81u);
    c.fl &= ~X86_IF;
    // 010b82  lea eax, [edi + 0x662]
    X86_AT(c, 0x10b82u);
    c.r[0] = (uint32_t)(c.r[7] + 0x662u);
    // 010b88  mov dword ptr [esi], eax
    X86_AT(c, 0x10b88u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010b8a  mov word ptr [esi + 4], gs
    X86_AT(c, 0x10b8au);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (uint32_t)c.sreg[5]);
    // 010b8d  mov dx, word ptr gs:[edi + 0x56]
    X86_AT(c, 0x10b8du);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x56u))));
    // 010b92  sub dx, word ptr gs:[edi + 0x49]
    X86_AT(c, 0x10b92u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x49u))), 0, 2)); }
    // 010b97  mov word ptr [esi + 6], dx
    X86_AT(c, 0x10b97u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 010b9b  mov bx, word ptr gs:[edi + 0x58]
    X86_AT(c, 0x10b9bu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u))));
    // 010ba0  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10ba0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010ba5  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10ba5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010ba9  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10ba9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010bae  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10baeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010bb2  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10bb2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010bb7  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10bb7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010bbb  popfd 
    X86_AT(c, 0x10bbbu);
    x86_popfd(c, 4);
    // 010bbc  mov ah, 0x25
    X86_AT(c, 0x10bbcu);
    s8(c, 4, 0x25u);
    // 010bbe  mov al, 0
    X86_AT(c, 0x10bbeu);
    s8(c, 0, 0x0u);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b7eu, "ran off the end of a function");
}
void f_00010b7f(X86Cpu& c) {
    X86_TICK(c, 81);
    // 010b7f  pop ds
    X86_AT(c, 0x10b7fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010b80  pushfd 
    X86_AT(c, 0x10b80u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010b81  cli 
    X86_AT(c, 0x10b81u);
    c.fl &= ~X86_IF;
    // 010b82  lea eax, [edi + 0x662]
    X86_AT(c, 0x10b82u);
    c.r[0] = (uint32_t)(c.r[7] + 0x662u);
    // 010b88  mov dword ptr [esi], eax
    X86_AT(c, 0x10b88u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010b8a  mov word ptr [esi + 4], gs
    X86_AT(c, 0x10b8au);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (uint32_t)c.sreg[5]);
    // 010b8d  mov dx, word ptr gs:[edi + 0x56]
    X86_AT(c, 0x10b8du);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x56u))));
    // 010b92  sub dx, word ptr gs:[edi + 0x49]
    X86_AT(c, 0x10b92u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x49u))), 0, 2)); }
    // 010b97  mov word ptr [esi + 6], dx
    X86_AT(c, 0x10b97u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 010b9b  mov bx, word ptr gs:[edi + 0x58]
    X86_AT(c, 0x10b9bu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u))));
    // 010ba0  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10ba0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010ba5  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10ba5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010ba9  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10ba9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010bae  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10baeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010bb2  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10bb2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010bb7  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10bb7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010bbb  popfd 
    X86_AT(c, 0x10bbbu);
    x86_popfd(c, 4);
    // 010bbc  mov ah, 0x25
    X86_AT(c, 0x10bbcu);
    s8(c, 4, 0x25u);
    // 010bbe  mov al, 0
    X86_AT(c, 0x10bbeu);
    s8(c, 0, 0x0u);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b7fu, "ran off the end of a function");
}
void f_00010b80(X86Cpu& c) {
    X86_TICK(c, 77);
    // 010b80  pushfd 
    X86_AT(c, 0x10b80u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010b81  cli 
    X86_AT(c, 0x10b81u);
    c.fl &= ~X86_IF;
    // 010b82  lea eax, [edi + 0x662]
    X86_AT(c, 0x10b82u);
    c.r[0] = (uint32_t)(c.r[7] + 0x662u);
    // 010b88  mov dword ptr [esi], eax
    X86_AT(c, 0x10b88u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010b8a  mov word ptr [esi + 4], gs
    X86_AT(c, 0x10b8au);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (uint32_t)c.sreg[5]);
    // 010b8d  mov dx, word ptr gs:[edi + 0x56]
    X86_AT(c, 0x10b8du);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x56u))));
    // 010b92  sub dx, word ptr gs:[edi + 0x49]
    X86_AT(c, 0x10b92u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x49u))), 0, 2)); }
    // 010b97  mov word ptr [esi + 6], dx
    X86_AT(c, 0x10b97u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 010b9b  mov bx, word ptr gs:[edi + 0x58]
    X86_AT(c, 0x10b9bu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u))));
    // 010ba0  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10ba0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010ba5  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10ba5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010ba9  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10ba9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010bae  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10baeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010bb2  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10bb2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010bb7  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10bb7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010bbb  popfd 
    X86_AT(c, 0x10bbbu);
    x86_popfd(c, 4);
    // 010bbc  mov ah, 0x25
    X86_AT(c, 0x10bbcu);
    s8(c, 4, 0x25u);
    // 010bbe  mov al, 0
    X86_AT(c, 0x10bbeu);
    s8(c, 0, 0x0u);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b80u, "ran off the end of a function");
}
void f_00010b81(X86Cpu& c) {
    X86_TICK(c, 71);
    // 010b81  cli 
    X86_AT(c, 0x10b81u);
    c.fl &= ~X86_IF;
    // 010b82  lea eax, [edi + 0x662]
    X86_AT(c, 0x10b82u);
    c.r[0] = (uint32_t)(c.r[7] + 0x662u);
    // 010b88  mov dword ptr [esi], eax
    X86_AT(c, 0x10b88u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010b8a  mov word ptr [esi + 4], gs
    X86_AT(c, 0x10b8au);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (uint32_t)c.sreg[5]);
    // 010b8d  mov dx, word ptr gs:[edi + 0x56]
    X86_AT(c, 0x10b8du);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x56u))));
    // 010b92  sub dx, word ptr gs:[edi + 0x49]
    X86_AT(c, 0x10b92u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x49u))), 0, 2)); }
    // 010b97  mov word ptr [esi + 6], dx
    X86_AT(c, 0x10b97u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 010b9b  mov bx, word ptr gs:[edi + 0x58]
    X86_AT(c, 0x10b9bu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u))));
    // 010ba0  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10ba0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010ba5  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10ba5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010ba9  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10ba9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010bae  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10baeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010bb2  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10bb2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010bb7  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10bb7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010bbb  popfd 
    X86_AT(c, 0x10bbbu);
    x86_popfd(c, 4);
    // 010bbc  mov ah, 0x25
    X86_AT(c, 0x10bbcu);
    s8(c, 4, 0x25u);
    // 010bbe  mov al, 0
    X86_AT(c, 0x10bbeu);
    s8(c, 0, 0x0u);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b81u, "ran off the end of a function");
}
void f_00010b82(X86Cpu& c) {
    X86_TICK(c, 69);
    // 010b82  lea eax, [edi + 0x662]
    X86_AT(c, 0x10b82u);
    c.r[0] = (uint32_t)(c.r[7] + 0x662u);
    // 010b88  mov dword ptr [esi], eax
    X86_AT(c, 0x10b88u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010b8a  mov word ptr [esi + 4], gs
    X86_AT(c, 0x10b8au);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (uint32_t)c.sreg[5]);
    // 010b8d  mov dx, word ptr gs:[edi + 0x56]
    X86_AT(c, 0x10b8du);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x56u))));
    // 010b92  sub dx, word ptr gs:[edi + 0x49]
    X86_AT(c, 0x10b92u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x49u))), 0, 2)); }
    // 010b97  mov word ptr [esi + 6], dx
    X86_AT(c, 0x10b97u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 010b9b  mov bx, word ptr gs:[edi + 0x58]
    X86_AT(c, 0x10b9bu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u))));
    // 010ba0  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10ba0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010ba5  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10ba5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010ba9  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10ba9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010bae  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10baeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010bb2  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10bb2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010bb7  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10bb7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010bbb  popfd 
    X86_AT(c, 0x10bbbu);
    x86_popfd(c, 4);
    // 010bbc  mov ah, 0x25
    X86_AT(c, 0x10bbcu);
    s8(c, 4, 0x25u);
    // 010bbe  mov al, 0
    X86_AT(c, 0x10bbeu);
    s8(c, 0, 0x0u);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b82u, "ran off the end of a function");
}
void f_00010b88(X86Cpu& c) {
    X86_TICK(c, 67);
    // 010b88  mov dword ptr [esi], eax
    X86_AT(c, 0x10b88u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 010b8a  mov word ptr [esi + 4], gs
    X86_AT(c, 0x10b8au);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (uint32_t)c.sreg[5]);
    // 010b8d  mov dx, word ptr gs:[edi + 0x56]
    X86_AT(c, 0x10b8du);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x56u))));
    // 010b92  sub dx, word ptr gs:[edi + 0x49]
    X86_AT(c, 0x10b92u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x49u))), 0, 2)); }
    // 010b97  mov word ptr [esi + 6], dx
    X86_AT(c, 0x10b97u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 010b9b  mov bx, word ptr gs:[edi + 0x58]
    X86_AT(c, 0x10b9bu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u))));
    // 010ba0  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10ba0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010ba5  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10ba5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010ba9  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10ba9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010bae  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10baeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010bb2  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10bb2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010bb7  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10bb7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010bbb  popfd 
    X86_AT(c, 0x10bbbu);
    x86_popfd(c, 4);
    // 010bbc  mov ah, 0x25
    X86_AT(c, 0x10bbcu);
    s8(c, 4, 0x25u);
    // 010bbe  mov al, 0
    X86_AT(c, 0x10bbeu);
    s8(c, 0, 0x0u);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b88u, "ran off the end of a function");
}
void f_00010b8a(X86Cpu& c) {
    X86_TICK(c, 65);
    // 010b8a  mov word ptr [esi + 4], gs
    X86_AT(c, 0x10b8au);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), (uint32_t)c.sreg[5]);
    // 010b8d  mov dx, word ptr gs:[edi + 0x56]
    X86_AT(c, 0x10b8du);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x56u))));
    // 010b92  sub dx, word ptr gs:[edi + 0x49]
    X86_AT(c, 0x10b92u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x49u))), 0, 2)); }
    // 010b97  mov word ptr [esi + 6], dx
    X86_AT(c, 0x10b97u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 010b9b  mov bx, word ptr gs:[edi + 0x58]
    X86_AT(c, 0x10b9bu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u))));
    // 010ba0  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10ba0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010ba5  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10ba5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010ba9  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10ba9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010bae  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10baeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010bb2  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10bb2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010bb7  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10bb7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010bbb  popfd 
    X86_AT(c, 0x10bbbu);
    x86_popfd(c, 4);
    // 010bbc  mov ah, 0x25
    X86_AT(c, 0x10bbcu);
    s8(c, 4, 0x25u);
    // 010bbe  mov al, 0
    X86_AT(c, 0x10bbeu);
    s8(c, 0, 0x0u);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b8au, "ran off the end of a function");
}
void f_00010b8d(X86Cpu& c) {
    X86_TICK(c, 63);
    // 010b8d  mov dx, word ptr gs:[edi + 0x56]
    X86_AT(c, 0x10b8du);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x56u))));
    // 010b92  sub dx, word ptr gs:[edi + 0x49]
    X86_AT(c, 0x10b92u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x49u))), 0, 2)); }
    // 010b97  mov word ptr [esi + 6], dx
    X86_AT(c, 0x10b97u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 010b9b  mov bx, word ptr gs:[edi + 0x58]
    X86_AT(c, 0x10b9bu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u))));
    // 010ba0  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10ba0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010ba5  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10ba5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010ba9  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10ba9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010bae  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10baeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010bb2  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10bb2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010bb7  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10bb7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010bbb  popfd 
    X86_AT(c, 0x10bbbu);
    x86_popfd(c, 4);
    // 010bbc  mov ah, 0x25
    X86_AT(c, 0x10bbcu);
    s8(c, 4, 0x25u);
    // 010bbe  mov al, 0
    X86_AT(c, 0x10bbeu);
    s8(c, 0, 0x0u);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b8du, "ran off the end of a function");
}
void f_00010b92(X86Cpu& c) {
    X86_TICK(c, 59);
    // 010b92  sub dx, word ptr gs:[edi + 0x49]
    X86_AT(c, 0x10b92u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x49u))), 0, 2)); }
    // 010b97  mov word ptr [esi + 6], dx
    X86_AT(c, 0x10b97u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 010b9b  mov bx, word ptr gs:[edi + 0x58]
    X86_AT(c, 0x10b9bu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u))));
    // 010ba0  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10ba0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010ba5  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10ba5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010ba9  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10ba9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010bae  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10baeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010bb2  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10bb2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010bb7  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10bb7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010bbb  popfd 
    X86_AT(c, 0x10bbbu);
    x86_popfd(c, 4);
    // 010bbc  mov ah, 0x25
    X86_AT(c, 0x10bbcu);
    s8(c, 4, 0x25u);
    // 010bbe  mov al, 0
    X86_AT(c, 0x10bbeu);
    s8(c, 0, 0x0u);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b92u, "ran off the end of a function");
}
void f_00010b97(X86Cpu& c) {
    X86_TICK(c, 53);
    // 010b97  mov word ptr [esi + 6], dx
    X86_AT(c, 0x10b97u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x6u)), (c.r[2] & 0xFFFFu));
    // 010b9b  mov bx, word ptr gs:[edi + 0x58]
    X86_AT(c, 0x10b9bu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u))));
    // 010ba0  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10ba0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010ba5  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10ba5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010ba9  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10ba9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010bae  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10baeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010bb2  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10bb2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010bb7  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10bb7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010bbb  popfd 
    X86_AT(c, 0x10bbbu);
    x86_popfd(c, 4);
    // 010bbc  mov ah, 0x25
    X86_AT(c, 0x10bbcu);
    s8(c, 4, 0x25u);
    // 010bbe  mov al, 0
    X86_AT(c, 0x10bbeu);
    s8(c, 0, 0x0u);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b97u, "ran off the end of a function");
}
void f_00010b9b(X86Cpu& c) {
    X86_TICK(c, 51);
    // 010b9b  mov bx, word ptr gs:[edi + 0x58]
    X86_AT(c, 0x10b9bu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x58u))));
    // 010ba0  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10ba0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010ba5  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10ba5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010ba9  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10ba9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010bae  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10baeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010bb2  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10bb2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010bb7  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10bb7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010bbb  popfd 
    X86_AT(c, 0x10bbbu);
    x86_popfd(c, 4);
    // 010bbc  mov ah, 0x25
    X86_AT(c, 0x10bbcu);
    s8(c, 4, 0x25u);
    // 010bbe  mov al, 0
    X86_AT(c, 0x10bbeu);
    s8(c, 0, 0x0u);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10b9bu, "ran off the end of a function");
}
void f_00010ba0(X86Cpu& c) {
    X86_TICK(c, 47);
    // 010ba0  sub bx, word ptr gs:[edi + 0x4b]
    X86_AT(c, 0x10ba0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x4Bu))), 0, 2)); }
    // 010ba5  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10ba5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010ba9  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10ba9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010bae  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10baeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010bb2  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10bb2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010bb7  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10bb7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010bbb  popfd 
    X86_AT(c, 0x10bbbu);
    x86_popfd(c, 4);
    // 010bbc  mov ah, 0x25
    X86_AT(c, 0x10bbcu);
    s8(c, 4, 0x25u);
    // 010bbe  mov al, 0
    X86_AT(c, 0x10bbeu);
    s8(c, 0, 0x0u);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10ba0u, "ran off the end of a function");
}
void f_00010ba5(X86Cpu& c) {
    X86_TICK(c, 41);
    // 010ba5  mov word ptr [esi + 8], bx
    X86_AT(c, 0x10ba5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), (c.r[3] & 0xFFFFu));
    // 010ba9  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10ba9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010bae  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10baeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010bb2  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10bb2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010bb7  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10bb7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010bbb  popfd 
    X86_AT(c, 0x10bbbu);
    x86_popfd(c, 4);
    // 010bbc  mov ah, 0x25
    X86_AT(c, 0x10bbcu);
    s8(c, 4, 0x25u);
    // 010bbe  mov al, 0
    X86_AT(c, 0x10bbeu);
    s8(c, 0, 0x0u);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10ba5u, "ran off the end of a function");
}
void f_00010ba9(X86Cpu& c) {
    X86_TICK(c, 39);
    // 010ba9  add dx, word ptr gs:[edi + 0x3a]
    X86_AT(c, 0x10ba9u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Au))), 0, 2)); }
    // 010bae  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10baeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010bb2  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10bb2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010bb7  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10bb7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010bbb  popfd 
    X86_AT(c, 0x10bbbu);
    x86_popfd(c, 4);
    // 010bbc  mov ah, 0x25
    X86_AT(c, 0x10bbcu);
    s8(c, 4, 0x25u);
    // 010bbe  mov al, 0
    X86_AT(c, 0x10bbeu);
    s8(c, 0, 0x0u);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10ba9u, "ran off the end of a function");
}
void f_00010bae(X86Cpu& c) {
    X86_TICK(c, 33);
    // 010bae  mov word ptr [esi + 0xa], dx
    X86_AT(c, 0x10baeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu)), (c.r[2] & 0xFFFFu));
    // 010bb2  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10bb2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010bb7  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10bb7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010bbb  popfd 
    X86_AT(c, 0x10bbbu);
    x86_popfd(c, 4);
    // 010bbc  mov ah, 0x25
    X86_AT(c, 0x10bbcu);
    s8(c, 4, 0x25u);
    // 010bbe  mov al, 0
    X86_AT(c, 0x10bbeu);
    s8(c, 0, 0x0u);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10baeu, "ran off the end of a function");
}
void f_00010bb2(X86Cpu& c) {
    X86_TICK(c, 31);
    // 010bb2  add bx, word ptr gs:[edi + 0x3c]
    X86_AT(c, 0x10bb2u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x3Cu))), 0, 2)); }
    // 010bb7  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10bb7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010bbb  popfd 
    X86_AT(c, 0x10bbbu);
    x86_popfd(c, 4);
    // 010bbc  mov ah, 0x25
    X86_AT(c, 0x10bbcu);
    s8(c, 4, 0x25u);
    // 010bbe  mov al, 0
    X86_AT(c, 0x10bbeu);
    s8(c, 0, 0x0u);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10bb2u, "ran off the end of a function");
}
void f_00010bb7(X86Cpu& c) {
    X86_TICK(c, 25);
    // 010bb7  mov word ptr [esi + 0xc], bx
    X86_AT(c, 0x10bb7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[3] & 0xFFFFu));
    // 010bbb  popfd 
    X86_AT(c, 0x10bbbu);
    x86_popfd(c, 4);
    // 010bbc  mov ah, 0x25
    X86_AT(c, 0x10bbcu);
    s8(c, 4, 0x25u);
    // 010bbe  mov al, 0
    X86_AT(c, 0x10bbeu);
    s8(c, 0, 0x0u);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10bb7u, "ran off the end of a function");
}
void f_00010bbb(X86Cpu& c) {
    X86_TICK(c, 23);
    // 010bbb  popfd 
    X86_AT(c, 0x10bbbu);
    x86_popfd(c, 4);
    // 010bbc  mov ah, 0x25
    X86_AT(c, 0x10bbcu);
    s8(c, 4, 0x25u);
    // 010bbe  mov al, 0
    X86_AT(c, 0x10bbeu);
    s8(c, 0, 0x0u);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10bbbu, "ran off the end of a function");
}
void f_00010bbc(X86Cpu& c) {
    X86_TICK(c, 17);
    // 010bbc  mov ah, 0x25
    X86_AT(c, 0x10bbcu);
    s8(c, 4, 0x25u);
    // 010bbe  mov al, 0
    X86_AT(c, 0x10bbeu);
    s8(c, 0, 0x0u);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10bbcu, "ran off the end of a function");
}
void f_00010bbe(X86Cpu& c) {
    X86_TICK(c, 15);
    // 010bbe  mov al, 0
    X86_AT(c, 0x10bbeu);
    s8(c, 0, 0x0u);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10bbeu, "ran off the end of a function");
}
void f_00010bc0(X86Cpu& c) {
    X86_TICK(c, 13);
    // 010bc0  push edi
    X86_AT(c, 0x10bc0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10bc0u, "ran off the end of a function");
}
void f_00010bc1(X86Cpu& c) {
    X86_TICK(c, 11);
    // 010bc1  add edi, 0x62
    X86_AT(c, 0x10bc1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x62u, 0, 4); }
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10bc1u, "ran off the end of a function");
}
void f_00010bc4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 010bc4  push cs
    X86_AT(c, 0x10bc4u);
    push32(c, c.sreg[1]);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10bc4u, "ran off the end of a function");
}
void f_00010bc5(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010bc5  call 0x280
    X86_AT(c, 0x10bc5u);
    push32(c, 0x10bcau); f_00000280(c); X86_RET(c, 0x10bcau);
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10bc5u, "ran off the end of a function");
}
void f_00010bca(X86Cpu& c) {
    X86_TICK(c, 20);
    // 010bca  pop edi
    X86_AT(c, 0x10bcau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10bcau, "ran off the end of a function");
}
void f_00010bcb(X86Cpu& c) {
    X86_TICK(c, 16);
    // 010bcb  pop ds
    X86_AT(c, 0x10bcbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10bcbu, "ran off the end of a function");
}
void f_00010bcc(X86Cpu& c) {
    X86_TICK(c, 12);
    // 010bcc  add esp, 0xe
    X86_AT(c, 0x10bccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xEu, 0, 4); }
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10bccu, "ran off the end of a function");
}
void f_00010bcf(X86Cpu& c) {
    X86_TICK(c, 10);
    // 010bcf  ret 
    X86_AT(c, 0x10bcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10bcfu, "ran off the end of a function");
}
void f_00010bd0(X86Cpu& c) {
    X86_TICK(c, 95);
    // 010bd0  sub esp, 0xe
    X86_AT(c, 0x10bd0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xEu, 0, 4); }
    // 010bd3  mov esi, esp
    X86_AT(c, 0x10bd3u);
    c.r[6] = c.r[4];
    // 010bd5  push ds
    X86_AT(c, 0x10bd5u);
    push32(c, c.sreg[3]);
    // 010bd6  mov gs, word ptr [esp]
    X86_AT(c, 0x10bd6u);
    x86_load_seg(c, 5, rd16((c.sbase[2] + (uint32_t)(c.r[4]))) & 0xFFFFu);
    // 010bd9  push ss
    X86_AT(c, 0x10bd9u);
    push32(c, c.sreg[2]);
    // 010bda  pop ds
    X86_AT(c, 0x10bdau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bdb  pushfd 
    X86_AT(c, 0x10bdbu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010bdc  cli 
    X86_AT(c, 0x10bdcu);
    c.fl &= ~X86_IF;
    // 010bdd  lea eax, [edi + 0x662]
    X86_AT(c, 0x10bddu);
    c.r[0] = (uint32_t)(c.r[7] + 0x662u);
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
    x86_fault(c, 0x10bd0u, "ran off the end of a function");
}
void f_00010bd3(X86Cpu& c) {
    X86_TICK(c, 93);
    // 010bd3  mov esi, esp
    X86_AT(c, 0x10bd3u);
    c.r[6] = c.r[4];
    // 010bd5  push ds
    X86_AT(c, 0x10bd5u);
    push32(c, c.sreg[3]);
    // 010bd6  mov gs, word ptr [esp]
    X86_AT(c, 0x10bd6u);
    x86_load_seg(c, 5, rd16((c.sbase[2] + (uint32_t)(c.r[4]))) & 0xFFFFu);
    // 010bd9  push ss
    X86_AT(c, 0x10bd9u);
    push32(c, c.sreg[2]);
    // 010bda  pop ds
    X86_AT(c, 0x10bdau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bdb  pushfd 
    X86_AT(c, 0x10bdbu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010bdc  cli 
    X86_AT(c, 0x10bdcu);
    c.fl &= ~X86_IF;
    // 010bdd  lea eax, [edi + 0x662]
    X86_AT(c, 0x10bddu);
    c.r[0] = (uint32_t)(c.r[7] + 0x662u);
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
    x86_fault(c, 0x10bd3u, "ran off the end of a function");
}
void f_00010bd5(X86Cpu& c) {
    X86_TICK(c, 91);
    // 010bd5  push ds
    X86_AT(c, 0x10bd5u);
    push32(c, c.sreg[3]);
    // 010bd6  mov gs, word ptr [esp]
    X86_AT(c, 0x10bd6u);
    x86_load_seg(c, 5, rd16((c.sbase[2] + (uint32_t)(c.r[4]))) & 0xFFFFu);
    // 010bd9  push ss
    X86_AT(c, 0x10bd9u);
    push32(c, c.sreg[2]);
    // 010bda  pop ds
    X86_AT(c, 0x10bdau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bdb  pushfd 
    X86_AT(c, 0x10bdbu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010bdc  cli 
    X86_AT(c, 0x10bdcu);
    c.fl &= ~X86_IF;
    // 010bdd  lea eax, [edi + 0x662]
    X86_AT(c, 0x10bddu);
    c.r[0] = (uint32_t)(c.r[7] + 0x662u);
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
    x86_fault(c, 0x10bd5u, "ran off the end of a function");
}
void f_00010bd6(X86Cpu& c) {
    X86_TICK(c, 89);
    // 010bd6  mov gs, word ptr [esp]
    X86_AT(c, 0x10bd6u);
    x86_load_seg(c, 5, rd16((c.sbase[2] + (uint32_t)(c.r[4]))) & 0xFFFFu);
    // 010bd9  push ss
    X86_AT(c, 0x10bd9u);
    push32(c, c.sreg[2]);
    // 010bda  pop ds
    X86_AT(c, 0x10bdau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bdb  pushfd 
    X86_AT(c, 0x10bdbu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010bdc  cli 
    X86_AT(c, 0x10bdcu);
    c.fl &= ~X86_IF;
    // 010bdd  lea eax, [edi + 0x662]
    X86_AT(c, 0x10bddu);
    c.r[0] = (uint32_t)(c.r[7] + 0x662u);
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
    x86_fault(c, 0x10bd6u, "ran off the end of a function");
}
void f_00010bd9(X86Cpu& c) {
    X86_TICK(c, 85);
    // 010bd9  push ss
    X86_AT(c, 0x10bd9u);
    push32(c, c.sreg[2]);
    // 010bda  pop ds
    X86_AT(c, 0x10bdau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bdb  pushfd 
    X86_AT(c, 0x10bdbu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010bdc  cli 
    X86_AT(c, 0x10bdcu);
    c.fl &= ~X86_IF;
    // 010bdd  lea eax, [edi + 0x662]
    X86_AT(c, 0x10bddu);
    c.r[0] = (uint32_t)(c.r[7] + 0x662u);
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
    x86_fault(c, 0x10bd9u, "ran off the end of a function");
}
void f_00010bda(X86Cpu& c) {
    X86_TICK(c, 83);
    // 010bda  pop ds
    X86_AT(c, 0x10bdau);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010bdb  pushfd 
    X86_AT(c, 0x10bdbu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010bdc  cli 
    X86_AT(c, 0x10bdcu);
    c.fl &= ~X86_IF;
    // 010bdd  lea eax, [edi + 0x662]
    X86_AT(c, 0x10bddu);
    c.r[0] = (uint32_t)(c.r[7] + 0x662u);
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
    x86_fault(c, 0x10bdau, "ran off the end of a function");
}
void f_00010bdb(X86Cpu& c) {
    X86_TICK(c, 79);
    // 010bdb  pushfd 
    X86_AT(c, 0x10bdbu);
    push32(c, c.fl & 0x00FCFFFFu);
    // 010bdc  cli 
    X86_AT(c, 0x10bdcu);
    c.fl &= ~X86_IF;
    // 010bdd  lea eax, [edi + 0x662]
    X86_AT(c, 0x10bddu);
    c.r[0] = (uint32_t)(c.r[7] + 0x662u);
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
    x86_fault(c, 0x10bdbu, "ran off the end of a function");
}
void f_00010bdc(X86Cpu& c) {
    X86_TICK(c, 73);
    // 010bdc  cli 
    X86_AT(c, 0x10bdcu);
    c.fl &= ~X86_IF;
    // 010bdd  lea eax, [edi + 0x662]
    X86_AT(c, 0x10bddu);
    c.r[0] = (uint32_t)(c.r[7] + 0x662u);
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
    x86_fault(c, 0x10bdcu, "ran off the end of a function");
}
void f_00010bdd(X86Cpu& c) {
    X86_TICK(c, 71);
    // 010bdd  lea eax, [edi + 0x662]
    X86_AT(c, 0x10bddu);
    c.r[0] = (uint32_t)(c.r[7] + 0x662u);
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
    x86_fault(c, 0x10bddu, "ran off the end of a function");
}
}
