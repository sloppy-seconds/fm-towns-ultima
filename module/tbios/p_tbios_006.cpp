#include "p_tbios_funcs.h"
namespace p_tbios {
void f_000019d0(X86Cpu& c) {
    goto L_19d0;
L_450:
    X86_TICK(c, 7);
    // 000450  cmp al, 0x80
    X86_AT(c, 0x450u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 000452  jae 0x4f8
    X86_AT(c, 0x452u);
    if (x86_cc(c, 3)) { goto L_4f8; }
    X86_TICK(c, 7);
    // 000458  cmp al, 2
    X86_AT(c, 0x458u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 00045a  jae 0x4ef
    X86_AT(c, 0x45au);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000460  test dx, dx
    X86_AT(c, 0x460u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 000463  je 0x4ef
    X86_AT(c, 0x463u);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 6);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
L_4df:
    X86_TICK(c, 7);
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
L_4f8:
    X86_TICK(c, 9);
    // 0004f8  sub al, 0x80
    X86_AT(c, 0x4f8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0004fa  cmp al, 3
    X86_AT(c, 0x4fau);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0004fc  ja 0x4ef
    X86_AT(c, 0x4fcu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x4efu); goto L_4ef; }
    X86_TICK(c, 9);
    // 0004fe  mov edi, 0x70
    X86_AT(c, 0x4feu);
    c.r[7] = 0x70u;
    // 000503  call 0x514
    X86_AT(c, 0x503u);
    push32(c, 0x508u); f_00000514(c); X86_RET(c, 0x508u);
    X86_TICK(c, 14);
    // 000508  add al, 0x80
    X86_AT(c, 0x508u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x80u, 0, 1)); }
    // 00050a  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x50au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 00050e  jne 0x4e9
    X86_AT(c, 0x50eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4e9u); goto L_4e9; }
    X86_TICK(c, 7);
    // 000510  jmp 0x4df
    X86_AT(c, 0x510u);
    X86_POLL(c, 0x4dfu); goto L_4df;
L_19d0:
    X86_TICK(c, 28);
    // 0019d0  sub edi, edi
    X86_AT(c, 0x19d0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0019d2  mov ecx, 0x20000
    X86_AT(c, 0x19d2u);
    c.r[1] = 0x20000u;
    // 0019d7  sub eax, eax
    X86_AT(c, 0x19d7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0019d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x19d9u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0019db  mov byte ptr gs:[ebp + 0x3e], al
    X86_AT(c, 0x19dbu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Eu)), g8(c, 0));
    // 0019df  mov word ptr gs:[ebp + 0x3c], ax
    X86_AT(c, 0x19dfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu)), (c.r[0] & 0xFFFFu));
    // 0019e4  mov al, 1
    X86_AT(c, 0x19e4u);
    s8(c, 0, 0x1u);
    // 0019e6  mov dx, 3
    X86_AT(c, 0x19e6u);
    s16(c, 2, 0x3u);
    // 0019ea  call 0x450
    X86_AT(c, 0x19eau);
    push32(c, 0x19efu); f_00000450(c); X86_RET(c, 0x19efu);
    X86_TICK(c, 11);
    // 0019ef  mov al, 0
    X86_AT(c, 0x19efu);
    s8(c, 0, 0x0u);
    // 0019f1  mov dx, 3
    X86_AT(c, 0x19f1u);
    s16(c, 2, 0x3u);
    // 0019f5  jmp 0x450
    X86_AT(c, 0x19f5u);
    X86_POLL(c, 0x450u); goto L_450;
    x86_fault(c, 0x19d0u, "ran off the end of a function");
}
void f_000019d2(X86Cpu& c) {
    goto L_19d2;
L_450:
    X86_TICK(c, 7);
    // 000450  cmp al, 0x80
    X86_AT(c, 0x450u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 000452  jae 0x4f8
    X86_AT(c, 0x452u);
    if (x86_cc(c, 3)) { goto L_4f8; }
    X86_TICK(c, 7);
    // 000458  cmp al, 2
    X86_AT(c, 0x458u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 00045a  jae 0x4ef
    X86_AT(c, 0x45au);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000460  test dx, dx
    X86_AT(c, 0x460u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 000463  je 0x4ef
    X86_AT(c, 0x463u);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 6);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
L_4df:
    X86_TICK(c, 7);
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
L_4f8:
    X86_TICK(c, 9);
    // 0004f8  sub al, 0x80
    X86_AT(c, 0x4f8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0004fa  cmp al, 3
    X86_AT(c, 0x4fau);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0004fc  ja 0x4ef
    X86_AT(c, 0x4fcu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x4efu); goto L_4ef; }
    X86_TICK(c, 9);
    // 0004fe  mov edi, 0x70
    X86_AT(c, 0x4feu);
    c.r[7] = 0x70u;
    // 000503  call 0x514
    X86_AT(c, 0x503u);
    push32(c, 0x508u); f_00000514(c); X86_RET(c, 0x508u);
    X86_TICK(c, 14);
    // 000508  add al, 0x80
    X86_AT(c, 0x508u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x80u, 0, 1)); }
    // 00050a  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x50au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 00050e  jne 0x4e9
    X86_AT(c, 0x50eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4e9u); goto L_4e9; }
    X86_TICK(c, 7);
    // 000510  jmp 0x4df
    X86_AT(c, 0x510u);
    X86_POLL(c, 0x4dfu); goto L_4df;
L_19d2:
    X86_TICK(c, 26);
    // 0019d2  mov ecx, 0x20000
    X86_AT(c, 0x19d2u);
    c.r[1] = 0x20000u;
    // 0019d7  sub eax, eax
    X86_AT(c, 0x19d7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0019d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x19d9u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0019db  mov byte ptr gs:[ebp + 0x3e], al
    X86_AT(c, 0x19dbu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Eu)), g8(c, 0));
    // 0019df  mov word ptr gs:[ebp + 0x3c], ax
    X86_AT(c, 0x19dfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu)), (c.r[0] & 0xFFFFu));
    // 0019e4  mov al, 1
    X86_AT(c, 0x19e4u);
    s8(c, 0, 0x1u);
    // 0019e6  mov dx, 3
    X86_AT(c, 0x19e6u);
    s16(c, 2, 0x3u);
    // 0019ea  call 0x450
    X86_AT(c, 0x19eau);
    push32(c, 0x19efu); f_00000450(c); X86_RET(c, 0x19efu);
    X86_TICK(c, 11);
    // 0019ef  mov al, 0
    X86_AT(c, 0x19efu);
    s8(c, 0, 0x0u);
    // 0019f1  mov dx, 3
    X86_AT(c, 0x19f1u);
    s16(c, 2, 0x3u);
    // 0019f5  jmp 0x450
    X86_AT(c, 0x19f5u);
    X86_POLL(c, 0x450u); goto L_450;
    x86_fault(c, 0x19d2u, "ran off the end of a function");
}
void f_000019d7(X86Cpu& c) {
    goto L_19d7;
L_450:
    X86_TICK(c, 7);
    // 000450  cmp al, 0x80
    X86_AT(c, 0x450u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 000452  jae 0x4f8
    X86_AT(c, 0x452u);
    if (x86_cc(c, 3)) { goto L_4f8; }
    X86_TICK(c, 7);
    // 000458  cmp al, 2
    X86_AT(c, 0x458u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 00045a  jae 0x4ef
    X86_AT(c, 0x45au);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000460  test dx, dx
    X86_AT(c, 0x460u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 000463  je 0x4ef
    X86_AT(c, 0x463u);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 6);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
L_4df:
    X86_TICK(c, 7);
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
L_4f8:
    X86_TICK(c, 9);
    // 0004f8  sub al, 0x80
    X86_AT(c, 0x4f8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0004fa  cmp al, 3
    X86_AT(c, 0x4fau);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0004fc  ja 0x4ef
    X86_AT(c, 0x4fcu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x4efu); goto L_4ef; }
    X86_TICK(c, 9);
    // 0004fe  mov edi, 0x70
    X86_AT(c, 0x4feu);
    c.r[7] = 0x70u;
    // 000503  call 0x514
    X86_AT(c, 0x503u);
    push32(c, 0x508u); f_00000514(c); X86_RET(c, 0x508u);
    X86_TICK(c, 14);
    // 000508  add al, 0x80
    X86_AT(c, 0x508u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x80u, 0, 1)); }
    // 00050a  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x50au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 00050e  jne 0x4e9
    X86_AT(c, 0x50eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4e9u); goto L_4e9; }
    X86_TICK(c, 7);
    // 000510  jmp 0x4df
    X86_AT(c, 0x510u);
    X86_POLL(c, 0x4dfu); goto L_4df;
L_19d7:
    X86_TICK(c, 24);
    // 0019d7  sub eax, eax
    X86_AT(c, 0x19d7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0019d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x19d9u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0019db  mov byte ptr gs:[ebp + 0x3e], al
    X86_AT(c, 0x19dbu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Eu)), g8(c, 0));
    // 0019df  mov word ptr gs:[ebp + 0x3c], ax
    X86_AT(c, 0x19dfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu)), (c.r[0] & 0xFFFFu));
    // 0019e4  mov al, 1
    X86_AT(c, 0x19e4u);
    s8(c, 0, 0x1u);
    // 0019e6  mov dx, 3
    X86_AT(c, 0x19e6u);
    s16(c, 2, 0x3u);
    // 0019ea  call 0x450
    X86_AT(c, 0x19eau);
    push32(c, 0x19efu); f_00000450(c); X86_RET(c, 0x19efu);
    X86_TICK(c, 11);
    // 0019ef  mov al, 0
    X86_AT(c, 0x19efu);
    s8(c, 0, 0x0u);
    // 0019f1  mov dx, 3
    X86_AT(c, 0x19f1u);
    s16(c, 2, 0x3u);
    // 0019f5  jmp 0x450
    X86_AT(c, 0x19f5u);
    X86_POLL(c, 0x450u); goto L_450;
    x86_fault(c, 0x19d7u, "ran off the end of a function");
}
void f_000019d9(X86Cpu& c) {
    goto L_19d9;
L_450:
    X86_TICK(c, 7);
    // 000450  cmp al, 0x80
    X86_AT(c, 0x450u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 000452  jae 0x4f8
    X86_AT(c, 0x452u);
    if (x86_cc(c, 3)) { goto L_4f8; }
    X86_TICK(c, 7);
    // 000458  cmp al, 2
    X86_AT(c, 0x458u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 00045a  jae 0x4ef
    X86_AT(c, 0x45au);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000460  test dx, dx
    X86_AT(c, 0x460u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 000463  je 0x4ef
    X86_AT(c, 0x463u);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 6);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
L_4df:
    X86_TICK(c, 7);
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
L_4f8:
    X86_TICK(c, 9);
    // 0004f8  sub al, 0x80
    X86_AT(c, 0x4f8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0004fa  cmp al, 3
    X86_AT(c, 0x4fau);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0004fc  ja 0x4ef
    X86_AT(c, 0x4fcu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x4efu); goto L_4ef; }
    X86_TICK(c, 9);
    // 0004fe  mov edi, 0x70
    X86_AT(c, 0x4feu);
    c.r[7] = 0x70u;
    // 000503  call 0x514
    X86_AT(c, 0x503u);
    push32(c, 0x508u); f_00000514(c); X86_RET(c, 0x508u);
    X86_TICK(c, 14);
    // 000508  add al, 0x80
    X86_AT(c, 0x508u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x80u, 0, 1)); }
    // 00050a  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x50au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 00050e  jne 0x4e9
    X86_AT(c, 0x50eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4e9u); goto L_4e9; }
    X86_TICK(c, 7);
    // 000510  jmp 0x4df
    X86_AT(c, 0x510u);
    X86_POLL(c, 0x4dfu); goto L_4df;
L_19d9:
    X86_TICK(c, 22);
    // 0019d9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x19d9u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 0019db  mov byte ptr gs:[ebp + 0x3e], al
    X86_AT(c, 0x19dbu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Eu)), g8(c, 0));
    // 0019df  mov word ptr gs:[ebp + 0x3c], ax
    X86_AT(c, 0x19dfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu)), (c.r[0] & 0xFFFFu));
    // 0019e4  mov al, 1
    X86_AT(c, 0x19e4u);
    s8(c, 0, 0x1u);
    // 0019e6  mov dx, 3
    X86_AT(c, 0x19e6u);
    s16(c, 2, 0x3u);
    // 0019ea  call 0x450
    X86_AT(c, 0x19eau);
    push32(c, 0x19efu); f_00000450(c); X86_RET(c, 0x19efu);
    X86_TICK(c, 11);
    // 0019ef  mov al, 0
    X86_AT(c, 0x19efu);
    s8(c, 0, 0x0u);
    // 0019f1  mov dx, 3
    X86_AT(c, 0x19f1u);
    s16(c, 2, 0x3u);
    // 0019f5  jmp 0x450
    X86_AT(c, 0x19f5u);
    X86_POLL(c, 0x450u); goto L_450;
    x86_fault(c, 0x19d9u, "ran off the end of a function");
}
void f_000019db(X86Cpu& c) {
    goto L_19db;
L_450:
    X86_TICK(c, 7);
    // 000450  cmp al, 0x80
    X86_AT(c, 0x450u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 000452  jae 0x4f8
    X86_AT(c, 0x452u);
    if (x86_cc(c, 3)) { goto L_4f8; }
    X86_TICK(c, 7);
    // 000458  cmp al, 2
    X86_AT(c, 0x458u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 00045a  jae 0x4ef
    X86_AT(c, 0x45au);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000460  test dx, dx
    X86_AT(c, 0x460u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 000463  je 0x4ef
    X86_AT(c, 0x463u);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 6);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
L_4df:
    X86_TICK(c, 7);
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
L_4f8:
    X86_TICK(c, 9);
    // 0004f8  sub al, 0x80
    X86_AT(c, 0x4f8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0004fa  cmp al, 3
    X86_AT(c, 0x4fau);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0004fc  ja 0x4ef
    X86_AT(c, 0x4fcu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x4efu); goto L_4ef; }
    X86_TICK(c, 9);
    // 0004fe  mov edi, 0x70
    X86_AT(c, 0x4feu);
    c.r[7] = 0x70u;
    // 000503  call 0x514
    X86_AT(c, 0x503u);
    push32(c, 0x508u); f_00000514(c); X86_RET(c, 0x508u);
    X86_TICK(c, 14);
    // 000508  add al, 0x80
    X86_AT(c, 0x508u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x80u, 0, 1)); }
    // 00050a  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x50au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 00050e  jne 0x4e9
    X86_AT(c, 0x50eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4e9u); goto L_4e9; }
    X86_TICK(c, 7);
    // 000510  jmp 0x4df
    X86_AT(c, 0x510u);
    X86_POLL(c, 0x4dfu); goto L_4df;
L_19db:
    X86_TICK(c, 15);
    // 0019db  mov byte ptr gs:[ebp + 0x3e], al
    X86_AT(c, 0x19dbu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Eu)), g8(c, 0));
    // 0019df  mov word ptr gs:[ebp + 0x3c], ax
    X86_AT(c, 0x19dfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu)), (c.r[0] & 0xFFFFu));
    // 0019e4  mov al, 1
    X86_AT(c, 0x19e4u);
    s8(c, 0, 0x1u);
    // 0019e6  mov dx, 3
    X86_AT(c, 0x19e6u);
    s16(c, 2, 0x3u);
    // 0019ea  call 0x450
    X86_AT(c, 0x19eau);
    push32(c, 0x19efu); f_00000450(c); X86_RET(c, 0x19efu);
    X86_TICK(c, 11);
    // 0019ef  mov al, 0
    X86_AT(c, 0x19efu);
    s8(c, 0, 0x0u);
    // 0019f1  mov dx, 3
    X86_AT(c, 0x19f1u);
    s16(c, 2, 0x3u);
    // 0019f5  jmp 0x450
    X86_AT(c, 0x19f5u);
    X86_POLL(c, 0x450u); goto L_450;
    x86_fault(c, 0x19dbu, "ran off the end of a function");
}
void f_000019df(X86Cpu& c) {
    goto L_19df;
L_450:
    X86_TICK(c, 7);
    // 000450  cmp al, 0x80
    X86_AT(c, 0x450u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 000452  jae 0x4f8
    X86_AT(c, 0x452u);
    if (x86_cc(c, 3)) { goto L_4f8; }
    X86_TICK(c, 7);
    // 000458  cmp al, 2
    X86_AT(c, 0x458u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 00045a  jae 0x4ef
    X86_AT(c, 0x45au);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000460  test dx, dx
    X86_AT(c, 0x460u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 000463  je 0x4ef
    X86_AT(c, 0x463u);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 6);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
L_4df:
    X86_TICK(c, 7);
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
L_4f8:
    X86_TICK(c, 9);
    // 0004f8  sub al, 0x80
    X86_AT(c, 0x4f8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0004fa  cmp al, 3
    X86_AT(c, 0x4fau);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0004fc  ja 0x4ef
    X86_AT(c, 0x4fcu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x4efu); goto L_4ef; }
    X86_TICK(c, 9);
    // 0004fe  mov edi, 0x70
    X86_AT(c, 0x4feu);
    c.r[7] = 0x70u;
    // 000503  call 0x514
    X86_AT(c, 0x503u);
    push32(c, 0x508u); f_00000514(c); X86_RET(c, 0x508u);
    X86_TICK(c, 14);
    // 000508  add al, 0x80
    X86_AT(c, 0x508u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x80u, 0, 1)); }
    // 00050a  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x50au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 00050e  jne 0x4e9
    X86_AT(c, 0x50eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4e9u); goto L_4e9; }
    X86_TICK(c, 7);
    // 000510  jmp 0x4df
    X86_AT(c, 0x510u);
    X86_POLL(c, 0x4dfu); goto L_4df;
L_19df:
    X86_TICK(c, 13);
    // 0019df  mov word ptr gs:[ebp + 0x3c], ax
    X86_AT(c, 0x19dfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu)), (c.r[0] & 0xFFFFu));
    // 0019e4  mov al, 1
    X86_AT(c, 0x19e4u);
    s8(c, 0, 0x1u);
    // 0019e6  mov dx, 3
    X86_AT(c, 0x19e6u);
    s16(c, 2, 0x3u);
    // 0019ea  call 0x450
    X86_AT(c, 0x19eau);
    push32(c, 0x19efu); f_00000450(c); X86_RET(c, 0x19efu);
    X86_TICK(c, 11);
    // 0019ef  mov al, 0
    X86_AT(c, 0x19efu);
    s8(c, 0, 0x0u);
    // 0019f1  mov dx, 3
    X86_AT(c, 0x19f1u);
    s16(c, 2, 0x3u);
    // 0019f5  jmp 0x450
    X86_AT(c, 0x19f5u);
    X86_POLL(c, 0x450u); goto L_450;
    x86_fault(c, 0x19dfu, "ran off the end of a function");
}
void f_000019e4(X86Cpu& c) {
    goto L_19e4;
L_450:
    X86_TICK(c, 7);
    // 000450  cmp al, 0x80
    X86_AT(c, 0x450u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 000452  jae 0x4f8
    X86_AT(c, 0x452u);
    if (x86_cc(c, 3)) { goto L_4f8; }
    X86_TICK(c, 7);
    // 000458  cmp al, 2
    X86_AT(c, 0x458u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 00045a  jae 0x4ef
    X86_AT(c, 0x45au);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000460  test dx, dx
    X86_AT(c, 0x460u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 000463  je 0x4ef
    X86_AT(c, 0x463u);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 6);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
L_4df:
    X86_TICK(c, 7);
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
L_4f8:
    X86_TICK(c, 9);
    // 0004f8  sub al, 0x80
    X86_AT(c, 0x4f8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0004fa  cmp al, 3
    X86_AT(c, 0x4fau);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0004fc  ja 0x4ef
    X86_AT(c, 0x4fcu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x4efu); goto L_4ef; }
    X86_TICK(c, 9);
    // 0004fe  mov edi, 0x70
    X86_AT(c, 0x4feu);
    c.r[7] = 0x70u;
    // 000503  call 0x514
    X86_AT(c, 0x503u);
    push32(c, 0x508u); f_00000514(c); X86_RET(c, 0x508u);
    X86_TICK(c, 14);
    // 000508  add al, 0x80
    X86_AT(c, 0x508u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x80u, 0, 1)); }
    // 00050a  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x50au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 00050e  jne 0x4e9
    X86_AT(c, 0x50eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4e9u); goto L_4e9; }
    X86_TICK(c, 7);
    // 000510  jmp 0x4df
    X86_AT(c, 0x510u);
    X86_POLL(c, 0x4dfu); goto L_4df;
L_19e4:
    X86_TICK(c, 11);
    // 0019e4  mov al, 1
    X86_AT(c, 0x19e4u);
    s8(c, 0, 0x1u);
    // 0019e6  mov dx, 3
    X86_AT(c, 0x19e6u);
    s16(c, 2, 0x3u);
    // 0019ea  call 0x450
    X86_AT(c, 0x19eau);
    push32(c, 0x19efu); f_00000450(c); X86_RET(c, 0x19efu);
    X86_TICK(c, 11);
    // 0019ef  mov al, 0
    X86_AT(c, 0x19efu);
    s8(c, 0, 0x0u);
    // 0019f1  mov dx, 3
    X86_AT(c, 0x19f1u);
    s16(c, 2, 0x3u);
    // 0019f5  jmp 0x450
    X86_AT(c, 0x19f5u);
    X86_POLL(c, 0x450u); goto L_450;
    x86_fault(c, 0x19e4u, "ran off the end of a function");
}
void f_000019e6(X86Cpu& c) {
    goto L_19e6;
L_450:
    X86_TICK(c, 7);
    // 000450  cmp al, 0x80
    X86_AT(c, 0x450u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 000452  jae 0x4f8
    X86_AT(c, 0x452u);
    if (x86_cc(c, 3)) { goto L_4f8; }
    X86_TICK(c, 7);
    // 000458  cmp al, 2
    X86_AT(c, 0x458u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 00045a  jae 0x4ef
    X86_AT(c, 0x45au);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000460  test dx, dx
    X86_AT(c, 0x460u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 000463  je 0x4ef
    X86_AT(c, 0x463u);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 6);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
L_4df:
    X86_TICK(c, 7);
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
L_4f8:
    X86_TICK(c, 9);
    // 0004f8  sub al, 0x80
    X86_AT(c, 0x4f8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0004fa  cmp al, 3
    X86_AT(c, 0x4fau);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0004fc  ja 0x4ef
    X86_AT(c, 0x4fcu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x4efu); goto L_4ef; }
    X86_TICK(c, 9);
    // 0004fe  mov edi, 0x70
    X86_AT(c, 0x4feu);
    c.r[7] = 0x70u;
    // 000503  call 0x514
    X86_AT(c, 0x503u);
    push32(c, 0x508u); f_00000514(c); X86_RET(c, 0x508u);
    X86_TICK(c, 14);
    // 000508  add al, 0x80
    X86_AT(c, 0x508u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x80u, 0, 1)); }
    // 00050a  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x50au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 00050e  jne 0x4e9
    X86_AT(c, 0x50eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4e9u); goto L_4e9; }
    X86_TICK(c, 7);
    // 000510  jmp 0x4df
    X86_AT(c, 0x510u);
    X86_POLL(c, 0x4dfu); goto L_4df;
L_19e6:
    X86_TICK(c, 9);
    // 0019e6  mov dx, 3
    X86_AT(c, 0x19e6u);
    s16(c, 2, 0x3u);
    // 0019ea  call 0x450
    X86_AT(c, 0x19eau);
    push32(c, 0x19efu); f_00000450(c); X86_RET(c, 0x19efu);
    X86_TICK(c, 11);
    // 0019ef  mov al, 0
    X86_AT(c, 0x19efu);
    s8(c, 0, 0x0u);
    // 0019f1  mov dx, 3
    X86_AT(c, 0x19f1u);
    s16(c, 2, 0x3u);
    // 0019f5  jmp 0x450
    X86_AT(c, 0x19f5u);
    X86_POLL(c, 0x450u); goto L_450;
    x86_fault(c, 0x19e6u, "ran off the end of a function");
}
void f_000019ea(X86Cpu& c) {
    goto L_19ea;
L_450:
    X86_TICK(c, 7);
    // 000450  cmp al, 0x80
    X86_AT(c, 0x450u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 000452  jae 0x4f8
    X86_AT(c, 0x452u);
    if (x86_cc(c, 3)) { goto L_4f8; }
    X86_TICK(c, 7);
    // 000458  cmp al, 2
    X86_AT(c, 0x458u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 00045a  jae 0x4ef
    X86_AT(c, 0x45au);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000460  test dx, dx
    X86_AT(c, 0x460u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 000463  je 0x4ef
    X86_AT(c, 0x463u);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 6);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
L_4df:
    X86_TICK(c, 7);
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
L_4f8:
    X86_TICK(c, 9);
    // 0004f8  sub al, 0x80
    X86_AT(c, 0x4f8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0004fa  cmp al, 3
    X86_AT(c, 0x4fau);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0004fc  ja 0x4ef
    X86_AT(c, 0x4fcu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x4efu); goto L_4ef; }
    X86_TICK(c, 9);
    // 0004fe  mov edi, 0x70
    X86_AT(c, 0x4feu);
    c.r[7] = 0x70u;
    // 000503  call 0x514
    X86_AT(c, 0x503u);
    push32(c, 0x508u); f_00000514(c); X86_RET(c, 0x508u);
    X86_TICK(c, 14);
    // 000508  add al, 0x80
    X86_AT(c, 0x508u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x80u, 0, 1)); }
    // 00050a  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x50au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 00050e  jne 0x4e9
    X86_AT(c, 0x50eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4e9u); goto L_4e9; }
    X86_TICK(c, 7);
    // 000510  jmp 0x4df
    X86_AT(c, 0x510u);
    X86_POLL(c, 0x4dfu); goto L_4df;
L_19ea:
    X86_TICK(c, 7);
    // 0019ea  call 0x450
    X86_AT(c, 0x19eau);
    push32(c, 0x19efu); f_00000450(c); X86_RET(c, 0x19efu);
    X86_TICK(c, 11);
    // 0019ef  mov al, 0
    X86_AT(c, 0x19efu);
    s8(c, 0, 0x0u);
    // 0019f1  mov dx, 3
    X86_AT(c, 0x19f1u);
    s16(c, 2, 0x3u);
    // 0019f5  jmp 0x450
    X86_AT(c, 0x19f5u);
    X86_POLL(c, 0x450u); goto L_450;
    x86_fault(c, 0x19eau, "ran off the end of a function");
}
void f_000019ef(X86Cpu& c) {
    goto L_19ef;
L_450:
    X86_TICK(c, 7);
    // 000450  cmp al, 0x80
    X86_AT(c, 0x450u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 000452  jae 0x4f8
    X86_AT(c, 0x452u);
    if (x86_cc(c, 3)) { goto L_4f8; }
    X86_TICK(c, 7);
    // 000458  cmp al, 2
    X86_AT(c, 0x458u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 00045a  jae 0x4ef
    X86_AT(c, 0x45au);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000460  test dx, dx
    X86_AT(c, 0x460u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 000463  je 0x4ef
    X86_AT(c, 0x463u);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 6);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
L_4df:
    X86_TICK(c, 7);
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
L_4f8:
    X86_TICK(c, 9);
    // 0004f8  sub al, 0x80
    X86_AT(c, 0x4f8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0004fa  cmp al, 3
    X86_AT(c, 0x4fau);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0004fc  ja 0x4ef
    X86_AT(c, 0x4fcu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x4efu); goto L_4ef; }
    X86_TICK(c, 9);
    // 0004fe  mov edi, 0x70
    X86_AT(c, 0x4feu);
    c.r[7] = 0x70u;
    // 000503  call 0x514
    X86_AT(c, 0x503u);
    push32(c, 0x508u); f_00000514(c); X86_RET(c, 0x508u);
    X86_TICK(c, 14);
    // 000508  add al, 0x80
    X86_AT(c, 0x508u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x80u, 0, 1)); }
    // 00050a  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x50au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 00050e  jne 0x4e9
    X86_AT(c, 0x50eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4e9u); goto L_4e9; }
    X86_TICK(c, 7);
    // 000510  jmp 0x4df
    X86_AT(c, 0x510u);
    X86_POLL(c, 0x4dfu); goto L_4df;
L_19ef:
    X86_TICK(c, 11);
    // 0019ef  mov al, 0
    X86_AT(c, 0x19efu);
    s8(c, 0, 0x0u);
    // 0019f1  mov dx, 3
    X86_AT(c, 0x19f1u);
    s16(c, 2, 0x3u);
    // 0019f5  jmp 0x450
    X86_AT(c, 0x19f5u);
    X86_POLL(c, 0x450u); goto L_450;
    x86_fault(c, 0x19efu, "ran off the end of a function");
}
void f_000019f1(X86Cpu& c) {
    goto L_19f1;
L_450:
    X86_TICK(c, 7);
    // 000450  cmp al, 0x80
    X86_AT(c, 0x450u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 000452  jae 0x4f8
    X86_AT(c, 0x452u);
    if (x86_cc(c, 3)) { goto L_4f8; }
    X86_TICK(c, 7);
    // 000458  cmp al, 2
    X86_AT(c, 0x458u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 00045a  jae 0x4ef
    X86_AT(c, 0x45au);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000460  test dx, dx
    X86_AT(c, 0x460u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 000463  je 0x4ef
    X86_AT(c, 0x463u);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 6);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
L_4df:
    X86_TICK(c, 7);
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
L_4f8:
    X86_TICK(c, 9);
    // 0004f8  sub al, 0x80
    X86_AT(c, 0x4f8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0004fa  cmp al, 3
    X86_AT(c, 0x4fau);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0004fc  ja 0x4ef
    X86_AT(c, 0x4fcu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x4efu); goto L_4ef; }
    X86_TICK(c, 9);
    // 0004fe  mov edi, 0x70
    X86_AT(c, 0x4feu);
    c.r[7] = 0x70u;
    // 000503  call 0x514
    X86_AT(c, 0x503u);
    push32(c, 0x508u); f_00000514(c); X86_RET(c, 0x508u);
    X86_TICK(c, 14);
    // 000508  add al, 0x80
    X86_AT(c, 0x508u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x80u, 0, 1)); }
    // 00050a  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x50au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 00050e  jne 0x4e9
    X86_AT(c, 0x50eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4e9u); goto L_4e9; }
    X86_TICK(c, 7);
    // 000510  jmp 0x4df
    X86_AT(c, 0x510u);
    X86_POLL(c, 0x4dfu); goto L_4df;
L_19f1:
    X86_TICK(c, 9);
    // 0019f1  mov dx, 3
    X86_AT(c, 0x19f1u);
    s16(c, 2, 0x3u);
    // 0019f5  jmp 0x450
    X86_AT(c, 0x19f5u);
    X86_POLL(c, 0x450u); goto L_450;
    x86_fault(c, 0x19f1u, "ran off the end of a function");
}
void f_000019f5(X86Cpu& c) {
    goto L_19f5;
L_450:
    X86_TICK(c, 7);
    // 000450  cmp al, 0x80
    X86_AT(c, 0x450u);
    (void)x86_sub(c, g8(c, 0), 0x80u, 0, 1);
    // 000452  jae 0x4f8
    X86_AT(c, 0x452u);
    if (x86_cc(c, 3)) { goto L_4f8; }
    X86_TICK(c, 7);
    // 000458  cmp al, 2
    X86_AT(c, 0x458u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 00045a  jae 0x4ef
    X86_AT(c, 0x45au);
    if (x86_cc(c, 3)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000460  test dx, dx
    X86_AT(c, 0x460u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 000463  je 0x4ef
    X86_AT(c, 0x463u);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 000469  cmp dx, 0x12
    X86_AT(c, 0x469u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x12u, 0, 2);
    // 00046d  ja 0x4a8
    X86_AT(c, 0x46du);
    if (x86_cc(c, 7)) { goto L_4a8; }
    X86_TICK(c, 7);
    // 00046f  test al, al
    X86_AT(c, 0x46fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000471  je 0x479
    X86_AT(c, 0x471u);
    if (x86_cc(c, 4)) { goto L_479; }
    X86_TICK(c, 7);
    // 000473  cmp dx, 0xc
    X86_AT(c, 0x473u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 000477  jae 0x4ef
    X86_AT(c, 0x477u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_479:
    X86_TICK(c, 9);
    // 000479  push eax
    X86_AT(c, 0x479u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00047a  call 0x4c2
    X86_AT(c, 0x47au);
    push32(c, 0x47fu); f_000004c2(c); X86_RET(c, 0x47fu);
    X86_TICK(c, 7);
    // 00047f  call 0xdd4
    X86_AT(c, 0x47fu);
    push32(c, 0x484u); f_00000dd4(c); X86_RET(c, 0x484u);
    X86_TICK(c, 15);
    // 000484  push eax
    X86_AT(c, 0x484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000485  mov bx, word ptr cs:[eax*2 + 0x176e]
    X86_AT(c, 0x485u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0x176Eu))));
    // 00048e  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0x48eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000496  call 0xe10
    X86_AT(c, 0x496u);
    push32(c, 0x49bu); f_00000e10(c); X86_RET(c, 0x49bu);
    X86_TICK(c, 15);
    // 00049b  pop eax
    X86_AT(c, 0x49bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00049c  pop edx
    X86_AT(c, 0x49cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00049d  test eax, eax
    X86_AT(c, 0x49du);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 00049f  je 0x4ef
    X86_AT(c, 0x49fu);
    if (x86_cc(c, 4)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004a1  call 0xe70
    X86_AT(c, 0x4a1u);
    push32(c, 0x4a6u); f_00000e70(c); X86_RET(c, 0x4a6u);
    X86_TICK(c, 10);
    // 0004a6  ret 
    X86_AT(c, 0x4a6u);
    c.eip = pop32(c); return;
L_4a8:
    X86_TICK(c, 7);
    // 0004a8  cmp dx, 0x41
    X86_AT(c, 0x4a8u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x41u, 0, 2);
    // 0004ac  jb 0x4ef
    X86_AT(c, 0x4acu);
    if (x86_cc(c, 2)) { goto L_4ef; }
    X86_TICK(c, 7);
    // 0004ae  cmp dx, 0x52
    X86_AT(c, 0x4aeu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0x52u, 0, 2);
    // 0004b2  ja 0x4ef
    X86_AT(c, 0x4b2u);
    if (x86_cc(c, 7)) { goto L_4ef; }
    X86_TICK(c, 9);
    // 0004b4  sub dx, 0x40
    X86_AT(c, 0x4b4u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x40u, 0, 2)); }
    // 0004b8  test al, al
    X86_AT(c, 0x4b8u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0004ba  je 0x4c2
    X86_AT(c, 0x4bau);
    if (x86_cc(c, 4)) { goto L_4c2; }
    X86_TICK(c, 7);
    // 0004bc  cmp dx, 0xc
    X86_AT(c, 0x4bcu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xCu, 0, 2);
    // 0004c0  jae 0x4ef
    X86_AT(c, 0x4c0u);
    if (x86_cc(c, 3)) { goto L_4ef; }
L_4c2:
    X86_TICK(c, 14);
    // 0004c2  movzx eax, al
    X86_AT(c, 0x4c2u);
    c.r[0] = g8(c, 0);
    // 0004c5  mov byte ptr gs:[ebp + eax*1 + 0x3c], dl
    X86_AT(c, 0x4c5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)), g8(c, 2));
    // 0004ca  mov edi, 0x40
    X86_AT(c, 0x4cau);
    c.r[7] = 0x40u;
    // 0004cf  call 0x53c
    X86_AT(c, 0x4cfu);
    push32(c, 0x4d4u); f_0000053c(c); X86_RET(c, 0x4d4u);
    X86_TICK(c, 12);
    // 0004d4  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x4d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 0004d8  jne 0x4e9
    X86_AT(c, 0x4d8u);
    if (x86_cc(c, 5)) { goto L_4e9; }
    X86_TICK(c, 6);
    // 0004da  lds esi, fword ptr gs:[ebp + edi*1]
    X86_AT(c, 0x4dau);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[7])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
L_4df:
    X86_TICK(c, 7);
    // 0004df  call 0x1bcc
    X86_AT(c, 0x4dfu);
    push32(c, 0x4e4u); f_00001bcc(c); X86_RET(c, 0x4e4u);
    X86_TICK(c, 7);
    // 0004e4  cmp ah, 0
    X86_AT(c, 0x4e4u);
    (void)x86_sub(c, g8(c, 4), 0x0u, 0, 1);
    // 0004e7  jne 0x4ef
    X86_AT(c, 0x4e7u);
    if (x86_cc(c, 5)) { goto L_4ef; }
L_4e9:
    X86_TICK(c, 7);
    // 0004e9  call 0x1a00
    X86_AT(c, 0x4e9u);
    push32(c, 0x4eeu); f_00001a00(c); X86_RET(c, 0x4eeu);
    X86_TICK(c, 10);
    // 0004ee  ret 
    X86_AT(c, 0x4eeu);
    c.eip = pop32(c); return;
L_4ef:
    X86_TICK(c, 12);
    // 0004ef  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x4efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0004f4  ret 
    X86_AT(c, 0x4f4u);
    c.eip = pop32(c); return;
L_4f8:
    X86_TICK(c, 9);
    // 0004f8  sub al, 0x80
    X86_AT(c, 0x4f8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0x80u, 0, 1)); }
    // 0004fa  cmp al, 3
    X86_AT(c, 0x4fau);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0004fc  ja 0x4ef
    X86_AT(c, 0x4fcu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x4efu); goto L_4ef; }
    X86_TICK(c, 9);
    // 0004fe  mov edi, 0x70
    X86_AT(c, 0x4feu);
    c.r[7] = 0x70u;
    // 000503  call 0x514
    X86_AT(c, 0x503u);
    push32(c, 0x508u); f_00000514(c); X86_RET(c, 0x508u);
    X86_TICK(c, 14);
    // 000508  add al, 0x80
    X86_AT(c, 0x508u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x80u, 0, 1)); }
    // 00050a  cmp byte ptr gs:[ebp + 0x30], al
    X86_AT(c, 0x50au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), g8(c, 0), 0, 1);
    // 00050e  jne 0x4e9
    X86_AT(c, 0x50eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x4e9u); goto L_4e9; }
    X86_TICK(c, 7);
    // 000510  jmp 0x4df
    X86_AT(c, 0x510u);
    X86_POLL(c, 0x4dfu); goto L_4df;
L_19f5:
    X86_TICK(c, 7);
    // 0019f5  jmp 0x450
    X86_AT(c, 0x19f5u);
    X86_POLL(c, 0x450u); goto L_450;
    x86_fault(c, 0x19f5u, "ran off the end of a function");
}
void f_00001a00(X86Cpu& c) {
    X86_TICK(c, 23);
    // 001a00  mov eax, 0xffffffff
    X86_AT(c, 0x1a00u);
    c.r[0] = 0xFFFFFFFFu;
    // 001a05  sub edx, edx
    X86_AT(c, 0x1a05u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 001a07  mov dword ptr gs:[ebp + 0x110], eax
    X86_AT(c, 0x1a07u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x110u)), c.r[0]);
    // 001a0e  mov dword ptr gs:[ebp + 0x114], edx
    X86_AT(c, 0x1a0eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x114u)), c.r[2]);
    // 001a15  mov dword ptr gs:[ebp + 0x118], eax
    X86_AT(c, 0x1a15u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x118u)), c.r[0]);
    // 001a1c  mov dword ptr gs:[ebp + 0x11c], edx
    X86_AT(c, 0x1a1cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu)), c.r[2]);
    // 001a23  mov dword ptr gs:[ebp + 0x30], edx
    X86_AT(c, 0x1a23u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), c.r[2]);
    // 001a27  mov dword ptr gs:[ebp + 0x1bc], 0x800080
    X86_AT(c, 0x1a27u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1BCu)), 0x800080u);
    // 001a32  call 0x1b80
    X86_AT(c, 0x1a32u);
    push32(c, 0x1a37u); f_00001b80(c); X86_RET(c, 0x1a37u);
    X86_TICK(c, 39);
    // 001a37  sub eax, eax
    X86_AT(c, 0x1a37u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 001a39  mov dword ptr gs:[ebp + 0x34c], eax
    X86_AT(c, 0x1a39u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)), c.r[0]);
    // 001a40  mov dword ptr gs:[ebp + 0x350], 0x100008
    X86_AT(c, 0x1a40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x350u)), 0x100008u);
    // 001a4b  mov dword ptr gs:[ebp + 0x354], 0x100010
    X86_AT(c, 0x1a4bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)), 0x100010u);
    // 001a56  mov dword ptr gs:[ebp + 0x344], eax
    X86_AT(c, 0x1a56u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), c.r[0]);
    // 001a5d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x1a5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 001a65  mov word ptr gs:[ebp + 0x108], 2
    X86_AT(c, 0x1a65u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u)), 0x2u);
    // 001a6f  mov dword ptr gs:[ebp + 0x104], eax
    X86_AT(c, 0x1a6fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), c.r[0]);
    // 001a76  mov byte ptr gs:[ebp + 0x102], al
    X86_AT(c, 0x1a76u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x102u)), g8(c, 0));
    // 001a7d  mov dword ptr gs:[ebp + 0xa0], eax
    X86_AT(c, 0x1a7du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA0u)), c.r[0]);
    // 001a84  mov dword ptr gs:[ebp + 0xa4], eax
    X86_AT(c, 0x1a84u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA4u)), c.r[0]);
    // 001a8b  mov word ptr gs:[ebp + 0x338], ax
    X86_AT(c, 0x1a8bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u)), (c.r[0] & 0xFFFFu));
    // 001a93  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x1a93u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 001a9e  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1a9eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001aa5  mov dword ptr gs:[ebp + 0x300], eax
    X86_AT(c, 0x1aa5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[0]);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
    X86_TICK(c, 29);
    // 00b9a0  mov eax, gs
    X86_AT(c, 0xb9a0u);
    c.r[0] = (uint32_t)c.sreg[5];
    // 00b9a2  mov es, eax
    X86_AT(c, 0xb9a2u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 00b9a4  lea edi, [ebp + 0x234]
    X86_AT(c, 0xb9a4u);
    c.r[7] = (uint32_t)(c.r[5] + 0x234u);
    // 00b9aa  mov ecx, 0x20
    X86_AT(c, 0xb9aau);
    c.r[1] = 0x20u;
    // 00b9af  sub eax, eax
    X86_AT(c, 0xb9afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00b9b1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xb9b1u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00b9b3  test byte ptr gs:[ebp + 0x22a], 1
    X86_AT(c, 0xb9b3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au))) & 0x1u, 1);
    // 00b9bb  jne 0xbaa0
    X86_AT(c, 0xb9bbu);
    if (x86_cc(c, 5)) { goto L_baa0; }
    X86_TICK(c, 18);
    // 00b9c1  mov cl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xb9c1u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00b9c8  mov al, cl
    X86_AT(c, 0xb9c8u);
    s8(c, 0, g8(c, 1));
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
L_baa0:
    X86_TICK(c, 29);
    // 00baa0  sub eax, eax
    X86_AT(c, 0xbaa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00baa2  mov al, 0x20
    X86_AT(c, 0xbaa2u);
    s8(c, 0, 0x20u);
    // 00baa4  mov bl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbaa4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00baab  sub al, bl
    X86_AT(c, 0xbaabu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 00baad  shr al, 1
    X86_AT(c, 0xbaadu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00baaf  lea edi, [ebp + eax*4 + 0x234]
    X86_AT(c, 0xbaafu);
    c.r[7] = (uint32_t)(c.r[5] + c.r[0] * 4 + 0x234u);
    // 00bab6  mov al, bl
    X86_AT(c, 0xbab6u);
    s8(c, 0, g8(c, 3));
    // 00bab8  inc eax
    X86_AT(c, 0xbab8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00bab9  shr eax, 1
    X86_AT(c, 0xbab9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00babb  test bl, 1
    X86_AT(c, 0xbabbu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 00babe  je 0xbacc
    X86_AT(c, 0xbabeu);
    if (x86_cc(c, 4)) { goto L_bacc; }
    X86_TICK(c, 11);
    // 00bac0  mov eax, dword ptr cs:[eax*4 + 0xbd2c]
    X86_AT(c, 0xbac0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD2Cu)));
    // 00bac8  jmp 0xbad4
    X86_AT(c, 0xbac8u);
    goto L_bad4;
L_bacc:
    X86_TICK(c, 4);
    // 00bacc  mov eax, dword ptr cs:[eax*4 + 0xbd70]
    X86_AT(c, 0xbaccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD70u)));
L_bad4:
    X86_TICK(c, 23);
    // 00bad4  movzx ecx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbad4u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)));
    // 00badc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xbadcu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00bade  ret 
    X86_AT(c, 0xbadeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1a00u, "ran off the end of a function");
}
void f_00001a05(X86Cpu& c) {
    X86_TICK(c, 21);
    // 001a05  sub edx, edx
    X86_AT(c, 0x1a05u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 001a07  mov dword ptr gs:[ebp + 0x110], eax
    X86_AT(c, 0x1a07u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x110u)), c.r[0]);
    // 001a0e  mov dword ptr gs:[ebp + 0x114], edx
    X86_AT(c, 0x1a0eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x114u)), c.r[2]);
    // 001a15  mov dword ptr gs:[ebp + 0x118], eax
    X86_AT(c, 0x1a15u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x118u)), c.r[0]);
    // 001a1c  mov dword ptr gs:[ebp + 0x11c], edx
    X86_AT(c, 0x1a1cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu)), c.r[2]);
    // 001a23  mov dword ptr gs:[ebp + 0x30], edx
    X86_AT(c, 0x1a23u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), c.r[2]);
    // 001a27  mov dword ptr gs:[ebp + 0x1bc], 0x800080
    X86_AT(c, 0x1a27u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1BCu)), 0x800080u);
    // 001a32  call 0x1b80
    X86_AT(c, 0x1a32u);
    push32(c, 0x1a37u); f_00001b80(c); X86_RET(c, 0x1a37u);
    X86_TICK(c, 39);
    // 001a37  sub eax, eax
    X86_AT(c, 0x1a37u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 001a39  mov dword ptr gs:[ebp + 0x34c], eax
    X86_AT(c, 0x1a39u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)), c.r[0]);
    // 001a40  mov dword ptr gs:[ebp + 0x350], 0x100008
    X86_AT(c, 0x1a40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x350u)), 0x100008u);
    // 001a4b  mov dword ptr gs:[ebp + 0x354], 0x100010
    X86_AT(c, 0x1a4bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)), 0x100010u);
    // 001a56  mov dword ptr gs:[ebp + 0x344], eax
    X86_AT(c, 0x1a56u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), c.r[0]);
    // 001a5d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x1a5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 001a65  mov word ptr gs:[ebp + 0x108], 2
    X86_AT(c, 0x1a65u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u)), 0x2u);
    // 001a6f  mov dword ptr gs:[ebp + 0x104], eax
    X86_AT(c, 0x1a6fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), c.r[0]);
    // 001a76  mov byte ptr gs:[ebp + 0x102], al
    X86_AT(c, 0x1a76u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x102u)), g8(c, 0));
    // 001a7d  mov dword ptr gs:[ebp + 0xa0], eax
    X86_AT(c, 0x1a7du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA0u)), c.r[0]);
    // 001a84  mov dword ptr gs:[ebp + 0xa4], eax
    X86_AT(c, 0x1a84u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA4u)), c.r[0]);
    // 001a8b  mov word ptr gs:[ebp + 0x338], ax
    X86_AT(c, 0x1a8bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u)), (c.r[0] & 0xFFFFu));
    // 001a93  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x1a93u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 001a9e  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1a9eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001aa5  mov dword ptr gs:[ebp + 0x300], eax
    X86_AT(c, 0x1aa5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[0]);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
    X86_TICK(c, 29);
    // 00b9a0  mov eax, gs
    X86_AT(c, 0xb9a0u);
    c.r[0] = (uint32_t)c.sreg[5];
    // 00b9a2  mov es, eax
    X86_AT(c, 0xb9a2u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 00b9a4  lea edi, [ebp + 0x234]
    X86_AT(c, 0xb9a4u);
    c.r[7] = (uint32_t)(c.r[5] + 0x234u);
    // 00b9aa  mov ecx, 0x20
    X86_AT(c, 0xb9aau);
    c.r[1] = 0x20u;
    // 00b9af  sub eax, eax
    X86_AT(c, 0xb9afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00b9b1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xb9b1u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00b9b3  test byte ptr gs:[ebp + 0x22a], 1
    X86_AT(c, 0xb9b3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au))) & 0x1u, 1);
    // 00b9bb  jne 0xbaa0
    X86_AT(c, 0xb9bbu);
    if (x86_cc(c, 5)) { goto L_baa0; }
    X86_TICK(c, 18);
    // 00b9c1  mov cl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xb9c1u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00b9c8  mov al, cl
    X86_AT(c, 0xb9c8u);
    s8(c, 0, g8(c, 1));
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
L_baa0:
    X86_TICK(c, 29);
    // 00baa0  sub eax, eax
    X86_AT(c, 0xbaa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00baa2  mov al, 0x20
    X86_AT(c, 0xbaa2u);
    s8(c, 0, 0x20u);
    // 00baa4  mov bl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbaa4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00baab  sub al, bl
    X86_AT(c, 0xbaabu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 00baad  shr al, 1
    X86_AT(c, 0xbaadu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00baaf  lea edi, [ebp + eax*4 + 0x234]
    X86_AT(c, 0xbaafu);
    c.r[7] = (uint32_t)(c.r[5] + c.r[0] * 4 + 0x234u);
    // 00bab6  mov al, bl
    X86_AT(c, 0xbab6u);
    s8(c, 0, g8(c, 3));
    // 00bab8  inc eax
    X86_AT(c, 0xbab8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00bab9  shr eax, 1
    X86_AT(c, 0xbab9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00babb  test bl, 1
    X86_AT(c, 0xbabbu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 00babe  je 0xbacc
    X86_AT(c, 0xbabeu);
    if (x86_cc(c, 4)) { goto L_bacc; }
    X86_TICK(c, 11);
    // 00bac0  mov eax, dword ptr cs:[eax*4 + 0xbd2c]
    X86_AT(c, 0xbac0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD2Cu)));
    // 00bac8  jmp 0xbad4
    X86_AT(c, 0xbac8u);
    goto L_bad4;
L_bacc:
    X86_TICK(c, 4);
    // 00bacc  mov eax, dword ptr cs:[eax*4 + 0xbd70]
    X86_AT(c, 0xbaccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD70u)));
L_bad4:
    X86_TICK(c, 23);
    // 00bad4  movzx ecx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbad4u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)));
    // 00badc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xbadcu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00bade  ret 
    X86_AT(c, 0xbadeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1a05u, "ran off the end of a function");
}
void f_00001a07(X86Cpu& c) {
    X86_TICK(c, 19);
    // 001a07  mov dword ptr gs:[ebp + 0x110], eax
    X86_AT(c, 0x1a07u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x110u)), c.r[0]);
    // 001a0e  mov dword ptr gs:[ebp + 0x114], edx
    X86_AT(c, 0x1a0eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x114u)), c.r[2]);
    // 001a15  mov dword ptr gs:[ebp + 0x118], eax
    X86_AT(c, 0x1a15u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x118u)), c.r[0]);
    // 001a1c  mov dword ptr gs:[ebp + 0x11c], edx
    X86_AT(c, 0x1a1cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu)), c.r[2]);
    // 001a23  mov dword ptr gs:[ebp + 0x30], edx
    X86_AT(c, 0x1a23u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), c.r[2]);
    // 001a27  mov dword ptr gs:[ebp + 0x1bc], 0x800080
    X86_AT(c, 0x1a27u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1BCu)), 0x800080u);
    // 001a32  call 0x1b80
    X86_AT(c, 0x1a32u);
    push32(c, 0x1a37u); f_00001b80(c); X86_RET(c, 0x1a37u);
    X86_TICK(c, 39);
    // 001a37  sub eax, eax
    X86_AT(c, 0x1a37u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 001a39  mov dword ptr gs:[ebp + 0x34c], eax
    X86_AT(c, 0x1a39u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)), c.r[0]);
    // 001a40  mov dword ptr gs:[ebp + 0x350], 0x100008
    X86_AT(c, 0x1a40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x350u)), 0x100008u);
    // 001a4b  mov dword ptr gs:[ebp + 0x354], 0x100010
    X86_AT(c, 0x1a4bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)), 0x100010u);
    // 001a56  mov dword ptr gs:[ebp + 0x344], eax
    X86_AT(c, 0x1a56u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), c.r[0]);
    // 001a5d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x1a5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 001a65  mov word ptr gs:[ebp + 0x108], 2
    X86_AT(c, 0x1a65u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u)), 0x2u);
    // 001a6f  mov dword ptr gs:[ebp + 0x104], eax
    X86_AT(c, 0x1a6fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), c.r[0]);
    // 001a76  mov byte ptr gs:[ebp + 0x102], al
    X86_AT(c, 0x1a76u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x102u)), g8(c, 0));
    // 001a7d  mov dword ptr gs:[ebp + 0xa0], eax
    X86_AT(c, 0x1a7du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA0u)), c.r[0]);
    // 001a84  mov dword ptr gs:[ebp + 0xa4], eax
    X86_AT(c, 0x1a84u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA4u)), c.r[0]);
    // 001a8b  mov word ptr gs:[ebp + 0x338], ax
    X86_AT(c, 0x1a8bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u)), (c.r[0] & 0xFFFFu));
    // 001a93  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x1a93u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 001a9e  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1a9eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001aa5  mov dword ptr gs:[ebp + 0x300], eax
    X86_AT(c, 0x1aa5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[0]);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
    X86_TICK(c, 29);
    // 00b9a0  mov eax, gs
    X86_AT(c, 0xb9a0u);
    c.r[0] = (uint32_t)c.sreg[5];
    // 00b9a2  mov es, eax
    X86_AT(c, 0xb9a2u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 00b9a4  lea edi, [ebp + 0x234]
    X86_AT(c, 0xb9a4u);
    c.r[7] = (uint32_t)(c.r[5] + 0x234u);
    // 00b9aa  mov ecx, 0x20
    X86_AT(c, 0xb9aau);
    c.r[1] = 0x20u;
    // 00b9af  sub eax, eax
    X86_AT(c, 0xb9afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00b9b1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xb9b1u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00b9b3  test byte ptr gs:[ebp + 0x22a], 1
    X86_AT(c, 0xb9b3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au))) & 0x1u, 1);
    // 00b9bb  jne 0xbaa0
    X86_AT(c, 0xb9bbu);
    if (x86_cc(c, 5)) { goto L_baa0; }
    X86_TICK(c, 18);
    // 00b9c1  mov cl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xb9c1u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00b9c8  mov al, cl
    X86_AT(c, 0xb9c8u);
    s8(c, 0, g8(c, 1));
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
L_baa0:
    X86_TICK(c, 29);
    // 00baa0  sub eax, eax
    X86_AT(c, 0xbaa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00baa2  mov al, 0x20
    X86_AT(c, 0xbaa2u);
    s8(c, 0, 0x20u);
    // 00baa4  mov bl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbaa4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00baab  sub al, bl
    X86_AT(c, 0xbaabu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 00baad  shr al, 1
    X86_AT(c, 0xbaadu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00baaf  lea edi, [ebp + eax*4 + 0x234]
    X86_AT(c, 0xbaafu);
    c.r[7] = (uint32_t)(c.r[5] + c.r[0] * 4 + 0x234u);
    // 00bab6  mov al, bl
    X86_AT(c, 0xbab6u);
    s8(c, 0, g8(c, 3));
    // 00bab8  inc eax
    X86_AT(c, 0xbab8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00bab9  shr eax, 1
    X86_AT(c, 0xbab9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00babb  test bl, 1
    X86_AT(c, 0xbabbu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 00babe  je 0xbacc
    X86_AT(c, 0xbabeu);
    if (x86_cc(c, 4)) { goto L_bacc; }
    X86_TICK(c, 11);
    // 00bac0  mov eax, dword ptr cs:[eax*4 + 0xbd2c]
    X86_AT(c, 0xbac0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD2Cu)));
    // 00bac8  jmp 0xbad4
    X86_AT(c, 0xbac8u);
    goto L_bad4;
L_bacc:
    X86_TICK(c, 4);
    // 00bacc  mov eax, dword ptr cs:[eax*4 + 0xbd70]
    X86_AT(c, 0xbaccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD70u)));
L_bad4:
    X86_TICK(c, 23);
    // 00bad4  movzx ecx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbad4u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)));
    // 00badc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xbadcu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00bade  ret 
    X86_AT(c, 0xbadeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1a07u, "ran off the end of a function");
}
void f_00001a0e(X86Cpu& c) {
    X86_TICK(c, 17);
    // 001a0e  mov dword ptr gs:[ebp + 0x114], edx
    X86_AT(c, 0x1a0eu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x114u)), c.r[2]);
    // 001a15  mov dword ptr gs:[ebp + 0x118], eax
    X86_AT(c, 0x1a15u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x118u)), c.r[0]);
    // 001a1c  mov dword ptr gs:[ebp + 0x11c], edx
    X86_AT(c, 0x1a1cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu)), c.r[2]);
    // 001a23  mov dword ptr gs:[ebp + 0x30], edx
    X86_AT(c, 0x1a23u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), c.r[2]);
    // 001a27  mov dword ptr gs:[ebp + 0x1bc], 0x800080
    X86_AT(c, 0x1a27u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1BCu)), 0x800080u);
    // 001a32  call 0x1b80
    X86_AT(c, 0x1a32u);
    push32(c, 0x1a37u); f_00001b80(c); X86_RET(c, 0x1a37u);
    X86_TICK(c, 39);
    // 001a37  sub eax, eax
    X86_AT(c, 0x1a37u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 001a39  mov dword ptr gs:[ebp + 0x34c], eax
    X86_AT(c, 0x1a39u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)), c.r[0]);
    // 001a40  mov dword ptr gs:[ebp + 0x350], 0x100008
    X86_AT(c, 0x1a40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x350u)), 0x100008u);
    // 001a4b  mov dword ptr gs:[ebp + 0x354], 0x100010
    X86_AT(c, 0x1a4bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)), 0x100010u);
    // 001a56  mov dword ptr gs:[ebp + 0x344], eax
    X86_AT(c, 0x1a56u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), c.r[0]);
    // 001a5d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x1a5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 001a65  mov word ptr gs:[ebp + 0x108], 2
    X86_AT(c, 0x1a65u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u)), 0x2u);
    // 001a6f  mov dword ptr gs:[ebp + 0x104], eax
    X86_AT(c, 0x1a6fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), c.r[0]);
    // 001a76  mov byte ptr gs:[ebp + 0x102], al
    X86_AT(c, 0x1a76u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x102u)), g8(c, 0));
    // 001a7d  mov dword ptr gs:[ebp + 0xa0], eax
    X86_AT(c, 0x1a7du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA0u)), c.r[0]);
    // 001a84  mov dword ptr gs:[ebp + 0xa4], eax
    X86_AT(c, 0x1a84u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA4u)), c.r[0]);
    // 001a8b  mov word ptr gs:[ebp + 0x338], ax
    X86_AT(c, 0x1a8bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u)), (c.r[0] & 0xFFFFu));
    // 001a93  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x1a93u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 001a9e  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1a9eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001aa5  mov dword ptr gs:[ebp + 0x300], eax
    X86_AT(c, 0x1aa5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[0]);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
    X86_TICK(c, 29);
    // 00b9a0  mov eax, gs
    X86_AT(c, 0xb9a0u);
    c.r[0] = (uint32_t)c.sreg[5];
    // 00b9a2  mov es, eax
    X86_AT(c, 0xb9a2u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 00b9a4  lea edi, [ebp + 0x234]
    X86_AT(c, 0xb9a4u);
    c.r[7] = (uint32_t)(c.r[5] + 0x234u);
    // 00b9aa  mov ecx, 0x20
    X86_AT(c, 0xb9aau);
    c.r[1] = 0x20u;
    // 00b9af  sub eax, eax
    X86_AT(c, 0xb9afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00b9b1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xb9b1u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00b9b3  test byte ptr gs:[ebp + 0x22a], 1
    X86_AT(c, 0xb9b3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au))) & 0x1u, 1);
    // 00b9bb  jne 0xbaa0
    X86_AT(c, 0xb9bbu);
    if (x86_cc(c, 5)) { goto L_baa0; }
    X86_TICK(c, 18);
    // 00b9c1  mov cl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xb9c1u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00b9c8  mov al, cl
    X86_AT(c, 0xb9c8u);
    s8(c, 0, g8(c, 1));
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
L_baa0:
    X86_TICK(c, 29);
    // 00baa0  sub eax, eax
    X86_AT(c, 0xbaa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00baa2  mov al, 0x20
    X86_AT(c, 0xbaa2u);
    s8(c, 0, 0x20u);
    // 00baa4  mov bl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbaa4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00baab  sub al, bl
    X86_AT(c, 0xbaabu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 00baad  shr al, 1
    X86_AT(c, 0xbaadu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00baaf  lea edi, [ebp + eax*4 + 0x234]
    X86_AT(c, 0xbaafu);
    c.r[7] = (uint32_t)(c.r[5] + c.r[0] * 4 + 0x234u);
    // 00bab6  mov al, bl
    X86_AT(c, 0xbab6u);
    s8(c, 0, g8(c, 3));
    // 00bab8  inc eax
    X86_AT(c, 0xbab8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00bab9  shr eax, 1
    X86_AT(c, 0xbab9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00babb  test bl, 1
    X86_AT(c, 0xbabbu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 00babe  je 0xbacc
    X86_AT(c, 0xbabeu);
    if (x86_cc(c, 4)) { goto L_bacc; }
    X86_TICK(c, 11);
    // 00bac0  mov eax, dword ptr cs:[eax*4 + 0xbd2c]
    X86_AT(c, 0xbac0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD2Cu)));
    // 00bac8  jmp 0xbad4
    X86_AT(c, 0xbac8u);
    goto L_bad4;
L_bacc:
    X86_TICK(c, 4);
    // 00bacc  mov eax, dword ptr cs:[eax*4 + 0xbd70]
    X86_AT(c, 0xbaccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD70u)));
L_bad4:
    X86_TICK(c, 23);
    // 00bad4  movzx ecx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbad4u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)));
    // 00badc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xbadcu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00bade  ret 
    X86_AT(c, 0xbadeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1a0eu, "ran off the end of a function");
}
void f_00001a15(X86Cpu& c) {
    X86_TICK(c, 15);
    // 001a15  mov dword ptr gs:[ebp + 0x118], eax
    X86_AT(c, 0x1a15u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x118u)), c.r[0]);
    // 001a1c  mov dword ptr gs:[ebp + 0x11c], edx
    X86_AT(c, 0x1a1cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu)), c.r[2]);
    // 001a23  mov dword ptr gs:[ebp + 0x30], edx
    X86_AT(c, 0x1a23u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), c.r[2]);
    // 001a27  mov dword ptr gs:[ebp + 0x1bc], 0x800080
    X86_AT(c, 0x1a27u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1BCu)), 0x800080u);
    // 001a32  call 0x1b80
    X86_AT(c, 0x1a32u);
    push32(c, 0x1a37u); f_00001b80(c); X86_RET(c, 0x1a37u);
    X86_TICK(c, 39);
    // 001a37  sub eax, eax
    X86_AT(c, 0x1a37u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 001a39  mov dword ptr gs:[ebp + 0x34c], eax
    X86_AT(c, 0x1a39u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)), c.r[0]);
    // 001a40  mov dword ptr gs:[ebp + 0x350], 0x100008
    X86_AT(c, 0x1a40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x350u)), 0x100008u);
    // 001a4b  mov dword ptr gs:[ebp + 0x354], 0x100010
    X86_AT(c, 0x1a4bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)), 0x100010u);
    // 001a56  mov dword ptr gs:[ebp + 0x344], eax
    X86_AT(c, 0x1a56u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), c.r[0]);
    // 001a5d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x1a5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 001a65  mov word ptr gs:[ebp + 0x108], 2
    X86_AT(c, 0x1a65u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u)), 0x2u);
    // 001a6f  mov dword ptr gs:[ebp + 0x104], eax
    X86_AT(c, 0x1a6fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), c.r[0]);
    // 001a76  mov byte ptr gs:[ebp + 0x102], al
    X86_AT(c, 0x1a76u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x102u)), g8(c, 0));
    // 001a7d  mov dword ptr gs:[ebp + 0xa0], eax
    X86_AT(c, 0x1a7du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA0u)), c.r[0]);
    // 001a84  mov dword ptr gs:[ebp + 0xa4], eax
    X86_AT(c, 0x1a84u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA4u)), c.r[0]);
    // 001a8b  mov word ptr gs:[ebp + 0x338], ax
    X86_AT(c, 0x1a8bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u)), (c.r[0] & 0xFFFFu));
    // 001a93  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x1a93u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 001a9e  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1a9eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001aa5  mov dword ptr gs:[ebp + 0x300], eax
    X86_AT(c, 0x1aa5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[0]);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
    X86_TICK(c, 29);
    // 00b9a0  mov eax, gs
    X86_AT(c, 0xb9a0u);
    c.r[0] = (uint32_t)c.sreg[5];
    // 00b9a2  mov es, eax
    X86_AT(c, 0xb9a2u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 00b9a4  lea edi, [ebp + 0x234]
    X86_AT(c, 0xb9a4u);
    c.r[7] = (uint32_t)(c.r[5] + 0x234u);
    // 00b9aa  mov ecx, 0x20
    X86_AT(c, 0xb9aau);
    c.r[1] = 0x20u;
    // 00b9af  sub eax, eax
    X86_AT(c, 0xb9afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00b9b1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xb9b1u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00b9b3  test byte ptr gs:[ebp + 0x22a], 1
    X86_AT(c, 0xb9b3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au))) & 0x1u, 1);
    // 00b9bb  jne 0xbaa0
    X86_AT(c, 0xb9bbu);
    if (x86_cc(c, 5)) { goto L_baa0; }
    X86_TICK(c, 18);
    // 00b9c1  mov cl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xb9c1u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00b9c8  mov al, cl
    X86_AT(c, 0xb9c8u);
    s8(c, 0, g8(c, 1));
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
L_baa0:
    X86_TICK(c, 29);
    // 00baa0  sub eax, eax
    X86_AT(c, 0xbaa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00baa2  mov al, 0x20
    X86_AT(c, 0xbaa2u);
    s8(c, 0, 0x20u);
    // 00baa4  mov bl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbaa4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00baab  sub al, bl
    X86_AT(c, 0xbaabu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 00baad  shr al, 1
    X86_AT(c, 0xbaadu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00baaf  lea edi, [ebp + eax*4 + 0x234]
    X86_AT(c, 0xbaafu);
    c.r[7] = (uint32_t)(c.r[5] + c.r[0] * 4 + 0x234u);
    // 00bab6  mov al, bl
    X86_AT(c, 0xbab6u);
    s8(c, 0, g8(c, 3));
    // 00bab8  inc eax
    X86_AT(c, 0xbab8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00bab9  shr eax, 1
    X86_AT(c, 0xbab9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00babb  test bl, 1
    X86_AT(c, 0xbabbu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 00babe  je 0xbacc
    X86_AT(c, 0xbabeu);
    if (x86_cc(c, 4)) { goto L_bacc; }
    X86_TICK(c, 11);
    // 00bac0  mov eax, dword ptr cs:[eax*4 + 0xbd2c]
    X86_AT(c, 0xbac0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD2Cu)));
    // 00bac8  jmp 0xbad4
    X86_AT(c, 0xbac8u);
    goto L_bad4;
L_bacc:
    X86_TICK(c, 4);
    // 00bacc  mov eax, dword ptr cs:[eax*4 + 0xbd70]
    X86_AT(c, 0xbaccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD70u)));
L_bad4:
    X86_TICK(c, 23);
    // 00bad4  movzx ecx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbad4u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)));
    // 00badc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xbadcu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00bade  ret 
    X86_AT(c, 0xbadeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1a15u, "ran off the end of a function");
}
void f_00001a1c(X86Cpu& c) {
    X86_TICK(c, 13);
    // 001a1c  mov dword ptr gs:[ebp + 0x11c], edx
    X86_AT(c, 0x1a1cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu)), c.r[2]);
    // 001a23  mov dword ptr gs:[ebp + 0x30], edx
    X86_AT(c, 0x1a23u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), c.r[2]);
    // 001a27  mov dword ptr gs:[ebp + 0x1bc], 0x800080
    X86_AT(c, 0x1a27u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1BCu)), 0x800080u);
    // 001a32  call 0x1b80
    X86_AT(c, 0x1a32u);
    push32(c, 0x1a37u); f_00001b80(c); X86_RET(c, 0x1a37u);
    X86_TICK(c, 39);
    // 001a37  sub eax, eax
    X86_AT(c, 0x1a37u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 001a39  mov dword ptr gs:[ebp + 0x34c], eax
    X86_AT(c, 0x1a39u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)), c.r[0]);
    // 001a40  mov dword ptr gs:[ebp + 0x350], 0x100008
    X86_AT(c, 0x1a40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x350u)), 0x100008u);
    // 001a4b  mov dword ptr gs:[ebp + 0x354], 0x100010
    X86_AT(c, 0x1a4bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)), 0x100010u);
    // 001a56  mov dword ptr gs:[ebp + 0x344], eax
    X86_AT(c, 0x1a56u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), c.r[0]);
    // 001a5d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x1a5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 001a65  mov word ptr gs:[ebp + 0x108], 2
    X86_AT(c, 0x1a65u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u)), 0x2u);
    // 001a6f  mov dword ptr gs:[ebp + 0x104], eax
    X86_AT(c, 0x1a6fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), c.r[0]);
    // 001a76  mov byte ptr gs:[ebp + 0x102], al
    X86_AT(c, 0x1a76u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x102u)), g8(c, 0));
    // 001a7d  mov dword ptr gs:[ebp + 0xa0], eax
    X86_AT(c, 0x1a7du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA0u)), c.r[0]);
    // 001a84  mov dword ptr gs:[ebp + 0xa4], eax
    X86_AT(c, 0x1a84u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA4u)), c.r[0]);
    // 001a8b  mov word ptr gs:[ebp + 0x338], ax
    X86_AT(c, 0x1a8bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u)), (c.r[0] & 0xFFFFu));
    // 001a93  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x1a93u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 001a9e  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1a9eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001aa5  mov dword ptr gs:[ebp + 0x300], eax
    X86_AT(c, 0x1aa5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[0]);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
    X86_TICK(c, 29);
    // 00b9a0  mov eax, gs
    X86_AT(c, 0xb9a0u);
    c.r[0] = (uint32_t)c.sreg[5];
    // 00b9a2  mov es, eax
    X86_AT(c, 0xb9a2u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 00b9a4  lea edi, [ebp + 0x234]
    X86_AT(c, 0xb9a4u);
    c.r[7] = (uint32_t)(c.r[5] + 0x234u);
    // 00b9aa  mov ecx, 0x20
    X86_AT(c, 0xb9aau);
    c.r[1] = 0x20u;
    // 00b9af  sub eax, eax
    X86_AT(c, 0xb9afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00b9b1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xb9b1u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00b9b3  test byte ptr gs:[ebp + 0x22a], 1
    X86_AT(c, 0xb9b3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au))) & 0x1u, 1);
    // 00b9bb  jne 0xbaa0
    X86_AT(c, 0xb9bbu);
    if (x86_cc(c, 5)) { goto L_baa0; }
    X86_TICK(c, 18);
    // 00b9c1  mov cl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xb9c1u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00b9c8  mov al, cl
    X86_AT(c, 0xb9c8u);
    s8(c, 0, g8(c, 1));
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
L_baa0:
    X86_TICK(c, 29);
    // 00baa0  sub eax, eax
    X86_AT(c, 0xbaa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00baa2  mov al, 0x20
    X86_AT(c, 0xbaa2u);
    s8(c, 0, 0x20u);
    // 00baa4  mov bl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbaa4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00baab  sub al, bl
    X86_AT(c, 0xbaabu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 00baad  shr al, 1
    X86_AT(c, 0xbaadu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00baaf  lea edi, [ebp + eax*4 + 0x234]
    X86_AT(c, 0xbaafu);
    c.r[7] = (uint32_t)(c.r[5] + c.r[0] * 4 + 0x234u);
    // 00bab6  mov al, bl
    X86_AT(c, 0xbab6u);
    s8(c, 0, g8(c, 3));
    // 00bab8  inc eax
    X86_AT(c, 0xbab8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00bab9  shr eax, 1
    X86_AT(c, 0xbab9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00babb  test bl, 1
    X86_AT(c, 0xbabbu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 00babe  je 0xbacc
    X86_AT(c, 0xbabeu);
    if (x86_cc(c, 4)) { goto L_bacc; }
    X86_TICK(c, 11);
    // 00bac0  mov eax, dword ptr cs:[eax*4 + 0xbd2c]
    X86_AT(c, 0xbac0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD2Cu)));
    // 00bac8  jmp 0xbad4
    X86_AT(c, 0xbac8u);
    goto L_bad4;
L_bacc:
    X86_TICK(c, 4);
    // 00bacc  mov eax, dword ptr cs:[eax*4 + 0xbd70]
    X86_AT(c, 0xbaccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD70u)));
L_bad4:
    X86_TICK(c, 23);
    // 00bad4  movzx ecx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbad4u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)));
    // 00badc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xbadcu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00bade  ret 
    X86_AT(c, 0xbadeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1a1cu, "ran off the end of a function");
}
void f_00001a23(X86Cpu& c) {
    X86_TICK(c, 11);
    // 001a23  mov dword ptr gs:[ebp + 0x30], edx
    X86_AT(c, 0x1a23u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)), c.r[2]);
    // 001a27  mov dword ptr gs:[ebp + 0x1bc], 0x800080
    X86_AT(c, 0x1a27u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1BCu)), 0x800080u);
    // 001a32  call 0x1b80
    X86_AT(c, 0x1a32u);
    push32(c, 0x1a37u); f_00001b80(c); X86_RET(c, 0x1a37u);
    X86_TICK(c, 39);
    // 001a37  sub eax, eax
    X86_AT(c, 0x1a37u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 001a39  mov dword ptr gs:[ebp + 0x34c], eax
    X86_AT(c, 0x1a39u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)), c.r[0]);
    // 001a40  mov dword ptr gs:[ebp + 0x350], 0x100008
    X86_AT(c, 0x1a40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x350u)), 0x100008u);
    // 001a4b  mov dword ptr gs:[ebp + 0x354], 0x100010
    X86_AT(c, 0x1a4bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)), 0x100010u);
    // 001a56  mov dword ptr gs:[ebp + 0x344], eax
    X86_AT(c, 0x1a56u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), c.r[0]);
    // 001a5d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x1a5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 001a65  mov word ptr gs:[ebp + 0x108], 2
    X86_AT(c, 0x1a65u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u)), 0x2u);
    // 001a6f  mov dword ptr gs:[ebp + 0x104], eax
    X86_AT(c, 0x1a6fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), c.r[0]);
    // 001a76  mov byte ptr gs:[ebp + 0x102], al
    X86_AT(c, 0x1a76u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x102u)), g8(c, 0));
    // 001a7d  mov dword ptr gs:[ebp + 0xa0], eax
    X86_AT(c, 0x1a7du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA0u)), c.r[0]);
    // 001a84  mov dword ptr gs:[ebp + 0xa4], eax
    X86_AT(c, 0x1a84u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA4u)), c.r[0]);
    // 001a8b  mov word ptr gs:[ebp + 0x338], ax
    X86_AT(c, 0x1a8bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u)), (c.r[0] & 0xFFFFu));
    // 001a93  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x1a93u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 001a9e  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1a9eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001aa5  mov dword ptr gs:[ebp + 0x300], eax
    X86_AT(c, 0x1aa5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[0]);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
    X86_TICK(c, 29);
    // 00b9a0  mov eax, gs
    X86_AT(c, 0xb9a0u);
    c.r[0] = (uint32_t)c.sreg[5];
    // 00b9a2  mov es, eax
    X86_AT(c, 0xb9a2u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 00b9a4  lea edi, [ebp + 0x234]
    X86_AT(c, 0xb9a4u);
    c.r[7] = (uint32_t)(c.r[5] + 0x234u);
    // 00b9aa  mov ecx, 0x20
    X86_AT(c, 0xb9aau);
    c.r[1] = 0x20u;
    // 00b9af  sub eax, eax
    X86_AT(c, 0xb9afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00b9b1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xb9b1u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00b9b3  test byte ptr gs:[ebp + 0x22a], 1
    X86_AT(c, 0xb9b3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au))) & 0x1u, 1);
    // 00b9bb  jne 0xbaa0
    X86_AT(c, 0xb9bbu);
    if (x86_cc(c, 5)) { goto L_baa0; }
    X86_TICK(c, 18);
    // 00b9c1  mov cl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xb9c1u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00b9c8  mov al, cl
    X86_AT(c, 0xb9c8u);
    s8(c, 0, g8(c, 1));
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
L_baa0:
    X86_TICK(c, 29);
    // 00baa0  sub eax, eax
    X86_AT(c, 0xbaa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00baa2  mov al, 0x20
    X86_AT(c, 0xbaa2u);
    s8(c, 0, 0x20u);
    // 00baa4  mov bl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbaa4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00baab  sub al, bl
    X86_AT(c, 0xbaabu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 00baad  shr al, 1
    X86_AT(c, 0xbaadu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00baaf  lea edi, [ebp + eax*4 + 0x234]
    X86_AT(c, 0xbaafu);
    c.r[7] = (uint32_t)(c.r[5] + c.r[0] * 4 + 0x234u);
    // 00bab6  mov al, bl
    X86_AT(c, 0xbab6u);
    s8(c, 0, g8(c, 3));
    // 00bab8  inc eax
    X86_AT(c, 0xbab8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00bab9  shr eax, 1
    X86_AT(c, 0xbab9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00babb  test bl, 1
    X86_AT(c, 0xbabbu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 00babe  je 0xbacc
    X86_AT(c, 0xbabeu);
    if (x86_cc(c, 4)) { goto L_bacc; }
    X86_TICK(c, 11);
    // 00bac0  mov eax, dword ptr cs:[eax*4 + 0xbd2c]
    X86_AT(c, 0xbac0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD2Cu)));
    // 00bac8  jmp 0xbad4
    X86_AT(c, 0xbac8u);
    goto L_bad4;
L_bacc:
    X86_TICK(c, 4);
    // 00bacc  mov eax, dword ptr cs:[eax*4 + 0xbd70]
    X86_AT(c, 0xbaccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD70u)));
L_bad4:
    X86_TICK(c, 23);
    // 00bad4  movzx ecx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbad4u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)));
    // 00badc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xbadcu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00bade  ret 
    X86_AT(c, 0xbadeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1a23u, "ran off the end of a function");
}
void f_00001a27(X86Cpu& c) {
    X86_TICK(c, 9);
    // 001a27  mov dword ptr gs:[ebp + 0x1bc], 0x800080
    X86_AT(c, 0x1a27u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1BCu)), 0x800080u);
    // 001a32  call 0x1b80
    X86_AT(c, 0x1a32u);
    push32(c, 0x1a37u); f_00001b80(c); X86_RET(c, 0x1a37u);
    X86_TICK(c, 39);
    // 001a37  sub eax, eax
    X86_AT(c, 0x1a37u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 001a39  mov dword ptr gs:[ebp + 0x34c], eax
    X86_AT(c, 0x1a39u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)), c.r[0]);
    // 001a40  mov dword ptr gs:[ebp + 0x350], 0x100008
    X86_AT(c, 0x1a40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x350u)), 0x100008u);
    // 001a4b  mov dword ptr gs:[ebp + 0x354], 0x100010
    X86_AT(c, 0x1a4bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)), 0x100010u);
    // 001a56  mov dword ptr gs:[ebp + 0x344], eax
    X86_AT(c, 0x1a56u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), c.r[0]);
    // 001a5d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x1a5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 001a65  mov word ptr gs:[ebp + 0x108], 2
    X86_AT(c, 0x1a65u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u)), 0x2u);
    // 001a6f  mov dword ptr gs:[ebp + 0x104], eax
    X86_AT(c, 0x1a6fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), c.r[0]);
    // 001a76  mov byte ptr gs:[ebp + 0x102], al
    X86_AT(c, 0x1a76u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x102u)), g8(c, 0));
    // 001a7d  mov dword ptr gs:[ebp + 0xa0], eax
    X86_AT(c, 0x1a7du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA0u)), c.r[0]);
    // 001a84  mov dword ptr gs:[ebp + 0xa4], eax
    X86_AT(c, 0x1a84u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA4u)), c.r[0]);
    // 001a8b  mov word ptr gs:[ebp + 0x338], ax
    X86_AT(c, 0x1a8bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u)), (c.r[0] & 0xFFFFu));
    // 001a93  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x1a93u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 001a9e  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1a9eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001aa5  mov dword ptr gs:[ebp + 0x300], eax
    X86_AT(c, 0x1aa5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[0]);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
    X86_TICK(c, 29);
    // 00b9a0  mov eax, gs
    X86_AT(c, 0xb9a0u);
    c.r[0] = (uint32_t)c.sreg[5];
    // 00b9a2  mov es, eax
    X86_AT(c, 0xb9a2u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 00b9a4  lea edi, [ebp + 0x234]
    X86_AT(c, 0xb9a4u);
    c.r[7] = (uint32_t)(c.r[5] + 0x234u);
    // 00b9aa  mov ecx, 0x20
    X86_AT(c, 0xb9aau);
    c.r[1] = 0x20u;
    // 00b9af  sub eax, eax
    X86_AT(c, 0xb9afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00b9b1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xb9b1u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00b9b3  test byte ptr gs:[ebp + 0x22a], 1
    X86_AT(c, 0xb9b3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au))) & 0x1u, 1);
    // 00b9bb  jne 0xbaa0
    X86_AT(c, 0xb9bbu);
    if (x86_cc(c, 5)) { goto L_baa0; }
    X86_TICK(c, 18);
    // 00b9c1  mov cl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xb9c1u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00b9c8  mov al, cl
    X86_AT(c, 0xb9c8u);
    s8(c, 0, g8(c, 1));
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
L_baa0:
    X86_TICK(c, 29);
    // 00baa0  sub eax, eax
    X86_AT(c, 0xbaa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00baa2  mov al, 0x20
    X86_AT(c, 0xbaa2u);
    s8(c, 0, 0x20u);
    // 00baa4  mov bl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbaa4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00baab  sub al, bl
    X86_AT(c, 0xbaabu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 00baad  shr al, 1
    X86_AT(c, 0xbaadu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00baaf  lea edi, [ebp + eax*4 + 0x234]
    X86_AT(c, 0xbaafu);
    c.r[7] = (uint32_t)(c.r[5] + c.r[0] * 4 + 0x234u);
    // 00bab6  mov al, bl
    X86_AT(c, 0xbab6u);
    s8(c, 0, g8(c, 3));
    // 00bab8  inc eax
    X86_AT(c, 0xbab8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00bab9  shr eax, 1
    X86_AT(c, 0xbab9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00babb  test bl, 1
    X86_AT(c, 0xbabbu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 00babe  je 0xbacc
    X86_AT(c, 0xbabeu);
    if (x86_cc(c, 4)) { goto L_bacc; }
    X86_TICK(c, 11);
    // 00bac0  mov eax, dword ptr cs:[eax*4 + 0xbd2c]
    X86_AT(c, 0xbac0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD2Cu)));
    // 00bac8  jmp 0xbad4
    X86_AT(c, 0xbac8u);
    goto L_bad4;
L_bacc:
    X86_TICK(c, 4);
    // 00bacc  mov eax, dword ptr cs:[eax*4 + 0xbd70]
    X86_AT(c, 0xbaccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD70u)));
L_bad4:
    X86_TICK(c, 23);
    // 00bad4  movzx ecx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbad4u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)));
    // 00badc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xbadcu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00bade  ret 
    X86_AT(c, 0xbadeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1a27u, "ran off the end of a function");
}
void f_00001a32(X86Cpu& c) {
    X86_TICK(c, 7);
    // 001a32  call 0x1b80
    X86_AT(c, 0x1a32u);
    push32(c, 0x1a37u); f_00001b80(c); X86_RET(c, 0x1a37u);
    X86_TICK(c, 39);
    // 001a37  sub eax, eax
    X86_AT(c, 0x1a37u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 001a39  mov dword ptr gs:[ebp + 0x34c], eax
    X86_AT(c, 0x1a39u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)), c.r[0]);
    // 001a40  mov dword ptr gs:[ebp + 0x350], 0x100008
    X86_AT(c, 0x1a40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x350u)), 0x100008u);
    // 001a4b  mov dword ptr gs:[ebp + 0x354], 0x100010
    X86_AT(c, 0x1a4bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)), 0x100010u);
    // 001a56  mov dword ptr gs:[ebp + 0x344], eax
    X86_AT(c, 0x1a56u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), c.r[0]);
    // 001a5d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x1a5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 001a65  mov word ptr gs:[ebp + 0x108], 2
    X86_AT(c, 0x1a65u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u)), 0x2u);
    // 001a6f  mov dword ptr gs:[ebp + 0x104], eax
    X86_AT(c, 0x1a6fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), c.r[0]);
    // 001a76  mov byte ptr gs:[ebp + 0x102], al
    X86_AT(c, 0x1a76u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x102u)), g8(c, 0));
    // 001a7d  mov dword ptr gs:[ebp + 0xa0], eax
    X86_AT(c, 0x1a7du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA0u)), c.r[0]);
    // 001a84  mov dword ptr gs:[ebp + 0xa4], eax
    X86_AT(c, 0x1a84u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA4u)), c.r[0]);
    // 001a8b  mov word ptr gs:[ebp + 0x338], ax
    X86_AT(c, 0x1a8bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u)), (c.r[0] & 0xFFFFu));
    // 001a93  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x1a93u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 001a9e  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1a9eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001aa5  mov dword ptr gs:[ebp + 0x300], eax
    X86_AT(c, 0x1aa5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[0]);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
    X86_TICK(c, 29);
    // 00b9a0  mov eax, gs
    X86_AT(c, 0xb9a0u);
    c.r[0] = (uint32_t)c.sreg[5];
    // 00b9a2  mov es, eax
    X86_AT(c, 0xb9a2u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 00b9a4  lea edi, [ebp + 0x234]
    X86_AT(c, 0xb9a4u);
    c.r[7] = (uint32_t)(c.r[5] + 0x234u);
    // 00b9aa  mov ecx, 0x20
    X86_AT(c, 0xb9aau);
    c.r[1] = 0x20u;
    // 00b9af  sub eax, eax
    X86_AT(c, 0xb9afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00b9b1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xb9b1u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00b9b3  test byte ptr gs:[ebp + 0x22a], 1
    X86_AT(c, 0xb9b3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au))) & 0x1u, 1);
    // 00b9bb  jne 0xbaa0
    X86_AT(c, 0xb9bbu);
    if (x86_cc(c, 5)) { goto L_baa0; }
    X86_TICK(c, 18);
    // 00b9c1  mov cl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xb9c1u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00b9c8  mov al, cl
    X86_AT(c, 0xb9c8u);
    s8(c, 0, g8(c, 1));
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
L_baa0:
    X86_TICK(c, 29);
    // 00baa0  sub eax, eax
    X86_AT(c, 0xbaa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00baa2  mov al, 0x20
    X86_AT(c, 0xbaa2u);
    s8(c, 0, 0x20u);
    // 00baa4  mov bl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbaa4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00baab  sub al, bl
    X86_AT(c, 0xbaabu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 00baad  shr al, 1
    X86_AT(c, 0xbaadu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00baaf  lea edi, [ebp + eax*4 + 0x234]
    X86_AT(c, 0xbaafu);
    c.r[7] = (uint32_t)(c.r[5] + c.r[0] * 4 + 0x234u);
    // 00bab6  mov al, bl
    X86_AT(c, 0xbab6u);
    s8(c, 0, g8(c, 3));
    // 00bab8  inc eax
    X86_AT(c, 0xbab8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00bab9  shr eax, 1
    X86_AT(c, 0xbab9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00babb  test bl, 1
    X86_AT(c, 0xbabbu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 00babe  je 0xbacc
    X86_AT(c, 0xbabeu);
    if (x86_cc(c, 4)) { goto L_bacc; }
    X86_TICK(c, 11);
    // 00bac0  mov eax, dword ptr cs:[eax*4 + 0xbd2c]
    X86_AT(c, 0xbac0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD2Cu)));
    // 00bac8  jmp 0xbad4
    X86_AT(c, 0xbac8u);
    goto L_bad4;
L_bacc:
    X86_TICK(c, 4);
    // 00bacc  mov eax, dword ptr cs:[eax*4 + 0xbd70]
    X86_AT(c, 0xbaccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD70u)));
L_bad4:
    X86_TICK(c, 23);
    // 00bad4  movzx ecx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbad4u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)));
    // 00badc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xbadcu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00bade  ret 
    X86_AT(c, 0xbadeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1a32u, "ran off the end of a function");
}
void f_00001a37(X86Cpu& c) {
    X86_TICK(c, 39);
    // 001a37  sub eax, eax
    X86_AT(c, 0x1a37u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 001a39  mov dword ptr gs:[ebp + 0x34c], eax
    X86_AT(c, 0x1a39u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)), c.r[0]);
    // 001a40  mov dword ptr gs:[ebp + 0x350], 0x100008
    X86_AT(c, 0x1a40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x350u)), 0x100008u);
    // 001a4b  mov dword ptr gs:[ebp + 0x354], 0x100010
    X86_AT(c, 0x1a4bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)), 0x100010u);
    // 001a56  mov dword ptr gs:[ebp + 0x344], eax
    X86_AT(c, 0x1a56u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), c.r[0]);
    // 001a5d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x1a5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 001a65  mov word ptr gs:[ebp + 0x108], 2
    X86_AT(c, 0x1a65u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u)), 0x2u);
    // 001a6f  mov dword ptr gs:[ebp + 0x104], eax
    X86_AT(c, 0x1a6fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), c.r[0]);
    // 001a76  mov byte ptr gs:[ebp + 0x102], al
    X86_AT(c, 0x1a76u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x102u)), g8(c, 0));
    // 001a7d  mov dword ptr gs:[ebp + 0xa0], eax
    X86_AT(c, 0x1a7du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA0u)), c.r[0]);
    // 001a84  mov dword ptr gs:[ebp + 0xa4], eax
    X86_AT(c, 0x1a84u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA4u)), c.r[0]);
    // 001a8b  mov word ptr gs:[ebp + 0x338], ax
    X86_AT(c, 0x1a8bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u)), (c.r[0] & 0xFFFFu));
    // 001a93  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x1a93u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 001a9e  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1a9eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001aa5  mov dword ptr gs:[ebp + 0x300], eax
    X86_AT(c, 0x1aa5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[0]);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
    X86_TICK(c, 29);
    // 00b9a0  mov eax, gs
    X86_AT(c, 0xb9a0u);
    c.r[0] = (uint32_t)c.sreg[5];
    // 00b9a2  mov es, eax
    X86_AT(c, 0xb9a2u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 00b9a4  lea edi, [ebp + 0x234]
    X86_AT(c, 0xb9a4u);
    c.r[7] = (uint32_t)(c.r[5] + 0x234u);
    // 00b9aa  mov ecx, 0x20
    X86_AT(c, 0xb9aau);
    c.r[1] = 0x20u;
    // 00b9af  sub eax, eax
    X86_AT(c, 0xb9afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00b9b1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xb9b1u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00b9b3  test byte ptr gs:[ebp + 0x22a], 1
    X86_AT(c, 0xb9b3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au))) & 0x1u, 1);
    // 00b9bb  jne 0xbaa0
    X86_AT(c, 0xb9bbu);
    if (x86_cc(c, 5)) { goto L_baa0; }
    X86_TICK(c, 18);
    // 00b9c1  mov cl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xb9c1u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00b9c8  mov al, cl
    X86_AT(c, 0xb9c8u);
    s8(c, 0, g8(c, 1));
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
L_baa0:
    X86_TICK(c, 29);
    // 00baa0  sub eax, eax
    X86_AT(c, 0xbaa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00baa2  mov al, 0x20
    X86_AT(c, 0xbaa2u);
    s8(c, 0, 0x20u);
    // 00baa4  mov bl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbaa4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00baab  sub al, bl
    X86_AT(c, 0xbaabu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 00baad  shr al, 1
    X86_AT(c, 0xbaadu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00baaf  lea edi, [ebp + eax*4 + 0x234]
    X86_AT(c, 0xbaafu);
    c.r[7] = (uint32_t)(c.r[5] + c.r[0] * 4 + 0x234u);
    // 00bab6  mov al, bl
    X86_AT(c, 0xbab6u);
    s8(c, 0, g8(c, 3));
    // 00bab8  inc eax
    X86_AT(c, 0xbab8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00bab9  shr eax, 1
    X86_AT(c, 0xbab9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00babb  test bl, 1
    X86_AT(c, 0xbabbu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 00babe  je 0xbacc
    X86_AT(c, 0xbabeu);
    if (x86_cc(c, 4)) { goto L_bacc; }
    X86_TICK(c, 11);
    // 00bac0  mov eax, dword ptr cs:[eax*4 + 0xbd2c]
    X86_AT(c, 0xbac0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD2Cu)));
    // 00bac8  jmp 0xbad4
    X86_AT(c, 0xbac8u);
    goto L_bad4;
L_bacc:
    X86_TICK(c, 4);
    // 00bacc  mov eax, dword ptr cs:[eax*4 + 0xbd70]
    X86_AT(c, 0xbaccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD70u)));
L_bad4:
    X86_TICK(c, 23);
    // 00bad4  movzx ecx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbad4u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)));
    // 00badc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xbadcu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00bade  ret 
    X86_AT(c, 0xbadeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1a37u, "ran off the end of a function");
}
void f_00001a39(X86Cpu& c) {
    X86_TICK(c, 37);
    // 001a39  mov dword ptr gs:[ebp + 0x34c], eax
    X86_AT(c, 0x1a39u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)), c.r[0]);
    // 001a40  mov dword ptr gs:[ebp + 0x350], 0x100008
    X86_AT(c, 0x1a40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x350u)), 0x100008u);
    // 001a4b  mov dword ptr gs:[ebp + 0x354], 0x100010
    X86_AT(c, 0x1a4bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)), 0x100010u);
    // 001a56  mov dword ptr gs:[ebp + 0x344], eax
    X86_AT(c, 0x1a56u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), c.r[0]);
    // 001a5d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x1a5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 001a65  mov word ptr gs:[ebp + 0x108], 2
    X86_AT(c, 0x1a65u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u)), 0x2u);
    // 001a6f  mov dword ptr gs:[ebp + 0x104], eax
    X86_AT(c, 0x1a6fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), c.r[0]);
    // 001a76  mov byte ptr gs:[ebp + 0x102], al
    X86_AT(c, 0x1a76u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x102u)), g8(c, 0));
    // 001a7d  mov dword ptr gs:[ebp + 0xa0], eax
    X86_AT(c, 0x1a7du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA0u)), c.r[0]);
    // 001a84  mov dword ptr gs:[ebp + 0xa4], eax
    X86_AT(c, 0x1a84u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA4u)), c.r[0]);
    // 001a8b  mov word ptr gs:[ebp + 0x338], ax
    X86_AT(c, 0x1a8bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u)), (c.r[0] & 0xFFFFu));
    // 001a93  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x1a93u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 001a9e  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1a9eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001aa5  mov dword ptr gs:[ebp + 0x300], eax
    X86_AT(c, 0x1aa5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[0]);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
    X86_TICK(c, 29);
    // 00b9a0  mov eax, gs
    X86_AT(c, 0xb9a0u);
    c.r[0] = (uint32_t)c.sreg[5];
    // 00b9a2  mov es, eax
    X86_AT(c, 0xb9a2u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 00b9a4  lea edi, [ebp + 0x234]
    X86_AT(c, 0xb9a4u);
    c.r[7] = (uint32_t)(c.r[5] + 0x234u);
    // 00b9aa  mov ecx, 0x20
    X86_AT(c, 0xb9aau);
    c.r[1] = 0x20u;
    // 00b9af  sub eax, eax
    X86_AT(c, 0xb9afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00b9b1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xb9b1u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00b9b3  test byte ptr gs:[ebp + 0x22a], 1
    X86_AT(c, 0xb9b3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au))) & 0x1u, 1);
    // 00b9bb  jne 0xbaa0
    X86_AT(c, 0xb9bbu);
    if (x86_cc(c, 5)) { goto L_baa0; }
    X86_TICK(c, 18);
    // 00b9c1  mov cl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xb9c1u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00b9c8  mov al, cl
    X86_AT(c, 0xb9c8u);
    s8(c, 0, g8(c, 1));
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
L_baa0:
    X86_TICK(c, 29);
    // 00baa0  sub eax, eax
    X86_AT(c, 0xbaa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00baa2  mov al, 0x20
    X86_AT(c, 0xbaa2u);
    s8(c, 0, 0x20u);
    // 00baa4  mov bl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbaa4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00baab  sub al, bl
    X86_AT(c, 0xbaabu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 00baad  shr al, 1
    X86_AT(c, 0xbaadu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00baaf  lea edi, [ebp + eax*4 + 0x234]
    X86_AT(c, 0xbaafu);
    c.r[7] = (uint32_t)(c.r[5] + c.r[0] * 4 + 0x234u);
    // 00bab6  mov al, bl
    X86_AT(c, 0xbab6u);
    s8(c, 0, g8(c, 3));
    // 00bab8  inc eax
    X86_AT(c, 0xbab8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00bab9  shr eax, 1
    X86_AT(c, 0xbab9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00babb  test bl, 1
    X86_AT(c, 0xbabbu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 00babe  je 0xbacc
    X86_AT(c, 0xbabeu);
    if (x86_cc(c, 4)) { goto L_bacc; }
    X86_TICK(c, 11);
    // 00bac0  mov eax, dword ptr cs:[eax*4 + 0xbd2c]
    X86_AT(c, 0xbac0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD2Cu)));
    // 00bac8  jmp 0xbad4
    X86_AT(c, 0xbac8u);
    goto L_bad4;
L_bacc:
    X86_TICK(c, 4);
    // 00bacc  mov eax, dword ptr cs:[eax*4 + 0xbd70]
    X86_AT(c, 0xbaccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD70u)));
L_bad4:
    X86_TICK(c, 23);
    // 00bad4  movzx ecx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbad4u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)));
    // 00badc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xbadcu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00bade  ret 
    X86_AT(c, 0xbadeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1a39u, "ran off the end of a function");
}
void f_00001a40(X86Cpu& c) {
    X86_TICK(c, 35);
    // 001a40  mov dword ptr gs:[ebp + 0x350], 0x100008
    X86_AT(c, 0x1a40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x350u)), 0x100008u);
    // 001a4b  mov dword ptr gs:[ebp + 0x354], 0x100010
    X86_AT(c, 0x1a4bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)), 0x100010u);
    // 001a56  mov dword ptr gs:[ebp + 0x344], eax
    X86_AT(c, 0x1a56u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), c.r[0]);
    // 001a5d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x1a5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 001a65  mov word ptr gs:[ebp + 0x108], 2
    X86_AT(c, 0x1a65u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u)), 0x2u);
    // 001a6f  mov dword ptr gs:[ebp + 0x104], eax
    X86_AT(c, 0x1a6fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), c.r[0]);
    // 001a76  mov byte ptr gs:[ebp + 0x102], al
    X86_AT(c, 0x1a76u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x102u)), g8(c, 0));
    // 001a7d  mov dword ptr gs:[ebp + 0xa0], eax
    X86_AT(c, 0x1a7du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA0u)), c.r[0]);
    // 001a84  mov dword ptr gs:[ebp + 0xa4], eax
    X86_AT(c, 0x1a84u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA4u)), c.r[0]);
    // 001a8b  mov word ptr gs:[ebp + 0x338], ax
    X86_AT(c, 0x1a8bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u)), (c.r[0] & 0xFFFFu));
    // 001a93  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x1a93u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 001a9e  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1a9eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001aa5  mov dword ptr gs:[ebp + 0x300], eax
    X86_AT(c, 0x1aa5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[0]);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
    X86_TICK(c, 29);
    // 00b9a0  mov eax, gs
    X86_AT(c, 0xb9a0u);
    c.r[0] = (uint32_t)c.sreg[5];
    // 00b9a2  mov es, eax
    X86_AT(c, 0xb9a2u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 00b9a4  lea edi, [ebp + 0x234]
    X86_AT(c, 0xb9a4u);
    c.r[7] = (uint32_t)(c.r[5] + 0x234u);
    // 00b9aa  mov ecx, 0x20
    X86_AT(c, 0xb9aau);
    c.r[1] = 0x20u;
    // 00b9af  sub eax, eax
    X86_AT(c, 0xb9afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00b9b1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xb9b1u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00b9b3  test byte ptr gs:[ebp + 0x22a], 1
    X86_AT(c, 0xb9b3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au))) & 0x1u, 1);
    // 00b9bb  jne 0xbaa0
    X86_AT(c, 0xb9bbu);
    if (x86_cc(c, 5)) { goto L_baa0; }
    X86_TICK(c, 18);
    // 00b9c1  mov cl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xb9c1u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00b9c8  mov al, cl
    X86_AT(c, 0xb9c8u);
    s8(c, 0, g8(c, 1));
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
L_baa0:
    X86_TICK(c, 29);
    // 00baa0  sub eax, eax
    X86_AT(c, 0xbaa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00baa2  mov al, 0x20
    X86_AT(c, 0xbaa2u);
    s8(c, 0, 0x20u);
    // 00baa4  mov bl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbaa4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00baab  sub al, bl
    X86_AT(c, 0xbaabu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 00baad  shr al, 1
    X86_AT(c, 0xbaadu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00baaf  lea edi, [ebp + eax*4 + 0x234]
    X86_AT(c, 0xbaafu);
    c.r[7] = (uint32_t)(c.r[5] + c.r[0] * 4 + 0x234u);
    // 00bab6  mov al, bl
    X86_AT(c, 0xbab6u);
    s8(c, 0, g8(c, 3));
    // 00bab8  inc eax
    X86_AT(c, 0xbab8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00bab9  shr eax, 1
    X86_AT(c, 0xbab9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00babb  test bl, 1
    X86_AT(c, 0xbabbu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 00babe  je 0xbacc
    X86_AT(c, 0xbabeu);
    if (x86_cc(c, 4)) { goto L_bacc; }
    X86_TICK(c, 11);
    // 00bac0  mov eax, dword ptr cs:[eax*4 + 0xbd2c]
    X86_AT(c, 0xbac0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD2Cu)));
    // 00bac8  jmp 0xbad4
    X86_AT(c, 0xbac8u);
    goto L_bad4;
L_bacc:
    X86_TICK(c, 4);
    // 00bacc  mov eax, dword ptr cs:[eax*4 + 0xbd70]
    X86_AT(c, 0xbaccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD70u)));
L_bad4:
    X86_TICK(c, 23);
    // 00bad4  movzx ecx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbad4u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)));
    // 00badc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xbadcu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00bade  ret 
    X86_AT(c, 0xbadeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1a40u, "ran off the end of a function");
}
void f_00001a4b(X86Cpu& c) {
    X86_TICK(c, 33);
    // 001a4b  mov dword ptr gs:[ebp + 0x354], 0x100010
    X86_AT(c, 0x1a4bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x354u)), 0x100010u);
    // 001a56  mov dword ptr gs:[ebp + 0x344], eax
    X86_AT(c, 0x1a56u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)), c.r[0]);
    // 001a5d  mov byte ptr gs:[ebp + 0x378], 0x10
    X86_AT(c, 0x1a5du);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x378u)), 0x10u);
    // 001a65  mov word ptr gs:[ebp + 0x108], 2
    X86_AT(c, 0x1a65u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x108u)), 0x2u);
    // 001a6f  mov dword ptr gs:[ebp + 0x104], eax
    X86_AT(c, 0x1a6fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)), c.r[0]);
    // 001a76  mov byte ptr gs:[ebp + 0x102], al
    X86_AT(c, 0x1a76u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x102u)), g8(c, 0));
    // 001a7d  mov dword ptr gs:[ebp + 0xa0], eax
    X86_AT(c, 0x1a7du);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA0u)), c.r[0]);
    // 001a84  mov dword ptr gs:[ebp + 0xa4], eax
    X86_AT(c, 0x1a84u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0xA4u)), c.r[0]);
    // 001a8b  mov word ptr gs:[ebp + 0x338], ax
    X86_AT(c, 0x1a8bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u)), (c.r[0] & 0xFFFFu));
    // 001a93  mov dword ptr gs:[ebp + 0x1dc], 0xffffffff
    X86_AT(c, 0x1a93u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)), 0xFFFFFFFFu);
    // 001a9e  mov byte ptr gs:[ebp + 0x1e0], al
    X86_AT(c, 0x1a9eu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E0u)), g8(c, 0));
    // 001aa5  mov dword ptr gs:[ebp + 0x300], eax
    X86_AT(c, 0x1aa5u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u)), c.r[0]);
    // 001aac  mov dword ptr gs:[ebp + 0x228], 1
    X86_AT(c, 0x1aacu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)), 0x1u);
    // 001ab7  jmp 0xb9a0
    X86_AT(c, 0x1ab7u);
    goto L_b9a0;
L_b9a0:
    X86_TICK(c, 29);
    // 00b9a0  mov eax, gs
    X86_AT(c, 0xb9a0u);
    c.r[0] = (uint32_t)c.sreg[5];
    // 00b9a2  mov es, eax
    X86_AT(c, 0xb9a2u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 00b9a4  lea edi, [ebp + 0x234]
    X86_AT(c, 0xb9a4u);
    c.r[7] = (uint32_t)(c.r[5] + 0x234u);
    // 00b9aa  mov ecx, 0x20
    X86_AT(c, 0xb9aau);
    c.r[1] = 0x20u;
    // 00b9af  sub eax, eax
    X86_AT(c, 0xb9afu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00b9b1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xb9b1u);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00b9b3  test byte ptr gs:[ebp + 0x22a], 1
    X86_AT(c, 0xb9b3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Au))) & 0x1u, 1);
    // 00b9bb  jne 0xbaa0
    X86_AT(c, 0xb9bbu);
    if (x86_cc(c, 5)) { goto L_baa0; }
    X86_TICK(c, 18);
    // 00b9c1  mov cl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xb9c1u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00b9c8  mov al, cl
    X86_AT(c, 0xb9c8u);
    s8(c, 0, g8(c, 1));
    // 00b9ca  shr al, 1
    X86_AT(c, 0xb9cau);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00b9cc  mov byte ptr gs:[ebp + 0x229], al
    X86_AT(c, 0xb9ccu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u)), g8(c, 0));
    // 00b9d3  test cl, 1
    X86_AT(c, 0xb9d3u);
    (void)x86_logic(c, g8(c, 1) & 0x1u, 1);
    // 00b9d6  je 0xb9e3
    X86_AT(c, 0xb9d6u);
    if (x86_cc(c, 4)) { goto L_b9e3; }
    X86_TICK(c, 14);
    // 00b9d8  inc cl
    X86_AT(c, 0xb9d8u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_inc(c, v, 1)); }
    // 00b9da  shr cl, 1
    X86_AT(c, 0xb9dau);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 1, r); }
    // 00b9dc  mov ch, 0
    X86_AT(c, 0xb9dcu);
    s8(c, 5, 0x0u);
    // 00b9de  call 0xba34
    X86_AT(c, 0xb9deu);
    push32(c, 0xb9e3u); f_0000ba34(c); X86_RET(c, 0xb9e3u);
L_b9e3:
    X86_TICK(c, 12);
    // 00b9e3  cmp byte ptr gs:[ebp + 0x229], 0
    X86_AT(c, 0xb9e3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))), 0x0u, 0, 1);
    // 00b9eb  je 0xba32
    X86_AT(c, 0xb9ebu);
    if (x86_cc(c, 4)) { goto L_ba32; }
    X86_TICK(c, 2);
    // 00b9ed  mov bx, 2
    X86_AT(c, 0xb9edu);
    s16(c, 3, 0x2u);
L_b9f1:
    X86_TICK(c, 11);
    // 00b9f1  push ebx
    X86_AT(c, 0xb9f1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00b9f2  mov word ptr gs:[ebp + 0x30c], bx
    X86_AT(c, 0xb9f2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu)), (c.r[3] & 0xFFFFu));
    // 00b9fa  call 0xbbfc
    X86_AT(c, 0xb9fau);
    push32(c, 0xb9ffu); f_0000bbfc(c); X86_RET(c, 0xb9ffu);
    X86_TICK(c, 37);
    // 00b9ff  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xb9ffu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba06  mul ah
    X86_AT(c, 0xba06u);
    x86_mul(c, g8(c, 4), 1);
    // 00ba08  add ax, 0x80
    X86_AT(c, 0xba08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba0c  mov cl, ah
    X86_AT(c, 0xba0cu);
    s8(c, 1, g8(c, 4));
    // 00ba0e  call 0xbb94
    X86_AT(c, 0xba0eu);
    push32(c, 0xba13u); f_0000bb94(c); X86_RET(c, 0xba13u);
    X86_TICK(c, 37);
    // 00ba13  mov al, byte ptr gs:[ebp + 0x229]
    X86_AT(c, 0xba13u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x229u))));
    // 00ba1a  mul ah
    X86_AT(c, 0xba1au);
    x86_mul(c, g8(c, 4), 1);
    // 00ba1c  add ax, 0x80
    X86_AT(c, 0xba1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x80u, 0, 2)); }
    // 00ba20  mov ch, ah
    X86_AT(c, 0xba20u);
    s8(c, 5, g8(c, 4));
    // 00ba22  call 0xba34
    X86_AT(c, 0xba22u);
    push32(c, 0xba27u); f_0000ba34(c); X86_RET(c, 0xba27u);
    X86_TICK(c, 13);
    // 00ba27  pop ebx
    X86_AT(c, 0xba27u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00ba28  add bx, 2
    X86_AT(c, 0xba28u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x2u, 0, 2)); }
    // 00ba2c  cmp bx, 0x5a
    X86_AT(c, 0xba2cu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0x5Au, 0, 2);
    // 00ba30  jbe 0xb9f1
    X86_AT(c, 0xba30u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xb9f1u); goto L_b9f1; }
L_ba32:
    X86_TICK(c, 10);
    // 00ba32  ret 
    X86_AT(c, 0xba32u);
    c.eip = pop32(c); return;
L_baa0:
    X86_TICK(c, 29);
    // 00baa0  sub eax, eax
    X86_AT(c, 0xbaa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00baa2  mov al, 0x20
    X86_AT(c, 0xbaa2u);
    s8(c, 0, 0x20u);
    // 00baa4  mov bl, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbaa4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 00baab  sub al, bl
    X86_AT(c, 0xbaabu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 3), 0, 1)); }
    // 00baad  shr al, 1
    X86_AT(c, 0xbaadu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 00baaf  lea edi, [ebp + eax*4 + 0x234]
    X86_AT(c, 0xbaafu);
    c.r[7] = (uint32_t)(c.r[5] + c.r[0] * 4 + 0x234u);
    // 00bab6  mov al, bl
    X86_AT(c, 0xbab6u);
    s8(c, 0, g8(c, 3));
    // 00bab8  inc eax
    X86_AT(c, 0xbab8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00bab9  shr eax, 1
    X86_AT(c, 0xbab9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 00babb  test bl, 1
    X86_AT(c, 0xbabbu);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 00babe  je 0xbacc
    X86_AT(c, 0xbabeu);
    if (x86_cc(c, 4)) { goto L_bacc; }
    X86_TICK(c, 11);
    // 00bac0  mov eax, dword ptr cs:[eax*4 + 0xbd2c]
    X86_AT(c, 0xbac0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD2Cu)));
    // 00bac8  jmp 0xbad4
    X86_AT(c, 0xbac8u);
    goto L_bad4;
L_bacc:
    X86_TICK(c, 4);
    // 00bacc  mov eax, dword ptr cs:[eax*4 + 0xbd70]
    X86_AT(c, 0xbaccu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBD70u)));
L_bad4:
    X86_TICK(c, 23);
    // 00bad4  movzx ecx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0xbad4u);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u)));
    // 00badc  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xbadcu);
    x86_string(c, 2, 4, 243, 4, 3);
    // 00bade  ret 
    X86_AT(c, 0xbadeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1a4bu, "ran off the end of a function");
}
}
