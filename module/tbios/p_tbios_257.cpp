#include "p_tbios_funcs.h"
namespace p_tbios {
void f_0000d63f(X86Cpu& c) {
    X86_TICK(c, 16);
    // 00d63f  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd63fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d648  cmp word ptr gs:[ebp + esi*1 + 0x4a4], ax
    X86_AT(c, 0xd648u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A4u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d651  jge 0xd680
    X86_AT(c, 0xd651u);
    if (x86_cc(c, 13)) { goto L_d680; }
    X86_TICK(c, 18);
    // 00d653  xchg word ptr gs:[ebp + esi*1 + 0x4a4], ax
    X86_AT(c, 0xd653u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A4u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d65c  mov word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd65cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d665  mov ax, word ptr gs:[ebp + esi*1 + 0x4a2]
    X86_AT(c, 0xd665u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))));
    // 00d66e  xchg word ptr gs:[ebp + esi*1 + 0x4a6], ax
    X86_AT(c, 0xd66eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A6u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d677  mov word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd677u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d680:
    X86_TICK(c, 22);
    // 00d680  pop ebx
    X86_AT(c, 0xd680u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d681  pop esi
    X86_AT(c, 0xd681u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d682  pop edi
    X86_AT(c, 0xd682u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d683  ret 
    X86_AT(c, 0xd683u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd63fu, "ran off the end of a function");
}
void f_0000d648(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d648  cmp word ptr gs:[ebp + esi*1 + 0x4a4], ax
    X86_AT(c, 0xd648u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A4u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d651  jge 0xd680
    X86_AT(c, 0xd651u);
    if (x86_cc(c, 13)) { goto L_d680; }
    X86_TICK(c, 18);
    // 00d653  xchg word ptr gs:[ebp + esi*1 + 0x4a4], ax
    X86_AT(c, 0xd653u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A4u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d65c  mov word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd65cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d665  mov ax, word ptr gs:[ebp + esi*1 + 0x4a2]
    X86_AT(c, 0xd665u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))));
    // 00d66e  xchg word ptr gs:[ebp + esi*1 + 0x4a6], ax
    X86_AT(c, 0xd66eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A6u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d677  mov word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd677u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d680:
    X86_TICK(c, 22);
    // 00d680  pop ebx
    X86_AT(c, 0xd680u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d681  pop esi
    X86_AT(c, 0xd681u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d682  pop edi
    X86_AT(c, 0xd682u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d683  ret 
    X86_AT(c, 0xd683u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd648u, "ran off the end of a function");
}
void f_0000d651(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d651  jge 0xd680
    X86_AT(c, 0xd651u);
    if (x86_cc(c, 13)) { goto L_d680; }
    X86_TICK(c, 18);
    // 00d653  xchg word ptr gs:[ebp + esi*1 + 0x4a4], ax
    X86_AT(c, 0xd653u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A4u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d65c  mov word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd65cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d665  mov ax, word ptr gs:[ebp + esi*1 + 0x4a2]
    X86_AT(c, 0xd665u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))));
    // 00d66e  xchg word ptr gs:[ebp + esi*1 + 0x4a6], ax
    X86_AT(c, 0xd66eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A6u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d677  mov word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd677u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d680:
    X86_TICK(c, 22);
    // 00d680  pop ebx
    X86_AT(c, 0xd680u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d681  pop esi
    X86_AT(c, 0xd681u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d682  pop edi
    X86_AT(c, 0xd682u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d683  ret 
    X86_AT(c, 0xd683u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd651u, "ran off the end of a function");
}
void f_0000d680(X86Cpu& c) {
    X86_TICK(c, 22);
    // 00d680  pop ebx
    X86_AT(c, 0xd680u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d681  pop esi
    X86_AT(c, 0xd681u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d682  pop edi
    X86_AT(c, 0xd682u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d683  ret 
    X86_AT(c, 0xd683u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd680u, "ran off the end of a function");
}
void f_0000d681(X86Cpu& c) {
    X86_TICK(c, 18);
    // 00d681  pop esi
    X86_AT(c, 0xd681u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d682  pop edi
    X86_AT(c, 0xd682u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d683  ret 
    X86_AT(c, 0xd683u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd681u, "ran off the end of a function");
}
void f_0000d682(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00d682  pop edi
    X86_AT(c, 0xd682u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d683  ret 
    X86_AT(c, 0xd683u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd682u, "ran off the end of a function");
}
void f_0000d683(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00d683  ret 
    X86_AT(c, 0xd683u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd683u, "ran off the end of a function");
}
void f_0000d684(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00d684  mov ebx, eax
    X86_AT(c, 0xd684u);
    c.r[3] = c.r[0];
    // 00d686  sub bx, 4
    X86_AT(c, 0xd686u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, 0x4u, 0, 2)); }
    // 00d68a  mov ecx, ebx
    X86_AT(c, 0xd68au);
    c.r[1] = c.r[3];
    // 00d68c  sub cx, 4
    X86_AT(c, 0xd68cu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x4u, 0, 2)); }
    // 00d690  sub edi, edi
    X86_AT(c, 0xd690u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd684u, "ran off the end of a function");
}
void f_0000d686(X86Cpu& c) {
    X86_TICK(c, 8);
    // 00d686  sub bx, 4
    X86_AT(c, 0xd686u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, 0x4u, 0, 2)); }
    // 00d68a  mov ecx, ebx
    X86_AT(c, 0xd68au);
    c.r[1] = c.r[3];
    // 00d68c  sub cx, 4
    X86_AT(c, 0xd68cu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x4u, 0, 2)); }
    // 00d690  sub edi, edi
    X86_AT(c, 0xd690u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd686u, "ran off the end of a function");
}
void f_0000d68a(X86Cpu& c) {
    X86_TICK(c, 6);
    // 00d68a  mov ecx, ebx
    X86_AT(c, 0xd68au);
    c.r[1] = c.r[3];
    // 00d68c  sub cx, 4
    X86_AT(c, 0xd68cu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x4u, 0, 2)); }
    // 00d690  sub edi, edi
    X86_AT(c, 0xd690u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd68au, "ran off the end of a function");
}
void f_0000d68c(X86Cpu& c) {
    X86_TICK(c, 4);
    // 00d68c  sub cx, 4
    X86_AT(c, 0xd68cu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x4u, 0, 2)); }
    // 00d690  sub edi, edi
    X86_AT(c, 0xd690u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd68cu, "ran off the end of a function");
}
void f_0000d690(X86Cpu& c) {
    X86_TICK(c, 2);
    // 00d690  sub edi, edi
    X86_AT(c, 0xd690u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd690u, "ran off the end of a function");
}
void f_0000d692(X86Cpu& c) {
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd692u, "ran off the end of a function");
}
void f_0000d694(X86Cpu& c) {
    goto L_d694;
L_d692:
    X86_TICK(c, 2);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
L_d694:
    X86_TICK(c, 2);
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd694u, "ran off the end of a function");
}
void f_0000d697(X86Cpu& c) {
    goto L_d697;
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd697u, "ran off the end of a function");
}
void f_0000d6a0(X86Cpu& c) {
    goto L_d6a0;
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 4);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
L_d6a0:
    X86_TICK(c, 12);
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6a0u, "ran off the end of a function");
}
void f_0000d6a9(X86Cpu& c) {
    goto L_d6a9;
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 11);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
L_d6a9:
    X86_TICK(c, 5);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6a9u, "ran off the end of a function");
}
void f_0000d6ab(X86Cpu& c) {
    goto L_d6ab;
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
L_d6ab:
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6abu, "ran off the end of a function");
}
void f_0000d6b4(X86Cpu& c) {
    goto L_d6b4;
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 5);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_d6b4:
    X86_TICK(c, 20);
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6b4u, "ran off the end of a function");
}
void f_0000d6bd(X86Cpu& c) {
    goto L_d6bd;
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 7);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
L_d6bd:
    X86_TICK(c, 18);
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6bdu, "ran off the end of a function");
}
void f_0000d6c6(X86Cpu& c) {
    goto L_d6c6;
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 11);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
L_d6c6:
    X86_TICK(c, 14);
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6c6u, "ran off the end of a function");
}
void f_0000d6cf(X86Cpu& c) {
    goto L_d6cf;
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 16);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_d6cf:
    X86_TICK(c, 9);
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6cfu, "ran off the end of a function");
}
void f_0000d6d8(X86Cpu& c) {
    goto L_d6d8;
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 18);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d6d8:
    X86_TICK(c, 7);
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6d8u, "ran off the end of a function");
}
void f_0000d6da(X86Cpu& c) {
    goto L_d6da;
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6dau, "ran off the end of a function");
}
void f_0000d6e3(X86Cpu& c) {
    goto L_d6e3;
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 7);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
L_d6e3:
    X86_TICK(c, 5);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6e3u, "ran off the end of a function");
}
void f_0000d6e5(X86Cpu& c) {
    goto L_d6e5;
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
L_d6e5:
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6e5u, "ran off the end of a function");
}
void f_0000d6ee(X86Cpu& c) {
    goto L_d6ee;
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 4);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
L_d6ee:
    X86_TICK(c, 12);
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6eeu, "ran off the end of a function");
}
void f_0000d6f7(X86Cpu& c) {
    goto L_d6f7;
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 11);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
L_d6f7:
    X86_TICK(c, 5);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6f7u, "ran off the end of a function");
}
void f_0000d6f9(X86Cpu& c) {
    goto L_d6f9;
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
L_d6f9:
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd6f9u, "ran off the end of a function");
}
void f_0000d702(X86Cpu& c) {
    goto L_d702;
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 5);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_d702:
    X86_TICK(c, 2);
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd702u, "ran off the end of a function");
}
void f_0000d70b(X86Cpu& c) {
    goto L_d70b;
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd70bu, "ran off the end of a function");
}
void f_0000d70e(X86Cpu& c) {
    goto L_d70e;
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 2);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d70e:
    X86_TICK(c, 7);
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd70eu, "ran off the end of a function");
}
void f_0000d711(X86Cpu& c) {
    goto L_d711;
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 4);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
L_d711:
    X86_TICK(c, 5);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd711u, "ran off the end of a function");
}
void f_0000d713(X86Cpu& c) {
    goto L_d713;
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
L_d713:
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd713u, "ran off the end of a function");
}
void f_0000d716(X86Cpu& c) {
    goto L_d716;
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 2);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
L_d716:
    X86_TICK(c, 7);
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd716u, "ran off the end of a function");
}
void f_0000d719(X86Cpu& c) {
    goto L_d719;
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 4);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
L_d719:
    X86_TICK(c, 5);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd719u, "ran off the end of a function");
}
void f_0000d71f(X86Cpu& c) {
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd71fu, "ran off the end of a function");
}
void f_0000d720(X86Cpu& c) {
    X86_TICK(c, 18);
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd720u, "ran off the end of a function");
}
void f_0000d721(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd721u, "ran off the end of a function");
}
void f_0000d722(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd722u, "ran off the end of a function");
}
void f_0000d724(X86Cpu& c) {
    X86_TICK(c, 19);
    // 00d724  push edx
    X86_AT(c, 0xd724u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00d725  push eax
    X86_AT(c, 0xd725u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00d726  push ecx
    X86_AT(c, 0xd726u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00d727  push esi
    X86_AT(c, 0xd727u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00d728  add cx, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xd728u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00d730  jo 0xd78f
    X86_AT(c, 0xd730u);
    if (x86_cc(c, 0)) { goto L_d78f; }
    X86_TICK(c, 9);
    // 00d732  sub esi, esi
    X86_AT(c, 0xd732u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d734  test dx, dx
    X86_AT(c, 0xd734u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 00d737  jge 0xd73b
    X86_AT(c, 0xd737u);
    if (x86_cc(c, 13)) { goto L_d73b; }
    X86_TICK(c, 2);
    // 00d739  not esi
    X86_AT(c, 0xd739u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
L_d73b:
    X86_TICK(c, 11);
    // 00d73b  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd73bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d743  jno 0xd750
    X86_AT(c, 0xd743u);
    if (x86_cc(c, 1)) { goto L_d750; }
    X86_TICK(c, 9);
    // 00d745  mov dx, 0x7fff
    X86_AT(c, 0xd745u);
    s16(c, 2, 0x7FFFu);
    // 00d749  or esi, esi
    X86_AT(c, 0xd749u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d74b  je 0xd750
    X86_AT(c, 0xd74bu);
    if (x86_cc(c, 4)) { goto L_d750; }
    X86_TICK(c, 2);
    // 00d74d  neg dx
    X86_AT(c, 0xd74du);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
L_d750:
    X86_TICK(c, 9);
    // 00d750  sub esi, esi
    X86_AT(c, 0xd750u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d752  test ax, ax
    X86_AT(c, 0xd752u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00d755  jge 0xd759
    X86_AT(c, 0xd755u);
    if (x86_cc(c, 13)) { goto L_d759; }
    X86_TICK(c, 2);
    // 00d757  not esi
    X86_AT(c, 0xd757u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
L_d759:
    X86_TICK(c, 11);
    // 00d759  add ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd759u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d761  jno 0xd76e
    X86_AT(c, 0xd761u);
    if (x86_cc(c, 1)) { goto L_d76e; }
    X86_TICK(c, 9);
    // 00d763  mov ax, 0x7fff
    X86_AT(c, 0xd763u);
    s16(c, 0, 0x7FFFu);
    // 00d767  or esi, esi
    X86_AT(c, 0xd767u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d769  je 0xd76e
    X86_AT(c, 0xd769u);
    if (x86_cc(c, 4)) { goto L_d76e; }
    X86_TICK(c, 2);
    // 00d76b  neg ax
    X86_AT(c, 0xd76bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d76e:
    X86_TICK(c, 15);
    // 00d76e  mov word ptr gs:[ebp + 0x222], dx
    X86_AT(c, 0xd76eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[2] & 0xFFFFu));
    // 00d776  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0xd776u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00d77e  mov word ptr gs:[ebp + 0x226], cx
    X86_AT(c, 0xd77eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[1] & 0xFFFFu));
    // 00d786  push edi
    X86_AT(c, 0xd786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00d787  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xd787u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xd78eu); x86_call(c, t); X86_RET(c, 0xd78eu); }
    X86_TICK(c, 4);
    // 00d78e  pop edi
    X86_AT(c, 0xd78eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_d78f:
    X86_TICK(c, 26);
    // 00d78f  pop esi
    X86_AT(c, 0xd78fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd724u, "ran off the end of a function");
}
void f_0000d725(X86Cpu& c) {
    X86_TICK(c, 17);
    // 00d725  push eax
    X86_AT(c, 0xd725u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00d726  push ecx
    X86_AT(c, 0xd726u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00d727  push esi
    X86_AT(c, 0xd727u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00d728  add cx, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xd728u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00d730  jo 0xd78f
    X86_AT(c, 0xd730u);
    if (x86_cc(c, 0)) { goto L_d78f; }
    X86_TICK(c, 9);
    // 00d732  sub esi, esi
    X86_AT(c, 0xd732u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d734  test dx, dx
    X86_AT(c, 0xd734u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 00d737  jge 0xd73b
    X86_AT(c, 0xd737u);
    if (x86_cc(c, 13)) { goto L_d73b; }
    X86_TICK(c, 2);
    // 00d739  not esi
    X86_AT(c, 0xd739u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
L_d73b:
    X86_TICK(c, 11);
    // 00d73b  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd73bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d743  jno 0xd750
    X86_AT(c, 0xd743u);
    if (x86_cc(c, 1)) { goto L_d750; }
    X86_TICK(c, 9);
    // 00d745  mov dx, 0x7fff
    X86_AT(c, 0xd745u);
    s16(c, 2, 0x7FFFu);
    // 00d749  or esi, esi
    X86_AT(c, 0xd749u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d74b  je 0xd750
    X86_AT(c, 0xd74bu);
    if (x86_cc(c, 4)) { goto L_d750; }
    X86_TICK(c, 2);
    // 00d74d  neg dx
    X86_AT(c, 0xd74du);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
L_d750:
    X86_TICK(c, 9);
    // 00d750  sub esi, esi
    X86_AT(c, 0xd750u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d752  test ax, ax
    X86_AT(c, 0xd752u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00d755  jge 0xd759
    X86_AT(c, 0xd755u);
    if (x86_cc(c, 13)) { goto L_d759; }
    X86_TICK(c, 2);
    // 00d757  not esi
    X86_AT(c, 0xd757u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
L_d759:
    X86_TICK(c, 11);
    // 00d759  add ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd759u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d761  jno 0xd76e
    X86_AT(c, 0xd761u);
    if (x86_cc(c, 1)) { goto L_d76e; }
    X86_TICK(c, 9);
    // 00d763  mov ax, 0x7fff
    X86_AT(c, 0xd763u);
    s16(c, 0, 0x7FFFu);
    // 00d767  or esi, esi
    X86_AT(c, 0xd767u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d769  je 0xd76e
    X86_AT(c, 0xd769u);
    if (x86_cc(c, 4)) { goto L_d76e; }
    X86_TICK(c, 2);
    // 00d76b  neg ax
    X86_AT(c, 0xd76bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d76e:
    X86_TICK(c, 15);
    // 00d76e  mov word ptr gs:[ebp + 0x222], dx
    X86_AT(c, 0xd76eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[2] & 0xFFFFu));
    // 00d776  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0xd776u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00d77e  mov word ptr gs:[ebp + 0x226], cx
    X86_AT(c, 0xd77eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[1] & 0xFFFFu));
    // 00d786  push edi
    X86_AT(c, 0xd786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00d787  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xd787u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xd78eu); x86_call(c, t); X86_RET(c, 0xd78eu); }
    X86_TICK(c, 4);
    // 00d78e  pop edi
    X86_AT(c, 0xd78eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_d78f:
    X86_TICK(c, 26);
    // 00d78f  pop esi
    X86_AT(c, 0xd78fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd725u, "ran off the end of a function");
}
void f_0000d726(X86Cpu& c) {
    X86_TICK(c, 15);
    // 00d726  push ecx
    X86_AT(c, 0xd726u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00d727  push esi
    X86_AT(c, 0xd727u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00d728  add cx, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xd728u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00d730  jo 0xd78f
    X86_AT(c, 0xd730u);
    if (x86_cc(c, 0)) { goto L_d78f; }
    X86_TICK(c, 9);
    // 00d732  sub esi, esi
    X86_AT(c, 0xd732u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d734  test dx, dx
    X86_AT(c, 0xd734u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 00d737  jge 0xd73b
    X86_AT(c, 0xd737u);
    if (x86_cc(c, 13)) { goto L_d73b; }
    X86_TICK(c, 2);
    // 00d739  not esi
    X86_AT(c, 0xd739u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
L_d73b:
    X86_TICK(c, 11);
    // 00d73b  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd73bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d743  jno 0xd750
    X86_AT(c, 0xd743u);
    if (x86_cc(c, 1)) { goto L_d750; }
    X86_TICK(c, 9);
    // 00d745  mov dx, 0x7fff
    X86_AT(c, 0xd745u);
    s16(c, 2, 0x7FFFu);
    // 00d749  or esi, esi
    X86_AT(c, 0xd749u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d74b  je 0xd750
    X86_AT(c, 0xd74bu);
    if (x86_cc(c, 4)) { goto L_d750; }
    X86_TICK(c, 2);
    // 00d74d  neg dx
    X86_AT(c, 0xd74du);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
L_d750:
    X86_TICK(c, 9);
    // 00d750  sub esi, esi
    X86_AT(c, 0xd750u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d752  test ax, ax
    X86_AT(c, 0xd752u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00d755  jge 0xd759
    X86_AT(c, 0xd755u);
    if (x86_cc(c, 13)) { goto L_d759; }
    X86_TICK(c, 2);
    // 00d757  not esi
    X86_AT(c, 0xd757u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
L_d759:
    X86_TICK(c, 11);
    // 00d759  add ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd759u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d761  jno 0xd76e
    X86_AT(c, 0xd761u);
    if (x86_cc(c, 1)) { goto L_d76e; }
    X86_TICK(c, 9);
    // 00d763  mov ax, 0x7fff
    X86_AT(c, 0xd763u);
    s16(c, 0, 0x7FFFu);
    // 00d767  or esi, esi
    X86_AT(c, 0xd767u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d769  je 0xd76e
    X86_AT(c, 0xd769u);
    if (x86_cc(c, 4)) { goto L_d76e; }
    X86_TICK(c, 2);
    // 00d76b  neg ax
    X86_AT(c, 0xd76bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d76e:
    X86_TICK(c, 15);
    // 00d76e  mov word ptr gs:[ebp + 0x222], dx
    X86_AT(c, 0xd76eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[2] & 0xFFFFu));
    // 00d776  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0xd776u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00d77e  mov word ptr gs:[ebp + 0x226], cx
    X86_AT(c, 0xd77eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[1] & 0xFFFFu));
    // 00d786  push edi
    X86_AT(c, 0xd786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00d787  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xd787u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xd78eu); x86_call(c, t); X86_RET(c, 0xd78eu); }
    X86_TICK(c, 4);
    // 00d78e  pop edi
    X86_AT(c, 0xd78eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_d78f:
    X86_TICK(c, 26);
    // 00d78f  pop esi
    X86_AT(c, 0xd78fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd726u, "ran off the end of a function");
}
void f_0000d727(X86Cpu& c) {
    X86_TICK(c, 13);
    // 00d727  push esi
    X86_AT(c, 0xd727u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00d728  add cx, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xd728u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00d730  jo 0xd78f
    X86_AT(c, 0xd730u);
    if (x86_cc(c, 0)) { goto L_d78f; }
    X86_TICK(c, 9);
    // 00d732  sub esi, esi
    X86_AT(c, 0xd732u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d734  test dx, dx
    X86_AT(c, 0xd734u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 00d737  jge 0xd73b
    X86_AT(c, 0xd737u);
    if (x86_cc(c, 13)) { goto L_d73b; }
    X86_TICK(c, 2);
    // 00d739  not esi
    X86_AT(c, 0xd739u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
L_d73b:
    X86_TICK(c, 11);
    // 00d73b  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd73bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d743  jno 0xd750
    X86_AT(c, 0xd743u);
    if (x86_cc(c, 1)) { goto L_d750; }
    X86_TICK(c, 9);
    // 00d745  mov dx, 0x7fff
    X86_AT(c, 0xd745u);
    s16(c, 2, 0x7FFFu);
    // 00d749  or esi, esi
    X86_AT(c, 0xd749u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d74b  je 0xd750
    X86_AT(c, 0xd74bu);
    if (x86_cc(c, 4)) { goto L_d750; }
    X86_TICK(c, 2);
    // 00d74d  neg dx
    X86_AT(c, 0xd74du);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
L_d750:
    X86_TICK(c, 9);
    // 00d750  sub esi, esi
    X86_AT(c, 0xd750u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d752  test ax, ax
    X86_AT(c, 0xd752u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00d755  jge 0xd759
    X86_AT(c, 0xd755u);
    if (x86_cc(c, 13)) { goto L_d759; }
    X86_TICK(c, 2);
    // 00d757  not esi
    X86_AT(c, 0xd757u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
L_d759:
    X86_TICK(c, 11);
    // 00d759  add ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd759u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d761  jno 0xd76e
    X86_AT(c, 0xd761u);
    if (x86_cc(c, 1)) { goto L_d76e; }
    X86_TICK(c, 9);
    // 00d763  mov ax, 0x7fff
    X86_AT(c, 0xd763u);
    s16(c, 0, 0x7FFFu);
    // 00d767  or esi, esi
    X86_AT(c, 0xd767u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d769  je 0xd76e
    X86_AT(c, 0xd769u);
    if (x86_cc(c, 4)) { goto L_d76e; }
    X86_TICK(c, 2);
    // 00d76b  neg ax
    X86_AT(c, 0xd76bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d76e:
    X86_TICK(c, 15);
    // 00d76e  mov word ptr gs:[ebp + 0x222], dx
    X86_AT(c, 0xd76eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[2] & 0xFFFFu));
    // 00d776  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0xd776u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00d77e  mov word ptr gs:[ebp + 0x226], cx
    X86_AT(c, 0xd77eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[1] & 0xFFFFu));
    // 00d786  push edi
    X86_AT(c, 0xd786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00d787  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xd787u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xd78eu); x86_call(c, t); X86_RET(c, 0xd78eu); }
    X86_TICK(c, 4);
    // 00d78e  pop edi
    X86_AT(c, 0xd78eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_d78f:
    X86_TICK(c, 26);
    // 00d78f  pop esi
    X86_AT(c, 0xd78fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd727u, "ran off the end of a function");
}
void f_0000d728(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00d728  add cx, word ptr gs:[ebp + 0x40a]
    X86_AT(c, 0xd728u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Au))), 0, 2)); }
    // 00d730  jo 0xd78f
    X86_AT(c, 0xd730u);
    if (x86_cc(c, 0)) { goto L_d78f; }
    X86_TICK(c, 9);
    // 00d732  sub esi, esi
    X86_AT(c, 0xd732u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d734  test dx, dx
    X86_AT(c, 0xd734u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 00d737  jge 0xd73b
    X86_AT(c, 0xd737u);
    if (x86_cc(c, 13)) { goto L_d73b; }
    X86_TICK(c, 2);
    // 00d739  not esi
    X86_AT(c, 0xd739u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
L_d73b:
    X86_TICK(c, 11);
    // 00d73b  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd73bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d743  jno 0xd750
    X86_AT(c, 0xd743u);
    if (x86_cc(c, 1)) { goto L_d750; }
    X86_TICK(c, 9);
    // 00d745  mov dx, 0x7fff
    X86_AT(c, 0xd745u);
    s16(c, 2, 0x7FFFu);
    // 00d749  or esi, esi
    X86_AT(c, 0xd749u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d74b  je 0xd750
    X86_AT(c, 0xd74bu);
    if (x86_cc(c, 4)) { goto L_d750; }
    X86_TICK(c, 2);
    // 00d74d  neg dx
    X86_AT(c, 0xd74du);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
L_d750:
    X86_TICK(c, 9);
    // 00d750  sub esi, esi
    X86_AT(c, 0xd750u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d752  test ax, ax
    X86_AT(c, 0xd752u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00d755  jge 0xd759
    X86_AT(c, 0xd755u);
    if (x86_cc(c, 13)) { goto L_d759; }
    X86_TICK(c, 2);
    // 00d757  not esi
    X86_AT(c, 0xd757u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
L_d759:
    X86_TICK(c, 11);
    // 00d759  add ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd759u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d761  jno 0xd76e
    X86_AT(c, 0xd761u);
    if (x86_cc(c, 1)) { goto L_d76e; }
    X86_TICK(c, 9);
    // 00d763  mov ax, 0x7fff
    X86_AT(c, 0xd763u);
    s16(c, 0, 0x7FFFu);
    // 00d767  or esi, esi
    X86_AT(c, 0xd767u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d769  je 0xd76e
    X86_AT(c, 0xd769u);
    if (x86_cc(c, 4)) { goto L_d76e; }
    X86_TICK(c, 2);
    // 00d76b  neg ax
    X86_AT(c, 0xd76bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d76e:
    X86_TICK(c, 15);
    // 00d76e  mov word ptr gs:[ebp + 0x222], dx
    X86_AT(c, 0xd76eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[2] & 0xFFFFu));
    // 00d776  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0xd776u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00d77e  mov word ptr gs:[ebp + 0x226], cx
    X86_AT(c, 0xd77eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[1] & 0xFFFFu));
    // 00d786  push edi
    X86_AT(c, 0xd786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00d787  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xd787u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xd78eu); x86_call(c, t); X86_RET(c, 0xd78eu); }
    X86_TICK(c, 4);
    // 00d78e  pop edi
    X86_AT(c, 0xd78eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_d78f:
    X86_TICK(c, 26);
    // 00d78f  pop esi
    X86_AT(c, 0xd78fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd728u, "ran off the end of a function");
}
void f_0000d730(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d730  jo 0xd78f
    X86_AT(c, 0xd730u);
    if (x86_cc(c, 0)) { goto L_d78f; }
    X86_TICK(c, 9);
    // 00d732  sub esi, esi
    X86_AT(c, 0xd732u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d734  test dx, dx
    X86_AT(c, 0xd734u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 00d737  jge 0xd73b
    X86_AT(c, 0xd737u);
    if (x86_cc(c, 13)) { goto L_d73b; }
    X86_TICK(c, 2);
    // 00d739  not esi
    X86_AT(c, 0xd739u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
L_d73b:
    X86_TICK(c, 11);
    // 00d73b  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd73bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d743  jno 0xd750
    X86_AT(c, 0xd743u);
    if (x86_cc(c, 1)) { goto L_d750; }
    X86_TICK(c, 9);
    // 00d745  mov dx, 0x7fff
    X86_AT(c, 0xd745u);
    s16(c, 2, 0x7FFFu);
    // 00d749  or esi, esi
    X86_AT(c, 0xd749u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d74b  je 0xd750
    X86_AT(c, 0xd74bu);
    if (x86_cc(c, 4)) { goto L_d750; }
    X86_TICK(c, 2);
    // 00d74d  neg dx
    X86_AT(c, 0xd74du);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
L_d750:
    X86_TICK(c, 9);
    // 00d750  sub esi, esi
    X86_AT(c, 0xd750u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d752  test ax, ax
    X86_AT(c, 0xd752u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00d755  jge 0xd759
    X86_AT(c, 0xd755u);
    if (x86_cc(c, 13)) { goto L_d759; }
    X86_TICK(c, 2);
    // 00d757  not esi
    X86_AT(c, 0xd757u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
L_d759:
    X86_TICK(c, 11);
    // 00d759  add ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd759u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d761  jno 0xd76e
    X86_AT(c, 0xd761u);
    if (x86_cc(c, 1)) { goto L_d76e; }
    X86_TICK(c, 9);
    // 00d763  mov ax, 0x7fff
    X86_AT(c, 0xd763u);
    s16(c, 0, 0x7FFFu);
    // 00d767  or esi, esi
    X86_AT(c, 0xd767u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d769  je 0xd76e
    X86_AT(c, 0xd769u);
    if (x86_cc(c, 4)) { goto L_d76e; }
    X86_TICK(c, 2);
    // 00d76b  neg ax
    X86_AT(c, 0xd76bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d76e:
    X86_TICK(c, 15);
    // 00d76e  mov word ptr gs:[ebp + 0x222], dx
    X86_AT(c, 0xd76eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[2] & 0xFFFFu));
    // 00d776  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0xd776u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00d77e  mov word ptr gs:[ebp + 0x226], cx
    X86_AT(c, 0xd77eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[1] & 0xFFFFu));
    // 00d786  push edi
    X86_AT(c, 0xd786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00d787  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xd787u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xd78eu); x86_call(c, t); X86_RET(c, 0xd78eu); }
    X86_TICK(c, 4);
    // 00d78e  pop edi
    X86_AT(c, 0xd78eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
L_d78f:
    X86_TICK(c, 26);
    // 00d78f  pop esi
    X86_AT(c, 0xd78fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd730u, "ran off the end of a function");
}
void f_0000d732(X86Cpu& c) {
    X86_TICK(c, 9);
    // 00d732  sub esi, esi
    X86_AT(c, 0xd732u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d734  test dx, dx
    X86_AT(c, 0xd734u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 00d737  jge 0xd73b
    X86_AT(c, 0xd737u);
    if (x86_cc(c, 13)) { goto L_d73b; }
    X86_TICK(c, 2);
    // 00d739  not esi
    X86_AT(c, 0xd739u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
L_d73b:
    X86_TICK(c, 11);
    // 00d73b  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd73bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d743  jno 0xd750
    X86_AT(c, 0xd743u);
    if (x86_cc(c, 1)) { goto L_d750; }
    X86_TICK(c, 9);
    // 00d745  mov dx, 0x7fff
    X86_AT(c, 0xd745u);
    s16(c, 2, 0x7FFFu);
    // 00d749  or esi, esi
    X86_AT(c, 0xd749u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d74b  je 0xd750
    X86_AT(c, 0xd74bu);
    if (x86_cc(c, 4)) { goto L_d750; }
    X86_TICK(c, 2);
    // 00d74d  neg dx
    X86_AT(c, 0xd74du);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
L_d750:
    X86_TICK(c, 9);
    // 00d750  sub esi, esi
    X86_AT(c, 0xd750u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d752  test ax, ax
    X86_AT(c, 0xd752u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00d755  jge 0xd759
    X86_AT(c, 0xd755u);
    if (x86_cc(c, 13)) { goto L_d759; }
    X86_TICK(c, 2);
    // 00d757  not esi
    X86_AT(c, 0xd757u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
L_d759:
    X86_TICK(c, 11);
    // 00d759  add ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd759u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d761  jno 0xd76e
    X86_AT(c, 0xd761u);
    if (x86_cc(c, 1)) { goto L_d76e; }
    X86_TICK(c, 9);
    // 00d763  mov ax, 0x7fff
    X86_AT(c, 0xd763u);
    s16(c, 0, 0x7FFFu);
    // 00d767  or esi, esi
    X86_AT(c, 0xd767u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d769  je 0xd76e
    X86_AT(c, 0xd769u);
    if (x86_cc(c, 4)) { goto L_d76e; }
    X86_TICK(c, 2);
    // 00d76b  neg ax
    X86_AT(c, 0xd76bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d76e:
    X86_TICK(c, 15);
    // 00d76e  mov word ptr gs:[ebp + 0x222], dx
    X86_AT(c, 0xd76eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[2] & 0xFFFFu));
    // 00d776  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0xd776u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00d77e  mov word ptr gs:[ebp + 0x226], cx
    X86_AT(c, 0xd77eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[1] & 0xFFFFu));
    // 00d786  push edi
    X86_AT(c, 0xd786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00d787  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xd787u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xd78eu); x86_call(c, t); X86_RET(c, 0xd78eu); }
    X86_TICK(c, 30);
    // 00d78e  pop edi
    X86_AT(c, 0xd78eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d78f  pop esi
    X86_AT(c, 0xd78fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd732u, "ran off the end of a function");
}
void f_0000d734(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d734  test dx, dx
    X86_AT(c, 0xd734u);
    (void)x86_logic(c, (c.r[2] & 0xFFFFu) & (c.r[2] & 0xFFFFu), 2);
    // 00d737  jge 0xd73b
    X86_AT(c, 0xd737u);
    if (x86_cc(c, 13)) { goto L_d73b; }
    X86_TICK(c, 2);
    // 00d739  not esi
    X86_AT(c, 0xd739u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
L_d73b:
    X86_TICK(c, 11);
    // 00d73b  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd73bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d743  jno 0xd750
    X86_AT(c, 0xd743u);
    if (x86_cc(c, 1)) { goto L_d750; }
    X86_TICK(c, 9);
    // 00d745  mov dx, 0x7fff
    X86_AT(c, 0xd745u);
    s16(c, 2, 0x7FFFu);
    // 00d749  or esi, esi
    X86_AT(c, 0xd749u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d74b  je 0xd750
    X86_AT(c, 0xd74bu);
    if (x86_cc(c, 4)) { goto L_d750; }
    X86_TICK(c, 2);
    // 00d74d  neg dx
    X86_AT(c, 0xd74du);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
L_d750:
    X86_TICK(c, 9);
    // 00d750  sub esi, esi
    X86_AT(c, 0xd750u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d752  test ax, ax
    X86_AT(c, 0xd752u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00d755  jge 0xd759
    X86_AT(c, 0xd755u);
    if (x86_cc(c, 13)) { goto L_d759; }
    X86_TICK(c, 2);
    // 00d757  not esi
    X86_AT(c, 0xd757u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
L_d759:
    X86_TICK(c, 11);
    // 00d759  add ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd759u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d761  jno 0xd76e
    X86_AT(c, 0xd761u);
    if (x86_cc(c, 1)) { goto L_d76e; }
    X86_TICK(c, 9);
    // 00d763  mov ax, 0x7fff
    X86_AT(c, 0xd763u);
    s16(c, 0, 0x7FFFu);
    // 00d767  or esi, esi
    X86_AT(c, 0xd767u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d769  je 0xd76e
    X86_AT(c, 0xd769u);
    if (x86_cc(c, 4)) { goto L_d76e; }
    X86_TICK(c, 2);
    // 00d76b  neg ax
    X86_AT(c, 0xd76bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d76e:
    X86_TICK(c, 15);
    // 00d76e  mov word ptr gs:[ebp + 0x222], dx
    X86_AT(c, 0xd76eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[2] & 0xFFFFu));
    // 00d776  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0xd776u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00d77e  mov word ptr gs:[ebp + 0x226], cx
    X86_AT(c, 0xd77eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[1] & 0xFFFFu));
    // 00d786  push edi
    X86_AT(c, 0xd786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00d787  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xd787u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xd78eu); x86_call(c, t); X86_RET(c, 0xd78eu); }
    X86_TICK(c, 30);
    // 00d78e  pop edi
    X86_AT(c, 0xd78eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d78f  pop esi
    X86_AT(c, 0xd78fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd734u, "ran off the end of a function");
}
void f_0000d737(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d737  jge 0xd73b
    X86_AT(c, 0xd737u);
    if (x86_cc(c, 13)) { goto L_d73b; }
    X86_TICK(c, 2);
    // 00d739  not esi
    X86_AT(c, 0xd739u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
L_d73b:
    X86_TICK(c, 11);
    // 00d73b  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd73bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d743  jno 0xd750
    X86_AT(c, 0xd743u);
    if (x86_cc(c, 1)) { goto L_d750; }
    X86_TICK(c, 9);
    // 00d745  mov dx, 0x7fff
    X86_AT(c, 0xd745u);
    s16(c, 2, 0x7FFFu);
    // 00d749  or esi, esi
    X86_AT(c, 0xd749u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d74b  je 0xd750
    X86_AT(c, 0xd74bu);
    if (x86_cc(c, 4)) { goto L_d750; }
    X86_TICK(c, 2);
    // 00d74d  neg dx
    X86_AT(c, 0xd74du);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
L_d750:
    X86_TICK(c, 9);
    // 00d750  sub esi, esi
    X86_AT(c, 0xd750u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d752  test ax, ax
    X86_AT(c, 0xd752u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00d755  jge 0xd759
    X86_AT(c, 0xd755u);
    if (x86_cc(c, 13)) { goto L_d759; }
    X86_TICK(c, 2);
    // 00d757  not esi
    X86_AT(c, 0xd757u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
L_d759:
    X86_TICK(c, 11);
    // 00d759  add ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd759u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d761  jno 0xd76e
    X86_AT(c, 0xd761u);
    if (x86_cc(c, 1)) { goto L_d76e; }
    X86_TICK(c, 9);
    // 00d763  mov ax, 0x7fff
    X86_AT(c, 0xd763u);
    s16(c, 0, 0x7FFFu);
    // 00d767  or esi, esi
    X86_AT(c, 0xd767u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d769  je 0xd76e
    X86_AT(c, 0xd769u);
    if (x86_cc(c, 4)) { goto L_d76e; }
    X86_TICK(c, 2);
    // 00d76b  neg ax
    X86_AT(c, 0xd76bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d76e:
    X86_TICK(c, 15);
    // 00d76e  mov word ptr gs:[ebp + 0x222], dx
    X86_AT(c, 0xd76eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[2] & 0xFFFFu));
    // 00d776  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0xd776u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00d77e  mov word ptr gs:[ebp + 0x226], cx
    X86_AT(c, 0xd77eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[1] & 0xFFFFu));
    // 00d786  push edi
    X86_AT(c, 0xd786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00d787  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xd787u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xd78eu); x86_call(c, t); X86_RET(c, 0xd78eu); }
    X86_TICK(c, 30);
    // 00d78e  pop edi
    X86_AT(c, 0xd78eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d78f  pop esi
    X86_AT(c, 0xd78fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd737u, "ran off the end of a function");
}
void f_0000d739(X86Cpu& c) {
    X86_TICK(c, 13);
    // 00d739  not esi
    X86_AT(c, 0xd739u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
    // 00d73b  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd73bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d743  jno 0xd750
    X86_AT(c, 0xd743u);
    if (x86_cc(c, 1)) { goto L_d750; }
    X86_TICK(c, 9);
    // 00d745  mov dx, 0x7fff
    X86_AT(c, 0xd745u);
    s16(c, 2, 0x7FFFu);
    // 00d749  or esi, esi
    X86_AT(c, 0xd749u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d74b  je 0xd750
    X86_AT(c, 0xd74bu);
    if (x86_cc(c, 4)) { goto L_d750; }
    X86_TICK(c, 2);
    // 00d74d  neg dx
    X86_AT(c, 0xd74du);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
L_d750:
    X86_TICK(c, 9);
    // 00d750  sub esi, esi
    X86_AT(c, 0xd750u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d752  test ax, ax
    X86_AT(c, 0xd752u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00d755  jge 0xd759
    X86_AT(c, 0xd755u);
    if (x86_cc(c, 13)) { goto L_d759; }
    X86_TICK(c, 2);
    // 00d757  not esi
    X86_AT(c, 0xd757u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
L_d759:
    X86_TICK(c, 11);
    // 00d759  add ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd759u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d761  jno 0xd76e
    X86_AT(c, 0xd761u);
    if (x86_cc(c, 1)) { goto L_d76e; }
    X86_TICK(c, 9);
    // 00d763  mov ax, 0x7fff
    X86_AT(c, 0xd763u);
    s16(c, 0, 0x7FFFu);
    // 00d767  or esi, esi
    X86_AT(c, 0xd767u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d769  je 0xd76e
    X86_AT(c, 0xd769u);
    if (x86_cc(c, 4)) { goto L_d76e; }
    X86_TICK(c, 2);
    // 00d76b  neg ax
    X86_AT(c, 0xd76bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d76e:
    X86_TICK(c, 15);
    // 00d76e  mov word ptr gs:[ebp + 0x222], dx
    X86_AT(c, 0xd76eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[2] & 0xFFFFu));
    // 00d776  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0xd776u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00d77e  mov word ptr gs:[ebp + 0x226], cx
    X86_AT(c, 0xd77eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[1] & 0xFFFFu));
    // 00d786  push edi
    X86_AT(c, 0xd786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00d787  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xd787u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xd78eu); x86_call(c, t); X86_RET(c, 0xd78eu); }
    X86_TICK(c, 30);
    // 00d78e  pop edi
    X86_AT(c, 0xd78eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d78f  pop esi
    X86_AT(c, 0xd78fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd739u, "ran off the end of a function");
}
void f_0000d73b(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00d73b  add dx, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd73bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d743  jno 0xd750
    X86_AT(c, 0xd743u);
    if (x86_cc(c, 1)) { goto L_d750; }
    X86_TICK(c, 9);
    // 00d745  mov dx, 0x7fff
    X86_AT(c, 0xd745u);
    s16(c, 2, 0x7FFFu);
    // 00d749  or esi, esi
    X86_AT(c, 0xd749u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d74b  je 0xd750
    X86_AT(c, 0xd74bu);
    if (x86_cc(c, 4)) { goto L_d750; }
    X86_TICK(c, 2);
    // 00d74d  neg dx
    X86_AT(c, 0xd74du);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
L_d750:
    X86_TICK(c, 9);
    // 00d750  sub esi, esi
    X86_AT(c, 0xd750u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d752  test ax, ax
    X86_AT(c, 0xd752u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00d755  jge 0xd759
    X86_AT(c, 0xd755u);
    if (x86_cc(c, 13)) { goto L_d759; }
    X86_TICK(c, 2);
    // 00d757  not esi
    X86_AT(c, 0xd757u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
L_d759:
    X86_TICK(c, 11);
    // 00d759  add ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd759u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d761  jno 0xd76e
    X86_AT(c, 0xd761u);
    if (x86_cc(c, 1)) { goto L_d76e; }
    X86_TICK(c, 9);
    // 00d763  mov ax, 0x7fff
    X86_AT(c, 0xd763u);
    s16(c, 0, 0x7FFFu);
    // 00d767  or esi, esi
    X86_AT(c, 0xd767u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d769  je 0xd76e
    X86_AT(c, 0xd769u);
    if (x86_cc(c, 4)) { goto L_d76e; }
    X86_TICK(c, 2);
    // 00d76b  neg ax
    X86_AT(c, 0xd76bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d76e:
    X86_TICK(c, 15);
    // 00d76e  mov word ptr gs:[ebp + 0x222], dx
    X86_AT(c, 0xd76eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[2] & 0xFFFFu));
    // 00d776  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0xd776u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00d77e  mov word ptr gs:[ebp + 0x226], cx
    X86_AT(c, 0xd77eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[1] & 0xFFFFu));
    // 00d786  push edi
    X86_AT(c, 0xd786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00d787  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xd787u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xd78eu); x86_call(c, t); X86_RET(c, 0xd78eu); }
    X86_TICK(c, 30);
    // 00d78e  pop edi
    X86_AT(c, 0xd78eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d78f  pop esi
    X86_AT(c, 0xd78fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd73bu, "ran off the end of a function");
}
void f_0000d743(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d743  jno 0xd750
    X86_AT(c, 0xd743u);
    if (x86_cc(c, 1)) { goto L_d750; }
    X86_TICK(c, 9);
    // 00d745  mov dx, 0x7fff
    X86_AT(c, 0xd745u);
    s16(c, 2, 0x7FFFu);
    // 00d749  or esi, esi
    X86_AT(c, 0xd749u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d74b  je 0xd750
    X86_AT(c, 0xd74bu);
    if (x86_cc(c, 4)) { goto L_d750; }
    X86_TICK(c, 2);
    // 00d74d  neg dx
    X86_AT(c, 0xd74du);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
L_d750:
    X86_TICK(c, 9);
    // 00d750  sub esi, esi
    X86_AT(c, 0xd750u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d752  test ax, ax
    X86_AT(c, 0xd752u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00d755  jge 0xd759
    X86_AT(c, 0xd755u);
    if (x86_cc(c, 13)) { goto L_d759; }
    X86_TICK(c, 2);
    // 00d757  not esi
    X86_AT(c, 0xd757u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
L_d759:
    X86_TICK(c, 11);
    // 00d759  add ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd759u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d761  jno 0xd76e
    X86_AT(c, 0xd761u);
    if (x86_cc(c, 1)) { goto L_d76e; }
    X86_TICK(c, 9);
    // 00d763  mov ax, 0x7fff
    X86_AT(c, 0xd763u);
    s16(c, 0, 0x7FFFu);
    // 00d767  or esi, esi
    X86_AT(c, 0xd767u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d769  je 0xd76e
    X86_AT(c, 0xd769u);
    if (x86_cc(c, 4)) { goto L_d76e; }
    X86_TICK(c, 2);
    // 00d76b  neg ax
    X86_AT(c, 0xd76bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d76e:
    X86_TICK(c, 15);
    // 00d76e  mov word ptr gs:[ebp + 0x222], dx
    X86_AT(c, 0xd76eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[2] & 0xFFFFu));
    // 00d776  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0xd776u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00d77e  mov word ptr gs:[ebp + 0x226], cx
    X86_AT(c, 0xd77eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[1] & 0xFFFFu));
    // 00d786  push edi
    X86_AT(c, 0xd786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00d787  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xd787u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xd78eu); x86_call(c, t); X86_RET(c, 0xd78eu); }
    X86_TICK(c, 30);
    // 00d78e  pop edi
    X86_AT(c, 0xd78eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d78f  pop esi
    X86_AT(c, 0xd78fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd743u, "ran off the end of a function");
}
void f_0000d750(X86Cpu& c) {
    X86_TICK(c, 9);
    // 00d750  sub esi, esi
    X86_AT(c, 0xd750u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d752  test ax, ax
    X86_AT(c, 0xd752u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00d755  jge 0xd759
    X86_AT(c, 0xd755u);
    if (x86_cc(c, 13)) { goto L_d759; }
    X86_TICK(c, 2);
    // 00d757  not esi
    X86_AT(c, 0xd757u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
L_d759:
    X86_TICK(c, 11);
    // 00d759  add ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd759u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d761  jno 0xd76e
    X86_AT(c, 0xd761u);
    if (x86_cc(c, 1)) { goto L_d76e; }
    X86_TICK(c, 9);
    // 00d763  mov ax, 0x7fff
    X86_AT(c, 0xd763u);
    s16(c, 0, 0x7FFFu);
    // 00d767  or esi, esi
    X86_AT(c, 0xd767u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d769  je 0xd76e
    X86_AT(c, 0xd769u);
    if (x86_cc(c, 4)) { goto L_d76e; }
    X86_TICK(c, 2);
    // 00d76b  neg ax
    X86_AT(c, 0xd76bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d76e:
    X86_TICK(c, 15);
    // 00d76e  mov word ptr gs:[ebp + 0x222], dx
    X86_AT(c, 0xd76eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[2] & 0xFFFFu));
    // 00d776  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0xd776u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00d77e  mov word ptr gs:[ebp + 0x226], cx
    X86_AT(c, 0xd77eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[1] & 0xFFFFu));
    // 00d786  push edi
    X86_AT(c, 0xd786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00d787  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xd787u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xd78eu); x86_call(c, t); X86_RET(c, 0xd78eu); }
    X86_TICK(c, 30);
    // 00d78e  pop edi
    X86_AT(c, 0xd78eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d78f  pop esi
    X86_AT(c, 0xd78fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd750u, "ran off the end of a function");
}
void f_0000d752(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d752  test ax, ax
    X86_AT(c, 0xd752u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & (c.r[0] & 0xFFFFu), 2);
    // 00d755  jge 0xd759
    X86_AT(c, 0xd755u);
    if (x86_cc(c, 13)) { goto L_d759; }
    X86_TICK(c, 2);
    // 00d757  not esi
    X86_AT(c, 0xd757u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
L_d759:
    X86_TICK(c, 11);
    // 00d759  add ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd759u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d761  jno 0xd76e
    X86_AT(c, 0xd761u);
    if (x86_cc(c, 1)) { goto L_d76e; }
    X86_TICK(c, 9);
    // 00d763  mov ax, 0x7fff
    X86_AT(c, 0xd763u);
    s16(c, 0, 0x7FFFu);
    // 00d767  or esi, esi
    X86_AT(c, 0xd767u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d769  je 0xd76e
    X86_AT(c, 0xd769u);
    if (x86_cc(c, 4)) { goto L_d76e; }
    X86_TICK(c, 2);
    // 00d76b  neg ax
    X86_AT(c, 0xd76bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d76e:
    X86_TICK(c, 15);
    // 00d76e  mov word ptr gs:[ebp + 0x222], dx
    X86_AT(c, 0xd76eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[2] & 0xFFFFu));
    // 00d776  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0xd776u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00d77e  mov word ptr gs:[ebp + 0x226], cx
    X86_AT(c, 0xd77eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[1] & 0xFFFFu));
    // 00d786  push edi
    X86_AT(c, 0xd786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00d787  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xd787u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xd78eu); x86_call(c, t); X86_RET(c, 0xd78eu); }
    X86_TICK(c, 30);
    // 00d78e  pop edi
    X86_AT(c, 0xd78eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d78f  pop esi
    X86_AT(c, 0xd78fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd752u, "ran off the end of a function");
}
void f_0000d755(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d755  jge 0xd759
    X86_AT(c, 0xd755u);
    if (x86_cc(c, 13)) { goto L_d759; }
    X86_TICK(c, 2);
    // 00d757  not esi
    X86_AT(c, 0xd757u);
    { uint32_t v = c.r[6]; c.r[6] = ~v & 0xFFFFFFFFu; }
L_d759:
    X86_TICK(c, 11);
    // 00d759  add ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd759u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d761  jno 0xd76e
    X86_AT(c, 0xd761u);
    if (x86_cc(c, 1)) { goto L_d76e; }
    X86_TICK(c, 9);
    // 00d763  mov ax, 0x7fff
    X86_AT(c, 0xd763u);
    s16(c, 0, 0x7FFFu);
    // 00d767  or esi, esi
    X86_AT(c, 0xd767u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d769  je 0xd76e
    X86_AT(c, 0xd769u);
    if (x86_cc(c, 4)) { goto L_d76e; }
    X86_TICK(c, 2);
    // 00d76b  neg ax
    X86_AT(c, 0xd76bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d76e:
    X86_TICK(c, 15);
    // 00d76e  mov word ptr gs:[ebp + 0x222], dx
    X86_AT(c, 0xd76eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[2] & 0xFFFFu));
    // 00d776  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0xd776u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00d77e  mov word ptr gs:[ebp + 0x226], cx
    X86_AT(c, 0xd77eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[1] & 0xFFFFu));
    // 00d786  push edi
    X86_AT(c, 0xd786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00d787  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xd787u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xd78eu); x86_call(c, t); X86_RET(c, 0xd78eu); }
    X86_TICK(c, 30);
    // 00d78e  pop edi
    X86_AT(c, 0xd78eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d78f  pop esi
    X86_AT(c, 0xd78fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd755u, "ran off the end of a function");
}
void f_0000d759(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00d759  add ax, word ptr gs:[ebp + 0x408]
    X86_AT(c, 0xd759u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x408u))), 0, 2)); }
    // 00d761  jno 0xd76e
    X86_AT(c, 0xd761u);
    if (x86_cc(c, 1)) { goto L_d76e; }
    X86_TICK(c, 9);
    // 00d763  mov ax, 0x7fff
    X86_AT(c, 0xd763u);
    s16(c, 0, 0x7FFFu);
    // 00d767  or esi, esi
    X86_AT(c, 0xd767u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d769  je 0xd76e
    X86_AT(c, 0xd769u);
    if (x86_cc(c, 4)) { goto L_d76e; }
    X86_TICK(c, 2);
    // 00d76b  neg ax
    X86_AT(c, 0xd76bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d76e:
    X86_TICK(c, 15);
    // 00d76e  mov word ptr gs:[ebp + 0x222], dx
    X86_AT(c, 0xd76eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[2] & 0xFFFFu));
    // 00d776  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0xd776u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00d77e  mov word ptr gs:[ebp + 0x226], cx
    X86_AT(c, 0xd77eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[1] & 0xFFFFu));
    // 00d786  push edi
    X86_AT(c, 0xd786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00d787  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xd787u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xd78eu); x86_call(c, t); X86_RET(c, 0xd78eu); }
    X86_TICK(c, 30);
    // 00d78e  pop edi
    X86_AT(c, 0xd78eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d78f  pop esi
    X86_AT(c, 0xd78fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd759u, "ran off the end of a function");
}
void f_0000d761(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d761  jno 0xd76e
    X86_AT(c, 0xd761u);
    if (x86_cc(c, 1)) { goto L_d76e; }
    X86_TICK(c, 9);
    // 00d763  mov ax, 0x7fff
    X86_AT(c, 0xd763u);
    s16(c, 0, 0x7FFFu);
    // 00d767  or esi, esi
    X86_AT(c, 0xd767u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v | c.r[6], 4); }
    // 00d769  je 0xd76e
    X86_AT(c, 0xd769u);
    if (x86_cc(c, 4)) { goto L_d76e; }
    X86_TICK(c, 2);
    // 00d76b  neg ax
    X86_AT(c, 0xd76bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d76e:
    X86_TICK(c, 15);
    // 00d76e  mov word ptr gs:[ebp + 0x222], dx
    X86_AT(c, 0xd76eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[2] & 0xFFFFu));
    // 00d776  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0xd776u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00d77e  mov word ptr gs:[ebp + 0x226], cx
    X86_AT(c, 0xd77eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[1] & 0xFFFFu));
    // 00d786  push edi
    X86_AT(c, 0xd786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00d787  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xd787u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xd78eu); x86_call(c, t); X86_RET(c, 0xd78eu); }
    X86_TICK(c, 30);
    // 00d78e  pop edi
    X86_AT(c, 0xd78eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d78f  pop esi
    X86_AT(c, 0xd78fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd761u, "ran off the end of a function");
}
void f_0000d76e(X86Cpu& c) {
    X86_TICK(c, 15);
    // 00d76e  mov word ptr gs:[ebp + 0x222], dx
    X86_AT(c, 0xd76eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)), (c.r[2] & 0xFFFFu));
    // 00d776  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0xd776u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00d77e  mov word ptr gs:[ebp + 0x226], cx
    X86_AT(c, 0xd77eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[1] & 0xFFFFu));
    // 00d786  push edi
    X86_AT(c, 0xd786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00d787  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xd787u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xd78eu); x86_call(c, t); X86_RET(c, 0xd78eu); }
    X86_TICK(c, 30);
    // 00d78e  pop edi
    X86_AT(c, 0xd78eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d78f  pop esi
    X86_AT(c, 0xd78fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd76eu, "ran off the end of a function");
}
void f_0000d776(X86Cpu& c) {
    X86_TICK(c, 13);
    // 00d776  mov word ptr gs:[ebp + 0x224], ax
    X86_AT(c, 0xd776u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)), (c.r[0] & 0xFFFFu));
    // 00d77e  mov word ptr gs:[ebp + 0x226], cx
    X86_AT(c, 0xd77eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[1] & 0xFFFFu));
    // 00d786  push edi
    X86_AT(c, 0xd786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00d787  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xd787u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xd78eu); x86_call(c, t); X86_RET(c, 0xd78eu); }
    X86_TICK(c, 30);
    // 00d78e  pop edi
    X86_AT(c, 0xd78eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d78f  pop esi
    X86_AT(c, 0xd78fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd776u, "ran off the end of a function");
}
void f_0000d77e(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00d77e  mov word ptr gs:[ebp + 0x226], cx
    X86_AT(c, 0xd77eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)), (c.r[1] & 0xFFFFu));
    // 00d786  push edi
    X86_AT(c, 0xd786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00d787  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xd787u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xd78eu); x86_call(c, t); X86_RET(c, 0xd78eu); }
    X86_TICK(c, 30);
    // 00d78e  pop edi
    X86_AT(c, 0xd78eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d78f  pop esi
    X86_AT(c, 0xd78fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd77eu, "ran off the end of a function");
}
void f_0000d786(X86Cpu& c) {
    X86_TICK(c, 9);
    // 00d786  push edi
    X86_AT(c, 0xd786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00d787  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xd787u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xd78eu); x86_call(c, t); X86_RET(c, 0xd78eu); }
    X86_TICK(c, 30);
    // 00d78e  pop edi
    X86_AT(c, 0xd78eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d78f  pop esi
    X86_AT(c, 0xd78fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd786u, "ran off the end of a function");
}
void f_0000d787(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d787  call dword ptr gs:[ebp + 0x324]
    X86_AT(c, 0xd787u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x324u))); push32(c, 0xd78eu); x86_call(c, t); X86_RET(c, 0xd78eu); }
    X86_TICK(c, 30);
    // 00d78e  pop edi
    X86_AT(c, 0xd78eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d78f  pop esi
    X86_AT(c, 0xd78fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd787u, "ran off the end of a function");
}
void f_0000d78e(X86Cpu& c) {
    X86_TICK(c, 30);
    // 00d78e  pop edi
    X86_AT(c, 0xd78eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d78f  pop esi
    X86_AT(c, 0xd78fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd78eu, "ran off the end of a function");
}
void f_0000d78f(X86Cpu& c) {
    X86_TICK(c, 26);
    // 00d78f  pop esi
    X86_AT(c, 0xd78fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd78fu, "ran off the end of a function");
}
void f_0000d790(X86Cpu& c) {
    X86_TICK(c, 22);
    // 00d790  pop ecx
    X86_AT(c, 0xd790u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd790u, "ran off the end of a function");
}
void f_0000d791(X86Cpu& c) {
    X86_TICK(c, 18);
    // 00d791  pop eax
    X86_AT(c, 0xd791u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd791u, "ran off the end of a function");
}
void f_0000d792(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00d792  pop edx
    X86_AT(c, 0xd792u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd792u, "ran off the end of a function");
}
void f_0000d793(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00d793  ret 
    X86_AT(c, 0xd793u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd793u, "ran off the end of a function");
}
void f_0000d794(X86Cpu& c) {
    X86_TICK(c, 16);
    // 00d794  mov esi, edx
    X86_AT(c, 0xd794u);
    c.r[6] = c.r[2];
    // 00d796  mov edi, eax
    X86_AT(c, 0xd796u);
    c.r[7] = c.r[0];
    // 00d798  cmp byte ptr gs:[ebp + 0x466], 0
    X86_AT(c, 0xd798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x466u))), 0x0u, 0, 1);
    // 00d7a0  jg 0xd896
    X86_AT(c, 0xd7a0u);
    if (x86_cc(c, 15)) { goto L_d896; }
    X86_TICK(c, 32);
    // 00d7a6  inc di
    X86_AT(c, 0xd7a6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
    // 00d7a8  mov eax, dword ptr gs:[ebp + 0x468]
    X86_AT(c, 0xd7a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u)));
    // 00d7af  add dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xd7afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d7b6  adc dword ptr gs:[ebp + 0x448], 0
    X86_AT(c, 0xd7b6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d7be  cmp byte ptr gs:[ebp + 0x441], 0
    X86_AT(c, 0xd7beu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x441u))), 0x0u, 0, 1);
    // 00d7c6  jl 0xd822
    X86_AT(c, 0xd7c6u);
    if (x86_cc(c, 12)) { goto L_d822; }
    X86_TICK(c, 68);
    // 00d7c8  dec si
    X86_AT(c, 0xd7c8u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d7ca  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd7cau);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 00d7d1  mov edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd7d1u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 00d7d8  sub eax, dword ptr gs:[ebp + 0x46c]
    X86_AT(c, 0xd7d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu))), 0, 4); }
    // 00d7df  sbb edx, 0
    X86_AT(c, 0xd7dfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x0u, c.fl & 1, 4); }
    // 00d7e2  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xd7e2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00d7e9  mov dword ptr gs:[ebp + 0x450], edx
    X86_AT(c, 0xd7e9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), c.r[2]);
    // 00d7f0  sub dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd7f0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d7f7  sbb dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd7f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d7fe  sub dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd7feu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d805  sbb dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd805u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d80c  mov eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd80cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)));
    // 00d813  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd813u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d81a  adc dword ptr gs:[ebp + 0x464], 0
    X86_AT(c, 0xd81au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
L_d822:
    X86_TICK(c, 61);
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d896:
    X86_TICK(c, 7);
    // 00d896  dec si
    X86_AT(c, 0xd896u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d898  jns 0xd8ad
    X86_AT(c, 0xd898u);
    if (x86_cc(c, 9)) { goto L_d8ad; }
    X86_TICK(c, 12);
    // 00d89a  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd89au);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d8a2  jbe 0xd8a8
    X86_AT(c, 0xd8a2u);
    if (x86_cc(c, 6)) { goto L_d8a8; }
    X86_TICK(c, 4);
    // 00d8a4  inc si
    X86_AT(c, 0xd8a4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d8a6  inc di
    X86_AT(c, 0xd8a6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
L_d8a8:
    X86_TICK(c, 7);
    // 00d8a8  jmp 0xd937
    X86_AT(c, 0xd8a8u);
    goto L_d937;
L_d8ad:
    X86_TICK(c, 30);
    // 00d8ad  mov eax, dword ptr gs:[ebp + 0x46c]
    X86_AT(c, 0xd8adu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu)));
    // 00d8b4  sub dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xd8b4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d8bb  sbb dword ptr gs:[ebp + 0x450], 0
    X86_AT(c, 0xd8bbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d8c3  cmp byte ptr gs:[ebp + 0x466], 0
    X86_AT(c, 0xd8c3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x466u))), 0x0u, 0, 1);
    // 00d8cb  jge 0xd903
    X86_AT(c, 0xd8cbu);
    if (x86_cc(c, 13)) { goto L_d903; }
    X86_TICK(c, 36);
    // 00d8cd  inc di
    X86_AT(c, 0xd8cdu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
    // 00d8cf  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd8cfu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d8d6  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd8d6u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d8dd  add eax, dword ptr gs:[ebp + 0x468]
    X86_AT(c, 0xd8ddu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u))), 0, 4); }
    // 00d8e4  adc edx, 0
    X86_AT(c, 0xd8e4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d8e7  mov dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xd8e7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[0]);
    // 00d8ee  mov dword ptr gs:[ebp + 0x448], edx
    X86_AT(c, 0xd8eeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), c.r[2]);
    // 00d8f5  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd8f5u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d8fc  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd8fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
L_d903:
    X86_TICK(c, 32);
    // 00d903  mov eax, dword ptr gs:[ebp + 0x460]
    X86_AT(c, 0xd903u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)));
    // 00d90a  mov edx, dword ptr gs:[ebp + 0x464]
    X86_AT(c, 0xd90au);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)));
    // 00d911  sub eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd911u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu))), 0, 4); }
    // 00d918  sbb edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd918u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u))), c.fl & 1, 4); }
    // 00d91f  add eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd91fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))), 0, 4); }
    // 00d926  adc edx, 0
    X86_AT(c, 0xd926u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d929  mov dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd929u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)), c.r[0]);
    // 00d930  mov dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd930u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[2]);
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd794u, "ran off the end of a function");
}
void f_0000d796(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00d796  mov edi, eax
    X86_AT(c, 0xd796u);
    c.r[7] = c.r[0];
    // 00d798  cmp byte ptr gs:[ebp + 0x466], 0
    X86_AT(c, 0xd798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x466u))), 0x0u, 0, 1);
    // 00d7a0  jg 0xd896
    X86_AT(c, 0xd7a0u);
    if (x86_cc(c, 15)) { goto L_d896; }
    X86_TICK(c, 32);
    // 00d7a6  inc di
    X86_AT(c, 0xd7a6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
    // 00d7a8  mov eax, dword ptr gs:[ebp + 0x468]
    X86_AT(c, 0xd7a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u)));
    // 00d7af  add dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xd7afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d7b6  adc dword ptr gs:[ebp + 0x448], 0
    X86_AT(c, 0xd7b6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d7be  cmp byte ptr gs:[ebp + 0x441], 0
    X86_AT(c, 0xd7beu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x441u))), 0x0u, 0, 1);
    // 00d7c6  jl 0xd822
    X86_AT(c, 0xd7c6u);
    if (x86_cc(c, 12)) { goto L_d822; }
    X86_TICK(c, 68);
    // 00d7c8  dec si
    X86_AT(c, 0xd7c8u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d7ca  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd7cau);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 00d7d1  mov edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd7d1u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 00d7d8  sub eax, dword ptr gs:[ebp + 0x46c]
    X86_AT(c, 0xd7d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu))), 0, 4); }
    // 00d7df  sbb edx, 0
    X86_AT(c, 0xd7dfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x0u, c.fl & 1, 4); }
    // 00d7e2  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xd7e2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00d7e9  mov dword ptr gs:[ebp + 0x450], edx
    X86_AT(c, 0xd7e9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), c.r[2]);
    // 00d7f0  sub dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd7f0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d7f7  sbb dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd7f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d7fe  sub dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd7feu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d805  sbb dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd805u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d80c  mov eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd80cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)));
    // 00d813  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd813u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d81a  adc dword ptr gs:[ebp + 0x464], 0
    X86_AT(c, 0xd81au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
L_d822:
    X86_TICK(c, 61);
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d896:
    X86_TICK(c, 7);
    // 00d896  dec si
    X86_AT(c, 0xd896u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d898  jns 0xd8ad
    X86_AT(c, 0xd898u);
    if (x86_cc(c, 9)) { goto L_d8ad; }
    X86_TICK(c, 12);
    // 00d89a  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd89au);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d8a2  jbe 0xd8a8
    X86_AT(c, 0xd8a2u);
    if (x86_cc(c, 6)) { goto L_d8a8; }
    X86_TICK(c, 4);
    // 00d8a4  inc si
    X86_AT(c, 0xd8a4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d8a6  inc di
    X86_AT(c, 0xd8a6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
L_d8a8:
    X86_TICK(c, 7);
    // 00d8a8  jmp 0xd937
    X86_AT(c, 0xd8a8u);
    goto L_d937;
L_d8ad:
    X86_TICK(c, 30);
    // 00d8ad  mov eax, dword ptr gs:[ebp + 0x46c]
    X86_AT(c, 0xd8adu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu)));
    // 00d8b4  sub dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xd8b4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d8bb  sbb dword ptr gs:[ebp + 0x450], 0
    X86_AT(c, 0xd8bbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d8c3  cmp byte ptr gs:[ebp + 0x466], 0
    X86_AT(c, 0xd8c3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x466u))), 0x0u, 0, 1);
    // 00d8cb  jge 0xd903
    X86_AT(c, 0xd8cbu);
    if (x86_cc(c, 13)) { goto L_d903; }
    X86_TICK(c, 36);
    // 00d8cd  inc di
    X86_AT(c, 0xd8cdu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
    // 00d8cf  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd8cfu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d8d6  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd8d6u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d8dd  add eax, dword ptr gs:[ebp + 0x468]
    X86_AT(c, 0xd8ddu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u))), 0, 4); }
    // 00d8e4  adc edx, 0
    X86_AT(c, 0xd8e4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d8e7  mov dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xd8e7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[0]);
    // 00d8ee  mov dword ptr gs:[ebp + 0x448], edx
    X86_AT(c, 0xd8eeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), c.r[2]);
    // 00d8f5  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd8f5u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d8fc  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd8fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
L_d903:
    X86_TICK(c, 32);
    // 00d903  mov eax, dword ptr gs:[ebp + 0x460]
    X86_AT(c, 0xd903u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)));
    // 00d90a  mov edx, dword ptr gs:[ebp + 0x464]
    X86_AT(c, 0xd90au);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)));
    // 00d911  sub eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd911u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu))), 0, 4); }
    // 00d918  sbb edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd918u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u))), c.fl & 1, 4); }
    // 00d91f  add eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd91fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))), 0, 4); }
    // 00d926  adc edx, 0
    X86_AT(c, 0xd926u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d929  mov dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd929u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)), c.r[0]);
    // 00d930  mov dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd930u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[2]);
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd796u, "ran off the end of a function");
}
void f_0000d798(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d798  cmp byte ptr gs:[ebp + 0x466], 0
    X86_AT(c, 0xd798u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x466u))), 0x0u, 0, 1);
    // 00d7a0  jg 0xd896
    X86_AT(c, 0xd7a0u);
    if (x86_cc(c, 15)) { goto L_d896; }
    X86_TICK(c, 32);
    // 00d7a6  inc di
    X86_AT(c, 0xd7a6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
    // 00d7a8  mov eax, dword ptr gs:[ebp + 0x468]
    X86_AT(c, 0xd7a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u)));
    // 00d7af  add dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xd7afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d7b6  adc dword ptr gs:[ebp + 0x448], 0
    X86_AT(c, 0xd7b6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d7be  cmp byte ptr gs:[ebp + 0x441], 0
    X86_AT(c, 0xd7beu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x441u))), 0x0u, 0, 1);
    // 00d7c6  jl 0xd822
    X86_AT(c, 0xd7c6u);
    if (x86_cc(c, 12)) { goto L_d822; }
    X86_TICK(c, 68);
    // 00d7c8  dec si
    X86_AT(c, 0xd7c8u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d7ca  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd7cau);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 00d7d1  mov edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd7d1u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 00d7d8  sub eax, dword ptr gs:[ebp + 0x46c]
    X86_AT(c, 0xd7d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu))), 0, 4); }
    // 00d7df  sbb edx, 0
    X86_AT(c, 0xd7dfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x0u, c.fl & 1, 4); }
    // 00d7e2  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xd7e2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00d7e9  mov dword ptr gs:[ebp + 0x450], edx
    X86_AT(c, 0xd7e9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), c.r[2]);
    // 00d7f0  sub dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd7f0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d7f7  sbb dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd7f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d7fe  sub dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd7feu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d805  sbb dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd805u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d80c  mov eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd80cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)));
    // 00d813  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd813u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d81a  adc dword ptr gs:[ebp + 0x464], 0
    X86_AT(c, 0xd81au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
L_d822:
    X86_TICK(c, 61);
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d896:
    X86_TICK(c, 7);
    // 00d896  dec si
    X86_AT(c, 0xd896u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d898  jns 0xd8ad
    X86_AT(c, 0xd898u);
    if (x86_cc(c, 9)) { goto L_d8ad; }
    X86_TICK(c, 12);
    // 00d89a  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd89au);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d8a2  jbe 0xd8a8
    X86_AT(c, 0xd8a2u);
    if (x86_cc(c, 6)) { goto L_d8a8; }
    X86_TICK(c, 4);
    // 00d8a4  inc si
    X86_AT(c, 0xd8a4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d8a6  inc di
    X86_AT(c, 0xd8a6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
L_d8a8:
    X86_TICK(c, 7);
    // 00d8a8  jmp 0xd937
    X86_AT(c, 0xd8a8u);
    goto L_d937;
L_d8ad:
    X86_TICK(c, 30);
    // 00d8ad  mov eax, dword ptr gs:[ebp + 0x46c]
    X86_AT(c, 0xd8adu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu)));
    // 00d8b4  sub dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xd8b4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d8bb  sbb dword ptr gs:[ebp + 0x450], 0
    X86_AT(c, 0xd8bbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d8c3  cmp byte ptr gs:[ebp + 0x466], 0
    X86_AT(c, 0xd8c3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x466u))), 0x0u, 0, 1);
    // 00d8cb  jge 0xd903
    X86_AT(c, 0xd8cbu);
    if (x86_cc(c, 13)) { goto L_d903; }
    X86_TICK(c, 36);
    // 00d8cd  inc di
    X86_AT(c, 0xd8cdu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
    // 00d8cf  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd8cfu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d8d6  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd8d6u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d8dd  add eax, dword ptr gs:[ebp + 0x468]
    X86_AT(c, 0xd8ddu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u))), 0, 4); }
    // 00d8e4  adc edx, 0
    X86_AT(c, 0xd8e4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d8e7  mov dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xd8e7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[0]);
    // 00d8ee  mov dword ptr gs:[ebp + 0x448], edx
    X86_AT(c, 0xd8eeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), c.r[2]);
    // 00d8f5  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd8f5u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d8fc  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd8fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
L_d903:
    X86_TICK(c, 32);
    // 00d903  mov eax, dword ptr gs:[ebp + 0x460]
    X86_AT(c, 0xd903u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)));
    // 00d90a  mov edx, dword ptr gs:[ebp + 0x464]
    X86_AT(c, 0xd90au);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)));
    // 00d911  sub eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd911u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu))), 0, 4); }
    // 00d918  sbb edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd918u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u))), c.fl & 1, 4); }
    // 00d91f  add eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd91fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))), 0, 4); }
    // 00d926  adc edx, 0
    X86_AT(c, 0xd926u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d929  mov dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd929u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)), c.r[0]);
    // 00d930  mov dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd930u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[2]);
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd798u, "ran off the end of a function");
}
void f_0000d7a0(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d7a0  jg 0xd896
    X86_AT(c, 0xd7a0u);
    if (x86_cc(c, 15)) { goto L_d896; }
    X86_TICK(c, 32);
    // 00d7a6  inc di
    X86_AT(c, 0xd7a6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
    // 00d7a8  mov eax, dword ptr gs:[ebp + 0x468]
    X86_AT(c, 0xd7a8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u)));
    // 00d7af  add dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xd7afu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d7b6  adc dword ptr gs:[ebp + 0x448], 0
    X86_AT(c, 0xd7b6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d7be  cmp byte ptr gs:[ebp + 0x441], 0
    X86_AT(c, 0xd7beu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x441u))), 0x0u, 0, 1);
    // 00d7c6  jl 0xd822
    X86_AT(c, 0xd7c6u);
    if (x86_cc(c, 12)) { goto L_d822; }
    X86_TICK(c, 68);
    // 00d7c8  dec si
    X86_AT(c, 0xd7c8u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d7ca  mov eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd7cau);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)));
    // 00d7d1  mov edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd7d1u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)));
    // 00d7d8  sub eax, dword ptr gs:[ebp + 0x46c]
    X86_AT(c, 0xd7d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu))), 0, 4); }
    // 00d7df  sbb edx, 0
    X86_AT(c, 0xd7dfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x0u, c.fl & 1, 4); }
    // 00d7e2  mov dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xd7e2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)), c.r[0]);
    // 00d7e9  mov dword ptr gs:[ebp + 0x450], edx
    X86_AT(c, 0xd7e9u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)), c.r[2]);
    // 00d7f0  sub dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd7f0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d7f7  sbb dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd7f7u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d7fe  sub dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd7feu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d805  sbb dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd805u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d80c  mov eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd80cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu)));
    // 00d813  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd813u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d81a  adc dword ptr gs:[ebp + 0x464], 0
    X86_AT(c, 0xd81au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
L_d822:
    X86_TICK(c, 61);
    // 00d822  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd822u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d829  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd829u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d830  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd830u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d837  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd837u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d83e  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd83eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d845  adc dword ptr gs:[ebp + 0x440], edx
    X86_AT(c, 0xd845u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
    // 00d84c  mov eax, dword ptr gs:[ebp + 0x458]
    X86_AT(c, 0xd84cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x458u)));
    // 00d853  add dword ptr gs:[ebp + 0x43c], eax
    X86_AT(c, 0xd853u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x43Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d85a  adc dword ptr gs:[ebp + 0x440], 0
    X86_AT(c, 0xd85au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x440u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d862  or si, si
    X86_AT(c, 0xd862u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d865  jne 0xd878
    X86_AT(c, 0xd865u);
    if (x86_cc(c, 5)) { goto L_d878; }
    X86_TICK(c, 12);
    // 00d867  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd867u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d86f  jae 0xd878
    X86_AT(c, 0xd86fu);
    if (x86_cc(c, 3)) { goto L_d878; }
    X86_TICK(c, 9);
    // 00d871  dec si
    X86_AT(c, 0xd871u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d873  jmp 0xd937
    X86_AT(c, 0xd873u);
    goto L_d937;
L_d878:
    X86_TICK(c, 7);
    // 00d878  test si, si
    X86_AT(c, 0xd878u);
    (void)x86_logic(c, (c.r[6] & 0xFFFFu) & (c.r[6] & 0xFFFFu), 2);
    // 00d87b  jge 0xd937
    X86_AT(c, 0xd87bu);
    if (x86_cc(c, 13)) { goto L_d937; }
    X86_TICK(c, 12);
    // 00d881  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd881u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d889  jbe 0xd937
    X86_AT(c, 0xd889u);
    if (x86_cc(c, 6)) { goto L_d937; }
    X86_TICK(c, 9);
    // 00d88f  inc si
    X86_AT(c, 0xd88fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d891  jmp 0xd937
    X86_AT(c, 0xd891u);
    goto L_d937;
L_d896:
    X86_TICK(c, 7);
    // 00d896  dec si
    X86_AT(c, 0xd896u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_dec(c, v, 2)); }
    // 00d898  jns 0xd8ad
    X86_AT(c, 0xd898u);
    if (x86_cc(c, 9)) { goto L_d8ad; }
    X86_TICK(c, 12);
    // 00d89a  cmp word ptr gs:[ebp + 0x40e], di
    X86_AT(c, 0xd89au);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x40Eu))), (c.r[7] & 0xFFFFu), 0, 2);
    // 00d8a2  jbe 0xd8a8
    X86_AT(c, 0xd8a2u);
    if (x86_cc(c, 6)) { goto L_d8a8; }
    X86_TICK(c, 4);
    // 00d8a4  inc si
    X86_AT(c, 0xd8a4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 00d8a6  inc di
    X86_AT(c, 0xd8a6u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
L_d8a8:
    X86_TICK(c, 7);
    // 00d8a8  jmp 0xd937
    X86_AT(c, 0xd8a8u);
    goto L_d937;
L_d8ad:
    X86_TICK(c, 30);
    // 00d8ad  mov eax, dword ptr gs:[ebp + 0x46c]
    X86_AT(c, 0xd8adu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu)));
    // 00d8b4  sub dword ptr gs:[ebp + 0x44c], eax
    X86_AT(c, 0xd8b4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 00d8bb  sbb dword ptr gs:[ebp + 0x450], 0
    X86_AT(c, 0xd8bbu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x450u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x0u, c.fl & 1, 4)); }
    // 00d8c3  cmp byte ptr gs:[ebp + 0x466], 0
    X86_AT(c, 0xd8c3u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x466u))), 0x0u, 0, 1);
    // 00d8cb  jge 0xd903
    X86_AT(c, 0xd8cbu);
    if (x86_cc(c, 13)) { goto L_d903; }
    X86_TICK(c, 36);
    // 00d8cd  inc di
    X86_AT(c, 0xd8cdu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_inc(c, v, 2)); }
    // 00d8cf  mov eax, dword ptr gs:[ebp + 0x444]
    X86_AT(c, 0xd8cfu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)));
    // 00d8d6  mov edx, dword ptr gs:[ebp + 0x448]
    X86_AT(c, 0xd8d6u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)));
    // 00d8dd  add eax, dword ptr gs:[ebp + 0x468]
    X86_AT(c, 0xd8ddu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u))), 0, 4); }
    // 00d8e4  adc edx, 0
    X86_AT(c, 0xd8e4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d8e7  mov dword ptr gs:[ebp + 0x444], eax
    X86_AT(c, 0xd8e7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x444u)), c.r[0]);
    // 00d8ee  mov dword ptr gs:[ebp + 0x448], edx
    X86_AT(c, 0xd8eeu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), c.r[2]);
    // 00d8f5  add dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd8f5u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 00d8fc  adc dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd8fcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], c.fl & 1, 4)); }
L_d903:
    X86_TICK(c, 32);
    // 00d903  mov eax, dword ptr gs:[ebp + 0x460]
    X86_AT(c, 0xd903u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)));
    // 00d90a  mov edx, dword ptr gs:[ebp + 0x464]
    X86_AT(c, 0xd90au);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)));
    // 00d911  sub eax, dword ptr gs:[ebp + 0x44c]
    X86_AT(c, 0xd911u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Cu))), 0, 4); }
    // 00d918  sbb edx, dword ptr gs:[ebp + 0x450]
    X86_AT(c, 0xd918u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x450u))), c.fl & 1, 4); }
    // 00d91f  add eax, dword ptr gs:[ebp + 0x45c]
    X86_AT(c, 0xd91fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x45Cu))), 0, 4); }
    // 00d926  adc edx, 0
    X86_AT(c, 0xd926u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 00d929  mov dword ptr gs:[ebp + 0x460], eax
    X86_AT(c, 0xd929u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x460u)), c.r[0]);
    // 00d930  mov dword ptr gs:[ebp + 0x464], edx
    X86_AT(c, 0xd930u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u)), c.r[2]);
L_d937:
    X86_TICK(c, 14);
    // 00d937  mov edx, esi
    X86_AT(c, 0xd937u);
    c.r[2] = c.r[6];
    // 00d939  mov eax, edi
    X86_AT(c, 0xd939u);
    c.r[0] = c.r[7];
    // 00d93b  ret 
    X86_AT(c, 0xd93bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd7a0u, "ran off the end of a function");
}
}
