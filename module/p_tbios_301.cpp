#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00013456(X86Cpu& c) {
    X86_TICK(c, 23);
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
    x86_fault(c, 0x13456u, "ran off the end of a function");
}
void f_00013457(X86Cpu& c) {
    X86_TICK(c, 11);
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
    x86_fault(c, 0x13457u, "ran off the end of a function");
}
void f_00013458(X86Cpu& c) {
    X86_TICK(c, 9);
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
    x86_fault(c, 0x13458u, "ran off the end of a function");
}
void f_0001345a(X86Cpu& c) {
    X86_TICK(c, 7);
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
    x86_fault(c, 0x1345au, "ran off the end of a function");
}
void f_0001345c(X86Cpu& c) {
    X86_TICK(c, 5);
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
    x86_fault(c, 0x1345cu, "ran off the end of a function");
}
void f_00013460(X86Cpu& c) {
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
    x86_fault(c, 0x13460u, "ran off the end of a function");
}
void f_00013461(X86Cpu& c) {
    X86_TICK(c, 37);
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
    x86_fault(c, 0x13461u, "ran off the end of a function");
}
void f_00013462(X86Cpu& c) {
    X86_TICK(c, 35);
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
    x86_fault(c, 0x13462u, "ran off the end of a function");
}
void f_00013463(X86Cpu& c) {
    X86_TICK(c, 23);
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
    x86_fault(c, 0x13463u, "ran off the end of a function");
}
void f_00013464(X86Cpu& c) {
    X86_TICK(c, 11);
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
    x86_fault(c, 0x13464u, "ran off the end of a function");
}
void f_00013465(X86Cpu& c) {
    X86_TICK(c, 9);
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
    x86_fault(c, 0x13465u, "ran off the end of a function");
}
void f_00013467(X86Cpu& c) {
    X86_TICK(c, 7);
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
    x86_fault(c, 0x13467u, "ran off the end of a function");
}
void f_00013469(X86Cpu& c) {
    X86_TICK(c, 5);
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
    x86_fault(c, 0x13469u, "ran off the end of a function");
}
void f_0001346b(X86Cpu& c) {
    X86_TICK(c, 51);
    // 01346b  add al, 4
    X86_AT(c, 0x1346bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x1346bu, "ran off the end of a function");
}
void f_0001346d(X86Cpu& c) {
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
    x86_fault(c, 0x1346du, "ran off the end of a function");
}
void f_0001346e(X86Cpu& c) {
    X86_TICK(c, 37);
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
    x86_fault(c, 0x1346eu, "ran off the end of a function");
}
void f_0001346f(X86Cpu& c) {
    X86_TICK(c, 35);
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
    x86_fault(c, 0x1346fu, "ran off the end of a function");
}
void f_00013470(X86Cpu& c) {
    X86_TICK(c, 23);
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
    x86_fault(c, 0x13470u, "ran off the end of a function");
}
void f_00013471(X86Cpu& c) {
    X86_TICK(c, 11);
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
    x86_fault(c, 0x13471u, "ran off the end of a function");
}
void f_00013472(X86Cpu& c) {
    X86_TICK(c, 9);
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
    x86_fault(c, 0x13472u, "ran off the end of a function");
}
void f_00013474(X86Cpu& c) {
    X86_TICK(c, 7);
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
    x86_fault(c, 0x13474u, "ran off the end of a function");
}
void f_00013476(X86Cpu& c) {
    X86_TICK(c, 5);
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
    x86_fault(c, 0x13476u, "ran off the end of a function");
}
void f_00013478(X86Cpu& c) {
    X86_TICK(c, 53);
    // 013478  add al, 4
    X86_AT(c, 0x13478u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x4u, 0, 1)); }
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
    x86_fault(c, 0x13478u, "ran off the end of a function");
}
void f_0001347a(X86Cpu& c) {
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
    x86_fault(c, 0x1347au, "ran off the end of a function");
}
void f_0001347b(X86Cpu& c) {
    X86_TICK(c, 39);
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
    x86_fault(c, 0x1347bu, "ran off the end of a function");
}
void f_0001347c(X86Cpu& c) {
    X86_TICK(c, 37);
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
    x86_fault(c, 0x1347cu, "ran off the end of a function");
}
void f_0001347d(X86Cpu& c) {
    X86_TICK(c, 25);
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
    x86_fault(c, 0x1347du, "ran off the end of a function");
}
void f_0001347e(X86Cpu& c) {
    X86_TICK(c, 13);
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
    x86_fault(c, 0x1347eu, "ran off the end of a function");
}
void f_0001347f(X86Cpu& c) {
    X86_TICK(c, 11);
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
    x86_fault(c, 0x1347fu, "ran off the end of a function");
}
void f_00013481(X86Cpu& c) {
    X86_TICK(c, 9);
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
    x86_fault(c, 0x13481u, "ran off the end of a function");
}
void f_00013483(X86Cpu& c) {
    X86_TICK(c, 7);
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
    x86_fault(c, 0x13483u, "ran off the end of a function");
}
void f_00013485(X86Cpu& c) {
    X86_TICK(c, 5);
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
    x86_fault(c, 0x13485u, "ran off the end of a function");
}
void f_00013489(X86Cpu& c) {
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
    x86_fault(c, 0x13489u, "ran off the end of a function");
}
void f_0001348a(X86Cpu& c) {
    X86_TICK(c, 37);
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
    x86_fault(c, 0x1348au, "ran off the end of a function");
}
void f_0001348b(X86Cpu& c) {
    X86_TICK(c, 35);
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
    x86_fault(c, 0x1348bu, "ran off the end of a function");
}
void f_0001348c(X86Cpu& c) {
    X86_TICK(c, 23);
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
    x86_fault(c, 0x1348cu, "ran off the end of a function");
}
void f_0001348d(X86Cpu& c) {
    X86_TICK(c, 11);
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
    x86_fault(c, 0x1348du, "ran off the end of a function");
}
void f_0001348e(X86Cpu& c) {
    X86_TICK(c, 9);
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
    x86_fault(c, 0x1348eu, "ran off the end of a function");
}
void f_00013490(X86Cpu& c) {
    X86_TICK(c, 7);
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
    x86_fault(c, 0x13490u, "ran off the end of a function");
}
void f_00013492(X86Cpu& c) {
    X86_TICK(c, 5);
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
    x86_fault(c, 0x13492u, "ran off the end of a function");
}
void f_00013496(X86Cpu& c) {
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
    x86_fault(c, 0x13496u, "ran off the end of a function");
}
void f_00013497(X86Cpu& c) {
    X86_TICK(c, 48);
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
    x86_fault(c, 0x13497u, "ran off the end of a function");
}
void f_00013498(X86Cpu& c) {
    X86_TICK(c, 46);
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
    x86_fault(c, 0x13498u, "ran off the end of a function");
}
void f_00013499(X86Cpu& c) {
    X86_TICK(c, 34);
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
    x86_fault(c, 0x13499u, "ran off the end of a function");
}
void f_0001349a(X86Cpu& c) {
    X86_TICK(c, 22);
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
    x86_fault(c, 0x1349au, "ran off the end of a function");
}
void f_0001349b(X86Cpu& c) {
    X86_TICK(c, 20);
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
    x86_fault(c, 0x1349bu, "ran off the end of a function");
}
void f_0001349c(X86Cpu& c) {
    X86_TICK(c, 16);
    // 01349c  pop eax
    X86_AT(c, 0x1349cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01349d  xor al, al
    X86_AT(c, 0x1349du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01349f  ret 
    X86_AT(c, 0x1349fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1349cu, "ran off the end of a function");
}
void f_0001349d(X86Cpu& c) {
    X86_TICK(c, 12);
    // 01349d  xor al, al
    X86_AT(c, 0x1349du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01349f  ret 
    X86_AT(c, 0x1349fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1349du, "ran off the end of a function");
}
void f_0001349f(X86Cpu& c) {
    X86_TICK(c, 10);
    // 01349f  ret 
    X86_AT(c, 0x1349fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1349fu, "ran off the end of a function");
}
void f_000134a0(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0134a0  push eax
    X86_AT(c, 0x134a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0134a1  push edx
    X86_AT(c, 0x134a1u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0134a2  mov dx, 0x4ec
    X86_AT(c, 0x134a2u);
    s16(c, 2, 0x4ECu);
    // 0134a6  in al, dx
    X86_AT(c, 0x134a6u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0134a7  pop edx
    X86_AT(c, 0x134a7u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0134a8  xor dl, dl
    X86_AT(c, 0x134a8u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ g8(c, 2), 1)); }
    // 0134aa  and al, 0x1f
    X86_AT(c, 0x134aau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x1Fu, 1)); }
    // 0134ac  mov ah, 5
    X86_AT(c, 0x134acu);
    s8(c, 4, 0x5u);
    // 0134ae  xor dl, dl
    X86_AT(c, 0x134aeu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v ^ g8(c, 2), 1)); }
L_134b0:
    X86_TICK(c, 8);
    // 0134b0  shr al, 1
    X86_AT(c, 0x134b0u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0134b2  jb 0x134b5
    X86_AT(c, 0x134b2u);
    if (x86_cc(c, 2)) { goto L_134b5; }
    X86_TICK(c, 2);
    // 0134b4  inc edx
    X86_AT(c, 0x134b4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
L_134b5:
    X86_TICK(c, 7);
    // 0134b5  dec ah
    X86_AT(c, 0x134b5u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 0134b7  jne 0x134b0
    X86_AT(c, 0x134b7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x134b0u); goto L_134b0; }
    X86_TICK(c, 16);
    // 0134b9  pop eax
    X86_AT(c, 0x134b9u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0134ba  xor al, al
    X86_AT(c, 0x134bau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0134bc  ret 
    X86_AT(c, 0x134bcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x134a0u, "ran off the end of a function");
}
void f_000134c0(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0134c0  push edx
    X86_AT(c, 0x134c0u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0134c1  cmp dl, 0xff
    X86_AT(c, 0x134c1u);
    (void)x86_sub(c, g8(c, 2), 0xFFu, 0, 1);
    // 0134c4  jne 0x134ca
    X86_AT(c, 0x134c4u);
    if (x86_cc(c, 5)) { goto L_134ca; }
    X86_TICK(c, 9);
    // 0134c6  mov al, 0x7f
    X86_AT(c, 0x134c6u);
    s8(c, 0, 0x7Fu);
    // 0134c8  jmp 0x134d2
    X86_AT(c, 0x134c8u);
    goto L_134d2;
L_134ca:
    X86_TICK(c, 8);
    // 0134ca  mov al, dl
    X86_AT(c, 0x134cau);
    s8(c, 0, g8(c, 2));
    // 0134cc  not al
    X86_AT(c, 0x134ccu);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 0134ce  and al, 0x1f
    X86_AT(c, 0x134ceu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x1Fu, 1)); }
    // 0134d0  or al, 0xc0
    X86_AT(c, 0x134d0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xC0u, 1)); }
L_134d2:
    X86_TICK(c, 30);
    // 0134d2  mov dx, 0x4ec
    X86_AT(c, 0x134d2u);
    s16(c, 2, 0x4ECu);
    // 0134d6  out dx, al
    X86_AT(c, 0x134d6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0134d7  pop edx
    X86_AT(c, 0x134d7u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0134d8  xor al, al
    X86_AT(c, 0x134d8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0134da  ret 
    X86_AT(c, 0x134dau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x134c0u, "ran off the end of a function");
}
void f_000134dc(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0134dc  push edx
    X86_AT(c, 0x134dcu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0134dd  mov al, 0x3f
    X86_AT(c, 0x134ddu);
    s8(c, 0, 0x3Fu);
    // 0134df  test dl, dl
    X86_AT(c, 0x134dfu);
    (void)x86_logic(c, g8(c, 2) & g8(c, 2), 1);
    // 0134e1  je 0x134e5
    X86_AT(c, 0x134e1u);
    if (x86_cc(c, 4)) { goto L_134e5; }
    X86_TICK(c, 2);
    // 0134e3  or al, 0x40
    X86_AT(c, 0x134e3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x40u, 1)); }
L_134e5:
    X86_TICK(c, 30);
    // 0134e5  mov dx, 0x4ec
    X86_AT(c, 0x134e5u);
    s16(c, 2, 0x4ECu);
    // 0134e9  out dx, al
    X86_AT(c, 0x134e9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 0134ea  pop edx
    X86_AT(c, 0x134eau);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0134eb  xor al, al
    X86_AT(c, 0x134ebu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0134ed  ret 
    X86_AT(c, 0x134edu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x134dcu, "ran off the end of a function");
}
void f_000134f0(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0134f0  push eax
    X86_AT(c, 0x134f0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0134f1  push edx
    X86_AT(c, 0x134f1u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0134f2  mov ax, 0xd03f
    X86_AT(c, 0x134f2u);
    s16(c, 0, 0xD03Fu);
    // 0134f6  test dh, dh
    X86_AT(c, 0x134f6u);
    (void)x86_logic(c, g8(c, 6) & g8(c, 6), 1);
    // 0134f8  je 0x134fd
    X86_AT(c, 0x134f8u);
    if (x86_cc(c, 4)) { goto L_134fd; }
    X86_TICK(c, 2);
    // 0134fa  add ah, 2
    X86_AT(c, 0x134fau);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x2u, 0, 1)); }
L_134fd:
    X86_TICK(c, 50);
    // 0134fd  mov dx, 0x4d6
    X86_AT(c, 0x134fdu);
    s16(c, 2, 0x4D6u);
    // 013501  out dx, al
    X86_AT(c, 0x13501u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 013502  mov dl, ah
    X86_AT(c, 0x13502u);
    s8(c, 2, g8(c, 4));
    // 013504  in al, dx
    X86_AT(c, 0x13504u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013505  pop edx
    X86_AT(c, 0x13505u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013506  mov dl, al
    X86_AT(c, 0x13506u);
    s8(c, 2, g8(c, 0));
    // 013508  pop eax
    X86_AT(c, 0x13508u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013509  xor al, al
    X86_AT(c, 0x13509u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01350b  ret 
    X86_AT(c, 0x1350bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x134f0u, "ran off the end of a function");
}
void f_0001350c(X86Cpu& c) {
    X86_TICK(c, 13);
    // 01350c  push eax
    X86_AT(c, 0x1350cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01350d  push edx
    X86_AT(c, 0x1350du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01350e  mov ax, 0xd03f
    X86_AT(c, 0x1350eu);
    s16(c, 0, 0xD03Fu);
    // 013512  test dh, dh
    X86_AT(c, 0x13512u);
    (void)x86_logic(c, g8(c, 6) & g8(c, 6), 1);
    // 013514  je 0x13519
    X86_AT(c, 0x13514u);
    if (x86_cc(c, 4)) { goto L_13519; }
    X86_TICK(c, 2);
    // 013516  add ah, 2
    X86_AT(c, 0x13516u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x2u, 0, 1)); }
L_13519:
    X86_TICK(c, 57);
    // 013519  mov dx, 0x4d6
    X86_AT(c, 0x13519u);
    s16(c, 2, 0x4D6u);
    // 01351d  out dx, al
    X86_AT(c, 0x1351du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01351e  mov dl, ah
    X86_AT(c, 0x1351eu);
    s8(c, 2, g8(c, 4));
    // 013520  in al, dx
    X86_AT(c, 0x13520u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013521  pop edx
    X86_AT(c, 0x13521u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 013522  and al, 0x3f
    X86_AT(c, 0x13522u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x3Fu, 1)); }
    // 013524  movzx eax, al
    X86_AT(c, 0x13524u);
    c.r[0] = g8(c, 0);
    // 013527  mov dl, byte ptr cs:[eax + 0x135e0]
    X86_AT(c, 0x13527u);
    s8(c, 2, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135E0u))));
    // 01352e  pop eax
    X86_AT(c, 0x1352eu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01352f  xor al, al
    X86_AT(c, 0x1352fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 013531  ret 
    X86_AT(c, 0x13531u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1350cu, "ran off the end of a function");
}
void f_00013534(X86Cpu& c) {
    X86_TICK(c, 66);
    // 013534  push eax
    X86_AT(c, 0x13534u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 013535  mov dx, 0x4d6
    X86_AT(c, 0x13535u);
    s16(c, 2, 0x4D6u);
    // 013539  mov al, bl
    X86_AT(c, 0x13539u);
    s8(c, 0, g8(c, 3));
    // 01353b  out dx, al
    X86_AT(c, 0x1353bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01353c  mov dl, 0xd0
    X86_AT(c, 0x1353cu);
    s8(c, 2, 0xD0u);
    // 01353e  in al, dx
    X86_AT(c, 0x1353eu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01353f  mov ah, al
    X86_AT(c, 0x1353fu);
    s8(c, 4, g8(c, 0));
    // 013541  add dl, 2
    X86_AT(c, 0x13541u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x2u, 0, 1)); }
    // 013544  in al, dx
    X86_AT(c, 0x13544u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 013545  mov dx, ax
    X86_AT(c, 0x13545u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
    // 013548  pop eax
    X86_AT(c, 0x13548u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 013549  xor al, al
    X86_AT(c, 0x13549u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 01354b  ret 
    X86_AT(c, 0x1354bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x13534u, "ran off the end of a function");
}
void f_0001355a(X86Cpu& c) {
    X86_TICK(c, 12);
    // 01355a  mov al, 4
    X86_AT(c, 0x1355au);
    s8(c, 0, 0x4u);
    // 01355c  ret 
    X86_AT(c, 0x1355cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1355au, "ran off the end of a function");
}
void f_00013680(X86Cpu& c) {
    X86_TICK(c, 45);
    // 013680  push gs
    X86_AT(c, 0x13680u);
    push32(c, c.sreg[5]);
    // 013682  push fs
    X86_AT(c, 0x13682u);
    push32(c, c.sreg[4]);
    // 013684  push es
    X86_AT(c, 0x13684u);
    push32(c, c.sreg[0]);
    // 013685  push ds
    X86_AT(c, 0x13685u);
    push32(c, c.sreg[3]);
    // 013686  pushal 
    X86_AT(c, 0x13686u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 013687  pushfd 
    X86_AT(c, 0x13687u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 013688  cld 
    X86_AT(c, 0x13688u);
    c.fl &= ~X86_DF;
    // 013689  mov ebp, esp
    X86_AT(c, 0x13689u);
    c.r[5] = c.r[4];
    // 01368b  mov byte ptr [ebp + 0x21], 0
    X86_AT(c, 0x1368bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0x0u);
    // 01368f  cmp ah, 3
    X86_AT(c, 0x1368fu);
    (void)x86_sub(c, g8(c, 4), 0x3u, 0, 1);
    // 013692  ja 0x136a8
    X86_AT(c, 0x13692u);
    if (x86_cc(c, 7)) { goto L_136a8; }
    X86_TICK(c, 10);
    // 013694  movzx ecx, ah
    X86_AT(c, 0x13694u);
    c.r[1] = g8(c, 4);
    // 013697  call dword ptr cs:[ecx*4 + 0x136ae]
    X86_AT(c, 0x13697u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x136AEu))); push32(c, 0x1369fu);
      switch (t) {
      case 0x136beu: f_000136be(c); break;
      case 0x13721u: f_00013721(c); break;
      case 0x137d2u: f_000137d2(c); break;
      case 0x137dfu: f_000137df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x1369fu); }
L_1369f:
    X86_TICK(c, 52);
    // 01369f  popfd 
    X86_AT(c, 0x1369fu);
    x86_popfd(c, 4);
    // 0136a0  popal 
    X86_AT(c, 0x136a0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0136a1  pop ds
    X86_AT(c, 0x136a1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0136a2  pop es
    X86_AT(c, 0x136a2u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0136a3  pop fs
    X86_AT(c, 0x136a3u);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0136a5  pop gs
    X86_AT(c, 0x136a5u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0136a7  retf 
    X86_AT(c, 0x136a7u);
    x86_retf(c, 4, 0u); return;
L_136a8:
    X86_TICK(c, 9);
    // 0136a8  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x136a8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 0136ac  jmp 0x1369f
    X86_AT(c, 0x136acu);
    X86_POLL(c, 0x1369fu); goto L_1369f;
    x86_fault(c, 0x13680u, "ran off the end of a function");
}
void f_000136be(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0136be  cmp al, 2
    X86_AT(c, 0x136beu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0136c0  jae 0x1371c
    X86_AT(c, 0x136c0u);
    if (x86_cc(c, 3)) { goto L_1371c; }
    X86_TICK(c, 7);
    // 0136c2  cmp dh, 8
    X86_AT(c, 0x136c2u);
    (void)x86_sub(c, g8(c, 6), 0x8u, 0, 1);
    // 0136c5  jne 0x1371c
    X86_AT(c, 0x136c5u);
    if (x86_cc(c, 5)) { goto L_1371c; }
    X86_TICK(c, 7);
    // 0136c7  cmp dl, 8
    X86_AT(c, 0x136c7u);
    (void)x86_sub(c, g8(c, 2), 0x8u, 0, 1);
    // 0136ca  je 0x136f0
    X86_AT(c, 0x136cau);
    if (x86_cc(c, 4)) { goto L_136f0; }
    X86_TICK(c, 7);
    // 0136cc  cmp dl, 0x10
    X86_AT(c, 0x136ccu);
    (void)x86_sub(c, g8(c, 2), 0x10u, 0, 1);
    // 0136cf  jne 0x1371c
    X86_AT(c, 0x136cfu);
    if (x86_cc(c, 5)) { goto L_1371c; }
    X86_TICK(c, 20);
    // 0136d1  movzx esi, bl
    X86_AT(c, 0x136d1u);
    c.r[6] = g8(c, 3);
    // 0136d4  lds edx, fword ptr cs:[0x1e0]
    X86_AT(c, 0x136d4u);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[2] = o; }
    // 0136db  lea esi, [edx + esi*2]
    X86_AT(c, 0x136dbu);
    c.r[6] = (uint32_t)(c.r[2] + c.r[6] * 2);
    // 0136de  lea esi, [esi*8 + 0x3d800]
    X86_AT(c, 0x136deu);
    c.r[6] = (uint32_t)(c.r[6] * 8 + 0x3D800u);
    // 0136e5  test al, al
    X86_AT(c, 0x136e5u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0136e7  jne 0x1370e
    X86_AT(c, 0x136e7u);
    if (x86_cc(c, 5)) { goto L_1370e; }
L_136e9:
    X86_TICK(c, 14);
    // 0136e9  mov dword ptr [ebp + 8], esi
    X86_AT(c, 0x136e9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)), c.r[6]);
    // 0136ec  mov word ptr [ebp + 0x24], ds
    X86_AT(c, 0x136ecu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u)), (uint32_t)c.sreg[3]);
    // 0136ef  ret 
    X86_AT(c, 0x136efu);
    c.eip = pop32(c); return;
L_136f0:
    X86_TICK(c, 20);
    // 0136f0  movzx esi, bl
    X86_AT(c, 0x136f0u);
    c.r[6] = g8(c, 3);
    // 0136f3  lds edx, fword ptr cs:[0x1e0]
    X86_AT(c, 0x136f3u);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[2] = o; }
    // 0136fa  add esi, edx
    X86_AT(c, 0x136fau);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[2], 0, 4); }
    // 0136fc  lea esi, [esi*8 + 0x3d000]
    X86_AT(c, 0x136fcu);
    c.r[6] = (uint32_t)(c.r[6] * 8 + 0x3D000u);
    // 013703  test al, al
    X86_AT(c, 0x13703u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 013705  je 0x136e9
    X86_AT(c, 0x13705u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x136e9u); goto L_136e9; }
    X86_TICK(c, 9);
    // 013707  mov ecx, 2
    X86_AT(c, 0x13707u);
    c.r[1] = 0x2u;
    // 01370c  jmp 0x13713
    X86_AT(c, 0x1370cu);
    goto L_13713;
L_1370e:
    X86_TICK(c, 2);
    // 01370e  mov ecx, 4
    X86_AT(c, 0x1370eu);
    c.r[1] = 0x4u;
L_13713:
    X86_TICK(c, 25);
    // 013713  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x13713u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 013716  mov es, word ptr [ebp + 0x24]
    X86_AT(c, 0x13716u);
    x86_load_seg(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))) & 0xFFFFu);
    // 013719  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x13719u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 01371b  ret 
    X86_AT(c, 0x1371bu);
    c.eip = pop32(c); return;
L_1371c:
    X86_TICK(c, 12);
    // 01371c  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x1371cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 013720  ret 
    X86_AT(c, 0x13720u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x136beu, "ran off the end of a function");
}
void f_00013721(X86Cpu& c) {
    goto L_13721;
L_136e9:
    X86_TICK(c, 14);
    // 0136e9  mov dword ptr [ebp + 8], esi
    X86_AT(c, 0x136e9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)), c.r[6]);
    // 0136ec  mov word ptr [ebp + 0x24], ds
    X86_AT(c, 0x136ecu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u)), (uint32_t)c.sreg[3]);
    // 0136ef  ret 
    X86_AT(c, 0x136efu);
    c.eip = pop32(c); return;
L_13713:
    X86_TICK(c, 25);
    // 013713  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x13713u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 013716  mov es, word ptr [ebp + 0x24]
    X86_AT(c, 0x13716u);
    x86_load_seg(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u))) & 0xFFFFu);
    // 013719  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x13719u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 01371b  ret 
    X86_AT(c, 0x1371bu);
    c.eip = pop32(c); return;
L_1371c:
    X86_TICK(c, 12);
    // 01371c  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x1371cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 013720  ret 
    X86_AT(c, 0x13720u);
    c.eip = pop32(c); return;
L_13721:
    X86_TICK(c, 7);
    // 013721  cmp al, 2
    X86_AT(c, 0x13721u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 013723  jae 0x1371c
    X86_AT(c, 0x13723u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x1371cu); goto L_1371c; }
    X86_TICK(c, 7);
    // 013725  cmp dx, 0x1010
    X86_AT(c, 0x13725u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x1010u, 0, 2);
    // 01372a  jne 0x1371c
    X86_AT(c, 0x1372au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1371cu); goto L_1371c; }
    X86_TICK(c, 7);
    // 01372c  test bh, 0x80
    X86_AT(c, 0x1372cu);
    (void)x86_logic(c, g8(c, 7) & 0x80u, 1);
    // 01372f  jne 0x1371c
    X86_AT(c, 0x1372fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1371cu); goto L_1371c; }
    X86_TICK(c, 7);
    // 013731  cmp bx, 0x7521
    X86_AT(c, 0x13731u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x7521u, 0, 2);
    // 013736  jae 0x137a0
    X86_AT(c, 0x13736u);
    if (x86_cc(c, 3)) { goto L_137a0; }
L_13738:
    X86_TICK(c, 32);
    // 013738  sub esi, esi
    X86_AT(c, 0x13738u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 01373a  sub edx, edx
    X86_AT(c, 0x1373au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 01373c  shld dx, bx, 4
    X86_AT(c, 0x1373cu);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 013741  shl bx, 4
    X86_AT(c, 0x13741u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 3, r); }
    // 013745  shld si, bx, 4
    X86_AT(c, 0x13745u);
    { uint32_t v = (c.r[6] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 6, r); }
    // 01374a  shl bx, 5
    X86_AT(c, 0x1374au);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 2, w); if (w) s16(c, 3, r); }
    // 01374e  shld dx, bx, 2
    X86_AT(c, 0x1374eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0x2u, 2, w); if (w) s16(c, 2, r); }
    // 013753  shl bx, 2
    X86_AT(c, 0x13753u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 3, r); }
    // 013757  shld si, bx, 0xa
    X86_AT(c, 0x13757u);
    { uint32_t v = (c.r[6] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0xAu, 2, w); if (w) s16(c, 6, r); }
    // 01375c  cmp dl, 9
    X86_AT(c, 0x1375cu);
    (void)x86_sub(c, g8(c, 2), 0x9u, 0, 1);
    // 01375f  je 0x13798
    X86_AT(c, 0x1375fu);
    if (x86_cc(c, 4)) { goto L_13798; }
    X86_TICK(c, 7);
    // 013761  cmp dl, 0xa
    X86_AT(c, 0x13761u);
    (void)x86_sub(c, g8(c, 2), 0xAu, 0, 1);
    // 013764  je 0x13798
    X86_AT(c, 0x13764u);
    if (x86_cc(c, 4)) { goto L_13798; }
    X86_TICK(c, 7);
    // 013766  cmp dl, 0xb
    X86_AT(c, 0x13766u);
    (void)x86_sub(c, g8(c, 2), 0xBu, 0, 1);
    // 013769  je 0x13790
    X86_AT(c, 0x13769u);
    if (x86_cc(c, 4)) { goto L_13790; }
    X86_TICK(c, 7);
    // 01376b  cmp dl, 0x1f
    X86_AT(c, 0x1376bu);
    (void)x86_sub(c, g8(c, 2), 0x1Fu, 0, 1);
    // 01376e  je 0x13790
    X86_AT(c, 0x1376eu);
    if (x86_cc(c, 4)) { goto L_13790; }
L_13770:
    X86_TICK(c, 14);
    // 013770  add esi, dword ptr cs:[edx*4 + 0xf338]
    X86_AT(c, 0x13770u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xF338u))), 0, 4); }
    // 013778  lds ebx, fword ptr cs:[0x1e0]
    X86_AT(c, 0x13778u);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E0u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[3] = o; }
    // 01377f  add esi, ebx
    X86_AT(c, 0x1377fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[3], 0, 4); }
L_13781:
    X86_TICK(c, 7);
    // 013781  test al, al
    X86_AT(c, 0x13781u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 013783  je 0x136e9
    X86_AT(c, 0x13783u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x136e9u); goto L_136e9; }
    X86_TICK(c, 9);
    // 013789  mov ecx, 8
    X86_AT(c, 0x13789u);
    c.r[1] = 0x8u;
    // 01378e  jmp 0x13713
    X86_AT(c, 0x1378eu);
    X86_POLL(c, 0x13713u); goto L_13713;
L_13790:
    X86_TICK(c, 9);
    // 013790  or esi, 0x2000
    X86_AT(c, 0x13790u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | 0x2000u, 4); }
    // 013796  jmp 0x13770
    X86_AT(c, 0x13796u);
    X86_POLL(c, 0x13770u); goto L_13770;
L_13798:
    X86_TICK(c, 9);
    // 013798  and esi, 0xffffdfff
    X86_AT(c, 0x13798u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFDFFFu, 4); }
    // 01379e  jmp 0x13770
    X86_AT(c, 0x1379eu);
    X86_POLL(c, 0x13770u); goto L_13770;
L_137a0:
    X86_TICK(c, 7);
    // 0137a0  cmp bx, 0x757e
    X86_AT(c, 0x137a0u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x757Eu, 0, 2);
    // 0137a5  jbe 0x137bc
    X86_AT(c, 0x137a5u);
    if (x86_cc(c, 6)) { goto L_137bc; }
    X86_TICK(c, 7);
    // 0137a7  cmp bx, 0x7621
    X86_AT(c, 0x137a7u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x7621u, 0, 2);
    // 0137ac  jb 0x13738
    X86_AT(c, 0x137acu);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x13738u); goto L_13738; }
    X86_TICK(c, 7);
    // 0137ae  cmp bx, 0x767e
    X86_AT(c, 0x137aeu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x767Eu, 0, 2);
    // 0137b3  ja 0x13738
    X86_AT(c, 0x137b3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x13738u); goto L_13738; }
    X86_TICK(c, 9);
    // 0137b5  sub bx, 0x75c3
    X86_AT(c, 0x137b5u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, 0x75C3u, 0, 2)); }
    // 0137ba  jmp 0x137c1
    X86_AT(c, 0x137bau);
    goto L_137c1;
L_137bc:
    X86_TICK(c, 2);
    // 0137bc  sub bx, 0x7521
    X86_AT(c, 0x137bcu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, 0x7521u, 0, 2)); }
L_137c1:
    X86_TICK(c, 21);
    // 0137c1  movzx esi, bx
    X86_AT(c, 0x137c1u);
    c.r[6] = (c.r[3] & 0xFFFFu);
    // 0137c4  shl esi, 5
    X86_AT(c, 0x137c4u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[6] = r; }
    // 0137c7  lds ebx, fword ptr cs:[0x1e8]
    X86_AT(c, 0x137c7u);
    { uint32_t ea = (c.sbase[1] + (uint32_t)(0x1E8u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[3] = o; }
    // 0137ce  add esi, ebx
    X86_AT(c, 0x137ceu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[3], 0, 4); }
    // 0137d0  jmp 0x13781
    X86_AT(c, 0x137d0u);
    X86_POLL(c, 0x13781u); goto L_13781;
    x86_fault(c, 0x13721u, "ran off the end of a function");
}
void f_000137d2(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0137d2  mov ax, bx
    X86_AT(c, 0x137d2u);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 0137d5  call 0x101b4
    X86_AT(c, 0x137d5u);
    push32(c, 0x137dau); f_000101b4(c); X86_RET(c, 0x137dau);
    X86_TICK(c, 12);
    // 0137da  mov word ptr [ebp + 0x14], ax
    X86_AT(c, 0x137dau);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)), (c.r[0] & 0xFFFFu));
    // 0137de  ret 
    X86_AT(c, 0x137deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x137d2u, "ran off the end of a function");
}
void f_000137df(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0137df  mov ax, bx
    X86_AT(c, 0x137dfu);
    s16(c, 0, (c.r[3] & 0xFFFFu));
    // 0137e2  call 0x101d4
    X86_AT(c, 0x137e2u);
    push32(c, 0x137e7u); f_000101d4(c); X86_RET(c, 0x137e7u);
    X86_TICK(c, 12);
    // 0137e7  mov word ptr [ebp + 0x14], ax
    X86_AT(c, 0x137e7u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)), (c.r[0] & 0xFFFFu));
    // 0137eb  ret 
    X86_AT(c, 0x137ebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x137dfu, "ran off the end of a function");
}
}
