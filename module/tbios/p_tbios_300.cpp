#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00013391(X86Cpu& c) {
    X86_TICK(c, 20);
    // 013391  pop edx
    X86_AT(c, 0x13391u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13391u, "ran off the end of a function");
}
void f_00013392(X86Cpu& c) {
    X86_TICK(c, 16);
    // 013392  pop eax
    X86_AT(c, 0x13392u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13392u, "ran off the end of a function");
}
void f_00013393(X86Cpu& c) {
    X86_TICK(c, 12);
    // 013393  xor al, al
    X86_AT(c, 0x13393u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13393u, "ran off the end of a function");
}
void f_00013395(X86Cpu& c) {
    X86_TICK(c, 10);
    // 013395  ret 
    X86_AT(c, 0x13395u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13395u, "ran off the end of a function");
}
void f_00013398(X86Cpu& c) {
    X86_TICK(c, 7);
    // 013398  cmp bl, 3
    X86_AT(c, 0x13398u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 01339b  ja 0x1354c
    X86_AT(c, 0x1339bu);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 0133a1  test dx, 0x8080
    X86_AT(c, 0x133a1u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & 0x8080u, 2);
    // 0133a6  jne 0x13557
    X86_AT(c, 0x133a6u);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 15);
    // 0133ac  push eax
    X86_AT(c, 0x133acu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0133ad  push ebx
    X86_AT(c, 0x133adu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0133ae  push edx
    X86_AT(c, 0x133aeu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0133af  xor ah, ah
    X86_AT(c, 0x133afu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 0133b1  test bl, 0x40
    X86_AT(c, 0x133b1u);
    (void)x86_logic(c, g8(c, 3) & 0x40u, 1);
    // 0133b4  jne 0x133b9
    X86_AT(c, 0x133b4u);
    if (x86_cc(c, 5)) { goto L_133b9; }
    X86_TICK(c, 2);
    // 0133b6  add ah, 4
    X86_AT(c, 0x133b6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
L_133b9:
    X86_TICK(c, 21);
    // 0133b9  mov al, bl
    X86_AT(c, 0x133b9u);
    s8(c, 0, g8(c, 3));
    // 0133bb  and al, 7
    X86_AT(c, 0x133bbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x7u, 1)); }
    // 0133bd  shr dh, 1
    X86_AT(c, 0x133bdu);
    { uint32_t v = g8(c, 6); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 6, r); }
    // 0133bf  shr dl, 1
    X86_AT(c, 0x133bfu);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0133c1  mov ebx, edx
    X86_AT(c, 0x133c1u);
    c.r[3] = c.r[2];
    // 0133c3  mov dx, 0x4e3
    X86_AT(c, 0x133c3u);
    s16(c, 2, 0x4E3u);
    // 0133c7  cmp al, 2
    X86_AT(c, 0x133c7u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0133c9  jb 0x133d4
    X86_AT(c, 0x133c9u);
    if (x86_cc(c, 2)) { goto L_133d4; }
    X86_TICK(c, 37);
    // 0133cb  add al, ah
    X86_AT(c, 0x133cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0133cd  out dx, al
    X86_AT(c, 0x133cdu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ce  dec edx
    X86_AT(c, 0x133ceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133cf  mov al, bh
    X86_AT(c, 0x133cfu);
    s8(c, 0, g8(c, 7));
    // 0133d1  out dx, al
    X86_AT(c, 0x133d1u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133d2  jmp 0x133ea
    X86_AT(c, 0x133d2u);
    goto L_133ea;
L_133d4:
    X86_TICK(c, 7);
    // 0133d4  test al, al
    X86_AT(c, 0x133d4u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0133d6  jne 0x133da
    X86_AT(c, 0x133d6u);
    if (x86_cc(c, 5)) { goto L_133da; }
    X86_TICK(c, 2);
    // 0133d8  mov dl, 0xe1
    X86_AT(c, 0x133d8u);
    s8(c, 2, 0xE1u);
L_133da:
    X86_TICK(c, 64);
    // 0133da  mov al, ah
    X86_AT(c, 0x133dau);
    s8(c, 0, g8(c, 4));
    // 0133dc  out dx, al
    X86_AT(c, 0x133dcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133dd  dec edx
    X86_AT(c, 0x133ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_133ea:
    X86_TICK(c, 24);
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
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
    x86_fault(c, 0x13398u, "ran off the end of a function");
}
void f_0001339b(X86Cpu& c) {
    X86_TICK(c, 5);
    // 01339b  ja 0x1354c
    X86_AT(c, 0x1339bu);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 7);
    // 0133a1  test dx, 0x8080
    X86_AT(c, 0x133a1u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & 0x8080u, 2);
    // 0133a6  jne 0x13557
    X86_AT(c, 0x133a6u);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 15);
    // 0133ac  push eax
    X86_AT(c, 0x133acu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0133ad  push ebx
    X86_AT(c, 0x133adu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0133ae  push edx
    X86_AT(c, 0x133aeu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0133af  xor ah, ah
    X86_AT(c, 0x133afu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 0133b1  test bl, 0x40
    X86_AT(c, 0x133b1u);
    (void)x86_logic(c, g8(c, 3) & 0x40u, 1);
    // 0133b4  jne 0x133b9
    X86_AT(c, 0x133b4u);
    if (x86_cc(c, 5)) { goto L_133b9; }
    X86_TICK(c, 2);
    // 0133b6  add ah, 4
    X86_AT(c, 0x133b6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
L_133b9:
    X86_TICK(c, 21);
    // 0133b9  mov al, bl
    X86_AT(c, 0x133b9u);
    s8(c, 0, g8(c, 3));
    // 0133bb  and al, 7
    X86_AT(c, 0x133bbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x7u, 1)); }
    // 0133bd  shr dh, 1
    X86_AT(c, 0x133bdu);
    { uint32_t v = g8(c, 6); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 6, r); }
    // 0133bf  shr dl, 1
    X86_AT(c, 0x133bfu);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0133c1  mov ebx, edx
    X86_AT(c, 0x133c1u);
    c.r[3] = c.r[2];
    // 0133c3  mov dx, 0x4e3
    X86_AT(c, 0x133c3u);
    s16(c, 2, 0x4E3u);
    // 0133c7  cmp al, 2
    X86_AT(c, 0x133c7u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0133c9  jb 0x133d4
    X86_AT(c, 0x133c9u);
    if (x86_cc(c, 2)) { goto L_133d4; }
    X86_TICK(c, 37);
    // 0133cb  add al, ah
    X86_AT(c, 0x133cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0133cd  out dx, al
    X86_AT(c, 0x133cdu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ce  dec edx
    X86_AT(c, 0x133ceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133cf  mov al, bh
    X86_AT(c, 0x133cfu);
    s8(c, 0, g8(c, 7));
    // 0133d1  out dx, al
    X86_AT(c, 0x133d1u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133d2  jmp 0x133ea
    X86_AT(c, 0x133d2u);
    goto L_133ea;
L_133d4:
    X86_TICK(c, 7);
    // 0133d4  test al, al
    X86_AT(c, 0x133d4u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0133d6  jne 0x133da
    X86_AT(c, 0x133d6u);
    if (x86_cc(c, 5)) { goto L_133da; }
    X86_TICK(c, 2);
    // 0133d8  mov dl, 0xe1
    X86_AT(c, 0x133d8u);
    s8(c, 2, 0xE1u);
L_133da:
    X86_TICK(c, 64);
    // 0133da  mov al, ah
    X86_AT(c, 0x133dau);
    s8(c, 0, g8(c, 4));
    // 0133dc  out dx, al
    X86_AT(c, 0x133dcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133dd  dec edx
    X86_AT(c, 0x133ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_133ea:
    X86_TICK(c, 24);
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
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
    x86_fault(c, 0x1339bu, "ran off the end of a function");
}
void f_000133a1(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0133a1  test dx, 0x8080
    X86_AT(c, 0x133a1u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & 0x8080u, 2);
    // 0133a6  jne 0x13557
    X86_AT(c, 0x133a6u);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 15);
    // 0133ac  push eax
    X86_AT(c, 0x133acu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0133ad  push ebx
    X86_AT(c, 0x133adu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0133ae  push edx
    X86_AT(c, 0x133aeu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0133af  xor ah, ah
    X86_AT(c, 0x133afu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 0133b1  test bl, 0x40
    X86_AT(c, 0x133b1u);
    (void)x86_logic(c, g8(c, 3) & 0x40u, 1);
    // 0133b4  jne 0x133b9
    X86_AT(c, 0x133b4u);
    if (x86_cc(c, 5)) { goto L_133b9; }
    X86_TICK(c, 2);
    // 0133b6  add ah, 4
    X86_AT(c, 0x133b6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
L_133b9:
    X86_TICK(c, 21);
    // 0133b9  mov al, bl
    X86_AT(c, 0x133b9u);
    s8(c, 0, g8(c, 3));
    // 0133bb  and al, 7
    X86_AT(c, 0x133bbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x7u, 1)); }
    // 0133bd  shr dh, 1
    X86_AT(c, 0x133bdu);
    { uint32_t v = g8(c, 6); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 6, r); }
    // 0133bf  shr dl, 1
    X86_AT(c, 0x133bfu);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0133c1  mov ebx, edx
    X86_AT(c, 0x133c1u);
    c.r[3] = c.r[2];
    // 0133c3  mov dx, 0x4e3
    X86_AT(c, 0x133c3u);
    s16(c, 2, 0x4E3u);
    // 0133c7  cmp al, 2
    X86_AT(c, 0x133c7u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0133c9  jb 0x133d4
    X86_AT(c, 0x133c9u);
    if (x86_cc(c, 2)) { goto L_133d4; }
    X86_TICK(c, 37);
    // 0133cb  add al, ah
    X86_AT(c, 0x133cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0133cd  out dx, al
    X86_AT(c, 0x133cdu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ce  dec edx
    X86_AT(c, 0x133ceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133cf  mov al, bh
    X86_AT(c, 0x133cfu);
    s8(c, 0, g8(c, 7));
    // 0133d1  out dx, al
    X86_AT(c, 0x133d1u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133d2  jmp 0x133ea
    X86_AT(c, 0x133d2u);
    goto L_133ea;
L_133d4:
    X86_TICK(c, 7);
    // 0133d4  test al, al
    X86_AT(c, 0x133d4u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0133d6  jne 0x133da
    X86_AT(c, 0x133d6u);
    if (x86_cc(c, 5)) { goto L_133da; }
    X86_TICK(c, 2);
    // 0133d8  mov dl, 0xe1
    X86_AT(c, 0x133d8u);
    s8(c, 2, 0xE1u);
L_133da:
    X86_TICK(c, 64);
    // 0133da  mov al, ah
    X86_AT(c, 0x133dau);
    s8(c, 0, g8(c, 4));
    // 0133dc  out dx, al
    X86_AT(c, 0x133dcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133dd  dec edx
    X86_AT(c, 0x133ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_133ea:
    X86_TICK(c, 24);
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133a1u, "ran off the end of a function");
}
void f_000133a6(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0133a6  jne 0x13557
    X86_AT(c, 0x133a6u);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 15);
    // 0133ac  push eax
    X86_AT(c, 0x133acu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0133ad  push ebx
    X86_AT(c, 0x133adu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0133ae  push edx
    X86_AT(c, 0x133aeu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0133af  xor ah, ah
    X86_AT(c, 0x133afu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 0133b1  test bl, 0x40
    X86_AT(c, 0x133b1u);
    (void)x86_logic(c, g8(c, 3) & 0x40u, 1);
    // 0133b4  jne 0x133b9
    X86_AT(c, 0x133b4u);
    if (x86_cc(c, 5)) { goto L_133b9; }
    X86_TICK(c, 2);
    // 0133b6  add ah, 4
    X86_AT(c, 0x133b6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
L_133b9:
    X86_TICK(c, 21);
    // 0133b9  mov al, bl
    X86_AT(c, 0x133b9u);
    s8(c, 0, g8(c, 3));
    // 0133bb  and al, 7
    X86_AT(c, 0x133bbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x7u, 1)); }
    // 0133bd  shr dh, 1
    X86_AT(c, 0x133bdu);
    { uint32_t v = g8(c, 6); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 6, r); }
    // 0133bf  shr dl, 1
    X86_AT(c, 0x133bfu);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0133c1  mov ebx, edx
    X86_AT(c, 0x133c1u);
    c.r[3] = c.r[2];
    // 0133c3  mov dx, 0x4e3
    X86_AT(c, 0x133c3u);
    s16(c, 2, 0x4E3u);
    // 0133c7  cmp al, 2
    X86_AT(c, 0x133c7u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0133c9  jb 0x133d4
    X86_AT(c, 0x133c9u);
    if (x86_cc(c, 2)) { goto L_133d4; }
    X86_TICK(c, 37);
    // 0133cb  add al, ah
    X86_AT(c, 0x133cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0133cd  out dx, al
    X86_AT(c, 0x133cdu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ce  dec edx
    X86_AT(c, 0x133ceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133cf  mov al, bh
    X86_AT(c, 0x133cfu);
    s8(c, 0, g8(c, 7));
    // 0133d1  out dx, al
    X86_AT(c, 0x133d1u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133d2  jmp 0x133ea
    X86_AT(c, 0x133d2u);
    goto L_133ea;
L_133d4:
    X86_TICK(c, 7);
    // 0133d4  test al, al
    X86_AT(c, 0x133d4u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0133d6  jne 0x133da
    X86_AT(c, 0x133d6u);
    if (x86_cc(c, 5)) { goto L_133da; }
    X86_TICK(c, 2);
    // 0133d8  mov dl, 0xe1
    X86_AT(c, 0x133d8u);
    s8(c, 2, 0xE1u);
L_133da:
    X86_TICK(c, 64);
    // 0133da  mov al, ah
    X86_AT(c, 0x133dau);
    s8(c, 0, g8(c, 4));
    // 0133dc  out dx, al
    X86_AT(c, 0x133dcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133dd  dec edx
    X86_AT(c, 0x133ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_133ea:
    X86_TICK(c, 24);
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133a6u, "ran off the end of a function");
}
void f_000133ac(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0133ac  push eax
    X86_AT(c, 0x133acu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0133ad  push ebx
    X86_AT(c, 0x133adu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0133ae  push edx
    X86_AT(c, 0x133aeu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0133af  xor ah, ah
    X86_AT(c, 0x133afu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 0133b1  test bl, 0x40
    X86_AT(c, 0x133b1u);
    (void)x86_logic(c, g8(c, 3) & 0x40u, 1);
    // 0133b4  jne 0x133b9
    X86_AT(c, 0x133b4u);
    if (x86_cc(c, 5)) { goto L_133b9; }
    X86_TICK(c, 2);
    // 0133b6  add ah, 4
    X86_AT(c, 0x133b6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
L_133b9:
    X86_TICK(c, 21);
    // 0133b9  mov al, bl
    X86_AT(c, 0x133b9u);
    s8(c, 0, g8(c, 3));
    // 0133bb  and al, 7
    X86_AT(c, 0x133bbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x7u, 1)); }
    // 0133bd  shr dh, 1
    X86_AT(c, 0x133bdu);
    { uint32_t v = g8(c, 6); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 6, r); }
    // 0133bf  shr dl, 1
    X86_AT(c, 0x133bfu);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0133c1  mov ebx, edx
    X86_AT(c, 0x133c1u);
    c.r[3] = c.r[2];
    // 0133c3  mov dx, 0x4e3
    X86_AT(c, 0x133c3u);
    s16(c, 2, 0x4E3u);
    // 0133c7  cmp al, 2
    X86_AT(c, 0x133c7u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0133c9  jb 0x133d4
    X86_AT(c, 0x133c9u);
    if (x86_cc(c, 2)) { goto L_133d4; }
    X86_TICK(c, 37);
    // 0133cb  add al, ah
    X86_AT(c, 0x133cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0133cd  out dx, al
    X86_AT(c, 0x133cdu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ce  dec edx
    X86_AT(c, 0x133ceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133cf  mov al, bh
    X86_AT(c, 0x133cfu);
    s8(c, 0, g8(c, 7));
    // 0133d1  out dx, al
    X86_AT(c, 0x133d1u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133d2  jmp 0x133ea
    X86_AT(c, 0x133d2u);
    goto L_133ea;
L_133d4:
    X86_TICK(c, 7);
    // 0133d4  test al, al
    X86_AT(c, 0x133d4u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0133d6  jne 0x133da
    X86_AT(c, 0x133d6u);
    if (x86_cc(c, 5)) { goto L_133da; }
    X86_TICK(c, 2);
    // 0133d8  mov dl, 0xe1
    X86_AT(c, 0x133d8u);
    s8(c, 2, 0xE1u);
L_133da:
    X86_TICK(c, 64);
    // 0133da  mov al, ah
    X86_AT(c, 0x133dau);
    s8(c, 0, g8(c, 4));
    // 0133dc  out dx, al
    X86_AT(c, 0x133dcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133dd  dec edx
    X86_AT(c, 0x133ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_133ea:
    X86_TICK(c, 24);
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133acu, "ran off the end of a function");
}
void f_000133ad(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0133ad  push ebx
    X86_AT(c, 0x133adu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0133ae  push edx
    X86_AT(c, 0x133aeu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0133af  xor ah, ah
    X86_AT(c, 0x133afu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 0133b1  test bl, 0x40
    X86_AT(c, 0x133b1u);
    (void)x86_logic(c, g8(c, 3) & 0x40u, 1);
    // 0133b4  jne 0x133b9
    X86_AT(c, 0x133b4u);
    if (x86_cc(c, 5)) { goto L_133b9; }
    X86_TICK(c, 2);
    // 0133b6  add ah, 4
    X86_AT(c, 0x133b6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
L_133b9:
    X86_TICK(c, 21);
    // 0133b9  mov al, bl
    X86_AT(c, 0x133b9u);
    s8(c, 0, g8(c, 3));
    // 0133bb  and al, 7
    X86_AT(c, 0x133bbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x7u, 1)); }
    // 0133bd  shr dh, 1
    X86_AT(c, 0x133bdu);
    { uint32_t v = g8(c, 6); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 6, r); }
    // 0133bf  shr dl, 1
    X86_AT(c, 0x133bfu);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0133c1  mov ebx, edx
    X86_AT(c, 0x133c1u);
    c.r[3] = c.r[2];
    // 0133c3  mov dx, 0x4e3
    X86_AT(c, 0x133c3u);
    s16(c, 2, 0x4E3u);
    // 0133c7  cmp al, 2
    X86_AT(c, 0x133c7u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0133c9  jb 0x133d4
    X86_AT(c, 0x133c9u);
    if (x86_cc(c, 2)) { goto L_133d4; }
    X86_TICK(c, 37);
    // 0133cb  add al, ah
    X86_AT(c, 0x133cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0133cd  out dx, al
    X86_AT(c, 0x133cdu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ce  dec edx
    X86_AT(c, 0x133ceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133cf  mov al, bh
    X86_AT(c, 0x133cfu);
    s8(c, 0, g8(c, 7));
    // 0133d1  out dx, al
    X86_AT(c, 0x133d1u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133d2  jmp 0x133ea
    X86_AT(c, 0x133d2u);
    goto L_133ea;
L_133d4:
    X86_TICK(c, 7);
    // 0133d4  test al, al
    X86_AT(c, 0x133d4u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0133d6  jne 0x133da
    X86_AT(c, 0x133d6u);
    if (x86_cc(c, 5)) { goto L_133da; }
    X86_TICK(c, 2);
    // 0133d8  mov dl, 0xe1
    X86_AT(c, 0x133d8u);
    s8(c, 2, 0xE1u);
L_133da:
    X86_TICK(c, 64);
    // 0133da  mov al, ah
    X86_AT(c, 0x133dau);
    s8(c, 0, g8(c, 4));
    // 0133dc  out dx, al
    X86_AT(c, 0x133dcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133dd  dec edx
    X86_AT(c, 0x133ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_133ea:
    X86_TICK(c, 24);
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133adu, "ran off the end of a function");
}
void f_000133ae(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0133ae  push edx
    X86_AT(c, 0x133aeu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0133af  xor ah, ah
    X86_AT(c, 0x133afu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 0133b1  test bl, 0x40
    X86_AT(c, 0x133b1u);
    (void)x86_logic(c, g8(c, 3) & 0x40u, 1);
    // 0133b4  jne 0x133b9
    X86_AT(c, 0x133b4u);
    if (x86_cc(c, 5)) { goto L_133b9; }
    X86_TICK(c, 2);
    // 0133b6  add ah, 4
    X86_AT(c, 0x133b6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
L_133b9:
    X86_TICK(c, 21);
    // 0133b9  mov al, bl
    X86_AT(c, 0x133b9u);
    s8(c, 0, g8(c, 3));
    // 0133bb  and al, 7
    X86_AT(c, 0x133bbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x7u, 1)); }
    // 0133bd  shr dh, 1
    X86_AT(c, 0x133bdu);
    { uint32_t v = g8(c, 6); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 6, r); }
    // 0133bf  shr dl, 1
    X86_AT(c, 0x133bfu);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0133c1  mov ebx, edx
    X86_AT(c, 0x133c1u);
    c.r[3] = c.r[2];
    // 0133c3  mov dx, 0x4e3
    X86_AT(c, 0x133c3u);
    s16(c, 2, 0x4E3u);
    // 0133c7  cmp al, 2
    X86_AT(c, 0x133c7u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0133c9  jb 0x133d4
    X86_AT(c, 0x133c9u);
    if (x86_cc(c, 2)) { goto L_133d4; }
    X86_TICK(c, 37);
    // 0133cb  add al, ah
    X86_AT(c, 0x133cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0133cd  out dx, al
    X86_AT(c, 0x133cdu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ce  dec edx
    X86_AT(c, 0x133ceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133cf  mov al, bh
    X86_AT(c, 0x133cfu);
    s8(c, 0, g8(c, 7));
    // 0133d1  out dx, al
    X86_AT(c, 0x133d1u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133d2  jmp 0x133ea
    X86_AT(c, 0x133d2u);
    goto L_133ea;
L_133d4:
    X86_TICK(c, 7);
    // 0133d4  test al, al
    X86_AT(c, 0x133d4u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0133d6  jne 0x133da
    X86_AT(c, 0x133d6u);
    if (x86_cc(c, 5)) { goto L_133da; }
    X86_TICK(c, 2);
    // 0133d8  mov dl, 0xe1
    X86_AT(c, 0x133d8u);
    s8(c, 2, 0xE1u);
L_133da:
    X86_TICK(c, 64);
    // 0133da  mov al, ah
    X86_AT(c, 0x133dau);
    s8(c, 0, g8(c, 4));
    // 0133dc  out dx, al
    X86_AT(c, 0x133dcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133dd  dec edx
    X86_AT(c, 0x133ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_133ea:
    X86_TICK(c, 24);
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133aeu, "ran off the end of a function");
}
void f_000133af(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0133af  xor ah, ah
    X86_AT(c, 0x133afu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 0133b1  test bl, 0x40
    X86_AT(c, 0x133b1u);
    (void)x86_logic(c, g8(c, 3) & 0x40u, 1);
    // 0133b4  jne 0x133b9
    X86_AT(c, 0x133b4u);
    if (x86_cc(c, 5)) { goto L_133b9; }
    X86_TICK(c, 2);
    // 0133b6  add ah, 4
    X86_AT(c, 0x133b6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
L_133b9:
    X86_TICK(c, 21);
    // 0133b9  mov al, bl
    X86_AT(c, 0x133b9u);
    s8(c, 0, g8(c, 3));
    // 0133bb  and al, 7
    X86_AT(c, 0x133bbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x7u, 1)); }
    // 0133bd  shr dh, 1
    X86_AT(c, 0x133bdu);
    { uint32_t v = g8(c, 6); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 6, r); }
    // 0133bf  shr dl, 1
    X86_AT(c, 0x133bfu);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0133c1  mov ebx, edx
    X86_AT(c, 0x133c1u);
    c.r[3] = c.r[2];
    // 0133c3  mov dx, 0x4e3
    X86_AT(c, 0x133c3u);
    s16(c, 2, 0x4E3u);
    // 0133c7  cmp al, 2
    X86_AT(c, 0x133c7u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0133c9  jb 0x133d4
    X86_AT(c, 0x133c9u);
    if (x86_cc(c, 2)) { goto L_133d4; }
    X86_TICK(c, 37);
    // 0133cb  add al, ah
    X86_AT(c, 0x133cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0133cd  out dx, al
    X86_AT(c, 0x133cdu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ce  dec edx
    X86_AT(c, 0x133ceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133cf  mov al, bh
    X86_AT(c, 0x133cfu);
    s8(c, 0, g8(c, 7));
    // 0133d1  out dx, al
    X86_AT(c, 0x133d1u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133d2  jmp 0x133ea
    X86_AT(c, 0x133d2u);
    goto L_133ea;
L_133d4:
    X86_TICK(c, 7);
    // 0133d4  test al, al
    X86_AT(c, 0x133d4u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0133d6  jne 0x133da
    X86_AT(c, 0x133d6u);
    if (x86_cc(c, 5)) { goto L_133da; }
    X86_TICK(c, 2);
    // 0133d8  mov dl, 0xe1
    X86_AT(c, 0x133d8u);
    s8(c, 2, 0xE1u);
L_133da:
    X86_TICK(c, 64);
    // 0133da  mov al, ah
    X86_AT(c, 0x133dau);
    s8(c, 0, g8(c, 4));
    // 0133dc  out dx, al
    X86_AT(c, 0x133dcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133dd  dec edx
    X86_AT(c, 0x133ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_133ea:
    X86_TICK(c, 24);
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133afu, "ran off the end of a function");
}
void f_000133b1(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0133b1  test bl, 0x40
    X86_AT(c, 0x133b1u);
    (void)x86_logic(c, g8(c, 3) & 0x40u, 1);
    // 0133b4  jne 0x133b9
    X86_AT(c, 0x133b4u);
    if (x86_cc(c, 5)) { goto L_133b9; }
    X86_TICK(c, 2);
    // 0133b6  add ah, 4
    X86_AT(c, 0x133b6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
L_133b9:
    X86_TICK(c, 21);
    // 0133b9  mov al, bl
    X86_AT(c, 0x133b9u);
    s8(c, 0, g8(c, 3));
    // 0133bb  and al, 7
    X86_AT(c, 0x133bbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x7u, 1)); }
    // 0133bd  shr dh, 1
    X86_AT(c, 0x133bdu);
    { uint32_t v = g8(c, 6); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 6, r); }
    // 0133bf  shr dl, 1
    X86_AT(c, 0x133bfu);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0133c1  mov ebx, edx
    X86_AT(c, 0x133c1u);
    c.r[3] = c.r[2];
    // 0133c3  mov dx, 0x4e3
    X86_AT(c, 0x133c3u);
    s16(c, 2, 0x4E3u);
    // 0133c7  cmp al, 2
    X86_AT(c, 0x133c7u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0133c9  jb 0x133d4
    X86_AT(c, 0x133c9u);
    if (x86_cc(c, 2)) { goto L_133d4; }
    X86_TICK(c, 37);
    // 0133cb  add al, ah
    X86_AT(c, 0x133cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0133cd  out dx, al
    X86_AT(c, 0x133cdu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ce  dec edx
    X86_AT(c, 0x133ceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133cf  mov al, bh
    X86_AT(c, 0x133cfu);
    s8(c, 0, g8(c, 7));
    // 0133d1  out dx, al
    X86_AT(c, 0x133d1u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133d2  jmp 0x133ea
    X86_AT(c, 0x133d2u);
    goto L_133ea;
L_133d4:
    X86_TICK(c, 7);
    // 0133d4  test al, al
    X86_AT(c, 0x133d4u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0133d6  jne 0x133da
    X86_AT(c, 0x133d6u);
    if (x86_cc(c, 5)) { goto L_133da; }
    X86_TICK(c, 2);
    // 0133d8  mov dl, 0xe1
    X86_AT(c, 0x133d8u);
    s8(c, 2, 0xE1u);
L_133da:
    X86_TICK(c, 64);
    // 0133da  mov al, ah
    X86_AT(c, 0x133dau);
    s8(c, 0, g8(c, 4));
    // 0133dc  out dx, al
    X86_AT(c, 0x133dcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133dd  dec edx
    X86_AT(c, 0x133ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_133ea:
    X86_TICK(c, 24);
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133b1u, "ran off the end of a function");
}
void f_000133b4(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0133b4  jne 0x133b9
    X86_AT(c, 0x133b4u);
    if (x86_cc(c, 5)) { goto L_133b9; }
    X86_TICK(c, 2);
    // 0133b6  add ah, 4
    X86_AT(c, 0x133b6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
L_133b9:
    X86_TICK(c, 21);
    // 0133b9  mov al, bl
    X86_AT(c, 0x133b9u);
    s8(c, 0, g8(c, 3));
    // 0133bb  and al, 7
    X86_AT(c, 0x133bbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x7u, 1)); }
    // 0133bd  shr dh, 1
    X86_AT(c, 0x133bdu);
    { uint32_t v = g8(c, 6); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 6, r); }
    // 0133bf  shr dl, 1
    X86_AT(c, 0x133bfu);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0133c1  mov ebx, edx
    X86_AT(c, 0x133c1u);
    c.r[3] = c.r[2];
    // 0133c3  mov dx, 0x4e3
    X86_AT(c, 0x133c3u);
    s16(c, 2, 0x4E3u);
    // 0133c7  cmp al, 2
    X86_AT(c, 0x133c7u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0133c9  jb 0x133d4
    X86_AT(c, 0x133c9u);
    if (x86_cc(c, 2)) { goto L_133d4; }
    X86_TICK(c, 37);
    // 0133cb  add al, ah
    X86_AT(c, 0x133cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0133cd  out dx, al
    X86_AT(c, 0x133cdu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ce  dec edx
    X86_AT(c, 0x133ceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133cf  mov al, bh
    X86_AT(c, 0x133cfu);
    s8(c, 0, g8(c, 7));
    // 0133d1  out dx, al
    X86_AT(c, 0x133d1u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133d2  jmp 0x133ea
    X86_AT(c, 0x133d2u);
    goto L_133ea;
L_133d4:
    X86_TICK(c, 7);
    // 0133d4  test al, al
    X86_AT(c, 0x133d4u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0133d6  jne 0x133da
    X86_AT(c, 0x133d6u);
    if (x86_cc(c, 5)) { goto L_133da; }
    X86_TICK(c, 2);
    // 0133d8  mov dl, 0xe1
    X86_AT(c, 0x133d8u);
    s8(c, 2, 0xE1u);
L_133da:
    X86_TICK(c, 64);
    // 0133da  mov al, ah
    X86_AT(c, 0x133dau);
    s8(c, 0, g8(c, 4));
    // 0133dc  out dx, al
    X86_AT(c, 0x133dcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133dd  dec edx
    X86_AT(c, 0x133ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_133ea:
    X86_TICK(c, 24);
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133b4u, "ran off the end of a function");
}
void f_000133b6(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0133b6  add ah, 4
    X86_AT(c, 0x133b6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0133b9  mov al, bl
    X86_AT(c, 0x133b9u);
    s8(c, 0, g8(c, 3));
    // 0133bb  and al, 7
    X86_AT(c, 0x133bbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x7u, 1)); }
    // 0133bd  shr dh, 1
    X86_AT(c, 0x133bdu);
    { uint32_t v = g8(c, 6); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 6, r); }
    // 0133bf  shr dl, 1
    X86_AT(c, 0x133bfu);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0133c1  mov ebx, edx
    X86_AT(c, 0x133c1u);
    c.r[3] = c.r[2];
    // 0133c3  mov dx, 0x4e3
    X86_AT(c, 0x133c3u);
    s16(c, 2, 0x4E3u);
    // 0133c7  cmp al, 2
    X86_AT(c, 0x133c7u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0133c9  jb 0x133d4
    X86_AT(c, 0x133c9u);
    if (x86_cc(c, 2)) { goto L_133d4; }
    X86_TICK(c, 37);
    // 0133cb  add al, ah
    X86_AT(c, 0x133cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0133cd  out dx, al
    X86_AT(c, 0x133cdu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ce  dec edx
    X86_AT(c, 0x133ceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133cf  mov al, bh
    X86_AT(c, 0x133cfu);
    s8(c, 0, g8(c, 7));
    // 0133d1  out dx, al
    X86_AT(c, 0x133d1u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133d2  jmp 0x133ea
    X86_AT(c, 0x133d2u);
    goto L_133ea;
L_133d4:
    X86_TICK(c, 7);
    // 0133d4  test al, al
    X86_AT(c, 0x133d4u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0133d6  jne 0x133da
    X86_AT(c, 0x133d6u);
    if (x86_cc(c, 5)) { goto L_133da; }
    X86_TICK(c, 2);
    // 0133d8  mov dl, 0xe1
    X86_AT(c, 0x133d8u);
    s8(c, 2, 0xE1u);
L_133da:
    X86_TICK(c, 64);
    // 0133da  mov al, ah
    X86_AT(c, 0x133dau);
    s8(c, 0, g8(c, 4));
    // 0133dc  out dx, al
    X86_AT(c, 0x133dcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133dd  dec edx
    X86_AT(c, 0x133ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_133ea:
    X86_TICK(c, 24);
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133b6u, "ran off the end of a function");
}
void f_000133b9(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0133b9  mov al, bl
    X86_AT(c, 0x133b9u);
    s8(c, 0, g8(c, 3));
    // 0133bb  and al, 7
    X86_AT(c, 0x133bbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x7u, 1)); }
    // 0133bd  shr dh, 1
    X86_AT(c, 0x133bdu);
    { uint32_t v = g8(c, 6); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 6, r); }
    // 0133bf  shr dl, 1
    X86_AT(c, 0x133bfu);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0133c1  mov ebx, edx
    X86_AT(c, 0x133c1u);
    c.r[3] = c.r[2];
    // 0133c3  mov dx, 0x4e3
    X86_AT(c, 0x133c3u);
    s16(c, 2, 0x4E3u);
    // 0133c7  cmp al, 2
    X86_AT(c, 0x133c7u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0133c9  jb 0x133d4
    X86_AT(c, 0x133c9u);
    if (x86_cc(c, 2)) { goto L_133d4; }
    X86_TICK(c, 37);
    // 0133cb  add al, ah
    X86_AT(c, 0x133cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0133cd  out dx, al
    X86_AT(c, 0x133cdu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ce  dec edx
    X86_AT(c, 0x133ceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133cf  mov al, bh
    X86_AT(c, 0x133cfu);
    s8(c, 0, g8(c, 7));
    // 0133d1  out dx, al
    X86_AT(c, 0x133d1u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133d2  jmp 0x133ea
    X86_AT(c, 0x133d2u);
    goto L_133ea;
L_133d4:
    X86_TICK(c, 7);
    // 0133d4  test al, al
    X86_AT(c, 0x133d4u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0133d6  jne 0x133da
    X86_AT(c, 0x133d6u);
    if (x86_cc(c, 5)) { goto L_133da; }
    X86_TICK(c, 2);
    // 0133d8  mov dl, 0xe1
    X86_AT(c, 0x133d8u);
    s8(c, 2, 0xE1u);
L_133da:
    X86_TICK(c, 64);
    // 0133da  mov al, ah
    X86_AT(c, 0x133dau);
    s8(c, 0, g8(c, 4));
    // 0133dc  out dx, al
    X86_AT(c, 0x133dcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133dd  dec edx
    X86_AT(c, 0x133ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_133ea:
    X86_TICK(c, 24);
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133b9u, "ran off the end of a function");
}
void f_000133bb(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0133bb  and al, 7
    X86_AT(c, 0x133bbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x7u, 1)); }
    // 0133bd  shr dh, 1
    X86_AT(c, 0x133bdu);
    { uint32_t v = g8(c, 6); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 6, r); }
    // 0133bf  shr dl, 1
    X86_AT(c, 0x133bfu);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0133c1  mov ebx, edx
    X86_AT(c, 0x133c1u);
    c.r[3] = c.r[2];
    // 0133c3  mov dx, 0x4e3
    X86_AT(c, 0x133c3u);
    s16(c, 2, 0x4E3u);
    // 0133c7  cmp al, 2
    X86_AT(c, 0x133c7u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0133c9  jb 0x133d4
    X86_AT(c, 0x133c9u);
    if (x86_cc(c, 2)) { goto L_133d4; }
    X86_TICK(c, 37);
    // 0133cb  add al, ah
    X86_AT(c, 0x133cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0133cd  out dx, al
    X86_AT(c, 0x133cdu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ce  dec edx
    X86_AT(c, 0x133ceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133cf  mov al, bh
    X86_AT(c, 0x133cfu);
    s8(c, 0, g8(c, 7));
    // 0133d1  out dx, al
    X86_AT(c, 0x133d1u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133d2  jmp 0x133ea
    X86_AT(c, 0x133d2u);
    goto L_133ea;
L_133d4:
    X86_TICK(c, 7);
    // 0133d4  test al, al
    X86_AT(c, 0x133d4u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0133d6  jne 0x133da
    X86_AT(c, 0x133d6u);
    if (x86_cc(c, 5)) { goto L_133da; }
    X86_TICK(c, 2);
    // 0133d8  mov dl, 0xe1
    X86_AT(c, 0x133d8u);
    s8(c, 2, 0xE1u);
L_133da:
    X86_TICK(c, 64);
    // 0133da  mov al, ah
    X86_AT(c, 0x133dau);
    s8(c, 0, g8(c, 4));
    // 0133dc  out dx, al
    X86_AT(c, 0x133dcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133dd  dec edx
    X86_AT(c, 0x133ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_133ea:
    X86_TICK(c, 24);
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133bbu, "ran off the end of a function");
}
void f_000133bd(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0133bd  shr dh, 1
    X86_AT(c, 0x133bdu);
    { uint32_t v = g8(c, 6); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 6, r); }
    // 0133bf  shr dl, 1
    X86_AT(c, 0x133bfu);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0133c1  mov ebx, edx
    X86_AT(c, 0x133c1u);
    c.r[3] = c.r[2];
    // 0133c3  mov dx, 0x4e3
    X86_AT(c, 0x133c3u);
    s16(c, 2, 0x4E3u);
    // 0133c7  cmp al, 2
    X86_AT(c, 0x133c7u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0133c9  jb 0x133d4
    X86_AT(c, 0x133c9u);
    if (x86_cc(c, 2)) { goto L_133d4; }
    X86_TICK(c, 37);
    // 0133cb  add al, ah
    X86_AT(c, 0x133cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0133cd  out dx, al
    X86_AT(c, 0x133cdu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ce  dec edx
    X86_AT(c, 0x133ceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133cf  mov al, bh
    X86_AT(c, 0x133cfu);
    s8(c, 0, g8(c, 7));
    // 0133d1  out dx, al
    X86_AT(c, 0x133d1u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133d2  jmp 0x133ea
    X86_AT(c, 0x133d2u);
    goto L_133ea;
L_133d4:
    X86_TICK(c, 7);
    // 0133d4  test al, al
    X86_AT(c, 0x133d4u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0133d6  jne 0x133da
    X86_AT(c, 0x133d6u);
    if (x86_cc(c, 5)) { goto L_133da; }
    X86_TICK(c, 2);
    // 0133d8  mov dl, 0xe1
    X86_AT(c, 0x133d8u);
    s8(c, 2, 0xE1u);
L_133da:
    X86_TICK(c, 64);
    // 0133da  mov al, ah
    X86_AT(c, 0x133dau);
    s8(c, 0, g8(c, 4));
    // 0133dc  out dx, al
    X86_AT(c, 0x133dcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133dd  dec edx
    X86_AT(c, 0x133ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_133ea:
    X86_TICK(c, 24);
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133bdu, "ran off the end of a function");
}
void f_000133bf(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0133bf  shr dl, 1
    X86_AT(c, 0x133bfu);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 2, r); }
    // 0133c1  mov ebx, edx
    X86_AT(c, 0x133c1u);
    c.r[3] = c.r[2];
    // 0133c3  mov dx, 0x4e3
    X86_AT(c, 0x133c3u);
    s16(c, 2, 0x4E3u);
    // 0133c7  cmp al, 2
    X86_AT(c, 0x133c7u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0133c9  jb 0x133d4
    X86_AT(c, 0x133c9u);
    if (x86_cc(c, 2)) { goto L_133d4; }
    X86_TICK(c, 37);
    // 0133cb  add al, ah
    X86_AT(c, 0x133cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0133cd  out dx, al
    X86_AT(c, 0x133cdu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ce  dec edx
    X86_AT(c, 0x133ceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133cf  mov al, bh
    X86_AT(c, 0x133cfu);
    s8(c, 0, g8(c, 7));
    // 0133d1  out dx, al
    X86_AT(c, 0x133d1u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133d2  jmp 0x133ea
    X86_AT(c, 0x133d2u);
    goto L_133ea;
L_133d4:
    X86_TICK(c, 7);
    // 0133d4  test al, al
    X86_AT(c, 0x133d4u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0133d6  jne 0x133da
    X86_AT(c, 0x133d6u);
    if (x86_cc(c, 5)) { goto L_133da; }
    X86_TICK(c, 2);
    // 0133d8  mov dl, 0xe1
    X86_AT(c, 0x133d8u);
    s8(c, 2, 0xE1u);
L_133da:
    X86_TICK(c, 64);
    // 0133da  mov al, ah
    X86_AT(c, 0x133dau);
    s8(c, 0, g8(c, 4));
    // 0133dc  out dx, al
    X86_AT(c, 0x133dcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133dd  dec edx
    X86_AT(c, 0x133ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_133ea:
    X86_TICK(c, 24);
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133bfu, "ran off the end of a function");
}
void f_000133c1(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0133c1  mov ebx, edx
    X86_AT(c, 0x133c1u);
    c.r[3] = c.r[2];
    // 0133c3  mov dx, 0x4e3
    X86_AT(c, 0x133c3u);
    s16(c, 2, 0x4E3u);
    // 0133c7  cmp al, 2
    X86_AT(c, 0x133c7u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0133c9  jb 0x133d4
    X86_AT(c, 0x133c9u);
    if (x86_cc(c, 2)) { goto L_133d4; }
    X86_TICK(c, 37);
    // 0133cb  add al, ah
    X86_AT(c, 0x133cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0133cd  out dx, al
    X86_AT(c, 0x133cdu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ce  dec edx
    X86_AT(c, 0x133ceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133cf  mov al, bh
    X86_AT(c, 0x133cfu);
    s8(c, 0, g8(c, 7));
    // 0133d1  out dx, al
    X86_AT(c, 0x133d1u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133d2  jmp 0x133ea
    X86_AT(c, 0x133d2u);
    goto L_133ea;
L_133d4:
    X86_TICK(c, 7);
    // 0133d4  test al, al
    X86_AT(c, 0x133d4u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0133d6  jne 0x133da
    X86_AT(c, 0x133d6u);
    if (x86_cc(c, 5)) { goto L_133da; }
    X86_TICK(c, 2);
    // 0133d8  mov dl, 0xe1
    X86_AT(c, 0x133d8u);
    s8(c, 2, 0xE1u);
L_133da:
    X86_TICK(c, 64);
    // 0133da  mov al, ah
    X86_AT(c, 0x133dau);
    s8(c, 0, g8(c, 4));
    // 0133dc  out dx, al
    X86_AT(c, 0x133dcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133dd  dec edx
    X86_AT(c, 0x133ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_133ea:
    X86_TICK(c, 24);
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133c1u, "ran off the end of a function");
}
void f_000133c3(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0133c3  mov dx, 0x4e3
    X86_AT(c, 0x133c3u);
    s16(c, 2, 0x4E3u);
    // 0133c7  cmp al, 2
    X86_AT(c, 0x133c7u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0133c9  jb 0x133d4
    X86_AT(c, 0x133c9u);
    if (x86_cc(c, 2)) { goto L_133d4; }
    X86_TICK(c, 37);
    // 0133cb  add al, ah
    X86_AT(c, 0x133cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0133cd  out dx, al
    X86_AT(c, 0x133cdu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ce  dec edx
    X86_AT(c, 0x133ceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133cf  mov al, bh
    X86_AT(c, 0x133cfu);
    s8(c, 0, g8(c, 7));
    // 0133d1  out dx, al
    X86_AT(c, 0x133d1u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133d2  jmp 0x133ea
    X86_AT(c, 0x133d2u);
    goto L_133ea;
L_133d4:
    X86_TICK(c, 7);
    // 0133d4  test al, al
    X86_AT(c, 0x133d4u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0133d6  jne 0x133da
    X86_AT(c, 0x133d6u);
    if (x86_cc(c, 5)) { goto L_133da; }
    X86_TICK(c, 2);
    // 0133d8  mov dl, 0xe1
    X86_AT(c, 0x133d8u);
    s8(c, 2, 0xE1u);
L_133da:
    X86_TICK(c, 64);
    // 0133da  mov al, ah
    X86_AT(c, 0x133dau);
    s8(c, 0, g8(c, 4));
    // 0133dc  out dx, al
    X86_AT(c, 0x133dcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133dd  dec edx
    X86_AT(c, 0x133ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_133ea:
    X86_TICK(c, 24);
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133c3u, "ran off the end of a function");
}
void f_000133c7(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0133c7  cmp al, 2
    X86_AT(c, 0x133c7u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0133c9  jb 0x133d4
    X86_AT(c, 0x133c9u);
    if (x86_cc(c, 2)) { goto L_133d4; }
    X86_TICK(c, 37);
    // 0133cb  add al, ah
    X86_AT(c, 0x133cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0133cd  out dx, al
    X86_AT(c, 0x133cdu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ce  dec edx
    X86_AT(c, 0x133ceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133cf  mov al, bh
    X86_AT(c, 0x133cfu);
    s8(c, 0, g8(c, 7));
    // 0133d1  out dx, al
    X86_AT(c, 0x133d1u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133d2  jmp 0x133ea
    X86_AT(c, 0x133d2u);
    goto L_133ea;
L_133d4:
    X86_TICK(c, 7);
    // 0133d4  test al, al
    X86_AT(c, 0x133d4u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0133d6  jne 0x133da
    X86_AT(c, 0x133d6u);
    if (x86_cc(c, 5)) { goto L_133da; }
    X86_TICK(c, 2);
    // 0133d8  mov dl, 0xe1
    X86_AT(c, 0x133d8u);
    s8(c, 2, 0xE1u);
L_133da:
    X86_TICK(c, 64);
    // 0133da  mov al, ah
    X86_AT(c, 0x133dau);
    s8(c, 0, g8(c, 4));
    // 0133dc  out dx, al
    X86_AT(c, 0x133dcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133dd  dec edx
    X86_AT(c, 0x133ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_133ea:
    X86_TICK(c, 24);
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133c7u, "ran off the end of a function");
}
void f_000133c9(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0133c9  jb 0x133d4
    X86_AT(c, 0x133c9u);
    if (x86_cc(c, 2)) { goto L_133d4; }
    X86_TICK(c, 37);
    // 0133cb  add al, ah
    X86_AT(c, 0x133cbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 0133cd  out dx, al
    X86_AT(c, 0x133cdu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ce  dec edx
    X86_AT(c, 0x133ceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133cf  mov al, bh
    X86_AT(c, 0x133cfu);
    s8(c, 0, g8(c, 7));
    // 0133d1  out dx, al
    X86_AT(c, 0x133d1u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133d2  jmp 0x133ea
    X86_AT(c, 0x133d2u);
    goto L_133ea;
L_133d4:
    X86_TICK(c, 7);
    // 0133d4  test al, al
    X86_AT(c, 0x133d4u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0133d6  jne 0x133da
    X86_AT(c, 0x133d6u);
    if (x86_cc(c, 5)) { goto L_133da; }
    X86_TICK(c, 2);
    // 0133d8  mov dl, 0xe1
    X86_AT(c, 0x133d8u);
    s8(c, 2, 0xE1u);
L_133da:
    X86_TICK(c, 64);
    // 0133da  mov al, ah
    X86_AT(c, 0x133dau);
    s8(c, 0, g8(c, 4));
    // 0133dc  out dx, al
    X86_AT(c, 0x133dcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133dd  dec edx
    X86_AT(c, 0x133ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_133ea:
    X86_TICK(c, 24);
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133c9u, "ran off the end of a function");
}
void f_000133d4(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0133d4  test al, al
    X86_AT(c, 0x133d4u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0133d6  jne 0x133da
    X86_AT(c, 0x133d6u);
    if (x86_cc(c, 5)) { goto L_133da; }
    X86_TICK(c, 2);
    // 0133d8  mov dl, 0xe1
    X86_AT(c, 0x133d8u);
    s8(c, 2, 0xE1u);
L_133da:
    X86_TICK(c, 88);
    // 0133da  mov al, ah
    X86_AT(c, 0x133dau);
    s8(c, 0, g8(c, 4));
    // 0133dc  out dx, al
    X86_AT(c, 0x133dcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133dd  dec edx
    X86_AT(c, 0x133ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133d4u, "ran off the end of a function");
}
void f_000133d6(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0133d6  jne 0x133da
    X86_AT(c, 0x133d6u);
    if (x86_cc(c, 5)) { goto L_133da; }
    X86_TICK(c, 2);
    // 0133d8  mov dl, 0xe1
    X86_AT(c, 0x133d8u);
    s8(c, 2, 0xE1u);
L_133da:
    X86_TICK(c, 88);
    // 0133da  mov al, ah
    X86_AT(c, 0x133dau);
    s8(c, 0, g8(c, 4));
    // 0133dc  out dx, al
    X86_AT(c, 0x133dcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133dd  dec edx
    X86_AT(c, 0x133ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133d6u, "ran off the end of a function");
}
void f_000133da(X86Cpu& c) {
    X86_TICK(c, 88);
    // 0133da  mov al, ah
    X86_AT(c, 0x133dau);
    s8(c, 0, g8(c, 4));
    // 0133dc  out dx, al
    X86_AT(c, 0x133dcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133dd  dec edx
    X86_AT(c, 0x133ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133dau, "ran off the end of a function");
}
void f_000133dc(X86Cpu& c) {
    X86_TICK(c, 86);
    // 0133dc  out dx, al
    X86_AT(c, 0x133dcu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133dd  dec edx
    X86_AT(c, 0x133ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133dcu, "ran off the end of a function");
}
void f_000133dd(X86Cpu& c) {
    X86_TICK(c, 74);
    // 0133dd  dec edx
    X86_AT(c, 0x133ddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133ddu, "ran off the end of a function");
}
void f_000133de(X86Cpu& c) {
    X86_TICK(c, 72);
    // 0133de  mov al, bh
    X86_AT(c, 0x133deu);
    s8(c, 0, g8(c, 7));
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133deu, "ran off the end of a function");
}
void f_000133e0(X86Cpu& c) {
    X86_TICK(c, 70);
    // 0133e0  out dx, al
    X86_AT(c, 0x133e0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133e0u, "ran off the end of a function");
}
void f_000133e1(X86Cpu& c) {
    X86_TICK(c, 58);
    // 0133e1  inc edx
    X86_AT(c, 0x133e1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133e1u, "ran off the end of a function");
}
void f_000133e2(X86Cpu& c) {
    X86_TICK(c, 56);
    // 0133e2  mov al, ah
    X86_AT(c, 0x133e2u);
    s8(c, 0, g8(c, 4));
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133e2u, "ran off the end of a function");
}
void f_000133e4(X86Cpu& c) {
    X86_TICK(c, 54);
    // 0133e4  inc eax
    X86_AT(c, 0x133e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133e4u, "ran off the end of a function");
}
void f_000133e5(X86Cpu& c) {
    X86_TICK(c, 52);
    // 0133e5  out dx, al
    X86_AT(c, 0x133e5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133e5u, "ran off the end of a function");
}
void f_000133e6(X86Cpu& c) {
    X86_TICK(c, 40);
    // 0133e6  dec edx
    X86_AT(c, 0x133e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133e6u, "ran off the end of a function");
}
void f_000133e7(X86Cpu& c) {
    X86_TICK(c, 38);
    // 0133e7  mov al, bl
    X86_AT(c, 0x133e7u);
    s8(c, 0, g8(c, 3));
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133e7u, "ran off the end of a function");
}
void f_000133e9(X86Cpu& c) {
    X86_TICK(c, 36);
    // 0133e9  out dx, al
    X86_AT(c, 0x133e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133e9u, "ran off the end of a function");
}
void f_000133ea(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0133ea  pop edx
    X86_AT(c, 0x133eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133eau, "ran off the end of a function");
}
void f_000133eb(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0133eb  pop ebx
    X86_AT(c, 0x133ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133ebu, "ran off the end of a function");
}
void f_000133ec(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0133ec  pop eax
    X86_AT(c, 0x133ecu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133ecu, "ran off the end of a function");
}
void f_000133ed(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0133ed  xor al, al
    X86_AT(c, 0x133edu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133edu, "ran off the end of a function");
}
void f_000133ef(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0133ef  ret 
    X86_AT(c, 0x133efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133efu, "ran off the end of a function");
}
void f_000133f0(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0133f0  cmp bl, 3
    X86_AT(c, 0x133f0u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0133f3  ja 0x1354c
    X86_AT(c, 0x133f3u);
    if (x86_cc(c, 7)) { goto L_1354c; }
    X86_TICK(c, 11);
    // 0133f9  push eax
    X86_AT(c, 0x133f9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0133fa  test bl, 0x40
    X86_AT(c, 0x133fau);
    (void)x86_logic(c, g8(c, 3) & 0x40u, 1);
    // 0133fd  xor ah, ah
    X86_AT(c, 0x133fdu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 0133ff  jne 0x13404
    X86_AT(c, 0x133ffu);
    if (x86_cc(c, 5)) { goto L_13404; }
    X86_TICK(c, 2);
    // 013401  add ah, 4
    X86_AT(c, 0x13401u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
L_13404:
    X86_TICK(c, 13);
    // 013404  mov al, bl
    X86_AT(c, 0x13404u);
    s8(c, 0, g8(c, 3));
    // 013406  and al, 7
    X86_AT(c, 0x13406u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x7u, 1)); }
    // 013408  mov dx, 0x4e3
    X86_AT(c, 0x13408u);
    s16(c, 2, 0x4E3u);
    // 01340c  cmp al, 2
    X86_AT(c, 0x1340cu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 01340e  jb 0x1341c
    X86_AT(c, 0x1340eu);
    if (x86_cc(c, 2)) { goto L_1341c; }
    X86_TICK(c, 37);
    // 013410  add al, ah
    X86_AT(c, 0x13410u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013412  out dx, al
    X86_AT(c, 0x13412u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013413  dec edx
    X86_AT(c, 0x13413u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013414  in al, dx
    X86_AT(c, 0x13414u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013415  mov ah, al
    X86_AT(c, 0x13415u);
    s8(c, 4, g8(c, 0));
    // 013417  jmp 0x1342e
    X86_AT(c, 0x13417u);
    goto L_1342e;
L_1341c:
    X86_TICK(c, 7);
    // 01341c  test al, al
    X86_AT(c, 0x1341cu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 01341e  jne 0x13422
    X86_AT(c, 0x1341eu);
    if (x86_cc(c, 5)) { goto L_13422; }
    X86_TICK(c, 2);
    // 013420  mov dl, 0xe1
    X86_AT(c, 0x13420u);
    s8(c, 2, 0xE1u);
L_13422:
    X86_TICK(c, 61);
    // 013422  mov al, ah
    X86_AT(c, 0x13422u);
    s8(c, 0, g8(c, 4));
    // 013424  out dx, al
    X86_AT(c, 0x13424u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013425  dec edx
    X86_AT(c, 0x13425u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013426  in al, dx
    X86_AT(c, 0x13426u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013427  xchg al, ah
    X86_AT(c, 0x13427u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 013429  inc edx
    X86_AT(c, 0x13429u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01342a  inc eax
    X86_AT(c, 0x1342au);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01342b  out dx, al
    X86_AT(c, 0x1342bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01342c  dec edx
    X86_AT(c, 0x1342cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01342d  in al, dx
    X86_AT(c, 0x1342du);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
L_1342e:
    X86_TICK(c, 22);
    // 01342e  and ax, 0x3f3f
    X86_AT(c, 0x1342eu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x3F3Fu, 2)); }
    // 013432  mov dx, ax
    X86_AT(c, 0x13432u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 013435  add dx, dx
    X86_AT(c, 0x13435u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 013438  pop eax
    X86_AT(c, 0x13438u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013439  xor al, al
    X86_AT(c, 0x13439u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01343b  ret 
    X86_AT(c, 0x1343bu);
    c.eip = pop32(c); return;
L_1354c:
    X86_TICK(c, 12);
    // 01354c  mov al, 1
    X86_AT(c, 0x1354cu);
    s8(c, 0, 0x1u);
    // 01354e  ret 
    X86_AT(c, 0x1354eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x133f0u, "ran off the end of a function");
}
void f_0001343c(X86Cpu& c) {
    X86_TICK(c, 35);
    // 01343c  push eax
    X86_AT(c, 0x1343cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01343d  push edx
    X86_AT(c, 0x1343du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01343e  mov al, bl
    X86_AT(c, 0x1343eu);
    s8(c, 0, g8(c, 3));
    // 013440  and al, 3
    X86_AT(c, 0x13440u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x3u, 1)); }
    // 013442  mov dx, 0x4d5
    X86_AT(c, 0x13442u);
    s16(c, 2, 0x4D5u);
    // 013446  out dx, al
    X86_AT(c, 0x13446u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013447  mov ah, bl
    X86_AT(c, 0x13447u);
    s8(c, 4, g8(c, 3));
    // 013449  mov dl, 0xe3
    X86_AT(c, 0x13449u);
    s8(c, 2, 0xE3u);
    // 01344b  mov al, 3
    X86_AT(c, 0x1344bu);
    s8(c, 0, 0x3u);
    // 01344d  add ah, ah
    X86_AT(c, 0x1344du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 01344f  jae 0x13453
    X86_AT(c, 0x1344fu);
    if (x86_cc(c, 3)) { goto L_13453; }
    X86_TICK(c, 2);
    // 013451  add al, 4
    X86_AT(c, 0x13451u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13453:
    X86_TICK(c, 49);
    // 013453  out dx, al
    X86_AT(c, 0x13453u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013454  dec edx
    X86_AT(c, 0x13454u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013455  in al, dx
    X86_AT(c, 0x13455u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013456  out dx, al
    X86_AT(c, 0x13456u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013457  inc edx
    X86_AT(c, 0x13457u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013458  mov al, 2
    X86_AT(c, 0x13458u);
    s8(c, 0, 0x2u);
    // 01345a  add ah, ah
    X86_AT(c, 0x1345au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 01345c  jae 0x13460
    X86_AT(c, 0x1345cu);
    if (x86_cc(c, 3)) { goto L_13460; }
    X86_TICK(c, 2);
    // 01345e  add al, 4
    X86_AT(c, 0x1345eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13460:
    X86_TICK(c, 49);
    // 013460  out dx, al
    X86_AT(c, 0x13460u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013461  dec edx
    X86_AT(c, 0x13461u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013462  in al, dx
    X86_AT(c, 0x13462u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013463  out dx, al
    X86_AT(c, 0x13463u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013464  inc edx
    X86_AT(c, 0x13464u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013465  xor al, al
    X86_AT(c, 0x13465u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013467  add ah, ah
    X86_AT(c, 0x13467u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013469  jae 0x1346d
    X86_AT(c, 0x13469u);
    if (x86_cc(c, 3)) { goto L_1346d; }
    X86_TICK(c, 2);
    // 01346b  add al, 4
    X86_AT(c, 0x1346bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1346d:
    X86_TICK(c, 49);
    // 01346d  out dx, al
    X86_AT(c, 0x1346du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01346e  dec edx
    X86_AT(c, 0x1346eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01346f  in al, dx
    X86_AT(c, 0x1346fu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013470  out dx, al
    X86_AT(c, 0x13470u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013471  inc edx
    X86_AT(c, 0x13471u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013472  mov al, 1
    X86_AT(c, 0x13472u);
    s8(c, 0, 0x1u);
    // 013474  add ah, ah
    X86_AT(c, 0x13474u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013476  jae 0x1347a
    X86_AT(c, 0x13476u);
    if (x86_cc(c, 3)) { goto L_1347a; }
    X86_TICK(c, 2);
    // 013478  add al, 4
    X86_AT(c, 0x13478u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1347a:
    X86_TICK(c, 51);
    // 01347a  out dx, al
    X86_AT(c, 0x1347au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347b  dec edx
    X86_AT(c, 0x1347bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01347c  in al, dx
    X86_AT(c, 0x1347cu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01347d  out dx, al
    X86_AT(c, 0x1347du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347e  inc edx
    X86_AT(c, 0x1347eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01347f  mov dl, 0xe1
    X86_AT(c, 0x1347fu);
    s8(c, 2, 0xE1u);
    // 013481  xor al, al
    X86_AT(c, 0x13481u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013483  add ah, ah
    X86_AT(c, 0x13483u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013485  jae 0x13489
    X86_AT(c, 0x13485u);
    if (x86_cc(c, 3)) { goto L_13489; }
    X86_TICK(c, 2);
    // 013487  add al, 4
    X86_AT(c, 0x13487u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13489:
    X86_TICK(c, 49);
    // 013489  out dx, al
    X86_AT(c, 0x13489u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348a  dec edx
    X86_AT(c, 0x1348au);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01348b  in al, dx
    X86_AT(c, 0x1348bu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01348c  out dx, al
    X86_AT(c, 0x1348cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348d  inc edx
    X86_AT(c, 0x1348du);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01348e  mov al, 1
    X86_AT(c, 0x1348eu);
    s8(c, 0, 0x1u);
    // 013490  add ah, ah
    X86_AT(c, 0x13490u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013492  jae 0x13496
    X86_AT(c, 0x13492u);
    if (x86_cc(c, 3)) { goto L_13496; }
    X86_TICK(c, 2);
    // 013494  add al, 4
    X86_AT(c, 0x13494u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13496:
    X86_TICK(c, 60);
    // 013496  out dx, al
    X86_AT(c, 0x13496u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013497  dec edx
    X86_AT(c, 0x13497u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013498  in al, dx
    X86_AT(c, 0x13498u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013499  out dx, al
    X86_AT(c, 0x13499u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01349a  inc edx
    X86_AT(c, 0x1349au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01349b  pop edx
    X86_AT(c, 0x1349bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01349c  pop eax
    X86_AT(c, 0x1349cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01349d  xor al, al
    X86_AT(c, 0x1349du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01349f  ret 
    X86_AT(c, 0x1349fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1343cu, "ran off the end of a function");
}
void f_0001343d(X86Cpu& c) {
    X86_TICK(c, 33);
    // 01343d  push edx
    X86_AT(c, 0x1343du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01343e  mov al, bl
    X86_AT(c, 0x1343eu);
    s8(c, 0, g8(c, 3));
    // 013440  and al, 3
    X86_AT(c, 0x13440u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x3u, 1)); }
    // 013442  mov dx, 0x4d5
    X86_AT(c, 0x13442u);
    s16(c, 2, 0x4D5u);
    // 013446  out dx, al
    X86_AT(c, 0x13446u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013447  mov ah, bl
    X86_AT(c, 0x13447u);
    s8(c, 4, g8(c, 3));
    // 013449  mov dl, 0xe3
    X86_AT(c, 0x13449u);
    s8(c, 2, 0xE3u);
    // 01344b  mov al, 3
    X86_AT(c, 0x1344bu);
    s8(c, 0, 0x3u);
    // 01344d  add ah, ah
    X86_AT(c, 0x1344du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 01344f  jae 0x13453
    X86_AT(c, 0x1344fu);
    if (x86_cc(c, 3)) { goto L_13453; }
    X86_TICK(c, 2);
    // 013451  add al, 4
    X86_AT(c, 0x13451u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13453:
    X86_TICK(c, 49);
    // 013453  out dx, al
    X86_AT(c, 0x13453u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013454  dec edx
    X86_AT(c, 0x13454u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013455  in al, dx
    X86_AT(c, 0x13455u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013456  out dx, al
    X86_AT(c, 0x13456u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013457  inc edx
    X86_AT(c, 0x13457u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013458  mov al, 2
    X86_AT(c, 0x13458u);
    s8(c, 0, 0x2u);
    // 01345a  add ah, ah
    X86_AT(c, 0x1345au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 01345c  jae 0x13460
    X86_AT(c, 0x1345cu);
    if (x86_cc(c, 3)) { goto L_13460; }
    X86_TICK(c, 2);
    // 01345e  add al, 4
    X86_AT(c, 0x1345eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13460:
    X86_TICK(c, 49);
    // 013460  out dx, al
    X86_AT(c, 0x13460u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013461  dec edx
    X86_AT(c, 0x13461u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013462  in al, dx
    X86_AT(c, 0x13462u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013463  out dx, al
    X86_AT(c, 0x13463u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013464  inc edx
    X86_AT(c, 0x13464u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013465  xor al, al
    X86_AT(c, 0x13465u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013467  add ah, ah
    X86_AT(c, 0x13467u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013469  jae 0x1346d
    X86_AT(c, 0x13469u);
    if (x86_cc(c, 3)) { goto L_1346d; }
    X86_TICK(c, 2);
    // 01346b  add al, 4
    X86_AT(c, 0x1346bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1346d:
    X86_TICK(c, 49);
    // 01346d  out dx, al
    X86_AT(c, 0x1346du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01346e  dec edx
    X86_AT(c, 0x1346eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01346f  in al, dx
    X86_AT(c, 0x1346fu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013470  out dx, al
    X86_AT(c, 0x13470u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013471  inc edx
    X86_AT(c, 0x13471u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013472  mov al, 1
    X86_AT(c, 0x13472u);
    s8(c, 0, 0x1u);
    // 013474  add ah, ah
    X86_AT(c, 0x13474u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013476  jae 0x1347a
    X86_AT(c, 0x13476u);
    if (x86_cc(c, 3)) { goto L_1347a; }
    X86_TICK(c, 2);
    // 013478  add al, 4
    X86_AT(c, 0x13478u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1347a:
    X86_TICK(c, 51);
    // 01347a  out dx, al
    X86_AT(c, 0x1347au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347b  dec edx
    X86_AT(c, 0x1347bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01347c  in al, dx
    X86_AT(c, 0x1347cu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01347d  out dx, al
    X86_AT(c, 0x1347du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347e  inc edx
    X86_AT(c, 0x1347eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01347f  mov dl, 0xe1
    X86_AT(c, 0x1347fu);
    s8(c, 2, 0xE1u);
    // 013481  xor al, al
    X86_AT(c, 0x13481u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013483  add ah, ah
    X86_AT(c, 0x13483u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013485  jae 0x13489
    X86_AT(c, 0x13485u);
    if (x86_cc(c, 3)) { goto L_13489; }
    X86_TICK(c, 2);
    // 013487  add al, 4
    X86_AT(c, 0x13487u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13489:
    X86_TICK(c, 49);
    // 013489  out dx, al
    X86_AT(c, 0x13489u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348a  dec edx
    X86_AT(c, 0x1348au);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01348b  in al, dx
    X86_AT(c, 0x1348bu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01348c  out dx, al
    X86_AT(c, 0x1348cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348d  inc edx
    X86_AT(c, 0x1348du);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01348e  mov al, 1
    X86_AT(c, 0x1348eu);
    s8(c, 0, 0x1u);
    // 013490  add ah, ah
    X86_AT(c, 0x13490u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013492  jae 0x13496
    X86_AT(c, 0x13492u);
    if (x86_cc(c, 3)) { goto L_13496; }
    X86_TICK(c, 2);
    // 013494  add al, 4
    X86_AT(c, 0x13494u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13496:
    X86_TICK(c, 60);
    // 013496  out dx, al
    X86_AT(c, 0x13496u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013497  dec edx
    X86_AT(c, 0x13497u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013498  in al, dx
    X86_AT(c, 0x13498u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013499  out dx, al
    X86_AT(c, 0x13499u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01349a  inc edx
    X86_AT(c, 0x1349au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01349b  pop edx
    X86_AT(c, 0x1349bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01349c  pop eax
    X86_AT(c, 0x1349cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01349d  xor al, al
    X86_AT(c, 0x1349du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01349f  ret 
    X86_AT(c, 0x1349fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1343du, "ran off the end of a function");
}
void f_0001343e(X86Cpu& c) {
    X86_TICK(c, 31);
    // 01343e  mov al, bl
    X86_AT(c, 0x1343eu);
    s8(c, 0, g8(c, 3));
    // 013440  and al, 3
    X86_AT(c, 0x13440u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x3u, 1)); }
    // 013442  mov dx, 0x4d5
    X86_AT(c, 0x13442u);
    s16(c, 2, 0x4D5u);
    // 013446  out dx, al
    X86_AT(c, 0x13446u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013447  mov ah, bl
    X86_AT(c, 0x13447u);
    s8(c, 4, g8(c, 3));
    // 013449  mov dl, 0xe3
    X86_AT(c, 0x13449u);
    s8(c, 2, 0xE3u);
    // 01344b  mov al, 3
    X86_AT(c, 0x1344bu);
    s8(c, 0, 0x3u);
    // 01344d  add ah, ah
    X86_AT(c, 0x1344du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 01344f  jae 0x13453
    X86_AT(c, 0x1344fu);
    if (x86_cc(c, 3)) { goto L_13453; }
    X86_TICK(c, 2);
    // 013451  add al, 4
    X86_AT(c, 0x13451u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13453:
    X86_TICK(c, 49);
    // 013453  out dx, al
    X86_AT(c, 0x13453u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013454  dec edx
    X86_AT(c, 0x13454u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013455  in al, dx
    X86_AT(c, 0x13455u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013456  out dx, al
    X86_AT(c, 0x13456u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013457  inc edx
    X86_AT(c, 0x13457u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013458  mov al, 2
    X86_AT(c, 0x13458u);
    s8(c, 0, 0x2u);
    // 01345a  add ah, ah
    X86_AT(c, 0x1345au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 01345c  jae 0x13460
    X86_AT(c, 0x1345cu);
    if (x86_cc(c, 3)) { goto L_13460; }
    X86_TICK(c, 2);
    // 01345e  add al, 4
    X86_AT(c, 0x1345eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13460:
    X86_TICK(c, 49);
    // 013460  out dx, al
    X86_AT(c, 0x13460u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013461  dec edx
    X86_AT(c, 0x13461u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013462  in al, dx
    X86_AT(c, 0x13462u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013463  out dx, al
    X86_AT(c, 0x13463u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013464  inc edx
    X86_AT(c, 0x13464u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013465  xor al, al
    X86_AT(c, 0x13465u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013467  add ah, ah
    X86_AT(c, 0x13467u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013469  jae 0x1346d
    X86_AT(c, 0x13469u);
    if (x86_cc(c, 3)) { goto L_1346d; }
    X86_TICK(c, 2);
    // 01346b  add al, 4
    X86_AT(c, 0x1346bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1346d:
    X86_TICK(c, 49);
    // 01346d  out dx, al
    X86_AT(c, 0x1346du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01346e  dec edx
    X86_AT(c, 0x1346eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01346f  in al, dx
    X86_AT(c, 0x1346fu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013470  out dx, al
    X86_AT(c, 0x13470u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013471  inc edx
    X86_AT(c, 0x13471u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013472  mov al, 1
    X86_AT(c, 0x13472u);
    s8(c, 0, 0x1u);
    // 013474  add ah, ah
    X86_AT(c, 0x13474u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013476  jae 0x1347a
    X86_AT(c, 0x13476u);
    if (x86_cc(c, 3)) { goto L_1347a; }
    X86_TICK(c, 2);
    // 013478  add al, 4
    X86_AT(c, 0x13478u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1347a:
    X86_TICK(c, 51);
    // 01347a  out dx, al
    X86_AT(c, 0x1347au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347b  dec edx
    X86_AT(c, 0x1347bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01347c  in al, dx
    X86_AT(c, 0x1347cu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01347d  out dx, al
    X86_AT(c, 0x1347du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347e  inc edx
    X86_AT(c, 0x1347eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01347f  mov dl, 0xe1
    X86_AT(c, 0x1347fu);
    s8(c, 2, 0xE1u);
    // 013481  xor al, al
    X86_AT(c, 0x13481u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013483  add ah, ah
    X86_AT(c, 0x13483u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013485  jae 0x13489
    X86_AT(c, 0x13485u);
    if (x86_cc(c, 3)) { goto L_13489; }
    X86_TICK(c, 2);
    // 013487  add al, 4
    X86_AT(c, 0x13487u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13489:
    X86_TICK(c, 49);
    // 013489  out dx, al
    X86_AT(c, 0x13489u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348a  dec edx
    X86_AT(c, 0x1348au);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01348b  in al, dx
    X86_AT(c, 0x1348bu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01348c  out dx, al
    X86_AT(c, 0x1348cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348d  inc edx
    X86_AT(c, 0x1348du);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01348e  mov al, 1
    X86_AT(c, 0x1348eu);
    s8(c, 0, 0x1u);
    // 013490  add ah, ah
    X86_AT(c, 0x13490u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013492  jae 0x13496
    X86_AT(c, 0x13492u);
    if (x86_cc(c, 3)) { goto L_13496; }
    X86_TICK(c, 2);
    // 013494  add al, 4
    X86_AT(c, 0x13494u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13496:
    X86_TICK(c, 60);
    // 013496  out dx, al
    X86_AT(c, 0x13496u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013497  dec edx
    X86_AT(c, 0x13497u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013498  in al, dx
    X86_AT(c, 0x13498u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013499  out dx, al
    X86_AT(c, 0x13499u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01349a  inc edx
    X86_AT(c, 0x1349au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01349b  pop edx
    X86_AT(c, 0x1349bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01349c  pop eax
    X86_AT(c, 0x1349cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01349d  xor al, al
    X86_AT(c, 0x1349du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01349f  ret 
    X86_AT(c, 0x1349fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1343eu, "ran off the end of a function");
}
void f_00013440(X86Cpu& c) {
    X86_TICK(c, 29);
    // 013440  and al, 3
    X86_AT(c, 0x13440u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x3u, 1)); }
    // 013442  mov dx, 0x4d5
    X86_AT(c, 0x13442u);
    s16(c, 2, 0x4D5u);
    // 013446  out dx, al
    X86_AT(c, 0x13446u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013447  mov ah, bl
    X86_AT(c, 0x13447u);
    s8(c, 4, g8(c, 3));
    // 013449  mov dl, 0xe3
    X86_AT(c, 0x13449u);
    s8(c, 2, 0xE3u);
    // 01344b  mov al, 3
    X86_AT(c, 0x1344bu);
    s8(c, 0, 0x3u);
    // 01344d  add ah, ah
    X86_AT(c, 0x1344du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 01344f  jae 0x13453
    X86_AT(c, 0x1344fu);
    if (x86_cc(c, 3)) { goto L_13453; }
    X86_TICK(c, 2);
    // 013451  add al, 4
    X86_AT(c, 0x13451u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13453:
    X86_TICK(c, 49);
    // 013453  out dx, al
    X86_AT(c, 0x13453u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013454  dec edx
    X86_AT(c, 0x13454u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013455  in al, dx
    X86_AT(c, 0x13455u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013456  out dx, al
    X86_AT(c, 0x13456u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013457  inc edx
    X86_AT(c, 0x13457u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013458  mov al, 2
    X86_AT(c, 0x13458u);
    s8(c, 0, 0x2u);
    // 01345a  add ah, ah
    X86_AT(c, 0x1345au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 01345c  jae 0x13460
    X86_AT(c, 0x1345cu);
    if (x86_cc(c, 3)) { goto L_13460; }
    X86_TICK(c, 2);
    // 01345e  add al, 4
    X86_AT(c, 0x1345eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13460:
    X86_TICK(c, 49);
    // 013460  out dx, al
    X86_AT(c, 0x13460u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013461  dec edx
    X86_AT(c, 0x13461u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013462  in al, dx
    X86_AT(c, 0x13462u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013463  out dx, al
    X86_AT(c, 0x13463u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013464  inc edx
    X86_AT(c, 0x13464u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013465  xor al, al
    X86_AT(c, 0x13465u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013467  add ah, ah
    X86_AT(c, 0x13467u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013469  jae 0x1346d
    X86_AT(c, 0x13469u);
    if (x86_cc(c, 3)) { goto L_1346d; }
    X86_TICK(c, 2);
    // 01346b  add al, 4
    X86_AT(c, 0x1346bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1346d:
    X86_TICK(c, 49);
    // 01346d  out dx, al
    X86_AT(c, 0x1346du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01346e  dec edx
    X86_AT(c, 0x1346eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01346f  in al, dx
    X86_AT(c, 0x1346fu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013470  out dx, al
    X86_AT(c, 0x13470u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013471  inc edx
    X86_AT(c, 0x13471u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013472  mov al, 1
    X86_AT(c, 0x13472u);
    s8(c, 0, 0x1u);
    // 013474  add ah, ah
    X86_AT(c, 0x13474u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013476  jae 0x1347a
    X86_AT(c, 0x13476u);
    if (x86_cc(c, 3)) { goto L_1347a; }
    X86_TICK(c, 2);
    // 013478  add al, 4
    X86_AT(c, 0x13478u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1347a:
    X86_TICK(c, 51);
    // 01347a  out dx, al
    X86_AT(c, 0x1347au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347b  dec edx
    X86_AT(c, 0x1347bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01347c  in al, dx
    X86_AT(c, 0x1347cu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01347d  out dx, al
    X86_AT(c, 0x1347du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347e  inc edx
    X86_AT(c, 0x1347eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01347f  mov dl, 0xe1
    X86_AT(c, 0x1347fu);
    s8(c, 2, 0xE1u);
    // 013481  xor al, al
    X86_AT(c, 0x13481u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013483  add ah, ah
    X86_AT(c, 0x13483u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013485  jae 0x13489
    X86_AT(c, 0x13485u);
    if (x86_cc(c, 3)) { goto L_13489; }
    X86_TICK(c, 2);
    // 013487  add al, 4
    X86_AT(c, 0x13487u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13489:
    X86_TICK(c, 49);
    // 013489  out dx, al
    X86_AT(c, 0x13489u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348a  dec edx
    X86_AT(c, 0x1348au);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01348b  in al, dx
    X86_AT(c, 0x1348bu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01348c  out dx, al
    X86_AT(c, 0x1348cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348d  inc edx
    X86_AT(c, 0x1348du);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01348e  mov al, 1
    X86_AT(c, 0x1348eu);
    s8(c, 0, 0x1u);
    // 013490  add ah, ah
    X86_AT(c, 0x13490u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013492  jae 0x13496
    X86_AT(c, 0x13492u);
    if (x86_cc(c, 3)) { goto L_13496; }
    X86_TICK(c, 2);
    // 013494  add al, 4
    X86_AT(c, 0x13494u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13496:
    X86_TICK(c, 60);
    // 013496  out dx, al
    X86_AT(c, 0x13496u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013497  dec edx
    X86_AT(c, 0x13497u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013498  in al, dx
    X86_AT(c, 0x13498u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013499  out dx, al
    X86_AT(c, 0x13499u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01349a  inc edx
    X86_AT(c, 0x1349au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01349b  pop edx
    X86_AT(c, 0x1349bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01349c  pop eax
    X86_AT(c, 0x1349cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01349d  xor al, al
    X86_AT(c, 0x1349du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01349f  ret 
    X86_AT(c, 0x1349fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13440u, "ran off the end of a function");
}
void f_00013442(X86Cpu& c) {
    X86_TICK(c, 27);
    // 013442  mov dx, 0x4d5
    X86_AT(c, 0x13442u);
    s16(c, 2, 0x4D5u);
    // 013446  out dx, al
    X86_AT(c, 0x13446u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013447  mov ah, bl
    X86_AT(c, 0x13447u);
    s8(c, 4, g8(c, 3));
    // 013449  mov dl, 0xe3
    X86_AT(c, 0x13449u);
    s8(c, 2, 0xE3u);
    // 01344b  mov al, 3
    X86_AT(c, 0x1344bu);
    s8(c, 0, 0x3u);
    // 01344d  add ah, ah
    X86_AT(c, 0x1344du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 01344f  jae 0x13453
    X86_AT(c, 0x1344fu);
    if (x86_cc(c, 3)) { goto L_13453; }
    X86_TICK(c, 2);
    // 013451  add al, 4
    X86_AT(c, 0x13451u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13453:
    X86_TICK(c, 49);
    // 013453  out dx, al
    X86_AT(c, 0x13453u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013454  dec edx
    X86_AT(c, 0x13454u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013455  in al, dx
    X86_AT(c, 0x13455u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013456  out dx, al
    X86_AT(c, 0x13456u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013457  inc edx
    X86_AT(c, 0x13457u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013458  mov al, 2
    X86_AT(c, 0x13458u);
    s8(c, 0, 0x2u);
    // 01345a  add ah, ah
    X86_AT(c, 0x1345au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 01345c  jae 0x13460
    X86_AT(c, 0x1345cu);
    if (x86_cc(c, 3)) { goto L_13460; }
    X86_TICK(c, 2);
    // 01345e  add al, 4
    X86_AT(c, 0x1345eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13460:
    X86_TICK(c, 49);
    // 013460  out dx, al
    X86_AT(c, 0x13460u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013461  dec edx
    X86_AT(c, 0x13461u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013462  in al, dx
    X86_AT(c, 0x13462u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013463  out dx, al
    X86_AT(c, 0x13463u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013464  inc edx
    X86_AT(c, 0x13464u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013465  xor al, al
    X86_AT(c, 0x13465u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013467  add ah, ah
    X86_AT(c, 0x13467u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013469  jae 0x1346d
    X86_AT(c, 0x13469u);
    if (x86_cc(c, 3)) { goto L_1346d; }
    X86_TICK(c, 2);
    // 01346b  add al, 4
    X86_AT(c, 0x1346bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1346d:
    X86_TICK(c, 49);
    // 01346d  out dx, al
    X86_AT(c, 0x1346du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01346e  dec edx
    X86_AT(c, 0x1346eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01346f  in al, dx
    X86_AT(c, 0x1346fu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013470  out dx, al
    X86_AT(c, 0x13470u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013471  inc edx
    X86_AT(c, 0x13471u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013472  mov al, 1
    X86_AT(c, 0x13472u);
    s8(c, 0, 0x1u);
    // 013474  add ah, ah
    X86_AT(c, 0x13474u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013476  jae 0x1347a
    X86_AT(c, 0x13476u);
    if (x86_cc(c, 3)) { goto L_1347a; }
    X86_TICK(c, 2);
    // 013478  add al, 4
    X86_AT(c, 0x13478u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1347a:
    X86_TICK(c, 51);
    // 01347a  out dx, al
    X86_AT(c, 0x1347au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347b  dec edx
    X86_AT(c, 0x1347bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01347c  in al, dx
    X86_AT(c, 0x1347cu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01347d  out dx, al
    X86_AT(c, 0x1347du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347e  inc edx
    X86_AT(c, 0x1347eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01347f  mov dl, 0xe1
    X86_AT(c, 0x1347fu);
    s8(c, 2, 0xE1u);
    // 013481  xor al, al
    X86_AT(c, 0x13481u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013483  add ah, ah
    X86_AT(c, 0x13483u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013485  jae 0x13489
    X86_AT(c, 0x13485u);
    if (x86_cc(c, 3)) { goto L_13489; }
    X86_TICK(c, 2);
    // 013487  add al, 4
    X86_AT(c, 0x13487u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13489:
    X86_TICK(c, 49);
    // 013489  out dx, al
    X86_AT(c, 0x13489u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348a  dec edx
    X86_AT(c, 0x1348au);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01348b  in al, dx
    X86_AT(c, 0x1348bu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01348c  out dx, al
    X86_AT(c, 0x1348cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348d  inc edx
    X86_AT(c, 0x1348du);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01348e  mov al, 1
    X86_AT(c, 0x1348eu);
    s8(c, 0, 0x1u);
    // 013490  add ah, ah
    X86_AT(c, 0x13490u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013492  jae 0x13496
    X86_AT(c, 0x13492u);
    if (x86_cc(c, 3)) { goto L_13496; }
    X86_TICK(c, 2);
    // 013494  add al, 4
    X86_AT(c, 0x13494u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13496:
    X86_TICK(c, 60);
    // 013496  out dx, al
    X86_AT(c, 0x13496u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013497  dec edx
    X86_AT(c, 0x13497u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013498  in al, dx
    X86_AT(c, 0x13498u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013499  out dx, al
    X86_AT(c, 0x13499u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01349a  inc edx
    X86_AT(c, 0x1349au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01349b  pop edx
    X86_AT(c, 0x1349bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01349c  pop eax
    X86_AT(c, 0x1349cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01349d  xor al, al
    X86_AT(c, 0x1349du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01349f  ret 
    X86_AT(c, 0x1349fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13442u, "ran off the end of a function");
}
void f_00013446(X86Cpu& c) {
    X86_TICK(c, 25);
    // 013446  out dx, al
    X86_AT(c, 0x13446u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013447  mov ah, bl
    X86_AT(c, 0x13447u);
    s8(c, 4, g8(c, 3));
    // 013449  mov dl, 0xe3
    X86_AT(c, 0x13449u);
    s8(c, 2, 0xE3u);
    // 01344b  mov al, 3
    X86_AT(c, 0x1344bu);
    s8(c, 0, 0x3u);
    // 01344d  add ah, ah
    X86_AT(c, 0x1344du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 01344f  jae 0x13453
    X86_AT(c, 0x1344fu);
    if (x86_cc(c, 3)) { goto L_13453; }
    X86_TICK(c, 2);
    // 013451  add al, 4
    X86_AT(c, 0x13451u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13453:
    X86_TICK(c, 49);
    // 013453  out dx, al
    X86_AT(c, 0x13453u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013454  dec edx
    X86_AT(c, 0x13454u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013455  in al, dx
    X86_AT(c, 0x13455u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013456  out dx, al
    X86_AT(c, 0x13456u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013457  inc edx
    X86_AT(c, 0x13457u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013458  mov al, 2
    X86_AT(c, 0x13458u);
    s8(c, 0, 0x2u);
    // 01345a  add ah, ah
    X86_AT(c, 0x1345au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 01345c  jae 0x13460
    X86_AT(c, 0x1345cu);
    if (x86_cc(c, 3)) { goto L_13460; }
    X86_TICK(c, 2);
    // 01345e  add al, 4
    X86_AT(c, 0x1345eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13460:
    X86_TICK(c, 49);
    // 013460  out dx, al
    X86_AT(c, 0x13460u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013461  dec edx
    X86_AT(c, 0x13461u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013462  in al, dx
    X86_AT(c, 0x13462u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013463  out dx, al
    X86_AT(c, 0x13463u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013464  inc edx
    X86_AT(c, 0x13464u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013465  xor al, al
    X86_AT(c, 0x13465u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013467  add ah, ah
    X86_AT(c, 0x13467u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013469  jae 0x1346d
    X86_AT(c, 0x13469u);
    if (x86_cc(c, 3)) { goto L_1346d; }
    X86_TICK(c, 2);
    // 01346b  add al, 4
    X86_AT(c, 0x1346bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1346d:
    X86_TICK(c, 49);
    // 01346d  out dx, al
    X86_AT(c, 0x1346du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01346e  dec edx
    X86_AT(c, 0x1346eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01346f  in al, dx
    X86_AT(c, 0x1346fu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013470  out dx, al
    X86_AT(c, 0x13470u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013471  inc edx
    X86_AT(c, 0x13471u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013472  mov al, 1
    X86_AT(c, 0x13472u);
    s8(c, 0, 0x1u);
    // 013474  add ah, ah
    X86_AT(c, 0x13474u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013476  jae 0x1347a
    X86_AT(c, 0x13476u);
    if (x86_cc(c, 3)) { goto L_1347a; }
    X86_TICK(c, 2);
    // 013478  add al, 4
    X86_AT(c, 0x13478u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1347a:
    X86_TICK(c, 51);
    // 01347a  out dx, al
    X86_AT(c, 0x1347au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347b  dec edx
    X86_AT(c, 0x1347bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01347c  in al, dx
    X86_AT(c, 0x1347cu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01347d  out dx, al
    X86_AT(c, 0x1347du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347e  inc edx
    X86_AT(c, 0x1347eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01347f  mov dl, 0xe1
    X86_AT(c, 0x1347fu);
    s8(c, 2, 0xE1u);
    // 013481  xor al, al
    X86_AT(c, 0x13481u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013483  add ah, ah
    X86_AT(c, 0x13483u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013485  jae 0x13489
    X86_AT(c, 0x13485u);
    if (x86_cc(c, 3)) { goto L_13489; }
    X86_TICK(c, 2);
    // 013487  add al, 4
    X86_AT(c, 0x13487u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13489:
    X86_TICK(c, 49);
    // 013489  out dx, al
    X86_AT(c, 0x13489u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348a  dec edx
    X86_AT(c, 0x1348au);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01348b  in al, dx
    X86_AT(c, 0x1348bu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01348c  out dx, al
    X86_AT(c, 0x1348cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348d  inc edx
    X86_AT(c, 0x1348du);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01348e  mov al, 1
    X86_AT(c, 0x1348eu);
    s8(c, 0, 0x1u);
    // 013490  add ah, ah
    X86_AT(c, 0x13490u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013492  jae 0x13496
    X86_AT(c, 0x13492u);
    if (x86_cc(c, 3)) { goto L_13496; }
    X86_TICK(c, 2);
    // 013494  add al, 4
    X86_AT(c, 0x13494u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13496:
    X86_TICK(c, 60);
    // 013496  out dx, al
    X86_AT(c, 0x13496u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013497  dec edx
    X86_AT(c, 0x13497u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013498  in al, dx
    X86_AT(c, 0x13498u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013499  out dx, al
    X86_AT(c, 0x13499u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01349a  inc edx
    X86_AT(c, 0x1349au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01349b  pop edx
    X86_AT(c, 0x1349bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01349c  pop eax
    X86_AT(c, 0x1349cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01349d  xor al, al
    X86_AT(c, 0x1349du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01349f  ret 
    X86_AT(c, 0x1349fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13446u, "ran off the end of a function");
}
void f_00013447(X86Cpu& c) {
    X86_TICK(c, 13);
    // 013447  mov ah, bl
    X86_AT(c, 0x13447u);
    s8(c, 4, g8(c, 3));
    // 013449  mov dl, 0xe3
    X86_AT(c, 0x13449u);
    s8(c, 2, 0xE3u);
    // 01344b  mov al, 3
    X86_AT(c, 0x1344bu);
    s8(c, 0, 0x3u);
    // 01344d  add ah, ah
    X86_AT(c, 0x1344du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 01344f  jae 0x13453
    X86_AT(c, 0x1344fu);
    if (x86_cc(c, 3)) { goto L_13453; }
    X86_TICK(c, 2);
    // 013451  add al, 4
    X86_AT(c, 0x13451u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13453:
    X86_TICK(c, 49);
    // 013453  out dx, al
    X86_AT(c, 0x13453u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013454  dec edx
    X86_AT(c, 0x13454u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013455  in al, dx
    X86_AT(c, 0x13455u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013456  out dx, al
    X86_AT(c, 0x13456u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013457  inc edx
    X86_AT(c, 0x13457u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013458  mov al, 2
    X86_AT(c, 0x13458u);
    s8(c, 0, 0x2u);
    // 01345a  add ah, ah
    X86_AT(c, 0x1345au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 01345c  jae 0x13460
    X86_AT(c, 0x1345cu);
    if (x86_cc(c, 3)) { goto L_13460; }
    X86_TICK(c, 2);
    // 01345e  add al, 4
    X86_AT(c, 0x1345eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13460:
    X86_TICK(c, 49);
    // 013460  out dx, al
    X86_AT(c, 0x13460u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013461  dec edx
    X86_AT(c, 0x13461u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013462  in al, dx
    X86_AT(c, 0x13462u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013463  out dx, al
    X86_AT(c, 0x13463u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013464  inc edx
    X86_AT(c, 0x13464u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013465  xor al, al
    X86_AT(c, 0x13465u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013467  add ah, ah
    X86_AT(c, 0x13467u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013469  jae 0x1346d
    X86_AT(c, 0x13469u);
    if (x86_cc(c, 3)) { goto L_1346d; }
    X86_TICK(c, 2);
    // 01346b  add al, 4
    X86_AT(c, 0x1346bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1346d:
    X86_TICK(c, 49);
    // 01346d  out dx, al
    X86_AT(c, 0x1346du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01346e  dec edx
    X86_AT(c, 0x1346eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01346f  in al, dx
    X86_AT(c, 0x1346fu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013470  out dx, al
    X86_AT(c, 0x13470u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013471  inc edx
    X86_AT(c, 0x13471u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013472  mov al, 1
    X86_AT(c, 0x13472u);
    s8(c, 0, 0x1u);
    // 013474  add ah, ah
    X86_AT(c, 0x13474u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013476  jae 0x1347a
    X86_AT(c, 0x13476u);
    if (x86_cc(c, 3)) { goto L_1347a; }
    X86_TICK(c, 2);
    // 013478  add al, 4
    X86_AT(c, 0x13478u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1347a:
    X86_TICK(c, 51);
    // 01347a  out dx, al
    X86_AT(c, 0x1347au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347b  dec edx
    X86_AT(c, 0x1347bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01347c  in al, dx
    X86_AT(c, 0x1347cu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01347d  out dx, al
    X86_AT(c, 0x1347du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347e  inc edx
    X86_AT(c, 0x1347eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01347f  mov dl, 0xe1
    X86_AT(c, 0x1347fu);
    s8(c, 2, 0xE1u);
    // 013481  xor al, al
    X86_AT(c, 0x13481u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013483  add ah, ah
    X86_AT(c, 0x13483u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013485  jae 0x13489
    X86_AT(c, 0x13485u);
    if (x86_cc(c, 3)) { goto L_13489; }
    X86_TICK(c, 2);
    // 013487  add al, 4
    X86_AT(c, 0x13487u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13489:
    X86_TICK(c, 49);
    // 013489  out dx, al
    X86_AT(c, 0x13489u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348a  dec edx
    X86_AT(c, 0x1348au);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01348b  in al, dx
    X86_AT(c, 0x1348bu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01348c  out dx, al
    X86_AT(c, 0x1348cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348d  inc edx
    X86_AT(c, 0x1348du);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01348e  mov al, 1
    X86_AT(c, 0x1348eu);
    s8(c, 0, 0x1u);
    // 013490  add ah, ah
    X86_AT(c, 0x13490u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013492  jae 0x13496
    X86_AT(c, 0x13492u);
    if (x86_cc(c, 3)) { goto L_13496; }
    X86_TICK(c, 2);
    // 013494  add al, 4
    X86_AT(c, 0x13494u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13496:
    X86_TICK(c, 60);
    // 013496  out dx, al
    X86_AT(c, 0x13496u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013497  dec edx
    X86_AT(c, 0x13497u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013498  in al, dx
    X86_AT(c, 0x13498u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013499  out dx, al
    X86_AT(c, 0x13499u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01349a  inc edx
    X86_AT(c, 0x1349au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01349b  pop edx
    X86_AT(c, 0x1349bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01349c  pop eax
    X86_AT(c, 0x1349cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01349d  xor al, al
    X86_AT(c, 0x1349du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01349f  ret 
    X86_AT(c, 0x1349fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13447u, "ran off the end of a function");
}
void f_00013449(X86Cpu& c) {
    X86_TICK(c, 11);
    // 013449  mov dl, 0xe3
    X86_AT(c, 0x13449u);
    s8(c, 2, 0xE3u);
    // 01344b  mov al, 3
    X86_AT(c, 0x1344bu);
    s8(c, 0, 0x3u);
    // 01344d  add ah, ah
    X86_AT(c, 0x1344du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 01344f  jae 0x13453
    X86_AT(c, 0x1344fu);
    if (x86_cc(c, 3)) { goto L_13453; }
    X86_TICK(c, 2);
    // 013451  add al, 4
    X86_AT(c, 0x13451u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13453:
    X86_TICK(c, 49);
    // 013453  out dx, al
    X86_AT(c, 0x13453u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013454  dec edx
    X86_AT(c, 0x13454u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013455  in al, dx
    X86_AT(c, 0x13455u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013456  out dx, al
    X86_AT(c, 0x13456u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013457  inc edx
    X86_AT(c, 0x13457u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013458  mov al, 2
    X86_AT(c, 0x13458u);
    s8(c, 0, 0x2u);
    // 01345a  add ah, ah
    X86_AT(c, 0x1345au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 01345c  jae 0x13460
    X86_AT(c, 0x1345cu);
    if (x86_cc(c, 3)) { goto L_13460; }
    X86_TICK(c, 2);
    // 01345e  add al, 4
    X86_AT(c, 0x1345eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13460:
    X86_TICK(c, 49);
    // 013460  out dx, al
    X86_AT(c, 0x13460u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013461  dec edx
    X86_AT(c, 0x13461u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013462  in al, dx
    X86_AT(c, 0x13462u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013463  out dx, al
    X86_AT(c, 0x13463u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013464  inc edx
    X86_AT(c, 0x13464u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013465  xor al, al
    X86_AT(c, 0x13465u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013467  add ah, ah
    X86_AT(c, 0x13467u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013469  jae 0x1346d
    X86_AT(c, 0x13469u);
    if (x86_cc(c, 3)) { goto L_1346d; }
    X86_TICK(c, 2);
    // 01346b  add al, 4
    X86_AT(c, 0x1346bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1346d:
    X86_TICK(c, 49);
    // 01346d  out dx, al
    X86_AT(c, 0x1346du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01346e  dec edx
    X86_AT(c, 0x1346eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01346f  in al, dx
    X86_AT(c, 0x1346fu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013470  out dx, al
    X86_AT(c, 0x13470u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013471  inc edx
    X86_AT(c, 0x13471u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013472  mov al, 1
    X86_AT(c, 0x13472u);
    s8(c, 0, 0x1u);
    // 013474  add ah, ah
    X86_AT(c, 0x13474u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013476  jae 0x1347a
    X86_AT(c, 0x13476u);
    if (x86_cc(c, 3)) { goto L_1347a; }
    X86_TICK(c, 2);
    // 013478  add al, 4
    X86_AT(c, 0x13478u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1347a:
    X86_TICK(c, 51);
    // 01347a  out dx, al
    X86_AT(c, 0x1347au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347b  dec edx
    X86_AT(c, 0x1347bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01347c  in al, dx
    X86_AT(c, 0x1347cu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01347d  out dx, al
    X86_AT(c, 0x1347du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347e  inc edx
    X86_AT(c, 0x1347eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01347f  mov dl, 0xe1
    X86_AT(c, 0x1347fu);
    s8(c, 2, 0xE1u);
    // 013481  xor al, al
    X86_AT(c, 0x13481u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013483  add ah, ah
    X86_AT(c, 0x13483u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013485  jae 0x13489
    X86_AT(c, 0x13485u);
    if (x86_cc(c, 3)) { goto L_13489; }
    X86_TICK(c, 2);
    // 013487  add al, 4
    X86_AT(c, 0x13487u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13489:
    X86_TICK(c, 49);
    // 013489  out dx, al
    X86_AT(c, 0x13489u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348a  dec edx
    X86_AT(c, 0x1348au);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01348b  in al, dx
    X86_AT(c, 0x1348bu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01348c  out dx, al
    X86_AT(c, 0x1348cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348d  inc edx
    X86_AT(c, 0x1348du);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01348e  mov al, 1
    X86_AT(c, 0x1348eu);
    s8(c, 0, 0x1u);
    // 013490  add ah, ah
    X86_AT(c, 0x13490u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013492  jae 0x13496
    X86_AT(c, 0x13492u);
    if (x86_cc(c, 3)) { goto L_13496; }
    X86_TICK(c, 2);
    // 013494  add al, 4
    X86_AT(c, 0x13494u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13496:
    X86_TICK(c, 60);
    // 013496  out dx, al
    X86_AT(c, 0x13496u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013497  dec edx
    X86_AT(c, 0x13497u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013498  in al, dx
    X86_AT(c, 0x13498u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013499  out dx, al
    X86_AT(c, 0x13499u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01349a  inc edx
    X86_AT(c, 0x1349au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01349b  pop edx
    X86_AT(c, 0x1349bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01349c  pop eax
    X86_AT(c, 0x1349cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01349d  xor al, al
    X86_AT(c, 0x1349du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01349f  ret 
    X86_AT(c, 0x1349fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13449u, "ran off the end of a function");
}
void f_0001344b(X86Cpu& c) {
    X86_TICK(c, 9);
    // 01344b  mov al, 3
    X86_AT(c, 0x1344bu);
    s8(c, 0, 0x3u);
    // 01344d  add ah, ah
    X86_AT(c, 0x1344du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 01344f  jae 0x13453
    X86_AT(c, 0x1344fu);
    if (x86_cc(c, 3)) { goto L_13453; }
    X86_TICK(c, 2);
    // 013451  add al, 4
    X86_AT(c, 0x13451u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13453:
    X86_TICK(c, 49);
    // 013453  out dx, al
    X86_AT(c, 0x13453u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013454  dec edx
    X86_AT(c, 0x13454u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013455  in al, dx
    X86_AT(c, 0x13455u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013456  out dx, al
    X86_AT(c, 0x13456u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013457  inc edx
    X86_AT(c, 0x13457u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013458  mov al, 2
    X86_AT(c, 0x13458u);
    s8(c, 0, 0x2u);
    // 01345a  add ah, ah
    X86_AT(c, 0x1345au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 01345c  jae 0x13460
    X86_AT(c, 0x1345cu);
    if (x86_cc(c, 3)) { goto L_13460; }
    X86_TICK(c, 2);
    // 01345e  add al, 4
    X86_AT(c, 0x1345eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13460:
    X86_TICK(c, 49);
    // 013460  out dx, al
    X86_AT(c, 0x13460u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013461  dec edx
    X86_AT(c, 0x13461u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013462  in al, dx
    X86_AT(c, 0x13462u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013463  out dx, al
    X86_AT(c, 0x13463u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013464  inc edx
    X86_AT(c, 0x13464u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013465  xor al, al
    X86_AT(c, 0x13465u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013467  add ah, ah
    X86_AT(c, 0x13467u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013469  jae 0x1346d
    X86_AT(c, 0x13469u);
    if (x86_cc(c, 3)) { goto L_1346d; }
    X86_TICK(c, 2);
    // 01346b  add al, 4
    X86_AT(c, 0x1346bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1346d:
    X86_TICK(c, 49);
    // 01346d  out dx, al
    X86_AT(c, 0x1346du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01346e  dec edx
    X86_AT(c, 0x1346eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01346f  in al, dx
    X86_AT(c, 0x1346fu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013470  out dx, al
    X86_AT(c, 0x13470u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013471  inc edx
    X86_AT(c, 0x13471u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013472  mov al, 1
    X86_AT(c, 0x13472u);
    s8(c, 0, 0x1u);
    // 013474  add ah, ah
    X86_AT(c, 0x13474u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013476  jae 0x1347a
    X86_AT(c, 0x13476u);
    if (x86_cc(c, 3)) { goto L_1347a; }
    X86_TICK(c, 2);
    // 013478  add al, 4
    X86_AT(c, 0x13478u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1347a:
    X86_TICK(c, 51);
    // 01347a  out dx, al
    X86_AT(c, 0x1347au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347b  dec edx
    X86_AT(c, 0x1347bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01347c  in al, dx
    X86_AT(c, 0x1347cu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01347d  out dx, al
    X86_AT(c, 0x1347du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347e  inc edx
    X86_AT(c, 0x1347eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01347f  mov dl, 0xe1
    X86_AT(c, 0x1347fu);
    s8(c, 2, 0xE1u);
    // 013481  xor al, al
    X86_AT(c, 0x13481u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013483  add ah, ah
    X86_AT(c, 0x13483u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013485  jae 0x13489
    X86_AT(c, 0x13485u);
    if (x86_cc(c, 3)) { goto L_13489; }
    X86_TICK(c, 2);
    // 013487  add al, 4
    X86_AT(c, 0x13487u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13489:
    X86_TICK(c, 49);
    // 013489  out dx, al
    X86_AT(c, 0x13489u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348a  dec edx
    X86_AT(c, 0x1348au);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01348b  in al, dx
    X86_AT(c, 0x1348bu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01348c  out dx, al
    X86_AT(c, 0x1348cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348d  inc edx
    X86_AT(c, 0x1348du);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01348e  mov al, 1
    X86_AT(c, 0x1348eu);
    s8(c, 0, 0x1u);
    // 013490  add ah, ah
    X86_AT(c, 0x13490u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013492  jae 0x13496
    X86_AT(c, 0x13492u);
    if (x86_cc(c, 3)) { goto L_13496; }
    X86_TICK(c, 2);
    // 013494  add al, 4
    X86_AT(c, 0x13494u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13496:
    X86_TICK(c, 60);
    // 013496  out dx, al
    X86_AT(c, 0x13496u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013497  dec edx
    X86_AT(c, 0x13497u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013498  in al, dx
    X86_AT(c, 0x13498u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013499  out dx, al
    X86_AT(c, 0x13499u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01349a  inc edx
    X86_AT(c, 0x1349au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01349b  pop edx
    X86_AT(c, 0x1349bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01349c  pop eax
    X86_AT(c, 0x1349cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01349d  xor al, al
    X86_AT(c, 0x1349du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01349f  ret 
    X86_AT(c, 0x1349fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1344bu, "ran off the end of a function");
}
void f_0001344d(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01344d  add ah, ah
    X86_AT(c, 0x1344du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 01344f  jae 0x13453
    X86_AT(c, 0x1344fu);
    if (x86_cc(c, 3)) { goto L_13453; }
    X86_TICK(c, 2);
    // 013451  add al, 4
    X86_AT(c, 0x13451u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13453:
    X86_TICK(c, 49);
    // 013453  out dx, al
    X86_AT(c, 0x13453u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013454  dec edx
    X86_AT(c, 0x13454u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013455  in al, dx
    X86_AT(c, 0x13455u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013456  out dx, al
    X86_AT(c, 0x13456u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013457  inc edx
    X86_AT(c, 0x13457u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013458  mov al, 2
    X86_AT(c, 0x13458u);
    s8(c, 0, 0x2u);
    // 01345a  add ah, ah
    X86_AT(c, 0x1345au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 01345c  jae 0x13460
    X86_AT(c, 0x1345cu);
    if (x86_cc(c, 3)) { goto L_13460; }
    X86_TICK(c, 2);
    // 01345e  add al, 4
    X86_AT(c, 0x1345eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13460:
    X86_TICK(c, 49);
    // 013460  out dx, al
    X86_AT(c, 0x13460u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013461  dec edx
    X86_AT(c, 0x13461u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013462  in al, dx
    X86_AT(c, 0x13462u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013463  out dx, al
    X86_AT(c, 0x13463u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013464  inc edx
    X86_AT(c, 0x13464u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013465  xor al, al
    X86_AT(c, 0x13465u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013467  add ah, ah
    X86_AT(c, 0x13467u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013469  jae 0x1346d
    X86_AT(c, 0x13469u);
    if (x86_cc(c, 3)) { goto L_1346d; }
    X86_TICK(c, 2);
    // 01346b  add al, 4
    X86_AT(c, 0x1346bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1346d:
    X86_TICK(c, 49);
    // 01346d  out dx, al
    X86_AT(c, 0x1346du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01346e  dec edx
    X86_AT(c, 0x1346eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01346f  in al, dx
    X86_AT(c, 0x1346fu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013470  out dx, al
    X86_AT(c, 0x13470u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013471  inc edx
    X86_AT(c, 0x13471u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013472  mov al, 1
    X86_AT(c, 0x13472u);
    s8(c, 0, 0x1u);
    // 013474  add ah, ah
    X86_AT(c, 0x13474u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013476  jae 0x1347a
    X86_AT(c, 0x13476u);
    if (x86_cc(c, 3)) { goto L_1347a; }
    X86_TICK(c, 2);
    // 013478  add al, 4
    X86_AT(c, 0x13478u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1347a:
    X86_TICK(c, 51);
    // 01347a  out dx, al
    X86_AT(c, 0x1347au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347b  dec edx
    X86_AT(c, 0x1347bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01347c  in al, dx
    X86_AT(c, 0x1347cu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01347d  out dx, al
    X86_AT(c, 0x1347du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347e  inc edx
    X86_AT(c, 0x1347eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01347f  mov dl, 0xe1
    X86_AT(c, 0x1347fu);
    s8(c, 2, 0xE1u);
    // 013481  xor al, al
    X86_AT(c, 0x13481u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013483  add ah, ah
    X86_AT(c, 0x13483u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013485  jae 0x13489
    X86_AT(c, 0x13485u);
    if (x86_cc(c, 3)) { goto L_13489; }
    X86_TICK(c, 2);
    // 013487  add al, 4
    X86_AT(c, 0x13487u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13489:
    X86_TICK(c, 49);
    // 013489  out dx, al
    X86_AT(c, 0x13489u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348a  dec edx
    X86_AT(c, 0x1348au);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01348b  in al, dx
    X86_AT(c, 0x1348bu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01348c  out dx, al
    X86_AT(c, 0x1348cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348d  inc edx
    X86_AT(c, 0x1348du);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01348e  mov al, 1
    X86_AT(c, 0x1348eu);
    s8(c, 0, 0x1u);
    // 013490  add ah, ah
    X86_AT(c, 0x13490u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013492  jae 0x13496
    X86_AT(c, 0x13492u);
    if (x86_cc(c, 3)) { goto L_13496; }
    X86_TICK(c, 2);
    // 013494  add al, 4
    X86_AT(c, 0x13494u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13496:
    X86_TICK(c, 60);
    // 013496  out dx, al
    X86_AT(c, 0x13496u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013497  dec edx
    X86_AT(c, 0x13497u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013498  in al, dx
    X86_AT(c, 0x13498u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013499  out dx, al
    X86_AT(c, 0x13499u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01349a  inc edx
    X86_AT(c, 0x1349au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01349b  pop edx
    X86_AT(c, 0x1349bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01349c  pop eax
    X86_AT(c, 0x1349cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01349d  xor al, al
    X86_AT(c, 0x1349du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01349f  ret 
    X86_AT(c, 0x1349fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1344du, "ran off the end of a function");
}
void f_0001344f(X86Cpu& c) {
    X86_TICK(c, 5);
    // 01344f  jae 0x13453
    X86_AT(c, 0x1344fu);
    if (x86_cc(c, 3)) { goto L_13453; }
    X86_TICK(c, 2);
    // 013451  add al, 4
    X86_AT(c, 0x13451u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13453:
    X86_TICK(c, 49);
    // 013453  out dx, al
    X86_AT(c, 0x13453u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013454  dec edx
    X86_AT(c, 0x13454u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013455  in al, dx
    X86_AT(c, 0x13455u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013456  out dx, al
    X86_AT(c, 0x13456u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013457  inc edx
    X86_AT(c, 0x13457u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013458  mov al, 2
    X86_AT(c, 0x13458u);
    s8(c, 0, 0x2u);
    // 01345a  add ah, ah
    X86_AT(c, 0x1345au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 01345c  jae 0x13460
    X86_AT(c, 0x1345cu);
    if (x86_cc(c, 3)) { goto L_13460; }
    X86_TICK(c, 2);
    // 01345e  add al, 4
    X86_AT(c, 0x1345eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13460:
    X86_TICK(c, 49);
    // 013460  out dx, al
    X86_AT(c, 0x13460u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013461  dec edx
    X86_AT(c, 0x13461u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013462  in al, dx
    X86_AT(c, 0x13462u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013463  out dx, al
    X86_AT(c, 0x13463u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013464  inc edx
    X86_AT(c, 0x13464u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013465  xor al, al
    X86_AT(c, 0x13465u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013467  add ah, ah
    X86_AT(c, 0x13467u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013469  jae 0x1346d
    X86_AT(c, 0x13469u);
    if (x86_cc(c, 3)) { goto L_1346d; }
    X86_TICK(c, 2);
    // 01346b  add al, 4
    X86_AT(c, 0x1346bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1346d:
    X86_TICK(c, 49);
    // 01346d  out dx, al
    X86_AT(c, 0x1346du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01346e  dec edx
    X86_AT(c, 0x1346eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01346f  in al, dx
    X86_AT(c, 0x1346fu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013470  out dx, al
    X86_AT(c, 0x13470u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013471  inc edx
    X86_AT(c, 0x13471u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013472  mov al, 1
    X86_AT(c, 0x13472u);
    s8(c, 0, 0x1u);
    // 013474  add ah, ah
    X86_AT(c, 0x13474u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013476  jae 0x1347a
    X86_AT(c, 0x13476u);
    if (x86_cc(c, 3)) { goto L_1347a; }
    X86_TICK(c, 2);
    // 013478  add al, 4
    X86_AT(c, 0x13478u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1347a:
    X86_TICK(c, 51);
    // 01347a  out dx, al
    X86_AT(c, 0x1347au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347b  dec edx
    X86_AT(c, 0x1347bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01347c  in al, dx
    X86_AT(c, 0x1347cu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01347d  out dx, al
    X86_AT(c, 0x1347du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347e  inc edx
    X86_AT(c, 0x1347eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01347f  mov dl, 0xe1
    X86_AT(c, 0x1347fu);
    s8(c, 2, 0xE1u);
    // 013481  xor al, al
    X86_AT(c, 0x13481u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013483  add ah, ah
    X86_AT(c, 0x13483u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013485  jae 0x13489
    X86_AT(c, 0x13485u);
    if (x86_cc(c, 3)) { goto L_13489; }
    X86_TICK(c, 2);
    // 013487  add al, 4
    X86_AT(c, 0x13487u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13489:
    X86_TICK(c, 49);
    // 013489  out dx, al
    X86_AT(c, 0x13489u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348a  dec edx
    X86_AT(c, 0x1348au);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01348b  in al, dx
    X86_AT(c, 0x1348bu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01348c  out dx, al
    X86_AT(c, 0x1348cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348d  inc edx
    X86_AT(c, 0x1348du);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01348e  mov al, 1
    X86_AT(c, 0x1348eu);
    s8(c, 0, 0x1u);
    // 013490  add ah, ah
    X86_AT(c, 0x13490u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013492  jae 0x13496
    X86_AT(c, 0x13492u);
    if (x86_cc(c, 3)) { goto L_13496; }
    X86_TICK(c, 2);
    // 013494  add al, 4
    X86_AT(c, 0x13494u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13496:
    X86_TICK(c, 60);
    // 013496  out dx, al
    X86_AT(c, 0x13496u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013497  dec edx
    X86_AT(c, 0x13497u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013498  in al, dx
    X86_AT(c, 0x13498u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013499  out dx, al
    X86_AT(c, 0x13499u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01349a  inc edx
    X86_AT(c, 0x1349au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01349b  pop edx
    X86_AT(c, 0x1349bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01349c  pop eax
    X86_AT(c, 0x1349cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01349d  xor al, al
    X86_AT(c, 0x1349du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01349f  ret 
    X86_AT(c, 0x1349fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1344fu, "ran off the end of a function");
}
void f_00013453(X86Cpu& c) {
    X86_TICK(c, 49);
    // 013453  out dx, al
    X86_AT(c, 0x13453u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013454  dec edx
    X86_AT(c, 0x13454u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013455  in al, dx
    X86_AT(c, 0x13455u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013456  out dx, al
    X86_AT(c, 0x13456u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013457  inc edx
    X86_AT(c, 0x13457u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013458  mov al, 2
    X86_AT(c, 0x13458u);
    s8(c, 0, 0x2u);
    // 01345a  add ah, ah
    X86_AT(c, 0x1345au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 01345c  jae 0x13460
    X86_AT(c, 0x1345cu);
    if (x86_cc(c, 3)) { goto L_13460; }
    X86_TICK(c, 2);
    // 01345e  add al, 4
    X86_AT(c, 0x1345eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13460:
    X86_TICK(c, 49);
    // 013460  out dx, al
    X86_AT(c, 0x13460u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013461  dec edx
    X86_AT(c, 0x13461u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013462  in al, dx
    X86_AT(c, 0x13462u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013463  out dx, al
    X86_AT(c, 0x13463u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013464  inc edx
    X86_AT(c, 0x13464u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013465  xor al, al
    X86_AT(c, 0x13465u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013467  add ah, ah
    X86_AT(c, 0x13467u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013469  jae 0x1346d
    X86_AT(c, 0x13469u);
    if (x86_cc(c, 3)) { goto L_1346d; }
    X86_TICK(c, 2);
    // 01346b  add al, 4
    X86_AT(c, 0x1346bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1346d:
    X86_TICK(c, 49);
    // 01346d  out dx, al
    X86_AT(c, 0x1346du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01346e  dec edx
    X86_AT(c, 0x1346eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01346f  in al, dx
    X86_AT(c, 0x1346fu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013470  out dx, al
    X86_AT(c, 0x13470u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013471  inc edx
    X86_AT(c, 0x13471u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013472  mov al, 1
    X86_AT(c, 0x13472u);
    s8(c, 0, 0x1u);
    // 013474  add ah, ah
    X86_AT(c, 0x13474u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013476  jae 0x1347a
    X86_AT(c, 0x13476u);
    if (x86_cc(c, 3)) { goto L_1347a; }
    X86_TICK(c, 2);
    // 013478  add al, 4
    X86_AT(c, 0x13478u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1347a:
    X86_TICK(c, 51);
    // 01347a  out dx, al
    X86_AT(c, 0x1347au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347b  dec edx
    X86_AT(c, 0x1347bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01347c  in al, dx
    X86_AT(c, 0x1347cu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01347d  out dx, al
    X86_AT(c, 0x1347du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347e  inc edx
    X86_AT(c, 0x1347eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01347f  mov dl, 0xe1
    X86_AT(c, 0x1347fu);
    s8(c, 2, 0xE1u);
    // 013481  xor al, al
    X86_AT(c, 0x13481u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013483  add ah, ah
    X86_AT(c, 0x13483u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013485  jae 0x13489
    X86_AT(c, 0x13485u);
    if (x86_cc(c, 3)) { goto L_13489; }
    X86_TICK(c, 2);
    // 013487  add al, 4
    X86_AT(c, 0x13487u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13489:
    X86_TICK(c, 49);
    // 013489  out dx, al
    X86_AT(c, 0x13489u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348a  dec edx
    X86_AT(c, 0x1348au);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01348b  in al, dx
    X86_AT(c, 0x1348bu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01348c  out dx, al
    X86_AT(c, 0x1348cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348d  inc edx
    X86_AT(c, 0x1348du);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01348e  mov al, 1
    X86_AT(c, 0x1348eu);
    s8(c, 0, 0x1u);
    // 013490  add ah, ah
    X86_AT(c, 0x13490u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013492  jae 0x13496
    X86_AT(c, 0x13492u);
    if (x86_cc(c, 3)) { goto L_13496; }
    X86_TICK(c, 2);
    // 013494  add al, 4
    X86_AT(c, 0x13494u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13496:
    X86_TICK(c, 60);
    // 013496  out dx, al
    X86_AT(c, 0x13496u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013497  dec edx
    X86_AT(c, 0x13497u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013498  in al, dx
    X86_AT(c, 0x13498u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013499  out dx, al
    X86_AT(c, 0x13499u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01349a  inc edx
    X86_AT(c, 0x1349au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01349b  pop edx
    X86_AT(c, 0x1349bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01349c  pop eax
    X86_AT(c, 0x1349cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01349d  xor al, al
    X86_AT(c, 0x1349du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01349f  ret 
    X86_AT(c, 0x1349fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13453u, "ran off the end of a function");
}
void f_00013454(X86Cpu& c) {
    X86_TICK(c, 37);
    // 013454  dec edx
    X86_AT(c, 0x13454u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013455  in al, dx
    X86_AT(c, 0x13455u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013456  out dx, al
    X86_AT(c, 0x13456u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013457  inc edx
    X86_AT(c, 0x13457u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013458  mov al, 2
    X86_AT(c, 0x13458u);
    s8(c, 0, 0x2u);
    // 01345a  add ah, ah
    X86_AT(c, 0x1345au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 01345c  jae 0x13460
    X86_AT(c, 0x1345cu);
    if (x86_cc(c, 3)) { goto L_13460; }
    X86_TICK(c, 2);
    // 01345e  add al, 4
    X86_AT(c, 0x1345eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13460:
    X86_TICK(c, 49);
    // 013460  out dx, al
    X86_AT(c, 0x13460u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013461  dec edx
    X86_AT(c, 0x13461u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013462  in al, dx
    X86_AT(c, 0x13462u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013463  out dx, al
    X86_AT(c, 0x13463u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013464  inc edx
    X86_AT(c, 0x13464u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013465  xor al, al
    X86_AT(c, 0x13465u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013467  add ah, ah
    X86_AT(c, 0x13467u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013469  jae 0x1346d
    X86_AT(c, 0x13469u);
    if (x86_cc(c, 3)) { goto L_1346d; }
    X86_TICK(c, 2);
    // 01346b  add al, 4
    X86_AT(c, 0x1346bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1346d:
    X86_TICK(c, 49);
    // 01346d  out dx, al
    X86_AT(c, 0x1346du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01346e  dec edx
    X86_AT(c, 0x1346eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01346f  in al, dx
    X86_AT(c, 0x1346fu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013470  out dx, al
    X86_AT(c, 0x13470u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013471  inc edx
    X86_AT(c, 0x13471u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013472  mov al, 1
    X86_AT(c, 0x13472u);
    s8(c, 0, 0x1u);
    // 013474  add ah, ah
    X86_AT(c, 0x13474u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013476  jae 0x1347a
    X86_AT(c, 0x13476u);
    if (x86_cc(c, 3)) { goto L_1347a; }
    X86_TICK(c, 2);
    // 013478  add al, 4
    X86_AT(c, 0x13478u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1347a:
    X86_TICK(c, 51);
    // 01347a  out dx, al
    X86_AT(c, 0x1347au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347b  dec edx
    X86_AT(c, 0x1347bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01347c  in al, dx
    X86_AT(c, 0x1347cu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01347d  out dx, al
    X86_AT(c, 0x1347du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347e  inc edx
    X86_AT(c, 0x1347eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01347f  mov dl, 0xe1
    X86_AT(c, 0x1347fu);
    s8(c, 2, 0xE1u);
    // 013481  xor al, al
    X86_AT(c, 0x13481u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013483  add ah, ah
    X86_AT(c, 0x13483u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013485  jae 0x13489
    X86_AT(c, 0x13485u);
    if (x86_cc(c, 3)) { goto L_13489; }
    X86_TICK(c, 2);
    // 013487  add al, 4
    X86_AT(c, 0x13487u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13489:
    X86_TICK(c, 49);
    // 013489  out dx, al
    X86_AT(c, 0x13489u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348a  dec edx
    X86_AT(c, 0x1348au);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01348b  in al, dx
    X86_AT(c, 0x1348bu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01348c  out dx, al
    X86_AT(c, 0x1348cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348d  inc edx
    X86_AT(c, 0x1348du);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01348e  mov al, 1
    X86_AT(c, 0x1348eu);
    s8(c, 0, 0x1u);
    // 013490  add ah, ah
    X86_AT(c, 0x13490u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013492  jae 0x13496
    X86_AT(c, 0x13492u);
    if (x86_cc(c, 3)) { goto L_13496; }
    X86_TICK(c, 2);
    // 013494  add al, 4
    X86_AT(c, 0x13494u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13496:
    X86_TICK(c, 60);
    // 013496  out dx, al
    X86_AT(c, 0x13496u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013497  dec edx
    X86_AT(c, 0x13497u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013498  in al, dx
    X86_AT(c, 0x13498u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013499  out dx, al
    X86_AT(c, 0x13499u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01349a  inc edx
    X86_AT(c, 0x1349au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01349b  pop edx
    X86_AT(c, 0x1349bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01349c  pop eax
    X86_AT(c, 0x1349cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01349d  xor al, al
    X86_AT(c, 0x1349du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01349f  ret 
    X86_AT(c, 0x1349fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13454u, "ran off the end of a function");
}
void f_00013455(X86Cpu& c) {
    X86_TICK(c, 35);
    // 013455  in al, dx
    X86_AT(c, 0x13455u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013456  out dx, al
    X86_AT(c, 0x13456u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013457  inc edx
    X86_AT(c, 0x13457u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013458  mov al, 2
    X86_AT(c, 0x13458u);
    s8(c, 0, 0x2u);
    // 01345a  add ah, ah
    X86_AT(c, 0x1345au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 01345c  jae 0x13460
    X86_AT(c, 0x1345cu);
    if (x86_cc(c, 3)) { goto L_13460; }
    X86_TICK(c, 2);
    // 01345e  add al, 4
    X86_AT(c, 0x1345eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13460:
    X86_TICK(c, 49);
    // 013460  out dx, al
    X86_AT(c, 0x13460u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013461  dec edx
    X86_AT(c, 0x13461u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013462  in al, dx
    X86_AT(c, 0x13462u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013463  out dx, al
    X86_AT(c, 0x13463u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013464  inc edx
    X86_AT(c, 0x13464u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013465  xor al, al
    X86_AT(c, 0x13465u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013467  add ah, ah
    X86_AT(c, 0x13467u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013469  jae 0x1346d
    X86_AT(c, 0x13469u);
    if (x86_cc(c, 3)) { goto L_1346d; }
    X86_TICK(c, 2);
    // 01346b  add al, 4
    X86_AT(c, 0x1346bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1346d:
    X86_TICK(c, 49);
    // 01346d  out dx, al
    X86_AT(c, 0x1346du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01346e  dec edx
    X86_AT(c, 0x1346eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01346f  in al, dx
    X86_AT(c, 0x1346fu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013470  out dx, al
    X86_AT(c, 0x13470u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013471  inc edx
    X86_AT(c, 0x13471u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 013472  mov al, 1
    X86_AT(c, 0x13472u);
    s8(c, 0, 0x1u);
    // 013474  add ah, ah
    X86_AT(c, 0x13474u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013476  jae 0x1347a
    X86_AT(c, 0x13476u);
    if (x86_cc(c, 3)) { goto L_1347a; }
    X86_TICK(c, 2);
    // 013478  add al, 4
    X86_AT(c, 0x13478u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_1347a:
    X86_TICK(c, 51);
    // 01347a  out dx, al
    X86_AT(c, 0x1347au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347b  dec edx
    X86_AT(c, 0x1347bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01347c  in al, dx
    X86_AT(c, 0x1347cu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01347d  out dx, al
    X86_AT(c, 0x1347du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01347e  inc edx
    X86_AT(c, 0x1347eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01347f  mov dl, 0xe1
    X86_AT(c, 0x1347fu);
    s8(c, 2, 0xE1u);
    // 013481  xor al, al
    X86_AT(c, 0x13481u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013483  add ah, ah
    X86_AT(c, 0x13483u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013485  jae 0x13489
    X86_AT(c, 0x13485u);
    if (x86_cc(c, 3)) { goto L_13489; }
    X86_TICK(c, 2);
    // 013487  add al, 4
    X86_AT(c, 0x13487u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13489:
    X86_TICK(c, 49);
    // 013489  out dx, al
    X86_AT(c, 0x13489u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348a  dec edx
    X86_AT(c, 0x1348au);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 01348b  in al, dx
    X86_AT(c, 0x1348bu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01348c  out dx, al
    X86_AT(c, 0x1348cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01348d  inc edx
    X86_AT(c, 0x1348du);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01348e  mov al, 1
    X86_AT(c, 0x1348eu);
    s8(c, 0, 0x1u);
    // 013490  add ah, ah
    X86_AT(c, 0x13490u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 013492  jae 0x13496
    X86_AT(c, 0x13492u);
    if (x86_cc(c, 3)) { goto L_13496; }
    X86_TICK(c, 2);
    // 013494  add al, 4
    X86_AT(c, 0x13494u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
L_13496:
    X86_TICK(c, 60);
    // 013496  out dx, al
    X86_AT(c, 0x13496u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013497  dec edx
    X86_AT(c, 0x13497u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 013498  in al, dx
    X86_AT(c, 0x13498u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013499  out dx, al
    X86_AT(c, 0x13499u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01349a  inc edx
    X86_AT(c, 0x1349au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 01349b  pop edx
    X86_AT(c, 0x1349bu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01349c  pop eax
    X86_AT(c, 0x1349cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01349d  xor al, al
    X86_AT(c, 0x1349du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01349f  ret 
    X86_AT(c, 0x1349fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13455u, "ran off the end of a function");
}
}
