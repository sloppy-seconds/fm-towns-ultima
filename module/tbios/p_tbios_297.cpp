#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00011e5c(X86Cpu& c) {
    X86_TICK(c, 5);
    // 011e5c  ja 0x13557
    X86_AT(c, 0x11e5cu);
    if (x86_cc(c, 7)) { goto L_13557; }
    X86_TICK(c, 39);
    // 011e62  push ebx
    X86_AT(c, 0x11e62u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 011e63  push edx
    X86_AT(c, 0x11e63u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011e64  sub bl, 0x40
    X86_AT(c, 0x11e64u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x40u, 0, 1)); }
    // 011e67  movzx ebx, bl
    X86_AT(c, 0x11e67u);
    c.r[3] = g8(c, 3);
    // 011e6a  movzx edx, dh
    X86_AT(c, 0x11e6au);
    c.r[2] = g8(c, 6);
    // 011e6d  shl edx, 7
    X86_AT(c, 0x11e6du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[2] = r; }
    // 011e70  lea edx, [edi + edx*1 + 0x2b00]
    X86_AT(c, 0x11e70u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[2] + 0x2B00u);
    // 011e77  mov dword ptr gs:[edi + ebx*4 + 0x1a10], edx
    X86_AT(c, 0x11e77u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 4 + 0x1A10u)), c.r[2]);
    // 011e7f  pop edx
    X86_AT(c, 0x11e7fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011e80  pop ebx
    X86_AT(c, 0x11e80u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011e81  xor al, al
    X86_AT(c, 0x11e81u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e83  ret 
    X86_AT(c, 0x11e83u);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e5cu, "ran off the end of a function");
}
void f_00011e62(X86Cpu& c) {
    X86_TICK(c, 39);
    // 011e62  push ebx
    X86_AT(c, 0x11e62u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 011e63  push edx
    X86_AT(c, 0x11e63u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011e64  sub bl, 0x40
    X86_AT(c, 0x11e64u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x40u, 0, 1)); }
    // 011e67  movzx ebx, bl
    X86_AT(c, 0x11e67u);
    c.r[3] = g8(c, 3);
    // 011e6a  movzx edx, dh
    X86_AT(c, 0x11e6au);
    c.r[2] = g8(c, 6);
    // 011e6d  shl edx, 7
    X86_AT(c, 0x11e6du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[2] = r; }
    // 011e70  lea edx, [edi + edx*1 + 0x2b00]
    X86_AT(c, 0x11e70u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[2] + 0x2B00u);
    // 011e77  mov dword ptr gs:[edi + ebx*4 + 0x1a10], edx
    X86_AT(c, 0x11e77u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 4 + 0x1A10u)), c.r[2]);
    // 011e7f  pop edx
    X86_AT(c, 0x11e7fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011e80  pop ebx
    X86_AT(c, 0x11e80u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011e81  xor al, al
    X86_AT(c, 0x11e81u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e83  ret 
    X86_AT(c, 0x11e83u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e62u, "ran off the end of a function");
}
void f_00011e63(X86Cpu& c) {
    X86_TICK(c, 37);
    // 011e63  push edx
    X86_AT(c, 0x11e63u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011e64  sub bl, 0x40
    X86_AT(c, 0x11e64u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x40u, 0, 1)); }
    // 011e67  movzx ebx, bl
    X86_AT(c, 0x11e67u);
    c.r[3] = g8(c, 3);
    // 011e6a  movzx edx, dh
    X86_AT(c, 0x11e6au);
    c.r[2] = g8(c, 6);
    // 011e6d  shl edx, 7
    X86_AT(c, 0x11e6du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[2] = r; }
    // 011e70  lea edx, [edi + edx*1 + 0x2b00]
    X86_AT(c, 0x11e70u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[2] + 0x2B00u);
    // 011e77  mov dword ptr gs:[edi + ebx*4 + 0x1a10], edx
    X86_AT(c, 0x11e77u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 4 + 0x1A10u)), c.r[2]);
    // 011e7f  pop edx
    X86_AT(c, 0x11e7fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011e80  pop ebx
    X86_AT(c, 0x11e80u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011e81  xor al, al
    X86_AT(c, 0x11e81u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e83  ret 
    X86_AT(c, 0x11e83u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e63u, "ran off the end of a function");
}
void f_00011e64(X86Cpu& c) {
    X86_TICK(c, 35);
    // 011e64  sub bl, 0x40
    X86_AT(c, 0x11e64u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x40u, 0, 1)); }
    // 011e67  movzx ebx, bl
    X86_AT(c, 0x11e67u);
    c.r[3] = g8(c, 3);
    // 011e6a  movzx edx, dh
    X86_AT(c, 0x11e6au);
    c.r[2] = g8(c, 6);
    // 011e6d  shl edx, 7
    X86_AT(c, 0x11e6du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[2] = r; }
    // 011e70  lea edx, [edi + edx*1 + 0x2b00]
    X86_AT(c, 0x11e70u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[2] + 0x2B00u);
    // 011e77  mov dword ptr gs:[edi + ebx*4 + 0x1a10], edx
    X86_AT(c, 0x11e77u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 4 + 0x1A10u)), c.r[2]);
    // 011e7f  pop edx
    X86_AT(c, 0x11e7fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011e80  pop ebx
    X86_AT(c, 0x11e80u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011e81  xor al, al
    X86_AT(c, 0x11e81u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e83  ret 
    X86_AT(c, 0x11e83u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e64u, "ran off the end of a function");
}
void f_00011e67(X86Cpu& c) {
    X86_TICK(c, 33);
    // 011e67  movzx ebx, bl
    X86_AT(c, 0x11e67u);
    c.r[3] = g8(c, 3);
    // 011e6a  movzx edx, dh
    X86_AT(c, 0x11e6au);
    c.r[2] = g8(c, 6);
    // 011e6d  shl edx, 7
    X86_AT(c, 0x11e6du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[2] = r; }
    // 011e70  lea edx, [edi + edx*1 + 0x2b00]
    X86_AT(c, 0x11e70u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[2] + 0x2B00u);
    // 011e77  mov dword ptr gs:[edi + ebx*4 + 0x1a10], edx
    X86_AT(c, 0x11e77u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 4 + 0x1A10u)), c.r[2]);
    // 011e7f  pop edx
    X86_AT(c, 0x11e7fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011e80  pop ebx
    X86_AT(c, 0x11e80u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011e81  xor al, al
    X86_AT(c, 0x11e81u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e83  ret 
    X86_AT(c, 0x11e83u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e67u, "ran off the end of a function");
}
void f_00011e6a(X86Cpu& c) {
    X86_TICK(c, 30);
    // 011e6a  movzx edx, dh
    X86_AT(c, 0x11e6au);
    c.r[2] = g8(c, 6);
    // 011e6d  shl edx, 7
    X86_AT(c, 0x11e6du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[2] = r; }
    // 011e70  lea edx, [edi + edx*1 + 0x2b00]
    X86_AT(c, 0x11e70u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[2] + 0x2B00u);
    // 011e77  mov dword ptr gs:[edi + ebx*4 + 0x1a10], edx
    X86_AT(c, 0x11e77u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 4 + 0x1A10u)), c.r[2]);
    // 011e7f  pop edx
    X86_AT(c, 0x11e7fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011e80  pop ebx
    X86_AT(c, 0x11e80u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011e81  xor al, al
    X86_AT(c, 0x11e81u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e83  ret 
    X86_AT(c, 0x11e83u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e6au, "ran off the end of a function");
}
void f_00011e6d(X86Cpu& c) {
    X86_TICK(c, 27);
    // 011e6d  shl edx, 7
    X86_AT(c, 0x11e6du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[2] = r; }
    // 011e70  lea edx, [edi + edx*1 + 0x2b00]
    X86_AT(c, 0x11e70u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[2] + 0x2B00u);
    // 011e77  mov dword ptr gs:[edi + ebx*4 + 0x1a10], edx
    X86_AT(c, 0x11e77u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 4 + 0x1A10u)), c.r[2]);
    // 011e7f  pop edx
    X86_AT(c, 0x11e7fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011e80  pop ebx
    X86_AT(c, 0x11e80u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011e81  xor al, al
    X86_AT(c, 0x11e81u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e83  ret 
    X86_AT(c, 0x11e83u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e6du, "ran off the end of a function");
}
void f_00011e70(X86Cpu& c) {
    X86_TICK(c, 24);
    // 011e70  lea edx, [edi + edx*1 + 0x2b00]
    X86_AT(c, 0x11e70u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[2] + 0x2B00u);
    // 011e77  mov dword ptr gs:[edi + ebx*4 + 0x1a10], edx
    X86_AT(c, 0x11e77u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 4 + 0x1A10u)), c.r[2]);
    // 011e7f  pop edx
    X86_AT(c, 0x11e7fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011e80  pop ebx
    X86_AT(c, 0x11e80u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011e81  xor al, al
    X86_AT(c, 0x11e81u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e83  ret 
    X86_AT(c, 0x11e83u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e70u, "ran off the end of a function");
}
void f_00011e77(X86Cpu& c) {
    X86_TICK(c, 22);
    // 011e77  mov dword ptr gs:[edi + ebx*4 + 0x1a10], edx
    X86_AT(c, 0x11e77u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 4 + 0x1A10u)), c.r[2]);
    // 011e7f  pop edx
    X86_AT(c, 0x11e7fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011e80  pop ebx
    X86_AT(c, 0x11e80u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011e81  xor al, al
    X86_AT(c, 0x11e81u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e83  ret 
    X86_AT(c, 0x11e83u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e77u, "ran off the end of a function");
}
void f_00011e7f(X86Cpu& c) {
    X86_TICK(c, 20);
    // 011e7f  pop edx
    X86_AT(c, 0x11e7fu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011e80  pop ebx
    X86_AT(c, 0x11e80u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011e81  xor al, al
    X86_AT(c, 0x11e81u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e83  ret 
    X86_AT(c, 0x11e83u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e7fu, "ran off the end of a function");
}
void f_00011e80(X86Cpu& c) {
    X86_TICK(c, 16);
    // 011e80  pop ebx
    X86_AT(c, 0x11e80u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 011e81  xor al, al
    X86_AT(c, 0x11e81u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e83  ret 
    X86_AT(c, 0x11e83u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e80u, "ran off the end of a function");
}
void f_00011e81(X86Cpu& c) {
    X86_TICK(c, 12);
    // 011e81  xor al, al
    X86_AT(c, 0x11e81u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 011e83  ret 
    X86_AT(c, 0x11e83u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e81u, "ran off the end of a function");
}
void f_00011e83(X86Cpu& c) {
    X86_TICK(c, 10);
    // 011e83  ret 
    X86_AT(c, 0x11e83u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11e83u, "ran off the end of a function");
}
void f_00012180(X86Cpu& c) {
    X86_TICK(c, 7);
    // 012180  cmp bl, 0x47
    X86_AT(c, 0x12180u);
    (void)x86_sub(c, g8(c, 3), 0x47u, 0, 1);
    // 012183  ja 0x1354c
    X86_AT(c, 0x12183u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 012189  test dl, 0x80
    X86_AT(c, 0x12189u);
    (void)x86_logic(c, g8(c, 2) & 0x80u, 1);
    // 01218c  jne 0x13557
    X86_AT(c, 0x1218cu);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 74);
    // 012192  pushal 
    X86_AT(c, 0x12192u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 012193  sub bl, 0x40
    X86_AT(c, 0x12193u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x40u, 0, 1)); }
    // 012196  movzx ebx, bl
    X86_AT(c, 0x12196u);
    c.r[3] = g8(c, 3);
    // 012199  movzx ecx, dl
    X86_AT(c, 0x12199u);
    c.r[1] = g8(c, 2);
    // 01219c  mov al, bl
    X86_AT(c, 0x1219cu);
    s8(c, 0, g8(c, 3));
    // 01219e  add al, 0xc0
    X86_AT(c, 0x1219eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xC0u, 0, 1)); }
    // 0121a0  mov byte ptr gs:[edi + 0x19f7], al
    X86_AT(c, 0x121a0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F7u)), g8(c, 0));
    // 0121a7  mov dx, 0x4f7
    X86_AT(c, 0x121a7u);
    s16(c, 2, 0x4F7u);
    // 0121ab  out dx, al
    X86_AT(c, 0x121abu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0121ac  push ds
    X86_AT(c, 0x121acu);
    push32(c, c.sreg[3]);
    // 0121ad  pop ds
    X86_AT(c, 0x121adu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121ae  push ds
    X86_AT(c, 0x121aeu);
    push32(c, c.sreg[3]);
    // 0121af  pop ds
    X86_AT(c, 0x121afu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121b0  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x121b0u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0121b7  test byte ptr gs:[edi + 0x19f8], ah
    X86_AT(c, 0x121b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u))) & g8(c, 4), 1);
    // 0121be  jne 0x12210
    X86_AT(c, 0x121beu);
    if (x86_cc(c, 5)) { goto L_12210; }
    X86_TICK(c, 44);
    // 0121c0  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x121c0u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 0121c3  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x121c3u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0121ca  movzx eax, word ptr gs:[edi + esi*1 + 6]
    X86_AT(c, 0x121cau);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)));
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_12210:
    X86_TICK(c, 6);
    // 012210  mov al, cl
    X86_AT(c, 0x12210u);
    s8(c, 0, g8(c, 1));
    // 012212  mov byte ptr gs:[edi + ebx*1 + 0x1a40], cl
    X86_AT(c, 0x12212u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u)), g8(c, 1));
    // 01221a  add al, al
    X86_AT(c, 0x1221au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
L_1354c:
    X86_TICK(c, 12);
    // 01354c  mov al, 1
    X86_AT(c, 0x1354cu);
    s8(c, 0, 0x1u);
    // 01354e  ret 
    X86_AT(c, 0x1354eu);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12180u, "ran off the end of a function");
}
void f_00012183(X86Cpu& c) {
    X86_TICK(c, 5);
    // 012183  ja 0x1354c
    X86_AT(c, 0x12183u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 012189  test dl, 0x80
    X86_AT(c, 0x12189u);
    (void)x86_logic(c, g8(c, 2) & 0x80u, 1);
    // 01218c  jne 0x13557
    X86_AT(c, 0x1218cu);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 74);
    // 012192  pushal 
    X86_AT(c, 0x12192u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 012193  sub bl, 0x40
    X86_AT(c, 0x12193u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x40u, 0, 1)); }
    // 012196  movzx ebx, bl
    X86_AT(c, 0x12196u);
    c.r[3] = g8(c, 3);
    // 012199  movzx ecx, dl
    X86_AT(c, 0x12199u);
    c.r[1] = g8(c, 2);
    // 01219c  mov al, bl
    X86_AT(c, 0x1219cu);
    s8(c, 0, g8(c, 3));
    // 01219e  add al, 0xc0
    X86_AT(c, 0x1219eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xC0u, 0, 1)); }
    // 0121a0  mov byte ptr gs:[edi + 0x19f7], al
    X86_AT(c, 0x121a0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F7u)), g8(c, 0));
    // 0121a7  mov dx, 0x4f7
    X86_AT(c, 0x121a7u);
    s16(c, 2, 0x4F7u);
    // 0121ab  out dx, al
    X86_AT(c, 0x121abu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0121ac  push ds
    X86_AT(c, 0x121acu);
    push32(c, c.sreg[3]);
    // 0121ad  pop ds
    X86_AT(c, 0x121adu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121ae  push ds
    X86_AT(c, 0x121aeu);
    push32(c, c.sreg[3]);
    // 0121af  pop ds
    X86_AT(c, 0x121afu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121b0  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x121b0u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0121b7  test byte ptr gs:[edi + 0x19f8], ah
    X86_AT(c, 0x121b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u))) & g8(c, 4), 1);
    // 0121be  jne 0x12210
    X86_AT(c, 0x121beu);
    if (x86_cc(c, 5)) { goto L_12210; }
    X86_TICK(c, 44);
    // 0121c0  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x121c0u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 0121c3  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x121c3u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0121ca  movzx eax, word ptr gs:[edi + esi*1 + 6]
    X86_AT(c, 0x121cau);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)));
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_12210:
    X86_TICK(c, 6);
    // 012210  mov al, cl
    X86_AT(c, 0x12210u);
    s8(c, 0, g8(c, 1));
    // 012212  mov byte ptr gs:[edi + ebx*1 + 0x1a40], cl
    X86_AT(c, 0x12212u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u)), g8(c, 1));
    // 01221a  add al, al
    X86_AT(c, 0x1221au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
L_1354c:
    X86_TICK(c, 12);
    // 01354c  mov al, 1
    X86_AT(c, 0x1354cu);
    s8(c, 0, 0x1u);
    // 01354e  ret 
    X86_AT(c, 0x1354eu);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12183u, "ran off the end of a function");
}
void f_00012189(X86Cpu& c) {
    X86_TICK(c, 7);
    // 012189  test dl, 0x80
    X86_AT(c, 0x12189u);
    (void)x86_logic(c, g8(c, 2) & 0x80u, 1);
    // 01218c  jne 0x13557
    X86_AT(c, 0x1218cu);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 74);
    // 012192  pushal 
    X86_AT(c, 0x12192u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 012193  sub bl, 0x40
    X86_AT(c, 0x12193u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x40u, 0, 1)); }
    // 012196  movzx ebx, bl
    X86_AT(c, 0x12196u);
    c.r[3] = g8(c, 3);
    // 012199  movzx ecx, dl
    X86_AT(c, 0x12199u);
    c.r[1] = g8(c, 2);
    // 01219c  mov al, bl
    X86_AT(c, 0x1219cu);
    s8(c, 0, g8(c, 3));
    // 01219e  add al, 0xc0
    X86_AT(c, 0x1219eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xC0u, 0, 1)); }
    // 0121a0  mov byte ptr gs:[edi + 0x19f7], al
    X86_AT(c, 0x121a0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F7u)), g8(c, 0));
    // 0121a7  mov dx, 0x4f7
    X86_AT(c, 0x121a7u);
    s16(c, 2, 0x4F7u);
    // 0121ab  out dx, al
    X86_AT(c, 0x121abu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0121ac  push ds
    X86_AT(c, 0x121acu);
    push32(c, c.sreg[3]);
    // 0121ad  pop ds
    X86_AT(c, 0x121adu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121ae  push ds
    X86_AT(c, 0x121aeu);
    push32(c, c.sreg[3]);
    // 0121af  pop ds
    X86_AT(c, 0x121afu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121b0  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x121b0u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0121b7  test byte ptr gs:[edi + 0x19f8], ah
    X86_AT(c, 0x121b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u))) & g8(c, 4), 1);
    // 0121be  jne 0x12210
    X86_AT(c, 0x121beu);
    if (x86_cc(c, 5)) { goto L_12210; }
    X86_TICK(c, 44);
    // 0121c0  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x121c0u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 0121c3  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x121c3u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0121ca  movzx eax, word ptr gs:[edi + esi*1 + 6]
    X86_AT(c, 0x121cau);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)));
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_12210:
    X86_TICK(c, 6);
    // 012210  mov al, cl
    X86_AT(c, 0x12210u);
    s8(c, 0, g8(c, 1));
    // 012212  mov byte ptr gs:[edi + ebx*1 + 0x1a40], cl
    X86_AT(c, 0x12212u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u)), g8(c, 1));
    // 01221a  add al, al
    X86_AT(c, 0x1221au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12189u, "ran off the end of a function");
}
void f_0001218c(X86Cpu& c) {
    X86_TICK(c, 5);
    // 01218c  jne 0x13557
    X86_AT(c, 0x1218cu);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 74);
    // 012192  pushal 
    X86_AT(c, 0x12192u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 012193  sub bl, 0x40
    X86_AT(c, 0x12193u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x40u, 0, 1)); }
    // 012196  movzx ebx, bl
    X86_AT(c, 0x12196u);
    c.r[3] = g8(c, 3);
    // 012199  movzx ecx, dl
    X86_AT(c, 0x12199u);
    c.r[1] = g8(c, 2);
    // 01219c  mov al, bl
    X86_AT(c, 0x1219cu);
    s8(c, 0, g8(c, 3));
    // 01219e  add al, 0xc0
    X86_AT(c, 0x1219eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xC0u, 0, 1)); }
    // 0121a0  mov byte ptr gs:[edi + 0x19f7], al
    X86_AT(c, 0x121a0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F7u)), g8(c, 0));
    // 0121a7  mov dx, 0x4f7
    X86_AT(c, 0x121a7u);
    s16(c, 2, 0x4F7u);
    // 0121ab  out dx, al
    X86_AT(c, 0x121abu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0121ac  push ds
    X86_AT(c, 0x121acu);
    push32(c, c.sreg[3]);
    // 0121ad  pop ds
    X86_AT(c, 0x121adu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121ae  push ds
    X86_AT(c, 0x121aeu);
    push32(c, c.sreg[3]);
    // 0121af  pop ds
    X86_AT(c, 0x121afu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121b0  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x121b0u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0121b7  test byte ptr gs:[edi + 0x19f8], ah
    X86_AT(c, 0x121b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u))) & g8(c, 4), 1);
    // 0121be  jne 0x12210
    X86_AT(c, 0x121beu);
    if (x86_cc(c, 5)) { goto L_12210; }
    X86_TICK(c, 44);
    // 0121c0  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x121c0u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 0121c3  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x121c3u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0121ca  movzx eax, word ptr gs:[edi + esi*1 + 6]
    X86_AT(c, 0x121cau);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)));
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_12210:
    X86_TICK(c, 6);
    // 012210  mov al, cl
    X86_AT(c, 0x12210u);
    s8(c, 0, g8(c, 1));
    // 012212  mov byte ptr gs:[edi + ebx*1 + 0x1a40], cl
    X86_AT(c, 0x12212u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u)), g8(c, 1));
    // 01221a  add al, al
    X86_AT(c, 0x1221au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1218cu, "ran off the end of a function");
}
void f_00012192(X86Cpu& c) {
    X86_TICK(c, 74);
    // 012192  pushal 
    X86_AT(c, 0x12192u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 012193  sub bl, 0x40
    X86_AT(c, 0x12193u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x40u, 0, 1)); }
    // 012196  movzx ebx, bl
    X86_AT(c, 0x12196u);
    c.r[3] = g8(c, 3);
    // 012199  movzx ecx, dl
    X86_AT(c, 0x12199u);
    c.r[1] = g8(c, 2);
    // 01219c  mov al, bl
    X86_AT(c, 0x1219cu);
    s8(c, 0, g8(c, 3));
    // 01219e  add al, 0xc0
    X86_AT(c, 0x1219eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xC0u, 0, 1)); }
    // 0121a0  mov byte ptr gs:[edi + 0x19f7], al
    X86_AT(c, 0x121a0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F7u)), g8(c, 0));
    // 0121a7  mov dx, 0x4f7
    X86_AT(c, 0x121a7u);
    s16(c, 2, 0x4F7u);
    // 0121ab  out dx, al
    X86_AT(c, 0x121abu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0121ac  push ds
    X86_AT(c, 0x121acu);
    push32(c, c.sreg[3]);
    // 0121ad  pop ds
    X86_AT(c, 0x121adu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121ae  push ds
    X86_AT(c, 0x121aeu);
    push32(c, c.sreg[3]);
    // 0121af  pop ds
    X86_AT(c, 0x121afu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121b0  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x121b0u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0121b7  test byte ptr gs:[edi + 0x19f8], ah
    X86_AT(c, 0x121b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u))) & g8(c, 4), 1);
    // 0121be  jne 0x12210
    X86_AT(c, 0x121beu);
    if (x86_cc(c, 5)) { goto L_12210; }
    X86_TICK(c, 44);
    // 0121c0  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x121c0u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 0121c3  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x121c3u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0121ca  movzx eax, word ptr gs:[edi + esi*1 + 6]
    X86_AT(c, 0x121cau);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)));
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_12210:
    X86_TICK(c, 6);
    // 012210  mov al, cl
    X86_AT(c, 0x12210u);
    s8(c, 0, g8(c, 1));
    // 012212  mov byte ptr gs:[edi + ebx*1 + 0x1a40], cl
    X86_AT(c, 0x12212u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u)), g8(c, 1));
    // 01221a  add al, al
    X86_AT(c, 0x1221au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12192u, "ran off the end of a function");
}
void f_00012193(X86Cpu& c) {
    X86_TICK(c, 56);
    // 012193  sub bl, 0x40
    X86_AT(c, 0x12193u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x40u, 0, 1)); }
    // 012196  movzx ebx, bl
    X86_AT(c, 0x12196u);
    c.r[3] = g8(c, 3);
    // 012199  movzx ecx, dl
    X86_AT(c, 0x12199u);
    c.r[1] = g8(c, 2);
    // 01219c  mov al, bl
    X86_AT(c, 0x1219cu);
    s8(c, 0, g8(c, 3));
    // 01219e  add al, 0xc0
    X86_AT(c, 0x1219eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xC0u, 0, 1)); }
    // 0121a0  mov byte ptr gs:[edi + 0x19f7], al
    X86_AT(c, 0x121a0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F7u)), g8(c, 0));
    // 0121a7  mov dx, 0x4f7
    X86_AT(c, 0x121a7u);
    s16(c, 2, 0x4F7u);
    // 0121ab  out dx, al
    X86_AT(c, 0x121abu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0121ac  push ds
    X86_AT(c, 0x121acu);
    push32(c, c.sreg[3]);
    // 0121ad  pop ds
    X86_AT(c, 0x121adu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121ae  push ds
    X86_AT(c, 0x121aeu);
    push32(c, c.sreg[3]);
    // 0121af  pop ds
    X86_AT(c, 0x121afu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121b0  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x121b0u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0121b7  test byte ptr gs:[edi + 0x19f8], ah
    X86_AT(c, 0x121b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u))) & g8(c, 4), 1);
    // 0121be  jne 0x12210
    X86_AT(c, 0x121beu);
    if (x86_cc(c, 5)) { goto L_12210; }
    X86_TICK(c, 44);
    // 0121c0  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x121c0u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 0121c3  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x121c3u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0121ca  movzx eax, word ptr gs:[edi + esi*1 + 6]
    X86_AT(c, 0x121cau);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)));
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_12210:
    X86_TICK(c, 6);
    // 012210  mov al, cl
    X86_AT(c, 0x12210u);
    s8(c, 0, g8(c, 1));
    // 012212  mov byte ptr gs:[edi + ebx*1 + 0x1a40], cl
    X86_AT(c, 0x12212u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u)), g8(c, 1));
    // 01221a  add al, al
    X86_AT(c, 0x1221au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12193u, "ran off the end of a function");
}
void f_00012196(X86Cpu& c) {
    X86_TICK(c, 54);
    // 012196  movzx ebx, bl
    X86_AT(c, 0x12196u);
    c.r[3] = g8(c, 3);
    // 012199  movzx ecx, dl
    X86_AT(c, 0x12199u);
    c.r[1] = g8(c, 2);
    // 01219c  mov al, bl
    X86_AT(c, 0x1219cu);
    s8(c, 0, g8(c, 3));
    // 01219e  add al, 0xc0
    X86_AT(c, 0x1219eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xC0u, 0, 1)); }
    // 0121a0  mov byte ptr gs:[edi + 0x19f7], al
    X86_AT(c, 0x121a0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F7u)), g8(c, 0));
    // 0121a7  mov dx, 0x4f7
    X86_AT(c, 0x121a7u);
    s16(c, 2, 0x4F7u);
    // 0121ab  out dx, al
    X86_AT(c, 0x121abu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0121ac  push ds
    X86_AT(c, 0x121acu);
    push32(c, c.sreg[3]);
    // 0121ad  pop ds
    X86_AT(c, 0x121adu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121ae  push ds
    X86_AT(c, 0x121aeu);
    push32(c, c.sreg[3]);
    // 0121af  pop ds
    X86_AT(c, 0x121afu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121b0  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x121b0u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0121b7  test byte ptr gs:[edi + 0x19f8], ah
    X86_AT(c, 0x121b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u))) & g8(c, 4), 1);
    // 0121be  jne 0x12210
    X86_AT(c, 0x121beu);
    if (x86_cc(c, 5)) { goto L_12210; }
    X86_TICK(c, 44);
    // 0121c0  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x121c0u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 0121c3  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x121c3u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0121ca  movzx eax, word ptr gs:[edi + esi*1 + 6]
    X86_AT(c, 0x121cau);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)));
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_12210:
    X86_TICK(c, 6);
    // 012210  mov al, cl
    X86_AT(c, 0x12210u);
    s8(c, 0, g8(c, 1));
    // 012212  mov byte ptr gs:[edi + ebx*1 + 0x1a40], cl
    X86_AT(c, 0x12212u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u)), g8(c, 1));
    // 01221a  add al, al
    X86_AT(c, 0x1221au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12196u, "ran off the end of a function");
}
void f_00012199(X86Cpu& c) {
    X86_TICK(c, 51);
    // 012199  movzx ecx, dl
    X86_AT(c, 0x12199u);
    c.r[1] = g8(c, 2);
    // 01219c  mov al, bl
    X86_AT(c, 0x1219cu);
    s8(c, 0, g8(c, 3));
    // 01219e  add al, 0xc0
    X86_AT(c, 0x1219eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xC0u, 0, 1)); }
    // 0121a0  mov byte ptr gs:[edi + 0x19f7], al
    X86_AT(c, 0x121a0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F7u)), g8(c, 0));
    // 0121a7  mov dx, 0x4f7
    X86_AT(c, 0x121a7u);
    s16(c, 2, 0x4F7u);
    // 0121ab  out dx, al
    X86_AT(c, 0x121abu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0121ac  push ds
    X86_AT(c, 0x121acu);
    push32(c, c.sreg[3]);
    // 0121ad  pop ds
    X86_AT(c, 0x121adu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121ae  push ds
    X86_AT(c, 0x121aeu);
    push32(c, c.sreg[3]);
    // 0121af  pop ds
    X86_AT(c, 0x121afu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121b0  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x121b0u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0121b7  test byte ptr gs:[edi + 0x19f8], ah
    X86_AT(c, 0x121b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u))) & g8(c, 4), 1);
    // 0121be  jne 0x12210
    X86_AT(c, 0x121beu);
    if (x86_cc(c, 5)) { goto L_12210; }
    X86_TICK(c, 44);
    // 0121c0  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x121c0u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 0121c3  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x121c3u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0121ca  movzx eax, word ptr gs:[edi + esi*1 + 6]
    X86_AT(c, 0x121cau);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)));
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_12210:
    X86_TICK(c, 6);
    // 012210  mov al, cl
    X86_AT(c, 0x12210u);
    s8(c, 0, g8(c, 1));
    // 012212  mov byte ptr gs:[edi + ebx*1 + 0x1a40], cl
    X86_AT(c, 0x12212u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u)), g8(c, 1));
    // 01221a  add al, al
    X86_AT(c, 0x1221au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12199u, "ran off the end of a function");
}
void f_0001219c(X86Cpu& c) {
    X86_TICK(c, 48);
    // 01219c  mov al, bl
    X86_AT(c, 0x1219cu);
    s8(c, 0, g8(c, 3));
    // 01219e  add al, 0xc0
    X86_AT(c, 0x1219eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xC0u, 0, 1)); }
    // 0121a0  mov byte ptr gs:[edi + 0x19f7], al
    X86_AT(c, 0x121a0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F7u)), g8(c, 0));
    // 0121a7  mov dx, 0x4f7
    X86_AT(c, 0x121a7u);
    s16(c, 2, 0x4F7u);
    // 0121ab  out dx, al
    X86_AT(c, 0x121abu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0121ac  push ds
    X86_AT(c, 0x121acu);
    push32(c, c.sreg[3]);
    // 0121ad  pop ds
    X86_AT(c, 0x121adu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121ae  push ds
    X86_AT(c, 0x121aeu);
    push32(c, c.sreg[3]);
    // 0121af  pop ds
    X86_AT(c, 0x121afu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121b0  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x121b0u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0121b7  test byte ptr gs:[edi + 0x19f8], ah
    X86_AT(c, 0x121b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u))) & g8(c, 4), 1);
    // 0121be  jne 0x12210
    X86_AT(c, 0x121beu);
    if (x86_cc(c, 5)) { goto L_12210; }
    X86_TICK(c, 44);
    // 0121c0  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x121c0u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 0121c3  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x121c3u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0121ca  movzx eax, word ptr gs:[edi + esi*1 + 6]
    X86_AT(c, 0x121cau);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)));
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_12210:
    X86_TICK(c, 6);
    // 012210  mov al, cl
    X86_AT(c, 0x12210u);
    s8(c, 0, g8(c, 1));
    // 012212  mov byte ptr gs:[edi + ebx*1 + 0x1a40], cl
    X86_AT(c, 0x12212u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u)), g8(c, 1));
    // 01221a  add al, al
    X86_AT(c, 0x1221au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1219cu, "ran off the end of a function");
}
void f_0001219e(X86Cpu& c) {
    X86_TICK(c, 46);
    // 01219e  add al, 0xc0
    X86_AT(c, 0x1219eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0xC0u, 0, 1)); }
    // 0121a0  mov byte ptr gs:[edi + 0x19f7], al
    X86_AT(c, 0x121a0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F7u)), g8(c, 0));
    // 0121a7  mov dx, 0x4f7
    X86_AT(c, 0x121a7u);
    s16(c, 2, 0x4F7u);
    // 0121ab  out dx, al
    X86_AT(c, 0x121abu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0121ac  push ds
    X86_AT(c, 0x121acu);
    push32(c, c.sreg[3]);
    // 0121ad  pop ds
    X86_AT(c, 0x121adu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121ae  push ds
    X86_AT(c, 0x121aeu);
    push32(c, c.sreg[3]);
    // 0121af  pop ds
    X86_AT(c, 0x121afu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121b0  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x121b0u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0121b7  test byte ptr gs:[edi + 0x19f8], ah
    X86_AT(c, 0x121b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u))) & g8(c, 4), 1);
    // 0121be  jne 0x12210
    X86_AT(c, 0x121beu);
    if (x86_cc(c, 5)) { goto L_12210; }
    X86_TICK(c, 44);
    // 0121c0  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x121c0u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 0121c3  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x121c3u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0121ca  movzx eax, word ptr gs:[edi + esi*1 + 6]
    X86_AT(c, 0x121cau);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)));
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_12210:
    X86_TICK(c, 6);
    // 012210  mov al, cl
    X86_AT(c, 0x12210u);
    s8(c, 0, g8(c, 1));
    // 012212  mov byte ptr gs:[edi + ebx*1 + 0x1a40], cl
    X86_AT(c, 0x12212u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u)), g8(c, 1));
    // 01221a  add al, al
    X86_AT(c, 0x1221au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1219eu, "ran off the end of a function");
}
void f_000121a0(X86Cpu& c) {
    X86_TICK(c, 44);
    // 0121a0  mov byte ptr gs:[edi + 0x19f7], al
    X86_AT(c, 0x121a0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F7u)), g8(c, 0));
    // 0121a7  mov dx, 0x4f7
    X86_AT(c, 0x121a7u);
    s16(c, 2, 0x4F7u);
    // 0121ab  out dx, al
    X86_AT(c, 0x121abu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0121ac  push ds
    X86_AT(c, 0x121acu);
    push32(c, c.sreg[3]);
    // 0121ad  pop ds
    X86_AT(c, 0x121adu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121ae  push ds
    X86_AT(c, 0x121aeu);
    push32(c, c.sreg[3]);
    // 0121af  pop ds
    X86_AT(c, 0x121afu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121b0  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x121b0u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0121b7  test byte ptr gs:[edi + 0x19f8], ah
    X86_AT(c, 0x121b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u))) & g8(c, 4), 1);
    // 0121be  jne 0x12210
    X86_AT(c, 0x121beu);
    if (x86_cc(c, 5)) { goto L_12210; }
    X86_TICK(c, 44);
    // 0121c0  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x121c0u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 0121c3  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x121c3u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0121ca  movzx eax, word ptr gs:[edi + esi*1 + 6]
    X86_AT(c, 0x121cau);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)));
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_12210:
    X86_TICK(c, 6);
    // 012210  mov al, cl
    X86_AT(c, 0x12210u);
    s8(c, 0, g8(c, 1));
    // 012212  mov byte ptr gs:[edi + ebx*1 + 0x1a40], cl
    X86_AT(c, 0x12212u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u)), g8(c, 1));
    // 01221a  add al, al
    X86_AT(c, 0x1221au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121a0u, "ran off the end of a function");
}
void f_000121a7(X86Cpu& c) {
    X86_TICK(c, 42);
    // 0121a7  mov dx, 0x4f7
    X86_AT(c, 0x121a7u);
    s16(c, 2, 0x4F7u);
    // 0121ab  out dx, al
    X86_AT(c, 0x121abu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0121ac  push ds
    X86_AT(c, 0x121acu);
    push32(c, c.sreg[3]);
    // 0121ad  pop ds
    X86_AT(c, 0x121adu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121ae  push ds
    X86_AT(c, 0x121aeu);
    push32(c, c.sreg[3]);
    // 0121af  pop ds
    X86_AT(c, 0x121afu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121b0  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x121b0u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0121b7  test byte ptr gs:[edi + 0x19f8], ah
    X86_AT(c, 0x121b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u))) & g8(c, 4), 1);
    // 0121be  jne 0x12210
    X86_AT(c, 0x121beu);
    if (x86_cc(c, 5)) { goto L_12210; }
    X86_TICK(c, 44);
    // 0121c0  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x121c0u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 0121c3  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x121c3u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0121ca  movzx eax, word ptr gs:[edi + esi*1 + 6]
    X86_AT(c, 0x121cau);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)));
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_12210:
    X86_TICK(c, 6);
    // 012210  mov al, cl
    X86_AT(c, 0x12210u);
    s8(c, 0, g8(c, 1));
    // 012212  mov byte ptr gs:[edi + ebx*1 + 0x1a40], cl
    X86_AT(c, 0x12212u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u)), g8(c, 1));
    // 01221a  add al, al
    X86_AT(c, 0x1221au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121a7u, "ran off the end of a function");
}
void f_000121ab(X86Cpu& c) {
    X86_TICK(c, 40);
    // 0121ab  out dx, al
    X86_AT(c, 0x121abu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0121ac  push ds
    X86_AT(c, 0x121acu);
    push32(c, c.sreg[3]);
    // 0121ad  pop ds
    X86_AT(c, 0x121adu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121ae  push ds
    X86_AT(c, 0x121aeu);
    push32(c, c.sreg[3]);
    // 0121af  pop ds
    X86_AT(c, 0x121afu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121b0  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x121b0u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0121b7  test byte ptr gs:[edi + 0x19f8], ah
    X86_AT(c, 0x121b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u))) & g8(c, 4), 1);
    // 0121be  jne 0x12210
    X86_AT(c, 0x121beu);
    if (x86_cc(c, 5)) { goto L_12210; }
    X86_TICK(c, 44);
    // 0121c0  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x121c0u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 0121c3  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x121c3u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0121ca  movzx eax, word ptr gs:[edi + esi*1 + 6]
    X86_AT(c, 0x121cau);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)));
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_12210:
    X86_TICK(c, 6);
    // 012210  mov al, cl
    X86_AT(c, 0x12210u);
    s8(c, 0, g8(c, 1));
    // 012212  mov byte ptr gs:[edi + ebx*1 + 0x1a40], cl
    X86_AT(c, 0x12212u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u)), g8(c, 1));
    // 01221a  add al, al
    X86_AT(c, 0x1221au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121abu, "ran off the end of a function");
}
void f_000121ac(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0121ac  push ds
    X86_AT(c, 0x121acu);
    push32(c, c.sreg[3]);
    // 0121ad  pop ds
    X86_AT(c, 0x121adu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121ae  push ds
    X86_AT(c, 0x121aeu);
    push32(c, c.sreg[3]);
    // 0121af  pop ds
    X86_AT(c, 0x121afu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121b0  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x121b0u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0121b7  test byte ptr gs:[edi + 0x19f8], ah
    X86_AT(c, 0x121b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u))) & g8(c, 4), 1);
    // 0121be  jne 0x12210
    X86_AT(c, 0x121beu);
    if (x86_cc(c, 5)) { goto L_12210; }
    X86_TICK(c, 44);
    // 0121c0  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x121c0u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 0121c3  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x121c3u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0121ca  movzx eax, word ptr gs:[edi + esi*1 + 6]
    X86_AT(c, 0x121cau);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)));
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_12210:
    X86_TICK(c, 6);
    // 012210  mov al, cl
    X86_AT(c, 0x12210u);
    s8(c, 0, g8(c, 1));
    // 012212  mov byte ptr gs:[edi + ebx*1 + 0x1a40], cl
    X86_AT(c, 0x12212u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u)), g8(c, 1));
    // 01221a  add al, al
    X86_AT(c, 0x1221au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121acu, "ran off the end of a function");
}
void f_000121ad(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0121ad  pop ds
    X86_AT(c, 0x121adu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121ae  push ds
    X86_AT(c, 0x121aeu);
    push32(c, c.sreg[3]);
    // 0121af  pop ds
    X86_AT(c, 0x121afu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121b0  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x121b0u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0121b7  test byte ptr gs:[edi + 0x19f8], ah
    X86_AT(c, 0x121b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u))) & g8(c, 4), 1);
    // 0121be  jne 0x12210
    X86_AT(c, 0x121beu);
    if (x86_cc(c, 5)) { goto L_12210; }
    X86_TICK(c, 44);
    // 0121c0  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x121c0u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 0121c3  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x121c3u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0121ca  movzx eax, word ptr gs:[edi + esi*1 + 6]
    X86_AT(c, 0x121cau);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)));
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_12210:
    X86_TICK(c, 6);
    // 012210  mov al, cl
    X86_AT(c, 0x12210u);
    s8(c, 0, g8(c, 1));
    // 012212  mov byte ptr gs:[edi + ebx*1 + 0x1a40], cl
    X86_AT(c, 0x12212u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u)), g8(c, 1));
    // 01221a  add al, al
    X86_AT(c, 0x1221au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121adu, "ran off the end of a function");
}
void f_000121ae(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0121ae  push ds
    X86_AT(c, 0x121aeu);
    push32(c, c.sreg[3]);
    // 0121af  pop ds
    X86_AT(c, 0x121afu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121b0  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x121b0u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0121b7  test byte ptr gs:[edi + 0x19f8], ah
    X86_AT(c, 0x121b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u))) & g8(c, 4), 1);
    // 0121be  jne 0x12210
    X86_AT(c, 0x121beu);
    if (x86_cc(c, 5)) { goto L_12210; }
    X86_TICK(c, 44);
    // 0121c0  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x121c0u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 0121c3  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x121c3u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0121ca  movzx eax, word ptr gs:[edi + esi*1 + 6]
    X86_AT(c, 0x121cau);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)));
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_12210:
    X86_TICK(c, 6);
    // 012210  mov al, cl
    X86_AT(c, 0x12210u);
    s8(c, 0, g8(c, 1));
    // 012212  mov byte ptr gs:[edi + ebx*1 + 0x1a40], cl
    X86_AT(c, 0x12212u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u)), g8(c, 1));
    // 01221a  add al, al
    X86_AT(c, 0x1221au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121aeu, "ran off the end of a function");
}
void f_000121af(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0121af  pop ds
    X86_AT(c, 0x121afu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0121b0  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x121b0u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0121b7  test byte ptr gs:[edi + 0x19f8], ah
    X86_AT(c, 0x121b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u))) & g8(c, 4), 1);
    // 0121be  jne 0x12210
    X86_AT(c, 0x121beu);
    if (x86_cc(c, 5)) { goto L_12210; }
    X86_TICK(c, 44);
    // 0121c0  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x121c0u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 0121c3  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x121c3u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0121ca  movzx eax, word ptr gs:[edi + esi*1 + 6]
    X86_AT(c, 0x121cau);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)));
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_12210:
    X86_TICK(c, 6);
    // 012210  mov al, cl
    X86_AT(c, 0x12210u);
    s8(c, 0, g8(c, 1));
    // 012212  mov byte ptr gs:[edi + ebx*1 + 0x1a40], cl
    X86_AT(c, 0x12212u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u)), g8(c, 1));
    // 01221a  add al, al
    X86_AT(c, 0x1221au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121afu, "ran off the end of a function");
}
void f_000121b0(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0121b0  mov ah, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x121b0u);
    s8(c, 4, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0121b7  test byte ptr gs:[edi + 0x19f8], ah
    X86_AT(c, 0x121b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u))) & g8(c, 4), 1);
    // 0121be  jne 0x12210
    X86_AT(c, 0x121beu);
    if (x86_cc(c, 5)) { goto L_12210; }
    X86_TICK(c, 44);
    // 0121c0  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x121c0u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 0121c3  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x121c3u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0121ca  movzx eax, word ptr gs:[edi + esi*1 + 6]
    X86_AT(c, 0x121cau);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)));
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_12210:
    X86_TICK(c, 6);
    // 012210  mov al, cl
    X86_AT(c, 0x12210u);
    s8(c, 0, g8(c, 1));
    // 012212  mov byte ptr gs:[edi + ebx*1 + 0x1a40], cl
    X86_AT(c, 0x12212u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u)), g8(c, 1));
    // 01221a  add al, al
    X86_AT(c, 0x1221au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121b0u, "ran off the end of a function");
}
void f_000121b7(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0121b7  test byte ptr gs:[edi + 0x19f8], ah
    X86_AT(c, 0x121b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F8u))) & g8(c, 4), 1);
    // 0121be  jne 0x12210
    X86_AT(c, 0x121beu);
    if (x86_cc(c, 5)) { goto L_12210; }
    X86_TICK(c, 44);
    // 0121c0  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x121c0u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 0121c3  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x121c3u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0121ca  movzx eax, word ptr gs:[edi + esi*1 + 6]
    X86_AT(c, 0x121cau);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)));
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_12210:
    X86_TICK(c, 6);
    // 012210  mov al, cl
    X86_AT(c, 0x12210u);
    s8(c, 0, g8(c, 1));
    // 012212  mov byte ptr gs:[edi + ebx*1 + 0x1a40], cl
    X86_AT(c, 0x12212u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u)), g8(c, 1));
    // 01221a  add al, al
    X86_AT(c, 0x1221au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121b7u, "ran off the end of a function");
}
void f_000121be(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0121be  jne 0x12210
    X86_AT(c, 0x121beu);
    if (x86_cc(c, 5)) { goto L_12210; }
    X86_TICK(c, 44);
    // 0121c0  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x121c0u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 0121c3  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x121c3u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0121ca  movzx eax, word ptr gs:[edi + esi*1 + 6]
    X86_AT(c, 0x121cau);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)));
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_12210:
    X86_TICK(c, 6);
    // 012210  mov al, cl
    X86_AT(c, 0x12210u);
    s8(c, 0, g8(c, 1));
    // 012212  mov byte ptr gs:[edi + ebx*1 + 0x1a40], cl
    X86_AT(c, 0x12212u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A40u)), g8(c, 1));
    // 01221a  add al, al
    X86_AT(c, 0x1221au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121beu, "ran off the end of a function");
}
void f_000121c0(X86Cpu& c) {
    X86_TICK(c, 44);
    // 0121c0  lea esi, [ebx + ebx*1]
    X86_AT(c, 0x121c0u);
    c.r[6] = (uint32_t)(c.r[3] + c.r[3]);
    // 0121c3  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x121c3u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0121ca  movzx eax, word ptr gs:[edi + esi*1 + 6]
    X86_AT(c, 0x121cau);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)));
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121c0u, "ran off the end of a function");
}
void f_000121c3(X86Cpu& c) {
    X86_TICK(c, 42);
    // 0121c3  lea esi, [esi + esi*4 + 0x1aa0]
    X86_AT(c, 0x121c3u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4 + 0x1AA0u);
    // 0121ca  movzx eax, word ptr gs:[edi + esi*1 + 6]
    X86_AT(c, 0x121cau);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)));
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121c3u, "ran off the end of a function");
}
void f_000121ca(X86Cpu& c) {
    X86_TICK(c, 40);
    // 0121ca  movzx eax, word ptr gs:[edi + esi*1 + 6]
    X86_AT(c, 0x121cau);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)));
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121cau, "ran off the end of a function");
}
void f_000121d0(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0121d0  mul ecx
    X86_AT(c, 0x121d0u);
    x86_mul(c, c.r[1], 4);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121d0u, "ran off the end of a function");
}
void f_000121d2(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0121d2  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121d2u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121d2u, "ran off the end of a function");
}
void f_000121da(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0121da  test ecx, ecx
    X86_AT(c, 0x121dau);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121dau, "ran off the end of a function");
}
void f_000121dc(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0121dc  je 0x121e0
    X86_AT(c, 0x121dcu);
    if (x86_cc(c, 4)) { goto L_121e0; }
    X86_TICK(c, 40);
    // 0121de  div ecx
    X86_AT(c, 0x121deu);
    x86_div(c, c.r[1], 4, 0x121deu);
L_121e0:
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121dcu, "ran off the end of a function");
}
void f_000121e0(X86Cpu& c) {
    X86_TICK(c, 55);
    // 0121e0  pushfd 
    X86_AT(c, 0x121e0u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121e0u, "ran off the end of a function");
}
void f_000121e1(X86Cpu& c) {
    X86_TICK(c, 49);
    // 0121e1  cli 
    X86_AT(c, 0x121e1u);
    c.fl &= ~X86_IF;
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121e1u, "ran off the end of a function");
}
void f_000121e2(X86Cpu& c) {
    X86_TICK(c, 47);
    // 0121e2  mov word ptr gs:[edi + esi*1 + 6], ax
    X86_AT(c, 0x121e2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x6u)), (c.r[0] & 0xFFFFu));
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121e2u, "ran off the end of a function");
}
void f_000121e8(X86Cpu& c) {
    X86_TICK(c, 45);
    // 0121e8  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121e8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121e8u, "ran off the end of a function");
}
void f_000121f0(X86Cpu& c) {
    X86_TICK(c, 40);
    // 0121f0  movzx eax, word ptr gs:[esi + 8]
    X86_AT(c, 0x121f0u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x8u)));
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121f0u, "ran off the end of a function");
}
void f_000121f5(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0121f5  mul ecx
    X86_AT(c, 0x121f5u);
    x86_mul(c, c.r[1], 4);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121f5u, "ran off the end of a function");
}
void f_000121f7(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0121f7  xchg byte ptr gs:[edi + ebx*1 + 0x1a38], cl
    X86_AT(c, 0x121f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1A38u)); uint32_t t = rd8(ea); wr8(ea, g8(c, 1)); s8(c, 1, t); }
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121f7u, "ran off the end of a function");
}
void f_000121ff(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0121ff  test ecx, ecx
    X86_AT(c, 0x121ffu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x121ffu, "ran off the end of a function");
}
void f_00012201(X86Cpu& c) {
    X86_TICK(c, 5);
    // 012201  je 0x12205
    X86_AT(c, 0x12201u);
    if (x86_cc(c, 4)) { goto L_12205; }
    X86_TICK(c, 40);
    // 012203  div ecx
    X86_AT(c, 0x12203u);
    x86_div(c, c.r[1], 4, 0x12203u);
L_12205:
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12201u, "ran off the end of a function");
}
void f_00012205(X86Cpu& c) {
    X86_TICK(c, 17);
    // 012205  mov word ptr gs:[edi + esi*1 + 8], ax
    X86_AT(c, 0x12205u);
    wr16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12205u, "ran off the end of a function");
}
void f_0001220b(X86Cpu& c) {
    X86_TICK(c, 15);
    // 01220b  popfd 
    X86_AT(c, 0x1220bu);
    x86_popfd(c, 4);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1220bu, "ran off the end of a function");
}
void f_0001220c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 01220c  mov al, ah
    X86_AT(c, 0x1220cu);
    s8(c, 0, g8(c, 4));
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1220cu, "ran off the end of a function");
}
void f_0001220e(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01220e  jmp 0x1221c
    X86_AT(c, 0x1220eu);
    goto L_1221c;
L_1221c:
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1220eu, "ran off the end of a function");
}
void f_0001221c(X86Cpu& c) {
    X86_TICK(c, 50);
    // 01221c  mov dx, 0x4f0
    X86_AT(c, 0x1221cu);
    s16(c, 2, 0x4F0u);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1221cu, "ran off the end of a function");
}
void f_00012220(X86Cpu& c) {
    X86_TICK(c, 48);
    // 012220  out dx, al
    X86_AT(c, 0x12220u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12220u, "ran off the end of a function");
}
void f_00012221(X86Cpu& c) {
    X86_TICK(c, 36);
    // 012221  popal 
    X86_AT(c, 0x12221u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12221u, "ran off the end of a function");
}
void f_00012222(X86Cpu& c) {
    X86_TICK(c, 12);
    // 012222  xor al, al
    X86_AT(c, 0x12222u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12222u, "ran off the end of a function");
}
void f_00012224(X86Cpu& c) {
    X86_TICK(c, 10);
    // 012224  ret 
    X86_AT(c, 0x12224u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12224u, "ran off the end of a function");
}
void f_000122e7(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0122e7  cmp byte ptr gs:[edi + 0x19f4], 0x80
    X86_AT(c, 0x122e7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F4u))), 0x80u, 0, 1);
    // 0122ef  jae 0x13557
    X86_AT(c, 0x122efu);
    if (x86_cc(c, 3)) { goto L_13557; }
    X86_TICK(c, 12);
    // 0122f5  cmp dword ptr [esi + 0xc], 0
    X86_AT(c, 0x122f5u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu))), 0x0u, 0, 4);
    // 0122f9  je 0x13560
    X86_AT(c, 0x122f9u);
    if (x86_cc(c, 4)) { goto L_13560; }
    X86_TICK(c, 23);
    // 0122ff  mov ebp, dword ptr gs:[edi + 0x1a00]
    X86_AT(c, 0x122ffu);
    c.r[5] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A00u)));
    // 012306  add ebp, dword ptr gs:[edi + 0x1a04]
    X86_AT(c, 0x12306u);
    { uint32_t v = c.r[5]; c.r[5] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A04u))), 0, 4); }
    // 01230d  add ebp, dword ptr [esi + 0xc]
    X86_AT(c, 0x1230du);
    { uint32_t v = c.r[5]; c.r[5] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu))), 0, 4); }
    // 012310  cmp ebp, 0xffe0
    X86_AT(c, 0x12310u);
    (void)x86_sub(c, c.r[5], 0xFFE0u, 0, 4);
    // 012316  ja 0x1355d
    X86_AT(c, 0x12316u);
    if (x86_cc(c, 7)) { goto L_1355d; }
    X86_TICK(c, 27);
    // 01231c  pushal 
    X86_AT(c, 0x1231cu);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 01231d  push es
    X86_AT(c, 0x1231du);
    push32(c, c.sreg[0]);
    // 01231e  call 0x1302c
    X86_AT(c, 0x1231eu);
    push32(c, 0x12323u); f_0001302c(c); X86_RET(c, 0x12323u);
    X86_TICK(c, 19);
    // 012323  mov eax, dword ptr [esi + 8]
    X86_AT(c, 0x12323u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 012326  lea edx, [edi + 0x3d00]
    X86_AT(c, 0x12326u);
    c.r[2] = (uint32_t)(c.r[7] + 0x3D00u);
    // 01232c  movzx ecx, byte ptr gs:[edi + 0x19f4]
    X86_AT(c, 0x1232cu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F4u)));
    // 012334  test ecx, ecx
    X86_AT(c, 0x12334u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 012336  je 0x12347
    X86_AT(c, 0x12336u);
    if (x86_cc(c, 4)) { goto L_12347; }
L_12338:
    X86_TICK(c, 11);
    // 012338  cmp eax, dword ptr gs:[edx]
    X86_AT(c, 0x12338u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[2]))), 0, 4);
    // 01233b  je 0x13572
    X86_AT(c, 0x1233bu);
    if (x86_cc(c, 4)) { goto L_13572; }
    X86_TICK(c, 9);
    // 012341  add edx, 4
    X86_AT(c, 0x12341u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x4u, 0, 4); }
    // 012344  dec ecx
    X86_AT(c, 0x12344u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 012345  jne 0x12338
    X86_AT(c, 0x12345u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x12338u); goto L_12338; }
L_12347:
    X86_TICK(c, 106);
    // 012347  movzx eax, byte ptr gs:[edi + 0x19f4]
    X86_AT(c, 0x12347u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F4u)));
    // 01234f  lea ecx, [edi + eax*4 + 0x3d00]
    X86_AT(c, 0x1234fu);
    c.r[1] = (uint32_t)(c.r[7] + c.r[0] * 4 + 0x3D00u);
    // 012356  mov edx, eax
    X86_AT(c, 0x12356u);
    c.r[2] = c.r[0];
    // 012358  shl eax, 5
    X86_AT(c, 0x12358u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[0] = r; }
    // 01235b  lea ebp, [edi + eax*1 + 0x1b00]
    X86_AT(c, 0x1235bu);
    c.r[5] = (uint32_t)(c.r[7] + c.r[0] + 0x1B00u);
    // 012362  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x12362u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 012363  mov dword ptr gs:[ebp], eax
    X86_AT(c, 0x12363u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5])), c.r[0]);
    // 012367  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x12367u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 012368  mov dword ptr gs:[ebp + 4], eax
    X86_AT(c, 0x12368u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u)), c.r[0]);
    // 01236c  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x1236cu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 01236d  mov dword ptr gs:[ebp + 8], eax
    X86_AT(c, 0x1236du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u)), c.r[0]);
    // 012371  mov dword ptr gs:[ecx], eax
    X86_AT(c, 0x12371u);
    wr32((c.sbase[5] + (uint32_t)(c.r[1])), c.r[0]);
    // 012374  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x12374u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 012375  mov ecx, eax
    X86_AT(c, 0x12375u);
    c.r[1] = c.r[0];
    // 012377  mov dword ptr gs:[ebp + 0xc], eax
    X86_AT(c, 0x12377u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xCu)), c.r[0]);
    // 01237b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x1237bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 01237c  mov dword ptr gs:[ebp + 0x10], eax
    X86_AT(c, 0x1237cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u)), c.r[0]);
    // 012380  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x12380u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 012381  mov dword ptr gs:[ebp + 0x14], eax
    X86_AT(c, 0x12381u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)), c.r[0]);
    // 012385  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x12385u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 012386  mov dword ptr gs:[ebp + 0x18], eax
    X86_AT(c, 0x12386u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x18u)), c.r[0]);
    // 01238a  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x1238au);
    x86_string(c, 3, 4, 0, 4, 3);
    // 01238b  mov dword ptr gs:[ebp + 0x1c], eax
    X86_AT(c, 0x1238bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu)), c.r[0]);
    // 01238f  mov ebx, dword ptr gs:[edi + 0x1a00]
    X86_AT(c, 0x1238fu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A00u)));
    // 012396  mov dword ptr gs:[edi + edx*4 + 0x3b00], ebx
    X86_AT(c, 0x12396u);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[2] * 4 + 0x3B00u)), c.r[3]);
    // 01239e  mov edx, ecx
    X86_AT(c, 0x1239eu);
    c.r[2] = c.r[1];
    // 0123a0  test dl, dl
    X86_AT(c, 0x123a0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 0123a2  je 0x123ac
    X86_AT(c, 0x123a2u);
    if (x86_cc(c, 4)) { goto L_123ac; }
    X86_TICK(c, 4);
    // 0123a4  xor dl, dl
    X86_AT(c, 0x123a4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ g8(c, 2), 1)); }
    // 0123a6  add edx, 0x100
    X86_AT(c, 0x123a6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x100u, 0, 4); }
L_123ac:
    X86_TICK(c, 20);
    // 0123ac  add dword ptr gs:[edi + 0x1a00], edx
    X86_AT(c, 0x123acu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x1A00u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 0123b3  inc byte ptr gs:[edi + 0x19f4]
    X86_AT(c, 0x123b3u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F4u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0123ba  call 0x13054
    X86_AT(c, 0x123bau);
    push32(c, 0x123bfu); f_00013054(c); X86_RET(c, 0x123bfu);
    X86_TICK(c, 37);
    // 0123bf  xchg edx, ecx
    X86_AT(c, 0x123bfu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[1]; c.r[1] = t; }
    // 0123c1  push 0x140
    X86_AT(c, 0x123c1u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 0123c6  pop es
    X86_AT(c, 0x123c6u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0123c7  mov ebp, edi
    X86_AT(c, 0x123c7u);
    c.r[5] = c.r[7];
    // 0123c9  lea edi, [ebx + edx*1]
    X86_AT(c, 0x123c9u);
    c.r[7] = (uint32_t)(c.r[3] + c.r[2]);
    // 0123cc  mov eax, edi
    X86_AT(c, 0x123ccu);
    c.r[0] = c.r[7];
    // 0123ce  and edi, 0xfff
    X86_AT(c, 0x123ceu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0xFFFu, 4); }
    // 0123d4  shr ax, 0xc
    X86_AT(c, 0x123d4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0xCu, 2, w); if (w) s16(c, 0, r); }
    // 0123d8  or al, 0x80
    X86_AT(c, 0x123d8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x80u, 1)); }
    // 0123da  mov ah, al
    X86_AT(c, 0x123dau);
    s8(c, 4, g8(c, 0));
    // 0123dc  mov ebx, 0x20
    X86_AT(c, 0x123dcu);
    c.r[3] = 0x20u;
    // 0123e1  sub ecx, edx
    X86_AT(c, 0x123e1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0123e3  mov dx, 0x4f7
    X86_AT(c, 0x123e3u);
    s16(c, 2, 0x4F7u);
    // 0123e7  cmp ecx, ebx
    X86_AT(c, 0x123e7u);
    (void)x86_sub(c, c.r[1], c.r[3], 0, 4);
    // 0123e9  jae 0x12419
    X86_AT(c, 0x123e9u);
    if (x86_cc(c, 3)) { goto L_12419; }
    X86_TICK(c, 20);
    // 0123eb  sub ebx, ecx
    X86_AT(c, 0x123ebu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0123ed  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x123edu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 0123f4  out dx, al
    X86_AT(c, 0x123f4u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0123f5  mov al, 0xff
    X86_AT(c, 0x123f5u);
    s8(c, 0, 0xFFu);
    // 0123f7  nop 
    X86_AT(c, 0x123f7u);
L_123f8:
    X86_TICK(c, 24);
    // 0123f8  push ds
    X86_AT(c, 0x123f8u);
    push32(c, c.sreg[3]);
    // 0123f9  pop ds
    X86_AT(c, 0x123f9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0123fa  stosb byte ptr es:[edi], al
    X86_AT(c, 0x123fau);
    x86_string(c, 2, 1, 0, 4, 3);
    // 0123fb  loop 0x123f8
    X86_AT(c, 0x123fbu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x123f8u); goto L_123f8; }
    X86_TICK(c, 7);
    // 0123fd  cmp edi, 0x1000
    X86_AT(c, 0x123fdu);
    (void)x86_sub(c, c.r[7], 0x1000u, 0, 4);
    // 012403  jne 0x12410
    X86_AT(c, 0x12403u);
    if (x86_cc(c, 5)) { goto L_12410; }
    X86_TICK(c, 18);
    // 012405  mov al, ah
    X86_AT(c, 0x12405u);
    s8(c, 0, g8(c, 4));
    // 012407  inc eax
    X86_AT(c, 0x12407u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 012408  mov byte ptr gs:[ebp + 0x19f7], al
    X86_AT(c, 0x12408u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F7u)), g8(c, 0));
    // 01240f  out dx, al
    X86_AT(c, 0x1240fu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_12410:
    X86_TICK(c, 9);
    // 012410  inc ch
    X86_AT(c, 0x12410u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
    // 012412  add dword ptr gs:[ebp + 0x1a00], ecx
    X86_AT(c, 0x12412u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1A00u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[1], 0, 4)); }
L_12419:
    X86_TICK(c, 8);
    // 012419  and edi, 0xfff
    X86_AT(c, 0x12419u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0xFFFu, 4); }
    // 01241f  mov ecx, ebx
    X86_AT(c, 0x1241fu);
    c.r[1] = c.r[3];
    // 012421  mov al, 0xff
    X86_AT(c, 0x12421u);
    s8(c, 0, 0xFFu);
    // 012423  nop 
    X86_AT(c, 0x12423u);
L_12424:
    X86_TICK(c, 24);
    // 012424  push ds
    X86_AT(c, 0x12424u);
    push32(c, c.sreg[3]);
    // 012425  pop ds
    X86_AT(c, 0x12425u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012426  stosb byte ptr es:[edi], al
    X86_AT(c, 0x12426u);
    x86_string(c, 2, 1, 0, 4, 3);
    // 012427  loop 0x12424
    X86_AT(c, 0x12427u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x12424u); goto L_12424; }
    X86_TICK(c, 40);
    // 012429  pop es
    X86_AT(c, 0x12429u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01242a  popal 
    X86_AT(c, 0x1242au);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 01242b  xor al, al
    X86_AT(c, 0x1242bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01242d  ret 
    X86_AT(c, 0x1242du);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
L_1355d:
    X86_TICK(c, 12);
    // 01355d  mov al, 5
    X86_AT(c, 0x1355du);
    s8(c, 0, 0x5u);
    // 01355f  ret 
    X86_AT(c, 0x1355fu);
    c.eip = pop32(c); return;
L_13560:
    X86_TICK(c, 12);
    // 013560  mov al, 6
    X86_AT(c, 0x13560u);
    s8(c, 0, 0x6u);
    // 013562  ret 
    X86_AT(c, 0x13562u);
    c.eip = pop32(c); return;
L_13572:
    X86_TICK(c, 40);
    // 013572  pop es
    X86_AT(c, 0x13572u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 013573  popal 
    X86_AT(c, 0x13573u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 013574  mov al, 0xa
    X86_AT(c, 0x13574u);
    s8(c, 0, 0xAu);
    // 013576  ret 
    X86_AT(c, 0x13576u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x122e7u, "ran off the end of a function");
}
void f_00012430(X86Cpu& c) {
    X86_TICK(c, 25);
    // 012430  pushal 
    X86_AT(c, 0x12430u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 012431  call 0x1302c
    X86_AT(c, 0x12431u);
    push32(c, 0x12436u); f_0001302c(c); X86_RET(c, 0x12436u);
    X86_TICK(c, 9);
    // 012436  xor ebx, ebx
    X86_AT(c, 0x12436u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
    // 012438  cmp edx, 0xffffffff
    X86_AT(c, 0x12438u);
    (void)x86_sub(c, c.r[2], 0xFFFFFFFFu, 0, 4);
    // 01243b  je 0x12454
    X86_AT(c, 0x1243bu);
    if (x86_cc(c, 4)) { goto L_12454; }
L_1243d:
    X86_TICK(c, 11);
    // 01243d  cmp edx, dword ptr gs:[edi + ebx*4 + 0x3d00]
    X86_AT(c, 0x1243du);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 4 + 0x3D00u))), 0, 4);
    // 012445  je 0x12468
    X86_AT(c, 0x12445u);
    if (x86_cc(c, 4)) { goto L_12468; }
    X86_TICK(c, 9);
    // 012447  inc ebx
    X86_AT(c, 0x12447u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 012448  cmp bl, 0x80
    X86_AT(c, 0x12448u);
    (void)x86_sub(c, g8(c, 3), 0x80u, 0, 1);
    // 01244b  jne 0x1243d
    X86_AT(c, 0x1244bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1243du); goto L_1243d; }
    X86_TICK(c, 7);
    // 01244d  jmp 0x1356e
    X86_AT(c, 0x1244du);
    goto L_1356e;
L_12454:
    X86_TICK(c, 40);
    // 012454  mov byte ptr gs:[edi + 0x19f4], bl
    X86_AT(c, 0x12454u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F4u)), g8(c, 3));
    // 01245b  mov dword ptr gs:[edi + 0x1a00], ebx
    X86_AT(c, 0x1245bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A00u)), c.r[3]);
    // 012462  popal 
    X86_AT(c, 0x12462u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012463  xor al, al
    X86_AT(c, 0x12463u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012465  ret 
    X86_AT(c, 0x12465u);
    c.eip = pop32(c); return;
L_12468:
    X86_TICK(c, 70);
    // 012468  dec byte ptr gs:[edi + 0x19f4]
    X86_AT(c, 0x12468u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F4u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 01246f  push es
    X86_AT(c, 0x1246fu);
    push32(c, c.sreg[0]);
    // 012470  push gs
    X86_AT(c, 0x12470u);
    push32(c, c.sreg[5]);
    // 012472  pop es
    X86_AT(c, 0x12472u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 012473  mov ebp, edi
    X86_AT(c, 0x12473u);
    c.r[5] = c.r[7];
    // 012475  lea edi, [ebp + ebx*4 + 0x3d00]
    X86_AT(c, 0x12475u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[3] * 4 + 0x3D00u);
    // 01247c  lea esi, [edi + 4]
    X86_AT(c, 0x1247cu);
    c.r[6] = (uint32_t)(c.r[7] + 0x4u);
    // 01247f  lea ecx, [ebp + 0x3f00]
    X86_AT(c, 0x1247fu);
    c.r[1] = (uint32_t)(c.r[5] + 0x3F00u);
    // 012485  sub ecx, esi
    X86_AT(c, 0x12485u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[6], 0, 4); }
    // 012487  shr ecx, 2
    X86_AT(c, 0x12487u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 01248a  mov eax, ecx
    X86_AT(c, 0x1248au);
    c.r[0] = c.r[1];
    // 01248c  movsd dword ptr es:[edi], dword ptr gs:[esi]
    X86_AT(c, 0x1248cu);
    x86_string(c, 0, 4, 243, 4, 5);
    // 01248f  mov edi, ebx
    X86_AT(c, 0x1248fu);
    c.r[7] = c.r[3];
    // 012491  shl edi, 5
    X86_AT(c, 0x12491u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[7] = r; }
    // 012494  lea edi, [ebp + edi*1 + 0x1b00]
    X86_AT(c, 0x12494u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[7] + 0x1B00u);
    // 01249b  lea esi, [edi + 0x20]
    X86_AT(c, 0x1249bu);
    c.r[6] = (uint32_t)(c.r[7] + 0x20u);
    // 01249e  lea ecx, [ebp + 0x2b00]
    X86_AT(c, 0x1249eu);
    c.r[1] = (uint32_t)(c.r[5] + 0x2B00u);
    // 0124a4  sub ecx, esi
    X86_AT(c, 0x124a4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0124a6  mov edx, dword ptr gs:[edi + 0xc]
    X86_AT(c, 0x124a6u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0xCu)));
    // 0124aa  shr ecx, 2
    X86_AT(c, 0x124aau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0124ad  movsd dword ptr es:[edi], dword ptr gs:[esi]
    X86_AT(c, 0x124adu);
    x86_string(c, 0, 4, 243, 4, 5);
    // 0124b0  test dl, dl
    X86_AT(c, 0x124b0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 0124b2  je 0x124bc
    X86_AT(c, 0x124b2u);
    if (x86_cc(c, 4)) { goto L_124bc; }
    X86_TICK(c, 4);
    // 0124b4  xor dl, dl
    X86_AT(c, 0x124b4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ g8(c, 2), 1)); }
    // 0124b6  add edx, 0x100
    X86_AT(c, 0x124b6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x100u, 0, 4); }
L_124bc:
    X86_TICK(c, 17);
    // 0124bc  sub dword ptr gs:[ebp + 0x1a00], edx
    X86_AT(c, 0x124bcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1A00u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], 0, 4)); }
    // 0124c3  lea edi, [ebp + ebx*4 + 0x3b00]
    X86_AT(c, 0x124c3u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[3] * 4 + 0x3B00u);
    // 0124ca  lea esi, [edi + 4]
    X86_AT(c, 0x124cau);
    c.r[6] = (uint32_t)(c.r[7] + 0x4u);
    // 0124cd  mov ecx, eax
    X86_AT(c, 0x124cdu);
    c.r[1] = c.r[0];
    // 0124cf  mov ebx, dword ptr gs:[edi]
    X86_AT(c, 0x124cfu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[7])));
L_124d2:
    X86_TICK(c, 23);
    // 0124d2  lodsd eax, dword ptr gs:[esi]
    X86_AT(c, 0x124d2u);
    x86_string(c, 3, 4, 0, 4, 5);
    // 0124d4  sub eax, edx
    X86_AT(c, 0x124d4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0124d6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x124d6u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0124d7  dec ecx
    X86_AT(c, 0x124d7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 0124d8  jne 0x124d2
    X86_AT(c, 0x124d8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x124d2u); goto L_124d2; }
    X86_TICK(c, 13);
    // 0124da  lea esi, [ebx + edx*1]
    X86_AT(c, 0x124dau);
    c.r[6] = (uint32_t)(c.r[3] + c.r[2]);
    // 0124dd  mov ecx, 0x10000
    X86_AT(c, 0x124ddu);
    c.r[1] = 0x10000u;
    // 0124e2  sub ecx, esi
    X86_AT(c, 0x124e2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0124e4  call 0x13194
    X86_AT(c, 0x124e4u);
    push32(c, 0x124e9u); f_00013194(c); X86_RET(c, 0x124e9u);
    X86_TICK(c, 40);
    // 0124e9  pop es
    X86_AT(c, 0x124e9u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0124ea  popal 
    X86_AT(c, 0x124eau);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0124eb  xor al, al
    X86_AT(c, 0x124ebu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0124ed  ret 
    X86_AT(c, 0x124edu);
    c.eip = pop32(c); return;
L_1356e:
    X86_TICK(c, 36);
    // 01356e  popal 
    X86_AT(c, 0x1356eu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 01356f  mov al, 9
    X86_AT(c, 0x1356fu);
    s8(c, 0, 0x9u);
    // 013571  ret 
    X86_AT(c, 0x13571u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12430u, "ran off the end of a function");
}
void f_00012431(X86Cpu& c) {
    X86_TICK(c, 7);
    // 012431  call 0x1302c
    X86_AT(c, 0x12431u);
    push32(c, 0x12436u); f_0001302c(c); X86_RET(c, 0x12436u);
    X86_TICK(c, 9);
    // 012436  xor ebx, ebx
    X86_AT(c, 0x12436u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
    // 012438  cmp edx, 0xffffffff
    X86_AT(c, 0x12438u);
    (void)x86_sub(c, c.r[2], 0xFFFFFFFFu, 0, 4);
    // 01243b  je 0x12454
    X86_AT(c, 0x1243bu);
    if (x86_cc(c, 4)) { goto L_12454; }
L_1243d:
    X86_TICK(c, 11);
    // 01243d  cmp edx, dword ptr gs:[edi + ebx*4 + 0x3d00]
    X86_AT(c, 0x1243du);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 4 + 0x3D00u))), 0, 4);
    // 012445  je 0x12468
    X86_AT(c, 0x12445u);
    if (x86_cc(c, 4)) { goto L_12468; }
    X86_TICK(c, 9);
    // 012447  inc ebx
    X86_AT(c, 0x12447u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 012448  cmp bl, 0x80
    X86_AT(c, 0x12448u);
    (void)x86_sub(c, g8(c, 3), 0x80u, 0, 1);
    // 01244b  jne 0x1243d
    X86_AT(c, 0x1244bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1243du); goto L_1243d; }
    X86_TICK(c, 7);
    // 01244d  jmp 0x1356e
    X86_AT(c, 0x1244du);
    goto L_1356e;
L_12454:
    X86_TICK(c, 40);
    // 012454  mov byte ptr gs:[edi + 0x19f4], bl
    X86_AT(c, 0x12454u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F4u)), g8(c, 3));
    // 01245b  mov dword ptr gs:[edi + 0x1a00], ebx
    X86_AT(c, 0x1245bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A00u)), c.r[3]);
    // 012462  popal 
    X86_AT(c, 0x12462u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012463  xor al, al
    X86_AT(c, 0x12463u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012465  ret 
    X86_AT(c, 0x12465u);
    c.eip = pop32(c); return;
L_12468:
    X86_TICK(c, 70);
    // 012468  dec byte ptr gs:[edi + 0x19f4]
    X86_AT(c, 0x12468u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F4u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 01246f  push es
    X86_AT(c, 0x1246fu);
    push32(c, c.sreg[0]);
    // 012470  push gs
    X86_AT(c, 0x12470u);
    push32(c, c.sreg[5]);
    // 012472  pop es
    X86_AT(c, 0x12472u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 012473  mov ebp, edi
    X86_AT(c, 0x12473u);
    c.r[5] = c.r[7];
    // 012475  lea edi, [ebp + ebx*4 + 0x3d00]
    X86_AT(c, 0x12475u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[3] * 4 + 0x3D00u);
    // 01247c  lea esi, [edi + 4]
    X86_AT(c, 0x1247cu);
    c.r[6] = (uint32_t)(c.r[7] + 0x4u);
    // 01247f  lea ecx, [ebp + 0x3f00]
    X86_AT(c, 0x1247fu);
    c.r[1] = (uint32_t)(c.r[5] + 0x3F00u);
    // 012485  sub ecx, esi
    X86_AT(c, 0x12485u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[6], 0, 4); }
    // 012487  shr ecx, 2
    X86_AT(c, 0x12487u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 01248a  mov eax, ecx
    X86_AT(c, 0x1248au);
    c.r[0] = c.r[1];
    // 01248c  movsd dword ptr es:[edi], dword ptr gs:[esi]
    X86_AT(c, 0x1248cu);
    x86_string(c, 0, 4, 243, 4, 5);
    // 01248f  mov edi, ebx
    X86_AT(c, 0x1248fu);
    c.r[7] = c.r[3];
    // 012491  shl edi, 5
    X86_AT(c, 0x12491u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[7] = r; }
    // 012494  lea edi, [ebp + edi*1 + 0x1b00]
    X86_AT(c, 0x12494u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[7] + 0x1B00u);
    // 01249b  lea esi, [edi + 0x20]
    X86_AT(c, 0x1249bu);
    c.r[6] = (uint32_t)(c.r[7] + 0x20u);
    // 01249e  lea ecx, [ebp + 0x2b00]
    X86_AT(c, 0x1249eu);
    c.r[1] = (uint32_t)(c.r[5] + 0x2B00u);
    // 0124a4  sub ecx, esi
    X86_AT(c, 0x124a4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0124a6  mov edx, dword ptr gs:[edi + 0xc]
    X86_AT(c, 0x124a6u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0xCu)));
    // 0124aa  shr ecx, 2
    X86_AT(c, 0x124aau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0124ad  movsd dword ptr es:[edi], dword ptr gs:[esi]
    X86_AT(c, 0x124adu);
    x86_string(c, 0, 4, 243, 4, 5);
    // 0124b0  test dl, dl
    X86_AT(c, 0x124b0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 0124b2  je 0x124bc
    X86_AT(c, 0x124b2u);
    if (x86_cc(c, 4)) { goto L_124bc; }
    X86_TICK(c, 4);
    // 0124b4  xor dl, dl
    X86_AT(c, 0x124b4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ g8(c, 2), 1)); }
    // 0124b6  add edx, 0x100
    X86_AT(c, 0x124b6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x100u, 0, 4); }
L_124bc:
    X86_TICK(c, 17);
    // 0124bc  sub dword ptr gs:[ebp + 0x1a00], edx
    X86_AT(c, 0x124bcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1A00u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], 0, 4)); }
    // 0124c3  lea edi, [ebp + ebx*4 + 0x3b00]
    X86_AT(c, 0x124c3u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[3] * 4 + 0x3B00u);
    // 0124ca  lea esi, [edi + 4]
    X86_AT(c, 0x124cau);
    c.r[6] = (uint32_t)(c.r[7] + 0x4u);
    // 0124cd  mov ecx, eax
    X86_AT(c, 0x124cdu);
    c.r[1] = c.r[0];
    // 0124cf  mov ebx, dword ptr gs:[edi]
    X86_AT(c, 0x124cfu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[7])));
L_124d2:
    X86_TICK(c, 23);
    // 0124d2  lodsd eax, dword ptr gs:[esi]
    X86_AT(c, 0x124d2u);
    x86_string(c, 3, 4, 0, 4, 5);
    // 0124d4  sub eax, edx
    X86_AT(c, 0x124d4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0124d6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x124d6u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0124d7  dec ecx
    X86_AT(c, 0x124d7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 0124d8  jne 0x124d2
    X86_AT(c, 0x124d8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x124d2u); goto L_124d2; }
    X86_TICK(c, 13);
    // 0124da  lea esi, [ebx + edx*1]
    X86_AT(c, 0x124dau);
    c.r[6] = (uint32_t)(c.r[3] + c.r[2]);
    // 0124dd  mov ecx, 0x10000
    X86_AT(c, 0x124ddu);
    c.r[1] = 0x10000u;
    // 0124e2  sub ecx, esi
    X86_AT(c, 0x124e2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0124e4  call 0x13194
    X86_AT(c, 0x124e4u);
    push32(c, 0x124e9u); f_00013194(c); X86_RET(c, 0x124e9u);
    X86_TICK(c, 40);
    // 0124e9  pop es
    X86_AT(c, 0x124e9u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0124ea  popal 
    X86_AT(c, 0x124eau);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0124eb  xor al, al
    X86_AT(c, 0x124ebu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0124ed  ret 
    X86_AT(c, 0x124edu);
    c.eip = pop32(c); return;
L_1356e:
    X86_TICK(c, 36);
    // 01356e  popal 
    X86_AT(c, 0x1356eu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 01356f  mov al, 9
    X86_AT(c, 0x1356fu);
    s8(c, 0, 0x9u);
    // 013571  ret 
    X86_AT(c, 0x13571u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12431u, "ran off the end of a function");
}
void f_00012436(X86Cpu& c) {
    X86_TICK(c, 9);
    // 012436  xor ebx, ebx
    X86_AT(c, 0x12436u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
    // 012438  cmp edx, 0xffffffff
    X86_AT(c, 0x12438u);
    (void)x86_sub(c, c.r[2], 0xFFFFFFFFu, 0, 4);
    // 01243b  je 0x12454
    X86_AT(c, 0x1243bu);
    if (x86_cc(c, 4)) { goto L_12454; }
L_1243d:
    X86_TICK(c, 11);
    // 01243d  cmp edx, dword ptr gs:[edi + ebx*4 + 0x3d00]
    X86_AT(c, 0x1243du);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 4 + 0x3D00u))), 0, 4);
    // 012445  je 0x12468
    X86_AT(c, 0x12445u);
    if (x86_cc(c, 4)) { goto L_12468; }
    X86_TICK(c, 9);
    // 012447  inc ebx
    X86_AT(c, 0x12447u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 012448  cmp bl, 0x80
    X86_AT(c, 0x12448u);
    (void)x86_sub(c, g8(c, 3), 0x80u, 0, 1);
    // 01244b  jne 0x1243d
    X86_AT(c, 0x1244bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1243du); goto L_1243d; }
    X86_TICK(c, 7);
    // 01244d  jmp 0x1356e
    X86_AT(c, 0x1244du);
    goto L_1356e;
L_12454:
    X86_TICK(c, 40);
    // 012454  mov byte ptr gs:[edi + 0x19f4], bl
    X86_AT(c, 0x12454u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F4u)), g8(c, 3));
    // 01245b  mov dword ptr gs:[edi + 0x1a00], ebx
    X86_AT(c, 0x1245bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A00u)), c.r[3]);
    // 012462  popal 
    X86_AT(c, 0x12462u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012463  xor al, al
    X86_AT(c, 0x12463u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012465  ret 
    X86_AT(c, 0x12465u);
    c.eip = pop32(c); return;
L_12468:
    X86_TICK(c, 70);
    // 012468  dec byte ptr gs:[edi + 0x19f4]
    X86_AT(c, 0x12468u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F4u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 01246f  push es
    X86_AT(c, 0x1246fu);
    push32(c, c.sreg[0]);
    // 012470  push gs
    X86_AT(c, 0x12470u);
    push32(c, c.sreg[5]);
    // 012472  pop es
    X86_AT(c, 0x12472u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 012473  mov ebp, edi
    X86_AT(c, 0x12473u);
    c.r[5] = c.r[7];
    // 012475  lea edi, [ebp + ebx*4 + 0x3d00]
    X86_AT(c, 0x12475u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[3] * 4 + 0x3D00u);
    // 01247c  lea esi, [edi + 4]
    X86_AT(c, 0x1247cu);
    c.r[6] = (uint32_t)(c.r[7] + 0x4u);
    // 01247f  lea ecx, [ebp + 0x3f00]
    X86_AT(c, 0x1247fu);
    c.r[1] = (uint32_t)(c.r[5] + 0x3F00u);
    // 012485  sub ecx, esi
    X86_AT(c, 0x12485u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[6], 0, 4); }
    // 012487  shr ecx, 2
    X86_AT(c, 0x12487u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 01248a  mov eax, ecx
    X86_AT(c, 0x1248au);
    c.r[0] = c.r[1];
    // 01248c  movsd dword ptr es:[edi], dword ptr gs:[esi]
    X86_AT(c, 0x1248cu);
    x86_string(c, 0, 4, 243, 4, 5);
    // 01248f  mov edi, ebx
    X86_AT(c, 0x1248fu);
    c.r[7] = c.r[3];
    // 012491  shl edi, 5
    X86_AT(c, 0x12491u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[7] = r; }
    // 012494  lea edi, [ebp + edi*1 + 0x1b00]
    X86_AT(c, 0x12494u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[7] + 0x1B00u);
    // 01249b  lea esi, [edi + 0x20]
    X86_AT(c, 0x1249bu);
    c.r[6] = (uint32_t)(c.r[7] + 0x20u);
    // 01249e  lea ecx, [ebp + 0x2b00]
    X86_AT(c, 0x1249eu);
    c.r[1] = (uint32_t)(c.r[5] + 0x2B00u);
    // 0124a4  sub ecx, esi
    X86_AT(c, 0x124a4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0124a6  mov edx, dword ptr gs:[edi + 0xc]
    X86_AT(c, 0x124a6u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0xCu)));
    // 0124aa  shr ecx, 2
    X86_AT(c, 0x124aau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0124ad  movsd dword ptr es:[edi], dword ptr gs:[esi]
    X86_AT(c, 0x124adu);
    x86_string(c, 0, 4, 243, 4, 5);
    // 0124b0  test dl, dl
    X86_AT(c, 0x124b0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 0124b2  je 0x124bc
    X86_AT(c, 0x124b2u);
    if (x86_cc(c, 4)) { goto L_124bc; }
    X86_TICK(c, 4);
    // 0124b4  xor dl, dl
    X86_AT(c, 0x124b4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ g8(c, 2), 1)); }
    // 0124b6  add edx, 0x100
    X86_AT(c, 0x124b6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x100u, 0, 4); }
L_124bc:
    X86_TICK(c, 17);
    // 0124bc  sub dword ptr gs:[ebp + 0x1a00], edx
    X86_AT(c, 0x124bcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1A00u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], 0, 4)); }
    // 0124c3  lea edi, [ebp + ebx*4 + 0x3b00]
    X86_AT(c, 0x124c3u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[3] * 4 + 0x3B00u);
    // 0124ca  lea esi, [edi + 4]
    X86_AT(c, 0x124cau);
    c.r[6] = (uint32_t)(c.r[7] + 0x4u);
    // 0124cd  mov ecx, eax
    X86_AT(c, 0x124cdu);
    c.r[1] = c.r[0];
    // 0124cf  mov ebx, dword ptr gs:[edi]
    X86_AT(c, 0x124cfu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[7])));
L_124d2:
    X86_TICK(c, 23);
    // 0124d2  lodsd eax, dword ptr gs:[esi]
    X86_AT(c, 0x124d2u);
    x86_string(c, 3, 4, 0, 4, 5);
    // 0124d4  sub eax, edx
    X86_AT(c, 0x124d4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0124d6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x124d6u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0124d7  dec ecx
    X86_AT(c, 0x124d7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 0124d8  jne 0x124d2
    X86_AT(c, 0x124d8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x124d2u); goto L_124d2; }
    X86_TICK(c, 13);
    // 0124da  lea esi, [ebx + edx*1]
    X86_AT(c, 0x124dau);
    c.r[6] = (uint32_t)(c.r[3] + c.r[2]);
    // 0124dd  mov ecx, 0x10000
    X86_AT(c, 0x124ddu);
    c.r[1] = 0x10000u;
    // 0124e2  sub ecx, esi
    X86_AT(c, 0x124e2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0124e4  call 0x13194
    X86_AT(c, 0x124e4u);
    push32(c, 0x124e9u); f_00013194(c); X86_RET(c, 0x124e9u);
    X86_TICK(c, 40);
    // 0124e9  pop es
    X86_AT(c, 0x124e9u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0124ea  popal 
    X86_AT(c, 0x124eau);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0124eb  xor al, al
    X86_AT(c, 0x124ebu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0124ed  ret 
    X86_AT(c, 0x124edu);
    c.eip = pop32(c); return;
L_1356e:
    X86_TICK(c, 36);
    // 01356e  popal 
    X86_AT(c, 0x1356eu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 01356f  mov al, 9
    X86_AT(c, 0x1356fu);
    s8(c, 0, 0x9u);
    // 013571  ret 
    X86_AT(c, 0x13571u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12436u, "ran off the end of a function");
}
void f_00012438(X86Cpu& c) {
    X86_TICK(c, 7);
    // 012438  cmp edx, 0xffffffff
    X86_AT(c, 0x12438u);
    (void)x86_sub(c, c.r[2], 0xFFFFFFFFu, 0, 4);
    // 01243b  je 0x12454
    X86_AT(c, 0x1243bu);
    if (x86_cc(c, 4)) { goto L_12454; }
L_1243d:
    X86_TICK(c, 11);
    // 01243d  cmp edx, dword ptr gs:[edi + ebx*4 + 0x3d00]
    X86_AT(c, 0x1243du);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 4 + 0x3D00u))), 0, 4);
    // 012445  je 0x12468
    X86_AT(c, 0x12445u);
    if (x86_cc(c, 4)) { goto L_12468; }
    X86_TICK(c, 9);
    // 012447  inc ebx
    X86_AT(c, 0x12447u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 012448  cmp bl, 0x80
    X86_AT(c, 0x12448u);
    (void)x86_sub(c, g8(c, 3), 0x80u, 0, 1);
    // 01244b  jne 0x1243d
    X86_AT(c, 0x1244bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1243du); goto L_1243d; }
    X86_TICK(c, 7);
    // 01244d  jmp 0x1356e
    X86_AT(c, 0x1244du);
    goto L_1356e;
L_12454:
    X86_TICK(c, 40);
    // 012454  mov byte ptr gs:[edi + 0x19f4], bl
    X86_AT(c, 0x12454u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F4u)), g8(c, 3));
    // 01245b  mov dword ptr gs:[edi + 0x1a00], ebx
    X86_AT(c, 0x1245bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A00u)), c.r[3]);
    // 012462  popal 
    X86_AT(c, 0x12462u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012463  xor al, al
    X86_AT(c, 0x12463u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012465  ret 
    X86_AT(c, 0x12465u);
    c.eip = pop32(c); return;
L_12468:
    X86_TICK(c, 70);
    // 012468  dec byte ptr gs:[edi + 0x19f4]
    X86_AT(c, 0x12468u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F4u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 01246f  push es
    X86_AT(c, 0x1246fu);
    push32(c, c.sreg[0]);
    // 012470  push gs
    X86_AT(c, 0x12470u);
    push32(c, c.sreg[5]);
    // 012472  pop es
    X86_AT(c, 0x12472u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 012473  mov ebp, edi
    X86_AT(c, 0x12473u);
    c.r[5] = c.r[7];
    // 012475  lea edi, [ebp + ebx*4 + 0x3d00]
    X86_AT(c, 0x12475u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[3] * 4 + 0x3D00u);
    // 01247c  lea esi, [edi + 4]
    X86_AT(c, 0x1247cu);
    c.r[6] = (uint32_t)(c.r[7] + 0x4u);
    // 01247f  lea ecx, [ebp + 0x3f00]
    X86_AT(c, 0x1247fu);
    c.r[1] = (uint32_t)(c.r[5] + 0x3F00u);
    // 012485  sub ecx, esi
    X86_AT(c, 0x12485u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[6], 0, 4); }
    // 012487  shr ecx, 2
    X86_AT(c, 0x12487u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 01248a  mov eax, ecx
    X86_AT(c, 0x1248au);
    c.r[0] = c.r[1];
    // 01248c  movsd dword ptr es:[edi], dword ptr gs:[esi]
    X86_AT(c, 0x1248cu);
    x86_string(c, 0, 4, 243, 4, 5);
    // 01248f  mov edi, ebx
    X86_AT(c, 0x1248fu);
    c.r[7] = c.r[3];
    // 012491  shl edi, 5
    X86_AT(c, 0x12491u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[7] = r; }
    // 012494  lea edi, [ebp + edi*1 + 0x1b00]
    X86_AT(c, 0x12494u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[7] + 0x1B00u);
    // 01249b  lea esi, [edi + 0x20]
    X86_AT(c, 0x1249bu);
    c.r[6] = (uint32_t)(c.r[7] + 0x20u);
    // 01249e  lea ecx, [ebp + 0x2b00]
    X86_AT(c, 0x1249eu);
    c.r[1] = (uint32_t)(c.r[5] + 0x2B00u);
    // 0124a4  sub ecx, esi
    X86_AT(c, 0x124a4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0124a6  mov edx, dword ptr gs:[edi + 0xc]
    X86_AT(c, 0x124a6u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0xCu)));
    // 0124aa  shr ecx, 2
    X86_AT(c, 0x124aau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0124ad  movsd dword ptr es:[edi], dword ptr gs:[esi]
    X86_AT(c, 0x124adu);
    x86_string(c, 0, 4, 243, 4, 5);
    // 0124b0  test dl, dl
    X86_AT(c, 0x124b0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 0124b2  je 0x124bc
    X86_AT(c, 0x124b2u);
    if (x86_cc(c, 4)) { goto L_124bc; }
    X86_TICK(c, 4);
    // 0124b4  xor dl, dl
    X86_AT(c, 0x124b4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ g8(c, 2), 1)); }
    // 0124b6  add edx, 0x100
    X86_AT(c, 0x124b6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x100u, 0, 4); }
L_124bc:
    X86_TICK(c, 17);
    // 0124bc  sub dword ptr gs:[ebp + 0x1a00], edx
    X86_AT(c, 0x124bcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1A00u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], 0, 4)); }
    // 0124c3  lea edi, [ebp + ebx*4 + 0x3b00]
    X86_AT(c, 0x124c3u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[3] * 4 + 0x3B00u);
    // 0124ca  lea esi, [edi + 4]
    X86_AT(c, 0x124cau);
    c.r[6] = (uint32_t)(c.r[7] + 0x4u);
    // 0124cd  mov ecx, eax
    X86_AT(c, 0x124cdu);
    c.r[1] = c.r[0];
    // 0124cf  mov ebx, dword ptr gs:[edi]
    X86_AT(c, 0x124cfu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[7])));
L_124d2:
    X86_TICK(c, 23);
    // 0124d2  lodsd eax, dword ptr gs:[esi]
    X86_AT(c, 0x124d2u);
    x86_string(c, 3, 4, 0, 4, 5);
    // 0124d4  sub eax, edx
    X86_AT(c, 0x124d4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0124d6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x124d6u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0124d7  dec ecx
    X86_AT(c, 0x124d7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 0124d8  jne 0x124d2
    X86_AT(c, 0x124d8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x124d2u); goto L_124d2; }
    X86_TICK(c, 13);
    // 0124da  lea esi, [ebx + edx*1]
    X86_AT(c, 0x124dau);
    c.r[6] = (uint32_t)(c.r[3] + c.r[2]);
    // 0124dd  mov ecx, 0x10000
    X86_AT(c, 0x124ddu);
    c.r[1] = 0x10000u;
    // 0124e2  sub ecx, esi
    X86_AT(c, 0x124e2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0124e4  call 0x13194
    X86_AT(c, 0x124e4u);
    push32(c, 0x124e9u); f_00013194(c); X86_RET(c, 0x124e9u);
    X86_TICK(c, 40);
    // 0124e9  pop es
    X86_AT(c, 0x124e9u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0124ea  popal 
    X86_AT(c, 0x124eau);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0124eb  xor al, al
    X86_AT(c, 0x124ebu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0124ed  ret 
    X86_AT(c, 0x124edu);
    c.eip = pop32(c); return;
L_1356e:
    X86_TICK(c, 36);
    // 01356e  popal 
    X86_AT(c, 0x1356eu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 01356f  mov al, 9
    X86_AT(c, 0x1356fu);
    s8(c, 0, 0x9u);
    // 013571  ret 
    X86_AT(c, 0x13571u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12438u, "ran off the end of a function");
}
void f_0001243b(X86Cpu& c) {
    X86_TICK(c, 5);
    // 01243b  je 0x12454
    X86_AT(c, 0x1243bu);
    if (x86_cc(c, 4)) { goto L_12454; }
L_1243d:
    X86_TICK(c, 11);
    // 01243d  cmp edx, dword ptr gs:[edi + ebx*4 + 0x3d00]
    X86_AT(c, 0x1243du);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 4 + 0x3D00u))), 0, 4);
    // 012445  je 0x12468
    X86_AT(c, 0x12445u);
    if (x86_cc(c, 4)) { goto L_12468; }
    X86_TICK(c, 9);
    // 012447  inc ebx
    X86_AT(c, 0x12447u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 012448  cmp bl, 0x80
    X86_AT(c, 0x12448u);
    (void)x86_sub(c, g8(c, 3), 0x80u, 0, 1);
    // 01244b  jne 0x1243d
    X86_AT(c, 0x1244bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1243du); goto L_1243d; }
    X86_TICK(c, 7);
    // 01244d  jmp 0x1356e
    X86_AT(c, 0x1244du);
    goto L_1356e;
L_12454:
    X86_TICK(c, 40);
    // 012454  mov byte ptr gs:[edi + 0x19f4], bl
    X86_AT(c, 0x12454u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F4u)), g8(c, 3));
    // 01245b  mov dword ptr gs:[edi + 0x1a00], ebx
    X86_AT(c, 0x1245bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A00u)), c.r[3]);
    // 012462  popal 
    X86_AT(c, 0x12462u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012463  xor al, al
    X86_AT(c, 0x12463u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012465  ret 
    X86_AT(c, 0x12465u);
    c.eip = pop32(c); return;
L_12468:
    X86_TICK(c, 70);
    // 012468  dec byte ptr gs:[edi + 0x19f4]
    X86_AT(c, 0x12468u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x19F4u)); uint32_t v = rd8(ea); wr8(ea, x86_dec(c, v, 1)); }
    // 01246f  push es
    X86_AT(c, 0x1246fu);
    push32(c, c.sreg[0]);
    // 012470  push gs
    X86_AT(c, 0x12470u);
    push32(c, c.sreg[5]);
    // 012472  pop es
    X86_AT(c, 0x12472u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 012473  mov ebp, edi
    X86_AT(c, 0x12473u);
    c.r[5] = c.r[7];
    // 012475  lea edi, [ebp + ebx*4 + 0x3d00]
    X86_AT(c, 0x12475u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[3] * 4 + 0x3D00u);
    // 01247c  lea esi, [edi + 4]
    X86_AT(c, 0x1247cu);
    c.r[6] = (uint32_t)(c.r[7] + 0x4u);
    // 01247f  lea ecx, [ebp + 0x3f00]
    X86_AT(c, 0x1247fu);
    c.r[1] = (uint32_t)(c.r[5] + 0x3F00u);
    // 012485  sub ecx, esi
    X86_AT(c, 0x12485u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[6], 0, 4); }
    // 012487  shr ecx, 2
    X86_AT(c, 0x12487u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 01248a  mov eax, ecx
    X86_AT(c, 0x1248au);
    c.r[0] = c.r[1];
    // 01248c  movsd dword ptr es:[edi], dword ptr gs:[esi]
    X86_AT(c, 0x1248cu);
    x86_string(c, 0, 4, 243, 4, 5);
    // 01248f  mov edi, ebx
    X86_AT(c, 0x1248fu);
    c.r[7] = c.r[3];
    // 012491  shl edi, 5
    X86_AT(c, 0x12491u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[7] = r; }
    // 012494  lea edi, [ebp + edi*1 + 0x1b00]
    X86_AT(c, 0x12494u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[7] + 0x1B00u);
    // 01249b  lea esi, [edi + 0x20]
    X86_AT(c, 0x1249bu);
    c.r[6] = (uint32_t)(c.r[7] + 0x20u);
    // 01249e  lea ecx, [ebp + 0x2b00]
    X86_AT(c, 0x1249eu);
    c.r[1] = (uint32_t)(c.r[5] + 0x2B00u);
    // 0124a4  sub ecx, esi
    X86_AT(c, 0x124a4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0124a6  mov edx, dword ptr gs:[edi + 0xc]
    X86_AT(c, 0x124a6u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[7] + 0xCu)));
    // 0124aa  shr ecx, 2
    X86_AT(c, 0x124aau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0124ad  movsd dword ptr es:[edi], dword ptr gs:[esi]
    X86_AT(c, 0x124adu);
    x86_string(c, 0, 4, 243, 4, 5);
    // 0124b0  test dl, dl
    X86_AT(c, 0x124b0u);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 0124b2  je 0x124bc
    X86_AT(c, 0x124b2u);
    if (x86_cc(c, 4)) { goto L_124bc; }
    X86_TICK(c, 4);
    // 0124b4  xor dl, dl
    X86_AT(c, 0x124b4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ g8(c, 2), 1)); }
    // 0124b6  add edx, 0x100
    X86_AT(c, 0x124b6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x100u, 0, 4); }
L_124bc:
    X86_TICK(c, 17);
    // 0124bc  sub dword ptr gs:[ebp + 0x1a00], edx
    X86_AT(c, 0x124bcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x1A00u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], 0, 4)); }
    // 0124c3  lea edi, [ebp + ebx*4 + 0x3b00]
    X86_AT(c, 0x124c3u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[3] * 4 + 0x3B00u);
    // 0124ca  lea esi, [edi + 4]
    X86_AT(c, 0x124cau);
    c.r[6] = (uint32_t)(c.r[7] + 0x4u);
    // 0124cd  mov ecx, eax
    X86_AT(c, 0x124cdu);
    c.r[1] = c.r[0];
    // 0124cf  mov ebx, dword ptr gs:[edi]
    X86_AT(c, 0x124cfu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[7])));
L_124d2:
    X86_TICK(c, 23);
    // 0124d2  lodsd eax, dword ptr gs:[esi]
    X86_AT(c, 0x124d2u);
    x86_string(c, 3, 4, 0, 4, 5);
    // 0124d4  sub eax, edx
    X86_AT(c, 0x124d4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0124d6  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x124d6u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 0124d7  dec ecx
    X86_AT(c, 0x124d7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 0124d8  jne 0x124d2
    X86_AT(c, 0x124d8u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x124d2u); goto L_124d2; }
    X86_TICK(c, 13);
    // 0124da  lea esi, [ebx + edx*1]
    X86_AT(c, 0x124dau);
    c.r[6] = (uint32_t)(c.r[3] + c.r[2]);
    // 0124dd  mov ecx, 0x10000
    X86_AT(c, 0x124ddu);
    c.r[1] = 0x10000u;
    // 0124e2  sub ecx, esi
    X86_AT(c, 0x124e2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0124e4  call 0x13194
    X86_AT(c, 0x124e4u);
    push32(c, 0x124e9u); f_00013194(c); X86_RET(c, 0x124e9u);
    X86_TICK(c, 40);
    // 0124e9  pop es
    X86_AT(c, 0x124e9u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0124ea  popal 
    X86_AT(c, 0x124eau);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0124eb  xor al, al
    X86_AT(c, 0x124ebu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0124ed  ret 
    X86_AT(c, 0x124edu);
    c.eip = pop32(c); return;
L_1356e:
    X86_TICK(c, 36);
    // 01356e  popal 
    X86_AT(c, 0x1356eu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 01356f  mov al, 9
    X86_AT(c, 0x1356fu);
    s8(c, 0, 0x9u);
    // 013571  ret 
    X86_AT(c, 0x13571u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1243bu, "ran off the end of a function");
}
void f_00012454(X86Cpu& c) {
    X86_TICK(c, 40);
    // 012454  mov byte ptr gs:[edi + 0x19f4], bl
    X86_AT(c, 0x12454u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F4u)), g8(c, 3));
    // 01245b  mov dword ptr gs:[edi + 0x1a00], ebx
    X86_AT(c, 0x1245bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A00u)), c.r[3]);
    // 012462  popal 
    X86_AT(c, 0x12462u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012463  xor al, al
    X86_AT(c, 0x12463u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012465  ret 
    X86_AT(c, 0x12465u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12454u, "ran off the end of a function");
}
void f_0001245b(X86Cpu& c) {
    X86_TICK(c, 38);
    // 01245b  mov dword ptr gs:[edi + 0x1a00], ebx
    X86_AT(c, 0x1245bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[7] + 0x1A00u)), c.r[3]);
    // 012462  popal 
    X86_AT(c, 0x12462u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012463  xor al, al
    X86_AT(c, 0x12463u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012465  ret 
    X86_AT(c, 0x12465u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1245bu, "ran off the end of a function");
}
void f_00012462(X86Cpu& c) {
    X86_TICK(c, 36);
    // 012462  popal 
    X86_AT(c, 0x12462u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012463  xor al, al
    X86_AT(c, 0x12463u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012465  ret 
    X86_AT(c, 0x12465u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12462u, "ran off the end of a function");
}
void f_00012463(X86Cpu& c) {
    X86_TICK(c, 12);
    // 012463  xor al, al
    X86_AT(c, 0x12463u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012465  ret 
    X86_AT(c, 0x12465u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12463u, "ran off the end of a function");
}
void f_00012465(X86Cpu& c) {
    X86_TICK(c, 10);
    // 012465  ret 
    X86_AT(c, 0x12465u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x12465u, "ran off the end of a function");
}
void f_000124f0(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0124f0  test bl, 0x80
    X86_AT(c, 0x124f0u);
    (void)x86_logic(c, g8(c, 3) & 0x80u, 1);
    // 0124f3  jne 0x13557
    X86_AT(c, 0x124f3u);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 7);
    // 0124f9  test ecx, ecx
    X86_AT(c, 0x124f9u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0124fb  je 0x13557
    X86_AT(c, 0x124fbu);
    if (x86_cc(c, 4)) { goto L_13557; }
    X86_TICK(c, 7);
    // 012501  test edx, edx
    X86_AT(c, 0x12501u);
    (void)x86_logic(c, c.r[2] & c.r[2], 4);
    // 012503  je 0x13557
    X86_AT(c, 0x12503u);
    if (x86_cc(c, 4)) { goto L_13557; }
    X86_TICK(c, 7);
    // 012509  cmp edx, 0x4b000
    X86_AT(c, 0x12509u);
    (void)x86_sub(c, c.r[2], 0x4B000u, 0, 4);
    // 01250f  jae 0x13557
    X86_AT(c, 0x1250fu);
    if (x86_cc(c, 3)) { goto L_13557; }
    X86_TICK(c, 40);
    // 012515  pushal 
    X86_AT(c, 0x12515u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 012516  push ds
    X86_AT(c, 0x12516u);
    push32(c, c.sreg[3]);
    // 012517  push es
    X86_AT(c, 0x12517u);
    push32(c, c.sreg[0]);
    // 012518  xor eax, eax
    X86_AT(c, 0x12518u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 01251a  mov byte ptr gs:[edi + 0x19f5], al
    X86_AT(c, 0x1251au);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + 0x19F5u)), g8(c, 0));
    // 012521  movzx ebx, bl
    X86_AT(c, 0x12521u);
    c.r[3] = g8(c, 3);
    // 012524  push ebx
    X86_AT(c, 0x12524u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 012525  push esi
    X86_AT(c, 0x12525u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 012526  sub ecx, ebx
    X86_AT(c, 0x12526u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[3], 0, 4); }
    // 012528  jge 0x1252e
    X86_AT(c, 0x12528u);
    if (x86_cc(c, 13)) { goto L_1252e; }
    X86_TICK(c, 4);
    // 01252a  add ebx, ecx
    X86_AT(c, 0x1252au);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[1], 0, 4); }
    // 01252c  xor ecx, ecx
    X86_AT(c, 0x1252cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
L_1252e:
    X86_TICK(c, 91);
    // 01252e  add esi, ebx
    X86_AT(c, 0x1252eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[3], 0, 4); }
    // 012530  push ecx
    X86_AT(c, 0x12530u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 012531  push esi
    X86_AT(c, 0x12531u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 012532  push gs
    X86_AT(c, 0x12532u);
    push32(c, c.sreg[5]);
    // 012534  pop es
    X86_AT(c, 0x12534u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 012535  mov ebp, edi
    X86_AT(c, 0x12535u);
    c.r[5] = c.r[7];
    // 012537  mov ecx, ebx
    X86_AT(c, 0x12537u);
    c.r[1] = c.r[3];
    // 012539  lea edi, [ebp + 0x3f00]
    X86_AT(c, 0x12539u);
    c.r[7] = (uint32_t)(c.r[5] + 0x3F00u);
    // 01253f  push edi
    X86_AT(c, 0x1253fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 012540  stosb byte ptr es:[edi], al
    X86_AT(c, 0x12540u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 012542  pop edi
    X86_AT(c, 0x12542u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 012543  mov cl, bl
    X86_AT(c, 0x12543u);
    s8(c, 1, g8(c, 3));
    // 012545  mov eax, edx
    X86_AT(c, 0x12545u);
    c.r[0] = c.r[2];
    // 012547  shl eax, 0x1c
    X86_AT(c, 0x12547u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1Cu, 4, w); if (w) c.r[0] = r; }
    // 01254a  shr edx, 4
    X86_AT(c, 0x1254au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[2] = r; }
    // 01254d  mov ebx, 0x4b00
    X86_AT(c, 0x1254du);
    c.r[3] = 0x4B00u;
    // 012552  div ebx
    X86_AT(c, 0x12552u);
    x86_div(c, c.r[3], 4, 0x12552u);
    // 012554  mov ebx, edx
    X86_AT(c, 0x12554u);
    c.r[3] = c.r[2];
    // 012556  mov esi, eax
    X86_AT(c, 0x12556u);
    c.r[6] = c.r[0];
    // 012558  xor eax, eax
    X86_AT(c, 0x12558u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 01255a  mov dx, 0x4e8
    X86_AT(c, 0x1255au);
    s16(c, 2, 0x4E8u);
L_1255e:
    X86_TICK(c, 2);
    // 01255e  add ebx, esi
    X86_AT(c, 0x1255eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[6], 0, 4); }
L_12560:
    X86_TICK(c, 12);
    // 012560  cmp byte ptr gs:[ebp + 0x19f5], 0
    X86_AT(c, 0x12560u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F5u))), 0x0u, 0, 1);
    // 012568  jne 0x12613
    X86_AT(c, 0x12568u);
    if (x86_cc(c, 5)) { goto L_12613; }
    X86_TICK(c, 19);
    // 01256e  in al, dx
    X86_AT(c, 0x1256eu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01256f  test al, 1
    X86_AT(c, 0x1256fu);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 012571  je 0x12560
    X86_AT(c, 0x12571u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x12560u); goto L_12560; }
    X86_TICK(c, 21);
    // 012573  dec edx
    X86_AT(c, 0x12573u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 012574  in al, dx
    X86_AT(c, 0x12574u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 012575  test al, 0x80
    X86_AT(c, 0x12575u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 012577  jne 0x1257b
    X86_AT(c, 0x12577u);
    if (x86_cc(c, 5)) { goto L_1257b; }
    X86_TICK(c, 2);
    // 012579  xor al, 0x7f
    X86_AT(c, 0x12579u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
L_1257b:
    X86_TICK(c, 11);
    // 01257b  mov ch, al
    X86_AT(c, 0x1257bu);
    s8(c, 5, g8(c, 0));
    // 01257d  and ch, 0x7f
    X86_AT(c, 0x1257du);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v & 0x7Fu, 1)); }
    // 012580  cmp ch, cl
    X86_AT(c, 0x12580u);
    (void)x86_sub(c, g8(c, 5), g8(c, 1), 0, 1);
    // 012582  jae 0x125a8
    X86_AT(c, 0x12582u);
    if (x86_cc(c, 3)) { goto L_125a8; }
L_12584:
    X86_TICK(c, 7);
    // 012584  test ebx, 0xf0000000
    X86_AT(c, 0x12584u);
    (void)x86_logic(c, c.r[3] & 0xF0000000u, 4);
    // 01258a  jne 0x12590
    X86_AT(c, 0x1258au);
    if (x86_cc(c, 5)) { goto L_12590; }
    X86_TICK(c, 9);
    // 01258c  inc edx
    X86_AT(c, 0x1258cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01258d  jmp 0x1255e
    X86_AT(c, 0x1258du);
    X86_POLL(c, 0x1255eu); goto L_1255e;
L_12590:
    X86_TICK(c, 18);
    // 012590  sub ebx, 0x10000000
    X86_AT(c, 0x12590u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0x10000000u, 0, 4); }
    // 012596  stosb byte ptr es:[edi], al
    X86_AT(c, 0x12596u);
    x86_string(c, 2, 1, 0, 4, 3);
    // 012597  inc ah
    X86_AT(c, 0x12597u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_inc(c, v, 1)); }
    // 012599  cmp ah, cl
    X86_AT(c, 0x12599u);
    (void)x86_sub(c, g8(c, 4), g8(c, 1), 0, 1);
    // 01259b  jne 0x12584
    X86_AT(c, 0x1259bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x12584u); goto L_12584; }
    X86_TICK(c, 11);
    // 01259d  xor ah, ah
    X86_AT(c, 0x1259du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 01259f  lea edi, [ebp + 0x3f00]
    X86_AT(c, 0x1259fu);
    c.r[7] = (uint32_t)(c.r[5] + 0x3F00u);
    // 0125a5  jmp 0x12584
    X86_AT(c, 0x125a5u);
    X86_POLL(c, 0x12584u); goto L_12584;
L_125a8:
    X86_TICK(c, 21);
    // 0125a8  push ds
    X86_AT(c, 0x125a8u);
    push32(c, c.sreg[3]);
    // 0125a9  pop es
    X86_AT(c, 0x125a9u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0125aa  pop edi
    X86_AT(c, 0x125aau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0125ab  pop ecx
    X86_AT(c, 0x125abu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0125ac  test ecx, ecx
    X86_AT(c, 0x125acu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 0125ae  je 0x125f0
    X86_AT(c, 0x125aeu);
    if (x86_cc(c, 4)) { goto L_125f0; }
L_125b0:
    X86_TICK(c, 7);
    // 0125b0  test ebx, 0xf0000000
    X86_AT(c, 0x125b0u);
    (void)x86_logic(c, c.r[3] & 0xF0000000u, 4);
    // 0125b6  je 0x125c4
    X86_AT(c, 0x125b6u);
    if (x86_cc(c, 4)) { goto L_125c4; }
    X86_TICK(c, 16);
    // 0125b8  sub ebx, 0x10000000
    X86_AT(c, 0x125b8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0x10000000u, 0, 4); }
    // 0125be  stosb byte ptr es:[edi], al
    X86_AT(c, 0x125beu);
    x86_string(c, 2, 1, 0, 4, 3);
    // 0125bf  dec ecx
    X86_AT(c, 0x125bfu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 0125c0  jne 0x125b0
    X86_AT(c, 0x125c0u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x125b0u); goto L_125b0; }
    X86_TICK(c, 7);
    // 0125c2  jmp 0x125f0
    X86_AT(c, 0x125c2u);
    goto L_125f0;
L_125c4:
    X86_TICK(c, 4);
    // 0125c4  inc edx
    X86_AT(c, 0x125c4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0125c5  add ebx, esi
    X86_AT(c, 0x125c5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[6], 0, 4); }
L_125c7:
    X86_TICK(c, 12);
    // 0125c7  cmp byte ptr gs:[ebp + 0x19f5], 0
    X86_AT(c, 0x125c7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x19F5u))), 0x0u, 0, 1);
    // 0125cf  jne 0x12615
    X86_AT(c, 0x125cfu);
    if (x86_cc(c, 5)) { goto L_12615; }
    X86_TICK(c, 19);
    // 0125d1  in al, dx
    X86_AT(c, 0x125d1u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0125d2  test al, 1
    X86_AT(c, 0x125d2u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0125d4  je 0x125c7
    X86_AT(c, 0x125d4u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x125c7u); goto L_125c7; }
    X86_TICK(c, 21);
    // 0125d6  dec edx
    X86_AT(c, 0x125d6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0125d7  in al, dx
    X86_AT(c, 0x125d7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0125d8  test al, 0x80
    X86_AT(c, 0x125d8u);
    (void)x86_logic(c, g8(c, 0) & 0x80u, 1);
    // 0125da  jne 0x125de
    X86_AT(c, 0x125dau);
    if (x86_cc(c, 5)) { goto L_125de; }
    X86_TICK(c, 2);
    // 0125dc  xor al, 0x7f
    X86_AT(c, 0x125dcu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
L_125de:
    X86_TICK(c, 7);
    // 0125de  test ebx, 0xf0000000
    X86_AT(c, 0x125deu);
    (void)x86_logic(c, c.r[3] & 0xF0000000u, 4);
    // 0125e4  je 0x125c4
    X86_AT(c, 0x125e4u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x125c4u); goto L_125c4; }
    X86_TICK(c, 16);
    // 0125e6  sub ebx, 0x10000000
    X86_AT(c, 0x125e6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0x10000000u, 0, 4); }
    // 0125ec  stosb byte ptr es:[edi], al
    X86_AT(c, 0x125ecu);
    x86_string(c, 2, 1, 0, 4, 3);
    // 0125ed  dec ecx
    X86_AT(c, 0x125edu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 0125ee  jne 0x125de
    X86_AT(c, 0x125eeu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x125deu); goto L_125de; }
L_125f0:
    X86_TICK(c, 83);
    // 0125f0  push gs
    X86_AT(c, 0x125f0u);
    push32(c, c.sreg[5]);
    // 0125f2  pop ds
    X86_AT(c, 0x125f2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0125f3  pop edi
    X86_AT(c, 0x125f3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0125f4  pop ebx
    X86_AT(c, 0x125f4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0125f5  mov ecx, ebx
    X86_AT(c, 0x125f5u);
    c.r[1] = c.r[3];
    // 0125f7  sub cl, ah
    X86_AT(c, 0x125f7u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 0125f9  lea esi, [ebp + ecx*1 + 0x3f00]
    X86_AT(c, 0x125f9u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[1] + 0x3F00u);
    // 012600  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x12600u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 012602  lea esi, [ebp + 0x3f00]
    X86_AT(c, 0x12602u);
    c.r[6] = (uint32_t)(c.r[5] + 0x3F00u);
    // 012608  movzx ecx, ah
    X86_AT(c, 0x12608u);
    c.r[1] = g8(c, 4);
    // 01260b  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x1260bu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 01260d  pop es
    X86_AT(c, 0x1260du);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01260e  pop ds
    X86_AT(c, 0x1260eu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 01260f  popal 
    X86_AT(c, 0x1260fu);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 012610  xor al, al
    X86_AT(c, 0x12610u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 012612  ret 
    X86_AT(c, 0x12612u);
    c.eip = pop32(c); return;
L_12613:
    X86_TICK(c, 8);
    // 012613  pop edi
    X86_AT(c, 0x12613u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 012614  pop ecx
    X86_AT(c, 0x12614u);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_12615:
    X86_TICK(c, 52);
    // 012615  pop edi
    X86_AT(c, 0x12615u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 012616  pop ebx
    X86_AT(c, 0x12616u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 012617  pop es
    X86_AT(c, 0x12617u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 012618  pop ds
    X86_AT(c, 0x12618u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 012619  popal 
    X86_AT(c, 0x12619u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 01261a  mov al, 0xc
    X86_AT(c, 0x1261au);
    s8(c, 0, 0xCu);
    // 01261c  ret 
    X86_AT(c, 0x1261cu);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x124f0u, "ran off the end of a function");
}
}
